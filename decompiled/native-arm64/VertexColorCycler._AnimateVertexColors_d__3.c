/* ARM64 IL2CPP native pseudocode from Ghidra.
 * Recovered implementation, not original C# source.
 * Function boundaries follow the IL2CPP method address table. */


/* TMPro.Examples.VertexColorCycler.<AnimateVertexColors>d__3$$.ctor @ 0x55c6a8
 * void TMPro_Examples_VertexColorCycler__AnimateVertexColors_d__3___ctor (TMPro_Examples_VertexColorCycler__AnimateVertexColors_d__3_o* __this, int32_t __1__state, const MethodInfo* method); */

/* TMPro.Examples.VertexColorCycler.<AnimateVertexColors>d__3$$.ctor
   void TMPro_Examples_VertexColorCycler__AnimateVertexColors_d__3___ctor
   (TMPro_Examples_VertexColorCycler__AnimateVertexColors_d__3_o* __this, int32_t __1__state, const
   MethodInfo* method); */

void native_TMPro_Examples_VertexColorCycler__AnimateVertexColors_d__3___ctor_55c6a8
               (long param_1,undefined4 param_2)

{
  native_System_Object___ctor_ad2798(param_1,0);
  *(undefined4 *)(param_1 + 0x10) = param_2;
  return;
}



/* TMPro.Examples.VertexColorCycler.<AnimateVertexColors>d__3$$System.IDisposable.Dispose @ 0x55c6d4
 * void TMPro_Examples_VertexColorCycler__AnimateVertexColors_d__3__System_IDisposable_Dispose (TMPro_Examples_VertexColorCycler__AnimateVertexColors_d__3_o* __this, const MethodInfo* method); */

/* TMPro.Examples.VertexColorCycler.<AnimateVertexColors>d__3$$System.IDisposable.Dispose
   void TMPro_Examples_VertexColorCycler__AnimateVertexColors_d__3__System_IDisposable_Dispose
   (TMPro_Examples_VertexColorCycler__AnimateVertexColors_d__3_o* __this, const MethodInfo* method);
    */

void native_TMPro_Examples_VertexColorCycler__AnimateVertexColors_d__3__System_IDisposable_Dispose_55c6d4
               (void)

{
  return;
}



/* TMPro.Examples.VertexColorCycler.<AnimateVertexColors>d__3$$MoveNext @ 0x55c6d8
 * bool TMPro_Examples_VertexColorCycler__AnimateVertexColors_d__3__MoveNext (TMPro_Examples_VertexColorCycler__AnimateVertexColors_d__3_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TMPro.Examples.VertexColorCycler.<AnimateVertexColors>d__3$$MoveNext
   bool TMPro_Examples_VertexColorCycler__AnimateVertexColors_d__3__MoveNext
   (TMPro_Examples_VertexColorCycler__AnimateVertexColors_d__3_o* __this, const MethodInfo* method);
    */

undefined8
native_TMPro_Examples_VertexColorCycler__AnimateVertexColors_d__3__MoveNext_55c6d8(long param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  long lVar7;
  long *plVar8;
  undefined8 uVar9;
  uint uVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  undefined4 auStack_48 [2];
  
  lVar7 = param_1;
  if ((bRam000000000133ea0e & 1) == 0) {
    lVar7 = native_sub_43273c(&UnityEngine_WaitForSeconds_TypeInfo_12d6740);
    bRam000000000133ea0e = 1;
  }
  auStack_48[0] = 0;
  iVar1 = *(int *)(param_1 + 0x10);
  lVar13 = *(long *)(param_1 + 0x20);
  if ((iVar1 == 2) || (iVar1 == 1)) {
    *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
  }
  else {
    lVar7 = 0;
    if (iVar1 != 0) {
      return 0;
    }
    *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
    if (lVar13 == 0) goto LAB_0055c9a8;
    plVar8 = *(long **)(lVar13 + 0x18);
    lVar7 = 0;
    if (plVar8 == (long *)0x0) goto LAB_0055c9a8;
    lVar7 = (**(code **)(*plVar8 + 0x7d8))(plVar8,0,0,*(undefined8 *)(*plVar8 + 0x7e0));
    if (*(long *)(lVar13 + 0x18) == 0) goto LAB_0055c9a8;
    *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(*(long *)(lVar13 + 0x18) + 0x360);
    native_sub_4326e0((undefined8 *)(param_1 + 0x28));
    *(undefined4 *)(param_1 + 0x30) = 0;
    plVar8 = *(long **)(lVar13 + 0x18);
    lVar7 = 0;
    if (plVar8 == (long *)0x0) goto LAB_0055c9a8;
    (**(code **)(*plVar8 + 0x298))(plVar8,*(undefined8 *)(*plVar8 + 0x2a0));
    lVar7 = native_UnityEngine_Color32__op_Implicit_8d9fb4(0);
    auStack_48[0] = (undefined4)lVar7;
  }
  lVar12 = *(long *)(param_1 + 0x28);
  if (lVar12 == 0) goto LAB_0055c9a8;
  iVar1 = *(int *)(lVar12 + 0x18);
  if (iVar1 == 0) {
    uVar9 = native_sub_432808(_UnityEngine_WaitForSeconds_TypeInfo_12d6740);
    native_UnityEngine_WaitForSeconds___ctor_7775c8(0x3e800000,uVar9,0);
    *(undefined8 *)(param_1 + 0x18) = uVar9;
    native_sub_4326e0((undefined8 *)(param_1 + 0x18),uVar9);
    uVar4 = 1;
  }
  else {
    lVar11 = *(long *)(lVar12 + 0x38);
    if (lVar11 == 0) goto LAB_0055c9a8;
    uVar10 = *(uint *)(param_1 + 0x30);
    if (*(uint *)(lVar11 + 0x18) <= uVar10) goto LAB_0055c9ac;
    lVar12 = *(long *)(lVar12 + 0x60);
    if (lVar12 == 0) goto LAB_0055c9a8;
    uVar2 = *(uint *)(lVar11 + (long)(int)uVar10 * 0x178 + 0x58);
    if (*(uint *)(lVar12 + 0x18) <= uVar2) goto LAB_0055c9ac;
    lVar11 = lVar11 + (long)(int)uVar10 * 0x178;
    if (*(char *)(lVar11 + 0x194) != '\0') {
      lVar12 = *(long *)(lVar12 + (long)(int)uVar2 * 0x50 + 0x58);
      uVar10 = *(uint *)(lVar11 + 0x6c);
      uVar4 = native_UnityEngine_Random__Range_7630a8(0,0xff,0);
      uVar5 = native_UnityEngine_Random__Range_7630a8(0,0xff,0);
      uVar6 = native_UnityEngine_Random__Range_7630a8(0,0xff,0);
      lVar7 = native_UnityEngine_Color32___ctor_8d9fa0(auStack_48,uVar4,uVar5,uVar6,0xff,0);
      if (lVar12 == 0) goto LAB_0055c9a8;
      if (*(uint *)(lVar12 + 0x18) <= uVar10) {
LAB_0055c9ac:
        uVar9 = native_sub_43283c();
                    /* WARNING: Subroutine does not return */
        native_sub_4327dc(uVar9,0);
      }
      *(undefined4 *)(lVar12 + (long)(int)uVar10 * 4 + 0x20) = auStack_48[0];
      if (*(uint *)(lVar12 + 0x18) <= uVar10 + 1) goto LAB_0055c9ac;
      *(undefined4 *)(lVar12 + (long)(int)(uVar10 + 1) * 4 + 0x20) = auStack_48[0];
      if (*(uint *)(lVar12 + 0x18) <= uVar10 + 2) goto LAB_0055c9ac;
      *(undefined4 *)(lVar12 + (long)(int)(uVar10 + 2) * 4 + 0x20) = auStack_48[0];
      if (*(uint *)(lVar12 + 0x18) <= uVar10 + 3) goto LAB_0055c9ac;
      *(undefined4 *)(lVar12 + (long)(int)(uVar10 + 3) * 4 + 0x20) = auStack_48[0];
      if (lVar13 == 0) {
LAB_0055c9a8:
                    /* WARNING: Subroutine does not return */
        native_sub_432810(lVar7);
      }
      plVar8 = *(long **)(lVar13 + 0x18);
      lVar7 = 0;
      if (plVar8 == (long *)0x0) goto LAB_0055c9a8;
      (**(code **)(*plVar8 + 0x7f8))(plVar8,0x10,*(undefined8 *)(*plVar8 + 0x800));
      uVar10 = *(uint *)(param_1 + 0x30);
    }
    iVar3 = 0;
    if (iVar1 != 0) {
      iVar3 = (int)(uVar10 + 1) / iVar1;
    }
    *(uint *)(param_1 + 0x30) = (uVar10 + 1) - iVar3 * iVar1;
    uVar9 = native_sub_432808(_UnityEngine_WaitForSeconds_TypeInfo_12d6740);
    native_UnityEngine_WaitForSeconds___ctor_7775c8(0x3d4ccccd,uVar9,0);
    *(undefined8 *)(param_1 + 0x18) = uVar9;
    native_sub_4326e0(param_1 + 0x18,uVar9);
    uVar4 = 2;
  }
  *(undefined4 *)(param_1 + 0x10) = uVar4;
  return 1;
}



/* TMPro.Examples.VertexColorCycler.<AnimateVertexColors>d__3$$System.Collections.Generic.IEnumerator<System.Object>.get_Current @ 0x55c9b8
 * Il2CppObject* TMPro_Examples_VertexColorCycler__AnimateVertexColors_d__3__System_Collections_Generic_IEnumerator_System_Object__get_Current (TMPro_Examples_VertexColorCycler__AnimateVertexColors_d__3_o* __this, const MethodInfo* method); */

/* TMPro.Examples.VertexColorCycler.<AnimateVertexColors>d__3$$System.Collections.Generic.IEnumerator<System.Object>.get_Current
   Il2CppObject*
   TMPro_Examples_VertexColorCycler__AnimateVertexColors_d__3__System_Collections_Generic_IEnumerator_System_Object__get_Current
   (TMPro_Examples_VertexColorCycler__AnimateVertexColors_d__3_o* __this, const MethodInfo* method);
    */

undefined8
native_TMPro_Examples_VertexColorCycler__AnimateVertexColors_d__3__System_Collections_Generic_IEnumerator_System_Object__get_Current_55c9b8
          (long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* TMPro.Examples.VertexColorCycler.<AnimateVertexColors>d__3$$System.Collections.IEnumerator.Reset @ 0x55c9c0
 * void TMPro_Examples_VertexColorCycler__AnimateVertexColors_d__3__System_Collections_IEnumerator_Reset (TMPro_Examples_VertexColorCycler__AnimateVertexColors_d__3_o* __this, const MethodInfo* method); */

/* TMPro.Examples.VertexColorCycler.<AnimateVertexColors>d__3$$System.Collections.IEnumerator.Reset
   void 
   TMPro_Examples_VertexColorCycler__AnimateVertexColors_d__3__System_Collections_IEnumerator_Reset
   (TMPro_Examples_VertexColorCycler__AnimateVertexColors_d__3_o* __this, const MethodInfo* method);
    */

void native_TMPro_Examples_VertexColorCycler__AnimateVertexColors_d__3__System_Collections_IEnumerator_Reset_55c9c0
               (void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  native_sub_432740(&System_NotSupportedException_TypeInfo_12d5468);
  uVar1 = native_sub_432808();
  native_System_NotSupportedException___ctor_ad264c(uVar1,0);
  uVar2 = native_sub_432740(&
                            Method_TMPro_Examples_VertexColorCycler__AnimateVertexColors_d__3_System_Collections_IEnumerator_Reset___12ea1c8
                           );
                    /* WARNING: Subroutine does not return */
  native_sub_4327dc(uVar1,uVar2);
}



/* TMPro.Examples.VertexColorCycler.<AnimateVertexColors>d__3$$System.Collections.IEnumerator.get_Current @ 0x55ca00
 * Il2CppObject* TMPro_Examples_VertexColorCycler__AnimateVertexColors_d__3__System_Collections_IEnumerator_get_Current (TMPro_Examples_VertexColorCycler__AnimateVertexColors_d__3_o* __this, const MethodInfo* method); */

/* TMPro.Examples.VertexColorCycler.<AnimateVertexColors>d__3$$System.Collections.IEnumerator.get_Current
   Il2CppObject*
   TMPro_Examples_VertexColorCycler__AnimateVertexColors_d__3__System_Collections_IEnumerator_get_Current
   (TMPro_Examples_VertexColorCycler__AnimateVertexColors_d__3_o* __this, const MethodInfo* method);
    */

undefined8
native_TMPro_Examples_VertexColorCycler__AnimateVertexColors_d__3__System_Collections_IEnumerator_get_Current_55ca00
          (long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}


