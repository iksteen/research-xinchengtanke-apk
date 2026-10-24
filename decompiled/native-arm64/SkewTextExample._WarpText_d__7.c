/* ARM64 IL2CPP native pseudocode from Ghidra.
 * Recovered implementation, not original C# source.
 * Function boundaries follow the IL2CPP method address table. */


/* TMPro.Examples.SkewTextExample.<WarpText>d__7$$.ctor @ 0x54d264
 * void TMPro_Examples_SkewTextExample__WarpText_d__7___ctor (TMPro_Examples_SkewTextExample__WarpText_d__7_o* __this, int32_t __1__state, const MethodInfo* method); */

/* TMPro.Examples.SkewTextExample.<WarpText>d__7$$.ctor
   void TMPro_Examples_SkewTextExample__WarpText_d__7___ctor
   (TMPro_Examples_SkewTextExample__WarpText_d__7_o* __this, int32_t __1__state, const MethodInfo*
   method); */

void native_TMPro_Examples_SkewTextExample__WarpText_d__7___ctor_54d264
               (long param_1,undefined4 param_2)

{
  native_System_Object___ctor_ad2798(param_1,0);
  *(undefined4 *)(param_1 + 0x10) = param_2;
  return;
}



/* TMPro.Examples.SkewTextExample.<WarpText>d__7$$System.IDisposable.Dispose @ 0x54d290
 * void TMPro_Examples_SkewTextExample__WarpText_d__7__System_IDisposable_Dispose (TMPro_Examples_SkewTextExample__WarpText_d__7_o* __this, const MethodInfo* method); */

/* TMPro.Examples.SkewTextExample.<WarpText>d__7$$System.IDisposable.Dispose
   void TMPro_Examples_SkewTextExample__WarpText_d__7__System_IDisposable_Dispose
   (TMPro_Examples_SkewTextExample__WarpText_d__7_o* __this, const MethodInfo* method); */

void native_TMPro_Examples_SkewTextExample__WarpText_d__7__System_IDisposable_Dispose_54d290(void)

{
  return;
}



/* TMPro.Examples.SkewTextExample.<WarpText>d__7$$MoveNext @ 0x54d294
 * bool TMPro_Examples_SkewTextExample__WarpText_d__7__MoveNext (TMPro_Examples_SkewTextExample__WarpText_d__7_o* __this, const MethodInfo* method); */

/* TMPro.Examples.SkewTextExample.<WarpText>d__7$$MoveNext
   bool TMPro_Examples_SkewTextExample__WarpText_d__7__MoveNext
   (TMPro_Examples_SkewTextExample__WarpText_d__7_o* __this, const MethodInfo* method); */

undefined8 native_TMPro_Examples_SkewTextExample__WarpText_d__7__MoveNext_54d294(long param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  float *pfVar4;
  float *pfVar5;
  float *pfVar6;
  int iVar7;
  uint uVar8;
  long lVar9;
  undefined8 uVar10;
  long *plVar11;
  undefined4 uVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  float *pfVar16;
  ulong uVar17;
  long lVar18;
  float *pfVar19;
  float *pfVar20;
  long lVar21;
  float *pfVar22;
  long lVar23;
  float *pfVar24;
  float *pfVar25;
  float *pfVar26;
  long lVar27;
  long lVar28;
  long lVar29;
  float *pfVar30;
  float fVar31;
  float extraout_s0;
  float fVar32;
  float extraout_s0_00;
  undefined8 uVar33;
  float fVar34;
  float fVar35;
  ulong uVar36;
  float fVar37;
  float fVar38;
  ulong uVar39;
  float fVar40;
  float fVar41;
  float fVar42;
  float fVar43;
  float fVar44;
  float fVar45;
  float fVar46;
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
  iVar7 = *(int *)(param_1 + 0x10);
  lVar27 = *(long *)(param_1 + 0x20);
  if ((iVar7 == 2) || (iVar7 == 1)) {
    *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
    lVar9 = param_1;
  }
  else {
    lVar9 = 0;
    if (iVar7 != 0) {
      return 0;
    }
    *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
    if (lVar27 == 0) goto LAB_0054db20;
    lVar9 = 0;
    if (*(long *)(lVar27 + 0x20) == 0) goto LAB_0054db20;
    native_UnityEngine_AnimationCurve__set_preWrapMode_8d5d54(*(long *)(lVar27 + 0x20),1,0);
    lVar9 = 0;
    if (*(long *)(lVar27 + 0x20) == 0) goto LAB_0054db20;
    native_UnityEngine_AnimationCurve__set_postWrapMode_8d5da4(*(long *)(lVar27 + 0x20),1,0);
    lVar9 = 0;
    if (*(long *)(lVar27 + 0x18) == 0) goto LAB_0054db20;
    native_TMPro_TMP_Text__set_havePropertiesChanged_4b82dc(*(long *)(lVar27 + 0x18),1,0);
    fVar31 = *(float *)(lVar27 + 0x28) * 10.0;
    *(float *)(lVar27 + 0x28) = fVar31;
    *(float *)(param_1 + 0x28) = fVar31;
    *(undefined4 *)(param_1 + 0x2c) = *(undefined4 *)(lVar27 + 0x2c);
    uVar10 = native_TMPro_Examples_SkewTextExample__CopyAnimationCurve_73da70
                       (lVar27,*(undefined8 *)(lVar27 + 0x20),0);
    *(undefined8 *)(param_1 + 0x30) = uVar10;
    lVar9 = native_sub_4326e0(param_1 + 0x30);
  }
  if (lVar27 != 0) {
    lVar18 = *(long *)(lVar27 + 0x18);
    do {
      lVar9 = 0;
      if (lVar18 == 0) goto LAB_0054db20;
      if ((*(char *)(lVar18 + 0x368) == '\0') &&
         (*(float *)(param_1 + 0x28) == *(float *)(lVar27 + 0x28))) {
        lVar18 = *(long *)(param_1 + 0x30);
        lVar9 = 0;
        if (lVar18 == 0) goto LAB_0054db20;
        lVar18 = native_UnityEngine_AnimationCurve__get_keys_8d5c34(lVar18,0);
        lVar9 = 0;
        if (lVar18 == 0) goto LAB_0054db20;
        if (*(uint *)(lVar18 + 0x18) < 2) goto LAB_0054db14;
        fVar31 = (float)native_UnityEngine_Keyframe__get_value_8dfc6c(lVar18 + 0x3c,0);
        lVar9 = 0;
        if (*(long *)(lVar27 + 0x20) == 0) goto LAB_0054db20;
        lVar18 = native_UnityEngine_AnimationCurve__get_keys_8d5c34(*(long *)(lVar27 + 0x20),0);
        lVar9 = 0;
        if (lVar18 == 0) goto LAB_0054db20;
        if (*(uint *)(lVar18 + 0x18) < 2) goto LAB_0054db14;
        fVar32 = (float)native_UnityEngine_Keyframe__get_value_8dfc6c(lVar18 + 0x3c,0);
        if ((fVar31 == fVar32) && (*(float *)(param_1 + 0x2c) == *(float *)(lVar27 + 0x2c))) {
          *(undefined8 *)(param_1 + 0x18) = 0;
          native_sub_4326e0((undefined8 *)(param_1 + 0x18),0);
          uVar12 = 1;
          goto LAB_0054dadc;
        }
      }
      *(undefined4 *)(param_1 + 0x28) = *(undefined4 *)(lVar27 + 0x28);
      uVar10 = native_TMPro_Examples_SkewTextExample__CopyAnimationCurve_73da70
                         (lVar27,*(undefined8 *)(lVar27 + 0x20),0);
      *(undefined8 *)(param_1 + 0x30) = uVar10;
      native_sub_4326e0((long *)(param_1 + 0x30),uVar10);
      *(undefined4 *)(param_1 + 0x2c) = *(undefined4 *)(lVar27 + 0x2c);
      plVar11 = *(long **)(lVar27 + 0x18);
      lVar9 = 0;
      if (plVar11 == (long *)0x0) goto LAB_0054db20;
      (**(code **)(*plVar11 + 0x7d8))(plVar11,0,0,*(undefined8 *)(*plVar11 + 0x7e0));
      lVar9 = *(long *)(lVar27 + 0x18);
      if ((lVar9 == 0) || (lVar28 = *(long *)(lVar9 + 0x360), lVar28 == 0)) goto LAB_0054db20;
      iVar7 = *(int *)(lVar28 + 0x18);
      lVar18 = lVar9;
    } while (iVar7 == 0);
    native_TMPro_TMP_Text__get_bounds_4bc0f8(&uStack_160,lVar9,0);
    uStack_100 = uStack_150;
    uStack_108 = uStack_158;
    uStack_110 = uStack_160;
    fVar31 = (float)native_UnityEngine_Bounds__get_min_8d7f18(&uStack_110,0);
    lVar9 = 0;
    if (*(long *)(lVar27 + 0x18) != 0) {
      native_TMPro_TMP_Text__get_bounds_4bc0f8(&uStack_160,*(long *)(lVar27 + 0x18),0);
      uStack_100 = uStack_150;
      uStack_108 = uStack_158;
      uStack_110 = uStack_160;
      lVar9 = native_UnityEngine_Bounds__get_max_8d7f88(&uStack_110,0);
      if (0 < iVar7) {
        uVar17 = 0;
        lVar18 = 0x194;
        do {
          lVar13 = *(long *)(lVar28 + 0x38);
          if (lVar13 == 0) goto LAB_0054db20;
          if (*(uint *)(lVar13 + 0x18) <= uVar17) goto LAB_0054db14;
          if (*(char *)(lVar13 + lVar18) != '\0') {
            lVar15 = *(long *)(lVar28 + 0x60);
            if (lVar15 == 0) goto LAB_0054db20;
            uVar8 = *(uint *)(lVar13 + lVar18 + -0x13c);
            if (*(uint *)(lVar15 + 0x18) <= uVar8) {
LAB_0054db14:
              uVar10 = native_sub_43283c();
                    /* WARNING: Subroutine does not return */
              native_sub_4327dc(uVar10,0);
            }
            lVar15 = *(long *)(lVar15 + (long)(int)uVar8 * 0x50 + 0x30);
            if (lVar15 == 0) goto LAB_0054db20;
            uVar8 = *(uint *)(lVar13 + lVar18 + -0x128);
            if (*(uint *)(lVar15 + 0x18) <= uVar8) goto LAB_0054db14;
            pfVar19 = (float *)(lVar15 + (long)(int)uVar8 * 0xc + 0x20);
            uVar1 = uVar8 + 2;
            if (*(uint *)(lVar15 + 0x18) <= uVar1) goto LAB_0054db14;
            pfVar16 = (float *)(lVar15 + 0x20 + (long)(int)uVar1 * 0xc);
            fVar35 = *pfVar16;
            lVar23 = lVar15 + 0x20 + (long)(int)uVar8 * 0xc;
            fVar45 = *(float *)(lVar13 + lVar18 + -0x48);
            pfVar24 = (float *)(lVar23 + 4);
            fVar34 = *pfVar24;
            fVar46 = (*pfVar19 + fVar35) * 0.5;
            fVar32 = *pfVar19 - fVar46;
            *pfVar19 = fVar32;
            *pfVar24 = fVar34 - fVar45;
            uVar2 = uVar8 + 1;
            if (*(uint *)(lVar15 + 0x18) <= uVar2) goto LAB_0054db14;
            lVar13 = lVar15 + (long)(int)uVar2 * 0xc;
            pfVar25 = (float *)(lVar13 + 0x20);
            fVar34 = *pfVar25;
            pfVar26 = (float *)(lVar13 + 0x24);
            fVar37 = *pfVar26;
            *pfVar25 = fVar34 - fVar46;
            *pfVar26 = fVar37 - fVar45;
            if (*(uint *)(lVar15 + 0x18) <= uVar1) goto LAB_0054db14;
            lVar21 = lVar15 + (long)(int)uVar1 * 0xc;
            pfVar22 = (float *)(lVar21 + 0x24);
            fVar38 = *pfVar22;
            fVar35 = fVar35 - fVar46;
            *pfVar16 = fVar35;
            uVar3 = uVar8 + 3;
            *pfVar22 = fVar38 - fVar45;
            if (*(uint *)(lVar15 + 0x18) <= uVar3) goto LAB_0054db14;
            lVar29 = lVar15 + (long)(int)uVar3 * 0xc;
            pfVar30 = (float *)(lVar29 + 0x20);
            fVar40 = (float)*(undefined8 *)pfVar30 - fVar46;
            pfVar20 = (float *)(lVar29 + 0x28);
            *(ulong *)pfVar30 =
                 CONCAT44((float)((ulong)*(undefined8 *)pfVar30 >> 0x20) - fVar45,fVar40);
            lVar14 = *(long *)(lVar28 + 0x38);
            if (lVar14 == 0) goto LAB_0054db20;
            if ((*(uint *)(lVar14 + 0x18) <= uVar17) || (*(uint *)(lVar15 + 0x18) <= uVar8))
            goto LAB_0054db14;
            lVar14 = lVar14 + lVar18;
            fVar43 = *(float *)(lVar14 + -0x48);
            fVar44 = *(float *)(lVar14 + -0x68);
            fVar42 = *(float *)(lVar27 + 0x2c) * 0.01;
            fVar41 = fVar42 * (fVar43 - *(float *)(lVar14 + -0x5c));
            *pfVar19 = fVar32 - fVar41;
            if (*(uint *)(lVar15 + 0x18) <= uVar2) goto LAB_0054db14;
            pfVar4 = (float *)(lVar13 + 0x28);
            fVar42 = fVar42 * (fVar44 - fVar43);
            *pfVar25 = fVar42 + (fVar34 - fVar46);
            *pfVar26 = (fVar37 - fVar45) + 0.0;
            *pfVar4 = *pfVar4 + 0.0;
            if (*(uint *)(lVar15 + 0x18) <= uVar1) goto LAB_0054db14;
            pfVar5 = (float *)(lVar21 + 0x28);
            fVar32 = *pfVar5;
            *pfVar16 = fVar42 + fVar35;
            *pfVar22 = (fVar38 - fVar45) + 0.0;
            *pfVar5 = fVar32 + 0.0;
            if (*(uint *)(lVar15 + 0x18) <= uVar3) goto LAB_0054db14;
            *pfVar30 = fVar40 - fVar41;
            lVar9 = 0;
            if (*(long *)(lVar27 + 0x20) == 0) goto LAB_0054db20;
            fVar34 = (fVar46 - fVar31) / (extraout_s0 - fVar31);
            fVar32 = (float)native_UnityEngine_AnimationCurve__Evaluate_8d5be4
                                      (fVar34,*(long *)(lVar27 + 0x20),0);
            lVar9 = 0;
            if (*(long *)(lVar27 + 0x20) == 0) goto LAB_0054db20;
            fVar34 = fVar34 + 0.0001;
            fVar32 = fVar32 * *(float *)(lVar27 + 0x28);
            fVar35 = (float)native_UnityEngine_AnimationCurve__Evaluate_8d5be4
                                      (fVar34,*(long *)(lVar27 + 0x20),0);
            fVar37 = *(float *)(lVar27 + 0x28);
            fVar38 = (fVar31 + (extraout_s0 - fVar31) * fVar34) - fVar46;
            uStack_120 = CONCAT44(fVar35 * fVar37 - fVar32,fVar38);
            uStack_118 = 0;
            fVar34 = (float)native_UnityEngine_Vector3__get_normalized_7631d0(&uStack_120,0);
            fVar35 = (float)func_0x002c97c0(fVar38 * 0.0 + fVar34 + fVar37 * 0.0);
            uVar39 = uStack_120 & 0xffffffff;
            fVar37 = 0.0;
            native_UnityEngine_Vector3__Cross_776458
                      (0x3f800000,0,0,uVar39,uStack_120._4_4_,uStack_118,0);
            uVar10 = 0;
            fVar34 = fVar35 * 57.29578;
            if (fVar37 <= 0.0) {
              fVar34 = 360.0 - fVar35 * 57.29578;
            }
            uVar36 = (ulong)(uint)fVar34;
            uVar33 = native_UnityEngine_Quaternion__Euler_762bc4(0,0);
            native_UnityEngine_Vector3__get_one_776a20(0);
            native_UnityEngine_Matrix4x4__TRS_8e56d4
                      (&uStack_160,0,fVar32,0,uVar33,uVar10,uVar36,uVar39,0);
            uStack_c8 = uStack_138;
            uStack_d0 = uStack_140;
            uStack_b8 = uStack_128;
            uStack_c0 = uStack_130;
            uStack_e8 = uStack_158;
            uStack_f0 = uStack_160;
            uStack_d8 = uStack_148;
            uStack_e0 = uStack_150;
            if (*(uint *)(lVar15 + 0x18) <= uVar8) goto LAB_0054db14;
            pfVar6 = (float *)(lVar23 + 8);
            fVar34 = *pfVar24;
            fVar35 = *pfVar6;
            fVar32 = (float)native_UnityEngine_Matrix4x4__MultiplyPoint3x4_8e5cec
                                      (*pfVar19,&uStack_f0,0);
            if (*(uint *)(lVar15 + 0x18) <= uVar8) goto LAB_0054db14;
            *pfVar19 = fVar32;
            *pfVar24 = fVar34;
            *pfVar6 = fVar35;
            if (*(uint *)(lVar15 + 0x18) <= uVar2) goto LAB_0054db14;
            fVar34 = *pfVar26;
            fVar35 = *pfVar4;
            fVar32 = (float)native_UnityEngine_Matrix4x4__MultiplyPoint3x4_8e5cec
                                      (*pfVar25,&uStack_f0,0);
            if (*(uint *)(lVar15 + 0x18) <= uVar2) goto LAB_0054db14;
            *pfVar25 = fVar32;
            *pfVar26 = fVar34;
            *pfVar4 = fVar35;
            if (*(uint *)(lVar15 + 0x18) <= uVar1) goto LAB_0054db14;
            fVar34 = *pfVar22;
            fVar35 = *pfVar5;
            fVar32 = (float)native_UnityEngine_Matrix4x4__MultiplyPoint3x4_8e5cec
                                      (*pfVar16,&uStack_f0,0);
            if (*(uint *)(lVar15 + 0x18) <= uVar1) goto LAB_0054db14;
            *pfVar16 = fVar32;
            *pfVar22 = fVar34;
            *pfVar5 = fVar35;
            if (*(uint *)(lVar15 + 0x18) <= uVar3) goto LAB_0054db14;
            pfVar24 = (float *)(lVar29 + 0x24);
            fVar32 = *pfVar24;
            fVar34 = *pfVar20;
            lVar9 = native_UnityEngine_Matrix4x4__MultiplyPoint3x4_8e5cec(*pfVar30,&uStack_f0,0);
            if (*(uint *)(lVar15 + 0x18) <= uVar3) goto LAB_0054db14;
            *pfVar30 = extraout_s0_00;
            *pfVar24 = fVar32;
            *pfVar20 = fVar34;
            if (*(uint *)(lVar15 + 0x18) <= uVar8) goto LAB_0054db14;
            fVar35 = *pfVar6;
            *(ulong *)pfVar19 =
                 CONCAT44(fVar45 + (float)((ulong)*(undefined8 *)pfVar19 >> 0x20),
                          fVar46 + (float)*(undefined8 *)pfVar19);
            *pfVar6 = fVar35 + 0.0;
            if (*(uint *)(lVar15 + 0x18) <= uVar2) goto LAB_0054db14;
            *(ulong *)pfVar25 =
                 CONCAT44(fVar45 + (float)((ulong)*(undefined8 *)pfVar25 >> 0x20),
                          fVar46 + (float)*(undefined8 *)pfVar25);
            *pfVar4 = *pfVar4 + 0.0;
            if (*(uint *)(lVar15 + 0x18) <= uVar1) goto LAB_0054db14;
            fVar35 = *pfVar5;
            *(ulong *)pfVar16 =
                 CONCAT44(fVar45 + (float)((ulong)*(undefined8 *)pfVar16 >> 0x20),
                          fVar46 + (float)*(undefined8 *)pfVar16);
            *pfVar5 = fVar35 + 0.0;
            if (*(uint *)(lVar15 + 0x18) <= uVar3) goto LAB_0054db14;
            *pfVar30 = fVar46 + extraout_s0_00;
            *pfVar24 = fVar45 + fVar32;
            *pfVar20 = fVar34 + 0.0;
          }
          uVar17 = uVar17 + 1;
          lVar18 = lVar18 + 0x178;
        } while ((long)uVar17 < (long)iVar7);
      }
      plVar11 = *(long **)(lVar27 + 0x18);
      lVar9 = 0;
      if (plVar11 != (long *)0x0) {
        (**(code **)(*plVar11 + 0x808))(plVar11,*(undefined8 *)(*plVar11 + 0x810));
        *(undefined8 *)(param_1 + 0x18) = 0;
        native_sub_4326e0((undefined8 *)(param_1 + 0x18),0);
        uVar12 = 2;
LAB_0054dadc:
        *(undefined4 *)(param_1 + 0x10) = uVar12;
        return 1;
      }
    }
  }
LAB_0054db20:
                    /* WARNING: Subroutine does not return */
  native_sub_432810(lVar9);
}



/* TMPro.Examples.SkewTextExample.<WarpText>d__7$$System.Collections.Generic.IEnumerator<System.Object>.get_Current @ 0x54db24
 * Il2CppObject* TMPro_Examples_SkewTextExample__WarpText_d__7__System_Collections_Generic_IEnumerator_System_Object__get_Current (TMPro_Examples_SkewTextExample__WarpText_d__7_o* __this, const MethodInfo* method); */

/* TMPro.Examples.SkewTextExample.<WarpText>d__7$$System.Collections.Generic.IEnumerator<System.Object>.get_Current
   Il2CppObject*
   TMPro_Examples_SkewTextExample__WarpText_d__7__System_Collections_Generic_IEnumerator_System_Object__get_Current
   (TMPro_Examples_SkewTextExample__WarpText_d__7_o* __this, const MethodInfo* method); */

undefined8
native_TMPro_Examples_SkewTextExample__WarpText_d__7__System_Collections_Generic_IEnumerator_System_Object__get_Current_54db24
          (long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* TMPro.Examples.SkewTextExample.<WarpText>d__7$$System.Collections.IEnumerator.Reset @ 0x54db2c
 * void TMPro_Examples_SkewTextExample__WarpText_d__7__System_Collections_IEnumerator_Reset (TMPro_Examples_SkewTextExample__WarpText_d__7_o* __this, const MethodInfo* method); */

/* TMPro.Examples.SkewTextExample.<WarpText>d__7$$System.Collections.IEnumerator.Reset
   void TMPro_Examples_SkewTextExample__WarpText_d__7__System_Collections_IEnumerator_Reset
   (TMPro_Examples_SkewTextExample__WarpText_d__7_o* __this, const MethodInfo* method); */

void native_TMPro_Examples_SkewTextExample__WarpText_d__7__System_Collections_IEnumerator_Reset_54db2c
               (void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  native_sub_432740(&System_NotSupportedException_TypeInfo_12d5468);
  uVar1 = native_sub_432808();
  native_System_NotSupportedException___ctor_ad264c(uVar1,0);
  uVar2 = native_sub_432740(&
                            Method_TMPro_Examples_SkewTextExample__WarpText_d__7_System_Collections_IEnumerator_Reset___12e9dc0
                           );
                    /* WARNING: Subroutine does not return */
  native_sub_4327dc(uVar1,uVar2);
}



/* TMPro.Examples.SkewTextExample.<WarpText>d__7$$System.Collections.IEnumerator.get_Current @ 0x54db6c
 * Il2CppObject* TMPro_Examples_SkewTextExample__WarpText_d__7__System_Collections_IEnumerator_get_Current (TMPro_Examples_SkewTextExample__WarpText_d__7_o* __this, const MethodInfo* method); */

/* TMPro.Examples.SkewTextExample.<WarpText>d__7$$System.Collections.IEnumerator.get_Current
   Il2CppObject*
   TMPro_Examples_SkewTextExample__WarpText_d__7__System_Collections_IEnumerator_get_Current
   (TMPro_Examples_SkewTextExample__WarpText_d__7_o* __this, const MethodInfo* method); */

undefined8
native_TMPro_Examples_SkewTextExample__WarpText_d__7__System_Collections_IEnumerator_get_Current_54db6c
          (long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}


