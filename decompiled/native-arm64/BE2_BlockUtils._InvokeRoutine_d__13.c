/* ARM64 IL2CPP native pseudocode from Ghidra.
 * Recovered implementation, not original C# source.
 * Function boundaries follow the IL2CPP method address table. */


/* MG_BlocksEngine2.Utils.BE2_BlockUtils.<InvokeRoutine>d__13$$.ctor @ 0x950280
 * void MG_BlocksEngine2_Utils_BE2_BlockUtils__InvokeRoutine_d__13___ctor (MG_BlocksEngine2_Utils_BE2_BlockUtils__InvokeRoutine_d__13_o* __this, int32_t __1__state, const MethodInfo* method); */

/* MG_BlocksEngine2.Utils.BE2_BlockUtils.<InvokeRoutine>d__13$$.ctor
   void MG_BlocksEngine2_Utils_BE2_BlockUtils__InvokeRoutine_d__13___ctor
   (MG_BlocksEngine2_Utils_BE2_BlockUtils__InvokeRoutine_d__13_o* __this, int32_t __1__state, const
   MethodInfo* method); */

void native_MG_BlocksEngine2_Utils_BE2_BlockUtils__InvokeRoutine_d__13___ctor_950280
               (long param_1,undefined4 param_2)

{
  native_System_Object___ctor_ad2798(param_1,0);
  *(undefined4 *)(param_1 + 0x10) = param_2;
  return;
}



/* MG_BlocksEngine2.Utils.BE2_BlockUtils.<InvokeRoutine>d__13$$System.IDisposable.Dispose @ 0x9502ac
 * void MG_BlocksEngine2_Utils_BE2_BlockUtils__InvokeRoutine_d__13__System_IDisposable_Dispose (MG_BlocksEngine2_Utils_BE2_BlockUtils__InvokeRoutine_d__13_o* __this, const MethodInfo* method); */

/* MG_BlocksEngine2.Utils.BE2_BlockUtils.<InvokeRoutine>d__13$$System.IDisposable.Dispose
   void MG_BlocksEngine2_Utils_BE2_BlockUtils__InvokeRoutine_d__13__System_IDisposable_Dispose
   (MG_BlocksEngine2_Utils_BE2_BlockUtils__InvokeRoutine_d__13_o* __this, const MethodInfo* method);
    */

void native_MG_BlocksEngine2_Utils_BE2_BlockUtils__InvokeRoutine_d__13__System_IDisposable_Dispose_9502ac
               (void)

{
  return;
}



/* MG_BlocksEngine2.Utils.BE2_BlockUtils.<InvokeRoutine>d__13$$MoveNext @ 0x9502b0
 * bool MG_BlocksEngine2_Utils_BE2_BlockUtils__InvokeRoutine_d__13__MoveNext (MG_BlocksEngine2_Utils_BE2_BlockUtils__InvokeRoutine_d__13_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MG_BlocksEngine2.Utils.BE2_BlockUtils.<InvokeRoutine>d__13$$MoveNext
   bool MG_BlocksEngine2_Utils_BE2_BlockUtils__InvokeRoutine_d__13__MoveNext
   (MG_BlocksEngine2_Utils_BE2_BlockUtils__InvokeRoutine_d__13_o* __this, const MethodInfo* method);
    */

undefined8
native_MG_BlocksEngine2_Utils_BE2_BlockUtils__InvokeRoutine_d__13__MoveNext_9502b0(long param_1)

{
  undefined8 uVar1;
  
  if ((bRam0000000001341494 & 1) == 0) {
    native_sub_43273c(&UnityEngine_WaitForEndOfFrame_TypeInfo_12d6738);
    bRam0000000001341494 = 1;
  }
  if (*(int *)(param_1 + 0x10) == 1) {
    *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
    if (*(long *)(param_1 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
      native_sub_432810();
    }
    native_System_Action__Invoke_95658c(*(long *)(param_1 + 0x20),0);
  }
  else if (*(int *)(param_1 + 0x10) == 0) {
    *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
    uVar1 = native_sub_432808(_UnityEngine_WaitForEndOfFrame_TypeInfo_12d6738);
    native_UnityEngine_WaitForEndOfFrame___ctor_7775b8(uVar1,0);
    *(undefined8 *)(param_1 + 0x18) = uVar1;
    native_sub_4326e0(param_1 + 0x18,uVar1);
    *(undefined4 *)(param_1 + 0x10) = 1;
    return 1;
  }
  return 0;
}



/* MG_BlocksEngine2.Utils.BE2_BlockUtils.<InvokeRoutine>d__13$$System.Collections.Generic.IEnumerator<System.Object>.get_Current @ 0x95035c
 * Il2CppObject* MG_BlocksEngine2_Utils_BE2_BlockUtils__InvokeRoutine_d__13__System_Collections_Generic_IEnumerator_System_Object__get_Current (MG_BlocksEngine2_Utils_BE2_BlockUtils__InvokeRoutine_d__13_o* __this, const MethodInfo* method); */

/* MG_BlocksEngine2.Utils.BE2_BlockUtils.<InvokeRoutine>d__13$$System.Collections.Generic.IEnumerator<System.Object>.get_Current
   Il2CppObject*
   MG_BlocksEngine2_Utils_BE2_BlockUtils__InvokeRoutine_d__13__System_Collections_Generic_IEnumerator_System_Object__get_Current
   (MG_BlocksEngine2_Utils_BE2_BlockUtils__InvokeRoutine_d__13_o* __this, const MethodInfo* method);
    */

undefined8
native_MG_BlocksEngine2_Utils_BE2_BlockUtils__InvokeRoutine_d__13__System_Collections_Generic_IEnumerator_System_Object__get_Current_95035c
          (long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* MG_BlocksEngine2.Utils.BE2_BlockUtils.<InvokeRoutine>d__13$$System.Collections.IEnumerator.Reset @ 0x950364
 * void MG_BlocksEngine2_Utils_BE2_BlockUtils__InvokeRoutine_d__13__System_Collections_IEnumerator_Reset (MG_BlocksEngine2_Utils_BE2_BlockUtils__InvokeRoutine_d__13_o* __this, const MethodInfo* method); */

/* MG_BlocksEngine2.Utils.BE2_BlockUtils.<InvokeRoutine>d__13$$System.Collections.IEnumerator.Reset
   void 
   MG_BlocksEngine2_Utils_BE2_BlockUtils__InvokeRoutine_d__13__System_Collections_IEnumerator_Reset
   (MG_BlocksEngine2_Utils_BE2_BlockUtils__InvokeRoutine_d__13_o* __this, const MethodInfo* method);
    */

void native_MG_BlocksEngine2_Utils_BE2_BlockUtils__InvokeRoutine_d__13__System_Collections_IEnumerator_Reset_950364
               (void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  native_sub_432740(&System_NotSupportedException_TypeInfo_12d5468);
  uVar1 = native_sub_432808();
  native_System_NotSupportedException___ctor_ad264c(uVar1,0);
  uVar2 = native_sub_432740(&
                            Method_MG_BlocksEngine2_Utils_BE2_BlockUtils__InvokeRoutine_d__13_System_Collections_IEnumerator_Reset___12e95e0
                           );
                    /* WARNING: Subroutine does not return */
  native_sub_4327dc(uVar1,uVar2);
}



/* MG_BlocksEngine2.Utils.BE2_BlockUtils.<InvokeRoutine>d__13$$System.Collections.IEnumerator.get_Current @ 0x9503a4
 * Il2CppObject* MG_BlocksEngine2_Utils_BE2_BlockUtils__InvokeRoutine_d__13__System_Collections_IEnumerator_get_Current (MG_BlocksEngine2_Utils_BE2_BlockUtils__InvokeRoutine_d__13_o* __this, const MethodInfo* method); */

/* MG_BlocksEngine2.Utils.BE2_BlockUtils.<InvokeRoutine>d__13$$System.Collections.IEnumerator.get_Current
   Il2CppObject*
   MG_BlocksEngine2_Utils_BE2_BlockUtils__InvokeRoutine_d__13__System_Collections_IEnumerator_get_Current
   (MG_BlocksEngine2_Utils_BE2_BlockUtils__InvokeRoutine_d__13_o* __this, const MethodInfo* method);
    */

undefined8
native_MG_BlocksEngine2_Utils_BE2_BlockUtils__InvokeRoutine_d__13__System_Collections_IEnumerator_get_Current_9503a4
          (long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}


