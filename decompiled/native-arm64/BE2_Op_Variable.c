/* ARM64 IL2CPP native pseudocode from Ghidra.
 * Recovered implementation, not original C# source.
 * Function boundaries follow the IL2CPP method address table. */


/* BE2_Op_Variable$$OnStart @ 0x6169d8
 * void BE2_Op_Variable__OnStart (BE2_Op_Variable_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* BE2_Op_Variable$$OnStart
   void BE2_Op_Variable__OnStart (BE2_Op_Variable_o* __this, const MethodInfo* method); */

void native_BE2_Op_Variable__OnStart_6169d8(long param_1)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  
  if ((bRam000000000133ee91 & 1) == 0) {
    native_sub_43273c(&MG_BlocksEngine2_Environment_BE2_VariablesManager_TypeInfo_12d3a90);
    bRam000000000133ee91 = 1;
  }
  puVar4 = (undefined8 *)(param_1 + 0x78);
  *puVar4 = **(undefined8 **)
              (_MG_BlocksEngine2_Environment_BE2_VariablesManager_TypeInfo_12d3a90 + 0xb8);
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



/* BE2_Op_Variable$$Operation @ 0x616a30
 * System_String_o* BE2_Op_Variable__Operation (BE2_Op_Variable_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* BE2_Op_Variable$$Operation
   System_String_o* BE2_Op_Variable__Operation (BE2_Op_Variable_o* __this, const MethodInfo*
   method); */

undefined8 native_BE2_Op_Variable__Operation_616a30(long param_1)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  ulong uVar5;
  int *piVar6;
  long lVar7;
  long *plVar8;
  
  if ((bRam000000000133ee92 & 1) == 0) {
    native_sub_43273c(&MG_BlocksEngine2_Block_I_BE2_BlockSectionHeaderInput_TypeInfo_12d4e00);
    bRam000000000133ee92 = 1;
  }
  lVar7 = *(long *)(param_1 + 0x78);
  lVar1 = native_MG_BlocksEngine2_Block_Instruction_BE2_InstructionBase__get_Section0Inputs_603b78
                    (param_1);
  if (lVar1 != 0) {
    if (*(int *)(lVar1 + 0x18) == 0) {
      uVar3 = native_sub_43283c();
                    /* WARNING: Subroutine does not return */
      native_sub_4327dc(uVar3,0);
    }
    plVar8 = *(long **)(lVar1 + 0x20);
    if (plVar8 != (long *)0x0) {
      lVar1 = *plVar8;
      if ((ulong)*(ushort *)(lVar1 + 0x12a) != 0) {
        uVar5 = 0;
        piVar6 = (int *)(*(long *)(lVar1 + 0xb0) + 8);
        do {
          if (*(long *)(piVar6 + -2) ==
              _MG_BlocksEngine2_Block_I_BE2_BlockSectionHeaderInput_TypeInfo_12d4e00) {
            puVar2 = (undefined8 *)(lVar1 + (long)(*piVar6 + 3) * 0x10 + 0x138);
            goto LAB_00616ae0;
          }
          uVar5 = uVar5 + 1;
          piVar6 = piVar6 + 4;
        } while (uVar5 < *(ushort *)(lVar1 + 0x12a));
      }
      puVar2 = (undefined8 *)
               native_sub_3c9b34(plVar8,
                                 _MG_BlocksEngine2_Block_I_BE2_BlockSectionHeaderInput_TypeInfo_12d4e00
                                 ,3);
LAB_00616ae0:
      uVar3 = (*(code *)*puVar2)(plVar8,puVar2[1]);
      if (lVar7 != 0) {
        if ((bRam0000000001346e1e & 1) == 0) {
          native_sub_43273c(&
                            Method_System_Collections_Generic_Dictionary_string__string__ContainsKey___12d98f8
                            ,uVar3,0);
          native_sub_43273c(&
                            Method_System_Collections_Generic_Dictionary_string__string__get_Item___12d9920
                           );
          native_sub_43273c(&StringLiteral__12eaac0);
          bRam0000000001346e1e = 1;
        }
        if (*(long *)(lVar7 + 0x20) == 0) {
LAB_00dcd580:
                    /* WARNING: Subroutine does not return */
          native_sub_432810();
        }
        uVar5 = native_System_Collections_Generic_Dictionary_Action__LinkedListNode_Action____ContainsKey_cda894
                          (*(long *)(lVar7 + 0x20),uVar3,
                           _Method_System_Collections_Generic_Dictionary_string__string__ContainsKey___12d98f8
                          );
        uVar4 = _StringLiteral__12eaac0;
        if ((uVar5 & 1) != 0) {
          if (*(long *)(lVar7 + 0x20) == 0) goto LAB_00dcd580;
          uVar4 = native_System_Collections_Generic_Dictionary_object__object___get_Item_cda55c
                            (*(long *)(lVar7 + 0x20),uVar3,
                             _Method_System_Collections_Generic_Dictionary_string__string__get_Item___12d9920
                            );
        }
        return uVar4;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* BE2_Op_Variable$$.ctor @ 0x616b18
 * void BE2_Op_Variable___ctor (BE2_Op_Variable_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* BE2_Op_Variable$$.ctor
   void BE2_Op_Variable___ctor (BE2_Op_Variable_o* __this, const MethodInfo* method); */

undefined1  [16] native_BE2_Op_Variable___ctor_616b18(ulong param_1)

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


