/* ARM64 IL2CPP native pseudocode from Ghidra.
 * Recovered implementation, not original C# source.
 * Function boundaries follow the IL2CPP method address table. */


/* BE2_Op_Nand$$Operation @ 0x61557c
 * System_String_o* BE2_Op_Nand__Operation (BE2_Op_Nand_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* BE2_Op_Nand$$Operation
   System_String_o* BE2_Op_Nand__Operation (BE2_Op_Nand_o* __this, const MethodInfo* method); */

undefined8 native_BE2_Op_Nand__Operation_61557c(long param_1)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  ulong uVar5;
  int *piVar6;
  long *plVar7;
  
  if ((bRam000000000133ee88 & 1) == 0) {
    native_sub_43273c(&MG_BlocksEngine2_Block_I_BE2_BlockSectionHeaderInput_TypeInfo_12d4e00);
    native_sub_43273c(&StringLiteral_true_12f6790);
    native_sub_43273c(&StringLiteral_1_12eb968);
    native_sub_43273c(&StringLiteral_0_12eb8d8);
    bRam000000000133ee88 = 1;
  }
  lVar1 = native_MG_BlocksEngine2_Block_Instruction_BE2_InstructionBase__get_Section0Inputs_603b78
                    (param_1);
  if (lVar1 != 0) {
    if (*(int *)(lVar1 + 0x18) == 0) {
LAB_006157bc:
      uVar3 = native_sub_43283c();
                    /* WARNING: Subroutine does not return */
      native_sub_4327dc(uVar3,0);
    }
    *(undefined8 *)(param_1 + 0x78) = *(undefined8 *)(lVar1 + 0x20);
    native_sub_4326e0();
    lVar1 = native_MG_BlocksEngine2_Block_Instruction_BE2_InstructionBase__get_Section0Inputs_603b78
                      (param_1);
    if (lVar1 != 0) {
      if (*(uint *)(lVar1 + 0x18) < 2) goto LAB_006157bc;
      *(undefined8 *)(param_1 + 0x80) = *(undefined8 *)(lVar1 + 0x28);
      native_sub_4326e0((undefined8 *)(param_1 + 0x80));
      plVar7 = *(long **)(param_1 + 0x78);
      if (plVar7 != (long *)0x0) {
        lVar1 = *plVar7;
        if ((ulong)*(ushort *)(lVar1 + 0x12a) != 0) {
          uVar5 = 0;
          piVar6 = (int *)(*(long *)(lVar1 + 0xb0) + 8);
          do {
            if (*(long *)(piVar6 + -2) ==
                _MG_BlocksEngine2_Block_I_BE2_BlockSectionHeaderInput_TypeInfo_12d4e00) {
              puVar2 = (undefined8 *)(lVar1 + (long)(*piVar6 + 3) * 0x10 + 0x138);
              goto LAB_0061568c;
            }
            uVar5 = uVar5 + 1;
            piVar6 = piVar6 + 4;
          } while (uVar5 < *(ushort *)(lVar1 + 0x12a));
        }
        puVar2 = (undefined8 *)
                 native_sub_3c9b34(plVar7,
                                   _MG_BlocksEngine2_Block_I_BE2_BlockSectionHeaderInput_TypeInfo_12d4e00
                                   ,3);
LAB_0061568c:
        uVar3 = (*(code *)*puVar2)(plVar7,puVar2[1]);
        puVar2 = (undefined8 *)(param_1 + 0x88);
        *puVar2 = uVar3;
        native_sub_4326e0(puVar2,uVar3);
        plVar7 = *(long **)(param_1 + 0x80);
        if (plVar7 != (long *)0x0) {
          lVar1 = *plVar7;
          if ((ulong)*(ushort *)(lVar1 + 0x12a) != 0) {
            uVar5 = 0;
            piVar6 = (int *)(*(long *)(lVar1 + 0xb0) + 8);
            do {
              if (*(long *)(piVar6 + -2) ==
                  _MG_BlocksEngine2_Block_I_BE2_BlockSectionHeaderInput_TypeInfo_12d4e00) {
                puVar4 = (undefined8 *)(lVar1 + (long)(*piVar6 + 3) * 0x10 + 0x138);
                goto LAB_0061570c;
              }
              uVar5 = uVar5 + 1;
              piVar6 = piVar6 + 4;
            } while (uVar5 < *(ushort *)(lVar1 + 0x12a));
          }
          puVar4 = (undefined8 *)
                   native_sub_3c9b34(plVar7,
                                     _MG_BlocksEngine2_Block_I_BE2_BlockSectionHeaderInput_TypeInfo_12d4e00
                                     ,3);
LAB_0061570c:
          uVar3 = (*(code *)*puVar4)(plVar7,puVar4[1]);
          puVar4 = (undefined8 *)(param_1 + 0x90);
          *puVar4 = uVar3;
          native_sub_4326e0(puVar4,uVar3);
          uVar5 = native_System_String__op_Equality_afc18c
                            (*(undefined8 *)(param_1 + 0x88),_StringLiteral_1_12eb968,0);
          if ((((uVar5 & 1) == 0) &&
              (uVar5 = native_System_String__op_Equality_afc18c
                                 (*puVar2,_StringLiteral_true_12f6790,0), (uVar5 & 1) == 0)) ||
             ((uVar5 = native_System_String__op_Equality_afc18c(*puVar4,_StringLiteral_1_12eb968,0),
              (uVar5 & 1) == 0 &&
              (uVar5 = native_System_String__op_Equality_afc18c
                                 (*puVar4,_StringLiteral_true_12f6790,0), (uVar5 & 1) == 0)))) {
            puVar2 = (undefined8 *)&StringLiteral_1_12eb968;
          }
          else {
            puVar2 = (undefined8 *)&StringLiteral_0_12eb8d8;
          }
          return *puVar2;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* BE2_Op_Nand$$.ctor @ 0x6157c8
 * void BE2_Op_Nand___ctor (BE2_Op_Nand_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* BE2_Op_Nand$$.ctor
   void BE2_Op_Nand___ctor (BE2_Op_Nand_o* __this, const MethodInfo* method); */

undefined1  [16] native_BE2_Op_Nand___ctor_6157c8(ulong param_1)

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


