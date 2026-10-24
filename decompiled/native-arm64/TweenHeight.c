/* ARM64 IL2CPP native pseudocode from Ghidra.
 * Recovered implementation, not original C# source.
 * Function boundaries follow the IL2CPP method address table. */


/* TweenHeight$$get_cachedWidget @ 0x6e4010
 * UIWidget_o* TweenHeight__get_cachedWidget (TweenHeight_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TweenHeight$$get_cachedWidget
   UIWidget_o* TweenHeight__get_cachedWidget (TweenHeight_o* __this, const MethodInfo* method); */

undefined8 native_TweenHeight__get_cachedWidget_6e4010(long param_1)

{
  ulong uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  
  if ((bRam000000000133f39c & 1) == 0) {
    native_sub_43273c(&Method_UnityEngine_Component_GetComponent_UIWidget____12e2c30);
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    bRam000000000133f39c = 1;
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



/* TweenHeight$$get_height @ 0x6e40c4
 * int32_t TweenHeight__get_height (TweenHeight_o* __this, const MethodInfo* method); */

/* TweenHeight$$get_height
   int32_t TweenHeight__get_height (TweenHeight_o* __this, const MethodInfo* method); */

undefined4 native_TweenHeight__get_height_6e40c4(void)

{
  long lVar1;
  
  lVar1 = native_TweenHeight__get_cachedWidget_6e4010();
  if (lVar1 != 0) {
    return *(undefined4 *)(lVar1 + 0xa8);
  }
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* TweenHeight$$set_height @ 0x6e4104
 * void TweenHeight__set_height (TweenHeight_o* __this, int32_t value, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TweenHeight$$set_height
   void TweenHeight__set_height (TweenHeight_o* __this, int32_t value, const MethodInfo* method); */

void native_TweenHeight__set_height_6e4104(undefined8 param_1,int param_2)

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
  undefined4 uVar17;
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
  
  plVar11 = (long *)native_TweenHeight__get_cachedWidget_6e4010();
  if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    native_sub_432810();
  }
  if ((bRam0000000001341450 & 1) == 0) {
    native_sub_43273c(&NGUIMath_TypeInfo_12d53b8,param_2,0);
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    bRam0000000001341450 = 1;
  }
  iVar10 = (**(code **)(*plVar11 + 0x3c8))(plVar11,*(undefined8 *)(*plVar11 + 0x3d0));
  if (iVar10 <= param_2) {
    iVar10 = param_2;
  }
  if (((int)plVar11[0x15] == iVar10) || (*(int *)((long)plVar11 + 0xdc) == 1)) {
    return;
  }
  uVar14 = (**(code **)(*plVar11 + 0x188))(plVar11,*(undefined8 *)(*plVar11 + 400));
  if ((uVar14 & 1) == 0) {
    iVar15 = *(int *)((long)plVar11 + 0xa4);
    if ((*(int *)((long)plVar11 + 0xa4) == iVar15) && ((int)plVar11[0x15] == iVar10)) {
      return;
    }
    iVar2 = *(int *)((long)plVar11 + 0xdc);
    *(int *)((long)plVar11 + 0xa4) = iVar15;
    *(int *)(plVar11 + 0x15) = iVar10;
    if (iVar2 == 0) {
      *(float *)(plVar11 + 0x1c) = (float)iVar15 / (float)iVar10;
    }
    else if (iVar2 == 2) {
      uVar17 = native_UnityEngine_Mathf__RoundToInt_8e50f0
                         (*(float *)(plVar11 + 0x1c) * (float)iVar10,0);
      *(undefined4 *)((long)plVar11 + 0xa4) = uVar17;
    }
    else if (iVar2 == 1) {
      uVar17 = native_UnityEngine_Mathf__RoundToInt_8e50f0
                         ((float)iVar15 / *(float *)(plVar11 + 0x1c),0);
      *(undefined4 *)(plVar11 + 0x15) = uVar17;
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
  if (plVar11[5] == 0) goto LAB_00942330;
  uVar16 = *(undefined8 *)(plVar11[5] + 0x10);
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar14 = native_UnityEngine_Object__op_Inequality_8d76fc(uVar16,0,0);
  if ((uVar14 & 1) == 0) {
LAB_00942204:
    if (plVar11[5] == 0) {
LAB_00942330:
                    /* WARNING: Subroutine does not return */
      native_sub_432810();
    }
    uVar16 = *(undefined8 *)(plVar11[5] + 0x10);
    if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    uVar14 = native_UnityEngine_Object__op_Inequality_8d76fc(uVar16,0,0);
    iVar15 = (int)plVar11[0x15];
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
      fVar37 = (float)(iVar10 - iVar15);
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
    uVar14 = (ulong)(uint)(float)(iVar15 - iVar10);
    uVar25 = 0;
  }
  else {
    if (plVar11[6] == 0) goto LAB_00942330;
    uVar16 = *(undefined8 *)(plVar11[6] + 0x10);
    if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    uVar14 = native_UnityEngine_Object__op_Inequality_8d76fc(uVar16,0,0);
    if ((uVar14 & 1) == 0) goto LAB_00942204;
    if (*(uint *)(plVar11 + 0x14) < 3) {
      iVar15 = (int)plVar11[0x15];
      if ((*(byte *)(_NGUIMath_TypeInfo_12d53b8 + 0x133) >> 2 & 1) != 0) {
        iVar2 = *(int *)(_NGUIMath_TypeInfo_12d53b8 + 0xe0);
        goto joined_r0x00942284;
      }
      goto LAB_009422b4;
    }
    if (*(uint *)(plVar11 + 0x14) - 6 < 3) {
      iVar15 = (int)plVar11[0x15];
      if ((*(byte *)(_NGUIMath_TypeInfo_12d53b8 + 0x133) >> 2 & 1) != 0) {
        iVar2 = *(int *)(_NGUIMath_TypeInfo_12d53b8 + 0xe0);
        goto joined_r0x00942258;
      }
      goto LAB_00942264;
    }
    uVar3 = iVar10 - (int)plVar11[0x15] & 0xfffffffe;
    if (uVar3 == 0) {
      return;
    }
    if (((*(byte *)(_NGUIMath_TypeInfo_12d53b8 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_NGUIMath_TypeInfo_12d53b8 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    fVar37 = (float)(int)uVar3 * 0.5;
    uVar14 = (ulong)(uint)((float)(int)-uVar3 * 0.5);
LAB_00942274:
    uVar25 = (ulong)(uint)fVar37;
  }
  uVar16 = 0;
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
  if (plVar11 == (long *)0x0) goto LAB_00807ccc;
  fVar37 = (float)native_UIWidget__get_pivotOffset_944f8c(plVar11,0);
  fVar26 = (float)uVar28;
  uVar29 = uVar28;
  lVar12 = native_UIRect__get_cachedTransform_c27c58(plVar11,0);
  if (lVar12 == 0) goto LAB_00807ccc;
  uVar17 = native_UnityEngine_Transform__get_localRotation_771c84(lVar12,0);
  uVar3 = native_UnityEngine_Mathf__FloorToInt_8e506c(0x3f000000,0);
  uVar4 = native_UnityEngine_Mathf__FloorToInt_8e506c((float)uVar14 + 0.5,0);
  uVar5 = native_UnityEngine_Mathf__FloorToInt_8e506c(0x3f000000,0);
  uVar6 = native_UnityEngine_Mathf__FloorToInt_8e506c((float)uVar25 + 0.5,0);
  if ((fVar37 == 0.5) && ((uVar3 == 0 || (uVar5 == 0)))) {
    uVar3 = uVar3 & 0xfffffffe;
    uVar5 = uVar5 & 0xfffffffe;
  }
  if ((fVar26 == 0.5) && ((uVar4 == 0 || (uVar6 == 0)))) {
    uVar4 = uVar4 & 0xfffffffe;
    uVar6 = uVar6 & 0xfffffffe;
  }
  fVar42 = (float)(int)uVar3;
  fVar40 = (float)(int)uVar6;
  uVar14 = uVar29;
  fVar18 = (float)native_UnityEngine_Quaternion__op_Multiply_7629c0
                            (uVar17,uVar29,uVar16,uVar38,fVar42,fVar40,0,0);
  fVar41 = (float)(int)uVar5;
  uVar25 = uVar29;
  fVar19 = (float)native_UnityEngine_Quaternion__op_Multiply_7629c0
                            (uVar17,uVar29,uVar16,uVar38,fVar41,fVar40,0,0);
  fVar39 = (float)(int)uVar4;
  uVar34 = uVar29;
  fVar20 = (float)native_UnityEngine_Quaternion__op_Multiply_7629c0
                            (uVar17,uVar29,uVar16,uVar38,fVar42,fVar39,0,0);
  uVar30 = uVar29;
  fVar21 = (float)native_UnityEngine_Quaternion__op_Multiply_7629c0
                            (uVar17,uVar29,uVar16,uVar38,fVar41,fVar39,0,0);
  uVar31 = uVar29;
  fVar42 = (float)native_UnityEngine_Quaternion__op_Multiply_7629c0
                            (uVar17,uVar29,uVar16,uVar38,fVar42,0,0,0);
  uVar32 = uVar29;
  fVar22 = (float)native_UnityEngine_Quaternion__op_Multiply_7629c0
                            (uVar17,uVar29,uVar16,uVar38,fVar41,0,0,0);
  fVar27 = (float)uVar32;
  uVar32 = uVar29;
  fVar23 = (float)native_UnityEngine_Quaternion__op_Multiply_7629c0
                            (uVar17,uVar29,uVar16,uVar38,0,fVar40,0,0);
  fVar40 = (float)uVar32;
  uVar32 = uVar29;
  uVar36 = uVar16;
  fVar24 = (float)native_UnityEngine_Quaternion__op_Multiply_7629c0
                            (uVar17,uVar29,uVar16,uVar38,0,fVar39,0,0);
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
  uVar25 = uVar33;
  fVar18 = fVar39;
  if (uVar8 - uVar5 != 0) {
    uVar25 = (ulong)(uint)(float)(int)(uVar8 - uVar5);
    uVar5 = uVar8;
    fVar18 = fVar37;
    if (uVar3 == 0) {
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
  uVar3 = 100000;
  if ((int)uVar6 < 0x186a1) {
    uVar3 = uVar6;
  }
  if ((int)uVar9 <= (int)uVar6) {
    uVar9 = uVar3;
  }
  if (uVar9 - uVar6 != 0) {
    fVar20 = (float)(int)(uVar9 - uVar6);
    uVar6 = uVar9;
    fVar18 = fVar26;
    if (uVar4 == 0) {
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
  uVar3 = uVar5 & 0xfffffffe;
  if (fVar37 != 0.5) {
    uVar3 = uVar5;
  }
  uVar5 = uVar6 & 0xfffffffe;
  if (fVar26 != 0.5) {
    uVar5 = uVar6;
  }
  fVar20 = (float)native_UnityEngine_Transform__get_localPosition_7717f4(lVar12,0);
  fVar39 = (float)native_UnityEngine_Quaternion__op_Multiply_7629c0
                            (uVar17,uVar29,uVar16,uVar38,uVar14,uVar33,fVar39,0);
  fVar39 = fVar41 + fVar20 + fVar39;
  fVar40 = fVar40 + fVar19 + (float)uVar29;
  uVar25 = (ulong)(uint)fVar40;
  uVar28 = (ulong)(uint)(fVar35 + fVar18 + (float)uVar16);
  native_UnityEngine_Transform__set_localPosition_7718a4(fVar39,uVar25,uVar28,lVar12,0);
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
    fVar39 = fVar39 - fVar37 * (float)(int)uVar3;
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
        fVar40 = fVar40 - fVar26 * (float)(int)uVar5;
        uVar14 = native_UnityEngine_Object__op_Implicit_8e1b98(uVar16,0);
        if ((uVar14 & 1) != 0) {
          if (plVar11[5] == 0) goto LAB_00807ccc;
          native_UIRect_AnchorPoint__SetVertical_5591e0(fVar40,plVar11[5],lVar12,0);
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
                            (uVar16,uVar25,uVar28,lVar12,0);
                }
LAB_00559308:
                uVar17 = native_UnityEngine_Mathf__FloorToInt_8e506c
                                   (((fVar40 + (float)(int)uVar5) - (float)uVar25) + 0.5,0);
                *(undefined4 *)(lVar13 + 0x1c) = uVar17;
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
                uVar25 = native_UnityEngine_Mathf__Lerp_8e5224
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



/* TweenHeight$$get_value @ 0x6e40e4
 * int32_t TweenHeight__get_value (TweenHeight_o* __this, const MethodInfo* method); */

/* TweenHeight$$get_value
   int32_t TweenHeight__get_value (TweenHeight_o* __this, const MethodInfo* method); */

undefined4 native_TweenHeight__get_value_6e40e4(void)

{
  long lVar1;
  
  lVar1 = native_TweenHeight__get_cachedWidget_6e4010();
  if (lVar1 != 0) {
    return *(undefined4 *)(lVar1 + 0xa8);
  }
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* TweenHeight$$set_value @ 0x6e4108
 * void TweenHeight__set_value (TweenHeight_o* __this, int32_t value, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TweenHeight$$set_value
   void TweenHeight__set_value (TweenHeight_o* __this, int32_t value, const MethodInfo* method); */

void native_TweenHeight__set_value_6e4108(undefined8 param_1,int param_2)

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
  undefined4 uVar17;
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
  
  plVar11 = (long *)native_TweenHeight__get_cachedWidget_6e4010();
  if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    native_sub_432810();
  }
  if ((bRam0000000001341450 & 1) == 0) {
    native_sub_43273c(&NGUIMath_TypeInfo_12d53b8,param_2,0);
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    bRam0000000001341450 = 1;
  }
  iVar10 = (**(code **)(*plVar11 + 0x3c8))(plVar11,*(undefined8 *)(*plVar11 + 0x3d0));
  if (iVar10 <= param_2) {
    iVar10 = param_2;
  }
  if (((int)plVar11[0x15] == iVar10) || (*(int *)((long)plVar11 + 0xdc) == 1)) {
    return;
  }
  uVar14 = (**(code **)(*plVar11 + 0x188))(plVar11,*(undefined8 *)(*plVar11 + 400));
  if ((uVar14 & 1) == 0) {
    iVar15 = *(int *)((long)plVar11 + 0xa4);
    if ((*(int *)((long)plVar11 + 0xa4) == iVar15) && ((int)plVar11[0x15] == iVar10)) {
      return;
    }
    iVar2 = *(int *)((long)plVar11 + 0xdc);
    *(int *)((long)plVar11 + 0xa4) = iVar15;
    *(int *)(plVar11 + 0x15) = iVar10;
    if (iVar2 == 0) {
      *(float *)(plVar11 + 0x1c) = (float)iVar15 / (float)iVar10;
    }
    else if (iVar2 == 2) {
      uVar17 = native_UnityEngine_Mathf__RoundToInt_8e50f0
                         (*(float *)(plVar11 + 0x1c) * (float)iVar10,0);
      *(undefined4 *)((long)plVar11 + 0xa4) = uVar17;
    }
    else if (iVar2 == 1) {
      uVar17 = native_UnityEngine_Mathf__RoundToInt_8e50f0
                         ((float)iVar15 / *(float *)(plVar11 + 0x1c),0);
      *(undefined4 *)(plVar11 + 0x15) = uVar17;
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
  if (plVar11[5] == 0) goto LAB_00942330;
  uVar16 = *(undefined8 *)(plVar11[5] + 0x10);
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar14 = native_UnityEngine_Object__op_Inequality_8d76fc(uVar16,0,0);
  if ((uVar14 & 1) == 0) {
LAB_00942204:
    if (plVar11[5] == 0) {
LAB_00942330:
                    /* WARNING: Subroutine does not return */
      native_sub_432810();
    }
    uVar16 = *(undefined8 *)(plVar11[5] + 0x10);
    if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    uVar14 = native_UnityEngine_Object__op_Inequality_8d76fc(uVar16,0,0);
    iVar15 = (int)plVar11[0x15];
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
      fVar37 = (float)(iVar10 - iVar15);
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
    uVar14 = (ulong)(uint)(float)(iVar15 - iVar10);
    uVar25 = 0;
  }
  else {
    if (plVar11[6] == 0) goto LAB_00942330;
    uVar16 = *(undefined8 *)(plVar11[6] + 0x10);
    if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    uVar14 = native_UnityEngine_Object__op_Inequality_8d76fc(uVar16,0,0);
    if ((uVar14 & 1) == 0) goto LAB_00942204;
    if (*(uint *)(plVar11 + 0x14) < 3) {
      iVar15 = (int)plVar11[0x15];
      if ((*(byte *)(_NGUIMath_TypeInfo_12d53b8 + 0x133) >> 2 & 1) != 0) {
        iVar2 = *(int *)(_NGUIMath_TypeInfo_12d53b8 + 0xe0);
        goto joined_r0x00942284;
      }
      goto LAB_009422b4;
    }
    if (*(uint *)(plVar11 + 0x14) - 6 < 3) {
      iVar15 = (int)plVar11[0x15];
      if ((*(byte *)(_NGUIMath_TypeInfo_12d53b8 + 0x133) >> 2 & 1) != 0) {
        iVar2 = *(int *)(_NGUIMath_TypeInfo_12d53b8 + 0xe0);
        goto joined_r0x00942258;
      }
      goto LAB_00942264;
    }
    uVar3 = iVar10 - (int)plVar11[0x15] & 0xfffffffe;
    if (uVar3 == 0) {
      return;
    }
    if (((*(byte *)(_NGUIMath_TypeInfo_12d53b8 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_NGUIMath_TypeInfo_12d53b8 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    fVar37 = (float)(int)uVar3 * 0.5;
    uVar14 = (ulong)(uint)((float)(int)-uVar3 * 0.5);
LAB_00942274:
    uVar25 = (ulong)(uint)fVar37;
  }
  uVar16 = 0;
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
  if (plVar11 == (long *)0x0) goto LAB_00807ccc;
  fVar37 = (float)native_UIWidget__get_pivotOffset_944f8c(plVar11,0);
  fVar26 = (float)uVar28;
  uVar29 = uVar28;
  lVar12 = native_UIRect__get_cachedTransform_c27c58(plVar11,0);
  if (lVar12 == 0) goto LAB_00807ccc;
  uVar17 = native_UnityEngine_Transform__get_localRotation_771c84(lVar12,0);
  uVar3 = native_UnityEngine_Mathf__FloorToInt_8e506c(0x3f000000,0);
  uVar4 = native_UnityEngine_Mathf__FloorToInt_8e506c((float)uVar14 + 0.5,0);
  uVar5 = native_UnityEngine_Mathf__FloorToInt_8e506c(0x3f000000,0);
  uVar6 = native_UnityEngine_Mathf__FloorToInt_8e506c((float)uVar25 + 0.5,0);
  if ((fVar37 == 0.5) && ((uVar3 == 0 || (uVar5 == 0)))) {
    uVar3 = uVar3 & 0xfffffffe;
    uVar5 = uVar5 & 0xfffffffe;
  }
  if ((fVar26 == 0.5) && ((uVar4 == 0 || (uVar6 == 0)))) {
    uVar4 = uVar4 & 0xfffffffe;
    uVar6 = uVar6 & 0xfffffffe;
  }
  fVar42 = (float)(int)uVar3;
  fVar40 = (float)(int)uVar6;
  uVar14 = uVar29;
  fVar18 = (float)native_UnityEngine_Quaternion__op_Multiply_7629c0
                            (uVar17,uVar29,uVar16,uVar38,fVar42,fVar40,0,0);
  fVar41 = (float)(int)uVar5;
  uVar25 = uVar29;
  fVar19 = (float)native_UnityEngine_Quaternion__op_Multiply_7629c0
                            (uVar17,uVar29,uVar16,uVar38,fVar41,fVar40,0,0);
  fVar39 = (float)(int)uVar4;
  uVar34 = uVar29;
  fVar20 = (float)native_UnityEngine_Quaternion__op_Multiply_7629c0
                            (uVar17,uVar29,uVar16,uVar38,fVar42,fVar39,0,0);
  uVar30 = uVar29;
  fVar21 = (float)native_UnityEngine_Quaternion__op_Multiply_7629c0
                            (uVar17,uVar29,uVar16,uVar38,fVar41,fVar39,0,0);
  uVar31 = uVar29;
  fVar42 = (float)native_UnityEngine_Quaternion__op_Multiply_7629c0
                            (uVar17,uVar29,uVar16,uVar38,fVar42,0,0,0);
  uVar32 = uVar29;
  fVar22 = (float)native_UnityEngine_Quaternion__op_Multiply_7629c0
                            (uVar17,uVar29,uVar16,uVar38,fVar41,0,0,0);
  fVar27 = (float)uVar32;
  uVar32 = uVar29;
  fVar23 = (float)native_UnityEngine_Quaternion__op_Multiply_7629c0
                            (uVar17,uVar29,uVar16,uVar38,0,fVar40,0,0);
  fVar40 = (float)uVar32;
  uVar32 = uVar29;
  uVar36 = uVar16;
  fVar24 = (float)native_UnityEngine_Quaternion__op_Multiply_7629c0
                            (uVar17,uVar29,uVar16,uVar38,0,fVar39,0,0);
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
  uVar25 = uVar33;
  fVar18 = fVar39;
  if (uVar8 - uVar5 != 0) {
    uVar25 = (ulong)(uint)(float)(int)(uVar8 - uVar5);
    uVar5 = uVar8;
    fVar18 = fVar37;
    if (uVar3 == 0) {
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
  uVar3 = 100000;
  if ((int)uVar6 < 0x186a1) {
    uVar3 = uVar6;
  }
  if ((int)uVar9 <= (int)uVar6) {
    uVar9 = uVar3;
  }
  if (uVar9 - uVar6 != 0) {
    fVar20 = (float)(int)(uVar9 - uVar6);
    uVar6 = uVar9;
    fVar18 = fVar26;
    if (uVar4 == 0) {
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
  uVar3 = uVar5 & 0xfffffffe;
  if (fVar37 != 0.5) {
    uVar3 = uVar5;
  }
  uVar5 = uVar6 & 0xfffffffe;
  if (fVar26 != 0.5) {
    uVar5 = uVar6;
  }
  fVar20 = (float)native_UnityEngine_Transform__get_localPosition_7717f4(lVar12,0);
  fVar39 = (float)native_UnityEngine_Quaternion__op_Multiply_7629c0
                            (uVar17,uVar29,uVar16,uVar38,uVar14,uVar33,fVar39,0);
  fVar39 = fVar41 + fVar20 + fVar39;
  fVar40 = fVar40 + fVar19 + (float)uVar29;
  uVar25 = (ulong)(uint)fVar40;
  uVar28 = (ulong)(uint)(fVar35 + fVar18 + (float)uVar16);
  native_UnityEngine_Transform__set_localPosition_7718a4(fVar39,uVar25,uVar28,lVar12,0);
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
    fVar39 = fVar39 - fVar37 * (float)(int)uVar3;
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
        fVar40 = fVar40 - fVar26 * (float)(int)uVar5;
        uVar14 = native_UnityEngine_Object__op_Implicit_8e1b98(uVar16,0);
        if ((uVar14 & 1) != 0) {
          if (plVar11[5] == 0) goto LAB_00807ccc;
          native_UIRect_AnchorPoint__SetVertical_5591e0(fVar40,plVar11[5],lVar12,0);
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
                            (uVar16,uVar25,uVar28,lVar12,0);
                }
LAB_00559308:
                uVar17 = native_UnityEngine_Mathf__FloorToInt_8e506c
                                   (((fVar40 + (float)(int)uVar5) - (float)uVar25) + 0.5,0);
                *(undefined4 *)(lVar13 + 0x1c) = uVar17;
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
                uVar25 = native_UnityEngine_Mathf__Lerp_8e5224
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



/* TweenHeight$$OnUpdate @ 0x6e4138
 * void TweenHeight__OnUpdate (TweenHeight_o* __this, float factor, bool isFinished, const MethodInfo* method); */

/* WARNING: Removing unreachable block (ram,0x0094239c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TweenHeight$$OnUpdate
   void TweenHeight__OnUpdate (TweenHeight_o* __this, float factor, bool isFinished, const
   MethodInfo* method); */

void native_TweenHeight__OnUpdate_6e4138(float param_1,long param_2)

{
  int iVar1;
  undefined4 uVar2;
  ulong uVar3;
  undefined8 uVar4;
  long *plVar5;
  long lVar6;
  
  if ((bRam000000000133f39d & 1) == 0) {
    native_sub_43273c(&Method_NGUITools_FindInParents_UITable____12e57a0);
    native_sub_43273c(&NGUITools_TypeInfo_12d53c8);
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    bRam000000000133f39d = 1;
  }
  uVar4 = *(undefined8 *)(param_2 + 0x88);
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar3 = native_UnityEngine_Object__op_Implicit_8e1b98(uVar4,0);
  if ((uVar3 & 1) != 0) {
    if (*(long *)(param_2 + 0x88) == 0) goto LAB_006e4348;
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
    if (*(long *)(param_2 + 0x90) == 0) goto LAB_006e4348;
    iVar1 = *(int *)(*(long *)(param_2 + 0x90) + 0xa4);
    *(int *)(param_2 + 0x84) = iVar1;
  }
  uVar2 = native_UnityEngine_Mathf__RoundToInt_8e50f0
                    ((1.0 - param_1) * (float)*(int *)(param_2 + 0x80) + (float)iVar1 * param_1,0);
  native_TweenHeight__set_value_6e4108(param_2,uVar2);
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
LAB_006e4348:
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* TweenHeight$$Begin @ 0x6e434c
 * TweenHeight_o* TweenHeight__Begin (UIWidget_o* widget, float duration, int32_t height, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TweenHeight$$Begin
   TweenHeight_o* TweenHeight__Begin (UIWidget_o* widget, float duration, int32_t height, const
   MethodInfo* method); */

long native_TweenHeight__Begin_6e434c(undefined8 param_1,long param_2,undefined4 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  if ((bRam000000000133f39e & 1) == 0) {
    native_sub_43273c(&Method_UITweener_Begin_TweenHeight____12e7918);
    bRam000000000133f39e = 1;
  }
  if (param_2 != 0) {
    uVar1 = native_UnityEngine_Component__get_gameObject_8da66c(param_2,0);
    lVar2 = native_UITweener__Begin_object__d8710c
                      (param_1,0,uVar1,_Method_UITweener_Begin_TweenHeight____12e7918);
    if (lVar2 != 0) {
      *(undefined4 *)(lVar2 + 0x80) = *(undefined4 *)(param_2 + 0xa8);
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



/* TweenHeight$$SetStartToCurrentValue @ 0x6e440c
 * void TweenHeight__SetStartToCurrentValue (TweenHeight_o* __this, const MethodInfo* method); */

/* TweenHeight$$SetStartToCurrentValue
   void TweenHeight__SetStartToCurrentValue (TweenHeight_o* __this, const MethodInfo* method); */

void native_TweenHeight__SetStartToCurrentValue_6e440c(long param_1)

{
  long lVar1;
  
  lVar1 = native_TweenHeight__get_cachedWidget_6e4010();
  if (lVar1 != 0) {
    *(undefined4 *)(param_1 + 0x80) = *(undefined4 *)(lVar1 + 0xa8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* TweenHeight$$SetEndToCurrentValue @ 0x6e443c
 * void TweenHeight__SetEndToCurrentValue (TweenHeight_o* __this, const MethodInfo* method); */

/* TweenHeight$$SetEndToCurrentValue
   void TweenHeight__SetEndToCurrentValue (TweenHeight_o* __this, const MethodInfo* method); */

void native_TweenHeight__SetEndToCurrentValue_6e443c(long param_1)

{
  long lVar1;
  
  lVar1 = native_TweenHeight__get_cachedWidget_6e4010();
  if (lVar1 != 0) {
    *(undefined4 *)(param_1 + 0x84) = *(undefined4 *)(lVar1 + 0xa8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* TweenHeight$$SetCurrentValueToStart @ 0x6e446c
 * void TweenHeight__SetCurrentValueToStart (TweenHeight_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TweenHeight$$SetCurrentValueToStart
   void TweenHeight__SetCurrentValueToStart (TweenHeight_o* __this, const MethodInfo* method); */

void native_TweenHeight__SetCurrentValueToStart_6e446c(long param_1)

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
  undefined4 uVar17;
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
  
  iVar15 = *(int *)(param_1 + 0x80);
  plVar11 = (long *)native_TweenHeight__get_cachedWidget_6e4010();
  if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    native_sub_432810();
  }
  if ((bRam0000000001341450 & 1) == 0) {
    native_sub_43273c(&NGUIMath_TypeInfo_12d53b8,iVar15,0);
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    bRam0000000001341450 = 1;
  }
  iVar10 = (**(code **)(*plVar11 + 0x3c8))(plVar11,*(undefined8 *)(*plVar11 + 0x3d0));
  if (iVar10 <= iVar15) {
    iVar10 = iVar15;
  }
  if (((int)plVar11[0x15] == iVar10) || (*(int *)((long)plVar11 + 0xdc) == 1)) {
    return;
  }
  uVar14 = (**(code **)(*plVar11 + 0x188))(plVar11,*(undefined8 *)(*plVar11 + 400));
  if ((uVar14 & 1) == 0) {
    iVar15 = *(int *)((long)plVar11 + 0xa4);
    if ((*(int *)((long)plVar11 + 0xa4) == iVar15) && ((int)plVar11[0x15] == iVar10)) {
      return;
    }
    iVar2 = *(int *)((long)plVar11 + 0xdc);
    *(int *)((long)plVar11 + 0xa4) = iVar15;
    *(int *)(plVar11 + 0x15) = iVar10;
    if (iVar2 == 0) {
      *(float *)(plVar11 + 0x1c) = (float)iVar15 / (float)iVar10;
    }
    else if (iVar2 == 2) {
      uVar17 = native_UnityEngine_Mathf__RoundToInt_8e50f0
                         (*(float *)(plVar11 + 0x1c) * (float)iVar10,0);
      *(undefined4 *)((long)plVar11 + 0xa4) = uVar17;
    }
    else if (iVar2 == 1) {
      uVar17 = native_UnityEngine_Mathf__RoundToInt_8e50f0
                         ((float)iVar15 / *(float *)(plVar11 + 0x1c),0);
      *(undefined4 *)(plVar11 + 0x15) = uVar17;
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
  if (plVar11[5] == 0) goto LAB_00942330;
  uVar16 = *(undefined8 *)(plVar11[5] + 0x10);
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar14 = native_UnityEngine_Object__op_Inequality_8d76fc(uVar16,0,0);
  if ((uVar14 & 1) == 0) {
LAB_00942204:
    if (plVar11[5] == 0) {
LAB_00942330:
                    /* WARNING: Subroutine does not return */
      native_sub_432810();
    }
    uVar16 = *(undefined8 *)(plVar11[5] + 0x10);
    if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    uVar14 = native_UnityEngine_Object__op_Inequality_8d76fc(uVar16,0,0);
    iVar15 = (int)plVar11[0x15];
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
      fVar37 = (float)(iVar10 - iVar15);
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
    uVar14 = (ulong)(uint)(float)(iVar15 - iVar10);
    uVar25 = 0;
  }
  else {
    if (plVar11[6] == 0) goto LAB_00942330;
    uVar16 = *(undefined8 *)(plVar11[6] + 0x10);
    if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    uVar14 = native_UnityEngine_Object__op_Inequality_8d76fc(uVar16,0,0);
    if ((uVar14 & 1) == 0) goto LAB_00942204;
    if (*(uint *)(plVar11 + 0x14) < 3) {
      iVar15 = (int)plVar11[0x15];
      if ((*(byte *)(_NGUIMath_TypeInfo_12d53b8 + 0x133) >> 2 & 1) != 0) {
        iVar2 = *(int *)(_NGUIMath_TypeInfo_12d53b8 + 0xe0);
        goto joined_r0x00942284;
      }
      goto LAB_009422b4;
    }
    if (*(uint *)(plVar11 + 0x14) - 6 < 3) {
      iVar15 = (int)plVar11[0x15];
      if ((*(byte *)(_NGUIMath_TypeInfo_12d53b8 + 0x133) >> 2 & 1) != 0) {
        iVar2 = *(int *)(_NGUIMath_TypeInfo_12d53b8 + 0xe0);
        goto joined_r0x00942258;
      }
      goto LAB_00942264;
    }
    uVar3 = iVar10 - (int)plVar11[0x15] & 0xfffffffe;
    if (uVar3 == 0) {
      return;
    }
    if (((*(byte *)(_NGUIMath_TypeInfo_12d53b8 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_NGUIMath_TypeInfo_12d53b8 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    fVar37 = (float)(int)uVar3 * 0.5;
    uVar14 = (ulong)(uint)((float)(int)-uVar3 * 0.5);
LAB_00942274:
    uVar25 = (ulong)(uint)fVar37;
  }
  uVar16 = 0;
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
  if (plVar11 == (long *)0x0) goto LAB_00807ccc;
  fVar37 = (float)native_UIWidget__get_pivotOffset_944f8c(plVar11,0);
  fVar26 = (float)uVar28;
  uVar29 = uVar28;
  lVar12 = native_UIRect__get_cachedTransform_c27c58(plVar11,0);
  if (lVar12 == 0) goto LAB_00807ccc;
  uVar17 = native_UnityEngine_Transform__get_localRotation_771c84(lVar12,0);
  uVar3 = native_UnityEngine_Mathf__FloorToInt_8e506c(0x3f000000,0);
  uVar4 = native_UnityEngine_Mathf__FloorToInt_8e506c((float)uVar14 + 0.5,0);
  uVar5 = native_UnityEngine_Mathf__FloorToInt_8e506c(0x3f000000,0);
  uVar6 = native_UnityEngine_Mathf__FloorToInt_8e506c((float)uVar25 + 0.5,0);
  if ((fVar37 == 0.5) && ((uVar3 == 0 || (uVar5 == 0)))) {
    uVar3 = uVar3 & 0xfffffffe;
    uVar5 = uVar5 & 0xfffffffe;
  }
  if ((fVar26 == 0.5) && ((uVar4 == 0 || (uVar6 == 0)))) {
    uVar4 = uVar4 & 0xfffffffe;
    uVar6 = uVar6 & 0xfffffffe;
  }
  fVar42 = (float)(int)uVar3;
  fVar40 = (float)(int)uVar6;
  uVar14 = uVar29;
  fVar18 = (float)native_UnityEngine_Quaternion__op_Multiply_7629c0
                            (uVar17,uVar29,uVar16,uVar38,fVar42,fVar40,0,0);
  fVar41 = (float)(int)uVar5;
  uVar25 = uVar29;
  fVar19 = (float)native_UnityEngine_Quaternion__op_Multiply_7629c0
                            (uVar17,uVar29,uVar16,uVar38,fVar41,fVar40,0,0);
  fVar39 = (float)(int)uVar4;
  uVar34 = uVar29;
  fVar20 = (float)native_UnityEngine_Quaternion__op_Multiply_7629c0
                            (uVar17,uVar29,uVar16,uVar38,fVar42,fVar39,0,0);
  uVar30 = uVar29;
  fVar21 = (float)native_UnityEngine_Quaternion__op_Multiply_7629c0
                            (uVar17,uVar29,uVar16,uVar38,fVar41,fVar39,0,0);
  uVar31 = uVar29;
  fVar42 = (float)native_UnityEngine_Quaternion__op_Multiply_7629c0
                            (uVar17,uVar29,uVar16,uVar38,fVar42,0,0,0);
  uVar32 = uVar29;
  fVar22 = (float)native_UnityEngine_Quaternion__op_Multiply_7629c0
                            (uVar17,uVar29,uVar16,uVar38,fVar41,0,0,0);
  fVar27 = (float)uVar32;
  uVar32 = uVar29;
  fVar23 = (float)native_UnityEngine_Quaternion__op_Multiply_7629c0
                            (uVar17,uVar29,uVar16,uVar38,0,fVar40,0,0);
  fVar40 = (float)uVar32;
  uVar32 = uVar29;
  uVar36 = uVar16;
  fVar24 = (float)native_UnityEngine_Quaternion__op_Multiply_7629c0
                            (uVar17,uVar29,uVar16,uVar38,0,fVar39,0,0);
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
  uVar25 = uVar33;
  fVar18 = fVar39;
  if (uVar8 - uVar5 != 0) {
    uVar25 = (ulong)(uint)(float)(int)(uVar8 - uVar5);
    uVar5 = uVar8;
    fVar18 = fVar37;
    if (uVar3 == 0) {
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
  uVar3 = 100000;
  if ((int)uVar6 < 0x186a1) {
    uVar3 = uVar6;
  }
  if ((int)uVar9 <= (int)uVar6) {
    uVar9 = uVar3;
  }
  if (uVar9 - uVar6 != 0) {
    fVar20 = (float)(int)(uVar9 - uVar6);
    uVar6 = uVar9;
    fVar18 = fVar26;
    if (uVar4 == 0) {
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
  uVar3 = uVar5 & 0xfffffffe;
  if (fVar37 != 0.5) {
    uVar3 = uVar5;
  }
  uVar5 = uVar6 & 0xfffffffe;
  if (fVar26 != 0.5) {
    uVar5 = uVar6;
  }
  fVar20 = (float)native_UnityEngine_Transform__get_localPosition_7717f4(lVar12,0);
  fVar39 = (float)native_UnityEngine_Quaternion__op_Multiply_7629c0
                            (uVar17,uVar29,uVar16,uVar38,uVar14,uVar33,fVar39,0);
  fVar39 = fVar41 + fVar20 + fVar39;
  fVar40 = fVar40 + fVar19 + (float)uVar29;
  uVar25 = (ulong)(uint)fVar40;
  uVar28 = (ulong)(uint)(fVar35 + fVar18 + (float)uVar16);
  native_UnityEngine_Transform__set_localPosition_7718a4(fVar39,uVar25,uVar28,lVar12,0);
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
    fVar39 = fVar39 - fVar37 * (float)(int)uVar3;
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
        fVar40 = fVar40 - fVar26 * (float)(int)uVar5;
        uVar14 = native_UnityEngine_Object__op_Implicit_8e1b98(uVar16,0);
        if ((uVar14 & 1) != 0) {
          if (plVar11[5] == 0) goto LAB_00807ccc;
          native_UIRect_AnchorPoint__SetVertical_5591e0(fVar40,plVar11[5],lVar12,0);
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
                            (uVar16,uVar25,uVar28,lVar12,0);
                }
LAB_00559308:
                uVar17 = native_UnityEngine_Mathf__FloorToInt_8e506c
                                   (((fVar40 + (float)(int)uVar5) - (float)uVar25) + 0.5,0);
                *(undefined4 *)(lVar13 + 0x1c) = uVar17;
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
                uVar25 = native_UnityEngine_Mathf__Lerp_8e5224
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



/* TweenHeight$$SetCurrentValueToEnd @ 0x6e4474
 * void TweenHeight__SetCurrentValueToEnd (TweenHeight_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TweenHeight$$SetCurrentValueToEnd
   void TweenHeight__SetCurrentValueToEnd (TweenHeight_o* __this, const MethodInfo* method); */

void native_TweenHeight__SetCurrentValueToEnd_6e4474(long param_1)

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
  undefined4 uVar17;
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
  
  iVar15 = *(int *)(param_1 + 0x84);
  plVar11 = (long *)native_TweenHeight__get_cachedWidget_6e4010();
  if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    native_sub_432810();
  }
  if ((bRam0000000001341450 & 1) == 0) {
    native_sub_43273c(&NGUIMath_TypeInfo_12d53b8,iVar15,0);
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    bRam0000000001341450 = 1;
  }
  iVar10 = (**(code **)(*plVar11 + 0x3c8))(plVar11,*(undefined8 *)(*plVar11 + 0x3d0));
  if (iVar10 <= iVar15) {
    iVar10 = iVar15;
  }
  if (((int)plVar11[0x15] == iVar10) || (*(int *)((long)plVar11 + 0xdc) == 1)) {
    return;
  }
  uVar14 = (**(code **)(*plVar11 + 0x188))(plVar11,*(undefined8 *)(*plVar11 + 400));
  if ((uVar14 & 1) == 0) {
    iVar15 = *(int *)((long)plVar11 + 0xa4);
    if ((*(int *)((long)plVar11 + 0xa4) == iVar15) && ((int)plVar11[0x15] == iVar10)) {
      return;
    }
    iVar2 = *(int *)((long)plVar11 + 0xdc);
    *(int *)((long)plVar11 + 0xa4) = iVar15;
    *(int *)(plVar11 + 0x15) = iVar10;
    if (iVar2 == 0) {
      *(float *)(plVar11 + 0x1c) = (float)iVar15 / (float)iVar10;
    }
    else if (iVar2 == 2) {
      uVar17 = native_UnityEngine_Mathf__RoundToInt_8e50f0
                         (*(float *)(plVar11 + 0x1c) * (float)iVar10,0);
      *(undefined4 *)((long)plVar11 + 0xa4) = uVar17;
    }
    else if (iVar2 == 1) {
      uVar17 = native_UnityEngine_Mathf__RoundToInt_8e50f0
                         ((float)iVar15 / *(float *)(plVar11 + 0x1c),0);
      *(undefined4 *)(plVar11 + 0x15) = uVar17;
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
  if (plVar11[5] == 0) goto LAB_00942330;
  uVar16 = *(undefined8 *)(plVar11[5] + 0x10);
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar14 = native_UnityEngine_Object__op_Inequality_8d76fc(uVar16,0,0);
  if ((uVar14 & 1) == 0) {
LAB_00942204:
    if (plVar11[5] == 0) {
LAB_00942330:
                    /* WARNING: Subroutine does not return */
      native_sub_432810();
    }
    uVar16 = *(undefined8 *)(plVar11[5] + 0x10);
    if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    uVar14 = native_UnityEngine_Object__op_Inequality_8d76fc(uVar16,0,0);
    iVar15 = (int)plVar11[0x15];
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
      fVar37 = (float)(iVar10 - iVar15);
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
    uVar14 = (ulong)(uint)(float)(iVar15 - iVar10);
    uVar25 = 0;
  }
  else {
    if (plVar11[6] == 0) goto LAB_00942330;
    uVar16 = *(undefined8 *)(plVar11[6] + 0x10);
    if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    uVar14 = native_UnityEngine_Object__op_Inequality_8d76fc(uVar16,0,0);
    if ((uVar14 & 1) == 0) goto LAB_00942204;
    if (*(uint *)(plVar11 + 0x14) < 3) {
      iVar15 = (int)plVar11[0x15];
      if ((*(byte *)(_NGUIMath_TypeInfo_12d53b8 + 0x133) >> 2 & 1) != 0) {
        iVar2 = *(int *)(_NGUIMath_TypeInfo_12d53b8 + 0xe0);
        goto joined_r0x00942284;
      }
      goto LAB_009422b4;
    }
    if (*(uint *)(plVar11 + 0x14) - 6 < 3) {
      iVar15 = (int)plVar11[0x15];
      if ((*(byte *)(_NGUIMath_TypeInfo_12d53b8 + 0x133) >> 2 & 1) != 0) {
        iVar2 = *(int *)(_NGUIMath_TypeInfo_12d53b8 + 0xe0);
        goto joined_r0x00942258;
      }
      goto LAB_00942264;
    }
    uVar3 = iVar10 - (int)plVar11[0x15] & 0xfffffffe;
    if (uVar3 == 0) {
      return;
    }
    if (((*(byte *)(_NGUIMath_TypeInfo_12d53b8 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_NGUIMath_TypeInfo_12d53b8 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    fVar37 = (float)(int)uVar3 * 0.5;
    uVar14 = (ulong)(uint)((float)(int)-uVar3 * 0.5);
LAB_00942274:
    uVar25 = (ulong)(uint)fVar37;
  }
  uVar16 = 0;
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
  if (plVar11 == (long *)0x0) goto LAB_00807ccc;
  fVar37 = (float)native_UIWidget__get_pivotOffset_944f8c(plVar11,0);
  fVar26 = (float)uVar28;
  uVar29 = uVar28;
  lVar12 = native_UIRect__get_cachedTransform_c27c58(plVar11,0);
  if (lVar12 == 0) goto LAB_00807ccc;
  uVar17 = native_UnityEngine_Transform__get_localRotation_771c84(lVar12,0);
  uVar3 = native_UnityEngine_Mathf__FloorToInt_8e506c(0x3f000000,0);
  uVar4 = native_UnityEngine_Mathf__FloorToInt_8e506c((float)uVar14 + 0.5,0);
  uVar5 = native_UnityEngine_Mathf__FloorToInt_8e506c(0x3f000000,0);
  uVar6 = native_UnityEngine_Mathf__FloorToInt_8e506c((float)uVar25 + 0.5,0);
  if ((fVar37 == 0.5) && ((uVar3 == 0 || (uVar5 == 0)))) {
    uVar3 = uVar3 & 0xfffffffe;
    uVar5 = uVar5 & 0xfffffffe;
  }
  if ((fVar26 == 0.5) && ((uVar4 == 0 || (uVar6 == 0)))) {
    uVar4 = uVar4 & 0xfffffffe;
    uVar6 = uVar6 & 0xfffffffe;
  }
  fVar42 = (float)(int)uVar3;
  fVar40 = (float)(int)uVar6;
  uVar14 = uVar29;
  fVar18 = (float)native_UnityEngine_Quaternion__op_Multiply_7629c0
                            (uVar17,uVar29,uVar16,uVar38,fVar42,fVar40,0,0);
  fVar41 = (float)(int)uVar5;
  uVar25 = uVar29;
  fVar19 = (float)native_UnityEngine_Quaternion__op_Multiply_7629c0
                            (uVar17,uVar29,uVar16,uVar38,fVar41,fVar40,0,0);
  fVar39 = (float)(int)uVar4;
  uVar34 = uVar29;
  fVar20 = (float)native_UnityEngine_Quaternion__op_Multiply_7629c0
                            (uVar17,uVar29,uVar16,uVar38,fVar42,fVar39,0,0);
  uVar30 = uVar29;
  fVar21 = (float)native_UnityEngine_Quaternion__op_Multiply_7629c0
                            (uVar17,uVar29,uVar16,uVar38,fVar41,fVar39,0,0);
  uVar31 = uVar29;
  fVar42 = (float)native_UnityEngine_Quaternion__op_Multiply_7629c0
                            (uVar17,uVar29,uVar16,uVar38,fVar42,0,0,0);
  uVar32 = uVar29;
  fVar22 = (float)native_UnityEngine_Quaternion__op_Multiply_7629c0
                            (uVar17,uVar29,uVar16,uVar38,fVar41,0,0,0);
  fVar27 = (float)uVar32;
  uVar32 = uVar29;
  fVar23 = (float)native_UnityEngine_Quaternion__op_Multiply_7629c0
                            (uVar17,uVar29,uVar16,uVar38,0,fVar40,0,0);
  fVar40 = (float)uVar32;
  uVar32 = uVar29;
  uVar36 = uVar16;
  fVar24 = (float)native_UnityEngine_Quaternion__op_Multiply_7629c0
                            (uVar17,uVar29,uVar16,uVar38,0,fVar39,0,0);
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
  uVar25 = uVar33;
  fVar18 = fVar39;
  if (uVar8 - uVar5 != 0) {
    uVar25 = (ulong)(uint)(float)(int)(uVar8 - uVar5);
    uVar5 = uVar8;
    fVar18 = fVar37;
    if (uVar3 == 0) {
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
  uVar3 = 100000;
  if ((int)uVar6 < 0x186a1) {
    uVar3 = uVar6;
  }
  if ((int)uVar9 <= (int)uVar6) {
    uVar9 = uVar3;
  }
  if (uVar9 - uVar6 != 0) {
    fVar20 = (float)(int)(uVar9 - uVar6);
    uVar6 = uVar9;
    fVar18 = fVar26;
    if (uVar4 == 0) {
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
  uVar3 = uVar5 & 0xfffffffe;
  if (fVar37 != 0.5) {
    uVar3 = uVar5;
  }
  uVar5 = uVar6 & 0xfffffffe;
  if (fVar26 != 0.5) {
    uVar5 = uVar6;
  }
  fVar20 = (float)native_UnityEngine_Transform__get_localPosition_7717f4(lVar12,0);
  fVar39 = (float)native_UnityEngine_Quaternion__op_Multiply_7629c0
                            (uVar17,uVar29,uVar16,uVar38,uVar14,uVar33,fVar39,0);
  fVar39 = fVar41 + fVar20 + fVar39;
  fVar40 = fVar40 + fVar19 + (float)uVar29;
  uVar25 = (ulong)(uint)fVar40;
  uVar28 = (ulong)(uint)(fVar35 + fVar18 + (float)uVar16);
  native_UnityEngine_Transform__set_localPosition_7718a4(fVar39,uVar25,uVar28,lVar12,0);
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
    fVar39 = fVar39 - fVar37 * (float)(int)uVar3;
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
        fVar40 = fVar40 - fVar26 * (float)(int)uVar5;
        uVar14 = native_UnityEngine_Object__op_Implicit_8e1b98(uVar16,0);
        if ((uVar14 & 1) != 0) {
          if (plVar11[5] == 0) goto LAB_00807ccc;
          native_UIRect_AnchorPoint__SetVertical_5591e0(fVar40,plVar11[5],lVar12,0);
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
                            (uVar16,uVar25,uVar28,lVar12,0);
                }
LAB_00559308:
                uVar17 = native_UnityEngine_Mathf__FloorToInt_8e506c
                                   (((fVar40 + (float)(int)uVar5) - (float)uVar25) + 0.5,0);
                *(undefined4 *)(lVar13 + 0x1c) = uVar17;
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
                uVar25 = native_UnityEngine_Mathf__Lerp_8e5224
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



/* TweenHeight$$.ctor @ 0x6e447c
 * void TweenHeight___ctor (TweenHeight_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TweenHeight$$.ctor
   void TweenHeight___ctor (TweenHeight_o* __this, const MethodInfo* method); */

void native_TweenHeight___ctor_6e447c(long param_1)

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


