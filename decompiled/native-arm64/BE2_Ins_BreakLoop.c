/* ARM64 IL2CPP native pseudocode from Ghidra.
 * Recovered implementation, not original C# source.
 * Function boundaries follow the IL2CPP method address table. */


/* BE2_Ins_BreakLoop$$OnButtonStop @ 0x605078
 * void BE2_Ins_BreakLoop__OnButtonStop (BE2_Ins_BreakLoop_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* BE2_Ins_BreakLoop$$OnButtonStop
   void BE2_Ins_BreakLoop__OnButtonStop (BE2_Ins_BreakLoop_o* __this, const MethodInfo* method); */

void native_BE2_Ins_BreakLoop__OnButtonStop_605078(long param_1)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 *puVar6;
  
  if ((bRam000000000133edfe & 1) == 0) {
    native_sub_43273c(&Method_System_Collections_Generic_List_I_BE2_Instruction__ToArray___12dc9d8);
    bRam000000000133edfe = 1;
  }
  uVar4 = native_MG_BlocksEngine2_Utils_BE2_BlockUtils__GetParentInstructionOfType_56e654
                    (param_1,2,0);
  *(undefined8 *)(param_1 + 0x78) = uVar4;
  native_sub_4326e0(param_1 + 0x78);
  lVar5 = native_MG_BlocksEngine2_Utils_BE2_BlockUtils__GetParentInstructionOfTypeAll_56ebc8
                    (param_1,1,0);
  if (lVar5 != 0) {
    uVar4 = native_System_Collections_Generic_List_AndroidAssetPackState___ToArray_d426dc
                      (lVar5,
                       _Method_System_Collections_Generic_List_I_BE2_Instruction__ToArray___12dc9d8)
    ;
    puVar6 = (undefined8 *)(param_1 + 0x80);
    *puVar6 = uVar4;
    if (iRam0000000001345318 != 0) {
      puVar1 = (ulong *)(((ulong)puVar6 >> 0x12 & 0x7fff) * 8 + 0x138ecd8);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = *puVar1 | 1L << ((ulong)puVar6 >> 0xc & 0x3f);
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* BE2_Ins_BreakLoop$$OnStackActive @ 0x605108
 * void BE2_Ins_BreakLoop__OnStackActive (BE2_Ins_BreakLoop_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* BE2_Ins_BreakLoop$$OnStackActive
   void BE2_Ins_BreakLoop__OnStackActive (BE2_Ins_BreakLoop_o* __this, const MethodInfo* method); */

void native_BE2_Ins_BreakLoop__OnStackActive_605108(long param_1)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 *puVar6;
  
  if ((bRam000000000133edff & 1) == 0) {
    native_sub_43273c(&Method_System_Collections_Generic_List_I_BE2_Instruction__ToArray___12dc9d8);
    bRam000000000133edff = 1;
  }
  uVar4 = native_MG_BlocksEngine2_Utils_BE2_BlockUtils__GetParentInstructionOfType_56e654
                    (param_1,2,0);
  *(undefined8 *)(param_1 + 0x78) = uVar4;
  native_sub_4326e0(param_1 + 0x78);
  lVar5 = native_MG_BlocksEngine2_Utils_BE2_BlockUtils__GetParentInstructionOfTypeAll_56ebc8
                    (param_1,1,0);
  if (lVar5 != 0) {
    uVar4 = native_System_Collections_Generic_List_AndroidAssetPackState___ToArray_d426dc
                      (lVar5,
                       _Method_System_Collections_Generic_List_I_BE2_Instruction__ToArray___12dc9d8)
    ;
    puVar6 = (undefined8 *)(param_1 + 0x80);
    *puVar6 = uVar4;
    if (iRam0000000001345318 != 0) {
      puVar1 = (ulong *)(((ulong)puVar6 >> 0x12 & 0x7fff) * 8 + 0x138ecd8);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = *puVar1 | 1L << ((ulong)puVar6 >> 0xc & 0x3f);
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* BE2_Ins_BreakLoop$$Function @ 0x605198
 * void BE2_Ins_BreakLoop__Function (BE2_Ins_BreakLoop_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* BE2_Ins_BreakLoop$$Function
   void BE2_Ins_BreakLoop__Function (BE2_Ins_BreakLoop_o* __this, const MethodInfo* method); */

void native_BE2_Ins_BreakLoop__Function_605198(long *param_1)

{
  uint uVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  code *UNRECOVERED_JUMPTABLE;
  long lVar5;
  ulong uVar6;
  int *piVar7;
  undefined4 uVar8;
  long *plVar9;
  long *plVar10;
  long lVar11;
  uint uVar12;
  
  if ((bRam000000000133ee00 & 1) == 0) {
    native_sub_43273c(&MG_BlocksEngine2_Block_Instruction_I_BE2_InstructionBase_TypeInfo_12d4e30);
    native_sub_43273c(&MG_BlocksEngine2_Block_Instruction_I_BE2_Instruction_TypeInfo_12d4e28);
    bRam000000000133ee00 = 1;
  }
  if ((param_1[0xf] != 0) ||
     ((**(code **)(*param_1 + 0x2b8))(param_1,*(undefined8 *)(*param_1 + 0x2c0)), param_1[0xf] != 0)
     ) {
    lVar11 = param_1[0x10];
    if (lVar11 != 0) {
      uVar1 = *(uint *)(lVar11 + 0x18);
      if (0 < (int)uVar1) {
        uVar12 = 0;
        do {
          if (uVar1 <= uVar12) {
            uVar4 = native_sub_43283c();
                    /* WARNING: Subroutine does not return */
            native_sub_4327dc(uVar4,0);
          }
          plVar9 = *(long **)(lVar11 + (long)(int)uVar12 * 8 + 0x20);
          if (plVar9 == (long *)0x0) goto LAB_00605424;
          lVar5 = *plVar9;
          if ((ulong)*(ushort *)(lVar5 + 0x12a) != 0) {
            uVar6 = 0;
            piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
            do {
              if (*(long *)(piVar7 + -2) ==
                  _MG_BlocksEngine2_Block_Instruction_I_BE2_Instruction_TypeInfo_12d4e28) {
                puVar3 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
                goto LAB_00605290;
              }
              uVar6 = uVar6 + 1;
              piVar7 = piVar7 + 4;
            } while (uVar6 < *(ushort *)(lVar5 + 0x12a));
          }
          puVar3 = (undefined8 *)
                   native_sub_3c9b34(plVar9,
                                     _MG_BlocksEngine2_Block_Instruction_I_BE2_Instruction_TypeInfo_12d4e28
                                     ,0);
LAB_00605290:
          plVar9 = (long *)(*(code *)*puVar3)(plVar9,puVar3[1]);
          if (plVar9 == (long *)0x0) goto LAB_00605424;
          lVar5 = *plVar9;
          if ((ulong)*(ushort *)(lVar5 + 0x12a) != 0) {
            uVar6 = 0;
            piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
            do {
              if (*(long *)(piVar7 + -2) ==
                  _MG_BlocksEngine2_Block_Instruction_I_BE2_InstructionBase_TypeInfo_12d4e30) {
                puVar3 = (undefined8 *)(lVar5 + (long)(*piVar7 + 0xc) * 0x10 + 0x138);
                goto LAB_006052fc;
              }
              uVar6 = uVar6 + 1;
              piVar7 = piVar7 + 4;
            } while (uVar6 < *(ushort *)(lVar5 + 0x12a));
          }
          puVar3 = (undefined8 *)
                   native_sub_3c9b34(plVar9,
                                     _MG_BlocksEngine2_Block_Instruction_I_BE2_InstructionBase_TypeInfo_12d4e30
                                     ,0xc);
LAB_006052fc:
          (*(code *)*puVar3)(plVar9,puVar3[1]);
          uVar1 = *(uint *)(lVar11 + 0x18);
          uVar12 = uVar12 + 1;
        } while ((int)uVar12 < (int)uVar1);
      }
      plVar9 = (long *)param_1[0xf];
      if (plVar9 != (long *)0x0) {
        lVar11 = *plVar9;
        if ((ulong)*(ushort *)(lVar11 + 0x12a) != 0) {
          uVar6 = 0;
          piVar7 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
          do {
            if (*(long *)(piVar7 + -2) ==
                _MG_BlocksEngine2_Block_Instruction_I_BE2_Instruction_TypeInfo_12d4e28) {
              puVar3 = (undefined8 *)(lVar11 + (long)*piVar7 * 0x10 + 0x138);
              goto LAB_0060537c;
            }
            uVar6 = uVar6 + 1;
            piVar7 = piVar7 + 4;
          } while (uVar6 < *(ushort *)(lVar11 + 0x12a));
        }
        puVar3 = (undefined8 *)
                 native_sub_3c9b34(plVar9,
                                   _MG_BlocksEngine2_Block_Instruction_I_BE2_Instruction_TypeInfo_12d4e28
                                   ,0);
LAB_0060537c:
        plVar9 = (long *)(*(code *)*puVar3)(plVar9,puVar3[1]);
        if (plVar9 != (long *)0x0) {
          lVar11 = *plVar9;
          if ((ulong)*(ushort *)(lVar11 + 0x12a) != 0) {
            uVar6 = 0;
            piVar7 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
            do {
              if (*(long *)(piVar7 + -2) ==
                  _MG_BlocksEngine2_Block_Instruction_I_BE2_InstructionBase_TypeInfo_12d4e30) {
                puVar3 = (undefined8 *)(lVar11 + (long)(*piVar7 + 0xb) * 0x10 + 0x138);
                goto LAB_006053f0;
              }
              uVar6 = uVar6 + 1;
              piVar7 = piVar7 + 4;
            } while (uVar6 < *(ushort *)(lVar11 + 0x12a));
          }
          puVar3 = (undefined8 *)
                   native_sub_3c9b34(plVar9,
                                     _MG_BlocksEngine2_Block_Instruction_I_BE2_InstructionBase_TypeInfo_12d4e30
                                     ,0xb);
LAB_006053f0:
                    /* WARNING: Could not recover jumptable at 0x00605408. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*(code *)*puVar3)(plVar9,puVar3[1]);
          return;
        }
      }
    }
LAB_00605424:
                    /* WARNING: Subroutine does not return */
    native_sub_432810();
  }
  if ((bRam000000000133ee62 & 1) == 0) {
    native_sub_43273c(&MG_BlocksEngine2_Block_I_BE2_Block_TypeInfo_12d4dd8);
    native_sub_43273c(&MG_BlocksEngine2_Core_I_BE2_BlocksStack_TypeInfo_12d4e10);
    native_sub_43273c(&MG_BlocksEngine2_Block_Instruction_I_BE2_InstructionBase_TypeInfo_12d4e30);
    native_sub_43273c(&MG_BlocksEngine2_Block_Instruction_I_BE2_Instruction_TypeInfo_12d4e28);
    bRam000000000133ee62 = 1;
  }
  plVar9 = (long *)param_1[9];
  if (plVar9 == (long *)0x0) goto LAB_006048fc;
  lVar11 = *plVar9;
  if ((ulong)*(ushort *)(lVar11 + 0x12a) != 0) {
    uVar6 = 0;
    piVar7 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
    do {
      if (*(long *)(piVar7 + -2) == _MG_BlocksEngine2_Core_I_BE2_BlocksStack_TypeInfo_12d4e10) {
        puVar3 = (undefined8 *)(lVar11 + (long)(*piVar7 + 9) * 0x10 + 0x138);
        goto LAB_00603cfc;
      }
      uVar6 = uVar6 + 1;
      piVar7 = piVar7 + 4;
    } while (uVar6 < *(ushort *)(lVar11 + 0x12a));
  }
  puVar3 = (undefined8 *)
           native_sub_3c9b34(plVar9,_MG_BlocksEngine2_Core_I_BE2_BlocksStack_TypeInfo_12d4e10,9);
LAB_00603cfc:
  lVar11 = (*(code *)*puVar3)(plVar9,puVar3[1]);
  if (lVar11 == 0) goto LAB_006048fc;
  lVar5 = param_1[6];
  plVar9 = (long *)param_1[9];
  if (*(int *)(lVar11 + 0x18) <= (int)lVar5) {
    if (plVar9 == (long *)0x0) goto LAB_006048fc;
    lVar11 = *plVar9;
    if ((ulong)*(ushort *)(lVar11 + 0x12a) != 0) {
      uVar6 = 0;
      piVar7 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == _MG_BlocksEngine2_Core_I_BE2_BlocksStack_TypeInfo_12d4e10) {
          puVar3 = (undefined8 *)(lVar11 + (long)(*piVar7 + 7) * 0x10 + 0x138);
          goto LAB_00603e50;
        }
        uVar6 = uVar6 + 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 < *(ushort *)(lVar11 + 0x12a));
    }
    puVar3 = (undefined8 *)
             native_sub_3c9b34(plVar9,_MG_BlocksEngine2_Core_I_BE2_BlocksStack_TypeInfo_12d4e10,7);
LAB_00603e50:
    (*(code *)*puVar3)(plVar9,(int)lVar5,puVar3[1]);
    plVar9 = (long *)param_1[9];
    if (plVar9 == (long *)0x0) goto LAB_006048fc;
    lVar11 = *plVar9;
    if ((ulong)*(ushort *)(lVar11 + 0x12a) != 0) {
      uVar6 = 0;
      piVar7 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == _MG_BlocksEngine2_Core_I_BE2_BlocksStack_TypeInfo_12d4e10) {
          puVar3 = (undefined8 *)(lVar11 + (long)(*piVar7 + 0xf) * 0x10 + 0x138);
          goto LAB_00603ec0;
        }
        uVar6 = uVar6 + 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 < *(ushort *)(lVar11 + 0x12a));
    }
    puVar3 = (undefined8 *)
             native_sub_3c9b34(plVar9,_MG_BlocksEngine2_Core_I_BE2_BlocksStack_TypeInfo_12d4e10,0xf)
    ;
LAB_00603ec0:
    uVar6 = (*(code *)*puVar3)(plVar9,puVar3[1]);
    if ((uVar6 & 1) == 0) {
      return;
    }
    plVar9 = (long *)param_1[8];
    if (plVar9 == (long *)0x0) goto LAB_006048fc;
    lVar11 = *plVar9;
    if ((ulong)*(ushort *)(lVar11 + 0x12a) != 0) {
      uVar6 = 0;
      piVar7 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == _MG_BlocksEngine2_Block_I_BE2_Block_TypeInfo_12d4dd8) {
          puVar3 = (undefined8 *)(lVar11 + (long)(*piVar7 + 1) * 0x10 + 0x138);
          goto LAB_00604004;
        }
        uVar6 = uVar6 + 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 < *(ushort *)(lVar11 + 0x12a));
    }
    puVar3 = (undefined8 *)
             native_sub_3c9b34(plVar9,_MG_BlocksEngine2_Block_I_BE2_Block_TypeInfo_12d4dd8,1);
LAB_00604004:
    iVar2 = (*(code *)*puVar3)(plVar9,puVar3[1]);
    if (iVar2 != 1) {
      plVar9 = (long *)param_1[8];
      if (plVar9 == (long *)0x0) goto LAB_006048fc;
      lVar11 = *plVar9;
      if ((ulong)*(ushort *)(lVar11 + 0x12a) != 0) {
        uVar6 = 0;
        piVar7 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
        do {
          if (*(long *)(piVar7 + -2) == _MG_BlocksEngine2_Block_I_BE2_Block_TypeInfo_12d4dd8) {
            puVar3 = (undefined8 *)(lVar11 + (long)(*piVar7 + 1) * 0x10 + 0x138);
            goto LAB_00604244;
          }
          uVar6 = uVar6 + 1;
          piVar7 = piVar7 + 4;
        } while (uVar6 < *(ushort *)(lVar11 + 0x12a));
      }
      puVar3 = (undefined8 *)
               native_sub_3c9b34(plVar9,_MG_BlocksEngine2_Block_I_BE2_Block_TypeInfo_12d4dd8,1);
LAB_00604244:
      iVar2 = (*(code *)*puVar3)(plVar9,puVar3[1]);
      if (iVar2 != 2) {
        return;
      }
    }
    plVar9 = (long *)param_1[9];
    if (plVar9 == (long *)0x0) goto LAB_006048fc;
    lVar11 = *plVar9;
    if ((ulong)*(ushort *)(lVar11 + 0x12a) != 0) {
      uVar6 = 0;
      piVar7 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == _MG_BlocksEngine2_Core_I_BE2_BlocksStack_TypeInfo_12d4e10) {
          puVar3 = (undefined8 *)(lVar11 + (long)(*piVar7 + 9) * 0x10 + 0x138);
          goto LAB_006042d0;
        }
        uVar6 = uVar6 + 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 < *(ushort *)(lVar11 + 0x12a));
    }
    puVar3 = (undefined8 *)
             native_sub_3c9b34(plVar9,_MG_BlocksEngine2_Core_I_BE2_BlocksStack_TypeInfo_12d4e10,9);
LAB_006042d0:
    lVar11 = (*(code *)*puVar3)(plVar9,puVar3[1]);
    if (lVar11 == 0) goto LAB_006048fc;
    if (*(int *)(lVar11 + 0x18) == 0) goto LAB_00604900;
    plVar9 = *(long **)(lVar11 + 0x20);
    goto LAB_006048c4;
  }
  if (plVar9 == (long *)0x0) goto LAB_006048fc;
  lVar11 = *plVar9;
  if ((ulong)*(ushort *)(lVar11 + 0x12a) != 0) {
    uVar6 = 0;
    piVar7 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
    do {
      if (*(long *)(piVar7 + -2) == _MG_BlocksEngine2_Core_I_BE2_BlocksStack_TypeInfo_12d4e10) {
        puVar3 = (undefined8 *)(lVar11 + (long)(*piVar7 + 9) * 0x10 + 0x138);
        goto LAB_00603dc8;
      }
      uVar6 = uVar6 + 1;
      piVar7 = piVar7 + 4;
    } while (uVar6 < *(ushort *)(lVar11 + 0x12a));
  }
  puVar3 = (undefined8 *)
           native_sub_3c9b34(plVar9,_MG_BlocksEngine2_Core_I_BE2_BlocksStack_TypeInfo_12d4e10,9);
LAB_00603dc8:
  lVar11 = (*(code *)*puVar3)(plVar9,puVar3[1]);
  if (lVar11 == 0) goto LAB_006048fc;
  if (*(uint *)(lVar11 + 0x18) <= *(uint *)(param_1 + 6)) {
LAB_00604900:
    uVar4 = native_sub_43283c();
                    /* WARNING: Subroutine does not return */
    native_sub_4327dc(uVar4,0);
  }
  plVar10 = (long *)param_1[9];
  if (plVar10 == (long *)0x0) goto LAB_006048fc;
  lVar5 = *plVar10;
  plVar9 = *(long **)(lVar11 + (long)(int)*(uint *)(param_1 + 6) * 8 + 0x20);
  if ((ulong)*(ushort *)(lVar5 + 0x12a) != 0) {
    uVar6 = 0;
    piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
    do {
      if (*(long *)(piVar7 + -2) == _MG_BlocksEngine2_Core_I_BE2_BlocksStack_TypeInfo_12d4e10) {
        puVar3 = (undefined8 *)(lVar5 + (long)(*piVar7 + 0xf) * 0x10 + 0x138);
        goto LAB_00603f38;
      }
      uVar6 = uVar6 + 1;
      piVar7 = piVar7 + 4;
    } while (uVar6 < *(ushort *)(lVar5 + 0x12a));
  }
  puVar3 = (undefined8 *)
           native_sub_3c9b34(plVar10,_MG_BlocksEngine2_Core_I_BE2_BlocksStack_TypeInfo_12d4e10,0xf);
LAB_00603f38:
  uVar6 = (*(code *)*puVar3)(plVar10,puVar3[1]);
  if ((uVar6 & 1) == 0) {
    if (plVar9 == (long *)0x0) goto LAB_006048fc;
    lVar11 = *plVar9;
    if ((ulong)*(ushort *)(lVar11 + 0x12a) != 0) {
      uVar6 = 0;
      piVar7 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) ==
            _MG_BlocksEngine2_Block_Instruction_I_BE2_Instruction_TypeInfo_12d4e28) {
          puVar3 = (undefined8 *)(lVar11 + (long)*piVar7 * 0x10 + 0x138);
          goto LAB_006040e8;
        }
        uVar6 = uVar6 + 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 < *(ushort *)(lVar11 + 0x12a));
    }
    puVar3 = (undefined8 *)
             native_sub_3c9b34(plVar9,
                               _MG_BlocksEngine2_Block_Instruction_I_BE2_Instruction_TypeInfo_12d4e28
                               ,0);
LAB_006040e8:
    plVar10 = (long *)(*(code *)*puVar3)(plVar9,puVar3[1]);
    if (plVar10 == (long *)0x0) goto LAB_006048fc;
    lVar11 = *plVar10;
    if ((ulong)*(ushort *)(lVar11 + 0x12a) != 0) {
      uVar6 = 0;
      piVar7 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) ==
            _MG_BlocksEngine2_Block_Instruction_I_BE2_InstructionBase_TypeInfo_12d4e30) {
          puVar3 = (undefined8 *)(lVar11 + (long)(*piVar7 + 3) * 0x10 + 0x138);
          goto LAB_0060415c;
        }
        uVar6 = uVar6 + 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 < *(ushort *)(lVar11 + 0x12a));
    }
    puVar3 = (undefined8 *)
             native_sub_3c9b34(plVar10,
                               _MG_BlocksEngine2_Block_Instruction_I_BE2_InstructionBase_TypeInfo_12d4e30
                               ,3);
LAB_0060415c:
    plVar10 = (long *)(*(code *)*puVar3)(plVar10,puVar3[1]);
    if (plVar10 == (long *)0x0) goto LAB_006048fc;
    lVar11 = *plVar10;
    if ((ulong)*(ushort *)(lVar11 + 0x12a) != 0) {
      uVar6 = 0;
      piVar7 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == _MG_BlocksEngine2_Block_I_BE2_Block_TypeInfo_12d4dd8) {
          puVar3 = (undefined8 *)(lVar11 + (long)(*piVar7 + 1) * 0x10 + 0x138);
          goto LAB_006041d0;
        }
        uVar6 = uVar6 + 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 < *(ushort *)(lVar11 + 0x12a));
    }
    puVar3 = (undefined8 *)
             native_sub_3c9b34(plVar10,_MG_BlocksEngine2_Block_I_BE2_Block_TypeInfo_12d4dd8,1);
LAB_006041d0:
    iVar2 = (*(code *)*puVar3)(plVar10,puVar3[1]);
    if (iVar2 == 4) {
      plVar10 = (long *)param_1[9];
      if (plVar10 == (long *)0x0) goto LAB_006048fc;
      lVar11 = *plVar10;
      if ((ulong)*(ushort *)(lVar11 + 0x12a) != 0) {
        uVar6 = 0;
        piVar7 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
        do {
          if (*(long *)(piVar7 + -2) == _MG_BlocksEngine2_Core_I_BE2_BlocksStack_TypeInfo_12d4e10) {
            puVar3 = (undefined8 *)(lVar11 + (long)(*piVar7 + 0x14) * 0x10 + 0x138);
            goto LAB_006043f0;
          }
          uVar6 = uVar6 + 1;
          piVar7 = piVar7 + 4;
        } while (uVar6 < *(ushort *)(lVar11 + 0x12a));
      }
      puVar3 = (undefined8 *)
               native_sub_3c9b34(plVar10,_MG_BlocksEngine2_Core_I_BE2_BlocksStack_TypeInfo_12d4e10,
                                 0x14);
LAB_006043f0:
      lVar11 = (*(code *)*puVar3)(plVar10,puVar3[1]);
      if (lVar11 == 0) goto LAB_006048fc;
      native_UnityEngine_Events_UnityEvent__Invoke_773864(lVar11,0);
    }
    plVar10 = (long *)param_1[9];
    if (plVar10 == (long *)0x0) goto LAB_006048fc;
    lVar11 = *plVar10;
    if ((ulong)*(ushort *)(lVar11 + 0x12a) != 0) {
      uVar6 = 0;
      piVar7 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == _MG_BlocksEngine2_Core_I_BE2_BlocksStack_TypeInfo_12d4e10) {
          puVar3 = (undefined8 *)(lVar11 + (long)(*piVar7 + 2) * 0x10 + 0x138);
          goto LAB_00604468;
        }
        uVar6 = uVar6 + 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 < *(ushort *)(lVar11 + 0x12a));
    }
    puVar3 = (undefined8 *)
             native_sub_3c9b34(plVar10,_MG_BlocksEngine2_Core_I_BE2_BlocksStack_TypeInfo_12d4e10,2);
LAB_00604468:
    uVar6 = (*(code *)*puVar3)(plVar10,puVar3[1]);
    if ((uVar6 & 1) != 0) {
      lVar11 = *plVar9;
      if ((ulong)*(ushort *)(lVar11 + 0x12a) != 0) {
        uVar6 = 0;
        piVar7 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
        do {
          if (*(long *)(piVar7 + -2) ==
              _MG_BlocksEngine2_Block_Instruction_I_BE2_Instruction_TypeInfo_12d4e28) {
            puVar3 = (undefined8 *)(lVar11 + (long)(*piVar7 + 1) * 0x10 + 0x138);
            goto LAB_006044d0;
          }
          uVar6 = uVar6 + 1;
          piVar7 = piVar7 + 4;
        } while (uVar6 < *(ushort *)(lVar11 + 0x12a));
      }
      puVar3 = (undefined8 *)
               native_sub_3c9b34(plVar9,
                                 _MG_BlocksEngine2_Block_Instruction_I_BE2_Instruction_TypeInfo_12d4e28
                                 ,1);
LAB_006044d0:
      uVar6 = (*(code *)*puVar3)(plVar9,puVar3[1]);
      if ((uVar6 & 1) == 0) {
        plVar10 = (long *)param_1[9];
        if (plVar10 == (long *)0x0) goto LAB_006048fc;
        lVar11 = *plVar10;
        if ((ulong)*(ushort *)(lVar11 + 0x12a) != 0) {
          uVar6 = 0;
          piVar7 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
          do {
            if (*(long *)(piVar7 + -2) == _MG_BlocksEngine2_Core_I_BE2_BlocksStack_TypeInfo_12d4e10)
            {
              puVar3 = (undefined8 *)(lVar11 + (long)(*piVar7 + 4) * 0x10 + 0x138);
              goto LAB_00604594;
            }
            uVar6 = uVar6 + 1;
            piVar7 = piVar7 + 4;
          } while (uVar6 < *(ushort *)(lVar11 + 0x12a));
        }
        puVar3 = (undefined8 *)
                 native_sub_3c9b34(plVar10,_MG_BlocksEngine2_Core_I_BE2_BlocksStack_TypeInfo_12d4e10
                                   ,4);
LAB_00604594:
        iVar2 = (*(code *)*puVar3)(plVar10,puVar3[1]);
        if (iVar2 < (int)param_1[0xc]) {
          plVar10 = (long *)param_1[9];
          if (plVar10 == (long *)0x0) goto LAB_006048fc;
          lVar11 = *plVar10;
          if ((ulong)*(ushort *)(lVar11 + 0x12a) != 0) {
            uVar6 = 0;
            piVar7 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
            do {
              if (*(long *)(piVar7 + -2) ==
                  _MG_BlocksEngine2_Core_I_BE2_BlocksStack_TypeInfo_12d4e10) {
                puVar3 = (undefined8 *)(lVar11 + (long)(*piVar7 + 4) * 0x10 + 0x138);
                goto LAB_00604850;
              }
              uVar6 = uVar6 + 1;
              piVar7 = piVar7 + 4;
            } while (uVar6 < *(ushort *)(lVar11 + 0x12a));
          }
          puVar3 = (undefined8 *)
                   native_sub_3c9b34(plVar10,
                                     _MG_BlocksEngine2_Core_I_BE2_BlocksStack_TypeInfo_12d4e10,4);
LAB_00604850:
          iVar2 = (*(code *)*puVar3)(plVar10,puVar3[1]);
          lVar11 = *plVar10;
          iVar2 = iVar2 + 1;
          if ((ulong)*(ushort *)(lVar11 + 0x12a) != 0) {
            uVar6 = 0;
            piVar7 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
            do {
              if (*(long *)(piVar7 + -2) ==
                  _MG_BlocksEngine2_Core_I_BE2_BlocksStack_TypeInfo_12d4e10) goto LAB_0060489c;
              uVar6 = uVar6 + 1;
              piVar7 = piVar7 + 4;
            } while (uVar6 < *(ushort *)(lVar11 + 0x12a));
          }
          goto LAB_006043d0;
        }
      }
    }
    lVar11 = *plVar9;
    plVar10 = (long *)param_1[9];
    if ((ulong)*(ushort *)(lVar11 + 0x12a) != 0) {
      uVar6 = 0;
      piVar7 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) ==
            _MG_BlocksEngine2_Block_Instruction_I_BE2_Instruction_TypeInfo_12d4e28) {
          puVar3 = (undefined8 *)(lVar11 + (long)*piVar7 * 0x10 + 0x138);
          goto LAB_00604654;
        }
        uVar6 = uVar6 + 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 < *(ushort *)(lVar11 + 0x12a));
    }
    puVar3 = (undefined8 *)
             native_sub_3c9b34(plVar9,
                               _MG_BlocksEngine2_Block_Instruction_I_BE2_Instruction_TypeInfo_12d4e28
                               ,0);
LAB_00604654:
    plVar9 = (long *)(*(code *)*puVar3)(plVar9,puVar3[1]);
    if (plVar9 != (long *)0x0) {
      lVar11 = *plVar9;
      if ((ulong)*(ushort *)(lVar11 + 0x12a) != 0) {
        uVar6 = 0;
        piVar7 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
        do {
          if (*(long *)(piVar7 + -2) ==
              _MG_BlocksEngine2_Block_Instruction_I_BE2_InstructionBase_TypeInfo_12d4e30) {
            puVar3 = (undefined8 *)(lVar11 + (long)(*piVar7 + 3) * 0x10 + 0x138);
            goto LAB_006046c0;
          }
          uVar6 = uVar6 + 1;
          piVar7 = piVar7 + 4;
        } while (uVar6 < *(ushort *)(lVar11 + 0x12a));
      }
      puVar3 = (undefined8 *)
               native_sub_3c9b34(plVar9,
                                 _MG_BlocksEngine2_Block_Instruction_I_BE2_InstructionBase_TypeInfo_12d4e30
                                 ,3);
LAB_006046c0:
      plVar9 = (long *)(*(code *)*puVar3)(plVar9,puVar3[1]);
      if (plVar9 != (long *)0x0) {
        lVar11 = *plVar9;
        if ((ulong)*(ushort *)(lVar11 + 0x12a) != 0) {
          uVar6 = 0;
          piVar7 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
          do {
            if (*(long *)(piVar7 + -2) == _MG_BlocksEngine2_Block_I_BE2_Block_TypeInfo_12d4dd8) {
              puVar3 = (undefined8 *)(lVar11 + (long)(*piVar7 + 1) * 0x10 + 0x138);
              goto LAB_0060472c;
            }
            uVar6 = uVar6 + 1;
            piVar7 = piVar7 + 4;
          } while (uVar6 < *(ushort *)(lVar11 + 0x12a));
        }
        puVar3 = (undefined8 *)
                 native_sub_3c9b34(plVar9,_MG_BlocksEngine2_Block_I_BE2_Block_TypeInfo_12d4dd8,1);
LAB_0060472c:
        iVar2 = (*(code *)*puVar3)(plVar9,puVar3[1]);
        if (iVar2 == 4) {
          uVar8 = 0;
        }
        else {
          uVar8 = (undefined4)param_1[6];
        }
        if (plVar10 != (long *)0x0) {
          lVar11 = *plVar10;
          if ((ulong)*(ushort *)(lVar11 + 0x12a) != 0) {
            uVar6 = 0;
            piVar7 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
            do {
              if (*(long *)(piVar7 + -2) ==
                  _MG_BlocksEngine2_Core_I_BE2_BlocksStack_TypeInfo_12d4e10) {
                puVar3 = (undefined8 *)(lVar11 + (long)(*piVar7 + 7) * 0x10 + 0x138);
                goto LAB_006047ac;
              }
              uVar6 = uVar6 + 1;
              piVar7 = piVar7 + 4;
            } while (uVar6 < *(ushort *)(lVar11 + 0x12a));
          }
          puVar3 = (undefined8 *)
                   native_sub_3c9b34(plVar10,
                                     _MG_BlocksEngine2_Core_I_BE2_BlocksStack_TypeInfo_12d4e10,7);
LAB_006047ac:
          UNRECOVERED_JUMPTABLE = (code *)*puVar3;
          uVar4 = puVar3[1];
LAB_006047b8:
                    /* WARNING: Could not recover jumptable at 0x006047cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*UNRECOVERED_JUMPTABLE)(plVar10,uVar8,uVar4);
          return;
        }
      }
    }
LAB_006048fc:
                    /* WARNING: Subroutine does not return */
    native_sub_432810();
  }
  plVar10 = (long *)param_1[8];
  if (plVar10 == (long *)0x0) goto LAB_006048fc;
  lVar11 = *plVar10;
  if ((ulong)*(ushort *)(lVar11 + 0x12a) != 0) {
    uVar6 = 0;
    piVar7 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
    do {
      if (*(long *)(piVar7 + -2) == _MG_BlocksEngine2_Block_I_BE2_Block_TypeInfo_12d4dd8) {
        puVar3 = (undefined8 *)(lVar11 + (long)(*piVar7 + 1) * 0x10 + 0x138);
        goto LAB_00604078;
      }
      uVar6 = uVar6 + 1;
      piVar7 = piVar7 + 4;
    } while (uVar6 < *(ushort *)(lVar11 + 0x12a));
  }
  puVar3 = (undefined8 *)
           native_sub_3c9b34(plVar10,_MG_BlocksEngine2_Block_I_BE2_Block_TypeInfo_12d4dd8,1);
LAB_00604078:
  iVar2 = (*(code *)*puVar3)(plVar10,puVar3[1]);
  if (iVar2 != 1) {
    plVar10 = (long *)param_1[8];
    if (plVar10 == (long *)0x0) goto LAB_006048fc;
    lVar11 = *plVar10;
    if ((ulong)*(ushort *)(lVar11 + 0x12a) != 0) {
      uVar6 = 0;
      piVar7 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == _MG_BlocksEngine2_Block_I_BE2_Block_TypeInfo_12d4dd8) {
          puVar3 = (undefined8 *)(lVar11 + (long)(*piVar7 + 1) * 0x10 + 0x138);
          goto LAB_00604304;
        }
        uVar6 = uVar6 + 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 < *(ushort *)(lVar11 + 0x12a));
    }
    puVar3 = (undefined8 *)
             native_sub_3c9b34(plVar10,_MG_BlocksEngine2_Block_I_BE2_Block_TypeInfo_12d4dd8,1);
LAB_00604304:
    iVar2 = (*(code *)*puVar3)(plVar10,puVar3[1]);
    if ((iVar2 != 2) &&
       (uVar6 = native_MG_BlocksEngine2_Utils_BE2_BlockUtils__BlockIsFunction_56f1f0(param_1[8],0),
       (uVar6 & 1) == 0)) {
      plVar9 = (long *)param_1[9];
      if (plVar9 == (long *)0x0) goto LAB_006048fc;
      lVar5 = *plVar9;
      lVar11 = param_1[6];
      if ((ulong)*(ushort *)(lVar5 + 0x12a) != 0) {
        uVar6 = 0;
        piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(long *)(piVar7 + -2) == _MG_BlocksEngine2_Core_I_BE2_BlocksStack_TypeInfo_12d4e10) {
            puVar3 = (undefined8 *)(lVar5 + (long)(*piVar7 + 7) * 0x10 + 0x138);
            goto LAB_006047e0;
          }
          uVar6 = uVar6 + 1;
          piVar7 = piVar7 + 4;
        } while (uVar6 < *(ushort *)(lVar5 + 0x12a));
      }
      puVar3 = (undefined8 *)
               native_sub_3c9b34(plVar9,_MG_BlocksEngine2_Core_I_BE2_BlocksStack_TypeInfo_12d4e10,7)
      ;
LAB_006047e0:
      (*(code *)*puVar3)(plVar9,(int)lVar11,puVar3[1]);
      plVar10 = (long *)param_1[9];
      if (plVar10 == (long *)0x0) goto LAB_006048fc;
      lVar11 = *plVar10;
      if ((ulong)*(ushort *)(lVar11 + 0x12a) != 0) {
        uVar6 = 0;
        piVar7 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
        do {
          if (*(long *)(piVar7 + -2) == _MG_BlocksEngine2_Core_I_BE2_BlocksStack_TypeInfo_12d4e10) {
            puVar3 = (undefined8 *)(lVar11 + (long)(*piVar7 + 3) * 0x10 + 0x138);
            goto LAB_006048ec;
          }
          uVar6 = uVar6 + 1;
          piVar7 = piVar7 + 4;
        } while (uVar6 < *(ushort *)(lVar11 + 0x12a));
      }
      puVar3 = (undefined8 *)
               native_sub_3c9b34(plVar10,_MG_BlocksEngine2_Core_I_BE2_BlocksStack_TypeInfo_12d4e10,3
                                );
LAB_006048ec:
      UNRECOVERED_JUMPTABLE = (code *)*puVar3;
      uVar4 = puVar3[1];
      uVar8 = 0;
      goto LAB_006047b8;
    }
  }
  plVar10 = (long *)param_1[9];
  if (plVar10 == (long *)0x0) goto LAB_006048fc;
  lVar11 = *plVar10;
  if ((ulong)*(ushort *)(lVar11 + 0x12a) != 0) {
    uVar6 = 0;
    piVar7 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
    do {
      if (*(long *)(piVar7 + -2) == _MG_BlocksEngine2_Core_I_BE2_BlocksStack_TypeInfo_12d4e10) {
        puVar3 = (undefined8 *)(lVar11 + (long)(*piVar7 + 4) * 0x10 + 0x138);
        goto LAB_00604388;
      }
      uVar6 = uVar6 + 1;
      piVar7 = piVar7 + 4;
    } while (uVar6 < *(ushort *)(lVar11 + 0x12a));
  }
  puVar3 = (undefined8 *)
           native_sub_3c9b34(plVar10,_MG_BlocksEngine2_Core_I_BE2_BlocksStack_TypeInfo_12d4e10,4);
LAB_00604388:
  iVar2 = (*(code *)*puVar3)(plVar10,puVar3[1]);
  lVar11 = *plVar10;
  iVar2 = iVar2 + 1;
  if ((ulong)*(ushort *)(lVar11 + 0x12a) != 0) {
    uVar6 = 0;
    piVar7 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
    do {
      if (*(long *)(piVar7 + -2) == _MG_BlocksEngine2_Core_I_BE2_BlocksStack_TypeInfo_12d4e10)
      goto LAB_0060489c;
      uVar6 = uVar6 + 1;
      piVar7 = piVar7 + 4;
    } while (uVar6 < *(ushort *)(lVar11 + 0x12a));
  }
LAB_006043d0:
  puVar3 = (undefined8 *)
           native_sub_3c9b34(plVar10,_MG_BlocksEngine2_Core_I_BE2_BlocksStack_TypeInfo_12d4e10,5);
LAB_006048ac:
  (*(code *)*puVar3)(plVar10,iVar2,puVar3[1]);
LAB_006048c4:
  if ((bRam000000000133ee63 & 1) == 0) {
    native_sub_43273c(&MG_BlocksEngine2_Core_I_BE2_BlocksStack_TypeInfo_12d4e10);
    native_sub_43273c(&MG_BlocksEngine2_Block_Instruction_I_BE2_Instruction_TypeInfo_12d4e28);
    native_sub_43273c(&Method_UnityEngine_Events_UnityEvent_I_BE2_Instruction__Invoke___12de478);
    bRam000000000133ee63 = 1;
  }
  plVar10 = (long *)param_1[9];
  if (plVar10 != (long *)0x0) {
    lVar11 = *plVar10;
    if ((ulong)*(ushort *)(lVar11 + 0x12a) != 0) {
      uVar6 = 0;
      piVar7 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == _MG_BlocksEngine2_Core_I_BE2_BlocksStack_TypeInfo_12d4e10) {
          puVar3 = (undefined8 *)(lVar11 + (long)(*piVar7 + 0xb) * 0x10 + 0x138);
          goto LAB_00611f54;
        }
        uVar6 = uVar6 + 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 < *(ushort *)(lVar11 + 0x12a));
    }
    puVar3 = (undefined8 *)
             native_sub_3c9b34(plVar10,_MG_BlocksEngine2_Core_I_BE2_BlocksStack_TypeInfo_12d4e10,0xb
                              );
LAB_00611f54:
    lVar11 = (*(code *)*puVar3)(plVar10,puVar3[1]);
    if ((lVar11 != 0) &&
       (native_UnityEngine_Events_UnityEvent_BaseEventData___Invoke_8a0108
                  (lVar11,plVar9,
                   _Method_UnityEngine_Events_UnityEvent_I_BE2_Instruction__Invoke___12de478),
       plVar9 != (long *)0x0)) {
      lVar11 = *plVar9;
      if ((ulong)*(ushort *)(lVar11 + 0x12a) != 0) {
        uVar6 = 0;
        piVar7 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
        do {
          if (*(long *)(piVar7 + -2) ==
              _MG_BlocksEngine2_Block_Instruction_I_BE2_Instruction_TypeInfo_12d4e28) {
            puVar3 = (undefined8 *)(lVar11 + (long)(*piVar7 + 3) * 0x10 + 0x138);
            goto LAB_00611fdc;
          }
          uVar6 = uVar6 + 1;
          piVar7 = piVar7 + 4;
        } while (uVar6 < *(ushort *)(lVar11 + 0x12a));
      }
      puVar3 = (undefined8 *)
               native_sub_3c9b34(plVar9,
                                 _MG_BlocksEngine2_Block_Instruction_I_BE2_Instruction_TypeInfo_12d4e28
                                 ,3);
LAB_00611fdc:
                    /* WARNING: Could not recover jumptable at 0x00611ff0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)*puVar3)(plVar9,puVar3[1]);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
LAB_0060489c:
  puVar3 = (undefined8 *)(lVar11 + (long)(*piVar7 + 5) * 0x10 + 0x138);
  goto LAB_006048ac;
}



/* BE2_Ins_BreakLoop$$.ctor @ 0x605434
 * void BE2_Ins_BreakLoop___ctor (BE2_Ins_BreakLoop_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* BE2_Ins_BreakLoop$$.ctor
   void BE2_Ins_BreakLoop___ctor (BE2_Ins_BreakLoop_o* __this, const MethodInfo* method); */

undefined1  [16] native_BE2_Ins_BreakLoop___ctor_605434(ulong param_1)

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


