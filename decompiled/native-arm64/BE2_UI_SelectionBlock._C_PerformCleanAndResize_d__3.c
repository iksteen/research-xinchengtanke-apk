/* ARM64 IL2CPP native pseudocode from Ghidra.
 * Recovered implementation, not original C# source.
 * Function boundaries follow the IL2CPP method address table. */


/* MG_BlocksEngine2.UI.BE2_UI_SelectionBlock.<C_PerformCleanAndResize>d__3$$.ctor @ 0x548f1c
 * void MG_BlocksEngine2_UI_BE2_UI_SelectionBlock__C_PerformCleanAndResize_d__3___ctor (MG_BlocksEngine2_UI_BE2_UI_SelectionBlock__C_PerformCleanAndResize_d__3_o* __this, int32_t __1__state, const MethodInfo* method); */

/* MG_BlocksEngine2.UI.BE2_UI_SelectionBlock.<C_PerformCleanAndResize>d__3$$.ctor
   void MG_BlocksEngine2_UI_BE2_UI_SelectionBlock__C_PerformCleanAndResize_d__3___ctor
   (MG_BlocksEngine2_UI_BE2_UI_SelectionBlock__C_PerformCleanAndResize_d__3_o* __this, int32_t
   __1__state, const MethodInfo* method); */

void native_MG_BlocksEngine2_UI_BE2_UI_SelectionBlock__C_PerformCleanAndResize_d__3___ctor_548f1c
               (long param_1,undefined4 param_2)

{
  native_System_Object___ctor_ad2798(param_1,0);
  *(undefined4 *)(param_1 + 0x10) = param_2;
  return;
}



/* MG_BlocksEngine2.UI.BE2_UI_SelectionBlock.<C_PerformCleanAndResize>d__3$$System.IDisposable.Dispose @ 0x548f48
 * void MG_BlocksEngine2_UI_BE2_UI_SelectionBlock__C_PerformCleanAndResize_d__3__System_IDisposable_Dispose (MG_BlocksEngine2_UI_BE2_UI_SelectionBlock__C_PerformCleanAndResize_d__3_o* __this, const MethodInfo* method); */

/* MG_BlocksEngine2.UI.BE2_UI_SelectionBlock.<C_PerformCleanAndResize>d__3$$System.IDisposable.Dispose
   void 
   MG_BlocksEngine2_UI_BE2_UI_SelectionBlock__C_PerformCleanAndResize_d__3__System_IDisposable_Dispose
   (MG_BlocksEngine2_UI_BE2_UI_SelectionBlock__C_PerformCleanAndResize_d__3_o* __this, const
   MethodInfo* method); */

void native_MG_BlocksEngine2_UI_BE2_UI_SelectionBlock__C_PerformCleanAndResize_d__3__System_IDisposable_Dispose_548f48
               (void)

{
  return;
}



/* MG_BlocksEngine2.UI.BE2_UI_SelectionBlock.<C_PerformCleanAndResize>d__3$$MoveNext @ 0x548f4c
 * bool MG_BlocksEngine2_UI_BE2_UI_SelectionBlock__C_PerformCleanAndResize_d__3__MoveNext (MG_BlocksEngine2_UI_BE2_UI_SelectionBlock__C_PerformCleanAndResize_d__3_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MG_BlocksEngine2.UI.BE2_UI_SelectionBlock.<C_PerformCleanAndResize>d__3$$MoveNext
   bool MG_BlocksEngine2_UI_BE2_UI_SelectionBlock__C_PerformCleanAndResize_d__3__MoveNext
   (MG_BlocksEngine2_UI_BE2_UI_SelectionBlock__C_PerformCleanAndResize_d__3_o* __this, const
   MethodInfo* method); */

undefined8
native_MG_BlocksEngine2_UI_BE2_UI_SelectionBlock__C_PerformCleanAndResize_d__3__MoveNext_548f4c
          (long param_1)

{
  undefined8 uVar1;
  ulong uVar2;
  long lVar3;
  
  if ((bRam000000000133e9ae & 1) == 0) {
    native_sub_43273c(&Method_UnityEngine_GameObject_GetComponent_I_BE2_Block____12e4998);
    native_sub_43273c(&UnityEngine_WaitForEndOfFrame_TypeInfo_12d6738);
    bRam000000000133e9ae = 1;
  }
  lVar3 = *(long *)(param_1 + 0x20);
  if (*(int *)(param_1 + 0x10) == 1) {
    *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
    if ((lVar3 == 0) || (*(long *)(lVar3 + 0x18) == 0)) goto LAB_0054904c;
    uVar1 = native_UnityEngine_GameObject__GetComponent_BE2_BlockSectionHeader_Custom__4a2214
                      (*(long *)(lVar3 + 0x18),
                       _Method_UnityEngine_GameObject_GetComponent_I_BE2_Block____12e4998);
    uVar2 = native_MG_BlocksEngine2_Utils_BE2_BlockUtils__BlockIsVariable_56f07c(uVar1,0);
    if (((uVar2 & 1) == 0) &&
       (uVar2 = native_MG_BlocksEngine2_Utils_BE2_BlockUtils__BlockIsFunction_56f1f0(uVar1,0),
       (uVar2 & 1) == 0)) {
      native_MG_BlocksEngine2_UI_BE2_UI_SelectionBlock__PerformClean_dcad88(lVar3,0);
    }
  }
  else if (*(int *)(param_1 + 0x10) == 0) {
    *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
    if (lVar3 != 0) {
      native_MG_BlocksEngine2_UI_BE2_UI_SelectionBlock__PerformResize_dcb6b4(lVar3,0);
      uVar1 = native_sub_432808(_UnityEngine_WaitForEndOfFrame_TypeInfo_12d6738);
      native_UnityEngine_WaitForEndOfFrame___ctor_7775b8(uVar1,0);
      *(undefined8 *)(param_1 + 0x18) = uVar1;
      native_sub_4326e0((undefined8 *)(param_1 + 0x18),uVar1);
      *(undefined4 *)(param_1 + 0x10) = 1;
      return 1;
    }
LAB_0054904c:
                    /* WARNING: Subroutine does not return */
    native_sub_432810();
  }
  return 0;
}



/* MG_BlocksEngine2.UI.BE2_UI_SelectionBlock.<C_PerformCleanAndResize>d__3$$System.Collections.Generic.IEnumerator<System.Object>.get_Current @ 0x549050
 * Il2CppObject* MG_BlocksEngine2_UI_BE2_UI_SelectionBlock__C_PerformCleanAndResize_d__3__System_Collections_Generic_IEnumerator_System_Object__get_Current (MG_BlocksEngine2_UI_BE2_UI_SelectionBlock__C_PerformCleanAndResize_d__3_o* __this, const MethodInfo* method); */

/* MG_BlocksEngine2.UI.BE2_UI_SelectionBlock.<C_PerformCleanAndResize>d__3$$System.Collections.Generic.IEnumerator<System.Object>.get_Current
   Il2CppObject*
   MG_BlocksEngine2_UI_BE2_UI_SelectionBlock__C_PerformCleanAndResize_d__3__System_Collections_Generic_IEnumerator_System_Object__get_Current
   (MG_BlocksEngine2_UI_BE2_UI_SelectionBlock__C_PerformCleanAndResize_d__3_o* __this, const
   MethodInfo* method); */

undefined8
native_MG_BlocksEngine2_UI_BE2_UI_SelectionBlock__C_PerformCleanAndResize_d__3__System_Collections_Generic_IEnumerator_System_Object__get_Current_549050
          (long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* MG_BlocksEngine2.UI.BE2_UI_SelectionBlock.<C_PerformCleanAndResize>d__3$$System.Collections.IEnumerator.Reset @ 0x549058
 * void MG_BlocksEngine2_UI_BE2_UI_SelectionBlock__C_PerformCleanAndResize_d__3__System_Collections_IEnumerator_Reset (MG_BlocksEngine2_UI_BE2_UI_SelectionBlock__C_PerformCleanAndResize_d__3_o* __this, const MethodInfo* method); */

/* MG_BlocksEngine2.UI.BE2_UI_SelectionBlock.<C_PerformCleanAndResize>d__3$$System.Collections.IEnumerator.Reset
   void 
   MG_BlocksEngine2_UI_BE2_UI_SelectionBlock__C_PerformCleanAndResize_d__3__System_Collections_IEnumerator_Reset
   (MG_BlocksEngine2_UI_BE2_UI_SelectionBlock__C_PerformCleanAndResize_d__3_o* __this, const
   MethodInfo* method); */

void native_MG_BlocksEngine2_UI_BE2_UI_SelectionBlock__C_PerformCleanAndResize_d__3__System_Collections_IEnumerator_Reset_549058
               (void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  native_sub_432740(&System_NotSupportedException_TypeInfo_12d5468);
  uVar1 = native_sub_432808();
  native_System_NotSupportedException___ctor_ad264c(uVar1,0);
  uVar2 = native_sub_432740(&
                            Method_MG_BlocksEngine2_UI_BE2_UI_SelectionBlock__C_PerformCleanAndResize_d__3_System_Collections_IEnumerator_Reset___12e96b8
                           );
                    /* WARNING: Subroutine does not return */
  native_sub_4327dc(uVar1,uVar2);
}



/* MG_BlocksEngine2.UI.BE2_UI_SelectionBlock.<C_PerformCleanAndResize>d__3$$System.Collections.IEnumerator.get_Current @ 0x549098
 * Il2CppObject* MG_BlocksEngine2_UI_BE2_UI_SelectionBlock__C_PerformCleanAndResize_d__3__System_Collections_IEnumerator_get_Current (MG_BlocksEngine2_UI_BE2_UI_SelectionBlock__C_PerformCleanAndResize_d__3_o* __this, const MethodInfo* method); */

/* MG_BlocksEngine2.UI.BE2_UI_SelectionBlock.<C_PerformCleanAndResize>d__3$$System.Collections.IEnumerator.get_Current
   Il2CppObject*
   MG_BlocksEngine2_UI_BE2_UI_SelectionBlock__C_PerformCleanAndResize_d__3__System_Collections_IEnumerator_get_Current
   (MG_BlocksEngine2_UI_BE2_UI_SelectionBlock__C_PerformCleanAndResize_d__3_o* __this, const
   MethodInfo* method); */

undefined8
native_MG_BlocksEngine2_UI_BE2_UI_SelectionBlock__C_PerformCleanAndResize_d__3__System_Collections_IEnumerator_get_Current_549098
          (long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}


