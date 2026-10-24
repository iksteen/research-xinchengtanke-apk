/* ARM64 IL2CPP native pseudocode from Ghidra.
 * Recovered implementation, not original C# source.
 * Function boundaries follow the IL2CPP method address table. */


/* BE2_Op_ValueAtIndexAtList$$OnStart @ 0x616388
 * void BE2_Op_ValueAtIndexAtList__OnStart (BE2_Op_ValueAtIndexAtList_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* BE2_Op_ValueAtIndexAtList$$OnStart
   void BE2_Op_ValueAtIndexAtList__OnStart (BE2_Op_ValueAtIndexAtList_o* __this, const MethodInfo*
   method); */

void native_BE2_Op_ValueAtIndexAtList__OnStart_616388(long param_1)

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
  
  if ((bRam000000000133ee8e & 1) == 0) {
    native_sub_43273c(&Method_BE2_Op_ValueAtIndexAtList_PopulateDropdown___12e22a8);
    native_sub_43273c(&Method_BE2_Op_ValueAtIndexAtList__OnStart_b__2_0___12e22a0);
    native_sub_43273c(&MG_BlocksEngine2_Environment_BE2_VariablesListManager_TypeInfo_12d3a88);
    native_sub_43273c(&MG_BlocksEngine2_Block_I_BE2_BlockSectionHeaderInput_TypeInfo_12d4e00);
    native_sub_43273c(&Method_UnityEngine_Events_UnityAction_int___ctor___12de3b0);
    native_sub_43273c(&UnityEngine_Events_UnityAction_int__TypeInfo_12d2f48);
    native_sub_43273c(&UnityEngine_Events_UnityAction_TypeInfo_12d65d0);
    native_sub_43273c(&Method_UnityEngine_Events_UnityEvent_int__AddListener___12de488);
    bRam000000000133ee8e = 1;
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
            goto LAB_006164b0;
          }
          uVar5 = uVar5 + 1;
          piVar6 = piVar6 + 4;
        } while (uVar5 < *(ushort *)(lVar2 + 0x12a));
      }
      puVar3 = (undefined8 *)
               native_sub_3c9b34(plVar7,
                                 _MG_BlocksEngine2_Block_I_BE2_BlockSectionHeaderInput_TypeInfo_12d4e00
                                 ,0);
LAB_006164b0:
      uVar4 = (*(code *)*puVar3)(plVar7,puVar3[1]);
      lVar2 = native_MG_BlocksEngine2_Utils_BE2_Dropdown__GetBE2Component_566f34(uVar4,0);
      plVar7 = (long *)(param_1 + 0x78);
      *plVar7 = lVar2;
      native_sub_4326e0(plVar7,lVar2);
      if (*plVar7 == 0) {
        return;
      }
      lVar2 = native_MG_BlocksEngine2_Utils_BE2_Dropdown__get_onValueChanged_567184(*plVar7,0);
      uVar4 = native_sub_432808(_UnityEngine_Events_UnityAction_int__TypeInfo_12d2f48);
      native_UnityEngine_Events_UnityAction_int____ctor_89b2bc
                (uVar4,param_1,_Method_BE2_Op_ValueAtIndexAtList__OnStart_b__2_0___12e22a0,
                 _Method_UnityEngine_Events_UnityAction_int___ctor___12de3b0);
      if (lVar2 != 0) {
        native_UnityEngine_Events_UnityEvent_int___AddListener_89f390
                  (lVar2,uVar4,_Method_UnityEngine_Events_UnityEvent_int__AddListener___12de488);
        lVar2 = native_MG_BlocksEngine2_Core_BE2_MainEventsManager__get_Instance_6001fc();
        uVar4 = native_sub_432808(_UnityEngine_Events_UnityAction_TypeInfo_12d65d0);
        native_UnityEngine_Events_UnityAction___ctor_773130
                  (uVar4,param_1,_Method_BE2_Op_ValueAtIndexAtList_PopulateDropdown___12e22a8,0);
        if (lVar2 != 0) {
          native_MG_BlocksEngine2_Core_BE2_EventsManager__StartListening_563268(lVar2,5,uVar4,0);
          if ((bRam000000000133ee8f & 1) == 0) {
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
            bRam000000000133ee8f = 1;
          }
          uStack_38 = 0;
          uStack_40 = 0;
          uStack_48 = 0;
          if (*(long *)(param_1 + 0x78) != 0) {
            native_MG_BlocksEngine2_Utils_BE2_Dropdown__ClearOptions_580490
                      (*(long *)(param_1 + 0x78),0);
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
                if (*(long *)(param_1 + 0x78) == 0) {
                    /* WARNING: Subroutine does not return */
                  native_sub_432810();
                }
                native_MG_BlocksEngine2_Utils_BE2_Dropdown__AddOption_580570
                          (*(long *)(param_1 + 0x78),uStack_38,0);
              }
              native_System_Collections_Generic_Dictionary_Enumerator_object__object___Dispose_7f4d1c
                        (&uStack_48,
                         _Method_System_Collections_Generic_Dictionary_Enumerator_string__List_string___Dispose___12dad60
                        );
              if (*(long *)(param_1 + 0x78) != 0) {
                native_MG_BlocksEngine2_Utils_BE2_Dropdown__RefreshShownValue_580b34
                          (*(long *)(param_1 + 0x78),0);
                lVar2 = *(long *)(param_1 + 0x78);
                if (lVar2 != 0) {
                  uVar1 = native_MG_BlocksEngine2_Utils_BE2_Dropdown__GetIndexOf_58082c
                                    (lVar2,*(undefined8 *)(param_1 + 0x80),0);
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



/* BE2_Op_ValueAtIndexAtList$$PopulateDropdown @ 0x6165c4
 * void BE2_Op_ValueAtIndexAtList__PopulateDropdown (BE2_Op_ValueAtIndexAtList_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* BE2_Op_ValueAtIndexAtList$$PopulateDropdown
   void BE2_Op_ValueAtIndexAtList__PopulateDropdown (BE2_Op_ValueAtIndexAtList_o* __this, const
   MethodInfo* method); */

void native_BE2_Op_ValueAtIndexAtList__PopulateDropdown_6165c4(long param_1)

{
  undefined4 uVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  if ((bRam000000000133ee8f & 1) == 0) {
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
    bRam000000000133ee8f = 1;
  }
  uStack_28 = 0;
  uStack_30 = 0;
  uStack_38 = 0;
  uStack_40 = 0;
  uStack_48 = 0;
  if (*(long *)(param_1 + 0x78) != 0) {
    native_MG_BlocksEngine2_Utils_BE2_Dropdown__ClearOptions_580490(*(long *)(param_1 + 0x78),0);
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
        if (*(long *)(param_1 + 0x78) == 0) {
                    /* WARNING: Subroutine does not return */
          native_sub_432810();
        }
        native_MG_BlocksEngine2_Utils_BE2_Dropdown__AddOption_580570
                  (*(long *)(param_1 + 0x78),uStack_38,0);
      }
      native_System_Collections_Generic_Dictionary_Enumerator_object__object___Dispose_7f4d1c
                (&uStack_48,
                 _Method_System_Collections_Generic_Dictionary_Enumerator_string__List_string___Dispose___12dad60
                );
      if (*(long *)(param_1 + 0x78) != 0) {
        native_MG_BlocksEngine2_Utils_BE2_Dropdown__RefreshShownValue_580b34
                  (*(long *)(param_1 + 0x78),0);
        lVar2 = *(long *)(param_1 + 0x78);
        if (lVar2 != 0) {
          uVar1 = native_MG_BlocksEngine2_Utils_BE2_Dropdown__GetIndexOf_58082c
                            (lVar2,*(undefined8 *)(param_1 + 0x80),0);
          native_MG_BlocksEngine2_Utils_BE2_Dropdown__set_value_580a48(lVar2,uVar1,0);
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* BE2_Op_ValueAtIndexAtList$$Operation @ 0x616744
 * System_String_o* BE2_Op_ValueAtIndexAtList__Operation (BE2_Op_ValueAtIndexAtList_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* BE2_Op_ValueAtIndexAtList$$Operation
   System_String_o* BE2_Op_ValueAtIndexAtList__Operation (BE2_Op_ValueAtIndexAtList_o* __this, const
   MethodInfo* method); */

undefined8 native_BE2_Op_ValueAtIndexAtList__Operation_616744(long param_1)

{
  float fVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  uint uVar5;
  ulong uVar6;
  int *piVar7;
  long *plVar8;
  long lVar9;
  float fVar10;
  
  if ((bRam000000000133ee90 & 1) == 0) {
    native_sub_43273c(&MG_BlocksEngine2_Block_I_BE2_BlockSectionHeaderInput_TypeInfo_12d4e00);
    native_sub_43273c(&StringLiteral__12eaac0);
    bRam000000000133ee90 = 1;
  }
  lVar2 = native_MG_BlocksEngine2_Block_Instruction_BE2_InstructionBase__get_Section0Inputs_603b78
                    (param_1);
  if (lVar2 != 0) {
    if (*(int *)(lVar2 + 0x18) == 0) goto LAB_00616980;
    plVar8 = *(long **)(lVar2 + 0x20);
    if (plVar8 != (long *)0x0) {
      lVar2 = *plVar8;
      if ((ulong)*(ushort *)(lVar2 + 0x12a) != 0) {
        uVar6 = 0;
        piVar7 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
        do {
          if (*(long *)(piVar7 + -2) ==
              _MG_BlocksEngine2_Block_I_BE2_BlockSectionHeaderInput_TypeInfo_12d4e00) {
            puVar3 = (undefined8 *)(lVar2 + (long)(*piVar7 + 4) * 0x10 + 0x138);
            goto LAB_00616800;
          }
          uVar6 = uVar6 + 1;
          piVar7 = piVar7 + 4;
        } while (uVar6 < *(ushort *)(lVar2 + 0x12a));
      }
      puVar3 = (undefined8 *)
               native_sub_3c9b34(plVar8,
                                 _MG_BlocksEngine2_Block_I_BE2_BlockSectionHeaderInput_TypeInfo_12d4e00
                                 ,4);
LAB_00616800:
      lVar2 = (*(code *)*puVar3)(plVar8,puVar3[1]);
      if (lVar2 != 0) {
        if (*(char *)(lVar2 + 0x10) != '\0') {
          return _StringLiteral__12eaac0;
        }
        lVar9 = *(long *)(param_1 + 0x88);
        lVar2 = native_MG_BlocksEngine2_Block_Instruction_BE2_InstructionBase__get_Section0Inputs_603b78
                          (param_1);
        if (lVar2 != 0) {
          if (*(uint *)(lVar2 + 0x18) < 2) {
LAB_00616980:
            uVar4 = native_sub_43283c();
                    /* WARNING: Subroutine does not return */
            native_sub_4327dc(uVar4,0);
          }
          plVar8 = *(long **)(lVar2 + 0x28);
          if (plVar8 != (long *)0x0) {
            lVar2 = *plVar8;
            if ((ulong)*(ushort *)(lVar2 + 0x12a) != 0) {
              uVar6 = 0;
              piVar7 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
              do {
                if (*(long *)(piVar7 + -2) ==
                    _MG_BlocksEngine2_Block_I_BE2_BlockSectionHeaderInput_TypeInfo_12d4e00) {
                  puVar3 = (undefined8 *)(lVar2 + (long)(*piVar7 + 3) * 0x10 + 0x138);
                  goto LAB_006168b0;
                }
                uVar6 = uVar6 + 1;
                piVar7 = piVar7 + 4;
              } while (uVar6 < *(ushort *)(lVar2 + 0x12a));
            }
            puVar3 = (undefined8 *)
                     native_sub_3c9b34(plVar8,
                                       _MG_BlocksEngine2_Block_I_BE2_BlockSectionHeaderInput_TypeInfo_12d4e00
                                       ,3);
LAB_006168b0:
            uVar4 = (*(code *)*puVar3)(plVar8,puVar3[1]);
            lVar2 = native_MG_BlocksEngine2_Block_Instruction_BE2_InstructionBase__get_Section0Inputs_603b78
                              (param_1);
            if (lVar2 != 0) {
              if (*(int *)(lVar2 + 0x18) == 0) goto LAB_00616980;
              plVar8 = *(long **)(lVar2 + 0x20);
              if (plVar8 != (long *)0x0) {
                lVar2 = *plVar8;
                if ((ulong)*(ushort *)(lVar2 + 0x12a) != 0) {
                  uVar6 = 0;
                  piVar7 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar7 + -2) ==
                        _MG_BlocksEngine2_Block_I_BE2_BlockSectionHeaderInput_TypeInfo_12d4e00) {
                      puVar3 = (undefined8 *)(lVar2 + (long)(*piVar7 + 2) * 0x10 + 0x138);
                      goto LAB_00616934;
                    }
                    uVar6 = uVar6 + 1;
                    piVar7 = piVar7 + 4;
                  } while (uVar6 < *(ushort *)(lVar2 + 0x12a));
                }
                puVar3 = (undefined8 *)
                         native_sub_3c9b34(plVar8,
                                           _MG_BlocksEngine2_Block_I_BE2_BlockSectionHeaderInput_TypeInfo_12d4e00
                                           ,2);
LAB_00616934:
                fVar10 = (float)(*(code *)*puVar3)(plVar8,puVar3[1]);
                if (lVar9 != 0) {
                  fVar1 = -fVar10;
                  if (fVar10 != INFINITY) {
                    fVar1 = fVar10;
                  }
                  uVar5 = (uint)fVar1;
                  if ((bRam0000000001346e13 & 1) == 0) {
                    native_sub_43273c(&
                                      Method_System_Collections_Generic_List_string__get_Count___12dcef8
                                      ,uVar4,uVar5,0);
                    native_sub_43273c(&
                                      Method_System_Collections_Generic_List_string__get_Item___12dcf00
                                     );
                    native_sub_43273c(&StringLiteral__12eaac0);
                    bRam0000000001346e13 = 1;
                  }
                  lVar2 = native_MG_BlocksEngine2_Environment_BE2_VariablesListManager__GetListStringValues_dcdf18
                                    (lVar9,uVar4);
                  if (lVar2 != 0) {
                    puVar3 = (undefined8 *)&StringLiteral__12eaac0;
                    if ((-1 < (int)uVar5) && ((int)uVar5 < (int)*(uint *)(lVar2 + 0x18))) {
                      if (*(uint *)(lVar2 + 0x18) <= uVar5) {
                        native_System_ThrowHelper__ThrowArgumentOutOfRangeException_9fe0f4(0);
                      }
                      puVar3 = (undefined8 *)(*(long *)(lVar2 + 0x10) + (long)(int)uVar5 * 8 + 0x20)
                      ;
                    }
                    return *puVar3;
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



/* BE2_Op_ValueAtIndexAtList$$.ctor @ 0x61698c
 * void BE2_Op_ValueAtIndexAtList___ctor (BE2_Op_ValueAtIndexAtList_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* BE2_Op_ValueAtIndexAtList$$.ctor
   void BE2_Op_ValueAtIndexAtList___ctor (BE2_Op_ValueAtIndexAtList_o* __this, const MethodInfo*
   method); */

undefined1  [16] native_BE2_Op_ValueAtIndexAtList___ctor_61698c(ulong param_1)

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



/* BE2_Op_ValueAtIndexAtList$$<OnStart>b__2_0 @ 0x61699c
 * void BE2_Op_ValueAtIndexAtList___OnStart_b__2_0 (BE2_Op_ValueAtIndexAtList_o* __this, int32_t _p0_, const MethodInfo* method); */

/* BE2_Op_ValueAtIndexAtList$$<OnStart>b__2_0
   void BE2_Op_ValueAtIndexAtList___OnStart_b__2_0 (BE2_Op_ValueAtIndexAtList_o* __this, int32_t
   _p0_, const MethodInfo* method); */

void native_BE2_Op_ValueAtIndexAtList___OnStart_b__2_0_61699c(long param_1)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  
  if (*(long *)(param_1 + 0x78) != 0) {
    uVar4 = native_MG_BlocksEngine2_Utils_BE2_Dropdown__GetSelectedOptionText_567528
                      (*(long *)(param_1 + 0x78),0);
    puVar5 = (undefined8 *)(param_1 + 0x80);
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


