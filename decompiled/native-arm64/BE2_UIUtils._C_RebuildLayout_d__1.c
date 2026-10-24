/* ARM64 IL2CPP native pseudocode from Ghidra.
 * Recovered implementation, not original C# source.
 * Function boundaries follow the IL2CPP method address table. */


/* MG_BlocksEngine2.UI.BE2_UIUtils.<C_RebuildLayout>d__1$$.ctor @ 0x548cdc
 * void MG_BlocksEngine2_UI_BE2_UIUtils__C_RebuildLayout_d__1___ctor (MG_BlocksEngine2_UI_BE2_UIUtils__C_RebuildLayout_d__1_o* __this, int32_t __1__state, const MethodInfo* method); */

/* MG_BlocksEngine2.UI.BE2_UIUtils.<C_RebuildLayout>d__1$$.ctor
   void MG_BlocksEngine2_UI_BE2_UIUtils__C_RebuildLayout_d__1___ctor
   (MG_BlocksEngine2_UI_BE2_UIUtils__C_RebuildLayout_d__1_o* __this, int32_t __1__state, const
   MethodInfo* method); */

void native_MG_BlocksEngine2_UI_BE2_UIUtils__C_RebuildLayout_d__1___ctor_548cdc
               (long param_1,undefined4 param_2)

{
  native_System_Object___ctor_ad2798(param_1,0);
  *(undefined4 *)(param_1 + 0x10) = param_2;
  return;
}



/* MG_BlocksEngine2.UI.BE2_UIUtils.<C_RebuildLayout>d__1$$System.IDisposable.Dispose @ 0x548d08
 * void MG_BlocksEngine2_UI_BE2_UIUtils__C_RebuildLayout_d__1__System_IDisposable_Dispose (MG_BlocksEngine2_UI_BE2_UIUtils__C_RebuildLayout_d__1_o* __this, const MethodInfo* method); */

/* MG_BlocksEngine2.UI.BE2_UIUtils.<C_RebuildLayout>d__1$$System.IDisposable.Dispose
   void MG_BlocksEngine2_UI_BE2_UIUtils__C_RebuildLayout_d__1__System_IDisposable_Dispose
   (MG_BlocksEngine2_UI_BE2_UIUtils__C_RebuildLayout_d__1_o* __this, const MethodInfo* method); */

void native_MG_BlocksEngine2_UI_BE2_UIUtils__C_RebuildLayout_d__1__System_IDisposable_Dispose_548d08
               (void)

{
  return;
}



/* MG_BlocksEngine2.UI.BE2_UIUtils.<C_RebuildLayout>d__1$$MoveNext @ 0x548d0c
 * bool MG_BlocksEngine2_UI_BE2_UIUtils__C_RebuildLayout_d__1__MoveNext (MG_BlocksEngine2_UI_BE2_UIUtils__C_RebuildLayout_d__1_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MG_BlocksEngine2.UI.BE2_UIUtils.<C_RebuildLayout>d__1$$MoveNext
   bool MG_BlocksEngine2_UI_BE2_UIUtils__C_RebuildLayout_d__1__MoveNext
   (MG_BlocksEngine2_UI_BE2_UIUtils__C_RebuildLayout_d__1_o* __this, const MethodInfo* method); */

undefined8
native_MG_BlocksEngine2_UI_BE2_UIUtils__C_RebuildLayout_d__1__MoveNext_548d0c(long param_1)

{
  undefined8 uVar1;
  
  if ((bRam000000000133e9ad & 1) == 0) {
    native_sub_43273c(&UnityEngine_UI_LayoutRebuilder_TypeInfo_12d4ff8);
    native_sub_43273c(&UnityEngine_WaitForEndOfFrame_TypeInfo_12d6738);
    bRam000000000133e9ad = 1;
  }
  if (*(int *)(param_1 + 0x10) == 1) {
    *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
    uVar1 = *(undefined8 *)(param_1 + 0x20);
    if (((*(byte *)(_UnityEngine_UI_LayoutRebuilder_TypeInfo_12d4ff8 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UnityEngine_UI_LayoutRebuilder_TypeInfo_12d4ff8 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    native_UnityEngine_UI_LayoutRebuilder__ForceRebuildLayoutImmediate_a7ccac(uVar1,0);
  }
  else if (*(int *)(param_1 + 0x10) == 0) {
    *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
    uVar1 = *(undefined8 *)(param_1 + 0x20);
    if (((*(byte *)(_UnityEngine_UI_LayoutRebuilder_TypeInfo_12d4ff8 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UnityEngine_UI_LayoutRebuilder_TypeInfo_12d4ff8 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    native_UnityEngine_UI_LayoutRebuilder__ForceRebuildLayoutImmediate_a7ccac(uVar1,0);
    uVar1 = native_sub_432808(_UnityEngine_WaitForEndOfFrame_TypeInfo_12d6738);
    native_UnityEngine_WaitForEndOfFrame___ctor_7775b8(uVar1,0);
    *(undefined8 *)(param_1 + 0x18) = uVar1;
    native_sub_4326e0((undefined8 *)(param_1 + 0x18),uVar1);
    *(undefined4 *)(param_1 + 0x10) = 1;
    return 1;
  }
  return 0;
}



/* MG_BlocksEngine2.UI.BE2_UIUtils.<C_RebuildLayout>d__1$$System.Collections.Generic.IEnumerator<System.Object>.get_Current @ 0x548e10
 * Il2CppObject* MG_BlocksEngine2_UI_BE2_UIUtils__C_RebuildLayout_d__1__System_Collections_Generic_IEnumerator_System_Object__get_Current (MG_BlocksEngine2_UI_BE2_UIUtils__C_RebuildLayout_d__1_o* __this, const MethodInfo* method); */

/* MG_BlocksEngine2.UI.BE2_UIUtils.<C_RebuildLayout>d__1$$System.Collections.Generic.IEnumerator<System.Object>.get_Current
   Il2CppObject*
   MG_BlocksEngine2_UI_BE2_UIUtils__C_RebuildLayout_d__1__System_Collections_Generic_IEnumerator_System_Object__get_Current
   (MG_BlocksEngine2_UI_BE2_UIUtils__C_RebuildLayout_d__1_o* __this, const MethodInfo* method); */

undefined8
native_MG_BlocksEngine2_UI_BE2_UIUtils__C_RebuildLayout_d__1__System_Collections_Generic_IEnumerator_System_Object__get_Current_548e10
          (long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* MG_BlocksEngine2.UI.BE2_UIUtils.<C_RebuildLayout>d__1$$System.Collections.IEnumerator.Reset @ 0x548e18
 * void MG_BlocksEngine2_UI_BE2_UIUtils__C_RebuildLayout_d__1__System_Collections_IEnumerator_Reset (MG_BlocksEngine2_UI_BE2_UIUtils__C_RebuildLayout_d__1_o* __this, const MethodInfo* method); */

/* MG_BlocksEngine2.UI.BE2_UIUtils.<C_RebuildLayout>d__1$$System.Collections.IEnumerator.Reset
   void MG_BlocksEngine2_UI_BE2_UIUtils__C_RebuildLayout_d__1__System_Collections_IEnumerator_Reset
   (MG_BlocksEngine2_UI_BE2_UIUtils__C_RebuildLayout_d__1_o* __this, const MethodInfo* method); */

void native_MG_BlocksEngine2_UI_BE2_UIUtils__C_RebuildLayout_d__1__System_Collections_IEnumerator_Reset_548e18
               (void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  native_sub_432740(&System_NotSupportedException_TypeInfo_12d5468);
  uVar1 = native_sub_432808();
  native_System_NotSupportedException___ctor_ad264c(uVar1,0);
  uVar2 = native_sub_432740(&
                            Method_MG_BlocksEngine2_UI_BE2_UIUtils__C_RebuildLayout_d__1_System_Collections_IEnumerator_Reset___12e9698
                           );
                    /* WARNING: Subroutine does not return */
  native_sub_4327dc(uVar1,uVar2);
}



/* MG_BlocksEngine2.UI.BE2_UIUtils.<C_RebuildLayout>d__1$$System.Collections.IEnumerator.get_Current @ 0x548e58
 * Il2CppObject* MG_BlocksEngine2_UI_BE2_UIUtils__C_RebuildLayout_d__1__System_Collections_IEnumerator_get_Current (MG_BlocksEngine2_UI_BE2_UIUtils__C_RebuildLayout_d__1_o* __this, const MethodInfo* method); */

/* MG_BlocksEngine2.UI.BE2_UIUtils.<C_RebuildLayout>d__1$$System.Collections.IEnumerator.get_Current
   Il2CppObject*
   MG_BlocksEngine2_UI_BE2_UIUtils__C_RebuildLayout_d__1__System_Collections_IEnumerator_get_Current
   (MG_BlocksEngine2_UI_BE2_UIUtils__C_RebuildLayout_d__1_o* __this, const MethodInfo* method); */

undefined8
native_MG_BlocksEngine2_UI_BE2_UIUtils__C_RebuildLayout_d__1__System_Collections_IEnumerator_get_Current_548e58
          (long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}


