/* ARM64 IL2CPP native pseudocode from Ghidra.
 * Recovered implementation, not original C# source.
 * Function boundaries follow the IL2CPP method address table. */


/* TMPro.Examples.VertexShakeB.<AnimateVertexColors>d__10$$.ctor @ 0x55dda8
 * void TMPro_Examples_VertexShakeB__AnimateVertexColors_d__10___ctor (TMPro_Examples_VertexShakeB__AnimateVertexColors_d__10_o* __this, int32_t __1__state, const MethodInfo* method); */

/* TMPro.Examples.VertexShakeB.<AnimateVertexColors>d__10$$.ctor
   void TMPro_Examples_VertexShakeB__AnimateVertexColors_d__10___ctor
   (TMPro_Examples_VertexShakeB__AnimateVertexColors_d__10_o* __this, int32_t __1__state, const
   MethodInfo* method); */

void native_TMPro_Examples_VertexShakeB__AnimateVertexColors_d__10___ctor_55dda8
               (long param_1,undefined4 param_2)

{
  native_System_Object___ctor_ad2798(param_1,0);
  *(undefined4 *)(param_1 + 0x10) = param_2;
  return;
}



/* TMPro.Examples.VertexShakeB.<AnimateVertexColors>d__10$$System.IDisposable.Dispose @ 0x55ddd4
 * void TMPro_Examples_VertexShakeB__AnimateVertexColors_d__10__System_IDisposable_Dispose (TMPro_Examples_VertexShakeB__AnimateVertexColors_d__10_o* __this, const MethodInfo* method); */

/* TMPro.Examples.VertexShakeB.<AnimateVertexColors>d__10$$System.IDisposable.Dispose
   void TMPro_Examples_VertexShakeB__AnimateVertexColors_d__10__System_IDisposable_Dispose
   (TMPro_Examples_VertexShakeB__AnimateVertexColors_d__10_o* __this, const MethodInfo* method); */

void native_TMPro_Examples_VertexShakeB__AnimateVertexColors_d__10__System_IDisposable_Dispose_55ddd4
               (void)

{
  return;
}



/* TMPro.Examples.VertexShakeB.<AnimateVertexColors>d__10$$MoveNext @ 0x55ddd8
 * bool TMPro_Examples_VertexShakeB__AnimateVertexColors_d__10__MoveNext (TMPro_Examples_VertexShakeB__AnimateVertexColors_d__10_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TMPro.Examples.VertexShakeB.<AnimateVertexColors>d__10$$MoveNext
   bool TMPro_Examples_VertexShakeB__AnimateVertexColors_d__10__MoveNext
   (TMPro_Examples_VertexShakeB__AnimateVertexColors_d__10_o* __this, const MethodInfo* method); */

undefined8
native_TMPro_Examples_VertexShakeB__AnimateVertexColors_d__10__MoveNext_55ddd8(long param_1)

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
  undefined8 *puVar11;
  long lVar12;
  float *pfVar13;
  long lVar14;
  long lVar15;
  uint uVar16;
  long *plVar17;
  ulong uVar18;
  long lVar19;
  long lVar20;
  long lVar21;
  long *plVar22;
  long *plVar23;
  undefined4 uVar24;
  undefined4 uVar25;
  undefined4 uVar26;
  undefined8 uVar27;
  undefined4 uVar28;
  float fVar29;
  undefined4 uVar30;
  float fVar33;
  undefined8 uVar31;
  ulong uVar32;
  undefined4 uVar34;
  ulong uVar35;
  undefined4 uVar36;
  float fVar37;
  undefined8 in_d3;
  float fVar38;
  float fVar39;
  float fVar40;
  undefined8 uVar41;
  float fVar42;
  float fVar43;
  float fVar44;
  uint uStack_184;
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
  
  if ((bRam000000000133ea11 & 1) == 0) {
    native_sub_43273c(&UnityEngine_Vector3_____TypeInfo_12d2fd8);
    native_sub_43273c(&UnityEngine_Vector3___TypeInfo_12d3478);
    native_sub_43273c(&UnityEngine_WaitForSeconds_TypeInfo_12d6740);
    bRam000000000133ea11 = 1;
  }
  uStack_c8 = 0;
  uStack_d0 = 0;
  uStack_b8 = 0;
  uStack_c0 = 0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  uStack_d8 = 0;
  uStack_e0 = 0;
  lVar19 = *(long *)(param_1 + 0x20);
  if (*(int *)(param_1 + 0x10) - 1U < 2) {
    *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
    if (lVar19 == 0) goto LAB_0055ebc0;
  }
  else {
    if (*(int *)(param_1 + 0x10) != 0) {
      return 0;
    }
    *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
    if ((lVar19 == 0) || (plVar17 = *(long **)(lVar19 + 0x28), plVar17 == (long *)0x0))
    goto LAB_0055ebc0;
    (**(code **)(*plVar17 + 0x7d8))(plVar17,0,0,*(undefined8 *)(*plVar17 + 0x7e0));
    if (*(long *)(lVar19 + 0x28) == 0) goto LAB_0055ebc0;
    *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(*(long *)(lVar19 + 0x28) + 0x360);
    native_sub_4326e0((undefined8 *)(param_1 + 0x28));
    uVar9 = native_sub_432750(_UnityEngine_Vector3_____TypeInfo_12d2fd8,0);
    *(undefined8 *)(param_1 + 0x30) = uVar9;
    native_sub_4326e0(param_1 + 0x30);
    *(undefined1 *)(lVar19 + 0x30) = 1;
  }
  if (*(char *)(lVar19 + 0x30) == '\0') {
LAB_0055e000:
    plVar17 = (long *)(param_1 + 0x28);
    lVar10 = *plVar17;
    if (lVar10 != 0) {
      if (*(int *)(lVar10 + 0x18) == 0) {
        uVar9 = native_sub_432808(_UnityEngine_WaitForSeconds_TypeInfo_12d6740);
        native_UnityEngine_WaitForSeconds___ctor_7775c8(0x3e800000,uVar9,0);
        *(undefined8 *)(param_1 + 0x18) = uVar9;
        native_sub_4326e0((undefined8 *)(param_1 + 0x18),uVar9);
        uVar24 = 1;
LAB_0055ec34:
        *(undefined4 *)(param_1 + 0x10) = uVar24;
        return 1;
      }
      iVar4 = *(int *)(lVar10 + 0x2c);
      if (0 < iVar4) {
        plVar23 = (long *)(param_1 + 0x30);
        uStack_184 = 0;
        do {
          if ((lVar10 == 0) || (lVar20 = *(long *)(lVar10 + 0x50), lVar20 == 0)) goto LAB_0055ebc0;
          if (*(uint *)(lVar20 + 0x18) <= uStack_184) goto LAB_0055ec74;
          lVar10 = *(long *)(lVar10 + 0x38);
          if (lVar10 == 0) goto LAB_0055ebc0;
          lVar20 = lVar20 + (long)(int)uStack_184 * 0x5c;
          uVar16 = *(uint *)(lVar20 + 0x34);
          if (*(uint *)(lVar10 + 0x18) <= uVar16) goto LAB_0055ec74;
          uVar5 = *(uint *)(lVar20 + 0x3c);
          if (*(uint *)(lVar10 + 0x18) <= uVar5) goto LAB_0055ec74;
          lVar20 = lVar10 + 0x20 + (long)(int)uVar16 * 0x178;
          lVar10 = lVar10 + 0x20 + (long)(int)uVar5 * 0x178;
          uVar9 = *(undefined8 *)(lVar20 + 0xfc);
          fVar40 = *(float *)(lVar20 + 0x104);
          uVar41 = *(undefined8 *)(lVar10 + 0x108);
          fVar42 = *(float *)(lVar10 + 0x110);
          uVar24 = native_UnityEngine_Random__Range_76305c(0xbe800000,0x3e800000,0);
          uVar28 = 0;
          uVar25 = native_UnityEngine_Quaternion__Euler_762bc4(0,0);
          uVar36 = (undefined4)in_d3;
          if ((int)uVar16 <= (int)uVar5) {
            fVar43 = ((float)uVar9 + (float)uVar41) * 0.5;
            fVar44 = ((float)((ulong)uVar9 >> 0x20) + (float)((ulong)uVar41 >> 0x20)) * 0.5;
            fVar40 = (fVar40 + fVar42) * 0.5;
            do {
              lVar10 = *plVar17;
              if ((lVar10 == 0) || (lVar20 = *(long *)(lVar10 + 0x38), lVar20 == 0))
              goto LAB_0055ebc0;
              if (*(uint *)(lVar20 + 0x18) <= uVar16) goto LAB_0055ec74;
              if (*(char *)(lVar20 + (long)(int)uVar16 * 0x178 + 0x194) != '\0') {
                lVar10 = *(long *)(lVar10 + 0x60);
                if (lVar10 == 0) goto LAB_0055ebc0;
                lVar20 = lVar20 + (long)(int)uVar16 * 0x178;
                uVar6 = *(uint *)(lVar20 + 0x58);
                lVar21 = (long)(int)uVar6;
                if (*(uint *)(lVar10 + 0x18) <= uVar6) goto LAB_0055ec74;
                lVar10 = *(long *)(lVar10 + lVar21 * 0x50 + 0x30);
                if (lVar10 == 0) goto LAB_0055ebc0;
                uVar7 = *(uint *)(lVar20 + 0x6c);
                lVar20 = (long)(int)uVar7;
                if ((*(uint *)(lVar10 + 0x18) <= uVar7) ||
                   (uVar1 = uVar7 + 2, *(uint *)(lVar10 + 0x18) <= uVar1)) goto LAB_0055ec74;
                lVar15 = (long)(int)uVar1;
                lVar12 = lVar10 + lVar20 * 0xc;
                lVar8 = lVar10 + lVar15 * 0xc;
                uVar9 = *(undefined8 *)(lVar12 + 0x20);
                fVar42 = *(float *)(lVar12 + 0x28);
                puVar11 = (undefined8 *)(lVar8 + 0x20);
                uVar41 = *puVar11;
                pfVar13 = (float *)(lVar8 + 0x28);
                lVar8 = *plVar23;
                if (lVar8 == 0) goto LAB_0055ebc0;
                if (*(uint *)(lVar8 + 0x18) <= uVar6) goto LAB_0055ec74;
                lVar8 = *(long *)(lVar8 + lVar21 * 8 + 0x20);
                if (lVar8 == 0) goto LAB_0055ebc0;
                if (*(uint *)(lVar8 + 0x18) <= uVar7) goto LAB_0055ec74;
                fVar29 = (float)uVar9;
                fVar33 = (float)((ulong)uVar9 >> 0x20);
                fVar37 = fVar42 + *pfVar13;
                uVar32 = (ulong)(uint)fVar37;
                fVar38 = (fVar29 + (float)uVar41) * 0.5;
                fVar39 = (fVar33 + (float)((ulong)uVar41 >> 0x20)) * 0.5;
                fVar37 = fVar37 * 0.5;
                uVar18 = (ulong)(uint)fVar37;
                lVar8 = lVar8 + lVar20 * 0xc;
                *(ulong *)(lVar8 + 0x20) = CONCAT44(fVar33 - fVar39,fVar29 - fVar38);
                *(float *)(lVar8 + 0x28) = fVar42 - fVar37;
                lVar8 = *plVar23;
                if (lVar8 == 0) goto LAB_0055ebc0;
                if ((*(uint *)(lVar8 + 0x18) <= uVar6) ||
                   (uVar2 = uVar7 + 1, *(uint *)(lVar10 + 0x18) <= uVar2)) goto LAB_0055ec74;
                lVar8 = *(long *)(lVar8 + lVar21 * 8 + 0x20);
                if (lVar8 == 0) goto LAB_0055ebc0;
                lVar12 = (long)(int)uVar2;
                if (*(uint *)(lVar8 + 0x18) <= uVar2) goto LAB_0055ec74;
                lVar14 = lVar10 + lVar12 * 0xc;
                uVar9 = *(undefined8 *)(lVar14 + 0x20);
                fVar42 = *(float *)(lVar14 + 0x28);
                lVar8 = lVar8 + lVar12 * 0xc;
                *(ulong *)(lVar8 + 0x20) =
                     CONCAT44((float)((ulong)uVar9 >> 0x20) - fVar39,(float)uVar9 - fVar38);
                *(float *)(lVar8 + 0x28) = fVar42 - fVar37;
                lVar8 = *plVar23;
                if (lVar8 == 0) goto LAB_0055ebc0;
                if ((*(uint *)(lVar8 + 0x18) <= uVar6) || (*(uint *)(lVar10 + 0x18) <= uVar1))
                goto LAB_0055ec74;
                lVar8 = *(long *)(lVar8 + lVar21 * 8 + 0x20);
                if (lVar8 == 0) goto LAB_0055ebc0;
                if (*(uint *)(lVar8 + 0x18) <= uVar1) goto LAB_0055ec74;
                uVar9 = *puVar11;
                fVar42 = *pfVar13;
                lVar8 = lVar8 + lVar15 * 0xc;
                *(ulong *)(lVar8 + 0x20) =
                     CONCAT44((float)((ulong)uVar9 >> 0x20) - fVar39,(float)uVar9 - fVar38);
                *(float *)(lVar8 + 0x28) = fVar42 - fVar37;
                lVar8 = *plVar23;
                if (lVar8 == 0) goto LAB_0055ebc0;
                if ((*(uint *)(lVar8 + 0x18) <= uVar6) ||
                   (uVar3 = uVar7 + 3, *(uint *)(lVar10 + 0x18) <= uVar3)) goto LAB_0055ec74;
                lVar8 = *(long *)(lVar8 + lVar21 * 8 + 0x20);
                if (lVar8 == 0) goto LAB_0055ebc0;
                lVar14 = (long)(int)uVar3;
                if (*(uint *)(lVar8 + 0x18) <= uVar3) goto LAB_0055ec74;
                lVar10 = lVar10 + lVar14 * 0xc;
                uVar9 = *(undefined8 *)(lVar10 + 0x20);
                fVar42 = *(float *)(lVar10 + 0x28);
                lVar8 = lVar8 + lVar14 * 0xc;
                *(ulong *)(lVar8 + 0x20) =
                     CONCAT44((float)((ulong)uVar9 >> 0x20) - fVar39,(float)uVar9 - fVar38);
                *(float *)(lVar8 + 0x28) = fVar42 - fVar37;
                uVar31 = 0x3f866666;
                native_UnityEngine_Random__Range_76305c(0x3f733333,0);
                uVar41 = native_UnityEngine_Vector3__get_one_776a20(0);
                uVar9 = uVar31;
                uVar35 = uVar18;
                uVar27 = native_UnityEngine_Quaternion__get_identity_7628fc(0);
                native_UnityEngine_Vector3__get_one_776a20(0);
                native_UnityEngine_Matrix4x4__TRS_8e56d4
                          (&uStack_130,uVar41,uVar31,uVar18,uVar27,uVar9,uVar35,uVar32,0);
                uStack_c8 = uStack_108;
                uStack_d0 = uStack_110;
                uStack_b8 = uStack_f8;
                uStack_c0 = uStack_100;
                uStack_e8 = uStack_128;
                uStack_f0 = uStack_130;
                uStack_d8 = uStack_118;
                uStack_e0 = uStack_120;
                lVar10 = *plVar23;
                if (lVar10 == 0) goto LAB_0055ebc0;
                if (*(uint *)(lVar10 + 0x18) <= uVar6) goto LAB_0055ec74;
                lVar10 = *(long *)(lVar10 + lVar21 * 8 + 0x20);
                if (lVar10 == 0) goto LAB_0055ebc0;
                if (*(uint *)(lVar10 + 0x18) <= uVar7) goto LAB_0055ec74;
                lVar8 = lVar10 + lVar20 * 0xc;
                uVar30 = *(undefined4 *)(lVar8 + 0x24);
                uVar34 = *(undefined4 *)(lVar8 + 0x28);
                uVar26 = native_UnityEngine_Matrix4x4__MultiplyPoint3x4_8e5cec
                                   (*(undefined4 *)(lVar8 + 0x20),&uStack_f0,0);
                if (*(uint *)(lVar10 + 0x18) <= uVar7) goto LAB_0055ec74;
                *(undefined4 *)(lVar8 + 0x20) = uVar26;
                *(undefined4 *)(lVar8 + 0x24) = uVar30;
                *(undefined4 *)(lVar8 + 0x28) = uVar34;
                lVar10 = *plVar23;
                if (lVar10 == 0) goto LAB_0055ebc0;
                if (*(uint *)(lVar10 + 0x18) <= uVar6) goto LAB_0055ec74;
                lVar10 = *(long *)(lVar10 + lVar21 * 8 + 0x20);
                if (lVar10 == 0) goto LAB_0055ebc0;
                if (*(uint *)(lVar10 + 0x18) <= uVar2) goto LAB_0055ec74;
                lVar8 = lVar10 + lVar12 * 0xc;
                uVar30 = *(undefined4 *)(lVar8 + 0x24);
                uVar34 = *(undefined4 *)(lVar8 + 0x28);
                uVar26 = native_UnityEngine_Matrix4x4__MultiplyPoint3x4_8e5cec
                                   (*(undefined4 *)(lVar8 + 0x20),&uStack_f0,0);
                if (*(uint *)(lVar10 + 0x18) <= uVar2) goto LAB_0055ec74;
                *(undefined4 *)(lVar8 + 0x20) = uVar26;
                *(undefined4 *)(lVar8 + 0x24) = uVar30;
                *(undefined4 *)(lVar8 + 0x28) = uVar34;
                lVar10 = *plVar23;
                if (lVar10 == 0) goto LAB_0055ebc0;
                if (*(uint *)(lVar10 + 0x18) <= uVar6) goto LAB_0055ec74;
                lVar10 = *(long *)(lVar10 + lVar21 * 8 + 0x20);
                if (lVar10 == 0) goto LAB_0055ebc0;
                if (*(uint *)(lVar10 + 0x18) <= uVar1) goto LAB_0055ec74;
                lVar8 = lVar10 + lVar15 * 0xc;
                uVar30 = *(undefined4 *)(lVar8 + 0x24);
                uVar34 = *(undefined4 *)(lVar8 + 0x28);
                uVar26 = native_UnityEngine_Matrix4x4__MultiplyPoint3x4_8e5cec
                                   (*(undefined4 *)(lVar8 + 0x20),&uStack_f0,0);
                if (*(uint *)(lVar10 + 0x18) <= uVar1) goto LAB_0055ec74;
                *(undefined4 *)(lVar8 + 0x20) = uVar26;
                *(undefined4 *)(lVar8 + 0x24) = uVar30;
                *(undefined4 *)(lVar8 + 0x28) = uVar34;
                lVar10 = *plVar23;
                if (lVar10 == 0) goto LAB_0055ebc0;
                if (*(uint *)(lVar10 + 0x18) <= uVar6) goto LAB_0055ec74;
                lVar10 = *(long *)(lVar10 + lVar21 * 8 + 0x20);
                if (lVar10 == 0) goto LAB_0055ebc0;
                if (*(uint *)(lVar10 + 0x18) <= uVar3) goto LAB_0055ec74;
                lVar8 = lVar10 + lVar14 * 0xc;
                uVar30 = *(undefined4 *)(lVar8 + 0x24);
                uVar34 = *(undefined4 *)(lVar8 + 0x28);
                uVar26 = native_UnityEngine_Matrix4x4__MultiplyPoint3x4_8e5cec
                                   (*(undefined4 *)(lVar8 + 0x20),&uStack_f0,0);
                if (*(uint *)(lVar10 + 0x18) <= uVar3) goto LAB_0055ec74;
                *(undefined4 *)(lVar8 + 0x20) = uVar26;
                *(undefined4 *)(lVar8 + 0x24) = uVar30;
                *(undefined4 *)(lVar8 + 0x28) = uVar34;
                lVar10 = *plVar23;
                if (lVar10 == 0) goto LAB_0055ebc0;
                uVar18 = (ulong)(uint)fVar37;
                if (*(uint *)(lVar10 + 0x18) <= uVar6) goto LAB_0055ec74;
                lVar10 = *(long *)(lVar10 + lVar21 * 8 + 0x20);
                if (lVar10 == 0) goto LAB_0055ebc0;
                if (*(uint *)(lVar10 + 0x18) <= uVar7) goto LAB_0055ec74;
                lVar10 = lVar10 + lVar20 * 0xc;
                *(ulong *)(lVar10 + 0x20) =
                     CONCAT44(fVar39 + (float)((ulong)*(undefined8 *)(lVar10 + 0x20) >> 0x20),
                              fVar38 + (float)*(undefined8 *)(lVar10 + 0x20));
                *(float *)(lVar10 + 0x28) = fVar37 + *(float *)(lVar10 + 0x28);
                lVar10 = *plVar23;
                if (lVar10 == 0) goto LAB_0055ebc0;
                if (*(uint *)(lVar10 + 0x18) <= uVar6) goto LAB_0055ec74;
                lVar10 = *(long *)(lVar10 + lVar21 * 8 + 0x20);
                if (lVar10 == 0) goto LAB_0055ebc0;
                if (*(uint *)(lVar10 + 0x18) <= uVar2) goto LAB_0055ec74;
                lVar10 = lVar10 + lVar12 * 0xc;
                *(ulong *)(lVar10 + 0x20) =
                     CONCAT44(fVar39 + (float)((ulong)*(undefined8 *)(lVar10 + 0x20) >> 0x20),
                              fVar38 + (float)*(undefined8 *)(lVar10 + 0x20));
                *(float *)(lVar10 + 0x28) = fVar37 + *(float *)(lVar10 + 0x28);
                lVar10 = *plVar23;
                if (lVar10 == 0) goto LAB_0055ebc0;
                if (*(uint *)(lVar10 + 0x18) <= uVar6) goto LAB_0055ec74;
                lVar10 = *(long *)(lVar10 + lVar21 * 8 + 0x20);
                if (lVar10 == 0) goto LAB_0055ebc0;
                if (*(uint *)(lVar10 + 0x18) <= uVar1) goto LAB_0055ec74;
                lVar10 = lVar10 + lVar15 * 0xc;
                *(ulong *)(lVar10 + 0x20) =
                     CONCAT44(fVar39 + (float)((ulong)*(undefined8 *)(lVar10 + 0x20) >> 0x20),
                              fVar38 + (float)*(undefined8 *)(lVar10 + 0x20));
                *(float *)(lVar10 + 0x28) = fVar37 + *(float *)(lVar10 + 0x28);
                lVar10 = *plVar23;
                if (lVar10 == 0) goto LAB_0055ebc0;
                if (*(uint *)(lVar10 + 0x18) <= uVar6) goto LAB_0055ec74;
                lVar10 = *(long *)(lVar10 + lVar21 * 8 + 0x20);
                if (lVar10 == 0) goto LAB_0055ebc0;
                if (*(uint *)(lVar10 + 0x18) <= uVar3) goto LAB_0055ec74;
                lVar10 = lVar10 + lVar14 * 0xc;
                *(ulong *)(lVar10 + 0x20) =
                     CONCAT44(fVar39 + (float)((ulong)*(undefined8 *)(lVar10 + 0x20) >> 0x20),
                              fVar38 + (float)*(undefined8 *)(lVar10 + 0x20));
                *(float *)(lVar10 + 0x28) = fVar37 + *(float *)(lVar10 + 0x28);
                lVar10 = *plVar23;
                if (lVar10 == 0) goto LAB_0055ebc0;
                if (*(uint *)(lVar10 + 0x18) <= uVar6) goto LAB_0055ec74;
                lVar10 = *(long *)(lVar10 + lVar21 * 8 + 0x20);
                if (lVar10 == 0) goto LAB_0055ebc0;
                if (*(uint *)(lVar10 + 0x18) <= uVar7) goto LAB_0055ec74;
                lVar10 = lVar10 + lVar20 * 0xc;
                *(ulong *)(lVar10 + 0x20) =
                     CONCAT44((float)((ulong)*(undefined8 *)(lVar10 + 0x20) >> 0x20) - fVar44,
                              (float)*(undefined8 *)(lVar10 + 0x20) - fVar43);
                *(float *)(lVar10 + 0x28) = *(float *)(lVar10 + 0x28) - fVar40;
                lVar10 = *plVar23;
                if (lVar10 == 0) goto LAB_0055ebc0;
                if (*(uint *)(lVar10 + 0x18) <= uVar6) goto LAB_0055ec74;
                lVar10 = *(long *)(lVar10 + lVar21 * 8 + 0x20);
                if (lVar10 == 0) goto LAB_0055ebc0;
                if (*(uint *)(lVar10 + 0x18) <= uVar2) goto LAB_0055ec74;
                lVar10 = lVar10 + lVar12 * 0xc;
                *(ulong *)(lVar10 + 0x20) =
                     CONCAT44((float)((ulong)*(undefined8 *)(lVar10 + 0x20) >> 0x20) - fVar44,
                              (float)*(undefined8 *)(lVar10 + 0x20) - fVar43);
                *(float *)(lVar10 + 0x28) = *(float *)(lVar10 + 0x28) - fVar40;
                lVar10 = *plVar23;
                if (lVar10 == 0) goto LAB_0055ebc0;
                if (*(uint *)(lVar10 + 0x18) <= uVar6) goto LAB_0055ec74;
                lVar10 = *(long *)(lVar10 + lVar21 * 8 + 0x20);
                if (lVar10 == 0) goto LAB_0055ebc0;
                if (*(uint *)(lVar10 + 0x18) <= uVar1) goto LAB_0055ec74;
                lVar10 = lVar10 + lVar15 * 0xc;
                *(ulong *)(lVar10 + 0x20) =
                     CONCAT44((float)((ulong)*(undefined8 *)(lVar10 + 0x20) >> 0x20) - fVar44,
                              (float)*(undefined8 *)(lVar10 + 0x20) - fVar43);
                *(float *)(lVar10 + 0x28) = *(float *)(lVar10 + 0x28) - fVar40;
                lVar10 = *plVar23;
                if (lVar10 == 0) goto LAB_0055ebc0;
                if (*(uint *)(lVar10 + 0x18) <= uVar6) goto LAB_0055ec74;
                lVar10 = *(long *)(lVar10 + lVar21 * 8 + 0x20);
                if (lVar10 == 0) goto LAB_0055ebc0;
                if (*(uint *)(lVar10 + 0x18) <= uVar3) goto LAB_0055ec74;
                lVar10 = lVar10 + lVar14 * 0xc;
                fVar42 = *(float *)(lVar10 + 0x28) - fVar40;
                uVar32 = (ulong)(uint)fVar42;
                *(ulong *)(lVar10 + 0x20) =
                     CONCAT44((float)((ulong)*(undefined8 *)(lVar10 + 0x20) >> 0x20) - fVar44,
                              (float)*(undefined8 *)(lVar10 + 0x20) - fVar43);
                *(float *)(lVar10 + 0x28) = fVar42;
                uVar9 = native_UnityEngine_Vector3__get_one_776a20(0);
                native_UnityEngine_Vector3__get_one_776a20(0);
                native_UnityEngine_Matrix4x4__TRS_8e56d4
                          (&uStack_130,uVar9,uVar32,uVar18,uVar25,uVar28,uVar24,uVar36,0);
                uStack_c8 = uStack_108;
                uStack_d0 = uStack_110;
                uStack_b8 = uStack_f8;
                uStack_c0 = uStack_100;
                uStack_e8 = uStack_128;
                uStack_f0 = uStack_130;
                uStack_d8 = uStack_118;
                uStack_e0 = uStack_120;
                lVar10 = *plVar23;
                if (lVar10 == 0) goto LAB_0055ebc0;
                if (*(uint *)(lVar10 + 0x18) <= uVar6) goto LAB_0055ec74;
                lVar10 = *(long *)(lVar10 + lVar21 * 8 + 0x20);
                if (lVar10 == 0) goto LAB_0055ebc0;
                if (*(uint *)(lVar10 + 0x18) <= uVar7) goto LAB_0055ec74;
                lVar8 = lVar10 + lVar20 * 0xc;
                uVar30 = *(undefined4 *)(lVar8 + 0x24);
                uVar34 = *(undefined4 *)(lVar8 + 0x28);
                in_d3 = uStack_130;
                uVar26 = native_UnityEngine_Matrix4x4__MultiplyPoint3x4_8e5cec
                                   (*(undefined4 *)(lVar8 + 0x20),&uStack_f0,0);
                if (*(uint *)(lVar10 + 0x18) <= uVar7) goto LAB_0055ec74;
                *(undefined4 *)(lVar8 + 0x20) = uVar26;
                *(undefined4 *)(lVar8 + 0x24) = uVar30;
                *(undefined4 *)(lVar8 + 0x28) = uVar34;
                lVar10 = *plVar23;
                if (lVar10 == 0) goto LAB_0055ebc0;
                if (*(uint *)(lVar10 + 0x18) <= uVar6) goto LAB_0055ec74;
                lVar10 = *(long *)(lVar10 + lVar21 * 8 + 0x20);
                if (lVar10 == 0) goto LAB_0055ebc0;
                if (*(uint *)(lVar10 + 0x18) <= uVar2) goto LAB_0055ec74;
                lVar8 = lVar10 + lVar12 * 0xc;
                uVar30 = *(undefined4 *)(lVar8 + 0x24);
                uVar34 = *(undefined4 *)(lVar8 + 0x28);
                uVar26 = native_UnityEngine_Matrix4x4__MultiplyPoint3x4_8e5cec
                                   (*(undefined4 *)(lVar8 + 0x20),&uStack_f0,0);
                if (*(uint *)(lVar10 + 0x18) <= uVar2) goto LAB_0055ec74;
                *(undefined4 *)(lVar8 + 0x20) = uVar26;
                *(undefined4 *)(lVar8 + 0x24) = uVar30;
                *(undefined4 *)(lVar8 + 0x28) = uVar34;
                lVar10 = *plVar23;
                if (lVar10 == 0) goto LAB_0055ebc0;
                if (*(uint *)(lVar10 + 0x18) <= uVar6) goto LAB_0055ec74;
                lVar10 = *(long *)(lVar10 + lVar21 * 8 + 0x20);
                if (lVar10 == 0) goto LAB_0055ebc0;
                if (*(uint *)(lVar10 + 0x18) <= uVar1) goto LAB_0055ec74;
                lVar8 = lVar10 + lVar15 * 0xc;
                uVar30 = *(undefined4 *)(lVar8 + 0x24);
                uVar34 = *(undefined4 *)(lVar8 + 0x28);
                uVar26 = native_UnityEngine_Matrix4x4__MultiplyPoint3x4_8e5cec
                                   (*(undefined4 *)(lVar8 + 0x20),&uStack_f0,0);
                if (*(uint *)(lVar10 + 0x18) <= uVar1) goto LAB_0055ec74;
                *(undefined4 *)(lVar8 + 0x20) = uVar26;
                *(undefined4 *)(lVar8 + 0x24) = uVar30;
                *(undefined4 *)(lVar8 + 0x28) = uVar34;
                lVar10 = *plVar23;
                if (lVar10 == 0) goto LAB_0055ebc0;
                if (*(uint *)(lVar10 + 0x18) <= uVar6) goto LAB_0055ec74;
                lVar10 = *(long *)(lVar10 + lVar21 * 8 + 0x20);
                if (lVar10 == 0) goto LAB_0055ebc0;
                if (*(uint *)(lVar10 + 0x18) <= uVar3) goto LAB_0055ec74;
                lVar8 = lVar10 + lVar14 * 0xc;
                uVar30 = *(undefined4 *)(lVar8 + 0x24);
                uVar34 = *(undefined4 *)(lVar8 + 0x28);
                uVar26 = native_UnityEngine_Matrix4x4__MultiplyPoint3x4_8e5cec
                                   (*(undefined4 *)(lVar8 + 0x20),&uStack_f0,0);
                if (*(uint *)(lVar10 + 0x18) <= uVar3) goto LAB_0055ec74;
                *(undefined4 *)(lVar8 + 0x20) = uVar26;
                *(undefined4 *)(lVar8 + 0x24) = uVar30;
                *(undefined4 *)(lVar8 + 0x28) = uVar34;
                lVar10 = *plVar23;
                if (lVar10 == 0) goto LAB_0055ebc0;
                if (*(uint *)(lVar10 + 0x18) <= uVar6) goto LAB_0055ec74;
                lVar10 = *(long *)(lVar10 + lVar21 * 8 + 0x20);
                if (lVar10 == 0) goto LAB_0055ebc0;
                if (*(uint *)(lVar10 + 0x18) <= uVar7) goto LAB_0055ec74;
                lVar10 = lVar10 + lVar20 * 0xc;
                *(ulong *)(lVar10 + 0x20) =
                     CONCAT44(fVar44 + (float)((ulong)*(undefined8 *)(lVar10 + 0x20) >> 0x20),
                              fVar43 + (float)*(undefined8 *)(lVar10 + 0x20));
                *(float *)(lVar10 + 0x28) = fVar40 + *(float *)(lVar10 + 0x28);
                lVar10 = *plVar23;
                if (lVar10 == 0) goto LAB_0055ebc0;
                if (*(uint *)(lVar10 + 0x18) <= uVar6) goto LAB_0055ec74;
                lVar10 = *(long *)(lVar10 + lVar21 * 8 + 0x20);
                if (lVar10 == 0) goto LAB_0055ebc0;
                if (*(uint *)(lVar10 + 0x18) <= uVar2) goto LAB_0055ec74;
                lVar10 = lVar10 + lVar12 * 0xc;
                *(ulong *)(lVar10 + 0x20) =
                     CONCAT44(fVar44 + (float)((ulong)*(undefined8 *)(lVar10 + 0x20) >> 0x20),
                              fVar43 + (float)*(undefined8 *)(lVar10 + 0x20));
                *(float *)(lVar10 + 0x28) = fVar40 + *(float *)(lVar10 + 0x28);
                lVar10 = *plVar23;
                if (lVar10 == 0) goto LAB_0055ebc0;
                if (*(uint *)(lVar10 + 0x18) <= uVar6) goto LAB_0055ec74;
                lVar10 = *(long *)(lVar10 + lVar21 * 8 + 0x20);
                if (lVar10 == 0) goto LAB_0055ebc0;
                if (*(uint *)(lVar10 + 0x18) <= uVar1) goto LAB_0055ec74;
                lVar10 = lVar10 + lVar15 * 0xc;
                *(ulong *)(lVar10 + 0x20) =
                     CONCAT44(fVar44 + (float)((ulong)*(undefined8 *)(lVar10 + 0x20) >> 0x20),
                              fVar43 + (float)*(undefined8 *)(lVar10 + 0x20));
                *(float *)(lVar10 + 0x28) = fVar40 + *(float *)(lVar10 + 0x28);
                lVar10 = *plVar23;
                if (lVar10 == 0) goto LAB_0055ebc0;
                if (*(uint *)(lVar10 + 0x18) <= uVar6) goto LAB_0055ec74;
                lVar10 = *(long *)(lVar10 + lVar21 * 8 + 0x20);
                if (lVar10 == 0) goto LAB_0055ebc0;
                if (*(uint *)(lVar10 + 0x18) <= uVar3) goto LAB_0055ec74;
                lVar10 = lVar10 + lVar14 * 0xc;
                *(ulong *)(lVar10 + 0x20) =
                     CONCAT44(fVar44 + (float)((ulong)*(undefined8 *)(lVar10 + 0x20) >> 0x20),
                              fVar43 + (float)*(undefined8 *)(lVar10 + 0x20));
                *(float *)(lVar10 + 0x28) = fVar40 + *(float *)(lVar10 + 0x28);
              }
              uVar16 = uVar16 + 1;
            } while ((int)uVar16 <= (int)uVar5);
          }
          lVar10 = *plVar17;
          uStack_184 = uStack_184 + 1;
        } while ((int)uStack_184 < iVar4);
        if (lVar10 == 0) goto LAB_0055ebc0;
      }
      uVar18 = 0;
      lVar20 = 0x20;
      while (lVar10 = *(long *)(lVar10 + 0x60), lVar10 != 0) {
        uVar16 = (uint)uVar18;
        if ((int)*(uint *)(lVar10 + 0x18) <= (int)uVar16) {
          uVar9 = native_sub_432808(_UnityEngine_WaitForSeconds_TypeInfo_12d6740);
          native_UnityEngine_WaitForSeconds___ctor_7775c8(0x3dcccccd,uVar9,0);
          *(undefined8 *)(param_1 + 0x18) = uVar9;
          native_sub_4326e0((undefined8 *)(param_1 + 0x18),uVar9);
          uVar24 = 2;
          goto LAB_0055ec34;
        }
        if (*(uint *)(lVar10 + 0x18) <= uVar16) {
LAB_0055ec74:
          uVar9 = native_sub_43283c();
                    /* WARNING: Subroutine does not return */
          native_sub_4327dc(uVar9,0);
        }
        lVar21 = *(long *)(param_1 + 0x30);
        if (lVar21 == 0) break;
        if (*(uint *)(lVar21 + 0x18) <= uVar16) goto LAB_0055ec74;
        if (*(long *)(lVar10 + lVar20) == 0) break;
        native_UnityEngine_Mesh__set_vertices_8e7530
                  (*(long *)(lVar10 + lVar20),*(undefined8 *)(lVar21 + uVar18 * 8 + 0x20),0);
        if ((*plVar17 == 0) || (lVar10 = *(long *)(*plVar17 + 0x60), lVar10 == 0)) break;
        if (*(uint *)(lVar10 + 0x18) <= uVar16) goto LAB_0055ec74;
        plVar23 = *(long **)(lVar19 + 0x28);
        if (plVar23 == (long *)0x0) break;
        (**(code **)(*plVar23 + 0x7e8))
                  (plVar23,*(undefined8 *)(lVar10 + lVar20),uVar18 & 0xffffffff,
                   *(undefined8 *)(*plVar23 + 0x7f0));
        lVar10 = *plVar17;
        uVar18 = uVar18 + 1;
        lVar20 = lVar20 + 0x50;
        if (lVar10 == 0) break;
      }
    }
  }
  else {
    plVar17 = (long *)(param_1 + 0x30);
    if (*plVar17 != 0) {
      plVar23 = (long *)(param_1 + 0x28);
      lVar10 = *plVar23;
      if ((lVar10 != 0) && (*(long *)(lVar10 + 0x60) != 0)) {
        if (*(int *)(*plVar17 + 0x18) < *(int *)(*(long *)(lVar10 + 0x60) + 0x18)) {
          lVar10 = native_sub_432750(_UnityEngine_Vector3_____TypeInfo_12d2fd8);
          *plVar17 = lVar10;
          native_sub_4326e0(plVar17,lVar10);
          lVar10 = *plVar23;
          if (lVar10 == 0) goto LAB_0055ebc0;
        }
        uVar16 = 0;
        lVar20 = 0x30;
        lVar21 = 0x20;
        do {
          lVar10 = *(long *)(lVar10 + 0x60);
          if (lVar10 == 0) break;
          if ((int)*(uint *)(lVar10 + 0x18) <= (int)uVar16) {
            *(undefined1 *)(lVar19 + 0x30) = 0;
            goto LAB_0055e000;
          }
          if (*(uint *)(lVar10 + 0x18) <= uVar16) goto LAB_0055ec74;
          if (*(long *)(lVar10 + lVar20) == 0) break;
          plVar22 = (long *)*plVar17;
          lVar10 = native_sub_432750(_UnityEngine_Vector3___TypeInfo_12d3478,
                                     *(undefined4 *)(*(long *)(lVar10 + lVar20) + 0x18));
          if (plVar22 == (long *)0x0) break;
          if ((lVar10 != 0) &&
             (lVar8 = native_sub_4327f8(lVar10,*(undefined8 *)(*plVar22 + 0x40)), lVar8 == 0)) {
            uVar9 = native_sub_432830();
                    /* WARNING: Subroutine does not return */
            native_sub_4327dc(uVar9,0);
          }
          if (*(uint *)(plVar22 + 3) <= uVar16) goto LAB_0055ec74;
          *(long *)((long)plVar22 + lVar21) = lVar10;
          native_sub_4326e0((long *)((long)plVar22 + lVar21),lVar10);
          lVar10 = *plVar23;
          uVar16 = uVar16 + 1;
          lVar20 = lVar20 + 0x50;
          lVar21 = lVar21 + 8;
        } while (lVar10 != 0);
      }
    }
  }
LAB_0055ebc0:
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* TMPro.Examples.VertexShakeB.<AnimateVertexColors>d__10$$System.Collections.Generic.IEnumerator<System.Object>.get_Current @ 0x55ec8c
 * Il2CppObject* TMPro_Examples_VertexShakeB__AnimateVertexColors_d__10__System_Collections_Generic_IEnumerator_System_Object__get_Current (TMPro_Examples_VertexShakeB__AnimateVertexColors_d__10_o* __this, const MethodInfo* method); */

/* TMPro.Examples.VertexShakeB.<AnimateVertexColors>d__10$$System.Collections.Generic.IEnumerator<System.Object>.get_Current
   Il2CppObject*
   TMPro_Examples_VertexShakeB__AnimateVertexColors_d__10__System_Collections_Generic_IEnumerator_System_Object__get_Current
   (TMPro_Examples_VertexShakeB__AnimateVertexColors_d__10_o* __this, const MethodInfo* method); */

undefined8
native_TMPro_Examples_VertexShakeB__AnimateVertexColors_d__10__System_Collections_Generic_IEnumerator_System_Object__get_Current_55ec8c
          (long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* TMPro.Examples.VertexShakeB.<AnimateVertexColors>d__10$$System.Collections.IEnumerator.Reset @ 0x55ec94
 * void TMPro_Examples_VertexShakeB__AnimateVertexColors_d__10__System_Collections_IEnumerator_Reset (TMPro_Examples_VertexShakeB__AnimateVertexColors_d__10_o* __this, const MethodInfo* method); */

/* TMPro.Examples.VertexShakeB.<AnimateVertexColors>d__10$$System.Collections.IEnumerator.Reset
   void TMPro_Examples_VertexShakeB__AnimateVertexColors_d__10__System_Collections_IEnumerator_Reset
   (TMPro_Examples_VertexShakeB__AnimateVertexColors_d__10_o* __this, const MethodInfo* method); */

void native_TMPro_Examples_VertexShakeB__AnimateVertexColors_d__10__System_Collections_IEnumerator_Reset_55ec94
               (void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  native_sub_432740(&System_NotSupportedException_TypeInfo_12d5468);
  uVar1 = native_sub_432808();
  native_System_NotSupportedException___ctor_ad264c(uVar1,0);
  uVar2 = native_sub_432740(&
                            Method_TMPro_Examples_VertexShakeB__AnimateVertexColors_d__10_System_Collections_IEnumerator_Reset___12ea1e0
                           );
                    /* WARNING: Subroutine does not return */
  native_sub_4327dc(uVar1,uVar2);
}



/* TMPro.Examples.VertexShakeB.<AnimateVertexColors>d__10$$System.Collections.IEnumerator.get_Current @ 0x55ecd4
 * Il2CppObject* TMPro_Examples_VertexShakeB__AnimateVertexColors_d__10__System_Collections_IEnumerator_get_Current (TMPro_Examples_VertexShakeB__AnimateVertexColors_d__10_o* __this, const MethodInfo* method); */

/* TMPro.Examples.VertexShakeB.<AnimateVertexColors>d__10$$System.Collections.IEnumerator.get_Current
   Il2CppObject*
   TMPro_Examples_VertexShakeB__AnimateVertexColors_d__10__System_Collections_IEnumerator_get_Current
   (TMPro_Examples_VertexShakeB__AnimateVertexColors_d__10_o* __this, const MethodInfo* method); */

undefined8
native_TMPro_Examples_VertexShakeB__AnimateVertexColors_d__10__System_Collections_IEnumerator_get_Current_55ecd4
          (long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}


