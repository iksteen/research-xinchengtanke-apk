/* ARM64 IL2CPP native pseudocode from Ghidra.
 * Recovered implementation, not original C# source.
 * Function boundaries follow the IL2CPP method address table. */


/* BE2_Op_JoystickKeyPressed$$OnStart @ 0x614088
 * void BE2_Op_JoystickKeyPressed__OnStart (BE2_Op_JoystickKeyPressed_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* BE2_Op_JoystickKeyPressed$$OnStart
   void BE2_Op_JoystickKeyPressed__OnStart (BE2_Op_JoystickKeyPressed_o* __this, const MethodInfo*
   method); */

void native_BE2_Op_JoystickKeyPressed__OnStart_614088(long param_1)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  
  if ((bRam000000000133ee7a & 1) == 0) {
    native_sub_43273c(&BE2_VirtualJoystick_TypeInfo_12d3a98);
    bRam000000000133ee7a = 1;
  }
  puVar4 = (undefined8 *)(param_1 + 0x78);
  *puVar4 = **(undefined8 **)(_BE2_VirtualJoystick_TypeInfo_12d3a98 + 0xb8);
  if (iRam0000000001345318 != 0) {
    puVar1 = (ulong *)(((ulong)puVar4 >> 0x12 & 0x7fff) * 8 + 0x138ecd8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar3) {
        *puVar1 = *puVar1 | 1L << ((ulong)puVar4 >> 0xc & 0x3f);
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  return;
}



/* BE2_Op_JoystickKeyPressed$$Operation @ 0x6140e0
 * System_String_o* BE2_Op_JoystickKeyPressed__Operation (BE2_Op_JoystickKeyPressed_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* BE2_Op_JoystickKeyPressed$$Operation
   System_String_o* BE2_Op_JoystickKeyPressed__Operation (BE2_Op_JoystickKeyPressed_o* __this, const
   MethodInfo* method); */

undefined8 native_BE2_Op_JoystickKeyPressed__Operation_6140e0(long param_1)

{
  float fVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  ulong uVar5;
  int *piVar6;
  long *plVar7;
  long lVar8;
  float fVar9;
  
  if ((bRam000000000133ee7b & 1) == 0) {
    native_sub_43273c(&MG_BlocksEngine2_Block_I_BE2_BlockSectionHeaderInput_TypeInfo_12d4e00);
    native_sub_43273c(&StringLiteral_1_12eb968);
    native_sub_43273c(&StringLiteral_0_12eb8d8);
    bRam000000000133ee7b = 1;
  }
  if (*(long *)(param_1 + 0x78) != 0) {
    lVar8 = *(long *)(*(long *)(param_1 + 0x78) + 0x18);
    lVar2 = native_MG_BlocksEngine2_Block_Instruction_BE2_InstructionBase__get_Section0Inputs_603b78
                      (param_1);
    if (lVar2 != 0) {
      if (*(int *)(lVar2 + 0x18) == 0) {
LAB_00614224:
        uVar4 = native_sub_43283c();
                    /* WARNING: Subroutine does not return */
        native_sub_4327dc(uVar4,0);
      }
      plVar7 = *(long **)(lVar2 + 0x20);
      if (plVar7 != (long *)0x0) {
        lVar2 = *plVar7;
        if ((ulong)*(ushort *)(lVar2 + 0x12a) != 0) {
          uVar5 = 0;
          piVar6 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
          do {
            if (*(long *)(piVar6 + -2) ==
                _MG_BlocksEngine2_Block_I_BE2_BlockSectionHeaderInput_TypeInfo_12d4e00) {
              puVar3 = (undefined8 *)(lVar2 + (long)(*piVar6 + 2) * 0x10 + 0x138);
              goto LAB_006141b0;
            }
            uVar5 = uVar5 + 1;
            piVar6 = piVar6 + 4;
          } while (uVar5 < *(ushort *)(lVar2 + 0x12a));
        }
        puVar3 = (undefined8 *)
                 native_sub_3c9b34(plVar7,
                                   _MG_BlocksEngine2_Block_I_BE2_BlockSectionHeaderInput_TypeInfo_12d4e00
                                   ,2);
LAB_006141b0:
        fVar9 = (float)(*(code *)*puVar3)(plVar7,puVar3[1]);
        if (lVar8 != 0) {
          fVar1 = -fVar9;
          if (fVar9 != INFINITY) {
            fVar1 = fVar9;
          }
          if (*(uint *)(lVar8 + 0x18) <= (uint)(int)fVar1) goto LAB_00614224;
          lVar2 = *(long *)(lVar8 + (long)(int)fVar1 * 8 + 0x20);
          if (lVar2 != 0) {
            puVar3 = (undefined8 *)&StringLiteral_0_12eb8d8;
            if (*(char *)(lVar2 + 0x100) != '\0') {
              puVar3 = (undefined8 *)&StringLiteral_1_12eb968;
            }
            return *puVar3;
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* BE2_Op_JoystickKeyPressed$$.ctor @ 0x614230
 * void BE2_Op_JoystickKeyPressed___ctor (BE2_Op_JoystickKeyPressed_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* BE2_Op_JoystickKeyPressed$$.ctor
   void BE2_Op_JoystickKeyPressed___ctor (BE2_Op_JoystickKeyPressed_o* __this, const MethodInfo*
   method); */

undefined1  [16] native_BE2_Op_JoystickKeyPressed___ctor_614230(ulong param_1)

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


