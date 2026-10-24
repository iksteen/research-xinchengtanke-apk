/* ARM64 IL2CPP native pseudocode from Ghidra.
 * Recovered implementation, not original C# source.
 * Function boundaries follow the IL2CPP method address table. */


/* TMPro.Examples.WarpTextExample.<WarpText>d__8$$.ctor @ 0x55f9e8
 * void TMPro_Examples_WarpTextExample__WarpText_d__8___ctor (TMPro_Examples_WarpTextExample__WarpText_d__8_o* __this, int32_t __1__state, const MethodInfo* method); */

/* TMPro.Examples.WarpTextExample.<WarpText>d__8$$.ctor
   void TMPro_Examples_WarpTextExample__WarpText_d__8___ctor
   (TMPro_Examples_WarpTextExample__WarpText_d__8_o* __this, int32_t __1__state, const MethodInfo*
   method); */

void native_TMPro_Examples_WarpTextExample__WarpText_d__8___ctor_55f9e8
               (long param_1,undefined4 param_2)

{
  native_System_Object___ctor_ad2798(param_1,0);
  *(undefined4 *)(param_1 + 0x10) = param_2;
  return;
}



/* TMPro.Examples.WarpTextExample.<WarpText>d__8$$System.IDisposable.Dispose @ 0x55fa14
 * void TMPro_Examples_WarpTextExample__WarpText_d__8__System_IDisposable_Dispose (TMPro_Examples_WarpTextExample__WarpText_d__8_o* __this, const MethodInfo* method); */

/* TMPro.Examples.WarpTextExample.<WarpText>d__8$$System.IDisposable.Dispose
   void TMPro_Examples_WarpTextExample__WarpText_d__8__System_IDisposable_Dispose
   (TMPro_Examples_WarpTextExample__WarpText_d__8_o* __this, const MethodInfo* method); */

void native_TMPro_Examples_WarpTextExample__WarpText_d__8__System_IDisposable_Dispose_55fa14(void)

{
  return;
}



/* TMPro.Examples.WarpTextExample.<WarpText>d__8$$MoveNext @ 0x55fa18
 * bool TMPro_Examples_WarpTextExample__WarpText_d__8__MoveNext (TMPro_Examples_WarpTextExample__WarpText_d__8_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TMPro.Examples.WarpTextExample.<WarpText>d__8$$MoveNext
   bool TMPro_Examples_WarpTextExample__WarpText_d__8__MoveNext
   (TMPro_Examples_WarpTextExample__WarpText_d__8_o* __this, const MethodInfo* method); */

undefined8 native_TMPro_Examples_WarpTextExample__WarpText_d__8__MoveNext_55fa18(long param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  float *pfVar4;
  int iVar5;
  uint uVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  long *plVar10;
  long lVar11;
  float *pfVar12;
  long lVar13;
  float *pfVar14;
  ulong uVar15;
  float *pfVar16;
  long lVar17;
  long lVar18;
  float *pfVar19;
  undefined8 *puVar20;
  long lVar21;
  float *pfVar22;
  long lVar23;
  long lVar24;
  float *pfVar25;
  float *pfVar26;
  float fVar27;
  float fVar28;
  float extraout_s0;
  float fVar29;
  undefined4 uVar30;
  float extraout_s0_00;
  undefined8 uVar31;
  float fVar32;
  undefined4 uVar33;
  float fVar34;
  float fVar35;
  ulong uVar36;
  float fVar37;
  ulong uVar38;
  float fVar39;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined4 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  
  lVar7 = param_1;
  if ((bRam000000000133ea14 & 1) == 0) {
    lVar7 = native_sub_43273c(&UnityEngine_WaitForSeconds_TypeInfo_12d6740);
    bRam000000000133ea14 = 1;
  }
  uStack_110 = 0;
  uStack_108 = 0;
  uStack_100 = 0;
  uStack_118 = 0;
  uStack_c8 = 0;
  uStack_d0 = 0;
  uStack_b8 = 0;
  uStack_c0 = 0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  uStack_d8 = 0;
  uStack_e0 = 0;
  uStack_120 = 0;
  lVar17 = *(long *)(param_1 + 0x20);
  if (*(int *)(param_1 + 0x10) - 1U < 2) {
    *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
    if (lVar17 == 0) goto LAB_005601f8;
  }
  else {
    lVar7 = 0;
    if (*(int *)(param_1 + 0x10) != 0) {
      return 0;
    }
    *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
    if (lVar17 == 0) goto LAB_005601f8;
    lVar7 = 0;
    if (*(long *)(lVar17 + 0x20) == 0) goto LAB_005601f8;
    native_UnityEngine_AnimationCurve__set_preWrapMode_8d5d54(*(long *)(lVar17 + 0x20),1,0);
    lVar7 = 0;
    if (*(long *)(lVar17 + 0x20) == 0) goto LAB_005601f8;
    native_UnityEngine_AnimationCurve__set_postWrapMode_8d5da4(*(long *)(lVar17 + 0x20),1,0);
    lVar7 = 0;
    if (*(long *)(lVar17 + 0x18) == 0) goto LAB_005601f8;
    native_TMPro_TMP_Text__set_havePropertiesChanged_4b82dc(*(long *)(lVar17 + 0x18),1,0);
    fVar27 = *(float *)(lVar17 + 0x30) * 10.0;
    *(float *)(lVar17 + 0x30) = fVar27;
    *(float *)(param_1 + 0x28) = fVar27;
    uVar9 = native_TMPro_Examples_WarpTextExample__CopyAnimationCurve_94f37c
                      (lVar17,*(undefined8 *)(lVar17 + 0x20),0);
    *(undefined8 *)(param_1 + 0x30) = uVar9;
    native_sub_4326e0(param_1 + 0x30);
  }
  lVar8 = *(long *)(lVar17 + 0x18);
  do {
    lVar7 = 0;
    if (lVar8 == 0) goto LAB_005601f8;
    if ((*(char *)(lVar8 + 0x368) == '\0') &&
       (*(float *)(param_1 + 0x28) == *(float *)(lVar17 + 0x30))) {
      lVar8 = *(long *)(param_1 + 0x30);
      lVar7 = 0;
      if (lVar8 == 0) goto LAB_005601f8;
      lVar8 = native_UnityEngine_AnimationCurve__get_keys_8d5c34(lVar8,0);
      lVar7 = 0;
      if (lVar8 == 0) goto LAB_005601f8;
      if (*(uint *)(lVar8 + 0x18) < 2) goto LAB_005601ec;
      fVar27 = (float)native_UnityEngine_Keyframe__get_value_8dfc6c(lVar8 + 0x3c,0);
      lVar7 = 0;
      if (*(long *)(lVar17 + 0x20) == 0) goto LAB_005601f8;
      lVar8 = native_UnityEngine_AnimationCurve__get_keys_8d5c34(*(long *)(lVar17 + 0x20),0);
      lVar7 = 0;
      if (lVar8 == 0) goto LAB_005601f8;
      if (*(uint *)(lVar8 + 0x18) < 2) goto LAB_005601ec;
      fVar28 = (float)native_UnityEngine_Keyframe__get_value_8dfc6c(lVar8 + 0x3c,0);
      if (fVar27 == fVar28) {
        *(undefined8 *)(param_1 + 0x18) = 0;
        native_sub_4326e0((undefined8 *)(param_1 + 0x18),0);
        uVar30 = 1;
        goto LAB_0056019c;
      }
    }
    *(undefined4 *)(param_1 + 0x28) = *(undefined4 *)(lVar17 + 0x30);
    uVar9 = native_TMPro_Examples_WarpTextExample__CopyAnimationCurve_94f37c
                      (lVar17,*(undefined8 *)(lVar17 + 0x20),0);
    *(undefined8 *)(param_1 + 0x30) = uVar9;
    native_sub_4326e0((long *)(param_1 + 0x30),uVar9);
    plVar10 = *(long **)(lVar17 + 0x18);
    lVar7 = 0;
    if (plVar10 == (long *)0x0) goto LAB_005601f8;
    (**(code **)(*plVar10 + 0x7d8))(plVar10,0,0,*(undefined8 *)(*plVar10 + 0x7e0));
    lVar7 = *(long *)(lVar17 + 0x18);
    if ((lVar7 == 0) || (lVar23 = *(long *)(lVar7 + 0x360), lVar23 == 0)) goto LAB_005601f8;
    iVar5 = *(int *)(lVar23 + 0x18);
    lVar8 = lVar7;
  } while (iVar5 == 0);
  native_TMPro_TMP_Text__get_bounds_4bc0f8(&uStack_160,lVar7,0);
  uStack_100 = uStack_150;
  uStack_108 = uStack_158;
  uStack_110 = uStack_160;
  fVar27 = (float)native_UnityEngine_Bounds__get_min_8d7f18(&uStack_110,0);
  lVar7 = 0;
  if (*(long *)(lVar17 + 0x18) != 0) {
    native_TMPro_TMP_Text__get_bounds_4bc0f8(&uStack_160,*(long *)(lVar17 + 0x18),0);
    uStack_100 = uStack_150;
    uStack_108 = uStack_158;
    uStack_110 = uStack_160;
    lVar7 = native_UnityEngine_Bounds__get_max_8d7f88(&uStack_110,0);
    if (0 < iVar5) {
      uVar15 = 0;
      lVar8 = 0x194;
      do {
        lVar11 = *(long *)(lVar23 + 0x38);
        if (lVar11 == 0) goto LAB_005601f8;
        if (*(uint *)(lVar11 + 0x18) <= uVar15) goto LAB_005601ec;
        if (*(char *)(lVar11 + lVar8) != '\0') {
          lVar13 = *(long *)(lVar23 + 0x60);
          if (lVar13 == 0) goto LAB_005601f8;
          uVar6 = *(uint *)(lVar11 + lVar8 + -0x13c);
          if (*(uint *)(lVar13 + 0x18) <= uVar6) {
LAB_005601ec:
            uVar9 = native_sub_43283c();
                    /* WARNING: Subroutine does not return */
            native_sub_4327dc(uVar9,0);
          }
          lVar13 = *(long *)(lVar13 + (long)(int)uVar6 * 0x50 + 0x30);
          if (lVar13 == 0) goto LAB_005601f8;
          uVar6 = *(uint *)(lVar11 + lVar8 + -0x128);
          if (*(uint *)(lVar13 + 0x18) <= uVar6) goto LAB_005601ec;
          pfVar16 = (float *)(lVar13 + (long)(int)uVar6 * 0xc + 0x20);
          uVar1 = uVar6 + 2;
          if (*(uint *)(lVar13 + 0x18) <= uVar1) goto LAB_005601ec;
          pfVar14 = (float *)(lVar13 + 0x20 + (long)(int)uVar1 * 0xc);
          fVar28 = *pfVar14;
          lVar21 = lVar13 + 0x20 + (long)(int)uVar6 * 0xc;
          fVar39 = *(float *)(lVar11 + lVar8 + -0x48);
          pfVar22 = (float *)(lVar21 + 4);
          fVar34 = *pfVar22;
          fVar37 = (*pfVar16 + fVar28) * 0.5;
          *pfVar16 = *pfVar16 - fVar37;
          *pfVar22 = fVar34 - fVar39;
          uVar2 = uVar6 + 1;
          if (*(uint *)(lVar13 + 0x18) <= uVar2) goto LAB_005601ec;
          lVar11 = lVar13 + (long)(int)uVar2 * 0xc;
          puVar20 = (undefined8 *)(lVar11 + 0x20);
          pfVar26 = (float *)(lVar11 + 0x28);
          *puVar20 = CONCAT44((float)((ulong)*puVar20 >> 0x20) - fVar39,(float)*puVar20 - fVar37);
          if (*(uint *)(lVar13 + 0x18) <= uVar1) goto LAB_005601ec;
          lVar18 = lVar13 + (long)(int)uVar1 * 0xc;
          pfVar19 = (float *)(lVar18 + 0x24);
          fVar34 = *pfVar19;
          *pfVar14 = fVar28 - fVar37;
          *pfVar19 = fVar34 - fVar39;
          uVar3 = uVar6 + 3;
          if (*(uint *)(lVar13 + 0x18) <= uVar3) goto LAB_005601ec;
          lVar24 = lVar13 + (long)(int)uVar3 * 0xc;
          pfVar25 = (float *)(lVar24 + 0x20);
          pfVar12 = (float *)(lVar24 + 0x28);
          *(ulong *)pfVar25 =
               CONCAT44((float)((ulong)*(undefined8 *)pfVar25 >> 0x20) - fVar39,
                        (float)*(undefined8 *)pfVar25 - fVar37);
          lVar7 = 0;
          if (*(long *)(lVar17 + 0x20) == 0) goto LAB_005601f8;
          fVar34 = (fVar37 - fVar27) / (extraout_s0 - fVar27);
          fVar28 = (float)native_UnityEngine_AnimationCurve__Evaluate_8d5be4
                                    (fVar34,*(long *)(lVar17 + 0x20),0);
          lVar7 = 0;
          if (*(long *)(lVar17 + 0x20) == 0) goto LAB_005601f8;
          fVar34 = fVar34 + 0.0001;
          fVar28 = fVar28 * *(float *)(lVar17 + 0x30);
          fVar29 = (float)native_UnityEngine_AnimationCurve__Evaluate_8d5be4
                                    (fVar34,*(long *)(lVar17 + 0x20),0);
          fVar32 = *(float *)(lVar17 + 0x30);
          fVar35 = (fVar27 + (extraout_s0 - fVar27) * fVar34) - fVar37;
          uStack_120 = CONCAT44(fVar29 * fVar32 - fVar28,fVar35);
          uStack_118 = 0;
          fVar34 = (float)native_UnityEngine_Vector3__get_normalized_7631d0(&uStack_120,0);
          fVar29 = (float)func_0x002c97c0(fVar35 * 0.0 + fVar34 + fVar32 * 0.0);
          uVar38 = uStack_120 & 0xffffffff;
          fVar32 = 0.0;
          native_UnityEngine_Vector3__Cross_776458
                    (0x3f800000,0,0,uVar38,uStack_120._4_4_,uStack_118,0);
          uVar9 = 0;
          fVar34 = fVar29 * 57.29578;
          if (fVar32 <= 0.0) {
            fVar34 = 360.0 - fVar29 * 57.29578;
          }
          uVar36 = (ulong)(uint)fVar34;
          uVar31 = native_UnityEngine_Quaternion__Euler_762bc4(0,0);
          native_UnityEngine_Vector3__get_one_776a20(0);
          native_UnityEngine_Matrix4x4__TRS_8e56d4
                    (&uStack_160,0,fVar28,0,uVar31,uVar9,uVar36,uVar38,0);
          uStack_c8 = uStack_138;
          uStack_d0 = uStack_140;
          uStack_b8 = uStack_128;
          uStack_c0 = uStack_130;
          uStack_e8 = uStack_158;
          uStack_f0 = uStack_160;
          uStack_d8 = uStack_148;
          uStack_e0 = uStack_150;
          if (*(uint *)(lVar13 + 0x18) <= uVar6) goto LAB_005601ec;
          pfVar4 = (float *)(lVar21 + 8);
          fVar34 = *pfVar22;
          fVar29 = *pfVar4;
          fVar28 = (float)native_UnityEngine_Matrix4x4__MultiplyPoint3x4_8e5cec
                                    (*pfVar16,&uStack_f0,0);
          if (*(uint *)(lVar13 + 0x18) <= uVar6) goto LAB_005601ec;
          *pfVar16 = fVar28;
          *pfVar22 = fVar34;
          *pfVar4 = fVar29;
          if (*(uint *)(lVar13 + 0x18) <= uVar2) goto LAB_005601ec;
          uVar33 = *(undefined4 *)(lVar11 + 0x24);
          fVar28 = *pfVar26;
          uVar30 = native_UnityEngine_Matrix4x4__MultiplyPoint3x4_8e5cec
                             (*(undefined4 *)puVar20,&uStack_f0,0);
          if (*(uint *)(lVar13 + 0x18) <= uVar2) goto LAB_005601ec;
          *(undefined4 *)puVar20 = uVar30;
          *(undefined4 *)(lVar11 + 0x24) = uVar33;
          *pfVar26 = fVar28;
          if (*(uint *)(lVar13 + 0x18) <= uVar1) goto LAB_005601ec;
          pfVar22 = (float *)(lVar18 + 0x28);
          fVar34 = *pfVar19;
          fVar29 = *pfVar22;
          fVar28 = (float)native_UnityEngine_Matrix4x4__MultiplyPoint3x4_8e5cec
                                    (*pfVar14,&uStack_f0,0);
          if (*(uint *)(lVar13 + 0x18) <= uVar1) goto LAB_005601ec;
          *pfVar14 = fVar28;
          *pfVar19 = fVar34;
          *pfVar22 = fVar29;
          if (*(uint *)(lVar13 + 0x18) <= uVar3) goto LAB_005601ec;
          pfVar19 = (float *)(lVar24 + 0x24);
          fVar28 = *pfVar19;
          fVar34 = *pfVar12;
          lVar7 = native_UnityEngine_Matrix4x4__MultiplyPoint3x4_8e5cec(*pfVar25,&uStack_f0,0);
          if (*(uint *)(lVar13 + 0x18) <= uVar3) goto LAB_005601ec;
          *pfVar25 = extraout_s0_00;
          *pfVar19 = fVar28;
          *pfVar12 = fVar34;
          if (*(uint *)(lVar13 + 0x18) <= uVar6) goto LAB_005601ec;
          fVar29 = *pfVar4;
          *(ulong *)pfVar16 =
               CONCAT44(fVar39 + (float)((ulong)*(undefined8 *)pfVar16 >> 0x20),
                        fVar37 + (float)*(undefined8 *)pfVar16);
          *pfVar4 = fVar29 + 0.0;
          if (*(uint *)(lVar13 + 0x18) <= uVar2) goto LAB_005601ec;
          *puVar20 = CONCAT44(fVar39 + (float)((ulong)*puVar20 >> 0x20),fVar37 + (float)*puVar20);
          *pfVar26 = *pfVar26 + 0.0;
          if (*(uint *)(lVar13 + 0x18) <= uVar1) goto LAB_005601ec;
          fVar29 = *pfVar22;
          *(ulong *)pfVar14 =
               CONCAT44(fVar39 + (float)((ulong)*(undefined8 *)pfVar14 >> 0x20),
                        fVar37 + (float)*(undefined8 *)pfVar14);
          *pfVar22 = fVar29 + 0.0;
          if (*(uint *)(lVar13 + 0x18) <= uVar3) goto LAB_005601ec;
          *pfVar25 = fVar37 + extraout_s0_00;
          *pfVar19 = fVar39 + fVar28;
          *pfVar12 = fVar34 + 0.0;
        }
        uVar15 = uVar15 + 1;
        lVar8 = lVar8 + 0x178;
      } while ((long)uVar15 < (long)iVar5);
    }
    plVar10 = *(long **)(lVar17 + 0x18);
    lVar7 = 0;
    if (plVar10 != (long *)0x0) {
      (**(code **)(*plVar10 + 0x808))(plVar10,*(undefined8 *)(*plVar10 + 0x810));
      uVar9 = native_sub_432808(_UnityEngine_WaitForSeconds_TypeInfo_12d6740);
      native_UnityEngine_WaitForSeconds___ctor_7775c8(0x3ccccccd,uVar9,0);
      *(undefined8 *)(param_1 + 0x18) = uVar9;
      native_sub_4326e0((undefined8 *)(param_1 + 0x18),uVar9);
      uVar30 = 2;
LAB_0056019c:
      *(undefined4 *)(param_1 + 0x10) = uVar30;
      return 1;
    }
  }
LAB_005601f8:
                    /* WARNING: Subroutine does not return */
  native_sub_432810(lVar7);
}



/* TMPro.Examples.WarpTextExample.<WarpText>d__8$$System.Collections.Generic.IEnumerator<System.Object>.get_Current @ 0x5601fc
 * Il2CppObject* TMPro_Examples_WarpTextExample__WarpText_d__8__System_Collections_Generic_IEnumerator_System_Object__get_Current (TMPro_Examples_WarpTextExample__WarpText_d__8_o* __this, const MethodInfo* method); */

/* TMPro.Examples.WarpTextExample.<WarpText>d__8$$System.Collections.Generic.IEnumerator<System.Object>.get_Current
   Il2CppObject*
   TMPro_Examples_WarpTextExample__WarpText_d__8__System_Collections_Generic_IEnumerator_System_Object__get_Current
   (TMPro_Examples_WarpTextExample__WarpText_d__8_o* __this, const MethodInfo* method); */

undefined8
native_TMPro_Examples_WarpTextExample__WarpText_d__8__System_Collections_Generic_IEnumerator_System_Object__get_Current_5601fc
          (long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* TMPro.Examples.WarpTextExample.<WarpText>d__8$$System.Collections.IEnumerator.Reset @ 0x560204
 * void TMPro_Examples_WarpTextExample__WarpText_d__8__System_Collections_IEnumerator_Reset (TMPro_Examples_WarpTextExample__WarpText_d__8_o* __this, const MethodInfo* method); */

/* TMPro.Examples.WarpTextExample.<WarpText>d__8$$System.Collections.IEnumerator.Reset
   void TMPro_Examples_WarpTextExample__WarpText_d__8__System_Collections_IEnumerator_Reset
   (TMPro_Examples_WarpTextExample__WarpText_d__8_o* __this, const MethodInfo* method); */

void native_TMPro_Examples_WarpTextExample__WarpText_d__8__System_Collections_IEnumerator_Reset_560204
               (void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  native_sub_432740(&System_NotSupportedException_TypeInfo_12d5468);
  uVar1 = native_sub_432808();
  native_System_NotSupportedException___ctor_ad264c(uVar1,0);
  uVar2 = native_sub_432740(&
                            Method_TMPro_Examples_WarpTextExample__WarpText_d__8_System_Collections_IEnumerator_Reset___12ea1f8
                           );
                    /* WARNING: Subroutine does not return */
  native_sub_4327dc(uVar1,uVar2);
}



/* TMPro.Examples.WarpTextExample.<WarpText>d__8$$System.Collections.IEnumerator.get_Current @ 0x560244
 * Il2CppObject* TMPro_Examples_WarpTextExample__WarpText_d__8__System_Collections_IEnumerator_get_Current (TMPro_Examples_WarpTextExample__WarpText_d__8_o* __this, const MethodInfo* method); */

/* TMPro.Examples.WarpTextExample.<WarpText>d__8$$System.Collections.IEnumerator.get_Current
   Il2CppObject*
   TMPro_Examples_WarpTextExample__WarpText_d__8__System_Collections_IEnumerator_get_Current
   (TMPro_Examples_WarpTextExample__WarpText_d__8_o* __this, const MethodInfo* method); */

undefined8
native_TMPro_Examples_WarpTextExample__WarpText_d__8__System_Collections_IEnumerator_get_Current_560244
          (long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}


