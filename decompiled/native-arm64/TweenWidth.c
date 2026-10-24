/* ARM64 IL2CPP native pseudocode from Ghidra.
 * Recovered implementation, not original C# source.
 * Function boundaries follow the IL2CPP method address table. */


/* TweenWidth$$get_cachedWidget @ 0x6e6f30
 * UIWidget_o* TweenWidth__get_cachedWidget (TweenWidth_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TweenWidth$$get_cachedWidget
   UIWidget_o* TweenWidth__get_cachedWidget (TweenWidth_o* __this, const MethodInfo* method); */

undefined8 native_TweenWidth__get_cachedWidget_6e6f30(long param_1)

{
  ulong uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  
  if ((bRam000000000133f3b9 & 1) == 0) {
    native_sub_43273c(&Method_UnityEngine_Component_GetComponent_UIWidget____12e2c30);
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    bRam000000000133f3b9 = 1;
  }
  puVar2 = (undefined8 *)(param_1 + 0xa0);
  uVar3 = *puVar2;
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar1 = native_UnityEngine_Object__op_Equality_8e9a3c(uVar3,0,0);
  if ((uVar1 & 1) != 0) {
    uVar3 = native_UnityEngine_Component__GetComponent_ActiveAnimation__49daec
                      (param_1,_Method_UnityEngine_Component_GetComponent_UIWidget____12e2c30);
    *(undefined8 *)(param_1 + 0xa0) = uVar3;
    native_sub_4326e0(puVar2,uVar3);
  }
  return *puVar2;
}



/* TweenWidth$$get_width @ 0x6e6fe4
 * int32_t TweenWidth__get_width (TweenWidth_o* __this, const MethodInfo* method); */

/* TweenWidth$$get_width
   int32_t TweenWidth__get_width (TweenWidth_o* __this, const MethodInfo* method); */

undefined4 native_TweenWidth__get_width_6e6fe4(void)

{
  long lVar1;
  
  lVar1 = native_TweenWidth__get_cachedWidget_6e6f30();
  if (lVar1 != 0) {
    return *(undefined4 *)(lVar1 + 0xa4);
  }
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* TweenWidth$$set_width @ 0x6e7024
 * void TweenWidth__set_width (TweenWidth_o* __this, int32_t value, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TweenWidth$$set_width
   void TweenWidth__set_width (TweenWidth_o* __this, int32_t value, const MethodInfo* method); */

void native_TweenWidth__set_width_6e7024(undefined8 param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  undefined4 uVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  long *plVar11;
  long lVar12;
  long lVar13;
  ulong uVar14;
  int iVar15;
  undefined8 uVar16;
  float fVar17;
  undefined4 uVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  ulong uVar27;
  float fVar28;
  float fVar29;
  ulong uVar30;
  ulong uVar31;
  ulong uVar32;
  ulong uVar33;
  ulong uVar34;
  ulong uVar35;
  ulong uVar36;
  float fVar37;
  ulong uVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  
  plVar11 = (long *)native_TweenWidth__get_cachedWidget_6e6f30();
  if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    native_sub_432810();
  }
  if ((bRam000000000134144f & 1) == 0) {
    native_sub_43273c(&NGUIMath_TypeInfo_12d53b8,param_2,0);
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    bRam000000000134144f = 1;
  }
  iVar10 = (**(code **)(*plVar11 + 0x3b8))(plVar11,*(undefined8 *)(*plVar11 + 0x3c0));
  if (iVar10 <= param_2) {
    iVar10 = param_2;
  }
  if (*(int *)((long)plVar11 + 0xa4) == iVar10) {
    return;
  }
  if (*(int *)((long)plVar11 + 0xdc) == 2) {
    return;
  }
  uVar14 = (**(code **)(*plVar11 + 0x178))(plVar11,*(undefined8 *)(*plVar11 + 0x180));
  if ((uVar14 & 1) == 0) {
    iVar15 = (int)plVar11[0x15];
    if ((*(int *)((long)plVar11 + 0xa4) == iVar10) && ((int)plVar11[0x15] == iVar15)) {
      return;
    }
    iVar2 = *(int *)((long)plVar11 + 0xdc);
    *(int *)((long)plVar11 + 0xa4) = iVar10;
    *(int *)(plVar11 + 0x15) = iVar15;
    if (iVar2 == 0) {
      *(float *)(plVar11 + 0x1c) = (float)iVar10 / (float)iVar15;
    }
    else if (iVar2 == 2) {
      uVar18 = native_UnityEngine_Mathf__RoundToInt_8e50f0
                         (*(float *)(plVar11 + 0x1c) * (float)iVar15,0);
      *(undefined4 *)((long)plVar11 + 0xa4) = uVar18;
    }
    else if (iVar2 == 1) {
      uVar18 = native_UnityEngine_Mathf__RoundToInt_8e50f0
                         ((float)iVar10 / *(float *)(plVar11 + 0x1c),0);
      *(undefined4 *)(plVar11 + 0x15) = uVar18;
    }
    *(undefined1 *)((long)plVar11 + 0x15c) = 1;
    if ((char)plVar11[0x1b] != '\0') {
      native_UIWidget__ResizeCollider_949744(plVar11);
    }
                    /* WARNING: Could not recover jumptable at 0x00949944. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar11 + 0x378))(plVar11,*(undefined8 *)(*plVar11 + 0x380));
    return;
  }
  if (plVar11[3] == 0) goto LAB_00942094;
  uVar16 = *(undefined8 *)(plVar11[3] + 0x10);
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar14 = native_UnityEngine_Object__op_Inequality_8d76fc(uVar16,0,0);
  if ((uVar14 & 1) == 0) {
LAB_00941f6c:
    if (plVar11[3] == 0) {
LAB_00942094:
                    /* WARNING: Subroutine does not return */
      native_sub_432810();
    }
    uVar16 = *(undefined8 *)(plVar11[3] + 0x10);
    if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    uVar14 = native_UnityEngine_Object__op_Inequality_8d76fc(uVar16,0,0);
    iVar15 = *(int *)((long)plVar11 + 0xa4);
    if ((uVar14 & 1) == 0) {
      if ((*(ushort *)(_NGUIMath_TypeInfo_12d53b8 + 0x132) >> 10 & 1) != 0) {
        iVar2 = *(int *)(_NGUIMath_TypeInfo_12d53b8 + 0xe0);
joined_r0x00941fd4:
        if (iVar2 == 0) {
          native_sub_4327ec(_NGUIMath_TypeInfo_12d53b8);
        }
      }
LAB_00941fe0:
      uVar14 = 0;
      fVar26 = (float)(iVar15 - iVar10);
    }
    else {
      if ((*(ushort *)(_NGUIMath_TypeInfo_12d53b8 + 0x132) >> 10 & 1) != 0) {
        iVar2 = *(int *)(_NGUIMath_TypeInfo_12d53b8 + 0xe0);
joined_r0x00941fc0:
        if (iVar2 == 0) {
          native_sub_4327ec(_NGUIMath_TypeInfo_12d53b8);
        }
      }
LAB_00942018:
      fVar26 = 0.0;
      uVar14 = (ulong)(uint)(float)(iVar10 - iVar15);
    }
  }
  else {
    if (plVar11[4] == 0) goto LAB_00942094;
    uVar16 = *(undefined8 *)(plVar11[4] + 0x10);
    if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    uVar14 = native_UnityEngine_Object__op_Inequality_8d76fc(uVar16,0,0);
    if ((uVar14 & 1) == 0) goto LAB_00941f6c;
    if (*(uint *)(plVar11 + 0x14) < 9) {
      uVar3 = 1 << (ulong)(*(uint *)(plVar11 + 0x14) & 0x1f);
      if ((uVar3 & 0x49) != 0) {
        iVar15 = *(int *)((long)plVar11 + 0xa4);
        if ((*(byte *)(_NGUIMath_TypeInfo_12d53b8 + 0x133) >> 2 & 1) != 0) {
          iVar2 = *(int *)(_NGUIMath_TypeInfo_12d53b8 + 0xe0);
          goto joined_r0x00941fc0;
        }
        goto LAB_00942018;
      }
      if ((uVar3 & 0x124) == 0) goto LAB_00942044;
      iVar15 = *(int *)((long)plVar11 + 0xa4);
      if ((*(byte *)(_NGUIMath_TypeInfo_12d53b8 + 0x133) >> 2 & 1) != 0) {
        iVar2 = *(int *)(_NGUIMath_TypeInfo_12d53b8 + 0xe0);
        goto joined_r0x00941fd4;
      }
      goto LAB_00941fe0;
    }
LAB_00942044:
    uVar3 = iVar10 - *(int *)((long)plVar11 + 0xa4) & 0xfffffffe;
    if (uVar3 == 0) {
      return;
    }
    if (((*(byte *)(_NGUIMath_TypeInfo_12d53b8 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_NGUIMath_TypeInfo_12d53b8 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    uVar14 = (ulong)(uint)((float)(int)uVar3 * 0.5);
    fVar26 = (float)(int)-uVar3 * 0.5;
  }
  uVar27 = 0;
  uVar16 = 0;
  if ((bRam0000000001340478 & 1) == 0) {
    native_sub_43273c(&NGUIMath_TypeInfo_12d53b8,0);
    bRam0000000001340478 = 1;
  }
  if (((*(byte *)(_NGUIMath_TypeInfo_12d53b8 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_NGUIMath_TypeInfo_12d53b8 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar38 = uVar14;
  if ((bRam000000000134047a & 1) == 0) {
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    bRam000000000134047a = 1;
  }
  if (plVar11 == (long *)0x0) goto LAB_00807ccc;
  fVar17 = (float)native_UIWidget__get_pivotOffset_944f8c(plVar11,0);
  fVar28 = (float)uVar27;
  uVar30 = uVar27;
  lVar12 = native_UIRect__get_cachedTransform_c27c58(plVar11,0);
  if (lVar12 == 0) goto LAB_00807ccc;
  uVar18 = native_UnityEngine_Transform__get_localRotation_771c84(lVar12,0);
  uVar3 = native_UnityEngine_Mathf__FloorToInt_8e506c(fVar26 + 0.5,0);
  uVar4 = native_UnityEngine_Mathf__FloorToInt_8e506c(0x3f000000,0);
  uVar5 = native_UnityEngine_Mathf__FloorToInt_8e506c((float)uVar14 + 0.5,0);
  uVar6 = native_UnityEngine_Mathf__FloorToInt_8e506c(0x3f000000,0);
  if ((fVar17 == 0.5) && ((uVar3 == 0 || (uVar5 == 0)))) {
    uVar3 = uVar3 & 0xfffffffe;
    uVar5 = uVar5 & 0xfffffffe;
  }
  if ((fVar28 == 0.5) && ((uVar4 == 0 || (uVar6 == 0)))) {
    uVar4 = uVar4 & 0xfffffffe;
    uVar6 = uVar6 & 0xfffffffe;
  }
  fVar41 = (float)(int)uVar3;
  fVar26 = (float)(int)uVar6;
  uVar14 = uVar30;
  fVar19 = (float)native_UnityEngine_Quaternion__op_Multiply_7629c0
                            (uVar18,uVar30,uVar38,uVar16,fVar41,fVar26,0,0);
  fVar40 = (float)(int)uVar5;
  uVar31 = uVar30;
  fVar20 = (float)native_UnityEngine_Quaternion__op_Multiply_7629c0
                            (uVar18,uVar30,uVar38,uVar16,fVar40,fVar26,0,0);
  fVar39 = (float)(int)uVar4;
  uVar36 = uVar30;
  fVar21 = (float)native_UnityEngine_Quaternion__op_Multiply_7629c0
                            (uVar18,uVar30,uVar38,uVar16,fVar41,fVar39,0,0);
  uVar32 = uVar30;
  fVar22 = (float)native_UnityEngine_Quaternion__op_Multiply_7629c0
                            (uVar18,uVar30,uVar38,uVar16,fVar40,fVar39,0,0);
  uVar33 = uVar30;
  fVar41 = (float)native_UnityEngine_Quaternion__op_Multiply_7629c0
                            (uVar18,uVar30,uVar38,uVar16,fVar41,0,0,0);
  uVar34 = uVar30;
  fVar23 = (float)native_UnityEngine_Quaternion__op_Multiply_7629c0
                            (uVar18,uVar30,uVar38,uVar16,fVar40,0,0,0);
  fVar29 = (float)uVar34;
  uVar34 = uVar30;
  fVar24 = (float)native_UnityEngine_Quaternion__op_Multiply_7629c0
                            (uVar18,uVar30,uVar38,uVar16,0,fVar26,0,0);
  fVar26 = (float)uVar34;
  uVar34 = uVar30;
  uVar35 = uVar38;
  fVar25 = (float)native_UnityEngine_Quaternion__op_Multiply_7629c0
                            (uVar18,uVar30,uVar38,uVar16,0,fVar39,0,0);
  fVar37 = (float)uVar35;
  uVar35 = uVar34;
  fVar40 = (float)native_UnityEngine_Vector3__get_zero_776668(0);
  fVar39 = fVar37;
  if ((fVar17 == 0.0) && (fVar28 == 1.0)) {
    uVar35 = uVar14 & 0xffffffff;
    fVar40 = fVar19;
  }
  else if ((fVar17 == 1.0) && (fVar28 == 0.0)) {
    uVar35 = uVar32 & 0xffffffff;
    fVar40 = fVar22;
  }
  else if ((fVar17 == 0.0) && (fVar28 == 0.0)) {
    uVar35 = uVar36 & 0xffffffff;
    fVar40 = fVar21;
  }
  else if ((fVar17 == 1.0) && (fVar28 == 1.0)) {
    uVar35 = uVar31 & 0xffffffff;
    fVar40 = fVar20;
  }
  else {
    fVar19 = (float)uVar34;
    fVar20 = (float)uVar33;
    if ((fVar17 == 0.0) && (fVar28 == 0.5)) {
      fVar40 = fVar41 + (fVar24 + fVar25) * 0.5;
      uVar35 = (ulong)(uint)(fVar20 + (fVar26 + fVar19) * 0.5);
      fVar39 = fVar41;
    }
    else if ((fVar17 == 1.0) && (fVar28 == 0.5)) {
      fVar40 = fVar23 + (fVar24 + fVar25) * 0.5;
      fVar19 = fVar26 + fVar19;
      fVar26 = fVar29;
LAB_008078c0:
      uVar35 = (ulong)(uint)(fVar26 + fVar19 * 0.5);
      fVar39 = fVar26;
    }
    else if (fVar17 == 0.5) {
      if (fVar28 == 1.0) {
        fVar40 = fVar24 + (fVar41 + fVar23) * 0.5;
        fVar19 = fVar20 + fVar29;
        goto LAB_008078c0;
      }
      if (fVar28 == 0.0) {
        fVar40 = fVar25 + (fVar41 + fVar23) * 0.5;
        uVar35 = (ulong)(uint)(fVar19 + (fVar20 + fVar29) * 0.5);
      }
      else if (fVar28 == 0.5) {
        fVar40 = (fVar41 + fVar23 + fVar24 + fVar25) * 0.5;
        uVar35 = (ulong)(uint)((fVar29 + fVar20 + fVar26 + fVar19) * 0.5);
        fVar39 = fVar29;
      }
    }
  }
  fVar26 = (float)uVar35;
  uVar7 = (**(code **)(*plVar11 + 0x3b8))(plVar11,*(undefined8 *)(*plVar11 + 0x3c0));
  uVar8 = native_UnityEngine_Mathf__Max_8e4cd0(2,uVar7,0);
  uVar7 = (**(code **)(*plVar11 + 0x3c8))(plVar11,*(undefined8 *)(*plVar11 + 0x3d0));
  uVar9 = native_UnityEngine_Mathf__Max_8e4cd0(2,uVar7,0);
  uVar5 = (uVar5 - uVar3) + *(int *)((long)plVar11 + 0xa4);
  uVar6 = (uVar6 - uVar4) + (int)plVar11[0x15];
  uVar14 = native_UnityEngine_Vector3__get_zero_776668(0);
  uVar1 = 100000;
  if ((int)uVar5 < 0x186a1) {
    uVar1 = uVar5;
  }
  if ((int)uVar8 <= (int)uVar5) {
    uVar8 = uVar1;
  }
  uVar31 = uVar35;
  fVar19 = fVar39;
  if (uVar8 - uVar5 != 0) {
    uVar31 = (ulong)(uint)(float)(int)(uVar8 - uVar5);
    uVar5 = uVar8;
    fVar19 = fVar17;
    if (uVar3 == 0) {
      fVar20 = (float)native_UnityEngine_Mathf__Lerp_8e5224(0,uVar31,fVar17,0);
      uVar14 = (ulong)(uint)((float)uVar14 + fVar20);
    }
    else {
      uVar36 = 0;
      fVar20 = (float)native_UnityEngine_Mathf__Lerp_8e5224(uVar31,0,fVar17,0);
      uVar14 = (ulong)(uint)((float)uVar14 - fVar20);
      uVar31 = uVar36;
    }
  }
  fVar20 = (float)uVar31;
  uVar3 = 100000;
  if ((int)uVar6 < 0x186a1) {
    uVar3 = uVar6;
  }
  if ((int)uVar9 <= (int)uVar6) {
    uVar9 = uVar3;
  }
  if (uVar9 - uVar6 != 0) {
    fVar21 = (float)(int)(uVar9 - uVar6);
    uVar6 = uVar9;
    fVar19 = fVar28;
    if (uVar4 == 0) {
      fVar20 = fVar21;
      fVar21 = (float)native_UnityEngine_Mathf__Lerp_8e5224(0,fVar21,uVar27 & 0xffffffff,0);
      uVar35 = (ulong)(uint)((float)uVar35 + fVar21);
    }
    else {
      fVar20 = 0.0;
      fVar21 = (float)native_UnityEngine_Mathf__Lerp_8e5224(fVar21,0,uVar27 & 0xffffffff,0);
      uVar35 = (ulong)(uint)((float)uVar35 - fVar21);
    }
  }
  uVar3 = uVar5 & 0xfffffffe;
  if (fVar17 != 0.5) {
    uVar3 = uVar5;
  }
  uVar5 = uVar6 & 0xfffffffe;
  if (fVar28 != 0.5) {
    uVar5 = uVar6;
  }
  fVar21 = (float)native_UnityEngine_Transform__get_localPosition_7717f4(lVar12,0);
  fVar39 = (float)native_UnityEngine_Quaternion__op_Multiply_7629c0
                            (uVar18,uVar30,uVar38,uVar16,uVar14,uVar35,fVar39,0);
  fVar39 = fVar40 + fVar21 + fVar39;
  fVar26 = fVar26 + fVar20 + (float)uVar30;
  uVar27 = (ulong)(uint)fVar26;
  uVar38 = (ulong)(uint)(fVar37 + fVar19 + (float)uVar38);
  native_UnityEngine_Transform__set_localPosition_7718a4(fVar39,uVar27,uVar38,lVar12,0);
  native_UIWidget__SetDimensions_94987c(plVar11,uVar3,uVar5,0);
  uVar14 = native_UIRect__get_isAnchored_c2d8cc(plVar11,0);
  if ((uVar14 & 1) == 0) {
    return;
  }
  lVar12 = native_UnityEngine_Transform__get_parent_765eb0(lVar12,0);
  if (plVar11[3] != 0) {
    uVar16 = *(undefined8 *)(plVar11[3] + 0x10);
    if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    fVar39 = fVar39 - fVar17 * (float)(int)uVar3;
    uVar14 = native_UnityEngine_Object__op_Implicit_8e1b98(uVar16,0);
    if ((uVar14 & 1) != 0) {
      if (plVar11[3] == 0) goto LAB_00807ccc;
      native_UIRect_AnchorPoint__SetHorizontal_559078(fVar39,plVar11[3],lVar12,0);
    }
    if (plVar11[4] != 0) {
      uVar16 = *(undefined8 *)(plVar11[4] + 0x10);
      if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
        native_sub_4327ec();
      }
      uVar14 = native_UnityEngine_Object__op_Implicit_8e1b98(uVar16,0);
      if ((uVar14 & 1) != 0) {
        if (plVar11[4] == 0) goto LAB_00807ccc;
        native_UIRect_AnchorPoint__SetHorizontal_559078
                  (fVar39 + (float)(int)uVar3,plVar11[4],lVar12,0);
      }
      if (plVar11[5] != 0) {
        uVar16 = *(undefined8 *)(plVar11[5] + 0x10);
        if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
           (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
          native_sub_4327ec();
        }
        fVar26 = fVar26 - fVar28 * (float)(int)uVar5;
        uVar14 = native_UnityEngine_Object__op_Implicit_8e1b98(uVar16,0);
        if ((uVar14 & 1) != 0) {
          if (plVar11[5] == 0) goto LAB_00807ccc;
          native_UIRect_AnchorPoint__SetVertical_5591e0(fVar26,plVar11[5],lVar12,0);
        }
        if (plVar11[6] != 0) {
          uVar16 = *(undefined8 *)(plVar11[6] + 0x10);
          if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
             (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
            native_sub_4327ec();
          }
          uVar14 = native_UnityEngine_Object__op_Implicit_8e1b98(uVar16,0);
          if ((uVar14 & 1) == 0) {
            return;
          }
          lVar13 = plVar11[6];
          if (lVar13 != 0) {
            if ((bRam000000000133ea04 & 1) == 0) {
              native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0,lVar12,0);
              bRam000000000133ea04 = 1;
            }
            uVar16 = *(undefined8 *)(lVar13 + 0x20);
            if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
               (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
              native_sub_4327ec();
            }
            uVar14 = native_UnityEngine_Object__op_Implicit_8e1b98(uVar16,0);
            if ((uVar14 & 1) == 0) {
              if (*(long *)(lVar13 + 0x10) != 0) {
                uVar16 = native_UnityEngine_Transform__get_position_77169c
                                   (*(long *)(lVar13 + 0x10),0);
                if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
                   (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
                  native_sub_4327ec();
                }
                uVar14 = native_UnityEngine_Object__op_Inequality_8d76fc(lVar12,0,0);
                if ((uVar14 & 1) != 0) {
                  if (lVar12 == 0) goto LAB_00559338;
                  native_UnityEngine_Transform__InverseTransformPoint_7729a0
                            (uVar16,uVar27,uVar38,lVar12,0);
                }
LAB_00559308:
                uVar18 = native_UnityEngine_Mathf__FloorToInt_8e506c
                                   (((fVar26 + (float)(int)uVar5) - (float)uVar27) + 0.5,0);
                *(undefined4 *)(lVar13 + 0x1c) = uVar18;
                return;
              }
            }
            else {
              plVar11 = *(long **)(lVar13 + 0x20);
              if ((plVar11 != (long *)0x0) &&
                 (lVar12 = (**(code **)(*plVar11 + 0x208))
                                     (plVar11,lVar12,*(undefined8 *)(*plVar11 + 0x210)), lVar12 != 0
                 )) {
                if (*(uint *)(lVar12 + 0x18) < 4) {
                  uVar16 = native_sub_43283c();
                    /* WARNING: Subroutine does not return */
                  native_sub_4327dc(uVar16,0);
                }
                uVar27 = native_UnityEngine_Mathf__Lerp_8e5224
                                   (*(undefined4 *)(lVar12 + 0x48),*(undefined4 *)(lVar12 + 0x30),
                                    *(undefined4 *)(lVar13 + 0x18),0);
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



/* TweenWidth$$get_value @ 0x6e7004
 * int32_t TweenWidth__get_value (TweenWidth_o* __this, const MethodInfo* method); */

/* TweenWidth$$get_value
   int32_t TweenWidth__get_value (TweenWidth_o* __this, const MethodInfo* method); */

undefined4 native_TweenWidth__get_value_6e7004(void)

{
  long lVar1;
  
  lVar1 = native_TweenWidth__get_cachedWidget_6e6f30();
  if (lVar1 != 0) {
    return *(undefined4 *)(lVar1 + 0xa4);
  }
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* TweenWidth$$set_value @ 0x6e7028
 * void TweenWidth__set_value (TweenWidth_o* __this, int32_t value, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TweenWidth$$set_value
   void TweenWidth__set_value (TweenWidth_o* __this, int32_t value, const MethodInfo* method); */

void native_TweenWidth__set_value_6e7028(undefined8 param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  undefined4 uVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  long *plVar11;
  long lVar12;
  long lVar13;
  ulong uVar14;
  int iVar15;
  undefined8 uVar16;
  float fVar17;
  undefined4 uVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  ulong uVar27;
  float fVar28;
  float fVar29;
  ulong uVar30;
  ulong uVar31;
  ulong uVar32;
  ulong uVar33;
  ulong uVar34;
  ulong uVar35;
  ulong uVar36;
  float fVar37;
  ulong uVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  
  plVar11 = (long *)native_TweenWidth__get_cachedWidget_6e6f30();
  if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    native_sub_432810();
  }
  if ((bRam000000000134144f & 1) == 0) {
    native_sub_43273c(&NGUIMath_TypeInfo_12d53b8,param_2,0);
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    bRam000000000134144f = 1;
  }
  iVar10 = (**(code **)(*plVar11 + 0x3b8))(plVar11,*(undefined8 *)(*plVar11 + 0x3c0));
  if (iVar10 <= param_2) {
    iVar10 = param_2;
  }
  if (*(int *)((long)plVar11 + 0xa4) == iVar10) {
    return;
  }
  if (*(int *)((long)plVar11 + 0xdc) == 2) {
    return;
  }
  uVar14 = (**(code **)(*plVar11 + 0x178))(plVar11,*(undefined8 *)(*plVar11 + 0x180));
  if ((uVar14 & 1) == 0) {
    iVar15 = (int)plVar11[0x15];
    if ((*(int *)((long)plVar11 + 0xa4) == iVar10) && ((int)plVar11[0x15] == iVar15)) {
      return;
    }
    iVar2 = *(int *)((long)plVar11 + 0xdc);
    *(int *)((long)plVar11 + 0xa4) = iVar10;
    *(int *)(plVar11 + 0x15) = iVar15;
    if (iVar2 == 0) {
      *(float *)(plVar11 + 0x1c) = (float)iVar10 / (float)iVar15;
    }
    else if (iVar2 == 2) {
      uVar18 = native_UnityEngine_Mathf__RoundToInt_8e50f0
                         (*(float *)(plVar11 + 0x1c) * (float)iVar15,0);
      *(undefined4 *)((long)plVar11 + 0xa4) = uVar18;
    }
    else if (iVar2 == 1) {
      uVar18 = native_UnityEngine_Mathf__RoundToInt_8e50f0
                         ((float)iVar10 / *(float *)(plVar11 + 0x1c),0);
      *(undefined4 *)(plVar11 + 0x15) = uVar18;
    }
    *(undefined1 *)((long)plVar11 + 0x15c) = 1;
    if ((char)plVar11[0x1b] != '\0') {
      native_UIWidget__ResizeCollider_949744(plVar11);
    }
                    /* WARNING: Could not recover jumptable at 0x00949944. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar11 + 0x378))(plVar11,*(undefined8 *)(*plVar11 + 0x380));
    return;
  }
  if (plVar11[3] == 0) goto LAB_00942094;
  uVar16 = *(undefined8 *)(plVar11[3] + 0x10);
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar14 = native_UnityEngine_Object__op_Inequality_8d76fc(uVar16,0,0);
  if ((uVar14 & 1) == 0) {
LAB_00941f6c:
    if (plVar11[3] == 0) {
LAB_00942094:
                    /* WARNING: Subroutine does not return */
      native_sub_432810();
    }
    uVar16 = *(undefined8 *)(plVar11[3] + 0x10);
    if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    uVar14 = native_UnityEngine_Object__op_Inequality_8d76fc(uVar16,0,0);
    iVar15 = *(int *)((long)plVar11 + 0xa4);
    if ((uVar14 & 1) == 0) {
      if ((*(ushort *)(_NGUIMath_TypeInfo_12d53b8 + 0x132) >> 10 & 1) != 0) {
        iVar2 = *(int *)(_NGUIMath_TypeInfo_12d53b8 + 0xe0);
joined_r0x00941fd4:
        if (iVar2 == 0) {
          native_sub_4327ec(_NGUIMath_TypeInfo_12d53b8);
        }
      }
LAB_00941fe0:
      uVar14 = 0;
      fVar26 = (float)(iVar15 - iVar10);
    }
    else {
      if ((*(ushort *)(_NGUIMath_TypeInfo_12d53b8 + 0x132) >> 10 & 1) != 0) {
        iVar2 = *(int *)(_NGUIMath_TypeInfo_12d53b8 + 0xe0);
joined_r0x00941fc0:
        if (iVar2 == 0) {
          native_sub_4327ec(_NGUIMath_TypeInfo_12d53b8);
        }
      }
LAB_00942018:
      fVar26 = 0.0;
      uVar14 = (ulong)(uint)(float)(iVar10 - iVar15);
    }
  }
  else {
    if (plVar11[4] == 0) goto LAB_00942094;
    uVar16 = *(undefined8 *)(plVar11[4] + 0x10);
    if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    uVar14 = native_UnityEngine_Object__op_Inequality_8d76fc(uVar16,0,0);
    if ((uVar14 & 1) == 0) goto LAB_00941f6c;
    if (*(uint *)(plVar11 + 0x14) < 9) {
      uVar3 = 1 << (ulong)(*(uint *)(plVar11 + 0x14) & 0x1f);
      if ((uVar3 & 0x49) != 0) {
        iVar15 = *(int *)((long)plVar11 + 0xa4);
        if ((*(byte *)(_NGUIMath_TypeInfo_12d53b8 + 0x133) >> 2 & 1) != 0) {
          iVar2 = *(int *)(_NGUIMath_TypeInfo_12d53b8 + 0xe0);
          goto joined_r0x00941fc0;
        }
        goto LAB_00942018;
      }
      if ((uVar3 & 0x124) == 0) goto LAB_00942044;
      iVar15 = *(int *)((long)plVar11 + 0xa4);
      if ((*(byte *)(_NGUIMath_TypeInfo_12d53b8 + 0x133) >> 2 & 1) != 0) {
        iVar2 = *(int *)(_NGUIMath_TypeInfo_12d53b8 + 0xe0);
        goto joined_r0x00941fd4;
      }
      goto LAB_00941fe0;
    }
LAB_00942044:
    uVar3 = iVar10 - *(int *)((long)plVar11 + 0xa4) & 0xfffffffe;
    if (uVar3 == 0) {
      return;
    }
    if (((*(byte *)(_NGUIMath_TypeInfo_12d53b8 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_NGUIMath_TypeInfo_12d53b8 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    uVar14 = (ulong)(uint)((float)(int)uVar3 * 0.5);
    fVar26 = (float)(int)-uVar3 * 0.5;
  }
  uVar27 = 0;
  uVar16 = 0;
  if ((bRam0000000001340478 & 1) == 0) {
    native_sub_43273c(&NGUIMath_TypeInfo_12d53b8,0);
    bRam0000000001340478 = 1;
  }
  if (((*(byte *)(_NGUIMath_TypeInfo_12d53b8 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_NGUIMath_TypeInfo_12d53b8 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar38 = uVar14;
  if ((bRam000000000134047a & 1) == 0) {
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    bRam000000000134047a = 1;
  }
  if (plVar11 == (long *)0x0) goto LAB_00807ccc;
  fVar17 = (float)native_UIWidget__get_pivotOffset_944f8c(plVar11,0);
  fVar28 = (float)uVar27;
  uVar30 = uVar27;
  lVar12 = native_UIRect__get_cachedTransform_c27c58(plVar11,0);
  if (lVar12 == 0) goto LAB_00807ccc;
  uVar18 = native_UnityEngine_Transform__get_localRotation_771c84(lVar12,0);
  uVar3 = native_UnityEngine_Mathf__FloorToInt_8e506c(fVar26 + 0.5,0);
  uVar4 = native_UnityEngine_Mathf__FloorToInt_8e506c(0x3f000000,0);
  uVar5 = native_UnityEngine_Mathf__FloorToInt_8e506c((float)uVar14 + 0.5,0);
  uVar6 = native_UnityEngine_Mathf__FloorToInt_8e506c(0x3f000000,0);
  if ((fVar17 == 0.5) && ((uVar3 == 0 || (uVar5 == 0)))) {
    uVar3 = uVar3 & 0xfffffffe;
    uVar5 = uVar5 & 0xfffffffe;
  }
  if ((fVar28 == 0.5) && ((uVar4 == 0 || (uVar6 == 0)))) {
    uVar4 = uVar4 & 0xfffffffe;
    uVar6 = uVar6 & 0xfffffffe;
  }
  fVar41 = (float)(int)uVar3;
  fVar26 = (float)(int)uVar6;
  uVar14 = uVar30;
  fVar19 = (float)native_UnityEngine_Quaternion__op_Multiply_7629c0
                            (uVar18,uVar30,uVar38,uVar16,fVar41,fVar26,0,0);
  fVar40 = (float)(int)uVar5;
  uVar31 = uVar30;
  fVar20 = (float)native_UnityEngine_Quaternion__op_Multiply_7629c0
                            (uVar18,uVar30,uVar38,uVar16,fVar40,fVar26,0,0);
  fVar39 = (float)(int)uVar4;
  uVar36 = uVar30;
  fVar21 = (float)native_UnityEngine_Quaternion__op_Multiply_7629c0
                            (uVar18,uVar30,uVar38,uVar16,fVar41,fVar39,0,0);
  uVar32 = uVar30;
  fVar22 = (float)native_UnityEngine_Quaternion__op_Multiply_7629c0
                            (uVar18,uVar30,uVar38,uVar16,fVar40,fVar39,0,0);
  uVar33 = uVar30;
  fVar41 = (float)native_UnityEngine_Quaternion__op_Multiply_7629c0
                            (uVar18,uVar30,uVar38,uVar16,fVar41,0,0,0);
  uVar34 = uVar30;
  fVar23 = (float)native_UnityEngine_Quaternion__op_Multiply_7629c0
                            (uVar18,uVar30,uVar38,uVar16,fVar40,0,0,0);
  fVar29 = (float)uVar34;
  uVar34 = uVar30;
  fVar24 = (float)native_UnityEngine_Quaternion__op_Multiply_7629c0
                            (uVar18,uVar30,uVar38,uVar16,0,fVar26,0,0);
  fVar26 = (float)uVar34;
  uVar34 = uVar30;
  uVar35 = uVar38;
  fVar25 = (float)native_UnityEngine_Quaternion__op_Multiply_7629c0
                            (uVar18,uVar30,uVar38,uVar16,0,fVar39,0,0);
  fVar37 = (float)uVar35;
  uVar35 = uVar34;
  fVar40 = (float)native_UnityEngine_Vector3__get_zero_776668(0);
  fVar39 = fVar37;
  if ((fVar17 == 0.0) && (fVar28 == 1.0)) {
    uVar35 = uVar14 & 0xffffffff;
    fVar40 = fVar19;
  }
  else if ((fVar17 == 1.0) && (fVar28 == 0.0)) {
    uVar35 = uVar32 & 0xffffffff;
    fVar40 = fVar22;
  }
  else if ((fVar17 == 0.0) && (fVar28 == 0.0)) {
    uVar35 = uVar36 & 0xffffffff;
    fVar40 = fVar21;
  }
  else if ((fVar17 == 1.0) && (fVar28 == 1.0)) {
    uVar35 = uVar31 & 0xffffffff;
    fVar40 = fVar20;
  }
  else {
    fVar19 = (float)uVar34;
    fVar20 = (float)uVar33;
    if ((fVar17 == 0.0) && (fVar28 == 0.5)) {
      fVar40 = fVar41 + (fVar24 + fVar25) * 0.5;
      uVar35 = (ulong)(uint)(fVar20 + (fVar26 + fVar19) * 0.5);
      fVar39 = fVar41;
    }
    else if ((fVar17 == 1.0) && (fVar28 == 0.5)) {
      fVar40 = fVar23 + (fVar24 + fVar25) * 0.5;
      fVar19 = fVar26 + fVar19;
      fVar26 = fVar29;
LAB_008078c0:
      uVar35 = (ulong)(uint)(fVar26 + fVar19 * 0.5);
      fVar39 = fVar26;
    }
    else if (fVar17 == 0.5) {
      if (fVar28 == 1.0) {
        fVar40 = fVar24 + (fVar41 + fVar23) * 0.5;
        fVar19 = fVar20 + fVar29;
        goto LAB_008078c0;
      }
      if (fVar28 == 0.0) {
        fVar40 = fVar25 + (fVar41 + fVar23) * 0.5;
        uVar35 = (ulong)(uint)(fVar19 + (fVar20 + fVar29) * 0.5);
      }
      else if (fVar28 == 0.5) {
        fVar40 = (fVar41 + fVar23 + fVar24 + fVar25) * 0.5;
        uVar35 = (ulong)(uint)((fVar29 + fVar20 + fVar26 + fVar19) * 0.5);
        fVar39 = fVar29;
      }
    }
  }
  fVar26 = (float)uVar35;
  uVar7 = (**(code **)(*plVar11 + 0x3b8))(plVar11,*(undefined8 *)(*plVar11 + 0x3c0));
  uVar8 = native_UnityEngine_Mathf__Max_8e4cd0(2,uVar7,0);
  uVar7 = (**(code **)(*plVar11 + 0x3c8))(plVar11,*(undefined8 *)(*plVar11 + 0x3d0));
  uVar9 = native_UnityEngine_Mathf__Max_8e4cd0(2,uVar7,0);
  uVar5 = (uVar5 - uVar3) + *(int *)((long)plVar11 + 0xa4);
  uVar6 = (uVar6 - uVar4) + (int)plVar11[0x15];
  uVar14 = native_UnityEngine_Vector3__get_zero_776668(0);
  uVar1 = 100000;
  if ((int)uVar5 < 0x186a1) {
    uVar1 = uVar5;
  }
  if ((int)uVar8 <= (int)uVar5) {
    uVar8 = uVar1;
  }
  uVar31 = uVar35;
  fVar19 = fVar39;
  if (uVar8 - uVar5 != 0) {
    uVar31 = (ulong)(uint)(float)(int)(uVar8 - uVar5);
    uVar5 = uVar8;
    fVar19 = fVar17;
    if (uVar3 == 0) {
      fVar20 = (float)native_UnityEngine_Mathf__Lerp_8e5224(0,uVar31,fVar17,0);
      uVar14 = (ulong)(uint)((float)uVar14 + fVar20);
    }
    else {
      uVar36 = 0;
      fVar20 = (float)native_UnityEngine_Mathf__Lerp_8e5224(uVar31,0,fVar17,0);
      uVar14 = (ulong)(uint)((float)uVar14 - fVar20);
      uVar31 = uVar36;
    }
  }
  fVar20 = (float)uVar31;
  uVar3 = 100000;
  if ((int)uVar6 < 0x186a1) {
    uVar3 = uVar6;
  }
  if ((int)uVar9 <= (int)uVar6) {
    uVar9 = uVar3;
  }
  if (uVar9 - uVar6 != 0) {
    fVar21 = (float)(int)(uVar9 - uVar6);
    uVar6 = uVar9;
    fVar19 = fVar28;
    if (uVar4 == 0) {
      fVar20 = fVar21;
      fVar21 = (float)native_UnityEngine_Mathf__Lerp_8e5224(0,fVar21,uVar27 & 0xffffffff,0);
      uVar35 = (ulong)(uint)((float)uVar35 + fVar21);
    }
    else {
      fVar20 = 0.0;
      fVar21 = (float)native_UnityEngine_Mathf__Lerp_8e5224(fVar21,0,uVar27 & 0xffffffff,0);
      uVar35 = (ulong)(uint)((float)uVar35 - fVar21);
    }
  }
  uVar3 = uVar5 & 0xfffffffe;
  if (fVar17 != 0.5) {
    uVar3 = uVar5;
  }
  uVar5 = uVar6 & 0xfffffffe;
  if (fVar28 != 0.5) {
    uVar5 = uVar6;
  }
  fVar21 = (float)native_UnityEngine_Transform__get_localPosition_7717f4(lVar12,0);
  fVar39 = (float)native_UnityEngine_Quaternion__op_Multiply_7629c0
                            (uVar18,uVar30,uVar38,uVar16,uVar14,uVar35,fVar39,0);
  fVar39 = fVar40 + fVar21 + fVar39;
  fVar26 = fVar26 + fVar20 + (float)uVar30;
  uVar27 = (ulong)(uint)fVar26;
  uVar38 = (ulong)(uint)(fVar37 + fVar19 + (float)uVar38);
  native_UnityEngine_Transform__set_localPosition_7718a4(fVar39,uVar27,uVar38,lVar12,0);
  native_UIWidget__SetDimensions_94987c(plVar11,uVar3,uVar5,0);
  uVar14 = native_UIRect__get_isAnchored_c2d8cc(plVar11,0);
  if ((uVar14 & 1) == 0) {
    return;
  }
  lVar12 = native_UnityEngine_Transform__get_parent_765eb0(lVar12,0);
  if (plVar11[3] != 0) {
    uVar16 = *(undefined8 *)(plVar11[3] + 0x10);
    if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    fVar39 = fVar39 - fVar17 * (float)(int)uVar3;
    uVar14 = native_UnityEngine_Object__op_Implicit_8e1b98(uVar16,0);
    if ((uVar14 & 1) != 0) {
      if (plVar11[3] == 0) goto LAB_00807ccc;
      native_UIRect_AnchorPoint__SetHorizontal_559078(fVar39,plVar11[3],lVar12,0);
    }
    if (plVar11[4] != 0) {
      uVar16 = *(undefined8 *)(plVar11[4] + 0x10);
      if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
        native_sub_4327ec();
      }
      uVar14 = native_UnityEngine_Object__op_Implicit_8e1b98(uVar16,0);
      if ((uVar14 & 1) != 0) {
        if (plVar11[4] == 0) goto LAB_00807ccc;
        native_UIRect_AnchorPoint__SetHorizontal_559078
                  (fVar39 + (float)(int)uVar3,plVar11[4],lVar12,0);
      }
      if (plVar11[5] != 0) {
        uVar16 = *(undefined8 *)(plVar11[5] + 0x10);
        if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
           (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
          native_sub_4327ec();
        }
        fVar26 = fVar26 - fVar28 * (float)(int)uVar5;
        uVar14 = native_UnityEngine_Object__op_Implicit_8e1b98(uVar16,0);
        if ((uVar14 & 1) != 0) {
          if (plVar11[5] == 0) goto LAB_00807ccc;
          native_UIRect_AnchorPoint__SetVertical_5591e0(fVar26,plVar11[5],lVar12,0);
        }
        if (plVar11[6] != 0) {
          uVar16 = *(undefined8 *)(plVar11[6] + 0x10);
          if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
             (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
            native_sub_4327ec();
          }
          uVar14 = native_UnityEngine_Object__op_Implicit_8e1b98(uVar16,0);
          if ((uVar14 & 1) == 0) {
            return;
          }
          lVar13 = plVar11[6];
          if (lVar13 != 0) {
            if ((bRam000000000133ea04 & 1) == 0) {
              native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0,lVar12,0);
              bRam000000000133ea04 = 1;
            }
            uVar16 = *(undefined8 *)(lVar13 + 0x20);
            if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
               (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
              native_sub_4327ec();
            }
            uVar14 = native_UnityEngine_Object__op_Implicit_8e1b98(uVar16,0);
            if ((uVar14 & 1) == 0) {
              if (*(long *)(lVar13 + 0x10) != 0) {
                uVar16 = native_UnityEngine_Transform__get_position_77169c
                                   (*(long *)(lVar13 + 0x10),0);
                if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
                   (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
                  native_sub_4327ec();
                }
                uVar14 = native_UnityEngine_Object__op_Inequality_8d76fc(lVar12,0,0);
                if ((uVar14 & 1) != 0) {
                  if (lVar12 == 0) goto LAB_00559338;
                  native_UnityEngine_Transform__InverseTransformPoint_7729a0
                            (uVar16,uVar27,uVar38,lVar12,0);
                }
LAB_00559308:
                uVar18 = native_UnityEngine_Mathf__FloorToInt_8e506c
                                   (((fVar26 + (float)(int)uVar5) - (float)uVar27) + 0.5,0);
                *(undefined4 *)(lVar13 + 0x1c) = uVar18;
                return;
              }
            }
            else {
              plVar11 = *(long **)(lVar13 + 0x20);
              if ((plVar11 != (long *)0x0) &&
                 (lVar12 = (**(code **)(*plVar11 + 0x208))
                                     (plVar11,lVar12,*(undefined8 *)(*plVar11 + 0x210)), lVar12 != 0
                 )) {
                if (*(uint *)(lVar12 + 0x18) < 4) {
                  uVar16 = native_sub_43283c();
                    /* WARNING: Subroutine does not return */
                  native_sub_4327dc(uVar16,0);
                }
                uVar27 = native_UnityEngine_Mathf__Lerp_8e5224
                                   (*(undefined4 *)(lVar12 + 0x48),*(undefined4 *)(lVar12 + 0x30),
                                    *(undefined4 *)(lVar13 + 0x18),0);
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



/* TweenWidth$$OnUpdate @ 0x6e7058
 * void TweenWidth__OnUpdate (TweenWidth_o* __this, float factor, bool isFinished, const MethodInfo* method); */

/* WARNING: Removing unreachable block (ram,0x0094239c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TweenWidth$$OnUpdate
   void TweenWidth__OnUpdate (TweenWidth_o* __this, float factor, bool isFinished, const MethodInfo*
   method); */

void native_TweenWidth__OnUpdate_6e7058(float param_1,long param_2)

{
  int iVar1;
  undefined4 uVar2;
  ulong uVar3;
  undefined8 uVar4;
  long *plVar5;
  long lVar6;
  
  if ((bRam000000000133f3ba & 1) == 0) {
    native_sub_43273c(&Method_NGUITools_FindInParents_UITable____12e57a0);
    native_sub_43273c(&NGUITools_TypeInfo_12d53c8);
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    bRam000000000133f3ba = 1;
  }
  uVar4 = *(undefined8 *)(param_2 + 0x88);
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar3 = native_UnityEngine_Object__op_Implicit_8e1b98(uVar4,0);
  if ((uVar3 & 1) != 0) {
    if (*(long *)(param_2 + 0x88) == 0) goto LAB_006e7268;
    *(undefined4 *)(param_2 + 0x80) = *(undefined4 *)(*(long *)(param_2 + 0x88) + 0xa4);
  }
  uVar4 = *(undefined8 *)(param_2 + 0x90);
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar3 = native_UnityEngine_Object__op_Implicit_8e1b98(uVar4,0);
  if ((uVar3 & 1) == 0) {
    iVar1 = *(int *)(param_2 + 0x84);
  }
  else {
    if (*(long *)(param_2 + 0x90) == 0) goto LAB_006e7268;
    iVar1 = *(int *)(*(long *)(param_2 + 0x90) + 0xa4);
    *(int *)(param_2 + 0x84) = iVar1;
  }
  uVar2 = native_UnityEngine_Mathf__RoundToInt_8e50f0
                    ((1.0 - param_1) * (float)*(int *)(param_2 + 0x80) + (float)iVar1 * param_1,0);
  native_TweenWidth__set_value_6e7028(param_2,uVar2);
  if (*(char *)(param_2 + 0x98) == '\0') {
    return;
  }
  plVar5 = (long *)(param_2 + 0xa8);
  lVar6 = *plVar5;
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar3 = native_UnityEngine_Object__op_Equality_8e9a3c(lVar6,0,0);
  if ((uVar3 & 1) != 0) {
    uVar4 = native_UnityEngine_Component__get_gameObject_8da66c(param_2,0);
    if (((*(byte *)(_NGUITools_TypeInfo_12d53c8 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_NGUITools_TypeInfo_12d53c8 + 0xe0) == 0)) {
      native_sub_4327ec(_NGUITools_TypeInfo_12d53c8);
    }
    lVar6 = native_NGUITools__FindInParents_object__4a5c04
                      (uVar4,_Method_NGUITools_FindInParents_UITable____12e57a0);
    *plVar5 = lVar6;
    native_sub_4326e0(plVar5,lVar6);
    lVar6 = *plVar5;
    if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    uVar3 = native_UnityEngine_Object__op_Equality_8e9a3c(lVar6,0,0);
    if ((uVar3 & 1) != 0) {
      *(undefined1 *)(param_2 + 0x98) = 0;
      return;
    }
  }
  lVar6 = *plVar5;
  if (lVar6 != 0) {
    *(undefined1 *)(lVar6 + 0x59) = 1;
    if (pcRam0000000001340948 == (code *)0x0) {
      pcRam0000000001340948 = (code *)native_sub_4326f0(&UNK_00e2c702);
    }
                    /* WARNING: Could not recover jumptable at 0x008d7b58. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*pcRam0000000001340948)(lVar6,1);
    return;
  }
LAB_006e7268:
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* TweenWidth$$Begin @ 0x6e726c
 * TweenWidth_o* TweenWidth__Begin (UIWidget_o* widget, float duration, int32_t width, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TweenWidth$$Begin
   TweenWidth_o* TweenWidth__Begin (UIWidget_o* widget, float duration, int32_t width, const
   MethodInfo* method); */

long native_TweenWidth__Begin_6e726c(undefined8 param_1,long param_2,undefined4 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  if ((bRam000000000133f3bb & 1) == 0) {
    native_sub_43273c(&Method_UITweener_Begin_TweenWidth____12e7950);
    bRam000000000133f3bb = 1;
  }
  if (param_2 != 0) {
    uVar1 = native_UnityEngine_Component__get_gameObject_8da66c(param_2,0);
    lVar2 = native_UITweener__Begin_object__d8710c
                      (param_1,0,uVar1,_Method_UITweener_Begin_TweenWidth____12e7950);
    if (lVar2 != 0) {
      *(undefined4 *)(lVar2 + 0x80) = *(undefined4 *)(param_2 + 0xa4);
      *(undefined4 *)(lVar2 + 0x84) = param_3;
      if ((float)param_1 <= 0.0) {
        native_UITweener__Sample_948a44(0x3f800000,lVar2,1,0);
        native_UnityEngine_Behaviour__set_enabled_8d7b0c(lVar2,0,0);
      }
      return lVar2;
    }
  }
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* TweenWidth$$SetStartToCurrentValue @ 0x6e732c
 * void TweenWidth__SetStartToCurrentValue (TweenWidth_o* __this, const MethodInfo* method); */

/* TweenWidth$$SetStartToCurrentValue
   void TweenWidth__SetStartToCurrentValue (TweenWidth_o* __this, const MethodInfo* method); */

void native_TweenWidth__SetStartToCurrentValue_6e732c(long param_1)

{
  long lVar1;
  
  lVar1 = native_TweenWidth__get_cachedWidget_6e6f30();
  if (lVar1 != 0) {
    *(undefined4 *)(param_1 + 0x80) = *(undefined4 *)(lVar1 + 0xa4);
    return;
  }
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* TweenWidth$$SetEndToCurrentValue @ 0x6e735c
 * void TweenWidth__SetEndToCurrentValue (TweenWidth_o* __this, const MethodInfo* method); */

/* TweenWidth$$SetEndToCurrentValue
   void TweenWidth__SetEndToCurrentValue (TweenWidth_o* __this, const MethodInfo* method); */

void native_TweenWidth__SetEndToCurrentValue_6e735c(long param_1)

{
  long lVar1;
  
  lVar1 = native_TweenWidth__get_cachedWidget_6e6f30();
  if (lVar1 != 0) {
    *(undefined4 *)(param_1 + 0x84) = *(undefined4 *)(lVar1 + 0xa4);
    return;
  }
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* TweenWidth$$SetCurrentValueToStart @ 0x6e738c
 * void TweenWidth__SetCurrentValueToStart (TweenWidth_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TweenWidth$$SetCurrentValueToStart
   void TweenWidth__SetCurrentValueToStart (TweenWidth_o* __this, const MethodInfo* method); */

void native_TweenWidth__SetCurrentValueToStart_6e738c(long param_1)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  undefined4 uVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  long *plVar11;
  long lVar12;
  long lVar13;
  ulong uVar14;
  int iVar15;
  undefined8 uVar16;
  float fVar17;
  undefined4 uVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  ulong uVar27;
  float fVar28;
  float fVar29;
  ulong uVar30;
  ulong uVar31;
  ulong uVar32;
  ulong uVar33;
  ulong uVar34;
  ulong uVar35;
  ulong uVar36;
  float fVar37;
  ulong uVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  
  iVar15 = *(int *)(param_1 + 0x80);
  plVar11 = (long *)native_TweenWidth__get_cachedWidget_6e6f30();
  if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    native_sub_432810();
  }
  if ((bRam000000000134144f & 1) == 0) {
    native_sub_43273c(&NGUIMath_TypeInfo_12d53b8,iVar15,0);
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    bRam000000000134144f = 1;
  }
  iVar10 = (**(code **)(*plVar11 + 0x3b8))(plVar11,*(undefined8 *)(*plVar11 + 0x3c0));
  if (iVar10 <= iVar15) {
    iVar10 = iVar15;
  }
  if (*(int *)((long)plVar11 + 0xa4) == iVar10) {
    return;
  }
  if (*(int *)((long)plVar11 + 0xdc) == 2) {
    return;
  }
  uVar14 = (**(code **)(*plVar11 + 0x178))(plVar11,*(undefined8 *)(*plVar11 + 0x180));
  if ((uVar14 & 1) == 0) {
    iVar15 = (int)plVar11[0x15];
    if ((*(int *)((long)plVar11 + 0xa4) == iVar10) && ((int)plVar11[0x15] == iVar15)) {
      return;
    }
    iVar2 = *(int *)((long)plVar11 + 0xdc);
    *(int *)((long)plVar11 + 0xa4) = iVar10;
    *(int *)(plVar11 + 0x15) = iVar15;
    if (iVar2 == 0) {
      *(float *)(plVar11 + 0x1c) = (float)iVar10 / (float)iVar15;
    }
    else if (iVar2 == 2) {
      uVar18 = native_UnityEngine_Mathf__RoundToInt_8e50f0
                         (*(float *)(plVar11 + 0x1c) * (float)iVar15,0);
      *(undefined4 *)((long)plVar11 + 0xa4) = uVar18;
    }
    else if (iVar2 == 1) {
      uVar18 = native_UnityEngine_Mathf__RoundToInt_8e50f0
                         ((float)iVar10 / *(float *)(plVar11 + 0x1c),0);
      *(undefined4 *)(plVar11 + 0x15) = uVar18;
    }
    *(undefined1 *)((long)plVar11 + 0x15c) = 1;
    if ((char)plVar11[0x1b] != '\0') {
      native_UIWidget__ResizeCollider_949744(plVar11);
    }
                    /* WARNING: Could not recover jumptable at 0x00949944. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar11 + 0x378))(plVar11,*(undefined8 *)(*plVar11 + 0x380));
    return;
  }
  if (plVar11[3] == 0) goto LAB_00942094;
  uVar16 = *(undefined8 *)(plVar11[3] + 0x10);
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar14 = native_UnityEngine_Object__op_Inequality_8d76fc(uVar16,0,0);
  if ((uVar14 & 1) == 0) {
LAB_00941f6c:
    if (plVar11[3] == 0) {
LAB_00942094:
                    /* WARNING: Subroutine does not return */
      native_sub_432810();
    }
    uVar16 = *(undefined8 *)(plVar11[3] + 0x10);
    if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    uVar14 = native_UnityEngine_Object__op_Inequality_8d76fc(uVar16,0,0);
    iVar15 = *(int *)((long)plVar11 + 0xa4);
    if ((uVar14 & 1) == 0) {
      if ((*(ushort *)(_NGUIMath_TypeInfo_12d53b8 + 0x132) >> 10 & 1) != 0) {
        iVar2 = *(int *)(_NGUIMath_TypeInfo_12d53b8 + 0xe0);
joined_r0x00941fd4:
        if (iVar2 == 0) {
          native_sub_4327ec(_NGUIMath_TypeInfo_12d53b8);
        }
      }
LAB_00941fe0:
      uVar14 = 0;
      fVar26 = (float)(iVar15 - iVar10);
    }
    else {
      if ((*(ushort *)(_NGUIMath_TypeInfo_12d53b8 + 0x132) >> 10 & 1) != 0) {
        iVar2 = *(int *)(_NGUIMath_TypeInfo_12d53b8 + 0xe0);
joined_r0x00941fc0:
        if (iVar2 == 0) {
          native_sub_4327ec(_NGUIMath_TypeInfo_12d53b8);
        }
      }
LAB_00942018:
      fVar26 = 0.0;
      uVar14 = (ulong)(uint)(float)(iVar10 - iVar15);
    }
  }
  else {
    if (plVar11[4] == 0) goto LAB_00942094;
    uVar16 = *(undefined8 *)(plVar11[4] + 0x10);
    if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    uVar14 = native_UnityEngine_Object__op_Inequality_8d76fc(uVar16,0,0);
    if ((uVar14 & 1) == 0) goto LAB_00941f6c;
    if (*(uint *)(plVar11 + 0x14) < 9) {
      uVar3 = 1 << (ulong)(*(uint *)(plVar11 + 0x14) & 0x1f);
      if ((uVar3 & 0x49) != 0) {
        iVar15 = *(int *)((long)plVar11 + 0xa4);
        if ((*(byte *)(_NGUIMath_TypeInfo_12d53b8 + 0x133) >> 2 & 1) != 0) {
          iVar2 = *(int *)(_NGUIMath_TypeInfo_12d53b8 + 0xe0);
          goto joined_r0x00941fc0;
        }
        goto LAB_00942018;
      }
      if ((uVar3 & 0x124) == 0) goto LAB_00942044;
      iVar15 = *(int *)((long)plVar11 + 0xa4);
      if ((*(byte *)(_NGUIMath_TypeInfo_12d53b8 + 0x133) >> 2 & 1) != 0) {
        iVar2 = *(int *)(_NGUIMath_TypeInfo_12d53b8 + 0xe0);
        goto joined_r0x00941fd4;
      }
      goto LAB_00941fe0;
    }
LAB_00942044:
    uVar3 = iVar10 - *(int *)((long)plVar11 + 0xa4) & 0xfffffffe;
    if (uVar3 == 0) {
      return;
    }
    if (((*(byte *)(_NGUIMath_TypeInfo_12d53b8 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_NGUIMath_TypeInfo_12d53b8 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    uVar14 = (ulong)(uint)((float)(int)uVar3 * 0.5);
    fVar26 = (float)(int)-uVar3 * 0.5;
  }
  uVar27 = 0;
  uVar16 = 0;
  if ((bRam0000000001340478 & 1) == 0) {
    native_sub_43273c(&NGUIMath_TypeInfo_12d53b8,0);
    bRam0000000001340478 = 1;
  }
  if (((*(byte *)(_NGUIMath_TypeInfo_12d53b8 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_NGUIMath_TypeInfo_12d53b8 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar38 = uVar14;
  if ((bRam000000000134047a & 1) == 0) {
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    bRam000000000134047a = 1;
  }
  if (plVar11 == (long *)0x0) goto LAB_00807ccc;
  fVar17 = (float)native_UIWidget__get_pivotOffset_944f8c(plVar11,0);
  fVar28 = (float)uVar27;
  uVar30 = uVar27;
  lVar12 = native_UIRect__get_cachedTransform_c27c58(plVar11,0);
  if (lVar12 == 0) goto LAB_00807ccc;
  uVar18 = native_UnityEngine_Transform__get_localRotation_771c84(lVar12,0);
  uVar3 = native_UnityEngine_Mathf__FloorToInt_8e506c(fVar26 + 0.5,0);
  uVar4 = native_UnityEngine_Mathf__FloorToInt_8e506c(0x3f000000,0);
  uVar5 = native_UnityEngine_Mathf__FloorToInt_8e506c((float)uVar14 + 0.5,0);
  uVar6 = native_UnityEngine_Mathf__FloorToInt_8e506c(0x3f000000,0);
  if ((fVar17 == 0.5) && ((uVar3 == 0 || (uVar5 == 0)))) {
    uVar3 = uVar3 & 0xfffffffe;
    uVar5 = uVar5 & 0xfffffffe;
  }
  if ((fVar28 == 0.5) && ((uVar4 == 0 || (uVar6 == 0)))) {
    uVar4 = uVar4 & 0xfffffffe;
    uVar6 = uVar6 & 0xfffffffe;
  }
  fVar41 = (float)(int)uVar3;
  fVar26 = (float)(int)uVar6;
  uVar14 = uVar30;
  fVar19 = (float)native_UnityEngine_Quaternion__op_Multiply_7629c0
                            (uVar18,uVar30,uVar38,uVar16,fVar41,fVar26,0,0);
  fVar40 = (float)(int)uVar5;
  uVar31 = uVar30;
  fVar20 = (float)native_UnityEngine_Quaternion__op_Multiply_7629c0
                            (uVar18,uVar30,uVar38,uVar16,fVar40,fVar26,0,0);
  fVar39 = (float)(int)uVar4;
  uVar36 = uVar30;
  fVar21 = (float)native_UnityEngine_Quaternion__op_Multiply_7629c0
                            (uVar18,uVar30,uVar38,uVar16,fVar41,fVar39,0,0);
  uVar32 = uVar30;
  fVar22 = (float)native_UnityEngine_Quaternion__op_Multiply_7629c0
                            (uVar18,uVar30,uVar38,uVar16,fVar40,fVar39,0,0);
  uVar33 = uVar30;
  fVar41 = (float)native_UnityEngine_Quaternion__op_Multiply_7629c0
                            (uVar18,uVar30,uVar38,uVar16,fVar41,0,0,0);
  uVar34 = uVar30;
  fVar23 = (float)native_UnityEngine_Quaternion__op_Multiply_7629c0
                            (uVar18,uVar30,uVar38,uVar16,fVar40,0,0,0);
  fVar29 = (float)uVar34;
  uVar34 = uVar30;
  fVar24 = (float)native_UnityEngine_Quaternion__op_Multiply_7629c0
                            (uVar18,uVar30,uVar38,uVar16,0,fVar26,0,0);
  fVar26 = (float)uVar34;
  uVar34 = uVar30;
  uVar35 = uVar38;
  fVar25 = (float)native_UnityEngine_Quaternion__op_Multiply_7629c0
                            (uVar18,uVar30,uVar38,uVar16,0,fVar39,0,0);
  fVar37 = (float)uVar35;
  uVar35 = uVar34;
  fVar40 = (float)native_UnityEngine_Vector3__get_zero_776668(0);
  fVar39 = fVar37;
  if ((fVar17 == 0.0) && (fVar28 == 1.0)) {
    uVar35 = uVar14 & 0xffffffff;
    fVar40 = fVar19;
  }
  else if ((fVar17 == 1.0) && (fVar28 == 0.0)) {
    uVar35 = uVar32 & 0xffffffff;
    fVar40 = fVar22;
  }
  else if ((fVar17 == 0.0) && (fVar28 == 0.0)) {
    uVar35 = uVar36 & 0xffffffff;
    fVar40 = fVar21;
  }
  else if ((fVar17 == 1.0) && (fVar28 == 1.0)) {
    uVar35 = uVar31 & 0xffffffff;
    fVar40 = fVar20;
  }
  else {
    fVar19 = (float)uVar34;
    fVar20 = (float)uVar33;
    if ((fVar17 == 0.0) && (fVar28 == 0.5)) {
      fVar40 = fVar41 + (fVar24 + fVar25) * 0.5;
      uVar35 = (ulong)(uint)(fVar20 + (fVar26 + fVar19) * 0.5);
      fVar39 = fVar41;
    }
    else if ((fVar17 == 1.0) && (fVar28 == 0.5)) {
      fVar40 = fVar23 + (fVar24 + fVar25) * 0.5;
      fVar19 = fVar26 + fVar19;
      fVar26 = fVar29;
LAB_008078c0:
      uVar35 = (ulong)(uint)(fVar26 + fVar19 * 0.5);
      fVar39 = fVar26;
    }
    else if (fVar17 == 0.5) {
      if (fVar28 == 1.0) {
        fVar40 = fVar24 + (fVar41 + fVar23) * 0.5;
        fVar19 = fVar20 + fVar29;
        goto LAB_008078c0;
      }
      if (fVar28 == 0.0) {
        fVar40 = fVar25 + (fVar41 + fVar23) * 0.5;
        uVar35 = (ulong)(uint)(fVar19 + (fVar20 + fVar29) * 0.5);
      }
      else if (fVar28 == 0.5) {
        fVar40 = (fVar41 + fVar23 + fVar24 + fVar25) * 0.5;
        uVar35 = (ulong)(uint)((fVar29 + fVar20 + fVar26 + fVar19) * 0.5);
        fVar39 = fVar29;
      }
    }
  }
  fVar26 = (float)uVar35;
  uVar7 = (**(code **)(*plVar11 + 0x3b8))(plVar11,*(undefined8 *)(*plVar11 + 0x3c0));
  uVar8 = native_UnityEngine_Mathf__Max_8e4cd0(2,uVar7,0);
  uVar7 = (**(code **)(*plVar11 + 0x3c8))(plVar11,*(undefined8 *)(*plVar11 + 0x3d0));
  uVar9 = native_UnityEngine_Mathf__Max_8e4cd0(2,uVar7,0);
  uVar5 = (uVar5 - uVar3) + *(int *)((long)plVar11 + 0xa4);
  uVar6 = (uVar6 - uVar4) + (int)plVar11[0x15];
  uVar14 = native_UnityEngine_Vector3__get_zero_776668(0);
  uVar1 = 100000;
  if ((int)uVar5 < 0x186a1) {
    uVar1 = uVar5;
  }
  if ((int)uVar8 <= (int)uVar5) {
    uVar8 = uVar1;
  }
  uVar31 = uVar35;
  fVar19 = fVar39;
  if (uVar8 - uVar5 != 0) {
    uVar31 = (ulong)(uint)(float)(int)(uVar8 - uVar5);
    uVar5 = uVar8;
    fVar19 = fVar17;
    if (uVar3 == 0) {
      fVar20 = (float)native_UnityEngine_Mathf__Lerp_8e5224(0,uVar31,fVar17,0);
      uVar14 = (ulong)(uint)((float)uVar14 + fVar20);
    }
    else {
      uVar36 = 0;
      fVar20 = (float)native_UnityEngine_Mathf__Lerp_8e5224(uVar31,0,fVar17,0);
      uVar14 = (ulong)(uint)((float)uVar14 - fVar20);
      uVar31 = uVar36;
    }
  }
  fVar20 = (float)uVar31;
  uVar3 = 100000;
  if ((int)uVar6 < 0x186a1) {
    uVar3 = uVar6;
  }
  if ((int)uVar9 <= (int)uVar6) {
    uVar9 = uVar3;
  }
  if (uVar9 - uVar6 != 0) {
    fVar21 = (float)(int)(uVar9 - uVar6);
    uVar6 = uVar9;
    fVar19 = fVar28;
    if (uVar4 == 0) {
      fVar20 = fVar21;
      fVar21 = (float)native_UnityEngine_Mathf__Lerp_8e5224(0,fVar21,uVar27 & 0xffffffff,0);
      uVar35 = (ulong)(uint)((float)uVar35 + fVar21);
    }
    else {
      fVar20 = 0.0;
      fVar21 = (float)native_UnityEngine_Mathf__Lerp_8e5224(fVar21,0,uVar27 & 0xffffffff,0);
      uVar35 = (ulong)(uint)((float)uVar35 - fVar21);
    }
  }
  uVar3 = uVar5 & 0xfffffffe;
  if (fVar17 != 0.5) {
    uVar3 = uVar5;
  }
  uVar5 = uVar6 & 0xfffffffe;
  if (fVar28 != 0.5) {
    uVar5 = uVar6;
  }
  fVar21 = (float)native_UnityEngine_Transform__get_localPosition_7717f4(lVar12,0);
  fVar39 = (float)native_UnityEngine_Quaternion__op_Multiply_7629c0
                            (uVar18,uVar30,uVar38,uVar16,uVar14,uVar35,fVar39,0);
  fVar39 = fVar40 + fVar21 + fVar39;
  fVar26 = fVar26 + fVar20 + (float)uVar30;
  uVar27 = (ulong)(uint)fVar26;
  uVar38 = (ulong)(uint)(fVar37 + fVar19 + (float)uVar38);
  native_UnityEngine_Transform__set_localPosition_7718a4(fVar39,uVar27,uVar38,lVar12,0);
  native_UIWidget__SetDimensions_94987c(plVar11,uVar3,uVar5,0);
  uVar14 = native_UIRect__get_isAnchored_c2d8cc(plVar11,0);
  if ((uVar14 & 1) == 0) {
    return;
  }
  lVar12 = native_UnityEngine_Transform__get_parent_765eb0(lVar12,0);
  if (plVar11[3] != 0) {
    uVar16 = *(undefined8 *)(plVar11[3] + 0x10);
    if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    fVar39 = fVar39 - fVar17 * (float)(int)uVar3;
    uVar14 = native_UnityEngine_Object__op_Implicit_8e1b98(uVar16,0);
    if ((uVar14 & 1) != 0) {
      if (plVar11[3] == 0) goto LAB_00807ccc;
      native_UIRect_AnchorPoint__SetHorizontal_559078(fVar39,plVar11[3],lVar12,0);
    }
    if (plVar11[4] != 0) {
      uVar16 = *(undefined8 *)(plVar11[4] + 0x10);
      if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
        native_sub_4327ec();
      }
      uVar14 = native_UnityEngine_Object__op_Implicit_8e1b98(uVar16,0);
      if ((uVar14 & 1) != 0) {
        if (plVar11[4] == 0) goto LAB_00807ccc;
        native_UIRect_AnchorPoint__SetHorizontal_559078
                  (fVar39 + (float)(int)uVar3,plVar11[4],lVar12,0);
      }
      if (plVar11[5] != 0) {
        uVar16 = *(undefined8 *)(plVar11[5] + 0x10);
        if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
           (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
          native_sub_4327ec();
        }
        fVar26 = fVar26 - fVar28 * (float)(int)uVar5;
        uVar14 = native_UnityEngine_Object__op_Implicit_8e1b98(uVar16,0);
        if ((uVar14 & 1) != 0) {
          if (plVar11[5] == 0) goto LAB_00807ccc;
          native_UIRect_AnchorPoint__SetVertical_5591e0(fVar26,plVar11[5],lVar12,0);
        }
        if (plVar11[6] != 0) {
          uVar16 = *(undefined8 *)(plVar11[6] + 0x10);
          if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
             (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
            native_sub_4327ec();
          }
          uVar14 = native_UnityEngine_Object__op_Implicit_8e1b98(uVar16,0);
          if ((uVar14 & 1) == 0) {
            return;
          }
          lVar13 = plVar11[6];
          if (lVar13 != 0) {
            if ((bRam000000000133ea04 & 1) == 0) {
              native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0,lVar12,0);
              bRam000000000133ea04 = 1;
            }
            uVar16 = *(undefined8 *)(lVar13 + 0x20);
            if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
               (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
              native_sub_4327ec();
            }
            uVar14 = native_UnityEngine_Object__op_Implicit_8e1b98(uVar16,0);
            if ((uVar14 & 1) == 0) {
              if (*(long *)(lVar13 + 0x10) != 0) {
                uVar16 = native_UnityEngine_Transform__get_position_77169c
                                   (*(long *)(lVar13 + 0x10),0);
                if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
                   (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
                  native_sub_4327ec();
                }
                uVar14 = native_UnityEngine_Object__op_Inequality_8d76fc(lVar12,0,0);
                if ((uVar14 & 1) != 0) {
                  if (lVar12 == 0) goto LAB_00559338;
                  native_UnityEngine_Transform__InverseTransformPoint_7729a0
                            (uVar16,uVar27,uVar38,lVar12,0);
                }
LAB_00559308:
                uVar18 = native_UnityEngine_Mathf__FloorToInt_8e506c
                                   (((fVar26 + (float)(int)uVar5) - (float)uVar27) + 0.5,0);
                *(undefined4 *)(lVar13 + 0x1c) = uVar18;
                return;
              }
            }
            else {
              plVar11 = *(long **)(lVar13 + 0x20);
              if ((plVar11 != (long *)0x0) &&
                 (lVar12 = (**(code **)(*plVar11 + 0x208))
                                     (plVar11,lVar12,*(undefined8 *)(*plVar11 + 0x210)), lVar12 != 0
                 )) {
                if (*(uint *)(lVar12 + 0x18) < 4) {
                  uVar16 = native_sub_43283c();
                    /* WARNING: Subroutine does not return */
                  native_sub_4327dc(uVar16,0);
                }
                uVar27 = native_UnityEngine_Mathf__Lerp_8e5224
                                   (*(undefined4 *)(lVar12 + 0x48),*(undefined4 *)(lVar12 + 0x30),
                                    *(undefined4 *)(lVar13 + 0x18),0);
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



/* TweenWidth$$SetCurrentValueToEnd @ 0x6e7394
 * void TweenWidth__SetCurrentValueToEnd (TweenWidth_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TweenWidth$$SetCurrentValueToEnd
   void TweenWidth__SetCurrentValueToEnd (TweenWidth_o* __this, const MethodInfo* method); */

void native_TweenWidth__SetCurrentValueToEnd_6e7394(long param_1)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  undefined4 uVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  long *plVar11;
  long lVar12;
  long lVar13;
  ulong uVar14;
  int iVar15;
  undefined8 uVar16;
  float fVar17;
  undefined4 uVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  ulong uVar27;
  float fVar28;
  float fVar29;
  ulong uVar30;
  ulong uVar31;
  ulong uVar32;
  ulong uVar33;
  ulong uVar34;
  ulong uVar35;
  ulong uVar36;
  float fVar37;
  ulong uVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  
  iVar15 = *(int *)(param_1 + 0x84);
  plVar11 = (long *)native_TweenWidth__get_cachedWidget_6e6f30();
  if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    native_sub_432810();
  }
  if ((bRam000000000134144f & 1) == 0) {
    native_sub_43273c(&NGUIMath_TypeInfo_12d53b8,iVar15,0);
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    bRam000000000134144f = 1;
  }
  iVar10 = (**(code **)(*plVar11 + 0x3b8))(plVar11,*(undefined8 *)(*plVar11 + 0x3c0));
  if (iVar10 <= iVar15) {
    iVar10 = iVar15;
  }
  if (*(int *)((long)plVar11 + 0xa4) == iVar10) {
    return;
  }
  if (*(int *)((long)plVar11 + 0xdc) == 2) {
    return;
  }
  uVar14 = (**(code **)(*plVar11 + 0x178))(plVar11,*(undefined8 *)(*plVar11 + 0x180));
  if ((uVar14 & 1) == 0) {
    iVar15 = (int)plVar11[0x15];
    if ((*(int *)((long)plVar11 + 0xa4) == iVar10) && ((int)plVar11[0x15] == iVar15)) {
      return;
    }
    iVar2 = *(int *)((long)plVar11 + 0xdc);
    *(int *)((long)plVar11 + 0xa4) = iVar10;
    *(int *)(plVar11 + 0x15) = iVar15;
    if (iVar2 == 0) {
      *(float *)(plVar11 + 0x1c) = (float)iVar10 / (float)iVar15;
    }
    else if (iVar2 == 2) {
      uVar18 = native_UnityEngine_Mathf__RoundToInt_8e50f0
                         (*(float *)(plVar11 + 0x1c) * (float)iVar15,0);
      *(undefined4 *)((long)plVar11 + 0xa4) = uVar18;
    }
    else if (iVar2 == 1) {
      uVar18 = native_UnityEngine_Mathf__RoundToInt_8e50f0
                         ((float)iVar10 / *(float *)(plVar11 + 0x1c),0);
      *(undefined4 *)(plVar11 + 0x15) = uVar18;
    }
    *(undefined1 *)((long)plVar11 + 0x15c) = 1;
    if ((char)plVar11[0x1b] != '\0') {
      native_UIWidget__ResizeCollider_949744(plVar11);
    }
                    /* WARNING: Could not recover jumptable at 0x00949944. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar11 + 0x378))(plVar11,*(undefined8 *)(*plVar11 + 0x380));
    return;
  }
  if (plVar11[3] == 0) goto LAB_00942094;
  uVar16 = *(undefined8 *)(plVar11[3] + 0x10);
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar14 = native_UnityEngine_Object__op_Inequality_8d76fc(uVar16,0,0);
  if ((uVar14 & 1) == 0) {
LAB_00941f6c:
    if (plVar11[3] == 0) {
LAB_00942094:
                    /* WARNING: Subroutine does not return */
      native_sub_432810();
    }
    uVar16 = *(undefined8 *)(plVar11[3] + 0x10);
    if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    uVar14 = native_UnityEngine_Object__op_Inequality_8d76fc(uVar16,0,0);
    iVar15 = *(int *)((long)plVar11 + 0xa4);
    if ((uVar14 & 1) == 0) {
      if ((*(ushort *)(_NGUIMath_TypeInfo_12d53b8 + 0x132) >> 10 & 1) != 0) {
        iVar2 = *(int *)(_NGUIMath_TypeInfo_12d53b8 + 0xe0);
joined_r0x00941fd4:
        if (iVar2 == 0) {
          native_sub_4327ec(_NGUIMath_TypeInfo_12d53b8);
        }
      }
LAB_00941fe0:
      uVar14 = 0;
      fVar26 = (float)(iVar15 - iVar10);
    }
    else {
      if ((*(ushort *)(_NGUIMath_TypeInfo_12d53b8 + 0x132) >> 10 & 1) != 0) {
        iVar2 = *(int *)(_NGUIMath_TypeInfo_12d53b8 + 0xe0);
joined_r0x00941fc0:
        if (iVar2 == 0) {
          native_sub_4327ec(_NGUIMath_TypeInfo_12d53b8);
        }
      }
LAB_00942018:
      fVar26 = 0.0;
      uVar14 = (ulong)(uint)(float)(iVar10 - iVar15);
    }
  }
  else {
    if (plVar11[4] == 0) goto LAB_00942094;
    uVar16 = *(undefined8 *)(plVar11[4] + 0x10);
    if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    uVar14 = native_UnityEngine_Object__op_Inequality_8d76fc(uVar16,0,0);
    if ((uVar14 & 1) == 0) goto LAB_00941f6c;
    if (*(uint *)(plVar11 + 0x14) < 9) {
      uVar3 = 1 << (ulong)(*(uint *)(plVar11 + 0x14) & 0x1f);
      if ((uVar3 & 0x49) != 0) {
        iVar15 = *(int *)((long)plVar11 + 0xa4);
        if ((*(byte *)(_NGUIMath_TypeInfo_12d53b8 + 0x133) >> 2 & 1) != 0) {
          iVar2 = *(int *)(_NGUIMath_TypeInfo_12d53b8 + 0xe0);
          goto joined_r0x00941fc0;
        }
        goto LAB_00942018;
      }
      if ((uVar3 & 0x124) == 0) goto LAB_00942044;
      iVar15 = *(int *)((long)plVar11 + 0xa4);
      if ((*(byte *)(_NGUIMath_TypeInfo_12d53b8 + 0x133) >> 2 & 1) != 0) {
        iVar2 = *(int *)(_NGUIMath_TypeInfo_12d53b8 + 0xe0);
        goto joined_r0x00941fd4;
      }
      goto LAB_00941fe0;
    }
LAB_00942044:
    uVar3 = iVar10 - *(int *)((long)plVar11 + 0xa4) & 0xfffffffe;
    if (uVar3 == 0) {
      return;
    }
    if (((*(byte *)(_NGUIMath_TypeInfo_12d53b8 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_NGUIMath_TypeInfo_12d53b8 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    uVar14 = (ulong)(uint)((float)(int)uVar3 * 0.5);
    fVar26 = (float)(int)-uVar3 * 0.5;
  }
  uVar27 = 0;
  uVar16 = 0;
  if ((bRam0000000001340478 & 1) == 0) {
    native_sub_43273c(&NGUIMath_TypeInfo_12d53b8,0);
    bRam0000000001340478 = 1;
  }
  if (((*(byte *)(_NGUIMath_TypeInfo_12d53b8 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_NGUIMath_TypeInfo_12d53b8 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar38 = uVar14;
  if ((bRam000000000134047a & 1) == 0) {
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    bRam000000000134047a = 1;
  }
  if (plVar11 == (long *)0x0) goto LAB_00807ccc;
  fVar17 = (float)native_UIWidget__get_pivotOffset_944f8c(plVar11,0);
  fVar28 = (float)uVar27;
  uVar30 = uVar27;
  lVar12 = native_UIRect__get_cachedTransform_c27c58(plVar11,0);
  if (lVar12 == 0) goto LAB_00807ccc;
  uVar18 = native_UnityEngine_Transform__get_localRotation_771c84(lVar12,0);
  uVar3 = native_UnityEngine_Mathf__FloorToInt_8e506c(fVar26 + 0.5,0);
  uVar4 = native_UnityEngine_Mathf__FloorToInt_8e506c(0x3f000000,0);
  uVar5 = native_UnityEngine_Mathf__FloorToInt_8e506c((float)uVar14 + 0.5,0);
  uVar6 = native_UnityEngine_Mathf__FloorToInt_8e506c(0x3f000000,0);
  if ((fVar17 == 0.5) && ((uVar3 == 0 || (uVar5 == 0)))) {
    uVar3 = uVar3 & 0xfffffffe;
    uVar5 = uVar5 & 0xfffffffe;
  }
  if ((fVar28 == 0.5) && ((uVar4 == 0 || (uVar6 == 0)))) {
    uVar4 = uVar4 & 0xfffffffe;
    uVar6 = uVar6 & 0xfffffffe;
  }
  fVar41 = (float)(int)uVar3;
  fVar26 = (float)(int)uVar6;
  uVar14 = uVar30;
  fVar19 = (float)native_UnityEngine_Quaternion__op_Multiply_7629c0
                            (uVar18,uVar30,uVar38,uVar16,fVar41,fVar26,0,0);
  fVar40 = (float)(int)uVar5;
  uVar31 = uVar30;
  fVar20 = (float)native_UnityEngine_Quaternion__op_Multiply_7629c0
                            (uVar18,uVar30,uVar38,uVar16,fVar40,fVar26,0,0);
  fVar39 = (float)(int)uVar4;
  uVar36 = uVar30;
  fVar21 = (float)native_UnityEngine_Quaternion__op_Multiply_7629c0
                            (uVar18,uVar30,uVar38,uVar16,fVar41,fVar39,0,0);
  uVar32 = uVar30;
  fVar22 = (float)native_UnityEngine_Quaternion__op_Multiply_7629c0
                            (uVar18,uVar30,uVar38,uVar16,fVar40,fVar39,0,0);
  uVar33 = uVar30;
  fVar41 = (float)native_UnityEngine_Quaternion__op_Multiply_7629c0
                            (uVar18,uVar30,uVar38,uVar16,fVar41,0,0,0);
  uVar34 = uVar30;
  fVar23 = (float)native_UnityEngine_Quaternion__op_Multiply_7629c0
                            (uVar18,uVar30,uVar38,uVar16,fVar40,0,0,0);
  fVar29 = (float)uVar34;
  uVar34 = uVar30;
  fVar24 = (float)native_UnityEngine_Quaternion__op_Multiply_7629c0
                            (uVar18,uVar30,uVar38,uVar16,0,fVar26,0,0);
  fVar26 = (float)uVar34;
  uVar34 = uVar30;
  uVar35 = uVar38;
  fVar25 = (float)native_UnityEngine_Quaternion__op_Multiply_7629c0
                            (uVar18,uVar30,uVar38,uVar16,0,fVar39,0,0);
  fVar37 = (float)uVar35;
  uVar35 = uVar34;
  fVar40 = (float)native_UnityEngine_Vector3__get_zero_776668(0);
  fVar39 = fVar37;
  if ((fVar17 == 0.0) && (fVar28 == 1.0)) {
    uVar35 = uVar14 & 0xffffffff;
    fVar40 = fVar19;
  }
  else if ((fVar17 == 1.0) && (fVar28 == 0.0)) {
    uVar35 = uVar32 & 0xffffffff;
    fVar40 = fVar22;
  }
  else if ((fVar17 == 0.0) && (fVar28 == 0.0)) {
    uVar35 = uVar36 & 0xffffffff;
    fVar40 = fVar21;
  }
  else if ((fVar17 == 1.0) && (fVar28 == 1.0)) {
    uVar35 = uVar31 & 0xffffffff;
    fVar40 = fVar20;
  }
  else {
    fVar19 = (float)uVar34;
    fVar20 = (float)uVar33;
    if ((fVar17 == 0.0) && (fVar28 == 0.5)) {
      fVar40 = fVar41 + (fVar24 + fVar25) * 0.5;
      uVar35 = (ulong)(uint)(fVar20 + (fVar26 + fVar19) * 0.5);
      fVar39 = fVar41;
    }
    else if ((fVar17 == 1.0) && (fVar28 == 0.5)) {
      fVar40 = fVar23 + (fVar24 + fVar25) * 0.5;
      fVar19 = fVar26 + fVar19;
      fVar26 = fVar29;
LAB_008078c0:
      uVar35 = (ulong)(uint)(fVar26 + fVar19 * 0.5);
      fVar39 = fVar26;
    }
    else if (fVar17 == 0.5) {
      if (fVar28 == 1.0) {
        fVar40 = fVar24 + (fVar41 + fVar23) * 0.5;
        fVar19 = fVar20 + fVar29;
        goto LAB_008078c0;
      }
      if (fVar28 == 0.0) {
        fVar40 = fVar25 + (fVar41 + fVar23) * 0.5;
        uVar35 = (ulong)(uint)(fVar19 + (fVar20 + fVar29) * 0.5);
      }
      else if (fVar28 == 0.5) {
        fVar40 = (fVar41 + fVar23 + fVar24 + fVar25) * 0.5;
        uVar35 = (ulong)(uint)((fVar29 + fVar20 + fVar26 + fVar19) * 0.5);
        fVar39 = fVar29;
      }
    }
  }
  fVar26 = (float)uVar35;
  uVar7 = (**(code **)(*plVar11 + 0x3b8))(plVar11,*(undefined8 *)(*plVar11 + 0x3c0));
  uVar8 = native_UnityEngine_Mathf__Max_8e4cd0(2,uVar7,0);
  uVar7 = (**(code **)(*plVar11 + 0x3c8))(plVar11,*(undefined8 *)(*plVar11 + 0x3d0));
  uVar9 = native_UnityEngine_Mathf__Max_8e4cd0(2,uVar7,0);
  uVar5 = (uVar5 - uVar3) + *(int *)((long)plVar11 + 0xa4);
  uVar6 = (uVar6 - uVar4) + (int)plVar11[0x15];
  uVar14 = native_UnityEngine_Vector3__get_zero_776668(0);
  uVar1 = 100000;
  if ((int)uVar5 < 0x186a1) {
    uVar1 = uVar5;
  }
  if ((int)uVar8 <= (int)uVar5) {
    uVar8 = uVar1;
  }
  uVar31 = uVar35;
  fVar19 = fVar39;
  if (uVar8 - uVar5 != 0) {
    uVar31 = (ulong)(uint)(float)(int)(uVar8 - uVar5);
    uVar5 = uVar8;
    fVar19 = fVar17;
    if (uVar3 == 0) {
      fVar20 = (float)native_UnityEngine_Mathf__Lerp_8e5224(0,uVar31,fVar17,0);
      uVar14 = (ulong)(uint)((float)uVar14 + fVar20);
    }
    else {
      uVar36 = 0;
      fVar20 = (float)native_UnityEngine_Mathf__Lerp_8e5224(uVar31,0,fVar17,0);
      uVar14 = (ulong)(uint)((float)uVar14 - fVar20);
      uVar31 = uVar36;
    }
  }
  fVar20 = (float)uVar31;
  uVar3 = 100000;
  if ((int)uVar6 < 0x186a1) {
    uVar3 = uVar6;
  }
  if ((int)uVar9 <= (int)uVar6) {
    uVar9 = uVar3;
  }
  if (uVar9 - uVar6 != 0) {
    fVar21 = (float)(int)(uVar9 - uVar6);
    uVar6 = uVar9;
    fVar19 = fVar28;
    if (uVar4 == 0) {
      fVar20 = fVar21;
      fVar21 = (float)native_UnityEngine_Mathf__Lerp_8e5224(0,fVar21,uVar27 & 0xffffffff,0);
      uVar35 = (ulong)(uint)((float)uVar35 + fVar21);
    }
    else {
      fVar20 = 0.0;
      fVar21 = (float)native_UnityEngine_Mathf__Lerp_8e5224(fVar21,0,uVar27 & 0xffffffff,0);
      uVar35 = (ulong)(uint)((float)uVar35 - fVar21);
    }
  }
  uVar3 = uVar5 & 0xfffffffe;
  if (fVar17 != 0.5) {
    uVar3 = uVar5;
  }
  uVar5 = uVar6 & 0xfffffffe;
  if (fVar28 != 0.5) {
    uVar5 = uVar6;
  }
  fVar21 = (float)native_UnityEngine_Transform__get_localPosition_7717f4(lVar12,0);
  fVar39 = (float)native_UnityEngine_Quaternion__op_Multiply_7629c0
                            (uVar18,uVar30,uVar38,uVar16,uVar14,uVar35,fVar39,0);
  fVar39 = fVar40 + fVar21 + fVar39;
  fVar26 = fVar26 + fVar20 + (float)uVar30;
  uVar27 = (ulong)(uint)fVar26;
  uVar38 = (ulong)(uint)(fVar37 + fVar19 + (float)uVar38);
  native_UnityEngine_Transform__set_localPosition_7718a4(fVar39,uVar27,uVar38,lVar12,0);
  native_UIWidget__SetDimensions_94987c(plVar11,uVar3,uVar5,0);
  uVar14 = native_UIRect__get_isAnchored_c2d8cc(plVar11,0);
  if ((uVar14 & 1) == 0) {
    return;
  }
  lVar12 = native_UnityEngine_Transform__get_parent_765eb0(lVar12,0);
  if (plVar11[3] != 0) {
    uVar16 = *(undefined8 *)(plVar11[3] + 0x10);
    if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    fVar39 = fVar39 - fVar17 * (float)(int)uVar3;
    uVar14 = native_UnityEngine_Object__op_Implicit_8e1b98(uVar16,0);
    if ((uVar14 & 1) != 0) {
      if (plVar11[3] == 0) goto LAB_00807ccc;
      native_UIRect_AnchorPoint__SetHorizontal_559078(fVar39,plVar11[3],lVar12,0);
    }
    if (plVar11[4] != 0) {
      uVar16 = *(undefined8 *)(plVar11[4] + 0x10);
      if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
        native_sub_4327ec();
      }
      uVar14 = native_UnityEngine_Object__op_Implicit_8e1b98(uVar16,0);
      if ((uVar14 & 1) != 0) {
        if (plVar11[4] == 0) goto LAB_00807ccc;
        native_UIRect_AnchorPoint__SetHorizontal_559078
                  (fVar39 + (float)(int)uVar3,plVar11[4],lVar12,0);
      }
      if (plVar11[5] != 0) {
        uVar16 = *(undefined8 *)(plVar11[5] + 0x10);
        if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
           (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
          native_sub_4327ec();
        }
        fVar26 = fVar26 - fVar28 * (float)(int)uVar5;
        uVar14 = native_UnityEngine_Object__op_Implicit_8e1b98(uVar16,0);
        if ((uVar14 & 1) != 0) {
          if (plVar11[5] == 0) goto LAB_00807ccc;
          native_UIRect_AnchorPoint__SetVertical_5591e0(fVar26,plVar11[5],lVar12,0);
        }
        if (plVar11[6] != 0) {
          uVar16 = *(undefined8 *)(plVar11[6] + 0x10);
          if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
             (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
            native_sub_4327ec();
          }
          uVar14 = native_UnityEngine_Object__op_Implicit_8e1b98(uVar16,0);
          if ((uVar14 & 1) == 0) {
            return;
          }
          lVar13 = plVar11[6];
          if (lVar13 != 0) {
            if ((bRam000000000133ea04 & 1) == 0) {
              native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0,lVar12,0);
              bRam000000000133ea04 = 1;
            }
            uVar16 = *(undefined8 *)(lVar13 + 0x20);
            if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
               (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
              native_sub_4327ec();
            }
            uVar14 = native_UnityEngine_Object__op_Implicit_8e1b98(uVar16,0);
            if ((uVar14 & 1) == 0) {
              if (*(long *)(lVar13 + 0x10) != 0) {
                uVar16 = native_UnityEngine_Transform__get_position_77169c
                                   (*(long *)(lVar13 + 0x10),0);
                if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
                   (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
                  native_sub_4327ec();
                }
                uVar14 = native_UnityEngine_Object__op_Inequality_8d76fc(lVar12,0,0);
                if ((uVar14 & 1) != 0) {
                  if (lVar12 == 0) goto LAB_00559338;
                  native_UnityEngine_Transform__InverseTransformPoint_7729a0
                            (uVar16,uVar27,uVar38,lVar12,0);
                }
LAB_00559308:
                uVar18 = native_UnityEngine_Mathf__FloorToInt_8e506c
                                   (((fVar26 + (float)(int)uVar5) - (float)uVar27) + 0.5,0);
                *(undefined4 *)(lVar13 + 0x1c) = uVar18;
                return;
              }
            }
            else {
              plVar11 = *(long **)(lVar13 + 0x20);
              if ((plVar11 != (long *)0x0) &&
                 (lVar12 = (**(code **)(*plVar11 + 0x208))
                                     (plVar11,lVar12,*(undefined8 *)(*plVar11 + 0x210)), lVar12 != 0
                 )) {
                if (*(uint *)(lVar12 + 0x18) < 4) {
                  uVar16 = native_sub_43283c();
                    /* WARNING: Subroutine does not return */
                  native_sub_4327dc(uVar16,0);
                }
                uVar27 = native_UnityEngine_Mathf__Lerp_8e5224
                                   (*(undefined4 *)(lVar12 + 0x48),*(undefined4 *)(lVar12 + 0x30),
                                    *(undefined4 *)(lVar13 + 0x18),0);
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



/* TweenWidth$$.ctor @ 0x6e739c
 * void TweenWidth___ctor (TweenWidth_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TweenWidth$$.ctor
   void TweenWidth___ctor (TweenWidth_o* __this, const MethodInfo* method); */

void native_TweenWidth___ctor_6e739c(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uStack_90;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined8 uStack_70;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined8 uStack_5c;
  undefined8 uStack_50;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  
  *(undefined8 *)(param_1 + 0x80) = 0x6400000064;
  if ((bRam000000000134144a & 1) == 0) {
    native_sub_43273c(&UnityEngine_AnimationCurve_TypeInfo_12d3768,0);
    native_sub_43273c(&UnityEngine_Keyframe___TypeInfo_12d3298);
    native_sub_43273c(&Method_System_Collections_Generic_List_EventDelegate___ctor___12dc738);
    native_sub_43273c(&System_Collections_Generic_List_EventDelegate__TypeInfo_12d2a08);
    bRam000000000134144a = 1;
  }
  lVar1 = native_sub_432750(_UnityEngine_Keyframe___TypeInfo_12d3298,2);
  uStack_50 = 0;
  uStack_48 = 0;
  uStack_44 = 0;
  uStack_38 = 0;
  uStack_40 = 0;
  uStack_3c = 0;
  native_UnityEngine_Keyframe___ctor_8dfc58(0,0,0,0x3f800000,&uStack_50,0);
  if (lVar1 != 0) {
    uStack_5c = CONCAT44(uStack_38,uStack_3c);
    uStack_60 = uStack_40;
    uStack_68 = uStack_48;
    uStack_64 = uStack_44;
    uStack_70 = uStack_50;
    if (*(int *)(lVar1 + 0x18) != 0) {
      *(undefined8 *)(lVar1 + 0x34) = uStack_5c;
      *(ulong *)(lVar1 + 0x2c) = CONCAT44(uStack_40,uStack_44);
      *(ulong *)(lVar1 + 0x28) = CONCAT44(uStack_44,uStack_48);
      *(undefined8 *)(lVar1 + 0x20) = uStack_50;
      uStack_90 = 0;
      uStack_88 = 0;
      uStack_84 = 0;
      uStack_78 = 0;
      uStack_80 = 0;
      uStack_7c = 0;
      native_UnityEngine_Keyframe___ctor_8dfc58(0x3f800000,0x3f800000,0x3f800000,0,&uStack_90,0);
      if (1 < *(uint *)(lVar1 + 0x18)) {
        *(ulong *)(lVar1 + 0x50) = CONCAT44(uStack_78,uStack_7c);
        *(ulong *)(lVar1 + 0x48) = CONCAT44(uStack_80,uStack_84);
        *(ulong *)(lVar1 + 0x44) = CONCAT44(uStack_84,uStack_88);
        *(undefined8 *)(lVar1 + 0x3c) = uStack_90;
        uVar2 = native_sub_432808(_UnityEngine_AnimationCurve_TypeInfo_12d3768);
        native_UnityEngine_AnimationCurve___ctor_8d5df4(uVar2,lVar1,0);
        *(undefined8 *)(param_1 + 0x20) = uVar2;
        native_sub_4326e0((undefined8 *)(param_1 + 0x20),uVar2);
        *(undefined1 *)(param_1 + 0x28) = 1;
        *(undefined8 *)(param_1 + 0x30) = 0x3f80000000000002;
        uVar2 = native_sub_432808(_System_Collections_Generic_List_EventDelegate__TypeInfo_12d2a08);
        native_System_Collections_Generic_List_XmlEventCache_XmlEvent______ctor_d3ff44
                  (uVar2,_Method_System_Collections_Generic_List_EventDelegate___ctor___12dc738);
        *(undefined8 *)(param_1 + 0x48) = uVar2;
        native_sub_4326e0(param_1 + 0x48,uVar2);
        *(undefined4 *)(param_1 + 0x60) = 0x3f800000;
        *(undefined4 *)(param_1 + 0x70) = 0x447a0000;
        native_UnityEngine_MonoBehaviour___ctor_8e971c(param_1,0);
        return;
      }
    }
    uVar2 = native_sub_43283c();
                    /* WARNING: Subroutine does not return */
    native_sub_4327dc(uVar2,0);
  }
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}


