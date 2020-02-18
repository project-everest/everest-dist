/* 
  This file was generated by KreMLin <https://github.com/FStarLang/kremlin>
  KreMLin invocation: D:\everest\kremlin\_build\src\Kremlin.native -minimal -add-include "kremlib.h" -fnoanonymous-unions -warn-error -9-7-6@4-14-15 -fsopts --debug,yes -verbose -library EverCrypt,EverCrypt.*,Hacl.*,Interop_assumptions,Check_sha_stdcall,Sha_update_bytes_stdcall,Check_aesni_stdcall -drop MonotoneMap -drop MonotoneMapNonDep -drop FStar.Tactics.\* -drop FStar.Tactics -drop Crypto.AEAD.\* -drop Crypto.HKDF -drop Crypto.HMAC -add-include "hacks.h" -add-include "kremlin/internal/compat.h" -bundle LowParse.\*,LowParseWrappers[rename=LowParse] -bundle Format.\* -bundle EverCrypt=EverCrypt,EverCrypt.\* -bundle FStar.\*,LowStar.\*,C,C.\*[rename=Mitls_Kremlib] -bundle Parsers.\* -bundle Spec.\* -bundle Meta.\* -bundle Lib.*[rename=Hacl_Lib] -bundle Hacl.\* -bundle KDF.\*,KDF,Idx,IV,Pkg,Pkg.\*[rename=Pkg] -bundle TLSConstants=TLSConstants,QD.TLS_protocolVersion,List.Helpers -bundle Hashing=Hashing.Spec,Hashing,Hashing.CRF,HMAC,HKDF,HMAC.UFCMA -bundle Old.Handshake=Old.HMAC.UFCMA,Old.Epochs,Old.KeySchedule,Old.Handshake -bundle StatefulLHAE=AEAD_GCM,LHAEPlain,StatefulPlain,StatefulLHAE -bundle StreamAE=StreamPlain,StreamAE -bundle CommonDH=TLS.Curve25519,DHGroup,ECGroup,CommonDH -bundle Content=Content,DataStream -bundle Record=Record,StAE,Transport,StreamDeltas -bundle PMS=PMS,RSAKey,TLSPRF -bundle Crypto.Plain=Buffer.Utils,Crypto.Indexing,Crypto.Plain,Crypto.Symmetric.Bytes -bundle Flags=DebugFlags,Flags,Flag,TLSInfoFlags -bundle Vale.Stdcalls.*,Vale.Interop,Vale.Interop.*,Vale.Wrapper.X64.*[rename=Vale] -bundle Vale.Inline.X64.*[rename=Vale_Inline] -bundle Vale.*[rename=Unused2] -ldopts -L,D:/everest/MLCrypto/openssl,-lcrypto,-lssl extract/Kremlin/FStar_Pervasives_Native.krml extract/Kremlin/FStar_Pervasives.krml extract/Kremlin/FStar_Squash.krml extract/Kremlin/FStar_Classical.krml extract/Kremlin/FStar_Preorder.krml extract/Kremlin/FStar_Calc.krml extract/Kremlin/FStar_Mul.krml extract/Kremlin/FStar_Math_Lib.krml extract/Kremlin/FStar_Math_Lemmas.krml extract/Kremlin/FStar_StrongExcludedMiddle.krml extract/Kremlin/FStar_FunctionalExtensionality.krml extract/Kremlin/FStar_List_Tot_Base.krml extract/Kremlin/FStar_List_Tot_Properties.krml extract/Kremlin/FStar_List_Tot.krml extract/Kremlin/FStar_Seq_Base.krml extract/Kremlin/FStar_Seq_Properties.krml extract/Kremlin/FStar_Seq.krml extract/Kremlin/FStar_BitVector.krml extract/Kremlin/FStar_UInt.krml extract/Kremlin/FStar_UInt32.krml extract/Kremlin/FStar_UInt8.krml extract/Kremlin/FStar_Exn.krml extract/Kremlin/FStar_Set.krml extract/Kremlin/FStar_Monotonic_Witnessed.krml extract/Kremlin/FStar_Ghost.krml extract/Kremlin/FStar_ErasedLogic.krml extract/Kremlin/FStar_PropositionalExtensionality.krml extract/Kremlin/FStar_PredicateExtensionality.krml extract/Kremlin/FStar_TSet.krml extract/Kremlin/FStar_Monotonic_Heap.krml extract/Kremlin/FStar_Heap.krml extract/Kremlin/FStar_ST.krml extract/Kremlin/FStar_All.krml extract/Kremlin/Lib_LoopCombinators.krml extract/Kremlin/FStar_Int.krml extract/Kremlin/FStar_Int64.krml extract/Kremlin/FStar_Int63.krml extract/Kremlin/FStar_Int32.krml extract/Kremlin/FStar_Int16.krml extract/Kremlin/FStar_Int8.krml extract/Kremlin/FStar_UInt64.krml extract/Kremlin/FStar_UInt63.krml extract/Kremlin/FStar_UInt16.krml extract/Kremlin/FStar_Int_Cast.krml extract/Kremlin/FStar_UInt128.krml extract/Kremlin/FStar_Int_Cast_Full.krml extract/Kremlin/FStar_Int128.krml extract/Kremlin/Lib_IntTypes.krml extract/Kremlin/Lib_RawIntTypes.krml extract/Kremlin/Lib_Sequence.krml extract/Kremlin/Lib_ByteSequence.krml extract/Kremlin/Spec_Chacha20.krml extract/Kremlin/Meta_Attribute.krml extract/Kremlin/FStar_Map.krml extract/Kremlin/FStar_Monotonic_HyperHeap.krml extract/Kremlin/FStar_Monotonic_HyperStack.krml extract/Kremlin/FStar_HyperStack.krml extract/Kremlin/FStar_HyperStack_ST.krml extract/Kremlin/FStar_Universe.krml extract/Kremlin/FStar_GSet.krml extract/Kremlin/FStar_ModifiesGen.krml extract/Kremlin/FStar_Range.krml extract/Kremlin/FStar_Reflection_Types.krml extract/Kremlin/FStar_Tactics_Types.krml extract/Kremlin/FStar_Tactics_Result.krml extract/Kremlin/FStar_Tactics_Effect.krml extract/Kremlin/FStar_Reflection_Data.krml extract/Kremlin/FStar_Tactics_Builtins.krml extract/Kremlin/FStar_Reflection_Const.krml extract/Kremlin/FStar_Char.krml extract/Kremlin/FStar_List.krml extract/Kremlin/FStar_String.krml extract/Kremlin/FStar_Order.krml extract/Kremlin/FStar_Reflection_Basic.krml extract/Kremlin/FStar_Reflection_Derived.krml extract/Kremlin/FStar_Reflection_Derived_Lemmas.krml extract/Kremlin/FStar_Reflection.krml extract/Kremlin/FStar_Tactics_SyntaxHelpers.krml extract/Kremlin/FStar_Tactics_Util.krml extract/Kremlin/FStar_Reflection_Formula.krml extract/Kremlin/FStar_Tactics_Derived.krml extract/Kremlin/FStar_Tactics_Logic.krml extract/Kremlin/FStar_Tactics.krml extract/Kremlin/FStar_BigOps.krml extract/Kremlin/LowStar_Monotonic_Buffer.krml extract/Kremlin/LowStar_Buffer.krml extract/Kremlin/LowStar_BufferOps.krml extract/Kremlin/Spec_Loops.krml extract/Kremlin/C_Loops.krml extract/Kremlin/Lib_Loops.krml extract/Kremlin/FStar_Endianness.krml extract/Kremlin/LowStar_Endianness.krml extract/Kremlin/LowStar_ImmutableBuffer.krml extract/Kremlin/Lib_Buffer.krml extract/Kremlin/Lib_ByteBuffer.krml extract/Kremlin/FStar_HyperStack_All.krml extract/Kremlin/Lib_IntVector_Intrinsics.krml extract/Kremlin/Spec_GaloisField.krml extract/Kremlin/Spec_AES.krml extract/Kremlin/Lib_IntVector.krml extract/Kremlin/Hacl_Spec_Chacha20_Vec.krml extract/Kremlin/Hacl_Spec_Chacha20_Lemmas.krml extract/Kremlin/Lib_Sequence_Lemmas.krml extract/Kremlin/Hacl_Spec_Chacha20_Equiv.krml extract/Kremlin/Hacl_Impl_Chacha20_Core32xN.krml extract/Kremlin/Hacl_Impl_Chacha20_Vec.krml extract/Kremlin/Vale_Lib_Seqs_s.krml extract/Kremlin/Vale_Def_Words_s.krml extract/Kremlin/Vale_Def_Words_Four_s.krml extract/Kremlin/Vale_Def_Words_Two_s.krml extract/Kremlin/Vale_Def_Words_Seq_s.krml extract/Kremlin/Vale_Def_Opaque_s.krml extract/Kremlin/Vale_Def_Types_s.krml extract/Kremlin/Vale_X64_Machine_s.krml extract/Kremlin/Vale_Lib_Map16.krml extract/Kremlin/Vale_Def_Prop_s.krml extract/Kremlin/Vale_X64_Flags.krml extract/Kremlin/Vale_X64_CPU_Features_s.krml extract/Kremlin/Vale_Curve25519_Fast_lemmas_internal.krml extract/Kremlin/Vale_Lib_Meta.krml extract/Kremlin/Vale_Def_Words_Two.krml extract/Kremlin/Vale_Lib_Seqs.krml extract/Kremlin/Vale_Def_TypesNative_s.krml extract/Kremlin/Vale_Arch_TypesNative.krml extract/Kremlin/Vale_Def_Words_Seq.krml extract/Kremlin/Vale_Arch_Types.krml extract/Kremlin/Vale_Curve25519_Fast_defs.krml extract/Kremlin/FStar_Algebra_CommMonoid.krml extract/Kremlin/FStar_Tactics_CanonCommSemiring.krml extract/Kremlin/Vale_Curve25519_FastUtil_helpers.krml extract/Kremlin/Vale_Curve25519_FastHybrid_helpers.krml extract/Kremlin/Vale_Curve25519_Fast_lemmas_external.krml extract/Kremlin/Vale_X64_Regs.krml extract/Kremlin/FStar_Float.krml extract/Kremlin/FStar_IO.krml extract/Kremlin/Vale_Def_PossiblyMonad.krml extract/Kremlin/LowStar_BufferView_Down.krml extract/Kremlin/LowStar_BufferView_Up.krml extract/Kremlin/Vale_Interop_Views.krml extract/Kremlin/FStar_Option.krml extract/Kremlin/Vale_Lib_Set.krml extract/Kremlin/Vale_X64_Instruction_s.krml extract/Kremlin/Vale_X64_Bytes_Code_s.krml extract/Kremlin/Vale_AES_AES_s.krml extract/Kremlin/Vale_Math_Poly2_Defs_s.krml extract/Kremlin/Vale_Math_Poly2_s.krml extract/Kremlin/Vale_Math_Poly2_Bits_s.krml extract/Kremlin/Spec_Hash_Definitions.krml extract/Kremlin/Spec_Hash_Lemmas0.krml extract/Kremlin/Spec_Hash_PadFinish.krml extract/Kremlin/Spec_SHA2_Constants.krml extract/Kremlin/Spec_SHA2.krml extract/Kremlin/Vale_X64_CryptoInstructions_s.krml extract/Kremlin/Vale_X64_Instructions_s.krml extract/Kremlin/Vale_Arch_HeapTypes_s.krml extract/Kremlin/Vale_Interop_Types.krml extract/Kremlin/Vale_Arch_MachineHeap_s.krml extract/Kremlin/Vale_Interop_Heap_s.krml extract/Kremlin/LowStar_Modifies.krml extract/Kremlin/LowStar_ModifiesPat.krml extract/Kremlin/LowStar_BufferView.krml extract/Kremlin/Vale_Lib_BufferViewHelpers.krml extract/Kremlin/Vale_Interop.krml extract/Kremlin/Vale_Arch_HeapImpl.krml extract/Kremlin/Vale_Arch_Heap.krml extract/Kremlin/Vale_X64_Machine_Semantics_s.krml extract/Kremlin/Vale_Interop_Base.krml extract/Kremlin/Vale_X64_Memory.krml extract/Kremlin/Vale_Arch_MachineHeap.krml extract/Kremlin/Vale_X64_Stack_i.krml extract/Kremlin/Vale_X64_Stack_Sems.krml extract/Kremlin/Vale_X64_BufferViewStore.krml extract/Kremlin/Vale_X64_Memory_Sems.krml extract/Kremlin/Vale_X64_State.krml extract/Kremlin/Vale_X64_StateLemmas.krml extract/Kremlin/Vale_X64_Lemmas.krml extract/Kremlin/Vale_X64_Print_s.krml extract/Kremlin/Vale_X64_Decls.krml extract/Kremlin/Vale_X64_QuickCode.krml extract/Kremlin/Vale_X64_QuickCodes.krml extract/Kremlin/Vale_X64_Taint_Semantics.krml extract/Kremlin/Vale_X64_InsLemmas.krml extract/Kremlin/Vale_X64_InsBasic.krml extract/Kremlin/Vale_X64_InsMem.krml extract/Kremlin/Vale_X64_InsVector.krml extract/Kremlin/Vale_X64_InsStack.krml extract/Kremlin/Vale_Curve25519_X64_FastHybrid.krml extract/Kremlin/Vale_Bignum_Defs.krml extract/Kremlin/Vale_Bignum_X64.krml extract/Kremlin/Vale_Curve25519_FastSqr_helpers.krml extract/Kremlin/Vale_Curve25519_X64_FastSqr.krml extract/Kremlin/Vale_Curve25519_FastMul_helpers.krml extract/Kremlin/Vale_Curve25519_X64_FastMul.krml extract/Kremlin/Vale_Curve25519_X64_FastWide.krml extract/Kremlin/Vale_Curve25519_X64_FastUtil.krml extract/Kremlin/Vale_X64_MemoryAdapters.krml extract/Kremlin/Vale_Interop_Assumptions.krml extract/Kremlin/Vale_Interop_X64.krml extract/Kremlin/Vale_AsLowStar_ValeSig.krml extract/Kremlin/Vale_AsLowStar_LowStarSig.krml extract/Kremlin/Vale_AsLowStar_MemoryHelpers.krml extract/Kremlin/Vale_AsLowStar_Wrapper.krml extract/Kremlin/Vale_Stdcalls_X64_Fadd.krml extract/Kremlin/Vale_Wrapper_X64_Fadd.krml extract/Kremlin/Spec_SHA1.krml extract/Kremlin/Spec_MD5.krml extract/Kremlin/Spec_Agile_Hash.krml extract/Kremlin/Spec_Hash_Incremental.krml extract/Kremlin/Spec_Hash_Lemmas.krml extract/Kremlin/FStar_Kremlin_Endianness.krml extract/Kremlin/Hacl_Hash_Lemmas.krml extract/Kremlin/Hacl_Hash_Definitions.krml extract/Kremlin/Hacl_Hash_PadFinish.krml extract/Kremlin/Hacl_Hash_MD.krml extract/Kremlin/Spec_SHA2_Lemmas.krml extract/Kremlin/Vale_X64_Stack.krml extract/Kremlin/Vale_SHA_SHA_helpers.krml extract/Kremlin/Vale_X64_InsSha.krml extract/Kremlin/Vale_SHA_X64.krml extract/Kremlin/Vale_Stdcalls_X64_Sha.krml extract/Kremlin/FStar_BV.krml extract/Kremlin/FStar_Reflection_Arith.krml extract/Kremlin/FStar_Tactics_BV.krml extract/Kremlin/Vale_Lib_Bv_s.krml extract/Kremlin/Vale_Math_Bits.krml extract/Kremlin/Vale_Lib_Tactics.krml extract/Kremlin/Vale_Poly1305_Bitvectors.krml extract/Kremlin/Vale_Math_Lemmas_Int.krml extract/Kremlin/FStar_Tactics_Canon.krml extract/Kremlin/Vale_Poly1305_Spec_s.krml extract/Kremlin/Vale_Poly1305_Math.krml extract/Kremlin/Vale_Poly1305_Util.krml extract/Kremlin/Vale_Poly1305_X64.krml extract/Kremlin/Vale_Stdcalls_X64_Poly.krml extract/Kremlin/Vale_Wrapper_X64_Poly.krml extract/Kremlin/Vale_Arch_BufferFriend.krml extract/Kremlin/Vale_SHA_Simplify_Sha.krml extract/Kremlin/Vale_Wrapper_X64_Sha.krml extract/Kremlin/Hacl_Hash_Core_SHA2_Constants.krml extract/Kremlin/Hacl_Hash_Core_SHA2.krml extract/Kremlin/Hacl_Hash_SHA2.krml extract/Kremlin/Hacl_Hash_Core_SHA1.krml extract/Kremlin/Hacl_Hash_SHA1.krml extract/Kremlin/Hacl_Hash_Core_MD5.krml extract/Kremlin/Hacl_Hash_MD5.krml extract/Kremlin/C.krml extract/Kremlin/C_String.krml extract/Kremlin/C_Failure.krml extract/Kremlin/FStar_Int31.krml extract/Kremlin/FStar_UInt31.krml extract/Kremlin/FStar_Integers.krml extract/Kremlin/EverCrypt_StaticConfig.krml extract/Kremlin/EverCrypt_TargetConfig.krml extract/Kremlin/Vale_Lib_Basic.krml extract/Kremlin/Vale_Lib_X64_Cpuid.krml extract/Kremlin/Vale_Lib_X64_Cpuidstdcall.krml extract/Kremlin/Vale_Stdcalls_X64_Cpuid.krml extract/Kremlin/Vale_Wrapper_X64_Cpuid.krml extract/Kremlin/EverCrypt_AutoConfig2.krml extract/Kremlin/EverCrypt_Helpers.krml extract/Kremlin/EverCrypt_Hash.krml extract/Kremlin/Spec_Agile_HMAC.krml extract/Kremlin/Hacl_HMAC.krml extract/Kremlin/EverCrypt_HMAC.krml extract/Kremlin/Declassify.krml extract/Kremlin/FStar_Bytes.krml extract/Kremlin/Hashing_Spec.krml extract/Kremlin/LowParse_Bytes32.krml extract/Kremlin/LowParse_Bytes.krml extract/Kremlin/LowParse_Spec_Base.krml extract/Kremlin/LowParse_SLow_Base.krml extract/Kremlin/LowParse_Spec_Option.krml extract/Kremlin/LowParse_SLow_Option.krml extract/Kremlin/LowParse_Spec_Combinators.krml extract/Kremlin/LowParse_Spec_IfThenElse.krml extract/Kremlin/LowParse_SLow_Combinators.krml extract/Kremlin/LowParse_Spec_List.krml extract/Kremlin/LowParse_SLow_List.krml extract/Kremlin/Spec_Curve25519_Lemmas.krml extract/Kremlin/Spec_Curve25519.krml extract/Kremlin/Hacl_Spec_Curve25519_AddAndDouble.krml extract/Kremlin/Hacl_Impl_Curve25519_Lemmas.krml extract/Kremlin/Hacl_Spec_Curve25519_Field64_Definition.krml extract/Kremlin/Hacl_Spec_Curve25519_Field64_Lemmas.krml extract/Kremlin/Hacl_Spec_Curve25519_Field64_Core.krml extract/Kremlin/Hacl_Spec_Curve25519_Field64.krml extract/Kremlin/Hacl_Spec_Curve25519_Field51_Definition.krml extract/Kremlin/Hacl_Spec_Curve25519_Field51_Lemmas.krml extract/Kremlin/Hacl_Spec_Curve25519_Field51.krml extract/Kremlin/Hacl_Impl_Curve25519_Fields_Core.krml extract/Kremlin/Hacl_Impl_Curve25519_Field64.krml extract/Kremlin/Hacl_Impl_Curve25519_Field51.krml extract/Kremlin/Hacl_Impl_Curve25519_Fields.krml extract/Kremlin/Hacl_Impl_Curve25519_AddAndDouble.krml extract/Kremlin/Spec_Poly1305.krml extract/Kremlin/Hacl_Spec_Poly1305_Vec.krml extract/Kremlin/Hacl_Spec_Poly1305_Field32xN.krml extract/Kremlin/Hacl_Poly1305_Field32xN_Lemmas.krml extract/Kremlin/Hacl_Impl_Poly1305_Lemmas.krml extract/Kremlin/Hacl_Spec_Poly1305_Field32xN_Lemmas.krml extract/Kremlin/Hacl_Impl_Poly1305_Field32xN.krml extract/Kremlin/Hacl_Spec_Poly1305_Lemmas.krml extract/Kremlin/Hacl_Spec_Poly1305_Equiv.krml extract/Kremlin/Hacl_Impl_Poly1305_Field32xN_256.krml extract/Kremlin/Hacl_Impl_Poly1305_Field32xN_128.krml extract/Kremlin/Hacl_Impl_Poly1305_Field32xN_32.krml extract/Kremlin/Hacl_Impl_Poly1305_Fields.krml extract/Kremlin/Hacl_Impl_Poly1305.krml extract/Kremlin/Spec_Chacha20Poly1305.krml extract/Kremlin/Hacl_Impl_Chacha20Poly1305_PolyCore.krml extract/Kremlin/Hacl_Impl_Chacha20Poly1305.krml extract/Kremlin/FStar_List_Pure_Base.krml extract/Kremlin/FStar_List_Pure_Properties.krml extract/Kremlin/FStar_List_Pure.krml extract/Kremlin/Meta_Interface.krml extract/Kremlin/Hacl_Meta_Chacha20Poly1305.krml extract/Kremlin/Hacl_Impl_Chacha20_Core32.krml extract/Kremlin/Hacl_Impl_Chacha20.krml extract/Kremlin/Hacl_Chacha20.krml extract/Kremlin/Hacl_Meta_Poly1305.krml extract/Kremlin/Hacl_Poly1305_32.krml extract/Kremlin/Hacl_Chacha20Poly1305_32.krml extract/Kremlin/FStar_Dyn.krml extract/Kremlin/LowStar_Failure.krml extract/Kremlin/EverCrypt_Vale.krml extract/Kremlin/EverCrypt_Specs.krml extract/Kremlin/EverCrypt_OpenSSL.krml extract/Kremlin/EverCrypt_Hacl.krml extract/Kremlin/EverCrypt_BCrypt.krml extract/Kremlin/EverCrypt_Cipher.krml extract/Kremlin/Hacl_Spec_Curve25519_Finv.krml extract/Kremlin/Hacl_Impl_Curve25519_Finv.krml extract/Kremlin/Hacl_Impl_Curve25519_Generic.krml extract/Kremlin/Hacl_Meta_Curve25519.krml extract/Kremlin/Hacl_Curve25519_51.krml extract/Kremlin/Vale_Stdcalls_X64_Fswap.krml extract/Kremlin/Vale_Wrapper_X64_Fswap.krml extract/Kremlin/Vale_X64_Print_Inline_s.krml extract/Kremlin/Vale_Inline_X64_Fswap_inline.krml extract/Kremlin/Vale_Stdcalls_X64_Fsqr.krml extract/Kremlin/Vale_Wrapper_X64_Fsqr.krml extract/Kremlin/Vale_Inline_X64_Fsqr_inline.krml extract/Kremlin/Vale_Stdcalls_X64_Fmul.krml extract/Kremlin/Vale_Wrapper_X64_Fmul.krml extract/Kremlin/Vale_Inline_X64_Fmul_inline.krml extract/Kremlin/Vale_Stdcalls_X64_Fsub.krml extract/Kremlin/Vale_Wrapper_X64_Fsub.krml extract/Kremlin/Vale_Inline_X64_Fadd_inline.krml extract/Kremlin/Hacl_Impl_Curve25519_Field64_Vale.krml extract/Kremlin/Hacl_Curve25519_64.krml extract/Kremlin/EverCrypt_Curve25519.krml extract/Kremlin/Hacl_Poly1305_128.krml extract/Kremlin/Hacl_Poly1305_256.krml extract/Kremlin/Vale_Poly1305_Equiv.krml extract/Kremlin/Vale_Poly1305_CallingFromLowStar.krml extract/Kremlin/EverCrypt_Poly1305.krml extract/Kremlin/Lib_Memzero.krml extract/Kremlin/Spec_HMAC_DRBG.krml extract/Kremlin/Hacl_HMAC_DRBG.krml extract/Kremlin/Lib_RandomBuffer_System.krml extract/Kremlin/EverCrypt_DRBG.krml extract/Kremlin/Spec_Agile_HKDF.krml extract/Kremlin/Hacl_HKDF.krml extract/Kremlin/EverCrypt_HKDF.krml extract/Kremlin/EverCrypt.krml extract/Kremlin/FStar_Printf.krml extract/Kremlin/FStar_Error.krml extract/Kremlin/FStar_Tcp.krml extract/Kremlin/LowParse_Spec_FLData.krml extract/Kremlin/LowParse_Math.krml extract/Kremlin/LowParse_Slice.krml extract/Kremlin/LowParse_Low_Base.krml extract/Kremlin/LowParse_Low_Combinators.krml extract/Kremlin/LowParse_Low_FLData.krml extract/Kremlin/LowParse_Spec_Seq.krml extract/Kremlin/LowParse_Spec_Int.krml extract/Kremlin/LowParse_Spec_BoundedInt.krml extract/Kremlin/LowParse_Low_Endianness.krml extract/Kremlin/LowParse_BitFields.krml extract/Kremlin/LowParse_Endianness.krml extract/Kremlin/LowParse_Endianness_BitFields.krml extract/Kremlin/LowParse_Low_BoundedInt.krml extract/Kremlin/LowParse_Spec_SeqBytes_Base.krml extract/Kremlin/LowParse_Spec_DER.krml extract/Kremlin/LowParse_Spec_BCVLI.krml extract/Kremlin/LowParse_Spec_AllIntegers.krml extract/Kremlin/LowParse_Spec_VLData.krml extract/Kremlin/LowParse_Low_VLData.krml extract/Kremlin/LowParse_Spec_VLGen.krml extract/Kremlin/LowParse_Low_VLGen.krml extract/Kremlin/LowParse_Low_Int.krml extract/Kremlin/LowParse_Low_DER.krml extract/Kremlin/LowParse_Low_BCVLI.krml extract/Kremlin/LowParse_Low_List.krml extract/Kremlin/LowParse_Spec_Array.krml extract/Kremlin/LowParse_Spec_VCList.krml extract/Kremlin/LowParse_Low_VCList.krml extract/Kremlin/LowParse_Low_IfThenElse.krml extract/Kremlin/LowParse_TacLib.krml extract/Kremlin/LowParse_Spec_Enum.krml extract/Kremlin/LowParse_Spec_Sum.krml extract/Kremlin/LowParse_Low_Enum.krml extract/Kremlin/LowParse_Low_Sum.krml extract/Kremlin/LowParse_Low_Tac_Sum.krml extract/Kremlin/LowParse_Low_Option.krml extract/Kremlin/LowParse_Spec_Bytes.krml extract/Kremlin/LowParse_Low_Bytes.krml extract/Kremlin/LowParse_Low_Array.krml extract/Kremlin/LowParse_Low.krml extract/Kremlin/LowParse_SLow_FLData.krml extract/Kremlin/LowParse_SLow_VLGen.krml extract/Kremlin/LowParse_Spec_Endianness.krml extract/Kremlin/LowParse_Spec_Endianness_Instances.krml extract/Kremlin/LowParse_SLow_Endianness.krml extract/Kremlin/LowParse_SLow_BoundedInt.krml extract/Kremlin/LowParse_SLow_Int.krml extract/Kremlin/LowParse_SLow_DER.krml extract/Kremlin/LowParse_SLow_BCVLI.krml extract/Kremlin/LowParse_SLow_VCList.krml extract/Kremlin/LowParse_SLow_IfThenElse.krml extract/Kremlin/LowParse_SLow_Enum.krml extract/Kremlin/LowParse_SLow_Sum.krml extract/Kremlin/LowParse_SLow_Tac_Enum.krml extract/Kremlin/LowParse_SLow_Tac_Sum.krml extract/Kremlin/LowParse_SLow_VLData.krml extract/Kremlin/LowParse_SLow_Bytes.krml extract/Kremlin/LowParse_SLow_Array.krml extract/Kremlin/LowParse_Spec_Tac_Combinators.krml extract/Kremlin/LowParse_SLow.krml extract/Kremlin/Parsers_AlertDescription.krml extract/Kremlin/Parsers_AlertLevel.krml extract/Kremlin/Parsers_Alert.krml extract/Kremlin/TLSError.krml extract/Kremlin/Parsers_NamedGroup.krml extract/Kremlin/Format_Constants.krml extract/Kremlin/Format_UncompressedPointRepresentation.krml extract/Kremlin/Format_KeyShareEntry.krml extract/Kremlin/Flags.krml extract/Kremlin/Parsers_ECCurveType.krml extract/Kremlin/DebugFlags.krml extract/Kremlin/FStar_DependentMap.krml extract/Kremlin/FStar_Monotonic_DependentMap.krml extract/Kremlin/Mem.krml extract/Kremlin/Random.krml extract/Kremlin/TLS_Curve25519.krml extract/Kremlin/Parse.krml extract/Kremlin/ECGroup.krml extract/Kremlin/DHGroup.krml extract/Kremlin/Parsers_NamedGroupList.krml extract/Kremlin/CommonDH.krml extract/Kremlin/FFICallbacks.krml extract/Kremlin/Parsers_CompressionMethod.krml extract/Kremlin/Parsers_SignatureScheme.krml extract/Kremlin/Parsers_SignatureSchemeList.krml extract/Kremlin/LowParseWrappers.krml extract/Kremlin/Parsers_CipherSuite.krml extract/Kremlin/CipherSuite.krml extract/Kremlin/Parsers_ProtocolVersion.krml extract/Kremlin/TLSConstants.krml extract/Kremlin/HMAC.krml extract/Kremlin/RSAKey.krml extract/Kremlin/PMS.krml extract/Kremlin/List_Helpers.krml extract/Kremlin/PSK.krml extract/Kremlin/Extensions.krml extract/Kremlin/Cert.krml extract/Kremlin/TLSInfoFlags.krml extract/Kremlin/FStar_Date.krml extract/Kremlin/Nonce.krml extract/Kremlin/TLSInfo.krml extract/Kremlin/Crypto_Indexing.krml extract/Kremlin/Flag.krml extract/Kremlin/FStar_Old_Endianness.krml extract/Kremlin/FStar_Buffer.krml extract/Kremlin/C_Compat_Loops.krml extract/Kremlin/Buffer_Utils.krml extract/Kremlin/Crypto_Symmetric_Bytes.krml extract/Kremlin/Crypto_Plain.krml extract/Kremlin/AEADProvider.krml extract/Kremlin/Range.krml extract/Kremlin/DataStream.krml extract/Kremlin/Alert.krml extract/Kremlin/Content.krml extract/Kremlin/StreamPlain.krml extract/Kremlin/Hashing.krml extract/Kremlin/TLSPRF.krml extract/Kremlin/Hashing_CRF.krml extract/Kremlin/HandshakeMessages.krml extract/Kremlin/HandshakeLog.krml extract/Kremlin/Parsers_Boolean.krml extract/Kremlin/Parsers_TicketContents13_custom_data.krml extract/Kremlin/Parsers_TicketContents13_nonce.krml extract/Kremlin/Parsers_TicketContents13_rms.krml extract/Kremlin/Parsers_TicketContents13.krml extract/Kremlin/Parsers_TicketContents12_master_secret.krml extract/Kremlin/Parsers_TicketContents12.krml extract/Kremlin/Parsers_TicketVersion.krml extract/Kremlin/Parsers_TicketContents.krml extract/Kremlin/Parsers_TicketContents12_master_secret_Low.krml extract/Kremlin/Parsers_Ticket_Low.krml extract/Kremlin/Ticket.krml extract/Kremlin/Negotiation.krml extract/Kremlin/FStar_Monotonic_Seq.krml extract/Kremlin/StreamAE.krml extract/Kremlin/StatefulPlain.krml extract/Kremlin/LHAEPlain.krml extract/Kremlin/AEAD_GCM.krml extract/Kremlin/StatefulLHAE.krml extract/Kremlin/StAE.krml extract/Kremlin/Old_HMAC_UFCMA.krml extract/Kremlin/Parsers_HKDF_HkdfLabel_context.krml extract/Kremlin/Parsers_HKDF_HkdfLabel_label.krml extract/Kremlin/Parsers_HKDF_HkdfLabel.krml extract/Kremlin/HKDF.krml extract/Kremlin/Old_KeySchedule.krml extract/Kremlin/Old_Epochs.krml extract/Kremlin/FStar_HyperStack_IO.krml extract/Kremlin/StreamDeltas.krml extract/Kremlin/Old_Handshake.krml extract/Kremlin/Transport.krml extract/Kremlin/BufferBytes.krml extract/Kremlin/Record.krml extract/Kremlin/Connection.krml extract/Kremlin/TLS.krml extract/Kremlin/FFI.krml extract/Kremlin/Pkg.krml extract/Kremlin/Idx.krml extract/Kremlin/Model.krml extract/Kremlin/FStar_Test.krml extract/Kremlin/Pkg_Tree.krml extract/Kremlin/KDF.krml extract/Kremlin/QUIC.krml extract/Kremlin/IV.krml extract/Kremlin/KDF_Rekey.krml -tmpdir extract/Kremlin-Library -skip-compilation
  F* version: 1f9505d5
  KreMLin version: 44acff92
 */

#include "Parse.h"

FStar_Bytes_bytes Parse_bytes_of_seq(Prims_int sn)
{
  return FStar_Bytes_bytes_of_int((krml_checked_int_t)8, sn);
}

Prims_int Parse_seq_of_bytes(FStar_Bytes_bytes b)
{
  return FStar_Bytes_int_of_bytes(b);
}

FStar_Bytes_bytes Parse_vlbytes(Prims_int lSize, FStar_Bytes_bytes b)
{
  return
    FStar_Bytes_append(FStar_Bytes_bytes_of_int(lSize, FStar_UInt32_v(FStar_Bytes_len(b))),
      b);
}

FStar_Bytes_bytes Parse_vlbytes1(FStar_Bytes_bytes b)
{
  return Parse_vlbytes((krml_checked_int_t)1, b);
}

FStar_Bytes_bytes Parse_vlbytes2(FStar_Bytes_bytes b)
{
  return Parse_vlbytes((krml_checked_int_t)2, b);
}

FStar_Bytes_bytes Parse_vlbytes_trunc(Prims_int lSize, FStar_Bytes_bytes b, Prims_int extra)
{
  return
    FStar_Bytes_append(FStar_Bytes_bytes_of_int(lSize,
        Prims_op_Addition(FStar_UInt32_v(FStar_Bytes_len(b)), extra)),
      b);
}

FStar_Error_optResult__K___Parsers_Alert_alert_Prims_string_K___FStar_Bytes_bytes_FStar_Bytes_bytes
TLSError_fatal__FStar_Bytes_bytes___FStar_Bytes_bytes(
  Parsers_AlertDescription_alertDescription a,
  Prims_string s
)
{
  return
    (
      (FStar_Error_optResult__K___Parsers_Alert_alert_Prims_string_K___FStar_Bytes_bytes_FStar_Bytes_bytes){
        .tag = FStar_Error_Error,
        .val = { .case_Error = { .fst = TLSError_fatalAlert(a), .snd = s } }
      }
    );
}

FStar_Error_optResult__K___Parsers_Alert_alert_Prims_string_K___FStar_Bytes_bytes_FStar_Bytes_bytes
Parse_vlsplit(Prims_int lSize, FStar_Bytes_bytes vlb)
{
  K___FStar_Bytes_bytes_FStar_Bytes_bytes
  scrut = FStar_Bytes_split(vlb, FStar_UInt32_uint_to_t(lSize));
  FStar_Bytes_bytes vl = scrut.fst;
  FStar_Bytes_bytes b = scrut.snd;
  Prims_int l = FStar_Bytes_int_of_bytes(vl);
  if (Prims_op_LessThanOrEqual(l, FStar_UInt32_v(FStar_Bytes_len(b))))
  {
    K___FStar_Bytes_bytes_FStar_Bytes_bytes
    scrut = FStar_Bytes_split(b, FStar_UInt32_uint_to_t(l));
    FStar_Bytes_bytes b0 = scrut.fst;
    FStar_Bytes_bytes b1 = scrut.snd;
    return
      (
        (FStar_Error_optResult__K___Parsers_Alert_alert_Prims_string_K___FStar_Bytes_bytes_FStar_Bytes_bytes){
          .tag = FStar_Error_Correct,
          .val = { .case_Correct = { .fst = b0, .snd = b1 } }
        }
      );
  }
  else
    return
      TLSError_fatal__FStar_Bytes_bytes___FStar_Bytes_bytes(Parsers_AlertDescription_Decode_error,
        FStar_Error_perror("Parse.fst", (krml_checked_int_t)145, ""));
}

FStar_Error_optResult__K___Parsers_Alert_alert_Prims_string_FStar_Bytes_bytes
TLSError_fatal__FStar_Bytes_bytes(Parsers_AlertDescription_alertDescription a, Prims_string s)
{
  return
    (
      (FStar_Error_optResult__K___Parsers_Alert_alert_Prims_string_FStar_Bytes_bytes){
        .tag = FStar_Error_Error,
        .val = { .case_Error = { .fst = TLSError_fatalAlert(a), .snd = s } }
      }
    );
}

FStar_Error_optResult__K___Parsers_Alert_alert_Prims_string_FStar_Bytes_bytes
Parse_vlparse(Prims_int lSize, FStar_Bytes_bytes vlb)
{
  K___FStar_Bytes_bytes_FStar_Bytes_bytes
  scrut = FStar_Bytes_split(vlb, FStar_UInt32_uint_to_t(lSize));
  FStar_Bytes_bytes vl = scrut.fst;
  FStar_Bytes_bytes b = scrut.snd;
  if (FStar_Bytes_int_of_bytes(vl) == FStar_UInt32_v(FStar_Bytes_len(b)))
    return
      (
        (FStar_Error_optResult__K___Parsers_Alert_alert_Prims_string_FStar_Bytes_bytes){
          .tag = FStar_Error_Correct,
          .val = { .case_Correct = b }
        }
      );
  else
    return
      TLSError_fatal__FStar_Bytes_bytes(Parsers_AlertDescription_Decode_error,
        FStar_Error_perror("Parse.fst", (krml_checked_int_t)156, ""));
}

uint16_t Parse_uint16_of_bytes(FStar_Bytes_bytes b)
{
  Prims_int n1 = FStar_Bytes_int_of_bytes(b);
  return FStar_UInt16_uint_to_t(n1);
}

uint32_t Parse_uint32_of_bytes(FStar_Bytes_bytes b)
{
  Prims_int n1 = FStar_Bytes_int_of_bytes(b);
  return FStar_UInt32_uint_to_t(n1);
}

FStar_Bytes_bytes Parse_bytes_of_uint32(uint32_t n1)
{
  return FStar_Bytes_bytes_of_int32(n1);
}

FStar_Bytes_bytes Parse_bytes_of_uint16(uint16_t n1)
{
  return FStar_Bytes_bytes_of_int16(n1);
}

uint8_t Parse_cbyte(FStar_Bytes_bytes b)
{
  return FStar_Bytes_get(b, (uint32_t)0U);
}

K___uint8_t_uint8_t Parse_cbyte2(FStar_Bytes_bytes b)
{
  return
    (
      (K___uint8_t_uint8_t){
        .fst = FStar_Bytes_get(b, (uint32_t)0U),
        .snd = FStar_Bytes_get(b, (uint32_t)1U)
      }
    );
}

