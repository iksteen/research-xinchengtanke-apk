/* ARM64 IL2CPP native pseudocode from Ghidra.
 * Recovered implementation, not original C# source.
 * Function boundaries follow the IL2CPP method address table. */


/* BE2_Op_Equal$$Operation @ 0x613630
 * System_String_o* BE2_Op_Equal__Operation (BE2_Op_Equal_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* BE2_Op_Equal$$Operation
   System_String_o* BE2_Op_Equal__Operation (BE2_Op_Equal_o* __this, const MethodInfo* method); */

undefined8 native_BE2_Op_Equal__Operation_613630(long param_1)

{
  bool bVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  long lVar6;
  ulong uVar7;
  int *piVar8;
  long *plVar9;
  
  if ((bRam000000000133ee73 & 1) == 0) {
    native_sub_43273c(&MG_BlocksEngine2_Block_I_BE2_BlockSectionHeaderInput_TypeInfo_12d4e00);
    native_sub_43273c(&StringLiteral_1_12eb968);
    native_sub_43273c(&StringLiteral_0_12eb8d8);
    bRam000000000133ee73 = 1;
  }
  lVar2 = native_MG_BlocksEngine2_Block_Instruction_BE2_InstructionBase__get_Section0Inputs_603b78
                    (param_1);
  if (lVar2 == 0) goto LAB_00613854;
  if (*(int *)(lVar2 + 0x18) == 0) {
LAB_00613858:
    uVar4 = native_sub_43283c();
                    /* WARNING: Subroutine does not return */
    native_sub_4327dc(uVar4,0);
  }
  *(undefined8 *)(param_1 + 0x78) = *(undefined8 *)(lVar2 + 0x20);
  native_sub_4326e0();
  lVar2 = native_MG_BlocksEngine2_Block_Instruction_BE2_InstructionBase__get_Section0Inputs_603b78
                    (param_1);
  if (lVar2 == 0) goto LAB_00613854;
  if (*(uint *)(lVar2 + 0x18) < 2) goto LAB_00613858;
  *(undefined8 *)(param_1 + 0x80) = *(undefined8 *)(lVar2 + 0x28);
  native_sub_4326e0((undefined8 *)(param_1 + 0x80));
  plVar9 = *(long **)(param_1 + 0x78);
  if (plVar9 == (long *)0x0) {
LAB_00613854:
                    /* WARNING: Subroutine does not return */
    native_sub_432810();
  }
  lVar2 = *plVar9;
  if ((ulong)*(ushort *)(lVar2 + 0x12a) != 0) {
    uVar7 = 0;
    piVar8 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
    do {
      if (*(long *)(piVar8 + -2) ==
          _MG_BlocksEngine2_Block_I_BE2_BlockSectionHeaderInput_TypeInfo_12d4e00) {
        puVar3 = (undefined8 *)(lVar2 + (long)(*piVar8 + 4) * 0x10 + 0x138);
        goto LAB_00613734;
      }
      uVar7 = uVar7 + 1;
      piVar8 = piVar8 + 4;
    } while (uVar7 < *(ushort *)(lVar2 + 0x12a));
  }
  puVar3 = (undefined8 *)
           native_sub_3c9b34(plVar9,
                             _MG_BlocksEngine2_Block_I_BE2_BlockSectionHeaderInput_TypeInfo_12d4e00,
                             4);
LAB_00613734:
  uVar4 = (*(code *)*puVar3)(plVar9,puVar3[1]);
  *(undefined8 *)(param_1 + 0x88) = uVar4;
  native_sub_4326e0((undefined8 *)(param_1 + 0x88),uVar4);
  plVar9 = *(long **)(param_1 + 0x80);
  if (plVar9 == (long *)0x0) goto LAB_00613854;
  lVar2 = *plVar9;
  if ((ulong)*(ushort *)(lVar2 + 0x12a) != 0) {
    uVar7 = 0;
    piVar8 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
    do {
      if (*(long *)(piVar8 + -2) ==
          _MG_BlocksEngine2_Block_I_BE2_BlockSectionHeaderInput_TypeInfo_12d4e00) {
        puVar3 = (undefined8 *)(lVar2 + (long)(*piVar8 + 4) * 0x10 + 0x138);
        goto LAB_006137b4;
      }
      uVar7 = uVar7 + 1;
      piVar8 = piVar8 + 4;
    } while (uVar7 < *(ushort *)(lVar2 + 0x12a));
  }
  puVar3 = (undefined8 *)
           native_sub_3c9b34(plVar9,
                             _MG_BlocksEngine2_Block_I_BE2_BlockSectionHeaderInput_TypeInfo_12d4e00,
                             4);
LAB_006137b4:
  lVar2 = (*(code *)*puVar3)(plVar9,puVar3[1]);
  plVar9 = (long *)(param_1 + 0x90);
  *plVar9 = lVar2;
  native_sub_4326e0(plVar9,lVar2);
  lVar2 = *(long *)(param_1 + 0x88);
  if (lVar2 == 0) goto LAB_00613854;
  lVar6 = *plVar9;
  if (*(char *)(lVar2 + 0x10) == '\0') {
    if (lVar6 == 0) goto LAB_00613854;
    if (*(char *)(lVar6 + 0x10) == '\0') {
      puVar5 = (undefined8 *)&StringLiteral_1_12eb968;
      puVar3 = (undefined8 *)&StringLiteral_0_12eb8d8;
      bVar1 = *(float *)(lVar2 + 0x20) == *(float *)(lVar6 + 0x20);
      goto LAB_0061381c;
    }
  }
  else if (lVar6 == 0) goto LAB_00613854;
  uVar7 = native_System_String__op_Equality_afc18c
                    (*(undefined8 *)(lVar2 + 0x18),*(undefined8 *)(lVar6 + 0x18),0);
  puVar5 = (undefined8 *)&StringLiteral_0_12eb8d8;
  puVar3 = (undefined8 *)&StringLiteral_1_12eb968;
  bVar1 = (uVar7 & 1) == 0;
LAB_0061381c:
  if (bVar1) {
    puVar3 = puVar5;
  }
  return *puVar3;
}



/* BE2_Op_Equal$$.ctor @ 0x613864
 * void BE2_Op_Equal___ctor (BE2_Op_Equal_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* BE2_Op_Equal$$.ctor
   void BE2_Op_Equal___ctor (BE2_Op_Equal_o* __this, const MethodInfo* method); */

undefined1  [16] native_BE2_Op_Equal___ctor_613864(ulong param_1)

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


