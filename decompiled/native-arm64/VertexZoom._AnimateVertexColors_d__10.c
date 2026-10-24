/* ARM64 IL2CPP native pseudocode from Ghidra.
 * Recovered implementation, not original C# source.
 * Function boundaries follow the IL2CPP method address table. */


/* TMPro.Examples.VertexZoom.<AnimateVertexColors>d__10$$.ctor @ 0x55eda4
 * void TMPro_Examples_VertexZoom__AnimateVertexColors_d__10___ctor (TMPro_Examples_VertexZoom__AnimateVertexColors_d__10_o* __this, int32_t __1__state, const MethodInfo* method); */

/* TMPro.Examples.VertexZoom.<AnimateVertexColors>d__10$$.ctor
   void TMPro_Examples_VertexZoom__AnimateVertexColors_d__10___ctor
   (TMPro_Examples_VertexZoom__AnimateVertexColors_d__10_o* __this, int32_t __1__state, const
   MethodInfo* method); */

void native_TMPro_Examples_VertexZoom__AnimateVertexColors_d__10___ctor_55eda4
               (long param_1,undefined4 param_2)

{
  native_System_Object___ctor_ad2798(param_1,0);
  *(undefined4 *)(param_1 + 0x10) = param_2;
  return;
}



/* TMPro.Examples.VertexZoom.<AnimateVertexColors>d__10$$System.IDisposable.Dispose @ 0x55edd0
 * void TMPro_Examples_VertexZoom__AnimateVertexColors_d__10__System_IDisposable_Dispose (TMPro_Examples_VertexZoom__AnimateVertexColors_d__10_o* __this, const MethodInfo* method); */

/* TMPro.Examples.VertexZoom.<AnimateVertexColors>d__10$$System.IDisposable.Dispose
   void TMPro_Examples_VertexZoom__AnimateVertexColors_d__10__System_IDisposable_Dispose
   (TMPro_Examples_VertexZoom__AnimateVertexColors_d__10_o* __this, const MethodInfo* method); */

void native_TMPro_Examples_VertexZoom__AnimateVertexColors_d__10__System_IDisposable_Dispose_55edd0
               (void)

{
  return;
}



/* TMPro.Examples.VertexZoom.<AnimateVertexColors>d__10$$MoveNext @ 0x55edd4
 * bool TMPro_Examples_VertexZoom__AnimateVertexColors_d__10__MoveNext (TMPro_Examples_VertexZoom__AnimateVertexColors_d__10_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TMPro.Examples.VertexZoom.<AnimateVertexColors>d__10$$MoveNext
   bool TMPro_Examples_VertexZoom__AnimateVertexColors_d__10__MoveNext
   (TMPro_Examples_VertexZoom__AnimateVertexColors_d__10_o* __this, const MethodInfo* method); */

undefined8
native_TMPro_Examples_VertexZoom__AnimateVertexColors_d__10__MoveNext_55edd4(long param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  float *pfVar4;
  long lVar5;
  int iVar6;
  uint uVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  long *plVar11;
  long lVar12;
  long lVar13;
  undefined8 *puVar14;
  float *pfVar15;
  long lVar16;
  long lVar17;
  float *pfVar18;
  ulong uVar19;
  long lVar20;
  long lVar21;
  long lVar22;
  long lVar23;
  long lVar24;
  uint uVar25;
  float *pfVar26;
  undefined8 *puVar27;
  undefined8 *puVar28;
  long lVar29;
  float *pfVar30;
  float *pfVar31;
  undefined4 uVar32;
  undefined8 uVar33;
  float fVar34;
  undefined4 uVar35;
  float fVar36;
  undefined8 uVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  ulong in_d3;
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
  
  if ((bRam000000000133ea13 & 1) == 0) {
    native_sub_43273c(&Method_System_Comparison_int___ctor___12d8b28);
    native_sub_43273c(&System_Comparison_int__TypeInfo_12d21c8);
    native_sub_43273c(&Method_System_Collections_Generic_List_float__Add___12dce08);
    native_sub_43273c(&Method_System_Collections_Generic_List_int__Add___12dca88);
    native_sub_43273c(&Method_System_Collections_Generic_List_float__Clear___12dce10);
    native_sub_43273c(&Method_System_Collections_Generic_List_int__Clear___12dca98);
    native_sub_43273c(&Method_System_Collections_Generic_List_int__Sort___12dcac0);
    native_sub_43273c(&Method_System_Collections_Generic_List_int___ctor___12dca80);
    native_sub_43273c(&Method_System_Collections_Generic_List_float___ctor___12dce00);
    native_sub_43273c(&Method_System_Collections_Generic_List_float__get_Count___12dce18);
    native_sub_43273c(&System_Collections_Generic_List_int__TypeInfo_12d2aa0);
    native_sub_43273c(&System_Collections_Generic_List_float__TypeInfo_12d2b40);
    native_sub_43273c(&
                      Method_TMPro_Examples_VertexZoom___c__DisplayClass10_0__AnimateVertexColors_b__0___12ea1e8
                     );
    native_sub_43273c(&TMPro_Examples_VertexZoom___c__DisplayClass10_0_TypeInfo_12d7b90);
    native_sub_43273c(&UnityEngine_WaitForSeconds_TypeInfo_12d6740);
    bRam000000000133ea13 = 1;
  }
  uStack_c8 = 0;
  uStack_d0 = 0;
  uStack_b8 = 0;
  uStack_c0 = 0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  uStack_d8 = 0;
  uStack_e0 = 0;
  lVar16 = *(long *)(param_1 + 0x20);
  if (*(int *)(param_1 + 0x10) - 1U < 2) {
    *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
    if (lVar16 == 0) goto LAB_0055f8d8;
  }
  else {
    if (*(int *)(param_1 + 0x10) != 0) {
      return 0;
    }
    *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
    uVar8 = native_sub_432808(_TMPro_Examples_VertexZoom___c__DisplayClass10_0_TypeInfo_12d7b90);
    native_System_Object___ctor_ad2798(uVar8,0);
    *(undefined8 *)(param_1 + 0x28) = uVar8;
    native_sub_4326e0(param_1 + 0x28,uVar8);
    if ((lVar16 == 0) || (plVar11 = *(long **)(lVar16 + 0x28), plVar11 == (long *)0x0))
    goto LAB_0055f8d8;
    (**(code **)(*plVar11 + 0x7d8))(plVar11,0,0,*(undefined8 *)(*plVar11 + 0x7e0));
    if (*(long *)(lVar16 + 0x28) == 0) goto LAB_0055f8d8;
    plVar11 = (long *)(param_1 + 0x30);
    *plVar11 = *(long *)(*(long *)(lVar16 + 0x28) + 0x360);
    native_sub_4326e0(plVar11);
    if (*plVar11 == 0) goto LAB_0055f8d8;
    uVar8 = native_TMPro_TMP_TextInfo__CopyMeshInfoVertexData_6a80b4(*plVar11,0);
    *(undefined8 *)(param_1 + 0x38) = uVar8;
    native_sub_4326e0((undefined8 *)(param_1 + 0x38),uVar8);
    lVar9 = *(long *)(param_1 + 0x28);
    uVar8 = native_sub_432808(_System_Collections_Generic_List_float__TypeInfo_12d2b40);
    native_System_Collections_Generic_List_float____ctor_d4d760
              (uVar8,_Method_System_Collections_Generic_List_float___ctor___12dce00);
    if (lVar9 == 0) goto LAB_0055f8d8;
    puVar14 = (undefined8 *)(lVar9 + 0x10);
    *puVar14 = uVar8;
    native_sub_4326e0(puVar14,uVar8);
    uVar8 = native_sub_432808(_System_Collections_Generic_List_int__TypeInfo_12d2aa0);
    native_System_Collections_Generic_List_int____ctor_d38324
              (uVar8,_Method_System_Collections_Generic_List_int___ctor___12dca80);
    *(undefined8 *)(param_1 + 0x40) = uVar8;
    native_sub_4326e0((undefined8 *)(param_1 + 0x40),uVar8);
    *(undefined1 *)(lVar16 + 0x30) = 1;
  }
  if (*(char *)(lVar16 + 0x30) != '\0') {
    if (*(long *)(param_1 + 0x30) == 0) goto LAB_0055f8d8;
    uVar8 = native_TMPro_TMP_TextInfo__CopyMeshInfoVertexData_6a80b4(*(long *)(param_1 + 0x30),0);
    *(undefined8 *)(param_1 + 0x38) = uVar8;
    native_sub_4326e0();
    *(undefined1 *)(lVar16 + 0x30) = 0;
  }
  if (*(long *)(param_1 + 0x30) != 0) {
    iVar6 = *(int *)(*(long *)(param_1 + 0x30) + 0x18);
    if (iVar6 == 0) {
      uVar8 = native_sub_432808(_UnityEngine_WaitForSeconds_TypeInfo_12d6740);
      native_UnityEngine_WaitForSeconds___ctor_7775c8(0x3e800000,uVar8,0);
      *(undefined8 *)(param_1 + 0x18) = uVar8;
      native_sub_4326e0((undefined8 *)(param_1 + 0x18),uVar8);
      uVar32 = 1;
LAB_0055f94c:
      *(undefined4 *)(param_1 + 0x10) = uVar32;
      return 1;
    }
    if ((*(long *)(param_1 + 0x28) != 0) &&
       (lVar9 = *(long *)(*(long *)(param_1 + 0x28) + 0x10), lVar9 != 0)) {
      native_System_Collections_Generic_List_float___Clear_d4e73c
                (lVar9,_Method_System_Collections_Generic_List_float__Clear___12dce10);
      if (*(long *)(param_1 + 0x40) != 0) {
        native_System_Collections_Generic_List_int___Clear_d392fc
                  (*(long *)(param_1 + 0x40),
                   _Method_System_Collections_Generic_List_int__Clear___12dca98);
        if (0 < iVar6) {
          uVar19 = 0;
          lVar9 = 0x194;
          do {
            lVar17 = *(long *)(param_1 + 0x30);
            if ((lVar17 == 0) || (lVar12 = *(long *)(lVar17 + 0x38), lVar12 == 0))
            goto LAB_0055f8d8;
            if (*(uint *)(lVar12 + 0x18) <= uVar19) goto LAB_0055f98c;
            if (*(char *)(lVar12 + lVar9) != '\0') {
              lVar20 = *(long *)(param_1 + 0x38);
              if (lVar20 == 0) goto LAB_0055f8d8;
              uVar25 = *(uint *)(lVar12 + lVar9 + -0x13c);
              lVar29 = (long)(int)uVar25;
              if (*(uint *)(lVar20 + 0x18) <= uVar25) goto LAB_0055f98c;
              lVar20 = *(long *)(lVar20 + lVar29 * 0x50 + 0x30);
              if (lVar20 == 0) goto LAB_0055f8d8;
              uVar7 = *(uint *)(lVar12 + lVar9 + -0x128);
              lVar12 = (long)(int)uVar7;
              if ((*(uint *)(lVar20 + 0x18) <= uVar7) ||
                 (uVar1 = uVar7 + 2, *(uint *)(lVar20 + 0x18) <= uVar1)) goto LAB_0055f98c;
              lVar23 = (long)(int)uVar1;
              lVar21 = lVar20 + lVar12 * 0xc;
              lVar13 = lVar20 + lVar23 * 0xc;
              uVar8 = *(undefined8 *)(lVar21 + 0x20);
              fVar39 = *(float *)(lVar21 + 0x28);
              puVar14 = (undefined8 *)(lVar13 + 0x20);
              uVar37 = *puVar14;
              lVar17 = *(long *)(lVar17 + 0x60);
              if (lVar17 == 0) goto LAB_0055f8d8;
              if (*(uint *)(lVar17 + 0x18) <= uVar25) goto LAB_0055f98c;
              lVar17 = *(long *)(lVar17 + lVar29 * 0x50 + 0x30);
              if (lVar17 == 0) goto LAB_0055f8d8;
              if (*(uint *)(lVar17 + 0x18) <= uVar7) goto LAB_0055f98c;
              fVar36 = (float)uVar8;
              fVar40 = (float)((ulong)uVar8 >> 0x20);
              uVar8 = 0x3f0000003f000000;
              fVar34 = (fVar36 + (float)uVar37) * 0.5;
              fVar38 = (fVar40 + (float)((ulong)uVar37 >> 0x20)) * 0.5;
              lVar21 = lVar17 + lVar12 * 0xc;
              puVar28 = (undefined8 *)(lVar21 + 0x20);
              *puVar28 = CONCAT44(fVar40 - fVar38,fVar36 - fVar34);
              pfVar30 = (float *)(lVar21 + 0x28);
              *pfVar30 = fVar39;
              uVar2 = uVar7 + 1;
              if ((*(uint *)(lVar20 + 0x18) <= uVar2) ||
                 (lVar22 = (long)(int)uVar2, *(uint *)(lVar17 + 0x18) <= uVar2)) goto LAB_0055f98c;
              lVar5 = lVar20 + lVar22 * 0xc;
              uVar37 = *(undefined8 *)(lVar5 + 0x20);
              fVar39 = *(float *)(lVar5 + 0x28);
              lVar5 = lVar17 + lVar22 * 0xc;
              puVar27 = (undefined8 *)(lVar5 + 0x20);
              *puVar27 = CONCAT44((float)((ulong)uVar37 >> 0x20) - fVar38,(float)uVar37 - fVar34);
              pfVar26 = (float *)(lVar5 + 0x28);
              *pfVar26 = fVar39;
              if ((*(uint *)(lVar20 + 0x18) <= uVar1) || (*(uint *)(lVar17 + 0x18) <= uVar1))
              goto LAB_0055f98c;
              uVar37 = *puVar14;
              lVar24 = lVar17 + lVar23 * 0xc;
              fVar39 = *(float *)(lVar13 + 0x28);
              puVar14 = (undefined8 *)(lVar24 + 0x20);
              *puVar14 = CONCAT44((float)((ulong)uVar37 >> 0x20) - fVar38,(float)uVar37 - fVar34);
              pfVar18 = (float *)(lVar24 + 0x28);
              *pfVar18 = fVar39;
              uVar3 = uVar7 + 3;
              if ((*(uint *)(lVar20 + 0x18) <= uVar3) ||
                 (lVar13 = (long)(int)uVar3, *(uint *)(lVar17 + 0x18) <= uVar3)) goto LAB_0055f98c;
              lVar20 = lVar20 + lVar13 * 0xc;
              uVar37 = *(undefined8 *)(lVar20 + 0x20);
              fVar39 = *(float *)(lVar20 + 0x28);
              lVar20 = lVar17 + lVar13 * 0xc;
              pfVar31 = (float *)(lVar20 + 0x20);
              *(ulong *)pfVar31 =
                   CONCAT44((float)((ulong)uVar37 >> 0x20) - fVar38,(float)uVar37 - fVar34);
              pfVar15 = (float *)(lVar20 + 0x28);
              *pfVar15 = fVar39;
              uVar37 = 0x3fc00000;
              native_UnityEngine_Random__Range_76305c(0x3f800000,0);
              if ((*(long *)(param_1 + 0x28) == 0) ||
                 (lVar10 = *(long *)(*(long *)(param_1 + 0x28) + 0x10), lVar10 == 0))
              goto LAB_0055f8d8;
              native_System_Collections_Generic_List_float___Add_d4e4b0
                        (lVar10,_Method_System_Collections_Generic_List_float__Add___12dce08);
              if (((*(long *)(param_1 + 0x28) == 0) ||
                  (lVar10 = *(long *)(*(long *)(param_1 + 0x28) + 0x10), lVar10 == 0)) ||
                 (*(long *)(param_1 + 0x40) == 0)) goto LAB_0055f8d8;
              native_System_Collections_Generic_List_int___Add_d39078
                        (*(long *)(param_1 + 0x40),*(int *)(lVar10 + 0x18) + -1,
                         _Method_System_Collections_Generic_List_int__Add___12dca88);
              uVar33 = native_UnityEngine_Quaternion__get_identity_7628fc(0);
              native_UnityEngine_Vector3__get_one_776a20(0);
              native_UnityEngine_Matrix4x4__TRS_8e56d4
                        (&uStack_130,0,0,0,uVar33,uVar37,uVar8,in_d3,0);
              uStack_c8 = uStack_108;
              uStack_d0 = uStack_110;
              uStack_b8 = uStack_f8;
              uStack_c0 = uStack_100;
              uStack_e8 = uStack_128;
              uStack_f0 = uStack_130;
              uStack_d8 = uStack_118;
              uStack_e0 = uStack_120;
              if (*(uint *)(lVar17 + 0x18) <= uVar7) goto LAB_0055f98c;
              uVar35 = *(undefined4 *)(lVar21 + 0x24);
              fVar39 = *pfVar30;
              uVar32 = native_UnityEngine_Matrix4x4__MultiplyPoint3x4_8e5cec
                                 (*(undefined4 *)puVar28,&uStack_f0,0);
              if (*(uint *)(lVar17 + 0x18) <= uVar7) goto LAB_0055f98c;
              *(undefined4 *)puVar28 = uVar32;
              *(undefined4 *)(lVar21 + 0x24) = uVar35;
              *pfVar30 = fVar39;
              if (*(uint *)(lVar17 + 0x18) <= uVar2) goto LAB_0055f98c;
              uVar35 = *(undefined4 *)(lVar5 + 0x24);
              fVar39 = *pfVar26;
              uVar32 = native_UnityEngine_Matrix4x4__MultiplyPoint3x4_8e5cec
                                 (*(undefined4 *)puVar27,&uStack_f0,0);
              if (*(uint *)(lVar17 + 0x18) <= uVar2) goto LAB_0055f98c;
              *(undefined4 *)puVar27 = uVar32;
              *(undefined4 *)(lVar5 + 0x24) = uVar35;
              *pfVar26 = fVar39;
              if (*(uint *)(lVar17 + 0x18) <= uVar1) goto LAB_0055f98c;
              uVar35 = *(undefined4 *)(lVar24 + 0x24);
              fVar39 = *pfVar18;
              uVar32 = native_UnityEngine_Matrix4x4__MultiplyPoint3x4_8e5cec
                                 (*(undefined4 *)puVar14,&uStack_f0,0);
              if (*(uint *)(lVar17 + 0x18) <= uVar1) goto LAB_0055f98c;
              *(undefined4 *)puVar14 = uVar32;
              *(undefined4 *)(lVar24 + 0x24) = uVar35;
              *pfVar18 = fVar39;
              if (*(uint *)(lVar17 + 0x18) <= uVar3) goto LAB_0055f98c;
              pfVar4 = (float *)(lVar20 + 0x24);
              fVar36 = *pfVar4;
              fVar40 = *pfVar15;
              fVar39 = (float)native_UnityEngine_Matrix4x4__MultiplyPoint3x4_8e5cec
                                        (*pfVar31,&uStack_f0,0);
              if (*(uint *)(lVar17 + 0x18) <= uVar3) goto LAB_0055f98c;
              *pfVar31 = fVar39;
              *pfVar4 = fVar36;
              *pfVar15 = fVar40;
              if (*(uint *)(lVar17 + 0x18) <= uVar7) goto LAB_0055f98c;
              *puVar28 = CONCAT44(fVar38 + (float)((ulong)*puVar28 >> 0x20),fVar34 + (float)*puVar28
                                 );
              *pfVar30 = *pfVar30 + 0.0;
              if (*(uint *)(lVar17 + 0x18) <= uVar2) goto LAB_0055f98c;
              *puVar27 = CONCAT44(fVar38 + (float)((ulong)*puVar27 >> 0x20),fVar34 + (float)*puVar27
                                 );
              *pfVar26 = *pfVar26 + 0.0;
              if (*(uint *)(lVar17 + 0x18) <= uVar1) goto LAB_0055f98c;
              *puVar14 = CONCAT44(fVar38 + (float)((ulong)*puVar14 >> 0x20),fVar34 + (float)*puVar14
                                 );
              *pfVar18 = *pfVar18 + 0.0;
              if (*(uint *)(lVar17 + 0x18) <= uVar3) goto LAB_0055f98c;
              in_d3 = (ulong)(uint)fVar38;
              *pfVar31 = fVar34 + fVar39;
              *pfVar4 = fVar38 + fVar36;
              *pfVar15 = fVar40 + 0.0;
              lVar17 = *(long *)(param_1 + 0x38);
              if (lVar17 == 0) goto LAB_0055f8d8;
              if (*(uint *)(lVar17 + 0x18) <= uVar25) goto LAB_0055f98c;
              if ((*(long *)(param_1 + 0x30) == 0) ||
                 (lVar20 = *(long *)(*(long *)(param_1 + 0x30) + 0x60), lVar20 == 0))
              goto LAB_0055f8d8;
              if (*(uint *)(lVar20 + 0x18) <= uVar25) goto LAB_0055f98c;
              lVar17 = *(long *)(lVar17 + lVar29 * 0x50 + 0x48);
              if (lVar17 == 0) goto LAB_0055f8d8;
              if (*(uint *)(lVar17 + 0x18) <= uVar7) goto LAB_0055f98c;
              lVar20 = *(long *)(lVar20 + lVar29 * 0x50 + 0x48);
              if (lVar20 == 0) goto LAB_0055f8d8;
              if (((*(uint *)(lVar20 + 0x18) <= uVar7) ||
                  (*(undefined8 *)(lVar20 + lVar12 * 8 + 0x20) =
                        *(undefined8 *)(lVar17 + lVar12 * 8 + 0x20),
                  *(uint *)(lVar17 + 0x18) <= uVar2)) ||
                 ((*(uint *)(lVar20 + 0x18) <= uVar2 ||
                  ((((*(undefined8 *)(lVar20 + lVar22 * 8 + 0x20) =
                           *(undefined8 *)(lVar17 + lVar22 * 8 + 0x20),
                     *(uint *)(lVar17 + 0x18) <= uVar1 || (*(uint *)(lVar20 + 0x18) <= uVar1)) ||
                    (*(undefined8 *)(lVar20 + lVar23 * 8 + 0x20) =
                          *(undefined8 *)(lVar17 + lVar23 * 8 + 0x20),
                    *(uint *)(lVar17 + 0x18) <= uVar3)) || (*(uint *)(lVar20 + 0x18) <= uVar3))))))
              goto LAB_0055f98c;
              *(undefined8 *)(lVar20 + lVar13 * 8 + 0x20) =
                   *(undefined8 *)(lVar17 + lVar13 * 8 + 0x20);
              lVar17 = *(long *)(param_1 + 0x38);
              if (lVar17 == 0) goto LAB_0055f8d8;
              if (*(uint *)(lVar17 + 0x18) <= uVar25) goto LAB_0055f98c;
              if ((*(long *)(param_1 + 0x30) == 0) ||
                 (lVar20 = *(long *)(*(long *)(param_1 + 0x30) + 0x60), lVar20 == 0))
              goto LAB_0055f8d8;
              if (*(uint *)(lVar20 + 0x18) <= uVar25) goto LAB_0055f98c;
              lVar17 = *(long *)(lVar17 + lVar29 * 0x50 + 0x58);
              if (lVar17 == 0) goto LAB_0055f8d8;
              if (*(uint *)(lVar17 + 0x18) <= uVar7) goto LAB_0055f98c;
              lVar20 = *(long *)(lVar20 + lVar29 * 0x50 + 0x58);
              if (lVar20 == 0) goto LAB_0055f8d8;
              if ((((*(uint *)(lVar20 + 0x18) <= uVar7) ||
                   (*(undefined4 *)(lVar20 + lVar12 * 4 + 0x20) =
                         *(undefined4 *)(lVar17 + lVar12 * 4 + 0x20),
                   *(uint *)(lVar17 + 0x18) <= uVar2)) ||
                  ((*(uint *)(lVar20 + 0x18) <= uVar2 ||
                   (((*(undefined4 *)(lVar20 + lVar22 * 4 + 0x20) =
                           *(undefined4 *)(lVar17 + lVar22 * 4 + 0x20),
                     *(uint *)(lVar17 + 0x18) <= uVar1 || (*(uint *)(lVar20 + 0x18) <= uVar1)) ||
                    (*(undefined4 *)(lVar20 + lVar23 * 4 + 0x20) =
                          *(undefined4 *)(lVar17 + lVar23 * 4 + 0x20),
                    *(uint *)(lVar17 + 0x18) <= uVar3)))))) || (*(uint *)(lVar20 + 0x18) <= uVar3))
              goto LAB_0055f98c;
              *(undefined4 *)(lVar20 + lVar13 * 4 + 0x20) =
                   *(undefined4 *)(lVar17 + lVar13 * 4 + 0x20);
            }
            uVar19 = uVar19 + 1;
            lVar9 = lVar9 + 0x178;
          } while ((long)uVar19 < (long)iVar6);
        }
        lVar9 = *(long *)(param_1 + 0x30);
        if (lVar9 != 0) {
          lVar17 = 0;
          uVar25 = 0;
          while (*(long *)(lVar9 + 0x60) != 0) {
            if (*(int *)(*(long *)(lVar9 + 0x60) + 0x18) <= (int)uVar25) {
              uVar8 = native_sub_432808(_UnityEngine_WaitForSeconds_TypeInfo_12d6740);
              native_UnityEngine_WaitForSeconds___ctor_7775c8(0x3dcccccd,uVar8,0);
              *(undefined8 *)(param_1 + 0x18) = uVar8;
              native_sub_4326e0((undefined8 *)(param_1 + 0x18),uVar8);
              uVar32 = 2;
              goto LAB_0055f94c;
            }
            lVar9 = *(long *)(param_1 + 0x28);
            if (lVar9 == 0) break;
            lVar20 = *(long *)(param_1 + 0x40);
            lVar12 = *(long *)(lVar9 + 0x18);
            if (lVar12 == 0) {
              lVar12 = native_sub_432808(_System_Comparison_int__TypeInfo_12d21c8);
              native_System_Comparison_int____ctor_bbd45c
                        (lVar12,lVar9,
                         _Method_TMPro_Examples_VertexZoom___c__DisplayClass10_0__AnimateVertexColors_b__0___12ea1e8
                         ,_Method_System_Comparison_int___ctor___12d8b28);
              *(long *)(lVar9 + 0x18) = lVar12;
              native_sub_4326e0((long *)(lVar9 + 0x18),lVar12);
            }
            if (lVar20 == 0) break;
            native_System_Collections_Generic_List_int___Sort_d3aaa4
                      (lVar20,lVar12,_Method_System_Collections_Generic_List_int__Sort___12dcac0);
            if ((*(long *)(param_1 + 0x30) == 0) ||
               (lVar9 = *(long *)(*(long *)(param_1 + 0x30) + 0x60), lVar9 == 0)) break;
            if (*(uint *)(lVar9 + 0x18) <= uVar25) {
LAB_0055f98c:
              uVar8 = native_sub_43283c();
                    /* WARNING: Subroutine does not return */
              native_sub_4327dc(uVar8,0);
            }
            native_TMPro_TMP_MeshInfo__SortGeometry_4b2aac
                      (lVar9 + lVar17 + 0x20,*(undefined8 *)(param_1 + 0x40),0);
            if ((*(long *)(param_1 + 0x30) == 0) ||
               (lVar9 = *(long *)(*(long *)(param_1 + 0x30) + 0x60), lVar9 == 0)) break;
            if (*(uint *)(lVar9 + 0x18) <= uVar25) goto LAB_0055f98c;
            lVar12 = *(long *)(lVar9 + lVar17 + 0x20);
            if (lVar12 == 0) break;
            native_UnityEngine_Mesh__set_vertices_8e7530
                      (lVar12,*(undefined8 *)(lVar9 + lVar17 + 0x30),0);
            if ((*(long *)(param_1 + 0x30) == 0) ||
               (lVar9 = *(long *)(*(long *)(param_1 + 0x30) + 0x60), lVar9 == 0)) break;
            if (*(uint *)(lVar9 + 0x18) <= uVar25) goto LAB_0055f98c;
            lVar12 = *(long *)(lVar9 + lVar17 + 0x20);
            if (lVar12 == 0) break;
            native_UnityEngine_Mesh__set_uv_8e76fc(lVar12,*(undefined8 *)(lVar9 + lVar17 + 0x48),0);
            if ((*(long *)(param_1 + 0x30) == 0) ||
               (lVar9 = *(long *)(*(long *)(param_1 + 0x30) + 0x60), lVar9 == 0)) break;
            if (*(uint *)(lVar9 + 0x18) <= uVar25) goto LAB_0055f98c;
            lVar12 = *(long *)(lVar9 + lVar17 + 0x20);
            if (lVar12 == 0) break;
            native_UnityEngine_Mesh__set_colors32_8e781c
                      (lVar12,*(undefined8 *)(lVar9 + lVar17 + 0x58),0);
            if ((*(long *)(param_1 + 0x30) == 0) ||
               (lVar9 = *(long *)(*(long *)(param_1 + 0x30) + 0x60), lVar9 == 0)) break;
            if (*(uint *)(lVar9 + 0x18) <= uVar25) goto LAB_0055f98c;
            plVar11 = *(long **)(lVar16 + 0x28);
            if (plVar11 == (long *)0x0) break;
            (**(code **)(*plVar11 + 0x7e8))
                      (plVar11,*(undefined8 *)(lVar9 + lVar17 + 0x20),uVar25,
                       *(undefined8 *)(*plVar11 + 0x7f0));
            lVar9 = *(long *)(param_1 + 0x30);
            uVar25 = uVar25 + 1;
            lVar17 = lVar17 + 0x50;
            if (lVar9 == 0) break;
          }
        }
      }
    }
  }
LAB_0055f8d8:
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* TMPro.Examples.VertexZoom.<AnimateVertexColors>d__10$$System.Collections.Generic.IEnumerator<System.Object>.get_Current @ 0x55f998
 * Il2CppObject* TMPro_Examples_VertexZoom__AnimateVertexColors_d__10__System_Collections_Generic_IEnumerator_System_Object__get_Current (TMPro_Examples_VertexZoom__AnimateVertexColors_d__10_o* __this, const MethodInfo* method); */

/* TMPro.Examples.VertexZoom.<AnimateVertexColors>d__10$$System.Collections.Generic.IEnumerator<System.Object>.get_Current
   Il2CppObject*
   TMPro_Examples_VertexZoom__AnimateVertexColors_d__10__System_Collections_Generic_IEnumerator_System_Object__get_Current
   (TMPro_Examples_VertexZoom__AnimateVertexColors_d__10_o* __this, const MethodInfo* method); */

undefined8
native_TMPro_Examples_VertexZoom__AnimateVertexColors_d__10__System_Collections_Generic_IEnumerator_System_Object__get_Current_55f998
          (long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* TMPro.Examples.VertexZoom.<AnimateVertexColors>d__10$$System.Collections.IEnumerator.Reset @ 0x55f9a0
 * void TMPro_Examples_VertexZoom__AnimateVertexColors_d__10__System_Collections_IEnumerator_Reset (TMPro_Examples_VertexZoom__AnimateVertexColors_d__10_o* __this, const MethodInfo* method); */

/* TMPro.Examples.VertexZoom.<AnimateVertexColors>d__10$$System.Collections.IEnumerator.Reset
   void TMPro_Examples_VertexZoom__AnimateVertexColors_d__10__System_Collections_IEnumerator_Reset
   (TMPro_Examples_VertexZoom__AnimateVertexColors_d__10_o* __this, const MethodInfo* method); */

void native_TMPro_Examples_VertexZoom__AnimateVertexColors_d__10__System_Collections_IEnumerator_Reset_55f9a0
               (void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  native_sub_432740(&System_NotSupportedException_TypeInfo_12d5468);
  uVar1 = native_sub_432808();
  native_System_NotSupportedException___ctor_ad264c(uVar1,0);
  uVar2 = native_sub_432740(&
                            Method_TMPro_Examples_VertexZoom__AnimateVertexColors_d__10_System_Collections_IEnumerator_Reset___12ea1f0
                           );
                    /* WARNING: Subroutine does not return */
  native_sub_4327dc(uVar1,uVar2);
}



/* TMPro.Examples.VertexZoom.<AnimateVertexColors>d__10$$System.Collections.IEnumerator.get_Current @ 0x55f9e0
 * Il2CppObject* TMPro_Examples_VertexZoom__AnimateVertexColors_d__10__System_Collections_IEnumerator_get_Current (TMPro_Examples_VertexZoom__AnimateVertexColors_d__10_o* __this, const MethodInfo* method); */

/* TMPro.Examples.VertexZoom.<AnimateVertexColors>d__10$$System.Collections.IEnumerator.get_Current
   Il2CppObject*
   TMPro_Examples_VertexZoom__AnimateVertexColors_d__10__System_Collections_IEnumerator_get_Current
   (TMPro_Examples_VertexZoom__AnimateVertexColors_d__10_o* __this, const MethodInfo* method); */

undefined8
native_TMPro_Examples_VertexZoom__AnimateVertexColors_d__10__System_Collections_IEnumerator_get_Current_55f9e0
          (long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}


