/* ARM64 IL2CPP native pseudocode from Ghidra.
 * Recovered implementation, not original C# source.
 * Function boundaries follow the IL2CPP method address table. */


/* BE2_Ins_WhenPlayClicked$$OnButtonPlay @ 0x60f88c
 * void BE2_Ins_WhenPlayClicked__OnButtonPlay (BE2_Ins_WhenPlayClicked_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* BE2_Ins_WhenPlayClicked$$OnButtonPlay
   void BE2_Ins_WhenPlayClicked__OnButtonPlay (BE2_Ins_WhenPlayClicked_o* __this, const MethodInfo*
   method); */

void native_BE2_Ins_WhenPlayClicked__OnButtonPlay_60f88c(long param_1)

{
  undefined8 *puVar1;
  long lVar2;
  ulong uVar3;
  int *piVar4;
  long *plVar5;
  
  if ((bRam000000000133ee4b & 1) == 0) {
    native_sub_43273c(&MG_BlocksEngine2_Core_I_BE2_BlocksStack_TypeInfo_12d4e10);
    bRam000000000133ee4b = 1;
  }
  plVar5 = *(long **)(param_1 + 0x48);
  if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    native_sub_432810();
  }
  lVar2 = *plVar5;
  if ((ulong)*(ushort *)(lVar2 + 0x12a) != 0) {
    uVar3 = 0;
    piVar4 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
    do {
      if (*(long *)(piVar4 + -2) == _MG_BlocksEngine2_Core_I_BE2_BlocksStack_TypeInfo_12d4e10) {
        puVar1 = (undefined8 *)(lVar2 + (long)(*piVar4 + 3) * 0x10 + 0x138);
        goto LAB_0060f924;
      }
      uVar3 = uVar3 + 1;
      piVar4 = piVar4 + 4;
    } while (uVar3 < *(ushort *)(lVar2 + 0x12a));
  }
  puVar1 = (undefined8 *)
           native_sub_3c9b34(plVar5,_MG_BlocksEngine2_Core_I_BE2_BlocksStack_TypeInfo_12d4e10,3);
LAB_0060f924:
                    /* WARNING: Could not recover jumptable at 0x0060f938. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*puVar1)(plVar5,1,puVar1[1]);
  return;
}



/* BE2_Ins_WhenPlayClicked$$OnAwake @ 0x60f940
 * void BE2_Ins_WhenPlayClicked__OnAwake (BE2_Ins_WhenPlayClicked_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* BE2_Ins_WhenPlayClicked$$OnAwake
   void BE2_Ins_WhenPlayClicked__OnAwake (BE2_Ins_WhenPlayClicked_o* __this, const MethodInfo*
   method); */

void native_BE2_Ins_WhenPlayClicked__OnAwake_60f940(long param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  ulong uVar4;
  int *piVar5;
  long *plVar6;
  
  if ((bRam000000000133ee4c & 1) == 0) {
    native_sub_43273c(&Method_BE2_Ins_WhenPlayClicked_EndExecution___12e2258);
    native_sub_43273c(&MG_BlocksEngine2_Core_I_BE2_BlocksStack_TypeInfo_12d4e10);
    native_sub_43273c(&UnityEngine_Events_UnityAction_TypeInfo_12d65d0);
    bRam000000000133ee4c = 1;
  }
  plVar6 = *(long **)(param_1 + 0x48);
  if (plVar6 != (long *)0x0) {
    lVar3 = *plVar6;
    if ((ulong)*(ushort *)(lVar3 + 0x12a) != 0) {
      uVar4 = 0;
      piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
        if (*(long *)(piVar5 + -2) == _MG_BlocksEngine2_Core_I_BE2_BlocksStack_TypeInfo_12d4e10) {
          puVar1 = (undefined8 *)(lVar3 + (long)(*piVar5 + 0x14) * 0x10 + 0x138);
          goto LAB_0060f9f4;
        }
        uVar4 = uVar4 + 1;
        piVar5 = piVar5 + 4;
      } while (uVar4 < *(ushort *)(lVar3 + 0x12a));
    }
    puVar1 = (undefined8 *)
             native_sub_3c9b34(plVar6,_MG_BlocksEngine2_Core_I_BE2_BlocksStack_TypeInfo_12d4e10,0x14
                              );
LAB_0060f9f4:
    lVar3 = (*(code *)*puVar1)(plVar6,puVar1[1]);
    uVar2 = native_sub_432808(_UnityEngine_Events_UnityAction_TypeInfo_12d65d0);
    native_UnityEngine_Events_UnityAction___ctor_773130
              (uVar2,param_1,_Method_BE2_Ins_WhenPlayClicked_EndExecution___12e2258,0);
    if (lVar3 != 0) {
      uVar2 = native_UnityEngine_Events_UnityEvent__GetDelegate_7734f8(uVar2,uVar2,0);
      lVar3 = *(long *)(lVar3 + 0x10);
      if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
        native_sub_432810();
      }
      if ((bRam0000000001340cbd & 1) == 0) {
        native_sub_43273c(&Method_System_Collections_Generic_List_BaseInvokableCall__Add___12dc5b0,
                          uVar2,0);
        bRam0000000001340cbd = 1;
      }
      if (*(long *)(lVar3 + 0x18) != 0) {
        native_System_Collections_Generic_List_int_____Add_d40c00
                  (*(long *)(lVar3 + 0x18),uVar2,
                   _Method_System_Collections_Generic_List_BaseInvokableCall__Add___12dc5b0);
        *(undefined1 *)(lVar3 + 0x28) = 1;
        return;
      }
                    /* WARNING: Subroutine does not return */
      native_sub_432810();
    }
  }
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* BE2_Ins_WhenPlayClicked$$EndExecution @ 0x60fa58
 * void BE2_Ins_WhenPlayClicked__EndExecution (BE2_Ins_WhenPlayClicked_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* BE2_Ins_WhenPlayClicked$$EndExecution
   void BE2_Ins_WhenPlayClicked__EndExecution (BE2_Ins_WhenPlayClicked_o* __this, const MethodInfo*
   method); */

void native_BE2_Ins_WhenPlayClicked__EndExecution_60fa58(long param_1)

{
  undefined8 *puVar1;
  long lVar2;
  ulong uVar3;
  int *piVar4;
  long *plVar5;
  
  if ((bRam000000000133ee4d & 1) == 0) {
    native_sub_43273c(&MG_BlocksEngine2_Core_I_BE2_BlocksStack_TypeInfo_12d4e10);
    bRam000000000133ee4d = 1;
  }
  plVar5 = *(long **)(param_1 + 0x48);
  if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    native_sub_432810();
  }
  lVar2 = *plVar5;
  if ((ulong)*(ushort *)(lVar2 + 0x12a) != 0) {
    uVar3 = 0;
    piVar4 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
    do {
      if (*(long *)(piVar4 + -2) == _MG_BlocksEngine2_Core_I_BE2_BlocksStack_TypeInfo_12d4e10) {
        puVar1 = (undefined8 *)(lVar2 + (long)(*piVar4 + 3) * 0x10 + 0x138);
        goto LAB_0060faf0;
      }
      uVar3 = uVar3 + 1;
      piVar4 = piVar4 + 4;
    } while (uVar3 < *(ushort *)(lVar2 + 0x12a));
  }
  puVar1 = (undefined8 *)
           native_sub_3c9b34(plVar5,_MG_BlocksEngine2_Core_I_BE2_BlocksStack_TypeInfo_12d4e10,3);
LAB_0060faf0:
                    /* WARNING: Could not recover jumptable at 0x0060fb04. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*puVar1)(plVar5,0,puVar1[1]);
  return;
}



/* BE2_Ins_WhenPlayClicked$$Function @ 0x60fb0c
 * void BE2_Ins_WhenPlayClicked__Function (BE2_Ins_WhenPlayClicked_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* BE2_Ins_WhenPlayClicked$$Function
   void BE2_Ins_WhenPlayClicked__Function (BE2_Ins_WhenPlayClicked_o* __this, const MethodInfo*
   method); */

void native_BE2_Ins_WhenPlayClicked__Function_60fb0c(long param_1)

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



/* BE2_Ins_WhenPlayClicked$$.ctor @ 0x60fb14
 * void BE2_Ins_WhenPlayClicked___ctor (BE2_Ins_WhenPlayClicked_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* BE2_Ins_WhenPlayClicked$$.ctor
   void BE2_Ins_WhenPlayClicked___ctor (BE2_Ins_WhenPlayClicked_o* __this, const MethodInfo*
   method); */

undefined1  [16] native_BE2_Ins_WhenPlayClicked___ctor_60fb14(ulong param_1)

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


