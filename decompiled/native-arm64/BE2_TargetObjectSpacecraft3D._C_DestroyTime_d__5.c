/* ARM64 IL2CPP native pseudocode from Ghidra.
 * Recovered implementation, not original C# source.
 * Function boundaries follow the IL2CPP method address table. */


/* MG_BlocksEngine2.Environment.BE2_TargetObjectSpacecraft3D.<C_DestroyTime>d__5$$.ctor @ 0x548b84
 * void MG_BlocksEngine2_Environment_BE2_TargetObjectSpacecraft3D__C_DestroyTime_d__5___ctor (MG_BlocksEngine2_Environment_BE2_TargetObjectSpacecraft3D__C_DestroyTime_d__5_o* __this, int32_t __1__state, const MethodInfo* method); */

/* MG_BlocksEngine2.Environment.BE2_TargetObjectSpacecraft3D.<C_DestroyTime>d__5$$.ctor
   void MG_BlocksEngine2_Environment_BE2_TargetObjectSpacecraft3D__C_DestroyTime_d__5___ctor
   (MG_BlocksEngine2_Environment_BE2_TargetObjectSpacecraft3D__C_DestroyTime_d__5_o* __this, int32_t
   __1__state, const MethodInfo* method); */

void native_MG_BlocksEngine2_Environment_BE2_TargetObjectSpacecraft3D__C_DestroyTime_d__5___ctor_548b84
               (long param_1,undefined4 param_2)

{
  native_System_Object___ctor_ad2798(param_1,0);
  *(undefined4 *)(param_1 + 0x10) = param_2;
  return;
}



/* MG_BlocksEngine2.Environment.BE2_TargetObjectSpacecraft3D.<C_DestroyTime>d__5$$System.IDisposable.Dispose @ 0x548bb0
 * void MG_BlocksEngine2_Environment_BE2_TargetObjectSpacecraft3D__C_DestroyTime_d__5__System_IDisposable_Dispose (MG_BlocksEngine2_Environment_BE2_TargetObjectSpacecraft3D__C_DestroyTime_d__5_o* __this, const MethodInfo* method); */

/* MG_BlocksEngine2.Environment.BE2_TargetObjectSpacecraft3D.<C_DestroyTime>d__5$$System.IDisposable.Dispose
   void 
   MG_BlocksEngine2_Environment_BE2_TargetObjectSpacecraft3D__C_DestroyTime_d__5__System_IDisposable_Dispose
   (MG_BlocksEngine2_Environment_BE2_TargetObjectSpacecraft3D__C_DestroyTime_d__5_o* __this, const
   MethodInfo* method); */

void native_MG_BlocksEngine2_Environment_BE2_TargetObjectSpacecraft3D__C_DestroyTime_d__5__System_IDisposable_Dispose_548bb0
               (void)

{
  return;
}



/* MG_BlocksEngine2.Environment.BE2_TargetObjectSpacecraft3D.<C_DestroyTime>d__5$$MoveNext @ 0x548bb4
 * bool MG_BlocksEngine2_Environment_BE2_TargetObjectSpacecraft3D__C_DestroyTime_d__5__MoveNext (MG_BlocksEngine2_Environment_BE2_TargetObjectSpacecraft3D__C_DestroyTime_d__5_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MG_BlocksEngine2.Environment.BE2_TargetObjectSpacecraft3D.<C_DestroyTime>d__5$$MoveNext
   bool MG_BlocksEngine2_Environment_BE2_TargetObjectSpacecraft3D__C_DestroyTime_d__5__MoveNext
   (MG_BlocksEngine2_Environment_BE2_TargetObjectSpacecraft3D__C_DestroyTime_d__5_o* __this, const
   MethodInfo* method); */

undefined8
native_MG_BlocksEngine2_Environment_BE2_TargetObjectSpacecraft3D__C_DestroyTime_d__5__MoveNext_548bb4
          (long param_1)

{
  undefined8 uVar1;
  
  if ((bRam000000000133e9ac & 1) == 0) {
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    native_sub_43273c(&UnityEngine_WaitForSeconds_TypeInfo_12d6740);
    bRam000000000133e9ac = 1;
  }
  if (*(int *)(param_1 + 0x10) == 1) {
    *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
    uVar1 = *(undefined8 *)(param_1 + 0x20);
    if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    native_UnityEngine_Object__Destroy_8ea574(uVar1,0);
  }
  else if (*(int *)(param_1 + 0x10) == 0) {
    *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
    uVar1 = native_sub_432808(_UnityEngine_WaitForSeconds_TypeInfo_12d6740);
    native_UnityEngine_WaitForSeconds___ctor_7775c8(0x3f800000,uVar1,0);
    *(undefined8 *)(param_1 + 0x18) = uVar1;
    native_sub_4326e0(param_1 + 0x18,uVar1);
    *(undefined4 *)(param_1 + 0x10) = 1;
    return 1;
  }
  return 0;
}



/* MG_BlocksEngine2.Environment.BE2_TargetObjectSpacecraft3D.<C_DestroyTime>d__5$$System.Collections.Generic.IEnumerator<System.Object>.get_Current @ 0x548c8c
 * Il2CppObject* MG_BlocksEngine2_Environment_BE2_TargetObjectSpacecraft3D__C_DestroyTime_d__5__System_Collections_Generic_IEnumerator_System_Object__get_Current (MG_BlocksEngine2_Environment_BE2_TargetObjectSpacecraft3D__C_DestroyTime_d__5_o* __this, const MethodInfo* method); */

/* MG_BlocksEngine2.Environment.BE2_TargetObjectSpacecraft3D.<C_DestroyTime>d__5$$System.Collections.Generic.IEnumerator<System.Object>.get_Current
   Il2CppObject*
   MG_BlocksEngine2_Environment_BE2_TargetObjectSpacecraft3D__C_DestroyTime_d__5__System_Collections_Generic_IEnumerator_System_Object__get_Current
   (MG_BlocksEngine2_Environment_BE2_TargetObjectSpacecraft3D__C_DestroyTime_d__5_o* __this, const
   MethodInfo* method); */

undefined8
native_MG_BlocksEngine2_Environment_BE2_TargetObjectSpacecraft3D__C_DestroyTime_d__5__System_Collections_Generic_IEnumerator_System_Object__get_Current_548c8c
          (long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* MG_BlocksEngine2.Environment.BE2_TargetObjectSpacecraft3D.<C_DestroyTime>d__5$$System.Collections.IEnumerator.Reset @ 0x548c94
 * void MG_BlocksEngine2_Environment_BE2_TargetObjectSpacecraft3D__C_DestroyTime_d__5__System_Collections_IEnumerator_Reset (MG_BlocksEngine2_Environment_BE2_TargetObjectSpacecraft3D__C_DestroyTime_d__5_o* __this, const MethodInfo* method); */

/* MG_BlocksEngine2.Environment.BE2_TargetObjectSpacecraft3D.<C_DestroyTime>d__5$$System.Collections.IEnumerator.Reset
   void 
   MG_BlocksEngine2_Environment_BE2_TargetObjectSpacecraft3D__C_DestroyTime_d__5__System_Collections_IEnumerator_Reset
   (MG_BlocksEngine2_Environment_BE2_TargetObjectSpacecraft3D__C_DestroyTime_d__5_o* __this, const
   MethodInfo* method); */

void native_MG_BlocksEngine2_Environment_BE2_TargetObjectSpacecraft3D__C_DestroyTime_d__5__System_Collections_IEnumerator_Reset_548c94
               (void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  native_sub_432740(&System_NotSupportedException_TypeInfo_12d5468);
  uVar1 = native_sub_432808();
  native_System_NotSupportedException___ctor_ad264c(uVar1,0);
  uVar2 = native_sub_432740(&
                            Method_MG_BlocksEngine2_Environment_BE2_TargetObjectSpacecraft3D__C_DestroyTime_d__5_System_Collections_IEnumerator_Reset___12e9690
                           );
                    /* WARNING: Subroutine does not return */
  native_sub_4327dc(uVar1,uVar2);
}



/* MG_BlocksEngine2.Environment.BE2_TargetObjectSpacecraft3D.<C_DestroyTime>d__5$$System.Collections.IEnumerator.get_Current @ 0x548cd4
 * Il2CppObject* MG_BlocksEngine2_Environment_BE2_TargetObjectSpacecraft3D__C_DestroyTime_d__5__System_Collections_IEnumerator_get_Current (MG_BlocksEngine2_Environment_BE2_TargetObjectSpacecraft3D__C_DestroyTime_d__5_o* __this, const MethodInfo* method); */

/* MG_BlocksEngine2.Environment.BE2_TargetObjectSpacecraft3D.<C_DestroyTime>d__5$$System.Collections.IEnumerator.get_Current
   Il2CppObject*
   MG_BlocksEngine2_Environment_BE2_TargetObjectSpacecraft3D__C_DestroyTime_d__5__System_Collections_IEnumerator_get_Current
   (MG_BlocksEngine2_Environment_BE2_TargetObjectSpacecraft3D__C_DestroyTime_d__5_o* __this, const
   MethodInfo* method); */

undefined8
native_MG_BlocksEngine2_Environment_BE2_TargetObjectSpacecraft3D__C_DestroyTime_d__5__System_Collections_IEnumerator_get_Current_548cd4
          (long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}


