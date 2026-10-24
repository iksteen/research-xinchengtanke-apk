/* ARM64 IL2CPP native pseudocode from Ghidra.
 * Recovered implementation, not original C# source.
 * Function boundaries follow the IL2CPP method address table. */


/* BE2_Ins_WhenKeyPressed$$OnStart @ 0x60f160
 * void BE2_Ins_WhenKeyPressed__OnStart (BE2_Ins_WhenKeyPressed_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* BE2_Ins_WhenKeyPressed$$OnStart
   void BE2_Ins_WhenKeyPressed__OnStart (BE2_Ins_WhenKeyPressed_o* __this, const MethodInfo*
   method); */

void native_BE2_Ins_WhenKeyPressed__OnStart_60f160(long param_1)

{
  undefined4 uVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  ulong uVar5;
  int *piVar6;
  long *plVar7;
  
  if ((bRam000000000133ee45 & 1) == 0) {
    native_sub_43273c(&Method_BE2_Ins_WhenKeyPressed__OnStart_b__1_0___12e2248);
    native_sub_43273c(&MG_BlocksEngine2_Block_I_BE2_BlockSectionHeaderInput_TypeInfo_12d4e00);
    native_sub_43273c(&Method_UnityEngine_Events_UnityAction_int___ctor___12de3b0);
    native_sub_43273c(&UnityEngine_Events_UnityAction_int__TypeInfo_12d2f48);
    native_sub_43273c(&Method_UnityEngine_Events_UnityEvent_int__AddListener___12de488);
    native_sub_43273c(&StringLiteral_A_12ec020);
    bRam000000000133ee45 = 1;
  }
  lVar2 = native_MG_BlocksEngine2_Block_Instruction_BE2_InstructionBase__get_Section0Inputs_603b78
                    (param_1);
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
            goto LAB_0060f248;
          }
          uVar5 = uVar5 + 1;
          piVar6 = piVar6 + 4;
        } while (uVar5 < *(ushort *)(lVar2 + 0x12a));
      }
      puVar3 = (undefined8 *)
               native_sub_3c9b34(plVar7,
                                 _MG_BlocksEngine2_Block_I_BE2_BlockSectionHeaderInput_TypeInfo_12d4e00
                                 ,0);
LAB_0060f248:
      uVar4 = (*(code *)*puVar3)(plVar7,puVar3[1]);
      lVar2 = native_MG_BlocksEngine2_Utils_BE2_Dropdown__GetBE2Component_566f34(uVar4,0);
      plVar7 = (long *)(param_1 + 0x78);
      *plVar7 = lVar2;
      native_sub_4326e0(plVar7,lVar2);
      if (*plVar7 == 0) {
        return;
      }
      native_BE2_Ins_WhenKeyPressed__PopulateDropdown_60f34c(param_1);
      lVar2 = *(long *)(param_1 + 0x78);
      if (lVar2 != 0) {
        uVar1 = native_MG_BlocksEngine2_Utils_BE2_Dropdown__GetIndexOf_58082c
                          (lVar2,_StringLiteral_A_12ec020,0);
        native_MG_BlocksEngine2_Utils_BE2_Dropdown__set_value_580a48(lVar2,uVar1,0);
        native_BE2_Ins_WhenKeyPressed__ParseKeyCode_60f48c(param_1);
        if (*(long *)(param_1 + 0x78) != 0) {
          lVar2 = native_MG_BlocksEngine2_Utils_BE2_Dropdown__get_onValueChanged_567184
                            (*(long *)(param_1 + 0x78),0);
          uVar4 = native_sub_432808(_UnityEngine_Events_UnityAction_int__TypeInfo_12d2f48);
          native_UnityEngine_Events_UnityAction_int____ctor_89b2bc
                    (uVar4,param_1,_Method_BE2_Ins_WhenKeyPressed__OnStart_b__1_0___12e2248,
                     _Method_UnityEngine_Events_UnityAction_int___ctor___12de3b0);
          if (lVar2 != 0) {
            uVar4 = (**(code **)**(undefined8 **)
                                  (*(long *)(
                                            _Method_UnityEngine_Events_UnityEvent_int__AddListener___12de488
                                            + 0x18) + 0xc0))(uVar4);
            if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
              native_sub_432810();
            }
            lVar2 = *(long *)(lVar2 + 0x10);
            if (lVar2 != 0) {
              if ((bRam0000000001340cbd & 1) == 0) {
                native_sub_43273c(&
                                  Method_System_Collections_Generic_List_BaseInvokableCall__Add___12dc5b0
                                  ,uVar4,0);
                bRam0000000001340cbd = 1;
              }
              if (*(long *)(lVar2 + 0x18) != 0) {
                native_System_Collections_Generic_List_int_____Add_d40c00
                          (*(long *)(lVar2 + 0x18),uVar4,
                           _Method_System_Collections_Generic_List_BaseInvokableCall__Add___12dc5b0)
                ;
                *(undefined1 *)(lVar2 + 0x28) = 1;
                return;
              }
                    /* WARNING: Subroutine does not return */
              native_sub_432810();
            }
                    /* WARNING: Subroutine does not return */
            native_sub_432810(0,uVar4,0);
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* BE2_Ins_WhenKeyPressed$$PopulateDropdown @ 0x60f34c
 * void BE2_Ins_WhenKeyPressed__PopulateDropdown (BE2_Ins_WhenKeyPressed_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* BE2_Ins_WhenKeyPressed$$PopulateDropdown
   void BE2_Ins_WhenKeyPressed__PopulateDropdown (BE2_Ins_WhenKeyPressed_o* __this, const
   MethodInfo* method); */

void native_BE2_Ins_WhenKeyPressed__PopulateDropdown_60f34c(long param_1)

{
  bool bVar1;
  byte bVar2;
  uint uVar3;
  undefined8 uVar4;
  long lVar5;
  long *plVar6;
  ulong uVar7;
  long lVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  
  if ((bRam000000000133ee46 & 1) == 0) {
    native_sub_43273c(&System_Enum_TypeInfo_12d4550);
    native_sub_43273c(&UnityEngine_KeyCode_var_12d1638);
    native_sub_43273c(&System_Type_TypeInfo_12d6340);
    bRam000000000133ee46 = 1;
  }
  if (*(long *)(param_1 + 0x78) == 0) {
LAB_0060f47c:
                    /* WARNING: Subroutine does not return */
    native_sub_432810();
  }
  native_MG_BlocksEngine2_Utils_BE2_Dropdown__ClearOptions_580490(*(long *)(param_1 + 0x78),0);
  uVar4 = _UnityEngine_KeyCode_var_12d1638;
  if (((*(byte *)(_System_Type_TypeInfo_12d6340 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_System_Type_TypeInfo_12d6340 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar4 = native_System_Type__GetTypeFromHandle_b0fb24(uVar4,0);
  if (((*(byte *)(_System_Enum_TypeInfo_12d4550 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_System_Enum_TypeInfo_12d4550 + 0xe0) == 0)) {
    native_sub_4327ec(_System_Enum_TypeInfo_12d4550);
  }
  lVar5 = native_System_Enum__GetNames_bece64(uVar4,0);
  if (lVar5 == 0) goto LAB_0060f47c;
  if (0 < (int)*(ulong *)(lVar5 + 0x18)) {
    uVar9 = 0;
    uVar7 = *(ulong *)(lVar5 + 0x18) & 0xffffffff;
    do {
      if (uVar7 <= uVar9) {
        uVar4 = native_sub_43283c();
                    /* WARNING: Subroutine does not return */
        native_sub_4327dc(uVar4,0);
      }
      if (*(long *)(param_1 + 0x78) == 0) goto LAB_0060f47c;
      native_MG_BlocksEngine2_Utils_BE2_Dropdown__AddOption_580570
                (*(long *)(param_1 + 0x78),*(undefined8 *)(lVar5 + 0x20 + uVar9 * 8),0);
      uVar7 = (ulong)*(uint *)(lVar5 + 0x18);
      uVar9 = uVar9 + 1;
    } while ((long)uVar9 < (long)(int)*(uint *)(lVar5 + 0x18));
  }
  lVar5 = *(long *)(param_1 + 0x78);
  if (lVar5 == 0) goto LAB_0060f47c;
  if ((bRam000000000133eae9 & 1) == 0) {
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0,0);
    bRam000000000133eae9 = 1;
  }
  uVar4 = *(undefined8 *)(lVar5 + 0x20);
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar9 = native_UnityEngine_Object__op_Implicit_8e1b98(uVar4,0);
  if ((uVar9 & 1) == 0) {
    uVar4 = *(undefined8 *)(lVar5 + 0x18);
    if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    uVar9 = native_UnityEngine_Object__op_Implicit_8e1b98(uVar4,0);
    if ((uVar9 & 1) == 0) {
      return;
    }
    lVar5 = *(long *)(lVar5 + 0x18);
    if (lVar5 == 0) {
LAB_00580c10:
                    /* WARNING: Subroutine does not return */
      native_sub_432810();
    }
    if ((bRam000000000134033f & 1) == 0) {
      native_sub_43273c(&UnityEngine_UI_Dropdown_TypeInfo_12d4498,0);
      native_sub_43273c(&
                        Method_System_Collections_Generic_List_Dropdown_OptionData__get_Count___12dd710
                       );
      native_sub_43273c(&
                        Method_System_Collections_Generic_List_Dropdown_OptionData__get_Item___12dd718
                       );
      native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
      native_sub_43273c(&StringLiteral__12eaac0);
      bRam000000000134033f = 1;
    }
    if (((*(byte *)(_UnityEngine_UI_Dropdown_TypeInfo_12d4498 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UnityEngine_UI_Dropdown_TypeInfo_12d4498 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    if ((*(long *)(lVar5 + 0x128) == 0) ||
       (lVar11 = *(long *)(*(long *)(lVar5 + 0x128) + 0x10), lVar11 == 0)) goto code_r0x007d92f0;
    if (*(int *)(lVar11 + 0x18) < 1) {
      lVar11 = **(long **)(_UnityEngine_UI_Dropdown_TypeInfo_12d4498 + 0xb8);
    }
    else {
      uVar3 = native_UnityEngine_Mathf__Clamp_8e5208
                        (*(undefined4 *)(lVar5 + 0x120),0,*(int *)(lVar11 + 0x18) + -1,0);
      if (*(uint *)(lVar11 + 0x18) <= uVar3) {
        native_System_ThrowHelper__ThrowArgumentOutOfRangeException_9fe0f4(0);
      }
      lVar11 = *(long *)(*(long *)(lVar11 + 0x10) + (long)(int)uVar3 * 8 + 0x20);
    }
    uVar4 = *(undefined8 *)(lVar5 + 0x100);
    if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    uVar9 = native_UnityEngine_Object__op_Implicit_8e1b98(uVar4,0);
    if ((uVar9 & 1) != 0) {
      if ((lVar11 == 0) || (*(long *)(lVar11 + 0x10) == 0)) {
        plVar6 = *(long **)(lVar5 + 0x100);
        if (plVar6 == (long *)0x0) goto code_r0x007d92f0;
        lVar8 = *plVar6;
        lVar10 = _StringLiteral__12eaac0;
      }
      else {
        plVar6 = *(long **)(lVar5 + 0x100);
        if (plVar6 == (long *)0x0) goto code_r0x007d92f0;
        lVar8 = *plVar6;
        lVar10 = *(long *)(lVar11 + 0x10);
      }
      (**(code **)(lVar8 + 0x5e8))(plVar6,lVar10,*(undefined8 *)(lVar8 + 0x5f0));
    }
    uVar4 = *(undefined8 *)(lVar5 + 0x108);
    if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    uVar9 = native_UnityEngine_Object__op_Implicit_8e1b98(uVar4,0);
    if ((uVar9 & 1) == 0) {
      return;
    }
    lVar10 = *(long *)(lVar5 + 0x108);
    if (lVar11 == 0) {
      if (lVar10 == 0) goto code_r0x007d92f0;
      uVar4 = 0;
    }
    else {
      if (lVar10 == 0) goto code_r0x007d92f0;
      uVar4 = *(undefined8 *)(lVar11 + 0x18);
    }
    native_UnityEngine_UI_Image__set_sprite_cb7458(lVar10,uVar4,0);
    lVar10 = *(long *)(lVar5 + 0x108);
    if (lVar10 == 0) {
code_r0x007d92f0:
                    /* WARNING: Subroutine does not return */
      native_sub_432810();
    }
    uVar4 = *(undefined8 *)(lVar10 + 0xd0);
    if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    bVar2 = native_UnityEngine_Object__op_Inequality_8d76fc(uVar4,0,0);
    bVar1 = (bool)(bVar2 & 1);
  }
  else {
    lVar5 = *(long *)(lVar5 + 0x20);
    if (lVar5 == 0) goto LAB_00580c10;
    if ((bRam000000000133efe9 & 1) == 0) {
      native_sub_43273c(&
                        Method_System_Collections_Generic_List_TMP_Dropdown_OptionData__get_Count___12dd878
                        ,0);
      native_sub_43273c(&
                        Method_System_Collections_Generic_List_TMP_Dropdown_OptionData__get_Item___12dd880
                       );
      native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
      native_sub_43273c(&TMPro_TMP_Dropdown_TypeInfo_12d6000);
      native_sub_43273c(&StringLiteral__12eaac0);
      bRam000000000133efe9 = 1;
    }
    if (((*(byte *)(_TMPro_TMP_Dropdown_TypeInfo_12d6000 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_TMPro_TMP_Dropdown_TypeInfo_12d6000 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    if ((*(long *)(lVar5 + 0x130) == 0) ||
       (lVar11 = *(long *)(*(long *)(lVar5 + 0x130) + 0x10), lVar11 == 0)) goto code_r0x00662128;
    lVar10 = **(long **)(_TMPro_TMP_Dropdown_TypeInfo_12d6000 + 0xb8);
    if ((0 < *(int *)(lVar11 + 0x18)) && (-1 < *(int *)(lVar5 + 0x128))) {
      uVar3 = native_UnityEngine_Mathf__Clamp_8e5208
                        (*(int *)(lVar5 + 0x128),0,*(int *)(lVar11 + 0x18) + -1,0);
      if (*(uint *)(lVar11 + 0x18) <= uVar3) {
        native_System_ThrowHelper__ThrowArgumentOutOfRangeException_9fe0f4(0);
      }
      lVar10 = *(long *)(*(long *)(lVar11 + 0x10) + (long)(int)uVar3 * 8 + 0x20);
    }
    uVar4 = *(undefined8 *)(lVar5 + 0x100);
    if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    uVar9 = native_UnityEngine_Object__op_Implicit_8e1b98(uVar4,0);
    if ((uVar9 & 1) != 0) {
      if ((lVar10 == 0) || (*(long *)(lVar10 + 0x10) == 0)) {
        plVar6 = *(long **)(lVar5 + 0x100);
        if (plVar6 == (long *)0x0) goto code_r0x00662128;
        lVar8 = *plVar6;
        lVar11 = _StringLiteral__12eaac0;
      }
      else {
        plVar6 = *(long **)(lVar5 + 0x100);
        if (plVar6 == (long *)0x0) goto code_r0x00662128;
        lVar8 = *plVar6;
        lVar11 = *(long *)(lVar10 + 0x10);
      }
      (**(code **)(lVar8 + 0x558))(plVar6,lVar11,*(undefined8 *)(lVar8 + 0x560));
    }
    uVar4 = *(undefined8 *)(lVar5 + 0x108);
    if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    uVar9 = native_UnityEngine_Object__op_Implicit_8e1b98(uVar4,0);
    if ((uVar9 & 1) != 0) {
      lVar11 = *(long *)(lVar5 + 0x108);
      if (lVar10 == 0) {
        if (lVar11 == 0) goto code_r0x00662128;
        uVar4 = 0;
      }
      else {
        if (lVar11 == 0) goto code_r0x00662128;
        uVar4 = *(undefined8 *)(lVar10 + 0x18);
      }
      native_UnityEngine_UI_Image__set_sprite_cb7458(lVar11,uVar4,0);
      lVar11 = *(long *)(lVar5 + 0x108);
      if (lVar11 == 0) goto code_r0x00662128;
      uVar4 = *(undefined8 *)(lVar11 + 0xd0);
      if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
        native_sub_4327ec();
      }
      uVar3 = native_UnityEngine_Object__op_Inequality_8d76fc(uVar4,0,0);
      native_UnityEngine_Behaviour__set_enabled_8d7b0c(lVar11,uVar3 & 1,0);
    }
    uVar4 = *(undefined8 *)(lVar5 + 0x110);
    if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    uVar9 = native_UnityEngine_Object__op_Implicit_8e1b98(uVar4,0);
    if ((uVar9 & 1) == 0) {
      return;
    }
    if ((*(long *)(lVar5 + 0x130) == 0) ||
       (lVar11 = *(long *)(*(long *)(lVar5 + 0x130) + 0x10), lVar11 == 0)) {
code_r0x00662128:
                    /* WARNING: Subroutine does not return */
      native_sub_432810();
    }
    lVar10 = *(long *)(lVar5 + 0x110);
    if (*(int *)(lVar11 + 0x18) == 0) {
      bVar1 = true;
    }
    else {
      bVar1 = *(int *)(lVar5 + 0x128) == -1;
    }
    if (lVar10 == 0) goto code_r0x00662128;
  }
  if (pcRam0000000001340948 == (code *)0x0) {
    pcRam0000000001340948 = (code *)native_sub_4326f0(&UNK_00e2c702);
  }
                    /* WARNING: Could not recover jumptable at 0x008d7b58. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pcRam0000000001340948)(lVar10,bVar1);
  return;
}



/* BE2_Ins_WhenKeyPressed$$OnEnableInstruction @ 0x60f5d8
 * void BE2_Ins_WhenKeyPressed__OnEnableInstruction (BE2_Ins_WhenKeyPressed_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* BE2_Ins_WhenKeyPressed$$OnEnableInstruction
   void BE2_Ins_WhenKeyPressed__OnEnableInstruction (BE2_Ins_WhenKeyPressed_o* __this, const
   MethodInfo* method); */

void native_BE2_Ins_WhenKeyPressed__OnEnableInstruction_60f5d8(undefined8 param_1)

{
  ulong uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  uint uVar5;
  long lVar6;
  
  if ((bRam000000000133ee47 & 1) == 0) {
    native_sub_43273c(&Method_BE2_Ins_WhenKeyPressed_OnUpdate___12e2250);
    native_sub_43273c(&UnityEngine_Events_UnityAction_TypeInfo_12d65d0);
    bRam000000000133ee47 = 1;
  }
  lVar2 = native_MG_BlocksEngine2_Core_BE2_ExecutionManager__get_Instance_564464(0);
  uVar3 = native_sub_432808(_UnityEngine_Events_UnityAction_TypeInfo_12d65d0);
  native_UnityEngine_Events_UnityAction___ctor_773130
            (uVar3,param_1,_Method_BE2_Ins_WhenKeyPressed_OnUpdate___12e2250,0);
  if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    native_sub_432810();
  }
  if ((bRam000000000133eafc & 1) == 0) {
    native_sub_43273c(&Method_System_Collections_Generic_List_UnityAction__Add___12dd490,uVar3,0);
    native_sub_43273c(&Method_System_Collections_Generic_List_UnityAction__Contains___12dd498);
    bRam000000000133eafc = 1;
  }
  if (*(long *)(lVar2 + 0x40) != 0) {
    uVar1 = native_System_Collections_Generic_List_BE2_UI_SelectionPanel___Contains_d40ec8
                      (*(long *)(lVar2 + 0x40),uVar3,
                       _Method_System_Collections_Generic_List_UnityAction__Contains___12dd498);
    if ((uVar1 & 1) != 0) {
      return;
    }
    if (*(long *)(lVar2 + 0x48) != 0) {
      native_UnityEngine_Events_UnityEvent__AddListener_7734bc(*(long *)(lVar2 + 0x48),uVar3,0);
      lVar2 = *(long *)(lVar2 + 0x40);
      if (lVar2 != 0) {
        lVar6 = *(long *)(lVar2 + 0x10);
        if (lVar6 != 0) {
          uVar5 = *(uint *)(lVar2 + 0x18);
          if (uVar5 == *(uint *)(lVar6 + 0x18)) {
            (*(code *)**(undefined8 **)
                        (*(long *)(*(long *)(
                                            _Method_System_Collections_Generic_List_UnityAction__Add___12dd490
                                            + 0x18) + 0xc0) + 0x60))(lVar2,uVar5 + 1);
            uVar5 = *(uint *)(lVar2 + 0x18);
            lVar6 = *(long *)(lVar2 + 0x10);
            *(uint *)(lVar2 + 0x18) = uVar5 + 1;
            if (lVar6 == 0) goto code_r0x00d40c5c;
          }
          else {
            *(uint *)(lVar2 + 0x18) = uVar5 + 1;
          }
          if (uVar5 < *(uint *)(lVar6 + 0x18)) {
            puVar4 = (undefined8 *)(lVar6 + (long)(int)uVar5 * 8 + 0x20);
            *puVar4 = uVar3;
            native_sub_4326e0(puVar4,uVar3);
            *(int *)(lVar2 + 0x1c) = *(int *)(lVar2 + 0x1c) + 1;
            return;
          }
          uVar3 = native_sub_43283c();
                    /* WARNING: Subroutine does not return */
          native_sub_4327dc(uVar3,0);
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



/* BE2_Ins_WhenKeyPressed$$OnDisableInstruction @ 0x60f678
 * void BE2_Ins_WhenKeyPressed__OnDisableInstruction (BE2_Ins_WhenKeyPressed_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* BE2_Ins_WhenKeyPressed$$OnDisableInstruction
   void BE2_Ins_WhenKeyPressed__OnDisableInstruction (BE2_Ins_WhenKeyPressed_o* __this, const
   MethodInfo* method); */

ulong native_BE2_Ins_WhenKeyPressed__OnDisableInstruction_60f678(undefined8 param_1)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  long lVar4;
  undefined8 uVar5;
  
  if ((bRam000000000133ee48 & 1) == 0) {
    native_sub_43273c(&Method_BE2_Ins_WhenKeyPressed_OnUpdate___12e2250);
    native_sub_43273c(&UnityEngine_Events_UnityAction_TypeInfo_12d65d0);
    bRam000000000133ee48 = 1;
  }
  lVar4 = native_MG_BlocksEngine2_Core_BE2_ExecutionManager__get_Instance_564464(0);
  uVar5 = native_sub_432808(_UnityEngine_Events_UnityAction_TypeInfo_12d65d0);
  native_UnityEngine_Events_UnityAction___ctor_773130
            (uVar5,param_1,_Method_BE2_Ins_WhenKeyPressed_OnUpdate___12e2250,0);
  if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
    native_sub_432810();
  }
  if ((bRam000000000133eafd & 1) == 0) {
    native_sub_43273c(&Method_System_Collections_Generic_List_UnityAction__Contains___12dd498,uVar5,
                      0);
    native_sub_43273c(&Method_System_Collections_Generic_List_UnityAction__Remove___12dd4a0);
    bRam000000000133eafd = 1;
  }
  if (*(long *)(lVar4 + 0x40) != 0) {
    uVar3 = native_System_Collections_Generic_List_BE2_UI_SelectionPanel___Contains_d40ec8
                      (*(long *)(lVar4 + 0x40),uVar5,
                       _Method_System_Collections_Generic_List_UnityAction__Contains___12dd498);
    if ((uVar3 & 1) == 0) {
      return uVar3;
    }
    if (*(long *)(lVar4 + 0x48) != 0) {
      native_UnityEngine_Events_UnityEvent__RemoveListener_773574(*(long *)(lVar4 + 0x48),uVar5,0);
      lVar1 = _Method_System_Collections_Generic_List_UnityAction__Remove___12dd4a0;
      lVar4 = *(long *)(lVar4 + 0x40);
      if (lVar4 != 0) {
        if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
          native_sub_432810(0,uVar5);
        }
        iVar2 = (*(code *)**(undefined8 **)
                            (*(long *)(*(long *)(
                                                _Method_System_Collections_Generic_List_UnityAction__Remove___12dd4a0
                                                + 0x18) + 0xc0) + 0xd8))();
        if (-1 < iVar2) {
          (*(code *)**(undefined8 **)(*(long *)(*(long *)(lVar1 + 0x18) + 0xc0) + 0xe8))
                    (lVar4,iVar2);
        }
        return (ulong)(-1 < iVar2);
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* BE2_Ins_WhenKeyPressed$$OnUpdate @ 0x60f718
 * void BE2_Ins_WhenKeyPressed__OnUpdate (BE2_Ins_WhenKeyPressed_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* BE2_Ins_WhenKeyPressed$$OnUpdate
   void BE2_Ins_WhenKeyPressed__OnUpdate (BE2_Ins_WhenKeyPressed_o* __this, const MethodInfo*
   method); */

void native_BE2_Ins_WhenKeyPressed__OnUpdate_60f718(long param_1)

{
  ulong uVar1;
  undefined8 *puVar2;
  long lVar3;
  int *piVar4;
  long *plVar5;
  
  if ((bRam000000000133ee49 & 1) == 0) {
    native_sub_43273c(&MG_BlocksEngine2_Core_I_BE2_BlocksStack_TypeInfo_12d4e10);
    bRam000000000133ee49 = 1;
  }
  uVar1 = native_UnityEngine_Input__GetKeyDown_dbdc64(*(undefined4 *)(param_1 + 0x80),0);
  if ((uVar1 & 1) != 0) {
    plVar5 = *(long **)(param_1 + 0x48);
    if (plVar5 == (long *)0x0) goto LAB_0060f86c;
    lVar3 = *plVar5;
    if ((ulong)*(ushort *)(lVar3 + 0x12a) != 0) {
      uVar1 = 0;
      piVar4 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
        if (*(long *)(piVar4 + -2) == _MG_BlocksEngine2_Core_I_BE2_BlocksStack_TypeInfo_12d4e10) {
          puVar2 = (undefined8 *)(lVar3 + (long)(*piVar4 + 3) * 0x10 + 0x138);
          goto LAB_0060f7c0;
        }
        uVar1 = uVar1 + 1;
        piVar4 = piVar4 + 4;
      } while (uVar1 < *(ushort *)(lVar3 + 0x12a));
    }
    puVar2 = (undefined8 *)
             native_sub_3c9b34(plVar5,_MG_BlocksEngine2_Core_I_BE2_BlocksStack_TypeInfo_12d4e10,3);
LAB_0060f7c0:
    (*(code *)*puVar2)(plVar5,1,puVar2[1]);
  }
  uVar1 = native_UnityEngine_Input__GetKeyUp_dbdc24(*(undefined4 *)(param_1 + 0x80),0);
  if ((uVar1 & 1) == 0) {
    return;
  }
  plVar5 = *(long **)(param_1 + 0x48);
  if (plVar5 != (long *)0x0) {
    lVar3 = *plVar5;
    if ((ulong)*(ushort *)(lVar3 + 0x12a) != 0) {
      uVar1 = 0;
      piVar4 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
        if (*(long *)(piVar4 + -2) == _MG_BlocksEngine2_Core_I_BE2_BlocksStack_TypeInfo_12d4e10) {
          puVar2 = (undefined8 *)(lVar3 + (long)(*piVar4 + 3) * 0x10 + 0x138);
          goto LAB_0060f854;
        }
        uVar1 = uVar1 + 1;
        piVar4 = piVar4 + 4;
      } while (uVar1 < *(ushort *)(lVar3 + 0x12a));
    }
    puVar2 = (undefined8 *)
             native_sub_3c9b34(plVar5,_MG_BlocksEngine2_Core_I_BE2_BlocksStack_TypeInfo_12d4e10,3);
LAB_0060f854:
                    /* WARNING: Could not recover jumptable at 0x0060f868. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)*puVar2)(plVar5,0,puVar2[1]);
    return;
  }
LAB_0060f86c:
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* BE2_Ins_WhenKeyPressed$$ParseKeyCode @ 0x60f48c
 * void BE2_Ins_WhenKeyPressed__ParseKeyCode (BE2_Ins_WhenKeyPressed_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* BE2_Ins_WhenKeyPressed$$ParseKeyCode
   void BE2_Ins_WhenKeyPressed__ParseKeyCode (BE2_Ins_WhenKeyPressed_o* __this, const MethodInfo*
   method); */

void native_BE2_Ins_WhenKeyPressed__ParseKeyCode_60f48c(long param_1)

{
  float fVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  ulong uVar5;
  int *piVar6;
  long *plVar7;
  long lVar8;
  float fVar9;
  
  if ((bRam000000000133ee4a & 1) == 0) {
    native_sub_43273c(&MG_BlocksEngine2_Core_BE2_InputManager_TypeInfo_12d39e8);
    native_sub_43273c(&MG_BlocksEngine2_Block_I_BE2_BlockSectionHeaderInput_TypeInfo_12d4e00);
    native_sub_43273c(&Method_System_Collections_Generic_List_KeyCode__get_Item___12dcb28);
    bRam000000000133ee4a = 1;
  }
  lVar8 = *(long *)(*(long *)(_MG_BlocksEngine2_Core_BE2_InputManager_TypeInfo_12d39e8 + 0xb8) + 8);
  lVar2 = native_MG_BlocksEngine2_Block_Instruction_BE2_InstructionBase__get_Section0Inputs_603b78
                    (param_1);
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
            puVar3 = (undefined8 *)(lVar2 + (long)(*piVar6 + 2) * 0x10 + 0x138);
            goto LAB_0060f568;
          }
          uVar5 = uVar5 + 1;
          piVar6 = piVar6 + 4;
        } while (uVar5 < *(ushort *)(lVar2 + 0x12a));
      }
      puVar3 = (undefined8 *)
               native_sub_3c9b34(plVar7,
                                 _MG_BlocksEngine2_Block_I_BE2_BlockSectionHeaderInput_TypeInfo_12d4e00
                                 ,2);
LAB_0060f568:
      fVar9 = (float)(*(code *)*puVar3)(plVar7,puVar3[1]);
      if (lVar8 != 0) {
        fVar1 = -fVar9;
        if (fVar9 != INFINITY) {
          fVar1 = fVar9;
        }
        if (*(uint *)(lVar8 + 0x18) <= (uint)(int)fVar1) {
          native_System_ThrowHelper__ThrowArgumentOutOfRangeException_9fe0f4(0);
        }
        *(undefined4 *)(param_1 + 0x80) =
             *(undefined4 *)(*(long *)(lVar8 + 0x10) + (long)(int)fVar1 * 4 + 0x20);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* BE2_Ins_WhenKeyPressed$$Function @ 0x60f870
 * void BE2_Ins_WhenKeyPressed__Function (BE2_Ins_WhenKeyPressed_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* BE2_Ins_WhenKeyPressed$$Function
   void BE2_Ins_WhenKeyPressed__Function (BE2_Ins_WhenKeyPressed_o* __this, const MethodInfo*
   method); */

void native_BE2_Ins_WhenKeyPressed__Function_60f870(long param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  code *UNRECOVERED_JUMPTABLE;
  long lVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  int *piVar9;
  long *plVar10;
  long *plVar11;
  
  if ((bRam000000000133ee61 & 1) == 0) {
    native_sub_43273c(&MG_BlocksEngine2_Block_I_BE2_Block_TypeInfo_12d4dd8);
    native_sub_43273c(&MG_BlocksEngine2_Core_I_BE2_BlocksStack_TypeInfo_12d4e10);
    native_sub_43273c(&MG_BlocksEngine2_Block_Instruction_I_BE2_InstructionBase_TypeInfo_12d4e30);
    native_sub_43273c(&MG_BlocksEngine2_Block_Instruction_I_BE2_Instruction_TypeInfo_12d4e28);
    bRam000000000133ee61 = 1;
  }
  plVar10 = *(long **)(param_1 + 0x48);
  if (plVar10 == (long *)0x0) goto LAB_00609ef0;
  lVar5 = *plVar10;
  if ((ulong)*(ushort *)(lVar5 + 0x12a) != 0) {
    uVar8 = 0;
    piVar9 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
    do {
      if (*(long *)(piVar9 + -2) == _MG_BlocksEngine2_Core_I_BE2_BlocksStack_TypeInfo_12d4e10) {
        puVar3 = (undefined8 *)(lVar5 + (long)(*piVar9 + 9) * 0x10 + 0x138);
        goto LAB_006096b8;
      }
      uVar8 = uVar8 + 1;
      piVar9 = piVar9 + 4;
    } while (uVar8 < *(ushort *)(lVar5 + 0x12a));
  }
  puVar3 = (undefined8 *)
           native_sub_3c9b34(plVar10,_MG_BlocksEngine2_Core_I_BE2_BlocksStack_TypeInfo_12d4e10,9);
LAB_006096b8:
  lVar5 = (*(code *)*puVar3)(plVar10,puVar3[1]);
  if ((lVar5 == 0) || (lVar6 = *(long *)(param_1 + 0x58), lVar6 == 0)) goto LAB_00609ef0;
  if (*(int *)(lVar6 + 0x18) == 0) goto LAB_00609ef4;
  iVar2 = *(int *)(lVar6 + 0x20);
  plVar10 = *(long **)(param_1 + 0x48);
  if (*(int *)(lVar5 + 0x18) <= iVar2) {
    if (plVar10 == (long *)0x0) goto LAB_00609ef0;
    lVar5 = *plVar10;
    if ((ulong)*(ushort *)(lVar5 + 0x12a) != 0) {
      uVar8 = 0;
      piVar9 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == _MG_BlocksEngine2_Core_I_BE2_BlocksStack_TypeInfo_12d4e10) {
          puVar3 = (undefined8 *)(lVar5 + (long)(*piVar9 + 7) * 0x10 + 0x138);
          goto LAB_00609840;
        }
        uVar8 = uVar8 + 1;
        piVar9 = piVar9 + 4;
      } while (uVar8 < *(ushort *)(lVar5 + 0x12a));
    }
    puVar3 = (undefined8 *)
             native_sub_3c9b34(plVar10,_MG_BlocksEngine2_Core_I_BE2_BlocksStack_TypeInfo_12d4e10,7);
LAB_00609840:
    UNRECOVERED_JUMPTABLE = (code *)*puVar3;
    uVar4 = puVar3[1];
    goto LAB_00609ed8;
  }
  if (plVar10 == (long *)0x0) goto LAB_00609ef0;
  lVar5 = *plVar10;
  if ((ulong)*(ushort *)(lVar5 + 0x12a) != 0) {
    uVar8 = 0;
    piVar9 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
    do {
      if (*(long *)(piVar9 + -2) == _MG_BlocksEngine2_Core_I_BE2_BlocksStack_TypeInfo_12d4e10) {
        puVar3 = (undefined8 *)(lVar5 + (long)(*piVar9 + 9) * 0x10 + 0x138);
        goto LAB_006097a0;
      }
      uVar8 = uVar8 + 1;
      piVar9 = piVar9 + 4;
    } while (uVar8 < *(ushort *)(lVar5 + 0x12a));
  }
  puVar3 = (undefined8 *)
           native_sub_3c9b34(plVar10,_MG_BlocksEngine2_Core_I_BE2_BlocksStack_TypeInfo_12d4e10,9);
LAB_006097a0:
  lVar5 = (*(code *)*puVar3)(plVar10,puVar3[1]);
  lVar6 = *(long *)(param_1 + 0x58);
  if (lVar6 == 0) goto LAB_00609ef0;
  if (*(int *)(lVar6 + 0x18) == 0) goto LAB_00609ef4;
  if (lVar5 == 0) goto LAB_00609ef0;
  if (*(uint *)(lVar5 + 0x18) <= *(uint *)(lVar6 + 0x20)) goto LAB_00609ef4;
  plVar10 = *(long **)(param_1 + 0x48);
  if (plVar10 == (long *)0x0) goto LAB_00609ef0;
  lVar7 = *plVar10;
  plVar11 = *(long **)(lVar5 + (long)(int)*(uint *)(lVar6 + 0x20) * 8 + 0x20);
  if ((ulong)*(ushort *)(lVar7 + 0x12a) != 0) {
    uVar8 = 0;
    piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
    do {
      if (*(long *)(piVar9 + -2) == _MG_BlocksEngine2_Core_I_BE2_BlocksStack_TypeInfo_12d4e10) {
        puVar3 = (undefined8 *)(lVar7 + (long)(*piVar9 + 0xf) * 0x10 + 0x138);
        goto LAB_00609860;
      }
      uVar8 = uVar8 + 1;
      piVar9 = piVar9 + 4;
    } while (uVar8 < *(ushort *)(lVar7 + 0x12a));
  }
  puVar3 = (undefined8 *)
           native_sub_3c9b34(plVar10,_MG_BlocksEngine2_Core_I_BE2_BlocksStack_TypeInfo_12d4e10,0xf);
LAB_00609860:
  uVar8 = (*(code *)*puVar3)(plVar10,puVar3[1]);
  if ((uVar8 & 1) == 0) {
    if (plVar11 == (long *)0x0) goto LAB_00609ef0;
    lVar5 = *plVar11;
    if ((ulong)*(ushort *)(lVar5 + 0x12a) != 0) {
      uVar8 = 0;
      piVar9 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) ==
            _MG_BlocksEngine2_Block_Instruction_I_BE2_Instruction_TypeInfo_12d4e28) {
          puVar3 = (undefined8 *)(lVar5 + (long)*piVar9 * 0x10 + 0x138);
          goto LAB_006099ac;
        }
        uVar8 = uVar8 + 1;
        piVar9 = piVar9 + 4;
      } while (uVar8 < *(ushort *)(lVar5 + 0x12a));
    }
    puVar3 = (undefined8 *)
             native_sub_3c9b34(plVar11,
                               _MG_BlocksEngine2_Block_Instruction_I_BE2_Instruction_TypeInfo_12d4e28
                               ,0);
LAB_006099ac:
    plVar10 = (long *)(*(code *)*puVar3)(plVar11,puVar3[1]);
    if (plVar10 == (long *)0x0) goto LAB_00609ef0;
    lVar5 = *plVar10;
    if ((ulong)*(ushort *)(lVar5 + 0x12a) != 0) {
      uVar8 = 0;
      piVar9 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) ==
            _MG_BlocksEngine2_Block_Instruction_I_BE2_InstructionBase_TypeInfo_12d4e30) {
          puVar3 = (undefined8 *)(lVar5 + (long)(*piVar9 + 3) * 0x10 + 0x138);
          goto LAB_00609a20;
        }
        uVar8 = uVar8 + 1;
        piVar9 = piVar9 + 4;
      } while (uVar8 < *(ushort *)(lVar5 + 0x12a));
    }
    puVar3 = (undefined8 *)
             native_sub_3c9b34(plVar10,
                               _MG_BlocksEngine2_Block_Instruction_I_BE2_InstructionBase_TypeInfo_12d4e30
                               ,3);
LAB_00609a20:
    plVar10 = (long *)(*(code *)*puVar3)(plVar10,puVar3[1]);
    if (plVar10 == (long *)0x0) goto LAB_00609ef0;
    lVar5 = *plVar10;
    if ((ulong)*(ushort *)(lVar5 + 0x12a) != 0) {
      uVar8 = 0;
      piVar9 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == _MG_BlocksEngine2_Block_I_BE2_Block_TypeInfo_12d4dd8) {
          puVar3 = (undefined8 *)(lVar5 + (long)(*piVar9 + 1) * 0x10 + 0x138);
          goto LAB_00609a94;
        }
        uVar8 = uVar8 + 1;
        piVar9 = piVar9 + 4;
      } while (uVar8 < *(ushort *)(lVar5 + 0x12a));
    }
    puVar3 = (undefined8 *)
             native_sub_3c9b34(plVar10,_MG_BlocksEngine2_Block_I_BE2_Block_TypeInfo_12d4dd8,1);
LAB_00609a94:
    iVar2 = (*(code *)*puVar3)(plVar10,puVar3[1]);
    if (iVar2 == 4) {
      plVar10 = *(long **)(param_1 + 0x48);
      if (plVar10 == (long *)0x0) goto LAB_00609ef0;
      lVar5 = *plVar10;
      if ((ulong)*(ushort *)(lVar5 + 0x12a) != 0) {
        uVar8 = 0;
        piVar9 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(long *)(piVar9 + -2) == _MG_BlocksEngine2_Core_I_BE2_BlocksStack_TypeInfo_12d4e10) {
            puVar3 = (undefined8 *)(lVar5 + (long)(*piVar9 + 0x14) * 0x10 + 0x138);
            goto LAB_00609bd0;
          }
          uVar8 = uVar8 + 1;
          piVar9 = piVar9 + 4;
        } while (uVar8 < *(ushort *)(lVar5 + 0x12a));
      }
      puVar3 = (undefined8 *)
               native_sub_3c9b34(plVar10,_MG_BlocksEngine2_Core_I_BE2_BlocksStack_TypeInfo_12d4e10,
                                 0x14);
LAB_00609bd0:
      lVar5 = (*(code *)*puVar3)(plVar10,puVar3[1]);
      if (lVar5 == 0) goto LAB_00609ef0;
      native_UnityEngine_Events_UnityEvent__Invoke_773864(lVar5,0);
    }
    lVar5 = *plVar11;
    if ((ulong)*(ushort *)(lVar5 + 0x12a) != 0) {
      uVar8 = 0;
      piVar9 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) ==
            _MG_BlocksEngine2_Block_Instruction_I_BE2_Instruction_TypeInfo_12d4e28) {
          puVar3 = (undefined8 *)(lVar5 + (long)(*piVar9 + 1) * 0x10 + 0x138);
          goto LAB_00609c40;
        }
        uVar8 = uVar8 + 1;
        piVar9 = piVar9 + 4;
      } while (uVar8 < *(ushort *)(lVar5 + 0x12a));
    }
    puVar3 = (undefined8 *)
             native_sub_3c9b34(plVar11,
                               _MG_BlocksEngine2_Block_Instruction_I_BE2_Instruction_TypeInfo_12d4e28
                               ,1);
LAB_00609c40:
    uVar8 = (*(code *)*puVar3)(plVar11,puVar3[1]);
    if ((uVar8 & 1) == 0) {
      plVar10 = *(long **)(param_1 + 0x48);
      if (plVar10 == (long *)0x0) goto LAB_00609ef0;
      lVar5 = *plVar10;
      if ((ulong)*(ushort *)(lVar5 + 0x12a) != 0) {
        uVar8 = 0;
        piVar9 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(long *)(piVar9 + -2) == _MG_BlocksEngine2_Core_I_BE2_BlocksStack_TypeInfo_12d4e10) {
            puVar3 = (undefined8 *)(lVar5 + (long)(*piVar9 + 4) * 0x10 + 0x138);
            goto LAB_00609cb0;
          }
          uVar8 = uVar8 + 1;
          piVar9 = piVar9 + 4;
        } while (uVar8 < *(ushort *)(lVar5 + 0x12a));
      }
      puVar3 = (undefined8 *)
               native_sub_3c9b34(plVar10,_MG_BlocksEngine2_Core_I_BE2_BlocksStack_TypeInfo_12d4e10,4
                                );
LAB_00609cb0:
      iVar2 = (*(code *)*puVar3)(plVar10,puVar3[1]);
      if (iVar2 < *(int *)(param_1 + 0x60)) {
        plVar10 = *(long **)(param_1 + 0x48);
        if (plVar10 == (long *)0x0) goto LAB_00609ef0;
        lVar5 = *plVar10;
        if ((ulong)*(ushort *)(lVar5 + 0x12a) != 0) {
          uVar8 = 0;
          piVar9 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
          do {
            if (*(long *)(piVar9 + -2) == _MG_BlocksEngine2_Core_I_BE2_BlocksStack_TypeInfo_12d4e10)
            {
              puVar3 = (undefined8 *)(lVar5 + (long)(*piVar9 + 4) * 0x10 + 0x138);
              goto LAB_00609e24;
            }
            uVar8 = uVar8 + 1;
            piVar9 = piVar9 + 4;
          } while (uVar8 < *(ushort *)(lVar5 + 0x12a));
        }
        puVar3 = (undefined8 *)
                 native_sub_3c9b34(plVar10,_MG_BlocksEngine2_Core_I_BE2_BlocksStack_TypeInfo_12d4e10
                                   ,4);
LAB_00609e24:
        iVar2 = (*(code *)*puVar3)(plVar10,puVar3[1]);
        lVar5 = *plVar10;
        iVar2 = iVar2 + 1;
        if ((ulong)*(ushort *)(lVar5 + 0x12a) != 0) {
          uVar8 = 0;
          piVar9 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
          do {
            if (*(long *)(piVar9 + -2) == _MG_BlocksEngine2_Core_I_BE2_BlocksStack_TypeInfo_12d4e10)
            goto LAB_00609e7c;
            uVar8 = uVar8 + 1;
            piVar9 = piVar9 + 4;
          } while (uVar8 < *(ushort *)(lVar5 + 0x12a));
        }
        goto LAB_00609e6c;
      }
    }
    lVar5 = *(long *)(param_1 + 0x58);
    if (lVar5 != 0) {
      if (*(int *)(lVar5 + 0x18) == 0) {
LAB_00609ef4:
        uVar4 = native_sub_43283c();
                    /* WARNING: Subroutine does not return */
        native_sub_4327dc(uVar4,0);
      }
      plVar10 = *(long **)(param_1 + 0x48);
      if (plVar10 != (long *)0x0) {
        lVar6 = *plVar10;
        iVar2 = *(int *)(lVar5 + 0x20);
        if ((ulong)*(ushort *)(lVar6 + 0x12a) != 0) {
          uVar8 = 0;
          piVar9 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
          do {
            if (*(long *)(piVar9 + -2) == _MG_BlocksEngine2_Core_I_BE2_BlocksStack_TypeInfo_12d4e10)
            {
              puVar3 = (undefined8 *)(lVar6 + (long)(*piVar9 + 7) * 0x10 + 0x138);
              goto LAB_00609d94;
            }
            uVar8 = uVar8 + 1;
            piVar9 = piVar9 + 4;
          } while (uVar8 < *(ushort *)(lVar6 + 0x12a));
        }
        puVar3 = (undefined8 *)
                 native_sub_3c9b34(plVar10,_MG_BlocksEngine2_Core_I_BE2_BlocksStack_TypeInfo_12d4e10
                                   ,7);
LAB_00609d94:
        UNRECOVERED_JUMPTABLE = (code *)*puVar3;
        uVar4 = puVar3[1];
LAB_00609ed8:
                    /* WARNING: Could not recover jumptable at 0x00609eec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*UNRECOVERED_JUMPTABLE)(plVar10,iVar2,uVar4);
        return;
      }
    }
LAB_00609ef0:
                    /* WARNING: Subroutine does not return */
    native_sub_432810();
  }
  plVar10 = *(long **)(param_1 + 0x40);
  if (plVar10 == (long *)0x0) goto LAB_00609ef0;
  lVar5 = *plVar10;
  if ((ulong)*(ushort *)(lVar5 + 0x12a) != 0) {
    uVar8 = 0;
    piVar9 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
    do {
      if (*(long *)(piVar9 + -2) == _MG_BlocksEngine2_Block_I_BE2_Block_TypeInfo_12d4dd8) {
        puVar3 = (undefined8 *)(lVar5 + (long)(*piVar9 + 1) * 0x10 + 0x138);
        goto LAB_0060992c;
      }
      uVar8 = uVar8 + 1;
      piVar9 = piVar9 + 4;
    } while (uVar8 < *(ushort *)(lVar5 + 0x12a));
  }
  puVar3 = (undefined8 *)
           native_sub_3c9b34(plVar10,_MG_BlocksEngine2_Block_I_BE2_Block_TypeInfo_12d4dd8,1);
LAB_0060992c:
  iVar2 = (*(code *)*puVar3)(plVar10,puVar3[1]);
  if ((iVar2 != 4) &&
     (uVar8 = native_MG_BlocksEngine2_Utils_BE2_BlockUtils__BlockIsFunction_56f1f0
                        (*(undefined8 *)(param_1 + 0x40),0), (uVar8 & 1) == 0)) {
    lVar5 = *(long *)(param_1 + 0x58);
    if (lVar5 != 0) {
      if (*(int *)(lVar5 + 0x18) == 0) goto LAB_00609ef4;
      plVar10 = *(long **)(param_1 + 0x48);
      if (plVar10 != (long *)0x0) {
        lVar6 = *plVar10;
        uVar1 = *(undefined4 *)(lVar5 + 0x20);
        if ((ulong)*(ushort *)(lVar6 + 0x12a) != 0) {
          uVar8 = 0;
          piVar9 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
          do {
            if (*(long *)(piVar9 + -2) == _MG_BlocksEngine2_Core_I_BE2_BlocksStack_TypeInfo_12d4e10)
            {
              puVar3 = (undefined8 *)(lVar6 + (long)(*piVar9 + 7) * 0x10 + 0x138);
              goto LAB_00609db4;
            }
            uVar8 = uVar8 + 1;
            piVar9 = piVar9 + 4;
          } while (uVar8 < *(ushort *)(lVar6 + 0x12a));
        }
        puVar3 = (undefined8 *)
                 native_sub_3c9b34(plVar10,_MG_BlocksEngine2_Core_I_BE2_BlocksStack_TypeInfo_12d4e10
                                   ,7);
LAB_00609db4:
        (*(code *)*puVar3)(plVar10,uVar1,puVar3[1]);
        plVar10 = *(long **)(param_1 + 0x48);
        if (plVar10 != (long *)0x0) {
          lVar5 = *plVar10;
          if ((ulong)*(ushort *)(lVar5 + 0x12a) != 0) {
            uVar8 = 0;
            piVar9 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
            do {
              if (*(long *)(piVar9 + -2) ==
                  _MG_BlocksEngine2_Core_I_BE2_BlocksStack_TypeInfo_12d4e10) {
                puVar3 = (undefined8 *)(lVar5 + (long)(*piVar9 + 3) * 0x10 + 0x138);
                goto LAB_00609ecc;
              }
              uVar8 = uVar8 + 1;
              piVar9 = piVar9 + 4;
            } while (uVar8 < *(ushort *)(lVar5 + 0x12a));
          }
          puVar3 = (undefined8 *)
                   native_sub_3c9b34(plVar10,
                                     _MG_BlocksEngine2_Core_I_BE2_BlocksStack_TypeInfo_12d4e10,3);
LAB_00609ecc:
          UNRECOVERED_JUMPTABLE = (code *)*puVar3;
          uVar4 = puVar3[1];
          iVar2 = 0;
          goto LAB_00609ed8;
        }
      }
    }
    goto LAB_00609ef0;
  }
  plVar10 = *(long **)(param_1 + 0x48);
  if (plVar10 == (long *)0x0) goto LAB_00609ef0;
  lVar5 = *plVar10;
  if ((ulong)*(ushort *)(lVar5 + 0x12a) != 0) {
    uVar8 = 0;
    piVar9 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
    do {
      if (*(long *)(piVar9 + -2) == _MG_BlocksEngine2_Core_I_BE2_BlocksStack_TypeInfo_12d4e10) {
        puVar3 = (undefined8 *)(lVar5 + (long)(*piVar9 + 4) * 0x10 + 0x138);
        goto LAB_00609b74;
      }
      uVar8 = uVar8 + 1;
      piVar9 = piVar9 + 4;
    } while (uVar8 < *(ushort *)(lVar5 + 0x12a));
  }
  puVar3 = (undefined8 *)
           native_sub_3c9b34(plVar10,_MG_BlocksEngine2_Core_I_BE2_BlocksStack_TypeInfo_12d4e10,4);
LAB_00609b74:
  iVar2 = (*(code *)*puVar3)(plVar10,puVar3[1]);
  lVar5 = *plVar10;
  iVar2 = iVar2 + 1;
  if ((ulong)*(ushort *)(lVar5 + 0x12a) != 0) {
    uVar8 = 0;
    piVar9 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
    do {
      if (*(long *)(piVar9 + -2) == _MG_BlocksEngine2_Core_I_BE2_BlocksStack_TypeInfo_12d4e10)
      goto LAB_00609e7c;
      uVar8 = uVar8 + 1;
      piVar9 = piVar9 + 4;
    } while (uVar8 < *(ushort *)(lVar5 + 0x12a));
  }
LAB_00609e6c:
  puVar3 = (undefined8 *)
           native_sub_3c9b34(plVar10,_MG_BlocksEngine2_Core_I_BE2_BlocksStack_TypeInfo_12d4e10,5);
LAB_00609e8c:
  (*(code *)*puVar3)(plVar10,iVar2,puVar3[1]);
  if ((bRam000000000133ee63 & 1) == 0) {
    native_sub_43273c(&MG_BlocksEngine2_Core_I_BE2_BlocksStack_TypeInfo_12d4e10);
    native_sub_43273c(&MG_BlocksEngine2_Block_Instruction_I_BE2_Instruction_TypeInfo_12d4e28);
    native_sub_43273c(&Method_UnityEngine_Events_UnityEvent_I_BE2_Instruction__Invoke___12de478);
    bRam000000000133ee63 = 1;
  }
  plVar10 = *(long **)(param_1 + 0x48);
  if (plVar10 != (long *)0x0) {
    lVar5 = *plVar10;
    if ((ulong)*(ushort *)(lVar5 + 0x12a) != 0) {
      uVar8 = 0;
      piVar9 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == _MG_BlocksEngine2_Core_I_BE2_BlocksStack_TypeInfo_12d4e10) {
          puVar3 = (undefined8 *)(lVar5 + (long)(*piVar9 + 0xb) * 0x10 + 0x138);
          goto LAB_00611f54;
        }
        uVar8 = uVar8 + 1;
        piVar9 = piVar9 + 4;
      } while (uVar8 < *(ushort *)(lVar5 + 0x12a));
    }
    puVar3 = (undefined8 *)
             native_sub_3c9b34(plVar10,_MG_BlocksEngine2_Core_I_BE2_BlocksStack_TypeInfo_12d4e10,0xb
                              );
LAB_00611f54:
    lVar5 = (*(code *)*puVar3)(plVar10,puVar3[1]);
    if ((lVar5 != 0) &&
       (native_UnityEngine_Events_UnityEvent_BaseEventData___Invoke_8a0108
                  (lVar5,plVar11,
                   _Method_UnityEngine_Events_UnityEvent_I_BE2_Instruction__Invoke___12de478),
       plVar11 != (long *)0x0)) {
      lVar5 = *plVar11;
      if ((ulong)*(ushort *)(lVar5 + 0x12a) != 0) {
        uVar8 = 0;
        piVar9 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(long *)(piVar9 + -2) ==
              _MG_BlocksEngine2_Block_Instruction_I_BE2_Instruction_TypeInfo_12d4e28) {
            puVar3 = (undefined8 *)(lVar5 + (long)(*piVar9 + 3) * 0x10 + 0x138);
            goto LAB_00611fdc;
          }
          uVar8 = uVar8 + 1;
          piVar9 = piVar9 + 4;
        } while (uVar8 < *(ushort *)(lVar5 + 0x12a));
      }
      puVar3 = (undefined8 *)
               native_sub_3c9b34(plVar11,
                                 _MG_BlocksEngine2_Block_Instruction_I_BE2_Instruction_TypeInfo_12d4e28
                                 ,3);
LAB_00611fdc:
                    /* WARNING: Could not recover jumptable at 0x00611ff0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)*puVar3)(plVar11,puVar3[1]);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
LAB_00609e7c:
  puVar3 = (undefined8 *)(lVar5 + (long)(*piVar9 + 5) * 0x10 + 0x138);
  goto LAB_00609e8c;
}



/* BE2_Ins_WhenKeyPressed$$.ctor @ 0x60f878
 * void BE2_Ins_WhenKeyPressed___ctor (BE2_Ins_WhenKeyPressed_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* BE2_Ins_WhenKeyPressed$$.ctor
   void BE2_Ins_WhenKeyPressed___ctor (BE2_Ins_WhenKeyPressed_o* __this, const MethodInfo* method);
    */

undefined1  [16] native_BE2_Ins_WhenKeyPressed___ctor_60f878(ulong param_1)

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



/* BE2_Ins_WhenKeyPressed$$<OnStart>b__1_0 @ 0x60f888
 * void BE2_Ins_WhenKeyPressed___OnStart_b__1_0 (BE2_Ins_WhenKeyPressed_o* __this, int32_t _p0_, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* BE2_Ins_WhenKeyPressed$$<OnStart>b__1_0
   void BE2_Ins_WhenKeyPressed___OnStart_b__1_0 (BE2_Ins_WhenKeyPressed_o* __this, int32_t _p0_,
   const MethodInfo* method); */

void native_BE2_Ins_WhenKeyPressed___OnStart_b__1_0_60f888(long param_1)

{
  float fVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  ulong uVar5;
  int *piVar6;
  long *plVar7;
  long lVar8;
  float fVar9;
  
  if ((bRam000000000133ee4a & 1) == 0) {
    native_sub_43273c(&MG_BlocksEngine2_Core_BE2_InputManager_TypeInfo_12d39e8);
    native_sub_43273c(&MG_BlocksEngine2_Block_I_BE2_BlockSectionHeaderInput_TypeInfo_12d4e00);
    native_sub_43273c(&Method_System_Collections_Generic_List_KeyCode__get_Item___12dcb28);
    bRam000000000133ee4a = 1;
  }
  lVar8 = *(long *)(*(long *)(_MG_BlocksEngine2_Core_BE2_InputManager_TypeInfo_12d39e8 + 0xb8) + 8);
  lVar2 = native_MG_BlocksEngine2_Block_Instruction_BE2_InstructionBase__get_Section0Inputs_603b78
                    (param_1);
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
            puVar3 = (undefined8 *)(lVar2 + (long)(*piVar6 + 2) * 0x10 + 0x138);
            goto LAB_0060f568;
          }
          uVar5 = uVar5 + 1;
          piVar6 = piVar6 + 4;
        } while (uVar5 < *(ushort *)(lVar2 + 0x12a));
      }
      puVar3 = (undefined8 *)
               native_sub_3c9b34(plVar7,
                                 _MG_BlocksEngine2_Block_I_BE2_BlockSectionHeaderInput_TypeInfo_12d4e00
                                 ,2);
LAB_0060f568:
      fVar9 = (float)(*(code *)*puVar3)(plVar7,puVar3[1]);
      if (lVar8 != 0) {
        fVar1 = -fVar9;
        if (fVar9 != INFINITY) {
          fVar1 = fVar9;
        }
        if (*(uint *)(lVar8 + 0x18) <= (uint)(int)fVar1) {
          native_System_ThrowHelper__ThrowArgumentOutOfRangeException_9fe0f4(0);
        }
        *(undefined4 *)(param_1 + 0x80) =
             *(undefined4 *)(*(long *)(lVar8 + 0x10) + (long)(int)fVar1 * 4 + 0x20);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}


