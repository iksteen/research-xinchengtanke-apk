/* ARM64 IL2CPP native pseudocode from Ghidra.
 * Recovered implementation, not original C# source.
 * Function boundaries follow the IL2CPP method address table. */


/* BE2_Op_Not$$Operation @ 0x615a30
 * System_String_o* BE2_Op_Not__Operation (BE2_Op_Not_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* BE2_Op_Not$$Operation
   System_String_o* BE2_Op_Not__Operation (BE2_Op_Not_o* __this, const MethodInfo* method); */

undefined8 native_BE2_Op_Not__Operation_615a30(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  ulong uVar4;
  int *piVar5;
  undefined8 *puVar6;
  long *plVar7;
  float fStack_24;
  
  if ((bRam000000000133ee8a & 1) == 0) {
    native_sub_43273c(&System_Globalization_CultureInfo_TypeInfo_12d4068);
    native_sub_43273c(&MG_BlocksEngine2_Block_I_BE2_BlockSectionHeaderInput_TypeInfo_12d4e00);
    native_sub_43273c(&StringLiteral_false_12f47a0);
    native_sub_43273c(&StringLiteral_true_12f6790);
    native_sub_43273c(&StringLiteral_1_12eb968);
    native_sub_43273c(&StringLiteral_0_12eb8d8);
    bRam000000000133ee8a = 1;
  }
  fStack_24 = 0.0;
  lVar1 = native_MG_BlocksEngine2_Block_Instruction_BE2_InstructionBase__get_Section0Inputs_603b78
                    (param_1);
  if (lVar1 != 0) {
    if (*(int *)(lVar1 + 0x18) == 0) {
      uVar2 = native_sub_43283c();
                    /* WARNING: Subroutine does not return */
      native_sub_4327dc(uVar2,0);
    }
    puVar6 = (undefined8 *)(param_1 + 0x78);
    *puVar6 = *(undefined8 *)(lVar1 + 0x20);
    native_sub_4326e0(puVar6);
    plVar7 = (long *)*puVar6;
    if (plVar7 != (long *)0x0) {
      lVar1 = *plVar7;
      if ((ulong)*(ushort *)(lVar1 + 0x12a) != 0) {
        uVar4 = 0;
        piVar5 = (int *)(*(long *)(lVar1 + 0xb0) + 8);
        do {
          if (*(long *)(piVar5 + -2) ==
              _MG_BlocksEngine2_Block_I_BE2_BlockSectionHeaderInput_TypeInfo_12d4e00) {
            puVar6 = (undefined8 *)(lVar1 + (long)(*piVar5 + 4) * 0x10 + 0x138);
            goto LAB_00615b34;
          }
          uVar4 = uVar4 + 1;
          piVar5 = piVar5 + 4;
        } while (uVar4 < *(ushort *)(lVar1 + 0x12a));
      }
      puVar6 = (undefined8 *)
               native_sub_3c9b34(plVar7,
                                 _MG_BlocksEngine2_Block_I_BE2_BlockSectionHeaderInput_TypeInfo_12d4e00
                                 ,4);
LAB_00615b34:
      lVar1 = (*(code *)*puVar6)(plVar7,puVar6[1]);
      plVar7 = (long *)(param_1 + 0x80);
      *plVar7 = lVar1;
      native_sub_4326e0(plVar7,lVar1);
      if (*plVar7 != 0) {
        lVar1 = *(long *)(*plVar7 + 0x18);
        uVar4 = native_System_String__op_Equality_afc18c(lVar1,_StringLiteral_1_12eb968,0);
        uVar2 = _StringLiteral_0_12eb8d8;
        if (((((uVar4 & 1) == 0) &&
             (uVar4 = native_System_String__op_Equality_afc18c(lVar1,_StringLiteral_true_12f6790,0),
             uVar2 = _StringLiteral_0_12eb8d8, (uVar4 & 1) == 0)) &&
            (uVar4 = native_System_String__op_Equality_afc18c(lVar1,_StringLiteral_0_12eb8d8,0),
            uVar2 = _StringLiteral_1_12eb968, (uVar4 & 1) == 0)) &&
           (uVar4 = native_System_String__op_Equality_afc18c(lVar1,_StringLiteral_false_12f47a0,0),
           uVar2 = _StringLiteral_1_12eb968, (uVar4 & 1) == 0)) {
          lVar3 = *plVar7;
          if (lVar3 == 0) goto LAB_00615c78;
          if (*(char *)(lVar3 + 0x10) == '\0') {
            fStack_24 = -*(float *)(lVar3 + 0x20);
            if (((*(byte *)(_System_Globalization_CultureInfo_TypeInfo_12d4068 + 0x133) >> 2 & 1) !=
                 0) && (*(int *)(_System_Globalization_CultureInfo_TypeInfo_12d4068 + 0xe0) == 0)) {
              native_sub_4327ec();
            }
            uVar2 = native_System_Globalization_CultureInfo__get_InvariantCulture_b2d3e8(0);
            uVar2 = native_System_Single__ToString_af895c(&fStack_24,uVar2,0);
          }
          else {
            if (lVar1 == 0) goto LAB_00615c78;
            uVar2 = native_System_String__ToCharArray_b0939c(lVar1,0);
            native_System_Array__Reverse_95efc8(uVar2,0);
            uVar2 = native_System_String__CreateString_b0f958(0,uVar2,0);
          }
        }
        return uVar2;
      }
    }
  }
LAB_00615c78:
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* BE2_Op_Not$$.ctor @ 0x615c88
 * void BE2_Op_Not___ctor (BE2_Op_Not_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* BE2_Op_Not$$.ctor
   void BE2_Op_Not___ctor (BE2_Op_Not_o* __this, const MethodInfo* method); */

undefined1  [16] native_BE2_Op_Not___ctor_615c88(ulong param_1)

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


