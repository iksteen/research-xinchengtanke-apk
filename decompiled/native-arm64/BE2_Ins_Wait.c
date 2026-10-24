/* ARM64 IL2CPP native pseudocode from Ghidra.
 * Recovered implementation, not original C# source.
 * Function boundaries follow the IL2CPP method address table. */


/* BE2_Ins_Wait$$get_ExecuteInUpdate @ 0x60e974
 * bool BE2_Ins_Wait__get_ExecuteInUpdate (BE2_Ins_Wait_o* __this, const MethodInfo* method); */

/* BE2_Ins_Wait$$get_ExecuteInUpdate
   bool BE2_Ins_Wait__get_ExecuteInUpdate (BE2_Ins_Wait_o* __this, const MethodInfo* method); */

undefined8 native_BE2_Ins_Wait__get_ExecuteInUpdate_60e974(void)

{
  return 1;
}



/* BE2_Ins_Wait$$OnButtonStop @ 0x60e97c
 * void BE2_Ins_Wait__OnButtonStop (BE2_Ins_Wait_o* __this, const MethodInfo* method); */

/* BE2_Ins_Wait$$OnButtonStop
   void BE2_Ins_Wait__OnButtonStop (BE2_Ins_Wait_o* __this, const MethodInfo* method); */

void native_BE2_Ins_Wait__OnButtonStop_60e97c(long param_1)

{
  *(undefined1 *)(param_1 + 0x80) = 1;
  *(undefined4 *)(param_1 + 0x84) = 0;
  return;
}



/* BE2_Ins_Wait$$OnStackActive @ 0x60e98c
 * void BE2_Ins_Wait__OnStackActive (BE2_Ins_Wait_o* __this, const MethodInfo* method); */

/* BE2_Ins_Wait$$OnStackActive
   void BE2_Ins_Wait__OnStackActive (BE2_Ins_Wait_o* __this, const MethodInfo* method); */

void native_BE2_Ins_Wait__OnStackActive_60e98c(long param_1)

{
  *(undefined1 *)(param_1 + 0x80) = 1;
  *(undefined4 *)(param_1 + 0x84) = 0;
  return;
}



/* BE2_Ins_Wait$$Function @ 0x60e99c
 * void BE2_Ins_Wait__Function (BE2_Ins_Wait_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* BE2_Ins_Wait$$Function
   void BE2_Ins_Wait__Function (BE2_Ins_Wait_o* __this, const MethodInfo* method); */

void native_BE2_Ins_Wait__Function_60e99c(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  ulong uVar3;
  int *piVar4;
  undefined8 *puVar5;
  long *plVar6;
  float fVar7;
  float fVar8;
  
  if ((bRam000000000133ee3e & 1) == 0) {
    native_sub_43273c(&MG_BlocksEngine2_Block_I_BE2_BlockSectionHeaderInput_TypeInfo_12d4e00);
    bRam000000000133ee3e = 1;
  }
  if (*(char *)(param_1 + 0x80) == '\0') {
    fVar7 = *(float *)(param_1 + 0x84);
LAB_0060ea90:
    if (fVar7 <= 0.0) {
      *(undefined4 *)(param_1 + 0x84) = 0;
      native_MG_BlocksEngine2_Block_Instruction_BE2_InstructionBase__ExecuteNextInstruction_603c34
                (param_1);
      *(undefined1 *)(param_1 + 0x80) = 1;
    }
    else {
      fVar8 = (float)native_UnityEngine_Time__get_deltaTime_77082c(0);
      *(float *)(param_1 + 0x84) = fVar7 - fVar8;
    }
    return;
  }
  lVar1 = native_MG_BlocksEngine2_Block_Instruction_BE2_InstructionBase__get_Section0Inputs_603b78
                    (param_1);
  if (lVar1 != 0) {
    if (*(int *)(lVar1 + 0x18) == 0) {
      uVar2 = native_sub_43283c();
                    /* WARNING: Subroutine does not return */
      native_sub_4327dc(uVar2,0);
    }
    puVar5 = (undefined8 *)(param_1 + 0x78);
    *puVar5 = *(undefined8 *)(lVar1 + 0x20);
    native_sub_4326e0(puVar5);
    plVar6 = (long *)*puVar5;
    if (plVar6 != (long *)0x0) {
      lVar1 = *plVar6;
      if ((ulong)*(ushort *)(lVar1 + 0x12a) != 0) {
        uVar3 = 0;
        piVar4 = (int *)(*(long *)(lVar1 + 0xb0) + 8);
        do {
          if (*(long *)(piVar4 + -2) ==
              _MG_BlocksEngine2_Block_I_BE2_BlockSectionHeaderInput_TypeInfo_12d4e00) {
            puVar5 = (undefined8 *)(lVar1 + (long)(*piVar4 + 2) * 0x10 + 0x138);
            goto LAB_0060ea74;
          }
          uVar3 = uVar3 + 1;
          piVar4 = piVar4 + 4;
        } while (uVar3 < *(ushort *)(lVar1 + 0x12a));
      }
      puVar5 = (undefined8 *)
               native_sub_3c9b34(plVar6,
                                 _MG_BlocksEngine2_Block_I_BE2_BlockSectionHeaderInput_TypeInfo_12d4e00
                                 ,2);
LAB_0060ea74:
      fVar7 = (float)(*(code *)*puVar5)(plVar6,puVar5[1]);
      *(float *)(param_1 + 0x84) = fVar7;
      *(undefined1 *)(param_1 + 0x80) = 0;
      goto LAB_0060ea90;
    }
  }
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* BE2_Ins_Wait$$Reset @ 0x60eae0
 * void BE2_Ins_Wait__Reset (BE2_Ins_Wait_o* __this, const MethodInfo* method); */

/* BE2_Ins_Wait$$Reset
   void BE2_Ins_Wait__Reset (BE2_Ins_Wait_o* __this, const MethodInfo* method); */

void native_BE2_Ins_Wait__Reset_60eae0(long param_1)

{
  *(undefined1 *)(param_1 + 0x80) = 1;
  *(undefined4 *)(param_1 + 0x84) = 0;
  return;
}



/* BE2_Ins_Wait$$.ctor @ 0x60eaf0
 * void BE2_Ins_Wait___ctor (BE2_Ins_Wait_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* BE2_Ins_Wait$$.ctor
   void BE2_Ins_Wait___ctor (BE2_Ins_Wait_o* __this, const MethodInfo* method); */

undefined1  [16] native_BE2_Ins_Wait___ctor_60eaf0(ulong param_1)

{
  undefined1 auVar1 [16];
  
  *(undefined1 *)(param_1 + 0x80) = 1;
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


