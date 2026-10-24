/* ARM64 IL2CPP native pseudocode from Ghidra.
 * Recovered implementation, not original C# source.
 * Function boundaries follow the IL2CPP method address table. */


/* BE2_Ins_ReplaceIndexOfList$$OnStart @ 0x60c424
 * void BE2_Ins_ReplaceIndexOfList__OnStart (BE2_Ins_ReplaceIndexOfList_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* BE2_Ins_ReplaceIndexOfList$$OnStart
   void BE2_Ins_ReplaceIndexOfList__OnStart (BE2_Ins_ReplaceIndexOfList_o* __this, const MethodInfo*
   method); */

void native_BE2_Ins_ReplaceIndexOfList__OnStart_60c424(long param_1)

{
  undefined4 uVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  ulong uVar5;
  int *piVar6;
  long *plVar7;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  if ((bRam000000000133ee2e & 1) == 0) {
    native_sub_43273c(&Method_BE2_Ins_ReplaceIndexOfList_PopulateDropdown___12e2220);
    native_sub_43273c(&Method_BE2_Ins_ReplaceIndexOfList__OnStart_b__0_0___12e2218);
    native_sub_43273c(&MG_BlocksEngine2_Environment_BE2_VariablesListManager_TypeInfo_12d3a88);
    native_sub_43273c(&MG_BlocksEngine2_Block_I_BE2_BlockSectionHeaderInput_TypeInfo_12d4e00);
    native_sub_43273c(&Method_UnityEngine_Events_UnityAction_int___ctor___12de3b0);
    native_sub_43273c(&UnityEngine_Events_UnityAction_int__TypeInfo_12d2f48);
    native_sub_43273c(&UnityEngine_Events_UnityAction_TypeInfo_12d65d0);
    native_sub_43273c(&Method_UnityEngine_Events_UnityEvent_int__AddListener___12de488);
    bRam000000000133ee2e = 1;
  }
  *(undefined8 *)(param_1 + 0x88) =
       **(undefined8 **)
         (_MG_BlocksEngine2_Environment_BE2_VariablesListManager_TypeInfo_12d3a88 + 0xb8);
  native_sub_4326e0();
  lVar2 = native_MG_BlocksEngine2_Block_Instruction_BE2_InstructionBase__GetSectionInputs_60366c
                    (param_1,0);
  if (lVar2 != 0) {
    if (*(uint *)(lVar2 + 0x18) < 2) {
      uVar4 = native_sub_43283c();
                    /* WARNING: Subroutine does not return */
      native_sub_4327dc(uVar4,0);
    }
    plVar7 = *(long **)(lVar2 + 0x28);
    if (plVar7 != (long *)0x0) {
      lVar2 = *plVar7;
      if ((ulong)*(ushort *)(lVar2 + 0x12a) != 0) {
        uVar5 = 0;
        piVar6 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
        do {
          if (*(long *)(piVar6 + -2) ==
              _MG_BlocksEngine2_Block_I_BE2_BlockSectionHeaderInput_TypeInfo_12d4e00) {
            puVar3 = (undefined8 *)(lVar2 + (long)*piVar6 * 0x10 + 0x138);
            goto LAB_0060c54c;
          }
          uVar5 = uVar5 + 1;
          piVar6 = piVar6 + 4;
        } while (uVar5 < *(ushort *)(lVar2 + 0x12a));
      }
      puVar3 = (undefined8 *)
               native_sub_3c9b34(plVar7,
                                 _MG_BlocksEngine2_Block_I_BE2_BlockSectionHeaderInput_TypeInfo_12d4e00
                                 ,0);
LAB_0060c54c:
      uVar4 = (*(code *)*puVar3)(plVar7,puVar3[1]);
      lVar2 = native_MG_BlocksEngine2_Utils_BE2_Dropdown__GetBE2Component_566f34(uVar4,0);
      plVar7 = (long *)(param_1 + 0x80);
      *plVar7 = lVar2;
      native_sub_4326e0(plVar7,lVar2);
      if (*plVar7 == 0) {
        return;
      }
      lVar2 = native_MG_BlocksEngine2_Utils_BE2_Dropdown__get_onValueChanged_567184(*plVar7,0);
      uVar4 = native_sub_432808(_UnityEngine_Events_UnityAction_int__TypeInfo_12d2f48);
      native_UnityEngine_Events_UnityAction_int____ctor_89b2bc
                (uVar4,param_1,_Method_BE2_Ins_ReplaceIndexOfList__OnStart_b__0_0___12e2218,
                 _Method_UnityEngine_Events_UnityAction_int___ctor___12de3b0);
      if (lVar2 != 0) {
        native_UnityEngine_Events_UnityEvent_int___AddListener_89f390
                  (lVar2,uVar4,_Method_UnityEngine_Events_UnityEvent_int__AddListener___12de488);
        lVar2 = native_MG_BlocksEngine2_Core_BE2_MainEventsManager__get_Instance_6001fc();
        uVar4 = native_sub_432808(_UnityEngine_Events_UnityAction_TypeInfo_12d65d0);
        native_UnityEngine_Events_UnityAction___ctor_773130
                  (uVar4,param_1,_Method_BE2_Ins_ReplaceIndexOfList_PopulateDropdown___12e2220,0);
        if (lVar2 != 0) {
          native_MG_BlocksEngine2_Core_BE2_EventsManager__StartListening_563268(lVar2,5,uVar4,0);
          if ((bRam000000000133ee30 & 1) == 0) {
            native_sub_43273c(&
                              Method_System_Collections_Generic_Dictionary_string__List_string___GetEnumerator___12d96f0
                             );
            native_sub_43273c(&
                              Method_System_Collections_Generic_Dictionary_Enumerator_string__List_string___Dispose___12dad60
                             );
            native_sub_43273c(&
                              Method_System_Collections_Generic_Dictionary_Enumerator_string__List_string___MoveNext___12dad68
                             );
            native_sub_43273c(&
                              Method_System_Collections_Generic_Dictionary_Enumerator_string__List_string___get_Current___12dad70
                             );
            native_sub_43273c(&
                              Method_System_Collections_Generic_KeyValuePair_string__List_string___get_Key___12dbf08
                             );
            bRam000000000133ee30 = 1;
          }
          uStack_38 = 0;
          uStack_40 = 0;
          uStack_48 = 0;
          if (*(long *)(param_1 + 0x80) != 0) {
            native_MG_BlocksEngine2_Utils_BE2_Dropdown__ClearOptions_580490
                      (*(long *)(param_1 + 0x80),0);
            if ((*(long *)(param_1 + 0x88) != 0) &&
               (lVar2 = *(long *)(*(long *)(param_1 + 0x88) + 0x20), lVar2 != 0)) {
              native_System_Collections_Generic_Dictionary_object__object___GetEnumerator_cdabfc
                        (&uStack_48,lVar2,
                         _Method_System_Collections_Generic_Dictionary_string__List_string___GetEnumerator___12d96f0
                        );
              while (uVar5 = native_System_Collections_Generic_Dictionary_Enumerator_object__object___MoveNext_7f4bb4
                                       (&uStack_48,
                                        _Method_System_Collections_Generic_Dictionary_Enumerator_string__List_string___MoveNext___12dad68
                                       ), (uVar5 & 1) != 0) {
                if (*(long *)(param_1 + 0x80) == 0) {
                    /* WARNING: Subroutine does not return */
                  native_sub_432810();
                }
                native_MG_BlocksEngine2_Utils_BE2_Dropdown__AddOption_580570
                          (*(long *)(param_1 + 0x80),uStack_38,0);
              }
              native_System_Collections_Generic_Dictionary_Enumerator_object__object___Dispose_7f4d1c
                        (&uStack_48,
                         _Method_System_Collections_Generic_Dictionary_Enumerator_string__List_string___Dispose___12dad60
                        );
              if (*(long *)(param_1 + 0x80) != 0) {
                native_MG_BlocksEngine2_Utils_BE2_Dropdown__RefreshShownValue_580b34
                          (*(long *)(param_1 + 0x80),0);
                lVar2 = *(long *)(param_1 + 0x80);
                if (lVar2 != 0) {
                  uVar1 = native_MG_BlocksEngine2_Utils_BE2_Dropdown__GetIndexOf_58082c
                                    (lVar2,*(undefined8 *)(param_1 + 0x78),0);
                  native_MG_BlocksEngine2_Utils_BE2_Dropdown__set_value_580a48(lVar2,uVar1,0);
                  return;
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
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* BE2_Ins_ReplaceIndexOfList$$OnDisable @ 0x60c7e0
 * void BE2_Ins_ReplaceIndexOfList__OnDisable (BE2_Ins_ReplaceIndexOfList_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* BE2_Ins_ReplaceIndexOfList$$OnDisable
   void BE2_Ins_ReplaceIndexOfList__OnDisable (BE2_Ins_ReplaceIndexOfList_o* __this, const
   MethodInfo* method); */

void native_BE2_Ins_ReplaceIndexOfList__OnDisable_60c7e0(undefined8 param_1)

{
  ulong uVar1;
  long lVar2;
  undefined8 uVar3;
  long lStack_38;
  
  if ((bRam000000000133ee2f & 1) == 0) {
    native_sub_43273c(&Method_BE2_Ins_ReplaceIndexOfList_PopulateDropdown___12e2220);
    native_sub_43273c(&UnityEngine_Events_UnityAction_TypeInfo_12d65d0);
    bRam000000000133ee2f = 1;
  }
  lVar2 = native_MG_BlocksEngine2_Core_BE2_MainEventsManager__get_Instance_6001fc();
  uVar3 = native_sub_432808(_UnityEngine_Events_UnityAction_TypeInfo_12d65d0);
  native_UnityEngine_Events_UnityAction___ctor_773130
            (uVar3,param_1,_Method_BE2_Ins_ReplaceIndexOfList_PopulateDropdown___12e2220,0);
  if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    native_sub_432810();
  }
  if ((bRam000000000133eaf6 & 1) == 0) {
    native_sub_43273c(&
                      Method_System_Collections_Generic_Dictionary_BE2EventTypes__UnityEvent__TryGetValue___12d8ea8
                      ,5,uVar3,0);
    bRam000000000133eaf6 = 1;
  }
  lStack_38 = 0;
  if (*(long *)(lVar2 + 0x10) != 0) {
    uVar1 = native_System_Collections_Generic_Dictionary_BE2EventTypes__UnityEvent___TryGetValue_c25318
                      (*(long *)(lVar2 + 0x10),5,&lStack_38,
                       _Method_System_Collections_Generic_Dictionary_BE2EventTypes__UnityEvent__TryGetValue___12d8ea8
                      );
    if ((uVar1 & 1) != 0) {
      if (lStack_38 == 0) goto LAB_0056349c;
      native_UnityEngine_Events_UnityEvent__RemoveListener_773574(lStack_38,uVar3,0);
    }
    return;
  }
LAB_0056349c:
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* BE2_Ins_ReplaceIndexOfList$$PopulateDropdown @ 0x60c660
 * void BE2_Ins_ReplaceIndexOfList__PopulateDropdown (BE2_Ins_ReplaceIndexOfList_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* BE2_Ins_ReplaceIndexOfList$$PopulateDropdown
   void BE2_Ins_ReplaceIndexOfList__PopulateDropdown (BE2_Ins_ReplaceIndexOfList_o* __this, const
   MethodInfo* method); */

void native_BE2_Ins_ReplaceIndexOfList__PopulateDropdown_60c660(long param_1)

{
  undefined4 uVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  if ((bRam000000000133ee30 & 1) == 0) {
    native_sub_43273c(&
                      Method_System_Collections_Generic_Dictionary_string__List_string___GetEnumerator___12d96f0
                     );
    native_sub_43273c(&
                      Method_System_Collections_Generic_Dictionary_Enumerator_string__List_string___Dispose___12dad60
                     );
    native_sub_43273c(&
                      Method_System_Collections_Generic_Dictionary_Enumerator_string__List_string___MoveNext___12dad68
                     );
    native_sub_43273c(&
                      Method_System_Collections_Generic_Dictionary_Enumerator_string__List_string___get_Current___12dad70
                     );
    native_sub_43273c(&
                      Method_System_Collections_Generic_KeyValuePair_string__List_string___get_Key___12dbf08
                     );
    bRam000000000133ee30 = 1;
  }
  uStack_28 = 0;
  uStack_30 = 0;
  uStack_38 = 0;
  uStack_40 = 0;
  uStack_48 = 0;
  if (*(long *)(param_1 + 0x80) != 0) {
    native_MG_BlocksEngine2_Utils_BE2_Dropdown__ClearOptions_580490(*(long *)(param_1 + 0x80),0);
    if ((*(long *)(param_1 + 0x88) != 0) &&
       (lVar2 = *(long *)(*(long *)(param_1 + 0x88) + 0x20), lVar2 != 0)) {
      native_System_Collections_Generic_Dictionary_object__object___GetEnumerator_cdabfc
                (&uStack_48,lVar2,
                 _Method_System_Collections_Generic_Dictionary_string__List_string___GetEnumerator___12d96f0
                );
      while (uVar3 = native_System_Collections_Generic_Dictionary_Enumerator_object__object___MoveNext_7f4bb4
                               (&uStack_48,
                                _Method_System_Collections_Generic_Dictionary_Enumerator_string__List_string___MoveNext___12dad68
                               ), (uVar3 & 1) != 0) {
        if (*(long *)(param_1 + 0x80) == 0) {
                    /* WARNING: Subroutine does not return */
          native_sub_432810();
        }
        native_MG_BlocksEngine2_Utils_BE2_Dropdown__AddOption_580570
                  (*(long *)(param_1 + 0x80),uStack_38,0);
      }
      native_System_Collections_Generic_Dictionary_Enumerator_object__object___Dispose_7f4d1c
                (&uStack_48,
                 _Method_System_Collections_Generic_Dictionary_Enumerator_string__List_string___Dispose___12dad60
                );
      if (*(long *)(param_1 + 0x80) != 0) {
        native_MG_BlocksEngine2_Utils_BE2_Dropdown__RefreshShownValue_580b34
                  (*(long *)(param_1 + 0x80),0);
        lVar2 = *(long *)(param_1 + 0x80);
        if (lVar2 != 0) {
          uVar1 = native_MG_BlocksEngine2_Utils_BE2_Dropdown__GetIndexOf_58082c
                            (lVar2,*(undefined8 *)(param_1 + 0x78),0);
          native_MG_BlocksEngine2_Utils_BE2_Dropdown__set_value_580a48(lVar2,uVar1,0);
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* BE2_Ins_ReplaceIndexOfList$$Function @ 0x60c880
 * void BE2_Ins_ReplaceIndexOfList__Function (BE2_Ins_ReplaceIndexOfList_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* BE2_Ins_ReplaceIndexOfList$$Function
   void BE2_Ins_ReplaceIndexOfList__Function (BE2_Ins_ReplaceIndexOfList_o* __this, const
   MethodInfo* method); */

void native_BE2_Ins_ReplaceIndexOfList__Function_60c880(long param_1)

{
  float fVar1;
  int iVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  code *UNRECOVERED_JUMPTABLE;
  ulong uVar7;
  int *piVar8;
  undefined4 uVar9;
  long *plVar10;
  long lVar11;
  long *plVar12;
  float fVar13;
  
  if ((bRam000000000133ee31 & 1) == 0) {
    native_sub_43273c(&MG_BlocksEngine2_Block_I_BE2_BlockSectionHeaderInput_TypeInfo_12d4e00);
    bRam000000000133ee31 = 1;
  }
  lVar3 = native_MG_BlocksEngine2_Block_Instruction_BE2_InstructionBase__get_Section0Inputs_603b78
                    (param_1);
  if (lVar3 == 0) goto LAB_0060cb2c;
  if (*(int *)(lVar3 + 0x18) == 0) goto LAB_0060cb30;
  plVar10 = *(long **)(lVar3 + 0x20);
  if (plVar10 == (long *)0x0) {
LAB_0060cb2c:
                    /* WARNING: Subroutine does not return */
    native_sub_432810();
  }
  lVar3 = *plVar10;
  if ((ulong)*(ushort *)(lVar3 + 0x12a) != 0) {
    uVar7 = 0;
    piVar8 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
    do {
      if (*(long *)(piVar8 + -2) ==
          _MG_BlocksEngine2_Block_I_BE2_BlockSectionHeaderInput_TypeInfo_12d4e00) {
        puVar4 = (undefined8 *)(lVar3 + (long)(*piVar8 + 4) * 0x10 + 0x138);
        goto LAB_0060c934;
      }
      uVar7 = uVar7 + 1;
      piVar8 = piVar8 + 4;
    } while (uVar7 < *(ushort *)(lVar3 + 0x12a));
  }
  puVar4 = (undefined8 *)
           native_sub_3c9b34(plVar10,
                             _MG_BlocksEngine2_Block_I_BE2_BlockSectionHeaderInput_TypeInfo_12d4e00,
                             4);
LAB_0060c934:
  lVar3 = (*(code *)*puVar4)(plVar10,puVar4[1]);
  if (lVar3 == 0) goto LAB_0060cb2c;
  if (*(char *)(lVar3 + 0x10) == '\0') {
    lVar11 = *(long *)(param_1 + 0x88);
    lVar3 = native_MG_BlocksEngine2_Block_Instruction_BE2_InstructionBase__get_Section0Inputs_603b78
                      (param_1);
    if (lVar3 == 0) goto LAB_0060cb2c;
    if (*(uint *)(lVar3 + 0x18) < 2) {
LAB_0060cb30:
      uVar5 = native_sub_43283c();
                    /* WARNING: Subroutine does not return */
      native_sub_4327dc(uVar5,0);
    }
    plVar10 = *(long **)(lVar3 + 0x28);
    if (plVar10 == (long *)0x0) goto LAB_0060cb2c;
    lVar3 = *plVar10;
    if ((ulong)*(ushort *)(lVar3 + 0x12a) != 0) {
      uVar7 = 0;
      piVar8 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) ==
            _MG_BlocksEngine2_Block_I_BE2_BlockSectionHeaderInput_TypeInfo_12d4e00) {
          puVar4 = (undefined8 *)(lVar3 + (long)(*piVar8 + 3) * 0x10 + 0x138);
          goto LAB_0060c9c8;
        }
        uVar7 = uVar7 + 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 < *(ushort *)(lVar3 + 0x12a));
    }
    puVar4 = (undefined8 *)
             native_sub_3c9b34(plVar10,
                               _MG_BlocksEngine2_Block_I_BE2_BlockSectionHeaderInput_TypeInfo_12d4e00
                               ,3);
LAB_0060c9c8:
    uVar5 = (*(code *)*puVar4)(plVar10,puVar4[1]);
    lVar3 = native_MG_BlocksEngine2_Block_Instruction_BE2_InstructionBase__get_Section0Inputs_603b78
                      (param_1);
    if (lVar3 == 0) goto LAB_0060cb2c;
    if (*(uint *)(lVar3 + 0x18) < 3) goto LAB_0060cb30;
    plVar10 = *(long **)(lVar3 + 0x30);
    if (plVar10 == (long *)0x0) goto LAB_0060cb2c;
    lVar3 = *plVar10;
    if ((ulong)*(ushort *)(lVar3 + 0x12a) != 0) {
      uVar7 = 0;
      piVar8 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) ==
            _MG_BlocksEngine2_Block_I_BE2_BlockSectionHeaderInput_TypeInfo_12d4e00) {
          puVar4 = (undefined8 *)(lVar3 + (long)(*piVar8 + 3) * 0x10 + 0x138);
          goto LAB_0060ca50;
        }
        uVar7 = uVar7 + 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 < *(ushort *)(lVar3 + 0x12a));
    }
    puVar4 = (undefined8 *)
             native_sub_3c9b34(plVar10,
                               _MG_BlocksEngine2_Block_I_BE2_BlockSectionHeaderInput_TypeInfo_12d4e00
                               ,3);
LAB_0060ca50:
    uVar6 = (*(code *)*puVar4)(plVar10,puVar4[1]);
    lVar3 = native_MG_BlocksEngine2_Block_Instruction_BE2_InstructionBase__get_Section0Inputs_603b78
                      (param_1);
    if (lVar3 == 0) goto LAB_0060cb2c;
    if (*(int *)(lVar3 + 0x18) == 0) goto LAB_0060cb30;
    plVar10 = *(long **)(lVar3 + 0x20);
    if (plVar10 == (long *)0x0) goto LAB_0060cb2c;
    lVar3 = *plVar10;
    if ((ulong)*(ushort *)(lVar3 + 0x12a) != 0) {
      uVar7 = 0;
      piVar8 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) ==
            _MG_BlocksEngine2_Block_I_BE2_BlockSectionHeaderInput_TypeInfo_12d4e00) {
          puVar4 = (undefined8 *)(lVar3 + (long)(*piVar8 + 2) * 0x10 + 0x138);
          goto LAB_0060cad4;
        }
        uVar7 = uVar7 + 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 < *(ushort *)(lVar3 + 0x12a));
    }
    puVar4 = (undefined8 *)
             native_sub_3c9b34(plVar10,
                               _MG_BlocksEngine2_Block_I_BE2_BlockSectionHeaderInput_TypeInfo_12d4e00
                               ,2);
LAB_0060cad4:
    fVar13 = (float)(*(code *)*puVar4)(plVar10,puVar4[1]);
    if (lVar11 == 0) goto LAB_0060cb2c;
    fVar1 = -fVar13;
    if (fVar13 != INFINITY) {
      fVar1 = fVar13;
    }
    native_MG_BlocksEngine2_Environment_BE2_VariablesListManager__ReplaceValueInList_dcdac4
              (lVar11,uVar5,uVar6,(int)fVar1,0);
  }
  if ((bRam000000000133ee62 & 1) == 0) {
    native_sub_43273c(&MG_BlocksEngine2_Block_I_BE2_Block_TypeInfo_12d4dd8);
    native_sub_43273c(&MG_BlocksEngine2_Core_I_BE2_BlocksStack_TypeInfo_12d4e10);
    native_sub_43273c(&MG_BlocksEngine2_Block_Instruction_I_BE2_InstructionBase_TypeInfo_12d4e30);
    native_sub_43273c(&MG_BlocksEngine2_Block_Instruction_I_BE2_Instruction_TypeInfo_12d4e28);
    bRam000000000133ee62 = 1;
  }
  plVar10 = *(long **)(param_1 + 0x48);
  if (plVar10 == (long *)0x0) goto LAB_006048fc;
  lVar3 = *plVar10;
  if ((ulong)*(ushort *)(lVar3 + 0x12a) != 0) {
    uVar7 = 0;
    piVar8 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
    do {
      if (*(long *)(piVar8 + -2) == _MG_BlocksEngine2_Core_I_BE2_BlocksStack_TypeInfo_12d4e10) {
        puVar4 = (undefined8 *)(lVar3 + (long)(*piVar8 + 9) * 0x10 + 0x138);
        goto LAB_00603cfc;
      }
      uVar7 = uVar7 + 1;
      piVar8 = piVar8 + 4;
    } while (uVar7 < *(ushort *)(lVar3 + 0x12a));
  }
  puVar4 = (undefined8 *)
           native_sub_3c9b34(plVar10,_MG_BlocksEngine2_Core_I_BE2_BlocksStack_TypeInfo_12d4e10,9);
LAB_00603cfc:
  lVar3 = (*(code *)*puVar4)(plVar10,puVar4[1]);
  if (lVar3 == 0) goto LAB_006048fc;
  iVar2 = *(int *)(param_1 + 0x30);
  plVar10 = *(long **)(param_1 + 0x48);
  if (*(int *)(lVar3 + 0x18) <= iVar2) {
    if (plVar10 == (long *)0x0) goto LAB_006048fc;
    lVar3 = *plVar10;
    if ((ulong)*(ushort *)(lVar3 + 0x12a) != 0) {
      uVar7 = 0;
      piVar8 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == _MG_BlocksEngine2_Core_I_BE2_BlocksStack_TypeInfo_12d4e10) {
          puVar4 = (undefined8 *)(lVar3 + (long)(*piVar8 + 7) * 0x10 + 0x138);
          goto LAB_00603e50;
        }
        uVar7 = uVar7 + 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 < *(ushort *)(lVar3 + 0x12a));
    }
    puVar4 = (undefined8 *)
             native_sub_3c9b34(plVar10,_MG_BlocksEngine2_Core_I_BE2_BlocksStack_TypeInfo_12d4e10,7);
LAB_00603e50:
    (*(code *)*puVar4)(plVar10,iVar2,puVar4[1]);
    plVar10 = *(long **)(param_1 + 0x48);
    if (plVar10 == (long *)0x0) goto LAB_006048fc;
    lVar3 = *plVar10;
    if ((ulong)*(ushort *)(lVar3 + 0x12a) != 0) {
      uVar7 = 0;
      piVar8 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == _MG_BlocksEngine2_Core_I_BE2_BlocksStack_TypeInfo_12d4e10) {
          puVar4 = (undefined8 *)(lVar3 + (long)(*piVar8 + 0xf) * 0x10 + 0x138);
          goto LAB_00603ec0;
        }
        uVar7 = uVar7 + 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 < *(ushort *)(lVar3 + 0x12a));
    }
    puVar4 = (undefined8 *)
             native_sub_3c9b34(plVar10,_MG_BlocksEngine2_Core_I_BE2_BlocksStack_TypeInfo_12d4e10,0xf
                              );
LAB_00603ec0:
    uVar7 = (*(code *)*puVar4)(plVar10,puVar4[1]);
    if ((uVar7 & 1) == 0) {
      return;
    }
    plVar10 = *(long **)(param_1 + 0x40);
    if (plVar10 == (long *)0x0) goto LAB_006048fc;
    lVar3 = *plVar10;
    if ((ulong)*(ushort *)(lVar3 + 0x12a) != 0) {
      uVar7 = 0;
      piVar8 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == _MG_BlocksEngine2_Block_I_BE2_Block_TypeInfo_12d4dd8) {
          puVar4 = (undefined8 *)(lVar3 + (long)(*piVar8 + 1) * 0x10 + 0x138);
          goto LAB_00604004;
        }
        uVar7 = uVar7 + 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 < *(ushort *)(lVar3 + 0x12a));
    }
    puVar4 = (undefined8 *)
             native_sub_3c9b34(plVar10,_MG_BlocksEngine2_Block_I_BE2_Block_TypeInfo_12d4dd8,1);
LAB_00604004:
    iVar2 = (*(code *)*puVar4)(plVar10,puVar4[1]);
    if (iVar2 != 1) {
      plVar10 = *(long **)(param_1 + 0x40);
      if (plVar10 == (long *)0x0) goto LAB_006048fc;
      lVar3 = *plVar10;
      if ((ulong)*(ushort *)(lVar3 + 0x12a) != 0) {
        uVar7 = 0;
        piVar8 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
        do {
          if (*(long *)(piVar8 + -2) == _MG_BlocksEngine2_Block_I_BE2_Block_TypeInfo_12d4dd8) {
            puVar4 = (undefined8 *)(lVar3 + (long)(*piVar8 + 1) * 0x10 + 0x138);
            goto LAB_00604244;
          }
          uVar7 = uVar7 + 1;
          piVar8 = piVar8 + 4;
        } while (uVar7 < *(ushort *)(lVar3 + 0x12a));
      }
      puVar4 = (undefined8 *)
               native_sub_3c9b34(plVar10,_MG_BlocksEngine2_Block_I_BE2_Block_TypeInfo_12d4dd8,1);
LAB_00604244:
      iVar2 = (*(code *)*puVar4)(plVar10,puVar4[1]);
      if (iVar2 != 2) {
        return;
      }
    }
    plVar10 = *(long **)(param_1 + 0x48);
    if (plVar10 == (long *)0x0) goto LAB_006048fc;
    lVar3 = *plVar10;
    if ((ulong)*(ushort *)(lVar3 + 0x12a) != 0) {
      uVar7 = 0;
      piVar8 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == _MG_BlocksEngine2_Core_I_BE2_BlocksStack_TypeInfo_12d4e10) {
          puVar4 = (undefined8 *)(lVar3 + (long)(*piVar8 + 9) * 0x10 + 0x138);
          goto LAB_006042d0;
        }
        uVar7 = uVar7 + 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 < *(ushort *)(lVar3 + 0x12a));
    }
    puVar4 = (undefined8 *)
             native_sub_3c9b34(plVar10,_MG_BlocksEngine2_Core_I_BE2_BlocksStack_TypeInfo_12d4e10,9);
LAB_006042d0:
    lVar3 = (*(code *)*puVar4)(plVar10,puVar4[1]);
    if (lVar3 == 0) goto LAB_006048fc;
    if (*(int *)(lVar3 + 0x18) == 0) goto LAB_00604900;
    plVar10 = *(long **)(lVar3 + 0x20);
    goto LAB_006048c4;
  }
  if (plVar10 == (long *)0x0) goto LAB_006048fc;
  lVar3 = *plVar10;
  if ((ulong)*(ushort *)(lVar3 + 0x12a) != 0) {
    uVar7 = 0;
    piVar8 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
    do {
      if (*(long *)(piVar8 + -2) == _MG_BlocksEngine2_Core_I_BE2_BlocksStack_TypeInfo_12d4e10) {
        puVar4 = (undefined8 *)(lVar3 + (long)(*piVar8 + 9) * 0x10 + 0x138);
        goto LAB_00603dc8;
      }
      uVar7 = uVar7 + 1;
      piVar8 = piVar8 + 4;
    } while (uVar7 < *(ushort *)(lVar3 + 0x12a));
  }
  puVar4 = (undefined8 *)
           native_sub_3c9b34(plVar10,_MG_BlocksEngine2_Core_I_BE2_BlocksStack_TypeInfo_12d4e10,9);
LAB_00603dc8:
  lVar3 = (*(code *)*puVar4)(plVar10,puVar4[1]);
  if (lVar3 == 0) goto LAB_006048fc;
  if (*(uint *)(lVar3 + 0x18) <= *(uint *)(param_1 + 0x30)) {
LAB_00604900:
    uVar5 = native_sub_43283c();
                    /* WARNING: Subroutine does not return */
    native_sub_4327dc(uVar5,0);
  }
  plVar12 = *(long **)(param_1 + 0x48);
  if (plVar12 == (long *)0x0) goto LAB_006048fc;
  lVar11 = *plVar12;
  plVar10 = *(long **)(lVar3 + (long)(int)*(uint *)(param_1 + 0x30) * 8 + 0x20);
  if ((ulong)*(ushort *)(lVar11 + 0x12a) != 0) {
    uVar7 = 0;
    piVar8 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
    do {
      if (*(long *)(piVar8 + -2) == _MG_BlocksEngine2_Core_I_BE2_BlocksStack_TypeInfo_12d4e10) {
        puVar4 = (undefined8 *)(lVar11 + (long)(*piVar8 + 0xf) * 0x10 + 0x138);
        goto LAB_00603f38;
      }
      uVar7 = uVar7 + 1;
      piVar8 = piVar8 + 4;
    } while (uVar7 < *(ushort *)(lVar11 + 0x12a));
  }
  puVar4 = (undefined8 *)
           native_sub_3c9b34(plVar12,_MG_BlocksEngine2_Core_I_BE2_BlocksStack_TypeInfo_12d4e10,0xf);
LAB_00603f38:
  uVar7 = (*(code *)*puVar4)(plVar12,puVar4[1]);
  if ((uVar7 & 1) == 0) {
    if (plVar10 == (long *)0x0) goto LAB_006048fc;
    lVar3 = *plVar10;
    if ((ulong)*(ushort *)(lVar3 + 0x12a) != 0) {
      uVar7 = 0;
      piVar8 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) ==
            _MG_BlocksEngine2_Block_Instruction_I_BE2_Instruction_TypeInfo_12d4e28) {
          puVar4 = (undefined8 *)(lVar3 + (long)*piVar8 * 0x10 + 0x138);
          goto LAB_006040e8;
        }
        uVar7 = uVar7 + 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 < *(ushort *)(lVar3 + 0x12a));
    }
    puVar4 = (undefined8 *)
             native_sub_3c9b34(plVar10,
                               _MG_BlocksEngine2_Block_Instruction_I_BE2_Instruction_TypeInfo_12d4e28
                               ,0);
LAB_006040e8:
    plVar12 = (long *)(*(code *)*puVar4)(plVar10,puVar4[1]);
    if (plVar12 == (long *)0x0) goto LAB_006048fc;
    lVar3 = *plVar12;
    if ((ulong)*(ushort *)(lVar3 + 0x12a) != 0) {
      uVar7 = 0;
      piVar8 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) ==
            _MG_BlocksEngine2_Block_Instruction_I_BE2_InstructionBase_TypeInfo_12d4e30) {
          puVar4 = (undefined8 *)(lVar3 + (long)(*piVar8 + 3) * 0x10 + 0x138);
          goto LAB_0060415c;
        }
        uVar7 = uVar7 + 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 < *(ushort *)(lVar3 + 0x12a));
    }
    puVar4 = (undefined8 *)
             native_sub_3c9b34(plVar12,
                               _MG_BlocksEngine2_Block_Instruction_I_BE2_InstructionBase_TypeInfo_12d4e30
                               ,3);
LAB_0060415c:
    plVar12 = (long *)(*(code *)*puVar4)(plVar12,puVar4[1]);
    if (plVar12 == (long *)0x0) goto LAB_006048fc;
    lVar3 = *plVar12;
    if ((ulong)*(ushort *)(lVar3 + 0x12a) != 0) {
      uVar7 = 0;
      piVar8 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == _MG_BlocksEngine2_Block_I_BE2_Block_TypeInfo_12d4dd8) {
          puVar4 = (undefined8 *)(lVar3 + (long)(*piVar8 + 1) * 0x10 + 0x138);
          goto LAB_006041d0;
        }
        uVar7 = uVar7 + 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 < *(ushort *)(lVar3 + 0x12a));
    }
    puVar4 = (undefined8 *)
             native_sub_3c9b34(plVar12,_MG_BlocksEngine2_Block_I_BE2_Block_TypeInfo_12d4dd8,1);
LAB_006041d0:
    iVar2 = (*(code *)*puVar4)(plVar12,puVar4[1]);
    if (iVar2 == 4) {
      plVar12 = *(long **)(param_1 + 0x48);
      if (plVar12 == (long *)0x0) goto LAB_006048fc;
      lVar3 = *plVar12;
      if ((ulong)*(ushort *)(lVar3 + 0x12a) != 0) {
        uVar7 = 0;
        piVar8 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
        do {
          if (*(long *)(piVar8 + -2) == _MG_BlocksEngine2_Core_I_BE2_BlocksStack_TypeInfo_12d4e10) {
            puVar4 = (undefined8 *)(lVar3 + (long)(*piVar8 + 0x14) * 0x10 + 0x138);
            goto LAB_006043f0;
          }
          uVar7 = uVar7 + 1;
          piVar8 = piVar8 + 4;
        } while (uVar7 < *(ushort *)(lVar3 + 0x12a));
      }
      puVar4 = (undefined8 *)
               native_sub_3c9b34(plVar12,_MG_BlocksEngine2_Core_I_BE2_BlocksStack_TypeInfo_12d4e10,
                                 0x14);
LAB_006043f0:
      lVar3 = (*(code *)*puVar4)(plVar12,puVar4[1]);
      if (lVar3 == 0) goto LAB_006048fc;
      native_UnityEngine_Events_UnityEvent__Invoke_773864(lVar3,0);
    }
    plVar12 = *(long **)(param_1 + 0x48);
    if (plVar12 == (long *)0x0) goto LAB_006048fc;
    lVar3 = *plVar12;
    if ((ulong)*(ushort *)(lVar3 + 0x12a) != 0) {
      uVar7 = 0;
      piVar8 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == _MG_BlocksEngine2_Core_I_BE2_BlocksStack_TypeInfo_12d4e10) {
          puVar4 = (undefined8 *)(lVar3 + (long)(*piVar8 + 2) * 0x10 + 0x138);
          goto LAB_00604468;
        }
        uVar7 = uVar7 + 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 < *(ushort *)(lVar3 + 0x12a));
    }
    puVar4 = (undefined8 *)
             native_sub_3c9b34(plVar12,_MG_BlocksEngine2_Core_I_BE2_BlocksStack_TypeInfo_12d4e10,2);
LAB_00604468:
    uVar7 = (*(code *)*puVar4)(plVar12,puVar4[1]);
    if ((uVar7 & 1) != 0) {
      lVar3 = *plVar10;
      if ((ulong)*(ushort *)(lVar3 + 0x12a) != 0) {
        uVar7 = 0;
        piVar8 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
        do {
          if (*(long *)(piVar8 + -2) ==
              _MG_BlocksEngine2_Block_Instruction_I_BE2_Instruction_TypeInfo_12d4e28) {
            puVar4 = (undefined8 *)(lVar3 + (long)(*piVar8 + 1) * 0x10 + 0x138);
            goto LAB_006044d0;
          }
          uVar7 = uVar7 + 1;
          piVar8 = piVar8 + 4;
        } while (uVar7 < *(ushort *)(lVar3 + 0x12a));
      }
      puVar4 = (undefined8 *)
               native_sub_3c9b34(plVar10,
                                 _MG_BlocksEngine2_Block_Instruction_I_BE2_Instruction_TypeInfo_12d4e28
                                 ,1);
LAB_006044d0:
      uVar7 = (*(code *)*puVar4)(plVar10,puVar4[1]);
      if ((uVar7 & 1) == 0) {
        plVar12 = *(long **)(param_1 + 0x48);
        if (plVar12 == (long *)0x0) goto LAB_006048fc;
        lVar3 = *plVar12;
        if ((ulong)*(ushort *)(lVar3 + 0x12a) != 0) {
          uVar7 = 0;
          piVar8 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
          do {
            if (*(long *)(piVar8 + -2) == _MG_BlocksEngine2_Core_I_BE2_BlocksStack_TypeInfo_12d4e10)
            {
              puVar4 = (undefined8 *)(lVar3 + (long)(*piVar8 + 4) * 0x10 + 0x138);
              goto LAB_00604594;
            }
            uVar7 = uVar7 + 1;
            piVar8 = piVar8 + 4;
          } while (uVar7 < *(ushort *)(lVar3 + 0x12a));
        }
        puVar4 = (undefined8 *)
                 native_sub_3c9b34(plVar12,_MG_BlocksEngine2_Core_I_BE2_BlocksStack_TypeInfo_12d4e10
                                   ,4);
LAB_00604594:
        iVar2 = (*(code *)*puVar4)(plVar12,puVar4[1]);
        if (iVar2 < *(int *)(param_1 + 0x60)) {
          plVar12 = *(long **)(param_1 + 0x48);
          if (plVar12 == (long *)0x0) goto LAB_006048fc;
          lVar3 = *plVar12;
          if ((ulong)*(ushort *)(lVar3 + 0x12a) != 0) {
            uVar7 = 0;
            piVar8 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
            do {
              if (*(long *)(piVar8 + -2) ==
                  _MG_BlocksEngine2_Core_I_BE2_BlocksStack_TypeInfo_12d4e10) {
                puVar4 = (undefined8 *)(lVar3 + (long)(*piVar8 + 4) * 0x10 + 0x138);
                goto LAB_00604850;
              }
              uVar7 = uVar7 + 1;
              piVar8 = piVar8 + 4;
            } while (uVar7 < *(ushort *)(lVar3 + 0x12a));
          }
          puVar4 = (undefined8 *)
                   native_sub_3c9b34(plVar12,
                                     _MG_BlocksEngine2_Core_I_BE2_BlocksStack_TypeInfo_12d4e10,4);
LAB_00604850:
          iVar2 = (*(code *)*puVar4)(plVar12,puVar4[1]);
          lVar3 = *plVar12;
          iVar2 = iVar2 + 1;
          if ((ulong)*(ushort *)(lVar3 + 0x12a) != 0) {
            uVar7 = 0;
            piVar8 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
            do {
              if (*(long *)(piVar8 + -2) ==
                  _MG_BlocksEngine2_Core_I_BE2_BlocksStack_TypeInfo_12d4e10) goto LAB_0060489c;
              uVar7 = uVar7 + 1;
              piVar8 = piVar8 + 4;
            } while (uVar7 < *(ushort *)(lVar3 + 0x12a));
          }
          goto LAB_006043d0;
        }
      }
    }
    lVar3 = *plVar10;
    plVar12 = *(long **)(param_1 + 0x48);
    if ((ulong)*(ushort *)(lVar3 + 0x12a) != 0) {
      uVar7 = 0;
      piVar8 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) ==
            _MG_BlocksEngine2_Block_Instruction_I_BE2_Instruction_TypeInfo_12d4e28) {
          puVar4 = (undefined8 *)(lVar3 + (long)*piVar8 * 0x10 + 0x138);
          goto LAB_00604654;
        }
        uVar7 = uVar7 + 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 < *(ushort *)(lVar3 + 0x12a));
    }
    puVar4 = (undefined8 *)
             native_sub_3c9b34(plVar10,
                               _MG_BlocksEngine2_Block_Instruction_I_BE2_Instruction_TypeInfo_12d4e28
                               ,0);
LAB_00604654:
    plVar10 = (long *)(*(code *)*puVar4)(plVar10,puVar4[1]);
    if (plVar10 != (long *)0x0) {
      lVar3 = *plVar10;
      if ((ulong)*(ushort *)(lVar3 + 0x12a) != 0) {
        uVar7 = 0;
        piVar8 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
        do {
          if (*(long *)(piVar8 + -2) ==
              _MG_BlocksEngine2_Block_Instruction_I_BE2_InstructionBase_TypeInfo_12d4e30) {
            puVar4 = (undefined8 *)(lVar3 + (long)(*piVar8 + 3) * 0x10 + 0x138);
            goto LAB_006046c0;
          }
          uVar7 = uVar7 + 1;
          piVar8 = piVar8 + 4;
        } while (uVar7 < *(ushort *)(lVar3 + 0x12a));
      }
      puVar4 = (undefined8 *)
               native_sub_3c9b34(plVar10,
                                 _MG_BlocksEngine2_Block_Instruction_I_BE2_InstructionBase_TypeInfo_12d4e30
                                 ,3);
LAB_006046c0:
      plVar10 = (long *)(*(code *)*puVar4)(plVar10,puVar4[1]);
      if (plVar10 != (long *)0x0) {
        lVar3 = *plVar10;
        if ((ulong)*(ushort *)(lVar3 + 0x12a) != 0) {
          uVar7 = 0;
          piVar8 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
          do {
            if (*(long *)(piVar8 + -2) == _MG_BlocksEngine2_Block_I_BE2_Block_TypeInfo_12d4dd8) {
              puVar4 = (undefined8 *)(lVar3 + (long)(*piVar8 + 1) * 0x10 + 0x138);
              goto LAB_0060472c;
            }
            uVar7 = uVar7 + 1;
            piVar8 = piVar8 + 4;
          } while (uVar7 < *(ushort *)(lVar3 + 0x12a));
        }
        puVar4 = (undefined8 *)
                 native_sub_3c9b34(plVar10,_MG_BlocksEngine2_Block_I_BE2_Block_TypeInfo_12d4dd8,1);
LAB_0060472c:
        iVar2 = (*(code *)*puVar4)(plVar10,puVar4[1]);
        if (iVar2 == 4) {
          uVar9 = 0;
        }
        else {
          uVar9 = *(undefined4 *)(param_1 + 0x30);
        }
        if (plVar12 != (long *)0x0) {
          lVar3 = *plVar12;
          if ((ulong)*(ushort *)(lVar3 + 0x12a) != 0) {
            uVar7 = 0;
            piVar8 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
            do {
              if (*(long *)(piVar8 + -2) ==
                  _MG_BlocksEngine2_Core_I_BE2_BlocksStack_TypeInfo_12d4e10) {
                puVar4 = (undefined8 *)(lVar3 + (long)(*piVar8 + 7) * 0x10 + 0x138);
                goto LAB_006047ac;
              }
              uVar7 = uVar7 + 1;
              piVar8 = piVar8 + 4;
            } while (uVar7 < *(ushort *)(lVar3 + 0x12a));
          }
          puVar4 = (undefined8 *)
                   native_sub_3c9b34(plVar12,
                                     _MG_BlocksEngine2_Core_I_BE2_BlocksStack_TypeInfo_12d4e10,7);
LAB_006047ac:
          UNRECOVERED_JUMPTABLE = (code *)*puVar4;
          uVar5 = puVar4[1];
LAB_006047b8:
                    /* WARNING: Could not recover jumptable at 0x006047cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*UNRECOVERED_JUMPTABLE)(plVar12,uVar9,uVar5);
          return;
        }
      }
    }
LAB_006048fc:
                    /* WARNING: Subroutine does not return */
    native_sub_432810();
  }
  plVar12 = *(long **)(param_1 + 0x40);
  if (plVar12 == (long *)0x0) goto LAB_006048fc;
  lVar3 = *plVar12;
  if ((ulong)*(ushort *)(lVar3 + 0x12a) != 0) {
    uVar7 = 0;
    piVar8 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
    do {
      if (*(long *)(piVar8 + -2) == _MG_BlocksEngine2_Block_I_BE2_Block_TypeInfo_12d4dd8) {
        puVar4 = (undefined8 *)(lVar3 + (long)(*piVar8 + 1) * 0x10 + 0x138);
        goto LAB_00604078;
      }
      uVar7 = uVar7 + 1;
      piVar8 = piVar8 + 4;
    } while (uVar7 < *(ushort *)(lVar3 + 0x12a));
  }
  puVar4 = (undefined8 *)
           native_sub_3c9b34(plVar12,_MG_BlocksEngine2_Block_I_BE2_Block_TypeInfo_12d4dd8,1);
LAB_00604078:
  iVar2 = (*(code *)*puVar4)(plVar12,puVar4[1]);
  if (iVar2 != 1) {
    plVar12 = *(long **)(param_1 + 0x40);
    if (plVar12 == (long *)0x0) goto LAB_006048fc;
    lVar3 = *plVar12;
    if ((ulong)*(ushort *)(lVar3 + 0x12a) != 0) {
      uVar7 = 0;
      piVar8 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == _MG_BlocksEngine2_Block_I_BE2_Block_TypeInfo_12d4dd8) {
          puVar4 = (undefined8 *)(lVar3 + (long)(*piVar8 + 1) * 0x10 + 0x138);
          goto LAB_00604304;
        }
        uVar7 = uVar7 + 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 < *(ushort *)(lVar3 + 0x12a));
    }
    puVar4 = (undefined8 *)
             native_sub_3c9b34(plVar12,_MG_BlocksEngine2_Block_I_BE2_Block_TypeInfo_12d4dd8,1);
LAB_00604304:
    iVar2 = (*(code *)*puVar4)(plVar12,puVar4[1]);
    if ((iVar2 != 2) &&
       (uVar7 = native_MG_BlocksEngine2_Utils_BE2_BlockUtils__BlockIsFunction_56f1f0
                          (*(undefined8 *)(param_1 + 0x40),0), (uVar7 & 1) == 0)) {
      plVar10 = *(long **)(param_1 + 0x48);
      if (plVar10 == (long *)0x0) goto LAB_006048fc;
      lVar3 = *plVar10;
      uVar9 = *(undefined4 *)(param_1 + 0x30);
      if ((ulong)*(ushort *)(lVar3 + 0x12a) != 0) {
        uVar7 = 0;
        piVar8 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
        do {
          if (*(long *)(piVar8 + -2) == _MG_BlocksEngine2_Core_I_BE2_BlocksStack_TypeInfo_12d4e10) {
            puVar4 = (undefined8 *)(lVar3 + (long)(*piVar8 + 7) * 0x10 + 0x138);
            goto LAB_006047e0;
          }
          uVar7 = uVar7 + 1;
          piVar8 = piVar8 + 4;
        } while (uVar7 < *(ushort *)(lVar3 + 0x12a));
      }
      puVar4 = (undefined8 *)
               native_sub_3c9b34(plVar10,_MG_BlocksEngine2_Core_I_BE2_BlocksStack_TypeInfo_12d4e10,7
                                );
LAB_006047e0:
      (*(code *)*puVar4)(plVar10,uVar9,puVar4[1]);
      plVar12 = *(long **)(param_1 + 0x48);
      if (plVar12 == (long *)0x0) goto LAB_006048fc;
      lVar3 = *plVar12;
      if ((ulong)*(ushort *)(lVar3 + 0x12a) != 0) {
        uVar7 = 0;
        piVar8 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
        do {
          if (*(long *)(piVar8 + -2) == _MG_BlocksEngine2_Core_I_BE2_BlocksStack_TypeInfo_12d4e10) {
            puVar4 = (undefined8 *)(lVar3 + (long)(*piVar8 + 3) * 0x10 + 0x138);
            goto LAB_006048ec;
          }
          uVar7 = uVar7 + 1;
          piVar8 = piVar8 + 4;
        } while (uVar7 < *(ushort *)(lVar3 + 0x12a));
      }
      puVar4 = (undefined8 *)
               native_sub_3c9b34(plVar12,_MG_BlocksEngine2_Core_I_BE2_BlocksStack_TypeInfo_12d4e10,3
                                );
LAB_006048ec:
      UNRECOVERED_JUMPTABLE = (code *)*puVar4;
      uVar5 = puVar4[1];
      uVar9 = 0;
      goto LAB_006047b8;
    }
  }
  plVar12 = *(long **)(param_1 + 0x48);
  if (plVar12 == (long *)0x0) goto LAB_006048fc;
  lVar3 = *plVar12;
  if ((ulong)*(ushort *)(lVar3 + 0x12a) != 0) {
    uVar7 = 0;
    piVar8 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
    do {
      if (*(long *)(piVar8 + -2) == _MG_BlocksEngine2_Core_I_BE2_BlocksStack_TypeInfo_12d4e10) {
        puVar4 = (undefined8 *)(lVar3 + (long)(*piVar8 + 4) * 0x10 + 0x138);
        goto LAB_00604388;
      }
      uVar7 = uVar7 + 1;
      piVar8 = piVar8 + 4;
    } while (uVar7 < *(ushort *)(lVar3 + 0x12a));
  }
  puVar4 = (undefined8 *)
           native_sub_3c9b34(plVar12,_MG_BlocksEngine2_Core_I_BE2_BlocksStack_TypeInfo_12d4e10,4);
LAB_00604388:
  iVar2 = (*(code *)*puVar4)(plVar12,puVar4[1]);
  lVar3 = *plVar12;
  iVar2 = iVar2 + 1;
  if ((ulong)*(ushort *)(lVar3 + 0x12a) != 0) {
    uVar7 = 0;
    piVar8 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
    do {
      if (*(long *)(piVar8 + -2) == _MG_BlocksEngine2_Core_I_BE2_BlocksStack_TypeInfo_12d4e10)
      goto LAB_0060489c;
      uVar7 = uVar7 + 1;
      piVar8 = piVar8 + 4;
    } while (uVar7 < *(ushort *)(lVar3 + 0x12a));
  }
LAB_006043d0:
  puVar4 = (undefined8 *)
           native_sub_3c9b34(plVar12,_MG_BlocksEngine2_Core_I_BE2_BlocksStack_TypeInfo_12d4e10,5);
LAB_006048ac:
  (*(code *)*puVar4)(plVar12,iVar2,puVar4[1]);
LAB_006048c4:
  if ((bRam000000000133ee63 & 1) == 0) {
    native_sub_43273c(&MG_BlocksEngine2_Core_I_BE2_BlocksStack_TypeInfo_12d4e10);
    native_sub_43273c(&MG_BlocksEngine2_Block_Instruction_I_BE2_Instruction_TypeInfo_12d4e28);
    native_sub_43273c(&Method_UnityEngine_Events_UnityEvent_I_BE2_Instruction__Invoke___12de478);
    bRam000000000133ee63 = 1;
  }
  plVar12 = *(long **)(param_1 + 0x48);
  if (plVar12 != (long *)0x0) {
    lVar3 = *plVar12;
    if ((ulong)*(ushort *)(lVar3 + 0x12a) != 0) {
      uVar7 = 0;
      piVar8 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == _MG_BlocksEngine2_Core_I_BE2_BlocksStack_TypeInfo_12d4e10) {
          puVar4 = (undefined8 *)(lVar3 + (long)(*piVar8 + 0xb) * 0x10 + 0x138);
          goto LAB_00611f54;
        }
        uVar7 = uVar7 + 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 < *(ushort *)(lVar3 + 0x12a));
    }
    puVar4 = (undefined8 *)
             native_sub_3c9b34(plVar12,_MG_BlocksEngine2_Core_I_BE2_BlocksStack_TypeInfo_12d4e10,0xb
                              );
LAB_00611f54:
    lVar3 = (*(code *)*puVar4)(plVar12,puVar4[1]);
    if ((lVar3 != 0) &&
       (native_UnityEngine_Events_UnityEvent_BaseEventData___Invoke_8a0108
                  (lVar3,plVar10,
                   _Method_UnityEngine_Events_UnityEvent_I_BE2_Instruction__Invoke___12de478),
       plVar10 != (long *)0x0)) {
      lVar3 = *plVar10;
      if ((ulong)*(ushort *)(lVar3 + 0x12a) != 0) {
        uVar7 = 0;
        piVar8 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
        do {
          if (*(long *)(piVar8 + -2) ==
              _MG_BlocksEngine2_Block_Instruction_I_BE2_Instruction_TypeInfo_12d4e28) {
            puVar4 = (undefined8 *)(lVar3 + (long)(*piVar8 + 3) * 0x10 + 0x138);
            goto LAB_00611fdc;
          }
          uVar7 = uVar7 + 1;
          piVar8 = piVar8 + 4;
        } while (uVar7 < *(ushort *)(lVar3 + 0x12a));
      }
      puVar4 = (undefined8 *)
               native_sub_3c9b34(plVar10,
                                 _MG_BlocksEngine2_Block_Instruction_I_BE2_Instruction_TypeInfo_12d4e28
                                 ,3);
LAB_00611fdc:
                    /* WARNING: Could not recover jumptable at 0x00611ff0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)*puVar4)(plVar10,puVar4[1]);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
LAB_0060489c:
  puVar4 = (undefined8 *)(lVar3 + (long)(*piVar8 + 5) * 0x10 + 0x138);
  goto LAB_006048ac;
}



/* BE2_Ins_ReplaceIndexOfList$$.ctor @ 0x60cb3c
 * void BE2_Ins_ReplaceIndexOfList___ctor (BE2_Ins_ReplaceIndexOfList_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* BE2_Ins_ReplaceIndexOfList$$.ctor
   void BE2_Ins_ReplaceIndexOfList___ctor (BE2_Ins_ReplaceIndexOfList_o* __this, const MethodInfo*
   method); */

undefined1  [16] native_BE2_Ins_ReplaceIndexOfList___ctor_60cb3c(ulong param_1)

{
  undefined1 auVar1 [16];
  
  *(undefined4 *)(param_1 + 0x60) = 100;
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



/* BE2_Ins_ReplaceIndexOfList$$<OnStart>b__0_0 @ 0x60cb4c
 * void BE2_Ins_ReplaceIndexOfList___OnStart_b__0_0 (BE2_Ins_ReplaceIndexOfList_o* __this, int32_t _p0_, const MethodInfo* method); */

/* BE2_Ins_ReplaceIndexOfList$$<OnStart>b__0_0
   void BE2_Ins_ReplaceIndexOfList___OnStart_b__0_0 (BE2_Ins_ReplaceIndexOfList_o* __this, int32_t
   _p0_, const MethodInfo* method); */

void native_BE2_Ins_ReplaceIndexOfList___OnStart_b__0_0_60cb4c(long param_1)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  
  if (*(long *)(param_1 + 0x80) != 0) {
    uVar4 = native_MG_BlocksEngine2_Utils_BE2_Dropdown__GetSelectedOptionText_567528
                      (*(long *)(param_1 + 0x80),0);
    puVar5 = (undefined8 *)(param_1 + 0x78);
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


