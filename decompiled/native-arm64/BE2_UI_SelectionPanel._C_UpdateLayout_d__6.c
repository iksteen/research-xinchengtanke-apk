/* ARM64 IL2CPP native pseudocode from Ghidra.
 * Recovered implementation, not original C# source.
 * Function boundaries follow the IL2CPP method address table. */


/* MG_BlocksEngine2.UI.BE2_UI_SelectionPanel.<C_UpdateLayout>d__6$$.ctor @ 0x5490a0
 * void MG_BlocksEngine2_UI_BE2_UI_SelectionPanel__C_UpdateLayout_d__6___ctor (MG_BlocksEngine2_UI_BE2_UI_SelectionPanel__C_UpdateLayout_d__6_o* __this, int32_t __1__state, const MethodInfo* method); */

/* MG_BlocksEngine2.UI.BE2_UI_SelectionPanel.<C_UpdateLayout>d__6$$.ctor
   void MG_BlocksEngine2_UI_BE2_UI_SelectionPanel__C_UpdateLayout_d__6___ctor
   (MG_BlocksEngine2_UI_BE2_UI_SelectionPanel__C_UpdateLayout_d__6_o* __this, int32_t __1__state,
   const MethodInfo* method); */

void native_MG_BlocksEngine2_UI_BE2_UI_SelectionPanel__C_UpdateLayout_d__6___ctor_5490a0
               (long param_1,undefined4 param_2)

{
  native_System_Object___ctor_ad2798(param_1,0);
  *(undefined4 *)(param_1 + 0x10) = param_2;
  return;
}



/* MG_BlocksEngine2.UI.BE2_UI_SelectionPanel.<C_UpdateLayout>d__6$$System.IDisposable.Dispose @ 0x5490cc
 * void MG_BlocksEngine2_UI_BE2_UI_SelectionPanel__C_UpdateLayout_d__6__System_IDisposable_Dispose (MG_BlocksEngine2_UI_BE2_UI_SelectionPanel__C_UpdateLayout_d__6_o* __this, const MethodInfo* method); */

/* MG_BlocksEngine2.UI.BE2_UI_SelectionPanel.<C_UpdateLayout>d__6$$System.IDisposable.Dispose
   void MG_BlocksEngine2_UI_BE2_UI_SelectionPanel__C_UpdateLayout_d__6__System_IDisposable_Dispose
   (MG_BlocksEngine2_UI_BE2_UI_SelectionPanel__C_UpdateLayout_d__6_o* __this, const MethodInfo*
   method); */

void native_MG_BlocksEngine2_UI_BE2_UI_SelectionPanel__C_UpdateLayout_d__6__System_IDisposable_Dispose_5490cc
               (void)

{
  return;
}



/* MG_BlocksEngine2.UI.BE2_UI_SelectionPanel.<C_UpdateLayout>d__6$$MoveNext @ 0x5490d0
 * bool MG_BlocksEngine2_UI_BE2_UI_SelectionPanel__C_UpdateLayout_d__6__MoveNext (MG_BlocksEngine2_UI_BE2_UI_SelectionPanel__C_UpdateLayout_d__6_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MG_BlocksEngine2.UI.BE2_UI_SelectionPanel.<C_UpdateLayout>d__6$$MoveNext
   bool MG_BlocksEngine2_UI_BE2_UI_SelectionPanel__C_UpdateLayout_d__6__MoveNext
   (MG_BlocksEngine2_UI_BE2_UI_SelectionPanel__C_UpdateLayout_d__6_o* __this, const MethodInfo*
   method); */

undefined8
native_MG_BlocksEngine2_UI_BE2_UI_SelectionPanel__C_UpdateLayout_d__6__MoveNext_5490d0(long param_1)

{
  undefined8 uVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  
  if ((bRam000000000133e9af & 1) == 0) {
    native_sub_43273c(&UnityEngine_WaitForEndOfFrame_TypeInfo_12d6738);
    bRam000000000133e9af = 1;
  }
  if (*(int *)(param_1 + 0x10) == 1) {
    lVar4 = *(long *)(param_1 + 0x20);
    *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
    if ((lVar4 != 0) && (plVar2 = *(long **)(lVar4 + 0x18), plVar2 != (long *)0x0)) {
      lVar3 = *(long *)(lVar4 + 0x20);
      uVar1 = (**(code **)(*plVar2 + 0x328))(plVar2,*(undefined8 *)(*plVar2 + 0x330));
      plVar2 = *(long **)(lVar4 + 0x18);
      if ((plVar2 != (long *)0x0) &&
         (uVar5 = (**(code **)(*plVar2 + 0x358))(plVar2,*(undefined8 *)(*plVar2 + 0x360)),
         lVar3 != 0)) {
        native_UnityEngine_RectTransform__set_sizeDelta_76500c(uVar1,uVar5,lVar3,0);
        return 0;
      }
    }
                    /* WARNING: Subroutine does not return */
    native_sub_432810();
  }
  if (*(int *)(param_1 + 0x10) != 0) {
    return 0;
  }
  *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
  uVar1 = native_sub_432808(_UnityEngine_WaitForEndOfFrame_TypeInfo_12d6738);
  native_UnityEngine_WaitForEndOfFrame___ctor_7775b8(uVar1,0);
  *(undefined8 *)(param_1 + 0x18) = uVar1;
  native_sub_4326e0(param_1 + 0x18,uVar1);
  *(undefined4 *)(param_1 + 0x10) = 1;
  return 1;
}



/* MG_BlocksEngine2.UI.BE2_UI_SelectionPanel.<C_UpdateLayout>d__6$$System.Collections.Generic.IEnumerator<System.Object>.get_Current @ 0x5491cc
 * Il2CppObject* MG_BlocksEngine2_UI_BE2_UI_SelectionPanel__C_UpdateLayout_d__6__System_Collections_Generic_IEnumerator_System_Object__get_Current (MG_BlocksEngine2_UI_BE2_UI_SelectionPanel__C_UpdateLayout_d__6_o* __this, const MethodInfo* method); */

/* MG_BlocksEngine2.UI.BE2_UI_SelectionPanel.<C_UpdateLayout>d__6$$System.Collections.Generic.IEnumerator<System.Object>.get_Current
   Il2CppObject*
   MG_BlocksEngine2_UI_BE2_UI_SelectionPanel__C_UpdateLayout_d__6__System_Collections_Generic_IEnumerator_System_Object__get_Current
   (MG_BlocksEngine2_UI_BE2_UI_SelectionPanel__C_UpdateLayout_d__6_o* __this, const MethodInfo*
   method); */

undefined8
native_MG_BlocksEngine2_UI_BE2_UI_SelectionPanel__C_UpdateLayout_d__6__System_Collections_Generic_IEnumerator_System_Object__get_Current_5491cc
          (long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* MG_BlocksEngine2.UI.BE2_UI_SelectionPanel.<C_UpdateLayout>d__6$$System.Collections.IEnumerator.Reset @ 0x5491d4
 * void MG_BlocksEngine2_UI_BE2_UI_SelectionPanel__C_UpdateLayout_d__6__System_Collections_IEnumerator_Reset (MG_BlocksEngine2_UI_BE2_UI_SelectionPanel__C_UpdateLayout_d__6_o* __this, const MethodInfo* method); */

/* MG_BlocksEngine2.UI.BE2_UI_SelectionPanel.<C_UpdateLayout>d__6$$System.Collections.IEnumerator.Reset
   void 
   MG_BlocksEngine2_UI_BE2_UI_SelectionPanel__C_UpdateLayout_d__6__System_Collections_IEnumerator_Reset
   (MG_BlocksEngine2_UI_BE2_UI_SelectionPanel__C_UpdateLayout_d__6_o* __this, const MethodInfo*
   method); */

void native_MG_BlocksEngine2_UI_BE2_UI_SelectionPanel__C_UpdateLayout_d__6__System_Collections_IEnumerator_Reset_5491d4
               (void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  native_sub_432740(&System_NotSupportedException_TypeInfo_12d5468);
  uVar1 = native_sub_432808();
  native_System_NotSupportedException___ctor_ad264c(uVar1,0);
  uVar2 = native_sub_432740(&
                            Method_MG_BlocksEngine2_UI_BE2_UI_SelectionPanel__C_UpdateLayout_d__6_System_Collections_IEnumerator_Reset___12e96c0
                           );
                    /* WARNING: Subroutine does not return */
  native_sub_4327dc(uVar1,uVar2);
}



/* MG_BlocksEngine2.UI.BE2_UI_SelectionPanel.<C_UpdateLayout>d__6$$System.Collections.IEnumerator.get_Current @ 0x549214
 * Il2CppObject* MG_BlocksEngine2_UI_BE2_UI_SelectionPanel__C_UpdateLayout_d__6__System_Collections_IEnumerator_get_Current (MG_BlocksEngine2_UI_BE2_UI_SelectionPanel__C_UpdateLayout_d__6_o* __this, const MethodInfo* method); */

/* MG_BlocksEngine2.UI.BE2_UI_SelectionPanel.<C_UpdateLayout>d__6$$System.Collections.IEnumerator.get_Current
   Il2CppObject*
   MG_BlocksEngine2_UI_BE2_UI_SelectionPanel__C_UpdateLayout_d__6__System_Collections_IEnumerator_get_Current
   (MG_BlocksEngine2_UI_BE2_UI_SelectionPanel__C_UpdateLayout_d__6_o* __this, const MethodInfo*
   method); */

undefined8
native_MG_BlocksEngine2_UI_BE2_UI_SelectionPanel__C_UpdateLayout_d__6__System_Collections_IEnumerator_get_Current_549214
          (long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}


