/* ARM64 IL2CPP native pseudocode from Ghidra.
 * Recovered implementation, not original C# source.
 * Function boundaries follow the IL2CPP method address table. */


/* BE2_Op_FunctionLocalVariable$$OnAwake @ 0x613874
 * void BE2_Op_FunctionLocalVariable__OnAwake (BE2_Op_FunctionLocalVariable_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* BE2_Op_FunctionLocalVariable$$OnAwake
   void BE2_Op_FunctionLocalVariable__OnAwake (BE2_Op_FunctionLocalVariable_o* __this, const
   MethodInfo* method); */

void native_BE2_Op_FunctionLocalVariable__OnAwake_613874(long param_1)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  undefined8 uVar4;
  ulong uVar5;
  long *plVar6;
  undefined8 *puVar7;
  
  if ((bRam000000000133ee74 & 1) == 0) {
    native_sub_43273c(&Method_UnityEngine_Component_GetComponentInChildren_TMP_Text____12e2c98);
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    bRam000000000133ee74 = 1;
  }
  uVar4 = native_UnityEngine_Component__GetComponentInChildren_Animation__49db98
                    (param_1,
                     _Method_UnityEngine_Component_GetComponentInChildren_TMP_Text____12e2c98);
  *(undefined8 *)(param_1 + 0x88) = uVar4;
  native_sub_4326e0((long *)(param_1 + 0x88),uVar4);
  uVar4 = *(undefined8 *)(param_1 + 0x88);
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar5 = native_UnityEngine_Object__op_Implicit_8e1b98(uVar4,0);
  if ((uVar5 & 1) != 0) {
    plVar6 = *(long **)(param_1 + 0x88);
    if (plVar6 != (long *)0x0) {
      uVar4 = (**(code **)(*plVar6 + 0x548))(plVar6,*(undefined8 *)(*plVar6 + 0x550));
      puVar7 = (undefined8 *)(param_1 + 0x90);
      *puVar7 = uVar4;
      if (iRam0000000001345318 != 0) {
        puVar1 = (ulong *)(((ulong)puVar7 >> 0x12 & 0x7fff) * 8 + 0x138ecd8);
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar3) {
            *puVar1 = *puVar1 | 1L << ((ulong)puVar7 >> 0xc & 0x3f);
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      return;
    }
                    /* WARNING: Subroutine does not return */
    native_sub_432810();
  }
  return;
}



/* BE2_Op_FunctionLocalVariable$$Operation @ 0x613958
 * System_String_o* BE2_Op_FunctionLocalVariable__Operation (BE2_Op_FunctionLocalVariable_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* BE2_Op_FunctionLocalVariable$$Operation
   System_String_o* BE2_Op_FunctionLocalVariable__Operation (BE2_Op_FunctionLocalVariable_o* __this,
   const MethodInfo* method); */

undefined8 native_BE2_Op_FunctionLocalVariable__Operation_613958(long param_1)

{
  uint uVar1;
  ulong uVar2;
  long *plVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  long lVar6;
  
  if ((bRam000000000133ee75 & 1) == 0) {
    native_sub_43273c(&BE2_Ins_FunctionBlock_TypeInfo_12d3a00);
    native_sub_43273c(&Method_System_Collections_Generic_List_string__get_Item___12dcf00);
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    native_sub_43273c(&StringLiteral__12eaac0);
    bRam000000000133ee75 = 1;
  }
  uVar5 = *(undefined8 *)(param_1 + 0x78);
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar2 = native_UnityEngine_Object__op_Implicit_8e1b98(uVar5,0);
  if ((uVar2 & 1) != 0) {
    if (*(long *)(param_1 + 0x78) != 0) {
      uVar1 = native_BE2_Ins_DefineFunction__GetLocalVariableIndex_6066c4
                        (*(long *)(param_1 + 0x78),*(undefined8 *)(param_1 + 0x90));
      if ((*(long *)(param_1 + 0x80) != 0) &&
         (plVar3 = *(long **)(*(long *)(param_1 + 0x80) + 0x30), plVar3 != (long *)0x0)) {
        if ((*(byte *)(_BE2_Ins_FunctionBlock_TypeInfo_12d3a00 + 300) <= *(byte *)(*plVar3 + 300))
           && ((*(long *)(*(long *)(*plVar3 + 200) +
                          (ulong)*(byte *)(_BE2_Ins_FunctionBlock_TypeInfo_12d3a00 + 300) * 8 + -8)
                == _BE2_Ins_FunctionBlock_TypeInfo_12d3a00 && (lVar6 = plVar3[0x14], lVar6 != 0))))
        {
          if (*(uint *)(lVar6 + 0x18) <= uVar1) {
            native_System_ThrowHelper__ThrowArgumentOutOfRangeException_9fe0f4(0);
          }
          puVar4 = (undefined8 *)(*(long *)(lVar6 + 0x10) + (long)(int)uVar1 * 8 + 0x20);
          goto LAB_00613a6c;
        }
      }
    }
                    /* WARNING: Subroutine does not return */
    native_sub_432810();
  }
  puVar4 = (undefined8 *)&StringLiteral__12eaac0;
LAB_00613a6c:
  return *puVar4;
}



/* BE2_Op_FunctionLocalVariable$$.ctor @ 0x613a80
 * void BE2_Op_FunctionLocalVariable___ctor (BE2_Op_FunctionLocalVariable_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* BE2_Op_FunctionLocalVariable$$.ctor
   void BE2_Op_FunctionLocalVariable___ctor (BE2_Op_FunctionLocalVariable_o* __this, const
   MethodInfo* method); */

undefined1  [16] native_BE2_Op_FunctionLocalVariable___ctor_613a80(ulong param_1)

{
  undefined1 auVar1 [16];
  
  if ((bRam000000000133ee76 & 1) == 0) {
    native_sub_43273c(&StringLiteral__12eaac0);
    bRam000000000133ee76 = 1;
  }
  *(undefined8 *)(param_1 + 0x90) = _StringLiteral__12eaac0;
  native_sub_4326e0();
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


