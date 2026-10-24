/* ARM64 IL2CPP native pseudocode from Ghidra.
 * Recovered implementation, not original C# source.
 * Function boundaries follow the IL2CPP method address table. */


/* TMPro.Examples.TextMeshProFloatingText.<DisplayTextMeshProFloatingText>d__15$$.ctor @ 0x54ee70
 * void TMPro_Examples_TextMeshProFloatingText__DisplayTextMeshProFloatingText_d__15___ctor (TMPro_Examples_TextMeshProFloatingText__DisplayTextMeshProFloatingText_d__15_o* __this, int32_t __1__state, const MethodInfo* method); */

/* TMPro.Examples.TextMeshProFloatingText.<DisplayTextMeshProFloatingText>d__15$$.ctor
   void TMPro_Examples_TextMeshProFloatingText__DisplayTextMeshProFloatingText_d__15___ctor
   (TMPro_Examples_TextMeshProFloatingText__DisplayTextMeshProFloatingText_d__15_o* __this, int32_t
   __1__state, const MethodInfo* method); */

void native_TMPro_Examples_TextMeshProFloatingText__DisplayTextMeshProFloatingText_d__15___ctor_54ee70
               (long param_1,undefined4 param_2)

{
  native_System_Object___ctor_ad2798(param_1,0);
  *(undefined4 *)(param_1 + 0x10) = param_2;
  return;
}



/* TMPro.Examples.TextMeshProFloatingText.<DisplayTextMeshProFloatingText>d__15$$System.IDisposable.Dispose @ 0x54ee9c
 * void TMPro_Examples_TextMeshProFloatingText__DisplayTextMeshProFloatingText_d__15__System_IDisposable_Dispose (TMPro_Examples_TextMeshProFloatingText__DisplayTextMeshProFloatingText_d__15_o* __this, const MethodInfo* method); */

/* TMPro.Examples.TextMeshProFloatingText.<DisplayTextMeshProFloatingText>d__15$$System.IDisposable.Dispose
   void 
   TMPro_Examples_TextMeshProFloatingText__DisplayTextMeshProFloatingText_d__15__System_IDisposable_Dispose
   (TMPro_Examples_TextMeshProFloatingText__DisplayTextMeshProFloatingText_d__15_o* __this, const
   MethodInfo* method); */

void native_TMPro_Examples_TextMeshProFloatingText__DisplayTextMeshProFloatingText_d__15__System_IDisposable_Dispose_54ee9c
               (void)

{
  return;
}



/* TMPro.Examples.TextMeshProFloatingText.<DisplayTextMeshProFloatingText>d__15$$MoveNext @ 0x54eea0
 * bool TMPro_Examples_TextMeshProFloatingText__DisplayTextMeshProFloatingText_d__15__MoveNext (TMPro_Examples_TextMeshProFloatingText__DisplayTextMeshProFloatingText_d__15_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TMPro.Examples.TextMeshProFloatingText.<DisplayTextMeshProFloatingText>d__15$$MoveNext
   bool TMPro_Examples_TextMeshProFloatingText__DisplayTextMeshProFloatingText_d__15__MoveNext
   (TMPro_Examples_TextMeshProFloatingText__DisplayTextMeshProFloatingText_d__15_o* __this, const
   MethodInfo* method); */

undefined8
native_TMPro_Examples_TextMeshProFloatingText__DisplayTextMeshProFloatingText_d__15__MoveNext_54eea0
          (undefined1 param_1 [16],undefined1 param_2 [16],undefined4 param_3,long param_4)

{
  int iVar1;
  uint uVar2;
  long *plVar3;
  ulong uVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  undefined4 uVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  double dVar12;
  double dVar13;
  float fVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  float fVar17;
  undefined4 uStack_28;
  int iStack_24;
  
  if ((bRam000000000133e9e6 & 1) == 0) {
    native_sub_43273c(&TMPro_Examples_TextMeshProFloatingText_TypeInfo_12d61c0);
    bRam000000000133e9e6 = 1;
  }
  iStack_24 = 0;
  iVar1 = *(int *)(param_4 + 0x10);
  lVar6 = *(long *)(param_4 + 0x20);
  if (iVar1 == 2) {
    *(undefined4 *)(param_4 + 0x10) = 0xffffffff;
    if ((lVar6 != 0) && (*(long *)(lVar6 + 0x40) != 0)) {
      native_UnityEngine_Transform__set_position_77174c
                (*(undefined4 *)(param_4 + 0x34),*(undefined4 *)(param_4 + 0x38),
                 *(undefined4 *)(param_4 + 0x3c),*(long *)(lVar6 + 0x40),0);
      uVar5 = native_TMPro_Examples_TextMeshProFloatingText__DisplayTextMeshProFloatingText_6e1d70
                        (lVar6,0);
      native_UnityEngine_MonoBehaviour__StartCoroutine_8e9174(lVar6,uVar5,0);
      return 0;
    }
    goto LAB_0054f2fc;
  }
  if (iVar1 == 1) {
    *(undefined4 *)(param_4 + 0x10) = 0xffffffff;
  }
  else {
    if (iVar1 != 0) {
      return 0;
    }
    uVar16 = 0x41a00000;
    *(undefined4 *)(param_4 + 0x10) = 0xffffffff;
    *(undefined4 *)(param_4 + 0x28) = 0x40000000;
    uVar8 = native_UnityEngine_Random__Range_76305c(0x40a00000,0);
    *(undefined4 *)(param_4 + 0x2c) = uVar8;
    *(undefined4 *)(param_4 + 0x30) = uVar8;
    if ((lVar6 == 0) || (*(long *)(lVar6 + 0x40) == 0)) goto LAB_0054f2fc;
    uVar8 = native_UnityEngine_Transform__get_position_77169c(*(long *)(lVar6 + 0x40),0);
    *(undefined4 *)(param_4 + 0x34) = uVar8;
    *(undefined4 *)(param_4 + 0x38) = uVar16;
    *(undefined4 *)(param_4 + 0x3c) = param_3;
    plVar3 = *(long **)(lVar6 + 0x28);
    if (plVar3 == (long *)0x0) goto LAB_0054f2fc;
    (**(code **)(*plVar3 + 0x298))(plVar3,*(undefined8 *)(*plVar3 + 0x2a0));
    uVar8 = native_UnityEngine_Color32__op_Implicit_8d9fb4(0);
    *(undefined4 *)(param_4 + 0x40) = uVar8;
    *(undefined4 *)(param_4 + 0x44) = 0x437f0000;
    *(float *)(param_4 + 0x48) = (3.0 / *(float *)(param_4 + 0x2c)) * *(float *)(param_4 + 0x28);
  }
  iStack_24 = 0;
  fVar14 = *(float *)(param_4 + 0x30);
  if (fVar14 <= 0.0) {
    if (((*(byte *)(_TMPro_Examples_TextMeshProFloatingText_TypeInfo_12d61c0 + 0x133) >> 2 & 1) != 0
        ) && (*(int *)(_TMPro_Examples_TextMeshProFloatingText_TypeInfo_12d61c0 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    lVar6 = *(long *)(*(long *)(_TMPro_Examples_TextMeshProFloatingText_TypeInfo_12d61c0 + 0xb8) + 8
                     );
    uVar2 = native_UnityEngine_Random__Range_7630a8(0,0x13,0);
    if (lVar6 != 0) {
      if (uVar2 < *(uint *)(lVar6 + 0x18)) {
        *(undefined8 *)(param_4 + 0x18) = *(undefined8 *)(lVar6 + (long)(int)uVar2 * 8 + 0x20);
        native_sub_4326e0((undefined8 *)(param_4 + 0x18));
        *(undefined4 *)(param_4 + 0x10) = 2;
        return 1;
      }
      uVar5 = native_sub_43283c();
                    /* WARNING: Subroutine does not return */
      native_sub_4327dc(uVar5,0);
    }
  }
  else {
    fVar9 = (float)native_UnityEngine_Time__get_deltaTime_77082c(0);
    fVar14 = fVar14 - (fVar9 / *(float *)(param_4 + 0x28)) * *(float *)(param_4 + 0x2c);
    *(float *)(param_4 + 0x30) = fVar14;
    if (fVar14 <= 3.0) {
      fVar9 = *(float *)(param_4 + 0x44);
      fVar14 = (float)native_UnityEngine_Time__get_deltaTime_77082c(0);
      uVar8 = native_UnityEngine_Mathf__Clamp_8e51ec
                        (fVar9 - (fVar14 / *(float *)(param_4 + 0x48)) * 255.0,0,0);
      fVar14 = *(float *)(param_4 + 0x30);
      *(undefined4 *)(param_4 + 0x44) = uVar8;
    }
    dVar13 = (double)fVar14;
    dVar12 = -dVar13;
    if (fVar14 != INFINITY) {
      dVar12 = dVar13;
    }
    iStack_24 = (int)dVar12;
    if (lVar6 == 0) goto LAB_0054f2fc;
    plVar3 = *(long **)(lVar6 + 0x28);
    uVar5 = native_System_Int32__ToString_83c60c(&iStack_24,0);
    fVar9 = SUB84(dVar13,0);
    if (plVar3 == (long *)0x0) goto LAB_0054f2fc;
    (**(code **)(*plVar3 + 0x558))(plVar3,uVar5,*(undefined8 *)(*plVar3 + 0x560));
    plVar3 = *(long **)(lVar6 + 0x28);
    uStack_28 = 0;
    native_UnityEngine_Color32___ctor_8d9fa0
              (&uStack_28,*(undefined1 *)(param_4 + 0x40),*(undefined1 *)(param_4 + 0x41),
               *(undefined1 *)(param_4 + 0x42),(int)*(float *)(param_4 + 0x44),0);
    native_UnityEngine_Color32__op_Implicit_8da288(uStack_28,0);
    if (plVar3 == (long *)0x0) goto LAB_0054f2fc;
    (**(code **)(*plVar3 + 0x2a8))(plVar3,*(undefined8 *)(*plVar3 + 0x2b0));
    lVar7 = *(long *)(lVar6 + 0x40);
    if (lVar7 == 0) goto LAB_0054f2fc;
    fVar10 = (float)native_UnityEngine_Transform__get_position_77169c(lVar7,0);
    fVar17 = *(float *)(param_4 + 0x2c);
    fVar11 = (float)native_UnityEngine_Time__get_deltaTime_77082c(0);
    native_UnityEngine_Transform__set_position_77174c
              (fVar10 + 0.0,fVar14 + fVar17 * fVar11,fVar9 + 0.0,lVar7,0);
    if (*(long *)(lVar6 + 0x48) == 0) goto LAB_0054f2fc;
    uVar15 = *(undefined4 *)(lVar6 + 0x50);
    uVar16 = *(undefined4 *)(lVar6 + 0x54);
    fVar14 = *(float *)(lVar6 + 0x58);
    uVar8 = native_UnityEngine_Transform__get_position_77169c(*(long *)(lVar6 + 0x48),0);
    uVar4 = native_TMPro_TMPro_ExtensionMethods__Compare_6ae670(uVar15,1000,0);
    if ((uVar4 & 1) != 0) {
      if (*(long *)(lVar6 + 0x48) == 0) goto LAB_0054f2fc;
      uVar15 = *(undefined4 *)(lVar6 + 0x5c);
      uVar16 = *(undefined4 *)(lVar6 + 0x60);
      fVar14 = *(float *)(lVar6 + 100);
      uVar8 = *(undefined4 *)(lVar6 + 0x68);
      native_UnityEngine_Transform__get_rotation_771a30(*(long *)(lVar6 + 0x48),0);
      uVar4 = native_TMPro_TMPro_ExtensionMethods__Compare_6ae730(uVar15,1000,0);
      if ((uVar4 & 1) != 0) goto LAB_0054f2a4;
    }
    if (*(long *)(lVar6 + 0x48) != 0) {
      uVar15 = native_UnityEngine_Transform__get_position_77169c(*(long *)(lVar6 + 0x48),0);
      *(undefined4 *)(lVar6 + 0x50) = uVar15;
      *(undefined4 *)(lVar6 + 0x54) = uVar16;
      *(float *)(lVar6 + 0x58) = fVar14;
      if (*(long *)(lVar6 + 0x48) != 0) {
        uVar15 = native_UnityEngine_Transform__get_rotation_771a30(*(long *)(lVar6 + 0x48),0);
        *(undefined4 *)(lVar6 + 0x5c) = uVar15;
        *(undefined4 *)(lVar6 + 0x60) = uVar16;
        *(float *)(lVar6 + 100) = fVar14;
        *(undefined4 *)(lVar6 + 0x68) = uVar8;
        if (*(long *)(lVar6 + 0x40) != 0) {
          native_UnityEngine_Transform__set_rotation_771b8c(*(long *)(lVar6 + 0x40),0);
          if (*(long *)(lVar6 + 0x38) != 0) {
            fVar9 = (float)native_UnityEngine_Transform__get_position_77169c
                                     (*(long *)(lVar6 + 0x38),0);
            if (*(long *)(lVar6 + 0x38) != 0) {
              native_UnityEngine_Transform__set_forward_771b30
                        (fVar9 - *(float *)(lVar6 + 0x50),0,fVar14 - *(float *)(lVar6 + 0x58),
                         *(long *)(lVar6 + 0x38),0);
LAB_0054f2a4:
              if (((*(byte *)(_TMPro_Examples_TextMeshProFloatingText_TypeInfo_12d61c0 + 0x133) >> 2
                   & 1) != 0) &&
                 (*(int *)(_TMPro_Examples_TextMeshProFloatingText_TypeInfo_12d61c0 + 0xe0) == 0)) {
                native_sub_4327ec();
              }
              *(undefined8 *)(param_4 + 0x18) =
                   **(undefined8 **)
                     (_TMPro_Examples_TextMeshProFloatingText_TypeInfo_12d61c0 + 0xb8);
              native_sub_4326e0((undefined8 *)(param_4 + 0x18));
              *(undefined4 *)(param_4 + 0x10) = 1;
              return 1;
            }
          }
        }
      }
    }
  }
LAB_0054f2fc:
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* TMPro.Examples.TextMeshProFloatingText.<DisplayTextMeshProFloatingText>d__15$$System.Collections.Generic.IEnumerator<System.Object>.get_Current @ 0x54f30c
 * Il2CppObject* TMPro_Examples_TextMeshProFloatingText__DisplayTextMeshProFloatingText_d__15__System_Collections_Generic_IEnumerator_System_Object__get_Current (TMPro_Examples_TextMeshProFloatingText__DisplayTextMeshProFloatingText_d__15_o* __this, const MethodInfo* method); */

/* TMPro.Examples.TextMeshProFloatingText.<DisplayTextMeshProFloatingText>d__15$$System.Collections.Generic.IEnumerator<System.Object>.get_Current
   Il2CppObject*
   TMPro_Examples_TextMeshProFloatingText__DisplayTextMeshProFloatingText_d__15__System_Collections_Generic_IEnumerator_System_Object__get_Current
   (TMPro_Examples_TextMeshProFloatingText__DisplayTextMeshProFloatingText_d__15_o* __this, const
   MethodInfo* method); */

undefined8
native_TMPro_Examples_TextMeshProFloatingText__DisplayTextMeshProFloatingText_d__15__System_Collections_Generic_IEnumerator_System_Object__get_Current_54f30c
          (long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* TMPro.Examples.TextMeshProFloatingText.<DisplayTextMeshProFloatingText>d__15$$System.Collections.IEnumerator.Reset @ 0x54f314
 * void TMPro_Examples_TextMeshProFloatingText__DisplayTextMeshProFloatingText_d__15__System_Collections_IEnumerator_Reset (TMPro_Examples_TextMeshProFloatingText__DisplayTextMeshProFloatingText_d__15_o* __this, const MethodInfo* method); */

/* TMPro.Examples.TextMeshProFloatingText.<DisplayTextMeshProFloatingText>d__15$$System.Collections.IEnumerator.Reset
   void 
   TMPro_Examples_TextMeshProFloatingText__DisplayTextMeshProFloatingText_d__15__System_Collections_IEnumerator_Reset
   (TMPro_Examples_TextMeshProFloatingText__DisplayTextMeshProFloatingText_d__15_o* __this, const
   MethodInfo* method); */

void native_TMPro_Examples_TextMeshProFloatingText__DisplayTextMeshProFloatingText_d__15__System_Collections_IEnumerator_Reset_54f314
               (void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  native_sub_432740(&System_NotSupportedException_TypeInfo_12d5468);
  uVar1 = native_sub_432808();
  native_System_NotSupportedException___ctor_ad264c(uVar1,0);
  uVar2 = native_sub_432740(&
                            Method_TMPro_Examples_TextMeshProFloatingText__DisplayTextMeshProFloatingText_d__15_System_Collections_IEnumerator_Reset___12ea040
                           );
                    /* WARNING: Subroutine does not return */
  native_sub_4327dc(uVar1,uVar2);
}



/* TMPro.Examples.TextMeshProFloatingText.<DisplayTextMeshProFloatingText>d__15$$System.Collections.IEnumerator.get_Current @ 0x54f354
 * Il2CppObject* TMPro_Examples_TextMeshProFloatingText__DisplayTextMeshProFloatingText_d__15__System_Collections_IEnumerator_get_Current (TMPro_Examples_TextMeshProFloatingText__DisplayTextMeshProFloatingText_d__15_o* __this, const MethodInfo* method); */

/* TMPro.Examples.TextMeshProFloatingText.<DisplayTextMeshProFloatingText>d__15$$System.Collections.IEnumerator.get_Current
   Il2CppObject*
   TMPro_Examples_TextMeshProFloatingText__DisplayTextMeshProFloatingText_d__15__System_Collections_IEnumerator_get_Current
   (TMPro_Examples_TextMeshProFloatingText__DisplayTextMeshProFloatingText_d__15_o* __this, const
   MethodInfo* method); */

undefined8
native_TMPro_Examples_TextMeshProFloatingText__DisplayTextMeshProFloatingText_d__15__System_Collections_IEnumerator_get_Current_54f354
          (long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}


