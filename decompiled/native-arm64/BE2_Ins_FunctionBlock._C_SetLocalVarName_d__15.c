/* ARM64 IL2CPP native pseudocode from Ghidra.
 * Recovered implementation, not original C# source.
 * Function boundaries follow the IL2CPP method address table. */


/* BE2_Ins_FunctionBlock.<C_SetLocalVarName>d__15$$.ctor @ 0x548478
 * void BE2_Ins_FunctionBlock__C_SetLocalVarName_d__15___ctor (BE2_Ins_FunctionBlock__C_SetLocalVarName_d__15_o* __this, int32_t __1__state, const MethodInfo* method); */

/* BE2_Ins_FunctionBlock.<C_SetLocalVarName>d__15$$.ctor
   void BE2_Ins_FunctionBlock__C_SetLocalVarName_d__15___ctor
   (BE2_Ins_FunctionBlock__C_SetLocalVarName_d__15_o* __this, int32_t __1__state, const MethodInfo*
   method); */

void native_BE2_Ins_FunctionBlock__C_SetLocalVarName_d__15___ctor_548478
               (long param_1,undefined4 param_2)

{
  native_System_Object___ctor_ad2798(param_1,0);
  *(undefined4 *)(param_1 + 0x10) = param_2;
  return;
}



/* BE2_Ins_FunctionBlock.<C_SetLocalVarName>d__15$$System.IDisposable.Dispose @ 0x5484a4
 * void BE2_Ins_FunctionBlock__C_SetLocalVarName_d__15__System_IDisposable_Dispose (BE2_Ins_FunctionBlock__C_SetLocalVarName_d__15_o* __this, const MethodInfo* method); */

/* BE2_Ins_FunctionBlock.<C_SetLocalVarName>d__15$$System.IDisposable.Dispose
   void BE2_Ins_FunctionBlock__C_SetLocalVarName_d__15__System_IDisposable_Dispose
   (BE2_Ins_FunctionBlock__C_SetLocalVarName_d__15_o* __this, const MethodInfo* method); */

void native_BE2_Ins_FunctionBlock__C_SetLocalVarName_d__15__System_IDisposable_Dispose_5484a4(void)

{
  return;
}



/* BE2_Ins_FunctionBlock.<C_SetLocalVarName>d__15$$MoveNext @ 0x5484a8
 * bool BE2_Ins_FunctionBlock__C_SetLocalVarName_d__15__MoveNext (BE2_Ins_FunctionBlock__C_SetLocalVarName_d__15_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* BE2_Ins_FunctionBlock.<C_SetLocalVarName>d__15$$MoveNext
   bool BE2_Ins_FunctionBlock__C_SetLocalVarName_d__15__MoveNext
   (BE2_Ins_FunctionBlock__C_SetLocalVarName_d__15_o* __this, const MethodInfo* method); */

undefined8 native_BE2_Ins_FunctionBlock__C_SetLocalVarName_d__15__MoveNext_5484a8(long param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  long lVar3;
  ulong uVar4;
  int *piVar5;
  long *plVar6;
  long *plVar7;
  long lVar8;
  
  if ((bRam000000000133e9a6 & 1) == 0) {
    native_sub_43273c(&BE2_Op_FunctionLocalVariable_TypeInfo_12d3a28);
    native_sub_43273c(&Method_UnityEngine_Component_GetComponentInChildren_TMP_Text____12e2c98);
    native_sub_43273c(&MG_BlocksEngine2_Block_I_BE2_Block_TypeInfo_12d4dd8);
    native_sub_43273c(&
                      Method_System_Collections_Generic_List_BE2_Op_FunctionLocalVariable__Add___12dc478
                     );
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    native_sub_43273c(&UnityEngine_WaitForEndOfFrame_TypeInfo_12d6738);
    bRam000000000133e9a6 = 1;
  }
  if (*(int *)(param_1 + 0x10) != 1) {
    if (*(int *)(param_1 + 0x10) != 0) {
      return 0;
    }
    *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
    uVar1 = native_sub_432808(_UnityEngine_WaitForEndOfFrame_TypeInfo_12d6738);
    native_UnityEngine_WaitForEndOfFrame___ctor_7775b8(uVar1,0);
    *(undefined8 *)(param_1 + 0x18) = uVar1;
    native_sub_4326e0(param_1 + 0x18,uVar1);
    *(undefined4 *)(param_1 + 0x10) = 1;
    return 1;
  }
  plVar7 = *(long **)(param_1 + 0x20);
  lVar8 = *(long *)(param_1 + 0x30);
  *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
  if (plVar7 == (long *)0x0) goto LAB_0054873c;
  lVar3 = *plVar7;
  if ((ulong)*(ushort *)(lVar3 + 0x12a) != 0) {
    uVar4 = 0;
    piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
    do {
      if (*(long *)(piVar5 + -2) == _MG_BlocksEngine2_Block_I_BE2_Block_TypeInfo_12d4dd8) {
        puVar2 = (undefined8 *)(lVar3 + (long)(*piVar5 + 4) * 0x10 + 0x138);
        goto LAB_005485dc;
      }
      uVar4 = uVar4 + 1;
      piVar5 = piVar5 + 4;
    } while (uVar4 < *(ushort *)(lVar3 + 0x12a));
  }
  puVar2 = (undefined8 *)
           native_sub_3c9b34(plVar7,_MG_BlocksEngine2_Block_I_BE2_Block_TypeInfo_12d4dd8,4);
LAB_005485dc:
  plVar7 = (long *)(*(code *)*puVar2)(plVar7,puVar2[1]);
  if (plVar7 == (long *)0x0) {
LAB_0054860c:
    plVar7 = (long *)0x0;
  }
  else {
    if (*(byte *)(*plVar7 + 300) < *(byte *)(_BE2_Op_FunctionLocalVariable_TypeInfo_12d3a28 + 300))
    goto LAB_0054860c;
    if (*(long *)(*(long *)(*plVar7 + 200) +
                  (ulong)*(byte *)(_BE2_Op_FunctionLocalVariable_TypeInfo_12d3a28 + 300) * 8 + -8)
        != _BE2_Op_FunctionLocalVariable_TypeInfo_12d3a28) {
      plVar7 = (long *)0x0;
    }
  }
  plVar6 = *(long **)(param_1 + 0x28);
  if (plVar6 != (long *)0x0) {
    lVar3 = *plVar6;
    if ((ulong)*(ushort *)(lVar3 + 0x12a) != 0) {
      uVar4 = 0;
      piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
        if (*(long *)(piVar5 + -2) == _MG_BlocksEngine2_Block_I_BE2_Block_TypeInfo_12d4dd8) {
          puVar2 = (undefined8 *)(lVar3 + (long)*piVar5 * 0x10 + 0x138);
          goto LAB_00548684;
        }
        uVar4 = uVar4 + 1;
        piVar5 = piVar5 + 4;
      } while (uVar4 < *(ushort *)(lVar3 + 0x12a));
    }
    puVar2 = (undefined8 *)
             native_sub_3c9b34(plVar6,_MG_BlocksEngine2_Block_I_BE2_Block_TypeInfo_12d4dd8,0);
LAB_00548684:
    lVar3 = (*(code *)*puVar2)(plVar6,puVar2[1]);
    if (lVar3 != 0) {
      plVar6 = (long *)native_UnityEngine_Component__GetComponentInChildren_Animation__49db98
                                 (lVar3,
                                  _Method_UnityEngine_Component_GetComponentInChildren_TMP_Text____12e2c98
                                 );
      if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
        native_sub_4327ec(_UnityEngine_Object_TypeInfo_12d54e0);
      }
      uVar4 = native_UnityEngine_Object__op_Implicit_8e1b98(plVar6,0);
      if ((uVar4 & 1) == 0) {
        return 0;
      }
      if ((plVar6 != (long *)0x0) &&
         (lVar3 = (**(code **)(*plVar6 + 0x548))(plVar6,*(undefined8 *)(*plVar6 + 0x550)),
         plVar7 != (long *)0x0)) {
        plVar7[0x12] = lVar3;
        native_sub_4326e0();
        if ((lVar8 != 0) && (lVar8 = *(long *)(lVar8 + 0x98), lVar8 != 0)) {
          native_System_Collections_Generic_List_int_____Add_d40c00
                    (lVar8,plVar7,
                     _Method_System_Collections_Generic_List_BE2_Op_FunctionLocalVariable__Add___12dc478
                    );
          return 0;
        }
      }
    }
  }
LAB_0054873c:
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* BE2_Ins_FunctionBlock.<C_SetLocalVarName>d__15$$System.Collections.Generic.IEnumerator<System.Object>.get_Current @ 0x548740
 * Il2CppObject* BE2_Ins_FunctionBlock__C_SetLocalVarName_d__15__System_Collections_Generic_IEnumerator_System_Object__get_Current (BE2_Ins_FunctionBlock__C_SetLocalVarName_d__15_o* __this, const MethodInfo* method); */

/* BE2_Ins_FunctionBlock.<C_SetLocalVarName>d__15$$System.Collections.Generic.IEnumerator<System.Object>.get_Current
   Il2CppObject*
   BE2_Ins_FunctionBlock__C_SetLocalVarName_d__15__System_Collections_Generic_IEnumerator_System_Object__get_Current
   (BE2_Ins_FunctionBlock__C_SetLocalVarName_d__15_o* __this, const MethodInfo* method); */

undefined8
native_BE2_Ins_FunctionBlock__C_SetLocalVarName_d__15__System_Collections_Generic_IEnumerator_System_Object__get_Current_548740
          (long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* BE2_Ins_FunctionBlock.<C_SetLocalVarName>d__15$$System.Collections.IEnumerator.Reset @ 0x548748
 * void BE2_Ins_FunctionBlock__C_SetLocalVarName_d__15__System_Collections_IEnumerator_Reset (BE2_Ins_FunctionBlock__C_SetLocalVarName_d__15_o* __this, const MethodInfo* method); */

/* BE2_Ins_FunctionBlock.<C_SetLocalVarName>d__15$$System.Collections.IEnumerator.Reset
   void BE2_Ins_FunctionBlock__C_SetLocalVarName_d__15__System_Collections_IEnumerator_Reset
   (BE2_Ins_FunctionBlock__C_SetLocalVarName_d__15_o* __this, const MethodInfo* method); */

void native_BE2_Ins_FunctionBlock__C_SetLocalVarName_d__15__System_Collections_IEnumerator_Reset_548748
               (void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  native_sub_432740(&System_NotSupportedException_TypeInfo_12d5468);
  uVar1 = native_sub_432808();
  native_System_NotSupportedException___ctor_ad264c(uVar1,0);
  uVar2 = native_sub_432740(&
                            Method_BE2_Ins_FunctionBlock__C_SetLocalVarName_d__15_System_Collections_IEnumerator_Reset___12e9668
                           );
                    /* WARNING: Subroutine does not return */
  native_sub_4327dc(uVar1,uVar2);
}



/* BE2_Ins_FunctionBlock.<C_SetLocalVarName>d__15$$System.Collections.IEnumerator.get_Current @ 0x548788
 * Il2CppObject* BE2_Ins_FunctionBlock__C_SetLocalVarName_d__15__System_Collections_IEnumerator_get_Current (BE2_Ins_FunctionBlock__C_SetLocalVarName_d__15_o* __this, const MethodInfo* method); */

/* BE2_Ins_FunctionBlock.<C_SetLocalVarName>d__15$$System.Collections.IEnumerator.get_Current
   Il2CppObject*
   BE2_Ins_FunctionBlock__C_SetLocalVarName_d__15__System_Collections_IEnumerator_get_Current
   (BE2_Ins_FunctionBlock__C_SetLocalVarName_d__15_o* __this, const MethodInfo* method); */

undefined8
native_BE2_Ins_FunctionBlock__C_SetLocalVarName_d__15__System_Collections_IEnumerator_get_Current_548788
          (long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}


