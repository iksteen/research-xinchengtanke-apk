/* ARM64 IL2CPP native pseudocode from Ghidra.
 * Recovered implementation, not original C# source.
 * Function boundaries follow the IL2CPP method address table. */


/* BE2_Op_List$$OnStart @ 0x61464c
 * void BE2_Op_List__OnStart (BE2_Op_List_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* BE2_Op_List$$OnStart
   void BE2_Op_List__OnStart (BE2_Op_List_o* __this, const MethodInfo* method); */

void native_BE2_Op_List__OnStart_61464c(long param_1)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  
  if ((bRam000000000133ee7f & 1) == 0) {
    native_sub_43273c(&MG_BlocksEngine2_Environment_BE2_VariablesListManager_TypeInfo_12d3a88);
    bRam000000000133ee7f = 1;
  }
  puVar4 = (undefined8 *)(param_1 + 0x78);
  *puVar4 = **(undefined8 **)
              (_MG_BlocksEngine2_Environment_BE2_VariablesListManager_TypeInfo_12d3a88 + 0xb8);
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



/* BE2_Op_List$$Operation @ 0x6146a4
 * System_String_o* BE2_Op_List__Operation (BE2_Op_List_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* BE2_Op_List$$Operation
   System_String_o* BE2_Op_List__Operation (BE2_Op_List_o* __this, const MethodInfo* method); */

undefined8 native_BE2_Op_List__Operation_6146a4(long param_1)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  ulong uVar4;
  int *piVar5;
  long lVar6;
  long *plVar7;
  
  if ((bRam000000000133ee80 & 1) == 0) {
    native_sub_43273c(&MG_BlocksEngine2_Block_I_BE2_BlockSectionHeaderInput_TypeInfo_12d4e00);
    bRam000000000133ee80 = 1;
  }
  lVar6 = *(long *)(param_1 + 0x78);
  lVar1 = native_MG_BlocksEngine2_Block_Instruction_BE2_InstructionBase__get_Section0Inputs_603b78
                    (param_1);
  if (lVar1 != 0) {
    if (*(int *)(lVar1 + 0x18) == 0) {
      uVar3 = native_sub_43283c();
                    /* WARNING: Subroutine does not return */
      native_sub_4327dc(uVar3,0);
    }
    plVar7 = *(long **)(lVar1 + 0x20);
    if (plVar7 != (long *)0x0) {
      lVar1 = *plVar7;
      if ((ulong)*(ushort *)(lVar1 + 0x12a) != 0) {
        uVar4 = 0;
        piVar5 = (int *)(*(long *)(lVar1 + 0xb0) + 8);
        do {
          if (*(long *)(piVar5 + -2) ==
              _MG_BlocksEngine2_Block_I_BE2_BlockSectionHeaderInput_TypeInfo_12d4e00) {
            puVar2 = (undefined8 *)(lVar1 + (long)(*piVar5 + 3) * 0x10 + 0x138);
            goto LAB_00614754;
          }
          uVar4 = uVar4 + 1;
          piVar5 = piVar5 + 4;
        } while (uVar4 < *(ushort *)(lVar1 + 0x12a));
      }
      puVar2 = (undefined8 *)
               native_sub_3c9b34(plVar7,
                                 _MG_BlocksEngine2_Block_I_BE2_BlockSectionHeaderInput_TypeInfo_12d4e00
                                 ,3);
LAB_00614754:
      uVar3 = (*(code *)*puVar2)(plVar7,puVar2[1]);
      if (lVar6 != 0) {
        if ((bRam0000000001346e13 & 1) == 0) {
          native_sub_43273c(&Method_System_Collections_Generic_List_string__get_Count___12dcef8,
                            uVar3,0,0);
          native_sub_43273c(&Method_System_Collections_Generic_List_string__get_Item___12dcf00);
          native_sub_43273c(&StringLiteral__12eaac0);
          bRam0000000001346e13 = 1;
        }
        lVar1 = native_MG_BlocksEngine2_Environment_BE2_VariablesListManager__GetListStringValues_dcdf18
                          (lVar6,uVar3);
        if (lVar1 == 0) {
                    /* WARNING: Subroutine does not return */
          native_sub_432810();
        }
        puVar2 = (undefined8 *)&StringLiteral__12eaac0;
        if (0 < *(int *)(lVar1 + 0x18)) {
          if (*(int *)(lVar1 + 0x18) == 0) {
            native_System_ThrowHelper__ThrowArgumentOutOfRangeException_9fe0f4(0);
          }
          puVar2 = (undefined8 *)(*(long *)(lVar1 + 0x10) + 0x20);
        }
        return *puVar2;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* BE2_Op_List$$.ctor @ 0x614790
 * void BE2_Op_List___ctor (BE2_Op_List_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* BE2_Op_List$$.ctor
   void BE2_Op_List___ctor (BE2_Op_List_o* __this, const MethodInfo* method); */

undefined1  [16] native_BE2_Op_List___ctor_614790(ulong param_1)

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


