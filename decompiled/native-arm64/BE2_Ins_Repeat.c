/* ARM64 IL2CPP native pseudocode from Ghidra.
 * Recovered implementation, not original C# source.
 * Function boundaries follow the IL2CPP method address table. */


/* BE2_Ins_Repeat$$OnButtonStop @ 0x60c150
 * void BE2_Ins_Repeat__OnButtonStop (BE2_Ins_Repeat_o* __this, const MethodInfo* method); */

/* BE2_Ins_Repeat$$OnButtonStop
   void BE2_Ins_Repeat__OnButtonStop (BE2_Ins_Repeat_o* __this, const MethodInfo* method); */

void native_BE2_Ins_Repeat__OnButtonStop_60c150(long param_1)

{
  *(undefined4 *)(param_1 + 0x80) = 0;
  return;
}



/* BE2_Ins_Repeat$$OnStackActive @ 0x60c158
 * void BE2_Ins_Repeat__OnStackActive (BE2_Ins_Repeat_o* __this, const MethodInfo* method); */

/* BE2_Ins_Repeat$$OnStackActive
   void BE2_Ins_Repeat__OnStackActive (BE2_Ins_Repeat_o* __this, const MethodInfo* method); */

void native_BE2_Ins_Repeat__OnStackActive_60c158(long param_1)

{
  *(undefined4 *)(param_1 + 0x80) = 0;
  return;
}



/* BE2_Ins_Repeat$$Function @ 0x60c160
 * void BE2_Ins_Repeat__Function (BE2_Ins_Repeat_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* BE2_Ins_Repeat$$Function
   void BE2_Ins_Repeat__Function (BE2_Ins_Repeat_o* __this, const MethodInfo* method); */

void native_BE2_Ins_Repeat__Function_60c160(long param_1)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  code *UNRECOVERED_JUMPTABLE_00;
  long lVar4;
  long lVar5;
  ulong uVar6;
  int *piVar7;
  undefined4 uVar8;
  undefined8 *puVar9;
  long *plVar10;
  long *plVar11;
  float fVar12;
  
  if ((bRam000000000133ee2c & 1) == 0) {
    native_sub_43273c(&MG_BlocksEngine2_Block_I_BE2_BlockSectionHeaderInput_TypeInfo_12d4e00);
    bRam000000000133ee2c = 1;
  }
  lVar3 = native_MG_BlocksEngine2_Block_Instruction_BE2_InstructionBase__get_Section0Inputs_603b78
                    (param_1);
  if (lVar3 == 0) {
LAB_0060c270:
                    /* WARNING: Subroutine does not return */
    native_sub_432810();
  }
  if (*(int *)(lVar3 + 0x18) == 0) {
    uVar2 = native_sub_43283c();
                    /* WARNING: Subroutine does not return */
    native_sub_4327dc(uVar2,0);
  }
  puVar9 = (undefined8 *)(param_1 + 0x78);
  *puVar9 = *(undefined8 *)(lVar3 + 0x20);
  native_sub_4326e0(puVar9);
  plVar10 = (long *)*puVar9;
  if (plVar10 == (long *)0x0) goto LAB_0060c270;
  lVar3 = *plVar10;
  if ((ulong)*(ushort *)(lVar3 + 0x12a) != 0) {
    uVar6 = 0;
    piVar7 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
    do {
      if (*(long *)(piVar7 + -2) ==
          _MG_BlocksEngine2_Block_I_BE2_BlockSectionHeaderInput_TypeInfo_12d4e00) {
        puVar9 = (undefined8 *)(lVar3 + (long)(*piVar7 + 2) * 0x10 + 0x138);
        goto LAB_0060c220;
      }
      uVar6 = uVar6 + 1;
      piVar7 = piVar7 + 4;
    } while (uVar6 < *(ushort *)(lVar3 + 0x12a));
  }
  puVar9 = (undefined8 *)
           native_sub_3c9b34(plVar10,
                             _MG_BlocksEngine2_Block_I_BE2_BlockSectionHeaderInput_TypeInfo_12d4e00,
                             2);
LAB_0060c220:
  fVar12 = (float)(*(code *)*puVar9)(plVar10,puVar9[1]);
  *(float *)(param_1 + 0x84) = fVar12;
  if (fVar12 == (float)*(int *)(param_1 + 0x80)) {
    *(undefined4 *)(param_1 + 0x80) = 0;
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
      uVar6 = 0;
      piVar7 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == _MG_BlocksEngine2_Core_I_BE2_BlocksStack_TypeInfo_12d4e10) {
          puVar9 = (undefined8 *)(lVar3 + (long)(*piVar7 + 9) * 0x10 + 0x138);
          goto LAB_00603cfc;
        }
        uVar6 = uVar6 + 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 < *(ushort *)(lVar3 + 0x12a));
    }
    puVar9 = (undefined8 *)
             native_sub_3c9b34(plVar10,_MG_BlocksEngine2_Core_I_BE2_BlocksStack_TypeInfo_12d4e10,9);
LAB_00603cfc:
    lVar3 = (*(code *)*puVar9)(plVar10,puVar9[1]);
    if (lVar3 == 0) goto LAB_006048fc;
    iVar1 = *(int *)(param_1 + 0x30);
    plVar10 = *(long **)(param_1 + 0x48);
    if (*(int *)(lVar3 + 0x18) <= iVar1) {
      if (plVar10 == (long *)0x0) goto LAB_006048fc;
      lVar3 = *plVar10;
      if ((ulong)*(ushort *)(lVar3 + 0x12a) != 0) {
        uVar6 = 0;
        piVar7 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
        do {
          if (*(long *)(piVar7 + -2) == _MG_BlocksEngine2_Core_I_BE2_BlocksStack_TypeInfo_12d4e10) {
            puVar9 = (undefined8 *)(lVar3 + (long)(*piVar7 + 7) * 0x10 + 0x138);
            goto LAB_00603e50;
          }
          uVar6 = uVar6 + 1;
          piVar7 = piVar7 + 4;
        } while (uVar6 < *(ushort *)(lVar3 + 0x12a));
      }
      puVar9 = (undefined8 *)
               native_sub_3c9b34(plVar10,_MG_BlocksEngine2_Core_I_BE2_BlocksStack_TypeInfo_12d4e10,7
                                );
LAB_00603e50:
      (*(code *)*puVar9)(plVar10,iVar1,puVar9[1]);
      plVar10 = *(long **)(param_1 + 0x48);
      if (plVar10 == (long *)0x0) goto LAB_006048fc;
      lVar3 = *plVar10;
      if ((ulong)*(ushort *)(lVar3 + 0x12a) != 0) {
        uVar6 = 0;
        piVar7 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
        do {
          if (*(long *)(piVar7 + -2) == _MG_BlocksEngine2_Core_I_BE2_BlocksStack_TypeInfo_12d4e10) {
            puVar9 = (undefined8 *)(lVar3 + (long)(*piVar7 + 0xf) * 0x10 + 0x138);
            goto LAB_00603ec0;
          }
          uVar6 = uVar6 + 1;
          piVar7 = piVar7 + 4;
        } while (uVar6 < *(ushort *)(lVar3 + 0x12a));
      }
      puVar9 = (undefined8 *)
               native_sub_3c9b34(plVar10,_MG_BlocksEngine2_Core_I_BE2_BlocksStack_TypeInfo_12d4e10,
                                 0xf);
LAB_00603ec0:
      uVar6 = (*(code *)*puVar9)(plVar10,puVar9[1]);
      if ((uVar6 & 1) == 0) {
        return;
      }
      plVar10 = *(long **)(param_1 + 0x40);
      if (plVar10 == (long *)0x0) goto LAB_006048fc;
      lVar3 = *plVar10;
      if ((ulong)*(ushort *)(lVar3 + 0x12a) != 0) {
        uVar6 = 0;
        piVar7 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
        do {
          if (*(long *)(piVar7 + -2) == _MG_BlocksEngine2_Block_I_BE2_Block_TypeInfo_12d4dd8) {
            puVar9 = (undefined8 *)(lVar3 + (long)(*piVar7 + 1) * 0x10 + 0x138);
            goto LAB_00604004;
          }
          uVar6 = uVar6 + 1;
          piVar7 = piVar7 + 4;
        } while (uVar6 < *(ushort *)(lVar3 + 0x12a));
      }
      puVar9 = (undefined8 *)
               native_sub_3c9b34(plVar10,_MG_BlocksEngine2_Block_I_BE2_Block_TypeInfo_12d4dd8,1);
LAB_00604004:
      iVar1 = (*(code *)*puVar9)(plVar10,puVar9[1]);
      if (iVar1 != 1) {
        plVar10 = *(long **)(param_1 + 0x40);
        if (plVar10 == (long *)0x0) goto LAB_006048fc;
        lVar3 = *plVar10;
        if ((ulong)*(ushort *)(lVar3 + 0x12a) != 0) {
          uVar6 = 0;
          piVar7 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
          do {
            if (*(long *)(piVar7 + -2) == _MG_BlocksEngine2_Block_I_BE2_Block_TypeInfo_12d4dd8) {
              puVar9 = (undefined8 *)(lVar3 + (long)(*piVar7 + 1) * 0x10 + 0x138);
              goto LAB_00604244;
            }
            uVar6 = uVar6 + 1;
            piVar7 = piVar7 + 4;
          } while (uVar6 < *(ushort *)(lVar3 + 0x12a));
        }
        puVar9 = (undefined8 *)
                 native_sub_3c9b34(plVar10,_MG_BlocksEngine2_Block_I_BE2_Block_TypeInfo_12d4dd8,1);
LAB_00604244:
        iVar1 = (*(code *)*puVar9)(plVar10,puVar9[1]);
        if (iVar1 != 2) {
          return;
        }
      }
      plVar10 = *(long **)(param_1 + 0x48);
      if (plVar10 == (long *)0x0) goto LAB_006048fc;
      lVar3 = *plVar10;
      if ((ulong)*(ushort *)(lVar3 + 0x12a) != 0) {
        uVar6 = 0;
        piVar7 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
        do {
          if (*(long *)(piVar7 + -2) == _MG_BlocksEngine2_Core_I_BE2_BlocksStack_TypeInfo_12d4e10) {
            puVar9 = (undefined8 *)(lVar3 + (long)(*piVar7 + 9) * 0x10 + 0x138);
            goto LAB_006042d0;
          }
          uVar6 = uVar6 + 1;
          piVar7 = piVar7 + 4;
        } while (uVar6 < *(ushort *)(lVar3 + 0x12a));
      }
      puVar9 = (undefined8 *)
               native_sub_3c9b34(plVar10,_MG_BlocksEngine2_Core_I_BE2_BlocksStack_TypeInfo_12d4e10,9
                                );
LAB_006042d0:
      lVar3 = (*(code *)*puVar9)(plVar10,puVar9[1]);
      if (lVar3 == 0) goto LAB_006048fc;
      if (*(int *)(lVar3 + 0x18) == 0) goto LAB_00604900;
      plVar10 = *(long **)(lVar3 + 0x20);
      goto native_MG_BlocksEngine2_Block_Instruction_BE2_InstructionBase__ExecuteInstruction_611e9c;
    }
    if (plVar10 == (long *)0x0) goto LAB_006048fc;
    lVar3 = *plVar10;
    if ((ulong)*(ushort *)(lVar3 + 0x12a) != 0) {
      uVar6 = 0;
      piVar7 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == _MG_BlocksEngine2_Core_I_BE2_BlocksStack_TypeInfo_12d4e10) {
          puVar9 = (undefined8 *)(lVar3 + (long)(*piVar7 + 9) * 0x10 + 0x138);
          goto LAB_00603dc8;
        }
        uVar6 = uVar6 + 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 < *(ushort *)(lVar3 + 0x12a));
    }
    puVar9 = (undefined8 *)
             native_sub_3c9b34(plVar10,_MG_BlocksEngine2_Core_I_BE2_BlocksStack_TypeInfo_12d4e10,9);
LAB_00603dc8:
    lVar3 = (*(code *)*puVar9)(plVar10,puVar9[1]);
    if (lVar3 == 0) goto LAB_006048fc;
    if (*(uint *)(lVar3 + 0x18) <= *(uint *)(param_1 + 0x30)) {
LAB_00604900:
      uVar2 = native_sub_43283c();
                    /* WARNING: Subroutine does not return */
      native_sub_4327dc(uVar2,0);
    }
    plVar11 = *(long **)(param_1 + 0x48);
    if (plVar11 == (long *)0x0) goto LAB_006048fc;
    lVar4 = *plVar11;
    plVar10 = *(long **)(lVar3 + (long)(int)*(uint *)(param_1 + 0x30) * 8 + 0x20);
    if ((ulong)*(ushort *)(lVar4 + 0x12a) != 0) {
      uVar6 = 0;
      piVar7 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == _MG_BlocksEngine2_Core_I_BE2_BlocksStack_TypeInfo_12d4e10) {
          puVar9 = (undefined8 *)(lVar4 + (long)(*piVar7 + 0xf) * 0x10 + 0x138);
          goto LAB_00603f38;
        }
        uVar6 = uVar6 + 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 < *(ushort *)(lVar4 + 0x12a));
    }
    puVar9 = (undefined8 *)
             native_sub_3c9b34(plVar11,_MG_BlocksEngine2_Core_I_BE2_BlocksStack_TypeInfo_12d4e10,0xf
                              );
LAB_00603f38:
    uVar6 = (*(code *)*puVar9)(plVar11,puVar9[1]);
    if ((uVar6 & 1) == 0) {
      if (plVar10 == (long *)0x0) goto LAB_006048fc;
      lVar3 = *plVar10;
      if ((ulong)*(ushort *)(lVar3 + 0x12a) != 0) {
        uVar6 = 0;
        piVar7 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
        do {
          if (*(long *)(piVar7 + -2) ==
              _MG_BlocksEngine2_Block_Instruction_I_BE2_Instruction_TypeInfo_12d4e28) {
            puVar9 = (undefined8 *)(lVar3 + (long)*piVar7 * 0x10 + 0x138);
            goto LAB_006040e8;
          }
          uVar6 = uVar6 + 1;
          piVar7 = piVar7 + 4;
        } while (uVar6 < *(ushort *)(lVar3 + 0x12a));
      }
      puVar9 = (undefined8 *)
               native_sub_3c9b34(plVar10,
                                 _MG_BlocksEngine2_Block_Instruction_I_BE2_Instruction_TypeInfo_12d4e28
                                 ,0);
LAB_006040e8:
      plVar11 = (long *)(*(code *)*puVar9)(plVar10,puVar9[1]);
      if (plVar11 == (long *)0x0) goto LAB_006048fc;
      lVar3 = *plVar11;
      if ((ulong)*(ushort *)(lVar3 + 0x12a) != 0) {
        uVar6 = 0;
        piVar7 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
        do {
          if (*(long *)(piVar7 + -2) ==
              _MG_BlocksEngine2_Block_Instruction_I_BE2_InstructionBase_TypeInfo_12d4e30) {
            puVar9 = (undefined8 *)(lVar3 + (long)(*piVar7 + 3) * 0x10 + 0x138);
            goto LAB_0060415c;
          }
          uVar6 = uVar6 + 1;
          piVar7 = piVar7 + 4;
        } while (uVar6 < *(ushort *)(lVar3 + 0x12a));
      }
      puVar9 = (undefined8 *)
               native_sub_3c9b34(plVar11,
                                 _MG_BlocksEngine2_Block_Instruction_I_BE2_InstructionBase_TypeInfo_12d4e30
                                 ,3);
LAB_0060415c:
      plVar11 = (long *)(*(code *)*puVar9)(plVar11,puVar9[1]);
      if (plVar11 == (long *)0x0) goto LAB_006048fc;
      lVar3 = *plVar11;
      if ((ulong)*(ushort *)(lVar3 + 0x12a) != 0) {
        uVar6 = 0;
        piVar7 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
        do {
          if (*(long *)(piVar7 + -2) == _MG_BlocksEngine2_Block_I_BE2_Block_TypeInfo_12d4dd8) {
            puVar9 = (undefined8 *)(lVar3 + (long)(*piVar7 + 1) * 0x10 + 0x138);
            goto LAB_006041d0;
          }
          uVar6 = uVar6 + 1;
          piVar7 = piVar7 + 4;
        } while (uVar6 < *(ushort *)(lVar3 + 0x12a));
      }
      puVar9 = (undefined8 *)
               native_sub_3c9b34(plVar11,_MG_BlocksEngine2_Block_I_BE2_Block_TypeInfo_12d4dd8,1);
LAB_006041d0:
      iVar1 = (*(code *)*puVar9)(plVar11,puVar9[1]);
      if (iVar1 == 4) {
        plVar11 = *(long **)(param_1 + 0x48);
        if (plVar11 == (long *)0x0) goto LAB_006048fc;
        lVar3 = *plVar11;
        if ((ulong)*(ushort *)(lVar3 + 0x12a) != 0) {
          uVar6 = 0;
          piVar7 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
          do {
            if (*(long *)(piVar7 + -2) == _MG_BlocksEngine2_Core_I_BE2_BlocksStack_TypeInfo_12d4e10)
            {
              puVar9 = (undefined8 *)(lVar3 + (long)(*piVar7 + 0x14) * 0x10 + 0x138);
              goto LAB_006043f0;
            }
            uVar6 = uVar6 + 1;
            piVar7 = piVar7 + 4;
          } while (uVar6 < *(ushort *)(lVar3 + 0x12a));
        }
        puVar9 = (undefined8 *)
                 native_sub_3c9b34(plVar11,_MG_BlocksEngine2_Core_I_BE2_BlocksStack_TypeInfo_12d4e10
                                   ,0x14);
LAB_006043f0:
        lVar3 = (*(code *)*puVar9)(plVar11,puVar9[1]);
        if (lVar3 == 0) goto LAB_006048fc;
        native_UnityEngine_Events_UnityEvent__Invoke_773864(lVar3,0);
      }
      plVar11 = *(long **)(param_1 + 0x48);
      if (plVar11 == (long *)0x0) goto LAB_006048fc;
      lVar3 = *plVar11;
      if ((ulong)*(ushort *)(lVar3 + 0x12a) != 0) {
        uVar6 = 0;
        piVar7 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
        do {
          if (*(long *)(piVar7 + -2) == _MG_BlocksEngine2_Core_I_BE2_BlocksStack_TypeInfo_12d4e10) {
            puVar9 = (undefined8 *)(lVar3 + (long)(*piVar7 + 2) * 0x10 + 0x138);
            goto LAB_00604468;
          }
          uVar6 = uVar6 + 1;
          piVar7 = piVar7 + 4;
        } while (uVar6 < *(ushort *)(lVar3 + 0x12a));
      }
      puVar9 = (undefined8 *)
               native_sub_3c9b34(plVar11,_MG_BlocksEngine2_Core_I_BE2_BlocksStack_TypeInfo_12d4e10,2
                                );
LAB_00604468:
      uVar6 = (*(code *)*puVar9)(plVar11,puVar9[1]);
      if ((uVar6 & 1) != 0) {
        lVar3 = *plVar10;
        if ((ulong)*(ushort *)(lVar3 + 0x12a) != 0) {
          uVar6 = 0;
          piVar7 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
          do {
            if (*(long *)(piVar7 + -2) ==
                _MG_BlocksEngine2_Block_Instruction_I_BE2_Instruction_TypeInfo_12d4e28) {
              puVar9 = (undefined8 *)(lVar3 + (long)(*piVar7 + 1) * 0x10 + 0x138);
              goto LAB_006044d0;
            }
            uVar6 = uVar6 + 1;
            piVar7 = piVar7 + 4;
          } while (uVar6 < *(ushort *)(lVar3 + 0x12a));
        }
        puVar9 = (undefined8 *)
                 native_sub_3c9b34(plVar10,
                                   _MG_BlocksEngine2_Block_Instruction_I_BE2_Instruction_TypeInfo_12d4e28
                                   ,1);
LAB_006044d0:
        uVar6 = (*(code *)*puVar9)(plVar10,puVar9[1]);
        if ((uVar6 & 1) == 0) {
          plVar11 = *(long **)(param_1 + 0x48);
          if (plVar11 == (long *)0x0) goto LAB_006048fc;
          lVar3 = *plVar11;
          if ((ulong)*(ushort *)(lVar3 + 0x12a) != 0) {
            uVar6 = 0;
            piVar7 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
            do {
              if (*(long *)(piVar7 + -2) ==
                  _MG_BlocksEngine2_Core_I_BE2_BlocksStack_TypeInfo_12d4e10) {
                puVar9 = (undefined8 *)(lVar3 + (long)(*piVar7 + 4) * 0x10 + 0x138);
                goto LAB_00604594;
              }
              uVar6 = uVar6 + 1;
              piVar7 = piVar7 + 4;
            } while (uVar6 < *(ushort *)(lVar3 + 0x12a));
          }
          puVar9 = (undefined8 *)
                   native_sub_3c9b34(plVar11,
                                     _MG_BlocksEngine2_Core_I_BE2_BlocksStack_TypeInfo_12d4e10,4);
LAB_00604594:
          iVar1 = (*(code *)*puVar9)(plVar11,puVar9[1]);
          if (iVar1 < *(int *)(param_1 + 0x60)) {
            plVar11 = *(long **)(param_1 + 0x48);
            if (plVar11 == (long *)0x0) goto LAB_006048fc;
            lVar3 = *plVar11;
            if ((ulong)*(ushort *)(lVar3 + 0x12a) != 0) {
              uVar6 = 0;
              piVar7 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
              do {
                if (*(long *)(piVar7 + -2) ==
                    _MG_BlocksEngine2_Core_I_BE2_BlocksStack_TypeInfo_12d4e10) {
                  puVar9 = (undefined8 *)(lVar3 + (long)(*piVar7 + 4) * 0x10 + 0x138);
                  goto LAB_00604850;
                }
                uVar6 = uVar6 + 1;
                piVar7 = piVar7 + 4;
              } while (uVar6 < *(ushort *)(lVar3 + 0x12a));
            }
            puVar9 = (undefined8 *)
                     native_sub_3c9b34(plVar11,
                                       _MG_BlocksEngine2_Core_I_BE2_BlocksStack_TypeInfo_12d4e10,4);
LAB_00604850:
            iVar1 = (*(code *)*puVar9)(plVar11,puVar9[1]);
            lVar3 = *plVar11;
            iVar1 = iVar1 + 1;
            if ((ulong)*(ushort *)(lVar3 + 0x12a) != 0) {
              uVar6 = 0;
              piVar7 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
              do {
                if (*(long *)(piVar7 + -2) ==
                    _MG_BlocksEngine2_Core_I_BE2_BlocksStack_TypeInfo_12d4e10) goto LAB_0060489c;
                uVar6 = uVar6 + 1;
                piVar7 = piVar7 + 4;
              } while (uVar6 < *(ushort *)(lVar3 + 0x12a));
            }
            goto LAB_006043d0;
          }
        }
      }
      lVar3 = *plVar10;
      plVar11 = *(long **)(param_1 + 0x48);
      if ((ulong)*(ushort *)(lVar3 + 0x12a) != 0) {
        uVar6 = 0;
        piVar7 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
        do {
          if (*(long *)(piVar7 + -2) ==
              _MG_BlocksEngine2_Block_Instruction_I_BE2_Instruction_TypeInfo_12d4e28) {
            puVar9 = (undefined8 *)(lVar3 + (long)*piVar7 * 0x10 + 0x138);
            goto LAB_00604654;
          }
          uVar6 = uVar6 + 1;
          piVar7 = piVar7 + 4;
        } while (uVar6 < *(ushort *)(lVar3 + 0x12a));
      }
      puVar9 = (undefined8 *)
               native_sub_3c9b34(plVar10,
                                 _MG_BlocksEngine2_Block_Instruction_I_BE2_Instruction_TypeInfo_12d4e28
                                 ,0);
LAB_00604654:
      plVar10 = (long *)(*(code *)*puVar9)(plVar10,puVar9[1]);
      if (plVar10 != (long *)0x0) {
        lVar3 = *plVar10;
        if ((ulong)*(ushort *)(lVar3 + 0x12a) != 0) {
          uVar6 = 0;
          piVar7 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
          do {
            if (*(long *)(piVar7 + -2) ==
                _MG_BlocksEngine2_Block_Instruction_I_BE2_InstructionBase_TypeInfo_12d4e30) {
              puVar9 = (undefined8 *)(lVar3 + (long)(*piVar7 + 3) * 0x10 + 0x138);
              goto LAB_006046c0;
            }
            uVar6 = uVar6 + 1;
            piVar7 = piVar7 + 4;
          } while (uVar6 < *(ushort *)(lVar3 + 0x12a));
        }
        puVar9 = (undefined8 *)
                 native_sub_3c9b34(plVar10,
                                   _MG_BlocksEngine2_Block_Instruction_I_BE2_InstructionBase_TypeInfo_12d4e30
                                   ,3);
LAB_006046c0:
        plVar10 = (long *)(*(code *)*puVar9)(plVar10,puVar9[1]);
        if (plVar10 != (long *)0x0) {
          lVar3 = *plVar10;
          if ((ulong)*(ushort *)(lVar3 + 0x12a) != 0) {
            uVar6 = 0;
            piVar7 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
            do {
              if (*(long *)(piVar7 + -2) == _MG_BlocksEngine2_Block_I_BE2_Block_TypeInfo_12d4dd8) {
                puVar9 = (undefined8 *)(lVar3 + (long)(*piVar7 + 1) * 0x10 + 0x138);
                goto LAB_0060472c;
              }
              uVar6 = uVar6 + 1;
              piVar7 = piVar7 + 4;
            } while (uVar6 < *(ushort *)(lVar3 + 0x12a));
          }
          puVar9 = (undefined8 *)
                   native_sub_3c9b34(plVar10,_MG_BlocksEngine2_Block_I_BE2_Block_TypeInfo_12d4dd8,1)
          ;
LAB_0060472c:
          iVar1 = (*(code *)*puVar9)(plVar10,puVar9[1]);
          if (iVar1 == 4) {
            uVar8 = 0;
          }
          else {
            uVar8 = *(undefined4 *)(param_1 + 0x30);
          }
          if (plVar11 != (long *)0x0) {
            lVar3 = *plVar11;
            if ((ulong)*(ushort *)(lVar3 + 0x12a) != 0) {
              uVar6 = 0;
              piVar7 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
              do {
                if (*(long *)(piVar7 + -2) ==
                    _MG_BlocksEngine2_Core_I_BE2_BlocksStack_TypeInfo_12d4e10) {
                  puVar9 = (undefined8 *)(lVar3 + (long)(*piVar7 + 7) * 0x10 + 0x138);
                  goto LAB_006047ac;
                }
                uVar6 = uVar6 + 1;
                piVar7 = piVar7 + 4;
              } while (uVar6 < *(ushort *)(lVar3 + 0x12a));
            }
            puVar9 = (undefined8 *)
                     native_sub_3c9b34(plVar11,
                                       _MG_BlocksEngine2_Core_I_BE2_BlocksStack_TypeInfo_12d4e10,7);
LAB_006047ac:
            UNRECOVERED_JUMPTABLE_00 = (code *)*puVar9;
            uVar2 = puVar9[1];
LAB_006047b8:
                    /* WARNING: Could not recover jumptable at 0x006047cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (*UNRECOVERED_JUMPTABLE_00)(plVar11,uVar8,uVar2);
            return;
          }
        }
      }
LAB_006048fc:
                    /* WARNING: Subroutine does not return */
      native_sub_432810();
    }
    plVar11 = *(long **)(param_1 + 0x40);
    if (plVar11 == (long *)0x0) goto LAB_006048fc;
    lVar3 = *plVar11;
    if ((ulong)*(ushort *)(lVar3 + 0x12a) != 0) {
      uVar6 = 0;
      piVar7 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == _MG_BlocksEngine2_Block_I_BE2_Block_TypeInfo_12d4dd8) {
          puVar9 = (undefined8 *)(lVar3 + (long)(*piVar7 + 1) * 0x10 + 0x138);
          goto LAB_00604078;
        }
        uVar6 = uVar6 + 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 < *(ushort *)(lVar3 + 0x12a));
    }
    puVar9 = (undefined8 *)
             native_sub_3c9b34(plVar11,_MG_BlocksEngine2_Block_I_BE2_Block_TypeInfo_12d4dd8,1);
LAB_00604078:
    iVar1 = (*(code *)*puVar9)(plVar11,puVar9[1]);
    if (iVar1 != 1) {
      plVar11 = *(long **)(param_1 + 0x40);
      if (plVar11 == (long *)0x0) goto LAB_006048fc;
      lVar3 = *plVar11;
      if ((ulong)*(ushort *)(lVar3 + 0x12a) != 0) {
        uVar6 = 0;
        piVar7 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
        do {
          if (*(long *)(piVar7 + -2) == _MG_BlocksEngine2_Block_I_BE2_Block_TypeInfo_12d4dd8) {
            puVar9 = (undefined8 *)(lVar3 + (long)(*piVar7 + 1) * 0x10 + 0x138);
            goto LAB_00604304;
          }
          uVar6 = uVar6 + 1;
          piVar7 = piVar7 + 4;
        } while (uVar6 < *(ushort *)(lVar3 + 0x12a));
      }
      puVar9 = (undefined8 *)
               native_sub_3c9b34(plVar11,_MG_BlocksEngine2_Block_I_BE2_Block_TypeInfo_12d4dd8,1);
LAB_00604304:
      iVar1 = (*(code *)*puVar9)(plVar11,puVar9[1]);
      if ((iVar1 != 2) &&
         (uVar6 = native_MG_BlocksEngine2_Utils_BE2_BlockUtils__BlockIsFunction_56f1f0
                            (*(undefined8 *)(param_1 + 0x40),0), (uVar6 & 1) == 0)) {
        plVar10 = *(long **)(param_1 + 0x48);
        if (plVar10 == (long *)0x0) goto LAB_006048fc;
        lVar3 = *plVar10;
        uVar8 = *(undefined4 *)(param_1 + 0x30);
        if ((ulong)*(ushort *)(lVar3 + 0x12a) != 0) {
          uVar6 = 0;
          piVar7 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
          do {
            if (*(long *)(piVar7 + -2) == _MG_BlocksEngine2_Core_I_BE2_BlocksStack_TypeInfo_12d4e10)
            {
              puVar9 = (undefined8 *)(lVar3 + (long)(*piVar7 + 7) * 0x10 + 0x138);
              goto LAB_006047e0;
            }
            uVar6 = uVar6 + 1;
            piVar7 = piVar7 + 4;
          } while (uVar6 < *(ushort *)(lVar3 + 0x12a));
        }
        puVar9 = (undefined8 *)
                 native_sub_3c9b34(plVar10,_MG_BlocksEngine2_Core_I_BE2_BlocksStack_TypeInfo_12d4e10
                                   ,7);
LAB_006047e0:
        (*(code *)*puVar9)(plVar10,uVar8,puVar9[1]);
        plVar11 = *(long **)(param_1 + 0x48);
        if (plVar11 == (long *)0x0) goto LAB_006048fc;
        lVar3 = *plVar11;
        if ((ulong)*(ushort *)(lVar3 + 0x12a) != 0) {
          uVar6 = 0;
          piVar7 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
          do {
            if (*(long *)(piVar7 + -2) == _MG_BlocksEngine2_Core_I_BE2_BlocksStack_TypeInfo_12d4e10)
            {
              puVar9 = (undefined8 *)(lVar3 + (long)(*piVar7 + 3) * 0x10 + 0x138);
              goto LAB_006048ec;
            }
            uVar6 = uVar6 + 1;
            piVar7 = piVar7 + 4;
          } while (uVar6 < *(ushort *)(lVar3 + 0x12a));
        }
        puVar9 = (undefined8 *)
                 native_sub_3c9b34(plVar11,_MG_BlocksEngine2_Core_I_BE2_BlocksStack_TypeInfo_12d4e10
                                   ,3);
LAB_006048ec:
        UNRECOVERED_JUMPTABLE_00 = (code *)*puVar9;
        uVar2 = puVar9[1];
        uVar8 = 0;
        goto LAB_006047b8;
      }
    }
    plVar11 = *(long **)(param_1 + 0x48);
    if (plVar11 == (long *)0x0) goto LAB_006048fc;
    lVar3 = *plVar11;
    if ((ulong)*(ushort *)(lVar3 + 0x12a) != 0) {
      uVar6 = 0;
      piVar7 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == _MG_BlocksEngine2_Core_I_BE2_BlocksStack_TypeInfo_12d4e10) {
          puVar9 = (undefined8 *)(lVar3 + (long)(*piVar7 + 4) * 0x10 + 0x138);
          goto LAB_00604388;
        }
        uVar6 = uVar6 + 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 < *(ushort *)(lVar3 + 0x12a));
    }
    puVar9 = (undefined8 *)
             native_sub_3c9b34(plVar11,_MG_BlocksEngine2_Core_I_BE2_BlocksStack_TypeInfo_12d4e10,4);
LAB_00604388:
    iVar1 = (*(code *)*puVar9)(plVar11,puVar9[1]);
    lVar3 = *plVar11;
    iVar1 = iVar1 + 1;
    if ((ulong)*(ushort *)(lVar3 + 0x12a) != 0) {
      uVar6 = 0;
      piVar7 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == _MG_BlocksEngine2_Core_I_BE2_BlocksStack_TypeInfo_12d4e10)
        goto LAB_0060489c;
        uVar6 = uVar6 + 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 < *(ushort *)(lVar3 + 0x12a));
    }
LAB_006043d0:
    puVar9 = (undefined8 *)
             native_sub_3c9b34(plVar11,_MG_BlocksEngine2_Core_I_BE2_BlocksStack_TypeInfo_12d4e10,5);
    goto LAB_006048ac;
  }
  *(int *)(param_1 + 0x80) = *(int *)(param_1 + 0x80) + 1;
  if ((bRam000000000133ee61 & 1) == 0) {
    native_sub_43273c(&MG_BlocksEngine2_Block_I_BE2_Block_TypeInfo_12d4dd8);
    native_sub_43273c(&MG_BlocksEngine2_Core_I_BE2_BlocksStack_TypeInfo_12d4e10);
    native_sub_43273c(&MG_BlocksEngine2_Block_Instruction_I_BE2_InstructionBase_TypeInfo_12d4e30);
    native_sub_43273c(&MG_BlocksEngine2_Block_Instruction_I_BE2_Instruction_TypeInfo_12d4e28);
    bRam000000000133ee61 = 1;
  }
  plVar10 = *(long **)(param_1 + 0x48);
  if (plVar10 == (long *)0x0) goto LAB_00609ef0;
  lVar3 = *plVar10;
  if ((ulong)*(ushort *)(lVar3 + 0x12a) != 0) {
    uVar6 = 0;
    piVar7 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
    do {
      if (*(long *)(piVar7 + -2) == _MG_BlocksEngine2_Core_I_BE2_BlocksStack_TypeInfo_12d4e10) {
        puVar9 = (undefined8 *)(lVar3 + (long)(*piVar7 + 9) * 0x10 + 0x138);
        goto LAB_006096b8;
      }
      uVar6 = uVar6 + 1;
      piVar7 = piVar7 + 4;
    } while (uVar6 < *(ushort *)(lVar3 + 0x12a));
  }
  puVar9 = (undefined8 *)
           native_sub_3c9b34(plVar10,_MG_BlocksEngine2_Core_I_BE2_BlocksStack_TypeInfo_12d4e10,9);
LAB_006096b8:
  lVar3 = (*(code *)*puVar9)(plVar10,puVar9[1]);
  if ((lVar3 == 0) || (lVar4 = *(long *)(param_1 + 0x58), lVar4 == 0)) goto LAB_00609ef0;
  if (*(int *)(lVar4 + 0x18) == 0) goto LAB_00609ef4;
  iVar1 = *(int *)(lVar4 + 0x20);
  plVar10 = *(long **)(param_1 + 0x48);
  if (*(int *)(lVar3 + 0x18) <= iVar1) {
    if (plVar10 == (long *)0x0) goto LAB_00609ef0;
    lVar3 = *plVar10;
    if ((ulong)*(ushort *)(lVar3 + 0x12a) != 0) {
      uVar6 = 0;
      piVar7 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == _MG_BlocksEngine2_Core_I_BE2_BlocksStack_TypeInfo_12d4e10) {
          puVar9 = (undefined8 *)(lVar3 + (long)(*piVar7 + 7) * 0x10 + 0x138);
          goto LAB_00609840;
        }
        uVar6 = uVar6 + 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 < *(ushort *)(lVar3 + 0x12a));
    }
    puVar9 = (undefined8 *)
             native_sub_3c9b34(plVar10,_MG_BlocksEngine2_Core_I_BE2_BlocksStack_TypeInfo_12d4e10,7);
LAB_00609840:
    UNRECOVERED_JUMPTABLE_00 = (code *)*puVar9;
    uVar2 = puVar9[1];
    goto LAB_00609ed8;
  }
  if (plVar10 == (long *)0x0) goto LAB_00609ef0;
  lVar3 = *plVar10;
  if ((ulong)*(ushort *)(lVar3 + 0x12a) != 0) {
    uVar6 = 0;
    piVar7 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
    do {
      if (*(long *)(piVar7 + -2) == _MG_BlocksEngine2_Core_I_BE2_BlocksStack_TypeInfo_12d4e10) {
        puVar9 = (undefined8 *)(lVar3 + (long)(*piVar7 + 9) * 0x10 + 0x138);
        goto LAB_006097a0;
      }
      uVar6 = uVar6 + 1;
      piVar7 = piVar7 + 4;
    } while (uVar6 < *(ushort *)(lVar3 + 0x12a));
  }
  puVar9 = (undefined8 *)
           native_sub_3c9b34(plVar10,_MG_BlocksEngine2_Core_I_BE2_BlocksStack_TypeInfo_12d4e10,9);
LAB_006097a0:
  lVar3 = (*(code *)*puVar9)(plVar10,puVar9[1]);
  lVar4 = *(long *)(param_1 + 0x58);
  if (lVar4 == 0) goto LAB_00609ef0;
  if (*(int *)(lVar4 + 0x18) == 0) goto LAB_00609ef4;
  if (lVar3 == 0) goto LAB_00609ef0;
  if (*(uint *)(lVar3 + 0x18) <= *(uint *)(lVar4 + 0x20)) goto LAB_00609ef4;
  plVar11 = *(long **)(param_1 + 0x48);
  if (plVar11 == (long *)0x0) goto LAB_00609ef0;
  lVar5 = *plVar11;
  plVar10 = *(long **)(lVar3 + (long)(int)*(uint *)(lVar4 + 0x20) * 8 + 0x20);
  if ((ulong)*(ushort *)(lVar5 + 0x12a) != 0) {
    uVar6 = 0;
    piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
    do {
      if (*(long *)(piVar7 + -2) == _MG_BlocksEngine2_Core_I_BE2_BlocksStack_TypeInfo_12d4e10) {
        puVar9 = (undefined8 *)(lVar5 + (long)(*piVar7 + 0xf) * 0x10 + 0x138);
        goto LAB_00609860;
      }
      uVar6 = uVar6 + 1;
      piVar7 = piVar7 + 4;
    } while (uVar6 < *(ushort *)(lVar5 + 0x12a));
  }
  puVar9 = (undefined8 *)
           native_sub_3c9b34(plVar11,_MG_BlocksEngine2_Core_I_BE2_BlocksStack_TypeInfo_12d4e10,0xf);
LAB_00609860:
  uVar6 = (*(code *)*puVar9)(plVar11,puVar9[1]);
  if ((uVar6 & 1) == 0) {
    if (plVar10 == (long *)0x0) goto LAB_00609ef0;
    lVar3 = *plVar10;
    if ((ulong)*(ushort *)(lVar3 + 0x12a) != 0) {
      uVar6 = 0;
      piVar7 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) ==
            _MG_BlocksEngine2_Block_Instruction_I_BE2_Instruction_TypeInfo_12d4e28) {
          puVar9 = (undefined8 *)(lVar3 + (long)*piVar7 * 0x10 + 0x138);
          goto LAB_006099ac;
        }
        uVar6 = uVar6 + 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 < *(ushort *)(lVar3 + 0x12a));
    }
    puVar9 = (undefined8 *)
             native_sub_3c9b34(plVar10,
                               _MG_BlocksEngine2_Block_Instruction_I_BE2_Instruction_TypeInfo_12d4e28
                               ,0);
LAB_006099ac:
    plVar11 = (long *)(*(code *)*puVar9)(plVar10,puVar9[1]);
    if (plVar11 == (long *)0x0) goto LAB_00609ef0;
    lVar3 = *plVar11;
    if ((ulong)*(ushort *)(lVar3 + 0x12a) != 0) {
      uVar6 = 0;
      piVar7 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) ==
            _MG_BlocksEngine2_Block_Instruction_I_BE2_InstructionBase_TypeInfo_12d4e30) {
          puVar9 = (undefined8 *)(lVar3 + (long)(*piVar7 + 3) * 0x10 + 0x138);
          goto LAB_00609a20;
        }
        uVar6 = uVar6 + 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 < *(ushort *)(lVar3 + 0x12a));
    }
    puVar9 = (undefined8 *)
             native_sub_3c9b34(plVar11,
                               _MG_BlocksEngine2_Block_Instruction_I_BE2_InstructionBase_TypeInfo_12d4e30
                               ,3);
LAB_00609a20:
    plVar11 = (long *)(*(code *)*puVar9)(plVar11,puVar9[1]);
    if (plVar11 == (long *)0x0) goto LAB_00609ef0;
    lVar3 = *plVar11;
    if ((ulong)*(ushort *)(lVar3 + 0x12a) != 0) {
      uVar6 = 0;
      piVar7 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == _MG_BlocksEngine2_Block_I_BE2_Block_TypeInfo_12d4dd8) {
          puVar9 = (undefined8 *)(lVar3 + (long)(*piVar7 + 1) * 0x10 + 0x138);
          goto LAB_00609a94;
        }
        uVar6 = uVar6 + 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 < *(ushort *)(lVar3 + 0x12a));
    }
    puVar9 = (undefined8 *)
             native_sub_3c9b34(plVar11,_MG_BlocksEngine2_Block_I_BE2_Block_TypeInfo_12d4dd8,1);
LAB_00609a94:
    iVar1 = (*(code *)*puVar9)(plVar11,puVar9[1]);
    if (iVar1 == 4) {
      plVar11 = *(long **)(param_1 + 0x48);
      if (plVar11 == (long *)0x0) goto LAB_00609ef0;
      lVar3 = *plVar11;
      if ((ulong)*(ushort *)(lVar3 + 0x12a) != 0) {
        uVar6 = 0;
        piVar7 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
        do {
          if (*(long *)(piVar7 + -2) == _MG_BlocksEngine2_Core_I_BE2_BlocksStack_TypeInfo_12d4e10) {
            puVar9 = (undefined8 *)(lVar3 + (long)(*piVar7 + 0x14) * 0x10 + 0x138);
            goto LAB_00609bd0;
          }
          uVar6 = uVar6 + 1;
          piVar7 = piVar7 + 4;
        } while (uVar6 < *(ushort *)(lVar3 + 0x12a));
      }
      puVar9 = (undefined8 *)
               native_sub_3c9b34(plVar11,_MG_BlocksEngine2_Core_I_BE2_BlocksStack_TypeInfo_12d4e10,
                                 0x14);
LAB_00609bd0:
      lVar3 = (*(code *)*puVar9)(plVar11,puVar9[1]);
      if (lVar3 == 0) goto LAB_00609ef0;
      native_UnityEngine_Events_UnityEvent__Invoke_773864(lVar3,0);
    }
    lVar3 = *plVar10;
    if ((ulong)*(ushort *)(lVar3 + 0x12a) != 0) {
      uVar6 = 0;
      piVar7 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) ==
            _MG_BlocksEngine2_Block_Instruction_I_BE2_Instruction_TypeInfo_12d4e28) {
          puVar9 = (undefined8 *)(lVar3 + (long)(*piVar7 + 1) * 0x10 + 0x138);
          goto LAB_00609c40;
        }
        uVar6 = uVar6 + 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 < *(ushort *)(lVar3 + 0x12a));
    }
    puVar9 = (undefined8 *)
             native_sub_3c9b34(plVar10,
                               _MG_BlocksEngine2_Block_Instruction_I_BE2_Instruction_TypeInfo_12d4e28
                               ,1);
LAB_00609c40:
    uVar6 = (*(code *)*puVar9)(plVar10,puVar9[1]);
    if ((uVar6 & 1) == 0) {
      plVar11 = *(long **)(param_1 + 0x48);
      if (plVar11 == (long *)0x0) goto LAB_00609ef0;
      lVar3 = *plVar11;
      if ((ulong)*(ushort *)(lVar3 + 0x12a) != 0) {
        uVar6 = 0;
        piVar7 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
        do {
          if (*(long *)(piVar7 + -2) == _MG_BlocksEngine2_Core_I_BE2_BlocksStack_TypeInfo_12d4e10) {
            puVar9 = (undefined8 *)(lVar3 + (long)(*piVar7 + 4) * 0x10 + 0x138);
            goto LAB_00609cb0;
          }
          uVar6 = uVar6 + 1;
          piVar7 = piVar7 + 4;
        } while (uVar6 < *(ushort *)(lVar3 + 0x12a));
      }
      puVar9 = (undefined8 *)
               native_sub_3c9b34(plVar11,_MG_BlocksEngine2_Core_I_BE2_BlocksStack_TypeInfo_12d4e10,4
                                );
LAB_00609cb0:
      iVar1 = (*(code *)*puVar9)(plVar11,puVar9[1]);
      if (iVar1 < *(int *)(param_1 + 0x60)) {
        plVar11 = *(long **)(param_1 + 0x48);
        if (plVar11 == (long *)0x0) goto LAB_00609ef0;
        lVar3 = *plVar11;
        if ((ulong)*(ushort *)(lVar3 + 0x12a) != 0) {
          uVar6 = 0;
          piVar7 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
          do {
            if (*(long *)(piVar7 + -2) == _MG_BlocksEngine2_Core_I_BE2_BlocksStack_TypeInfo_12d4e10)
            {
              puVar9 = (undefined8 *)(lVar3 + (long)(*piVar7 + 4) * 0x10 + 0x138);
              goto LAB_00609e24;
            }
            uVar6 = uVar6 + 1;
            piVar7 = piVar7 + 4;
          } while (uVar6 < *(ushort *)(lVar3 + 0x12a));
        }
        puVar9 = (undefined8 *)
                 native_sub_3c9b34(plVar11,_MG_BlocksEngine2_Core_I_BE2_BlocksStack_TypeInfo_12d4e10
                                   ,4);
LAB_00609e24:
        iVar1 = (*(code *)*puVar9)(plVar11,puVar9[1]);
        lVar3 = *plVar11;
        iVar1 = iVar1 + 1;
        if ((ulong)*(ushort *)(lVar3 + 0x12a) != 0) {
          uVar6 = 0;
          piVar7 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
          do {
            if (*(long *)(piVar7 + -2) == _MG_BlocksEngine2_Core_I_BE2_BlocksStack_TypeInfo_12d4e10)
            goto LAB_00609e7c;
            uVar6 = uVar6 + 1;
            piVar7 = piVar7 + 4;
          } while (uVar6 < *(ushort *)(lVar3 + 0x12a));
        }
        goto LAB_00609e6c;
      }
    }
    lVar3 = *(long *)(param_1 + 0x58);
    if (lVar3 != 0) {
      if (*(int *)(lVar3 + 0x18) == 0) {
LAB_00609ef4:
        uVar2 = native_sub_43283c();
                    /* WARNING: Subroutine does not return */
        native_sub_4327dc(uVar2,0);
      }
      plVar10 = *(long **)(param_1 + 0x48);
      if (plVar10 != (long *)0x0) {
        lVar4 = *plVar10;
        iVar1 = *(int *)(lVar3 + 0x20);
        if ((ulong)*(ushort *)(lVar4 + 0x12a) != 0) {
          uVar6 = 0;
          piVar7 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
          do {
            if (*(long *)(piVar7 + -2) == _MG_BlocksEngine2_Core_I_BE2_BlocksStack_TypeInfo_12d4e10)
            {
              puVar9 = (undefined8 *)(lVar4 + (long)(*piVar7 + 7) * 0x10 + 0x138);
              goto LAB_00609d94;
            }
            uVar6 = uVar6 + 1;
            piVar7 = piVar7 + 4;
          } while (uVar6 < *(ushort *)(lVar4 + 0x12a));
        }
        puVar9 = (undefined8 *)
                 native_sub_3c9b34(plVar10,_MG_BlocksEngine2_Core_I_BE2_BlocksStack_TypeInfo_12d4e10
                                   ,7);
LAB_00609d94:
        UNRECOVERED_JUMPTABLE_00 = (code *)*puVar9;
        uVar2 = puVar9[1];
LAB_00609ed8:
                    /* WARNING: Could not recover jumptable at 0x00609eec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*UNRECOVERED_JUMPTABLE_00)(plVar10,iVar1,uVar2);
        return;
      }
    }
LAB_00609ef0:
                    /* WARNING: Subroutine does not return */
    native_sub_432810();
  }
  plVar11 = *(long **)(param_1 + 0x40);
  if (plVar11 == (long *)0x0) goto LAB_00609ef0;
  lVar3 = *plVar11;
  if ((ulong)*(ushort *)(lVar3 + 0x12a) != 0) {
    uVar6 = 0;
    piVar7 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
    do {
      if (*(long *)(piVar7 + -2) == _MG_BlocksEngine2_Block_I_BE2_Block_TypeInfo_12d4dd8) {
        puVar9 = (undefined8 *)(lVar3 + (long)(*piVar7 + 1) * 0x10 + 0x138);
        goto LAB_0060992c;
      }
      uVar6 = uVar6 + 1;
      piVar7 = piVar7 + 4;
    } while (uVar6 < *(ushort *)(lVar3 + 0x12a));
  }
  puVar9 = (undefined8 *)
           native_sub_3c9b34(plVar11,_MG_BlocksEngine2_Block_I_BE2_Block_TypeInfo_12d4dd8,1);
LAB_0060992c:
  iVar1 = (*(code *)*puVar9)(plVar11,puVar9[1]);
  if ((iVar1 != 4) &&
     (uVar6 = native_MG_BlocksEngine2_Utils_BE2_BlockUtils__BlockIsFunction_56f1f0
                        (*(undefined8 *)(param_1 + 0x40),0), (uVar6 & 1) == 0)) {
    lVar3 = *(long *)(param_1 + 0x58);
    if (lVar3 != 0) {
      if (*(int *)(lVar3 + 0x18) == 0) goto LAB_00609ef4;
      plVar10 = *(long **)(param_1 + 0x48);
      if (plVar10 != (long *)0x0) {
        lVar4 = *plVar10;
        uVar8 = *(undefined4 *)(lVar3 + 0x20);
        if ((ulong)*(ushort *)(lVar4 + 0x12a) != 0) {
          uVar6 = 0;
          piVar7 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
          do {
            if (*(long *)(piVar7 + -2) == _MG_BlocksEngine2_Core_I_BE2_BlocksStack_TypeInfo_12d4e10)
            {
              puVar9 = (undefined8 *)(lVar4 + (long)(*piVar7 + 7) * 0x10 + 0x138);
              goto LAB_00609db4;
            }
            uVar6 = uVar6 + 1;
            piVar7 = piVar7 + 4;
          } while (uVar6 < *(ushort *)(lVar4 + 0x12a));
        }
        puVar9 = (undefined8 *)
                 native_sub_3c9b34(plVar10,_MG_BlocksEngine2_Core_I_BE2_BlocksStack_TypeInfo_12d4e10
                                   ,7);
LAB_00609db4:
        (*(code *)*puVar9)(plVar10,uVar8,puVar9[1]);
        plVar10 = *(long **)(param_1 + 0x48);
        if (plVar10 != (long *)0x0) {
          lVar3 = *plVar10;
          if ((ulong)*(ushort *)(lVar3 + 0x12a) != 0) {
            uVar6 = 0;
            piVar7 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
            do {
              if (*(long *)(piVar7 + -2) ==
                  _MG_BlocksEngine2_Core_I_BE2_BlocksStack_TypeInfo_12d4e10) {
                puVar9 = (undefined8 *)(lVar3 + (long)(*piVar7 + 3) * 0x10 + 0x138);
                goto LAB_00609ecc;
              }
              uVar6 = uVar6 + 1;
              piVar7 = piVar7 + 4;
            } while (uVar6 < *(ushort *)(lVar3 + 0x12a));
          }
          puVar9 = (undefined8 *)
                   native_sub_3c9b34(plVar10,
                                     _MG_BlocksEngine2_Core_I_BE2_BlocksStack_TypeInfo_12d4e10,3);
LAB_00609ecc:
          UNRECOVERED_JUMPTABLE_00 = (code *)*puVar9;
          uVar2 = puVar9[1];
          iVar1 = 0;
          goto LAB_00609ed8;
        }
      }
    }
    goto LAB_00609ef0;
  }
  plVar11 = *(long **)(param_1 + 0x48);
  if (plVar11 == (long *)0x0) goto LAB_00609ef0;
  lVar3 = *plVar11;
  if ((ulong)*(ushort *)(lVar3 + 0x12a) != 0) {
    uVar6 = 0;
    piVar7 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
    do {
      if (*(long *)(piVar7 + -2) == _MG_BlocksEngine2_Core_I_BE2_BlocksStack_TypeInfo_12d4e10) {
        puVar9 = (undefined8 *)(lVar3 + (long)(*piVar7 + 4) * 0x10 + 0x138);
        goto LAB_00609b74;
      }
      uVar6 = uVar6 + 1;
      piVar7 = piVar7 + 4;
    } while (uVar6 < *(ushort *)(lVar3 + 0x12a));
  }
  puVar9 = (undefined8 *)
           native_sub_3c9b34(plVar11,_MG_BlocksEngine2_Core_I_BE2_BlocksStack_TypeInfo_12d4e10,4);
LAB_00609b74:
  iVar1 = (*(code *)*puVar9)(plVar11,puVar9[1]);
  lVar3 = *plVar11;
  iVar1 = iVar1 + 1;
  if ((ulong)*(ushort *)(lVar3 + 0x12a) != 0) {
    uVar6 = 0;
    piVar7 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
    do {
      if (*(long *)(piVar7 + -2) == _MG_BlocksEngine2_Core_I_BE2_BlocksStack_TypeInfo_12d4e10)
      goto LAB_00609e7c;
      uVar6 = uVar6 + 1;
      piVar7 = piVar7 + 4;
    } while (uVar6 < *(ushort *)(lVar3 + 0x12a));
  }
LAB_00609e6c:
  puVar9 = (undefined8 *)
           native_sub_3c9b34(plVar11,_MG_BlocksEngine2_Core_I_BE2_BlocksStack_TypeInfo_12d4e10,5);
LAB_00609e8c:
  (*(code *)*puVar9)(plVar11,iVar1,puVar9[1]);
native_MG_BlocksEngine2_Block_Instruction_BE2_InstructionBase__ExecuteInstruction_611e9c:
  if ((bRam000000000133ee63 & 1) == 0) {
    native_sub_43273c(&MG_BlocksEngine2_Core_I_BE2_BlocksStack_TypeInfo_12d4e10);
    native_sub_43273c(&MG_BlocksEngine2_Block_Instruction_I_BE2_Instruction_TypeInfo_12d4e28);
    native_sub_43273c(&Method_UnityEngine_Events_UnityEvent_I_BE2_Instruction__Invoke___12de478);
    bRam000000000133ee63 = 1;
  }
  plVar11 = *(long **)(param_1 + 0x48);
  if (plVar11 != (long *)0x0) {
    lVar3 = *plVar11;
    if ((ulong)*(ushort *)(lVar3 + 0x12a) != 0) {
      uVar6 = 0;
      piVar7 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == _MG_BlocksEngine2_Core_I_BE2_BlocksStack_TypeInfo_12d4e10) {
          puVar9 = (undefined8 *)(lVar3 + (long)(*piVar7 + 0xb) * 0x10 + 0x138);
          goto LAB_00611f54;
        }
        uVar6 = uVar6 + 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 < *(ushort *)(lVar3 + 0x12a));
    }
    puVar9 = (undefined8 *)
             native_sub_3c9b34(plVar11,_MG_BlocksEngine2_Core_I_BE2_BlocksStack_TypeInfo_12d4e10,0xb
                              );
LAB_00611f54:
    lVar3 = (*(code *)*puVar9)(plVar11,puVar9[1]);
    if ((lVar3 != 0) &&
       (native_UnityEngine_Events_UnityEvent_BaseEventData___Invoke_8a0108
                  (lVar3,plVar10,
                   _Method_UnityEngine_Events_UnityEvent_I_BE2_Instruction__Invoke___12de478),
       plVar10 != (long *)0x0)) {
      lVar3 = *plVar10;
      if ((ulong)*(ushort *)(lVar3 + 0x12a) != 0) {
        uVar6 = 0;
        piVar7 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
        do {
          if (*(long *)(piVar7 + -2) ==
              _MG_BlocksEngine2_Block_Instruction_I_BE2_Instruction_TypeInfo_12d4e28) {
            puVar9 = (undefined8 *)(lVar3 + (long)(*piVar7 + 3) * 0x10 + 0x138);
            goto LAB_00611fdc;
          }
          uVar6 = uVar6 + 1;
          piVar7 = piVar7 + 4;
        } while (uVar6 < *(ushort *)(lVar3 + 0x12a));
      }
      puVar9 = (undefined8 *)
               native_sub_3c9b34(plVar10,
                                 _MG_BlocksEngine2_Block_Instruction_I_BE2_Instruction_TypeInfo_12d4e28
                                 ,3);
LAB_00611fdc:
                    /* WARNING: Could not recover jumptable at 0x00611ff0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)*puVar9)(plVar10,puVar9[1]);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
LAB_0060489c:
  puVar9 = (undefined8 *)(lVar3 + (long)(*piVar7 + 5) * 0x10 + 0x138);
LAB_006048ac:
  (*(code *)*puVar9)(plVar11,iVar1,puVar9[1]);
  goto native_MG_BlocksEngine2_Block_Instruction_BE2_InstructionBase__ExecuteInstruction_611e9c;
LAB_00609e7c:
  puVar9 = (undefined8 *)(lVar3 + (long)(*piVar7 + 5) * 0x10 + 0x138);
  goto LAB_00609e8c;
}



/* BE2_Ins_Repeat$$Reset @ 0x60c280
 * void BE2_Ins_Repeat__Reset (BE2_Ins_Repeat_o* __this, const MethodInfo* method); */

/* BE2_Ins_Repeat$$Reset
   void BE2_Ins_Repeat__Reset (BE2_Ins_Repeat_o* __this, const MethodInfo* method); */

void native_BE2_Ins_Repeat__Reset_60c280(long param_1)

{
  *(undefined4 *)(param_1 + 0x80) = 0;
  return;
}



/* BE2_Ins_Repeat$$.ctor @ 0x60c288
 * void BE2_Ins_Repeat___ctor (BE2_Ins_Repeat_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* BE2_Ins_Repeat$$.ctor
   void BE2_Ins_Repeat___ctor (BE2_Ins_Repeat_o* __this, const MethodInfo* method); */

undefined1  [16] native_BE2_Ins_Repeat___ctor_60c288(ulong param_1)

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


