/* ARM64 IL2CPP native pseudocode from Ghidra.
 * Recovered implementation, not original C# source.
 * Function boundaries follow the IL2CPP method address table. */


/* BE2_Op_Multiply$$Operation @ 0x615278
 * System_String_o* BE2_Op_Multiply__Operation (BE2_Op_Multiply_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* BE2_Op_Multiply$$Operation
   System_String_o* BE2_Op_Multiply__Operation (BE2_Op_Multiply_o* __this, const MethodInfo*
   method); */

void native_BE2_Op_Multiply__Operation_615278(long param_1)

{
  float fVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  long lVar5;
  ulong uVar6;
  int *piVar7;
  long *plVar8;
  int iVar9;
  long *plVar10;
  float fVar11;
  float fStack_34;
  
  if ((bRam000000000133ee87 & 1) == 0) {
    native_sub_43273c(&System_Globalization_CultureInfo_TypeInfo_12d4068);
    native_sub_43273c(&MG_BlocksEngine2_Block_I_BE2_BlockSectionHeaderInput_TypeInfo_12d4e00);
    native_sub_43273c(&StringLiteral__12eaac0);
    bRam000000000133ee87 = 1;
  }
  fStack_34 = 0.0;
  lVar2 = native_MG_BlocksEngine2_Block_Instruction_BE2_InstructionBase__get_Section0Inputs_603b78
                    (param_1);
  if (lVar2 != 0) {
    if (*(int *)(lVar2 + 0x18) == 0) {
LAB_00615560:
      uVar4 = native_sub_43283c();
                    /* WARNING: Subroutine does not return */
      native_sub_4327dc(uVar4,0);
    }
    *(undefined8 *)(param_1 + 0x78) = *(undefined8 *)(lVar2 + 0x20);
    native_sub_4326e0();
    lVar2 = native_MG_BlocksEngine2_Block_Instruction_BE2_InstructionBase__get_Section0Inputs_603b78
                      (param_1);
    if (lVar2 != 0) {
      if (*(uint *)(lVar2 + 0x18) < 2) goto LAB_00615560;
      *(undefined8 *)(param_1 + 0x80) = *(undefined8 *)(lVar2 + 0x28);
      native_sub_4326e0((undefined8 *)(param_1 + 0x80));
      plVar8 = *(long **)(param_1 + 0x78);
      if (plVar8 != (long *)0x0) {
        lVar2 = *plVar8;
        if ((ulong)*(ushort *)(lVar2 + 0x12a) != 0) {
          uVar6 = 0;
          piVar7 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
          do {
            if (*(long *)(piVar7 + -2) ==
                _MG_BlocksEngine2_Block_I_BE2_BlockSectionHeaderInput_TypeInfo_12d4e00) {
              puVar3 = (undefined8 *)(lVar2 + (long)(*piVar7 + 4) * 0x10 + 0x138);
              goto LAB_00615384;
            }
            uVar6 = uVar6 + 1;
            piVar7 = piVar7 + 4;
          } while (uVar6 < *(ushort *)(lVar2 + 0x12a));
        }
        puVar3 = (undefined8 *)
                 native_sub_3c9b34(plVar8,
                                   _MG_BlocksEngine2_Block_I_BE2_BlockSectionHeaderInput_TypeInfo_12d4e00
                                   ,4);
LAB_00615384:
        lVar2 = (*(code *)*puVar3)(plVar8,puVar3[1]);
        plVar8 = (long *)(param_1 + 0x88);
        *plVar8 = lVar2;
        native_sub_4326e0(plVar8,lVar2);
        plVar10 = *(long **)(param_1 + 0x80);
        if (plVar10 != (long *)0x0) {
          lVar2 = *plVar10;
          if ((ulong)*(ushort *)(lVar2 + 0x12a) != 0) {
            uVar6 = 0;
            piVar7 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
            do {
              if (*(long *)(piVar7 + -2) ==
                  _MG_BlocksEngine2_Block_I_BE2_BlockSectionHeaderInput_TypeInfo_12d4e00) {
                puVar3 = (undefined8 *)(lVar2 + (long)(*piVar7 + 4) * 0x10 + 0x138);
                goto LAB_00615404;
              }
              uVar6 = uVar6 + 1;
              piVar7 = piVar7 + 4;
            } while (uVar6 < *(ushort *)(lVar2 + 0x12a));
          }
          puVar3 = (undefined8 *)
                   native_sub_3c9b34(plVar10,
                                     _MG_BlocksEngine2_Block_I_BE2_BlockSectionHeaderInput_TypeInfo_12d4e00
                                     ,4);
LAB_00615404:
          lVar2 = (*(code *)*puVar3)(plVar10,puVar3[1]);
          plVar10 = (long *)(param_1 + 0x90);
          *plVar10 = lVar2;
          native_sub_4326e0(plVar10,lVar2);
          lVar2 = *(long *)(param_1 + 0x88);
          if (lVar2 != 0) {
            lVar5 = *plVar10;
            if (*(char *)(lVar2 + 0x10) == '\0') {
              if (lVar5 != 0) {
                if (*(char *)(lVar5 + 0x10) == '\0') goto LAB_00615504;
                iVar9 = -1;
                uVar4 = _StringLiteral__12eaac0;
                do {
                  fVar11 = *(float *)(lVar2 + 0x20);
                  iVar9 = iVar9 + 1;
                  fVar1 = -fVar11;
                  if (fVar11 != INFINITY) {
                    fVar1 = fVar11;
                  }
                  if ((int)fVar1 <= iVar9) {
                    return;
                  }
                  if (*plVar10 == 0) break;
                  uVar4 = native_System_String__Concat_afbd68
                                    (uVar4,*(undefined8 *)(*plVar10 + 0x18),0);
                  lVar2 = *plVar8;
                } while (lVar2 != 0);
              }
            }
            else if (lVar5 != 0) {
              if (*(char *)(lVar5 + 0x10) != '\0') {
LAB_00615504:
                fStack_34 = *(float *)(lVar2 + 0x20) * *(float *)(lVar5 + 0x20);
                if (((*(byte *)(_System_Globalization_CultureInfo_TypeInfo_12d4068 + 0x133) >> 2 & 1
                     ) != 0) &&
                   (*(int *)(_System_Globalization_CultureInfo_TypeInfo_12d4068 + 0xe0) == 0)) {
                  native_sub_4327ec();
                }
                uVar4 = native_System_Globalization_CultureInfo__get_InvariantCulture_b2d3e8(0);
                native_System_Single__ToString_af895c(&fStack_34,uVar4,0);
                return;
              }
              iVar9 = -1;
              uVar4 = _StringLiteral__12eaac0;
              do {
                fVar11 = *(float *)(lVar5 + 0x20);
                iVar9 = iVar9 + 1;
                fVar1 = -fVar11;
                if (fVar11 != INFINITY) {
                  fVar1 = fVar11;
                }
                if ((int)fVar1 <= iVar9) {
                  return;
                }
                if (*plVar8 == 0) break;
                uVar4 = native_System_String__Concat_afbd68(uVar4,*(undefined8 *)(*plVar8 + 0x18),0)
                ;
                lVar5 = *plVar10;
              } while (lVar5 != 0);
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* BE2_Op_Multiply$$.ctor @ 0x61556c
 * void BE2_Op_Multiply___ctor (BE2_Op_Multiply_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* BE2_Op_Multiply$$.ctor
   void BE2_Op_Multiply___ctor (BE2_Op_Multiply_o* __this, const MethodInfo* method); */

undefined1  [16] native_BE2_Op_Multiply___ctor_61556c(ulong param_1)

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


