/* ARM64 IL2CPP native pseudocode from Ghidra.
 * Recovered implementation, not original C# source.
 * Function boundaries follow the IL2CPP method address table. */


/* BE2_Ins_TranslateToPosition$$Function @ 0x60dea0
 * void BE2_Ins_TranslateToPosition__Function (BE2_Ins_TranslateToPosition_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* BE2_Ins_TranslateToPosition$$Function
   void BE2_Ins_TranslateToPosition__Function (BE2_Ins_TranslateToPosition_o* __this, const
   MethodInfo* method); */

void native_BE2_Ins_TranslateToPosition__Function_60dea0(long param_1)

{
  int iVar1;
  long lVar2;
  undefined8 *puVar3;
  code *UNRECOVERED_JUMPTABLE;
  long lVar4;
  ulong uVar5;
  int *piVar6;
  undefined4 uVar7;
  undefined8 *puVar8;
  long *plVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  long *plVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  
  if ((bRam000000000133ee3a & 1) == 0) {
    native_sub_43273c(&MG_BlocksEngine2_Block_I_BE2_BlockSectionHeaderInput_TypeInfo_12d4e00);
    native_sub_43273c(&MG_BlocksEngine2_Environment_I_BE2_TargetObject_TypeInfo_12d4e50);
    bRam000000000133ee3a = 1;
  }
  lVar2 = native_MG_BlocksEngine2_Block_Instruction_BE2_InstructionBase__get_Section0Inputs_603b78
                    (param_1);
  if (lVar2 == 0) goto LAB_0060e168;
  if (*(int *)(lVar2 + 0x18) == 0) {
LAB_0060e16c:
    uVar13 = native_sub_43283c();
                    /* WARNING: Subroutine does not return */
    native_sub_4327dc(uVar13,0);
  }
  puVar8 = (undefined8 *)(param_1 + 0x78);
  *puVar8 = *(undefined8 *)(lVar2 + 0x20);
  native_sub_4326e0(puVar8);
  lVar2 = native_MG_BlocksEngine2_Block_Instruction_BE2_InstructionBase__get_Section0Inputs_603b78
                    (param_1);
  if (lVar2 == 0) goto LAB_0060e168;
  if (*(uint *)(lVar2 + 0x18) < 2) goto LAB_0060e16c;
  puVar11 = (undefined8 *)(param_1 + 0x80);
  *puVar11 = *(undefined8 *)(lVar2 + 0x28);
  native_sub_4326e0(puVar11);
  lVar2 = native_MG_BlocksEngine2_Block_Instruction_BE2_InstructionBase__get_Section0Inputs_603b78
                    (param_1);
  if (lVar2 == 0) goto LAB_0060e168;
  if (*(uint *)(lVar2 + 0x18) < 3) goto LAB_0060e16c;
  puVar10 = (undefined8 *)(param_1 + 0x88);
  *puVar10 = *(undefined8 *)(lVar2 + 0x30);
  native_sub_4326e0(puVar10);
  plVar12 = *(long **)(param_1 + 0x50);
  if (plVar12 == (long *)0x0) {
LAB_0060e168:
                    /* WARNING: Subroutine does not return */
    native_sub_432810();
  }
  lVar2 = *plVar12;
  if ((ulong)*(ushort *)(lVar2 + 0x12a) != 0) {
    uVar5 = 0;
    piVar6 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
    do {
      if (*(long *)(piVar6 + -2) ==
          _MG_BlocksEngine2_Environment_I_BE2_TargetObject_TypeInfo_12d4e50) {
        puVar3 = (undefined8 *)(lVar2 + (long)*piVar6 * 0x10 + 0x138);
        goto LAB_0060dfcc;
      }
      uVar5 = uVar5 + 1;
      piVar6 = piVar6 + 4;
    } while (uVar5 < *(ushort *)(lVar2 + 0x12a));
  }
  puVar3 = (undefined8 *)
           native_sub_3c9b34(plVar12,
                             _MG_BlocksEngine2_Environment_I_BE2_TargetObject_TypeInfo_12d4e50,0);
LAB_0060dfcc:
  lVar2 = (*(code *)*puVar3)(plVar12,puVar3[1]);
  plVar12 = (long *)*puVar8;
  if (plVar12 == (long *)0x0) goto LAB_0060e168;
  lVar4 = *plVar12;
  if ((ulong)*(ushort *)(lVar4 + 0x12a) != 0) {
    uVar5 = 0;
    piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
    do {
      if (*(long *)(piVar6 + -2) ==
          _MG_BlocksEngine2_Block_I_BE2_BlockSectionHeaderInput_TypeInfo_12d4e00) {
        puVar8 = (undefined8 *)(lVar4 + (long)(*piVar6 + 2) * 0x10 + 0x138);
        goto LAB_0060e044;
      }
      uVar5 = uVar5 + 1;
      piVar6 = piVar6 + 4;
    } while (uVar5 < *(ushort *)(lVar4 + 0x12a));
  }
  puVar8 = (undefined8 *)
           native_sub_3c9b34(plVar12,
                             _MG_BlocksEngine2_Block_I_BE2_BlockSectionHeaderInput_TypeInfo_12d4e00,
                             2);
LAB_0060e044:
  uVar13 = (*(code *)*puVar8)(plVar12,puVar8[1]);
  plVar12 = (long *)*puVar11;
  if (plVar12 == (long *)0x0) goto LAB_0060e168;
  lVar4 = *plVar12;
  if ((ulong)*(ushort *)(lVar4 + 0x12a) != 0) {
    uVar5 = 0;
    piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
    do {
      if (*(long *)(piVar6 + -2) ==
          _MG_BlocksEngine2_Block_I_BE2_BlockSectionHeaderInput_TypeInfo_12d4e00) {
        puVar8 = (undefined8 *)(lVar4 + (long)(*piVar6 + 2) * 0x10 + 0x138);
        goto LAB_0060e0b4;
      }
      uVar5 = uVar5 + 1;
      piVar6 = piVar6 + 4;
    } while (uVar5 < *(ushort *)(lVar4 + 0x12a));
  }
  puVar8 = (undefined8 *)
           native_sub_3c9b34(plVar12,
                             _MG_BlocksEngine2_Block_I_BE2_BlockSectionHeaderInput_TypeInfo_12d4e00,
                             2);
LAB_0060e0b4:
  uVar14 = (*(code *)*puVar8)(plVar12,puVar8[1]);
  plVar12 = (long *)*puVar10;
  if (plVar12 == (long *)0x0) goto LAB_0060e168;
  lVar4 = *plVar12;
  if ((ulong)*(ushort *)(lVar4 + 0x12a) != 0) {
    uVar5 = 0;
    piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
    do {
      if (*(long *)(piVar6 + -2) ==
          _MG_BlocksEngine2_Block_I_BE2_BlockSectionHeaderInput_TypeInfo_12d4e00) {
        puVar8 = (undefined8 *)(lVar4 + (long)(*piVar6 + 2) * 0x10 + 0x138);
        goto LAB_0060e124;
      }
      uVar5 = uVar5 + 1;
      piVar6 = piVar6 + 4;
    } while (uVar5 < *(ushort *)(lVar4 + 0x12a));
  }
  puVar8 = (undefined8 *)
           native_sub_3c9b34(plVar12,
                             _MG_BlocksEngine2_Block_I_BE2_BlockSectionHeaderInput_TypeInfo_12d4e00,
                             2);
LAB_0060e124:
  uVar15 = (*(code *)*puVar8)(plVar12,puVar8[1]);
  if (lVar2 == 0) goto LAB_0060e168;
  native_UnityEngine_Transform__set_position_77174c(uVar13,uVar14,uVar15,lVar2,0);
  if ((bRam000000000133ee62 & 1) == 0) {
    native_sub_43273c(&MG_BlocksEngine2_Block_I_BE2_Block_TypeInfo_12d4dd8);
    native_sub_43273c(&MG_BlocksEngine2_Core_I_BE2_BlocksStack_TypeInfo_12d4e10);
    native_sub_43273c(&MG_BlocksEngine2_Block_Instruction_I_BE2_InstructionBase_TypeInfo_12d4e30);
    native_sub_43273c(&MG_BlocksEngine2_Block_Instruction_I_BE2_Instruction_TypeInfo_12d4e28);
    bRam000000000133ee62 = 1;
  }
  plVar12 = *(long **)(param_1 + 0x48);
  if (plVar12 == (long *)0x0) goto LAB_006048fc;
  lVar2 = *plVar12;
  if ((ulong)*(ushort *)(lVar2 + 0x12a) != 0) {
    uVar5 = 0;
    piVar6 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
    do {
      if (*(long *)(piVar6 + -2) == _MG_BlocksEngine2_Core_I_BE2_BlocksStack_TypeInfo_12d4e10) {
        puVar8 = (undefined8 *)(lVar2 + (long)(*piVar6 + 9) * 0x10 + 0x138);
        goto LAB_00603cfc;
      }
      uVar5 = uVar5 + 1;
      piVar6 = piVar6 + 4;
    } while (uVar5 < *(ushort *)(lVar2 + 0x12a));
  }
  puVar8 = (undefined8 *)
           native_sub_3c9b34(plVar12,_MG_BlocksEngine2_Core_I_BE2_BlocksStack_TypeInfo_12d4e10,9);
LAB_00603cfc:
  lVar2 = (*(code *)*puVar8)(plVar12,puVar8[1]);
  if (lVar2 == 0) goto LAB_006048fc;
  iVar1 = *(int *)(param_1 + 0x30);
  plVar12 = *(long **)(param_1 + 0x48);
  if (*(int *)(lVar2 + 0x18) <= iVar1) {
    if (plVar12 == (long *)0x0) goto LAB_006048fc;
    lVar2 = *plVar12;
    if ((ulong)*(ushort *)(lVar2 + 0x12a) != 0) {
      uVar5 = 0;
      piVar6 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == _MG_BlocksEngine2_Core_I_BE2_BlocksStack_TypeInfo_12d4e10) {
          puVar8 = (undefined8 *)(lVar2 + (long)(*piVar6 + 7) * 0x10 + 0x138);
          goto LAB_00603e50;
        }
        uVar5 = uVar5 + 1;
        piVar6 = piVar6 + 4;
      } while (uVar5 < *(ushort *)(lVar2 + 0x12a));
    }
    puVar8 = (undefined8 *)
             native_sub_3c9b34(plVar12,_MG_BlocksEngine2_Core_I_BE2_BlocksStack_TypeInfo_12d4e10,7);
LAB_00603e50:
    (*(code *)*puVar8)(plVar12,iVar1,puVar8[1]);
    plVar12 = *(long **)(param_1 + 0x48);
    if (plVar12 == (long *)0x0) goto LAB_006048fc;
    lVar2 = *plVar12;
    if ((ulong)*(ushort *)(lVar2 + 0x12a) != 0) {
      uVar5 = 0;
      piVar6 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == _MG_BlocksEngine2_Core_I_BE2_BlocksStack_TypeInfo_12d4e10) {
          puVar8 = (undefined8 *)(lVar2 + (long)(*piVar6 + 0xf) * 0x10 + 0x138);
          goto LAB_00603ec0;
        }
        uVar5 = uVar5 + 1;
        piVar6 = piVar6 + 4;
      } while (uVar5 < *(ushort *)(lVar2 + 0x12a));
    }
    puVar8 = (undefined8 *)
             native_sub_3c9b34(plVar12,_MG_BlocksEngine2_Core_I_BE2_BlocksStack_TypeInfo_12d4e10,0xf
                              );
LAB_00603ec0:
    uVar5 = (*(code *)*puVar8)(plVar12,puVar8[1]);
    if ((uVar5 & 1) == 0) {
      return;
    }
    plVar12 = *(long **)(param_1 + 0x40);
    if (plVar12 == (long *)0x0) goto LAB_006048fc;
    lVar2 = *plVar12;
    if ((ulong)*(ushort *)(lVar2 + 0x12a) != 0) {
      uVar5 = 0;
      piVar6 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == _MG_BlocksEngine2_Block_I_BE2_Block_TypeInfo_12d4dd8) {
          puVar8 = (undefined8 *)(lVar2 + (long)(*piVar6 + 1) * 0x10 + 0x138);
          goto LAB_00604004;
        }
        uVar5 = uVar5 + 1;
        piVar6 = piVar6 + 4;
      } while (uVar5 < *(ushort *)(lVar2 + 0x12a));
    }
    puVar8 = (undefined8 *)
             native_sub_3c9b34(plVar12,_MG_BlocksEngine2_Block_I_BE2_Block_TypeInfo_12d4dd8,1);
LAB_00604004:
    iVar1 = (*(code *)*puVar8)(plVar12,puVar8[1]);
    if (iVar1 != 1) {
      plVar12 = *(long **)(param_1 + 0x40);
      if (plVar12 == (long *)0x0) goto LAB_006048fc;
      lVar2 = *plVar12;
      if ((ulong)*(ushort *)(lVar2 + 0x12a) != 0) {
        uVar5 = 0;
        piVar6 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
        do {
          if (*(long *)(piVar6 + -2) == _MG_BlocksEngine2_Block_I_BE2_Block_TypeInfo_12d4dd8) {
            puVar8 = (undefined8 *)(lVar2 + (long)(*piVar6 + 1) * 0x10 + 0x138);
            goto LAB_00604244;
          }
          uVar5 = uVar5 + 1;
          piVar6 = piVar6 + 4;
        } while (uVar5 < *(ushort *)(lVar2 + 0x12a));
      }
      puVar8 = (undefined8 *)
               native_sub_3c9b34(plVar12,_MG_BlocksEngine2_Block_I_BE2_Block_TypeInfo_12d4dd8,1);
LAB_00604244:
      iVar1 = (*(code *)*puVar8)(plVar12,puVar8[1]);
      if (iVar1 != 2) {
        return;
      }
    }
    plVar12 = *(long **)(param_1 + 0x48);
    if (plVar12 == (long *)0x0) goto LAB_006048fc;
    lVar2 = *plVar12;
    if ((ulong)*(ushort *)(lVar2 + 0x12a) != 0) {
      uVar5 = 0;
      piVar6 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == _MG_BlocksEngine2_Core_I_BE2_BlocksStack_TypeInfo_12d4e10) {
          puVar8 = (undefined8 *)(lVar2 + (long)(*piVar6 + 9) * 0x10 + 0x138);
          goto LAB_006042d0;
        }
        uVar5 = uVar5 + 1;
        piVar6 = piVar6 + 4;
      } while (uVar5 < *(ushort *)(lVar2 + 0x12a));
    }
    puVar8 = (undefined8 *)
             native_sub_3c9b34(plVar12,_MG_BlocksEngine2_Core_I_BE2_BlocksStack_TypeInfo_12d4e10,9);
LAB_006042d0:
    lVar2 = (*(code *)*puVar8)(plVar12,puVar8[1]);
    if (lVar2 == 0) goto LAB_006048fc;
    if (*(int *)(lVar2 + 0x18) == 0) goto LAB_00604900;
    plVar12 = *(long **)(lVar2 + 0x20);
    goto LAB_006048c4;
  }
  if (plVar12 == (long *)0x0) goto LAB_006048fc;
  lVar2 = *plVar12;
  if ((ulong)*(ushort *)(lVar2 + 0x12a) != 0) {
    uVar5 = 0;
    piVar6 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
    do {
      if (*(long *)(piVar6 + -2) == _MG_BlocksEngine2_Core_I_BE2_BlocksStack_TypeInfo_12d4e10) {
        puVar8 = (undefined8 *)(lVar2 + (long)(*piVar6 + 9) * 0x10 + 0x138);
        goto LAB_00603dc8;
      }
      uVar5 = uVar5 + 1;
      piVar6 = piVar6 + 4;
    } while (uVar5 < *(ushort *)(lVar2 + 0x12a));
  }
  puVar8 = (undefined8 *)
           native_sub_3c9b34(plVar12,_MG_BlocksEngine2_Core_I_BE2_BlocksStack_TypeInfo_12d4e10,9);
LAB_00603dc8:
  lVar2 = (*(code *)*puVar8)(plVar12,puVar8[1]);
  if (lVar2 == 0) goto LAB_006048fc;
  if (*(uint *)(lVar2 + 0x18) <= *(uint *)(param_1 + 0x30)) {
LAB_00604900:
    uVar13 = native_sub_43283c();
                    /* WARNING: Subroutine does not return */
    native_sub_4327dc(uVar13,0);
  }
  plVar9 = *(long **)(param_1 + 0x48);
  if (plVar9 == (long *)0x0) goto LAB_006048fc;
  lVar4 = *plVar9;
  plVar12 = *(long **)(lVar2 + (long)(int)*(uint *)(param_1 + 0x30) * 8 + 0x20);
  if ((ulong)*(ushort *)(lVar4 + 0x12a) != 0) {
    uVar5 = 0;
    piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
    do {
      if (*(long *)(piVar6 + -2) == _MG_BlocksEngine2_Core_I_BE2_BlocksStack_TypeInfo_12d4e10) {
        puVar8 = (undefined8 *)(lVar4 + (long)(*piVar6 + 0xf) * 0x10 + 0x138);
        goto LAB_00603f38;
      }
      uVar5 = uVar5 + 1;
      piVar6 = piVar6 + 4;
    } while (uVar5 < *(ushort *)(lVar4 + 0x12a));
  }
  puVar8 = (undefined8 *)
           native_sub_3c9b34(plVar9,_MG_BlocksEngine2_Core_I_BE2_BlocksStack_TypeInfo_12d4e10,0xf);
LAB_00603f38:
  uVar5 = (*(code *)*puVar8)(plVar9,puVar8[1]);
  if ((uVar5 & 1) == 0) {
    if (plVar12 == (long *)0x0) goto LAB_006048fc;
    lVar2 = *plVar12;
    if ((ulong)*(ushort *)(lVar2 + 0x12a) != 0) {
      uVar5 = 0;
      piVar6 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) ==
            _MG_BlocksEngine2_Block_Instruction_I_BE2_Instruction_TypeInfo_12d4e28) {
          puVar8 = (undefined8 *)(lVar2 + (long)*piVar6 * 0x10 + 0x138);
          goto LAB_006040e8;
        }
        uVar5 = uVar5 + 1;
        piVar6 = piVar6 + 4;
      } while (uVar5 < *(ushort *)(lVar2 + 0x12a));
    }
    puVar8 = (undefined8 *)
             native_sub_3c9b34(plVar12,
                               _MG_BlocksEngine2_Block_Instruction_I_BE2_Instruction_TypeInfo_12d4e28
                               ,0);
LAB_006040e8:
    plVar9 = (long *)(*(code *)*puVar8)(plVar12,puVar8[1]);
    if (plVar9 == (long *)0x0) goto LAB_006048fc;
    lVar2 = *plVar9;
    if ((ulong)*(ushort *)(lVar2 + 0x12a) != 0) {
      uVar5 = 0;
      piVar6 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) ==
            _MG_BlocksEngine2_Block_Instruction_I_BE2_InstructionBase_TypeInfo_12d4e30) {
          puVar8 = (undefined8 *)(lVar2 + (long)(*piVar6 + 3) * 0x10 + 0x138);
          goto LAB_0060415c;
        }
        uVar5 = uVar5 + 1;
        piVar6 = piVar6 + 4;
      } while (uVar5 < *(ushort *)(lVar2 + 0x12a));
    }
    puVar8 = (undefined8 *)
             native_sub_3c9b34(plVar9,
                               _MG_BlocksEngine2_Block_Instruction_I_BE2_InstructionBase_TypeInfo_12d4e30
                               ,3);
LAB_0060415c:
    plVar9 = (long *)(*(code *)*puVar8)(plVar9,puVar8[1]);
    if (plVar9 == (long *)0x0) goto LAB_006048fc;
    lVar2 = *plVar9;
    if ((ulong)*(ushort *)(lVar2 + 0x12a) != 0) {
      uVar5 = 0;
      piVar6 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == _MG_BlocksEngine2_Block_I_BE2_Block_TypeInfo_12d4dd8) {
          puVar8 = (undefined8 *)(lVar2 + (long)(*piVar6 + 1) * 0x10 + 0x138);
          goto LAB_006041d0;
        }
        uVar5 = uVar5 + 1;
        piVar6 = piVar6 + 4;
      } while (uVar5 < *(ushort *)(lVar2 + 0x12a));
    }
    puVar8 = (undefined8 *)
             native_sub_3c9b34(plVar9,_MG_BlocksEngine2_Block_I_BE2_Block_TypeInfo_12d4dd8,1);
LAB_006041d0:
    iVar1 = (*(code *)*puVar8)(plVar9,puVar8[1]);
    if (iVar1 == 4) {
      plVar9 = *(long **)(param_1 + 0x48);
      if (plVar9 == (long *)0x0) goto LAB_006048fc;
      lVar2 = *plVar9;
      if ((ulong)*(ushort *)(lVar2 + 0x12a) != 0) {
        uVar5 = 0;
        piVar6 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
        do {
          if (*(long *)(piVar6 + -2) == _MG_BlocksEngine2_Core_I_BE2_BlocksStack_TypeInfo_12d4e10) {
            puVar8 = (undefined8 *)(lVar2 + (long)(*piVar6 + 0x14) * 0x10 + 0x138);
            goto LAB_006043f0;
          }
          uVar5 = uVar5 + 1;
          piVar6 = piVar6 + 4;
        } while (uVar5 < *(ushort *)(lVar2 + 0x12a));
      }
      puVar8 = (undefined8 *)
               native_sub_3c9b34(plVar9,_MG_BlocksEngine2_Core_I_BE2_BlocksStack_TypeInfo_12d4e10,
                                 0x14);
LAB_006043f0:
      lVar2 = (*(code *)*puVar8)(plVar9,puVar8[1]);
      if (lVar2 == 0) goto LAB_006048fc;
      native_UnityEngine_Events_UnityEvent__Invoke_773864(lVar2,0);
    }
    plVar9 = *(long **)(param_1 + 0x48);
    if (plVar9 == (long *)0x0) goto LAB_006048fc;
    lVar2 = *plVar9;
    if ((ulong)*(ushort *)(lVar2 + 0x12a) != 0) {
      uVar5 = 0;
      piVar6 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == _MG_BlocksEngine2_Core_I_BE2_BlocksStack_TypeInfo_12d4e10) {
          puVar8 = (undefined8 *)(lVar2 + (long)(*piVar6 + 2) * 0x10 + 0x138);
          goto LAB_00604468;
        }
        uVar5 = uVar5 + 1;
        piVar6 = piVar6 + 4;
      } while (uVar5 < *(ushort *)(lVar2 + 0x12a));
    }
    puVar8 = (undefined8 *)
             native_sub_3c9b34(plVar9,_MG_BlocksEngine2_Core_I_BE2_BlocksStack_TypeInfo_12d4e10,2);
LAB_00604468:
    uVar5 = (*(code *)*puVar8)(plVar9,puVar8[1]);
    if ((uVar5 & 1) != 0) {
      lVar2 = *plVar12;
      if ((ulong)*(ushort *)(lVar2 + 0x12a) != 0) {
        uVar5 = 0;
        piVar6 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
        do {
          if (*(long *)(piVar6 + -2) ==
              _MG_BlocksEngine2_Block_Instruction_I_BE2_Instruction_TypeInfo_12d4e28) {
            puVar8 = (undefined8 *)(lVar2 + (long)(*piVar6 + 1) * 0x10 + 0x138);
            goto LAB_006044d0;
          }
          uVar5 = uVar5 + 1;
          piVar6 = piVar6 + 4;
        } while (uVar5 < *(ushort *)(lVar2 + 0x12a));
      }
      puVar8 = (undefined8 *)
               native_sub_3c9b34(plVar12,
                                 _MG_BlocksEngine2_Block_Instruction_I_BE2_Instruction_TypeInfo_12d4e28
                                 ,1);
LAB_006044d0:
      uVar5 = (*(code *)*puVar8)(plVar12,puVar8[1]);
      if ((uVar5 & 1) == 0) {
        plVar9 = *(long **)(param_1 + 0x48);
        if (plVar9 == (long *)0x0) goto LAB_006048fc;
        lVar2 = *plVar9;
        if ((ulong)*(ushort *)(lVar2 + 0x12a) != 0) {
          uVar5 = 0;
          piVar6 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
          do {
            if (*(long *)(piVar6 + -2) == _MG_BlocksEngine2_Core_I_BE2_BlocksStack_TypeInfo_12d4e10)
            {
              puVar8 = (undefined8 *)(lVar2 + (long)(*piVar6 + 4) * 0x10 + 0x138);
              goto LAB_00604594;
            }
            uVar5 = uVar5 + 1;
            piVar6 = piVar6 + 4;
          } while (uVar5 < *(ushort *)(lVar2 + 0x12a));
        }
        puVar8 = (undefined8 *)
                 native_sub_3c9b34(plVar9,_MG_BlocksEngine2_Core_I_BE2_BlocksStack_TypeInfo_12d4e10,
                                   4);
LAB_00604594:
        iVar1 = (*(code *)*puVar8)(plVar9,puVar8[1]);
        if (iVar1 < *(int *)(param_1 + 0x60)) {
          plVar9 = *(long **)(param_1 + 0x48);
          if (plVar9 == (long *)0x0) goto LAB_006048fc;
          lVar2 = *plVar9;
          if ((ulong)*(ushort *)(lVar2 + 0x12a) != 0) {
            uVar5 = 0;
            piVar6 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
            do {
              if (*(long *)(piVar6 + -2) ==
                  _MG_BlocksEngine2_Core_I_BE2_BlocksStack_TypeInfo_12d4e10) {
                puVar8 = (undefined8 *)(lVar2 + (long)(*piVar6 + 4) * 0x10 + 0x138);
                goto LAB_00604850;
              }
              uVar5 = uVar5 + 1;
              piVar6 = piVar6 + 4;
            } while (uVar5 < *(ushort *)(lVar2 + 0x12a));
          }
          puVar8 = (undefined8 *)
                   native_sub_3c9b34(plVar9,
                                     _MG_BlocksEngine2_Core_I_BE2_BlocksStack_TypeInfo_12d4e10,4);
LAB_00604850:
          iVar1 = (*(code *)*puVar8)(plVar9,puVar8[1]);
          lVar2 = *plVar9;
          iVar1 = iVar1 + 1;
          if ((ulong)*(ushort *)(lVar2 + 0x12a) != 0) {
            uVar5 = 0;
            piVar6 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
            do {
              if (*(long *)(piVar6 + -2) ==
                  _MG_BlocksEngine2_Core_I_BE2_BlocksStack_TypeInfo_12d4e10) goto LAB_0060489c;
              uVar5 = uVar5 + 1;
              piVar6 = piVar6 + 4;
            } while (uVar5 < *(ushort *)(lVar2 + 0x12a));
          }
          goto LAB_006043d0;
        }
      }
    }
    lVar2 = *plVar12;
    plVar9 = *(long **)(param_1 + 0x48);
    if ((ulong)*(ushort *)(lVar2 + 0x12a) != 0) {
      uVar5 = 0;
      piVar6 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) ==
            _MG_BlocksEngine2_Block_Instruction_I_BE2_Instruction_TypeInfo_12d4e28) {
          puVar8 = (undefined8 *)(lVar2 + (long)*piVar6 * 0x10 + 0x138);
          goto LAB_00604654;
        }
        uVar5 = uVar5 + 1;
        piVar6 = piVar6 + 4;
      } while (uVar5 < *(ushort *)(lVar2 + 0x12a));
    }
    puVar8 = (undefined8 *)
             native_sub_3c9b34(plVar12,
                               _MG_BlocksEngine2_Block_Instruction_I_BE2_Instruction_TypeInfo_12d4e28
                               ,0);
LAB_00604654:
    plVar12 = (long *)(*(code *)*puVar8)(plVar12,puVar8[1]);
    if (plVar12 != (long *)0x0) {
      lVar2 = *plVar12;
      if ((ulong)*(ushort *)(lVar2 + 0x12a) != 0) {
        uVar5 = 0;
        piVar6 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
        do {
          if (*(long *)(piVar6 + -2) ==
              _MG_BlocksEngine2_Block_Instruction_I_BE2_InstructionBase_TypeInfo_12d4e30) {
            puVar8 = (undefined8 *)(lVar2 + (long)(*piVar6 + 3) * 0x10 + 0x138);
            goto LAB_006046c0;
          }
          uVar5 = uVar5 + 1;
          piVar6 = piVar6 + 4;
        } while (uVar5 < *(ushort *)(lVar2 + 0x12a));
      }
      puVar8 = (undefined8 *)
               native_sub_3c9b34(plVar12,
                                 _MG_BlocksEngine2_Block_Instruction_I_BE2_InstructionBase_TypeInfo_12d4e30
                                 ,3);
LAB_006046c0:
      plVar12 = (long *)(*(code *)*puVar8)(plVar12,puVar8[1]);
      if (plVar12 != (long *)0x0) {
        lVar2 = *plVar12;
        if ((ulong)*(ushort *)(lVar2 + 0x12a) != 0) {
          uVar5 = 0;
          piVar6 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
          do {
            if (*(long *)(piVar6 + -2) == _MG_BlocksEngine2_Block_I_BE2_Block_TypeInfo_12d4dd8) {
              puVar8 = (undefined8 *)(lVar2 + (long)(*piVar6 + 1) * 0x10 + 0x138);
              goto LAB_0060472c;
            }
            uVar5 = uVar5 + 1;
            piVar6 = piVar6 + 4;
          } while (uVar5 < *(ushort *)(lVar2 + 0x12a));
        }
        puVar8 = (undefined8 *)
                 native_sub_3c9b34(plVar12,_MG_BlocksEngine2_Block_I_BE2_Block_TypeInfo_12d4dd8,1);
LAB_0060472c:
        iVar1 = (*(code *)*puVar8)(plVar12,puVar8[1]);
        if (iVar1 == 4) {
          uVar7 = 0;
        }
        else {
          uVar7 = *(undefined4 *)(param_1 + 0x30);
        }
        if (plVar9 != (long *)0x0) {
          lVar2 = *plVar9;
          if ((ulong)*(ushort *)(lVar2 + 0x12a) != 0) {
            uVar5 = 0;
            piVar6 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
            do {
              if (*(long *)(piVar6 + -2) ==
                  _MG_BlocksEngine2_Core_I_BE2_BlocksStack_TypeInfo_12d4e10) {
                puVar8 = (undefined8 *)(lVar2 + (long)(*piVar6 + 7) * 0x10 + 0x138);
                goto LAB_006047ac;
              }
              uVar5 = uVar5 + 1;
              piVar6 = piVar6 + 4;
            } while (uVar5 < *(ushort *)(lVar2 + 0x12a));
          }
          puVar8 = (undefined8 *)
                   native_sub_3c9b34(plVar9,
                                     _MG_BlocksEngine2_Core_I_BE2_BlocksStack_TypeInfo_12d4e10,7);
LAB_006047ac:
          UNRECOVERED_JUMPTABLE = (code *)*puVar8;
          uVar13 = puVar8[1];
LAB_006047b8:
                    /* WARNING: Could not recover jumptable at 0x006047cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*UNRECOVERED_JUMPTABLE)(plVar9,uVar7,uVar13);
          return;
        }
      }
    }
LAB_006048fc:
                    /* WARNING: Subroutine does not return */
    native_sub_432810();
  }
  plVar9 = *(long **)(param_1 + 0x40);
  if (plVar9 == (long *)0x0) goto LAB_006048fc;
  lVar2 = *plVar9;
  if ((ulong)*(ushort *)(lVar2 + 0x12a) != 0) {
    uVar5 = 0;
    piVar6 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
    do {
      if (*(long *)(piVar6 + -2) == _MG_BlocksEngine2_Block_I_BE2_Block_TypeInfo_12d4dd8) {
        puVar8 = (undefined8 *)(lVar2 + (long)(*piVar6 + 1) * 0x10 + 0x138);
        goto LAB_00604078;
      }
      uVar5 = uVar5 + 1;
      piVar6 = piVar6 + 4;
    } while (uVar5 < *(ushort *)(lVar2 + 0x12a));
  }
  puVar8 = (undefined8 *)
           native_sub_3c9b34(plVar9,_MG_BlocksEngine2_Block_I_BE2_Block_TypeInfo_12d4dd8,1);
LAB_00604078:
  iVar1 = (*(code *)*puVar8)(plVar9,puVar8[1]);
  if (iVar1 != 1) {
    plVar9 = *(long **)(param_1 + 0x40);
    if (plVar9 == (long *)0x0) goto LAB_006048fc;
    lVar2 = *plVar9;
    if ((ulong)*(ushort *)(lVar2 + 0x12a) != 0) {
      uVar5 = 0;
      piVar6 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == _MG_BlocksEngine2_Block_I_BE2_Block_TypeInfo_12d4dd8) {
          puVar8 = (undefined8 *)(lVar2 + (long)(*piVar6 + 1) * 0x10 + 0x138);
          goto LAB_00604304;
        }
        uVar5 = uVar5 + 1;
        piVar6 = piVar6 + 4;
      } while (uVar5 < *(ushort *)(lVar2 + 0x12a));
    }
    puVar8 = (undefined8 *)
             native_sub_3c9b34(plVar9,_MG_BlocksEngine2_Block_I_BE2_Block_TypeInfo_12d4dd8,1);
LAB_00604304:
    iVar1 = (*(code *)*puVar8)(plVar9,puVar8[1]);
    if ((iVar1 != 2) &&
       (uVar5 = native_MG_BlocksEngine2_Utils_BE2_BlockUtils__BlockIsFunction_56f1f0
                          (*(undefined8 *)(param_1 + 0x40),0), (uVar5 & 1) == 0)) {
      plVar12 = *(long **)(param_1 + 0x48);
      if (plVar12 == (long *)0x0) goto LAB_006048fc;
      lVar2 = *plVar12;
      uVar7 = *(undefined4 *)(param_1 + 0x30);
      if ((ulong)*(ushort *)(lVar2 + 0x12a) != 0) {
        uVar5 = 0;
        piVar6 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
        do {
          if (*(long *)(piVar6 + -2) == _MG_BlocksEngine2_Core_I_BE2_BlocksStack_TypeInfo_12d4e10) {
            puVar8 = (undefined8 *)(lVar2 + (long)(*piVar6 + 7) * 0x10 + 0x138);
            goto LAB_006047e0;
          }
          uVar5 = uVar5 + 1;
          piVar6 = piVar6 + 4;
        } while (uVar5 < *(ushort *)(lVar2 + 0x12a));
      }
      puVar8 = (undefined8 *)
               native_sub_3c9b34(plVar12,_MG_BlocksEngine2_Core_I_BE2_BlocksStack_TypeInfo_12d4e10,7
                                );
LAB_006047e0:
      (*(code *)*puVar8)(plVar12,uVar7,puVar8[1]);
      plVar9 = *(long **)(param_1 + 0x48);
      if (plVar9 == (long *)0x0) goto LAB_006048fc;
      lVar2 = *plVar9;
      if ((ulong)*(ushort *)(lVar2 + 0x12a) != 0) {
        uVar5 = 0;
        piVar6 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
        do {
          if (*(long *)(piVar6 + -2) == _MG_BlocksEngine2_Core_I_BE2_BlocksStack_TypeInfo_12d4e10) {
            puVar8 = (undefined8 *)(lVar2 + (long)(*piVar6 + 3) * 0x10 + 0x138);
            goto LAB_006048ec;
          }
          uVar5 = uVar5 + 1;
          piVar6 = piVar6 + 4;
        } while (uVar5 < *(ushort *)(lVar2 + 0x12a));
      }
      puVar8 = (undefined8 *)
               native_sub_3c9b34(plVar9,_MG_BlocksEngine2_Core_I_BE2_BlocksStack_TypeInfo_12d4e10,3)
      ;
LAB_006048ec:
      UNRECOVERED_JUMPTABLE = (code *)*puVar8;
      uVar13 = puVar8[1];
      uVar7 = 0;
      goto LAB_006047b8;
    }
  }
  plVar9 = *(long **)(param_1 + 0x48);
  if (plVar9 == (long *)0x0) goto LAB_006048fc;
  lVar2 = *plVar9;
  if ((ulong)*(ushort *)(lVar2 + 0x12a) != 0) {
    uVar5 = 0;
    piVar6 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
    do {
      if (*(long *)(piVar6 + -2) == _MG_BlocksEngine2_Core_I_BE2_BlocksStack_TypeInfo_12d4e10) {
        puVar8 = (undefined8 *)(lVar2 + (long)(*piVar6 + 4) * 0x10 + 0x138);
        goto LAB_00604388;
      }
      uVar5 = uVar5 + 1;
      piVar6 = piVar6 + 4;
    } while (uVar5 < *(ushort *)(lVar2 + 0x12a));
  }
  puVar8 = (undefined8 *)
           native_sub_3c9b34(plVar9,_MG_BlocksEngine2_Core_I_BE2_BlocksStack_TypeInfo_12d4e10,4);
LAB_00604388:
  iVar1 = (*(code *)*puVar8)(plVar9,puVar8[1]);
  lVar2 = *plVar9;
  iVar1 = iVar1 + 1;
  if ((ulong)*(ushort *)(lVar2 + 0x12a) != 0) {
    uVar5 = 0;
    piVar6 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
    do {
      if (*(long *)(piVar6 + -2) == _MG_BlocksEngine2_Core_I_BE2_BlocksStack_TypeInfo_12d4e10)
      goto LAB_0060489c;
      uVar5 = uVar5 + 1;
      piVar6 = piVar6 + 4;
    } while (uVar5 < *(ushort *)(lVar2 + 0x12a));
  }
LAB_006043d0:
  puVar8 = (undefined8 *)
           native_sub_3c9b34(plVar9,_MG_BlocksEngine2_Core_I_BE2_BlocksStack_TypeInfo_12d4e10,5);
LAB_006048ac:
  (*(code *)*puVar8)(plVar9,iVar1,puVar8[1]);
LAB_006048c4:
  if ((bRam000000000133ee63 & 1) == 0) {
    native_sub_43273c(&MG_BlocksEngine2_Core_I_BE2_BlocksStack_TypeInfo_12d4e10);
    native_sub_43273c(&MG_BlocksEngine2_Block_Instruction_I_BE2_Instruction_TypeInfo_12d4e28);
    native_sub_43273c(&Method_UnityEngine_Events_UnityEvent_I_BE2_Instruction__Invoke___12de478);
    bRam000000000133ee63 = 1;
  }
  plVar9 = *(long **)(param_1 + 0x48);
  if (plVar9 != (long *)0x0) {
    lVar2 = *plVar9;
    if ((ulong)*(ushort *)(lVar2 + 0x12a) != 0) {
      uVar5 = 0;
      piVar6 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == _MG_BlocksEngine2_Core_I_BE2_BlocksStack_TypeInfo_12d4e10) {
          puVar8 = (undefined8 *)(lVar2 + (long)(*piVar6 + 0xb) * 0x10 + 0x138);
          goto LAB_00611f54;
        }
        uVar5 = uVar5 + 1;
        piVar6 = piVar6 + 4;
      } while (uVar5 < *(ushort *)(lVar2 + 0x12a));
    }
    puVar8 = (undefined8 *)
             native_sub_3c9b34(plVar9,_MG_BlocksEngine2_Core_I_BE2_BlocksStack_TypeInfo_12d4e10,0xb)
    ;
LAB_00611f54:
    lVar2 = (*(code *)*puVar8)(plVar9,puVar8[1]);
    if ((lVar2 != 0) &&
       (native_UnityEngine_Events_UnityEvent_BaseEventData___Invoke_8a0108
                  (lVar2,plVar12,
                   _Method_UnityEngine_Events_UnityEvent_I_BE2_Instruction__Invoke___12de478),
       plVar12 != (long *)0x0)) {
      lVar2 = *plVar12;
      if ((ulong)*(ushort *)(lVar2 + 0x12a) != 0) {
        uVar5 = 0;
        piVar6 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
        do {
          if (*(long *)(piVar6 + -2) ==
              _MG_BlocksEngine2_Block_Instruction_I_BE2_Instruction_TypeInfo_12d4e28) {
            puVar8 = (undefined8 *)(lVar2 + (long)(*piVar6 + 3) * 0x10 + 0x138);
            goto LAB_00611fdc;
          }
          uVar5 = uVar5 + 1;
          piVar6 = piVar6 + 4;
        } while (uVar5 < *(ushort *)(lVar2 + 0x12a));
      }
      puVar8 = (undefined8 *)
               native_sub_3c9b34(plVar12,
                                 _MG_BlocksEngine2_Block_Instruction_I_BE2_Instruction_TypeInfo_12d4e28
                                 ,3);
LAB_00611fdc:
                    /* WARNING: Could not recover jumptable at 0x00611ff0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)*puVar8)(plVar12,puVar8[1]);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
LAB_0060489c:
  puVar8 = (undefined8 *)(lVar2 + (long)(*piVar6 + 5) * 0x10 + 0x138);
  goto LAB_006048ac;
}



/* BE2_Ins_TranslateToPosition$$.ctor @ 0x60e178
 * void BE2_Ins_TranslateToPosition___ctor (BE2_Ins_TranslateToPosition_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* BE2_Ins_TranslateToPosition$$.ctor
   void BE2_Ins_TranslateToPosition___ctor (BE2_Ins_TranslateToPosition_o* __this, const MethodInfo*
   method); */

undefined1  [16] native_BE2_Ins_TranslateToPosition___ctor_60e178(ulong param_1)

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


