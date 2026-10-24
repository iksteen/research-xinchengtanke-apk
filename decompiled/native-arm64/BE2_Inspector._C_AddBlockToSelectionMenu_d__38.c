/* ARM64 IL2CPP native pseudocode from Ghidra.
 * Recovered implementation, not original C# source.
 * Function boundaries follow the IL2CPP method address table. */


/* MG_BlocksEngine2.EditorScript.BE2_Inspector.<C_AddBlockToSelectionMenu>d__38$$.ctor @ 0x548790
 * void MG_BlocksEngine2_EditorScript_BE2_Inspector__C_AddBlockToSelectionMenu_d__38___ctor (MG_BlocksEngine2_EditorScript_BE2_Inspector__C_AddBlockToSelectionMenu_d__38_o* __this, int32_t __1__state, const MethodInfo* method); */

/* MG_BlocksEngine2.EditorScript.BE2_Inspector.<C_AddBlockToSelectionMenu>d__38$$.ctor
   void MG_BlocksEngine2_EditorScript_BE2_Inspector__C_AddBlockToSelectionMenu_d__38___ctor
   (MG_BlocksEngine2_EditorScript_BE2_Inspector__C_AddBlockToSelectionMenu_d__38_o* __this, int32_t
   __1__state, const MethodInfo* method); */

void native_MG_BlocksEngine2_EditorScript_BE2_Inspector__C_AddBlockToSelectionMenu_d__38___ctor_548790
               (long param_1,undefined4 param_2)

{
  native_System_Object___ctor_ad2798(param_1,0);
  *(undefined4 *)(param_1 + 0x10) = param_2;
  return;
}



/* MG_BlocksEngine2.EditorScript.BE2_Inspector.<C_AddBlockToSelectionMenu>d__38$$System.IDisposable.Dispose @ 0x5487bc
 * void MG_BlocksEngine2_EditorScript_BE2_Inspector__C_AddBlockToSelectionMenu_d__38__System_IDisposable_Dispose (MG_BlocksEngine2_EditorScript_BE2_Inspector__C_AddBlockToSelectionMenu_d__38_o* __this, const MethodInfo* method); */

/* MG_BlocksEngine2.EditorScript.BE2_Inspector.<C_AddBlockToSelectionMenu>d__38$$System.IDisposable.Dispose
   void 
   MG_BlocksEngine2_EditorScript_BE2_Inspector__C_AddBlockToSelectionMenu_d__38__System_IDisposable_Dispose
   (MG_BlocksEngine2_EditorScript_BE2_Inspector__C_AddBlockToSelectionMenu_d__38_o* __this, const
   MethodInfo* method); */

void native_MG_BlocksEngine2_EditorScript_BE2_Inspector__C_AddBlockToSelectionMenu_d__38__System_IDisposable_Dispose_5487bc
               (void)

{
  return;
}



/* MG_BlocksEngine2.EditorScript.BE2_Inspector.<C_AddBlockToSelectionMenu>d__38$$MoveNext @ 0x5487c0
 * bool MG_BlocksEngine2_EditorScript_BE2_Inspector__C_AddBlockToSelectionMenu_d__38__MoveNext (MG_BlocksEngine2_EditorScript_BE2_Inspector__C_AddBlockToSelectionMenu_d__38_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MG_BlocksEngine2.EditorScript.BE2_Inspector.<C_AddBlockToSelectionMenu>d__38$$MoveNext
   bool MG_BlocksEngine2_EditorScript_BE2_Inspector__C_AddBlockToSelectionMenu_d__38__MoveNext
   (MG_BlocksEngine2_EditorScript_BE2_Inspector__C_AddBlockToSelectionMenu_d__38_o* __this, const
   MethodInfo* method); */

undefined8
native_MG_BlocksEngine2_EditorScript_BE2_Inspector__C_AddBlockToSelectionMenu_d__38__MoveNext_5487c0
          (long param_1)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  
  if ((bRam000000000133e9a7 & 1) == 0) {
    native_sub_43273c(&
                      Method_System_Collections_Generic_List_BE2_UI_SelectionPanel__get_Count___12dc520
                     );
    native_sub_43273c(&
                      Method_System_Collections_Generic_List_BE2_UI_SelectionPanel__get_Item___12dc528
                     );
    native_sub_43273c(&
                      Method_UnityEngine_Object_FindObjectOfType_BE2_UI_BlocksSelectionViewer____12e5a18
                     );
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    native_sub_43273c(&UnityEngine_WaitForEndOfFrame_TypeInfo_12d6738);
    bRam000000000133e9a7 = 1;
  }
  if (*(int *)(param_1 + 0x10) == 1) {
    *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
    if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    lVar3 = native_UnityEngine_Object__FindObjectOfType_BE2_DragDropManager__4a6274
                      (
                      _Method_UnityEngine_Object_FindObjectOfType_BE2_UI_BlocksSelectionViewer____12e5a18
                      );
    if (lVar3 != 0) {
      native_MG_BlocksEngine2_UI_BE2_UI_BlocksSelectionViewer__UpdateSelectionPanels_dc6414(lVar3,0)
      ;
      lVar4 = *(long *)(lVar3 + 0x18);
      if (lVar4 != 0) {
        iVar1 = *(int *)(lVar4 + 0x18);
        uVar2 = *(undefined8 *)(param_1 + 0x20);
        if (iVar1 == 0) {
          native_System_ThrowHelper__ThrowArgumentOutOfRangeException_9fe0f4(0);
        }
        native_MG_BlocksEngine2_UI_BE2_UI_BlocksSelectionViewer__AddBlockToPanel_dc6580
                  (lVar3,uVar2,
                   *(undefined8 *)(*(long *)(lVar4 + 0x10) + (long)(iVar1 + -1) * 8 + 0x20),0);
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
  uVar2 = native_sub_432808(_UnityEngine_WaitForEndOfFrame_TypeInfo_12d6738);
  native_UnityEngine_WaitForEndOfFrame___ctor_7775b8(uVar2,0);
  *(undefined8 *)(param_1 + 0x18) = uVar2;
  native_sub_4326e0(param_1 + 0x18,uVar2);
  *(undefined4 *)(param_1 + 0x10) = 1;
  return 1;
}



/* MG_BlocksEngine2.EditorScript.BE2_Inspector.<C_AddBlockToSelectionMenu>d__38$$System.Collections.Generic.IEnumerator<System.Object>.get_Current @ 0x548910
 * Il2CppObject* MG_BlocksEngine2_EditorScript_BE2_Inspector__C_AddBlockToSelectionMenu_d__38__System_Collections_Generic_IEnumerator_System_Object__get_Current (MG_BlocksEngine2_EditorScript_BE2_Inspector__C_AddBlockToSelectionMenu_d__38_o* __this, const MethodInfo* method); */

/* MG_BlocksEngine2.EditorScript.BE2_Inspector.<C_AddBlockToSelectionMenu>d__38$$System.Collections.Generic.IEnumerator<System.Object>.get_Current
   Il2CppObject*
   MG_BlocksEngine2_EditorScript_BE2_Inspector__C_AddBlockToSelectionMenu_d__38__System_Collections_Generic_IEnumerator_System_Object__get_Current
   (MG_BlocksEngine2_EditorScript_BE2_Inspector__C_AddBlockToSelectionMenu_d__38_o* __this, const
   MethodInfo* method); */

undefined8
native_MG_BlocksEngine2_EditorScript_BE2_Inspector__C_AddBlockToSelectionMenu_d__38__System_Collections_Generic_IEnumerator_System_Object__get_Current_548910
          (long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* MG_BlocksEngine2.EditorScript.BE2_Inspector.<C_AddBlockToSelectionMenu>d__38$$System.Collections.IEnumerator.Reset @ 0x548918
 * void MG_BlocksEngine2_EditorScript_BE2_Inspector__C_AddBlockToSelectionMenu_d__38__System_Collections_IEnumerator_Reset (MG_BlocksEngine2_EditorScript_BE2_Inspector__C_AddBlockToSelectionMenu_d__38_o* __this, const MethodInfo* method); */

/* MG_BlocksEngine2.EditorScript.BE2_Inspector.<C_AddBlockToSelectionMenu>d__38$$System.Collections.IEnumerator.Reset
   void 
   MG_BlocksEngine2_EditorScript_BE2_Inspector__C_AddBlockToSelectionMenu_d__38__System_Collections_IEnumerator_Reset
   (MG_BlocksEngine2_EditorScript_BE2_Inspector__C_AddBlockToSelectionMenu_d__38_o* __this, const
   MethodInfo* method); */

void native_MG_BlocksEngine2_EditorScript_BE2_Inspector__C_AddBlockToSelectionMenu_d__38__System_Collections_IEnumerator_Reset_548918
               (void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  native_sub_432740(&System_NotSupportedException_TypeInfo_12d5468);
  uVar1 = native_sub_432808();
  native_System_NotSupportedException___ctor_ad264c(uVar1,0);
  uVar2 = native_sub_432740(&
                            Method_MG_BlocksEngine2_EditorScript_BE2_Inspector__C_AddBlockToSelectionMenu_d__38_System_Collections_IEnumerator_Reset___12e9670
                           );
                    /* WARNING: Subroutine does not return */
  native_sub_4327dc(uVar1,uVar2);
}



/* MG_BlocksEngine2.EditorScript.BE2_Inspector.<C_AddBlockToSelectionMenu>d__38$$System.Collections.IEnumerator.get_Current @ 0x548958
 * Il2CppObject* MG_BlocksEngine2_EditorScript_BE2_Inspector__C_AddBlockToSelectionMenu_d__38__System_Collections_IEnumerator_get_Current (MG_BlocksEngine2_EditorScript_BE2_Inspector__C_AddBlockToSelectionMenu_d__38_o* __this, const MethodInfo* method); */

/* MG_BlocksEngine2.EditorScript.BE2_Inspector.<C_AddBlockToSelectionMenu>d__38$$System.Collections.IEnumerator.get_Current
   Il2CppObject*
   MG_BlocksEngine2_EditorScript_BE2_Inspector__C_AddBlockToSelectionMenu_d__38__System_Collections_IEnumerator_get_Current
   (MG_BlocksEngine2_EditorScript_BE2_Inspector__C_AddBlockToSelectionMenu_d__38_o* __this, const
   MethodInfo* method); */

undefined8
native_MG_BlocksEngine2_EditorScript_BE2_Inspector__C_AddBlockToSelectionMenu_d__38__System_Collections_IEnumerator_get_Current_548958
          (long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}


