/* ARM64 IL2CPP native pseudocode from Ghidra.
 * Recovered implementation, not original C# source.
 * Function boundaries follow the IL2CPP method address table. */


/* BE2_Op_Xnor$$Operation @ 0x616b28
 * System_String_o* BE2_Op_Xnor__Operation (BE2_Op_Xnor_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* BE2_Op_Xnor$$Operation
   System_String_o* BE2_Op_Xnor__Operation (BE2_Op_Xnor_o* __this, const MethodInfo* method); */

undefined8 native_BE2_Op_Xnor__Operation_616b28(long param_1)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  ulong uVar7;
  int *piVar8;
  long *plVar9;
  
  if ((bRam000000000133ee93 & 1) == 0) {
    native_sub_43273c(&MG_BlocksEngine2_Block_I_BE2_BlockSectionHeaderInput_TypeInfo_12d4e00);
    native_sub_43273c(&StringLiteral_true_12f6790);
    native_sub_43273c(&StringLiteral_1_12eb968);
    native_sub_43273c(&StringLiteral_0_12eb8d8);
    bRam000000000133ee93 = 1;
  }
  lVar3 = native_MG_BlocksEngine2_Block_Instruction_BE2_InstructionBase__get_Section0Inputs_603b78
                    (param_1);
  if (lVar3 != 0) {
    if (*(int *)(lVar3 + 0x18) == 0) {
LAB_00616d74:
      uVar5 = native_sub_43283c();
                    /* WARNING: Subroutine does not return */
      native_sub_4327dc(uVar5,0);
    }
    *(undefined8 *)(param_1 + 0x78) = *(undefined8 *)(lVar3 + 0x20);
    native_sub_4326e0();
    lVar3 = native_MG_BlocksEngine2_Block_Instruction_BE2_InstructionBase__get_Section0Inputs_603b78
                      (param_1);
    if (lVar3 != 0) {
      if (*(uint *)(lVar3 + 0x18) < 2) goto LAB_00616d74;
      *(undefined8 *)(param_1 + 0x80) = *(undefined8 *)(lVar3 + 0x28);
      native_sub_4326e0((undefined8 *)(param_1 + 0x80));
      plVar9 = *(long **)(param_1 + 0x78);
      if (plVar9 != (long *)0x0) {
        lVar3 = *plVar9;
        if ((ulong)*(ushort *)(lVar3 + 0x12a) != 0) {
          uVar7 = 0;
          piVar8 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
          do {
            if (*(long *)(piVar8 + -2) ==
                _MG_BlocksEngine2_Block_I_BE2_BlockSectionHeaderInput_TypeInfo_12d4e00) {
              puVar4 = (undefined8 *)(lVar3 + (long)(*piVar8 + 3) * 0x10 + 0x138);
              goto LAB_00616c38;
            }
            uVar7 = uVar7 + 1;
            piVar8 = piVar8 + 4;
          } while (uVar7 < *(ushort *)(lVar3 + 0x12a));
        }
        puVar4 = (undefined8 *)
                 native_sub_3c9b34(plVar9,
                                   _MG_BlocksEngine2_Block_I_BE2_BlockSectionHeaderInput_TypeInfo_12d4e00
                                   ,3);
LAB_00616c38:
        uVar5 = (*(code *)*puVar4)(plVar9,puVar4[1]);
        puVar4 = (undefined8 *)(param_1 + 0x88);
        *puVar4 = uVar5;
        native_sub_4326e0(puVar4,uVar5);
        plVar9 = *(long **)(param_1 + 0x80);
        if (plVar9 != (long *)0x0) {
          lVar3 = *plVar9;
          if ((ulong)*(ushort *)(lVar3 + 0x12a) != 0) {
            uVar7 = 0;
            piVar8 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
            do {
              if (*(long *)(piVar8 + -2) ==
                  _MG_BlocksEngine2_Block_I_BE2_BlockSectionHeaderInput_TypeInfo_12d4e00) {
                puVar6 = (undefined8 *)(lVar3 + (long)(*piVar8 + 3) * 0x10 + 0x138);
                goto LAB_00616cb8;
              }
              uVar7 = uVar7 + 1;
              piVar8 = piVar8 + 4;
            } while (uVar7 < *(ushort *)(lVar3 + 0x12a));
          }
          puVar6 = (undefined8 *)
                   native_sub_3c9b34(plVar9,
                                     _MG_BlocksEngine2_Block_I_BE2_BlockSectionHeaderInput_TypeInfo_12d4e00
                                     ,3);
LAB_00616cb8:
          uVar5 = (*(code *)*puVar6)(plVar9,puVar6[1]);
          puVar6 = (undefined8 *)(param_1 + 0x90);
          *puVar6 = uVar5;
          native_sub_4326e0(puVar6,uVar5);
          uVar7 = native_System_String__op_Equality_afc18c
                            (*(undefined8 *)(param_1 + 0x88),_StringLiteral_1_12eb968,0);
          if ((uVar7 & 1) == 0) {
            uVar1 = native_System_String__op_Equality_afc18c(*puVar4,_StringLiteral_true_12f6790,0);
            uVar1 = uVar1 & 1;
          }
          else {
            uVar1 = 1;
          }
          uVar7 = native_System_String__op_Equality_afc18c(*puVar6,_StringLiteral_1_12eb968,0);
          if ((uVar7 & 1) == 0) {
            uVar2 = native_System_String__op_Equality_afc18c(*puVar6,_StringLiteral_true_12f6790,0);
            uVar2 = uVar2 & 1;
          }
          else {
            uVar2 = 1;
          }
          puVar4 = (undefined8 *)&StringLiteral_1_12eb968;
          if (uVar1 != uVar2) {
            puVar4 = (undefined8 *)&StringLiteral_0_12eb8d8;
          }
          return *puVar4;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* BE2_Op_Xnor$$.ctor @ 0x616d80
 * void BE2_Op_Xnor___ctor (BE2_Op_Xnor_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* BE2_Op_Xnor$$.ctor
   void BE2_Op_Xnor___ctor (BE2_Op_Xnor_o* __this, const MethodInfo* method); */

undefined1  [16] native_BE2_Op_Xnor___ctor_616d80(ulong param_1)

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


