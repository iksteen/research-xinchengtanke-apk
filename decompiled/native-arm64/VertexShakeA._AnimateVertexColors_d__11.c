/* ARM64 IL2CPP native pseudocode from Ghidra.
 * Recovered implementation, not original C# source.
 * Function boundaries follow the IL2CPP method address table. */


/* TMPro.Examples.VertexShakeA.<AnimateVertexColors>d__11$$.ctor @ 0x55d300
 * void TMPro_Examples_VertexShakeA__AnimateVertexColors_d__11___ctor (TMPro_Examples_VertexShakeA__AnimateVertexColors_d__11_o* __this, int32_t __1__state, const MethodInfo* method); */

/* TMPro.Examples.VertexShakeA.<AnimateVertexColors>d__11$$.ctor
   void TMPro_Examples_VertexShakeA__AnimateVertexColors_d__11___ctor
   (TMPro_Examples_VertexShakeA__AnimateVertexColors_d__11_o* __this, int32_t __1__state, const
   MethodInfo* method); */

void native_TMPro_Examples_VertexShakeA__AnimateVertexColors_d__11___ctor_55d300
               (long param_1,undefined4 param_2)

{
  native_System_Object___ctor_ad2798(param_1,0);
  *(undefined4 *)(param_1 + 0x10) = param_2;
  return;
}



/* TMPro.Examples.VertexShakeA.<AnimateVertexColors>d__11$$System.IDisposable.Dispose @ 0x55d32c
 * void TMPro_Examples_VertexShakeA__AnimateVertexColors_d__11__System_IDisposable_Dispose (TMPro_Examples_VertexShakeA__AnimateVertexColors_d__11_o* __this, const MethodInfo* method); */

/* TMPro.Examples.VertexShakeA.<AnimateVertexColors>d__11$$System.IDisposable.Dispose
   void TMPro_Examples_VertexShakeA__AnimateVertexColors_d__11__System_IDisposable_Dispose
   (TMPro_Examples_VertexShakeA__AnimateVertexColors_d__11_o* __this, const MethodInfo* method); */

void native_TMPro_Examples_VertexShakeA__AnimateVertexColors_d__11__System_IDisposable_Dispose_55d32c
               (void)

{
  return;
}



/* TMPro.Examples.VertexShakeA.<AnimateVertexColors>d__11$$MoveNext @ 0x55d330
 * bool TMPro_Examples_VertexShakeA__AnimateVertexColors_d__11__MoveNext (TMPro_Examples_VertexShakeA__AnimateVertexColors_d__11_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TMPro.Examples.VertexShakeA.<AnimateVertexColors>d__11$$MoveNext
   bool TMPro_Examples_VertexShakeA__AnimateVertexColors_d__11__MoveNext
   (TMPro_Examples_VertexShakeA__AnimateVertexColors_d__11_o* __this, const MethodInfo* method); */

undefined8
native_TMPro_Examples_VertexShakeA__AnimateVertexColors_d__11__MoveNext_55d330(long param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  long lVar8;
  undefined8 uVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  uint uVar15;
  long *plVar16;
  ulong uVar17;
  long lVar18;
  long lVar19;
  long *plVar20;
  long *plVar21;
  float fVar22;
  undefined4 uVar23;
  undefined4 uVar24;
  undefined4 uVar25;
  undefined4 uVar26;
  ulong uVar27;
  undefined4 uVar28;
  undefined8 in_d3;
  float fVar29;
  undefined8 uVar30;
  undefined8 uVar31;
  float fVar32;
  float fVar33;
  uint uStack_168;
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
  
  if ((bRam000000000133ea10 & 1) == 0) {
    native_sub_43273c(&UnityEngine_Vector3_____TypeInfo_12d2fd8);
    native_sub_43273c(&UnityEngine_Vector3___TypeInfo_12d3478);
    native_sub_43273c(&UnityEngine_WaitForSeconds_TypeInfo_12d6740);
    bRam000000000133ea10 = 1;
  }
  uStack_c8 = 0;
  uStack_d0 = 0;
  uStack_b8 = 0;
  uStack_c0 = 0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  uStack_d8 = 0;
  uStack_e0 = 0;
  lVar14 = *(long *)(param_1 + 0x20);
  if (*(int *)(param_1 + 0x10) - 1U < 2) {
    *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
    if (lVar14 == 0) goto LAB_0055dc8c;
  }
  else {
    if (*(int *)(param_1 + 0x10) != 0) {
      return 0;
    }
    *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
    if ((lVar14 == 0) || (plVar16 = *(long **)(lVar14 + 0x28), plVar16 == (long *)0x0))
    goto LAB_0055dc8c;
    (**(code **)(*plVar16 + 0x7d8))(plVar16,0,0,*(undefined8 *)(*plVar16 + 0x7e0));
    if (*(long *)(lVar14 + 0x28) == 0) goto LAB_0055dc8c;
    *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(*(long *)(lVar14 + 0x28) + 0x360);
    native_sub_4326e0((undefined8 *)(param_1 + 0x28));
    uVar9 = native_sub_432750(_UnityEngine_Vector3_____TypeInfo_12d2fd8,0);
    *(undefined8 *)(param_1 + 0x30) = uVar9;
    native_sub_4326e0(param_1 + 0x30);
    *(undefined1 *)(lVar14 + 0x30) = 1;
  }
  if (*(char *)(lVar14 + 0x30) == '\0') {
LAB_0055d548:
    plVar16 = (long *)(param_1 + 0x28);
    lVar10 = *plVar16;
    if (lVar10 != 0) {
      if (*(int *)(lVar10 + 0x18) == 0) {
        uVar9 = native_sub_432808(_UnityEngine_WaitForSeconds_TypeInfo_12d6740);
        native_UnityEngine_WaitForSeconds___ctor_7775c8(0x3e800000,uVar9,0);
        *(undefined8 *)(param_1 + 0x18) = uVar9;
        native_sub_4326e0((undefined8 *)(param_1 + 0x18),uVar9);
        uVar23 = 1;
LAB_0055dd00:
        *(undefined4 *)(param_1 + 0x10) = uVar23;
        return 1;
      }
      iVar4 = *(int *)(lVar10 + 0x2c);
      if (0 < iVar4) {
        uStack_168 = 0;
        do {
          if ((lVar10 == 0) || (lVar18 = *(long *)(lVar10 + 0x50), lVar18 == 0)) goto LAB_0055dc8c;
          if (*(uint *)(lVar18 + 0x18) <= uStack_168) goto LAB_0055dd40;
          lVar10 = *(long *)(lVar10 + 0x38);
          if (lVar10 == 0) goto LAB_0055dc8c;
          lVar18 = lVar18 + (long)(int)uStack_168 * 0x5c;
          uVar15 = *(uint *)(lVar18 + 0x34);
          if (*(uint *)(lVar10 + 0x18) <= uVar15) goto LAB_0055dd40;
          uVar5 = *(uint *)(lVar18 + 0x3c);
          if (*(uint *)(lVar10 + 0x18) <= uVar5) goto LAB_0055dd40;
          lVar18 = lVar10 + 0x20 + (long)(int)uVar15 * 0x178;
          lVar10 = lVar10 + 0x20 + (long)(int)uVar5 * 0x178;
          uVar30 = *(undefined8 *)(lVar18 + 0xfc);
          fVar29 = *(float *)(lVar18 + 0x104);
          uVar31 = *(undefined8 *)(lVar10 + 0x108);
          fVar33 = *(float *)(lVar10 + 0x110);
          fVar22 = (float)native_UnityEngine_Random__Range_76305c(0xbe800000,0x3e800000,0);
          uVar17 = (ulong)(uint)(fVar22 * *(float *)(lVar14 + 0x24));
          uVar25 = 0;
          uVar23 = native_UnityEngine_Quaternion__Euler_762bc4(0,0,uVar17,0);
          uVar9 = in_d3;
          if ((int)uVar15 <= (int)uVar5) {
            fVar22 = ((float)uVar30 + (float)uVar31) * 0.5;
            fVar32 = ((float)((ulong)uVar30 >> 0x20) + (float)((ulong)uVar31 >> 0x20)) * 0.5;
            fVar29 = (fVar29 + fVar33) * 0.5;
            do {
              lVar10 = *plVar16;
              if ((lVar10 == 0) || (lVar18 = *(long *)(lVar10 + 0x38), lVar18 == 0))
              goto LAB_0055dc8c;
              if (*(uint *)(lVar18 + 0x18) <= uVar15) goto LAB_0055dd40;
              if (*(char *)(lVar18 + (long)(int)uVar15 * 0x178 + 0x194) != '\0') {
                lVar10 = *(long *)(lVar10 + 0x60);
                if (lVar10 == 0) goto LAB_0055dc8c;
                lVar18 = lVar18 + (long)(int)uVar15 * 0x178;
                uVar6 = *(uint *)(lVar18 + 0x58);
                lVar19 = (long)(int)uVar6;
                if (*(uint *)(lVar10 + 0x18) <= uVar6) goto LAB_0055dd40;
                lVar8 = *(long *)(param_1 + 0x30);
                if (lVar8 == 0) goto LAB_0055dc8c;
                if (*(uint *)(lVar8 + 0x18) <= uVar6) goto LAB_0055dd40;
                lVar10 = *(long *)(lVar10 + lVar19 * 0x50 + 0x30);
                if (lVar10 == 0) goto LAB_0055dc8c;
                uVar7 = *(uint *)(lVar18 + 0x6c);
                lVar18 = (long)(int)uVar7;
                if (*(uint *)(lVar10 + 0x18) <= uVar7) goto LAB_0055dd40;
                lVar8 = *(long *)(lVar8 + lVar19 * 8 + 0x20);
                if (lVar8 == 0) goto LAB_0055dc8c;
                if (*(uint *)(lVar8 + 0x18) <= uVar7) goto LAB_0055dd40;
                lVar11 = lVar10 + lVar18 * 0xc;
                uVar9 = *(undefined8 *)(lVar11 + 0x20);
                fVar33 = *(float *)(lVar11 + 0x28);
                lVar8 = lVar8 + lVar18 * 0xc;
                *(ulong *)(lVar8 + 0x20) =
                     CONCAT44((float)((ulong)uVar9 >> 0x20) - fVar32,(float)uVar9 - fVar22);
                *(float *)(lVar8 + 0x28) = fVar33 - fVar29;
                lVar8 = *(long *)(param_1 + 0x30);
                if (lVar8 == 0) goto LAB_0055dc8c;
                if ((*(uint *)(lVar8 + 0x18) <= uVar6) ||
                   (uVar1 = uVar7 + 1, *(uint *)(lVar10 + 0x18) <= uVar1)) goto LAB_0055dd40;
                lVar8 = *(long *)(lVar8 + lVar19 * 8 + 0x20);
                if (lVar8 == 0) goto LAB_0055dc8c;
                lVar11 = (long)(int)uVar1;
                if (*(uint *)(lVar8 + 0x18) <= uVar1) goto LAB_0055dd40;
                lVar12 = lVar10 + lVar11 * 0xc;
                uVar9 = *(undefined8 *)(lVar12 + 0x20);
                fVar33 = *(float *)(lVar12 + 0x28);
                lVar8 = lVar8 + lVar11 * 0xc;
                *(ulong *)(lVar8 + 0x20) =
                     CONCAT44((float)((ulong)uVar9 >> 0x20) - fVar32,(float)uVar9 - fVar22);
                *(float *)(lVar8 + 0x28) = fVar33 - fVar29;
                lVar8 = *(long *)(param_1 + 0x30);
                if (lVar8 == 0) goto LAB_0055dc8c;
                if ((*(uint *)(lVar8 + 0x18) <= uVar6) ||
                   (uVar2 = uVar7 + 2, *(uint *)(lVar10 + 0x18) <= uVar2)) goto LAB_0055dd40;
                lVar8 = *(long *)(lVar8 + lVar19 * 8 + 0x20);
                if (lVar8 == 0) goto LAB_0055dc8c;
                lVar12 = (long)(int)uVar2;
                if (*(uint *)(lVar8 + 0x18) <= uVar2) goto LAB_0055dd40;
                lVar13 = lVar10 + lVar12 * 0xc;
                uVar9 = *(undefined8 *)(lVar13 + 0x20);
                fVar33 = *(float *)(lVar13 + 0x28);
                lVar8 = lVar8 + lVar12 * 0xc;
                *(ulong *)(lVar8 + 0x20) =
                     CONCAT44((float)((ulong)uVar9 >> 0x20) - fVar32,(float)uVar9 - fVar22);
                *(float *)(lVar8 + 0x28) = fVar33 - fVar29;
                lVar8 = *(long *)(param_1 + 0x30);
                if (lVar8 == 0) goto LAB_0055dc8c;
                if ((*(uint *)(lVar8 + 0x18) <= uVar6) ||
                   (uVar3 = uVar7 + 3, *(uint *)(lVar10 + 0x18) <= uVar3)) goto LAB_0055dd40;
                lVar8 = *(long *)(lVar8 + lVar19 * 8 + 0x20);
                if (lVar8 == 0) goto LAB_0055dc8c;
                lVar13 = (long)(int)uVar3;
                if (*(uint *)(lVar8 + 0x18) <= uVar3) goto LAB_0055dd40;
                lVar10 = lVar10 + lVar13 * 0xc;
                uVar9 = *(undefined8 *)(lVar10 + 0x20);
                fVar33 = *(float *)(lVar10 + 0x28);
                lVar8 = lVar8 + lVar13 * 0xc;
                *(ulong *)(lVar8 + 0x20) =
                     CONCAT44((float)((ulong)uVar9 >> 0x20) - fVar32,(float)uVar9 - fVar22);
                *(float *)(lVar8 + 0x28) = fVar33 - fVar29;
                fVar33 = *(float *)(lVar14 + 0x20) * 0.001;
                uVar30 = 0x3f80a3d7;
                uVar27 = (ulong)(uint)(fVar33 + 1.005);
                native_UnityEngine_Random__Range_76305c(0.995 - fVar33,0);
                uVar9 = native_UnityEngine_Vector3__get_one_776a20(0);
                native_UnityEngine_Vector3__get_one_776a20(0);
                native_UnityEngine_Matrix4x4__TRS_8e56d4
                          (&uStack_130,uVar9,uVar27,uVar30,uVar23,uVar25,uVar17,in_d3,0);
                uStack_c8 = uStack_108;
                uStack_d0 = uStack_110;
                uStack_b8 = uStack_f8;
                uStack_c0 = uStack_100;
                uStack_e8 = uStack_128;
                uStack_f0 = uStack_130;
                uStack_d8 = uStack_118;
                uStack_e0 = uStack_120;
                lVar10 = *(long *)(param_1 + 0x30);
                if (lVar10 == 0) goto LAB_0055dc8c;
                if (*(uint *)(lVar10 + 0x18) <= uVar6) goto LAB_0055dd40;
                lVar10 = *(long *)(lVar10 + lVar19 * 8 + 0x20);
                if (lVar10 == 0) goto LAB_0055dc8c;
                if (*(uint *)(lVar10 + 0x18) <= uVar7) goto LAB_0055dd40;
                lVar8 = lVar10 + lVar18 * 0xc;
                uVar26 = *(undefined4 *)(lVar8 + 0x24);
                uVar28 = *(undefined4 *)(lVar8 + 0x28);
                uVar9 = uStack_130;
                uVar24 = native_UnityEngine_Matrix4x4__MultiplyPoint3x4_8e5cec
                                   (*(undefined4 *)(lVar8 + 0x20),&uStack_f0,0);
                if (*(uint *)(lVar10 + 0x18) <= uVar7) goto LAB_0055dd40;
                *(undefined4 *)(lVar8 + 0x20) = uVar24;
                *(undefined4 *)(lVar8 + 0x24) = uVar26;
                *(undefined4 *)(lVar8 + 0x28) = uVar28;
                lVar10 = *(long *)(param_1 + 0x30);
                if (lVar10 == 0) goto LAB_0055dc8c;
                if (*(uint *)(lVar10 + 0x18) <= uVar6) goto LAB_0055dd40;
                lVar10 = *(long *)(lVar10 + lVar19 * 8 + 0x20);
                if (lVar10 == 0) goto LAB_0055dc8c;
                if (*(uint *)(lVar10 + 0x18) <= uVar1) goto LAB_0055dd40;
                lVar8 = lVar10 + lVar11 * 0xc;
                uVar26 = *(undefined4 *)(lVar8 + 0x24);
                uVar28 = *(undefined4 *)(lVar8 + 0x28);
                uVar24 = native_UnityEngine_Matrix4x4__MultiplyPoint3x4_8e5cec
                                   (*(undefined4 *)(lVar8 + 0x20),&uStack_f0,0);
                if (*(uint *)(lVar10 + 0x18) <= uVar1) goto LAB_0055dd40;
                *(undefined4 *)(lVar8 + 0x20) = uVar24;
                *(undefined4 *)(lVar8 + 0x24) = uVar26;
                *(undefined4 *)(lVar8 + 0x28) = uVar28;
                lVar10 = *(long *)(param_1 + 0x30);
                if (lVar10 == 0) goto LAB_0055dc8c;
                if (*(uint *)(lVar10 + 0x18) <= uVar6) goto LAB_0055dd40;
                lVar10 = *(long *)(lVar10 + lVar19 * 8 + 0x20);
                if (lVar10 == 0) goto LAB_0055dc8c;
                if (*(uint *)(lVar10 + 0x18) <= uVar2) goto LAB_0055dd40;
                lVar8 = lVar10 + lVar12 * 0xc;
                uVar26 = *(undefined4 *)(lVar8 + 0x24);
                uVar28 = *(undefined4 *)(lVar8 + 0x28);
                uVar24 = native_UnityEngine_Matrix4x4__MultiplyPoint3x4_8e5cec
                                   (*(undefined4 *)(lVar8 + 0x20),&uStack_f0,0);
                if (*(uint *)(lVar10 + 0x18) <= uVar2) goto LAB_0055dd40;
                *(undefined4 *)(lVar8 + 0x20) = uVar24;
                *(undefined4 *)(lVar8 + 0x24) = uVar26;
                *(undefined4 *)(lVar8 + 0x28) = uVar28;
                lVar10 = *(long *)(param_1 + 0x30);
                if (lVar10 == 0) goto LAB_0055dc8c;
                if (*(uint *)(lVar10 + 0x18) <= uVar6) goto LAB_0055dd40;
                lVar10 = *(long *)(lVar10 + lVar19 * 8 + 0x20);
                if (lVar10 == 0) goto LAB_0055dc8c;
                if (*(uint *)(lVar10 + 0x18) <= uVar3) goto LAB_0055dd40;
                lVar8 = lVar10 + lVar13 * 0xc;
                uVar26 = *(undefined4 *)(lVar8 + 0x24);
                uVar28 = *(undefined4 *)(lVar8 + 0x28);
                uVar24 = native_UnityEngine_Matrix4x4__MultiplyPoint3x4_8e5cec
                                   (*(undefined4 *)(lVar8 + 0x20),&uStack_f0,0);
                if (*(uint *)(lVar10 + 0x18) <= uVar3) goto LAB_0055dd40;
                *(undefined4 *)(lVar8 + 0x20) = uVar24;
                *(undefined4 *)(lVar8 + 0x24) = uVar26;
                *(undefined4 *)(lVar8 + 0x28) = uVar28;
                lVar10 = *(long *)(param_1 + 0x30);
                if (lVar10 == 0) goto LAB_0055dc8c;
                if (*(uint *)(lVar10 + 0x18) <= uVar6) goto LAB_0055dd40;
                lVar10 = *(long *)(lVar10 + lVar19 * 8 + 0x20);
                if (lVar10 == 0) goto LAB_0055dc8c;
                if (*(uint *)(lVar10 + 0x18) <= uVar7) goto LAB_0055dd40;
                lVar10 = lVar10 + lVar18 * 0xc;
                *(ulong *)(lVar10 + 0x20) =
                     CONCAT44(fVar32 + (float)((ulong)*(undefined8 *)(lVar10 + 0x20) >> 0x20),
                              fVar22 + (float)*(undefined8 *)(lVar10 + 0x20));
                *(float *)(lVar10 + 0x28) = fVar29 + *(float *)(lVar10 + 0x28);
                lVar10 = *(long *)(param_1 + 0x30);
                if (lVar10 == 0) goto LAB_0055dc8c;
                if (*(uint *)(lVar10 + 0x18) <= uVar6) goto LAB_0055dd40;
                lVar10 = *(long *)(lVar10 + lVar19 * 8 + 0x20);
                if (lVar10 == 0) goto LAB_0055dc8c;
                if (*(uint *)(lVar10 + 0x18) <= uVar1) goto LAB_0055dd40;
                lVar10 = lVar10 + lVar11 * 0xc;
                *(ulong *)(lVar10 + 0x20) =
                     CONCAT44(fVar32 + (float)((ulong)*(undefined8 *)(lVar10 + 0x20) >> 0x20),
                              fVar22 + (float)*(undefined8 *)(lVar10 + 0x20));
                *(float *)(lVar10 + 0x28) = fVar29 + *(float *)(lVar10 + 0x28);
                lVar10 = *(long *)(param_1 + 0x30);
                if (lVar10 == 0) goto LAB_0055dc8c;
                if (*(uint *)(lVar10 + 0x18) <= uVar6) goto LAB_0055dd40;
                lVar10 = *(long *)(lVar10 + lVar19 * 8 + 0x20);
                if (lVar10 == 0) goto LAB_0055dc8c;
                if (*(uint *)(lVar10 + 0x18) <= uVar2) goto LAB_0055dd40;
                lVar10 = lVar10 + lVar12 * 0xc;
                *(ulong *)(lVar10 + 0x20) =
                     CONCAT44(fVar32 + (float)((ulong)*(undefined8 *)(lVar10 + 0x20) >> 0x20),
                              fVar22 + (float)*(undefined8 *)(lVar10 + 0x20));
                *(float *)(lVar10 + 0x28) = fVar29 + *(float *)(lVar10 + 0x28);
                lVar10 = *(long *)(param_1 + 0x30);
                if (lVar10 == 0) goto LAB_0055dc8c;
                if (*(uint *)(lVar10 + 0x18) <= uVar6) goto LAB_0055dd40;
                lVar10 = *(long *)(lVar10 + lVar19 * 8 + 0x20);
                if (lVar10 == 0) goto LAB_0055dc8c;
                if (*(uint *)(lVar10 + 0x18) <= uVar3) goto LAB_0055dd40;
                lVar10 = lVar10 + lVar13 * 0xc;
                *(ulong *)(lVar10 + 0x20) =
                     CONCAT44(fVar32 + (float)((ulong)*(undefined8 *)(lVar10 + 0x20) >> 0x20),
                              fVar22 + (float)*(undefined8 *)(lVar10 + 0x20));
                *(float *)(lVar10 + 0x28) = fVar29 + *(float *)(lVar10 + 0x28);
              }
              uVar15 = uVar15 + 1;
            } while ((int)uVar15 <= (int)uVar5);
          }
          lVar10 = *plVar16;
          uStack_168 = uStack_168 + 1;
          in_d3 = uVar9;
        } while ((int)uStack_168 < iVar4);
        if (lVar10 == 0) goto LAB_0055dc8c;
      }
      uVar17 = 0;
      lVar18 = 0x20;
      while (lVar10 = *(long *)(lVar10 + 0x60), lVar10 != 0) {
        uVar15 = (uint)uVar17;
        if ((int)*(uint *)(lVar10 + 0x18) <= (int)uVar15) {
          uVar9 = native_sub_432808(_UnityEngine_WaitForSeconds_TypeInfo_12d6740);
          native_UnityEngine_WaitForSeconds___ctor_7775c8(0x3dcccccd,uVar9,0);
          *(undefined8 *)(param_1 + 0x18) = uVar9;
          native_sub_4326e0((undefined8 *)(param_1 + 0x18),uVar9);
          uVar23 = 2;
          goto LAB_0055dd00;
        }
        if (*(uint *)(lVar10 + 0x18) <= uVar15) {
LAB_0055dd40:
          uVar9 = native_sub_43283c();
                    /* WARNING: Subroutine does not return */
          native_sub_4327dc(uVar9,0);
        }
        lVar19 = *(long *)(param_1 + 0x30);
        if (lVar19 == 0) break;
        if (*(uint *)(lVar19 + 0x18) <= uVar15) goto LAB_0055dd40;
        if (*(long *)(lVar10 + lVar18) == 0) break;
        native_UnityEngine_Mesh__set_vertices_8e7530
                  (*(long *)(lVar10 + lVar18),*(undefined8 *)(lVar19 + uVar17 * 8 + 0x20),0);
        if ((*plVar16 == 0) || (lVar10 = *(long *)(*plVar16 + 0x60), lVar10 == 0)) break;
        if (*(uint *)(lVar10 + 0x18) <= uVar15) goto LAB_0055dd40;
        plVar21 = *(long **)(lVar14 + 0x28);
        if (plVar21 == (long *)0x0) break;
        (**(code **)(*plVar21 + 0x7e8))
                  (plVar21,*(undefined8 *)(lVar10 + lVar18),uVar17 & 0xffffffff,
                   *(undefined8 *)(*plVar21 + 0x7f0));
        lVar10 = *plVar16;
        uVar17 = uVar17 + 1;
        lVar18 = lVar18 + 0x50;
        if (lVar10 == 0) break;
      }
    }
  }
  else {
    plVar16 = (long *)(param_1 + 0x30);
    if (*plVar16 != 0) {
      plVar21 = (long *)(param_1 + 0x28);
      lVar10 = *plVar21;
      if ((lVar10 != 0) && (*(long *)(lVar10 + 0x60) != 0)) {
        if (*(int *)(*plVar16 + 0x18) < *(int *)(*(long *)(lVar10 + 0x60) + 0x18)) {
          lVar10 = native_sub_432750(_UnityEngine_Vector3_____TypeInfo_12d2fd8);
          *plVar16 = lVar10;
          native_sub_4326e0(plVar16,lVar10);
          lVar10 = *plVar21;
          if (lVar10 == 0) goto LAB_0055dc8c;
        }
        uVar15 = 0;
        lVar18 = 0x30;
        lVar19 = 0x20;
        do {
          lVar10 = *(long *)(lVar10 + 0x60);
          if (lVar10 == 0) break;
          if ((int)*(uint *)(lVar10 + 0x18) <= (int)uVar15) {
            *(undefined1 *)(lVar14 + 0x30) = 0;
            goto LAB_0055d548;
          }
          if (*(uint *)(lVar10 + 0x18) <= uVar15) goto LAB_0055dd40;
          if (*(long *)(lVar10 + lVar18) == 0) break;
          plVar20 = (long *)*plVar16;
          lVar10 = native_sub_432750(_UnityEngine_Vector3___TypeInfo_12d3478,
                                     *(undefined4 *)(*(long *)(lVar10 + lVar18) + 0x18));
          if (plVar20 == (long *)0x0) break;
          if ((lVar10 != 0) &&
             (lVar8 = native_sub_4327f8(lVar10,*(undefined8 *)(*plVar20 + 0x40)), lVar8 == 0)) {
            uVar9 = native_sub_432830();
                    /* WARNING: Subroutine does not return */
            native_sub_4327dc(uVar9,0);
          }
          if (*(uint *)(plVar20 + 3) <= uVar15) goto LAB_0055dd40;
          *(long *)((long)plVar20 + lVar19) = lVar10;
          native_sub_4326e0((long *)((long)plVar20 + lVar19),lVar10);
          lVar10 = *plVar21;
          uVar15 = uVar15 + 1;
          lVar18 = lVar18 + 0x50;
          lVar19 = lVar19 + 8;
        } while (lVar10 != 0);
      }
    }
  }
LAB_0055dc8c:
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* TMPro.Examples.VertexShakeA.<AnimateVertexColors>d__11$$System.Collections.Generic.IEnumerator<System.Object>.get_Current @ 0x55dd58
 * Il2CppObject* TMPro_Examples_VertexShakeA__AnimateVertexColors_d__11__System_Collections_Generic_IEnumerator_System_Object__get_Current (TMPro_Examples_VertexShakeA__AnimateVertexColors_d__11_o* __this, const MethodInfo* method); */

/* TMPro.Examples.VertexShakeA.<AnimateVertexColors>d__11$$System.Collections.Generic.IEnumerator<System.Object>.get_Current
   Il2CppObject*
   TMPro_Examples_VertexShakeA__AnimateVertexColors_d__11__System_Collections_Generic_IEnumerator_System_Object__get_Current
   (TMPro_Examples_VertexShakeA__AnimateVertexColors_d__11_o* __this, const MethodInfo* method); */

undefined8
native_TMPro_Examples_VertexShakeA__AnimateVertexColors_d__11__System_Collections_Generic_IEnumerator_System_Object__get_Current_55dd58
          (long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* TMPro.Examples.VertexShakeA.<AnimateVertexColors>d__11$$System.Collections.IEnumerator.Reset @ 0x55dd60
 * void TMPro_Examples_VertexShakeA__AnimateVertexColors_d__11__System_Collections_IEnumerator_Reset (TMPro_Examples_VertexShakeA__AnimateVertexColors_d__11_o* __this, const MethodInfo* method); */

/* TMPro.Examples.VertexShakeA.<AnimateVertexColors>d__11$$System.Collections.IEnumerator.Reset
   void TMPro_Examples_VertexShakeA__AnimateVertexColors_d__11__System_Collections_IEnumerator_Reset
   (TMPro_Examples_VertexShakeA__AnimateVertexColors_d__11_o* __this, const MethodInfo* method); */

void native_TMPro_Examples_VertexShakeA__AnimateVertexColors_d__11__System_Collections_IEnumerator_Reset_55dd60
               (void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  native_sub_432740(&System_NotSupportedException_TypeInfo_12d5468);
  uVar1 = native_sub_432808();
  native_System_NotSupportedException___ctor_ad264c(uVar1,0);
  uVar2 = native_sub_432740(&
                            Method_TMPro_Examples_VertexShakeA__AnimateVertexColors_d__11_System_Collections_IEnumerator_Reset___12ea1d8
                           );
                    /* WARNING: Subroutine does not return */
  native_sub_4327dc(uVar1,uVar2);
}



/* TMPro.Examples.VertexShakeA.<AnimateVertexColors>d__11$$System.Collections.IEnumerator.get_Current @ 0x55dda0
 * Il2CppObject* TMPro_Examples_VertexShakeA__AnimateVertexColors_d__11__System_Collections_IEnumerator_get_Current (TMPro_Examples_VertexShakeA__AnimateVertexColors_d__11_o* __this, const MethodInfo* method); */

/* TMPro.Examples.VertexShakeA.<AnimateVertexColors>d__11$$System.Collections.IEnumerator.get_Current
   Il2CppObject*
   TMPro_Examples_VertexShakeA__AnimateVertexColors_d__11__System_Collections_IEnumerator_get_Current
   (TMPro_Examples_VertexShakeA__AnimateVertexColors_d__11_o* __this, const MethodInfo* method); */

undefined8
native_TMPro_Examples_VertexShakeA__AnimateVertexColors_d__11__System_Collections_IEnumerator_get_Current_55dda0
          (long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}


