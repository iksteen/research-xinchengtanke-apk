/* ARM64 IL2CPP native pseudocode from Ghidra.
 * Recovered implementation, not original C# source.
 * Function boundaries follow the IL2CPP method address table. */


/* TMPro.Examples.VertexJitter.<AnimateVertexColors>d__11$$.ctor @ 0x55ca08
 * void TMPro_Examples_VertexJitter__AnimateVertexColors_d__11___ctor (TMPro_Examples_VertexJitter__AnimateVertexColors_d__11_o* __this, int32_t __1__state, const MethodInfo* method); */

/* TMPro.Examples.VertexJitter.<AnimateVertexColors>d__11$$.ctor
   void TMPro_Examples_VertexJitter__AnimateVertexColors_d__11___ctor
   (TMPro_Examples_VertexJitter__AnimateVertexColors_d__11_o* __this, int32_t __1__state, const
   MethodInfo* method); */

void native_TMPro_Examples_VertexJitter__AnimateVertexColors_d__11___ctor_55ca08
               (long param_1,undefined4 param_2)

{
  native_System_Object___ctor_ad2798(param_1,0);
  *(undefined4 *)(param_1 + 0x10) = param_2;
  return;
}



/* TMPro.Examples.VertexJitter.<AnimateVertexColors>d__11$$System.IDisposable.Dispose @ 0x55ca34
 * void TMPro_Examples_VertexJitter__AnimateVertexColors_d__11__System_IDisposable_Dispose (TMPro_Examples_VertexJitter__AnimateVertexColors_d__11_o* __this, const MethodInfo* method); */

/* TMPro.Examples.VertexJitter.<AnimateVertexColors>d__11$$System.IDisposable.Dispose
   void TMPro_Examples_VertexJitter__AnimateVertexColors_d__11__System_IDisposable_Dispose
   (TMPro_Examples_VertexJitter__AnimateVertexColors_d__11_o* __this, const MethodInfo* method); */

void native_TMPro_Examples_VertexJitter__AnimateVertexColors_d__11__System_IDisposable_Dispose_55ca34
               (void)

{
  return;
}



/* TMPro.Examples.VertexJitter.<AnimateVertexColors>d__11$$MoveNext @ 0x55ca38
 * bool TMPro_Examples_VertexJitter__AnimateVertexColors_d__11__MoveNext (TMPro_Examples_VertexJitter__AnimateVertexColors_d__11_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TMPro.Examples.VertexJitter.<AnimateVertexColors>d__11$$MoveNext
   bool TMPro_Examples_VertexJitter__AnimateVertexColors_d__11__MoveNext
   (TMPro_Examples_VertexJitter__AnimateVertexColors_d__11_o* __this, const MethodInfo* method); */

undefined8
native_TMPro_Examples_VertexJitter__AnimateVertexColors_d__11__MoveNext_55ca38(long param_1)

{
  uint uVar1;
  uint uVar2;
  float *pfVar3;
  int iVar4;
  uint uVar5;
  long *plVar6;
  undefined8 uVar7;
  float *pfVar8;
  long lVar9;
  long lVar10;
  undefined8 *puVar11;
  float *pfVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  undefined8 *puVar17;
  uint uVar18;
  long *plVar19;
  undefined8 *puVar20;
  ulong uVar21;
  float *pfVar22;
  float *pfVar23;
  long lVar24;
  long lVar25;
  float *pfVar26;
  undefined4 uVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  undefined4 uVar31;
  float fVar32;
  float fVar33;
  undefined4 uVar34;
  undefined8 uVar35;
  float fVar36;
  ulong uVar37;
  float fVar38;
  float fVar40;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  ulong uVar39;
  
  if ((bRam000000000133ea0f & 1) == 0) {
    native_sub_43273c(&TMPro_Examples_VertexJitter_VertexAnim___TypeInfo_12d35c8);
    native_sub_43273c(&UnityEngine_WaitForSeconds_TypeInfo_12d6740);
    bRam000000000133ea0f = 1;
  }
  uStack_c8 = 0;
  uStack_d0 = 0;
  uStack_b8 = 0;
  uStack_c0 = 0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  uStack_d8 = 0;
  uStack_e0 = 0;
  iVar4 = *(int *)(param_1 + 0x10);
  lVar25 = *(long *)(param_1 + 0x20);
  if ((iVar4 == 2) || (iVar4 == 1)) {
    *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
  }
  else {
    if (iVar4 != 0) {
      return 0;
    }
    *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
    if ((lVar25 == 0) || (plVar6 = *(long **)(lVar25 + 0x28), plVar6 == (long *)0x0))
    goto LAB_0055d1e4;
    (**(code **)(*plVar6 + 0x7d8))(plVar6,0,0,*(undefined8 *)(*plVar6 + 0x7e0));
    if (*(long *)(lVar25 + 0x28) == 0) goto LAB_0055d1e4;
    plVar19 = (long *)(param_1 + 0x28);
    *plVar19 = *(long *)(*(long *)(lVar25 + 0x28) + 0x360);
    native_sub_4326e0(plVar19);
    *(undefined4 *)(param_1 + 0x30) = 0;
    *(undefined1 *)(lVar25 + 0x30) = 1;
    uVar7 = native_sub_432750(_TMPro_Examples_VertexJitter_VertexAnim___TypeInfo_12d35c8,0x400);
    plVar6 = (long *)(param_1 + 0x38);
    *(undefined8 *)(param_1 + 0x38) = uVar7;
    native_sub_4326e0(plVar6,uVar7);
    lVar16 = 0;
    uVar21 = 0xffffffffffffffff;
    do {
      lVar24 = *plVar6;
      if (lVar24 == 0) goto LAB_0055d1e4;
      uVar27 = native_UnityEngine_Random__Range_76305c(0x41200000,0x41c80000,0);
      if ((ulong)*(uint *)(lVar24 + 0x18) <= uVar21 + 1) goto LAB_0055d2a4;
      *(undefined4 *)(lVar24 + lVar16 + 0x20) = uVar27;
      lVar24 = *plVar6;
      if (lVar24 == 0) goto LAB_0055d1e4;
      uVar27 = native_UnityEngine_Random__Range_76305c(0x3f800000,0x40400000,0);
      if ((ulong)*(uint *)(lVar24 + 0x18) <= uVar21 + 1) goto LAB_0055d2a4;
      uVar21 = uVar21 + 1;
      lVar24 = lVar24 + lVar16;
      lVar16 = lVar16 + 0xc;
      *(undefined4 *)(lVar24 + 0x28) = uVar27;
    } while (uVar21 < 0x3ff);
    if (*plVar19 == 0) goto LAB_0055d1e4;
    uVar7 = native_TMPro_TMP_TextInfo__CopyMeshInfoVertexData_6a80b4(*plVar19,0);
    *(undefined8 *)(param_1 + 0x40) = uVar7;
    native_sub_4326e0();
  }
  if (lVar25 != 0) {
    if (*(char *)(lVar25 + 0x30) != '\0') {
      if (*(long *)(param_1 + 0x28) == 0) goto LAB_0055d1e4;
      uVar7 = native_TMPro_TMP_TextInfo__CopyMeshInfoVertexData_6a80b4(*(long *)(param_1 + 0x28),0);
      *(undefined8 *)(param_1 + 0x40) = uVar7;
      native_sub_4326e0();
      *(undefined1 *)(lVar25 + 0x30) = 0;
    }
    lVar16 = *(long *)(param_1 + 0x28);
    if (lVar16 != 0) {
      iVar4 = *(int *)(lVar16 + 0x18);
      if (iVar4 == 0) {
        uVar7 = native_sub_432808(_UnityEngine_WaitForSeconds_TypeInfo_12d6740);
        native_UnityEngine_WaitForSeconds___ctor_7775c8(0x3e800000,uVar7,0);
        *(undefined8 *)(param_1 + 0x18) = uVar7;
        native_sub_4326e0((undefined8 *)(param_1 + 0x18),uVar7);
        uVar27 = 1;
LAB_0055d264:
        *(undefined4 *)(param_1 + 0x10) = uVar27;
        return 1;
      }
      if (0 < iVar4) {
        lVar24 = 0;
        uVar21 = 0;
        lVar15 = 0x194;
        do {
          if ((lVar16 == 0) || (lVar9 = *(long *)(lVar16 + 0x38), lVar9 == 0)) goto LAB_0055d1e4;
          if (*(uint *)(lVar9 + 0x18) <= uVar21) goto LAB_0055d2a4;
          if (*(char *)(lVar9 + lVar15) != '\0') {
            lVar10 = *(long *)(param_1 + 0x38);
            if (lVar10 == 0) goto LAB_0055d1e4;
            if (*(uint *)(lVar10 + 0x18) <= uVar21) goto LAB_0055d2a4;
            lVar13 = *(long *)(param_1 + 0x40);
            if (lVar13 == 0) goto LAB_0055d1e4;
            uVar18 = *(uint *)(lVar9 + lVar15 + -0x13c);
            if (*(uint *)(lVar13 + 0x18) <= uVar18) goto LAB_0055d2a4;
            lVar13 = *(long *)(lVar13 + (long)(int)uVar18 * 0x50 + 0x30);
            if (lVar13 == 0) goto LAB_0055d1e4;
            uVar5 = *(uint *)(lVar9 + lVar15 + -0x128);
            if ((*(uint *)(lVar13 + 0x18) <= uVar5) ||
               (uVar1 = uVar5 + 2, *(uint *)(lVar13 + 0x18) <= uVar1)) goto LAB_0055d2a4;
            lVar14 = lVar13 + (long)(int)uVar5 * 0xc;
            fVar40 = *(float *)(lVar10 + lVar24 + 0x20);
            fVar38 = *(float *)(lVar10 + lVar24 + 0x28);
            uVar39 = (ulong)(uint)fVar38;
            lVar9 = lVar13 + (long)(int)uVar1 * 0xc;
            uVar7 = *(undefined8 *)(lVar14 + 0x20);
            fVar28 = *(float *)(lVar14 + 0x28);
            puVar11 = (undefined8 *)(lVar9 + 0x20);
            uVar35 = *puVar11;
            lVar16 = *(long *)(lVar16 + 0x60);
            if (lVar16 == 0) goto LAB_0055d1e4;
            if (*(uint *)(lVar16 + 0x18) <= uVar18) goto LAB_0055d2a4;
            lVar16 = *(long *)(lVar16 + (long)(int)uVar18 * 0x50 + 0x30);
            if (lVar16 == 0) goto LAB_0055d1e4;
            if (*(uint *)(lVar16 + 0x18) <= uVar5) goto LAB_0055d2a4;
            fVar29 = (float)uVar7;
            fVar30 = (float)((ulong)uVar7 >> 0x20);
            fVar32 = (fVar29 + (float)uVar35) * 0.5;
            fVar36 = (fVar30 + (float)((ulong)uVar35 >> 0x20)) * 0.5;
            lVar10 = lVar16 + (long)(int)uVar5 * 0xc;
            puVar20 = (undefined8 *)(lVar10 + 0x20);
            *puVar20 = CONCAT44(fVar30 - fVar36,fVar29 - fVar32);
            pfVar23 = (float *)(lVar10 + 0x28);
            *pfVar23 = fVar28;
            uVar18 = uVar5 + 1;
            if ((*(uint *)(lVar13 + 0x18) <= uVar18) || (*(uint *)(lVar16 + 0x18) <= uVar18))
            goto LAB_0055d2a4;
            lVar14 = lVar13 + (long)(int)uVar18 * 0xc;
            uVar7 = *(undefined8 *)(lVar14 + 0x20);
            fVar28 = *(float *)(lVar14 + 0x28);
            lVar14 = lVar16 + (long)(int)uVar18 * 0xc;
            puVar17 = (undefined8 *)(lVar14 + 0x20);
            *puVar17 = CONCAT44((float)((ulong)uVar7 >> 0x20) - fVar36,(float)uVar7 - fVar32);
            pfVar22 = (float *)(lVar14 + 0x28);
            *pfVar22 = fVar28;
            if ((*(uint *)(lVar13 + 0x18) <= uVar1) || (*(uint *)(lVar16 + 0x18) <= uVar1))
            goto LAB_0055d2a4;
            uVar7 = *puVar11;
            fVar28 = *(float *)(lVar9 + 0x28);
            lVar9 = lVar16 + (long)(int)uVar1 * 0xc;
            puVar11 = (undefined8 *)(lVar9 + 0x20);
            *puVar11 = CONCAT44((float)((ulong)uVar7 >> 0x20) - fVar36,(float)uVar7 - fVar32);
            pfVar12 = (float *)(lVar9 + 0x28);
            *pfVar12 = fVar28;
            uVar2 = uVar5 + 3;
            if ((*(uint *)(lVar13 + 0x18) <= uVar2) || (*(uint *)(lVar16 + 0x18) <= uVar2))
            goto LAB_0055d2a4;
            lVar13 = lVar13 + (long)(int)uVar2 * 0xc;
            uVar7 = *(undefined8 *)(lVar13 + 0x20);
            fVar28 = *(float *)(lVar13 + 0x28);
            lVar13 = lVar16 + (long)(int)uVar2 * 0xc;
            pfVar26 = (float *)(lVar13 + 0x20);
            *(ulong *)pfVar26 =
                 CONCAT44((float)((ulong)uVar7 >> 0x20) - fVar36,(float)uVar7 - fVar32);
            pfVar8 = (float *)(lVar13 + 0x28);
            *pfVar8 = fVar28;
            uVar7 = native_UnityEngine_Mathf__PingPong_8e5484
                              (fVar38 * ((float)*(int *)(param_1 + 0x30) / 25.0),0x3f800000,0);
            uVar27 = native_UnityEngine_Mathf__SmoothStep_8e5258(-fVar40,fVar40,uVar7,0);
            fVar28 = (float)native_UnityEngine_Random__Range_76305c(0xbe800000,0x3e800000,0);
            fVar29 = (float)native_UnityEngine_Random__Range_76305c(0xbe800000,0x3e800000,0);
            fVar33 = *(float *)(lVar25 + 0x20);
            fVar30 = (float)native_UnityEngine_Random__Range_76305c(0xc0a00000,0x40a00000,0);
            uVar37 = (ulong)(uint)(fVar30 * *(float *)(lVar25 + 0x18));
            uVar35 = 0;
            uVar7 = native_UnityEngine_Quaternion__Euler_762bc4(0,0);
            native_UnityEngine_Vector3__get_one_776a20(0);
            native_UnityEngine_Matrix4x4__TRS_8e56d4
                      (&uStack_130,fVar28 * fVar33,fVar29 * fVar33,fVar33 * 0.0,uVar7,uVar35,uVar37,
                       uVar39,0);
            uStack_c8 = uStack_108;
            uStack_d0 = uStack_110;
            uStack_b8 = uStack_f8;
            uStack_c0 = uStack_100;
            uStack_e8 = uStack_128;
            uStack_f0 = uStack_130;
            uStack_d8 = uStack_118;
            uStack_e0 = uStack_120;
            if (*(uint *)(lVar16 + 0x18) <= uVar5) goto LAB_0055d2a4;
            uVar34 = *(undefined4 *)(lVar10 + 0x24);
            fVar28 = *pfVar23;
            uVar31 = native_UnityEngine_Matrix4x4__MultiplyPoint3x4_8e5cec
                               (*(undefined4 *)puVar20,&uStack_f0,0);
            if (*(uint *)(lVar16 + 0x18) <= uVar5) goto LAB_0055d2a4;
            *(undefined4 *)puVar20 = uVar31;
            *(undefined4 *)(lVar10 + 0x24) = uVar34;
            *pfVar23 = fVar28;
            if (*(uint *)(lVar16 + 0x18) <= uVar18) goto LAB_0055d2a4;
            uVar34 = *(undefined4 *)(lVar14 + 0x24);
            fVar28 = *pfVar22;
            uVar31 = native_UnityEngine_Matrix4x4__MultiplyPoint3x4_8e5cec
                               (*(undefined4 *)puVar17,&uStack_f0,0);
            if (*(uint *)(lVar16 + 0x18) <= uVar18) goto LAB_0055d2a4;
            *(undefined4 *)puVar17 = uVar31;
            *(undefined4 *)(lVar14 + 0x24) = uVar34;
            *pfVar22 = fVar28;
            if (*(uint *)(lVar16 + 0x18) <= uVar1) goto LAB_0055d2a4;
            uVar34 = *(undefined4 *)(lVar9 + 0x24);
            fVar28 = *pfVar12;
            uVar31 = native_UnityEngine_Matrix4x4__MultiplyPoint3x4_8e5cec
                               (*(undefined4 *)puVar11,&uStack_f0,0);
            if (*(uint *)(lVar16 + 0x18) <= uVar1) goto LAB_0055d2a4;
            *(undefined4 *)puVar11 = uVar31;
            *(undefined4 *)(lVar9 + 0x24) = uVar34;
            *pfVar12 = fVar28;
            if (*(uint *)(lVar16 + 0x18) <= uVar2) goto LAB_0055d2a4;
            pfVar3 = (float *)(lVar13 + 0x24);
            fVar29 = *pfVar3;
            fVar30 = *pfVar8;
            fVar28 = (float)native_UnityEngine_Matrix4x4__MultiplyPoint3x4_8e5cec
                                      (*pfVar26,&uStack_f0,0);
            if (*(uint *)(lVar16 + 0x18) <= uVar2) goto LAB_0055d2a4;
            *pfVar26 = fVar28;
            *pfVar3 = fVar29;
            *pfVar8 = fVar30;
            if (*(uint *)(lVar16 + 0x18) <= uVar5) goto LAB_0055d2a4;
            *puVar20 = CONCAT44(fVar36 + (float)((ulong)*puVar20 >> 0x20),fVar32 + (float)*puVar20);
            *pfVar23 = *pfVar23 + 0.0;
            if (*(uint *)(lVar16 + 0x18) <= uVar18) goto LAB_0055d2a4;
            *puVar17 = CONCAT44(fVar36 + (float)((ulong)*puVar17 >> 0x20),fVar32 + (float)*puVar17);
            *pfVar22 = *pfVar22 + 0.0;
            if (*(uint *)(lVar16 + 0x18) <= uVar1) goto LAB_0055d2a4;
            *puVar11 = CONCAT44(fVar36 + (float)((ulong)*puVar11 >> 0x20),fVar32 + (float)*puVar11);
            *pfVar12 = *pfVar12 + 0.0;
            if (*(uint *)(lVar16 + 0x18) <= uVar2) goto LAB_0055d2a4;
            *pfVar26 = fVar32 + fVar28;
            *pfVar3 = fVar36 + fVar29;
            *pfVar8 = fVar30 + 0.0;
            lVar16 = *(long *)(param_1 + 0x38);
            if (lVar16 == 0) goto LAB_0055d1e4;
            if (*(uint *)(lVar16 + 0x18) <= uVar21) goto LAB_0055d2a4;
            lVar16 = lVar16 + lVar24;
            *(float *)(lVar16 + 0x28) = fVar38;
            *(float *)(lVar16 + 0x20) = fVar40;
            *(undefined4 *)(lVar16 + 0x24) = uVar27;
          }
          lVar16 = *(long *)(param_1 + 0x28);
          uVar21 = uVar21 + 1;
          lVar24 = lVar24 + 0xc;
          lVar15 = lVar15 + 0x178;
        } while ((long)uVar21 < (long)iVar4);
        if (lVar16 == 0) goto LAB_0055d1e4;
      }
      lVar24 = 0;
      uVar18 = 0;
      while (lVar16 = *(long *)(lVar16 + 0x60), lVar16 != 0) {
        if ((int)*(uint *)(lVar16 + 0x18) <= (int)uVar18) {
          *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + 1;
          uVar7 = native_sub_432808(_UnityEngine_WaitForSeconds_TypeInfo_12d6740);
          native_UnityEngine_WaitForSeconds___ctor_7775c8(0x3dcccccd,uVar7,0);
          *(undefined8 *)(param_1 + 0x18) = uVar7;
          native_sub_4326e0(param_1 + 0x18,uVar7);
          uVar27 = 2;
          goto LAB_0055d264;
        }
        if (*(uint *)(lVar16 + 0x18) <= uVar18) {
LAB_0055d2a4:
          uVar7 = native_sub_43283c();
                    /* WARNING: Subroutine does not return */
          native_sub_4327dc(uVar7,0);
        }
        lVar15 = *(long *)(lVar16 + lVar24 + 0x20);
        if (lVar15 == 0) break;
        native_UnityEngine_Mesh__set_vertices_8e7530
                  (lVar15,*(undefined8 *)(lVar16 + lVar24 + 0x30),0);
        if ((*(long *)(param_1 + 0x28) == 0) ||
           (lVar16 = *(long *)(*(long *)(param_1 + 0x28) + 0x60), lVar16 == 0)) break;
        if (*(uint *)(lVar16 + 0x18) <= uVar18) goto LAB_0055d2a4;
        plVar6 = *(long **)(lVar25 + 0x28);
        if (plVar6 == (long *)0x0) break;
        (**(code **)(*plVar6 + 0x7e8))
                  (plVar6,*(undefined8 *)(lVar16 + lVar24 + 0x20),uVar18,
                   *(undefined8 *)(*plVar6 + 0x7f0));
        lVar16 = *(long *)(param_1 + 0x28);
        uVar18 = uVar18 + 1;
        lVar24 = lVar24 + 0x50;
        if (lVar16 == 0) break;
      }
    }
  }
LAB_0055d1e4:
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* TMPro.Examples.VertexJitter.<AnimateVertexColors>d__11$$System.Collections.Generic.IEnumerator<System.Object>.get_Current @ 0x55d2b0
 * Il2CppObject* TMPro_Examples_VertexJitter__AnimateVertexColors_d__11__System_Collections_Generic_IEnumerator_System_Object__get_Current (TMPro_Examples_VertexJitter__AnimateVertexColors_d__11_o* __this, const MethodInfo* method); */

/* TMPro.Examples.VertexJitter.<AnimateVertexColors>d__11$$System.Collections.Generic.IEnumerator<System.Object>.get_Current
   Il2CppObject*
   TMPro_Examples_VertexJitter__AnimateVertexColors_d__11__System_Collections_Generic_IEnumerator_System_Object__get_Current
   (TMPro_Examples_VertexJitter__AnimateVertexColors_d__11_o* __this, const MethodInfo* method); */

undefined8
native_TMPro_Examples_VertexJitter__AnimateVertexColors_d__11__System_Collections_Generic_IEnumerator_System_Object__get_Current_55d2b0
          (long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* TMPro.Examples.VertexJitter.<AnimateVertexColors>d__11$$System.Collections.IEnumerator.Reset @ 0x55d2b8
 * void TMPro_Examples_VertexJitter__AnimateVertexColors_d__11__System_Collections_IEnumerator_Reset (TMPro_Examples_VertexJitter__AnimateVertexColors_d__11_o* __this, const MethodInfo* method); */

/* TMPro.Examples.VertexJitter.<AnimateVertexColors>d__11$$System.Collections.IEnumerator.Reset
   void TMPro_Examples_VertexJitter__AnimateVertexColors_d__11__System_Collections_IEnumerator_Reset
   (TMPro_Examples_VertexJitter__AnimateVertexColors_d__11_o* __this, const MethodInfo* method); */

void native_TMPro_Examples_VertexJitter__AnimateVertexColors_d__11__System_Collections_IEnumerator_Reset_55d2b8
               (void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  native_sub_432740(&System_NotSupportedException_TypeInfo_12d5468);
  uVar1 = native_sub_432808();
  native_System_NotSupportedException___ctor_ad264c(uVar1,0);
  uVar2 = native_sub_432740(&
                            Method_TMPro_Examples_VertexJitter__AnimateVertexColors_d__11_System_Collections_IEnumerator_Reset___12ea1d0
                           );
                    /* WARNING: Subroutine does not return */
  native_sub_4327dc(uVar1,uVar2);
}



/* TMPro.Examples.VertexJitter.<AnimateVertexColors>d__11$$System.Collections.IEnumerator.get_Current @ 0x55d2f8
 * Il2CppObject* TMPro_Examples_VertexJitter__AnimateVertexColors_d__11__System_Collections_IEnumerator_get_Current (TMPro_Examples_VertexJitter__AnimateVertexColors_d__11_o* __this, const MethodInfo* method); */

/* TMPro.Examples.VertexJitter.<AnimateVertexColors>d__11$$System.Collections.IEnumerator.get_Current
   Il2CppObject*
   TMPro_Examples_VertexJitter__AnimateVertexColors_d__11__System_Collections_IEnumerator_get_Current
   (TMPro_Examples_VertexJitter__AnimateVertexColors_d__11_o* __this, const MethodInfo* method); */

undefined8
native_TMPro_Examples_VertexJitter__AnimateVertexColors_d__11__System_Collections_IEnumerator_get_Current_55d2f8
          (long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}


