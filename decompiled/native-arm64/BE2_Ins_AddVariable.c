/* ARM64 IL2CPP native pseudocode from Ghidra.
 * Recovered implementation, not original C# source.
 * Function boundaries follow the IL2CPP method address table. */


/* BE2_Ins_AddVariable$$OnStart @ 0x604968
 * void BE2_Ins_AddVariable__OnStart (BE2_Ins_AddVariable_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* BE2_Ins_AddVariable$$OnStart
   void BE2_Ins_AddVariable__OnStart (BE2_Ins_AddVariable_o* __this, const MethodInfo* method); */

void native_BE2_Ins_AddVariable__OnStart_604968(long param_1)

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
  
  if ((bRam000000000133edfa & 1) == 0) {
    native_sub_43273c(&Method_BE2_Ins_AddVariable_PopulateDropdown___12e21b8);
    native_sub_43273c(&Method_BE2_Ins_AddVariable__OnStart_b__0_0___12e21b0);
    native_sub_43273c(&MG_BlocksEngine2_Environment_BE2_VariablesManager_TypeInfo_12d3a90);
    native_sub_43273c(&MG_BlocksEngine2_Block_I_BE2_BlockSectionHeaderInput_TypeInfo_12d4e00);
    native_sub_43273c(&Method_UnityEngine_Events_UnityAction_int___ctor___12de3b0);
    native_sub_43273c(&UnityEngine_Events_UnityAction_int__TypeInfo_12d2f48);
    native_sub_43273c(&UnityEngine_Events_UnityAction_TypeInfo_12d65d0);
    native_sub_43273c(&Method_UnityEngine_Events_UnityEvent_int__AddListener___12de488);
    bRam000000000133edfa = 1;
  }
  *(undefined8 *)(param_1 + 0xa0) =
       **(undefined8 **)(_MG_BlocksEngine2_Environment_BE2_VariablesManager_TypeInfo_12d3a90 + 0xb8)
  ;
  native_sub_4326e0();
  lVar2 = native_MG_BlocksEngine2_Block_Instruction_BE2_InstructionBase__GetSectionInputs_60366c
                    (param_1,0);
  if (lVar2 != 0) {
    if (*(int *)(lVar2 + 0x18) == 0) {
      uVar4 = native_sub_43283c();
                    /* WARNING: Subroutine does not return */
      native_sub_4327dc(uVar4,0);
    }
    plVar7 = *(long **)(lVar2 + 0x20);
    if (plVar7 != (long *)0x0) {
      lVar2 = *plVar7;
      if ((ulong)*(ushort *)(lVar2 + 0x12a) != 0) {
        uVar5 = 0;
        piVar6 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
        do {
          if (*(long *)(piVar6 + -2) ==
              _MG_BlocksEngine2_Block_I_BE2_BlockSectionHeaderInput_TypeInfo_12d4e00) {
            puVar3 = (undefined8 *)(lVar2 + (long)*piVar6 * 0x10 + 0x138);
            goto LAB_00604a8c;
          }
          uVar5 = uVar5 + 1;
          piVar6 = piVar6 + 4;
        } while (uVar5 < *(ushort *)(lVar2 + 0x12a));
      }
      puVar3 = (undefined8 *)
               native_sub_3c9b34(plVar7,
                                 _MG_BlocksEngine2_Block_I_BE2_BlockSectionHeaderInput_TypeInfo_12d4e00
                                 ,0);
LAB_00604a8c:
      uVar4 = (*(code *)*puVar3)(plVar7,puVar3[1]);
      lVar2 = native_MG_BlocksEngine2_Utils_BE2_Dropdown__GetBE2Component_566f34(uVar4,0);
      plVar7 = (long *)(param_1 + 0x98);
      *plVar7 = lVar2;
      native_sub_4326e0(plVar7,lVar2);
      if (*plVar7 == 0) {
        return;
      }
      lVar2 = native_MG_BlocksEngine2_Utils_BE2_Dropdown__get_onValueChanged_567184(*plVar7,0);
      uVar4 = native_sub_432808(_UnityEngine_Events_UnityAction_int__TypeInfo_12d2f48);
      native_UnityEngine_Events_UnityAction_int____ctor_89b2bc
                (uVar4,param_1,_Method_BE2_Ins_AddVariable__OnStart_b__0_0___12e21b0,
                 _Method_UnityEngine_Events_UnityAction_int___ctor___12de3b0);
      if (lVar2 != 0) {
        native_UnityEngine_Events_UnityEvent_int___AddListener_89f390
                  (lVar2,uVar4,_Method_UnityEngine_Events_UnityEvent_int__AddListener___12de488);
        lVar2 = native_MG_BlocksEngine2_Core_BE2_MainEventsManager__get_Instance_6001fc();
        uVar4 = native_sub_432808(_UnityEngine_Events_UnityAction_TypeInfo_12d65d0);
        native_UnityEngine_Events_UnityAction___ctor_773130
                  (uVar4,param_1,_Method_BE2_Ins_AddVariable_PopulateDropdown___12e21b8,0);
        if (lVar2 != 0) {
          native_MG_BlocksEngine2_Core_BE2_EventsManager__StartListening_563268(lVar2,5,uVar4,0);
          if ((bRam000000000133edfc & 1) == 0) {
            native_sub_43273c(&
                              Method_System_Collections_Generic_Dictionary_string__string__GetEnumerator___12d9900
                             );
            native_sub_43273c(&
                              Method_System_Collections_Generic_Dictionary_Enumerator_string__string__Dispose___12dadc0
                             );
            native_sub_43273c(&
                              Method_System_Collections_Generic_Dictionary_Enumerator_string__string__MoveNext___12dadc8
                             );
            native_sub_43273c(&
                              Method_System_Collections_Generic_Dictionary_Enumerator_string__string__get_Current___12dadd0
                             );
            native_sub_43273c(&
                              Method_System_Collections_Generic_KeyValuePair_string__string__get_Key___12dbf20
                             );
            bRam000000000133edfc = 1;
          }
          uStack_38 = 0;
          uStack_40 = 0;
          uStack_48 = 0;
          if (*(long *)(param_1 + 0x98) != 0) {
            native_MG_BlocksEngine2_Utils_BE2_Dropdown__ClearOptions_580490
                      (*(long *)(param_1 + 0x98),0);
            if ((*(long *)(param_1 + 0xa0) != 0) &&
               (lVar2 = *(long *)(*(long *)(param_1 + 0xa0) + 0x20), lVar2 != 0)) {
              native_System_Collections_Generic_Dictionary_object__object___GetEnumerator_cdabfc
                        (&uStack_48,lVar2,
                         _Method_System_Collections_Generic_Dictionary_string__string__GetEnumerator___12d9900
                        );
              while (uVar5 = native_System_Collections_Generic_Dictionary_Enumerator_object__object___MoveNext_7f4bb4
                                       (&uStack_48,
                                        _Method_System_Collections_Generic_Dictionary_Enumerator_string__string__MoveNext___12dadc8
                                       ), (uVar5 & 1) != 0) {
                if (*(long *)(param_1 + 0x98) == 0) {
                    /* WARNING: Subroutine does not return */
                  native_sub_432810();
                }
                native_MG_BlocksEngine2_Utils_BE2_Dropdown__AddOption_580570
                          (*(long *)(param_1 + 0x98),uStack_38,0);
              }
              native_System_Collections_Generic_Dictionary_Enumerator_object__object___Dispose_7f4d1c
                        (&uStack_48,
                         _Method_System_Collections_Generic_Dictionary_Enumerator_string__string__Dispose___12dadc0
                        );
              if (*(long *)(param_1 + 0x98) != 0) {
                native_MG_BlocksEngine2_Utils_BE2_Dropdown__RefreshShownValue_580b34
                          (*(long *)(param_1 + 0x98),0);
                lVar2 = *(long *)(param_1 + 0x98);
                if (lVar2 != 0) {
                  uVar1 = native_MG_BlocksEngine2_Utils_BE2_Dropdown__GetIndexOf_58082c
                                    (lVar2,*(undefined8 *)(param_1 + 0x90),0);
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



/* BE2_Ins_AddVariable$$OnDisable @ 0x604d20
 * void BE2_Ins_AddVariable__OnDisable (BE2_Ins_AddVariable_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* BE2_Ins_AddVariable$$OnDisable
   void BE2_Ins_AddVariable__OnDisable (BE2_Ins_AddVariable_o* __this, const MethodInfo* method); */

void native_BE2_Ins_AddVariable__OnDisable_604d20(undefined8 param_1)

{
  ulong uVar1;
  long lVar2;
  undefined8 uVar3;
  long lStack_38;
  
  if ((bRam000000000133edfb & 1) == 0) {
    native_sub_43273c(&Method_BE2_Ins_AddVariable_PopulateDropdown___12e21b8);
    native_sub_43273c(&UnityEngine_Events_UnityAction_TypeInfo_12d65d0);
    bRam000000000133edfb = 1;
  }
  lVar2 = native_MG_BlocksEngine2_Core_BE2_MainEventsManager__get_Instance_6001fc();
  uVar3 = native_sub_432808(_UnityEngine_Events_UnityAction_TypeInfo_12d65d0);
  native_UnityEngine_Events_UnityAction___ctor_773130
            (uVar3,param_1,_Method_BE2_Ins_AddVariable_PopulateDropdown___12e21b8,0);
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



/* BE2_Ins_AddVariable$$PopulateDropdown @ 0x604ba0
 * void BE2_Ins_AddVariable__PopulateDropdown (BE2_Ins_AddVariable_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* BE2_Ins_AddVariable$$PopulateDropdown
   void BE2_Ins_AddVariable__PopulateDropdown (BE2_Ins_AddVariable_o* __this, const MethodInfo*
   method); */

void native_BE2_Ins_AddVariable__PopulateDropdown_604ba0(long param_1)

{
  undefined4 uVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  if ((bRam000000000133edfc & 1) == 0) {
    native_sub_43273c(&
                      Method_System_Collections_Generic_Dictionary_string__string__GetEnumerator___12d9900
                     );
    native_sub_43273c(&
                      Method_System_Collections_Generic_Dictionary_Enumerator_string__string__Dispose___12dadc0
                     );
    native_sub_43273c(&
                      Method_System_Collections_Generic_Dictionary_Enumerator_string__string__MoveNext___12dadc8
                     );
    native_sub_43273c(&
                      Method_System_Collections_Generic_Dictionary_Enumerator_string__string__get_Current___12dadd0
                     );
    native_sub_43273c(&
                      Method_System_Collections_Generic_KeyValuePair_string__string__get_Key___12dbf20
                     );
    bRam000000000133edfc = 1;
  }
  uStack_28 = 0;
  uStack_30 = 0;
  uStack_38 = 0;
  uStack_40 = 0;
  uStack_48 = 0;
  if (*(long *)(param_1 + 0x98) != 0) {
    native_MG_BlocksEngine2_Utils_BE2_Dropdown__ClearOptions_580490(*(long *)(param_1 + 0x98),0);
    if ((*(long *)(param_1 + 0xa0) != 0) &&
       (lVar2 = *(long *)(*(long *)(param_1 + 0xa0) + 0x20), lVar2 != 0)) {
      native_System_Collections_Generic_Dictionary_object__object___GetEnumerator_cdabfc
                (&uStack_48,lVar2,
                 _Method_System_Collections_Generic_Dictionary_string__string__GetEnumerator___12d9900
                );
      while (uVar3 = native_System_Collections_Generic_Dictionary_Enumerator_object__object___MoveNext_7f4bb4
                               (&uStack_48,
                                _Method_System_Collections_Generic_Dictionary_Enumerator_string__string__MoveNext___12dadc8
                               ), (uVar3 & 1) != 0) {
        if (*(long *)(param_1 + 0x98) == 0) {
                    /* WARNING: Subroutine does not return */
          native_sub_432810();
        }
        native_MG_BlocksEngine2_Utils_BE2_Dropdown__AddOption_580570
                  (*(long *)(param_1 + 0x98),uStack_38,0);
      }
      native_System_Collections_Generic_Dictionary_Enumerator_object__object___Dispose_7f4d1c
                (&uStack_48,
                 _Method_System_Collections_Generic_Dictionary_Enumerator_string__string__Dispose___12dadc0
                );
      if (*(long *)(param_1 + 0x98) != 0) {
        native_MG_BlocksEngine2_Utils_BE2_Dropdown__RefreshShownValue_580b34
                  (*(long *)(param_1 + 0x98),0);
        lVar2 = *(long *)(param_1 + 0x98);
        if (lVar2 != 0) {
          uVar1 = native_MG_BlocksEngine2_Utils_BE2_Dropdown__GetIndexOf_58082c
                            (lVar2,*(undefined8 *)(param_1 + 0x90),0);
          native_MG_BlocksEngine2_Utils_BE2_Dropdown__set_value_580a48(lVar2,uVar1,0);
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* BE2_Ins_AddVariable$$Function @ 0x604dc0
 * void BE2_Ins_AddVariable__Function (BE2_Ins_AddVariable_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* BE2_Ins_AddVariable$$Function
   void BE2_Ins_AddVariable__Function (BE2_Ins_AddVariable_o* __this, const MethodInfo* method); */

void native_BE2_Ins_AddVariable__Function_604dc0(long param_1)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  ulong uVar6;
  int *piVar7;
  long *plVar8;
  long lVar9;
  float fStack_24;
  
  if ((bRam000000000133edfd & 1) == 0) {
    native_sub_43273c(&System_Globalization_CultureInfo_TypeInfo_12d4068);
    native_sub_43273c(&MG_BlocksEngine2_Block_I_BE2_BlockSectionHeaderInput_TypeInfo_12d4e00);
    bRam000000000133edfd = 1;
  }
  fStack_24 = 0.0;
  lVar1 = native_MG_BlocksEngine2_Block_Instruction_BE2_InstructionBase__get_Section0Inputs_603b78
                    (param_1);
  if (lVar1 == 0) goto LAB_0060501c;
  if (*(int *)(lVar1 + 0x18) == 0) {
LAB_00605020:
    uVar3 = native_sub_43283c();
                    /* WARNING: Subroutine does not return */
    native_sub_4327dc(uVar3,0);
  }
  plVar8 = *(long **)(lVar1 + 0x20);
  if (plVar8 != (long *)0x0) {
    lVar1 = *plVar8;
    if ((ulong)*(ushort *)(lVar1 + 0x12a) != 0) {
      uVar6 = 0;
      piVar7 = (int *)(*(long *)(lVar1 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) ==
            _MG_BlocksEngine2_Block_I_BE2_BlockSectionHeaderInput_TypeInfo_12d4e00) {
          puVar2 = (undefined8 *)(lVar1 + (long)(*piVar7 + 3) * 0x10 + 0x138);
          goto LAB_00604e80;
        }
        uVar6 = uVar6 + 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 < *(ushort *)(lVar1 + 0x12a));
    }
    puVar2 = (undefined8 *)
             native_sub_3c9b34(plVar8,
                               _MG_BlocksEngine2_Block_I_BE2_BlockSectionHeaderInput_TypeInfo_12d4e00
                               ,3);
LAB_00604e80:
    uVar3 = (*(code *)*puVar2)(plVar8,puVar2[1]);
    *(undefined8 *)(param_1 + 0x78) = uVar3;
    native_sub_4326e0();
    lVar1 = native_MG_BlocksEngine2_Block_Instruction_BE2_InstructionBase__get_Section0Inputs_603b78
                      (param_1);
    if (lVar1 == 0) goto LAB_0060501c;
    if (*(uint *)(lVar1 + 0x18) < 2) goto LAB_00605020;
    plVar8 = *(long **)(lVar1 + 0x28);
    if (plVar8 == (long *)0x0) goto LAB_0060501c;
    lVar1 = *plVar8;
    if ((ulong)*(ushort *)(lVar1 + 0x12a) != 0) {
      uVar6 = 0;
      piVar7 = (int *)(*(long *)(lVar1 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) ==
            _MG_BlocksEngine2_Block_I_BE2_BlockSectionHeaderInput_TypeInfo_12d4e00) {
          puVar2 = (undefined8 *)(lVar1 + (long)(*piVar7 + 4) * 0x10 + 0x138);
          goto LAB_00604f14;
        }
        uVar6 = uVar6 + 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 < *(ushort *)(lVar1 + 0x12a));
    }
    puVar2 = (undefined8 *)
             native_sub_3c9b34(plVar8,
                               _MG_BlocksEngine2_Block_I_BE2_BlockSectionHeaderInput_TypeInfo_12d4e00
                               ,4);
LAB_00604f14:
    lVar1 = (*(code *)*puVar2)(plVar8,puVar2[1]);
    plVar8 = (long *)(param_1 + 0x80);
    *plVar8 = lVar1;
    native_sub_4326e0(plVar8,lVar1);
    if (*(long *)(param_1 + 0xa0) == 0) goto LAB_0060501c;
    uVar3 = native_MG_BlocksEngine2_Environment_BE2_VariablesManager__GetVariableValues_dcecac
                      (*(long *)(param_1 + 0xa0),*(undefined8 *)(param_1 + 0x78),0);
    *(undefined8 *)(param_1 + 0x88) = uVar3;
    native_sub_4326e0(param_1 + 0x88);
    lVar1 = *(long *)(param_1 + 0x88);
    if (lVar1 == 0) goto LAB_0060501c;
    lVar5 = *plVar8;
    if (*(char *)(lVar1 + 0x10) == '\0') {
      if (lVar5 == 0) goto LAB_0060501c;
      if (*(char *)(lVar5 + 0x10) == '\0') {
        fStack_24 = *(float *)(lVar1 + 0x20) + *(float *)(lVar5 + 0x20);
        lVar9 = *(long *)(param_1 + 0xa0);
        uVar3 = *(undefined8 *)(param_1 + 0x78);
        if (((*(byte *)(_System_Globalization_CultureInfo_TypeInfo_12d4068 + 0x133) >> 2 & 1) != 0)
           && (*(int *)(_System_Globalization_CultureInfo_TypeInfo_12d4068 + 0xe0) == 0)) {
          native_sub_4327ec();
        }
        uVar4 = native_System_Globalization_CultureInfo__get_InvariantCulture_b2d3e8(0);
        uVar4 = native_System_Single__ToString_af895c(&fStack_24,uVar4,0);
        if (lVar9 == 0) goto LAB_0060501c;
        goto LAB_00604f9c;
      }
    }
    else if (lVar5 == 0) goto LAB_0060501c;
    lVar9 = *(long *)(param_1 + 0xa0);
    uVar3 = *(undefined8 *)(param_1 + 0x78);
    uVar4 = native_System_String__Concat_afbd68
                      (*(undefined8 *)(lVar1 + 0x18),*(undefined8 *)(lVar5 + 0x18),0);
    if (lVar9 != 0) {
LAB_00604f9c:
      native_MG_BlocksEngine2_Environment_BE2_VariablesManager__AddOrUpdateVariable_dc9e8c
                (lVar9,uVar3,uVar4,0);
      native_MG_BlocksEngine2_Block_Instruction_BE2_InstructionBase__ExecuteNextInstruction_603c34
                (param_1);
      return;
    }
  }
LAB_0060501c:
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* BE2_Ins_AddVariable$$.ctor @ 0x60502c
 * void BE2_Ins_AddVariable___ctor (BE2_Ins_AddVariable_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* BE2_Ins_AddVariable$$.ctor
   void BE2_Ins_AddVariable___ctor (BE2_Ins_AddVariable_o* __this, const MethodInfo* method); */

undefined1  [16] native_BE2_Ins_AddVariable___ctor_60502c(ulong param_1)

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



/* BE2_Ins_AddVariable$$<OnStart>b__0_0 @ 0x60503c
 * void BE2_Ins_AddVariable___OnStart_b__0_0 (BE2_Ins_AddVariable_o* __this, int32_t _p0_, const MethodInfo* method); */

/* BE2_Ins_AddVariable$$<OnStart>b__0_0
   void BE2_Ins_AddVariable___OnStart_b__0_0 (BE2_Ins_AddVariable_o* __this, int32_t _p0_, const
   MethodInfo* method); */

void native_BE2_Ins_AddVariable___OnStart_b__0_0_60503c(long param_1)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  
  if (*(long *)(param_1 + 0x98) != 0) {
    uVar4 = native_MG_BlocksEngine2_Utils_BE2_Dropdown__GetSelectedOptionText_567528
                      (*(long *)(param_1 + 0x98),0);
    puVar5 = (undefined8 *)(param_1 + 0x90);
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


