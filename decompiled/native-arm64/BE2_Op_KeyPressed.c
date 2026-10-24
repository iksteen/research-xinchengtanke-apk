/* ARM64 IL2CPP native pseudocode from Ghidra.
 * Recovered implementation, not original C# source.
 * Function boundaries follow the IL2CPP method address table. */


/* BE2_Op_KeyPressed$$OnStart @ 0x614240
 * void BE2_Op_KeyPressed__OnStart (BE2_Op_KeyPressed_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* BE2_Op_KeyPressed$$OnStart
   void BE2_Op_KeyPressed__OnStart (BE2_Op_KeyPressed_o* __this, const MethodInfo* method); */

void native_BE2_Op_KeyPressed__OnStart_614240(long param_1)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  int *piVar11;
  long *plVar12;
  long lVar13;
  long *plVar14;
  ulong uVar15;
  undefined4 uStack_64;
  
  if ((bRam000000000133ee7c & 1) == 0) {
    native_sub_43273c(&MG_BlocksEngine2_Block_I_BE2_BlockSectionHeaderInput_TypeInfo_12d4e00);
    native_sub_43273c(&StringLiteral_A_12ec020);
    bRam000000000133ee7c = 1;
  }
  lVar4 = native_MG_BlocksEngine2_Block_Instruction_BE2_InstructionBase__get_Section0Inputs_603b78
                    (param_1);
  if (lVar4 == 0) {
LAB_00614370:
                    /* WARNING: Subroutine does not return */
    native_sub_432810();
  }
  if (*(int *)(lVar4 + 0x18) == 0) {
    uVar6 = native_sub_43283c();
                    /* WARNING: Subroutine does not return */
    native_sub_4327dc(uVar6,0);
  }
  plVar12 = *(long **)(lVar4 + 0x20);
  if (plVar12 == (long *)0x0) goto LAB_00614370;
  lVar4 = *plVar12;
  if ((ulong)*(ushort *)(lVar4 + 0x12a) != 0) {
    uVar10 = 0;
    piVar11 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
    do {
      if (*(long *)(piVar11 + -2) ==
          _MG_BlocksEngine2_Block_I_BE2_BlockSectionHeaderInput_TypeInfo_12d4e00) {
        puVar5 = (undefined8 *)(lVar4 + (long)*piVar11 * 0x10 + 0x138);
        goto LAB_006142f4;
      }
      uVar10 = uVar10 + 1;
      piVar11 = piVar11 + 4;
    } while (uVar10 < *(ushort *)(lVar4 + 0x12a));
  }
  puVar5 = (undefined8 *)
           native_sub_3c9b34(plVar12,
                             _MG_BlocksEngine2_Block_I_BE2_BlockSectionHeaderInput_TypeInfo_12d4e00,
                             0);
LAB_006142f4:
  uVar6 = (*(code *)*puVar5)(plVar12,puVar5[1]);
  lVar4 = native_MG_BlocksEngine2_Utils_BE2_Dropdown__GetBE2Component_566f34(uVar6,0);
  plVar12 = (long *)(param_1 + 0x78);
  *plVar12 = lVar4;
  native_sub_4326e0(plVar12,lVar4);
  if (*plVar12 == 0) {
    return;
  }
  native_BE2_Op_KeyPressed__PopulateDropdown_614380(param_1);
  lVar4 = *(long *)(param_1 + 0x78);
  if (lVar4 == 0) goto LAB_00614370;
  iVar1 = native_MG_BlocksEngine2_Utils_BE2_Dropdown__GetIndexOf_58082c
                    (lVar4,_StringLiteral_A_12ec020,0);
  if ((bRam000000000133eae8 & 1) == 0) {
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0,iVar1,0);
    bRam000000000133eae8 = 1;
  }
  uVar6 = *(undefined8 *)(lVar4 + 0x20);
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar10 = native_UnityEngine_Object__op_Implicit_8e1b98(uVar6,0);
  if ((uVar10 & 1) != 0) {
    lVar4 = *(long *)(lVar4 + 0x20);
    if (lVar4 == 0) {
LAB_00580b30:
                    /* WARNING: Subroutine does not return */
      native_sub_432810();
    }
    if ((bRam000000000133efe3 & 1) == 0) {
      native_sub_43273c(&
                        Method_System_Collections_Generic_List_TMP_Dropdown_OptionData__get_Count___12dd878
                       );
      native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
      native_sub_43273c(&Method_UnityEngine_Events_UnityEvent_int__Invoke___12de490);
      native_sub_43273c(&StringLiteral_Dropdown_value_12ed888);
      bRam000000000133efe3 = 1;
    }
    uVar10 = native_UnityEngine_Application__get_isPlaying_8d60cc(0);
    if ((uVar10 & 1) != 0) {
      if (*(int *)(lVar4 + 0x128) == iVar1) {
        return;
      }
      if ((*(long *)(lVar4 + 0x130) == 0) ||
         (lVar9 = *(long *)(*(long *)(lVar4 + 0x130) + 0x10), lVar9 == 0)) goto code_r0x00662484;
      if (*(int *)(lVar9 + 0x18) == 0) {
        return;
      }
    }
    uVar6 = *(undefined8 *)(lVar4 + 0x110);
    if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    uVar2 = native_UnityEngine_Object__op_Implicit_8e1b98(uVar6,0);
    if ((*(long *)(lVar4 + 0x130) != 0) &&
       (lVar9 = *(long *)(*(long *)(lVar4 + 0x130) + 0x10), lVar9 != 0)) {
      uVar3 = native_UnityEngine_Mathf__Clamp_8e5208
                        (iVar1,-(uVar2 & 1),*(int *)(lVar9 + 0x18) + -1,0);
      *(undefined4 *)(lVar4 + 0x128) = uVar3;
      native_TMPro_TMP_Dropdown__RefreshShownValue_661eb8(lVar4);
      native_UnityEngine_UISystemProfilerApi__AddMarker_db8894
                (_StringLiteral_Dropdown_value_12ed888,lVar4,0);
      lVar9 = *(long *)(lVar4 + 0x138);
      if (lVar9 != 0) {
        uVar3 = *(undefined4 *)(lVar4 + 0x128);
        goto native_UnityEngine_Events_UnityEvent_int___Invoke_89f660;
      }
    }
code_r0x00662484:
                    /* WARNING: Subroutine does not return */
    native_sub_432810();
  }
  uVar6 = *(undefined8 *)(lVar4 + 0x18);
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar10 = native_UnityEngine_Object__op_Implicit_8e1b98(uVar6,0);
  if ((uVar10 & 1) == 0) {
    return;
  }
  lVar4 = *(long *)(lVar4 + 0x18);
  if (lVar4 == 0) goto LAB_00580b30;
  if ((bRam000000000134033a & 1) == 0) {
    native_sub_43273c(&
                      Method_System_Collections_Generic_List_Dropdown_OptionData__get_Count___12dd710
                     );
    native_sub_43273c(&Method_UnityEngine_Events_UnityEvent_int__Invoke___12de490);
    native_sub_43273c(&StringLiteral_Dropdown_value_12ed888);
    bRam000000000134033a = 1;
  }
  uVar10 = native_UnityEngine_Application__get_isPlaying_8d60cc(0);
  if ((uVar10 & 1) == 0) {
    lVar9 = *(long *)(lVar4 + 0x128);
    if (lVar9 == 0) goto code_r0x007d9dd8;
  }
  else {
    if (*(int *)(lVar4 + 0x120) == iVar1) {
      return;
    }
    lVar9 = *(long *)(lVar4 + 0x128);
    if ((lVar9 == 0) || (*(long *)(lVar9 + 0x10) == 0)) goto code_r0x007d9dd8;
    if (*(int *)(*(long *)(lVar9 + 0x10) + 0x18) == 0) {
      return;
    }
  }
  if (*(long *)(lVar9 + 0x10) == 0) {
code_r0x007d9dd8:
                    /* WARNING: Subroutine does not return */
    native_sub_432810();
  }
  uVar3 = native_UnityEngine_Mathf__Clamp_8e5208
                    (iVar1,0,*(int *)(*(long *)(lVar9 + 0x10) + 0x18) + -1,0);
  *(undefined4 *)(lVar4 + 0x120) = uVar3;
  native_UnityEngine_UI_Dropdown__RefreshShownValue_7d90e8(lVar4);
  native_UnityEngine_UISystemProfilerApi__AddMarker_db8894
            (_StringLiteral_Dropdown_value_12ed888,lVar4,0);
  lVar9 = *(long *)(lVar4 + 0x130);
  if (lVar9 == 0) goto code_r0x007d9dd8;
  uVar3 = *(undefined4 *)(lVar4 + 0x120);
native_UnityEngine_Events_UnityEvent_int___Invoke_89f660:
  lVar4 = _Method_UnityEngine_Events_UnityEvent_int__Invoke___12de490;
  if ((bRam00000000013407ad & 1) == 0) {
    native_sub_43273c(&UnityEngine_Events_InvokableCall_TypeInfo_12d4f78);
    native_sub_43273c(&Method_System_Collections_Generic_List_BaseInvokableCall__get_Count___12dc5d0
                     );
    native_sub_43273c(&Method_System_Collections_Generic_List_BaseInvokableCall__get_Item___12dc5d8)
    ;
    native_sub_43273c(&object___TypeInfo_12d32d8);
    bRam00000000013407ad = 1;
  }
  if ((lVar9 != 0) &&
     (lVar7 = native_UnityEngine_Events_UnityEventBase__PrepareInvoke_773a28(lVar9,0), lVar7 != 0))
  {
    uVar10 = (ulong)*(uint *)(lVar7 + 0x18);
    if (0 < (int)*(uint *)(lVar7 + 0x18)) {
      puVar5 = (undefined8 *)(lVar9 + 0x28);
      lVar9 = 4;
      do {
        uVar15 = lVar9 - 4;
        if ((uVar10 & 0xffffffff) <= uVar15) {
          native_System_ThrowHelper__ThrowArgumentOutOfRangeException_9fe0f4(0);
        }
        lVar13 = *(long *)(*(long *)(*(long *)(lVar4 + 0x18) + 0xc0) + 0x18);
        uVar6 = *(undefined8 *)(*(long *)(lVar7 + 0x10) + lVar9 * 8);
        if ((*(byte *)(lVar13 + 0x132) & 1) == 0) {
          native_sub_3c9850(lVar13);
        }
        plVar12 = (long *)native_sub_4327f8(uVar6,lVar13);
        if (plVar12 == (long *)0x0) {
          if (*(uint *)(lVar7 + 0x18) <= uVar15) {
            native_System_ThrowHelper__ThrowArgumentOutOfRangeException_9fe0f4(0);
          }
          lVar13 = native_sub_4327f8(*(undefined8 *)(*(long *)(lVar7 + 0x10) + lVar9 * 8),
                                     _UnityEngine_Events_InvokableCall_TypeInfo_12d4f78);
          if (lVar13 == 0) {
            if (*(uint *)(lVar7 + 0x18) <= uVar15) {
              native_System_ThrowHelper__ThrowArgumentOutOfRangeException_9fe0f4(0);
            }
            plVar14 = (long *)*puVar5;
            plVar12 = *(long **)(*(long *)(lVar7 + 0x10) + lVar9 * 8);
            if (plVar14 == (long *)0x0) {
              uVar6 = native_sub_432750(_object___TypeInfo_12d32d8,1);
              *puVar5 = uVar6;
              native_sub_4326e0(puVar5,uVar6);
              plVar14 = (long *)*puVar5;
            }
            lVar13 = *(long *)(*(long *)(*(long *)(lVar4 + 0x18) + 0xc0) + 0x38);
            uStack_64 = uVar3;
            if ((*(byte *)(lVar13 + 0x132) & 1) == 0) {
              native_sub_3c9850(lVar13);
            }
            lVar13 = native_sub_4327fc(lVar13,&uStack_64);
            if (plVar14 == (long *)0x0) goto code_r0x0089f890;
            if ((lVar13 != 0) &&
               (lVar8 = native_sub_4327f8(lVar13,*(undefined8 *)(*plVar14 + 0x40)), lVar8 == 0)) {
              uVar6 = native_sub_432830();
                    /* WARNING: Subroutine does not return */
              native_sub_4327dc(uVar6,0);
            }
            if ((int)plVar14[3] == 0) {
              uVar6 = native_sub_43283c();
                    /* WARNING: Subroutine does not return */
              native_sub_4327dc(uVar6,0);
            }
            plVar14[4] = lVar13;
            native_sub_4326e0(plVar14 + 4,lVar13);
            if (plVar12 == (long *)0x0) goto code_r0x0089f890;
            (**(code **)(*plVar12 + 0x178))(plVar12,*puVar5,*(undefined8 *)(*plVar12 + 0x180));
          }
          else {
            native_UnityEngine_Events_InvokableCall__Invoke_8df658(lVar13,0);
          }
        }
        else {
          (**(code **)(*plVar12 + 0x198))(plVar12,uVar3,*(undefined8 *)(*plVar12 + 0x1a0));
        }
        uVar10 = (ulong)*(int *)(lVar7 + 0x18);
        lVar13 = lVar9 + -3;
        lVar9 = lVar9 + 1;
      } while (lVar13 < (long)uVar10);
    }
    return;
  }
code_r0x0089f890:
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* BE2_Op_KeyPressed$$PopulateDropdown @ 0x614380
 * void BE2_Op_KeyPressed__PopulateDropdown (BE2_Op_KeyPressed_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* BE2_Op_KeyPressed$$PopulateDropdown
   void BE2_Op_KeyPressed__PopulateDropdown (BE2_Op_KeyPressed_o* __this, const MethodInfo* method);
    */

void native_BE2_Op_KeyPressed__PopulateDropdown_614380(long param_1)

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
  
  if ((bRam000000000133ee7d & 1) == 0) {
    native_sub_43273c(&System_Enum_TypeInfo_12d4550);
    native_sub_43273c(&UnityEngine_KeyCode_var_12d1638);
    native_sub_43273c(&System_Type_TypeInfo_12d6340);
    bRam000000000133ee7d = 1;
  }
  if (*(long *)(param_1 + 0x78) == 0) {
LAB_006144b0:
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
  if (lVar5 == 0) goto LAB_006144b0;
  if (0 < (int)*(ulong *)(lVar5 + 0x18)) {
    uVar9 = 0;
    uVar7 = *(ulong *)(lVar5 + 0x18) & 0xffffffff;
    do {
      if (uVar7 <= uVar9) {
        uVar4 = native_sub_43283c();
                    /* WARNING: Subroutine does not return */
        native_sub_4327dc(uVar4,0);
      }
      if (*(long *)(param_1 + 0x78) == 0) goto LAB_006144b0;
      native_MG_BlocksEngine2_Utils_BE2_Dropdown__AddOption_580570
                (*(long *)(param_1 + 0x78),*(undefined8 *)(lVar5 + 0x20 + uVar9 * 8),0);
      uVar7 = (ulong)*(uint *)(lVar5 + 0x18);
      uVar9 = uVar9 + 1;
    } while ((long)uVar9 < (long)(int)*(uint *)(lVar5 + 0x18));
  }
  lVar5 = *(long *)(param_1 + 0x78);
  if (lVar5 == 0) goto LAB_006144b0;
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



/* BE2_Op_KeyPressed$$Operation @ 0x6144c0
 * System_String_o* BE2_Op_KeyPressed__Operation (BE2_Op_KeyPressed_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* BE2_Op_KeyPressed$$Operation
   System_String_o* BE2_Op_KeyPressed__Operation (BE2_Op_KeyPressed_o* __this, const MethodInfo*
   method); */

undefined8 native_BE2_Op_KeyPressed__Operation_6144c0(undefined8 param_1)

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
  
  if ((bRam000000000133ee7e & 1) == 0) {
    native_sub_43273c(&MG_BlocksEngine2_Core_BE2_InputManager_TypeInfo_12d39e8);
    native_sub_43273c(&MG_BlocksEngine2_Block_I_BE2_BlockSectionHeaderInput_TypeInfo_12d4e00);
    native_sub_43273c(&Method_System_Collections_Generic_List_KeyCode__get_Item___12dcb28);
    native_sub_43273c(&StringLiteral_1_12eb968);
    native_sub_43273c(&StringLiteral_0_12eb8d8);
    bRam000000000133ee7e = 1;
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
            goto LAB_006145b0;
          }
          uVar5 = uVar5 + 1;
          piVar6 = piVar6 + 4;
        } while (uVar5 < *(ushort *)(lVar2 + 0x12a));
      }
      puVar3 = (undefined8 *)
               native_sub_3c9b34(plVar7,
                                 _MG_BlocksEngine2_Block_I_BE2_BlockSectionHeaderInput_TypeInfo_12d4e00
                                 ,2);
LAB_006145b0:
      fVar9 = (float)(*(code *)*puVar3)(plVar7,puVar3[1]);
      if (lVar8 != 0) {
        fVar1 = -fVar9;
        if (fVar9 != INFINITY) {
          fVar1 = fVar9;
        }
        if (*(uint *)(lVar8 + 0x18) <= (uint)(int)fVar1) {
          native_System_ThrowHelper__ThrowArgumentOutOfRangeException_9fe0f4(0);
        }
        uVar5 = native_UnityEngine_Input__GetKey_dbdbe4
                          (*(undefined4 *)(*(long *)(lVar8 + 0x10) + (long)(int)fVar1 * 4 + 0x20),0)
        ;
        puVar3 = (undefined8 *)&StringLiteral_1_12eb968;
        if ((uVar5 & 1) == 0) {
          puVar3 = (undefined8 *)&StringLiteral_0_12eb8d8;
        }
        return *puVar3;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* BE2_Op_KeyPressed$$.ctor @ 0x61463c
 * void BE2_Op_KeyPressed___ctor (BE2_Op_KeyPressed_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* BE2_Op_KeyPressed$$.ctor
   void BE2_Op_KeyPressed___ctor (BE2_Op_KeyPressed_o* __this, const MethodInfo* method); */

undefined1  [16] native_BE2_Op_KeyPressed___ctor_61463c(ulong param_1)

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


