/* ARM64 IL2CPP native pseudocode from Ghidra.
 * Recovered implementation, not original C# source.
 * Function boundaries follow the IL2CPP method address table. */


/* BE2_Ins_PlaySound$$PopulateDropdown @ 0x60ac38
 * void BE2_Ins_PlaySound__PopulateDropdown (BE2_Ins_PlaySound_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* BE2_Ins_PlaySound$$PopulateDropdown
   void BE2_Ins_PlaySound__PopulateDropdown (BE2_Ins_PlaySound_o* __this, const MethodInfo* method);
    */

void native_BE2_Ins_PlaySound__PopulateDropdown_60ac38(long param_1)

{
  undefined8 *puVar1;
  uint uVar2;
  undefined4 uVar3;
  ulong uVar4;
  long lVar5;
  undefined8 uVar6;
  long *plVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  uint uVar11;
  long lVar12;
  long *plVar13;
  ulong uVar14;
  undefined4 uStack_64;
  
  if ((bRam000000000133ee1f & 1) == 0) {
    native_sub_43273c(&MG_BlocksEngine2_Environment_BE2_AudioManager_TypeInfo_12d3968);
    bRam000000000133ee1f = 1;
  }
  if (*(long *)(param_1 + 0x78) == 0) {
LAB_0060ad34:
                    /* WARNING: Subroutine does not return */
    native_sub_432810();
  }
  native_MG_BlocksEngine2_Utils_BE2_Dropdown__ClearOptions_580490(*(long *)(param_1 + 0x78),0);
  if ((**(long **)(_MG_BlocksEngine2_Environment_BE2_AudioManager_TypeInfo_12d3968 + 0xb8) == 0) ||
     (lVar10 = *(long *)(**(long **)(_MG_BlocksEngine2_Environment_BE2_AudioManager_TypeInfo_12d3968
                                    + 0xb8) + 0x18), lVar10 == 0)) goto LAB_0060ad34;
  uVar2 = *(uint *)(lVar10 + 0x18);
  if (0 < (int)uVar2) {
    uVar11 = 0;
    do {
      if (uVar2 <= uVar11) {
        uVar6 = native_sub_43283c();
                    /* WARNING: Subroutine does not return */
        native_sub_4327dc(uVar6,0);
      }
      lVar5 = *(long *)(lVar10 + (long)(int)uVar11 * 8 + 0x20);
      if (lVar5 == 0) goto LAB_0060ad34;
      lVar9 = *(long *)(param_1 + 0x78);
      uVar6 = native_UnityEngine_Object__get_name_8e8098(lVar5,0);
      if (lVar9 == 0) goto LAB_0060ad34;
      native_MG_BlocksEngine2_Utils_BE2_Dropdown__AddOption_580570(lVar9,uVar6,0);
      uVar2 = *(uint *)(lVar10 + 0x18);
      uVar11 = uVar11 + 1;
    } while ((int)uVar11 < (int)uVar2);
  }
  if (*(long *)(param_1 + 0x78) == 0) goto LAB_0060ad34;
  native_MG_BlocksEngine2_Utils_BE2_Dropdown__set_value_580a48(*(long *)(param_1 + 0x78),1,0);
  if (*(long *)(param_1 + 0x78) == 0) goto LAB_0060ad34;
  native_MG_BlocksEngine2_Utils_BE2_Dropdown__RefreshShownValue_580b34(*(long *)(param_1 + 0x78),0);
  lVar10 = *(long *)(param_1 + 0x78);
  if (lVar10 == 0) goto LAB_0060ad34;
  if ((bRam000000000133eae8 & 1) == 0) {
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0,0,0);
    bRam000000000133eae8 = 1;
  }
  uVar6 = *(undefined8 *)(lVar10 + 0x20);
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar4 = native_UnityEngine_Object__op_Implicit_8e1b98(uVar6,0);
  if ((uVar4 & 1) != 0) {
    lVar10 = *(long *)(lVar10 + 0x20);
    if (lVar10 == 0) {
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
    uVar4 = native_UnityEngine_Application__get_isPlaying_8d60cc(0);
    if ((uVar4 & 1) != 0) {
      if (*(int *)(lVar10 + 0x128) == 0) {
        return;
      }
      if ((*(long *)(lVar10 + 0x130) == 0) ||
         (lVar5 = *(long *)(*(long *)(lVar10 + 0x130) + 0x10), lVar5 == 0)) goto code_r0x00662484;
      if (*(int *)(lVar5 + 0x18) == 0) {
        return;
      }
    }
    uVar6 = *(undefined8 *)(lVar10 + 0x110);
    if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    uVar2 = native_UnityEngine_Object__op_Implicit_8e1b98(uVar6,0);
    if ((*(long *)(lVar10 + 0x130) != 0) &&
       (lVar5 = *(long *)(*(long *)(lVar10 + 0x130) + 0x10), lVar5 != 0)) {
      uVar3 = native_UnityEngine_Mathf__Clamp_8e5208(0,-(uVar2 & 1),*(int *)(lVar5 + 0x18) + -1,0);
      *(undefined4 *)(lVar10 + 0x128) = uVar3;
      native_TMPro_TMP_Dropdown__RefreshShownValue_661eb8(lVar10);
      native_UnityEngine_UISystemProfilerApi__AddMarker_db8894
                (_StringLiteral_Dropdown_value_12ed888,lVar10,0);
      lVar5 = *(long *)(lVar10 + 0x138);
      if (lVar5 != 0) {
        uVar3 = *(undefined4 *)(lVar10 + 0x128);
        goto native_UnityEngine_Events_UnityEvent_int___Invoke_89f660;
      }
    }
code_r0x00662484:
                    /* WARNING: Subroutine does not return */
    native_sub_432810();
  }
  uVar6 = *(undefined8 *)(lVar10 + 0x18);
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar4 = native_UnityEngine_Object__op_Implicit_8e1b98(uVar6,0);
  if ((uVar4 & 1) == 0) {
    return;
  }
  lVar10 = *(long *)(lVar10 + 0x18);
  if (lVar10 == 0) goto LAB_00580b30;
  if ((bRam000000000134033a & 1) == 0) {
    native_sub_43273c(&
                      Method_System_Collections_Generic_List_Dropdown_OptionData__get_Count___12dd710
                     );
    native_sub_43273c(&Method_UnityEngine_Events_UnityEvent_int__Invoke___12de490);
    native_sub_43273c(&StringLiteral_Dropdown_value_12ed888);
    bRam000000000134033a = 1;
  }
  uVar4 = native_UnityEngine_Application__get_isPlaying_8d60cc(0);
  if ((uVar4 & 1) == 0) {
    lVar5 = *(long *)(lVar10 + 0x128);
    if (lVar5 == 0) goto code_r0x007d9dd8;
  }
  else {
    if (*(int *)(lVar10 + 0x120) == 0) {
      return;
    }
    lVar5 = *(long *)(lVar10 + 0x128);
    if ((lVar5 == 0) || (*(long *)(lVar5 + 0x10) == 0)) goto code_r0x007d9dd8;
    if (*(int *)(*(long *)(lVar5 + 0x10) + 0x18) == 0) {
      return;
    }
  }
  if (*(long *)(lVar5 + 0x10) == 0) {
code_r0x007d9dd8:
                    /* WARNING: Subroutine does not return */
    native_sub_432810();
  }
  uVar3 = native_UnityEngine_Mathf__Clamp_8e5208
                    (0,0,*(int *)(*(long *)(lVar5 + 0x10) + 0x18) + -1,0);
  *(undefined4 *)(lVar10 + 0x120) = uVar3;
  native_UnityEngine_UI_Dropdown__RefreshShownValue_7d90e8(lVar10);
  native_UnityEngine_UISystemProfilerApi__AddMarker_db8894
            (_StringLiteral_Dropdown_value_12ed888,lVar10,0);
  lVar5 = *(long *)(lVar10 + 0x130);
  if (lVar5 == 0) goto code_r0x007d9dd8;
  uVar3 = *(undefined4 *)(lVar10 + 0x120);
native_UnityEngine_Events_UnityEvent_int___Invoke_89f660:
  lVar10 = _Method_UnityEngine_Events_UnityEvent_int__Invoke___12de490;
  if ((bRam00000000013407ad & 1) == 0) {
    native_sub_43273c(&UnityEngine_Events_InvokableCall_TypeInfo_12d4f78);
    native_sub_43273c(&Method_System_Collections_Generic_List_BaseInvokableCall__get_Count___12dc5d0
                     );
    native_sub_43273c(&Method_System_Collections_Generic_List_BaseInvokableCall__get_Item___12dc5d8)
    ;
    native_sub_43273c(&object___TypeInfo_12d32d8);
    bRam00000000013407ad = 1;
  }
  if ((lVar5 != 0) &&
     (lVar9 = native_UnityEngine_Events_UnityEventBase__PrepareInvoke_773a28(lVar5,0), lVar9 != 0))
  {
    uVar4 = (ulong)*(uint *)(lVar9 + 0x18);
    if (0 < (int)*(uint *)(lVar9 + 0x18)) {
      puVar1 = (undefined8 *)(lVar5 + 0x28);
      lVar5 = 4;
      do {
        uVar14 = lVar5 - 4;
        if ((uVar4 & 0xffffffff) <= uVar14) {
          native_System_ThrowHelper__ThrowArgumentOutOfRangeException_9fe0f4(0);
        }
        lVar12 = *(long *)(*(long *)(*(long *)(lVar10 + 0x18) + 0xc0) + 0x18);
        uVar6 = *(undefined8 *)(*(long *)(lVar9 + 0x10) + lVar5 * 8);
        if ((*(byte *)(lVar12 + 0x132) & 1) == 0) {
          native_sub_3c9850(lVar12);
        }
        plVar7 = (long *)native_sub_4327f8(uVar6,lVar12);
        if (plVar7 == (long *)0x0) {
          if (*(uint *)(lVar9 + 0x18) <= uVar14) {
            native_System_ThrowHelper__ThrowArgumentOutOfRangeException_9fe0f4(0);
          }
          lVar12 = native_sub_4327f8(*(undefined8 *)(*(long *)(lVar9 + 0x10) + lVar5 * 8),
                                     _UnityEngine_Events_InvokableCall_TypeInfo_12d4f78);
          if (lVar12 == 0) {
            if (*(uint *)(lVar9 + 0x18) <= uVar14) {
              native_System_ThrowHelper__ThrowArgumentOutOfRangeException_9fe0f4(0);
            }
            plVar13 = (long *)*puVar1;
            plVar7 = *(long **)(*(long *)(lVar9 + 0x10) + lVar5 * 8);
            if (plVar13 == (long *)0x0) {
              uVar6 = native_sub_432750(_object___TypeInfo_12d32d8,1);
              *puVar1 = uVar6;
              native_sub_4326e0(puVar1,uVar6);
              plVar13 = (long *)*puVar1;
            }
            lVar12 = *(long *)(*(long *)(*(long *)(lVar10 + 0x18) + 0xc0) + 0x38);
            uStack_64 = uVar3;
            if ((*(byte *)(lVar12 + 0x132) & 1) == 0) {
              native_sub_3c9850(lVar12);
            }
            lVar12 = native_sub_4327fc(lVar12,&uStack_64);
            if (plVar13 == (long *)0x0) goto code_r0x0089f890;
            if ((lVar12 != 0) &&
               (lVar8 = native_sub_4327f8(lVar12,*(undefined8 *)(*plVar13 + 0x40)), lVar8 == 0)) {
              uVar6 = native_sub_432830();
                    /* WARNING: Subroutine does not return */
              native_sub_4327dc(uVar6,0);
            }
            if ((int)plVar13[3] == 0) {
              uVar6 = native_sub_43283c();
                    /* WARNING: Subroutine does not return */
              native_sub_4327dc(uVar6,0);
            }
            plVar13[4] = lVar12;
            native_sub_4326e0(plVar13 + 4,lVar12);
            if (plVar7 == (long *)0x0) goto code_r0x0089f890;
            (**(code **)(*plVar7 + 0x178))(plVar7,*puVar1,*(undefined8 *)(*plVar7 + 0x180));
          }
          else {
            native_UnityEngine_Events_InvokableCall__Invoke_8df658(lVar12,0);
          }
        }
        else {
          (**(code **)(*plVar7 + 0x198))(plVar7,uVar3,*(undefined8 *)(*plVar7 + 0x1a0));
        }
        uVar4 = (ulong)*(int *)(lVar9 + 0x18);
        lVar12 = lVar5 + -3;
        lVar5 = lVar5 + 1;
      } while (lVar12 < (long)uVar4);
    }
    return;
  }
code_r0x0089f890:
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* BE2_Ins_PlaySound$$OnStart @ 0x60ad44
 * void BE2_Ins_PlaySound__OnStart (BE2_Ins_PlaySound_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* BE2_Ins_PlaySound$$OnStart
   void BE2_Ins_PlaySound__OnStart (BE2_Ins_PlaySound_o* __this, const MethodInfo* method); */

void native_BE2_Ins_PlaySound__OnStart_60ad44(long param_1)

{
  uint uVar1;
  undefined4 uVar2;
  long lVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  long lVar7;
  ulong uVar8;
  int *piVar9;
  long lVar10;
  long *plVar11;
  uint uVar12;
  long lVar13;
  long *plVar14;
  ulong uVar15;
  undefined4 uStack_64;
  
  if ((bRam000000000133ee20 & 1) == 0) {
    native_sub_43273c(&MG_BlocksEngine2_Block_I_BE2_BlockSectionHeaderInput_TypeInfo_12d4e00);
    bRam000000000133ee20 = 1;
  }
  lVar4 = native_MG_BlocksEngine2_Block_Instruction_BE2_InstructionBase__GetSectionInputs_60366c
                    (param_1,0);
  if (lVar4 == 0) {
LAB_0060ae3c:
                    /* WARNING: Subroutine does not return */
    native_sub_432810();
  }
  if (*(int *)(lVar4 + 0x18) == 0) {
    uVar6 = native_sub_43283c();
                    /* WARNING: Subroutine does not return */
    native_sub_4327dc(uVar6,0);
  }
  plVar11 = *(long **)(lVar4 + 0x20);
  if (plVar11 == (long *)0x0) goto LAB_0060ae3c;
  lVar4 = *plVar11;
  if ((ulong)*(ushort *)(lVar4 + 0x12a) != 0) {
    uVar8 = 0;
    piVar9 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
    do {
      if (*(long *)(piVar9 + -2) ==
          _MG_BlocksEngine2_Block_I_BE2_BlockSectionHeaderInput_TypeInfo_12d4e00) {
        puVar5 = (undefined8 *)(lVar4 + (long)*piVar9 * 0x10 + 0x138);
        goto LAB_0060adf0;
      }
      uVar8 = uVar8 + 1;
      piVar9 = piVar9 + 4;
    } while (uVar8 < *(ushort *)(lVar4 + 0x12a));
  }
  puVar5 = (undefined8 *)
           native_sub_3c9b34(plVar11,
                             _MG_BlocksEngine2_Block_I_BE2_BlockSectionHeaderInput_TypeInfo_12d4e00,
                             0);
LAB_0060adf0:
  uVar6 = (*(code *)*puVar5)(plVar11,puVar5[1]);
  lVar4 = native_MG_BlocksEngine2_Utils_BE2_Dropdown__GetBE2Component_566f34(uVar6,0);
  plVar11 = (long *)(param_1 + 0x78);
  *plVar11 = lVar4;
  native_sub_4326e0(plVar11,lVar4);
  if (*plVar11 == 0) {
    return;
  }
  if ((bRam000000000133ee1f & 1) == 0) {
    native_sub_43273c(&MG_BlocksEngine2_Environment_BE2_AudioManager_TypeInfo_12d3968);
    bRam000000000133ee1f = 1;
  }
  if (*(long *)(param_1 + 0x78) == 0) {
LAB_0060ad34:
                    /* WARNING: Subroutine does not return */
    native_sub_432810();
  }
  native_MG_BlocksEngine2_Utils_BE2_Dropdown__ClearOptions_580490(*(long *)(param_1 + 0x78),0);
  if ((**(long **)(_MG_BlocksEngine2_Environment_BE2_AudioManager_TypeInfo_12d3968 + 0xb8) == 0) ||
     (lVar4 = *(long *)(**(long **)(_MG_BlocksEngine2_Environment_BE2_AudioManager_TypeInfo_12d3968
                                   + 0xb8) + 0x18), lVar4 == 0)) goto LAB_0060ad34;
  uVar1 = *(uint *)(lVar4 + 0x18);
  if (0 < (int)uVar1) {
    uVar12 = 0;
    do {
      if (uVar1 <= uVar12) {
        uVar6 = native_sub_43283c();
                    /* WARNING: Subroutine does not return */
        native_sub_4327dc(uVar6,0);
      }
      lVar3 = *(long *)(lVar4 + (long)(int)uVar12 * 8 + 0x20);
      if (lVar3 == 0) goto LAB_0060ad34;
      lVar10 = *(long *)(param_1 + 0x78);
      uVar6 = native_UnityEngine_Object__get_name_8e8098(lVar3,0);
      if (lVar10 == 0) goto LAB_0060ad34;
      native_MG_BlocksEngine2_Utils_BE2_Dropdown__AddOption_580570(lVar10,uVar6,0);
      uVar1 = *(uint *)(lVar4 + 0x18);
      uVar12 = uVar12 + 1;
    } while ((int)uVar12 < (int)uVar1);
  }
  if (*(long *)(param_1 + 0x78) == 0) goto LAB_0060ad34;
  native_MG_BlocksEngine2_Utils_BE2_Dropdown__set_value_580a48(*(long *)(param_1 + 0x78),1,0);
  if (*(long *)(param_1 + 0x78) == 0) goto LAB_0060ad34;
  native_MG_BlocksEngine2_Utils_BE2_Dropdown__RefreshShownValue_580b34(*(long *)(param_1 + 0x78),0);
  lVar4 = *(long *)(param_1 + 0x78);
  if (lVar4 == 0) goto LAB_0060ad34;
  if ((bRam000000000133eae8 & 1) == 0) {
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0,0,0);
    bRam000000000133eae8 = 1;
  }
  uVar6 = *(undefined8 *)(lVar4 + 0x20);
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar8 = native_UnityEngine_Object__op_Implicit_8e1b98(uVar6,0);
  if ((uVar8 & 1) != 0) {
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
    uVar8 = native_UnityEngine_Application__get_isPlaying_8d60cc(0);
    if ((uVar8 & 1) != 0) {
      if (*(int *)(lVar4 + 0x128) == 0) {
        return;
      }
      if ((*(long *)(lVar4 + 0x130) == 0) ||
         (lVar3 = *(long *)(*(long *)(lVar4 + 0x130) + 0x10), lVar3 == 0)) goto code_r0x00662484;
      if (*(int *)(lVar3 + 0x18) == 0) {
        return;
      }
    }
    uVar6 = *(undefined8 *)(lVar4 + 0x110);
    if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    uVar1 = native_UnityEngine_Object__op_Implicit_8e1b98(uVar6,0);
    if ((*(long *)(lVar4 + 0x130) != 0) &&
       (lVar3 = *(long *)(*(long *)(lVar4 + 0x130) + 0x10), lVar3 != 0)) {
      uVar2 = native_UnityEngine_Mathf__Clamp_8e5208(0,-(uVar1 & 1),*(int *)(lVar3 + 0x18) + -1,0);
      *(undefined4 *)(lVar4 + 0x128) = uVar2;
      native_TMPro_TMP_Dropdown__RefreshShownValue_661eb8(lVar4);
      native_UnityEngine_UISystemProfilerApi__AddMarker_db8894
                (_StringLiteral_Dropdown_value_12ed888,lVar4,0);
      lVar3 = *(long *)(lVar4 + 0x138);
      if (lVar3 != 0) {
        uVar2 = *(undefined4 *)(lVar4 + 0x128);
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
  uVar8 = native_UnityEngine_Object__op_Implicit_8e1b98(uVar6,0);
  if ((uVar8 & 1) == 0) {
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
  uVar8 = native_UnityEngine_Application__get_isPlaying_8d60cc(0);
  if ((uVar8 & 1) == 0) {
    lVar3 = *(long *)(lVar4 + 0x128);
    if (lVar3 == 0) goto code_r0x007d9dd8;
  }
  else {
    if (*(int *)(lVar4 + 0x120) == 0) {
      return;
    }
    lVar3 = *(long *)(lVar4 + 0x128);
    if ((lVar3 == 0) || (*(long *)(lVar3 + 0x10) == 0)) goto code_r0x007d9dd8;
    if (*(int *)(*(long *)(lVar3 + 0x10) + 0x18) == 0) {
      return;
    }
  }
  if (*(long *)(lVar3 + 0x10) == 0) {
code_r0x007d9dd8:
                    /* WARNING: Subroutine does not return */
    native_sub_432810();
  }
  uVar2 = native_UnityEngine_Mathf__Clamp_8e5208
                    (0,0,*(int *)(*(long *)(lVar3 + 0x10) + 0x18) + -1,0);
  *(undefined4 *)(lVar4 + 0x120) = uVar2;
  native_UnityEngine_UI_Dropdown__RefreshShownValue_7d90e8(lVar4);
  native_UnityEngine_UISystemProfilerApi__AddMarker_db8894
            (_StringLiteral_Dropdown_value_12ed888,lVar4,0);
  lVar3 = *(long *)(lVar4 + 0x130);
  if (lVar3 == 0) goto code_r0x007d9dd8;
  uVar2 = *(undefined4 *)(lVar4 + 0x120);
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
  if ((lVar3 != 0) &&
     (lVar10 = native_UnityEngine_Events_UnityEventBase__PrepareInvoke_773a28(lVar3,0), lVar10 != 0)
     ) {
    uVar8 = (ulong)*(uint *)(lVar10 + 0x18);
    if (0 < (int)*(uint *)(lVar10 + 0x18)) {
      puVar5 = (undefined8 *)(lVar3 + 0x28);
      lVar3 = 4;
      do {
        uVar15 = lVar3 - 4;
        if ((uVar8 & 0xffffffff) <= uVar15) {
          native_System_ThrowHelper__ThrowArgumentOutOfRangeException_9fe0f4(0);
        }
        lVar13 = *(long *)(*(long *)(*(long *)(lVar4 + 0x18) + 0xc0) + 0x18);
        uVar6 = *(undefined8 *)(*(long *)(lVar10 + 0x10) + lVar3 * 8);
        if ((*(byte *)(lVar13 + 0x132) & 1) == 0) {
          native_sub_3c9850(lVar13);
        }
        plVar11 = (long *)native_sub_4327f8(uVar6,lVar13);
        if (plVar11 == (long *)0x0) {
          if (*(uint *)(lVar10 + 0x18) <= uVar15) {
            native_System_ThrowHelper__ThrowArgumentOutOfRangeException_9fe0f4(0);
          }
          lVar13 = native_sub_4327f8(*(undefined8 *)(*(long *)(lVar10 + 0x10) + lVar3 * 8),
                                     _UnityEngine_Events_InvokableCall_TypeInfo_12d4f78);
          if (lVar13 == 0) {
            if (*(uint *)(lVar10 + 0x18) <= uVar15) {
              native_System_ThrowHelper__ThrowArgumentOutOfRangeException_9fe0f4(0);
            }
            plVar14 = (long *)*puVar5;
            plVar11 = *(long **)(*(long *)(lVar10 + 0x10) + lVar3 * 8);
            if (plVar14 == (long *)0x0) {
              uVar6 = native_sub_432750(_object___TypeInfo_12d32d8,1);
              *puVar5 = uVar6;
              native_sub_4326e0(puVar5,uVar6);
              plVar14 = (long *)*puVar5;
            }
            lVar13 = *(long *)(*(long *)(*(long *)(lVar4 + 0x18) + 0xc0) + 0x38);
            uStack_64 = uVar2;
            if ((*(byte *)(lVar13 + 0x132) & 1) == 0) {
              native_sub_3c9850(lVar13);
            }
            lVar13 = native_sub_4327fc(lVar13,&uStack_64);
            if (plVar14 == (long *)0x0) goto code_r0x0089f890;
            if ((lVar13 != 0) &&
               (lVar7 = native_sub_4327f8(lVar13,*(undefined8 *)(*plVar14 + 0x40)), lVar7 == 0)) {
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
            if (plVar11 == (long *)0x0) goto code_r0x0089f890;
            (**(code **)(*plVar11 + 0x178))(plVar11,*puVar5,*(undefined8 *)(*plVar11 + 0x180));
          }
          else {
            native_UnityEngine_Events_InvokableCall__Invoke_8df658(lVar13,0);
          }
        }
        else {
          (**(code **)(*plVar11 + 0x198))(plVar11,uVar2,*(undefined8 *)(*plVar11 + 0x1a0));
        }
        uVar8 = (ulong)*(int *)(lVar10 + 0x18);
        lVar13 = lVar3 + -3;
        lVar3 = lVar3 + 1;
      } while (lVar13 < (long)uVar8);
    }
    return;
  }
code_r0x0089f890:
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* BE2_Ins_PlaySound$$Function @ 0x60ae4c
 * void BE2_Ins_PlaySound__Function (BE2_Ins_PlaySound_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* BE2_Ins_PlaySound$$Function
   void BE2_Ins_PlaySound__Function (BE2_Ins_PlaySound_o* __this, const MethodInfo* method); */

void native_BE2_Ins_PlaySound__Function_60ae4c(long param_1)

{
  int iVar1;
  undefined4 uVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  code *UNRECOVERED_JUMPTABLE;
  long lVar6;
  ulong uVar7;
  int *piVar8;
  long *plVar9;
  long *plVar10;
  
  if ((bRam000000000133ee21 & 1) == 0) {
    native_sub_43273c(&MG_BlocksEngine2_Environment_BE2_AudioManager_TypeInfo_12d3968);
    native_sub_43273c(&MG_BlocksEngine2_Block_I_BE2_BlockSectionHeaderInput_TypeInfo_12d4e00);
    bRam000000000133ee21 = 1;
  }
  lVar3 = native_MG_BlocksEngine2_Block_Instruction_BE2_InstructionBase__get_Section0Inputs_603b78
                    (param_1);
  if (lVar3 == 0) {
LAB_0060af70:
                    /* WARNING: Subroutine does not return */
    native_sub_432810();
  }
  if (*(int *)(lVar3 + 0x18) == 0) {
    uVar5 = native_sub_43283c();
                    /* WARNING: Subroutine does not return */
    native_sub_4327dc(uVar5,0);
  }
  plVar9 = *(long **)(lVar3 + 0x20);
  if (plVar9 == (long *)0x0) goto LAB_0060af70;
  lVar3 = *plVar9;
  if ((ulong)*(ushort *)(lVar3 + 0x12a) != 0) {
    uVar7 = 0;
    piVar8 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
    do {
      if (*(long *)(piVar8 + -2) ==
          _MG_BlocksEngine2_Block_I_BE2_BlockSectionHeaderInput_TypeInfo_12d4e00) {
        puVar4 = (undefined8 *)(lVar3 + (long)(*piVar8 + 3) * 0x10 + 0x138);
        goto LAB_0060af04;
      }
      uVar7 = uVar7 + 1;
      piVar8 = piVar8 + 4;
    } while (uVar7 < *(ushort *)(lVar3 + 0x12a));
  }
  puVar4 = (undefined8 *)
           native_sub_3c9b34(plVar9,
                             _MG_BlocksEngine2_Block_I_BE2_BlockSectionHeaderInput_TypeInfo_12d4e00,
                             3);
LAB_0060af04:
  uVar5 = (*(code *)*puVar4)(plVar9,puVar4[1]);
  puVar4 = (undefined8 *)(param_1 + 0x80);
  *puVar4 = uVar5;
  native_sub_4326e0(puVar4,uVar5);
  if (*(long *)(param_1 + 0x78) == 0) goto LAB_0060af70;
  uVar2 = native_MG_BlocksEngine2_Utils_BE2_Dropdown__GetIndexOf_58082c
                    (*(long *)(param_1 + 0x78),*puVar4,0);
  if (**(long **)(_MG_BlocksEngine2_Environment_BE2_AudioManager_TypeInfo_12d3968 + 0xb8) == 0)
  goto LAB_0060af70;
  native_MG_BlocksEngine2_Environment_BE2_AudioManager__PlaySound_562f48
            (**(long **)(_MG_BlocksEngine2_Environment_BE2_AudioManager_TypeInfo_12d3968 + 0xb8),
             uVar2,0);
  if ((bRam000000000133ee62 & 1) == 0) {
    native_sub_43273c(&MG_BlocksEngine2_Block_I_BE2_Block_TypeInfo_12d4dd8);
    native_sub_43273c(&MG_BlocksEngine2_Core_I_BE2_BlocksStack_TypeInfo_12d4e10);
    native_sub_43273c(&MG_BlocksEngine2_Block_Instruction_I_BE2_InstructionBase_TypeInfo_12d4e30);
    native_sub_43273c(&MG_BlocksEngine2_Block_Instruction_I_BE2_Instruction_TypeInfo_12d4e28);
    bRam000000000133ee62 = 1;
  }
  plVar9 = *(long **)(param_1 + 0x48);
  if (plVar9 == (long *)0x0) goto LAB_006048fc;
  lVar3 = *plVar9;
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
           native_sub_3c9b34(plVar9,_MG_BlocksEngine2_Core_I_BE2_BlocksStack_TypeInfo_12d4e10,9);
LAB_00603cfc:
  lVar3 = (*(code *)*puVar4)(plVar9,puVar4[1]);
  if (lVar3 == 0) goto LAB_006048fc;
  iVar1 = *(int *)(param_1 + 0x30);
  plVar9 = *(long **)(param_1 + 0x48);
  if (*(int *)(lVar3 + 0x18) <= iVar1) {
    if (plVar9 == (long *)0x0) goto LAB_006048fc;
    lVar3 = *plVar9;
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
             native_sub_3c9b34(plVar9,_MG_BlocksEngine2_Core_I_BE2_BlocksStack_TypeInfo_12d4e10,7);
LAB_00603e50:
    (*(code *)*puVar4)(plVar9,iVar1,puVar4[1]);
    plVar9 = *(long **)(param_1 + 0x48);
    if (plVar9 == (long *)0x0) goto LAB_006048fc;
    lVar3 = *plVar9;
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
             native_sub_3c9b34(plVar9,_MG_BlocksEngine2_Core_I_BE2_BlocksStack_TypeInfo_12d4e10,0xf)
    ;
LAB_00603ec0:
    uVar7 = (*(code *)*puVar4)(plVar9,puVar4[1]);
    if ((uVar7 & 1) == 0) {
      return;
    }
    plVar9 = *(long **)(param_1 + 0x40);
    if (plVar9 == (long *)0x0) goto LAB_006048fc;
    lVar3 = *plVar9;
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
             native_sub_3c9b34(plVar9,_MG_BlocksEngine2_Block_I_BE2_Block_TypeInfo_12d4dd8,1);
LAB_00604004:
    iVar1 = (*(code *)*puVar4)(plVar9,puVar4[1]);
    if (iVar1 != 1) {
      plVar9 = *(long **)(param_1 + 0x40);
      if (plVar9 == (long *)0x0) goto LAB_006048fc;
      lVar3 = *plVar9;
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
               native_sub_3c9b34(plVar9,_MG_BlocksEngine2_Block_I_BE2_Block_TypeInfo_12d4dd8,1);
LAB_00604244:
      iVar1 = (*(code *)*puVar4)(plVar9,puVar4[1]);
      if (iVar1 != 2) {
        return;
      }
    }
    plVar9 = *(long **)(param_1 + 0x48);
    if (plVar9 == (long *)0x0) goto LAB_006048fc;
    lVar3 = *plVar9;
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
             native_sub_3c9b34(plVar9,_MG_BlocksEngine2_Core_I_BE2_BlocksStack_TypeInfo_12d4e10,9);
LAB_006042d0:
    lVar3 = (*(code *)*puVar4)(plVar9,puVar4[1]);
    if (lVar3 == 0) goto LAB_006048fc;
    if (*(int *)(lVar3 + 0x18) == 0) goto LAB_00604900;
    plVar9 = *(long **)(lVar3 + 0x20);
    goto LAB_006048c4;
  }
  if (plVar9 == (long *)0x0) goto LAB_006048fc;
  lVar3 = *plVar9;
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
           native_sub_3c9b34(plVar9,_MG_BlocksEngine2_Core_I_BE2_BlocksStack_TypeInfo_12d4e10,9);
LAB_00603dc8:
  lVar3 = (*(code *)*puVar4)(plVar9,puVar4[1]);
  if (lVar3 == 0) goto LAB_006048fc;
  if (*(uint *)(lVar3 + 0x18) <= *(uint *)(param_1 + 0x30)) {
LAB_00604900:
    uVar5 = native_sub_43283c();
                    /* WARNING: Subroutine does not return */
    native_sub_4327dc(uVar5,0);
  }
  plVar10 = *(long **)(param_1 + 0x48);
  if (plVar10 == (long *)0x0) goto LAB_006048fc;
  lVar6 = *plVar10;
  plVar9 = *(long **)(lVar3 + (long)(int)*(uint *)(param_1 + 0x30) * 8 + 0x20);
  if ((ulong)*(ushort *)(lVar6 + 0x12a) != 0) {
    uVar7 = 0;
    piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
    do {
      if (*(long *)(piVar8 + -2) == _MG_BlocksEngine2_Core_I_BE2_BlocksStack_TypeInfo_12d4e10) {
        puVar4 = (undefined8 *)(lVar6 + (long)(*piVar8 + 0xf) * 0x10 + 0x138);
        goto LAB_00603f38;
      }
      uVar7 = uVar7 + 1;
      piVar8 = piVar8 + 4;
    } while (uVar7 < *(ushort *)(lVar6 + 0x12a));
  }
  puVar4 = (undefined8 *)
           native_sub_3c9b34(plVar10,_MG_BlocksEngine2_Core_I_BE2_BlocksStack_TypeInfo_12d4e10,0xf);
LAB_00603f38:
  uVar7 = (*(code *)*puVar4)(plVar10,puVar4[1]);
  if ((uVar7 & 1) == 0) {
    if (plVar9 == (long *)0x0) goto LAB_006048fc;
    lVar3 = *plVar9;
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
             native_sub_3c9b34(plVar9,
                               _MG_BlocksEngine2_Block_Instruction_I_BE2_Instruction_TypeInfo_12d4e28
                               ,0);
LAB_006040e8:
    plVar10 = (long *)(*(code *)*puVar4)(plVar9,puVar4[1]);
    if (plVar10 == (long *)0x0) goto LAB_006048fc;
    lVar3 = *plVar10;
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
             native_sub_3c9b34(plVar10,
                               _MG_BlocksEngine2_Block_Instruction_I_BE2_InstructionBase_TypeInfo_12d4e30
                               ,3);
LAB_0060415c:
    plVar10 = (long *)(*(code *)*puVar4)(plVar10,puVar4[1]);
    if (plVar10 == (long *)0x0) goto LAB_006048fc;
    lVar3 = *plVar10;
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
             native_sub_3c9b34(plVar10,_MG_BlocksEngine2_Block_I_BE2_Block_TypeInfo_12d4dd8,1);
LAB_006041d0:
    iVar1 = (*(code *)*puVar4)(plVar10,puVar4[1]);
    if (iVar1 == 4) {
      plVar10 = *(long **)(param_1 + 0x48);
      if (plVar10 == (long *)0x0) goto LAB_006048fc;
      lVar3 = *plVar10;
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
               native_sub_3c9b34(plVar10,_MG_BlocksEngine2_Core_I_BE2_BlocksStack_TypeInfo_12d4e10,
                                 0x14);
LAB_006043f0:
      lVar3 = (*(code *)*puVar4)(plVar10,puVar4[1]);
      if (lVar3 == 0) goto LAB_006048fc;
      native_UnityEngine_Events_UnityEvent__Invoke_773864(lVar3,0);
    }
    plVar10 = *(long **)(param_1 + 0x48);
    if (plVar10 == (long *)0x0) goto LAB_006048fc;
    lVar3 = *plVar10;
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
             native_sub_3c9b34(plVar10,_MG_BlocksEngine2_Core_I_BE2_BlocksStack_TypeInfo_12d4e10,2);
LAB_00604468:
    uVar7 = (*(code *)*puVar4)(plVar10,puVar4[1]);
    if ((uVar7 & 1) != 0) {
      lVar3 = *plVar9;
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
               native_sub_3c9b34(plVar9,
                                 _MG_BlocksEngine2_Block_Instruction_I_BE2_Instruction_TypeInfo_12d4e28
                                 ,1);
LAB_006044d0:
      uVar7 = (*(code *)*puVar4)(plVar9,puVar4[1]);
      if ((uVar7 & 1) == 0) {
        plVar10 = *(long **)(param_1 + 0x48);
        if (plVar10 == (long *)0x0) goto LAB_006048fc;
        lVar3 = *plVar10;
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
                 native_sub_3c9b34(plVar10,_MG_BlocksEngine2_Core_I_BE2_BlocksStack_TypeInfo_12d4e10
                                   ,4);
LAB_00604594:
        iVar1 = (*(code *)*puVar4)(plVar10,puVar4[1]);
        if (iVar1 < *(int *)(param_1 + 0x60)) {
          plVar10 = *(long **)(param_1 + 0x48);
          if (plVar10 == (long *)0x0) goto LAB_006048fc;
          lVar3 = *plVar10;
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
                   native_sub_3c9b34(plVar10,
                                     _MG_BlocksEngine2_Core_I_BE2_BlocksStack_TypeInfo_12d4e10,4);
LAB_00604850:
          iVar1 = (*(code *)*puVar4)(plVar10,puVar4[1]);
          lVar3 = *plVar10;
          iVar1 = iVar1 + 1;
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
    lVar3 = *plVar9;
    plVar10 = *(long **)(param_1 + 0x48);
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
             native_sub_3c9b34(plVar9,
                               _MG_BlocksEngine2_Block_Instruction_I_BE2_Instruction_TypeInfo_12d4e28
                               ,0);
LAB_00604654:
    plVar9 = (long *)(*(code *)*puVar4)(plVar9,puVar4[1]);
    if (plVar9 != (long *)0x0) {
      lVar3 = *plVar9;
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
               native_sub_3c9b34(plVar9,
                                 _MG_BlocksEngine2_Block_Instruction_I_BE2_InstructionBase_TypeInfo_12d4e30
                                 ,3);
LAB_006046c0:
      plVar9 = (long *)(*(code *)*puVar4)(plVar9,puVar4[1]);
      if (plVar9 != (long *)0x0) {
        lVar3 = *plVar9;
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
                 native_sub_3c9b34(plVar9,_MG_BlocksEngine2_Block_I_BE2_Block_TypeInfo_12d4dd8,1);
LAB_0060472c:
        iVar1 = (*(code *)*puVar4)(plVar9,puVar4[1]);
        if (iVar1 == 4) {
          uVar2 = 0;
        }
        else {
          uVar2 = *(undefined4 *)(param_1 + 0x30);
        }
        if (plVar10 != (long *)0x0) {
          lVar3 = *plVar10;
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
                   native_sub_3c9b34(plVar10,
                                     _MG_BlocksEngine2_Core_I_BE2_BlocksStack_TypeInfo_12d4e10,7);
LAB_006047ac:
          UNRECOVERED_JUMPTABLE = (code *)*puVar4;
          uVar5 = puVar4[1];
LAB_006047b8:
                    /* WARNING: Could not recover jumptable at 0x006047cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*UNRECOVERED_JUMPTABLE)(plVar10,uVar2,uVar5);
          return;
        }
      }
    }
LAB_006048fc:
                    /* WARNING: Subroutine does not return */
    native_sub_432810();
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
        goto LAB_00604078;
      }
      uVar7 = uVar7 + 1;
      piVar8 = piVar8 + 4;
    } while (uVar7 < *(ushort *)(lVar3 + 0x12a));
  }
  puVar4 = (undefined8 *)
           native_sub_3c9b34(plVar10,_MG_BlocksEngine2_Block_I_BE2_Block_TypeInfo_12d4dd8,1);
LAB_00604078:
  iVar1 = (*(code *)*puVar4)(plVar10,puVar4[1]);
  if (iVar1 != 1) {
    plVar10 = *(long **)(param_1 + 0x40);
    if (plVar10 == (long *)0x0) goto LAB_006048fc;
    lVar3 = *plVar10;
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
             native_sub_3c9b34(plVar10,_MG_BlocksEngine2_Block_I_BE2_Block_TypeInfo_12d4dd8,1);
LAB_00604304:
    iVar1 = (*(code *)*puVar4)(plVar10,puVar4[1]);
    if ((iVar1 != 2) &&
       (uVar7 = native_MG_BlocksEngine2_Utils_BE2_BlockUtils__BlockIsFunction_56f1f0
                          (*(undefined8 *)(param_1 + 0x40),0), (uVar7 & 1) == 0)) {
      plVar9 = *(long **)(param_1 + 0x48);
      if (plVar9 == (long *)0x0) goto LAB_006048fc;
      lVar3 = *plVar9;
      uVar2 = *(undefined4 *)(param_1 + 0x30);
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
               native_sub_3c9b34(plVar9,_MG_BlocksEngine2_Core_I_BE2_BlocksStack_TypeInfo_12d4e10,7)
      ;
LAB_006047e0:
      (*(code *)*puVar4)(plVar9,uVar2,puVar4[1]);
      plVar10 = *(long **)(param_1 + 0x48);
      if (plVar10 == (long *)0x0) goto LAB_006048fc;
      lVar3 = *plVar10;
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
               native_sub_3c9b34(plVar10,_MG_BlocksEngine2_Core_I_BE2_BlocksStack_TypeInfo_12d4e10,3
                                );
LAB_006048ec:
      UNRECOVERED_JUMPTABLE = (code *)*puVar4;
      uVar5 = puVar4[1];
      uVar2 = 0;
      goto LAB_006047b8;
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
        puVar4 = (undefined8 *)(lVar3 + (long)(*piVar8 + 4) * 0x10 + 0x138);
        goto LAB_00604388;
      }
      uVar7 = uVar7 + 1;
      piVar8 = piVar8 + 4;
    } while (uVar7 < *(ushort *)(lVar3 + 0x12a));
  }
  puVar4 = (undefined8 *)
           native_sub_3c9b34(plVar10,_MG_BlocksEngine2_Core_I_BE2_BlocksStack_TypeInfo_12d4e10,4);
LAB_00604388:
  iVar1 = (*(code *)*puVar4)(plVar10,puVar4[1]);
  lVar3 = *plVar10;
  iVar1 = iVar1 + 1;
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
           native_sub_3c9b34(plVar10,_MG_BlocksEngine2_Core_I_BE2_BlocksStack_TypeInfo_12d4e10,5);
LAB_006048ac:
  (*(code *)*puVar4)(plVar10,iVar1,puVar4[1]);
LAB_006048c4:
  if ((bRam000000000133ee63 & 1) == 0) {
    native_sub_43273c(&MG_BlocksEngine2_Core_I_BE2_BlocksStack_TypeInfo_12d4e10);
    native_sub_43273c(&MG_BlocksEngine2_Block_Instruction_I_BE2_Instruction_TypeInfo_12d4e28);
    native_sub_43273c(&Method_UnityEngine_Events_UnityEvent_I_BE2_Instruction__Invoke___12de478);
    bRam000000000133ee63 = 1;
  }
  plVar10 = *(long **)(param_1 + 0x48);
  if (plVar10 != (long *)0x0) {
    lVar3 = *plVar10;
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
             native_sub_3c9b34(plVar10,_MG_BlocksEngine2_Core_I_BE2_BlocksStack_TypeInfo_12d4e10,0xb
                              );
LAB_00611f54:
    lVar3 = (*(code *)*puVar4)(plVar10,puVar4[1]);
    if ((lVar3 != 0) &&
       (native_UnityEngine_Events_UnityEvent_BaseEventData___Invoke_8a0108
                  (lVar3,plVar9,
                   _Method_UnityEngine_Events_UnityEvent_I_BE2_Instruction__Invoke___12de478),
       plVar9 != (long *)0x0)) {
      lVar3 = *plVar9;
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
               native_sub_3c9b34(plVar9,
                                 _MG_BlocksEngine2_Block_Instruction_I_BE2_Instruction_TypeInfo_12d4e28
                                 ,3);
LAB_00611fdc:
                    /* WARNING: Could not recover jumptable at 0x00611ff0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)*puVar4)(plVar9,puVar4[1]);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
LAB_0060489c:
  puVar4 = (undefined8 *)(lVar3 + (long)(*piVar8 + 5) * 0x10 + 0x138);
  goto LAB_006048ac;
}



/* BE2_Ins_PlaySound$$.ctor @ 0x60af80
 * void BE2_Ins_PlaySound___ctor (BE2_Ins_PlaySound_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* BE2_Ins_PlaySound$$.ctor
   void BE2_Ins_PlaySound___ctor (BE2_Ins_PlaySound_o* __this, const MethodInfo* method); */

undefined1  [16] native_BE2_Ins_PlaySound___ctor_60af80(ulong param_1)

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


