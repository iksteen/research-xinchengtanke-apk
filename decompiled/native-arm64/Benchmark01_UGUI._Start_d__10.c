/* ARM64 IL2CPP native pseudocode from Ghidra.
 * Recovered implementation, not original C# source.
 * Function boundaries follow the IL2CPP method address table. */


/* TMPro.Examples.Benchmark01_UGUI.<Start>d__10$$.ctor @ 0x549cbc
 * void TMPro_Examples_Benchmark01_UGUI__Start_d__10___ctor (TMPro_Examples_Benchmark01_UGUI__Start_d__10_o* __this, int32_t __1__state, const MethodInfo* method); */

/* TMPro.Examples.Benchmark01_UGUI.<Start>d__10$$.ctor
   void TMPro_Examples_Benchmark01_UGUI__Start_d__10___ctor
   (TMPro_Examples_Benchmark01_UGUI__Start_d__10_o* __this, int32_t __1__state, const MethodInfo*
   method); */

void native_TMPro_Examples_Benchmark01_UGUI__Start_d__10___ctor_549cbc
               (long param_1,undefined4 param_2)

{
  native_System_Object___ctor_ad2798(param_1,0);
  *(undefined4 *)(param_1 + 0x10) = param_2;
  return;
}



/* TMPro.Examples.Benchmark01_UGUI.<Start>d__10$$System.IDisposable.Dispose @ 0x549ce8
 * void TMPro_Examples_Benchmark01_UGUI__Start_d__10__System_IDisposable_Dispose (TMPro_Examples_Benchmark01_UGUI__Start_d__10_o* __this, const MethodInfo* method); */

/* TMPro.Examples.Benchmark01_UGUI.<Start>d__10$$System.IDisposable.Dispose
   void TMPro_Examples_Benchmark01_UGUI__Start_d__10__System_IDisposable_Dispose
   (TMPro_Examples_Benchmark01_UGUI__Start_d__10_o* __this, const MethodInfo* method); */

void native_TMPro_Examples_Benchmark01_UGUI__Start_d__10__System_IDisposable_Dispose_549ce8(void)

{
  return;
}



/* TMPro.Examples.Benchmark01_UGUI.<Start>d__10$$MoveNext @ 0x549cec
 * bool TMPro_Examples_Benchmark01_UGUI__Start_d__10__MoveNext (TMPro_Examples_Benchmark01_UGUI__Start_d__10_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TMPro.Examples.Benchmark01_UGUI.<Start>d__10$$MoveNext
   bool TMPro_Examples_Benchmark01_UGUI__Start_d__10__MoveNext
   (TMPro_Examples_Benchmark01_UGUI__Start_d__10_o* __this, const MethodInfo* method); */

ulong native_TMPro_Examples_Benchmark01_UGUI__Start_d__10__MoveNext_549cec(long param_1)

{
  ulong uVar1;
  long lVar2;
  int iVar3;
  undefined4 uVar4;
  long *plVar5;
  code *pcVar6;
  long lVar7;
  long *plVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  int iStack_34;
  
  if ((bRam000000000133e9b4 & 1) == 0) {
    native_sub_43273c(&Method_UnityEngine_GameObject_AddComponent_TextMeshProUGUI____12e48b8);
    native_sub_43273c(&Method_UnityEngine_GameObject_AddComponent_Text____12e4898);
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    native_sub_43273c(&Method_UnityEngine_Resources_Load_Material____12e6330);
    native_sub_43273c(&StringLiteral_Fonts___Materials_LiberationSans_SDF___BEVEL_12ee028);
    native_sub_43273c(&StringLiteral_The__color__0050FF_count_is____color__12f1788);
    native_sub_43273c(&StringLiteral_The___0050FF_count_is____color__12f1770);
    bRam000000000133e9b4 = 1;
  }
  iStack_34 = 0;
  iVar3 = *(int *)(param_1 + 0x10);
  uVar1 = 0;
  if (iVar3 == 2) {
    uVar4 = 0xffffffff;
    goto LAB_0054a19c;
  }
  lVar7 = *(long *)(param_1 + 0x20);
  if (iVar3 == 1) {
    iStack_34 = *(int *)(param_1 + 0x28);
    *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
    iVar3 = iStack_34 + 1;
    *(int *)(param_1 + 0x28) = iVar3;
    if (1000000 < iVar3) {
      *(undefined8 *)(param_1 + 0x18) = 0;
      native_sub_4326e0((undefined8 *)(param_1 + 0x18),0);
      uVar1 = 1;
      uVar4 = 2;
      goto LAB_0054a19c;
    }
    if (lVar7 == 0) goto LAB_0054a1b4;
  }
  else {
    if (iVar3 != 0) {
      return 0;
    }
    *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
    if (lVar7 == 0) goto LAB_0054a1b4;
    if (*(int *)(lVar7 + 0x18) == 1) {
      lVar2 = native_UnityEngine_Component__get_gameObject_8da66c(lVar7,0);
      uVar1 = 0;
      if (lVar2 == 0) goto LAB_0054a1b4;
      lVar2 = native_UnityEngine_GameObject__AddComponent_ActiveAnimation__4a2118
                        (lVar2,_Method_UnityEngine_GameObject_AddComponent_Text____12e4898);
      plVar8 = (long *)(lVar7 + 0x40);
      *plVar8 = lVar2;
      native_sub_4326e0(plVar8,lVar2);
      uVar9 = *(undefined8 *)(lVar7 + 0x30);
      if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
        native_sub_4327ec();
      }
      uVar1 = native_UnityEngine_Object__op_Inequality_8d76fc(uVar9,0,0);
      if ((uVar1 & 1) != 0) {
        uVar1 = 0;
        if (*plVar8 == 0) goto LAB_0054a1b4;
        native_UnityEngine_UI_Text__set_font_c672c0(*plVar8,*(undefined8 *)(lVar7 + 0x30),0);
      }
      uVar1 = 0;
      if (*plVar8 == 0) goto LAB_0054a1b4;
      native_UnityEngine_UI_Text__set_fontSize_c67810(*plVar8,0x30,0);
      uVar1 = 0;
      if (*plVar8 == 0) goto LAB_0054a1b4;
      native_UnityEngine_UI_Text__set_alignment_c67730(*plVar8,4,0);
    }
    else if (*(int *)(lVar7 + 0x18) == 0) {
      lVar2 = native_UnityEngine_Component__get_gameObject_8da66c(lVar7,0);
      uVar1 = 0;
      if (lVar2 == 0) goto LAB_0054a1b4;
      lVar2 = native_UnityEngine_GameObject__AddComponent_ActiveAnimation__4a2118
                        (lVar2,
                         _Method_UnityEngine_GameObject_AddComponent_TextMeshProUGUI____12e48b8);
      plVar8 = (long *)(lVar7 + 0x38);
      *plVar8 = lVar2;
      native_sub_4326e0(plVar8,lVar2);
      uVar9 = *(undefined8 *)(lVar7 + 0x28);
      if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
        native_sub_4327ec();
      }
      uVar1 = native_UnityEngine_Object__op_Inequality_8d76fc(uVar9,0,0);
      if ((uVar1 & 1) != 0) {
        uVar1 = 0;
        if (*plVar8 == 0) goto LAB_0054a1b4;
        native_TMPro_TMP_Text__set_font_4ba17c(*plVar8,*(undefined8 *)(lVar7 + 0x28),0);
      }
      uVar1 = 0;
      if (*plVar8 == 0) goto LAB_0054a1b4;
      native_TMPro_TMP_Text__set_fontSize_4bae20(0x42400000,*plVar8,0);
      uVar1 = 0;
      if (*plVar8 == 0) goto LAB_0054a1b4;
      native_TMPro_TMP_Text__set_alignment_4bb268(*plVar8,0x202,0);
      uVar1 = 0;
      if (*plVar8 == 0) goto LAB_0054a1b4;
      uVar1 = native_TMPro_TMP_Text__set_extraPadding_4bba10(*plVar8,1,0);
      if ((*plVar8 == 0) || (lVar2 = *(long *)(*plVar8 + 0xf0), lVar2 == 0)) goto LAB_0054a1b4;
      *(undefined8 *)(lVar7 + 0x48) = *(undefined8 *)(lVar2 + 0x20);
      native_sub_4326e0((undefined8 *)(lVar7 + 0x48));
      uVar9 = native_UnityEngine_Resources__Load_Font__4a7de0
                        (_StringLiteral_Fonts___Materials_LiberationSans_SDF___BEVEL_12ee028,
                         _Method_UnityEngine_Resources_Load_Material____12e6330);
      *(undefined8 *)(lVar7 + 0x50) = uVar9;
      native_sub_4326e0(lVar7 + 0x50);
    }
    iVar3 = 0;
    *(undefined4 *)(param_1 + 0x28) = 0;
  }
  if (*(int *)(lVar7 + 0x18) == 1) {
    plVar8 = *(long **)(lVar7 + 0x40);
    iStack_34 = iVar3 % 1000;
    uVar9 = native_System_Int32__ToString_83c60c(&iStack_34,0);
    uVar1 = native_System_String__Concat_afbd68
                      (_StringLiteral_The__color__0050FF_count_is____color__12f1788,uVar9,0);
    if (plVar8 == (long *)0x0) goto LAB_0054a1b4;
    pcVar6 = *(code **)(*plVar8 + 0x5e8);
    uVar9 = *(undefined8 *)(*plVar8 + 0x5f0);
LAB_0054a180:
    (*pcVar6)(plVar8,uVar1,uVar9);
  }
  else if (*(int *)(lVar7 + 0x18) == 0) {
    plVar8 = *(long **)(lVar7 + 0x38);
    iStack_34 = iVar3 % 1000;
    uVar9 = native_System_Int32__ToString_83c60c(&iStack_34,0);
    uVar1 = native_System_String__Concat_afbd68
                      (_StringLiteral_The___0050FF_count_is____color__12f1770,uVar9,0);
    if (plVar8 == (long *)0x0) {
LAB_0054a1b4:
                    /* WARNING: Subroutine does not return */
      native_sub_432810(uVar1);
    }
    uVar1 = (**(code **)(*plVar8 + 0x558))(plVar8,uVar1,*(undefined8 *)(*plVar8 + 0x560));
    if (*(int *)(param_1 + 0x28) % 1000 == 999) {
      plVar8 = *(long **)(lVar7 + 0x38);
      if (plVar8 == (long *)0x0) goto LAB_0054a1b4;
      uVar9 = (**(code **)(*plVar8 + 0x568))(plVar8,*(undefined8 *)(*plVar8 + 0x570));
      uVar10 = *(undefined8 *)(lVar7 + 0x48);
      if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
        native_sub_4327ec(_UnityEngine_Object_TypeInfo_12d54e0);
      }
      uVar1 = native_UnityEngine_Object__op_Equality_8e9a3c(uVar9,uVar10,0);
      plVar5 = *(long **)(lVar7 + 0x38);
      if ((uVar1 & 1) == 0) {
        if (plVar5 == (long *)0x0) goto LAB_0054a1b4;
        lVar2 = *plVar5;
        uVar1 = *(ulong *)(lVar7 + 0x48);
      }
      else {
        if (plVar5 == (long *)0x0) goto LAB_0054a1b4;
        lVar2 = *plVar5;
        uVar1 = *(ulong *)(lVar7 + 0x50);
      }
      (**(code **)(lVar2 + 0x578))(plVar5,uVar1,*(undefined8 *)(lVar2 + 0x580));
      pcVar6 = *(code **)(*plVar8 + 0x578);
      uVar9 = *(undefined8 *)(*plVar8 + 0x580);
      goto LAB_0054a180;
    }
  }
  *(undefined8 *)(param_1 + 0x18) = 0;
  native_sub_4326e0((undefined8 *)(param_1 + 0x18),0);
  uVar4 = 1;
  uVar1 = 1;
LAB_0054a19c:
  *(undefined4 *)(param_1 + 0x10) = uVar4;
  return uVar1;
}



/* TMPro.Examples.Benchmark01_UGUI.<Start>d__10$$System.Collections.Generic.IEnumerator<System.Object>.get_Current @ 0x54a1b8
 * Il2CppObject* TMPro_Examples_Benchmark01_UGUI__Start_d__10__System_Collections_Generic_IEnumerator_System_Object__get_Current (TMPro_Examples_Benchmark01_UGUI__Start_d__10_o* __this, const MethodInfo* method); */

/* TMPro.Examples.Benchmark01_UGUI.<Start>d__10$$System.Collections.Generic.IEnumerator<System.Object>.get_Current
   Il2CppObject*
   TMPro_Examples_Benchmark01_UGUI__Start_d__10__System_Collections_Generic_IEnumerator_System_Object__get_Current
   (TMPro_Examples_Benchmark01_UGUI__Start_d__10_o* __this, const MethodInfo* method); */

undefined8
native_TMPro_Examples_Benchmark01_UGUI__Start_d__10__System_Collections_Generic_IEnumerator_System_Object__get_Current_54a1b8
          (long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* TMPro.Examples.Benchmark01_UGUI.<Start>d__10$$System.Collections.IEnumerator.Reset @ 0x54a1c0
 * void TMPro_Examples_Benchmark01_UGUI__Start_d__10__System_Collections_IEnumerator_Reset (TMPro_Examples_Benchmark01_UGUI__Start_d__10_o* __this, const MethodInfo* method); */

/* TMPro.Examples.Benchmark01_UGUI.<Start>d__10$$System.Collections.IEnumerator.Reset
   void TMPro_Examples_Benchmark01_UGUI__Start_d__10__System_Collections_IEnumerator_Reset
   (TMPro_Examples_Benchmark01_UGUI__Start_d__10_o* __this, const MethodInfo* method); */

void native_TMPro_Examples_Benchmark01_UGUI__Start_d__10__System_Collections_IEnumerator_Reset_54a1c0
               (void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  native_sub_432740(&System_NotSupportedException_TypeInfo_12d5468);
  uVar1 = native_sub_432808();
  native_System_NotSupportedException___ctor_ad264c(uVar1,0);
  uVar2 = native_sub_432740(&
                            Method_TMPro_Examples_Benchmark01_UGUI__Start_d__10_System_Collections_IEnumerator_Reset___12e96e8
                           );
                    /* WARNING: Subroutine does not return */
  native_sub_4327dc(uVar1,uVar2);
}



/* TMPro.Examples.Benchmark01_UGUI.<Start>d__10$$System.Collections.IEnumerator.get_Current @ 0x54a200
 * Il2CppObject* TMPro_Examples_Benchmark01_UGUI__Start_d__10__System_Collections_IEnumerator_get_Current (TMPro_Examples_Benchmark01_UGUI__Start_d__10_o* __this, const MethodInfo* method); */

/* TMPro.Examples.Benchmark01_UGUI.<Start>d__10$$System.Collections.IEnumerator.get_Current
   Il2CppObject*
   TMPro_Examples_Benchmark01_UGUI__Start_d__10__System_Collections_IEnumerator_get_Current
   (TMPro_Examples_Benchmark01_UGUI__Start_d__10_o* __this, const MethodInfo* method); */

undefined8
native_TMPro_Examples_Benchmark01_UGUI__Start_d__10__System_Collections_IEnumerator_get_Current_54a200
          (long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}


