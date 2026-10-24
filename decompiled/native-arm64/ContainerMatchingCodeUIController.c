/* ARM64 IL2CPP native pseudocode from Ghidra.
 * Recovered implementation, not original C# source.
 * Function boundaries follow the IL2CPP method address table. */


/* ContainerMatchingCodeUIController$$Start @ 0xdd7c2c
 * void ContainerMatchingCodeUIController__Start (ContainerMatchingCodeUIController_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ContainerMatchingCodeUIController$$Start
   void ContainerMatchingCodeUIController__Start (ContainerMatchingCodeUIController_o* __this, const
   MethodInfo* method); */

void native_ContainerMatchingCodeUIController__Start_dd7c2c(long param_1)

{
  uint uVar1;
  int iVar2;
  char cVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  undefined4 uVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  long lVar12;
  ulong uVar13;
  long lVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  long *plVar17;
  int iVar18;
  undefined4 uVar19;
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
  float fVar38;
  ulong uVar39;
  float fVar40;
  float fVar41;
  float fVar42;
  float fVar43;
  
  if ((bRam0000000001346e60 & 1) == 0) {
    native_sub_43273c(&EventDelegate_Callback_TypeInfo_12d72e8);
    native_sub_43273c(&Method_ContainerMatchingCodeUIController_OnClickButtonClose___12e3000);
    native_sub_43273c(&EventDelegate_TypeInfo_12d4590);
    native_sub_43273c(&Method_UnityEngine_GameObject_GetComponent_UIButton____12e4a88);
    native_sub_43273c(&Method_UnityEngine_GameObject_GetComponent_UISprite____12e4ae0);
    native_sub_43273c(&Method_UnityEngine_GameObject_GetComponent_UIWidget____12e4ae8);
    native_sub_43273c(&Method_System_Collections_Generic_List_EventDelegate__Add___12dc740);
    native_sub_43273c(&PanelMainUIController_TypeInfo_12d5600);
    native_sub_43273c(&Method_DG_Tweening_TweenSettingsExtensions_SetEase_Tweener____12e7548);
    native_sub_43273c(&StringLiteral_SpriteBeijing_12f0ff0);
    native_sub_43273c(&StringLiteral_ContainerBj_12ed210);
    bRam0000000001346e60 = 1;
  }
  if ((*(long *)(param_1 + 0x18) == 0) ||
     (lVar14 = native_UnityEngine_GameObject__GetComponent_BE2_BlockSectionHeader_Custom__4a2214
                         (*(long *)(param_1 + 0x18),
                          _Method_UnityEngine_GameObject_GetComponent_UIButton____12e4a88),
     lVar14 == 0)) {
LAB_00dd7f00:
                    /* WARNING: Subroutine does not return */
    native_sub_432810();
  }
  lVar14 = *(long *)(lVar14 + 0xc0);
  uVar15 = native_sub_432808(_EventDelegate_Callback_TypeInfo_12d72e8);
  native_EventDelegate_Callback___ctor_54bd18
            (uVar15,param_1,_Method_ContainerMatchingCodeUIController_OnClickButtonClose___12e3000,0
            );
  uVar16 = native_sub_432808(_EventDelegate_TypeInfo_12d4590);
  native_EventDelegate___ctor_de0bd0(uVar16,uVar15,0);
  if (lVar14 == 0) goto LAB_00dd7f00;
  native_System_Collections_Generic_List_int_____Add_d40c00
            (lVar14,uVar16,_Method_System_Collections_Generic_List_EventDelegate__Add___12dc740);
  lVar14 = native_UnityEngine_Component__get_transform_8da62c(param_1,0);
  native_UnityEngine_Vector3__get_zero_776668(0);
  if (lVar14 == 0) goto LAB_00dd7f00;
  native_UnityEngine_Transform__set_localScale_771e30(lVar14,0);
  uVar15 = native_UnityEngine_Component__get_transform_8da62c(param_1,0);
  native_UnityEngine_Vector3__get_one_776a20(0);
  uVar15 = native_DG_Tweening_ShortcutExtensions__DOScale_cf2498(uVar15,0);
  native_DG_Tweening_TweenSettingsExtensions__SetEase_object__4aaec0
            (uVar15,0x1b,_Method_DG_Tweening_TweenSettingsExtensions_SetEase_Tweener____12e7548);
  if (((*(byte *)(_PanelMainUIController_TypeInfo_12d5600 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_PanelMainUIController_TypeInfo_12d5600 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  cVar3 = *(char *)(*(long *)(_PanelMainUIController_TypeInfo_12d5600 + 0xb8) + 0x90);
  lVar14 = native_UnityEngine_GameObject__Find_8dead0(_StringLiteral_ContainerBj_12ed210,0);
  if ((lVar14 == 0) ||
     (lVar14 = native_UnityEngine_GameObject__GetComponent_BE2_BlockSectionHeader_Custom__4a2214
                         (lVar14,_Method_UnityEngine_GameObject_GetComponent_UIWidget____12e4ae8),
     lVar14 == 0)) goto LAB_00dd7f00;
  if (cVar3 == '\0') {
    native_UIWidget__set_width_941dec(lVar14,0x780,0);
    native_UIWidget__set_height_942098(lVar14,0x438,0);
    lVar14 = native_UnityEngine_GameObject__Find_8dead0(_StringLiteral_SpriteBeijing_12f0ff0,0);
    if ((lVar14 == 0) ||
       (plVar17 = (long *)native_UnityEngine_GameObject__GetComponent_BE2_BlockSectionHeader_Custom__4a2214
                                    (lVar14,
                                     _Method_UnityEngine_GameObject_GetComponent_UISprite____12e4ae0
                                    ), plVar17 == (long *)0x0)) goto LAB_00dd7f00;
    native_UIWidget__set_width_941dec(plVar17,0x780,0);
    iVar18 = 0x438;
  }
  else {
    native_UIWidget__set_width_941dec(lVar14,0x438,0);
    native_UIWidget__set_height_942098(lVar14,0x780,0);
    lVar14 = native_UnityEngine_GameObject__Find_8dead0(_StringLiteral_SpriteBeijing_12f0ff0,0);
    if ((lVar14 == 0) ||
       (plVar17 = (long *)native_UnityEngine_GameObject__GetComponent_BE2_BlockSectionHeader_Custom__4a2214
                                    (lVar14,
                                     _Method_UnityEngine_GameObject_GetComponent_UISprite____12e4ae0
                                    ), plVar17 == (long *)0x0)) goto LAB_00dd7f00;
    native_UIWidget__set_width_941dec(plVar17,0x438,0);
    iVar18 = 0x780;
  }
  if ((bRam0000000001341450 & 1) == 0) {
    native_sub_43273c(&NGUIMath_TypeInfo_12d53b8,iVar18,0);
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    bRam0000000001341450 = 1;
  }
  iVar11 = (**(code **)(*plVar17 + 0x3c8))(plVar17,*(undefined8 *)(*plVar17 + 0x3d0));
  if (iVar11 <= iVar18) {
    iVar11 = iVar18;
  }
  if (((int)plVar17[0x15] == iVar11) || (*(int *)((long)plVar17 + 0xdc) == 1)) {
    return;
  }
  uVar13 = (**(code **)(*plVar17 + 0x188))(plVar17,*(undefined8 *)(*plVar17 + 400));
  if ((uVar13 & 1) == 0) {
    iVar18 = *(int *)((long)plVar17 + 0xa4);
    if ((*(int *)((long)plVar17 + 0xa4) == iVar18) && ((int)plVar17[0x15] == iVar11)) {
      return;
    }
    iVar2 = *(int *)((long)plVar17 + 0xdc);
    *(int *)((long)plVar17 + 0xa4) = iVar18;
    *(int *)(plVar17 + 0x15) = iVar11;
    if (iVar2 == 0) {
      *(float *)(plVar17 + 0x1c) = (float)iVar18 / (float)iVar11;
    }
    else if (iVar2 == 2) {
      uVar19 = native_UnityEngine_Mathf__RoundToInt_8e50f0
                         (*(float *)(plVar17 + 0x1c) * (float)iVar11,0);
      *(undefined4 *)((long)plVar17 + 0xa4) = uVar19;
    }
    else if (iVar2 == 1) {
      uVar19 = native_UnityEngine_Mathf__RoundToInt_8e50f0
                         ((float)iVar18 / *(float *)(plVar17 + 0x1c),0);
      *(undefined4 *)(plVar17 + 0x15) = uVar19;
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
    iVar18 = (int)plVar17[0x15];
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
      fVar38 = (float)(iVar11 - iVar18);
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
    uVar13 = (ulong)(uint)(float)(iVar18 - iVar11);
    uVar27 = 0;
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
      iVar18 = (int)plVar17[0x15];
      if ((*(byte *)(_NGUIMath_TypeInfo_12d53b8 + 0x133) >> 2 & 1) != 0) {
        iVar2 = *(int *)(_NGUIMath_TypeInfo_12d53b8 + 0xe0);
        goto joined_r0x00942284;
      }
      goto LAB_009422b4;
    }
    if (*(uint *)(plVar17 + 0x14) - 6 < 3) {
      iVar18 = (int)plVar17[0x15];
      if ((*(byte *)(_NGUIMath_TypeInfo_12d53b8 + 0x133) >> 2 & 1) != 0) {
        iVar2 = *(int *)(_NGUIMath_TypeInfo_12d53b8 + 0xe0);
        goto joined_r0x00942258;
      }
      goto LAB_00942264;
    }
    uVar4 = iVar11 - (int)plVar17[0x15] & 0xfffffffe;
    if (uVar4 == 0) {
      return;
    }
    if (((*(byte *)(_NGUIMath_TypeInfo_12d53b8 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_NGUIMath_TypeInfo_12d53b8 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    fVar38 = (float)(int)uVar4 * 0.5;
    uVar13 = (ulong)(uint)((float)(int)-uVar4 * 0.5);
LAB_00942274:
    uVar27 = (ulong)(uint)fVar38;
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
  uVar30 = uVar13;
  uVar39 = uVar27;
  if ((bRam000000000134047a & 1) == 0) {
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    bRam000000000134047a = 1;
  }
  if (plVar17 == (long *)0x0) goto LAB_00807ccc;
  fVar38 = (float)native_UIWidget__get_pivotOffset_944f8c(plVar17,0);
  fVar28 = (float)uVar30;
  uVar31 = uVar30;
  lVar14 = native_UIRect__get_cachedTransform_c27c58(plVar17,0);
  if (lVar14 == 0) goto LAB_00807ccc;
  uVar19 = native_UnityEngine_Transform__get_localRotation_771c84(lVar14,0);
  uVar4 = native_UnityEngine_Mathf__FloorToInt_8e506c(0x3f000000,0);
  uVar5 = native_UnityEngine_Mathf__FloorToInt_8e506c((float)uVar13 + 0.5,0);
  uVar6 = native_UnityEngine_Mathf__FloorToInt_8e506c(0x3f000000,0);
  uVar7 = native_UnityEngine_Mathf__FloorToInt_8e506c((float)uVar27 + 0.5,0);
  if ((fVar38 == 0.5) && ((uVar4 == 0 || (uVar6 == 0)))) {
    uVar4 = uVar4 & 0xfffffffe;
    uVar6 = uVar6 & 0xfffffffe;
  }
  if ((fVar28 == 0.5) && ((uVar5 == 0 || (uVar7 == 0)))) {
    uVar5 = uVar5 & 0xfffffffe;
    uVar7 = uVar7 & 0xfffffffe;
  }
  fVar43 = (float)(int)uVar4;
  fVar41 = (float)(int)uVar7;
  uVar13 = uVar31;
  fVar20 = (float)native_UnityEngine_Quaternion__op_Multiply_7629c0
                            (uVar19,uVar31,uVar15,uVar39,fVar43,fVar41,0,0);
  fVar42 = (float)(int)uVar6;
  uVar27 = uVar31;
  fVar21 = (float)native_UnityEngine_Quaternion__op_Multiply_7629c0
                            (uVar19,uVar31,uVar15,uVar39,fVar42,fVar41,0,0);
  fVar40 = (float)(int)uVar5;
  uVar36 = uVar31;
  fVar22 = (float)native_UnityEngine_Quaternion__op_Multiply_7629c0
                            (uVar19,uVar31,uVar15,uVar39,fVar43,fVar40,0,0);
  uVar32 = uVar31;
  fVar23 = (float)native_UnityEngine_Quaternion__op_Multiply_7629c0
                            (uVar19,uVar31,uVar15,uVar39,fVar42,fVar40,0,0);
  uVar33 = uVar31;
  fVar43 = (float)native_UnityEngine_Quaternion__op_Multiply_7629c0
                            (uVar19,uVar31,uVar15,uVar39,fVar43,0,0,0);
  uVar34 = uVar31;
  fVar24 = (float)native_UnityEngine_Quaternion__op_Multiply_7629c0
                            (uVar19,uVar31,uVar15,uVar39,fVar42,0,0,0);
  fVar29 = (float)uVar34;
  uVar34 = uVar31;
  fVar25 = (float)native_UnityEngine_Quaternion__op_Multiply_7629c0
                            (uVar19,uVar31,uVar15,uVar39,0,fVar41,0,0);
  fVar41 = (float)uVar34;
  uVar34 = uVar31;
  uVar16 = uVar15;
  fVar26 = (float)native_UnityEngine_Quaternion__op_Multiply_7629c0
                            (uVar19,uVar31,uVar15,uVar39,0,fVar40,0,0);
  fVar37 = (float)uVar16;
  uVar35 = uVar34;
  fVar42 = (float)native_UnityEngine_Vector3__get_zero_776668(0);
  fVar40 = fVar37;
  if ((fVar38 == 0.0) && (fVar28 == 1.0)) {
    uVar35 = uVar13 & 0xffffffff;
    fVar42 = fVar20;
  }
  else if ((fVar38 == 1.0) && (fVar28 == 0.0)) {
    uVar35 = uVar32 & 0xffffffff;
    fVar42 = fVar23;
  }
  else if ((fVar38 == 0.0) && (fVar28 == 0.0)) {
    uVar35 = uVar36 & 0xffffffff;
    fVar42 = fVar22;
  }
  else if ((fVar38 == 1.0) && (fVar28 == 1.0)) {
    uVar35 = uVar27 & 0xffffffff;
    fVar42 = fVar21;
  }
  else {
    fVar20 = (float)uVar34;
    fVar21 = (float)uVar33;
    if ((fVar38 == 0.0) && (fVar28 == 0.5)) {
      fVar42 = fVar43 + (fVar25 + fVar26) * 0.5;
      uVar35 = (ulong)(uint)(fVar21 + (fVar41 + fVar20) * 0.5);
      fVar40 = fVar43;
    }
    else if ((fVar38 == 1.0) && (fVar28 == 0.5)) {
      fVar42 = fVar24 + (fVar25 + fVar26) * 0.5;
      fVar20 = fVar41 + fVar20;
      fVar41 = fVar29;
LAB_008078c0:
      uVar35 = (ulong)(uint)(fVar41 + fVar20 * 0.5);
      fVar40 = fVar41;
    }
    else if (fVar38 == 0.5) {
      if (fVar28 == 1.0) {
        fVar42 = fVar25 + (fVar43 + fVar24) * 0.5;
        fVar20 = fVar21 + fVar29;
        goto LAB_008078c0;
      }
      if (fVar28 == 0.0) {
        fVar42 = fVar26 + (fVar43 + fVar24) * 0.5;
        uVar35 = (ulong)(uint)(fVar20 + (fVar21 + fVar29) * 0.5);
      }
      else if (fVar28 == 0.5) {
        fVar42 = (fVar43 + fVar24 + fVar25 + fVar26) * 0.5;
        uVar35 = (ulong)(uint)((fVar29 + fVar21 + fVar41 + fVar20) * 0.5);
        fVar40 = fVar29;
      }
    }
  }
  fVar41 = (float)uVar35;
  uVar8 = (**(code **)(*plVar17 + 0x3b8))(plVar17,*(undefined8 *)(*plVar17 + 0x3c0));
  uVar9 = native_UnityEngine_Mathf__Max_8e4cd0(2,uVar8,0);
  uVar8 = (**(code **)(*plVar17 + 0x3c8))(plVar17,*(undefined8 *)(*plVar17 + 0x3d0));
  uVar10 = native_UnityEngine_Mathf__Max_8e4cd0(2,uVar8,0);
  uVar6 = (uVar6 - uVar4) + *(int *)((long)plVar17 + 0xa4);
  uVar7 = (uVar7 - uVar5) + (int)plVar17[0x15];
  uVar13 = native_UnityEngine_Vector3__get_zero_776668(0);
  uVar1 = 100000;
  if ((int)uVar6 < 0x186a1) {
    uVar1 = uVar6;
  }
  if ((int)uVar9 <= (int)uVar6) {
    uVar9 = uVar1;
  }
  uVar27 = uVar35;
  fVar20 = fVar40;
  if (uVar9 - uVar6 != 0) {
    uVar27 = (ulong)(uint)(float)(int)(uVar9 - uVar6);
    uVar6 = uVar9;
    fVar20 = fVar38;
    if (uVar4 == 0) {
      fVar21 = (float)native_UnityEngine_Mathf__Lerp_8e5224(0,uVar27,fVar38,0);
      uVar13 = (ulong)(uint)((float)uVar13 + fVar21);
    }
    else {
      uVar36 = 0;
      fVar21 = (float)native_UnityEngine_Mathf__Lerp_8e5224(uVar27,0,fVar38,0);
      uVar13 = (ulong)(uint)((float)uVar13 - fVar21);
      uVar27 = uVar36;
    }
  }
  fVar21 = (float)uVar27;
  uVar4 = 100000;
  if ((int)uVar7 < 0x186a1) {
    uVar4 = uVar7;
  }
  if ((int)uVar10 <= (int)uVar7) {
    uVar10 = uVar4;
  }
  if (uVar10 - uVar7 != 0) {
    fVar22 = (float)(int)(uVar10 - uVar7);
    uVar7 = uVar10;
    fVar20 = fVar28;
    if (uVar5 == 0) {
      fVar21 = fVar22;
      fVar22 = (float)native_UnityEngine_Mathf__Lerp_8e5224(0,fVar22,uVar30 & 0xffffffff,0);
      uVar35 = (ulong)(uint)((float)uVar35 + fVar22);
    }
    else {
      fVar21 = 0.0;
      fVar22 = (float)native_UnityEngine_Mathf__Lerp_8e5224(fVar22,0,uVar30 & 0xffffffff,0);
      uVar35 = (ulong)(uint)((float)uVar35 - fVar22);
    }
  }
  uVar4 = uVar6 & 0xfffffffe;
  if (fVar38 != 0.5) {
    uVar4 = uVar6;
  }
  uVar6 = uVar7 & 0xfffffffe;
  if (fVar28 != 0.5) {
    uVar6 = uVar7;
  }
  fVar22 = (float)native_UnityEngine_Transform__get_localPosition_7717f4(lVar14,0);
  fVar40 = (float)native_UnityEngine_Quaternion__op_Multiply_7629c0
                            (uVar19,uVar31,uVar15,uVar39,uVar13,uVar35,fVar40,0);
  fVar40 = fVar42 + fVar22 + fVar40;
  fVar41 = fVar41 + fVar21 + (float)uVar31;
  uVar27 = (ulong)(uint)fVar41;
  uVar30 = (ulong)(uint)(fVar37 + fVar20 + (float)uVar15);
  native_UnityEngine_Transform__set_localPosition_7718a4(fVar40,uVar27,uVar30,lVar14,0);
  native_UIWidget__SetDimensions_94987c(plVar17,uVar4,uVar6,0);
  uVar13 = native_UIRect__get_isAnchored_c2d8cc(plVar17,0);
  if ((uVar13 & 1) == 0) {
    return;
  }
  lVar14 = native_UnityEngine_Transform__get_parent_765eb0(lVar14,0);
  if (plVar17[3] != 0) {
    uVar15 = *(undefined8 *)(plVar17[3] + 0x10);
    if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    fVar40 = fVar40 - fVar38 * (float)(int)uVar4;
    uVar13 = native_UnityEngine_Object__op_Implicit_8e1b98(uVar15,0);
    if ((uVar13 & 1) != 0) {
      if (plVar17[3] == 0) goto LAB_00807ccc;
      native_UIRect_AnchorPoint__SetHorizontal_559078(fVar40,plVar17[3],lVar14,0);
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
                  (fVar40 + (float)(int)uVar4,plVar17[4],lVar14,0);
      }
      if (plVar17[5] != 0) {
        uVar15 = *(undefined8 *)(plVar17[5] + 0x10);
        if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
           (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
          native_sub_4327ec();
        }
        fVar41 = fVar41 - fVar28 * (float)(int)uVar6;
        uVar13 = native_UnityEngine_Object__op_Implicit_8e1b98(uVar15,0);
        if ((uVar13 & 1) != 0) {
          if (plVar17[5] == 0) goto LAB_00807ccc;
          native_UIRect_AnchorPoint__SetVertical_5591e0(fVar41,plVar17[5],lVar14,0);
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
          lVar12 = plVar17[6];
          if (lVar12 != 0) {
            if ((bRam000000000133ea04 & 1) == 0) {
              native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0,lVar14,0);
              bRam000000000133ea04 = 1;
            }
            uVar15 = *(undefined8 *)(lVar12 + 0x20);
            if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
               (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
              native_sub_4327ec();
            }
            uVar13 = native_UnityEngine_Object__op_Implicit_8e1b98(uVar15,0);
            if ((uVar13 & 1) == 0) {
              if (*(long *)(lVar12 + 0x10) != 0) {
                uVar15 = native_UnityEngine_Transform__get_position_77169c
                                   (*(long *)(lVar12 + 0x10),0);
                if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
                   (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
                  native_sub_4327ec();
                }
                uVar13 = native_UnityEngine_Object__op_Inequality_8d76fc(lVar14,0,0);
                if ((uVar13 & 1) != 0) {
                  if (lVar14 == 0) goto LAB_00559338;
                  native_UnityEngine_Transform__InverseTransformPoint_7729a0
                            (uVar15,uVar27,uVar30,lVar14,0);
                }
LAB_00559308:
                uVar19 = native_UnityEngine_Mathf__FloorToInt_8e506c
                                   (((fVar41 + (float)(int)uVar6) - (float)uVar27) + 0.5,0);
                *(undefined4 *)(lVar12 + 0x1c) = uVar19;
                return;
              }
            }
            else {
              plVar17 = *(long **)(lVar12 + 0x20);
              if ((plVar17 != (long *)0x0) &&
                 (lVar14 = (**(code **)(*plVar17 + 0x208))
                                     (plVar17,lVar14,*(undefined8 *)(*plVar17 + 0x210)), lVar14 != 0
                 )) {
                if (*(uint *)(lVar14 + 0x18) < 4) {
                  uVar15 = native_sub_43283c();
                    /* WARNING: Subroutine does not return */
                  native_sub_4327dc(uVar15,0);
                }
                uVar27 = native_UnityEngine_Mathf__Lerp_8e5224
                                   (*(undefined4 *)(lVar14 + 0x48),*(undefined4 *)(lVar14 + 0x30),
                                    *(undefined4 *)(lVar12 + 0x18),0);
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



/* ContainerMatchingCodeUIController$$Update @ 0xdd7f04
 * void ContainerMatchingCodeUIController__Update (ContainerMatchingCodeUIController_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ContainerMatchingCodeUIController$$Update
   void ContainerMatchingCodeUIController__Update (ContainerMatchingCodeUIController_o* __this,
   const MethodInfo* method); */

long native_ContainerMatchingCodeUIController__Update_dd7f04(long param_1)

{
  float fVar1;
  ulong uVar2;
  undefined8 uVar3;
  long lVar4;
  char *pcVar5;
  undefined8 uVar6;
  float fVar7;
  
  if ((bRam0000000001346e61 & 1) == 0) {
    native_sub_43273c(&ContainerMatchingCodeUIController_TypeInfo_12d3f38);
    bRam0000000001346e61 = 1;
  }
  native_ContainerMatchingCodeUIController__UpdateAnnouncementLabel_dd7fac(param_1);
  if (((*(byte *)(_ContainerMatchingCodeUIController_TypeInfo_12d3f38 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_ContainerMatchingCodeUIController_TypeInfo_12d3f38 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  pcVar5 = (char *)(*(long *)(_ContainerMatchingCodeUIController_TypeInfo_12d3f38 + 0xb8) + 9);
  if (*pcVar5 != '\0') {
    if (((*(byte *)(_ContainerMatchingCodeUIController_TypeInfo_12d3f38 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_ContainerMatchingCodeUIController_TypeInfo_12d3f38 + 0xe0) == 0)) {
      native_sub_4327ec();
      pcVar5 = (char *)(*(long *)(_ContainerMatchingCodeUIController_TypeInfo_12d3f38 + 0xb8) + 9);
    }
    *pcVar5 = '\0';
    if ((bRam0000000001346e62 & 1) == 0) {
      native_sub_43273c(&
                        Method_ContainerMatchingCodeUIController__OnClickButtonClose_b__5_0___12e2ff8
                       );
      native_sub_43273c(&NGUITools_TypeInfo_12d53c8);
      native_sub_43273c(&DG_Tweening_TweenCallback_TypeInfo_12d6330);
      native_sub_43273c(&Method_DG_Tweening_TweenSettingsExtensions_OnComplete_Tweener____12e7540);
      native_sub_43273c(&Method_DG_Tweening_TweenSettingsExtensions_SetEase_Tweener____12e7548);
      bRam0000000001346e62 = 1;
    }
    uVar6 = *(undefined8 *)(param_1 + 0x28);
    if (((*(byte *)(_NGUITools_TypeInfo_12d53c8 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_NGUITools_TypeInfo_12d53c8 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    native_NGUITools__SetActive_731af8(uVar6,0,0);
    uVar6 = native_UnityEngine_Component__get_transform_8da62c(param_1,0);
    native_UnityEngine_Vector3__get_zero_776668(0);
    uVar6 = native_DG_Tweening_ShortcutExtensions__DOScale_cf2498(uVar6,0);
    uVar3 = native_sub_432808(_DG_Tweening_TweenCallback_TypeInfo_12d6330);
    native_DG_Tweening_TweenCallback___ctor_cf439c
              (uVar3,param_1,
               _Method_ContainerMatchingCodeUIController__OnClickButtonClose_b__5_0___12e2ff8,0);
    lVar4 = native_DG_Tweening_TweenSettingsExtensions__OnComplete_object__4aae88
                      (uVar6,uVar3,
                       _Method_DG_Tweening_TweenSettingsExtensions_OnComplete_Tweener____12e7540);
    uVar6 = _Method_DG_Tweening_TweenSettingsExtensions_SetEase_Tweener____12e7548;
    if ((lVar4 != 0) && (*(char *)(lVar4 + 0xe0) != '\0')) {
      *(undefined4 *)(lVar4 + 0xb4) = 0x1a;
      uVar2 = native_DG_Tweening_Core_Easing_EaseManager__IsFlashEase_cef1cc(0x1a,0,uVar6);
      if ((uVar2 & 1) != 0) {
        fVar7 = *(float *)(lVar4 + 0xc0);
        fVar1 = -fVar7;
        if (fVar7 != INFINITY) {
          fVar1 = fVar7;
        }
        *(float *)(lVar4 + 0xc0) = (float)(int)fVar1;
      }
      *(undefined8 *)(lVar4 + 0xb8) = 0;
      native_sub_4326e0((undefined8 *)(lVar4 + 0xb8),0);
    }
    return lVar4;
  }
  return _ContainerMatchingCodeUIController_TypeInfo_12d3f38;
}



/* ContainerMatchingCodeUIController$$OnClickButtonClose @ 0xdd8050
 * void ContainerMatchingCodeUIController__OnClickButtonClose (ContainerMatchingCodeUIController_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ContainerMatchingCodeUIController$$OnClickButtonClose
   void ContainerMatchingCodeUIController__OnClickButtonClose (ContainerMatchingCodeUIController_o*
   __this, const MethodInfo* method); */

long native_ContainerMatchingCodeUIController__OnClickButtonClose_dd8050(long param_1)

{
  float fVar1;
  ulong uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  float fVar6;
  
  if ((bRam0000000001346e62 & 1) == 0) {
    native_sub_43273c(&Method_ContainerMatchingCodeUIController__OnClickButtonClose_b__5_0___12e2ff8
                     );
    native_sub_43273c(&NGUITools_TypeInfo_12d53c8);
    native_sub_43273c(&DG_Tweening_TweenCallback_TypeInfo_12d6330);
    native_sub_43273c(&Method_DG_Tweening_TweenSettingsExtensions_OnComplete_Tweener____12e7540);
    native_sub_43273c(&Method_DG_Tweening_TweenSettingsExtensions_SetEase_Tweener____12e7548);
    bRam0000000001346e62 = 1;
  }
  uVar5 = *(undefined8 *)(param_1 + 0x28);
  if (((*(byte *)(_NGUITools_TypeInfo_12d53c8 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_NGUITools_TypeInfo_12d53c8 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  native_NGUITools__SetActive_731af8(uVar5,0,0);
  uVar5 = native_UnityEngine_Component__get_transform_8da62c(param_1,0);
  native_UnityEngine_Vector3__get_zero_776668(0);
  uVar5 = native_DG_Tweening_ShortcutExtensions__DOScale_cf2498(uVar5,0);
  uVar3 = native_sub_432808(_DG_Tweening_TweenCallback_TypeInfo_12d6330);
  native_DG_Tweening_TweenCallback___ctor_cf439c
            (uVar3,param_1,
             _Method_ContainerMatchingCodeUIController__OnClickButtonClose_b__5_0___12e2ff8,0);
  lVar4 = native_DG_Tweening_TweenSettingsExtensions__OnComplete_object__4aae88
                    (uVar5,uVar3,
                     _Method_DG_Tweening_TweenSettingsExtensions_OnComplete_Tweener____12e7540);
  uVar5 = _Method_DG_Tweening_TweenSettingsExtensions_SetEase_Tweener____12e7548;
  if ((lVar4 != 0) && (*(char *)(lVar4 + 0xe0) != '\0')) {
    *(undefined4 *)(lVar4 + 0xb4) = 0x1a;
    uVar2 = native_DG_Tweening_Core_Easing_EaseManager__IsFlashEase_cef1cc(0x1a,0,uVar5);
    if ((uVar2 & 1) != 0) {
      fVar6 = *(float *)(lVar4 + 0xc0);
      fVar1 = -fVar6;
      if (fVar6 != INFINITY) {
        fVar1 = fVar6;
      }
      *(float *)(lVar4 + 0xc0) = (float)(int)fVar1;
    }
    *(undefined8 *)(lVar4 + 0xb8) = 0;
    native_sub_4326e0((undefined8 *)(lVar4 + 0xb8),0);
  }
  return lVar4;
}



/* ContainerMatchingCodeUIController$$OnClickButtonSubmit @ 0xdd817c
 * void ContainerMatchingCodeUIController__OnClickButtonSubmit (ContainerMatchingCodeUIController_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ContainerMatchingCodeUIController$$OnClickButtonSubmit
   void ContainerMatchingCodeUIController__OnClickButtonSubmit (ContainerMatchingCodeUIController_o*
   __this, const MethodInfo* method); */

void native_ContainerMatchingCodeUIController__OnClickButtonSubmit_dd817c(void)

{
  undefined8 uVar1;
  
  if ((bRam0000000001346e63 & 1) == 0) {
    native_sub_43273c(&StringLiteral_https___m_tb_cn_h_gVEEg0h_tk_1qcxWxj0ima_12f4c00);
    bRam0000000001346e63 = 1;
  }
  uVar1 = _StringLiteral_https___m_tb_cn_h_gVEEg0h_tk_1qcxWxj0ima_12f4c00;
  if (pcRam00000000013408f0 == (code *)0x0) {
    pcRam00000000013408f0 = (code *)native_sub_4326f0(&UNK_00e2c527);
  }
                    /* WARNING: Could not recover jumptable at 0x008d620c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pcRam00000000013408f0)(uVar1);
  return;
}



/* ContainerMatchingCodeUIController$$UpdateAnnouncementLabel @ 0xdd7fac
 * void ContainerMatchingCodeUIController__UpdateAnnouncementLabel (ContainerMatchingCodeUIController_o* __this, const MethodInfo* method); */

/* WARNING: Removing unreachable block (ram,0x00432c1c) */
/* WARNING: Removing unreachable block (ram,0x003cc494) */
/* WARNING: Removing unreachable block (ram,0x003cc4b8) */
/* WARNING: Removing unreachable block (ram,0x003cc4d4) */
/* WARNING: Removing unreachable block (ram,0x003cc4dc) */
/* WARNING: Removing unreachable block (ram,0x003cc4f0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ContainerMatchingCodeUIController$$UpdateAnnouncementLabel
   void ContainerMatchingCodeUIController__UpdateAnnouncementLabel
   (ContainerMatchingCodeUIController_o* __this, const MethodInfo* method); */

void native_ContainerMatchingCodeUIController__UpdateAnnouncementLabel_dd7fac
               (undefined1 param_1 [16],float param_2,undefined8 param_3,float param_4,long param_5)

{
  int *piVar1;
  int *piVar2;
  undefined8 *puVar3;
  char cVar4;
  bool bVar5;
  int iVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  long *plVar10;
  long lVar11;
  long lVar12;
  int iVar13;
  float fVar14;
  ulong uVar15;
  float fVar17;
  undefined8 uVar16;
  ulong uVar18;
  undefined8 uVar19;
  float fVar20;
  ulong uVar21;
  float fVar22;
  float fVar23;
  undefined8 uVar24;
  
  if ((bRam0000000001346e64 & 1) == 0) {
    native_sub_43273c(&ContainerMatchingCodeUIController_TypeInfo_12d3f38);
    native_sub_43273c(&Method_UnityEngine_GameObject_GetComponent_UILabel____12e4ac0);
    bRam0000000001346e64 = 1;
  }
  if (*(long *)(param_5 + 0x30) != 0) {
    plVar10 = (long *)native_UnityEngine_GameObject__GetComponent_BE2_BlockSectionHeader_Custom__4a2214
                                (*(long *)(param_5 + 0x30),
                                 _Method_UnityEngine_GameObject_GetComponent_UILabel____12e4ac0);
    if (((*(byte *)(_ContainerMatchingCodeUIController_TypeInfo_12d3f38 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_ContainerMatchingCodeUIController_TypeInfo_12d3f38 + 0xe0) == 0)) {
      native_sub_4327ec(_ContainerMatchingCodeUIController_TypeInfo_12d3f38);
    }
    if (plVar10 != (long *)0x0) {
      lVar11 = **(long **)(_ContainerMatchingCodeUIController_TypeInfo_12d3f38 + 0xb8);
      if ((bRam0000000001342005 & 1) == 0) {
        native_sub_43273c(&StringLiteral__12eaac0,lVar11,0);
        bRam0000000001342005 = 1;
      }
      uVar9 = native_System_String__op_Equality_afc18c(plVar10[0x35],lVar11,0);
      if ((uVar9 & 1) == 0) {
        uVar9 = native_System_String__IsNullOrEmpty_b09430(lVar11,0);
        lVar12 = plVar10[0x35];
        if ((uVar9 & 1) == 0) {
          uVar9 = native_System_String__op_Inequality_afbbb4(lVar12,lVar11,0);
          if ((uVar9 & 1) == 0) {
            return;
          }
          plVar10[0x35] = lVar11;
        }
        else {
          uVar9 = native_System_String__IsNullOrEmpty_b09430(lVar12,0);
          lVar11 = _StringLiteral__12eaac0;
          if ((uVar9 & 1) != 0) {
            return;
          }
          plVar10[0x35] = _StringLiteral__12eaac0;
        }
        native_sub_4326e0(plVar10 + 0x35,lVar11);
        (**(code **)(*plVar10 + 0x378))(plVar10,*(undefined8 *)(*plVar10 + 0x380));
        native_UILabel__ProcessAndRequest_ae7fdc(plVar10);
        if ((char)plVar10[0x1b] != '\0') {
          if ((bRam000000000134145d & 1) == 0) {
            native_sub_43273c(&Method_UnityEngine_Component_GetComponent_BoxCollider2D____12e2998,0)
            ;
            native_sub_43273c(&Method_UnityEngine_Component_GetComponent_BoxCollider____12e2990);
            native_sub_43273c(&NGUITools_TypeInfo_12d53c8);
            native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
            bRam000000000134145d = 1;
          }
          lVar11 = native_UnityEngine_Component__GetComponent_ActiveAnimation__49daec
                             (plVar10,
                              _Method_UnityEngine_Component_GetComponent_BoxCollider____12e2990);
          if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
             (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
            native_sub_4327ec(_UnityEngine_Object_TypeInfo_12d54e0);
          }
          uVar9 = native_UnityEngine_Object__op_Inequality_8d76fc(lVar11,0,0);
          if ((uVar9 & 1) == 0) {
            lVar11 = native_UnityEngine_Component__GetComponent_ActiveAnimation__49daec
                               (plVar10,
                                _Method_UnityEngine_Component_GetComponent_BoxCollider2D____12e2998)
            ;
            fVar14 = (float)param_3;
            if (((*(byte *)(_NGUITools_TypeInfo_12d53c8 + 0x133) >> 2 & 1) != 0) &&
               (*(int *)(_NGUITools_TypeInfo_12d53c8 + 0xe0) == 0)) {
              native_sub_4327ec(_NGUITools_TypeInfo_12d53c8);
            }
            if ((bRam000000000133f58e & 1) == 0) {
              native_sub_43273c(&NGUITools_TypeInfo_12d53c8,lVar11,0);
              native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
              native_sub_43273c(&StringLiteral_last_change_12f5390);
              bRam000000000133f58e = 1;
            }
            if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
               (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
              native_sub_4327ec();
            }
            uVar9 = native_UnityEngine_Object__op_Inequality_8d76fc(lVar11,0,0);
            if ((uVar9 & 1) == 0) {
              return;
            }
            if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
               (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
              native_sub_4327ec();
            }
            uVar9 = native_UnityEngine_Object__op_Inequality_8d76fc(plVar10,0,0);
            if ((uVar9 & 1) == 0) {
              return;
            }
            if (plVar10 == (long *)0x0) {
LAB_0072ea2c:
                    /* WARNING: Subroutine does not return */
              native_sub_432810();
            }
            lVar12 = *plVar10;
            if ((((*(float *)((long)plVar10 + 0x104) == 0.0) && (*(float *)(plVar10 + 0x21) == 0.0))
                && (param_2 = *(float *)((long)plVar10 + 0x10c), param_2 == 1.0)) &&
               (param_2 = *(float *)(plVar10 + 0x22), param_2 == 1.0)) {
              lVar12 = (**(code **)(lVar12 + 0x1d8))(plVar10,*(undefined8 *)(lVar12 + 0x1e0));
              if (lVar12 == 0) goto LAB_0072ea2c;
              if ((*(uint *)(lVar12 + 0x18) == 0) || (*(uint *)(lVar12 + 0x18) < 3)) {
LAB_0072ea30:
                uVar19 = native_sub_43283c();
                    /* WARNING: Subroutine does not return */
                native_sub_4327dc(uVar19,0);
              }
              uVar19 = *(undefined8 *)(lVar12 + 0x20);
              uVar24 = *(undefined8 *)(lVar12 + 0x38);
              fVar14 = (float)native_UnityEngine_Mathf__Clamp01_8d9d9c(0x3f000000,0);
              if (*(uint *)(lVar12 + 0x18) < 3) goto LAB_0072ea30;
              if (lVar11 == 0) goto LAB_0072ea2c;
              uVar16 = *(undefined8 *)(lVar12 + 0x38);
              fVar22 = (float)uVar19;
              fVar17 = (float)((ulong)uVar19 >> 0x20);
              fVar22 = fVar22 + ((float)uVar24 - fVar22) * fVar14;
              fVar17 = fVar17 + ((float)((ulong)uVar24 >> 0x20) - fVar17) * fVar14;
              uVar19 = CONCAT44(fVar17,fVar22);
              fVar20 = (float)uVar16 - (float)*(undefined8 *)(lVar12 + 0x20);
              param_4 = (float)((ulong)uVar16 >> 0x20) -
                        (float)((ulong)*(undefined8 *)(lVar12 + 0x20) >> 0x20);
              uVar9 = CONCAT44(param_4,fVar20);
              fVar14 = (float)native_UnityEngine_Collider2D__get_offset_db8b24(lVar11,0);
              fVar22 = fVar22 - fVar14;
              fVar14 = fVar17 - (float)uVar16;
              if ((fVar22 * fVar22 + fVar14 * fVar14 < 9.9999994e-11) &&
                 (uVar24 = uVar19,
                 fVar14 = (float)native_UnityEngine_BoxCollider2D__get_size_db8988(lVar11,0),
                 fVar20 = fVar20 - fVar14, fVar14 = param_4 - (float)uVar24,
                 fVar20 * fVar20 + fVar14 * fVar14 < 9.9999994e-11)) {
                return;
              }
              native_UnityEngine_Collider2D__set_offset_db8bcc(uVar19,fVar17,lVar11,0);
            }
            else {
              fVar22 = (float)(**(code **)(lVar12 + 0x2f8))(plVar10,*(undefined8 *)(lVar12 + 0x300))
              ;
              if (lVar11 == 0) goto LAB_0072ea2c;
              uVar9 = (ulong)(uint)(fVar14 - fVar22);
              fVar23 = (fVar22 + fVar14) * 0.5;
              fVar17 = (param_2 + param_4) * 0.5;
              param_4 = param_4 - param_2;
              fVar20 = (float)native_UnityEngine_Collider2D__get_offset_db8b24(lVar11,0);
              fVar20 = fVar23 - fVar20;
              param_2 = fVar17 - param_2;
              param_2 = param_2 * param_2;
              if ((fVar20 * fVar20 + param_2 < 9.9999994e-11) &&
                 (fVar20 = (float)native_UnityEngine_BoxCollider2D__get_size_db8988(lVar11,0),
                 fVar20 = (fVar14 - fVar22) - fVar20,
                 fVar20 * fVar20 + (param_4 - param_2) * (param_4 - param_2) < 9.9999994e-11)) {
                return;
              }
              native_UnityEngine_Collider2D__set_offset_db8bcc(fVar23,fVar17,lVar11,0);
            }
            native_UnityEngine_BoxCollider2D__set_size_db8a30(uVar9,param_4,lVar11,0);
            if ((*(byte *)(_NGUITools_TypeInfo_12d53c8 + 0x133) >> 2 & 1) == 0) {
              return;
            }
            if (*(int *)(_NGUITools_TypeInfo_12d53c8 + 0xe0) != 0) {
              return;
            }
          }
          else {
            if (((*(byte *)(_NGUITools_TypeInfo_12d53c8 + 0x133) >> 2 & 1) != 0) &&
               (*(int *)(_NGUITools_TypeInfo_12d53c8 + 0xe0) == 0)) {
              native_sub_4327ec();
            }
            if ((bRam000000000133f58d & 1) == 0) {
              native_sub_43273c(&NGUITools_TypeInfo_12d53c8,lVar11,0);
              native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
              native_sub_43273c(&StringLiteral_last_change_12f5390);
              bRam000000000133f58d = 1;
            }
            if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
               (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
              native_sub_4327ec();
            }
            uVar9 = native_UnityEngine_Object__op_Inequality_8d76fc(lVar11,0,0);
            if ((uVar9 & 1) == 0) {
              return;
            }
            if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
               (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
              native_sub_4327ec();
            }
            uVar9 = native_UnityEngine_Object__op_Inequality_8d76fc(plVar10,0,0);
            if ((uVar9 & 1) == 0) {
              return;
            }
            if (plVar10 == (long *)0x0) {
LAB_0072e730:
                    /* WARNING: Subroutine does not return */
              native_sub_432810();
            }
            lVar12 = *plVar10;
            if ((((*(float *)((long)plVar10 + 0x104) == 0.0) && (*(float *)(plVar10 + 0x21) == 0.0))
                && (param_2 = *(float *)((long)plVar10 + 0x10c), param_2 == 1.0)) &&
               (param_2 = *(float *)(plVar10 + 0x22), param_2 == 1.0)) {
              lVar12 = (**(code **)(lVar12 + 0x1d8))(plVar10,*(undefined8 *)(lVar12 + 0x1e0));
              if (lVar12 == 0) goto LAB_0072e730;
              if ((*(uint *)(lVar12 + 0x18) == 0) || (*(uint *)(lVar12 + 0x18) < 3)) {
LAB_0072e734:
                uVar19 = native_sub_43283c();
                    /* WARNING: Subroutine does not return */
                native_sub_4327dc(uVar19,0);
              }
              uVar19 = *(undefined8 *)(lVar12 + 0x20);
              fVar20 = *(float *)(lVar12 + 0x28);
              uVar24 = *(undefined8 *)(lVar12 + 0x38);
              fVar22 = *(float *)(lVar12 + 0x40);
              fVar14 = (float)native_UnityEngine_Mathf__Clamp01_8d9d9c(0x3f000000,0);
              if (*(uint *)(lVar12 + 0x18) < 3) goto LAB_0072e734;
              if (lVar11 == 0) goto LAB_0072e730;
              fVar23 = (float)uVar19;
              fVar17 = (float)((ulong)uVar19 >> 0x20);
              fVar22 = fVar22 - fVar20;
              uVar7 = (ulong)(uint)fVar22;
              fVar17 = fVar17 + ((float)((ulong)uVar24 >> 0x20) - fVar17) * fVar14;
              uVar16 = CONCAT44(fVar17,fVar23 + ((float)uVar24 - fVar23) * fVar14);
              uVar21 = (ulong)(uint)(fVar20 + fVar22 * fVar14);
              fVar22 = (float)((ulong)*(undefined8 *)(lVar12 + 0x38) >> 0x20) -
                       (float)((ulong)*(undefined8 *)(lVar12 + 0x20) >> 0x20);
              uVar15 = CONCAT44(fVar22,(float)*(undefined8 *)(lVar12 + 0x38) -
                                       (float)*(undefined8 *)(lVar12 + 0x20));
              fVar14 = *(float *)(lVar12 + 0x40) - *(float *)(lVar12 + 0x28);
              uVar19 = uVar16;
              uVar24 = native_UnityEngine_BoxCollider__get_center_dba95c(lVar11,0);
              uVar9 = (ulong)(uint)fVar17;
              uVar8 = uVar9;
              uVar18 = uVar21;
              uVar7 = native_UnityEngine_Vector3__op_Inequality_776c48
                                (uVar16,uVar9,uVar21,uVar24,uVar19,uVar7,0);
              if ((uVar7 & 1) == 0) {
                uVar19 = native_UnityEngine_BoxCollider__get_size_dbaab4(lVar11,0);
                uVar8 = native_UnityEngine_Vector3__op_Inequality_776c48
                                  (uVar15,fVar22,fVar14,uVar19,uVar8,uVar18,0);
                if ((uVar8 & 1) == 0) {
                  return;
                }
              }
              native_UnityEngine_BoxCollider__set_center_dbaa0c(uVar16,uVar9,uVar21,lVar11,0);
            }
            else {
              fVar14 = (float)(**(code **)(lVar12 + 0x2f8))(plVar10,*(undefined8 *)(lVar12 + 0x300))
              ;
              if (lVar11 == 0) goto LAB_0072e730;
              uVar15 = (ulong)(uint)((float)param_3 - fVar14);
              fVar22 = param_4 - param_2;
              uVar8 = (ulong)(uint)(param_2 + param_4);
              uVar18 = (ulong)(uint)((param_2 + param_4) * 0.5);
              fVar20 = (fVar14 + (float)param_3) * 0.5;
              uVar19 = native_UnityEngine_BoxCollider__get_center_dba95c(lVar11,0);
              uVar24 = 0;
              fVar14 = 0.0;
              uVar9 = uVar18;
              uVar8 = native_UnityEngine_Vector3__op_Inequality_776c48
                                (fVar20,uVar18,0,uVar19,uVar8,param_3,0);
              if ((uVar8 & 1) == 0) {
                uVar19 = native_UnityEngine_BoxCollider__get_size_dbaab4(lVar11,0);
                uVar9 = native_UnityEngine_Vector3__op_Inequality_776c48
                                  (uVar15,fVar22,0,uVar19,uVar9,uVar24,0);
                if ((uVar9 & 1) == 0) {
                  return;
                }
              }
              native_UnityEngine_BoxCollider__set_center_dbaa0c(fVar20,uVar18,0,lVar11,0);
            }
            native_UnityEngine_BoxCollider__set_size_dbab64(uVar15,fVar22,fVar14,lVar11,0);
            if ((*(byte *)(_NGUITools_TypeInfo_12d53c8 + 0x133) >> 2 & 1) == 0) {
              return;
            }
            if (*(int *)(_NGUITools_TypeInfo_12d53c8 + 0xe0) != 0) {
              return;
            }
          }
          lVar11 = _NGUITools_TypeInfo_12d53c8;
          if ((*(byte *)(_NGUITools_TypeInfo_12d53c8 + 0x133) >> 2 & 1) == 0) {
            return;
          }
          piVar1 = (int *)(_NGUITools_TypeInfo_12d53c8 + 0xe0);
          while (*piVar1 == 1) {
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar5) {
              *piVar1 = 1;
              cVar4 = ExclusiveMonitorsStatus();
            }
            if (cVar4 == '\0') {
              DataMemoryBarrier(2,3);
              return;
            }
          }
          ClearExclusiveLocal();
          DataMemoryBarrier(2,3);
          lVar12 = native_sub_432c38();
          if (lVar12 == lRam00000000013451d0) {
            iRam00000000013451d8 = iRam00000000013451d8 + 1;
          }
          else {
            iVar13 = 0;
            do {
              iVar6 = iRam0000000001345190;
              if (iRam0000000001345190 == iVar13) {
                cVar4 = '\x01';
                bVar5 = (bool)ExclusiveMonitorPass(0x1345190,0x10);
                if (bVar5) {
                  cVar4 = ExclusiveMonitorsStatus();
                  iRam0000000001345190 = iVar13 + 1;
                }
                if (cVar4 != '\0') goto code_r0x003cc248;
                bVar5 = true;
              }
              else {
                ClearExclusiveLocal();
code_r0x003cc248:
                bVar5 = false;
              }
            } while ((iVar6 != 2) && (iVar13 = iVar6, !bVar5));
            while (iVar6 != 0) {
              native_sub_432bb4(0x1345190,2,0xffffffff);
              do {
                iVar6 = iRam0000000001345190;
                cVar4 = '\x01';
                bVar5 = (bool)ExclusiveMonitorPass(0x1345190,0x10);
                if (bVar5) {
                  iRam0000000001345190 = 2;
                  cVar4 = ExclusiveMonitorsStatus();
                }
              } while (cVar4 != '\0');
            }
            iRam00000000013451d8 = 1;
            lRam00000000013451d0 = lVar12;
          }
          while (*piVar1 == 1) {
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar5) {
              *piVar1 = 1;
              cVar4 = ExclusiveMonitorsStatus();
            }
            if (cVar4 == '\0') {
              DataMemoryBarrier(2,3);
              if (iRam00000000013451d8 < 1) {
                return;
              }
              if (iRam00000000013451d8 + -1 != 0) {
                iRam00000000013451d8 = iRam00000000013451d8 + -1;
                return;
              }
              lRam00000000013451d0 = 0;
              iRam00000000013451d8 = 0;
              do {
                iVar13 = iRam0000000001345190;
                cVar4 = '\x01';
                bVar5 = (bool)ExclusiveMonitorPass(0x1345190,0x10);
                if (bVar5) {
                  iRam0000000001345190 = 0;
                  cVar4 = ExclusiveMonitorsStatus();
                }
              } while (cVar4 != '\0');
              if (iVar13 != 2) {
                lRam00000000013451d0 = 0;
                iRam00000000013451d8 = 0;
                return;
              }
              (*(code *)&DAT_0155b260)(0x62,0x1345190,0x81,1,0,0,0);
              return;
            }
          }
          ClearExclusiveLocal();
          DataMemoryBarrier(2,3);
          piVar2 = (int *)(lVar11 + 0xdc);
          do {
            if (*piVar2 != 1) {
              ClearExclusiveLocal();
              DataMemoryBarrier(2,3);
              puVar3 = (undefined8 *)(lVar11 + 0xe8);
              uVar19 = native_sub_3aad3c();
              do {
                cVar4 = '\x01';
                bVar5 = (bool)ExclusiveMonitorPass(puVar3,0x10);
                if (bVar5) {
                  *puVar3 = uVar19;
                  cVar4 = ExclusiveMonitorsStatus();
                }
              } while (cVar4 != '\0');
              DataMemoryBarrier(2,3);
              do {
                cVar4 = '\x01';
                bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
                if (bVar5) {
                  *piVar2 = 1;
                  cVar4 = ExclusiveMonitorsStatus();
                }
              } while (cVar4 != '\0');
              DataMemoryBarrier(2,3);
              iVar13 = iRam00000000013451d8 + -1;
              if ((0 < iRam00000000013451d8) && (iRam00000000013451d8 = iVar13, iVar13 == 0)) {
                lRam00000000013451d0 = 0;
                iRam00000000013451d8 = 0;
                do {
                  iVar13 = iRam0000000001345190;
                  cVar4 = '\x01';
                  bVar5 = (bool)ExclusiveMonitorPass(0x1345190,0x10);
                  if (bVar5) {
                    iRam0000000001345190 = 0;
                    cVar4 = ExclusiveMonitorsStatus();
                  }
                } while (cVar4 != '\0');
                if (iVar13 == 2) {
                  native_sub_432c0c(0x1345190,1,0);
                }
              }
              if (((*(byte *)(lVar11 + 0x133) >> 2 & 1) != 0) &&
                 (lVar11 = native_sub_3c573c(lVar11,&UNK_00edd9af,0xffffffff,0x800), lVar11 != 0)) {
                native_sub_3d704c(lVar11,0,0,&stack0xffffffffffffffb8);
              }
              do {
                cVar4 = '\x01';
                bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                if (bVar5) {
                  *piVar1 = 1;
                  cVar4 = ExclusiveMonitorsStatus();
                }
              } while (cVar4 != '\0');
              DataMemoryBarrier(2,3);
              do {
                cVar4 = '\x01';
                bVar5 = (bool)ExclusiveMonitorPass(puVar3,0x10);
                if (bVar5) {
                  *puVar3 = 0;
                  cVar4 = ExclusiveMonitorsStatus();
                }
              } while (cVar4 != '\0');
              DataMemoryBarrier(2,3);
              return;
            }
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
            if (bVar5) {
              *piVar2 = 1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          DataMemoryBarrier(2,3);
          iVar13 = iRam00000000013451d8 + -1;
          if ((0 < iRam00000000013451d8) && (iRam00000000013451d8 = iVar13, iVar13 == 0)) {
            lRam00000000013451d0 = 0;
            iRam00000000013451d8 = 0;
            do {
              iVar13 = iRam0000000001345190;
              cVar4 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(0x1345190,0x10);
              if (bVar5) {
                iRam0000000001345190 = 0;
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
            if (iVar13 == 2) {
              native_sub_432c0c(0x1345190,1,0);
            }
          }
          lVar12 = native_sub_3aad3c();
          plVar10 = (long *)(lVar11 + 0xe8);
          do {
            lVar11 = *plVar10;
            if (lVar11 != lVar12) {
              ClearExclusiveLocal();
              break;
            }
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(plVar10,0x10);
            if (bVar5) {
              *plVar10 = lVar12;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          DataMemoryBarrier(2,3);
          if (lVar11 != lVar12) {
            do {
              iVar13 = *piVar1;
              if (iVar13 != 1) {
                ClearExclusiveLocal();
                break;
              }
              cVar4 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
              if (bVar5) {
                *piVar1 = 1;
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
            DataMemoryBarrier(2,3);
            while (iVar13 == 0) {
              native_sub_3a30dc(1,0);
              do {
                iVar13 = *piVar1;
                if (iVar13 != 1) {
                  ClearExclusiveLocal();
                  break;
                }
                cVar4 = '\x01';
                bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                if (bVar5) {
                  *piVar1 = 1;
                  cVar4 = ExclusiveMonitorsStatus();
                }
              } while (cVar4 != '\0');
              DataMemoryBarrier(2,3);
            }
          }
          return;
        }
      }
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* ContainerMatchingCodeUIController$$showMsg @ 0xdd81c4
 * void ContainerMatchingCodeUIController__showMsg (System_String_o* msg, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ContainerMatchingCodeUIController$$showMsg
   void ContainerMatchingCodeUIController__showMsg (System_String_o* msg, const MethodInfo* method);
    */

void native_ContainerMatchingCodeUIController__showMsg_dd81c4(undefined8 param_1)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  
  if ((bRam0000000001346e65 & 1) == 0) {
    native_sub_43273c(&ContainerMatchingCodeUIController_TypeInfo_12d3f38);
    bRam0000000001346e65 = 1;
  }
  if (((*(byte *)(_ContainerMatchingCodeUIController_TypeInfo_12d3f38 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_ContainerMatchingCodeUIController_TypeInfo_12d3f38 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  puVar4 = *(undefined8 **)(_ContainerMatchingCodeUIController_TypeInfo_12d3f38 + 0xb8);
  *puVar4 = param_1;
  if (iRam0000000001345318 != 0) {
    puVar1 = (ulong *)(((ulong)puVar4 >> 0x12 & 0x7fff) * 8 + 0x138ecd8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar3) {
        *puVar1 = *puVar1 | 1L << ((ulong)puVar4 >> 0xc & 0x3f);
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  return;
}



/* ContainerMatchingCodeUIController$$Awake @ 0xdd8230
 * void ContainerMatchingCodeUIController__Awake (ContainerMatchingCodeUIController_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ContainerMatchingCodeUIController$$Awake
   void ContainerMatchingCodeUIController__Awake (ContainerMatchingCodeUIController_o* __this, const
   MethodInfo* method); */

void native_ContainerMatchingCodeUIController__Awake_dd8230(long param_1)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  
  if ((bRam0000000001346e66 & 1) == 0) {
    native_sub_43273c(&StringLiteral_ButtonClose_12ec898);
    native_sub_43273c(&StringLiteral_ContainerBackground_12ed1f8);
    native_sub_43273c(&StringLiteral_LabelContent_12ef508);
    native_sub_43273c(&StringLiteral_ContainerBj_12ed210);
    bRam0000000001346e66 = 1;
  }
  lVar4 = native_UnityEngine_GameObject__Find_8dead0(_StringLiteral_ButtonClose_12ec898,0);
  if (lVar4 != 0) {
    uVar5 = native_UnityEngine_GameObject__get_gameObject_8debb8(lVar4,0);
    *(undefined8 *)(param_1 + 0x18) = uVar5;
    native_sub_4326e0();
    lVar4 = native_UnityEngine_GameObject__Find_8dead0(_StringLiteral_ContainerBackground_12ed1f8,0)
    ;
    if (lVar4 != 0) {
      uVar5 = native_UnityEngine_GameObject__get_gameObject_8debb8(lVar4,0);
      *(undefined8 *)(param_1 + 0x20) = uVar5;
      native_sub_4326e0();
      lVar4 = native_UnityEngine_GameObject__Find_8dead0(_StringLiteral_ContainerBj_12ed210,0);
      if (lVar4 != 0) {
        uVar5 = native_UnityEngine_GameObject__get_gameObject_8debb8(lVar4,0);
        *(undefined8 *)(param_1 + 0x28) = uVar5;
        native_sub_4326e0();
        lVar4 = native_UnityEngine_GameObject__Find_8dead0(_StringLiteral_LabelContent_12ef508,0);
        if (lVar4 != 0) {
          uVar5 = native_UnityEngine_GameObject__get_gameObject_8debb8(lVar4,0);
          puVar6 = (undefined8 *)(param_1 + 0x30);
          *puVar6 = uVar5;
          if (iRam0000000001345318 != 0) {
            puVar1 = (ulong *)(((ulong)puVar6 >> 0x12 & 0x7fff) * 8 + 0x138ecd8);
            do {
              cVar2 = '\x01';
              bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
              if (bVar3) {
                *puVar1 = *puVar1 | 1L << ((ulong)puVar6 >> 0xc & 0x3f);
                cVar2 = ExclusiveMonitorsStatus();
              }
            } while (cVar2 != '\0');
          }
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* ContainerMatchingCodeUIController$$.ctor @ 0xdd8350
 * void ContainerMatchingCodeUIController___ctor (ContainerMatchingCodeUIController_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ContainerMatchingCodeUIController$$.ctor
   void ContainerMatchingCodeUIController___ctor (ContainerMatchingCodeUIController_o* __this, const
   MethodInfo* method); */

undefined1  [16] native_ContainerMatchingCodeUIController___ctor_dd8350(ulong param_1)

{
  undefined1 auVar1 [16];
  
  if ((bRam0000000001340ae0 & 1) == 0) {
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0,0);
    bRam0000000001340ae0 = 1;
  }
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  auVar1._8_8_ = 0;
  auVar1._0_8_ = param_1;
  return auVar1;
}



/* ContainerMatchingCodeUIController$$.cctor @ 0xdd8358
 * void ContainerMatchingCodeUIController___cctor (const MethodInfo* method); */

/* ContainerMatchingCodeUIController$$.cctor
   void ContainerMatchingCodeUIController___cctor (const MethodInfo* method); */

void native_ContainerMatchingCodeUIController___cctor_dd8358(void)

{
  return;
}



/* ContainerMatchingCodeUIController$$<OnClickButtonClose>b__5_0 @ 0xdd835c
 * void ContainerMatchingCodeUIController___OnClickButtonClose_b__5_0 (ContainerMatchingCodeUIController_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ContainerMatchingCodeUIController$$<OnClickButtonClose>b__5_0
   void ContainerMatchingCodeUIController___OnClickButtonClose_b__5_0
   (ContainerMatchingCodeUIController_o* __this, const MethodInfo* method); */

void native_ContainerMatchingCodeUIController___OnClickButtonClose_b__5_0_dd835c(undefined8 param_1)

{
  undefined8 uVar1;
  
  if ((bRam00000000013418bf & 1) == 0) {
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0,0);
    bRam00000000013418bf = 1;
  }
  uVar1 = native_UnityEngine_Component__get_gameObject_8da66c(param_1,0);
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec(_UnityEngine_Object_TypeInfo_12d54e0);
  }
  if ((bRam0000000001341048 & 1) == 0) {
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0,0);
    bRam0000000001341048 = 1;
  }
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  if (pcRam0000000001341040 == (code *)0x0) {
    pcRam0000000001341040 = (code *)native_sub_4326f0(&UNK_00e2f7cf);
  }
                    /* WARNING: Could not recover jumptable at 0x008ea5f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pcRam0000000001341040)(0,uVar1);
  return;
}


