/* ARM64 IL2CPP native pseudocode from Ghidra.
 * Recovered implementation, not original C# source.
 * Function boundaries follow the IL2CPP method address table. */


/* MG_BlocksEngine2.UI.FunctionBlock.BE2_UI_CreateFunctionBlockMenu$$Awake @ 0xdc6fbc
 * void MG_BlocksEngine2_UI_FunctionBlock_BE2_UI_CreateFunctionBlockMenu__Awake (MG_BlocksEngine2_UI_FunctionBlock_BE2_UI_CreateFunctionBlockMenu_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MG_BlocksEngine2.UI.FunctionBlock.BE2_UI_CreateFunctionBlockMenu$$Awake
   void MG_BlocksEngine2_UI_FunctionBlock_BE2_UI_CreateFunctionBlockMenu__Awake
   (MG_BlocksEngine2_UI_FunctionBlock_BE2_UI_CreateFunctionBlockMenu_o* __this, const MethodInfo*
   method); */

void native_MG_BlocksEngine2_UI_FunctionBlock_BE2_UI_CreateFunctionBlockMenu__Awake_dc6fbc
               (long param_1)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  
  if ((bRam0000000001346dcd & 1) == 0) {
    native_sub_43273c(&Method_UnityEngine_Component_GetComponent_I_BE2_Block____12e2a08);
    bRam0000000001346dcd = 1;
  }
  if (*(long *)(param_1 + 0x18) != 0) {
    uVar4 = native_UnityEngine_Component__GetComponent_ActiveAnimation__49daec
                      (*(long *)(param_1 + 0x18),
                       _Method_UnityEngine_Component_GetComponent_I_BE2_Block____12e2a08);
    puVar5 = (undefined8 *)(param_1 + 0x20);
    *puVar5 = uVar4;
    if (iRam0000000001345318 != 0) {
      puVar1 = (ulong *)(((ulong)puVar5 >> 0x12 & 0x7fff) * 8 + 0x138ecd8);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = *puVar1 | 1L << ((ulong)puVar5 >> 0xc & 0x3f);
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* MG_BlocksEngine2.UI.FunctionBlock.BE2_UI_CreateFunctionBlockMenu$$OnEnable @ 0xdc7020
 * void MG_BlocksEngine2_UI_FunctionBlock_BE2_UI_CreateFunctionBlockMenu__OnEnable (MG_BlocksEngine2_UI_FunctionBlock_BE2_UI_CreateFunctionBlockMenu_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MG_BlocksEngine2.UI.FunctionBlock.BE2_UI_CreateFunctionBlockMenu$$OnEnable
   void MG_BlocksEngine2_UI_FunctionBlock_BE2_UI_CreateFunctionBlockMenu__OnEnable
   (MG_BlocksEngine2_UI_FunctionBlock_BE2_UI_CreateFunctionBlockMenu_o* __this, const MethodInfo*
   method); */

void native_MG_BlocksEngine2_UI_FunctionBlock_BE2_UI_CreateFunctionBlockMenu__OnEnable_dc7020
               (undefined1 param_1 [16],undefined8 param_2,undefined8 param_3,undefined8 param_4,
               long param_5)

{
  uint uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  int *piVar8;
  long *plVar9;
  undefined8 uVar10;
  uint uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  
  if ((bRam0000000001346dce & 1) == 0) {
    native_sub_43273c(&Method_UnityEngine_Component_GetComponent_Label____12e2a88);
    native_sub_43273c(&Method_UnityEngine_Component_GetComponent_TMP_InputField____12e2b28);
    native_sub_43273c(&MG_BlocksEngine2_Block_I_BE2_BlockLayout_TypeInfo_12d4de0);
    native_sub_43273c(&MG_BlocksEngine2_Block_I_BE2_BlockSectionHeaderItem_TypeInfo_12d4e08);
    native_sub_43273c(&MG_BlocksEngine2_Block_I_BE2_BlockSectionHeader_TypeInfo_12d4df8);
    native_sub_43273c(&MG_BlocksEngine2_Block_I_BE2_BlockSection_TypeInfo_12d4de8);
    native_sub_43273c(&MG_BlocksEngine2_Block_I_BE2_Block_TypeInfo_12d4dd8);
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    bRam0000000001346dce = 1;
  }
  plVar9 = *(long **)(param_5 + 0x20);
  if (plVar9 != (long *)0x0) {
    lVar5 = *plVar9;
    if ((ulong)*(ushort *)(lVar5 + 0x12a) != 0) {
      uVar7 = 0;
      piVar8 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == _MG_BlocksEngine2_Block_I_BE2_Block_TypeInfo_12d4dd8) {
          puVar2 = (undefined8 *)(lVar5 + (long)(*piVar8 + 3) * 0x10 + 0x138);
          goto LAB_00dc7118;
        }
        uVar7 = uVar7 + 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 < *(ushort *)(lVar5 + 0x12a));
    }
    puVar2 = (undefined8 *)
             native_sub_3c9b34(plVar9,_MG_BlocksEngine2_Block_I_BE2_Block_TypeInfo_12d4dd8,3);
LAB_00dc7118:
    plVar9 = (long *)(*(code *)*puVar2)(plVar9,puVar2[1]);
    if (plVar9 != (long *)0x0) {
      lVar5 = *plVar9;
      if ((ulong)*(ushort *)(lVar5 + 0x12a) != 0) {
        uVar7 = 0;
        piVar8 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(long *)(piVar8 + -2) == _MG_BlocksEngine2_Block_I_BE2_BlockLayout_TypeInfo_12d4de0)
          {
            puVar2 = (undefined8 *)(lVar5 + (long)(*piVar8 + 2) * 0x10 + 0x138);
            goto LAB_00dc718c;
          }
          uVar7 = uVar7 + 1;
          piVar8 = piVar8 + 4;
        } while (uVar7 < *(ushort *)(lVar5 + 0x12a));
      }
      puVar2 = (undefined8 *)
               native_sub_3c9b34(plVar9,_MG_BlocksEngine2_Block_I_BE2_BlockLayout_TypeInfo_12d4de0,2
                                );
LAB_00dc718c:
      lVar5 = (*(code *)*puVar2)(plVar9,puVar2[1]);
      if (lVar5 != 0) {
        if (*(int *)(lVar5 + 0x18) == 0) {
LAB_00dc7438:
          uVar3 = native_sub_43283c();
                    /* WARNING: Subroutine does not return */
          native_sub_4327dc(uVar3,0);
        }
        plVar9 = *(long **)(lVar5 + 0x20);
        if (plVar9 != (long *)0x0) {
          lVar5 = *plVar9;
          if ((ulong)*(ushort *)(lVar5 + 0x12a) != 0) {
            uVar7 = 0;
            piVar8 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
            do {
              if (*(long *)(piVar8 + -2) ==
                  _MG_BlocksEngine2_Block_I_BE2_BlockSection_TypeInfo_12d4de8) {
                puVar2 = (undefined8 *)(lVar5 + (long)(*piVar8 + 1) * 0x10 + 0x138);
                goto LAB_00dc720c;
              }
              uVar7 = uVar7 + 1;
              piVar8 = piVar8 + 4;
            } while (uVar7 < *(ushort *)(lVar5 + 0x12a));
          }
          puVar2 = (undefined8 *)
                   native_sub_3c9b34(plVar9,
                                     _MG_BlocksEngine2_Block_I_BE2_BlockSection_TypeInfo_12d4de8,1);
LAB_00dc720c:
          plVar9 = (long *)(*(code *)*puVar2)(plVar9,puVar2[1]);
          if (plVar9 != (long *)0x0) {
            lVar5 = *plVar9;
            if ((ulong)*(ushort *)(lVar5 + 0x12a) != 0) {
              uVar7 = 0;
              piVar8 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
              do {
                if (*(long *)(piVar8 + -2) ==
                    _MG_BlocksEngine2_Block_I_BE2_BlockSectionHeader_TypeInfo_12d4df8) {
                  puVar2 = (undefined8 *)(lVar5 + (long)(*piVar8 + 1) * 0x10 + 0x138);
                  goto LAB_00dc7280;
                }
                uVar7 = uVar7 + 1;
                piVar8 = piVar8 + 4;
              } while (uVar7 < *(ushort *)(lVar5 + 0x12a));
            }
            puVar2 = (undefined8 *)
                     native_sub_3c9b34(plVar9,
                                       _MG_BlocksEngine2_Block_I_BE2_BlockSectionHeader_TypeInfo_12d4df8
                                       ,1);
LAB_00dc7280:
            lVar5 = (*(code *)*puVar2)(plVar9,puVar2[1]);
            if (lVar5 != 0) {
              uVar1 = *(uint *)(lVar5 + 0x18);
              if (0 < (int)uVar1) {
                uVar11 = 0;
                do {
                  if (uVar1 <= uVar11) goto LAB_00dc7438;
                  plVar9 = *(long **)(lVar5 + (long)(int)uVar11 * 8 + 0x20);
                  if (plVar9 == (long *)0x0) goto LAB_00dc7434;
                  lVar6 = *plVar9;
                  if ((ulong)*(ushort *)(lVar6 + 0x12a) != 0) {
                    uVar7 = 0;
                    piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
                    do {
                      if (*(long *)(piVar8 + -2) ==
                          _MG_BlocksEngine2_Block_I_BE2_BlockSectionHeaderItem_TypeInfo_12d4e08) {
                        puVar2 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
                        goto LAB_00dc7324;
                      }
                      uVar7 = uVar7 + 1;
                      piVar8 = piVar8 + 4;
                    } while (uVar7 < *(ushort *)(lVar6 + 0x12a));
                  }
                  puVar2 = (undefined8 *)
                           native_sub_3c9b34(plVar9,
                                             _MG_BlocksEngine2_Block_I_BE2_BlockSectionHeaderItem_TypeInfo_12d4e08
                                             ,0);
LAB_00dc7324:
                  lVar6 = (*(code *)*puVar2)(plVar9,puVar2[1]);
                  if (lVar6 == 0) goto LAB_00dc7434;
                  uVar3 = native_UnityEngine_Component__GetComponent_ActiveAnimation__49daec
                                    (lVar6,
                                     _Method_UnityEngine_Component_GetComponent_Label____12e2a88);
                  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
                     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
                    native_sub_4327ec(_UnityEngine_Object_TypeInfo_12d54e0);
                  }
                  uVar7 = native_UnityEngine_Object__op_Implicit_8e1b98(uVar3,0);
                  if ((uVar7 & 1) != 0) {
                    lVar5 = *plVar9;
                    if ((ulong)*(ushort *)(lVar5 + 0x12a) == 0) goto LAB_00dc73d0;
                    uVar7 = 0;
                    piVar8 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
                    goto LAB_00dc73b4;
                  }
                  uVar1 = *(uint *)(lVar5 + 0x18);
                  uVar11 = uVar11 + 1;
                } while ((int)uVar11 < (int)uVar1);
              }
              if ((bRam0000000001346dd0 & 1) == 0) {
                native_sub_43273c(&
                                  Method_UnityEngine_GameObject_GetComponentInChildren_Button____12e4b20
                                 );
                native_sub_43273c(&
                                  Method_UnityEngine_GameObject_GetComponent_TMP_InputField____12e4a40
                                 );
                native_sub_43273c(&MG_BlocksEngine2_Block_I_BE2_BlockLayout_TypeInfo_12d4de0);
                native_sub_43273c(&MG_BlocksEngine2_Block_I_BE2_BlockSectionHeader_TypeInfo_12d4df8)
                ;
                native_sub_43273c(&MG_BlocksEngine2_Block_I_BE2_BlockSection_TypeInfo_12d4de8);
                native_sub_43273c(&MG_BlocksEngine2_Block_I_BE2_Block_TypeInfo_12d4dd8);
                native_sub_43273c(&Method_UnityEngine_Object_Instantiate_GameObject____12e5a88);
                native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
                native_sub_43273c(&
                                  Method_MG_BlocksEngine2_UI_FunctionBlock_BE2_UI_CreateFunctionBlockMenu___c__DisplayClass7_0__AddLabel_b__0___12e96a8
                                 );
                native_sub_43273c(&
                                  MG_BlocksEngine2_UI_FunctionBlock_BE2_UI_CreateFunctionBlockMenu___c__DisplayClass7_0_TypeInfo_12d7078
                                 );
                native_sub_43273c(&UnityEngine_Events_UnityAction_TypeInfo_12d65d0);
                bRam0000000001346dd0 = 1;
              }
              lVar5 = native_sub_432808(
                                       _MG_BlocksEngine2_UI_FunctionBlock_BE2_UI_CreateFunctionBlockMenu___c__DisplayClass7_0_TypeInfo_12d7078
                                       );
              native_MG_BlocksEngine2_UI_FunctionBlock_BE2_UI_CreateFunctionBlockMenu___c__DisplayClass7_0___ctor_548e8c
                        (lVar5,0);
              if (lVar5 != 0) {
                *(long *)(lVar5 + 0x10) = param_5;
                native_sub_4326e0((long *)(lVar5 + 0x10),param_5);
                uVar10 = *(undefined8 *)(param_5 + 0x30);
                uVar12 = native_UnityEngine_Vector3__get_zero_776668(0);
                uVar3 = param_2;
                uVar14 = param_3;
                uVar13 = native_UnityEngine_Quaternion__get_identity_7628fc(0);
                plVar9 = *(long **)(param_5 + 0x20);
                if (plVar9 != (long *)0x0) {
                  lVar6 = *plVar9;
                  if ((ulong)*(ushort *)(lVar6 + 0x12a) != 0) {
                    uVar7 = 0;
                    piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
                    do {
                      if (*(long *)(piVar8 + -2) ==
                          _MG_BlocksEngine2_Block_I_BE2_Block_TypeInfo_12d4dd8) {
                        puVar2 = (undefined8 *)(lVar6 + (long)(*piVar8 + 3) * 0x10 + 0x138);
                        goto LAB_00dc75c8;
                      }
                      uVar7 = uVar7 + 1;
                      piVar8 = piVar8 + 4;
                    } while (uVar7 < *(ushort *)(lVar6 + 0x12a));
                  }
                  puVar2 = (undefined8 *)
                           native_sub_3c9b34(plVar9,
                                             _MG_BlocksEngine2_Block_I_BE2_Block_TypeInfo_12d4dd8,3)
                  ;
LAB_00dc75c8:
                  plVar9 = (long *)(*(code *)*puVar2)(plVar9,puVar2[1]);
                  if (plVar9 != (long *)0x0) {
                    lVar6 = *plVar9;
                    if ((ulong)*(ushort *)(lVar6 + 0x12a) != 0) {
                      uVar7 = 0;
                      piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
                      do {
                        if (*(long *)(piVar8 + -2) ==
                            _MG_BlocksEngine2_Block_I_BE2_BlockLayout_TypeInfo_12d4de0) {
                          puVar2 = (undefined8 *)(lVar6 + (long)(*piVar8 + 2) * 0x10 + 0x138);
                          goto LAB_00dc763c;
                        }
                        uVar7 = uVar7 + 1;
                        piVar8 = piVar8 + 4;
                      } while (uVar7 < *(ushort *)(lVar6 + 0x12a));
                    }
                    puVar2 = (undefined8 *)
                             native_sub_3c9b34(plVar9,
                                               _MG_BlocksEngine2_Block_I_BE2_BlockLayout_TypeInfo_12d4de0
                                               ,2);
LAB_00dc763c:
                    lVar6 = (*(code *)*puVar2)(plVar9,puVar2[1]);
                    if (lVar6 != 0) {
                      if (*(int *)(lVar6 + 0x18) == 0) {
                        uVar3 = native_sub_43283c();
                    /* WARNING: Subroutine does not return */
                        native_sub_4327dc(uVar3,0);
                      }
                      plVar9 = *(long **)(lVar6 + 0x20);
                      if (plVar9 != (long *)0x0) {
                        lVar6 = *plVar9;
                        if ((ulong)*(ushort *)(lVar6 + 0x12a) != 0) {
                          uVar7 = 0;
                          piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
                          do {
                            if (*(long *)(piVar8 + -2) ==
                                _MG_BlocksEngine2_Block_I_BE2_BlockSection_TypeInfo_12d4de8) {
                              puVar2 = (undefined8 *)(lVar6 + (long)(*piVar8 + 1) * 0x10 + 0x138);
                              goto LAB_00dc76bc;
                            }
                            uVar7 = uVar7 + 1;
                            piVar8 = piVar8 + 4;
                          } while (uVar7 < *(ushort *)(lVar6 + 0x12a));
                        }
                        puVar2 = (undefined8 *)
                                 native_sub_3c9b34(plVar9,
                                                  _MG_BlocksEngine2_Block_I_BE2_BlockSection_TypeInfo_12d4de8
                                                  ,1);
LAB_00dc76bc:
                        plVar9 = (long *)(*(code *)*puVar2)(plVar9,puVar2[1]);
                        if (plVar9 != (long *)0x0) {
                          lVar6 = *plVar9;
                          if ((ulong)*(ushort *)(lVar6 + 0x12a) != 0) {
                            uVar7 = 0;
                            piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
                            do {
                              if (*(long *)(piVar8 + -2) ==
                                  _MG_BlocksEngine2_Block_I_BE2_BlockSectionHeader_TypeInfo_12d4df8)
                              {
                                puVar2 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
                                goto LAB_00dc772c;
                              }
                              uVar7 = uVar7 + 1;
                              piVar8 = piVar8 + 4;
                            } while (uVar7 < *(ushort *)(lVar6 + 0x12a));
                          }
                          puVar2 = (undefined8 *)
                                   native_sub_3c9b34(plVar9,
                                                  _MG_BlocksEngine2_Block_I_BE2_BlockSectionHeader_TypeInfo_12d4df8
                                                  ,0);
LAB_00dc772c:
                          uVar4 = (*(code *)*puVar2)(plVar9,puVar2[1]);
                          if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) !=
                               0) && (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
                            native_sub_4327ec(_UnityEngine_Object_TypeInfo_12d54e0);
                          }
                          lVar6 = native_UnityEngine_Object__Instantiate_BE2_Ins_DefineFunction__4a67c0
                                            (uVar12,param_2,param_3,uVar13,uVar3,uVar14,param_4,
                                             uVar10,uVar4,
                                             _Method_UnityEngine_Object_Instantiate_GameObject____12e5a88
                                            );
                          plVar9 = (long *)(lVar5 + 0x18);
                          *plVar9 = lVar6;
                          native_sub_4326e0(plVar9,lVar6);
                          if ((*plVar9 != 0) &&
                             (lVar6 = native_UnityEngine_GameObject__GetComponentInChildren_Button__4a22e4
                                                (*plVar9,1,
                                                 _Method_UnityEngine_GameObject_GetComponentInChildren_Button____12e4b20
                                                ), lVar6 != 0)) {
                            lVar6 = *(long *)(lVar6 + 0xf8);
                            uVar3 = native_sub_432808(
                                                  _UnityEngine_Events_UnityAction_TypeInfo_12d65d0);
                            native_UnityEngine_Events_UnityAction___ctor_773130
                                      (uVar3,lVar5,
                                       _Method_MG_BlocksEngine2_UI_FunctionBlock_BE2_UI_CreateFunctionBlockMenu___c__DisplayClass7_0__AddLabel_b__0___12e96a8
                                       ,0);
                            if (lVar6 != 0) {
                              native_UnityEngine_Events_UnityEvent__AddListener_7734bc
                                        (lVar6,uVar3,0);
                              if ((*plVar9 != 0) &&
                                 (plVar9 = (long *)
                                                  native_UnityEngine_GameObject__GetComponent_BE2_BlockSectionHeader_Custom__4a2214
                                                            (*plVar9,
                                                  _Method_UnityEngine_GameObject_GetComponent_TMP_InputField____12e4a40
                                                  ), plVar9 != (long *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x00dc7850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                                (**(code **)(*plVar9 + 0x398))
                                          (plVar9,*(undefined8 *)(*plVar9 + 0x3a0));
                                return;
                              }
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
          }
        }
      }
    }
  }
LAB_00dc7434:
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
  while( true ) {
    uVar7 = uVar7 + 1;
    piVar8 = piVar8 + 4;
    if (*(ushort *)(lVar5 + 0x12a) <= uVar7) break;
LAB_00dc73b4:
    if (*(long *)(piVar8 + -2) ==
        _MG_BlocksEngine2_Block_I_BE2_BlockSectionHeaderItem_TypeInfo_12d4e08) {
      puVar2 = (undefined8 *)(lVar5 + (long)*piVar8 * 0x10 + 0x138);
      goto LAB_00dc73ec;
    }
  }
LAB_00dc73d0:
  puVar2 = (undefined8 *)
           native_sub_3c9b34(plVar9,
                             _MG_BlocksEngine2_Block_I_BE2_BlockSectionHeaderItem_TypeInfo_12d4e08,0
                            );
LAB_00dc73ec:
  lVar5 = (*(code *)*puVar2)(plVar9,puVar2[1]);
  if ((lVar5 != 0) &&
     (plVar9 = (long *)native_UnityEngine_Component__GetComponent_ActiveAnimation__49daec
                                 (lVar5,
                                  _Method_UnityEngine_Component_GetComponent_TMP_InputField____12e2b28
                                 ), plVar9 != (long *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x00dc7430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar9 + 0x398))(plVar9,*(undefined8 *)(*plVar9 + 0x3a0));
    return;
  }
  goto LAB_00dc7434;
}



/* MG_BlocksEngine2.UI.FunctionBlock.BE2_UI_CreateFunctionBlockMenu$$AddInput @ 0xdc7864
 * void MG_BlocksEngine2_UI_FunctionBlock_BE2_UI_CreateFunctionBlockMenu__AddInput (MG_BlocksEngine2_UI_FunctionBlock_BE2_UI_CreateFunctionBlockMenu_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MG_BlocksEngine2.UI.FunctionBlock.BE2_UI_CreateFunctionBlockMenu$$AddInput
   void MG_BlocksEngine2_UI_FunctionBlock_BE2_UI_CreateFunctionBlockMenu__AddInput
   (MG_BlocksEngine2_UI_FunctionBlock_BE2_UI_CreateFunctionBlockMenu_o* __this, const MethodInfo*
   method); */

void native_MG_BlocksEngine2_UI_FunctionBlock_BE2_UI_CreateFunctionBlockMenu__AddInput_dc7864
               (undefined1 param_1 [16],undefined8 param_2,undefined8 param_3,undefined8 param_4,
               long param_5)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  ulong uVar6;
  int *piVar7;
  undefined8 uVar8;
  long *plVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  
  if ((bRam0000000001346dcf & 1) == 0) {
    native_sub_43273c(&Method_UnityEngine_GameObject_GetComponentInChildren_Button____12e4b20);
    native_sub_43273c(&Method_UnityEngine_GameObject_GetComponent_TMP_InputField____12e4a40);
    native_sub_43273c(&MG_BlocksEngine2_Block_I_BE2_BlockLayout_TypeInfo_12d4de0);
    native_sub_43273c(&MG_BlocksEngine2_Block_I_BE2_BlockSectionHeader_TypeInfo_12d4df8);
    native_sub_43273c(&MG_BlocksEngine2_Block_I_BE2_BlockSection_TypeInfo_12d4de8);
    native_sub_43273c(&MG_BlocksEngine2_Block_I_BE2_Block_TypeInfo_12d4dd8);
    native_sub_43273c(&Method_UnityEngine_Object_Instantiate_GameObject____12e5a88);
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    native_sub_43273c(&
                      Method_MG_BlocksEngine2_UI_FunctionBlock_BE2_UI_CreateFunctionBlockMenu___c__DisplayClass6_0__AddInput_b__0___12e96a0
                     );
    native_sub_43273c(&
                      MG_BlocksEngine2_UI_FunctionBlock_BE2_UI_CreateFunctionBlockMenu___c__DisplayClass6_0_TypeInfo_12d7070
                     );
    native_sub_43273c(&UnityEngine_Events_UnityAction_TypeInfo_12d65d0);
    bRam0000000001346dcf = 1;
  }
  lVar1 = native_sub_432808(
                           _MG_BlocksEngine2_UI_FunctionBlock_BE2_UI_CreateFunctionBlockMenu___c__DisplayClass6_0_TypeInfo_12d7070
                           );
  native_MG_BlocksEngine2_UI_FunctionBlock_BE2_UI_CreateFunctionBlockMenu___c__DisplayClass6_0___ctor_548e60
            (lVar1,0);
  if (lVar1 != 0) {
    *(long *)(lVar1 + 0x10) = param_5;
    native_sub_4326e0((long *)(lVar1 + 0x10),param_5);
    uVar8 = *(undefined8 *)(param_5 + 0x28);
    uVar10 = native_UnityEngine_Vector3__get_zero_776668(0);
    uVar4 = param_2;
    uVar12 = param_3;
    uVar11 = native_UnityEngine_Quaternion__get_identity_7628fc(0);
    plVar9 = *(long **)(param_5 + 0x20);
    if (plVar9 != (long *)0x0) {
      lVar5 = *plVar9;
      if ((ulong)*(ushort *)(lVar5 + 0x12a) != 0) {
        uVar6 = 0;
        piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(long *)(piVar7 + -2) == _MG_BlocksEngine2_Block_I_BE2_Block_TypeInfo_12d4dd8) {
            puVar2 = (undefined8 *)(lVar5 + (long)(*piVar7 + 3) * 0x10 + 0x138);
            goto LAB_00dc79e8;
          }
          uVar6 = uVar6 + 1;
          piVar7 = piVar7 + 4;
        } while (uVar6 < *(ushort *)(lVar5 + 0x12a));
      }
      puVar2 = (undefined8 *)
               native_sub_3c9b34(plVar9,_MG_BlocksEngine2_Block_I_BE2_Block_TypeInfo_12d4dd8,3);
LAB_00dc79e8:
      plVar9 = (long *)(*(code *)*puVar2)(plVar9,puVar2[1]);
      if (plVar9 != (long *)0x0) {
        lVar5 = *plVar9;
        if ((ulong)*(ushort *)(lVar5 + 0x12a) != 0) {
          uVar6 = 0;
          piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
          do {
            if (*(long *)(piVar7 + -2) == _MG_BlocksEngine2_Block_I_BE2_BlockLayout_TypeInfo_12d4de0
               ) {
              puVar2 = (undefined8 *)(lVar5 + (long)(*piVar7 + 2) * 0x10 + 0x138);
              goto LAB_00dc7a5c;
            }
            uVar6 = uVar6 + 1;
            piVar7 = piVar7 + 4;
          } while (uVar6 < *(ushort *)(lVar5 + 0x12a));
        }
        puVar2 = (undefined8 *)
                 native_sub_3c9b34(plVar9,_MG_BlocksEngine2_Block_I_BE2_BlockLayout_TypeInfo_12d4de0
                                   ,2);
LAB_00dc7a5c:
        lVar5 = (*(code *)*puVar2)(plVar9,puVar2[1]);
        if (lVar5 != 0) {
          if (*(int *)(lVar5 + 0x18) == 0) {
            uVar4 = native_sub_43283c();
                    /* WARNING: Subroutine does not return */
            native_sub_4327dc(uVar4,0);
          }
          plVar9 = *(long **)(lVar5 + 0x20);
          if (plVar9 != (long *)0x0) {
            lVar5 = *plVar9;
            if ((ulong)*(ushort *)(lVar5 + 0x12a) != 0) {
              uVar6 = 0;
              piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
              do {
                if (*(long *)(piVar7 + -2) ==
                    _MG_BlocksEngine2_Block_I_BE2_BlockSection_TypeInfo_12d4de8) {
                  puVar2 = (undefined8 *)(lVar5 + (long)(*piVar7 + 1) * 0x10 + 0x138);
                  goto LAB_00dc7adc;
                }
                uVar6 = uVar6 + 1;
                piVar7 = piVar7 + 4;
              } while (uVar6 < *(ushort *)(lVar5 + 0x12a));
            }
            puVar2 = (undefined8 *)
                     native_sub_3c9b34(plVar9,
                                       _MG_BlocksEngine2_Block_I_BE2_BlockSection_TypeInfo_12d4de8,1
                                      );
LAB_00dc7adc:
            plVar9 = (long *)(*(code *)*puVar2)(plVar9,puVar2[1]);
            if (plVar9 != (long *)0x0) {
              lVar5 = *plVar9;
              if ((ulong)*(ushort *)(lVar5 + 0x12a) != 0) {
                uVar6 = 0;
                piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar7 + -2) ==
                      _MG_BlocksEngine2_Block_I_BE2_BlockSectionHeader_TypeInfo_12d4df8) {
                    puVar2 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
                    goto LAB_00dc7b4c;
                  }
                  uVar6 = uVar6 + 1;
                  piVar7 = piVar7 + 4;
                } while (uVar6 < *(ushort *)(lVar5 + 0x12a));
              }
              puVar2 = (undefined8 *)
                       native_sub_3c9b34(plVar9,
                                         _MG_BlocksEngine2_Block_I_BE2_BlockSectionHeader_TypeInfo_12d4df8
                                         ,0);
LAB_00dc7b4c:
              uVar3 = (*(code *)*puVar2)(plVar9,puVar2[1]);
              if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
                 (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
                native_sub_4327ec(_UnityEngine_Object_TypeInfo_12d54e0);
              }
              lVar5 = native_UnityEngine_Object__Instantiate_BE2_Ins_DefineFunction__4a67c0
                                (uVar10,param_2,param_3,uVar11,uVar4,uVar12,param_4,uVar8,uVar3,
                                 _Method_UnityEngine_Object_Instantiate_GameObject____12e5a88);
              plVar9 = (long *)(lVar1 + 0x18);
              *plVar9 = lVar5;
              native_sub_4326e0(plVar9,lVar5);
              if ((*plVar9 != 0) &&
                 (lVar5 = native_UnityEngine_GameObject__GetComponentInChildren_Button__4a22e4
                                    (*plVar9,1,
                                     _Method_UnityEngine_GameObject_GetComponentInChildren_Button____12e4b20
                                    ), lVar5 != 0)) {
                lVar5 = *(long *)(lVar5 + 0xf8);
                uVar4 = native_sub_432808(_UnityEngine_Events_UnityAction_TypeInfo_12d65d0);
                native_UnityEngine_Events_UnityAction___ctor_773130
                          (uVar4,lVar1,
                           _Method_MG_BlocksEngine2_UI_FunctionBlock_BE2_UI_CreateFunctionBlockMenu___c__DisplayClass6_0__AddInput_b__0___12e96a0
                           ,0);
                if (lVar5 != 0) {
                  native_UnityEngine_Events_UnityEvent__AddListener_7734bc(lVar5,uVar4,0);
                  if ((*plVar9 != 0) &&
                     (plVar9 = (long *)native_UnityEngine_GameObject__GetComponent_BE2_BlockSectionHeader_Custom__4a2214
                                                 (*plVar9,
                                                  _Method_UnityEngine_GameObject_GetComponent_TMP_InputField____12e4a40
                                                 ), plVar9 != (long *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x00dc7c70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                    (**(code **)(*plVar9 + 0x398))(plVar9,*(undefined8 *)(*plVar9 + 0x3a0));
                    return;
                  }
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



/* MG_BlocksEngine2.UI.FunctionBlock.BE2_UI_CreateFunctionBlockMenu$$AddLabel @ 0xdc7444
 * void MG_BlocksEngine2_UI_FunctionBlock_BE2_UI_CreateFunctionBlockMenu__AddLabel (MG_BlocksEngine2_UI_FunctionBlock_BE2_UI_CreateFunctionBlockMenu_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MG_BlocksEngine2.UI.FunctionBlock.BE2_UI_CreateFunctionBlockMenu$$AddLabel
   void MG_BlocksEngine2_UI_FunctionBlock_BE2_UI_CreateFunctionBlockMenu__AddLabel
   (MG_BlocksEngine2_UI_FunctionBlock_BE2_UI_CreateFunctionBlockMenu_o* __this, const MethodInfo*
   method); */

void native_MG_BlocksEngine2_UI_FunctionBlock_BE2_UI_CreateFunctionBlockMenu__AddLabel_dc7444
               (undefined1 param_1 [16],undefined8 param_2,undefined8 param_3,undefined8 param_4,
               long param_5)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  ulong uVar6;
  int *piVar7;
  undefined8 uVar8;
  long *plVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  
  if ((bRam0000000001346dd0 & 1) == 0) {
    native_sub_43273c(&Method_UnityEngine_GameObject_GetComponentInChildren_Button____12e4b20);
    native_sub_43273c(&Method_UnityEngine_GameObject_GetComponent_TMP_InputField____12e4a40);
    native_sub_43273c(&MG_BlocksEngine2_Block_I_BE2_BlockLayout_TypeInfo_12d4de0);
    native_sub_43273c(&MG_BlocksEngine2_Block_I_BE2_BlockSectionHeader_TypeInfo_12d4df8);
    native_sub_43273c(&MG_BlocksEngine2_Block_I_BE2_BlockSection_TypeInfo_12d4de8);
    native_sub_43273c(&MG_BlocksEngine2_Block_I_BE2_Block_TypeInfo_12d4dd8);
    native_sub_43273c(&Method_UnityEngine_Object_Instantiate_GameObject____12e5a88);
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    native_sub_43273c(&
                      Method_MG_BlocksEngine2_UI_FunctionBlock_BE2_UI_CreateFunctionBlockMenu___c__DisplayClass7_0__AddLabel_b__0___12e96a8
                     );
    native_sub_43273c(&
                      MG_BlocksEngine2_UI_FunctionBlock_BE2_UI_CreateFunctionBlockMenu___c__DisplayClass7_0_TypeInfo_12d7078
                     );
    native_sub_43273c(&UnityEngine_Events_UnityAction_TypeInfo_12d65d0);
    bRam0000000001346dd0 = 1;
  }
  lVar1 = native_sub_432808(
                           _MG_BlocksEngine2_UI_FunctionBlock_BE2_UI_CreateFunctionBlockMenu___c__DisplayClass7_0_TypeInfo_12d7078
                           );
  native_MG_BlocksEngine2_UI_FunctionBlock_BE2_UI_CreateFunctionBlockMenu___c__DisplayClass7_0___ctor_548e8c
            (lVar1,0);
  if (lVar1 != 0) {
    *(long *)(lVar1 + 0x10) = param_5;
    native_sub_4326e0((long *)(lVar1 + 0x10),param_5);
    uVar8 = *(undefined8 *)(param_5 + 0x30);
    uVar10 = native_UnityEngine_Vector3__get_zero_776668(0);
    uVar4 = param_2;
    uVar12 = param_3;
    uVar11 = native_UnityEngine_Quaternion__get_identity_7628fc(0);
    plVar9 = *(long **)(param_5 + 0x20);
    if (plVar9 != (long *)0x0) {
      lVar5 = *plVar9;
      if ((ulong)*(ushort *)(lVar5 + 0x12a) != 0) {
        uVar6 = 0;
        piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(long *)(piVar7 + -2) == _MG_BlocksEngine2_Block_I_BE2_Block_TypeInfo_12d4dd8) {
            puVar2 = (undefined8 *)(lVar5 + (long)(*piVar7 + 3) * 0x10 + 0x138);
            goto LAB_00dc75c8;
          }
          uVar6 = uVar6 + 1;
          piVar7 = piVar7 + 4;
        } while (uVar6 < *(ushort *)(lVar5 + 0x12a));
      }
      puVar2 = (undefined8 *)
               native_sub_3c9b34(plVar9,_MG_BlocksEngine2_Block_I_BE2_Block_TypeInfo_12d4dd8,3);
LAB_00dc75c8:
      plVar9 = (long *)(*(code *)*puVar2)(plVar9,puVar2[1]);
      if (plVar9 != (long *)0x0) {
        lVar5 = *plVar9;
        if ((ulong)*(ushort *)(lVar5 + 0x12a) != 0) {
          uVar6 = 0;
          piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
          do {
            if (*(long *)(piVar7 + -2) == _MG_BlocksEngine2_Block_I_BE2_BlockLayout_TypeInfo_12d4de0
               ) {
              puVar2 = (undefined8 *)(lVar5 + (long)(*piVar7 + 2) * 0x10 + 0x138);
              goto LAB_00dc763c;
            }
            uVar6 = uVar6 + 1;
            piVar7 = piVar7 + 4;
          } while (uVar6 < *(ushort *)(lVar5 + 0x12a));
        }
        puVar2 = (undefined8 *)
                 native_sub_3c9b34(plVar9,_MG_BlocksEngine2_Block_I_BE2_BlockLayout_TypeInfo_12d4de0
                                   ,2);
LAB_00dc763c:
        lVar5 = (*(code *)*puVar2)(plVar9,puVar2[1]);
        if (lVar5 != 0) {
          if (*(int *)(lVar5 + 0x18) == 0) {
            uVar4 = native_sub_43283c();
                    /* WARNING: Subroutine does not return */
            native_sub_4327dc(uVar4,0);
          }
          plVar9 = *(long **)(lVar5 + 0x20);
          if (plVar9 != (long *)0x0) {
            lVar5 = *plVar9;
            if ((ulong)*(ushort *)(lVar5 + 0x12a) != 0) {
              uVar6 = 0;
              piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
              do {
                if (*(long *)(piVar7 + -2) ==
                    _MG_BlocksEngine2_Block_I_BE2_BlockSection_TypeInfo_12d4de8) {
                  puVar2 = (undefined8 *)(lVar5 + (long)(*piVar7 + 1) * 0x10 + 0x138);
                  goto LAB_00dc76bc;
                }
                uVar6 = uVar6 + 1;
                piVar7 = piVar7 + 4;
              } while (uVar6 < *(ushort *)(lVar5 + 0x12a));
            }
            puVar2 = (undefined8 *)
                     native_sub_3c9b34(plVar9,
                                       _MG_BlocksEngine2_Block_I_BE2_BlockSection_TypeInfo_12d4de8,1
                                      );
LAB_00dc76bc:
            plVar9 = (long *)(*(code *)*puVar2)(plVar9,puVar2[1]);
            if (plVar9 != (long *)0x0) {
              lVar5 = *plVar9;
              if ((ulong)*(ushort *)(lVar5 + 0x12a) != 0) {
                uVar6 = 0;
                piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar7 + -2) ==
                      _MG_BlocksEngine2_Block_I_BE2_BlockSectionHeader_TypeInfo_12d4df8) {
                    puVar2 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
                    goto LAB_00dc772c;
                  }
                  uVar6 = uVar6 + 1;
                  piVar7 = piVar7 + 4;
                } while (uVar6 < *(ushort *)(lVar5 + 0x12a));
              }
              puVar2 = (undefined8 *)
                       native_sub_3c9b34(plVar9,
                                         _MG_BlocksEngine2_Block_I_BE2_BlockSectionHeader_TypeInfo_12d4df8
                                         ,0);
LAB_00dc772c:
              uVar3 = (*(code *)*puVar2)(plVar9,puVar2[1]);
              if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
                 (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
                native_sub_4327ec(_UnityEngine_Object_TypeInfo_12d54e0);
              }
              lVar5 = native_UnityEngine_Object__Instantiate_BE2_Ins_DefineFunction__4a67c0
                                (uVar10,param_2,param_3,uVar11,uVar4,uVar12,param_4,uVar8,uVar3,
                                 _Method_UnityEngine_Object_Instantiate_GameObject____12e5a88);
              plVar9 = (long *)(lVar1 + 0x18);
              *plVar9 = lVar5;
              native_sub_4326e0(plVar9,lVar5);
              if ((*plVar9 != 0) &&
                 (lVar5 = native_UnityEngine_GameObject__GetComponentInChildren_Button__4a22e4
                                    (*plVar9,1,
                                     _Method_UnityEngine_GameObject_GetComponentInChildren_Button____12e4b20
                                    ), lVar5 != 0)) {
                lVar5 = *(long *)(lVar5 + 0xf8);
                uVar4 = native_sub_432808(_UnityEngine_Events_UnityAction_TypeInfo_12d65d0);
                native_UnityEngine_Events_UnityAction___ctor_773130
                          (uVar4,lVar1,
                           _Method_MG_BlocksEngine2_UI_FunctionBlock_BE2_UI_CreateFunctionBlockMenu___c__DisplayClass7_0__AddLabel_b__0___12e96a8
                           ,0);
                if (lVar5 != 0) {
                  native_UnityEngine_Events_UnityEvent__AddListener_7734bc(lVar5,uVar4,0);
                  if ((*plVar9 != 0) &&
                     (plVar9 = (long *)native_UnityEngine_GameObject__GetComponent_BE2_BlockSectionHeader_Custom__4a2214
                                                 (*plVar9,
                                                  _Method_UnityEngine_GameObject_GetComponent_TMP_InputField____12e4a40
                                                 ), plVar9 != (long *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x00dc7850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                    (**(code **)(*plVar9 + 0x398))(plVar9,*(undefined8 *)(*plVar9 + 0x3a0));
                    return;
                  }
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



/* MG_BlocksEngine2.UI.FunctionBlock.BE2_UI_CreateFunctionBlockMenu$$RemoveItem @ 0xdc7c84
 * void MG_BlocksEngine2_UI_FunctionBlock_BE2_UI_CreateFunctionBlockMenu__RemoveItem (MG_BlocksEngine2_UI_FunctionBlock_BE2_UI_CreateFunctionBlockMenu_o* __this, UnityEngine_GameObject_o* item, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MG_BlocksEngine2.UI.FunctionBlock.BE2_UI_CreateFunctionBlockMenu$$RemoveItem
   void MG_BlocksEngine2_UI_FunctionBlock_BE2_UI_CreateFunctionBlockMenu__RemoveItem
   (MG_BlocksEngine2_UI_FunctionBlock_BE2_UI_CreateFunctionBlockMenu_o* __this,
   UnityEngine_GameObject_o* item, const MethodInfo* method); */

void native_MG_BlocksEngine2_UI_FunctionBlock_BE2_UI_CreateFunctionBlockMenu__RemoveItem_dc7c84
               (long param_1,long param_2)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  ulong uVar4;
  int *piVar5;
  long *plVar6;
  
  if ((bRam0000000001346dd1 & 1) == 0) {
    native_sub_43273c(&MG_BlocksEngine2_Block_I_BE2_BlockLayout_TypeInfo_12d4de0);
    native_sub_43273c(&MG_BlocksEngine2_Block_I_BE2_BlockSectionHeader_TypeInfo_12d4df8);
    native_sub_43273c(&MG_BlocksEngine2_Block_I_BE2_BlockSection_TypeInfo_12d4de8);
    native_sub_43273c(&MG_BlocksEngine2_Block_I_BE2_Block_TypeInfo_12d4dd8);
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    bRam0000000001346dd1 = 1;
  }
  if ((param_2 != 0) &&
     (lVar1 = native_UnityEngine_GameObject__get_transform_8de5c8(param_2,0), lVar1 != 0)) {
    native_UnityEngine_Transform__SetParent_77208c(lVar1,0,0);
    plVar6 = *(long **)(param_1 + 0x20);
    if (plVar6 != (long *)0x0) {
      lVar1 = *plVar6;
      if ((ulong)*(ushort *)(lVar1 + 0x12a) != 0) {
        uVar4 = 0;
        piVar5 = (int *)(*(long *)(lVar1 + 0xb0) + 8);
        do {
          if (*(long *)(piVar5 + -2) == _MG_BlocksEngine2_Block_I_BE2_Block_TypeInfo_12d4dd8) {
            puVar2 = (undefined8 *)(lVar1 + (long)(*piVar5 + 3) * 0x10 + 0x138);
            goto LAB_00dc7d74;
          }
          uVar4 = uVar4 + 1;
          piVar5 = piVar5 + 4;
        } while (uVar4 < *(ushort *)(lVar1 + 0x12a));
      }
      puVar2 = (undefined8 *)
               native_sub_3c9b34(plVar6,_MG_BlocksEngine2_Block_I_BE2_Block_TypeInfo_12d4dd8,3);
LAB_00dc7d74:
      plVar6 = (long *)(*(code *)*puVar2)(plVar6,puVar2[1]);
      if (plVar6 != (long *)0x0) {
        lVar1 = *plVar6;
        if ((ulong)*(ushort *)(lVar1 + 0x12a) != 0) {
          uVar4 = 0;
          piVar5 = (int *)(*(long *)(lVar1 + 0xb0) + 8);
          do {
            if (*(long *)(piVar5 + -2) == _MG_BlocksEngine2_Block_I_BE2_BlockLayout_TypeInfo_12d4de0
               ) {
              puVar2 = (undefined8 *)(lVar1 + (long)(*piVar5 + 2) * 0x10 + 0x138);
              goto LAB_00dc7de8;
            }
            uVar4 = uVar4 + 1;
            piVar5 = piVar5 + 4;
          } while (uVar4 < *(ushort *)(lVar1 + 0x12a));
        }
        puVar2 = (undefined8 *)
                 native_sub_3c9b34(plVar6,_MG_BlocksEngine2_Block_I_BE2_BlockLayout_TypeInfo_12d4de0
                                   ,2);
LAB_00dc7de8:
        lVar1 = (*(code *)*puVar2)(plVar6,puVar2[1]);
        if (lVar1 != 0) {
          if (*(int *)(lVar1 + 0x18) == 0) {
            uVar3 = native_sub_43283c();
                    /* WARNING: Subroutine does not return */
            native_sub_4327dc(uVar3,0);
          }
          plVar6 = *(long **)(lVar1 + 0x20);
          if (plVar6 != (long *)0x0) {
            lVar1 = *plVar6;
            if ((ulong)*(ushort *)(lVar1 + 0x12a) != 0) {
              uVar4 = 0;
              piVar5 = (int *)(*(long *)(lVar1 + 0xb0) + 8);
              do {
                if (*(long *)(piVar5 + -2) ==
                    _MG_BlocksEngine2_Block_I_BE2_BlockSection_TypeInfo_12d4de8) {
                  puVar2 = (undefined8 *)(lVar1 + (long)(*piVar5 + 1) * 0x10 + 0x138);
                  goto LAB_00dc7e68;
                }
                uVar4 = uVar4 + 1;
                piVar5 = piVar5 + 4;
              } while (uVar4 < *(ushort *)(lVar1 + 0x12a));
            }
            puVar2 = (undefined8 *)
                     native_sub_3c9b34(plVar6,
                                       _MG_BlocksEngine2_Block_I_BE2_BlockSection_TypeInfo_12d4de8,1
                                      );
LAB_00dc7e68:
            plVar6 = (long *)(*(code *)*puVar2)(plVar6,puVar2[1]);
            if (plVar6 != (long *)0x0) {
              lVar1 = *plVar6;
              if ((ulong)*(ushort *)(lVar1 + 0x12a) != 0) {
                uVar4 = 0;
                piVar5 = (int *)(*(long *)(lVar1 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar5 + -2) ==
                      _MG_BlocksEngine2_Block_I_BE2_BlockSectionHeader_TypeInfo_12d4df8) {
                    puVar2 = (undefined8 *)(lVar1 + (long)(*piVar5 + 6) * 0x10 + 0x138);
                    goto LAB_00dc7edc;
                  }
                  uVar4 = uVar4 + 1;
                  piVar5 = piVar5 + 4;
                } while (uVar4 < *(ushort *)(lVar1 + 0x12a));
              }
              puVar2 = (undefined8 *)
                       native_sub_3c9b34(plVar6,
                                         _MG_BlocksEngine2_Block_I_BE2_BlockSectionHeader_TypeInfo_12d4df8
                                         ,6);
LAB_00dc7edc:
              (*(code *)*puVar2)(plVar6,puVar2[1]);
              if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
                 (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
                native_sub_4327ec();
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
              (*pcRam0000000001341040)(0,param_2);
              return;
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* MG_BlocksEngine2.UI.FunctionBlock.BE2_UI_CreateFunctionBlockMenu$$OnButtonCreateFunctionBlock @ 0xdc7f30
 * void MG_BlocksEngine2_UI_FunctionBlock_BE2_UI_CreateFunctionBlockMenu__OnButtonCreateFunctionBlock (MG_BlocksEngine2_UI_FunctionBlock_BE2_UI_CreateFunctionBlockMenu_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MG_BlocksEngine2.UI.FunctionBlock.BE2_UI_CreateFunctionBlockMenu$$OnButtonCreateFunctionBlock
   void 
   MG_BlocksEngine2_UI_FunctionBlock_BE2_UI_CreateFunctionBlockMenu__OnButtonCreateFunctionBlock
   (MG_BlocksEngine2_UI_FunctionBlock_BE2_UI_CreateFunctionBlockMenu_o* __this, const MethodInfo*
   method); */

void native_MG_BlocksEngine2_UI_FunctionBlock_BE2_UI_CreateFunctionBlockMenu__OnButtonCreateFunctionBlock_dc7f30
               (long param_1)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  uint uVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  int *piVar9;
  long *plVar10;
  undefined8 uVar11;
  uint uVar12;
  
  if ((bRam0000000001346dd2 & 1) == 0) {
    native_sub_43273c(&Method_UnityEngine_Component_GetComponent_Label____12e2a88);
    native_sub_43273c(&Method_UnityEngine_Component_GetComponent_TMP_InputField____12e2b28);
    native_sub_43273c(&MG_BlocksEngine2_Serializer_DefineItem_TypeInfo_12d43d8);
    native_sub_43273c(&MG_BlocksEngine2_Block_I_BE2_BlockLayout_TypeInfo_12d4de0);
    native_sub_43273c(&MG_BlocksEngine2_Block_I_BE2_BlockSectionHeaderItem_TypeInfo_12d4e08);
    native_sub_43273c(&MG_BlocksEngine2_Block_I_BE2_BlockSectionHeader_TypeInfo_12d4df8);
    native_sub_43273c(&MG_BlocksEngine2_Block_I_BE2_BlockSection_TypeInfo_12d4de8);
    native_sub_43273c(&MG_BlocksEngine2_Block_I_BE2_Block_TypeInfo_12d4dd8);
    native_sub_43273c(&Method_System_Collections_Generic_List_DefineItem__Add___12dc728);
    native_sub_43273c(&Method_System_Collections_Generic_List_DefineItem___ctor___12dc720);
    native_sub_43273c(&System_Collections_Generic_List_DefineItem__TypeInfo_12d2a00);
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    native_sub_43273c(&StringLiteral_label_12f5370);
    native_sub_43273c(&StringLiteral_variable_12f6a60);
    bRam0000000001346dd2 = 1;
  }
  lVar1 = native_sub_432808(_System_Collections_Generic_List_DefineItem__TypeInfo_12d2a00);
  native_System_Collections_Generic_List_XmlEventCache_XmlEvent______ctor_d3ff44
            (lVar1,_Method_System_Collections_Generic_List_DefineItem___ctor___12dc720);
  plVar10 = *(long **)(param_1 + 0x20);
  if (plVar10 != (long *)0x0) {
    lVar5 = *plVar10;
    if ((ulong)*(ushort *)(lVar5 + 0x12a) != 0) {
      uVar7 = 0;
      piVar9 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == _MG_BlocksEngine2_Block_I_BE2_Block_TypeInfo_12d4dd8) {
          puVar2 = (undefined8 *)(lVar5 + (long)(*piVar9 + 3) * 0x10 + 0x138);
          goto LAB_00dc8098;
        }
        uVar7 = uVar7 + 1;
        piVar9 = piVar9 + 4;
      } while (uVar7 < *(ushort *)(lVar5 + 0x12a));
    }
    puVar2 = (undefined8 *)
             native_sub_3c9b34(plVar10,_MG_BlocksEngine2_Block_I_BE2_Block_TypeInfo_12d4dd8,3);
LAB_00dc8098:
    plVar10 = (long *)(*(code *)*puVar2)(plVar10,puVar2[1]);
    if (plVar10 != (long *)0x0) {
      lVar5 = *plVar10;
      if ((ulong)*(ushort *)(lVar5 + 0x12a) != 0) {
        uVar7 = 0;
        piVar9 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(long *)(piVar9 + -2) == _MG_BlocksEngine2_Block_I_BE2_BlockLayout_TypeInfo_12d4de0)
          {
            puVar2 = (undefined8 *)(lVar5 + (long)(*piVar9 + 2) * 0x10 + 0x138);
            goto LAB_00dc810c;
          }
          uVar7 = uVar7 + 1;
          piVar9 = piVar9 + 4;
        } while (uVar7 < *(ushort *)(lVar5 + 0x12a));
      }
      puVar2 = (undefined8 *)
               native_sub_3c9b34(plVar10,_MG_BlocksEngine2_Block_I_BE2_BlockLayout_TypeInfo_12d4de0,
                                 2);
LAB_00dc810c:
      lVar5 = (*(code *)*puVar2)(plVar10,puVar2[1]);
      if (lVar5 != 0) {
        if (*(int *)(lVar5 + 0x18) == 0) {
LAB_00dc840c:
          uVar3 = native_sub_43283c();
                    /* WARNING: Subroutine does not return */
          native_sub_4327dc(uVar3,0);
        }
        plVar10 = *(long **)(lVar5 + 0x20);
        if (plVar10 != (long *)0x0) {
          lVar5 = *plVar10;
          if ((ulong)*(ushort *)(lVar5 + 0x12a) != 0) {
            uVar7 = 0;
            piVar9 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
            do {
              if (*(long *)(piVar9 + -2) ==
                  _MG_BlocksEngine2_Block_I_BE2_BlockSection_TypeInfo_12d4de8) {
                puVar2 = (undefined8 *)(lVar5 + (long)(*piVar9 + 1) * 0x10 + 0x138);
                goto LAB_00dc818c;
              }
              uVar7 = uVar7 + 1;
              piVar9 = piVar9 + 4;
            } while (uVar7 < *(ushort *)(lVar5 + 0x12a));
          }
          puVar2 = (undefined8 *)
                   native_sub_3c9b34(plVar10,
                                     _MG_BlocksEngine2_Block_I_BE2_BlockSection_TypeInfo_12d4de8,1);
LAB_00dc818c:
          plVar10 = (long *)(*(code *)*puVar2)(plVar10,puVar2[1]);
          if (plVar10 != (long *)0x0) {
            lVar5 = *plVar10;
            if ((ulong)*(ushort *)(lVar5 + 0x12a) != 0) {
              uVar7 = 0;
              piVar9 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
              do {
                if (*(long *)(piVar9 + -2) ==
                    _MG_BlocksEngine2_Block_I_BE2_BlockSectionHeader_TypeInfo_12d4df8) {
                  puVar2 = (undefined8 *)(lVar5 + (long)(*piVar9 + 1) * 0x10 + 0x138);
                  goto LAB_00dc8200;
                }
                uVar7 = uVar7 + 1;
                piVar9 = piVar9 + 4;
              } while (uVar7 < *(ushort *)(lVar5 + 0x12a));
            }
            puVar2 = (undefined8 *)
                     native_sub_3c9b34(plVar10,
                                       _MG_BlocksEngine2_Block_I_BE2_BlockSectionHeader_TypeInfo_12d4df8
                                       ,1);
LAB_00dc8200:
            lVar5 = (*(code *)*puVar2)(plVar10,puVar2[1]);
            if (lVar5 != 0) {
              uVar4 = *(uint *)(lVar5 + 0x18);
              if (0 < (int)uVar4) {
                uVar12 = 0;
                do {
                  if (uVar4 <= uVar12) goto LAB_00dc840c;
                  plVar10 = *(long **)(lVar5 + (long)(int)uVar12 * 8 + 0x20);
                  if (plVar10 == (long *)0x0) goto LAB_00dc8408;
                  lVar6 = *plVar10;
                  if ((ulong)*(ushort *)(lVar6 + 0x12a) != 0) {
                    uVar7 = 0;
                    piVar9 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
                    do {
                      if (*(long *)(piVar9 + -2) ==
                          _MG_BlocksEngine2_Block_I_BE2_BlockSectionHeaderItem_TypeInfo_12d4e08) {
                        puVar2 = (undefined8 *)(lVar6 + (long)*piVar9 * 0x10 + 0x138);
                        goto LAB_00dc82ac;
                      }
                      uVar7 = uVar7 + 1;
                      piVar9 = piVar9 + 4;
                    } while (uVar7 < *(ushort *)(lVar6 + 0x12a));
                  }
                  puVar2 = (undefined8 *)
                           native_sub_3c9b34(plVar10,
                                             _MG_BlocksEngine2_Block_I_BE2_BlockSectionHeaderItem_TypeInfo_12d4e08
                                             ,0);
LAB_00dc82ac:
                  lVar6 = (*(code *)*puVar2)(plVar10,puVar2[1]);
                  if (lVar6 == 0) goto LAB_00dc8408;
                  uVar3 = native_UnityEngine_Component__GetComponent_ActiveAnimation__49daec
                                    (lVar6,
                                     _Method_UnityEngine_Component_GetComponent_Label____12e2a88);
                  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
                     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
                    native_sub_4327ec(_UnityEngine_Object_TypeInfo_12d54e0);
                  }
                  uVar7 = native_UnityEngine_Object__op_Implicit_8e1b98(uVar3,0);
                  lVar6 = *plVar10;
                  if ((ulong)*(ushort *)(lVar6 + 0x12a) != 0) {
                    uVar8 = 0;
                    piVar9 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
                    do {
                      if (*(long *)(piVar9 + -2) ==
                          _MG_BlocksEngine2_Block_I_BE2_BlockSectionHeaderItem_TypeInfo_12d4e08) {
                        puVar2 = (undefined8 *)(lVar6 + (long)*piVar9 * 0x10 + 0x138);
                        goto LAB_00dc8358;
                      }
                      uVar8 = uVar8 + 1;
                      piVar9 = piVar9 + 4;
                    } while (uVar8 < *(ushort *)(lVar6 + 0x12a));
                  }
                  puVar2 = (undefined8 *)
                           native_sub_3c9b34(plVar10,
                                             _MG_BlocksEngine2_Block_I_BE2_BlockSectionHeaderItem_TypeInfo_12d4e08
                                             ,0);
LAB_00dc8358:
                  lVar6 = (*(code *)*puVar2)(plVar10,puVar2[1]);
                  if ((lVar6 == 0) ||
                     (lVar6 = native_UnityEngine_Component__GetComponent_ActiveAnimation__49daec
                                        (lVar6,
                                         _Method_UnityEngine_Component_GetComponent_TMP_InputField____12e2b28
                                        ), lVar6 == 0)) goto LAB_00dc8408;
                  uVar11 = *(undefined8 *)(lVar6 + 0x218);
                  uVar3 = native_sub_432808(_MG_BlocksEngine2_Serializer_DefineItem_TypeInfo_12d43d8
                                           );
                  if ((uVar7 & 1) == 0) {
                    puVar2 = (undefined8 *)&StringLiteral_variable_12f6a60;
                  }
                  else {
                    puVar2 = (undefined8 *)&StringLiteral_label_12f5370;
                  }
                  native_MG_BlocksEngine2_Serializer_DefineItem___ctor_decca4
                            (uVar3,*puVar2,uVar11,0);
                  if (lVar1 == 0) goto LAB_00dc8408;
                  native_System_Collections_Generic_List_int_____Add_d40c00
                            (lVar1,uVar3,
                             _Method_System_Collections_Generic_List_DefineItem__Add___12dc728);
                  uVar4 = *(uint *)(lVar5 + 0x18);
                  uVar12 = uVar12 + 1;
                } while ((int)uVar12 < (int)uVar4);
              }
              plVar10 = (long *)native_MG_BlocksEngine2_Environment_BE2_FunctionBlocksManager__get_Instance_5fd2f8
                                          (0);
              if (plVar10 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00dc8404. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                (**(code **)(*plVar10 + 0x178))(plVar10,lVar1,*(undefined8 *)(*plVar10 + 0x180));
                return;
              }
            }
          }
        }
      }
    }
  }
LAB_00dc8408:
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* MG_BlocksEngine2.UI.FunctionBlock.BE2_UI_CreateFunctionBlockMenu$$.ctor @ 0xdc8418
 * void MG_BlocksEngine2_UI_FunctionBlock_BE2_UI_CreateFunctionBlockMenu___ctor (MG_BlocksEngine2_UI_FunctionBlock_BE2_UI_CreateFunctionBlockMenu_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MG_BlocksEngine2.UI.FunctionBlock.BE2_UI_CreateFunctionBlockMenu$$.ctor
   void MG_BlocksEngine2_UI_FunctionBlock_BE2_UI_CreateFunctionBlockMenu___ctor
   (MG_BlocksEngine2_UI_FunctionBlock_BE2_UI_CreateFunctionBlockMenu_o* __this, const MethodInfo*
   method); */

undefined1  [16]
native_MG_BlocksEngine2_UI_FunctionBlock_BE2_UI_CreateFunctionBlockMenu___ctor_dc8418(ulong param_1)

{
  undefined1 auVar1 [16];
  
  if ((bRam0000000001340ae0 & 1) == 0) {
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0,0);
    bRam0000000001340ae0 = 1;
  }
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  auVar1._8_8_ = 0;
  auVar1._0_8_ = param_1;
  return auVar1;
}


