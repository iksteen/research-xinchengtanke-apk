/* ARM64 IL2CPP native pseudocode from Ghidra.
 * Recovered implementation, not original C# source.
 * Function boundaries follow the IL2CPP method address table. */


/* AnimatedWidget$$OnEnable @ 0x562d54
 * void AnimatedWidget__OnEnable (AnimatedWidget_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AnimatedWidget$$OnEnable
   void AnimatedWidget__OnEnable (AnimatedWidget_o* __this, const MethodInfo* method); */

void native_AnimatedWidget__OnEnable_562d54(long param_1)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  undefined4 uVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  undefined8 uVar13;
  ulong uVar14;
  long lVar15;
  long lVar16;
  long *plVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  ulong uVar25;
  float fVar26;
  float fVar27;
  ulong uVar28;
  ulong uVar29;
  ulong uVar30;
  ulong uVar31;
  ulong uVar32;
  ulong uVar33;
  ulong uVar34;
  float fVar35;
  float fVar37;
  ulong uVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  float fVar42;
  undefined8 uVar36;
  
  if ((bRam000000000133ea2b & 1) == 0) {
    native_sub_43273c(&Method_UnityEngine_Component_GetComponent_UIWidget____12e2c30);
    bRam000000000133ea2b = 1;
  }
  uVar13 = native_UnityEngine_Component__GetComponent_ActiveAnimation__49daec
                     (param_1,_Method_UnityEngine_Component_GetComponent_UIWidget____12e2c30);
  *(undefined8 *)(param_1 + 0x20) = uVar13;
  native_sub_4326e0(param_1 + 0x20);
  if ((bRam000000000133ea2c & 1) == 0) {
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    bRam000000000133ea2c = 1;
  }
  uVar13 = *(undefined8 *)(param_1 + 0x20);
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar14 = native_UnityEngine_Object__op_Inequality_8d76fc(uVar13,0,0);
  if ((uVar14 & 1) == 0) {
    return;
  }
  lVar16 = *(long *)(param_1 + 0x20);
  uVar3 = native_UnityEngine_Mathf__RoundToInt_8e50f0(*(undefined4 *)(param_1 + 0x18),0);
  if (lVar16 == 0) {
LAB_00562e7c:
                    /* WARNING: Subroutine does not return */
    native_sub_432810();
  }
  native_UIWidget__set_width_941dec(lVar16,uVar3,0);
  plVar17 = *(long **)(param_1 + 0x20);
  iVar4 = native_UnityEngine_Mathf__RoundToInt_8e50f0(*(undefined4 *)(param_1 + 0x1c),0);
  if (plVar17 == (long *)0x0) goto LAB_00562e7c;
  if ((bRam0000000001341450 & 1) == 0) {
    native_sub_43273c(&NGUIMath_TypeInfo_12d53b8,iVar4,0);
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    bRam0000000001341450 = 1;
  }
  iVar12 = (**(code **)(*plVar17 + 0x3c8))(plVar17,*(undefined8 *)(*plVar17 + 0x3d0));
  if (iVar12 <= iVar4) {
    iVar12 = iVar4;
  }
  if (((int)plVar17[0x15] == iVar12) || (*(int *)((long)plVar17 + 0xdc) == 1)) {
    return;
  }
  uVar14 = (**(code **)(*plVar17 + 0x188))(plVar17,*(undefined8 *)(*plVar17 + 400));
  if ((uVar14 & 1) == 0) {
    iVar4 = *(int *)((long)plVar17 + 0xa4);
    if ((*(int *)((long)plVar17 + 0xa4) == iVar4) && ((int)plVar17[0x15] == iVar12)) {
      return;
    }
    iVar2 = *(int *)((long)plVar17 + 0xdc);
    *(int *)((long)plVar17 + 0xa4) = iVar4;
    *(int *)(plVar17 + 0x15) = iVar12;
    if (iVar2 == 0) {
      *(float *)(plVar17 + 0x1c) = (float)iVar4 / (float)iVar12;
    }
    else if (iVar2 == 2) {
      uVar3 = native_UnityEngine_Mathf__RoundToInt_8e50f0
                        (*(float *)(plVar17 + 0x1c) * (float)iVar12,0);
      *(undefined4 *)((long)plVar17 + 0xa4) = uVar3;
    }
    else if (iVar2 == 1) {
      uVar3 = native_UnityEngine_Mathf__RoundToInt_8e50f0
                        ((float)iVar4 / *(float *)(plVar17 + 0x1c),0);
      *(undefined4 *)(plVar17 + 0x15) = uVar3;
    }
    *(undefined1 *)((long)plVar17 + 0x15c) = 1;
    if ((char)plVar17[0x1b] != '\0') {
      native_UIWidget__ResizeCollider_949744(plVar17);
    }
                    /* WARNING: Could not recover jumptable at 0x00949944. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar17 + 0x378))(plVar17,*(undefined8 *)(*plVar17 + 0x380));
    return;
  }
  if (plVar17[5] == 0) goto LAB_00942330;
  uVar13 = *(undefined8 *)(plVar17[5] + 0x10);
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar14 = native_UnityEngine_Object__op_Inequality_8d76fc(uVar13,0,0);
  if ((uVar14 & 1) == 0) {
LAB_00942204:
    if (plVar17[5] == 0) {
LAB_00942330:
                    /* WARNING: Subroutine does not return */
      native_sub_432810();
    }
    uVar13 = *(undefined8 *)(plVar17[5] + 0x10);
    if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    uVar14 = native_UnityEngine_Object__op_Inequality_8d76fc(uVar13,0,0);
    iVar4 = (int)plVar17[0x15];
    if ((uVar14 & 1) != 0) {
      if ((*(ushort *)(_NGUIMath_TypeInfo_12d53b8 + 0x132) >> 10 & 1) != 0) {
        iVar2 = *(int *)(_NGUIMath_TypeInfo_12d53b8 + 0xe0);
joined_r0x00942258:
        if (iVar2 == 0) {
          native_sub_4327ec(_NGUIMath_TypeInfo_12d53b8);
        }
      }
LAB_00942264:
      uVar14 = 0;
      fVar37 = (float)(iVar12 - iVar4);
      goto LAB_00942274;
    }
    if ((*(ushort *)(_NGUIMath_TypeInfo_12d53b8 + 0x132) >> 10 & 1) != 0) {
      iVar2 = *(int *)(_NGUIMath_TypeInfo_12d53b8 + 0xe0);
joined_r0x00942284:
      if (iVar2 == 0) {
        native_sub_4327ec(_NGUIMath_TypeInfo_12d53b8);
      }
    }
LAB_009422b4:
    uVar14 = (ulong)(uint)(float)(iVar4 - iVar12);
    uVar25 = 0;
  }
  else {
    if (plVar17[6] == 0) goto LAB_00942330;
    uVar13 = *(undefined8 *)(plVar17[6] + 0x10);
    if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    uVar14 = native_UnityEngine_Object__op_Inequality_8d76fc(uVar13,0,0);
    if ((uVar14 & 1) == 0) goto LAB_00942204;
    if (*(uint *)(plVar17 + 0x14) < 3) {
      iVar4 = (int)plVar17[0x15];
      if ((*(byte *)(_NGUIMath_TypeInfo_12d53b8 + 0x133) >> 2 & 1) != 0) {
        iVar2 = *(int *)(_NGUIMath_TypeInfo_12d53b8 + 0xe0);
        goto joined_r0x00942284;
      }
      goto LAB_009422b4;
    }
    if (*(uint *)(plVar17 + 0x14) - 6 < 3) {
      iVar4 = (int)plVar17[0x15];
      if ((*(byte *)(_NGUIMath_TypeInfo_12d53b8 + 0x133) >> 2 & 1) != 0) {
        iVar2 = *(int *)(_NGUIMath_TypeInfo_12d53b8 + 0xe0);
        goto joined_r0x00942258;
      }
      goto LAB_00942264;
    }
    uVar5 = iVar12 - (int)plVar17[0x15] & 0xfffffffe;
    if (uVar5 == 0) {
      return;
    }
    if (((*(byte *)(_NGUIMath_TypeInfo_12d53b8 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_NGUIMath_TypeInfo_12d53b8 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    fVar37 = (float)(int)uVar5 * 0.5;
    uVar14 = (ulong)(uint)((float)(int)-uVar5 * 0.5);
LAB_00942274:
    uVar25 = (ulong)(uint)fVar37;
  }
  uVar13 = 0;
  if ((bRam0000000001340478 & 1) == 0) {
    native_sub_43273c(&NGUIMath_TypeInfo_12d53b8,0);
    bRam0000000001340478 = 1;
  }
  if (((*(byte *)(_NGUIMath_TypeInfo_12d53b8 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_NGUIMath_TypeInfo_12d53b8 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar28 = uVar14;
  uVar38 = uVar25;
  if ((bRam000000000134047a & 1) == 0) {
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    bRam000000000134047a = 1;
  }
  if (plVar17 == (long *)0x0) goto LAB_00807ccc;
  fVar37 = (float)native_UIWidget__get_pivotOffset_944f8c(plVar17,0);
  fVar26 = (float)uVar28;
  uVar29 = uVar28;
  lVar16 = native_UIRect__get_cachedTransform_c27c58(plVar17,0);
  if (lVar16 == 0) goto LAB_00807ccc;
  uVar3 = native_UnityEngine_Transform__get_localRotation_771c84(lVar16,0);
  uVar5 = native_UnityEngine_Mathf__FloorToInt_8e506c(0x3f000000,0);
  uVar6 = native_UnityEngine_Mathf__FloorToInt_8e506c((float)uVar14 + 0.5,0);
  uVar7 = native_UnityEngine_Mathf__FloorToInt_8e506c(0x3f000000,0);
  uVar8 = native_UnityEngine_Mathf__FloorToInt_8e506c((float)uVar25 + 0.5,0);
  if ((fVar37 == 0.5) && ((uVar5 == 0 || (uVar7 == 0)))) {
    uVar5 = uVar5 & 0xfffffffe;
    uVar7 = uVar7 & 0xfffffffe;
  }
  if ((fVar26 == 0.5) && ((uVar6 == 0 || (uVar8 == 0)))) {
    uVar6 = uVar6 & 0xfffffffe;
    uVar8 = uVar8 & 0xfffffffe;
  }
  fVar42 = (float)(int)uVar5;
  fVar40 = (float)(int)uVar8;
  uVar14 = uVar29;
  fVar18 = (float)native_UnityEngine_Quaternion__op_Multiply_7629c0
                            (uVar3,uVar29,uVar13,uVar38,fVar42,fVar40,0,0);
  fVar41 = (float)(int)uVar7;
  uVar25 = uVar29;
  fVar19 = (float)native_UnityEngine_Quaternion__op_Multiply_7629c0
                            (uVar3,uVar29,uVar13,uVar38,fVar41,fVar40,0,0);
  fVar39 = (float)(int)uVar6;
  uVar34 = uVar29;
  fVar20 = (float)native_UnityEngine_Quaternion__op_Multiply_7629c0
                            (uVar3,uVar29,uVar13,uVar38,fVar42,fVar39,0,0);
  uVar30 = uVar29;
  fVar21 = (float)native_UnityEngine_Quaternion__op_Multiply_7629c0
                            (uVar3,uVar29,uVar13,uVar38,fVar41,fVar39,0,0);
  uVar31 = uVar29;
  fVar42 = (float)native_UnityEngine_Quaternion__op_Multiply_7629c0
                            (uVar3,uVar29,uVar13,uVar38,fVar42,0,0,0);
  uVar32 = uVar29;
  fVar22 = (float)native_UnityEngine_Quaternion__op_Multiply_7629c0
                            (uVar3,uVar29,uVar13,uVar38,fVar41,0,0,0);
  fVar27 = (float)uVar32;
  uVar32 = uVar29;
  fVar23 = (float)native_UnityEngine_Quaternion__op_Multiply_7629c0
                            (uVar3,uVar29,uVar13,uVar38,0,fVar40,0,0);
  fVar40 = (float)uVar32;
  uVar32 = uVar29;
  uVar36 = uVar13;
  fVar24 = (float)native_UnityEngine_Quaternion__op_Multiply_7629c0
                            (uVar3,uVar29,uVar13,uVar38,0,fVar39,0,0);
  fVar35 = (float)uVar36;
  uVar33 = uVar32;
  fVar41 = (float)native_UnityEngine_Vector3__get_zero_776668(0);
  fVar39 = fVar35;
  if ((fVar37 == 0.0) && (fVar26 == 1.0)) {
    uVar33 = uVar14 & 0xffffffff;
    fVar41 = fVar18;
  }
  else if ((fVar37 == 1.0) && (fVar26 == 0.0)) {
    uVar33 = uVar30 & 0xffffffff;
    fVar41 = fVar21;
  }
  else if ((fVar37 == 0.0) && (fVar26 == 0.0)) {
    uVar33 = uVar34 & 0xffffffff;
    fVar41 = fVar20;
  }
  else if ((fVar37 == 1.0) && (fVar26 == 1.0)) {
    uVar33 = uVar25 & 0xffffffff;
    fVar41 = fVar19;
  }
  else {
    fVar18 = (float)uVar32;
    fVar19 = (float)uVar31;
    if ((fVar37 == 0.0) && (fVar26 == 0.5)) {
      fVar41 = fVar42 + (fVar23 + fVar24) * 0.5;
      uVar33 = (ulong)(uint)(fVar19 + (fVar40 + fVar18) * 0.5);
      fVar39 = fVar42;
    }
    else if ((fVar37 == 1.0) && (fVar26 == 0.5)) {
      fVar41 = fVar22 + (fVar23 + fVar24) * 0.5;
      fVar18 = fVar40 + fVar18;
      fVar40 = fVar27;
LAB_008078c0:
      uVar33 = (ulong)(uint)(fVar40 + fVar18 * 0.5);
      fVar39 = fVar40;
    }
    else if (fVar37 == 0.5) {
      if (fVar26 == 1.0) {
        fVar41 = fVar23 + (fVar42 + fVar22) * 0.5;
        fVar18 = fVar19 + fVar27;
        goto LAB_008078c0;
      }
      if (fVar26 == 0.0) {
        fVar41 = fVar24 + (fVar42 + fVar22) * 0.5;
        uVar33 = (ulong)(uint)(fVar18 + (fVar19 + fVar27) * 0.5);
      }
      else if (fVar26 == 0.5) {
        fVar41 = (fVar42 + fVar22 + fVar23 + fVar24) * 0.5;
        uVar33 = (ulong)(uint)((fVar27 + fVar19 + fVar40 + fVar18) * 0.5);
        fVar39 = fVar27;
      }
    }
  }
  fVar40 = (float)uVar33;
  uVar9 = (**(code **)(*plVar17 + 0x3b8))(plVar17,*(undefined8 *)(*plVar17 + 0x3c0));
  uVar10 = native_UnityEngine_Mathf__Max_8e4cd0(2,uVar9,0);
  uVar9 = (**(code **)(*plVar17 + 0x3c8))(plVar17,*(undefined8 *)(*plVar17 + 0x3d0));
  uVar11 = native_UnityEngine_Mathf__Max_8e4cd0(2,uVar9,0);
  uVar7 = (uVar7 - uVar5) + *(int *)((long)plVar17 + 0xa4);
  uVar8 = (uVar8 - uVar6) + (int)plVar17[0x15];
  uVar14 = native_UnityEngine_Vector3__get_zero_776668(0);
  uVar1 = 100000;
  if ((int)uVar7 < 0x186a1) {
    uVar1 = uVar7;
  }
  if ((int)uVar10 <= (int)uVar7) {
    uVar10 = uVar1;
  }
  uVar25 = uVar33;
  fVar18 = fVar39;
  if (uVar10 - uVar7 != 0) {
    uVar25 = (ulong)(uint)(float)(int)(uVar10 - uVar7);
    uVar7 = uVar10;
    fVar18 = fVar37;
    if (uVar5 == 0) {
      fVar19 = (float)native_UnityEngine_Mathf__Lerp_8e5224(0,uVar25,fVar37,0);
      uVar14 = (ulong)(uint)((float)uVar14 + fVar19);
    }
    else {
      uVar34 = 0;
      fVar19 = (float)native_UnityEngine_Mathf__Lerp_8e5224(uVar25,0,fVar37,0);
      uVar14 = (ulong)(uint)((float)uVar14 - fVar19);
      uVar25 = uVar34;
    }
  }
  fVar19 = (float)uVar25;
  uVar5 = 100000;
  if ((int)uVar8 < 0x186a1) {
    uVar5 = uVar8;
  }
  if ((int)uVar11 <= (int)uVar8) {
    uVar11 = uVar5;
  }
  if (uVar11 - uVar8 != 0) {
    fVar20 = (float)(int)(uVar11 - uVar8);
    uVar8 = uVar11;
    fVar18 = fVar26;
    if (uVar6 == 0) {
      fVar19 = fVar20;
      fVar20 = (float)native_UnityEngine_Mathf__Lerp_8e5224(0,fVar20,uVar28 & 0xffffffff,0);
      uVar33 = (ulong)(uint)((float)uVar33 + fVar20);
    }
    else {
      fVar19 = 0.0;
      fVar20 = (float)native_UnityEngine_Mathf__Lerp_8e5224(fVar20,0,uVar28 & 0xffffffff,0);
      uVar33 = (ulong)(uint)((float)uVar33 - fVar20);
    }
  }
  uVar5 = uVar7 & 0xfffffffe;
  if (fVar37 != 0.5) {
    uVar5 = uVar7;
  }
  uVar7 = uVar8 & 0xfffffffe;
  if (fVar26 != 0.5) {
    uVar7 = uVar8;
  }
  fVar20 = (float)native_UnityEngine_Transform__get_localPosition_7717f4(lVar16,0);
  fVar39 = (float)native_UnityEngine_Quaternion__op_Multiply_7629c0
                            (uVar3,uVar29,uVar13,uVar38,uVar14,uVar33,fVar39,0);
  fVar39 = fVar41 + fVar20 + fVar39;
  fVar40 = fVar40 + fVar19 + (float)uVar29;
  uVar25 = (ulong)(uint)fVar40;
  uVar28 = (ulong)(uint)(fVar35 + fVar18 + (float)uVar13);
  native_UnityEngine_Transform__set_localPosition_7718a4(fVar39,uVar25,uVar28,lVar16,0);
  native_UIWidget__SetDimensions_94987c(plVar17,uVar5,uVar7,0);
  uVar14 = native_UIRect__get_isAnchored_c2d8cc(plVar17,0);
  if ((uVar14 & 1) == 0) {
    return;
  }
  lVar16 = native_UnityEngine_Transform__get_parent_765eb0(lVar16,0);
  if (plVar17[3] != 0) {
    uVar13 = *(undefined8 *)(plVar17[3] + 0x10);
    if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    fVar39 = fVar39 - fVar37 * (float)(int)uVar5;
    uVar14 = native_UnityEngine_Object__op_Implicit_8e1b98(uVar13,0);
    if ((uVar14 & 1) != 0) {
      if (plVar17[3] == 0) goto LAB_00807ccc;
      native_UIRect_AnchorPoint__SetHorizontal_559078(fVar39,plVar17[3],lVar16,0);
    }
    if (plVar17[4] != 0) {
      uVar13 = *(undefined8 *)(plVar17[4] + 0x10);
      if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
        native_sub_4327ec();
      }
      uVar14 = native_UnityEngine_Object__op_Implicit_8e1b98(uVar13,0);
      if ((uVar14 & 1) != 0) {
        if (plVar17[4] == 0) goto LAB_00807ccc;
        native_UIRect_AnchorPoint__SetHorizontal_559078
                  (fVar39 + (float)(int)uVar5,plVar17[4],lVar16,0);
      }
      if (plVar17[5] != 0) {
        uVar13 = *(undefined8 *)(plVar17[5] + 0x10);
        if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
           (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
          native_sub_4327ec();
        }
        fVar40 = fVar40 - fVar26 * (float)(int)uVar7;
        uVar14 = native_UnityEngine_Object__op_Implicit_8e1b98(uVar13,0);
        if ((uVar14 & 1) != 0) {
          if (plVar17[5] == 0) goto LAB_00807ccc;
          native_UIRect_AnchorPoint__SetVertical_5591e0(fVar40,plVar17[5],lVar16,0);
        }
        if (plVar17[6] != 0) {
          uVar13 = *(undefined8 *)(plVar17[6] + 0x10);
          if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
             (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
            native_sub_4327ec();
          }
          uVar14 = native_UnityEngine_Object__op_Implicit_8e1b98(uVar13,0);
          if ((uVar14 & 1) == 0) {
            return;
          }
          lVar15 = plVar17[6];
          if (lVar15 != 0) {
            if ((bRam000000000133ea04 & 1) == 0) {
              native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0,lVar16,0);
              bRam000000000133ea04 = 1;
            }
            uVar13 = *(undefined8 *)(lVar15 + 0x20);
            if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
               (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
              native_sub_4327ec();
            }
            uVar14 = native_UnityEngine_Object__op_Implicit_8e1b98(uVar13,0);
            if ((uVar14 & 1) == 0) {
              if (*(long *)(lVar15 + 0x10) != 0) {
                uVar13 = native_UnityEngine_Transform__get_position_77169c
                                   (*(long *)(lVar15 + 0x10),0);
                if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
                   (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
                  native_sub_4327ec();
                }
                uVar14 = native_UnityEngine_Object__op_Inequality_8d76fc(lVar16,0,0);
                if ((uVar14 & 1) != 0) {
                  if (lVar16 == 0) goto LAB_00559338;
                  native_UnityEngine_Transform__InverseTransformPoint_7729a0
                            (uVar13,uVar25,uVar28,lVar16,0);
                }
LAB_00559308:
                uVar3 = native_UnityEngine_Mathf__FloorToInt_8e506c
                                  (((fVar40 + (float)(int)uVar7) - (float)uVar25) + 0.5,0);
                *(undefined4 *)(lVar15 + 0x1c) = uVar3;
                return;
              }
            }
            else {
              plVar17 = *(long **)(lVar15 + 0x20);
              if ((plVar17 != (long *)0x0) &&
                 (lVar16 = (**(code **)(*plVar17 + 0x208))
                                     (plVar17,lVar16,*(undefined8 *)(*plVar17 + 0x210)), lVar16 != 0
                 )) {
                if (*(uint *)(lVar16 + 0x18) < 4) {
                  uVar13 = native_sub_43283c();
                    /* WARNING: Subroutine does not return */
                  native_sub_4327dc(uVar13,0);
                }
                uVar25 = native_UnityEngine_Mathf__Lerp_8e5224
                                   (*(undefined4 *)(lVar16 + 0x48),*(undefined4 *)(lVar16 + 0x30),
                                    *(undefined4 *)(lVar15 + 0x18),0);
                goto LAB_00559308;
              }
            }
LAB_00559338:
                    /* WARNING: Subroutine does not return */
            native_sub_432810();
          }
        }
      }
    }
  }
LAB_00807ccc:
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* AnimatedWidget$$LateUpdate @ 0x562db8
 * void AnimatedWidget__LateUpdate (AnimatedWidget_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AnimatedWidget$$LateUpdate
   void AnimatedWidget__LateUpdate (AnimatedWidget_o* __this, const MethodInfo* method); */

void native_AnimatedWidget__LateUpdate_562db8(long param_1)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  undefined4 uVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  ulong uVar13;
  long lVar14;
  undefined8 uVar15;
  long lVar16;
  long *plVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  ulong uVar25;
  float fVar26;
  float fVar27;
  ulong uVar28;
  ulong uVar29;
  ulong uVar30;
  ulong uVar31;
  ulong uVar32;
  ulong uVar33;
  ulong uVar34;
  float fVar35;
  float fVar37;
  ulong uVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  float fVar42;
  undefined8 uVar36;
  
  if ((bRam000000000133ea2c & 1) == 0) {
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    bRam000000000133ea2c = 1;
  }
  uVar15 = *(undefined8 *)(param_1 + 0x20);
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar13 = native_UnityEngine_Object__op_Inequality_8d76fc(uVar15,0,0);
  if ((uVar13 & 1) == 0) {
    return;
  }
  lVar16 = *(long *)(param_1 + 0x20);
  uVar3 = native_UnityEngine_Mathf__RoundToInt_8e50f0(*(undefined4 *)(param_1 + 0x18),0);
  if (lVar16 == 0) {
LAB_00562e7c:
                    /* WARNING: Subroutine does not return */
    native_sub_432810();
  }
  native_UIWidget__set_width_941dec(lVar16,uVar3,0);
  plVar17 = *(long **)(param_1 + 0x20);
  iVar4 = native_UnityEngine_Mathf__RoundToInt_8e50f0(*(undefined4 *)(param_1 + 0x1c),0);
  if (plVar17 == (long *)0x0) goto LAB_00562e7c;
  if ((bRam0000000001341450 & 1) == 0) {
    native_sub_43273c(&NGUIMath_TypeInfo_12d53b8,iVar4,0);
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    bRam0000000001341450 = 1;
  }
  iVar12 = (**(code **)(*plVar17 + 0x3c8))(plVar17,*(undefined8 *)(*plVar17 + 0x3d0));
  if (iVar12 <= iVar4) {
    iVar12 = iVar4;
  }
  if (((int)plVar17[0x15] == iVar12) || (*(int *)((long)plVar17 + 0xdc) == 1)) {
    return;
  }
  uVar13 = (**(code **)(*plVar17 + 0x188))(plVar17,*(undefined8 *)(*plVar17 + 400));
  if ((uVar13 & 1) == 0) {
    iVar4 = *(int *)((long)plVar17 + 0xa4);
    if ((*(int *)((long)plVar17 + 0xa4) == iVar4) && ((int)plVar17[0x15] == iVar12)) {
      return;
    }
    iVar2 = *(int *)((long)plVar17 + 0xdc);
    *(int *)((long)plVar17 + 0xa4) = iVar4;
    *(int *)(plVar17 + 0x15) = iVar12;
    if (iVar2 == 0) {
      *(float *)(plVar17 + 0x1c) = (float)iVar4 / (float)iVar12;
    }
    else if (iVar2 == 2) {
      uVar3 = native_UnityEngine_Mathf__RoundToInt_8e50f0
                        (*(float *)(plVar17 + 0x1c) * (float)iVar12,0);
      *(undefined4 *)((long)plVar17 + 0xa4) = uVar3;
    }
    else if (iVar2 == 1) {
      uVar3 = native_UnityEngine_Mathf__RoundToInt_8e50f0
                        ((float)iVar4 / *(float *)(plVar17 + 0x1c),0);
      *(undefined4 *)(plVar17 + 0x15) = uVar3;
    }
    *(undefined1 *)((long)plVar17 + 0x15c) = 1;
    if ((char)plVar17[0x1b] != '\0') {
      native_UIWidget__ResizeCollider_949744(plVar17);
    }
                    /* WARNING: Could not recover jumptable at 0x00949944. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar17 + 0x378))(plVar17,*(undefined8 *)(*plVar17 + 0x380));
    return;
  }
  if (plVar17[5] == 0) goto LAB_00942330;
  uVar15 = *(undefined8 *)(plVar17[5] + 0x10);
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar13 = native_UnityEngine_Object__op_Inequality_8d76fc(uVar15,0,0);
  if ((uVar13 & 1) == 0) {
LAB_00942204:
    if (plVar17[5] == 0) {
LAB_00942330:
                    /* WARNING: Subroutine does not return */
      native_sub_432810();
    }
    uVar15 = *(undefined8 *)(plVar17[5] + 0x10);
    if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    uVar13 = native_UnityEngine_Object__op_Inequality_8d76fc(uVar15,0,0);
    iVar4 = (int)plVar17[0x15];
    if ((uVar13 & 1) != 0) {
      if ((*(ushort *)(_NGUIMath_TypeInfo_12d53b8 + 0x132) >> 10 & 1) != 0) {
        iVar2 = *(int *)(_NGUIMath_TypeInfo_12d53b8 + 0xe0);
joined_r0x00942258:
        if (iVar2 == 0) {
          native_sub_4327ec(_NGUIMath_TypeInfo_12d53b8);
        }
      }
LAB_00942264:
      uVar13 = 0;
      fVar37 = (float)(iVar12 - iVar4);
      goto LAB_00942274;
    }
    if ((*(ushort *)(_NGUIMath_TypeInfo_12d53b8 + 0x132) >> 10 & 1) != 0) {
      iVar2 = *(int *)(_NGUIMath_TypeInfo_12d53b8 + 0xe0);
joined_r0x00942284:
      if (iVar2 == 0) {
        native_sub_4327ec(_NGUIMath_TypeInfo_12d53b8);
      }
    }
LAB_009422b4:
    uVar13 = (ulong)(uint)(float)(iVar4 - iVar12);
    uVar25 = 0;
  }
  else {
    if (plVar17[6] == 0) goto LAB_00942330;
    uVar15 = *(undefined8 *)(plVar17[6] + 0x10);
    if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    uVar13 = native_UnityEngine_Object__op_Inequality_8d76fc(uVar15,0,0);
    if ((uVar13 & 1) == 0) goto LAB_00942204;
    if (*(uint *)(plVar17 + 0x14) < 3) {
      iVar4 = (int)plVar17[0x15];
      if ((*(byte *)(_NGUIMath_TypeInfo_12d53b8 + 0x133) >> 2 & 1) != 0) {
        iVar2 = *(int *)(_NGUIMath_TypeInfo_12d53b8 + 0xe0);
        goto joined_r0x00942284;
      }
      goto LAB_009422b4;
    }
    if (*(uint *)(plVar17 + 0x14) - 6 < 3) {
      iVar4 = (int)plVar17[0x15];
      if ((*(byte *)(_NGUIMath_TypeInfo_12d53b8 + 0x133) >> 2 & 1) != 0) {
        iVar2 = *(int *)(_NGUIMath_TypeInfo_12d53b8 + 0xe0);
        goto joined_r0x00942258;
      }
      goto LAB_00942264;
    }
    uVar5 = iVar12 - (int)plVar17[0x15] & 0xfffffffe;
    if (uVar5 == 0) {
      return;
    }
    if (((*(byte *)(_NGUIMath_TypeInfo_12d53b8 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_NGUIMath_TypeInfo_12d53b8 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    fVar37 = (float)(int)uVar5 * 0.5;
    uVar13 = (ulong)(uint)((float)(int)-uVar5 * 0.5);
LAB_00942274:
    uVar25 = (ulong)(uint)fVar37;
  }
  uVar15 = 0;
  if ((bRam0000000001340478 & 1) == 0) {
    native_sub_43273c(&NGUIMath_TypeInfo_12d53b8,0);
    bRam0000000001340478 = 1;
  }
  if (((*(byte *)(_NGUIMath_TypeInfo_12d53b8 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_NGUIMath_TypeInfo_12d53b8 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar28 = uVar13;
  uVar38 = uVar25;
  if ((bRam000000000134047a & 1) == 0) {
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    bRam000000000134047a = 1;
  }
  if (plVar17 == (long *)0x0) goto LAB_00807ccc;
  fVar37 = (float)native_UIWidget__get_pivotOffset_944f8c(plVar17,0);
  fVar26 = (float)uVar28;
  uVar29 = uVar28;
  lVar16 = native_UIRect__get_cachedTransform_c27c58(plVar17,0);
  if (lVar16 == 0) goto LAB_00807ccc;
  uVar3 = native_UnityEngine_Transform__get_localRotation_771c84(lVar16,0);
  uVar5 = native_UnityEngine_Mathf__FloorToInt_8e506c(0x3f000000,0);
  uVar6 = native_UnityEngine_Mathf__FloorToInt_8e506c((float)uVar13 + 0.5,0);
  uVar7 = native_UnityEngine_Mathf__FloorToInt_8e506c(0x3f000000,0);
  uVar8 = native_UnityEngine_Mathf__FloorToInt_8e506c((float)uVar25 + 0.5,0);
  if ((fVar37 == 0.5) && ((uVar5 == 0 || (uVar7 == 0)))) {
    uVar5 = uVar5 & 0xfffffffe;
    uVar7 = uVar7 & 0xfffffffe;
  }
  if ((fVar26 == 0.5) && ((uVar6 == 0 || (uVar8 == 0)))) {
    uVar6 = uVar6 & 0xfffffffe;
    uVar8 = uVar8 & 0xfffffffe;
  }
  fVar42 = (float)(int)uVar5;
  fVar40 = (float)(int)uVar8;
  uVar13 = uVar29;
  fVar18 = (float)native_UnityEngine_Quaternion__op_Multiply_7629c0
                            (uVar3,uVar29,uVar15,uVar38,fVar42,fVar40,0,0);
  fVar41 = (float)(int)uVar7;
  uVar25 = uVar29;
  fVar19 = (float)native_UnityEngine_Quaternion__op_Multiply_7629c0
                            (uVar3,uVar29,uVar15,uVar38,fVar41,fVar40,0,0);
  fVar39 = (float)(int)uVar6;
  uVar34 = uVar29;
  fVar20 = (float)native_UnityEngine_Quaternion__op_Multiply_7629c0
                            (uVar3,uVar29,uVar15,uVar38,fVar42,fVar39,0,0);
  uVar30 = uVar29;
  fVar21 = (float)native_UnityEngine_Quaternion__op_Multiply_7629c0
                            (uVar3,uVar29,uVar15,uVar38,fVar41,fVar39,0,0);
  uVar31 = uVar29;
  fVar42 = (float)native_UnityEngine_Quaternion__op_Multiply_7629c0
                            (uVar3,uVar29,uVar15,uVar38,fVar42,0,0,0);
  uVar32 = uVar29;
  fVar22 = (float)native_UnityEngine_Quaternion__op_Multiply_7629c0
                            (uVar3,uVar29,uVar15,uVar38,fVar41,0,0,0);
  fVar27 = (float)uVar32;
  uVar32 = uVar29;
  fVar23 = (float)native_UnityEngine_Quaternion__op_Multiply_7629c0
                            (uVar3,uVar29,uVar15,uVar38,0,fVar40,0,0);
  fVar40 = (float)uVar32;
  uVar32 = uVar29;
  uVar36 = uVar15;
  fVar24 = (float)native_UnityEngine_Quaternion__op_Multiply_7629c0
                            (uVar3,uVar29,uVar15,uVar38,0,fVar39,0,0);
  fVar35 = (float)uVar36;
  uVar33 = uVar32;
  fVar41 = (float)native_UnityEngine_Vector3__get_zero_776668(0);
  fVar39 = fVar35;
  if ((fVar37 == 0.0) && (fVar26 == 1.0)) {
    uVar33 = uVar13 & 0xffffffff;
    fVar41 = fVar18;
  }
  else if ((fVar37 == 1.0) && (fVar26 == 0.0)) {
    uVar33 = uVar30 & 0xffffffff;
    fVar41 = fVar21;
  }
  else if ((fVar37 == 0.0) && (fVar26 == 0.0)) {
    uVar33 = uVar34 & 0xffffffff;
    fVar41 = fVar20;
  }
  else if ((fVar37 == 1.0) && (fVar26 == 1.0)) {
    uVar33 = uVar25 & 0xffffffff;
    fVar41 = fVar19;
  }
  else {
    fVar18 = (float)uVar32;
    fVar19 = (float)uVar31;
    if ((fVar37 == 0.0) && (fVar26 == 0.5)) {
      fVar41 = fVar42 + (fVar23 + fVar24) * 0.5;
      uVar33 = (ulong)(uint)(fVar19 + (fVar40 + fVar18) * 0.5);
      fVar39 = fVar42;
    }
    else if ((fVar37 == 1.0) && (fVar26 == 0.5)) {
      fVar41 = fVar22 + (fVar23 + fVar24) * 0.5;
      fVar18 = fVar40 + fVar18;
      fVar40 = fVar27;
LAB_008078c0:
      uVar33 = (ulong)(uint)(fVar40 + fVar18 * 0.5);
      fVar39 = fVar40;
    }
    else if (fVar37 == 0.5) {
      if (fVar26 == 1.0) {
        fVar41 = fVar23 + (fVar42 + fVar22) * 0.5;
        fVar18 = fVar19 + fVar27;
        goto LAB_008078c0;
      }
      if (fVar26 == 0.0) {
        fVar41 = fVar24 + (fVar42 + fVar22) * 0.5;
        uVar33 = (ulong)(uint)(fVar18 + (fVar19 + fVar27) * 0.5);
      }
      else if (fVar26 == 0.5) {
        fVar41 = (fVar42 + fVar22 + fVar23 + fVar24) * 0.5;
        uVar33 = (ulong)(uint)((fVar27 + fVar19 + fVar40 + fVar18) * 0.5);
        fVar39 = fVar27;
      }
    }
  }
  fVar40 = (float)uVar33;
  uVar9 = (**(code **)(*plVar17 + 0x3b8))(plVar17,*(undefined8 *)(*plVar17 + 0x3c0));
  uVar10 = native_UnityEngine_Mathf__Max_8e4cd0(2,uVar9,0);
  uVar9 = (**(code **)(*plVar17 + 0x3c8))(plVar17,*(undefined8 *)(*plVar17 + 0x3d0));
  uVar11 = native_UnityEngine_Mathf__Max_8e4cd0(2,uVar9,0);
  uVar7 = (uVar7 - uVar5) + *(int *)((long)plVar17 + 0xa4);
  uVar8 = (uVar8 - uVar6) + (int)plVar17[0x15];
  uVar13 = native_UnityEngine_Vector3__get_zero_776668(0);
  uVar1 = 100000;
  if ((int)uVar7 < 0x186a1) {
    uVar1 = uVar7;
  }
  if ((int)uVar10 <= (int)uVar7) {
    uVar10 = uVar1;
  }
  uVar25 = uVar33;
  fVar18 = fVar39;
  if (uVar10 - uVar7 != 0) {
    uVar25 = (ulong)(uint)(float)(int)(uVar10 - uVar7);
    uVar7 = uVar10;
    fVar18 = fVar37;
    if (uVar5 == 0) {
      fVar19 = (float)native_UnityEngine_Mathf__Lerp_8e5224(0,uVar25,fVar37,0);
      uVar13 = (ulong)(uint)((float)uVar13 + fVar19);
    }
    else {
      uVar34 = 0;
      fVar19 = (float)native_UnityEngine_Mathf__Lerp_8e5224(uVar25,0,fVar37,0);
      uVar13 = (ulong)(uint)((float)uVar13 - fVar19);
      uVar25 = uVar34;
    }
  }
  fVar19 = (float)uVar25;
  uVar5 = 100000;
  if ((int)uVar8 < 0x186a1) {
    uVar5 = uVar8;
  }
  if ((int)uVar11 <= (int)uVar8) {
    uVar11 = uVar5;
  }
  if (uVar11 - uVar8 != 0) {
    fVar20 = (float)(int)(uVar11 - uVar8);
    uVar8 = uVar11;
    fVar18 = fVar26;
    if (uVar6 == 0) {
      fVar19 = fVar20;
      fVar20 = (float)native_UnityEngine_Mathf__Lerp_8e5224(0,fVar20,uVar28 & 0xffffffff,0);
      uVar33 = (ulong)(uint)((float)uVar33 + fVar20);
    }
    else {
      fVar19 = 0.0;
      fVar20 = (float)native_UnityEngine_Mathf__Lerp_8e5224(fVar20,0,uVar28 & 0xffffffff,0);
      uVar33 = (ulong)(uint)((float)uVar33 - fVar20);
    }
  }
  uVar5 = uVar7 & 0xfffffffe;
  if (fVar37 != 0.5) {
    uVar5 = uVar7;
  }
  uVar7 = uVar8 & 0xfffffffe;
  if (fVar26 != 0.5) {
    uVar7 = uVar8;
  }
  fVar20 = (float)native_UnityEngine_Transform__get_localPosition_7717f4(lVar16,0);
  fVar39 = (float)native_UnityEngine_Quaternion__op_Multiply_7629c0
                            (uVar3,uVar29,uVar15,uVar38,uVar13,uVar33,fVar39,0);
  fVar39 = fVar41 + fVar20 + fVar39;
  fVar40 = fVar40 + fVar19 + (float)uVar29;
  uVar25 = (ulong)(uint)fVar40;
  uVar28 = (ulong)(uint)(fVar35 + fVar18 + (float)uVar15);
  native_UnityEngine_Transform__set_localPosition_7718a4(fVar39,uVar25,uVar28,lVar16,0);
  native_UIWidget__SetDimensions_94987c(plVar17,uVar5,uVar7,0);
  uVar13 = native_UIRect__get_isAnchored_c2d8cc(plVar17,0);
  if ((uVar13 & 1) == 0) {
    return;
  }
  lVar16 = native_UnityEngine_Transform__get_parent_765eb0(lVar16,0);
  if (plVar17[3] != 0) {
    uVar15 = *(undefined8 *)(plVar17[3] + 0x10);
    if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    fVar39 = fVar39 - fVar37 * (float)(int)uVar5;
    uVar13 = native_UnityEngine_Object__op_Implicit_8e1b98(uVar15,0);
    if ((uVar13 & 1) != 0) {
      if (plVar17[3] == 0) goto LAB_00807ccc;
      native_UIRect_AnchorPoint__SetHorizontal_559078(fVar39,plVar17[3],lVar16,0);
    }
    if (plVar17[4] != 0) {
      uVar15 = *(undefined8 *)(plVar17[4] + 0x10);
      if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
        native_sub_4327ec();
      }
      uVar13 = native_UnityEngine_Object__op_Implicit_8e1b98(uVar15,0);
      if ((uVar13 & 1) != 0) {
        if (plVar17[4] == 0) goto LAB_00807ccc;
        native_UIRect_AnchorPoint__SetHorizontal_559078
                  (fVar39 + (float)(int)uVar5,plVar17[4],lVar16,0);
      }
      if (plVar17[5] != 0) {
        uVar15 = *(undefined8 *)(plVar17[5] + 0x10);
        if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
           (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
          native_sub_4327ec();
        }
        fVar40 = fVar40 - fVar26 * (float)(int)uVar7;
        uVar13 = native_UnityEngine_Object__op_Implicit_8e1b98(uVar15,0);
        if ((uVar13 & 1) != 0) {
          if (plVar17[5] == 0) goto LAB_00807ccc;
          native_UIRect_AnchorPoint__SetVertical_5591e0(fVar40,plVar17[5],lVar16,0);
        }
        if (plVar17[6] != 0) {
          uVar15 = *(undefined8 *)(plVar17[6] + 0x10);
          if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
             (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
            native_sub_4327ec();
          }
          uVar13 = native_UnityEngine_Object__op_Implicit_8e1b98(uVar15,0);
          if ((uVar13 & 1) == 0) {
            return;
          }
          lVar14 = plVar17[6];
          if (lVar14 != 0) {
            if ((bRam000000000133ea04 & 1) == 0) {
              native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0,lVar16,0);
              bRam000000000133ea04 = 1;
            }
            uVar15 = *(undefined8 *)(lVar14 + 0x20);
            if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
               (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
              native_sub_4327ec();
            }
            uVar13 = native_UnityEngine_Object__op_Implicit_8e1b98(uVar15,0);
            if ((uVar13 & 1) == 0) {
              if (*(long *)(lVar14 + 0x10) != 0) {
                uVar15 = native_UnityEngine_Transform__get_position_77169c
                                   (*(long *)(lVar14 + 0x10),0);
                if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
                   (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
                  native_sub_4327ec();
                }
                uVar13 = native_UnityEngine_Object__op_Inequality_8d76fc(lVar16,0,0);
                if ((uVar13 & 1) != 0) {
                  if (lVar16 == 0) goto LAB_00559338;
                  native_UnityEngine_Transform__InverseTransformPoint_7729a0
                            (uVar15,uVar25,uVar28,lVar16,0);
                }
LAB_00559308:
                uVar3 = native_UnityEngine_Mathf__FloorToInt_8e506c
                                  (((fVar40 + (float)(int)uVar7) - (float)uVar25) + 0.5,0);
                *(undefined4 *)(lVar14 + 0x1c) = uVar3;
                return;
              }
            }
            else {
              plVar17 = *(long **)(lVar14 + 0x20);
              if ((plVar17 != (long *)0x0) &&
                 (lVar16 = (**(code **)(*plVar17 + 0x208))
                                     (plVar17,lVar16,*(undefined8 *)(*plVar17 + 0x210)), lVar16 != 0
                 )) {
                if (*(uint *)(lVar16 + 0x18) < 4) {
                  uVar15 = native_sub_43283c();
                    /* WARNING: Subroutine does not return */
                  native_sub_4327dc(uVar15,0);
                }
                uVar25 = native_UnityEngine_Mathf__Lerp_8e5224
                                   (*(undefined4 *)(lVar16 + 0x48),*(undefined4 *)(lVar16 + 0x30),
                                    *(undefined4 *)(lVar14 + 0x18),0);
                goto LAB_00559308;
              }
            }
LAB_00559338:
                    /* WARNING: Subroutine does not return */
            native_sub_432810();
          }
        }
      }
    }
  }
LAB_00807ccc:
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* AnimatedWidget$$.ctor @ 0x562e80
 * void AnimatedWidget___ctor (AnimatedWidget_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AnimatedWidget$$.ctor
   void AnimatedWidget___ctor (AnimatedWidget_o* __this, const MethodInfo* method); */

undefined1  [16] native_AnimatedWidget___ctor_562e80(ulong param_1)

{
  undefined8 uVar1;
  undefined1 auVar2 [16];
  
  uVar1 = NEON_fmov(0x3f800000,4);
  *(undefined8 *)(param_1 + 0x18) = uVar1;
  if ((bRam0000000001340ae0 & 1) == 0) {
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0,0);
    bRam0000000001340ae0 = 1;
  }
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  auVar2._8_8_ = 0;
  auVar2._0_8_ = param_1;
  return auVar2;
}


