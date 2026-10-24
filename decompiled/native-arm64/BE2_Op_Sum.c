/* ARM64 IL2CPP native pseudocode from Ghidra.
 * Recovered implementation, not original C# source.
 * Function boundaries follow the IL2CPP method address table. */


/* BE2_Op_Sum$$Operation @ 0x61613c
 * System_String_o* BE2_Op_Sum__Operation (BE2_Op_Sum_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* BE2_Op_Sum$$Operation
   System_String_o* BE2_Op_Sum__Operation (BE2_Op_Sum_o* __this, const MethodInfo* method); */

void native_BE2_Op_Sum__Operation_61613c(long param_1)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  long lVar4;
  ulong uVar5;
  int *piVar6;
  long *plVar7;
  float fStack_24;
  
  if ((bRam000000000133ee8d & 1) == 0) {
    native_sub_43273c(&System_Globalization_CultureInfo_TypeInfo_12d4068);
    native_sub_43273c(&MG_BlocksEngine2_Block_I_BE2_BlockSectionHeaderInput_TypeInfo_12d4e00);
    bRam000000000133ee8d = 1;
  }
  fStack_24 = 0.0;
  lVar1 = native_MG_BlocksEngine2_Block_Instruction_BE2_InstructionBase__get_Section0Inputs_603b78
                    (param_1);
  if (lVar1 != 0) {
    if (*(int *)(lVar1 + 0x18) == 0) {
LAB_0061636c:
      uVar3 = native_sub_43283c();
                    /* WARNING: Subroutine does not return */
      native_sub_4327dc(uVar3,0);
    }
    *(undefined8 *)(param_1 + 0x78) = *(undefined8 *)(lVar1 + 0x20);
    native_sub_4326e0();
    lVar1 = native_MG_BlocksEngine2_Block_Instruction_BE2_InstructionBase__get_Section0Inputs_603b78
                      (param_1);
    if (lVar1 != 0) {
      if (*(uint *)(lVar1 + 0x18) < 2) goto LAB_0061636c;
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
              puVar2 = (undefined8 *)(lVar1 + (long)(*piVar6 + 4) * 0x10 + 0x138);
              goto LAB_00616238;
            }
            uVar5 = uVar5 + 1;
            piVar6 = piVar6 + 4;
          } while (uVar5 < *(ushort *)(lVar1 + 0x12a));
        }
        puVar2 = (undefined8 *)
                 native_sub_3c9b34(plVar7,
                                   _MG_BlocksEngine2_Block_I_BE2_BlockSectionHeaderInput_TypeInfo_12d4e00
                                   ,4);
LAB_00616238:
        uVar3 = (*(code *)*puVar2)(plVar7,puVar2[1]);
        *(undefined8 *)(param_1 + 0x88) = uVar3;
        native_sub_4326e0((undefined8 *)(param_1 + 0x88),uVar3);
        plVar7 = *(long **)(param_1 + 0x80);
        if (plVar7 != (long *)0x0) {
          lVar1 = *plVar7;
          if ((ulong)*(ushort *)(lVar1 + 0x12a) != 0) {
            uVar5 = 0;
            piVar6 = (int *)(*(long *)(lVar1 + 0xb0) + 8);
            do {
              if (*(long *)(piVar6 + -2) ==
                  _MG_BlocksEngine2_Block_I_BE2_BlockSectionHeaderInput_TypeInfo_12d4e00) {
                puVar2 = (undefined8 *)(lVar1 + (long)(*piVar6 + 4) * 0x10 + 0x138);
                goto LAB_006162b8;
              }
              uVar5 = uVar5 + 1;
              piVar6 = piVar6 + 4;
            } while (uVar5 < *(ushort *)(lVar1 + 0x12a));
          }
          puVar2 = (undefined8 *)
                   native_sub_3c9b34(plVar7,
                                     _MG_BlocksEngine2_Block_I_BE2_BlockSectionHeaderInput_TypeInfo_12d4e00
                                     ,4);
LAB_006162b8:
          lVar1 = (*(code *)*puVar2)(plVar7,puVar2[1]);
          plVar7 = (long *)(param_1 + 0x90);
          *plVar7 = lVar1;
          native_sub_4326e0(plVar7,lVar1);
          lVar1 = *(long *)(param_1 + 0x88);
          if (lVar1 != 0) {
            lVar4 = *plVar7;
            if (*(char *)(lVar1 + 0x10) == '\0') {
              if (lVar4 == 0) goto LAB_00616368;
              if (*(char *)(lVar4 + 0x10) == '\0') {
                fStack_24 = *(float *)(lVar1 + 0x20) + *(float *)(lVar4 + 0x20);
                if (((*(byte *)(_System_Globalization_CultureInfo_TypeInfo_12d4068 + 0x133) >> 2 & 1
                     ) != 0) &&
                   (*(int *)(_System_Globalization_CultureInfo_TypeInfo_12d4068 + 0xe0) == 0)) {
                  native_sub_4327ec();
                }
                uVar3 = native_System_Globalization_CultureInfo__get_InvariantCulture_b2d3e8(0);
                native_System_Single__ToString_af895c(&fStack_24,uVar3,0);
                return;
              }
            }
            else if (lVar4 == 0) goto LAB_00616368;
            native_System_String__Concat_afbd68
                      (*(undefined8 *)(lVar1 + 0x18),*(undefined8 *)(lVar4 + 0x18),0);
            return;
          }
        }
      }
    }
  }
LAB_00616368:
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* BE2_Op_Sum$$.ctor @ 0x616378
 * void BE2_Op_Sum___ctor (BE2_Op_Sum_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* BE2_Op_Sum$$.ctor
   void BE2_Op_Sum___ctor (BE2_Op_Sum_o* __this, const MethodInfo* method); */

undefined1  [16] native_BE2_Op_Sum___ctor_616378(ulong param_1)

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


