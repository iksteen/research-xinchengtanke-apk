/* ARM64 IL2CPP native pseudocode from Ghidra.
 * Recovered implementation, not original C# source.
 * Function boundaries follow the IL2CPP method address table. */


/* BE2_Ins_ReferenceFunctionBlock$$.ctor @ 0x60af90
 * void BE2_Ins_ReferenceFunctionBlock___ctor (BE2_Ins_ReferenceFunctionBlock_o* __this, BE2_Ins_FunctionBlock_o* functionInstruction, const MethodInfo* method); */

/* BE2_Ins_ReferenceFunctionBlock$$.ctor
   void BE2_Ins_ReferenceFunctionBlock___ctor (BE2_Ins_ReferenceFunctionBlock_o* __this,
   BE2_Ins_FunctionBlock_o* functionInstruction, const MethodInfo* method); */

void native_BE2_Ins_ReferenceFunctionBlock___ctor_60af90(long param_1,undefined8 param_2)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  
  *(undefined4 *)(param_1 + 0x60) = 100;
  native_UnityEngine_MonoBehaviour___ctor_8e971c(param_1,0);
  puVar4 = (undefined8 *)(param_1 + 0x78);
  *puVar4 = param_2;
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



/* BE2_Ins_ReferenceFunctionBlock$$Initialize @ 0x60afcc
 * void BE2_Ins_ReferenceFunctionBlock__Initialize (BE2_Ins_ReferenceFunctionBlock_o* __this, BE2_Ins_FunctionBlock_o* functionInstruction, const MethodInfo* method); */

/* BE2_Ins_ReferenceFunctionBlock$$Initialize
   void BE2_Ins_ReferenceFunctionBlock__Initialize (BE2_Ins_ReferenceFunctionBlock_o* __this,
   BE2_Ins_FunctionBlock_o* functionInstruction, const MethodInfo* method); */

void native_BE2_Ins_ReferenceFunctionBlock__Initialize_60afcc(long param_1,undefined8 param_2)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  
  puVar4 = (undefined8 *)(param_1 + 0x78);
  *puVar4 = param_2;
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



/* BE2_Ins_ReferenceFunctionBlock$$OnPrepareToPlay @ 0x60afd4
 * void BE2_Ins_ReferenceFunctionBlock__OnPrepareToPlay (BE2_Ins_ReferenceFunctionBlock_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* BE2_Ins_ReferenceFunctionBlock$$OnPrepareToPlay
   void BE2_Ins_ReferenceFunctionBlock__OnPrepareToPlay (BE2_Ins_ReferenceFunctionBlock_o* __this,
   const MethodInfo* method); */

void native_BE2_Ins_ReferenceFunctionBlock__OnPrepareToPlay_60afd4(long param_1)

{
  uint uVar1;
  bool bVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  ulong uVar6;
  int *piVar7;
  long *plVar8;
  long *plVar9;
  long lVar10;
  uint uVar11;
  
  if ((bRam000000000133ee22 & 1) == 0) {
    native_sub_43273c(&MG_BlocksEngine2_Core_I_BE2_BlocksStack_TypeInfo_12d4e10);
    native_sub_43273c(&Method_System_Collections_Generic_List_I_BE2_Instruction__Add___12dc9c0);
    native_sub_43273c(&Method_System_Collections_Generic_List_I_BE2_Instruction___ctor___12dc9b8);
    native_sub_43273c(&System_Collections_Generic_List_I_BE2_Instruction__TypeInfo_12d2a78);
    bRam000000000133ee22 = 1;
  }
  lVar3 = native_sub_432808(_System_Collections_Generic_List_I_BE2_Instruction__TypeInfo_12d2a78);
  native_System_Collections_Generic_List_XmlEventCache_XmlEvent______ctor_d3ff44
            (lVar3,_Method_System_Collections_Generic_List_I_BE2_Instruction___ctor___12dc9b8);
  plVar8 = (long *)(param_1 + 0x80);
  *plVar8 = lVar3;
  native_sub_4326e0(plVar8,lVar3);
  plVar9 = *(long **)(param_1 + 0x48);
  if (plVar9 != (long *)0x0) {
    lVar3 = *plVar9;
    if ((ulong)*(ushort *)(lVar3 + 0x12a) != 0) {
      uVar6 = 0;
      piVar7 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == _MG_BlocksEngine2_Core_I_BE2_BlocksStack_TypeInfo_12d4e10) {
          puVar4 = (undefined8 *)(lVar3 + (long)(*piVar7 + 9) * 0x10 + 0x138);
          goto LAB_0060b0d4;
        }
        uVar6 = uVar6 + 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 < *(ushort *)(lVar3 + 0x12a));
    }
    puVar4 = (undefined8 *)
             native_sub_3c9b34(plVar9,_MG_BlocksEngine2_Core_I_BE2_BlocksStack_TypeInfo_12d4e10,9);
LAB_0060b0d4:
    lVar3 = (*(code *)*puVar4)(plVar9,puVar4[1]);
    if (lVar3 != 0) {
      uVar1 = *(uint *)(lVar3 + 0x18);
      if (0 < (int)uVar1) {
        uVar11 = 0;
        bVar2 = false;
        do {
          if (uVar1 <= uVar11) {
            uVar5 = native_sub_43283c();
                    /* WARNING: Subroutine does not return */
            native_sub_4327dc(uVar5,0);
          }
          lVar10 = *(long *)(lVar3 + (long)(int)uVar11 * 8 + 0x20);
          if (bVar2) {
            if (*plVar8 == 0) goto LAB_0060b178;
            native_System_Collections_Generic_List_int_____Add_d40c00
                      (*plVar8,lVar10,
                       _Method_System_Collections_Generic_List_I_BE2_Instruction__Add___12dc9c0);
          }
          if (lVar10 == param_1) {
            return;
          }
          uVar1 = *(uint *)(lVar3 + 0x18);
          uVar11 = uVar11 + 1;
          bVar2 = (bool)(bVar2 | lVar10 == *(long *)(param_1 + 0x78));
        } while ((int)uVar11 < (int)uVar1);
      }
      return;
    }
  }
LAB_0060b178:
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* BE2_Ins_ReferenceFunctionBlock$$Function @ 0x60b17c
 * void BE2_Ins_ReferenceFunctionBlock__Function (BE2_Ins_ReferenceFunctionBlock_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* BE2_Ins_ReferenceFunctionBlock$$Function
   void BE2_Ins_ReferenceFunctionBlock__Function (BE2_Ins_ReferenceFunctionBlock_o* __this, const
   MethodInfo* method); */

void native_BE2_Ins_ReferenceFunctionBlock__Function_60b17c(long param_1)

{
  ulong uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  int *piVar6;
  uint uVar7;
  long *plVar8;
  undefined8 uStack_78;
  undefined8 uStack_70;
  long *plStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  long *plStack_50;
  
  if ((bRam000000000133ee23 & 1) == 0) {
    native_sub_43273c(&
                      Method_System_Collections_Generic_List_Enumerator_I_BE2_Instruction__Dispose___12da4e0
                     );
    native_sub_43273c(&
                      Method_System_Collections_Generic_List_Enumerator_I_BE2_Instruction__MoveNext___12da4e8
                     );
    native_sub_43273c(&
                      Method_System_Collections_Generic_List_Enumerator_I_BE2_Instruction__get_Current___12da4f0
                     );
    native_sub_43273c(&MG_BlocksEngine2_Block_I_BE2_BlockSectionHeaderInput_TypeInfo_12d4e00);
    native_sub_43273c(&MG_BlocksEngine2_Block_Instruction_I_BE2_Instruction_TypeInfo_12d4e28);
    native_sub_43273c(&
                      Method_System_Collections_Generic_List_I_BE2_Instruction__GetEnumerator___12dc9d0
                     );
    native_sub_43273c(&Method_System_Collections_Generic_List_string__get_Count___12dcef8);
    native_sub_43273c(&Method_System_Collections_Generic_List_string__set_Item___12dcf08);
    bRam000000000133ee23 = 1;
  }
  uStack_58 = 0;
  plStack_50 = (long *)0x0;
  uStack_60 = 0;
  if (*(long *)(param_1 + 0x80) != 0) {
    native_System_Collections_Generic_List_BE2_Op_FunctionLocalVariable___GetEnumerator_d414fc
              (&uStack_78,*(long *)(param_1 + 0x80),
               _Method_System_Collections_Generic_List_I_BE2_Instruction__GetEnumerator___12dc9d0);
    plStack_50 = plStack_68;
    uStack_58 = uStack_70;
    uStack_60 = uStack_78;
    while (uVar1 = native_System_Collections_Generic_List_Enumerator_BE2_Op_FunctionLocalVariable___MoveNext_7e8f30
                             (&uStack_60,
                              _Method_System_Collections_Generic_List_Enumerator_I_BE2_Instruction__MoveNext___12da4e8
                             ), plVar8 = plStack_50, (uVar1 & 1) != 0) {
      if (plStack_50 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        native_sub_432810();
      }
      lVar4 = *plStack_50;
      if ((ulong)*(ushort *)(lVar4 + 0x12a) != 0) {
        uVar1 = 0;
        piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
        do {
          if (*(long *)(piVar6 + -2) ==
              _MG_BlocksEngine2_Block_Instruction_I_BE2_Instruction_TypeInfo_12d4e28) {
            puVar2 = (undefined8 *)(lVar4 + (long)(*piVar6 + 4) * 0x10 + 0x138);
            goto LAB_0060b2c0;
          }
          uVar1 = uVar1 + 1;
          piVar6 = piVar6 + 4;
        } while (uVar1 < *(ushort *)(lVar4 + 0x12a));
      }
      puVar2 = (undefined8 *)
               native_sub_3c9b34(plStack_50,
                                 _MG_BlocksEngine2_Block_Instruction_I_BE2_Instruction_TypeInfo_12d4e28
                                 ,4);
LAB_0060b2c0:
      (*(code *)*puVar2)(plVar8,puVar2[1]);
    }
    native_System_Collections_Generic_List_Enumerator_BE2_Op_FunctionLocalVariable___Dispose_7e8f2c
              (&uStack_60,
               _Method_System_Collections_Generic_List_Enumerator_I_BE2_Instruction__Dispose___12da4e0
              );
    lVar4 = *(long *)(param_1 + 0x78);
    if (lVar4 != 0) {
      uVar7 = 0;
      do {
        if ((*(long *)(lVar4 + 0x90) == 0) ||
           (lVar5 = *(long *)(*(long *)(lVar4 + 0x90) + 0xa0), lVar5 == 0)) break;
        if (*(int *)(lVar5 + 0x18) <= (int)uVar7) {
          native_MG_BlocksEngine2_Block_Instruction_BE2_InstructionBase__ExecuteSection_6095ec
                    (lVar4,0);
          return;
        }
        lVar5 = *(long *)(lVar4 + 0xa0);
        lVar4 = native_MG_BlocksEngine2_Block_Instruction_BE2_InstructionBase__get_Section0Inputs_603b78
                          (param_1);
        if (lVar4 == 0) break;
        if (*(uint *)(lVar4 + 0x18) <= uVar7) {
          uVar3 = native_sub_43283c();
                    /* WARNING: Subroutine does not return */
          native_sub_4327dc(uVar3,0);
        }
        plVar8 = *(long **)(lVar4 + (long)(int)uVar7 * 8 + 0x20);
        if (plVar8 == (long *)0x0) break;
        lVar4 = *plVar8;
        if ((ulong)*(ushort *)(lVar4 + 0x12a) != 0) {
          uVar1 = 0;
          piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
          do {
            if (*(long *)(piVar6 + -2) ==
                _MG_BlocksEngine2_Block_I_BE2_BlockSectionHeaderInput_TypeInfo_12d4e00) {
              puVar2 = (undefined8 *)(lVar4 + (long)(*piVar6 + 3) * 0x10 + 0x138);
              goto LAB_0060b39c;
            }
            uVar1 = uVar1 + 1;
            piVar6 = piVar6 + 4;
          } while (uVar1 < *(ushort *)(lVar4 + 0x12a));
        }
        puVar2 = (undefined8 *)
                 native_sub_3c9b34(plVar8,
                                   _MG_BlocksEngine2_Block_I_BE2_BlockSectionHeaderInput_TypeInfo_12d4e00
                                   ,3);
LAB_0060b39c:
        uVar3 = (*(code *)*puVar2)(plVar8,puVar2[1]);
        if (lVar5 == 0) break;
        native_System_Collections_Generic_List_object___set_Item_d40958
                  (lVar5,uVar7,uVar3,
                   _Method_System_Collections_Generic_List_string__set_Item___12dcf08);
        lVar4 = *(long *)(param_1 + 0x78);
        uVar7 = uVar7 + 1;
      } while (lVar4 != 0);
    }
  }
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}


