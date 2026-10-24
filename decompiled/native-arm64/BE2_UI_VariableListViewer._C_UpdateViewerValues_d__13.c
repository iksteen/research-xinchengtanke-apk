/* ARM64 IL2CPP native pseudocode from Ghidra.
 * Recovered implementation, not original C# source.
 * Function boundaries follow the IL2CPP method address table. */


/* MG_BlocksEngine2.UI.BE2_UI_VariableListViewer.<C_UpdateViewerValues>d__13$$.ctor @ 0x54921c
 * void MG_BlocksEngine2_UI_BE2_UI_VariableListViewer__C_UpdateViewerValues_d__13___ctor (MG_BlocksEngine2_UI_BE2_UI_VariableListViewer__C_UpdateViewerValues_d__13_o* __this, int32_t __1__state, const MethodInfo* method); */

/* MG_BlocksEngine2.UI.BE2_UI_VariableListViewer.<C_UpdateViewerValues>d__13$$.ctor
   void MG_BlocksEngine2_UI_BE2_UI_VariableListViewer__C_UpdateViewerValues_d__13___ctor
   (MG_BlocksEngine2_UI_BE2_UI_VariableListViewer__C_UpdateViewerValues_d__13_o* __this, int32_t
   __1__state, const MethodInfo* method); */

void native_MG_BlocksEngine2_UI_BE2_UI_VariableListViewer__C_UpdateViewerValues_d__13___ctor_54921c
               (long param_1,undefined4 param_2)

{
  native_System_Object___ctor_ad2798(param_1,0);
  *(undefined4 *)(param_1 + 0x10) = param_2;
  return;
}



/* MG_BlocksEngine2.UI.BE2_UI_VariableListViewer.<C_UpdateViewerValues>d__13$$System.IDisposable.Dispose @ 0x549248
 * void MG_BlocksEngine2_UI_BE2_UI_VariableListViewer__C_UpdateViewerValues_d__13__System_IDisposable_Dispose (MG_BlocksEngine2_UI_BE2_UI_VariableListViewer__C_UpdateViewerValues_d__13_o* __this, const MethodInfo* method); */

/* MG_BlocksEngine2.UI.BE2_UI_VariableListViewer.<C_UpdateViewerValues>d__13$$System.IDisposable.Dispose
   void 
   MG_BlocksEngine2_UI_BE2_UI_VariableListViewer__C_UpdateViewerValues_d__13__System_IDisposable_Dispose
   (MG_BlocksEngine2_UI_BE2_UI_VariableListViewer__C_UpdateViewerValues_d__13_o* __this, const
   MethodInfo* method); */

void native_MG_BlocksEngine2_UI_BE2_UI_VariableListViewer__C_UpdateViewerValues_d__13__System_IDisposable_Dispose_549248
               (void)

{
  return;
}



/* MG_BlocksEngine2.UI.BE2_UI_VariableListViewer.<C_UpdateViewerValues>d__13$$MoveNext @ 0x54924c
 * bool MG_BlocksEngine2_UI_BE2_UI_VariableListViewer__C_UpdateViewerValues_d__13__MoveNext (MG_BlocksEngine2_UI_BE2_UI_VariableListViewer__C_UpdateViewerValues_d__13_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MG_BlocksEngine2.UI.BE2_UI_VariableListViewer.<C_UpdateViewerValues>d__13$$MoveNext
   bool MG_BlocksEngine2_UI_BE2_UI_VariableListViewer__C_UpdateViewerValues_d__13__MoveNext
   (MG_BlocksEngine2_UI_BE2_UI_VariableListViewer__C_UpdateViewerValues_d__13_o* __this, const
   MethodInfo* method); */

undefined8
native_MG_BlocksEngine2_UI_BE2_UI_VariableListViewer__C_UpdateViewerValues_d__13__MoveNext_54924c
          (long param_1)

{
  bool bVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  
  if ((bRam000000000133e9b0 & 1) == 0) {
    native_sub_43273c(&MG_BlocksEngine2_Environment_BE2_VariablesListManager_TypeInfo_12d3a88);
    native_sub_43273c(&Method_UnityEngine_Component_GetComponent_BE2_UI_ListItem____12e2968);
    native_sub_43273c(&Method_System_Collections_Generic_List_string__get_Count___12dcef8);
    native_sub_43273c(&Method_System_Collections_Generic_List_string__get_Item___12dcf00);
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    native_sub_43273c(&UnityEngine_WaitForEndOfFrame_TypeInfo_12d6738);
    bRam000000000133e9b0 = 1;
  }
  if (*(int *)(param_1 + 0x10) == 1) {
    lVar7 = *(long *)(param_1 + 0x20);
    *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
    if ((lVar7 == 0) ||
       (**(long **)(_MG_BlocksEngine2_Environment_BE2_VariablesListManager_TypeInfo_12d3a88 + 0xb8)
        == 0)) {
LAB_005494cc:
                    /* WARNING: Subroutine does not return */
      native_sub_432810();
    }
    lVar3 = native_MG_BlocksEngine2_Environment_BE2_VariablesListManager__GetListStringValues_dcdf18
                      (**(long **)(
                                  _MG_BlocksEngine2_Environment_BE2_VariablesListManager_TypeInfo_12d3a88
                                  + 0xb8),*(undefined8 *)(lVar7 + 0x18),0);
    uVar8 = 0;
    do {
      if (((*(long *)(lVar7 + 0x28) == 0) ||
          (lVar4 = native_UnityEngine_Transform__GetChild_772ef0
                             (*(long *)(lVar7 + 0x28),uVar8 & 0xffffffff,0), lVar4 == 0)) ||
         (lVar4 = native_UnityEngine_Component__GetComponent_ActiveAnimation__49daec
                            (lVar4,
                             _Method_UnityEngine_Component_GetComponent_BE2_UI_ListItem____12e2968),
         lVar3 == 0)) goto LAB_005494cc;
      lVar6 = (long)*(int *)(lVar3 + 0x18);
      if ((long)uVar8 < lVar6) {
        if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
           (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
          native_sub_4327ec();
        }
        uVar5 = native_UnityEngine_Object__op_Implicit_8e1b98(lVar4,0);
        if ((uVar5 & 1) == 0) {
          lVar6 = (long)*(int *)(lVar3 + 0x18);
          goto LAB_00549400;
        }
        if (lVar4 == 0) goto LAB_005494cc;
        lVar4 = *(long *)(lVar4 + 0x20);
        if (*(uint *)(lVar3 + 0x18) <= uVar8) {
          native_System_ThrowHelper__ThrowArgumentOutOfRangeException_9fe0f4(0);
        }
        if (lVar4 == 0) goto LAB_005494cc;
        native_TMPro_TMP_InputField__set_text_88acec
                  (lVar4,*(undefined8 *)(*(long *)(lVar3 + 0x10) + uVar8 * 8 + 0x20),0);
      }
      else {
LAB_00549400:
        if ((long)uVar8 < lVar6) {
          if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
             (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
            native_sub_4327ec();
          }
          uVar5 = native_UnityEngine_Object__op_Implicit_8e1b98(lVar4,0);
          lVar6 = (long)(int)*(uint *)(lVar3 + 0x18);
          if ((uVar5 & 1) == 0) {
            if (*(uint *)(lVar3 + 0x18) <= uVar8) {
              native_System_ThrowHelper__ThrowArgumentOutOfRangeException_9fe0f4(0);
            }
            native_MG_BlocksEngine2_UI_BE2_UI_VariableListViewer__AddListItem_dccb64
                      (lVar7,*(undefined8 *)(*(long *)(lVar3 + 0x10) + uVar8 * 8 + 0x20),0,0);
            goto LAB_005494a4;
          }
        }
        if ((long)uVar8 < lVar6) {
          return 0;
        }
        if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
           (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
          native_sub_4327ec();
        }
        uVar5 = native_UnityEngine_Object__op_Implicit_8e1b98(lVar4,0);
        if ((uVar5 & 1) == 0) {
          return 0;
        }
        if (lVar4 == 0) goto LAB_005494cc;
        native_MG_BlocksEngine2_UI_BE2_UI_ListItem__RemoveItem_dc8ce8(lVar4,0);
      }
LAB_005494a4:
      bVar1 = uVar8 < 9999;
      uVar8 = uVar8 + 1;
    } while (bVar1);
  }
  else if (*(int *)(param_1 + 0x10) == 0) {
    *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
    uVar2 = native_sub_432808(_UnityEngine_WaitForEndOfFrame_TypeInfo_12d6738);
    native_UnityEngine_WaitForEndOfFrame___ctor_7775b8(uVar2,0);
    *(undefined8 *)(param_1 + 0x18) = uVar2;
    native_sub_4326e0(param_1 + 0x18,uVar2);
    *(undefined4 *)(param_1 + 0x10) = 1;
    return 1;
  }
  return 0;
}



/* MG_BlocksEngine2.UI.BE2_UI_VariableListViewer.<C_UpdateViewerValues>d__13$$System.Collections.Generic.IEnumerator<System.Object>.get_Current @ 0x5494d0
 * Il2CppObject* MG_BlocksEngine2_UI_BE2_UI_VariableListViewer__C_UpdateViewerValues_d__13__System_Collections_Generic_IEnumerator_System_Object__get_Current (MG_BlocksEngine2_UI_BE2_UI_VariableListViewer__C_UpdateViewerValues_d__13_o* __this, const MethodInfo* method); */

/* MG_BlocksEngine2.UI.BE2_UI_VariableListViewer.<C_UpdateViewerValues>d__13$$System.Collections.Generic.IEnumerator<System.Object>.get_Current
   Il2CppObject*
   MG_BlocksEngine2_UI_BE2_UI_VariableListViewer__C_UpdateViewerValues_d__13__System_Collections_Generic_IEnumerator_System_Object__get_Current
   (MG_BlocksEngine2_UI_BE2_UI_VariableListViewer__C_UpdateViewerValues_d__13_o* __this, const
   MethodInfo* method); */

undefined8
native_MG_BlocksEngine2_UI_BE2_UI_VariableListViewer__C_UpdateViewerValues_d__13__System_Collections_Generic_IEnumerator_System_Object__get_Current_5494d0
          (long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* MG_BlocksEngine2.UI.BE2_UI_VariableListViewer.<C_UpdateViewerValues>d__13$$System.Collections.IEnumerator.Reset @ 0x5494d8
 * void MG_BlocksEngine2_UI_BE2_UI_VariableListViewer__C_UpdateViewerValues_d__13__System_Collections_IEnumerator_Reset (MG_BlocksEngine2_UI_BE2_UI_VariableListViewer__C_UpdateViewerValues_d__13_o* __this, const MethodInfo* method); */

/* MG_BlocksEngine2.UI.BE2_UI_VariableListViewer.<C_UpdateViewerValues>d__13$$System.Collections.IEnumerator.Reset
   void 
   MG_BlocksEngine2_UI_BE2_UI_VariableListViewer__C_UpdateViewerValues_d__13__System_Collections_IEnumerator_Reset
   (MG_BlocksEngine2_UI_BE2_UI_VariableListViewer__C_UpdateViewerValues_d__13_o* __this, const
   MethodInfo* method); */

void native_MG_BlocksEngine2_UI_BE2_UI_VariableListViewer__C_UpdateViewerValues_d__13__System_Collections_IEnumerator_Reset_5494d8
               (void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  native_sub_432740(&System_NotSupportedException_TypeInfo_12d5468);
  uVar1 = native_sub_432808();
  native_System_NotSupportedException___ctor_ad264c(uVar1,0);
  uVar2 = native_sub_432740(&
                            Method_MG_BlocksEngine2_UI_BE2_UI_VariableListViewer__C_UpdateViewerValues_d__13_System_Collections_IEnumerator_Reset___12e96c8
                           );
                    /* WARNING: Subroutine does not return */
  native_sub_4327dc(uVar1,uVar2);
}



/* MG_BlocksEngine2.UI.BE2_UI_VariableListViewer.<C_UpdateViewerValues>d__13$$System.Collections.IEnumerator.get_Current @ 0x549518
 * Il2CppObject* MG_BlocksEngine2_UI_BE2_UI_VariableListViewer__C_UpdateViewerValues_d__13__System_Collections_IEnumerator_get_Current (MG_BlocksEngine2_UI_BE2_UI_VariableListViewer__C_UpdateViewerValues_d__13_o* __this, const MethodInfo* method); */

/* MG_BlocksEngine2.UI.BE2_UI_VariableListViewer.<C_UpdateViewerValues>d__13$$System.Collections.IEnumerator.get_Current
   Il2CppObject*
   MG_BlocksEngine2_UI_BE2_UI_VariableListViewer__C_UpdateViewerValues_d__13__System_Collections_IEnumerator_get_Current
   (MG_BlocksEngine2_UI_BE2_UI_VariableListViewer__C_UpdateViewerValues_d__13_o* __this, const
   MethodInfo* method); */

undefined8
native_MG_BlocksEngine2_UI_BE2_UI_VariableListViewer__C_UpdateViewerValues_d__13__System_Collections_IEnumerator_get_Current_549518
          (long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}


