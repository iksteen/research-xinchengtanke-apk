/* ARM64 IL2CPP native pseudocode from Ghidra.
 * Recovered implementation, not original C# source.
 * Function boundaries follow the IL2CPP method address table. */


/* MG_BlocksEngine2.UI.BE2_UI_SaveLoadContextMenu.<>c__DisplayClass18_0$$.ctor @ 0x548eb8
 * void MG_BlocksEngine2_UI_BE2_UI_SaveLoadContextMenu___c__DisplayClass18_0___ctor (MG_BlocksEngine2_UI_BE2_UI_SaveLoadContextMenu___c__DisplayClass18_0_o* __this, const MethodInfo* method); */

/* MG_BlocksEngine2.UI.BE2_UI_SaveLoadContextMenu.<>c__DisplayClass18_0$$.ctor
   void MG_BlocksEngine2_UI_BE2_UI_SaveLoadContextMenu___c__DisplayClass18_0___ctor
   (MG_BlocksEngine2_UI_BE2_UI_SaveLoadContextMenu___c__DisplayClass18_0_o* __this, const
   MethodInfo* method); */

void native_MG_BlocksEngine2_UI_BE2_UI_SaveLoadContextMenu___c__DisplayClass18_0___ctor_548eb8(void)

{
  return;
}



/* MG_BlocksEngine2.UI.BE2_UI_SaveLoadContextMenu.<>c__DisplayClass18_0$$<RefreshScrollValues>b__0 @ 0x548ec0
 * void MG_BlocksEngine2_UI_BE2_UI_SaveLoadContextMenu___c__DisplayClass18_0___RefreshScrollValues_b__0 (MG_BlocksEngine2_UI_BE2_UI_SaveLoadContextMenu___c__DisplayClass18_0_o* __this, bool _p0_, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MG_BlocksEngine2.UI.BE2_UI_SaveLoadContextMenu.<>c__DisplayClass18_0$$<RefreshScrollValues>b__0
   void 
   MG_BlocksEngine2_UI_BE2_UI_SaveLoadContextMenu___c__DisplayClass18_0___RefreshScrollValues_b__0
   (MG_BlocksEngine2_UI_BE2_UI_SaveLoadContextMenu___c__DisplayClass18_0_o* __this, bool _p0_, const
   MethodInfo* method); */

void native_MG_BlocksEngine2_UI_BE2_UI_SaveLoadContextMenu___c__DisplayClass18_0___RefreshScrollValues_b__0_548ec0
               (long param_1)

{
  long *plVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  long *plVar8;
  code *pcVar9;
  long lVar10;
  long lVar11;
  long *plVar12;
  ulong uVar13;
  
  if ((*(long *)(param_1 + 0x18) != 0) && (*(long *)(param_1 + 0x10) != 0)) {
    lVar10 = *(long *)(*(long *)(param_1 + 0x18) + 0x48);
    uVar3 = native_UnityEngine_Component__get_transform_8da62c(*(long *)(param_1 + 0x10),0);
    lVar4 = native_MG_BlocksEngine2_Utils_BE2_Text__GetBE2TextInChildren_61a254(uVar3,0);
    if ((lVar4 != 0) &&
       (lVar4 = native_MG_BlocksEngine2_Utils_BE2_Text__get_text_61a754(lVar4,0), lVar10 != 0)) {
      if ((bRam0000000001340727 & 1) == 0) {
        native_sub_43273c(&string_TypeInfo_12d5f28);
        native_sub_43273c(&StringLiteral___12eaac8);
        native_sub_43273c(&StringLiteral__12eaac0);
        bRam0000000001340727 = 1;
      }
      uVar5 = native_System_String__op_Equality_afc18c(*(undefined8 *)(lVar10 + 0x218),lVar4,0);
      if ((uVar5 & 1) != 0) {
        return;
      }
      lVar6 = _StringLiteral__12eaac0;
      if (lVar4 != 0) {
        lVar6 = lVar4;
      }
      if (lVar6 != 0) {
        uVar3 = native_System_String__Replace_afd9ac
                          (lVar6,_StringLiteral___12eaac8,
                           **(undefined8 **)(_string_TypeInfo_12d5f28 + 0xb8),0);
        *(undefined8 *)(lVar10 + 0x218) = uVar3;
        native_sub_4326e0((undefined8 *)(lVar10 + 0x218),uVar3);
        if (*(long *)(lVar10 + 0xf8) != 0) {
          native_UnityEngine_TouchScreenKeyboard__set_text_77103c
                    (*(long *)(lVar10 + 0xf8),*(undefined8 *)(lVar10 + 0x218),0);
        }
        if (*(long *)(lVar10 + 0x218) != 0) {
          iVar2 = *(int *)(*(long *)(lVar10 + 0x218) + 0x10);
          if (iVar2 < *(int *)(lVar10 + 0x22c)) {
            *(int *)(lVar10 + 0x230) = iVar2;
            *(int *)(lVar10 + 0x22c) = iVar2;
          }
          else if (iVar2 < *(int *)(lVar10 + 0x230)) {
            *(int *)(lVar10 + 0x230) = iVar2;
          }
          *(undefined1 *)(lVar10 + 0x2e3) = 1;
          *(undefined1 *)(lVar10 + 0x2a2) = 1;
          native_TMPro_TMP_InputField__UpdateLabel_88ae40(lVar10);
          if ((bRam0000000001340759 & 1) == 0) {
            native_sub_43273c(&Method_UnityEngine_Events_UnityEvent_string__Invoke___12de4f0);
            bRam0000000001340759 = 1;
          }
          lVar4 = _Method_UnityEngine_Events_UnityEvent_string__Invoke___12de4f0;
          lVar6 = *(long *)(lVar10 + 0x1d8);
          if (lVar6 == 0) {
            return;
          }
          lVar10 = *(long *)(lVar10 + 0x218);
          if ((bRam00000000013407b1 & 1) == 0) {
            native_sub_43273c(&UnityEngine_Events_InvokableCall_TypeInfo_12d4f78);
            native_sub_43273c(&
                              Method_System_Collections_Generic_List_BaseInvokableCall__get_Count___12dc5d0
                             );
            native_sub_43273c(&
                              Method_System_Collections_Generic_List_BaseInvokableCall__get_Item___12dc5d8
                             );
            native_sub_43273c(&object___TypeInfo_12d32d8);
            bRam00000000013407b1 = 1;
          }
          if ((lVar6 != 0) &&
             (lVar7 = native_UnityEngine_Events_UnityEventBase__PrepareInvoke_773a28(lVar6,0),
             lVar7 != 0)) {
            uVar5 = (ulong)*(uint *)(lVar7 + 0x18);
            if (0 < (int)*(uint *)(lVar7 + 0x18)) {
              plVar1 = (long *)(lVar6 + 0x28);
              lVar6 = 4;
              do {
                uVar13 = lVar6 - 4;
                if ((uVar5 & 0xffffffff) <= uVar13) {
                  native_System_ThrowHelper__ThrowArgumentOutOfRangeException_9fe0f4(0);
                }
                lVar11 = *(long *)(*(long *)(*(long *)(lVar4 + 0x18) + 0xc0) + 0x18);
                uVar3 = *(undefined8 *)(*(long *)(lVar7 + 0x10) + lVar6 * 8);
                if ((*(byte *)(lVar11 + 0x132) & 1) == 0) {
                  native_sub_3c9850(lVar11);
                }
                plVar8 = (long *)native_sub_4327f8(uVar3,lVar11);
                if (plVar8 == (long *)0x0) {
                  if (*(uint *)(lVar7 + 0x18) <= uVar13) {
                    native_System_ThrowHelper__ThrowArgumentOutOfRangeException_9fe0f4(0);
                  }
                  lVar11 = native_sub_4327f8(*(undefined8 *)(*(long *)(lVar7 + 0x10) + lVar6 * 8),
                                             _UnityEngine_Events_InvokableCall_TypeInfo_12d4f78);
                  if (lVar11 == 0) {
                    if (*(uint *)(lVar7 + 0x18) <= uVar13) {
                      native_System_ThrowHelper__ThrowArgumentOutOfRangeException_9fe0f4(0);
                    }
                    plVar12 = (long *)*plVar1;
                    plVar8 = *(long **)(*(long *)(lVar7 + 0x10) + lVar6 * 8);
                    if (plVar12 == (long *)0x0) {
                      lVar11 = native_sub_432750(_object___TypeInfo_12d32d8,1);
                      *plVar1 = lVar11;
                      native_sub_4326e0(plVar1,lVar11);
                      plVar12 = (long *)*plVar1;
                      if (plVar12 == (long *)0x0) goto code_r0x008a0300;
                    }
                    if ((lVar10 != 0) &&
                       (lVar11 = native_sub_4327f8(lVar10,*(undefined8 *)(*plVar12 + 0x40)),
                       lVar11 == 0)) {
                      uVar3 = native_sub_432830();
                    /* WARNING: Subroutine does not return */
                      native_sub_4327dc(uVar3,0);
                    }
                    if ((int)plVar12[3] == 0) {
                      uVar3 = native_sub_43283c();
                    /* WARNING: Subroutine does not return */
                      native_sub_4327dc(uVar3,0);
                    }
                    plVar12[4] = lVar10;
                    native_sub_4326e0(plVar12 + 4,lVar10);
                    if (plVar8 != (long *)0x0) {
                      lVar11 = *plVar1;
                      pcVar9 = *(code **)(*plVar8 + 0x178);
                      uVar3 = *(undefined8 *)(*plVar8 + 0x180);
                      goto code_r0x008a0298;
                    }
                    goto code_r0x008a0300;
                  }
                  native_UnityEngine_Events_InvokableCall__Invoke_8df658(lVar11,0);
                }
                else {
                  pcVar9 = *(code **)(*plVar8 + 0x198);
                  uVar3 = *(undefined8 *)(*plVar8 + 0x1a0);
                  lVar11 = lVar10;
code_r0x008a0298:
                  (*pcVar9)(plVar8,lVar11,uVar3);
                }
                uVar5 = (ulong)*(int *)(lVar7 + 0x18);
                lVar11 = lVar6 + -3;
                lVar6 = lVar6 + 1;
              } while (lVar11 < (long)uVar5);
            }
            return;
          }
code_r0x008a0300:
                    /* WARNING: Subroutine does not return */
          native_sub_432810();
        }
      }
                    /* WARNING: Subroutine does not return */
      native_sub_432810();
    }
  }
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}


