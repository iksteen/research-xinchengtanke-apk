/* ARM64 IL2CPP native pseudocode from Ghidra.
 * Recovered implementation, not original C# source.
 * Function boundaries follow the IL2CPP method address table. */


/* BE2_Ins_IfElse$$OnButtonStop @ 0x60a0b4
 * void BE2_Ins_IfElse__OnButtonStop (BE2_Ins_IfElse_o* __this, const MethodInfo* method); */

/* BE2_Ins_IfElse$$OnButtonStop
   void BE2_Ins_IfElse__OnButtonStop (BE2_Ins_IfElse_o* __this, const MethodInfo* method); */

void native_BE2_Ins_IfElse__OnButtonStop_60a0b4(long param_1)

{
  *(undefined1 *)(param_1 + 0x88) = 1;
  return;
}



/* BE2_Ins_IfElse$$OnStackActive @ 0x60a0c0
 * void BE2_Ins_IfElse__OnStackActive (BE2_Ins_IfElse_o* __this, const MethodInfo* method); */

/* BE2_Ins_IfElse$$OnStackActive
   void BE2_Ins_IfElse__OnStackActive (BE2_Ins_IfElse_o* __this, const MethodInfo* method); */

void native_BE2_Ins_IfElse__OnStackActive_60a0c0(long param_1)

{
  *(undefined1 *)(param_1 + 0x88) = 1;
  return;
}



/* BE2_Ins_IfElse$$Function @ 0x60a0cc
 * void BE2_Ins_IfElse__Function (BE2_Ins_IfElse_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* BE2_Ins_IfElse$$Function
   void BE2_Ins_IfElse__Function (BE2_Ins_IfElse_o* __this, const MethodInfo* method); */

void native_BE2_Ins_IfElse__Function_60a0cc(long param_1)

{
  uint uVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  uint uVar5;
  code *UNRECOVERED_JUMPTABLE_00;
  long lVar6;
  ulong uVar7;
  int *piVar8;
  undefined4 uVar9;
  undefined8 *puVar10;
  long *plVar11;
  long *plVar12;
  long lVar13;
  
  if ((bRam000000000133ee19 & 1) == 0) {
    native_sub_43273c(&MG_BlocksEngine2_Block_I_BE2_BlockSectionHeaderInput_TypeInfo_12d4e00);
    native_sub_43273c(&StringLiteral_true_12f6790);
    native_sub_43273c(&StringLiteral_1_12eb968);
    bRam000000000133ee19 = 1;
  }
  if (*(char *)(param_1 + 0x88) == '\0') {
    *(undefined1 *)(param_1 + 0x88) = 1;
    if ((bRam000000000133ee62 & 1) == 0) {
      native_sub_43273c(&MG_BlocksEngine2_Block_I_BE2_Block_TypeInfo_12d4dd8);
      native_sub_43273c(&MG_BlocksEngine2_Core_I_BE2_BlocksStack_TypeInfo_12d4e10);
      native_sub_43273c(&MG_BlocksEngine2_Block_Instruction_I_BE2_InstructionBase_TypeInfo_12d4e30);
      native_sub_43273c(&MG_BlocksEngine2_Block_Instruction_I_BE2_Instruction_TypeInfo_12d4e28);
      bRam000000000133ee62 = 1;
    }
    plVar11 = *(long **)(param_1 + 0x48);
    if (plVar11 == (long *)0x0) goto LAB_006048fc;
    lVar3 = *plVar11;
    if ((ulong)*(ushort *)(lVar3 + 0x12a) != 0) {
      uVar7 = 0;
      piVar8 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == _MG_BlocksEngine2_Core_I_BE2_BlocksStack_TypeInfo_12d4e10) {
          puVar10 = (undefined8 *)(lVar3 + (long)(*piVar8 + 9) * 0x10 + 0x138);
          goto LAB_00603cfc;
        }
        uVar7 = uVar7 + 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 < *(ushort *)(lVar3 + 0x12a));
    }
    puVar10 = (undefined8 *)
              native_sub_3c9b34(plVar11,_MG_BlocksEngine2_Core_I_BE2_BlocksStack_TypeInfo_12d4e10,9)
    ;
LAB_00603cfc:
    lVar3 = (*(code *)*puVar10)(plVar11,puVar10[1]);
    if (lVar3 == 0) goto LAB_006048fc;
    iVar2 = *(int *)(param_1 + 0x30);
    plVar11 = *(long **)(param_1 + 0x48);
    if (*(int *)(lVar3 + 0x18) <= iVar2) {
      if (plVar11 == (long *)0x0) goto LAB_006048fc;
      lVar3 = *plVar11;
      if ((ulong)*(ushort *)(lVar3 + 0x12a) != 0) {
        uVar7 = 0;
        piVar8 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
        do {
          if (*(long *)(piVar8 + -2) == _MG_BlocksEngine2_Core_I_BE2_BlocksStack_TypeInfo_12d4e10) {
            puVar10 = (undefined8 *)(lVar3 + (long)(*piVar8 + 7) * 0x10 + 0x138);
            goto LAB_00603e50;
          }
          uVar7 = uVar7 + 1;
          piVar8 = piVar8 + 4;
        } while (uVar7 < *(ushort *)(lVar3 + 0x12a));
      }
      puVar10 = (undefined8 *)
                native_sub_3c9b34(plVar11,_MG_BlocksEngine2_Core_I_BE2_BlocksStack_TypeInfo_12d4e10,
                                  7);
LAB_00603e50:
      (*(code *)*puVar10)(plVar11,iVar2,puVar10[1]);
      plVar11 = *(long **)(param_1 + 0x48);
      if (plVar11 == (long *)0x0) goto LAB_006048fc;
      lVar3 = *plVar11;
      if ((ulong)*(ushort *)(lVar3 + 0x12a) != 0) {
        uVar7 = 0;
        piVar8 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
        do {
          if (*(long *)(piVar8 + -2) == _MG_BlocksEngine2_Core_I_BE2_BlocksStack_TypeInfo_12d4e10) {
            puVar10 = (undefined8 *)(lVar3 + (long)(*piVar8 + 0xf) * 0x10 + 0x138);
            goto LAB_00603ec0;
          }
          uVar7 = uVar7 + 1;
          piVar8 = piVar8 + 4;
        } while (uVar7 < *(ushort *)(lVar3 + 0x12a));
      }
      puVar10 = (undefined8 *)
                native_sub_3c9b34(plVar11,_MG_BlocksEngine2_Core_I_BE2_BlocksStack_TypeInfo_12d4e10,
                                  0xf);
LAB_00603ec0:
      uVar7 = (*(code *)*puVar10)(plVar11,puVar10[1]);
      if ((uVar7 & 1) == 0) {
        return;
      }
      plVar11 = *(long **)(param_1 + 0x40);
      if (plVar11 == (long *)0x0) goto LAB_006048fc;
      lVar3 = *plVar11;
      if ((ulong)*(ushort *)(lVar3 + 0x12a) != 0) {
        uVar7 = 0;
        piVar8 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
        do {
          if (*(long *)(piVar8 + -2) == _MG_BlocksEngine2_Block_I_BE2_Block_TypeInfo_12d4dd8) {
            puVar10 = (undefined8 *)(lVar3 + (long)(*piVar8 + 1) * 0x10 + 0x138);
            goto LAB_00604004;
          }
          uVar7 = uVar7 + 1;
          piVar8 = piVar8 + 4;
        } while (uVar7 < *(ushort *)(lVar3 + 0x12a));
      }
      puVar10 = (undefined8 *)
                native_sub_3c9b34(plVar11,_MG_BlocksEngine2_Block_I_BE2_Block_TypeInfo_12d4dd8,1);
LAB_00604004:
      iVar2 = (*(code *)*puVar10)(plVar11,puVar10[1]);
      if (iVar2 != 1) {
        plVar11 = *(long **)(param_1 + 0x40);
        if (plVar11 == (long *)0x0) goto LAB_006048fc;
        lVar3 = *plVar11;
        if ((ulong)*(ushort *)(lVar3 + 0x12a) != 0) {
          uVar7 = 0;
          piVar8 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
          do {
            if (*(long *)(piVar8 + -2) == _MG_BlocksEngine2_Block_I_BE2_Block_TypeInfo_12d4dd8) {
              puVar10 = (undefined8 *)(lVar3 + (long)(*piVar8 + 1) * 0x10 + 0x138);
              goto LAB_00604244;
            }
            uVar7 = uVar7 + 1;
            piVar8 = piVar8 + 4;
          } while (uVar7 < *(ushort *)(lVar3 + 0x12a));
        }
        puVar10 = (undefined8 *)
                  native_sub_3c9b34(plVar11,_MG_BlocksEngine2_Block_I_BE2_Block_TypeInfo_12d4dd8,1);
LAB_00604244:
        iVar2 = (*(code *)*puVar10)(plVar11,puVar10[1]);
        if (iVar2 != 2) {
          return;
        }
      }
      plVar11 = *(long **)(param_1 + 0x48);
      if (plVar11 == (long *)0x0) goto LAB_006048fc;
      lVar3 = *plVar11;
      if ((ulong)*(ushort *)(lVar3 + 0x12a) != 0) {
        uVar7 = 0;
        piVar8 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
        do {
          if (*(long *)(piVar8 + -2) == _MG_BlocksEngine2_Core_I_BE2_BlocksStack_TypeInfo_12d4e10) {
            puVar10 = (undefined8 *)(lVar3 + (long)(*piVar8 + 9) * 0x10 + 0x138);
            goto LAB_006042d0;
          }
          uVar7 = uVar7 + 1;
          piVar8 = piVar8 + 4;
        } while (uVar7 < *(ushort *)(lVar3 + 0x12a));
      }
      puVar10 = (undefined8 *)
                native_sub_3c9b34(plVar11,_MG_BlocksEngine2_Core_I_BE2_BlocksStack_TypeInfo_12d4e10,
                                  9);
LAB_006042d0:
      lVar3 = (*(code *)*puVar10)(plVar11,puVar10[1]);
      if (lVar3 == 0) goto LAB_006048fc;
      if (*(int *)(lVar3 + 0x18) == 0) goto LAB_00604900;
      plVar11 = *(long **)(lVar3 + 0x20);
      goto native_MG_BlocksEngine2_Block_Instruction_BE2_InstructionBase__ExecuteInstruction_611e9c;
    }
    if (plVar11 == (long *)0x0) goto LAB_006048fc;
    lVar3 = *plVar11;
    if ((ulong)*(ushort *)(lVar3 + 0x12a) != 0) {
      uVar7 = 0;
      piVar8 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == _MG_BlocksEngine2_Core_I_BE2_BlocksStack_TypeInfo_12d4e10) {
          puVar10 = (undefined8 *)(lVar3 + (long)(*piVar8 + 9) * 0x10 + 0x138);
          goto LAB_00603dc8;
        }
        uVar7 = uVar7 + 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 < *(ushort *)(lVar3 + 0x12a));
    }
    puVar10 = (undefined8 *)
              native_sub_3c9b34(plVar11,_MG_BlocksEngine2_Core_I_BE2_BlocksStack_TypeInfo_12d4e10,9)
    ;
LAB_00603dc8:
    lVar3 = (*(code *)*puVar10)(plVar11,puVar10[1]);
    if (lVar3 == 0) goto LAB_006048fc;
    if (*(uint *)(lVar3 + 0x18) <= *(uint *)(param_1 + 0x30)) {
LAB_00604900:
      uVar4 = native_sub_43283c();
                    /* WARNING: Subroutine does not return */
      native_sub_4327dc(uVar4,0);
    }
    plVar12 = *(long **)(param_1 + 0x48);
    if (plVar12 == (long *)0x0) goto LAB_006048fc;
    lVar6 = *plVar12;
    plVar11 = *(long **)(lVar3 + (long)(int)*(uint *)(param_1 + 0x30) * 8 + 0x20);
    if ((ulong)*(ushort *)(lVar6 + 0x12a) != 0) {
      uVar7 = 0;
      piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == _MG_BlocksEngine2_Core_I_BE2_BlocksStack_TypeInfo_12d4e10) {
          puVar10 = (undefined8 *)(lVar6 + (long)(*piVar8 + 0xf) * 0x10 + 0x138);
          goto LAB_00603f38;
        }
        uVar7 = uVar7 + 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 < *(ushort *)(lVar6 + 0x12a));
    }
    puVar10 = (undefined8 *)
              native_sub_3c9b34(plVar12,_MG_BlocksEngine2_Core_I_BE2_BlocksStack_TypeInfo_12d4e10,
                                0xf);
LAB_00603f38:
    uVar7 = (*(code *)*puVar10)(plVar12,puVar10[1]);
    if ((uVar7 & 1) == 0) {
      if (plVar11 == (long *)0x0) goto LAB_006048fc;
      lVar3 = *plVar11;
      if ((ulong)*(ushort *)(lVar3 + 0x12a) != 0) {
        uVar7 = 0;
        piVar8 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
        do {
          if (*(long *)(piVar8 + -2) ==
              _MG_BlocksEngine2_Block_Instruction_I_BE2_Instruction_TypeInfo_12d4e28) {
            puVar10 = (undefined8 *)(lVar3 + (long)*piVar8 * 0x10 + 0x138);
            goto LAB_006040e8;
          }
          uVar7 = uVar7 + 1;
          piVar8 = piVar8 + 4;
        } while (uVar7 < *(ushort *)(lVar3 + 0x12a));
      }
      puVar10 = (undefined8 *)
                native_sub_3c9b34(plVar11,
                                  _MG_BlocksEngine2_Block_Instruction_I_BE2_Instruction_TypeInfo_12d4e28
                                  ,0);
LAB_006040e8:
      plVar12 = (long *)(*(code *)*puVar10)(plVar11,puVar10[1]);
      if (plVar12 == (long *)0x0) goto LAB_006048fc;
      lVar3 = *plVar12;
      if ((ulong)*(ushort *)(lVar3 + 0x12a) != 0) {
        uVar7 = 0;
        piVar8 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
        do {
          if (*(long *)(piVar8 + -2) ==
              _MG_BlocksEngine2_Block_Instruction_I_BE2_InstructionBase_TypeInfo_12d4e30) {
            puVar10 = (undefined8 *)(lVar3 + (long)(*piVar8 + 3) * 0x10 + 0x138);
            goto LAB_0060415c;
          }
          uVar7 = uVar7 + 1;
          piVar8 = piVar8 + 4;
        } while (uVar7 < *(ushort *)(lVar3 + 0x12a));
      }
      puVar10 = (undefined8 *)
                native_sub_3c9b34(plVar12,
                                  _MG_BlocksEngine2_Block_Instruction_I_BE2_InstructionBase_TypeInfo_12d4e30
                                  ,3);
LAB_0060415c:
      plVar12 = (long *)(*(code *)*puVar10)(plVar12,puVar10[1]);
      if (plVar12 == (long *)0x0) goto LAB_006048fc;
      lVar3 = *plVar12;
      if ((ulong)*(ushort *)(lVar3 + 0x12a) != 0) {
        uVar7 = 0;
        piVar8 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
        do {
          if (*(long *)(piVar8 + -2) == _MG_BlocksEngine2_Block_I_BE2_Block_TypeInfo_12d4dd8) {
            puVar10 = (undefined8 *)(lVar3 + (long)(*piVar8 + 1) * 0x10 + 0x138);
            goto LAB_006041d0;
          }
          uVar7 = uVar7 + 1;
          piVar8 = piVar8 + 4;
        } while (uVar7 < *(ushort *)(lVar3 + 0x12a));
      }
      puVar10 = (undefined8 *)
                native_sub_3c9b34(plVar12,_MG_BlocksEngine2_Block_I_BE2_Block_TypeInfo_12d4dd8,1);
LAB_006041d0:
      iVar2 = (*(code *)*puVar10)(plVar12,puVar10[1]);
      if (iVar2 == 4) {
        plVar12 = *(long **)(param_1 + 0x48);
        if (plVar12 == (long *)0x0) goto LAB_006048fc;
        lVar3 = *plVar12;
        if ((ulong)*(ushort *)(lVar3 + 0x12a) != 0) {
          uVar7 = 0;
          piVar8 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
          do {
            if (*(long *)(piVar8 + -2) == _MG_BlocksEngine2_Core_I_BE2_BlocksStack_TypeInfo_12d4e10)
            {
              puVar10 = (undefined8 *)(lVar3 + (long)(*piVar8 + 0x14) * 0x10 + 0x138);
              goto LAB_006043f0;
            }
            uVar7 = uVar7 + 1;
            piVar8 = piVar8 + 4;
          } while (uVar7 < *(ushort *)(lVar3 + 0x12a));
        }
        puVar10 = (undefined8 *)
                  native_sub_3c9b34(plVar12,
                                    _MG_BlocksEngine2_Core_I_BE2_BlocksStack_TypeInfo_12d4e10,0x14);
LAB_006043f0:
        lVar3 = (*(code *)*puVar10)(plVar12,puVar10[1]);
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
            puVar10 = (undefined8 *)(lVar3 + (long)(*piVar8 + 2) * 0x10 + 0x138);
            goto LAB_00604468;
          }
          uVar7 = uVar7 + 1;
          piVar8 = piVar8 + 4;
        } while (uVar7 < *(ushort *)(lVar3 + 0x12a));
      }
      puVar10 = (undefined8 *)
                native_sub_3c9b34(plVar12,_MG_BlocksEngine2_Core_I_BE2_BlocksStack_TypeInfo_12d4e10,
                                  2);
LAB_00604468:
      uVar7 = (*(code *)*puVar10)(plVar12,puVar10[1]);
      if ((uVar7 & 1) != 0) {
        lVar3 = *plVar11;
        if ((ulong)*(ushort *)(lVar3 + 0x12a) != 0) {
          uVar7 = 0;
          piVar8 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
          do {
            if (*(long *)(piVar8 + -2) ==
                _MG_BlocksEngine2_Block_Instruction_I_BE2_Instruction_TypeInfo_12d4e28) {
              puVar10 = (undefined8 *)(lVar3 + (long)(*piVar8 + 1) * 0x10 + 0x138);
              goto LAB_006044d0;
            }
            uVar7 = uVar7 + 1;
            piVar8 = piVar8 + 4;
          } while (uVar7 < *(ushort *)(lVar3 + 0x12a));
        }
        puVar10 = (undefined8 *)
                  native_sub_3c9b34(plVar11,
                                    _MG_BlocksEngine2_Block_Instruction_I_BE2_Instruction_TypeInfo_12d4e28
                                    ,1);
LAB_006044d0:
        uVar7 = (*(code *)*puVar10)(plVar11,puVar10[1]);
        if ((uVar7 & 1) == 0) {
          plVar12 = *(long **)(param_1 + 0x48);
          if (plVar12 == (long *)0x0) goto LAB_006048fc;
          lVar3 = *plVar12;
          if ((ulong)*(ushort *)(lVar3 + 0x12a) != 0) {
            uVar7 = 0;
            piVar8 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
            do {
              if (*(long *)(piVar8 + -2) ==
                  _MG_BlocksEngine2_Core_I_BE2_BlocksStack_TypeInfo_12d4e10) {
                puVar10 = (undefined8 *)(lVar3 + (long)(*piVar8 + 4) * 0x10 + 0x138);
                goto LAB_00604594;
              }
              uVar7 = uVar7 + 1;
              piVar8 = piVar8 + 4;
            } while (uVar7 < *(ushort *)(lVar3 + 0x12a));
          }
          puVar10 = (undefined8 *)
                    native_sub_3c9b34(plVar12,
                                      _MG_BlocksEngine2_Core_I_BE2_BlocksStack_TypeInfo_12d4e10,4);
LAB_00604594:
          iVar2 = (*(code *)*puVar10)(plVar12,puVar10[1]);
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
                  puVar10 = (undefined8 *)(lVar3 + (long)(*piVar8 + 4) * 0x10 + 0x138);
                  goto LAB_00604850;
                }
                uVar7 = uVar7 + 1;
                piVar8 = piVar8 + 4;
              } while (uVar7 < *(ushort *)(lVar3 + 0x12a));
            }
            puVar10 = (undefined8 *)
                      native_sub_3c9b34(plVar12,
                                        _MG_BlocksEngine2_Core_I_BE2_BlocksStack_TypeInfo_12d4e10,4)
            ;
LAB_00604850:
            iVar2 = (*(code *)*puVar10)(plVar12,puVar10[1]);
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
      lVar3 = *plVar11;
      plVar12 = *(long **)(param_1 + 0x48);
      if ((ulong)*(ushort *)(lVar3 + 0x12a) != 0) {
        uVar7 = 0;
        piVar8 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
        do {
          if (*(long *)(piVar8 + -2) ==
              _MG_BlocksEngine2_Block_Instruction_I_BE2_Instruction_TypeInfo_12d4e28) {
            puVar10 = (undefined8 *)(lVar3 + (long)*piVar8 * 0x10 + 0x138);
            goto LAB_00604654;
          }
          uVar7 = uVar7 + 1;
          piVar8 = piVar8 + 4;
        } while (uVar7 < *(ushort *)(lVar3 + 0x12a));
      }
      puVar10 = (undefined8 *)
                native_sub_3c9b34(plVar11,
                                  _MG_BlocksEngine2_Block_Instruction_I_BE2_Instruction_TypeInfo_12d4e28
                                  ,0);
LAB_00604654:
      plVar11 = (long *)(*(code *)*puVar10)(plVar11,puVar10[1]);
      if (plVar11 != (long *)0x0) {
        lVar3 = *plVar11;
        if ((ulong)*(ushort *)(lVar3 + 0x12a) != 0) {
          uVar7 = 0;
          piVar8 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
          do {
            if (*(long *)(piVar8 + -2) ==
                _MG_BlocksEngine2_Block_Instruction_I_BE2_InstructionBase_TypeInfo_12d4e30) {
              puVar10 = (undefined8 *)(lVar3 + (long)(*piVar8 + 3) * 0x10 + 0x138);
              goto LAB_006046c0;
            }
            uVar7 = uVar7 + 1;
            piVar8 = piVar8 + 4;
          } while (uVar7 < *(ushort *)(lVar3 + 0x12a));
        }
        puVar10 = (undefined8 *)
                  native_sub_3c9b34(plVar11,
                                    _MG_BlocksEngine2_Block_Instruction_I_BE2_InstructionBase_TypeInfo_12d4e30
                                    ,3);
LAB_006046c0:
        plVar11 = (long *)(*(code *)*puVar10)(plVar11,puVar10[1]);
        if (plVar11 != (long *)0x0) {
          lVar3 = *plVar11;
          if ((ulong)*(ushort *)(lVar3 + 0x12a) != 0) {
            uVar7 = 0;
            piVar8 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
            do {
              if (*(long *)(piVar8 + -2) == _MG_BlocksEngine2_Block_I_BE2_Block_TypeInfo_12d4dd8) {
                puVar10 = (undefined8 *)(lVar3 + (long)(*piVar8 + 1) * 0x10 + 0x138);
                goto LAB_0060472c;
              }
              uVar7 = uVar7 + 1;
              piVar8 = piVar8 + 4;
            } while (uVar7 < *(ushort *)(lVar3 + 0x12a));
          }
          puVar10 = (undefined8 *)
                    native_sub_3c9b34(plVar11,_MG_BlocksEngine2_Block_I_BE2_Block_TypeInfo_12d4dd8,1
                                     );
LAB_0060472c:
          iVar2 = (*(code *)*puVar10)(plVar11,puVar10[1]);
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
                  puVar10 = (undefined8 *)(lVar3 + (long)(*piVar8 + 7) * 0x10 + 0x138);
                  goto LAB_006047ac;
                }
                uVar7 = uVar7 + 1;
                piVar8 = piVar8 + 4;
              } while (uVar7 < *(ushort *)(lVar3 + 0x12a));
            }
            puVar10 = (undefined8 *)
                      native_sub_3c9b34(plVar12,
                                        _MG_BlocksEngine2_Core_I_BE2_BlocksStack_TypeInfo_12d4e10,7)
            ;
LAB_006047ac:
            UNRECOVERED_JUMPTABLE_00 = (code *)*puVar10;
            uVar4 = puVar10[1];
LAB_006047b8:
                    /* WARNING: Could not recover jumptable at 0x006047cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (*UNRECOVERED_JUMPTABLE_00)(plVar12,uVar9,uVar4);
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
          puVar10 = (undefined8 *)(lVar3 + (long)(*piVar8 + 1) * 0x10 + 0x138);
          goto LAB_00604078;
        }
        uVar7 = uVar7 + 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 < *(ushort *)(lVar3 + 0x12a));
    }
    puVar10 = (undefined8 *)
              native_sub_3c9b34(plVar12,_MG_BlocksEngine2_Block_I_BE2_Block_TypeInfo_12d4dd8,1);
LAB_00604078:
    iVar2 = (*(code *)*puVar10)(plVar12,puVar10[1]);
    if (iVar2 != 1) {
      plVar12 = *(long **)(param_1 + 0x40);
      if (plVar12 == (long *)0x0) goto LAB_006048fc;
      lVar3 = *plVar12;
      if ((ulong)*(ushort *)(lVar3 + 0x12a) != 0) {
        uVar7 = 0;
        piVar8 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
        do {
          if (*(long *)(piVar8 + -2) == _MG_BlocksEngine2_Block_I_BE2_Block_TypeInfo_12d4dd8) {
            puVar10 = (undefined8 *)(lVar3 + (long)(*piVar8 + 1) * 0x10 + 0x138);
            goto LAB_00604304;
          }
          uVar7 = uVar7 + 1;
          piVar8 = piVar8 + 4;
        } while (uVar7 < *(ushort *)(lVar3 + 0x12a));
      }
      puVar10 = (undefined8 *)
                native_sub_3c9b34(plVar12,_MG_BlocksEngine2_Block_I_BE2_Block_TypeInfo_12d4dd8,1);
LAB_00604304:
      iVar2 = (*(code *)*puVar10)(plVar12,puVar10[1]);
      if ((iVar2 != 2) &&
         (uVar7 = native_MG_BlocksEngine2_Utils_BE2_BlockUtils__BlockIsFunction_56f1f0
                            (*(undefined8 *)(param_1 + 0x40),0), (uVar7 & 1) == 0)) {
        plVar11 = *(long **)(param_1 + 0x48);
        if (plVar11 == (long *)0x0) goto LAB_006048fc;
        lVar3 = *plVar11;
        uVar9 = *(undefined4 *)(param_1 + 0x30);
        if ((ulong)*(ushort *)(lVar3 + 0x12a) != 0) {
          uVar7 = 0;
          piVar8 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
          do {
            if (*(long *)(piVar8 + -2) == _MG_BlocksEngine2_Core_I_BE2_BlocksStack_TypeInfo_12d4e10)
            {
              puVar10 = (undefined8 *)(lVar3 + (long)(*piVar8 + 7) * 0x10 + 0x138);
              goto LAB_006047e0;
            }
            uVar7 = uVar7 + 1;
            piVar8 = piVar8 + 4;
          } while (uVar7 < *(ushort *)(lVar3 + 0x12a));
        }
        puVar10 = (undefined8 *)
                  native_sub_3c9b34(plVar11,
                                    _MG_BlocksEngine2_Core_I_BE2_BlocksStack_TypeInfo_12d4e10,7);
LAB_006047e0:
        (*(code *)*puVar10)(plVar11,uVar9,puVar10[1]);
        plVar12 = *(long **)(param_1 + 0x48);
        if (plVar12 == (long *)0x0) goto LAB_006048fc;
        lVar3 = *plVar12;
        if ((ulong)*(ushort *)(lVar3 + 0x12a) != 0) {
          uVar7 = 0;
          piVar8 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
          do {
            if (*(long *)(piVar8 + -2) == _MG_BlocksEngine2_Core_I_BE2_BlocksStack_TypeInfo_12d4e10)
            {
              puVar10 = (undefined8 *)(lVar3 + (long)(*piVar8 + 3) * 0x10 + 0x138);
              goto LAB_006048ec;
            }
            uVar7 = uVar7 + 1;
            piVar8 = piVar8 + 4;
          } while (uVar7 < *(ushort *)(lVar3 + 0x12a));
        }
        puVar10 = (undefined8 *)
                  native_sub_3c9b34(plVar12,
                                    _MG_BlocksEngine2_Core_I_BE2_BlocksStack_TypeInfo_12d4e10,3);
LAB_006048ec:
        UNRECOVERED_JUMPTABLE_00 = (code *)*puVar10;
        uVar4 = puVar10[1];
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
          puVar10 = (undefined8 *)(lVar3 + (long)(*piVar8 + 4) * 0x10 + 0x138);
          goto LAB_00604388;
        }
        uVar7 = uVar7 + 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 < *(ushort *)(lVar3 + 0x12a));
    }
    puVar10 = (undefined8 *)
              native_sub_3c9b34(plVar12,_MG_BlocksEngine2_Core_I_BE2_BlocksStack_TypeInfo_12d4e10,4)
    ;
LAB_00604388:
    iVar2 = (*(code *)*puVar10)(plVar12,puVar10[1]);
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
    puVar10 = (undefined8 *)
              native_sub_3c9b34(plVar12,_MG_BlocksEngine2_Core_I_BE2_BlocksStack_TypeInfo_12d4e10,5)
    ;
    goto LAB_006048ac;
  }
  lVar3 = native_MG_BlocksEngine2_Block_Instruction_BE2_InstructionBase__get_Section0Inputs_603b78
                    (param_1);
  if (lVar3 == 0) {
LAB_0060a250:
                    /* WARNING: Subroutine does not return */
    native_sub_432810();
  }
  if (*(int *)(lVar3 + 0x18) == 0) {
    uVar4 = native_sub_43283c();
                    /* WARNING: Subroutine does not return */
    native_sub_4327dc(uVar4,0);
  }
  puVar10 = (undefined8 *)(param_1 + 0x78);
  *puVar10 = *(undefined8 *)(lVar3 + 0x20);
  native_sub_4326e0(puVar10);
  plVar11 = (long *)*puVar10;
  if (plVar11 == (long *)0x0) goto LAB_0060a250;
  lVar3 = *plVar11;
  if ((ulong)*(ushort *)(lVar3 + 0x12a) != 0) {
    uVar7 = 0;
    piVar8 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
    do {
      if (*(long *)(piVar8 + -2) ==
          _MG_BlocksEngine2_Block_I_BE2_BlockSectionHeaderInput_TypeInfo_12d4e00) {
        puVar10 = (undefined8 *)(lVar3 + (long)(*piVar8 + 3) * 0x10 + 0x138);
        goto LAB_0060a1c4;
      }
      uVar7 = uVar7 + 1;
      piVar8 = piVar8 + 4;
    } while (uVar7 < *(ushort *)(lVar3 + 0x12a));
  }
  puVar10 = (undefined8 *)
            native_sub_3c9b34(plVar11,
                              _MG_BlocksEngine2_Block_I_BE2_BlockSectionHeaderInput_TypeInfo_12d4e00
                              ,3);
LAB_0060a1c4:
  lVar3 = (*(code *)*puVar10)(plVar11,puVar10[1]);
  plVar11 = (long *)(param_1 + 0x80);
  *plVar11 = lVar3;
  native_sub_4326e0(plVar11,lVar3);
  uVar7 = native_System_String__op_Equality_afc18c(*plVar11,_StringLiteral_1_12eb968,0);
  if ((uVar7 & 1) == 0) {
    if (*plVar11 == 0) goto LAB_0060a250;
    uVar4 = native_System_String__ToLower_b0cf38(*plVar11,0);
    uVar7 = native_System_String__op_Equality_afc18c(uVar4,_StringLiteral_true_12f6790,0);
    if ((uVar7 & 1) != 0) goto LAB_0060a228;
    uVar5 = 1;
    *(undefined1 *)(param_1 + 0x88) = 0;
  }
  else {
LAB_0060a228:
    uVar5 = 0;
    *(undefined1 *)(param_1 + 0x88) = 0;
  }
  if ((bRam000000000133ee61 & 1) == 0) {
    native_sub_43273c(&MG_BlocksEngine2_Block_I_BE2_Block_TypeInfo_12d4dd8);
    native_sub_43273c(&MG_BlocksEngine2_Core_I_BE2_BlocksStack_TypeInfo_12d4e10);
    native_sub_43273c(&MG_BlocksEngine2_Block_Instruction_I_BE2_InstructionBase_TypeInfo_12d4e30);
    native_sub_43273c(&MG_BlocksEngine2_Block_Instruction_I_BE2_Instruction_TypeInfo_12d4e28);
    bRam000000000133ee61 = 1;
  }
  plVar11 = *(long **)(param_1 + 0x48);
  if (plVar11 == (long *)0x0) goto LAB_00609ef0;
  lVar3 = *plVar11;
  if ((ulong)*(ushort *)(lVar3 + 0x12a) != 0) {
    uVar7 = 0;
    piVar8 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
    do {
      if (*(long *)(piVar8 + -2) == _MG_BlocksEngine2_Core_I_BE2_BlocksStack_TypeInfo_12d4e10) {
        puVar10 = (undefined8 *)(lVar3 + (long)(*piVar8 + 9) * 0x10 + 0x138);
        goto LAB_006096b8;
      }
      uVar7 = uVar7 + 1;
      piVar8 = piVar8 + 4;
    } while (uVar7 < *(ushort *)(lVar3 + 0x12a));
  }
  puVar10 = (undefined8 *)
            native_sub_3c9b34(plVar11,_MG_BlocksEngine2_Core_I_BE2_BlocksStack_TypeInfo_12d4e10,9);
LAB_006096b8:
  lVar3 = (*(code *)*puVar10)(plVar11,puVar10[1]);
  if ((lVar3 == 0) || (lVar6 = *(long *)(param_1 + 0x58), lVar6 == 0)) goto LAB_00609ef0;
  if (*(uint *)(lVar6 + 0x18) <= uVar5) goto LAB_00609ef4;
  lVar13 = (long)(int)uVar5;
  iVar2 = *(int *)(lVar6 + lVar13 * 4 + 0x20);
  plVar11 = *(long **)(param_1 + 0x48);
  if (*(int *)(lVar3 + 0x18) <= iVar2) {
    if (plVar11 == (long *)0x0) goto LAB_00609ef0;
    lVar3 = *plVar11;
    if ((ulong)*(ushort *)(lVar3 + 0x12a) != 0) {
      uVar7 = 0;
      piVar8 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == _MG_BlocksEngine2_Core_I_BE2_BlocksStack_TypeInfo_12d4e10) {
          puVar10 = (undefined8 *)(lVar3 + (long)(*piVar8 + 7) * 0x10 + 0x138);
          goto LAB_00609840;
        }
        uVar7 = uVar7 + 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 < *(ushort *)(lVar3 + 0x12a));
    }
    puVar10 = (undefined8 *)
              native_sub_3c9b34(plVar11,_MG_BlocksEngine2_Core_I_BE2_BlocksStack_TypeInfo_12d4e10,7)
    ;
LAB_00609840:
    UNRECOVERED_JUMPTABLE_00 = (code *)*puVar10;
    uVar4 = puVar10[1];
    goto LAB_00609ed8;
  }
  if (plVar11 == (long *)0x0) goto LAB_00609ef0;
  lVar3 = *plVar11;
  if ((ulong)*(ushort *)(lVar3 + 0x12a) != 0) {
    uVar7 = 0;
    piVar8 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
    do {
      if (*(long *)(piVar8 + -2) == _MG_BlocksEngine2_Core_I_BE2_BlocksStack_TypeInfo_12d4e10) {
        puVar10 = (undefined8 *)(lVar3 + (long)(*piVar8 + 9) * 0x10 + 0x138);
        goto LAB_006097a0;
      }
      uVar7 = uVar7 + 1;
      piVar8 = piVar8 + 4;
    } while (uVar7 < *(ushort *)(lVar3 + 0x12a));
  }
  puVar10 = (undefined8 *)
            native_sub_3c9b34(plVar11,_MG_BlocksEngine2_Core_I_BE2_BlocksStack_TypeInfo_12d4e10,9);
LAB_006097a0:
  lVar3 = (*(code *)*puVar10)(plVar11,puVar10[1]);
  lVar6 = *(long *)(param_1 + 0x58);
  if (lVar6 == 0) goto LAB_00609ef0;
  if (*(uint *)(lVar6 + 0x18) <= uVar5) goto LAB_00609ef4;
  if (lVar3 == 0) goto LAB_00609ef0;
  uVar1 = *(uint *)(lVar6 + lVar13 * 4 + 0x20);
  if (*(uint *)(lVar3 + 0x18) <= uVar1) goto LAB_00609ef4;
  plVar12 = *(long **)(param_1 + 0x48);
  if (plVar12 == (long *)0x0) goto LAB_00609ef0;
  lVar6 = *plVar12;
  plVar11 = *(long **)(lVar3 + (long)(int)uVar1 * 8 + 0x20);
  if ((ulong)*(ushort *)(lVar6 + 0x12a) != 0) {
    uVar7 = 0;
    piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
    do {
      if (*(long *)(piVar8 + -2) == _MG_BlocksEngine2_Core_I_BE2_BlocksStack_TypeInfo_12d4e10) {
        puVar10 = (undefined8 *)(lVar6 + (long)(*piVar8 + 0xf) * 0x10 + 0x138);
        goto LAB_00609860;
      }
      uVar7 = uVar7 + 1;
      piVar8 = piVar8 + 4;
    } while (uVar7 < *(ushort *)(lVar6 + 0x12a));
  }
  puVar10 = (undefined8 *)
            native_sub_3c9b34(plVar12,_MG_BlocksEngine2_Core_I_BE2_BlocksStack_TypeInfo_12d4e10,0xf)
  ;
LAB_00609860:
  uVar7 = (*(code *)*puVar10)(plVar12,puVar10[1]);
  if ((uVar7 & 1) == 0) {
    if (plVar11 == (long *)0x0) goto LAB_00609ef0;
    lVar3 = *plVar11;
    if ((ulong)*(ushort *)(lVar3 + 0x12a) != 0) {
      uVar7 = 0;
      piVar8 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) ==
            _MG_BlocksEngine2_Block_Instruction_I_BE2_Instruction_TypeInfo_12d4e28) {
          puVar10 = (undefined8 *)(lVar3 + (long)*piVar8 * 0x10 + 0x138);
          goto LAB_006099ac;
        }
        uVar7 = uVar7 + 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 < *(ushort *)(lVar3 + 0x12a));
    }
    puVar10 = (undefined8 *)
              native_sub_3c9b34(plVar11,
                                _MG_BlocksEngine2_Block_Instruction_I_BE2_Instruction_TypeInfo_12d4e28
                                ,0);
LAB_006099ac:
    plVar12 = (long *)(*(code *)*puVar10)(plVar11,puVar10[1]);
    if (plVar12 == (long *)0x0) goto LAB_00609ef0;
    lVar3 = *plVar12;
    if ((ulong)*(ushort *)(lVar3 + 0x12a) != 0) {
      uVar7 = 0;
      piVar8 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) ==
            _MG_BlocksEngine2_Block_Instruction_I_BE2_InstructionBase_TypeInfo_12d4e30) {
          puVar10 = (undefined8 *)(lVar3 + (long)(*piVar8 + 3) * 0x10 + 0x138);
          goto LAB_00609a20;
        }
        uVar7 = uVar7 + 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 < *(ushort *)(lVar3 + 0x12a));
    }
    puVar10 = (undefined8 *)
              native_sub_3c9b34(plVar12,
                                _MG_BlocksEngine2_Block_Instruction_I_BE2_InstructionBase_TypeInfo_12d4e30
                                ,3);
LAB_00609a20:
    plVar12 = (long *)(*(code *)*puVar10)(plVar12,puVar10[1]);
    if (plVar12 == (long *)0x0) goto LAB_00609ef0;
    lVar3 = *plVar12;
    if ((ulong)*(ushort *)(lVar3 + 0x12a) != 0) {
      uVar7 = 0;
      piVar8 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == _MG_BlocksEngine2_Block_I_BE2_Block_TypeInfo_12d4dd8) {
          puVar10 = (undefined8 *)(lVar3 + (long)(*piVar8 + 1) * 0x10 + 0x138);
          goto LAB_00609a94;
        }
        uVar7 = uVar7 + 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 < *(ushort *)(lVar3 + 0x12a));
    }
    puVar10 = (undefined8 *)
              native_sub_3c9b34(plVar12,_MG_BlocksEngine2_Block_I_BE2_Block_TypeInfo_12d4dd8,1);
LAB_00609a94:
    iVar2 = (*(code *)*puVar10)(plVar12,puVar10[1]);
    if (iVar2 == 4) {
      plVar12 = *(long **)(param_1 + 0x48);
      if (plVar12 == (long *)0x0) goto LAB_00609ef0;
      lVar3 = *plVar12;
      if ((ulong)*(ushort *)(lVar3 + 0x12a) != 0) {
        uVar7 = 0;
        piVar8 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
        do {
          if (*(long *)(piVar8 + -2) == _MG_BlocksEngine2_Core_I_BE2_BlocksStack_TypeInfo_12d4e10) {
            puVar10 = (undefined8 *)(lVar3 + (long)(*piVar8 + 0x14) * 0x10 + 0x138);
            goto LAB_00609bd0;
          }
          uVar7 = uVar7 + 1;
          piVar8 = piVar8 + 4;
        } while (uVar7 < *(ushort *)(lVar3 + 0x12a));
      }
      puVar10 = (undefined8 *)
                native_sub_3c9b34(plVar12,_MG_BlocksEngine2_Core_I_BE2_BlocksStack_TypeInfo_12d4e10,
                                  0x14);
LAB_00609bd0:
      lVar3 = (*(code *)*puVar10)(plVar12,puVar10[1]);
      if (lVar3 == 0) goto LAB_00609ef0;
      native_UnityEngine_Events_UnityEvent__Invoke_773864(lVar3,0);
    }
    lVar3 = *plVar11;
    if ((ulong)*(ushort *)(lVar3 + 0x12a) != 0) {
      uVar7 = 0;
      piVar8 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) ==
            _MG_BlocksEngine2_Block_Instruction_I_BE2_Instruction_TypeInfo_12d4e28) {
          puVar10 = (undefined8 *)(lVar3 + (long)(*piVar8 + 1) * 0x10 + 0x138);
          goto LAB_00609c40;
        }
        uVar7 = uVar7 + 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 < *(ushort *)(lVar3 + 0x12a));
    }
    puVar10 = (undefined8 *)
              native_sub_3c9b34(plVar11,
                                _MG_BlocksEngine2_Block_Instruction_I_BE2_Instruction_TypeInfo_12d4e28
                                ,1);
LAB_00609c40:
    uVar7 = (*(code *)*puVar10)(plVar11,puVar10[1]);
    if ((uVar7 & 1) == 0) {
      plVar12 = *(long **)(param_1 + 0x48);
      if (plVar12 == (long *)0x0) goto LAB_00609ef0;
      lVar3 = *plVar12;
      if ((ulong)*(ushort *)(lVar3 + 0x12a) != 0) {
        uVar7 = 0;
        piVar8 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
        do {
          if (*(long *)(piVar8 + -2) == _MG_BlocksEngine2_Core_I_BE2_BlocksStack_TypeInfo_12d4e10) {
            puVar10 = (undefined8 *)(lVar3 + (long)(*piVar8 + 4) * 0x10 + 0x138);
            goto LAB_00609cb0;
          }
          uVar7 = uVar7 + 1;
          piVar8 = piVar8 + 4;
        } while (uVar7 < *(ushort *)(lVar3 + 0x12a));
      }
      puVar10 = (undefined8 *)
                native_sub_3c9b34(plVar12,_MG_BlocksEngine2_Core_I_BE2_BlocksStack_TypeInfo_12d4e10,
                                  4);
LAB_00609cb0:
      iVar2 = (*(code *)*puVar10)(plVar12,puVar10[1]);
      if (iVar2 < *(int *)(param_1 + 0x60)) {
        plVar12 = *(long **)(param_1 + 0x48);
        if (plVar12 == (long *)0x0) goto LAB_00609ef0;
        lVar3 = *plVar12;
        if ((ulong)*(ushort *)(lVar3 + 0x12a) != 0) {
          uVar7 = 0;
          piVar8 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
          do {
            if (*(long *)(piVar8 + -2) == _MG_BlocksEngine2_Core_I_BE2_BlocksStack_TypeInfo_12d4e10)
            {
              puVar10 = (undefined8 *)(lVar3 + (long)(*piVar8 + 4) * 0x10 + 0x138);
              goto LAB_00609e24;
            }
            uVar7 = uVar7 + 1;
            piVar8 = piVar8 + 4;
          } while (uVar7 < *(ushort *)(lVar3 + 0x12a));
        }
        puVar10 = (undefined8 *)
                  native_sub_3c9b34(plVar12,
                                    _MG_BlocksEngine2_Core_I_BE2_BlocksStack_TypeInfo_12d4e10,4);
LAB_00609e24:
        iVar2 = (*(code *)*puVar10)(plVar12,puVar10[1]);
        lVar3 = *plVar12;
        iVar2 = iVar2 + 1;
        if ((ulong)*(ushort *)(lVar3 + 0x12a) != 0) {
          uVar7 = 0;
          piVar8 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
          do {
            if (*(long *)(piVar8 + -2) == _MG_BlocksEngine2_Core_I_BE2_BlocksStack_TypeInfo_12d4e10)
            goto LAB_00609e7c;
            uVar7 = uVar7 + 1;
            piVar8 = piVar8 + 4;
          } while (uVar7 < *(ushort *)(lVar3 + 0x12a));
        }
        goto LAB_00609e6c;
      }
    }
    lVar3 = *(long *)(param_1 + 0x58);
    if (lVar3 != 0) {
      if (*(uint *)(lVar3 + 0x18) <= uVar5) {
LAB_00609ef4:
        uVar4 = native_sub_43283c();
                    /* WARNING: Subroutine does not return */
        native_sub_4327dc(uVar4,0);
      }
      plVar11 = *(long **)(param_1 + 0x48);
      if (plVar11 != (long *)0x0) {
        lVar6 = *plVar11;
        iVar2 = *(int *)(lVar3 + lVar13 * 4 + 0x20);
        if ((ulong)*(ushort *)(lVar6 + 0x12a) != 0) {
          uVar7 = 0;
          piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
          do {
            if (*(long *)(piVar8 + -2) == _MG_BlocksEngine2_Core_I_BE2_BlocksStack_TypeInfo_12d4e10)
            {
              puVar10 = (undefined8 *)(lVar6 + (long)(*piVar8 + 7) * 0x10 + 0x138);
              goto LAB_00609d94;
            }
            uVar7 = uVar7 + 1;
            piVar8 = piVar8 + 4;
          } while (uVar7 < *(ushort *)(lVar6 + 0x12a));
        }
        puVar10 = (undefined8 *)
                  native_sub_3c9b34(plVar11,
                                    _MG_BlocksEngine2_Core_I_BE2_BlocksStack_TypeInfo_12d4e10,7);
LAB_00609d94:
        UNRECOVERED_JUMPTABLE_00 = (code *)*puVar10;
        uVar4 = puVar10[1];
LAB_00609ed8:
                    /* WARNING: Could not recover jumptable at 0x00609eec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*UNRECOVERED_JUMPTABLE_00)(plVar11,iVar2,uVar4);
        return;
      }
    }
LAB_00609ef0:
                    /* WARNING: Subroutine does not return */
    native_sub_432810();
  }
  plVar12 = *(long **)(param_1 + 0x40);
  if (plVar12 == (long *)0x0) goto LAB_00609ef0;
  lVar3 = *plVar12;
  if ((ulong)*(ushort *)(lVar3 + 0x12a) != 0) {
    uVar7 = 0;
    piVar8 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
    do {
      if (*(long *)(piVar8 + -2) == _MG_BlocksEngine2_Block_I_BE2_Block_TypeInfo_12d4dd8) {
        puVar10 = (undefined8 *)(lVar3 + (long)(*piVar8 + 1) * 0x10 + 0x138);
        goto LAB_0060992c;
      }
      uVar7 = uVar7 + 1;
      piVar8 = piVar8 + 4;
    } while (uVar7 < *(ushort *)(lVar3 + 0x12a));
  }
  puVar10 = (undefined8 *)
            native_sub_3c9b34(plVar12,_MG_BlocksEngine2_Block_I_BE2_Block_TypeInfo_12d4dd8,1);
LAB_0060992c:
  iVar2 = (*(code *)*puVar10)(plVar12,puVar10[1]);
  if ((iVar2 != 4) &&
     (uVar7 = native_MG_BlocksEngine2_Utils_BE2_BlockUtils__BlockIsFunction_56f1f0
                        (*(undefined8 *)(param_1 + 0x40),0), (uVar7 & 1) == 0)) {
    lVar3 = *(long *)(param_1 + 0x58);
    if (lVar3 != 0) {
      if (*(uint *)(lVar3 + 0x18) <= uVar5) goto LAB_00609ef4;
      plVar11 = *(long **)(param_1 + 0x48);
      if (plVar11 != (long *)0x0) {
        lVar6 = *plVar11;
        uVar9 = *(undefined4 *)(lVar3 + lVar13 * 4 + 0x20);
        if ((ulong)*(ushort *)(lVar6 + 0x12a) != 0) {
          uVar7 = 0;
          piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
          do {
            if (*(long *)(piVar8 + -2) == _MG_BlocksEngine2_Core_I_BE2_BlocksStack_TypeInfo_12d4e10)
            {
              puVar10 = (undefined8 *)(lVar6 + (long)(*piVar8 + 7) * 0x10 + 0x138);
              goto LAB_00609db4;
            }
            uVar7 = uVar7 + 1;
            piVar8 = piVar8 + 4;
          } while (uVar7 < *(ushort *)(lVar6 + 0x12a));
        }
        puVar10 = (undefined8 *)
                  native_sub_3c9b34(plVar11,
                                    _MG_BlocksEngine2_Core_I_BE2_BlocksStack_TypeInfo_12d4e10,7);
LAB_00609db4:
        (*(code *)*puVar10)(plVar11,uVar9,puVar10[1]);
        plVar11 = *(long **)(param_1 + 0x48);
        if (plVar11 != (long *)0x0) {
          lVar3 = *plVar11;
          if ((ulong)*(ushort *)(lVar3 + 0x12a) != 0) {
            uVar7 = 0;
            piVar8 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
            do {
              if (*(long *)(piVar8 + -2) ==
                  _MG_BlocksEngine2_Core_I_BE2_BlocksStack_TypeInfo_12d4e10) {
                puVar10 = (undefined8 *)(lVar3 + (long)(*piVar8 + 3) * 0x10 + 0x138);
                goto LAB_00609ecc;
              }
              uVar7 = uVar7 + 1;
              piVar8 = piVar8 + 4;
            } while (uVar7 < *(ushort *)(lVar3 + 0x12a));
          }
          puVar10 = (undefined8 *)
                    native_sub_3c9b34(plVar11,
                                      _MG_BlocksEngine2_Core_I_BE2_BlocksStack_TypeInfo_12d4e10,3);
LAB_00609ecc:
          UNRECOVERED_JUMPTABLE_00 = (code *)*puVar10;
          uVar4 = puVar10[1];
          iVar2 = 0;
          goto LAB_00609ed8;
        }
      }
    }
    goto LAB_00609ef0;
  }
  plVar12 = *(long **)(param_1 + 0x48);
  if (plVar12 == (long *)0x0) goto LAB_00609ef0;
  lVar3 = *plVar12;
  if ((ulong)*(ushort *)(lVar3 + 0x12a) != 0) {
    uVar7 = 0;
    piVar8 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
    do {
      if (*(long *)(piVar8 + -2) == _MG_BlocksEngine2_Core_I_BE2_BlocksStack_TypeInfo_12d4e10) {
        puVar10 = (undefined8 *)(lVar3 + (long)(*piVar8 + 4) * 0x10 + 0x138);
        goto LAB_00609b74;
      }
      uVar7 = uVar7 + 1;
      piVar8 = piVar8 + 4;
    } while (uVar7 < *(ushort *)(lVar3 + 0x12a));
  }
  puVar10 = (undefined8 *)
            native_sub_3c9b34(plVar12,_MG_BlocksEngine2_Core_I_BE2_BlocksStack_TypeInfo_12d4e10,4);
LAB_00609b74:
  iVar2 = (*(code *)*puVar10)(plVar12,puVar10[1]);
  lVar3 = *plVar12;
  iVar2 = iVar2 + 1;
  if ((ulong)*(ushort *)(lVar3 + 0x12a) != 0) {
    uVar7 = 0;
    piVar8 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
    do {
      if (*(long *)(piVar8 + -2) == _MG_BlocksEngine2_Core_I_BE2_BlocksStack_TypeInfo_12d4e10)
      goto LAB_00609e7c;
      uVar7 = uVar7 + 1;
      piVar8 = piVar8 + 4;
    } while (uVar7 < *(ushort *)(lVar3 + 0x12a));
  }
LAB_00609e6c:
  puVar10 = (undefined8 *)
            native_sub_3c9b34(plVar12,_MG_BlocksEngine2_Core_I_BE2_BlocksStack_TypeInfo_12d4e10,5);
LAB_00609e8c:
  (*(code *)*puVar10)(plVar12,iVar2,puVar10[1]);
native_MG_BlocksEngine2_Block_Instruction_BE2_InstructionBase__ExecuteInstruction_611e9c:
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
          puVar10 = (undefined8 *)(lVar3 + (long)(*piVar8 + 0xb) * 0x10 + 0x138);
          goto LAB_00611f54;
        }
        uVar7 = uVar7 + 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 < *(ushort *)(lVar3 + 0x12a));
    }
    puVar10 = (undefined8 *)
              native_sub_3c9b34(plVar12,_MG_BlocksEngine2_Core_I_BE2_BlocksStack_TypeInfo_12d4e10,
                                0xb);
LAB_00611f54:
    lVar3 = (*(code *)*puVar10)(plVar12,puVar10[1]);
    if ((lVar3 != 0) &&
       (native_UnityEngine_Events_UnityEvent_BaseEventData___Invoke_8a0108
                  (lVar3,plVar11,
                   _Method_UnityEngine_Events_UnityEvent_I_BE2_Instruction__Invoke___12de478),
       plVar11 != (long *)0x0)) {
      lVar3 = *plVar11;
      if ((ulong)*(ushort *)(lVar3 + 0x12a) != 0) {
        uVar7 = 0;
        piVar8 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
        do {
          if (*(long *)(piVar8 + -2) ==
              _MG_BlocksEngine2_Block_Instruction_I_BE2_Instruction_TypeInfo_12d4e28) {
            puVar10 = (undefined8 *)(lVar3 + (long)(*piVar8 + 3) * 0x10 + 0x138);
            goto LAB_00611fdc;
          }
          uVar7 = uVar7 + 1;
          piVar8 = piVar8 + 4;
        } while (uVar7 < *(ushort *)(lVar3 + 0x12a));
      }
      puVar10 = (undefined8 *)
                native_sub_3c9b34(plVar11,
                                  _MG_BlocksEngine2_Block_Instruction_I_BE2_Instruction_TypeInfo_12d4e28
                                  ,3);
LAB_00611fdc:
                    /* WARNING: Could not recover jumptable at 0x00611ff0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)*puVar10)(plVar11,puVar10[1]);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
LAB_0060489c:
  puVar10 = (undefined8 *)(lVar3 + (long)(*piVar8 + 5) * 0x10 + 0x138);
LAB_006048ac:
  (*(code *)*puVar10)(plVar12,iVar2,puVar10[1]);
  goto native_MG_BlocksEngine2_Block_Instruction_BE2_InstructionBase__ExecuteInstruction_611e9c;
LAB_00609e7c:
  puVar10 = (undefined8 *)(lVar3 + (long)(*piVar8 + 5) * 0x10 + 0x138);
  goto LAB_00609e8c;
}



/* BE2_Ins_IfElse$$Reset @ 0x60a260
 * void BE2_Ins_IfElse__Reset (BE2_Ins_IfElse_o* __this, const MethodInfo* method); */

/* BE2_Ins_IfElse$$Reset
   void BE2_Ins_IfElse__Reset (BE2_Ins_IfElse_o* __this, const MethodInfo* method); */

void native_BE2_Ins_IfElse__Reset_60a260(long param_1)

{
  *(undefined1 *)(param_1 + 0x88) = 1;
  return;
}



/* BE2_Ins_IfElse$$.ctor @ 0x60a26c
 * void BE2_Ins_IfElse___ctor (BE2_Ins_IfElse_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* BE2_Ins_IfElse$$.ctor
   void BE2_Ins_IfElse___ctor (BE2_Ins_IfElse_o* __this, const MethodInfo* method); */

undefined1  [16] native_BE2_Ins_IfElse___ctor_60a26c(ulong param_1)

{
  undefined1 auVar1 [16];
  
  *(undefined1 *)(param_1 + 0x88) = 1;
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


