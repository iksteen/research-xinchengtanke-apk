/* ARM64 IL2CPP native pseudocode from Ghidra.
 * Recovered implementation, not original C# source.
 * Function boundaries follow the IL2CPP method address table. */


/* MG_BlocksEngine2.Utils.BE2_BlockUtils$$RemoveEngineComponents @ 0x568e28
 * void MG_BlocksEngine2_Utils_BE2_BlockUtils__RemoveEngineComponents (UnityEngine_Transform_o* blockTransform, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MG_BlocksEngine2.Utils.BE2_BlockUtils$$RemoveEngineComponents
   void MG_BlocksEngine2_Utils_BE2_BlockUtils__RemoveEngineComponents (UnityEngine_Transform_o*
   blockTransform, const MethodInfo* method); */

void native_MG_BlocksEngine2_Utils_BE2_BlockUtils__RemoveEngineComponents_568e28(long param_1)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  int iVar4;
  ulong uVar5;
  long *plVar6;
  
  if ((bRam000000000133ea6c & 1) == 0) {
    native_sub_43273c(&
                      Method_UnityEngine_Component_GetComponentInChildren_BE2_SpotOuterArea____12e2c68
                     );
    native_sub_43273c(&Method_UnityEngine_Component_GetComponent_I_BE2_BlockLayout____12e2a10);
    native_sub_43273c(&Method_UnityEngine_Component_GetComponent_I_BE2_Block____12e2a08);
    native_sub_43273c(&Method_UnityEngine_Component_GetComponent_I_BE2_BlocksStack____12e2a40);
    native_sub_43273c(&Method_UnityEngine_Component_GetComponent_I_BE2_Drag____12e2a48);
    native_sub_43273c(&Method_UnityEngine_Component_GetComponent_I_BE2_Instruction____12e2a50);
    native_sub_43273c(&
                      Method_UnityEngine_Component_GetComponentsInChildren_I_BE2_BlockSectionBody____12e2df8
                     );
    native_sub_43273c(&
                      Method_UnityEngine_Component_GetComponentsInChildren_I_BE2_BlockSectionHeaderItem____12e2e08
                     );
    native_sub_43273c(&
                      Method_UnityEngine_Component_GetComponentsInChildren_I_BE2_BlockSectionHeader____12e2e00
                     );
    native_sub_43273c(&
                      Method_UnityEngine_Component_GetComponentsInChildren_I_BE2_BlockSection____12e2df0
                     );
    native_sub_43273c(&Method_UnityEngine_Component_GetComponentsInChildren_I_BE2_Spot____12e2e10);
    native_sub_43273c(&UnityEngine_MonoBehaviour_TypeInfo_12d52e8);
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    bRam000000000133ea6c = 1;
  }
  if ((param_1 != 0) &&
     (lVar2 = native_UnityEngine_Component__GetComponentsInChildren_BE2_UI_SelectionPanel__49de1c
                        (param_1,
                         _Method_UnityEngine_Component_GetComponentsInChildren_I_BE2_BlockSectionHeaderItem____12e2e08
                        ), lVar2 != 0)) {
    iVar4 = (int)*(ulong *)(lVar2 + 0x18);
    iVar1 = iVar4 + -1;
    if (iVar1 < 0) {
LAB_00568fc8:
      lVar2 = native_UnityEngine_Component__GetComponentsInChildren_BE2_UI_SelectionPanel__49de1c
                        (param_1,
                         _Method_UnityEngine_Component_GetComponentsInChildren_I_BE2_BlockSection____12e2df0
                        );
      if (lVar2 == 0) goto LAB_00569624;
      iVar4 = (int)*(ulong *)(lVar2 + 0x18);
      iVar1 = iVar4 + -1;
      if (iVar1 < 0) {
LAB_00569098:
        lVar2 = native_UnityEngine_Component__GetComponentsInChildren_BE2_UI_SelectionPanel__49de1c
                          (param_1,
                           _Method_UnityEngine_Component_GetComponentsInChildren_I_BE2_BlockSectionBody____12e2df8
                          );
        if (lVar2 == 0) goto LAB_00569624;
        iVar4 = (int)*(ulong *)(lVar2 + 0x18);
        iVar1 = iVar4 + -1;
        if (iVar1 < 0) {
LAB_00569168:
          lVar2 = native_UnityEngine_Component__GetComponentsInChildren_BE2_UI_SelectionPanel__49de1c
                            (param_1,
                             _Method_UnityEngine_Component_GetComponentsInChildren_I_BE2_BlockSectionHeader____12e2e00
                            );
          if (lVar2 == 0) goto LAB_00569624;
          iVar4 = (int)*(ulong *)(lVar2 + 0x18);
          iVar1 = iVar4 + -1;
          if (iVar1 < 0) {
LAB_00569238:
            lVar2 = native_UnityEngine_Component__GetComponentInChildren_Animation__49db98
                              (param_1,
                               _Method_UnityEngine_Component_GetComponentInChildren_BE2_SpotOuterArea____12e2c68
                              );
            if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
               (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
              native_sub_4327ec(_UnityEngine_Object_TypeInfo_12d54e0);
            }
            uVar5 = native_UnityEngine_Object__op_Implicit_8e1b98(lVar2,0);
            if ((uVar5 & 1) != 0) {
              if ((lVar2 == 0) ||
                 (lVar2 = native_UnityEngine_Component__get_transform_8da62c(lVar2,0), lVar2 == 0))
              goto LAB_00569624;
              uVar3 = native_UnityEngine_Component__get_gameObject_8da66c(lVar2,0);
              if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
                 (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
                native_sub_4327ec(_UnityEngine_Object_TypeInfo_12d54e0);
              }
              native_UnityEngine_Object__DestroyImmediate_8ea648(uVar3,0);
            }
            lVar2 = native_UnityEngine_Component__GetComponentsInChildren_BE2_UI_SelectionPanel__49de1c
                              (param_1,
                               _Method_UnityEngine_Component_GetComponentsInChildren_I_BE2_Spot____12e2e10
                              );
            if (lVar2 == 0) goto LAB_00569624;
            iVar4 = (int)*(ulong *)(lVar2 + 0x18);
            iVar1 = iVar4 + -1;
            if (iVar1 < 0) {
LAB_00569394:
              plVar6 = (long *)native_UnityEngine_Component__GetComponent_ActiveAnimation__49daec
                                         (param_1,
                                          _Method_UnityEngine_Component_GetComponent_I_BE2_Drag____12e2a48
                                         );
              if (plVar6 != (long *)0x0) {
                if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
                   (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
                  native_sub_4327ec();
                }
                if (*(byte *)(*plVar6 + 300) <
                    *(byte *)(_UnityEngine_MonoBehaviour_TypeInfo_12d52e8 + 300)) {
                  plVar6 = (long *)0x0;
                }
                else if (*(long *)(*(long *)(*plVar6 + 200) +
                                   (ulong)*(byte *)(_UnityEngine_MonoBehaviour_TypeInfo_12d52e8 +
                                                   300) * 8 + -8) !=
                         _UnityEngine_MonoBehaviour_TypeInfo_12d52e8) {
                  plVar6 = (long *)0x0;
                }
                native_UnityEngine_Object__DestroyImmediate_8ea648(plVar6,0);
              }
              plVar6 = (long *)native_UnityEngine_Component__GetComponent_ActiveAnimation__49daec
                                         (param_1,
                                          _Method_UnityEngine_Component_GetComponent_I_BE2_Instruction____12e2a50
                                         );
              if (plVar6 != (long *)0x0) {
                if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
                   (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
                  native_sub_4327ec();
                }
                if (*(byte *)(*plVar6 + 300) <
                    *(byte *)(_UnityEngine_MonoBehaviour_TypeInfo_12d52e8 + 300)) {
                  plVar6 = (long *)0x0;
                }
                else if (*(long *)(*(long *)(*plVar6 + 200) +
                                   (ulong)*(byte *)(_UnityEngine_MonoBehaviour_TypeInfo_12d52e8 +
                                                   300) * 8 + -8) !=
                         _UnityEngine_MonoBehaviour_TypeInfo_12d52e8) {
                  plVar6 = (long *)0x0;
                }
                native_UnityEngine_Object__DestroyImmediate_8ea648(plVar6,0);
              }
              plVar6 = (long *)native_UnityEngine_Component__GetComponent_ActiveAnimation__49daec
                                         (param_1,
                                          _Method_UnityEngine_Component_GetComponent_I_BE2_BlockLayout____12e2a10
                                         );
              if (plVar6 != (long *)0x0) {
                if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
                   (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
                  native_sub_4327ec();
                }
                if (*(byte *)(*plVar6 + 300) <
                    *(byte *)(_UnityEngine_MonoBehaviour_TypeInfo_12d52e8 + 300)) {
                  plVar6 = (long *)0x0;
                }
                else if (*(long *)(*(long *)(*plVar6 + 200) +
                                   (ulong)*(byte *)(_UnityEngine_MonoBehaviour_TypeInfo_12d52e8 +
                                                   300) * 8 + -8) !=
                         _UnityEngine_MonoBehaviour_TypeInfo_12d52e8) {
                  plVar6 = (long *)0x0;
                }
                native_UnityEngine_Object__DestroyImmediate_8ea648(plVar6,0);
              }
              plVar6 = (long *)native_UnityEngine_Component__GetComponent_ActiveAnimation__49daec
                                         (param_1,
                                          _Method_UnityEngine_Component_GetComponent_I_BE2_Block____12e2a08
                                         );
              if (plVar6 != (long *)0x0) {
                if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
                   (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
                  native_sub_4327ec();
                }
                if (*(byte *)(*plVar6 + 300) <
                    *(byte *)(_UnityEngine_MonoBehaviour_TypeInfo_12d52e8 + 300)) {
                  plVar6 = (long *)0x0;
                }
                else if (*(long *)(*(long *)(*plVar6 + 200) +
                                   (ulong)*(byte *)(_UnityEngine_MonoBehaviour_TypeInfo_12d52e8 +
                                                   300) * 8 + -8) !=
                         _UnityEngine_MonoBehaviour_TypeInfo_12d52e8) {
                  plVar6 = (long *)0x0;
                }
                native_UnityEngine_Object__DestroyImmediate_8ea648(plVar6,0);
              }
              plVar6 = (long *)native_UnityEngine_Component__GetComponent_ActiveAnimation__49daec
                                         (param_1,
                                          _Method_UnityEngine_Component_GetComponent_I_BE2_BlocksStack____12e2a40
                                         );
              if (plVar6 == (long *)0x0) {
                return;
              }
              if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
                 (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
                native_sub_4327ec();
              }
              if (*(byte *)(*plVar6 + 300) <
                  *(byte *)(_UnityEngine_MonoBehaviour_TypeInfo_12d52e8 + 300)) {
                plVar6 = (long *)0x0;
              }
              else if (*(long *)(*(long *)(*plVar6 + 200) +
                                 (ulong)*(byte *)(_UnityEngine_MonoBehaviour_TypeInfo_12d52e8 + 300)
                                 * 8 + -8) != _UnityEngine_MonoBehaviour_TypeInfo_12d52e8) {
                plVar6 = (long *)0x0;
              }
              if ((bRam0000000001341058 & 1) == 0) {
                native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0,0);
                bRam0000000001341058 = 1;
              }
              if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
                 (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
                native_sub_4327ec();
              }
              if (pcRam0000000001341050 == (code *)0x0) {
                pcRam0000000001341050 = (code *)native_sub_4326f0(&UNK_00e2f80d);
              }
                    /* WARNING: Could not recover jumptable at 0x008ea6c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
              (*pcRam0000000001341050)(plVar6,0);
              return;
            }
            if ((ulong)(long)iVar1 < (*(ulong *)(lVar2 + 0x18) & 0xffffffff)) {
              uVar5 = (ulong)iVar1;
              iVar4 = iVar4 + -2;
              do {
                plVar6 = *(long **)(lVar2 + uVar5 * 8 + 0x20);
                if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) == 0) ||
                   (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) != 0)) {
                  if (plVar6 != (long *)0x0) goto LAB_00569330;
LAB_00569348:
                  plVar6 = (long *)0x0;
                }
                else {
                  native_sub_4327ec();
                  if (plVar6 == (long *)0x0) goto LAB_00569348;
LAB_00569330:
                  if (*(byte *)(*plVar6 + 300) <
                      *(byte *)(_UnityEngine_MonoBehaviour_TypeInfo_12d52e8 + 300))
                  goto LAB_00569348;
                  if (*(long *)(*(long *)(*plVar6 + 200) +
                                (ulong)*(byte *)(_UnityEngine_MonoBehaviour_TypeInfo_12d52e8 + 300)
                                * 8 + -8) != _UnityEngine_MonoBehaviour_TypeInfo_12d52e8) {
                    plVar6 = (long *)0x0;
                  }
                }
                native_UnityEngine_Object__DestroyImmediate_8ea648(plVar6,0);
                if (iVar4 < 0) goto LAB_00569394;
                uVar5 = uVar5 - 1;
                iVar4 = iVar4 + -1;
              } while (uVar5 < *(uint *)(lVar2 + 0x18));
            }
          }
          else if ((ulong)(long)iVar1 < (*(ulong *)(lVar2 + 0x18) & 0xffffffff)) {
            uVar5 = (ulong)iVar1;
            iVar4 = iVar4 + -2;
            do {
              plVar6 = *(long **)(lVar2 + uVar5 * 8 + 0x20);
              if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) == 0) ||
                 (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) != 0)) {
                if (plVar6 != (long *)0x0) goto LAB_005691d4;
LAB_005691ec:
                plVar6 = (long *)0x0;
              }
              else {
                native_sub_4327ec();
                if (plVar6 == (long *)0x0) goto LAB_005691ec;
LAB_005691d4:
                if (*(byte *)(*plVar6 + 300) <
                    *(byte *)(_UnityEngine_MonoBehaviour_TypeInfo_12d52e8 + 300)) goto LAB_005691ec;
                if (*(long *)(*(long *)(*plVar6 + 200) +
                              (ulong)*(byte *)(_UnityEngine_MonoBehaviour_TypeInfo_12d52e8 + 300) *
                              8 + -8) != _UnityEngine_MonoBehaviour_TypeInfo_12d52e8) {
                  plVar6 = (long *)0x0;
                }
              }
              native_UnityEngine_Object__DestroyImmediate_8ea648(plVar6,0);
              if (iVar4 < 0) goto LAB_00569238;
              uVar5 = uVar5 - 1;
              iVar4 = iVar4 + -1;
            } while (uVar5 < *(uint *)(lVar2 + 0x18));
          }
        }
        else if ((ulong)(long)iVar1 < (*(ulong *)(lVar2 + 0x18) & 0xffffffff)) {
          uVar5 = (ulong)iVar1;
          iVar4 = iVar4 + -2;
          do {
            plVar6 = *(long **)(lVar2 + uVar5 * 8 + 0x20);
            if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) == 0) ||
               (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) != 0)) {
              if (plVar6 != (long *)0x0) goto LAB_00569104;
LAB_0056911c:
              plVar6 = (long *)0x0;
            }
            else {
              native_sub_4327ec();
              if (plVar6 == (long *)0x0) goto LAB_0056911c;
LAB_00569104:
              if (*(byte *)(*plVar6 + 300) <
                  *(byte *)(_UnityEngine_MonoBehaviour_TypeInfo_12d52e8 + 300)) goto LAB_0056911c;
              if (*(long *)(*(long *)(*plVar6 + 200) +
                            (ulong)*(byte *)(_UnityEngine_MonoBehaviour_TypeInfo_12d52e8 + 300) * 8
                           + -8) != _UnityEngine_MonoBehaviour_TypeInfo_12d52e8) {
                plVar6 = (long *)0x0;
              }
            }
            native_UnityEngine_Object__DestroyImmediate_8ea648(plVar6,0);
            if (iVar4 < 0) goto LAB_00569168;
            uVar5 = uVar5 - 1;
            iVar4 = iVar4 + -1;
          } while (uVar5 < *(uint *)(lVar2 + 0x18));
        }
      }
      else if ((ulong)(long)iVar1 < (*(ulong *)(lVar2 + 0x18) & 0xffffffff)) {
        uVar5 = (ulong)iVar1;
        iVar4 = iVar4 + -2;
        do {
          plVar6 = *(long **)(lVar2 + uVar5 * 8 + 0x20);
          if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) == 0) ||
             (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) != 0)) {
            if (plVar6 != (long *)0x0) goto LAB_00569034;
LAB_0056904c:
            plVar6 = (long *)0x0;
          }
          else {
            native_sub_4327ec();
            if (plVar6 == (long *)0x0) goto LAB_0056904c;
LAB_00569034:
            if (*(byte *)(*plVar6 + 300) <
                *(byte *)(_UnityEngine_MonoBehaviour_TypeInfo_12d52e8 + 300)) goto LAB_0056904c;
            if (*(long *)(*(long *)(*plVar6 + 200) +
                          (ulong)*(byte *)(_UnityEngine_MonoBehaviour_TypeInfo_12d52e8 + 300) * 8 +
                         -8) != _UnityEngine_MonoBehaviour_TypeInfo_12d52e8) {
              plVar6 = (long *)0x0;
            }
          }
          native_UnityEngine_Object__DestroyImmediate_8ea648(plVar6,0);
          if (iVar4 < 0) goto LAB_00569098;
          uVar5 = uVar5 - 1;
          iVar4 = iVar4 + -1;
        } while (uVar5 < *(uint *)(lVar2 + 0x18));
      }
    }
    else if ((ulong)(long)iVar1 < (*(ulong *)(lVar2 + 0x18) & 0xffffffff)) {
      uVar5 = (ulong)iVar1;
      iVar4 = iVar4 + -2;
      do {
        plVar6 = *(long **)(lVar2 + uVar5 * 8 + 0x20);
        if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) == 0) ||
           (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) != 0)) {
          if (plVar6 != (long *)0x0) goto LAB_00568f64;
LAB_00568f7c:
          plVar6 = (long *)0x0;
        }
        else {
          native_sub_4327ec();
          if (plVar6 == (long *)0x0) goto LAB_00568f7c;
LAB_00568f64:
          if (*(byte *)(*plVar6 + 300) <
              *(byte *)(_UnityEngine_MonoBehaviour_TypeInfo_12d52e8 + 300)) goto LAB_00568f7c;
          if (*(long *)(*(long *)(*plVar6 + 200) +
                        (ulong)*(byte *)(_UnityEngine_MonoBehaviour_TypeInfo_12d52e8 + 300) * 8 + -8
                       ) != _UnityEngine_MonoBehaviour_TypeInfo_12d52e8) {
            plVar6 = (long *)0x0;
          }
        }
        native_UnityEngine_Object__DestroyImmediate_8ea648(plVar6,0);
        if (iVar4 < 0) goto LAB_00568fc8;
        uVar5 = uVar5 - 1;
        iVar4 = iVar4 + -1;
      } while (uVar5 < *(uint *)(lVar2 + 0x18));
    }
    uVar3 = native_sub_43283c();
                    /* WARNING: Subroutine does not return */
    native_sub_4327dc(uVar3,0);
  }
LAB_00569624:
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* MG_BlocksEngine2.Utils.BE2_BlockUtils$$AddSelectionMenuComponents @ 0x569628
 * void MG_BlocksEngine2_Utils_BE2_BlockUtils__AddSelectionMenuComponents (UnityEngine_Transform_o* blockTransform, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MG_BlocksEngine2.Utils.BE2_BlockUtils$$AddSelectionMenuComponents
   void MG_BlocksEngine2_Utils_BE2_BlockUtils__AddSelectionMenuComponents (UnityEngine_Transform_o*
   blockTransform, const MethodInfo* method); */

long native_MG_BlocksEngine2_Utils_BE2_BlockUtils__AddSelectionMenuComponents_569628(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  
  if ((bRam000000000133ea6d & 1) == 0) {
    native_sub_43273c(&Method_UnityEngine_GameObject_AddComponent_BE2_DragSelectionBlock____12e4788)
    ;
    native_sub_43273c(&Method_UnityEngine_GameObject_AddComponent_BE2_UI_SelectionBlock____12e47a8);
    bRam000000000133ea6d = 1;
  }
  if ((param_1 == 0) ||
     (lVar2 = native_UnityEngine_Component__get_gameObject_8da66c(param_1,0), lVar2 == 0)) {
                    /* WARNING: Subroutine does not return */
    native_sub_432810();
  }
  native_UnityEngine_GameObject__AddComponent_ActiveAnimation__4a2118
            (lVar2,_Method_UnityEngine_GameObject_AddComponent_BE2_UI_SelectionBlock____12e47a8);
  lVar3 = _Method_UnityEngine_GameObject_AddComponent_BE2_DragSelectionBlock____12e4788;
  if ((bRam000000000133e705 & 1) == 0) {
    native_sub_43273c(&System_Type_TypeInfo_12d6340);
    bRam000000000133e705 = 1;
  }
  uVar4 = **(undefined8 **)(lVar3 + 0x30);
  if (((*(byte *)(_System_Type_TypeInfo_12d6340 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_System_Type_TypeInfo_12d6340 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar4 = native_System_Type__GetTypeFromHandle_b0fb24(uVar4,0);
  if (lVar2 != 0) {
    uVar4 = native_UnityEngine_GameObject__AddComponent_8de578(lVar2,uVar4,0);
    lVar2 = *(long *)(*(long *)(lVar3 + 0x30) + 8);
    if ((*(byte *)(lVar2 + 0x132) & 1) == 0) {
      native_sub_3c9850(lVar2);
    }
    lVar2 = native_sub_4327f8(uVar4,lVar2);
    lVar3 = *(long *)(*(long *)(lVar3 + 0x30) + 8);
    if ((*(byte *)(lVar3 + 0x132) & 1) == 0) {
      native_sub_3c9850(lVar3);
    }
    if (lVar2 != 0) {
      lVar1 = native_sub_4327f8(lVar2,lVar3);
      if (lVar1 != 0) {
        return lVar1;
      }
      native_sub_432b04(lVar2,lVar3);
    }
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* MG_BlocksEngine2.Utils.BE2_BlockUtils$$DuplicateBlock @ 0x5696ac
 * void MG_BlocksEngine2_Utils_BE2_BlockUtils__DuplicateBlock (MG_BlocksEngine2_Block_I_BE2_Block_o* block, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MG_BlocksEngine2.Utils.BE2_BlockUtils$$DuplicateBlock
   void MG_BlocksEngine2_Utils_BE2_BlockUtils__DuplicateBlock (MG_BlocksEngine2_Block_I_BE2_Block_o*
   block, const MethodInfo* method); */

void native_MG_BlocksEngine2_Utils_BE2_BlockUtils__DuplicateBlock_5696ac
               (undefined1 param_1 [16],float param_2,float param_3,long *param_4)

{
  int iVar1;
  undefined8 *puVar2;
  long *plVar3;
  undefined8 uVar4;
  long *plVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  uint uVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  int *piVar12;
  float fVar13;
  
  if ((bRam000000000133ea6e & 1) == 0) {
    native_sub_43273c(&MG_BlocksEngine2_Serializer_BE2_BlocksSerializer_TypeInfo_12d3998);
    native_sub_43273c(&
                      Method_UnityEngine_Component_GetComponentInParent_I_BE2_ProgrammingEnv____12e2d60
                     );
    native_sub_43273c(&MG_BlocksEngine2_Block_I_BE2_Block_TypeInfo_12d4dd8);
    native_sub_43273c(&MG_BlocksEngine2_Block_Instruction_I_BE2_InstructionBase_TypeInfo_12d4e30);
    native_sub_43273c(&MG_BlocksEngine2_Block_Instruction_I_BE2_Instruction_TypeInfo_12d4e28);
    native_sub_43273c(&MG_BlocksEngine2_Environment_I_BE2_ProgrammingEnv_TypeInfo_12d4e38);
    bRam000000000133ea6e = 1;
  }
  if (param_4 != (long *)0x0) {
    lVar9 = *param_4;
    if ((ulong)*(ushort *)(lVar9 + 0x12a) != 0) {
      uVar11 = 0;
      piVar12 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar12 + -2) == _MG_BlocksEngine2_Block_I_BE2_Block_TypeInfo_12d4dd8) {
          puVar2 = (undefined8 *)(lVar9 + (long)*piVar12 * 0x10 + 0x138);
          goto LAB_00569780;
        }
        uVar11 = uVar11 + 1;
        piVar12 = piVar12 + 4;
      } while (uVar11 < *(ushort *)(lVar9 + 0x12a));
    }
    puVar2 = (undefined8 *)
             native_sub_3c9b34(param_4,_MG_BlocksEngine2_Block_I_BE2_Block_TypeInfo_12d4dd8,0);
LAB_00569780:
    lVar9 = (*(code *)*puVar2)(param_4,puVar2[1]);
    if (lVar9 != 0) {
      plVar3 = (long *)native_UnityEngine_Component__GetComponentInParent_BE2_Canvas__49dc70
                                 (lVar9,
                                  _Method_UnityEngine_Component_GetComponentInParent_I_BE2_ProgrammingEnv____12e2d60
                                 );
      if (((*(byte *)(_MG_BlocksEngine2_Serializer_BE2_BlocksSerializer_TypeInfo_12d3998 + 0x133) >>
            2 & 1) != 0) &&
         (*(int *)(_MG_BlocksEngine2_Serializer_BE2_BlocksSerializer_TypeInfo_12d3998 + 0xe0) == 0))
      {
        native_sub_4327ec(_MG_BlocksEngine2_Serializer_BE2_BlocksSerializer_TypeInfo_12d3998);
      }
      uVar4 = native_MG_BlocksEngine2_Serializer_BE2_BlocksSerializer__BlockToSerializable_569b40
                        (param_4);
      plVar5 = (long *)native_MG_BlocksEngine2_Serializer_BE2_BlocksSerializer__SerializableToBlock_56b2c8
                                 (uVar4,plVar3);
      if (plVar5 != (long *)0x0) {
        lVar9 = *plVar5;
        if ((ulong)*(ushort *)(lVar9 + 0x12a) != 0) {
          uVar11 = 0;
          piVar12 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
          do {
            if (*(long *)(piVar12 + -2) == _MG_BlocksEngine2_Block_I_BE2_Block_TypeInfo_12d4dd8) {
              puVar2 = (undefined8 *)(lVar9 + (long)*piVar12 * 0x10 + 0x138);
              goto LAB_00569834;
            }
            uVar11 = uVar11 + 1;
            piVar12 = piVar12 + 4;
          } while (uVar11 < *(ushort *)(lVar9 + 0x12a));
        }
        puVar2 = (undefined8 *)
                 native_sub_3c9b34(plVar5,_MG_BlocksEngine2_Block_I_BE2_Block_TypeInfo_12d4dd8,0);
LAB_00569834:
        lVar9 = (*(code *)*puVar2)(plVar5,puVar2[1]);
        lVar10 = *param_4;
        if ((ulong)*(ushort *)(lVar10 + 0x12a) != 0) {
          uVar11 = 0;
          piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
          do {
            if (*(long *)(piVar12 + -2) == _MG_BlocksEngine2_Block_I_BE2_Block_TypeInfo_12d4dd8) {
              puVar2 = (undefined8 *)(lVar10 + (long)*piVar12 * 0x10 + 0x138);
              goto LAB_00569898;
            }
            uVar11 = uVar11 + 1;
            piVar12 = piVar12 + 4;
          } while (uVar11 < *(ushort *)(lVar10 + 0x12a));
        }
        puVar2 = (undefined8 *)
                 native_sub_3c9b34(param_4,_MG_BlocksEngine2_Block_I_BE2_Block_TypeInfo_12d4dd8,0);
LAB_00569898:
        lVar10 = (*(code *)*puVar2)(param_4,puVar2[1]);
        if ((lVar10 != 0) &&
           (fVar13 = (float)native_UnityEngine_Transform__get_position_77169c(lVar10,0), lVar9 != 0)
           ) {
          native_UnityEngine_Transform__set_position_77174c
                    (fVar13 + 10.0,param_2 + 10.0,param_3 + 0.0,lVar9,0);
          lVar9 = *plVar5;
          if ((ulong)*(ushort *)(lVar9 + 0x12a) != 0) {
            uVar11 = 0;
            piVar12 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
            do {
              if (*(long *)(piVar12 + -2) == _MG_BlocksEngine2_Block_I_BE2_Block_TypeInfo_12d4dd8) {
                puVar2 = (undefined8 *)(lVar9 + (long)(*piVar12 + 1) * 0x10 + 0x138);
                goto LAB_0056992c;
              }
              uVar11 = uVar11 + 1;
              piVar12 = piVar12 + 4;
            } while (uVar11 < *(ushort *)(lVar9 + 0x12a));
          }
          puVar2 = (undefined8 *)
                   native_sub_3c9b34(plVar5,_MG_BlocksEngine2_Block_I_BE2_Block_TypeInfo_12d4dd8,1);
LAB_0056992c:
          iVar1 = (*(code *)*puVar2)(plVar5,puVar2[1]);
          if (iVar1 != 4) {
            return;
          }
          lVar9 = native_MG_BlocksEngine2_Core_BE2_ExecutionManager__get_Instance_564464();
          lVar10 = *plVar5;
          if ((ulong)*(ushort *)(lVar10 + 0x12a) != 0) {
            uVar11 = 0;
            piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
            do {
              if (*(long *)(piVar12 + -2) == _MG_BlocksEngine2_Block_I_BE2_Block_TypeInfo_12d4dd8) {
                puVar2 = (undefined8 *)(lVar10 + (long)(*piVar12 + 4) * 0x10 + 0x138);
                goto LAB_005699b4;
              }
              uVar11 = uVar11 + 1;
              piVar12 = piVar12 + 4;
            } while (uVar11 < *(ushort *)(lVar10 + 0x12a));
          }
          puVar2 = (undefined8 *)
                   native_sub_3c9b34(plVar5,_MG_BlocksEngine2_Block_I_BE2_Block_TypeInfo_12d4dd8,4);
LAB_005699b4:
          plVar5 = (long *)(*(code *)*puVar2)(plVar5,puVar2[1]);
          if (plVar5 != (long *)0x0) {
            lVar10 = *plVar5;
            if ((ulong)*(ushort *)(lVar10 + 0x12a) != 0) {
              uVar11 = 0;
              piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
              do {
                if (*(long *)(piVar12 + -2) ==
                    _MG_BlocksEngine2_Block_Instruction_I_BE2_Instruction_TypeInfo_12d4e28) {
                  puVar2 = (undefined8 *)(lVar10 + (long)*piVar12 * 0x10 + 0x138);
                  goto LAB_00569a24;
                }
                uVar11 = uVar11 + 1;
                piVar12 = piVar12 + 4;
              } while (uVar11 < *(ushort *)(lVar10 + 0x12a));
            }
            puVar2 = (undefined8 *)
                     native_sub_3c9b34(plVar5,
                                       _MG_BlocksEngine2_Block_Instruction_I_BE2_Instruction_TypeInfo_12d4e28
                                       ,0);
LAB_00569a24:
            plVar5 = (long *)(*(code *)*puVar2)(plVar5,puVar2[1]);
            if (plVar5 != (long *)0x0) {
              lVar10 = *plVar5;
              if ((ulong)*(ushort *)(lVar10 + 0x12a) != 0) {
                uVar11 = 0;
                piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar12 + -2) ==
                      _MG_BlocksEngine2_Block_Instruction_I_BE2_InstructionBase_TypeInfo_12d4e30) {
                    puVar2 = (undefined8 *)(lVar10 + (long)(*piVar12 + 4) * 0x10 + 0x138);
                    goto LAB_00569a98;
                  }
                  uVar11 = uVar11 + 1;
                  piVar12 = piVar12 + 4;
                } while (uVar11 < *(ushort *)(lVar10 + 0x12a));
              }
              puVar2 = (undefined8 *)
                       native_sub_3c9b34(plVar5,
                                         _MG_BlocksEngine2_Block_Instruction_I_BE2_InstructionBase_TypeInfo_12d4e30
                                         ,4);
LAB_00569a98:
              uVar4 = (*(code *)*puVar2)(plVar5,puVar2[1]);
              if (plVar3 != (long *)0x0) {
                lVar10 = *plVar3;
                if ((ulong)*(ushort *)(lVar10 + 0x12a) != 0) {
                  uVar11 = 0;
                  piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar12 + -2) ==
                        _MG_BlocksEngine2_Environment_I_BE2_ProgrammingEnv_TypeInfo_12d4e38) {
                      puVar2 = (undefined8 *)(lVar10 + (long)(*piVar12 + 2) * 0x10 + 0x138);
                      goto LAB_00569b0c;
                    }
                    uVar11 = uVar11 + 1;
                    piVar12 = piVar12 + 4;
                  } while (uVar11 < *(ushort *)(lVar10 + 0x12a));
                }
                puVar2 = (undefined8 *)
                         native_sub_3c9b34(plVar3,
                                           _MG_BlocksEngine2_Environment_I_BE2_ProgrammingEnv_TypeInfo_12d4e38
                                           ,2);
LAB_00569b0c:
                uVar6 = (*(code *)*puVar2)(plVar3,puVar2[1]);
                if (lVar9 != 0) {
                  if ((bRam000000000133eb04 & 1) == 0) {
                    native_sub_43273c(&
                                      Method_MG_BlocksEngine2_Utils_BE2_ArrayUtils_Add_I_BE2_BlocksStack____12e20b8
                                     );
                    native_sub_43273c(&
                                      Method_MG_BlocksEngine2_Utils_BE2_ArrayUtils_FindAll_I_BE2_BlocksStack____12e20e8
                                     );
                    native_sub_43273c(&MG_BlocksEngine2_Core_I_BE2_BlocksStack_TypeInfo_12d4e10);
                    native_sub_43273c(&Method_System_Predicate_I_BE2_BlocksStack___ctor___12ddaf0);
                    native_sub_43273c(&System_Predicate_I_BE2_BlocksStack__TypeInfo_12d2d98);
                    native_sub_43273c(&
                                      Method_MG_BlocksEngine2_Core_BE2_ExecutionManager___c__DisplayClass25_0__AddToBlocksStackArray_b__0___12e9648
                                     );
                    native_sub_43273c(&
                                      MG_BlocksEngine2_Core_BE2_ExecutionManager___c__DisplayClass25_0_TypeInfo_12d7018
                                     );
                    native_sub_43273c(&UnityEngine_Events_UnityAction_TypeInfo_12d65d0);
                    bRam000000000133eb04 = 1;
                  }
                  lVar10 = native_sub_432808(
                                            _MG_BlocksEngine2_Core_BE2_ExecutionManager___c__DisplayClass25_0_TypeInfo_12d7018
                                            );
                  native_MG_BlocksEngine2_Core_BE2_ExecutionManager___c__DisplayClass25_0___ctor_5479e4
                            (lVar10,0);
                  if (lVar10 != 0) {
                    puVar2 = (undefined8 *)(lVar10 + 0x10);
                    *puVar2 = uVar4;
                    native_sub_4326e0(puVar2,uVar4);
                    uVar4 = native_sub_432808(_System_Predicate_I_BE2_BlocksStack__TypeInfo_12d2d98)
                    ;
                    native_System_Predicate_BaseInvokableCall____ctor_ac31d4
                              (uVar4,lVar10,
                               _Method_MG_BlocksEngine2_Core_BE2_ExecutionManager___c__DisplayClass25_0__AddToBlocksStackArray_b__0___12e9648
                               ,_Method_System_Predicate_I_BE2_BlocksStack___ctor___12ddaf0);
                    lVar10 = native_MG_BlocksEngine2_Utils_BE2_ArrayUtils__FindAll_I_BE2_BlockSection__49b540
                                       (lVar9 + 0x28,uVar4,
                                        _Method_MG_BlocksEngine2_Utils_BE2_ArrayUtils_FindAll_I_BE2_BlocksStack____12e20e8
                                       );
                    if (lVar10 != 0) {
                      if (*(long *)(lVar10 + 0x18) != 0) {
                        return;
                      }
                      native_MG_BlocksEngine2_Utils_BE2_ArrayUtils__Add_GraphicRaycaster__49b428
                                (lVar9 + 0x28,*puVar2,
                                 _Method_MG_BlocksEngine2_Utils_BE2_ArrayUtils_Add_I_BE2_BlocksStack____12e20b8
                                );
                      plVar3 = (long *)*puVar2;
                      if (plVar3 != (long *)0x0) {
                        lVar10 = *plVar3;
                        if ((ulong)*(ushort *)(lVar10 + 0x12a) != 0) {
                          uVar11 = 0;
                          piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
                          do {
                            if (*(long *)(piVar12 + -2) ==
                                _MG_BlocksEngine2_Core_I_BE2_BlocksStack_TypeInfo_12d4e10) {
                              puVar7 = (undefined8 *)(lVar10 + (long)(*piVar12 + 1) * 0x10 + 0x138);
                              goto LAB_0056df50;
                            }
                            uVar11 = uVar11 + 1;
                            piVar12 = piVar12 + 4;
                          } while (uVar11 < *(ushort *)(lVar10 + 0x12a));
                        }
                        puVar7 = (undefined8 *)
                                 native_sub_3c9b34(plVar3,
                                                  _MG_BlocksEngine2_Core_I_BE2_BlocksStack_TypeInfo_12d4e10
                                                  ,1);
LAB_0056df50:
                        (*(code *)*puVar7)(plVar3,uVar6,puVar7[1]);
                        lVar10 = native_MG_BlocksEngine2_Core_BE2_MainEventsManager__get_Instance_6001fc
                                           (0);
                        if (lVar10 != 0) {
                          native_MG_BlocksEngine2_Core_BE2_EventsManager__TriggerEvent_579794
                                    (lVar10,6);
                          plVar3 = (long *)*puVar2;
                          uVar4 = native_sub_432808(_UnityEngine_Events_UnityAction_TypeInfo_12d65d0
                                                   );
                          if (plVar3 != (long *)0x0) {
                            lVar10 = *plVar3;
                            if ((ulong)*(ushort *)(lVar10 + 0x12a) != 0) {
                              uVar11 = 0;
                              piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
                              do {
                                if (*(long *)(piVar12 + -2) ==
                                    _MG_BlocksEngine2_Core_I_BE2_BlocksStack_TypeInfo_12d4e10) {
                                  lVar10 = lVar10 + (long)(*piVar12 + 0xd) * 0x10 + 0x138;
                                  goto LAB_0056dfe8;
                                }
                                uVar11 = uVar11 + 1;
                                piVar12 = piVar12 + 4;
                              } while (uVar11 < *(ushort *)(lVar10 + 0x12a));
                            }
                            lVar10 = native_sub_3c9b34(plVar3,
                                                  _MG_BlocksEngine2_Core_I_BE2_BlocksStack_TypeInfo_12d4e10
                                                  ,0xd);
LAB_0056dfe8:
                            native_UnityEngine_Events_UnityAction___ctor_773130
                                      (uVar4,plVar3,*(undefined8 *)(lVar10 + 8),0);
                            if ((bRam000000000133eafc & 1) == 0) {
                              native_sub_43273c(&
                                                Method_System_Collections_Generic_List_UnityAction__Add___12dd490
                                               );
                              native_sub_43273c(&
                                                Method_System_Collections_Generic_List_UnityAction__Contains___12dd498
                                               );
                              bRam000000000133eafc = 1;
                            }
                            if (*(long *)(lVar9 + 0x40) != 0) {
                              uVar11 = native_System_Collections_Generic_List_BE2_UI_SelectionPanel___Contains_d40ec8
                                                 (*(long *)(lVar9 + 0x40),uVar4,
                                                  _Method_System_Collections_Generic_List_UnityAction__Contains___12dd498
                                                 );
                              if ((uVar11 & 1) != 0) {
                                return;
                              }
                              if (*(long *)(lVar9 + 0x48) != 0) {
                                native_UnityEngine_Events_UnityEvent__AddListener_7734bc
                                          (*(long *)(lVar9 + 0x48),uVar4,0);
                                lVar9 = *(long *)(lVar9 + 0x40);
                                if (lVar9 != 0) {
                                  lVar10 = *(long *)(lVar9 + 0x10);
                                  if (lVar10 != 0) {
                                    uVar8 = *(uint *)(lVar9 + 0x18);
                                    if (uVar8 == *(uint *)(lVar10 + 0x18)) {
                                      (*(code *)**(undefined8 **)
                                                  (*(long *)(*(long *)(
                                                  _Method_System_Collections_Generic_List_UnityAction__Add___12dd490
                                                  + 0x18) + 0xc0) + 0x60))(lVar9,uVar8 + 1);
                                      uVar8 = *(uint *)(lVar9 + 0x18);
                                      lVar10 = *(long *)(lVar9 + 0x10);
                                      *(uint *)(lVar9 + 0x18) = uVar8 + 1;
                                      if (lVar10 == 0) goto code_r0x00d40c5c;
                                    }
                                    else {
                                      *(uint *)(lVar9 + 0x18) = uVar8 + 1;
                                    }
                                    if (uVar8 < *(uint *)(lVar10 + 0x18)) {
                                      puVar2 = (undefined8 *)(lVar10 + (long)(int)uVar8 * 8 + 0x20);
                                      *puVar2 = uVar4;
                                      native_sub_4326e0(puVar2,uVar4);
                                      *(int *)(lVar9 + 0x1c) = *(int *)(lVar9 + 0x1c) + 1;
                                      return;
                                    }
                                    uVar4 = native_sub_43283c();
                    /* WARNING: Subroutine does not return */
                                    native_sub_4327dc(uVar4,0);
                                  }
code_r0x00d40c5c:
                    /* WARNING: Subroutine does not return */
                                  native_sub_432810();
                                }
                              }
                            }
                    /* WARNING: Subroutine does not return */
                            native_sub_432810();
                          }
                        }
                      }
                    }
                  }
                    /* WARNING: Subroutine does not return */
                  native_sub_432810();
                }
              }
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* MG_BlocksEngine2.Utils.BE2_BlockUtils$$GetRootBlock @ 0x56e01c
 * MG_BlocksEngine2_Block_I_BE2_Block_o* MG_BlocksEngine2_Utils_BE2_BlockUtils__GetRootBlock (MG_BlocksEngine2_Block_I_BE2_Block_o* block, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MG_BlocksEngine2.Utils.BE2_BlockUtils$$GetRootBlock
   MG_BlocksEngine2_Block_I_BE2_Block_o* MG_BlocksEngine2_Utils_BE2_BlockUtils__GetRootBlock
   (MG_BlocksEngine2_Block_I_BE2_Block_o* block, const MethodInfo* method); */

long * native_MG_BlocksEngine2_Utils_BE2_BlockUtils__GetRootBlock_56e01c(long *param_1)

{
  long *plVar1;
  undefined8 *puVar2;
  long *plVar3;
  long lVar4;
  ulong uVar5;
  int *piVar6;
  
  do {
    plVar1 = param_1;
    if ((bRam000000000133ea6f & 1) == 0) {
      native_sub_43273c(&MG_BlocksEngine2_Block_I_BE2_BlockSection_TypeInfo_12d4de8);
      native_sub_43273c(&MG_BlocksEngine2_Block_I_BE2_Block_TypeInfo_12d4dd8);
      bRam000000000133ea6f = 1;
    }
    if (plVar1 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      native_sub_432810();
    }
    lVar4 = *plVar1;
    if ((ulong)*(ushort *)(lVar4 + 0x12a) != 0) {
      uVar5 = 0;
      piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == _MG_BlocksEngine2_Block_I_BE2_Block_TypeInfo_12d4dd8) {
          puVar2 = (undefined8 *)(lVar4 + (long)(*piVar6 + 6) * 0x10 + 0x138);
          goto LAB_0056e0c4;
        }
        uVar5 = uVar5 + 1;
        piVar6 = piVar6 + 4;
      } while (uVar5 < *(ushort *)(lVar4 + 0x12a));
    }
    puVar2 = (undefined8 *)
             native_sub_3c9b34(plVar1,_MG_BlocksEngine2_Block_I_BE2_Block_TypeInfo_12d4dd8,6);
LAB_0056e0c4:
    plVar3 = (long *)(*(code *)*puVar2)(plVar1,puVar2[1]);
    if (plVar3 == (long *)0x0) {
      return plVar1;
    }
    lVar4 = *plVar3;
    if ((ulong)*(ushort *)(lVar4 + 0x12a) != 0) {
      uVar5 = 0;
      piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == _MG_BlocksEngine2_Block_I_BE2_BlockSection_TypeInfo_12d4de8) {
          puVar2 = (undefined8 *)(lVar4 + (long)(*piVar6 + 4) * 0x10 + 0x138);
          goto LAB_0056e130;
        }
        uVar5 = uVar5 + 1;
        piVar6 = piVar6 + 4;
      } while (uVar5 < *(ushort *)(lVar4 + 0x12a));
    }
    puVar2 = (undefined8 *)
             native_sub_3c9b34(plVar3,_MG_BlocksEngine2_Block_I_BE2_BlockSection_TypeInfo_12d4de8,4)
    ;
LAB_0056e130:
    param_1 = (long *)(*(code *)*puVar2)(plVar3,puVar2[1]);
    if (param_1 == (long *)0x0) {
      return plVar1;
    }
  } while( true );
}



/* MG_BlocksEngine2.Utils.BE2_BlockUtils$$RemoveBlock @ 0x56e15c
 * void MG_BlocksEngine2_Utils_BE2_BlockUtils__RemoveBlock (MG_BlocksEngine2_Block_I_BE2_Block_o* block, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MG_BlocksEngine2.Utils.BE2_BlockUtils$$RemoveBlock
   void MG_BlocksEngine2_Utils_BE2_BlockUtils__RemoveBlock (MG_BlocksEngine2_Block_I_BE2_Block_o*
   block, const MethodInfo* method); */

void native_MG_BlocksEngine2_Utils_BE2_BlockUtils__RemoveBlock_56e15c(long *param_1)

{
  int iVar1;
  undefined8 *puVar2;
  long *plVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  int *piVar8;
  
  if ((bRam000000000133ea70 & 1) == 0) {
    native_sub_43273c(&MG_BlocksEngine2_Block_I_BE2_Block_TypeInfo_12d4dd8);
    native_sub_43273c(&MG_BlocksEngine2_Block_Instruction_I_BE2_InstructionBase_TypeInfo_12d4e30);
    native_sub_43273c(&MG_BlocksEngine2_Block_Instruction_I_BE2_Instruction_TypeInfo_12d4e28);
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    bRam000000000133ea70 = 1;
  }
  if (param_1 == (long *)0x0) goto LAB_0056e438;
  lVar5 = *param_1;
  if ((ulong)*(ushort *)(lVar5 + 0x12a) != 0) {
    uVar7 = 0;
    piVar8 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
    do {
      if (*(long *)(piVar8 + -2) == _MG_BlocksEngine2_Block_I_BE2_Block_TypeInfo_12d4dd8) {
        puVar2 = (undefined8 *)(lVar5 + (long)(*piVar8 + 1) * 0x10 + 0x138);
        goto LAB_0056e218;
      }
      uVar7 = uVar7 + 1;
      piVar8 = piVar8 + 4;
    } while (uVar7 < *(ushort *)(lVar5 + 0x12a));
  }
  puVar2 = (undefined8 *)
           native_sub_3c9b34(param_1,_MG_BlocksEngine2_Block_I_BE2_Block_TypeInfo_12d4dd8,1);
LAB_0056e218:
  iVar1 = (*(code *)*puVar2)(param_1,puVar2[1]);
  if (iVar1 == 4) {
    lVar5 = native_MG_BlocksEngine2_Core_BE2_ExecutionManager__get_Instance_564464();
    lVar6 = *param_1;
    if ((ulong)*(ushort *)(lVar6 + 0x12a) != 0) {
      uVar7 = 0;
      piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == _MG_BlocksEngine2_Block_I_BE2_Block_TypeInfo_12d4dd8) {
          puVar2 = (undefined8 *)(lVar6 + (long)(*piVar8 + 4) * 0x10 + 0x138);
          goto LAB_0056e28c;
        }
        uVar7 = uVar7 + 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 < *(ushort *)(lVar6 + 0x12a));
    }
    puVar2 = (undefined8 *)
             native_sub_3c9b34(param_1,_MG_BlocksEngine2_Block_I_BE2_Block_TypeInfo_12d4dd8,4);
LAB_0056e28c:
    plVar3 = (long *)(*(code *)*puVar2)(param_1,puVar2[1]);
    if (plVar3 == (long *)0x0) goto LAB_0056e438;
    lVar6 = *plVar3;
    if ((ulong)*(ushort *)(lVar6 + 0x12a) != 0) {
      uVar7 = 0;
      piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) ==
            _MG_BlocksEngine2_Block_Instruction_I_BE2_Instruction_TypeInfo_12d4e28) {
          puVar2 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
          goto LAB_0056e2fc;
        }
        uVar7 = uVar7 + 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 < *(ushort *)(lVar6 + 0x12a));
    }
    puVar2 = (undefined8 *)
             native_sub_3c9b34(plVar3,
                               _MG_BlocksEngine2_Block_Instruction_I_BE2_Instruction_TypeInfo_12d4e28
                               ,0);
LAB_0056e2fc:
    plVar3 = (long *)(*(code *)*puVar2)(plVar3,puVar2[1]);
    if (plVar3 == (long *)0x0) goto LAB_0056e438;
    lVar6 = *plVar3;
    if ((ulong)*(ushort *)(lVar6 + 0x12a) != 0) {
      uVar7 = 0;
      piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) ==
            _MG_BlocksEngine2_Block_Instruction_I_BE2_InstructionBase_TypeInfo_12d4e30) {
          puVar2 = (undefined8 *)(lVar6 + (long)(*piVar8 + 4) * 0x10 + 0x138);
          goto LAB_0056e370;
        }
        uVar7 = uVar7 + 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 < *(ushort *)(lVar6 + 0x12a));
    }
    puVar2 = (undefined8 *)
             native_sub_3c9b34(plVar3,
                               _MG_BlocksEngine2_Block_Instruction_I_BE2_InstructionBase_TypeInfo_12d4e30
                               ,4);
LAB_0056e370:
    uVar4 = (*(code *)*puVar2)(plVar3,puVar2[1]);
    if (lVar5 == 0) goto LAB_0056e438;
    native_MG_BlocksEngine2_Core_BE2_ExecutionManager__RemoveFromBlocksStackList_56e43c(lVar5,uVar4)
    ;
  }
  lVar5 = *param_1;
  if ((ulong)*(ushort *)(lVar5 + 0x12a) != 0) {
    uVar7 = 0;
    piVar8 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
    do {
      if (*(long *)(piVar8 + -2) == _MG_BlocksEngine2_Block_I_BE2_Block_TypeInfo_12d4dd8) {
        puVar2 = (undefined8 *)(lVar5 + (long)*piVar8 * 0x10 + 0x138);
        goto LAB_0056e3e0;
      }
      uVar7 = uVar7 + 1;
      piVar8 = piVar8 + 4;
    } while (uVar7 < *(ushort *)(lVar5 + 0x12a));
  }
  puVar2 = (undefined8 *)
           native_sub_3c9b34(param_1,_MG_BlocksEngine2_Block_I_BE2_Block_TypeInfo_12d4dd8,0);
LAB_0056e3e0:
  lVar5 = (*(code *)*puVar2)(param_1,puVar2[1]);
  if (lVar5 != 0) {
    uVar4 = native_UnityEngine_Component__get_gameObject_8da66c(lVar5,0);
    if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
      native_sub_4327ec(_UnityEngine_Object_TypeInfo_12d54e0);
    }
    if ((bRam0000000001341048 & 1) == 0) {
      native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0,0);
      bRam0000000001341048 = 1;
    }
    if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    if (pcRam0000000001341040 == (code *)0x0) {
      pcRam0000000001341040 = (code *)native_sub_4326f0(&UNK_00e2f7cf);
    }
                    /* WARNING: Could not recover jumptable at 0x008ea5f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*pcRam0000000001341040)(0,uVar4);
    return;
  }
LAB_0056e438:
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* MG_BlocksEngine2.Utils.BE2_BlockUtils$$CreatePrefab @ 0x56e64c
 * UnityEngine_GameObject_o* MG_BlocksEngine2_Utils_BE2_BlockUtils__CreatePrefab (MG_BlocksEngine2_Block_I_BE2_Block_o* block, const MethodInfo* method); */

/* MG_BlocksEngine2.Utils.BE2_BlockUtils$$CreatePrefab
   UnityEngine_GameObject_o* MG_BlocksEngine2_Utils_BE2_BlockUtils__CreatePrefab
   (MG_BlocksEngine2_Block_I_BE2_Block_o* block, const MethodInfo* method); */

undefined8 native_MG_BlocksEngine2_Utils_BE2_BlockUtils__CreatePrefab_56e64c(void)

{
  return 0;
}



/* MG_BlocksEngine2.Utils.BE2_BlockUtils$$GetParentInstructionOfType @ 0x56e654
 * MG_BlocksEngine2_Block_Instruction_I_BE2_Instruction_o* MG_BlocksEngine2_Utils_BE2_BlockUtils__GetParentInstructionOfType (MG_BlocksEngine2_Block_Instruction_I_BE2_Instruction_o* thisInstruction, int32_t blockType, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MG_BlocksEngine2.Utils.BE2_BlockUtils$$GetParentInstructionOfType
   MG_BlocksEngine2_Block_Instruction_I_BE2_Instruction_o*
   MG_BlocksEngine2_Utils_BE2_BlockUtils__GetParentInstructionOfType
   (MG_BlocksEngine2_Block_Instruction_I_BE2_Instruction_o* thisInstruction, int32_t blockType,
   const MethodInfo* method); */

long * native_MG_BlocksEngine2_Utils_BE2_BlockUtils__GetParentInstructionOfType_56e654
                 (long *param_1,int param_2)

{
  int iVar1;
  undefined8 *puVar2;
  long *plVar3;
  long lVar4;
  ulong uVar5;
  int *piVar6;
  
  while( true ) {
    if ((bRam000000000133ea71 & 1) == 0) {
      native_sub_43273c(&Method_UnityEngine_Component_GetComponent_BE2_BlockSectionBody____12e2920);
      native_sub_43273c(&MG_BlocksEngine2_Block_I_BE2_BlockSectionBody_TypeInfo_12d4df0);
      native_sub_43273c(&MG_BlocksEngine2_Block_I_BE2_BlockSection_TypeInfo_12d4de8);
      native_sub_43273c(&MG_BlocksEngine2_Block_I_BE2_Block_TypeInfo_12d4dd8);
      native_sub_43273c(&MG_BlocksEngine2_Block_Instruction_I_BE2_InstructionBase_TypeInfo_12d4e30);
      native_sub_43273c(&MG_BlocksEngine2_Block_Instruction_I_BE2_Instruction_TypeInfo_12d4e28);
      bRam000000000133ea71 = 1;
    }
    if (param_1 == (long *)0x0) break;
    lVar4 = *param_1;
    if ((ulong)*(ushort *)(lVar4 + 0x12a) != 0) {
      uVar5 = 0;
      piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) ==
            _MG_BlocksEngine2_Block_Instruction_I_BE2_Instruction_TypeInfo_12d4e28) {
          puVar2 = (undefined8 *)(lVar4 + (long)*piVar6 * 0x10 + 0x138);
          goto LAB_0056e744;
        }
        uVar5 = uVar5 + 1;
        piVar6 = piVar6 + 4;
      } while (uVar5 < *(ushort *)(lVar4 + 0x12a));
    }
    puVar2 = (undefined8 *)
             native_sub_3c9b34(param_1,
                               _MG_BlocksEngine2_Block_Instruction_I_BE2_Instruction_TypeInfo_12d4e28
                               ,0);
LAB_0056e744:
    plVar3 = (long *)(*(code *)*puVar2)(param_1,puVar2[1]);
    if (plVar3 == (long *)0x0) break;
    lVar4 = *plVar3;
    if ((ulong)*(ushort *)(lVar4 + 0x12a) != 0) {
      uVar5 = 0;
      piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) ==
            _MG_BlocksEngine2_Block_Instruction_I_BE2_InstructionBase_TypeInfo_12d4e30) {
          puVar2 = (undefined8 *)(lVar4 + (long)(*piVar6 + 3) * 0x10 + 0x138);
          goto LAB_0056e7b0;
        }
        uVar5 = uVar5 + 1;
        piVar6 = piVar6 + 4;
      } while (uVar5 < *(ushort *)(lVar4 + 0x12a));
    }
    puVar2 = (undefined8 *)
             native_sub_3c9b34(plVar3,
                               _MG_BlocksEngine2_Block_Instruction_I_BE2_InstructionBase_TypeInfo_12d4e30
                               ,3);
LAB_0056e7b0:
    plVar3 = (long *)(*(code *)*puVar2)(plVar3,puVar2[1]);
    if (plVar3 == (long *)0x0) break;
    lVar4 = *plVar3;
    if ((ulong)*(ushort *)(lVar4 + 0x12a) != 0) {
      uVar5 = 0;
      piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == _MG_BlocksEngine2_Block_I_BE2_Block_TypeInfo_12d4dd8) {
          puVar2 = (undefined8 *)(lVar4 + (long)*piVar6 * 0x10 + 0x138);
          goto LAB_0056e818;
        }
        uVar5 = uVar5 + 1;
        piVar6 = piVar6 + 4;
      } while (uVar5 < *(ushort *)(lVar4 + 0x12a));
    }
    puVar2 = (undefined8 *)
             native_sub_3c9b34(plVar3,_MG_BlocksEngine2_Block_I_BE2_Block_TypeInfo_12d4dd8,0);
LAB_0056e818:
    lVar4 = (*(code *)*puVar2)(plVar3,puVar2[1]);
    if ((lVar4 == 0) ||
       (lVar4 = native_UnityEngine_Transform__get_parent_765eb0(lVar4,0), lVar4 == 0)) break;
    plVar3 = (long *)native_UnityEngine_Component__GetComponent_ActiveAnimation__49daec
                               (lVar4,
                                _Method_UnityEngine_Component_GetComponent_BE2_BlockSectionBody____12e2920
                               );
    if (plVar3 == (long *)0x0) {
      return (long *)0x0;
    }
    lVar4 = *plVar3;
    if ((ulong)*(ushort *)(lVar4 + 0x12a) != 0) {
      uVar5 = 0;
      piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) ==
            _MG_BlocksEngine2_Block_I_BE2_BlockSectionBody_TypeInfo_12d4df0) {
          puVar2 = (undefined8 *)(lVar4 + (long)(*piVar6 + 5) * 0x10 + 0x138);
          goto LAB_0056e89c;
        }
        uVar5 = uVar5 + 1;
        piVar6 = piVar6 + 4;
      } while (uVar5 < *(ushort *)(lVar4 + 0x12a));
    }
    puVar2 = (undefined8 *)
             native_sub_3c9b34(plVar3,
                               _MG_BlocksEngine2_Block_I_BE2_BlockSectionBody_TypeInfo_12d4df0,5);
LAB_0056e89c:
    plVar3 = (long *)(*(code *)*puVar2)(plVar3,puVar2[1]);
    if (plVar3 == (long *)0x0) break;
    lVar4 = *plVar3;
    if ((ulong)*(ushort *)(lVar4 + 0x12a) != 0) {
      uVar5 = 0;
      piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == _MG_BlocksEngine2_Block_I_BE2_BlockSection_TypeInfo_12d4de8) {
          puVar2 = (undefined8 *)(lVar4 + (long)(*piVar6 + 4) * 0x10 + 0x138);
          goto LAB_0056e908;
        }
        uVar5 = uVar5 + 1;
        piVar6 = piVar6 + 4;
      } while (uVar5 < *(ushort *)(lVar4 + 0x12a));
    }
    puVar2 = (undefined8 *)
             native_sub_3c9b34(plVar3,_MG_BlocksEngine2_Block_I_BE2_BlockSection_TypeInfo_12d4de8,4)
    ;
LAB_0056e908:
    plVar3 = (long *)(*(code *)*puVar2)(plVar3,puVar2[1]);
    if (plVar3 == (long *)0x0) break;
    lVar4 = *plVar3;
    if ((ulong)*(ushort *)(lVar4 + 0x12a) != 0) {
      uVar5 = 0;
      piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == _MG_BlocksEngine2_Block_I_BE2_Block_TypeInfo_12d4dd8) {
          puVar2 = (undefined8 *)(lVar4 + (long)(*piVar6 + 1) * 0x10 + 0x138);
          goto LAB_0056e974;
        }
        uVar5 = uVar5 + 1;
        piVar6 = piVar6 + 4;
      } while (uVar5 < *(ushort *)(lVar4 + 0x12a));
    }
    puVar2 = (undefined8 *)
             native_sub_3c9b34(plVar3,_MG_BlocksEngine2_Block_I_BE2_Block_TypeInfo_12d4dd8,1);
LAB_0056e974:
    iVar1 = (*(code *)*puVar2)(plVar3,puVar2[1]);
    lVar4 = *plVar3;
    if ((ulong)*(ushort *)(lVar4 + 0x12a) != 0) {
      uVar5 = 0;
      piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == _MG_BlocksEngine2_Block_I_BE2_Block_TypeInfo_12d4dd8) {
          puVar2 = (undefined8 *)(lVar4 + (long)(*piVar6 + 4) * 0x10 + 0x138);
          goto LAB_0056e9dc;
        }
        uVar5 = uVar5 + 1;
        piVar6 = piVar6 + 4;
      } while (uVar5 < *(ushort *)(lVar4 + 0x12a));
    }
    puVar2 = (undefined8 *)
             native_sub_3c9b34(plVar3,_MG_BlocksEngine2_Block_I_BE2_Block_TypeInfo_12d4dd8,4);
LAB_0056e9dc:
    param_1 = (long *)(*(code *)*puVar2)(plVar3,puVar2[1]);
    if (iVar1 == param_2) {
      return param_1;
    }
  }
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* MG_BlocksEngine2.Utils.BE2_BlockUtils$$LoadPrefabBlock @ 0x56ea18
 * UnityEngine_GameObject_o* MG_BlocksEngine2_Utils_BE2_BlockUtils__LoadPrefabBlock (System_String_o* prefabName, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MG_BlocksEngine2.Utils.BE2_BlockUtils$$LoadPrefabBlock
   UnityEngine_GameObject_o* MG_BlocksEngine2_Utils_BE2_BlockUtils__LoadPrefabBlock
   (System_String_o* prefabName, const MethodInfo* method); */

long native_MG_BlocksEngine2_Utils_BE2_BlockUtils__LoadPrefabBlock_56ea18(undefined8 param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  ulong uVar5;
  undefined8 uVar6;
  
  if ((bRam000000000133ea72 & 1) == 0) {
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    native_sub_43273c(&Method_UnityEngine_Resources_Load_GameObject____12e6328);
    native_sub_43273c(&StringLiteral_Blocks__12ec7e8);
    native_sub_43273c(&StringLiteral_Blocks_FunctionBlock__12ec7f8);
    native_sub_43273c(&StringLiteral_Blocks_Custom__12ec7f0);
    bRam000000000133ea72 = 1;
  }
  uVar3 = native_System_String__Concat_afbd68(_StringLiteral_Blocks__12ec7e8,param_1,0);
  lVar4 = native_UnityEngine_Resources__Load_Font__4a7de0
                    (uVar3,_Method_UnityEngine_Resources_Load_GameObject____12e6328);
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec(_UnityEngine_Object_TypeInfo_12d54e0);
  }
  uVar5 = native_UnityEngine_Object__op_Implicit_8e1b98(lVar4,0);
  if ((uVar5 & 1) == 0) {
    uVar3 = native_System_String__Concat_afbd68(_StringLiteral_Blocks_Custom__12ec7f0,param_1,0);
    lVar4 = native_UnityEngine_Resources__Load_Font__4a7de0
                      (uVar3,_Method_UnityEngine_Resources_Load_GameObject____12e6328);
  }
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar5 = native_UnityEngine_Object__op_Implicit_8e1b98(lVar4,0);
  if ((uVar5 & 1) == 0) {
    uVar3 = native_System_String__Concat_afbd68
                      (_StringLiteral_Blocks_FunctionBlock__12ec7f8,param_1,0);
    lVar4 = native_UnityEngine_Resources__Load_Font__4a7de0
                      (uVar3,_Method_UnityEngine_Resources_Load_GameObject____12e6328);
  }
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar5 = native_UnityEngine_Object__op_Implicit_8e1b98(lVar4,0);
  if ((uVar5 & 1) == 0) {
    uVar3 = native_MG_BlocksEngine2_Utils_BE2_Paths__get_NewBlockPrefabPath_61712c(0);
    uVar3 = native_MG_BlocksEngine2_Utils_BE2_Paths__TranslateMarkupPath_611528(uVar3,0);
    uVar3 = native_MG_BlocksEngine2_Utils_BE2_Paths__PathToResources_616ff8(uVar3,0);
    uVar3 = native_System_String__Concat_afbd68(uVar3,param_1,0);
    lVar4 = _Method_UnityEngine_Resources_Load_GameObject____12e6328;
    if ((bRam000000000133e738 & 1) == 0) {
      native_sub_43273c(&System_Type_TypeInfo_12d6340);
      bRam000000000133e738 = 1;
    }
    uVar6 = **(undefined8 **)(lVar4 + 0x30);
    if (((*(byte *)(_System_Type_TypeInfo_12d6340 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_System_Type_TypeInfo_12d6340 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    uVar6 = native_System_Type__GetTypeFromHandle_b0fb24(uVar6,0);
    lVar1 = native_UnityEngine_Resources__Load_76941c(uVar3,uVar6,0);
    lVar4 = *(long *)(*(long *)(lVar4 + 0x30) + 8);
    if ((*(byte *)(lVar4 + 0x132) & 1) == 0) {
      native_sub_3c9850(lVar4);
    }
    if (lVar1 != 0) {
      lVar2 = native_sub_4327f8(lVar1,lVar4);
      if (lVar2 != 0) {
        return lVar2;
      }
      native_sub_432b04(lVar1,lVar4);
    }
    return 0;
  }
  return lVar4;
}



/* MG_BlocksEngine2.Utils.BE2_BlockUtils$$UnloadPrefab @ 0x56ebc0
 * void MG_BlocksEngine2_Utils_BE2_BlockUtils__UnloadPrefab (const MethodInfo* method); */

/* MG_BlocksEngine2.Utils.BE2_BlockUtils$$UnloadPrefab
   void MG_BlocksEngine2_Utils_BE2_BlockUtils__UnloadPrefab (const MethodInfo* method); */

void native_MG_BlocksEngine2_Utils_BE2_BlockUtils__UnloadPrefab_56ebc0(void)

{
  if (pcRam000000000133fa10 == (code *)0x0) {
    pcRam000000000133fa10 = (code *)native_sub_4326f0(&UNK_00e28cb0);
  }
                    /* WARNING: Could not recover jumptable at 0x007695a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pcRam000000000133fa10)();
  return;
}



/* MG_BlocksEngine2.Utils.BE2_BlockUtils$$GetParentInstructionOfTypeAll @ 0x56ebc8
 * System_Collections_Generic_List_I_BE2_Instruction__o* MG_BlocksEngine2_Utils_BE2_BlockUtils__GetParentInstructionOfTypeAll (MG_BlocksEngine2_Block_Instruction_I_BE2_Instruction_o* thisInstruction, int32_t blockType, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MG_BlocksEngine2.Utils.BE2_BlockUtils$$GetParentInstructionOfTypeAll
   System_Collections_Generic_List_I_BE2_Instruction__o*
   MG_BlocksEngine2_Utils_BE2_BlockUtils__GetParentInstructionOfTypeAll
   (MG_BlocksEngine2_Block_Instruction_I_BE2_Instruction_o* thisInstruction, int32_t blockType,
   const MethodInfo* method); */

long native_MG_BlocksEngine2_Utils_BE2_BlockUtils__GetParentInstructionOfTypeAll_56ebc8
               (long *param_1,int param_2)

{
  int iVar1;
  long lVar2;
  undefined8 *puVar3;
  long *plVar4;
  undefined8 uVar5;
  long lVar6;
  ulong uVar7;
  int *piVar8;
  
  if ((bRam000000000133ea73 & 1) == 0) {
    native_sub_43273c(&Method_UnityEngine_Component_GetComponent_BE2_BlockSectionBody____12e2920);
    native_sub_43273c(&MG_BlocksEngine2_Block_I_BE2_BlockSectionBody_TypeInfo_12d4df0);
    native_sub_43273c(&MG_BlocksEngine2_Block_I_BE2_BlockSection_TypeInfo_12d4de8);
    native_sub_43273c(&MG_BlocksEngine2_Block_I_BE2_Block_TypeInfo_12d4dd8);
    native_sub_43273c(&MG_BlocksEngine2_Block_Instruction_I_BE2_InstructionBase_TypeInfo_12d4e30);
    native_sub_43273c(&MG_BlocksEngine2_Block_Instruction_I_BE2_Instruction_TypeInfo_12d4e28);
    native_sub_43273c(&Method_System_Collections_Generic_List_I_BE2_Instruction__AddRange___12dc9c8)
    ;
    native_sub_43273c(&Method_System_Collections_Generic_List_I_BE2_Instruction__Add___12dc9c0);
    native_sub_43273c(&Method_System_Collections_Generic_List_I_BE2_Instruction___ctor___12dc9b8);
    native_sub_43273c(&System_Collections_Generic_List_I_BE2_Instruction__TypeInfo_12d2a78);
    bRam000000000133ea73 = 1;
  }
  lVar2 = native_sub_432808(_System_Collections_Generic_List_I_BE2_Instruction__TypeInfo_12d2a78);
  native_System_Collections_Generic_List_XmlEventCache_XmlEvent______ctor_d3ff44
            (lVar2,_Method_System_Collections_Generic_List_I_BE2_Instruction___ctor___12dc9b8);
  if (param_1 != (long *)0x0) {
    lVar6 = *param_1;
    if ((ulong)*(ushort *)(lVar6 + 0x12a) != 0) {
      uVar7 = 0;
      piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) ==
            _MG_BlocksEngine2_Block_Instruction_I_BE2_Instruction_TypeInfo_12d4e28) {
          puVar3 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
          goto LAB_0056ecf0;
        }
        uVar7 = uVar7 + 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 < *(ushort *)(lVar6 + 0x12a));
    }
    puVar3 = (undefined8 *)
             native_sub_3c9b34(param_1,
                               _MG_BlocksEngine2_Block_Instruction_I_BE2_Instruction_TypeInfo_12d4e28
                               ,0);
LAB_0056ecf0:
    plVar4 = (long *)(*(code *)*puVar3)(param_1,puVar3[1]);
    if (plVar4 != (long *)0x0) {
      lVar6 = *plVar4;
      if ((ulong)*(ushort *)(lVar6 + 0x12a) != 0) {
        uVar7 = 0;
        piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        do {
          if (*(long *)(piVar8 + -2) ==
              _MG_BlocksEngine2_Block_Instruction_I_BE2_InstructionBase_TypeInfo_12d4e30) {
            puVar3 = (undefined8 *)(lVar6 + (long)(*piVar8 + 3) * 0x10 + 0x138);
            goto LAB_0056ed64;
          }
          uVar7 = uVar7 + 1;
          piVar8 = piVar8 + 4;
        } while (uVar7 < *(ushort *)(lVar6 + 0x12a));
      }
      puVar3 = (undefined8 *)
               native_sub_3c9b34(plVar4,
                                 _MG_BlocksEngine2_Block_Instruction_I_BE2_InstructionBase_TypeInfo_12d4e30
                                 ,3);
LAB_0056ed64:
      plVar4 = (long *)(*(code *)*puVar3)(plVar4,puVar3[1]);
      if (plVar4 != (long *)0x0) {
        lVar6 = *plVar4;
        if ((ulong)*(ushort *)(lVar6 + 0x12a) != 0) {
          uVar7 = 0;
          piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
          do {
            if (*(long *)(piVar8 + -2) == _MG_BlocksEngine2_Block_I_BE2_Block_TypeInfo_12d4dd8) {
              puVar3 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
              goto LAB_0056edd4;
            }
            uVar7 = uVar7 + 1;
            piVar8 = piVar8 + 4;
          } while (uVar7 < *(ushort *)(lVar6 + 0x12a));
        }
        puVar3 = (undefined8 *)
                 native_sub_3c9b34(plVar4,_MG_BlocksEngine2_Block_I_BE2_Block_TypeInfo_12d4dd8,0);
LAB_0056edd4:
        lVar6 = (*(code *)*puVar3)(plVar4,puVar3[1]);
        if ((lVar6 != 0) &&
           (lVar6 = native_UnityEngine_Transform__get_parent_765eb0(lVar6,0), lVar6 != 0)) {
          plVar4 = (long *)native_UnityEngine_Component__GetComponent_ActiveAnimation__49daec
                                     (lVar6,
                                      _Method_UnityEngine_Component_GetComponent_BE2_BlockSectionBody____12e2920
                                     );
          if (plVar4 == (long *)0x0) {
            return lVar2;
          }
          lVar6 = *plVar4;
          if ((ulong)*(ushort *)(lVar6 + 0x12a) != 0) {
            uVar7 = 0;
            piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
            do {
              if (*(long *)(piVar8 + -2) ==
                  _MG_BlocksEngine2_Block_I_BE2_BlockSectionBody_TypeInfo_12d4df0) {
                puVar3 = (undefined8 *)(lVar6 + (long)(*piVar8 + 5) * 0x10 + 0x138);
                goto LAB_0056ee68;
              }
              uVar7 = uVar7 + 1;
              piVar8 = piVar8 + 4;
            } while (uVar7 < *(ushort *)(lVar6 + 0x12a));
          }
          puVar3 = (undefined8 *)
                   native_sub_3c9b34(plVar4,
                                     _MG_BlocksEngine2_Block_I_BE2_BlockSectionBody_TypeInfo_12d4df0
                                     ,5);
LAB_0056ee68:
          plVar4 = (long *)(*(code *)*puVar3)(plVar4,puVar3[1]);
          if (plVar4 != (long *)0x0) {
            lVar6 = *plVar4;
            if ((ulong)*(ushort *)(lVar6 + 0x12a) != 0) {
              uVar7 = 0;
              piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
              do {
                if (*(long *)(piVar8 + -2) ==
                    _MG_BlocksEngine2_Block_I_BE2_BlockSection_TypeInfo_12d4de8) {
                  puVar3 = (undefined8 *)(lVar6 + (long)(*piVar8 + 4) * 0x10 + 0x138);
                  goto LAB_0056eedc;
                }
                uVar7 = uVar7 + 1;
                piVar8 = piVar8 + 4;
              } while (uVar7 < *(ushort *)(lVar6 + 0x12a));
            }
            puVar3 = (undefined8 *)
                     native_sub_3c9b34(plVar4,
                                       _MG_BlocksEngine2_Block_I_BE2_BlockSection_TypeInfo_12d4de8,4
                                      );
LAB_0056eedc:
            plVar4 = (long *)(*(code *)*puVar3)(plVar4,puVar3[1]);
            if (plVar4 != (long *)0x0) {
              lVar6 = *plVar4;
              if ((ulong)*(ushort *)(lVar6 + 0x12a) != 0) {
                uVar7 = 0;
                piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar8 + -2) == _MG_BlocksEngine2_Block_I_BE2_Block_TypeInfo_12d4dd8
                     ) {
                    puVar3 = (undefined8 *)(lVar6 + (long)(*piVar8 + 1) * 0x10 + 0x138);
                    goto LAB_0056ef48;
                  }
                  uVar7 = uVar7 + 1;
                  piVar8 = piVar8 + 4;
                } while (uVar7 < *(ushort *)(lVar6 + 0x12a));
              }
              puVar3 = (undefined8 *)
                       native_sub_3c9b34(plVar4,_MG_BlocksEngine2_Block_I_BE2_Block_TypeInfo_12d4dd8
                                         ,1);
LAB_0056ef48:
              iVar1 = (*(code *)*puVar3)(plVar4,puVar3[1]);
              if (iVar1 == param_2) {
                lVar6 = *plVar4;
                if ((ulong)*(ushort *)(lVar6 + 0x12a) != 0) {
                  uVar7 = 0;
                  piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar8 + -2) ==
                        _MG_BlocksEngine2_Block_I_BE2_Block_TypeInfo_12d4dd8) {
                      puVar3 = (undefined8 *)(lVar6 + (long)(*piVar8 + 4) * 0x10 + 0x138);
                      goto LAB_0056efb4;
                    }
                    uVar7 = uVar7 + 1;
                    piVar8 = piVar8 + 4;
                  } while (uVar7 < *(ushort *)(lVar6 + 0x12a));
                }
                puVar3 = (undefined8 *)
                         native_sub_3c9b34(plVar4,
                                           _MG_BlocksEngine2_Block_I_BE2_Block_TypeInfo_12d4dd8,4);
LAB_0056efb4:
                uVar5 = (*(code *)*puVar3)(plVar4,puVar3[1]);
                if (lVar2 == 0) goto LAB_0056f078;
                native_System_Collections_Generic_List_int_____Add_d40c00
                          (lVar2,uVar5,
                           _Method_System_Collections_Generic_List_I_BE2_Instruction__Add___12dc9c0)
                ;
              }
              lVar6 = *plVar4;
              if ((ulong)*(ushort *)(lVar6 + 0x12a) != 0) {
                uVar7 = 0;
                piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar8 + -2) == _MG_BlocksEngine2_Block_I_BE2_Block_TypeInfo_12d4dd8
                     ) {
                    puVar3 = (undefined8 *)(lVar6 + (long)(*piVar8 + 4) * 0x10 + 0x138);
                    goto LAB_0056f034;
                  }
                  uVar7 = uVar7 + 1;
                  piVar8 = piVar8 + 4;
                } while (uVar7 < *(ushort *)(lVar6 + 0x12a));
              }
              puVar3 = (undefined8 *)
                       native_sub_3c9b34(plVar4,_MG_BlocksEngine2_Block_I_BE2_Block_TypeInfo_12d4dd8
                                         ,4);
LAB_0056f034:
              uVar5 = (*(code *)*puVar3)(plVar4,puVar3[1]);
              uVar5 = native_MG_BlocksEngine2_Utils_BE2_BlockUtils__GetParentInstructionOfTypeAll_56ebc8
                                (uVar5,param_2);
              if (lVar2 != 0) {
                native_System_Collections_Generic_List_BE2_Dropdown___AddRange_d40e50
                          (lVar2,uVar5,
                           _Method_System_Collections_Generic_List_I_BE2_Instruction__AddRange___12dc9c8
                          );
                return lVar2;
              }
            }
          }
        }
      }
    }
  }
LAB_0056f078:
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* MG_BlocksEngine2.Utils.BE2_BlockUtils$$BlockIsVariable @ 0x56f07c
 * bool MG_BlocksEngine2_Utils_BE2_BlockUtils__BlockIsVariable (MG_BlocksEngine2_Block_I_BE2_Block_o* block, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MG_BlocksEngine2.Utils.BE2_BlockUtils$$BlockIsVariable
   bool MG_BlocksEngine2_Utils_BE2_BlockUtils__BlockIsVariable
   (MG_BlocksEngine2_Block_I_BE2_Block_o* block, const MethodInfo* method); */

bool native_MG_BlocksEngine2_Utils_BE2_BlockUtils__BlockIsVariable_56f07c(long *param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  int *piVar8;
  
  if ((bRam000000000133ea74 & 1) == 0) {
    native_sub_43273c(&MG_BlocksEngine2_Block_I_BE2_Block_TypeInfo_12d4dd8);
    native_sub_43273c(&MG_BlocksEngine2_Attribute_SerializeAsVariableAttribute_var_12d1838);
    native_sub_43273c(&MG_BlocksEngine2_Attribute_SerializeAsVariableAttribute_TypeInfo_12d5d38);
    native_sub_43273c(&System_Type_TypeInfo_12d6340);
    bRam000000000133ea74 = 1;
  }
  if (param_1 != (long *)0x0) {
    lVar6 = *param_1;
    if ((ulong)*(ushort *)(lVar6 + 0x12a) != 0) {
      uVar7 = 0;
      piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == _MG_BlocksEngine2_Block_I_BE2_Block_TypeInfo_12d4dd8) {
          puVar1 = (undefined8 *)(lVar6 + (long)(*piVar8 + 4) * 0x10 + 0x138);
          goto LAB_0056f134;
        }
        uVar7 = uVar7 + 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 < *(ushort *)(lVar6 + 0x12a));
    }
    puVar1 = (undefined8 *)
             native_sub_3c9b34(param_1,_MG_BlocksEngine2_Block_I_BE2_Block_TypeInfo_12d4dd8,4);
LAB_0056f134:
    lVar6 = (*(code *)*puVar1)(param_1,puVar1[1]);
    if (lVar6 != 0) {
      uVar2 = native_System_Object__GetType_adb48c(lVar6,0);
      uVar3 = _MG_BlocksEngine2_Attribute_SerializeAsVariableAttribute_var_12d1838;
      if (((*(byte *)(_System_Type_TypeInfo_12d6340 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_System_Type_TypeInfo_12d6340 + 0xe0) == 0)) {
        native_sub_4327ec(_System_Type_TypeInfo_12d6340);
      }
      uVar3 = native_System_Type__GetTypeFromHandle_b0fb24(uVar3,0);
      plVar4 = (long *)native_System_Attribute__GetCustomAttribute_966890(uVar2,uVar3,0);
      if (plVar4 != (long *)0x0) {
        if ((*(byte *)(*plVar4 + 300) <
             *(byte *)(_MG_BlocksEngine2_Attribute_SerializeAsVariableAttribute_TypeInfo_12d5d38 +
                      300)) ||
           (*(long *)(*(long *)(*plVar4 + 200) +
                      (ulong)*(byte *)(
                                      _MG_BlocksEngine2_Attribute_SerializeAsVariableAttribute_TypeInfo_12d5d38
                                      + 300) * 8 + -8) !=
            _MG_BlocksEngine2_Attribute_SerializeAsVariableAttribute_TypeInfo_12d5d38)) {
          plVar4 = (long *)native_sub_432b04();
          if ((bRam000000000133ea75 & 1) == 0) {
            native_sub_43273c(&BE2_Ins_FunctionBlock_var_12d1300);
            native_sub_43273c(&MG_BlocksEngine2_Block_I_BE2_Block_TypeInfo_12d4dd8);
            native_sub_43273c(&System_Type_TypeInfo_12d6340);
            bRam000000000133ea75 = 1;
          }
          if (plVar4 != (long *)0x0) {
            lVar6 = *plVar4;
            if ((ulong)*(ushort *)(lVar6 + 0x12a) != 0) {
              uVar7 = 0;
              piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
              do {
                if (*(long *)(piVar8 + -2) == _MG_BlocksEngine2_Block_I_BE2_Block_TypeInfo_12d4dd8)
                {
                  puVar1 = (undefined8 *)(lVar6 + (long)(*piVar8 + 4) * 0x10 + 0x138);
                  goto LAB_0056f29c;
                }
                uVar7 = uVar7 + 1;
                piVar8 = piVar8 + 4;
              } while (uVar7 < *(ushort *)(lVar6 + 0x12a));
            }
            puVar1 = (undefined8 *)
                     native_sub_3c9b34(plVar4,_MG_BlocksEngine2_Block_I_BE2_Block_TypeInfo_12d4dd8,4
                                      );
LAB_0056f29c:
            lVar6 = (*(code *)*puVar1)(plVar4,puVar1[1]);
            if (lVar6 != 0) {
              lVar6 = native_System_Object__GetType_adb48c(lVar6,0);
              uVar3 = _BE2_Ins_FunctionBlock_var_12d1300;
              if (((*(byte *)(_System_Type_TypeInfo_12d6340 + 0x133) >> 2 & 1) != 0) &&
                 (*(int *)(_System_Type_TypeInfo_12d6340 + 0xe0) == 0)) {
                native_sub_4327ec(_System_Type_TypeInfo_12d6340);
              }
              lVar5 = native_System_Type__GetTypeFromHandle_b0fb24(uVar3,0);
              return lVar6 == lVar5;
            }
          }
                    /* WARNING: Subroutine does not return */
          native_sub_432810();
        }
      }
      return plVar4 != (long *)0x0;
    }
  }
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* MG_BlocksEngine2.Utils.BE2_BlockUtils$$BlockIsFunction @ 0x56f1f0
 * bool MG_BlocksEngine2_Utils_BE2_BlockUtils__BlockIsFunction (MG_BlocksEngine2_Block_I_BE2_Block_o* block, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MG_BlocksEngine2.Utils.BE2_BlockUtils$$BlockIsFunction
   bool MG_BlocksEngine2_Utils_BE2_BlockUtils__BlockIsFunction
   (MG_BlocksEngine2_Block_I_BE2_Block_o* block, const MethodInfo* method); */

bool native_MG_BlocksEngine2_Utils_BE2_BlockUtils__BlockIsFunction_56f1f0(long *param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  int *piVar6;
  
  if ((bRam000000000133ea75 & 1) == 0) {
    native_sub_43273c(&BE2_Ins_FunctionBlock_var_12d1300);
    native_sub_43273c(&MG_BlocksEngine2_Block_I_BE2_Block_TypeInfo_12d4dd8);
    native_sub_43273c(&System_Type_TypeInfo_12d6340);
    bRam000000000133ea75 = 1;
  }
  if (param_1 != (long *)0x0) {
    lVar4 = *param_1;
    if ((ulong)*(ushort *)(lVar4 + 0x12a) != 0) {
      uVar5 = 0;
      piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == _MG_BlocksEngine2_Block_I_BE2_Block_TypeInfo_12d4dd8) {
          puVar2 = (undefined8 *)(lVar4 + (long)(*piVar6 + 4) * 0x10 + 0x138);
          goto LAB_0056f29c;
        }
        uVar5 = uVar5 + 1;
        piVar6 = piVar6 + 4;
      } while (uVar5 < *(ushort *)(lVar4 + 0x12a));
    }
    puVar2 = (undefined8 *)
             native_sub_3c9b34(param_1,_MG_BlocksEngine2_Block_I_BE2_Block_TypeInfo_12d4dd8,4);
LAB_0056f29c:
    lVar4 = (*(code *)*puVar2)(param_1,puVar2[1]);
    if (lVar4 != 0) {
      lVar4 = native_System_Object__GetType_adb48c(lVar4,0);
      uVar1 = _BE2_Ins_FunctionBlock_var_12d1300;
      if (((*(byte *)(_System_Type_TypeInfo_12d6340 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_System_Type_TypeInfo_12d6340 + 0xe0) == 0)) {
        native_sub_4327ec(_System_Type_TypeInfo_12d6340);
      }
      lVar3 = native_System_Type__GetTypeFromHandle_b0fb24(uVar1,0);
      return lVar4 == lVar3;
    }
  }
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* MG_BlocksEngine2.Utils.BE2_BlockUtils$$CallOnEndOfFrame @ 0x56f310
 * void MG_BlocksEngine2_Utils_BE2_BlockUtils__CallOnEndOfFrame (UnityEngine_MonoBehaviour_o* monoBehaviour, System_Action_o* action, const MethodInfo* method); */

/* MG_BlocksEngine2.Utils.BE2_BlockUtils$$CallOnEndOfFrame
   void MG_BlocksEngine2_Utils_BE2_BlockUtils__CallOnEndOfFrame (UnityEngine_MonoBehaviour_o*
   monoBehaviour, System_Action_o* action, const MethodInfo* method); */

void native_MG_BlocksEngine2_Utils_BE2_BlockUtils__CallOnEndOfFrame_56f310
               (long param_1,undefined8 param_2)

{
  long lVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  lVar1 = native_MG_BlocksEngine2_Utils_BE2_BlockUtils__InvokeRoutine_56f348(param_2);
  if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
    native_sub_432810();
  }
  if (lVar1 == 0) {
    native_sub_432740(&System_NullReferenceException_TypeInfo_12d5498,0,0);
    uVar3 = native_sub_432808();
    uVar4 = native_sub_432740(&StringLiteral_routine_is_null_12f5ec0);
    native_System_NullReferenceException___ctor_ad2894(uVar3,uVar4,0);
  }
  else {
    if (pcRam0000000001340fe8 == (code *)0x0) {
      pcRam0000000001340fe8 = (code *)native_sub_4326f0(&UNK_00e2f589);
    }
    uVar2 = (*pcRam0000000001340fe8)(param_1);
    if ((uVar2 & 1) != 0) {
      if (pcRam0000000001340ff8 == (code *)0x0) {
        pcRam0000000001340ff8 = (code *)native_sub_4326f0(&UNK_00e2f61c);
      }
                    /* WARNING: Could not recover jumptable at 0x008e91f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*pcRam0000000001340ff8)(param_1,lVar1);
      return;
    }
    native_sub_432740(&System_ArgumentException_TypeInfo_12d3800);
    uVar3 = native_sub_432808();
    uVar4 = native_sub_432740(&
                              StringLiteral_Coroutines_can_only_be_stopped_on_a_MonoBehaviour_12ed328
                             );
    native_System_ArgumentException___ctor_953858(uVar3,uVar4,0);
  }
  uVar4 = native_sub_432740(&Method_UnityEngine_MonoBehaviour_StartCoroutine___12e55d8);
                    /* WARNING: Subroutine does not return */
  native_sub_4327dc(uVar3,uVar4);
}



/* MG_BlocksEngine2.Utils.BE2_BlockUtils$$InvokeRoutine @ 0x56f348
 * System_Collections_IEnumerator_o* MG_BlocksEngine2_Utils_BE2_BlockUtils__InvokeRoutine (System_Action_o* action, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MG_BlocksEngine2.Utils.BE2_BlockUtils$$InvokeRoutine
   System_Collections_IEnumerator_o* MG_BlocksEngine2_Utils_BE2_BlockUtils__InvokeRoutine
   (System_Action_o* action, const MethodInfo* method); */

long native_MG_BlocksEngine2_Utils_BE2_BlockUtils__InvokeRoutine_56f348(undefined8 param_1)

{
  long lVar1;
  
  if ((bRam000000000133ea76 & 1) == 0) {
    native_sub_43273c(&MG_BlocksEngine2_Utils_BE2_BlockUtils__InvokeRoutine_d__13_TypeInfo_12d6fb8);
    bRam000000000133ea76 = 1;
  }
  lVar1 = native_sub_432808(
                           _MG_BlocksEngine2_Utils_BE2_BlockUtils__InvokeRoutine_d__13_TypeInfo_12d6fb8
                           );
  native_MG_BlocksEngine2_Utils_BE2_BlockUtils__InvokeRoutine_d__13___ctor_950280(lVar1,0,0);
  if (lVar1 != 0) {
    *(undefined8 *)(lVar1 + 0x20) = param_1;
    native_sub_4326e0((undefined8 *)(lVar1 + 0x20),param_1);
    return lVar1;
  }
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* MG_BlocksEngine2.Utils.BE2_BlockUtils$$InstantiateNoViewBlock @ 0x56f3c0
 * MG_BlocksEngine2_Block_I_BE2_Block_o* MG_BlocksEngine2_Utils_BE2_BlockUtils__InstantiateNoViewBlock (MG_BlocksEngine2_Block_I_BE2_Block_o* block, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MG_BlocksEngine2.Utils.BE2_BlockUtils$$InstantiateNoViewBlock
   MG_BlocksEngine2_Block_I_BE2_Block_o*
   MG_BlocksEngine2_Utils_BE2_BlockUtils__InstantiateNoViewBlock
   (MG_BlocksEngine2_Block_I_BE2_Block_o* block, const MethodInfo* method); */

long * native_MG_BlocksEngine2_Utils_BE2_BlockUtils__InstantiateNoViewBlock_56f3c0(long *param_1)

{
  byte bVar1;
  undefined4 uVar2;
  int iVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long *plVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long *plVar11;
  long *plVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  ulong uVar16;
  int *piVar17;
  uint uVar18;
  
  if ((bRam000000000133ea77 & 1) == 0) {
    native_sub_43273c(&MG_BlocksEngine2_Block_BE2_GhostBlock_TypeInfo_12d39d0);
    native_sub_43273c(&BE2_Ins_FunctionBlock_TypeInfo_12d3a00);
    native_sub_43273c(&Method_UnityEngine_GameObject_AddComponent_BE2_BlockNoViewLayout____12e4760);
    native_sub_43273c(&
                      Method_UnityEngine_GameObject_AddComponent_BE2_BlockSectionHeader_LocalVariable____12e4770
                     );
    native_sub_43273c(&
                      Method_UnityEngine_GameObject_AddComponent_BE2_BlockSectionHeader_Operation____12e4778
                     );
    native_sub_43273c(&Method_UnityEngine_GameObject_AddComponent_BE2_Block____12e4758);
    native_sub_43273c(&
                      Method_UnityEngine_GameObject_AddComponent_BE2_NoViewBlockSectionBody____12e4798
                     );
    native_sub_43273c(&
                      Method_UnityEngine_GameObject_AddComponent_BE2_NoViewBlockSectionHeader____12e47a0
                     );
    native_sub_43273c(&Method_UnityEngine_GameObject_AddComponent_BE2_NoViewBlockSection____12e4790)
    ;
    native_sub_43273c(&
                      Method_UnityEngine_GameObject_GetComponent_BE2_Op_FunctionLocalVariable____12e4938
                     );
    native_sub_43273c(&UnityEngine_GameObject_TypeInfo_12d47d8);
    native_sub_43273c(&MG_BlocksEngine2_Block_I_BE2_BlockLayout_TypeInfo_12d4de0);
    native_sub_43273c(&MG_BlocksEngine2_Block_I_BE2_BlockSection_TypeInfo_12d4de8);
    native_sub_43273c(&MG_BlocksEngine2_Block_I_BE2_Block_TypeInfo_12d4dd8);
    native_sub_43273c(&MG_BlocksEngine2_Block_Instruction_I_BE2_Instruction_TypeInfo_12d4e28);
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    native_sub_43273c(&UnityEngine_RectTransform_var_12d17b0);
    native_sub_43273c(&System_Type___TypeInfo_12d3430);
    native_sub_43273c(&System_Type_TypeInfo_12d6340);
    native_sub_43273c(&StringLiteral_section_12f5f88);
    native_sub_43273c(&StringLiteral_header_12f4a38);
    native_sub_43273c(&StringLiteral_body_12f3c28);
    native_sub_43273c(&StringLiteral__noView_12eaec0);
    bRam000000000133ea77 = 1;
  }
  if (param_1 != (long *)0x0) {
    if ((*(byte *)(_MG_BlocksEngine2_Block_BE2_GhostBlock_TypeInfo_12d39d0 + 300) <=
         *(byte *)(*param_1 + 300)) &&
       (*(long *)(*(long *)(*param_1 + 200) +
                  (ulong)*(byte *)(_MG_BlocksEngine2_Block_BE2_GhostBlock_TypeInfo_12d39d0 + 300) *
                  8 + -8) == _MG_BlocksEngine2_Block_BE2_GhostBlock_TypeInfo_12d39d0)) {
      return (long *)0x0;
    }
    lVar13 = *param_1;
    if ((ulong)*(ushort *)(lVar13 + 0x12a) != 0) {
      uVar16 = 0;
      piVar17 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
      do {
        if (*(long *)(piVar17 + -2) == _MG_BlocksEngine2_Block_I_BE2_Block_TypeInfo_12d4dd8) {
          puVar4 = (undefined8 *)(lVar13 + (long)*piVar17 * 0x10 + 0x138);
          goto LAB_0056f5a0;
        }
        uVar16 = uVar16 + 1;
        piVar17 = piVar17 + 4;
      } while (uVar16 < *(ushort *)(lVar13 + 0x12a));
    }
    puVar4 = (undefined8 *)
             native_sub_3c9b34(param_1,_MG_BlocksEngine2_Block_I_BE2_Block_TypeInfo_12d4dd8,0);
LAB_0056f5a0:
    lVar13 = (*(code *)*puVar4)(param_1,puVar4[1]);
    if (lVar13 != 0) {
      uVar5 = native_UnityEngine_Object__get_name_8e8098(lVar13,0);
      uVar6 = native_System_String__Concat_afbd68(uVar5,_StringLiteral__noView_12eaec0,0);
      plVar7 = (long *)native_sub_432750(_System_Type___TypeInfo_12d3430,1);
      uVar5 = _UnityEngine_RectTransform_var_12d17b0;
      if (((*(byte *)(_System_Type_TypeInfo_12d6340 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_System_Type_TypeInfo_12d6340 + 0xe0) == 0)) {
        native_sub_4327ec(_System_Type_TypeInfo_12d6340);
      }
      lVar13 = native_System_Type__GetTypeFromHandle_b0fb24(uVar5,0);
      if (plVar7 != (long *)0x0) {
        if ((lVar13 != 0) &&
           (lVar8 = native_sub_4327f8(lVar13,*(undefined8 *)(*plVar7 + 0x40)), lVar8 == 0)) {
LAB_005700f0:
          uVar5 = native_sub_432830();
                    /* WARNING: Subroutine does not return */
          native_sub_4327dc(uVar5,0);
        }
        if ((int)plVar7[3] == 0) {
LAB_005700e4:
          uVar5 = native_sub_43283c();
                    /* WARNING: Subroutine does not return */
          native_sub_4327dc(uVar5,0);
        }
        plVar7[4] = lVar13;
        native_sub_4326e0(plVar7 + 4,lVar13);
        lVar13 = native_sub_432808(_UnityEngine_GameObject_TypeInfo_12d47d8);
        native_UnityEngine_GameObject___ctor_8de9a4(lVar13,uVar6,plVar7,0);
        if (lVar13 != 0) {
          lVar8 = native_UnityEngine_GameObject__AddComponent_ActiveAnimation__4a2118
                            (lVar13,
                             _Method_UnityEngine_GameObject_AddComponent_BE2_BlockNoViewLayout____12e4760
                            );
          plVar7 = (long *)native_UnityEngine_GameObject__AddComponent_ActiveAnimation__4a2118
                                     (lVar13,
                                      _Method_UnityEngine_GameObject_AddComponent_BE2_Block____12e4758
                                     );
          lVar14 = *param_1;
          if ((ulong)*(ushort *)(lVar14 + 0x12a) != 0) {
            uVar16 = 0;
            piVar17 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
            do {
              if (*(long *)(piVar17 + -2) == _MG_BlocksEngine2_Block_I_BE2_Block_TypeInfo_12d4dd8) {
                puVar4 = (undefined8 *)(lVar14 + (long)(*piVar17 + 1) * 0x10 + 0x138);
                goto LAB_0056f710;
              }
              uVar16 = uVar16 + 1;
              piVar17 = piVar17 + 4;
            } while (uVar16 < *(ushort *)(lVar14 + 0x12a));
          }
          puVar4 = (undefined8 *)
                   native_sub_3c9b34(param_1,_MG_BlocksEngine2_Block_I_BE2_Block_TypeInfo_12d4dd8,1)
          ;
LAB_0056f710:
          uVar2 = (*(code *)*puVar4)(param_1,puVar4[1]);
          if (plVar7 != (long *)0x0) {
            lVar14 = *plVar7;
            if ((ulong)*(ushort *)(lVar14 + 0x12a) != 0) {
              uVar16 = 0;
              piVar17 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
              do {
                if (*(long *)(piVar17 + -2) == _MG_BlocksEngine2_Block_I_BE2_Block_TypeInfo_12d4dd8)
                {
                  puVar4 = (undefined8 *)(lVar14 + (long)(*piVar17 + 2) * 0x10 + 0x138);
                  goto LAB_0056f780;
                }
                uVar16 = uVar16 + 1;
                piVar17 = piVar17 + 4;
              } while (uVar16 < *(ushort *)(lVar14 + 0x12a));
            }
            puVar4 = (undefined8 *)
                     native_sub_3c9b34(plVar7,_MG_BlocksEngine2_Block_I_BE2_Block_TypeInfo_12d4dd8,2
                                      );
LAB_0056f780:
            (*(code *)*puVar4)(plVar7,uVar2,puVar4[1]);
            uVar18 = 0;
            do {
              lVar14 = *param_1;
              if ((ulong)*(ushort *)(lVar14 + 0x12a) != 0) {
                uVar16 = 0;
                piVar17 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar17 + -2) ==
                      _MG_BlocksEngine2_Block_I_BE2_Block_TypeInfo_12d4dd8) {
                    puVar4 = (undefined8 *)(lVar14 + (long)(*piVar17 + 3) * 0x10 + 0x138);
                    goto LAB_0056fd48;
                  }
                  uVar16 = uVar16 + 1;
                  piVar17 = piVar17 + 4;
                } while (uVar16 < *(ushort *)(lVar14 + 0x12a));
              }
              puVar4 = (undefined8 *)
                       native_sub_3c9b34(param_1,
                                         _MG_BlocksEngine2_Block_I_BE2_Block_TypeInfo_12d4dd8,3);
LAB_0056fd48:
              plVar11 = (long *)(*(code *)*puVar4)(param_1,puVar4[1]);
              if (plVar11 == (long *)0x0) break;
              lVar14 = *plVar11;
              if ((ulong)*(ushort *)(lVar14 + 0x12a) != 0) {
                uVar16 = 0;
                piVar17 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar17 + -2) ==
                      _MG_BlocksEngine2_Block_I_BE2_BlockLayout_TypeInfo_12d4de0) {
                    puVar4 = (undefined8 *)(lVar14 + (long)(*piVar17 + 2) * 0x10 + 0x138);
                    goto LAB_0056fdb4;
                  }
                  uVar16 = uVar16 + 1;
                  piVar17 = piVar17 + 4;
                } while (uVar16 < *(ushort *)(lVar14 + 0x12a));
              }
              puVar4 = (undefined8 *)
                       native_sub_3c9b34(plVar11,
                                         _MG_BlocksEngine2_Block_I_BE2_BlockLayout_TypeInfo_12d4de0,
                                         2);
LAB_0056fdb4:
              lVar14 = (*(code *)*puVar4)(plVar11,puVar4[1]);
              if (lVar14 == 0) break;
              if (*(int *)(lVar14 + 0x18) <= (int)uVar18) {
                if (lVar8 != 0) {
                  native_MG_BlocksEngine2_Block_BE2_BlockNoViewLayout__Initialize_56483c();
                  lVar8 = *param_1;
                  if ((ulong)*(ushort *)(lVar8 + 0x12a) == 0) goto LAB_0056fe18;
                  uVar16 = 0;
                  piVar17 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
                  goto LAB_0056fdfc;
                }
                break;
              }
              lVar14 = *param_1;
              if ((ulong)*(ushort *)(lVar14 + 0x12a) != 0) {
                uVar16 = 0;
                piVar17 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar17 + -2) ==
                      _MG_BlocksEngine2_Block_I_BE2_Block_TypeInfo_12d4dd8) {
                    puVar4 = (undefined8 *)(lVar14 + (long)(*piVar17 + 3) * 0x10 + 0x138);
                    goto LAB_0056f808;
                  }
                  uVar16 = uVar16 + 1;
                  piVar17 = piVar17 + 4;
                } while (uVar16 < *(ushort *)(lVar14 + 0x12a));
              }
              puVar4 = (undefined8 *)
                       native_sub_3c9b34(param_1,
                                         _MG_BlocksEngine2_Block_I_BE2_Block_TypeInfo_12d4dd8,3);
LAB_0056f808:
              plVar11 = (long *)(*(code *)*puVar4)(param_1,puVar4[1]);
              if (plVar11 == (long *)0x0) break;
              lVar14 = *plVar11;
              if ((ulong)*(ushort *)(lVar14 + 0x12a) != 0) {
                uVar16 = 0;
                piVar17 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar17 + -2) ==
                      _MG_BlocksEngine2_Block_I_BE2_BlockLayout_TypeInfo_12d4de0) {
                    puVar4 = (undefined8 *)(lVar14 + (long)(*piVar17 + 2) * 0x10 + 0x138);
                    goto LAB_0056f874;
                  }
                  uVar16 = uVar16 + 1;
                  piVar17 = piVar17 + 4;
                } while (uVar16 < *(ushort *)(lVar14 + 0x12a));
              }
              puVar4 = (undefined8 *)
                       native_sub_3c9b34(plVar11,
                                         _MG_BlocksEngine2_Block_I_BE2_BlockLayout_TypeInfo_12d4de0,
                                         2);
LAB_0056f874:
              lVar14 = (*(code *)*puVar4)(plVar11,puVar4[1]);
              if (lVar14 == 0) break;
              if (*(uint *)(lVar14 + 0x18) <= uVar18) goto LAB_005700e4;
              plVar12 = *(long **)(lVar14 + (long)(int)uVar18 * 8 + 0x20);
              plVar11 = (long *)native_sub_432750(_System_Type___TypeInfo_12d3430,1);
              uVar5 = _UnityEngine_RectTransform_var_12d17b0;
              if (((*(byte *)(_System_Type_TypeInfo_12d6340 + 0x133) >> 2 & 1) != 0) &&
                 (*(int *)(_System_Type_TypeInfo_12d6340 + 0xe0) == 0)) {
                native_sub_4327ec(_System_Type_TypeInfo_12d6340);
              }
              lVar14 = native_System_Type__GetTypeFromHandle_b0fb24(uVar5,0);
              if (plVar11 == (long *)0x0) break;
              if ((lVar14 != 0) &&
                 (lVar9 = native_sub_4327f8(lVar14,*(undefined8 *)(*plVar11 + 0x40)), lVar9 == 0))
              goto LAB_005700f0;
              if ((int)plVar11[3] == 0) goto LAB_005700e4;
              plVar11[4] = lVar14;
              native_sub_4326e0(plVar11 + 4,lVar14);
              lVar14 = native_sub_432808(_UnityEngine_GameObject_TypeInfo_12d47d8);
              native_UnityEngine_GameObject___ctor_8de9a4
                        (lVar14,_StringLiteral_section_12f5f88,plVar11,0);
              if (lVar14 == 0) break;
              lVar9 = native_UnityEngine_GameObject__get_transform_8de5c8(lVar14,0);
              uVar5 = native_UnityEngine_GameObject__get_transform_8de5c8(lVar13,0);
              if (lVar9 == 0) break;
              native_UnityEngine_Transform__SetParent_77208c(lVar9,uVar5,0);
              lVar9 = native_UnityEngine_GameObject__get_transform_8de5c8(lVar14,0);
              if (lVar9 == 0) break;
              native_UnityEngine_Transform__SetAsLastSibling_772ae4(lVar9,0);
              lVar9 = native_UnityEngine_GameObject__AddComponent_ActiveAnimation__4a2118
                                (lVar14,
                                 _Method_UnityEngine_GameObject_AddComponent_BE2_NoViewBlockSection____12e4790
                                );
              if ((lVar9 == 0) || (*(uint *)(lVar9 + 0x40) = uVar18, plVar12 == (long *)0x0)) break;
              lVar15 = *plVar12;
              if ((ulong)*(ushort *)(lVar15 + 0x12a) != 0) {
                uVar16 = 0;
                piVar17 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar17 + -2) ==
                      _MG_BlocksEngine2_Block_I_BE2_BlockSection_TypeInfo_12d4de8) {
                    puVar4 = (undefined8 *)(lVar15 + (long)(*piVar17 + 1) * 0x10 + 0x138);
                    goto LAB_0056fa18;
                  }
                  uVar16 = uVar16 + 1;
                  piVar17 = piVar17 + 4;
                } while (uVar16 < *(ushort *)(lVar15 + 0x12a));
              }
              puVar4 = (undefined8 *)
                       native_sub_3c9b34(plVar12,
                                         _MG_BlocksEngine2_Block_I_BE2_BlockSection_TypeInfo_12d4de8
                                         ,1);
LAB_0056fa18:
              lVar15 = (*(code *)*puVar4)(plVar12,puVar4[1]);
              if (lVar15 != 0) {
                plVar11 = (long *)native_sub_432750(_System_Type___TypeInfo_12d3430,1);
                uVar5 = _UnityEngine_RectTransform_var_12d17b0;
                if (((*(byte *)(_System_Type_TypeInfo_12d6340 + 0x133) >> 2 & 1) != 0) &&
                   (*(int *)(_System_Type_TypeInfo_12d6340 + 0xe0) == 0)) {
                  native_sub_4327ec(_System_Type_TypeInfo_12d6340);
                }
                lVar15 = native_System_Type__GetTypeFromHandle_b0fb24(uVar5,0);
                if (plVar11 == (long *)0x0) break;
                if ((lVar15 != 0) &&
                   (lVar10 = native_sub_4327f8(lVar15,*(undefined8 *)(*plVar11 + 0x40)), lVar10 == 0
                   )) goto LAB_005700f0;
                if ((int)plVar11[3] == 0) goto LAB_005700e4;
                plVar11[4] = lVar15;
                native_sub_4326e0(plVar11 + 4,lVar15);
                lVar15 = native_sub_432808(_UnityEngine_GameObject_TypeInfo_12d47d8);
                native_UnityEngine_GameObject___ctor_8de9a4
                          (lVar15,_StringLiteral_header_12f4a38,plVar11,0);
                if (lVar15 == 0) break;
                lVar10 = native_UnityEngine_GameObject__get_transform_8de5c8(lVar15,0);
                uVar5 = native_UnityEngine_GameObject__get_transform_8de5c8(lVar14,0);
                if (lVar10 == 0) break;
                native_UnityEngine_Transform__SetParent_77208c(lVar10,uVar5,0);
                lVar10 = native_UnityEngine_GameObject__get_transform_8de5c8(lVar15,0);
                if (lVar10 == 0) break;
                native_UnityEngine_Transform__SetAsLastSibling_772ae4(lVar10,0);
                uVar5 = native_UnityEngine_GameObject__AddComponent_ActiveAnimation__4a2118
                                  (lVar15,
                                   _Method_UnityEngine_GameObject_AddComponent_BE2_NoViewBlockSectionHeader____12e47a0
                                  );
                *(undefined8 *)(lVar9 + 0x28) = uVar5;
                native_sub_4326e0();
              }
              lVar15 = *plVar12;
              if ((ulong)*(ushort *)(lVar15 + 0x12a) != 0) {
                uVar16 = 0;
                piVar17 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar17 + -2) ==
                      _MG_BlocksEngine2_Block_I_BE2_BlockSection_TypeInfo_12d4de8) {
                    puVar4 = (undefined8 *)(lVar15 + (long)(*piVar17 + 2) * 0x10 + 0x138);
                    goto LAB_0056fbb4;
                  }
                  uVar16 = uVar16 + 1;
                  piVar17 = piVar17 + 4;
                } while (uVar16 < *(ushort *)(lVar15 + 0x12a));
              }
              puVar4 = (undefined8 *)
                       native_sub_3c9b34(plVar12,
                                         _MG_BlocksEngine2_Block_I_BE2_BlockSection_TypeInfo_12d4de8
                                         ,2);
LAB_0056fbb4:
              lVar15 = (*(code *)*puVar4)(plVar12,puVar4[1]);
              if (lVar15 != 0) {
                plVar11 = (long *)native_sub_432750(_System_Type___TypeInfo_12d3430,1);
                uVar5 = _UnityEngine_RectTransform_var_12d17b0;
                if (((*(byte *)(_System_Type_TypeInfo_12d6340 + 0x133) >> 2 & 1) != 0) &&
                   (*(int *)(_System_Type_TypeInfo_12d6340 + 0xe0) == 0)) {
                  native_sub_4327ec(_System_Type_TypeInfo_12d6340);
                }
                lVar15 = native_System_Type__GetTypeFromHandle_b0fb24(uVar5,0);
                if (plVar11 == (long *)0x0) break;
                if ((lVar15 != 0) &&
                   (lVar10 = native_sub_4327f8(lVar15,*(undefined8 *)(*plVar11 + 0x40)), lVar10 == 0
                   )) goto LAB_005700f0;
                if ((int)plVar11[3] == 0) goto LAB_005700e4;
                plVar11[4] = lVar15;
                native_sub_4326e0(plVar11 + 4,lVar15);
                lVar15 = native_sub_432808(_UnityEngine_GameObject_TypeInfo_12d47d8);
                native_UnityEngine_GameObject___ctor_8de9a4
                          (lVar15,_StringLiteral_body_12f3c28,plVar11,0);
                if (lVar15 == 0) break;
                lVar10 = native_UnityEngine_GameObject__get_transform_8de5c8(lVar15,0);
                uVar5 = native_UnityEngine_GameObject__get_transform_8de5c8(lVar14,0);
                if (lVar10 == 0) break;
                native_UnityEngine_Transform__SetParent_77208c(lVar10,uVar5,0);
                lVar14 = native_UnityEngine_GameObject__get_transform_8de5c8(lVar15,0);
                if (lVar14 == 0) break;
                native_UnityEngine_Transform__SetAsLastSibling_772ae4(lVar14,0);
                uVar5 = native_UnityEngine_GameObject__AddComponent_ActiveAnimation__4a2118
                                  (lVar15,
                                   _Method_UnityEngine_GameObject_AddComponent_BE2_NoViewBlockSectionBody____12e4798
                                  );
                *(undefined8 *)(lVar9 + 0x30) = uVar5;
                native_sub_4326e0((undefined8 *)(lVar9 + 0x30),uVar5);
              }
              uVar18 = uVar18 + 1;
            } while( true );
          }
        }
      }
    }
  }
  goto LAB_005700e0;
  while( true ) {
    uVar16 = uVar16 + 1;
    piVar17 = piVar17 + 4;
    if (*(ushort *)(lVar8 + 0x12a) <= uVar16) break;
LAB_0056fdfc:
    if (*(long *)(piVar17 + -2) == _MG_BlocksEngine2_Block_I_BE2_Block_TypeInfo_12d4dd8) {
      puVar4 = (undefined8 *)(lVar8 + (long)(*piVar17 + 4) * 0x10 + 0x138);
      goto LAB_0056fe38;
    }
  }
LAB_0056fe18:
  puVar4 = (undefined8 *)
           native_sub_3c9b34(param_1,_MG_BlocksEngine2_Block_I_BE2_Block_TypeInfo_12d4dd8,4);
LAB_0056fe38:
  lVar8 = (*(code *)*puVar4)(param_1,puVar4[1]);
  if (lVar8 != 0) {
    uVar5 = native_System_Object__GetType_adb48c(lVar8,0);
    uVar5 = native_UnityEngine_GameObject__AddComponent_8de578(lVar13,uVar5,0);
    plVar11 = (long *)native_sub_4327f8(uVar5,
                                        _MG_BlocksEngine2_Block_Instruction_I_BE2_Instruction_TypeInfo_12d4e28
                                       );
    if (plVar11 != (long *)0x0) {
      if ((*(byte *)(_BE2_Ins_FunctionBlock_TypeInfo_12d3a00 + 300) <= *(byte *)(*plVar11 + 300)) &&
         (*(long *)(*(long *)(*plVar11 + 200) +
                    (ulong)*(byte *)(_BE2_Ins_FunctionBlock_TypeInfo_12d3a00 + 300) * 8 + -8) ==
          _BE2_Ins_FunctionBlock_TypeInfo_12d3a00)) {
        lVar8 = *param_1;
        if ((ulong)*(ushort *)(lVar8 + 0x12a) != 0) {
          uVar16 = 0;
          piVar17 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
          do {
            if (*(long *)(piVar17 + -2) == _MG_BlocksEngine2_Block_I_BE2_Block_TypeInfo_12d4dd8) {
              puVar4 = (undefined8 *)(lVar8 + (long)(*piVar17 + 4) * 0x10 + 0x138);
              goto LAB_0056ff0c;
            }
            uVar16 = uVar16 + 1;
            piVar17 = piVar17 + 4;
          } while (uVar16 < *(ushort *)(lVar8 + 0x12a));
        }
        puVar4 = (undefined8 *)
                 native_sub_3c9b34(param_1,_MG_BlocksEngine2_Block_I_BE2_Block_TypeInfo_12d4dd8,4);
LAB_0056ff0c:
        plVar12 = (long *)(*(code *)*puVar4)(param_1,puVar4[1]);
        if (plVar12 != (long *)0x0) {
          bVar1 = *(byte *)(_BE2_Ins_FunctionBlock_TypeInfo_12d3a00 + 300);
          if ((((bVar1 <= *(byte *)(*plVar12 + 300)) &&
               (*(long *)(*(long *)(*plVar12 + 200) + ((ulong)bVar1 - 1) * 8) ==
                _BE2_Ins_FunctionBlock_TypeInfo_12d3a00)) && (bVar1 <= *(byte *)(*plVar11 + 300)))
             && (*(long *)(*(long *)(*plVar11 + 200) + ((ulong)bVar1 - 1) * 8) ==
                 _BE2_Ins_FunctionBlock_TypeInfo_12d3a00)) {
            native_BE2_Ins_FunctionBlock__Initialize_60717c(plVar11,plVar12[0x10],0);
            goto LAB_0056ff78;
          }
        }
        goto LAB_005700e0;
      }
    }
LAB_0056ff78:
    lVar8 = *plVar7;
    if ((ulong)*(ushort *)(lVar8 + 0x12a) != 0) {
      uVar16 = 0;
      piVar17 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar17 + -2) == _MG_BlocksEngine2_Block_I_BE2_Block_TypeInfo_12d4dd8) {
          puVar4 = (undefined8 *)(lVar8 + (long)(*piVar17 + 5) * 0x10 + 0x138);
          goto LAB_0056ffd0;
        }
        uVar16 = uVar16 + 1;
        piVar17 = piVar17 + 4;
      } while (uVar16 < *(ushort *)(lVar8 + 0x12a));
    }
    puVar4 = (undefined8 *)
             native_sub_3c9b34(plVar7,_MG_BlocksEngine2_Block_I_BE2_Block_TypeInfo_12d4dd8,5);
LAB_0056ffd0:
    (*(code *)*puVar4)(plVar7,plVar11,puVar4[1]);
    lVar8 = *plVar7;
    if ((ulong)*(ushort *)(lVar8 + 0x12a) != 0) {
      uVar16 = 0;
      piVar17 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar17 + -2) == _MG_BlocksEngine2_Block_I_BE2_Block_TypeInfo_12d4dd8) {
          puVar4 = (undefined8 *)(lVar8 + (long)(*piVar17 + 1) * 0x10 + 0x138);
          goto LAB_0057003c;
        }
        uVar16 = uVar16 + 1;
        piVar17 = piVar17 + 4;
      } while (uVar16 < *(ushort *)(lVar8 + 0x12a));
    }
    puVar4 = (undefined8 *)
             native_sub_3c9b34(plVar7,_MG_BlocksEngine2_Block_I_BE2_Block_TypeInfo_12d4dd8,1);
LAB_0057003c:
    iVar3 = (*(code *)*puVar4)(plVar7,puVar4[1]);
    if (iVar3 == 3) {
      uVar5 = native_UnityEngine_GameObject__GetComponent_BE2_BlockSectionHeader_Custom__4a2214
                        (lVar13,
                         _Method_UnityEngine_GameObject_GetComponent_BE2_Op_FunctionLocalVariable____12e4938
                        );
      if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
        native_sub_4327ec(_UnityEngine_Object_TypeInfo_12d54e0);
      }
      uVar16 = native_UnityEngine_Object__op_Implicit_8e1b98(uVar5,0);
      if ((uVar16 & 1) == 0) {
        puVar4 = (undefined8 *)
                 &
                 Method_UnityEngine_GameObject_AddComponent_BE2_BlockSectionHeader_Operation____12e4778
        ;
      }
      else {
        puVar4 = (undefined8 *)
                 &
                 Method_UnityEngine_GameObject_AddComponent_BE2_BlockSectionHeader_LocalVariable____12e4770
        ;
      }
      native_UnityEngine_GameObject__AddComponent_ActiveAnimation__4a2118(lVar13,*puVar4);
    }
    return plVar7;
  }
LAB_005700e0:
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}


