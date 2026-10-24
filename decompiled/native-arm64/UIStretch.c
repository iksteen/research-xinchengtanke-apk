/* ARM64 IL2CPP native pseudocode from Ghidra.
 * Recovered implementation, not original C# source.
 * Function boundaries follow the IL2CPP method address table. */


/* UIStretch$$Awake @ 0x940cc4
 * void UIStretch__Awake (UIStretch_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIStretch$$Awake
   void UIStretch__Awake (UIStretch_o* __this, const MethodInfo* method); */

void native_UIStretch__Awake_940cc4
               (undefined1 param_1 [16],ulong param_2,ulong param_3,ulong param_4,long param_5)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  long *plVar8;
  long lVar9;
  ulong uVar10;
  undefined8 *puVar11;
  ulong uVar12;
  long *plVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  long lVar16;
  long lVar17;
  undefined4 uVar18;
  float fVar19;
  ulong uVar20;
  ulong uVar21;
  ulong uVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  ulong uVar26;
  float fVar27;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  
  if ((bRam000000000134140a & 1) == 0) {
    native_sub_43273c(&Method_UnityEngine_Component_GetComponent_Animation____12e2908);
    native_sub_43273c(&Method_UnityEngine_Component_GetComponent_UIPanel____12e2be0);
    native_sub_43273c(&Method_UnityEngine_Component_GetComponent_UISprite____12e2c18);
    native_sub_43273c(&Method_UnityEngine_Component_GetComponent_UIWidget____12e2c30);
    native_sub_43273c(&UICamera_OnScreenResize_TypeInfo_12d7a30);
    native_sub_43273c(&UICamera_TypeInfo_12d6410);
    native_sub_43273c(&Method_UIStretch_ScreenSizeChanged___12e78d8);
    bRam000000000134140a = 1;
  }
  uVar7 = native_UnityEngine_Component__GetComponent_ActiveAnimation__49daec
                    (param_5,_Method_UnityEngine_Component_GetComponent_Animation____12e2908);
  *(undefined8 *)(param_5 + 0x78) = uVar7;
  native_sub_4326e0(param_5 + 0x78);
  *(undefined8 *)(param_5 + 0x80) = 0;
  *(undefined8 *)(param_5 + 0x88) = 0;
  uVar7 = native_UnityEngine_Component__get_transform_8da62c(param_5,0);
  *(undefined8 *)(param_5 + 0x50) = uVar7;
  native_sub_4326e0(param_5 + 0x50);
  uVar7 = native_UnityEngine_Component__GetComponent_ActiveAnimation__49daec
                    (param_5,_Method_UnityEngine_Component_GetComponent_UIWidget____12e2c30);
  *(undefined8 *)(param_5 + 0x58) = uVar7;
  native_sub_4326e0(param_5 + 0x58);
  uVar7 = native_UnityEngine_Component__GetComponent_ActiveAnimation__49daec
                    (param_5,_Method_UnityEngine_Component_GetComponent_UISprite____12e2c18);
  *(undefined8 *)(param_5 + 0x60) = uVar7;
  native_sub_4326e0(param_5 + 0x60);
  uVar7 = native_UnityEngine_Component__GetComponent_ActiveAnimation__49daec
                    (param_5,_Method_UnityEngine_Component_GetComponent_UIPanel____12e2be0);
  *(undefined8 *)(param_5 + 0x68) = uVar7;
  native_sub_4326e0(param_5 + 0x68);
  if (((*(byte *)(_UICamera_TypeInfo_12d6410 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar14 = *(undefined8 *)(*(long *)(_UICamera_TypeInfo_12d6410 + 0xb8) + 0x48);
  uVar7 = native_sub_432808(_UICamera_OnScreenResize_TypeInfo_12d7a30);
  native_UICamera_OnScreenResize___ctor_553168
            (uVar7,param_5,_Method_UIStretch_ScreenSizeChanged___12e78d8,0);
  plVar8 = (long *)native_System_Delegate__Combine_a6cf00(uVar14,uVar7,0);
  if ((plVar8 == (long *)0x0) || (*plVar8 == _UICamera_OnScreenResize_TypeInfo_12d7a30)) {
    plVar13 = (long *)(*(long *)(_UICamera_TypeInfo_12d6410 + 0xb8) + 0x48);
    *plVar13 = (long)plVar8;
native_sub_41086c:
    if (iRam0000000001345318 != 0) {
      puVar1 = (ulong *)(((ulong)plVar13 >> 0x12 & 0x7fff) * 8 + 0x138ecd8);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = *puVar1 | 1L << ((ulong)plVar13 >> 0xc & 0x3f);
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    return;
  }
  uVar7 = native_sub_432b04(plVar8);
  if ((bRam000000000134140b & 1) == 0) {
    native_sub_43273c(&UICamera_OnScreenResize_TypeInfo_12d7a30);
    native_sub_43273c(&UICamera_TypeInfo_12d6410);
    native_sub_43273c(&Method_UIStretch_ScreenSizeChanged___12e78d8);
    bRam000000000134140b = 1;
  }
  if (((*(byte *)(_UICamera_TypeInfo_12d6410 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar15 = *(undefined8 *)(*(long *)(_UICamera_TypeInfo_12d6410 + 0xb8) + 0x48);
  uVar14 = native_sub_432808(_UICamera_OnScreenResize_TypeInfo_12d7a30);
  native_UICamera_OnScreenResize___ctor_553168
            (uVar14,uVar7,_Method_UIStretch_ScreenSizeChanged___12e78d8,0);
  plVar8 = (long *)native_System_Delegate__Remove_a6d1c0(uVar15,uVar14,0);
  if ((plVar8 == (long *)0x0) || (*plVar8 == _UICamera_OnScreenResize_TypeInfo_12d7a30)) {
    plVar13 = (long *)(*(long *)(_UICamera_TypeInfo_12d6410 + 0xb8) + 0x48);
    *plVar13 = (long)plVar8;
    goto native_sub_41086c;
  }
  lVar9 = native_sub_432b04(plVar8);
  if ((*(char *)(lVar9 + 0x90) == '\0') || (*(char *)(lVar9 + 0x2c) == '\0')) {
    return;
  }
  if ((bRam000000000134140d & 1) == 0) {
    native_sub_43273c(&Method_UnityEngine_GameObject_GetComponent_UIPanel____12e4ac8);
    native_sub_43273c(&Method_UnityEngine_GameObject_GetComponent_UIWidget____12e4ae8);
    native_sub_43273c(&NGUIMath_TypeInfo_12d53b8);
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    bRam000000000134140d = 1;
  }
  uStack_100 = 0;
  uStack_f8 = 0;
  uStack_f0 = 0;
  uStack_120 = 0;
  uStack_118 = 0;
  uStack_110 = 0;
  uStack_140 = 0;
  uStack_138 = 0;
  uStack_130 = 0;
  uVar7 = *(undefined8 *)(lVar9 + 0x78);
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar10 = native_UnityEngine_Object__op_Inequality_8d76fc(uVar7,0,0);
  if ((uVar10 & 1) != 0) {
    if (*(long *)(lVar9 + 0x78) == 0) goto LAB_00941994;
    uVar10 = native_UnityEngine_Animation__get_isPlaying_db16b0(*(long *)(lVar9 + 0x78),0);
    if ((uVar10 & 1) != 0) {
      return;
    }
  }
  if (*(int *)(lVar9 + 0x28) == 0) {
    return;
  }
  uVar7 = *(undefined8 *)(lVar9 + 0x20);
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar10 = native_UnityEngine_Object__op_Equality_8e9a3c(uVar7,0,0);
  lVar16 = 0;
  if ((uVar10 & 1) == 0) {
    if (*(long *)(lVar9 + 0x20) == 0) goto LAB_00941994;
    lVar16 = native_UnityEngine_GameObject__GetComponent_BE2_BlockSectionHeader_Custom__4a2214
                       (*(long *)(lVar9 + 0x20),
                        _Method_UnityEngine_GameObject_GetComponent_UIWidget____12e4ae8);
  }
  uVar7 = *(undefined8 *)(lVar9 + 0x20);
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar10 = native_UnityEngine_Object__op_Equality_8e9a3c(uVar7,0,0);
  if ((uVar10 & 1) == 0) {
LAB_00941144:
    if (*(long *)(lVar9 + 0x20) == 0) goto LAB_00941994;
    lVar17 = native_UnityEngine_GameObject__GetComponent_BE2_BlockSectionHeader_Custom__4a2214
                       (*(long *)(lVar9 + 0x20),
                        _Method_UnityEngine_GameObject_GetComponent_UIPanel____12e4ac8);
  }
  else {
    if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    uVar10 = native_UnityEngine_Object__op_Equality_8e9a3c(lVar16,0,0);
    lVar17 = 0;
    if ((uVar10 & 1) == 0) goto LAB_00941144;
  }
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar10 = native_UnityEngine_Object__op_Inequality_8d76fc(lVar16,0,0);
  if ((uVar10 & 1) == 0) {
    uVar10 = param_2;
    if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
      native_sub_4327ec();
      uVar10 = param_2;
    }
    uVar20 = native_UnityEngine_Object__op_Inequality_8d76fc(lVar17,0,0);
    if ((uVar20 & 1) != 0) {
      if (lVar17 == 0) goto LAB_00941994;
      if (*(int *)(lVar17 + 0x140) != 0) {
        param_2 = param_4;
        fVar24 = (float)native_UIPanel__get_finalClipRegion_af03c8(lVar17,0);
        lVar16 = lVar9 + 0x80;
        fVar19 = (float)param_3 * 0.5;
        uVar21 = (ulong)(uint)fVar19;
        uVar20 = param_3;
        native_UnityEngine_Rect__set_x_7635fc(fVar24 - fVar19,lVar16,0);
        native_UnityEngine_Rect__set_y_76360c((float)uVar10 - (float)param_2 * 0.5,lVar16,0);
        native_UnityEngine_Rect__set_width_763684(param_3,lVar16,0);
        uVar10 = uVar21;
        param_3 = uVar20;
        goto LAB_00941528;
      }
      uVar7 = *(undefined8 *)(lVar9 + 0x70);
      if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
        native_sub_4327ec();
      }
      uVar20 = native_UnityEngine_Object__op_Inequality_8d76fc(uVar7,0,0);
      if ((uVar20 & 1) == 0) {
        fVar24 = 0.5;
      }
      else {
        if (*(long *)(lVar9 + 0x70) == 0) goto LAB_00941994;
        iVar5 = native_UIRoot__get_activeHeight_c2f58c(*(long *)(lVar9 + 0x70),0);
        iVar4 = native_UnityEngine_Screen__get_height_76a618(0);
        uVar10 = 0x3f000000;
        fVar24 = ((float)iVar5 / (float)iVar4) * 0.5;
      }
      lVar16 = lVar9 + 0x80;
      iVar5 = native_UnityEngine_Screen__get_width_76a5e4(0);
      native_UnityEngine_Rect__set_xMin_7636a4(fVar24 * (float)-iVar5,lVar16,0);
      iVar5 = native_UnityEngine_Screen__get_height_76a618(0);
      native_UnityEngine_Rect__set_yMin_7636c0(fVar24 * (float)-iVar5,lVar16,0);
      fVar24 = (float)native_UnityEngine_Rect__get_xMin_76363c(lVar16,0);
      native_UnityEngine_Rect__set_xMax_7636dc(-fVar24,lVar16,0);
      fVar24 = (float)native_UnityEngine_Rect__get_yMin_763644(lVar16,0);
      native_UnityEngine_Rect__set_yMax_7636ec(-fVar24,lVar16,0);
      goto LAB_00941530;
    }
    uVar7 = *(undefined8 *)(lVar9 + 0x20);
    param_2 = uVar10;
    if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
      native_sub_4327ec();
      param_2 = uVar10;
    }
    uVar6 = (undefined4)param_4;
    uVar10 = native_UnityEngine_Object__op_Inequality_8d76fc(uVar7,0,0);
    if ((uVar10 & 1) != 0) {
      lVar16 = native_UnityEngine_Component__get_transform_8da62c(lVar9,0);
      if (lVar16 == 0) goto LAB_00941994;
      uVar7 = native_UnityEngine_Transform__get_parent_765eb0(lVar16,0);
      if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
        native_sub_4327ec(_UnityEngine_Object_TypeInfo_12d54e0);
      }
      uVar10 = native_UnityEngine_Object__op_Inequality_8d76fc(uVar7,0,0);
      if (*(long *)(lVar9 + 0x20) == 0) goto LAB_00941994;
      uVar14 = native_UnityEngine_GameObject__get_transform_8de5c8(*(long *)(lVar9 + 0x20),0);
      if ((uVar10 & 1) == 0) {
        if (((*(ushort *)(_NGUIMath_TypeInfo_12d53b8 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(_NGUIMath_TypeInfo_12d53b8 + 0xe0) == 0)) {
          native_sub_4327ec(_NGUIMath_TypeInfo_12d53b8);
        }
        native_NGUIMath__CalculateRelativeWidgetBounds_805a40(&uStack_158,uVar14,0);
      }
      else {
        if (((*(ushort *)(_NGUIMath_TypeInfo_12d53b8 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(_NGUIMath_TypeInfo_12d53b8 + 0xe0) == 0)) {
          native_sub_4327ec(_NGUIMath_TypeInfo_12d53b8);
        }
        native_NGUIMath__CalculateRelativeWidgetBounds_805e1c(&uStack_158,uVar7,uVar14,0);
      }
      uStack_138 = uStack_150;
      uStack_140 = uStack_158;
      uStack_130 = uStack_148;
      uStack_110 = uStack_148;
      lVar16 = lVar9 + 0x80;
      uStack_118 = uStack_150;
      uStack_120 = uStack_158;
      native_UnityEngine_Bounds__get_min_8d7f18(&uStack_120,0);
      native_UnityEngine_Rect__set_x_7635fc(lVar16,0);
      native_UnityEngine_Bounds__get_min_8d7f18(&uStack_120,0);
      native_UnityEngine_Rect__set_y_76360c(param_2,lVar16,0);
      native_UnityEngine_Bounds__get_size_8d7ed8(&uStack_120,0);
      native_UnityEngine_Rect__set_width_763684(lVar16,0);
      puVar11 = &uStack_120;
      goto LAB_00941518;
    }
    uVar7 = *(undefined8 *)(lVar9 + 0x18);
    uVar10 = param_2;
    if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
      native_sub_4327ec();
      uVar10 = param_2;
    }
    uVar20 = native_UnityEngine_Object__op_Inequality_8d76fc(uVar7,0,0);
    if ((uVar20 & 1) == 0) {
      return;
    }
    if (*(long *)(lVar9 + 0x18) == 0) goto LAB_00941994;
    uVar18 = native_UnityEngine_Camera__get_pixelRect_8d8c9c(*(long *)(lVar9 + 0x18),0);
    *(undefined4 *)(lVar9 + 0x80) = uVar18;
    *(int *)(lVar9 + 0x84) = (int)uVar10;
    *(int *)(lVar9 + 0x88) = (int)param_3;
    *(undefined4 *)(lVar9 + 0x8c) = uVar6;
    uVar7 = *(undefined8 *)(lVar9 + 0x70);
    if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    uVar20 = native_UnityEngine_Object__op_Inequality_8d76fc(uVar7,0,0);
    if ((uVar20 & 1) == 0) goto LAB_00941530;
    if (*(long *)(lVar9 + 0x70) == 0) goto LAB_00941994;
    fVar24 = (float)native_UIRoot__get_pixelSizeAdjustment_c2f740(*(long *)(lVar9 + 0x70),0);
  }
  else {
    lVar17 = native_UnityEngine_Component__get_transform_8da62c(lVar9,0);
    if ((lVar17 == 0) ||
       (uVar7 = native_UnityEngine_Transform__get_parent_765eb0(lVar17,0), lVar16 == 0))
    goto LAB_00941994;
    native_UIWidget__CalculateBounds_941b98(&uStack_158,lVar16,uVar7);
    uStack_f0 = uStack_148;
    uStack_f8 = uStack_150;
    uStack_100 = uStack_158;
    lVar16 = lVar9 + 0x80;
    native_UnityEngine_Bounds__get_min_8d7f18(&uStack_100,0);
    native_UnityEngine_Rect__set_x_7635fc(lVar16,0);
    native_UnityEngine_Bounds__get_min_8d7f18(&uStack_100,0);
    native_UnityEngine_Rect__set_y_76360c(param_2,lVar16,0);
    native_UnityEngine_Bounds__get_size_8d7ed8(&uStack_100,0);
    native_UnityEngine_Rect__set_width_763684(lVar16,0);
    puVar11 = &uStack_100;
LAB_00941518:
    native_UnityEngine_Bounds__get_size_8d7ed8(puVar11,0);
    uVar10 = param_2;
LAB_00941528:
    native_UnityEngine_Rect__set_height_763694(param_2,lVar9 + 0x80,0);
LAB_00941530:
    fVar24 = 1.0;
  }
  uVar20 = native_UnityEngine_Rect__get_width_76367c(lVar9 + 0x80,0);
  uVar21 = native_UnityEngine_Rect__get_height_76368c(lVar9 + 0x80,0);
  fVar19 = 1.0;
  if ((fVar24 != 1.0) && (fVar24 = (float)uVar21, 1.0 < fVar24)) {
    if (*(long *)(lVar9 + 0x70) == 0) goto LAB_00941994;
    iVar5 = native_UIRoot__get_activeHeight_c2f58c(*(long *)(lVar9 + 0x70),0);
    uVar20 = (ulong)(uint)((float)uVar20 * ((float)iVar5 / fVar24));
    uVar21 = (ulong)(uint)(fVar24 * ((float)iVar5 / fVar24));
  }
  uVar7 = *(undefined8 *)(lVar9 + 0x58);
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar12 = native_UnityEngine_Object__op_Inequality_8d76fc(uVar7,0,0);
  if ((uVar12 & 1) == 0) {
    if (*(long *)(lVar9 + 0x50) == 0) goto LAB_00941994;
    uVar22 = native_UnityEngine_Transform__get_localScale_771d80(*(long *)(lVar9 + 0x50),0);
    uVar12 = uVar10;
    uVar26 = param_3;
  }
  else {
    lVar16 = *(long *)(lVar9 + 0x58);
    if (lVar16 == 0) goto LAB_00941994;
    uVar10 = (ulong)*(uint *)(lVar16 + 0xa8);
    uVar22 = (ulong)(uint)(float)*(int *)(lVar16 + 0xa4);
    uVar12 = (ulong)(uint)(float)(int)*(uint *)(lVar16 + 0xa8);
    uVar26 = 0;
  }
  fVar24 = (float)uVar20;
  fVar27 = (float)uVar21;
  switch(*(int *)(lVar9 + 0x28)) {
  case 2:
code_r0x0094167c:
    fVar24 = *(float *)(lVar9 + 0x34);
    uVar20 = uVar22;
    break;
  default:
    uVar22 = (ulong)(uint)(fVar24 * *(float *)(lVar9 + 0x30));
    uVar20 = uVar22;
    uVar21 = uVar12;
    if (*(int *)(lVar9 + 0x28) != 1) goto code_r0x0094167c;
    goto LAB_00941688;
  case 4:
    fVar24 = *(float *)(lVar9 + 0x34);
    uVar20 = (ulong)(uint)(fVar27 * *(float *)(lVar9 + 0x30));
    break;
  case 5:
    fVar25 = *(float *)(lVar9 + 0x38);
    fVar23 = *(float *)(lVar9 + 0x3c);
    param_3 = (ulong)(uint)(fVar24 / fVar27);
    if (fVar24 / fVar27 <= fVar25 / fVar23) {
code_r0x00941658:
      uVar10 = (ulong)(uint)(fVar27 / fVar23);
      uVar20 = (ulong)(uint)(fVar25 * (fVar27 / fVar23));
      goto LAB_00941688;
    }
    goto code_r0x00941638;
  case 6:
    fVar25 = *(float *)(lVar9 + 0x38);
    fVar23 = *(float *)(lVar9 + 0x3c);
    param_3 = (ulong)(uint)(fVar24 / fVar27);
    if (fVar25 / fVar23 <= fVar24 / fVar27) goto code_r0x00941658;
code_r0x00941638:
    uVar10 = (ulong)(uint)fVar23;
    uVar21 = (ulong)(uint)(fVar23 * (fVar24 / fVar25));
    goto LAB_00941688;
  }
  uVar10 = (ulong)(uint)fVar24;
  uVar21 = (ulong)(uint)(fVar27 * fVar24);
LAB_00941688:
  uVar7 = *(undefined8 *)(lVar9 + 0x60);
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar12 = native_UnityEngine_Object__op_Inequality_8d76fc(uVar7,0,0);
  fVar27 = (float)uVar20;
  fVar24 = (float)uVar21;
  if ((uVar12 & 1) == 0) {
    uVar7 = *(undefined8 *)(lVar9 + 0x58);
    if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    uVar12 = native_UnityEngine_Object__op_Inequality_8d76fc(uVar7,0,0);
    if ((uVar12 & 1) != 0) {
      if (*(int *)(lVar9 + 0x28) != 2) {
        lVar16 = *(long *)(lVar9 + 0x58);
        uVar6 = native_UnityEngine_Mathf__RoundToInt_8e50f0(fVar27 - *(float *)(lVar9 + 0x40),0);
        if (lVar16 == 0) goto LAB_00941994;
        native_UIWidget__set_width_941dec(lVar16,uVar6);
        if (*(int *)(lVar9 + 0x28) == 1) goto LAB_009417c8;
      }
      fVar19 = *(float *)(lVar9 + 0x44);
      lVar16 = *(long *)(lVar9 + 0x58);
LAB_009417ac:
      uVar6 = native_UnityEngine_Mathf__RoundToInt_8e50f0(fVar24 - fVar19,0);
      if (lVar16 == 0) goto LAB_00941994;
      native_UIWidget__set_height_942098(lVar16,uVar6);
      goto LAB_009417c8;
    }
    uVar7 = *(undefined8 *)(lVar9 + 0x68);
    if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    uVar10 = native_UnityEngine_Object__op_Inequality_8d76fc(uVar7,0,0);
    if ((uVar10 & 1) != 0) {
      lVar16 = *(long *)(lVar9 + 0x68);
      if (lVar16 == 0) goto LAB_00941994;
      uVar10 = (ulong)*(uint *)(lVar16 + 0x148);
      if (*(int *)(lVar9 + 0x28) == 2) {
        param_3 = (ulong)*(uint *)(lVar16 + 0x14c);
LAB_009418fc:
        fVar24 = fVar24 - *(float *)(lVar9 + 0x44);
      }
      else {
        param_3 = (ulong)(uint)(fVar27 - *(float *)(lVar9 + 0x40));
        if (*(int *)(lVar9 + 0x28) != 1) goto LAB_009418fc;
        fVar24 = *(float *)(lVar16 + 0x150);
      }
      native_UIPanel__set_baseClipRegion_af025c
                (*(undefined4 *)(lVar16 + 0x144),uVar10,param_3,fVar24,lVar16,0);
      goto LAB_009417c8;
    }
    if ((*(int *)(lVar9 + 0x28) == 2) ||
       (uVar20 = (ulong)(uint)(fVar27 - *(float *)(lVar9 + 0x40)), *(int *)(lVar9 + 0x28) != 1)) {
      uVar21 = (ulong)(uint)(fVar24 - *(float *)(lVar9 + 0x44));
    }
  }
  else {
    if (*(long *)(lVar9 + 0x60) == 0) goto LAB_00941994;
    lVar16 = native_UISprite__get_atlas_c358c4(*(long *)(lVar9 + 0x60),0);
    if (lVar16 != 0) {
      plVar8 = *(long **)(lVar9 + 0x60);
      if (plVar8 == (long *)0x0) goto LAB_00941994;
      fVar19 = (float)(**(code **)(*plVar8 + 0x458))(plVar8,*(undefined8 *)(*plVar8 + 0x460));
    }
    fVar25 = *(float *)(lVar9 + 0x44);
    if (*(int *)(lVar9 + 0x28) == 2) {
LAB_0094172c:
      lVar16 = *(long *)(lVar9 + 0x60);
      fVar19 = fVar19 * fVar25;
      goto LAB_009417ac;
    }
    lVar16 = *(long *)(lVar9 + 0x60);
    uVar6 = native_UnityEngine_Mathf__RoundToInt_8e50f0
                      (fVar27 - fVar19 * *(float *)(lVar9 + 0x40),0);
    if (lVar16 == 0) goto LAB_00941994;
    native_UIWidget__set_width_941dec(lVar16,uVar6);
    if (*(int *)(lVar9 + 0x28) != 1) goto LAB_0094172c;
LAB_009417c8:
    uVar20 = native_UnityEngine_Vector3__get_one_776a20(0);
    uVar21 = uVar10;
    uVar26 = param_3;
  }
  if (*(long *)(lVar9 + 0x50) == 0) {
LAB_00941994:
                    /* WARNING: Subroutine does not return */
    native_sub_432810();
  }
  native_UnityEngine_Transform__get_localScale_771d80(*(long *)(lVar9 + 0x50),0);
  uVar10 = native_UnityEngine_Vector3__op_Inequality_776c48(0);
  if ((uVar10 & 1) != 0) {
    if (*(long *)(lVar9 + 0x50) == 0) goto LAB_00941994;
    native_UnityEngine_Transform__set_localScale_771e30
              (uVar20,uVar21,uVar26,*(long *)(lVar9 + 0x50),0);
  }
  if ((*(char *)(lVar9 + 0x2c) != '\0') &&
     (uVar10 = native_UnityEngine_Application__get_isPlaying_8d60cc(0), (uVar10 & 1) != 0)) {
    native_UnityEngine_Behaviour__set_enabled_8d7b0c(lVar9,0,0);
  }
  return;
}



/* UIStretch$$OnDestroy @ 0x940ea4
 * void UIStretch__OnDestroy (UIStretch_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIStretch$$OnDestroy
   void UIStretch__OnDestroy (UIStretch_o* __this, const MethodInfo* method); */

void native_UIStretch__OnDestroy_940ea4
               (undefined1 param_1 [16],ulong param_2,ulong param_3,ulong param_4,undefined8 param_5
               )

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  long *plVar8;
  long lVar9;
  ulong uVar10;
  undefined8 *puVar11;
  ulong uVar12;
  long *plVar13;
  undefined8 uVar14;
  long lVar15;
  long lVar16;
  undefined4 uVar17;
  float fVar18;
  ulong uVar19;
  ulong uVar20;
  ulong uVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  ulong uVar25;
  float fVar26;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  
  if ((bRam000000000134140b & 1) == 0) {
    native_sub_43273c(&UICamera_OnScreenResize_TypeInfo_12d7a30);
    native_sub_43273c(&UICamera_TypeInfo_12d6410);
    native_sub_43273c(&Method_UIStretch_ScreenSizeChanged___12e78d8);
    bRam000000000134140b = 1;
  }
  if (((*(byte *)(_UICamera_TypeInfo_12d6410 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar14 = *(undefined8 *)(*(long *)(_UICamera_TypeInfo_12d6410 + 0xb8) + 0x48);
  uVar7 = native_sub_432808(_UICamera_OnScreenResize_TypeInfo_12d7a30);
  native_UICamera_OnScreenResize___ctor_553168
            (uVar7,param_5,_Method_UIStretch_ScreenSizeChanged___12e78d8,0);
  plVar8 = (long *)native_System_Delegate__Remove_a6d1c0(uVar14,uVar7,0);
  if ((plVar8 == (long *)0x0) || (*plVar8 == _UICamera_OnScreenResize_TypeInfo_12d7a30)) {
    plVar13 = (long *)(*(long *)(_UICamera_TypeInfo_12d6410 + 0xb8) + 0x48);
    *plVar13 = (long)plVar8;
    if (iRam0000000001345318 != 0) {
      puVar1 = (ulong *)(((ulong)plVar13 >> 0x12 & 0x7fff) * 8 + 0x138ecd8);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = *puVar1 | 1L << ((ulong)plVar13 >> 0xc & 0x3f);
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    return;
  }
  lVar9 = native_sub_432b04(plVar8);
  if ((*(char *)(lVar9 + 0x90) == '\0') || (*(char *)(lVar9 + 0x2c) == '\0')) {
    return;
  }
  if ((bRam000000000134140d & 1) == 0) {
    native_sub_43273c(&Method_UnityEngine_GameObject_GetComponent_UIPanel____12e4ac8);
    native_sub_43273c(&Method_UnityEngine_GameObject_GetComponent_UIWidget____12e4ae8);
    native_sub_43273c(&NGUIMath_TypeInfo_12d53b8);
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    bRam000000000134140d = 1;
  }
  uStack_c0 = 0;
  uStack_b8 = 0;
  uStack_b0 = 0;
  uStack_e0 = 0;
  uStack_d8 = 0;
  uStack_d0 = 0;
  uStack_100 = 0;
  uStack_f8 = 0;
  uStack_f0 = 0;
  uVar7 = *(undefined8 *)(lVar9 + 0x78);
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar10 = native_UnityEngine_Object__op_Inequality_8d76fc(uVar7,0,0);
  if ((uVar10 & 1) != 0) {
    if (*(long *)(lVar9 + 0x78) == 0) goto LAB_00941994;
    uVar10 = native_UnityEngine_Animation__get_isPlaying_db16b0(*(long *)(lVar9 + 0x78),0);
    if ((uVar10 & 1) != 0) {
      return;
    }
  }
  if (*(int *)(lVar9 + 0x28) == 0) {
    return;
  }
  uVar7 = *(undefined8 *)(lVar9 + 0x20);
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar10 = native_UnityEngine_Object__op_Equality_8e9a3c(uVar7,0,0);
  lVar15 = 0;
  if ((uVar10 & 1) == 0) {
    if (*(long *)(lVar9 + 0x20) == 0) goto LAB_00941994;
    lVar15 = native_UnityEngine_GameObject__GetComponent_BE2_BlockSectionHeader_Custom__4a2214
                       (*(long *)(lVar9 + 0x20),
                        _Method_UnityEngine_GameObject_GetComponent_UIWidget____12e4ae8);
  }
  uVar7 = *(undefined8 *)(lVar9 + 0x20);
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar10 = native_UnityEngine_Object__op_Equality_8e9a3c(uVar7,0,0);
  if ((uVar10 & 1) == 0) {
LAB_00941144:
    if (*(long *)(lVar9 + 0x20) == 0) goto LAB_00941994;
    lVar16 = native_UnityEngine_GameObject__GetComponent_BE2_BlockSectionHeader_Custom__4a2214
                       (*(long *)(lVar9 + 0x20),
                        _Method_UnityEngine_GameObject_GetComponent_UIPanel____12e4ac8);
  }
  else {
    if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    uVar10 = native_UnityEngine_Object__op_Equality_8e9a3c(lVar15,0,0);
    lVar16 = 0;
    if ((uVar10 & 1) == 0) goto LAB_00941144;
  }
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar10 = native_UnityEngine_Object__op_Inequality_8d76fc(lVar15,0,0);
  if ((uVar10 & 1) == 0) {
    uVar10 = param_2;
    if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
      native_sub_4327ec();
      uVar10 = param_2;
    }
    uVar19 = native_UnityEngine_Object__op_Inequality_8d76fc(lVar16,0,0);
    if ((uVar19 & 1) != 0) {
      if (lVar16 == 0) goto LAB_00941994;
      if (*(int *)(lVar16 + 0x140) != 0) {
        param_2 = param_4;
        fVar23 = (float)native_UIPanel__get_finalClipRegion_af03c8(lVar16,0);
        lVar15 = lVar9 + 0x80;
        fVar18 = (float)param_3 * 0.5;
        uVar20 = (ulong)(uint)fVar18;
        uVar19 = param_3;
        native_UnityEngine_Rect__set_x_7635fc(fVar23 - fVar18,lVar15,0);
        native_UnityEngine_Rect__set_y_76360c((float)uVar10 - (float)param_2 * 0.5,lVar15,0);
        native_UnityEngine_Rect__set_width_763684(param_3,lVar15,0);
        uVar10 = uVar20;
        param_3 = uVar19;
        goto LAB_00941528;
      }
      uVar7 = *(undefined8 *)(lVar9 + 0x70);
      if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
        native_sub_4327ec();
      }
      uVar19 = native_UnityEngine_Object__op_Inequality_8d76fc(uVar7,0,0);
      if ((uVar19 & 1) == 0) {
        fVar23 = 0.5;
      }
      else {
        if (*(long *)(lVar9 + 0x70) == 0) goto LAB_00941994;
        iVar5 = native_UIRoot__get_activeHeight_c2f58c(*(long *)(lVar9 + 0x70),0);
        iVar4 = native_UnityEngine_Screen__get_height_76a618(0);
        uVar10 = 0x3f000000;
        fVar23 = ((float)iVar5 / (float)iVar4) * 0.5;
      }
      lVar15 = lVar9 + 0x80;
      iVar5 = native_UnityEngine_Screen__get_width_76a5e4(0);
      native_UnityEngine_Rect__set_xMin_7636a4(fVar23 * (float)-iVar5,lVar15,0);
      iVar5 = native_UnityEngine_Screen__get_height_76a618(0);
      native_UnityEngine_Rect__set_yMin_7636c0(fVar23 * (float)-iVar5,lVar15,0);
      fVar23 = (float)native_UnityEngine_Rect__get_xMin_76363c(lVar15,0);
      native_UnityEngine_Rect__set_xMax_7636dc(-fVar23,lVar15,0);
      fVar23 = (float)native_UnityEngine_Rect__get_yMin_763644(lVar15,0);
      native_UnityEngine_Rect__set_yMax_7636ec(-fVar23,lVar15,0);
      goto LAB_00941530;
    }
    uVar7 = *(undefined8 *)(lVar9 + 0x20);
    param_2 = uVar10;
    if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
      native_sub_4327ec();
      param_2 = uVar10;
    }
    uVar6 = (undefined4)param_4;
    uVar10 = native_UnityEngine_Object__op_Inequality_8d76fc(uVar7,0,0);
    if ((uVar10 & 1) != 0) {
      lVar15 = native_UnityEngine_Component__get_transform_8da62c(lVar9,0);
      if (lVar15 == 0) goto LAB_00941994;
      uVar7 = native_UnityEngine_Transform__get_parent_765eb0(lVar15,0);
      if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
        native_sub_4327ec(_UnityEngine_Object_TypeInfo_12d54e0);
      }
      uVar10 = native_UnityEngine_Object__op_Inequality_8d76fc(uVar7,0,0);
      if (*(long *)(lVar9 + 0x20) == 0) goto LAB_00941994;
      uVar14 = native_UnityEngine_GameObject__get_transform_8de5c8(*(long *)(lVar9 + 0x20),0);
      if ((uVar10 & 1) == 0) {
        if (((*(ushort *)(_NGUIMath_TypeInfo_12d53b8 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(_NGUIMath_TypeInfo_12d53b8 + 0xe0) == 0)) {
          native_sub_4327ec(_NGUIMath_TypeInfo_12d53b8);
        }
        native_NGUIMath__CalculateRelativeWidgetBounds_805a40(&uStack_118,uVar14,0);
      }
      else {
        if (((*(ushort *)(_NGUIMath_TypeInfo_12d53b8 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(_NGUIMath_TypeInfo_12d53b8 + 0xe0) == 0)) {
          native_sub_4327ec(_NGUIMath_TypeInfo_12d53b8);
        }
        native_NGUIMath__CalculateRelativeWidgetBounds_805e1c(&uStack_118,uVar7,uVar14,0);
      }
      uStack_f8 = uStack_110;
      uStack_100 = uStack_118;
      uStack_f0 = uStack_108;
      uStack_d0 = uStack_108;
      lVar15 = lVar9 + 0x80;
      uStack_d8 = uStack_110;
      uStack_e0 = uStack_118;
      native_UnityEngine_Bounds__get_min_8d7f18(&uStack_e0,0);
      native_UnityEngine_Rect__set_x_7635fc(lVar15,0);
      native_UnityEngine_Bounds__get_min_8d7f18(&uStack_e0,0);
      native_UnityEngine_Rect__set_y_76360c(param_2,lVar15,0);
      native_UnityEngine_Bounds__get_size_8d7ed8(&uStack_e0,0);
      native_UnityEngine_Rect__set_width_763684(lVar15,0);
      puVar11 = &uStack_e0;
      goto LAB_00941518;
    }
    uVar7 = *(undefined8 *)(lVar9 + 0x18);
    uVar10 = param_2;
    if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
      native_sub_4327ec();
      uVar10 = param_2;
    }
    uVar19 = native_UnityEngine_Object__op_Inequality_8d76fc(uVar7,0,0);
    if ((uVar19 & 1) == 0) {
      return;
    }
    if (*(long *)(lVar9 + 0x18) == 0) goto LAB_00941994;
    uVar17 = native_UnityEngine_Camera__get_pixelRect_8d8c9c(*(long *)(lVar9 + 0x18),0);
    *(undefined4 *)(lVar9 + 0x80) = uVar17;
    *(int *)(lVar9 + 0x84) = (int)uVar10;
    *(int *)(lVar9 + 0x88) = (int)param_3;
    *(undefined4 *)(lVar9 + 0x8c) = uVar6;
    uVar7 = *(undefined8 *)(lVar9 + 0x70);
    if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    uVar19 = native_UnityEngine_Object__op_Inequality_8d76fc(uVar7,0,0);
    if ((uVar19 & 1) == 0) goto LAB_00941530;
    if (*(long *)(lVar9 + 0x70) == 0) goto LAB_00941994;
    fVar23 = (float)native_UIRoot__get_pixelSizeAdjustment_c2f740(*(long *)(lVar9 + 0x70),0);
  }
  else {
    lVar16 = native_UnityEngine_Component__get_transform_8da62c(lVar9,0);
    if ((lVar16 == 0) ||
       (uVar7 = native_UnityEngine_Transform__get_parent_765eb0(lVar16,0), lVar15 == 0))
    goto LAB_00941994;
    native_UIWidget__CalculateBounds_941b98(&uStack_118,lVar15,uVar7);
    uStack_b0 = uStack_108;
    uStack_b8 = uStack_110;
    uStack_c0 = uStack_118;
    lVar15 = lVar9 + 0x80;
    native_UnityEngine_Bounds__get_min_8d7f18(&uStack_c0,0);
    native_UnityEngine_Rect__set_x_7635fc(lVar15,0);
    native_UnityEngine_Bounds__get_min_8d7f18(&uStack_c0,0);
    native_UnityEngine_Rect__set_y_76360c(param_2,lVar15,0);
    native_UnityEngine_Bounds__get_size_8d7ed8(&uStack_c0,0);
    native_UnityEngine_Rect__set_width_763684(lVar15,0);
    puVar11 = &uStack_c0;
LAB_00941518:
    native_UnityEngine_Bounds__get_size_8d7ed8(puVar11,0);
    uVar10 = param_2;
LAB_00941528:
    native_UnityEngine_Rect__set_height_763694(param_2,lVar9 + 0x80,0);
LAB_00941530:
    fVar23 = 1.0;
  }
  uVar19 = native_UnityEngine_Rect__get_width_76367c(lVar9 + 0x80,0);
  uVar20 = native_UnityEngine_Rect__get_height_76368c(lVar9 + 0x80,0);
  fVar18 = 1.0;
  if ((fVar23 != 1.0) && (fVar23 = (float)uVar20, 1.0 < fVar23)) {
    if (*(long *)(lVar9 + 0x70) == 0) goto LAB_00941994;
    iVar5 = native_UIRoot__get_activeHeight_c2f58c(*(long *)(lVar9 + 0x70),0);
    uVar19 = (ulong)(uint)((float)uVar19 * ((float)iVar5 / fVar23));
    uVar20 = (ulong)(uint)(fVar23 * ((float)iVar5 / fVar23));
  }
  uVar7 = *(undefined8 *)(lVar9 + 0x58);
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar12 = native_UnityEngine_Object__op_Inequality_8d76fc(uVar7,0,0);
  if ((uVar12 & 1) == 0) {
    if (*(long *)(lVar9 + 0x50) == 0) goto LAB_00941994;
    uVar21 = native_UnityEngine_Transform__get_localScale_771d80(*(long *)(lVar9 + 0x50),0);
    uVar12 = uVar10;
    uVar25 = param_3;
  }
  else {
    lVar15 = *(long *)(lVar9 + 0x58);
    if (lVar15 == 0) goto LAB_00941994;
    uVar10 = (ulong)*(uint *)(lVar15 + 0xa8);
    uVar21 = (ulong)(uint)(float)*(int *)(lVar15 + 0xa4);
    uVar12 = (ulong)(uint)(float)(int)*(uint *)(lVar15 + 0xa8);
    uVar25 = 0;
  }
  fVar23 = (float)uVar19;
  fVar26 = (float)uVar20;
  switch(*(int *)(lVar9 + 0x28)) {
  case 2:
code_r0x0094167c:
    fVar23 = *(float *)(lVar9 + 0x34);
    uVar19 = uVar21;
    break;
  default:
    uVar21 = (ulong)(uint)(fVar23 * *(float *)(lVar9 + 0x30));
    uVar19 = uVar21;
    uVar20 = uVar12;
    if (*(int *)(lVar9 + 0x28) != 1) goto code_r0x0094167c;
    goto LAB_00941688;
  case 4:
    fVar23 = *(float *)(lVar9 + 0x34);
    uVar19 = (ulong)(uint)(fVar26 * *(float *)(lVar9 + 0x30));
    break;
  case 5:
    fVar24 = *(float *)(lVar9 + 0x38);
    fVar22 = *(float *)(lVar9 + 0x3c);
    param_3 = (ulong)(uint)(fVar23 / fVar26);
    if (fVar23 / fVar26 <= fVar24 / fVar22) {
code_r0x00941658:
      uVar10 = (ulong)(uint)(fVar26 / fVar22);
      uVar19 = (ulong)(uint)(fVar24 * (fVar26 / fVar22));
      goto LAB_00941688;
    }
    goto code_r0x00941638;
  case 6:
    fVar24 = *(float *)(lVar9 + 0x38);
    fVar22 = *(float *)(lVar9 + 0x3c);
    param_3 = (ulong)(uint)(fVar23 / fVar26);
    if (fVar24 / fVar22 <= fVar23 / fVar26) goto code_r0x00941658;
code_r0x00941638:
    uVar10 = (ulong)(uint)fVar22;
    uVar20 = (ulong)(uint)(fVar22 * (fVar23 / fVar24));
    goto LAB_00941688;
  }
  uVar10 = (ulong)(uint)fVar23;
  uVar20 = (ulong)(uint)(fVar26 * fVar23);
LAB_00941688:
  uVar7 = *(undefined8 *)(lVar9 + 0x60);
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar12 = native_UnityEngine_Object__op_Inequality_8d76fc(uVar7,0,0);
  fVar26 = (float)uVar19;
  fVar23 = (float)uVar20;
  if ((uVar12 & 1) == 0) {
    uVar7 = *(undefined8 *)(lVar9 + 0x58);
    if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    uVar12 = native_UnityEngine_Object__op_Inequality_8d76fc(uVar7,0,0);
    if ((uVar12 & 1) != 0) {
      if (*(int *)(lVar9 + 0x28) != 2) {
        lVar15 = *(long *)(lVar9 + 0x58);
        uVar6 = native_UnityEngine_Mathf__RoundToInt_8e50f0(fVar26 - *(float *)(lVar9 + 0x40),0);
        if (lVar15 == 0) goto LAB_00941994;
        native_UIWidget__set_width_941dec(lVar15,uVar6);
        if (*(int *)(lVar9 + 0x28) == 1) goto LAB_009417c8;
      }
      fVar18 = *(float *)(lVar9 + 0x44);
      lVar15 = *(long *)(lVar9 + 0x58);
LAB_009417ac:
      uVar6 = native_UnityEngine_Mathf__RoundToInt_8e50f0(fVar23 - fVar18,0);
      if (lVar15 == 0) goto LAB_00941994;
      native_UIWidget__set_height_942098(lVar15,uVar6);
      goto LAB_009417c8;
    }
    uVar7 = *(undefined8 *)(lVar9 + 0x68);
    if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    uVar10 = native_UnityEngine_Object__op_Inequality_8d76fc(uVar7,0,0);
    if ((uVar10 & 1) != 0) {
      lVar15 = *(long *)(lVar9 + 0x68);
      if (lVar15 == 0) goto LAB_00941994;
      uVar10 = (ulong)*(uint *)(lVar15 + 0x148);
      if (*(int *)(lVar9 + 0x28) == 2) {
        param_3 = (ulong)*(uint *)(lVar15 + 0x14c);
LAB_009418fc:
        fVar23 = fVar23 - *(float *)(lVar9 + 0x44);
      }
      else {
        param_3 = (ulong)(uint)(fVar26 - *(float *)(lVar9 + 0x40));
        if (*(int *)(lVar9 + 0x28) != 1) goto LAB_009418fc;
        fVar23 = *(float *)(lVar15 + 0x150);
      }
      native_UIPanel__set_baseClipRegion_af025c
                (*(undefined4 *)(lVar15 + 0x144),uVar10,param_3,fVar23,lVar15,0);
      goto LAB_009417c8;
    }
    if ((*(int *)(lVar9 + 0x28) == 2) ||
       (uVar19 = (ulong)(uint)(fVar26 - *(float *)(lVar9 + 0x40)), *(int *)(lVar9 + 0x28) != 1)) {
      uVar20 = (ulong)(uint)(fVar23 - *(float *)(lVar9 + 0x44));
    }
  }
  else {
    if (*(long *)(lVar9 + 0x60) == 0) goto LAB_00941994;
    lVar15 = native_UISprite__get_atlas_c358c4(*(long *)(lVar9 + 0x60),0);
    if (lVar15 != 0) {
      plVar8 = *(long **)(lVar9 + 0x60);
      if (plVar8 == (long *)0x0) goto LAB_00941994;
      fVar18 = (float)(**(code **)(*plVar8 + 0x458))(plVar8,*(undefined8 *)(*plVar8 + 0x460));
    }
    fVar24 = *(float *)(lVar9 + 0x44);
    if (*(int *)(lVar9 + 0x28) == 2) {
LAB_0094172c:
      lVar15 = *(long *)(lVar9 + 0x60);
      fVar18 = fVar18 * fVar24;
      goto LAB_009417ac;
    }
    lVar15 = *(long *)(lVar9 + 0x60);
    uVar6 = native_UnityEngine_Mathf__RoundToInt_8e50f0
                      (fVar26 - fVar18 * *(float *)(lVar9 + 0x40),0);
    if (lVar15 == 0) goto LAB_00941994;
    native_UIWidget__set_width_941dec(lVar15,uVar6);
    if (*(int *)(lVar9 + 0x28) != 1) goto LAB_0094172c;
LAB_009417c8:
    uVar19 = native_UnityEngine_Vector3__get_one_776a20(0);
    uVar20 = uVar10;
    uVar25 = param_3;
  }
  if (*(long *)(lVar9 + 0x50) == 0) {
LAB_00941994:
                    /* WARNING: Subroutine does not return */
    native_sub_432810();
  }
  native_UnityEngine_Transform__get_localScale_771d80(*(long *)(lVar9 + 0x50),0);
  uVar10 = native_UnityEngine_Vector3__op_Inequality_776c48(0);
  if ((uVar10 & 1) != 0) {
    if (*(long *)(lVar9 + 0x50) == 0) goto LAB_00941994;
    native_UnityEngine_Transform__set_localScale_771e30
              (uVar19,uVar20,uVar25,*(long *)(lVar9 + 0x50),0);
  }
  if ((*(char *)(lVar9 + 0x2c) != '\0') &&
     (uVar10 = native_UnityEngine_Application__get_isPlaying_8d60cc(0), (uVar10 & 1) != 0)) {
    native_UnityEngine_Behaviour__set_enabled_8d7b0c(lVar9,0,0);
  }
  return;
}



/* UIStretch$$ScreenSizeChanged @ 0x940fa4
 * void UIStretch__ScreenSizeChanged (UIStretch_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIStretch$$ScreenSizeChanged
   void UIStretch__ScreenSizeChanged (UIStretch_o* __this, const MethodInfo* method); */

void native_UIStretch__ScreenSizeChanged_940fa4
               (undefined1 param_1 [16],ulong param_2,ulong param_3,ulong param_4,long param_5)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  ulong uVar7;
  long *plVar8;
  undefined8 uVar9;
  long lVar10;
  long lVar11;
  undefined4 uVar12;
  float fVar13;
  ulong uVar14;
  ulong uVar15;
  ulong uVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  ulong uVar20;
  float fVar21;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  
  if ((*(char *)(param_5 + 0x90) == '\0') || (*(char *)(param_5 + 0x2c) == '\0')) {
    return;
  }
  if ((bRam000000000134140d & 1) == 0) {
    native_sub_43273c(&Method_UnityEngine_GameObject_GetComponent_UIPanel____12e4ac8);
    native_sub_43273c(&Method_UnityEngine_GameObject_GetComponent_UIWidget____12e4ae8);
    native_sub_43273c(&NGUIMath_TypeInfo_12d53b8);
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    bRam000000000134140d = 1;
  }
  uStack_80 = 0;
  uStack_78 = 0;
  uStack_70 = 0;
  uStack_a0 = 0;
  uStack_98 = 0;
  uStack_90 = 0;
  uStack_c0 = 0;
  uStack_b8 = 0;
  uStack_b0 = 0;
  uVar9 = *(undefined8 *)(param_5 + 0x78);
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar4 = native_UnityEngine_Object__op_Inequality_8d76fc(uVar9,0,0);
  if ((uVar4 & 1) != 0) {
    if (*(long *)(param_5 + 0x78) == 0) goto LAB_00941994;
    uVar4 = native_UnityEngine_Animation__get_isPlaying_db16b0(*(long *)(param_5 + 0x78),0);
    if ((uVar4 & 1) != 0) {
      return;
    }
  }
  if (*(int *)(param_5 + 0x28) == 0) {
    return;
  }
  uVar9 = *(undefined8 *)(param_5 + 0x20);
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar4 = native_UnityEngine_Object__op_Equality_8e9a3c(uVar9,0,0);
  lVar10 = 0;
  if ((uVar4 & 1) == 0) {
    if (*(long *)(param_5 + 0x20) == 0) goto LAB_00941994;
    lVar10 = native_UnityEngine_GameObject__GetComponent_BE2_BlockSectionHeader_Custom__4a2214
                       (*(long *)(param_5 + 0x20),
                        _Method_UnityEngine_GameObject_GetComponent_UIWidget____12e4ae8);
  }
  uVar9 = *(undefined8 *)(param_5 + 0x20);
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar4 = native_UnityEngine_Object__op_Equality_8e9a3c(uVar9,0,0);
  if ((uVar4 & 1) == 0) {
LAB_00941144:
    if (*(long *)(param_5 + 0x20) == 0) goto LAB_00941994;
    lVar11 = native_UnityEngine_GameObject__GetComponent_BE2_BlockSectionHeader_Custom__4a2214
                       (*(long *)(param_5 + 0x20),
                        _Method_UnityEngine_GameObject_GetComponent_UIPanel____12e4ac8);
  }
  else {
    if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    uVar4 = native_UnityEngine_Object__op_Equality_8e9a3c(lVar10,0,0);
    lVar11 = 0;
    if ((uVar4 & 1) == 0) goto LAB_00941144;
  }
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar4 = native_UnityEngine_Object__op_Inequality_8d76fc(lVar10,0,0);
  if ((uVar4 & 1) == 0) {
    uVar4 = param_2;
    if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
      native_sub_4327ec();
      uVar4 = param_2;
    }
    uVar14 = native_UnityEngine_Object__op_Inequality_8d76fc(lVar11,0,0);
    if ((uVar14 & 1) != 0) {
      if (lVar11 == 0) goto LAB_00941994;
      if (*(int *)(lVar11 + 0x140) != 0) {
        param_2 = param_4;
        fVar18 = (float)native_UIPanel__get_finalClipRegion_af03c8(lVar11,0);
        lVar10 = param_5 + 0x80;
        fVar13 = (float)param_3 * 0.5;
        uVar15 = (ulong)(uint)fVar13;
        uVar14 = param_3;
        native_UnityEngine_Rect__set_x_7635fc(fVar18 - fVar13,lVar10,0);
        native_UnityEngine_Rect__set_y_76360c((float)uVar4 - (float)param_2 * 0.5,lVar10,0);
        native_UnityEngine_Rect__set_width_763684(param_3,lVar10,0);
        uVar4 = uVar15;
        param_3 = uVar14;
        goto LAB_00941528;
      }
      uVar9 = *(undefined8 *)(param_5 + 0x70);
      if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
        native_sub_4327ec();
      }
      uVar14 = native_UnityEngine_Object__op_Inequality_8d76fc(uVar9,0,0);
      if ((uVar14 & 1) == 0) {
        fVar18 = 0.5;
      }
      else {
        if (*(long *)(param_5 + 0x70) == 0) goto LAB_00941994;
        iVar2 = native_UIRoot__get_activeHeight_c2f58c(*(long *)(param_5 + 0x70),0);
        iVar1 = native_UnityEngine_Screen__get_height_76a618(0);
        uVar4 = 0x3f000000;
        fVar18 = ((float)iVar2 / (float)iVar1) * 0.5;
      }
      lVar10 = param_5 + 0x80;
      iVar2 = native_UnityEngine_Screen__get_width_76a5e4(0);
      native_UnityEngine_Rect__set_xMin_7636a4(fVar18 * (float)-iVar2,lVar10,0);
      iVar2 = native_UnityEngine_Screen__get_height_76a618(0);
      native_UnityEngine_Rect__set_yMin_7636c0(fVar18 * (float)-iVar2,lVar10,0);
      fVar18 = (float)native_UnityEngine_Rect__get_xMin_76363c(lVar10,0);
      native_UnityEngine_Rect__set_xMax_7636dc(-fVar18,lVar10,0);
      fVar18 = (float)native_UnityEngine_Rect__get_yMin_763644(lVar10,0);
      native_UnityEngine_Rect__set_yMax_7636ec(-fVar18,lVar10,0);
      goto LAB_00941530;
    }
    uVar9 = *(undefined8 *)(param_5 + 0x20);
    param_2 = uVar4;
    if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
      native_sub_4327ec();
      param_2 = uVar4;
    }
    uVar3 = (undefined4)param_4;
    uVar4 = native_UnityEngine_Object__op_Inequality_8d76fc(uVar9,0,0);
    if ((uVar4 & 1) != 0) {
      lVar10 = native_UnityEngine_Component__get_transform_8da62c(param_5,0);
      if (lVar10 == 0) goto LAB_00941994;
      uVar9 = native_UnityEngine_Transform__get_parent_765eb0(lVar10,0);
      if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
        native_sub_4327ec(_UnityEngine_Object_TypeInfo_12d54e0);
      }
      uVar4 = native_UnityEngine_Object__op_Inequality_8d76fc(uVar9,0,0);
      if (*(long *)(param_5 + 0x20) == 0) goto LAB_00941994;
      uVar5 = native_UnityEngine_GameObject__get_transform_8de5c8(*(long *)(param_5 + 0x20),0);
      if ((uVar4 & 1) == 0) {
        if (((*(ushort *)(_NGUIMath_TypeInfo_12d53b8 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(_NGUIMath_TypeInfo_12d53b8 + 0xe0) == 0)) {
          native_sub_4327ec(_NGUIMath_TypeInfo_12d53b8);
        }
        native_NGUIMath__CalculateRelativeWidgetBounds_805a40(&uStack_d8,uVar5,0);
      }
      else {
        if (((*(ushort *)(_NGUIMath_TypeInfo_12d53b8 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(_NGUIMath_TypeInfo_12d53b8 + 0xe0) == 0)) {
          native_sub_4327ec(_NGUIMath_TypeInfo_12d53b8);
        }
        native_NGUIMath__CalculateRelativeWidgetBounds_805e1c(&uStack_d8,uVar9,uVar5,0);
      }
      uStack_b8 = uStack_d0;
      uStack_c0 = uStack_d8;
      uStack_b0 = uStack_c8;
      uStack_90 = uStack_c8;
      lVar10 = param_5 + 0x80;
      uStack_98 = uStack_d0;
      uStack_a0 = uStack_d8;
      native_UnityEngine_Bounds__get_min_8d7f18(&uStack_a0,0);
      native_UnityEngine_Rect__set_x_7635fc(lVar10,0);
      native_UnityEngine_Bounds__get_min_8d7f18(&uStack_a0,0);
      native_UnityEngine_Rect__set_y_76360c(param_2,lVar10,0);
      native_UnityEngine_Bounds__get_size_8d7ed8(&uStack_a0,0);
      native_UnityEngine_Rect__set_width_763684(lVar10,0);
      puVar6 = &uStack_a0;
      goto LAB_00941518;
    }
    uVar9 = *(undefined8 *)(param_5 + 0x18);
    uVar4 = param_2;
    if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
      native_sub_4327ec();
      uVar4 = param_2;
    }
    uVar14 = native_UnityEngine_Object__op_Inequality_8d76fc(uVar9,0,0);
    if ((uVar14 & 1) == 0) {
      return;
    }
    if (*(long *)(param_5 + 0x18) == 0) goto LAB_00941994;
    uVar12 = native_UnityEngine_Camera__get_pixelRect_8d8c9c(*(long *)(param_5 + 0x18),0);
    *(undefined4 *)(param_5 + 0x80) = uVar12;
    *(int *)(param_5 + 0x84) = (int)uVar4;
    *(int *)(param_5 + 0x88) = (int)param_3;
    *(undefined4 *)(param_5 + 0x8c) = uVar3;
    uVar9 = *(undefined8 *)(param_5 + 0x70);
    if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    uVar14 = native_UnityEngine_Object__op_Inequality_8d76fc(uVar9,0,0);
    if ((uVar14 & 1) == 0) goto LAB_00941530;
    if (*(long *)(param_5 + 0x70) == 0) goto LAB_00941994;
    fVar18 = (float)native_UIRoot__get_pixelSizeAdjustment_c2f740(*(long *)(param_5 + 0x70),0);
  }
  else {
    lVar11 = native_UnityEngine_Component__get_transform_8da62c(param_5,0);
    if ((lVar11 == 0) ||
       (uVar9 = native_UnityEngine_Transform__get_parent_765eb0(lVar11,0), lVar10 == 0))
    goto LAB_00941994;
    native_UIWidget__CalculateBounds_941b98(&uStack_d8,lVar10,uVar9);
    uStack_70 = uStack_c8;
    uStack_78 = uStack_d0;
    uStack_80 = uStack_d8;
    lVar10 = param_5 + 0x80;
    native_UnityEngine_Bounds__get_min_8d7f18(&uStack_80,0);
    native_UnityEngine_Rect__set_x_7635fc(lVar10,0);
    native_UnityEngine_Bounds__get_min_8d7f18(&uStack_80,0);
    native_UnityEngine_Rect__set_y_76360c(param_2,lVar10,0);
    native_UnityEngine_Bounds__get_size_8d7ed8(&uStack_80,0);
    native_UnityEngine_Rect__set_width_763684(lVar10,0);
    puVar6 = &uStack_80;
LAB_00941518:
    native_UnityEngine_Bounds__get_size_8d7ed8(puVar6,0);
    uVar4 = param_2;
LAB_00941528:
    native_UnityEngine_Rect__set_height_763694(param_2,param_5 + 0x80,0);
LAB_00941530:
    fVar18 = 1.0;
  }
  uVar14 = native_UnityEngine_Rect__get_width_76367c(param_5 + 0x80,0);
  uVar15 = native_UnityEngine_Rect__get_height_76368c(param_5 + 0x80,0);
  fVar13 = 1.0;
  if ((fVar18 != 1.0) && (fVar18 = (float)uVar15, 1.0 < fVar18)) {
    if (*(long *)(param_5 + 0x70) == 0) goto LAB_00941994;
    iVar2 = native_UIRoot__get_activeHeight_c2f58c(*(long *)(param_5 + 0x70),0);
    uVar14 = (ulong)(uint)((float)uVar14 * ((float)iVar2 / fVar18));
    uVar15 = (ulong)(uint)(fVar18 * ((float)iVar2 / fVar18));
  }
  uVar9 = *(undefined8 *)(param_5 + 0x58);
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar7 = native_UnityEngine_Object__op_Inequality_8d76fc(uVar9,0,0);
  if ((uVar7 & 1) == 0) {
    if (*(long *)(param_5 + 0x50) == 0) goto LAB_00941994;
    uVar16 = native_UnityEngine_Transform__get_localScale_771d80(*(long *)(param_5 + 0x50),0);
    uVar7 = uVar4;
    uVar20 = param_3;
  }
  else {
    lVar10 = *(long *)(param_5 + 0x58);
    if (lVar10 == 0) goto LAB_00941994;
    uVar4 = (ulong)*(uint *)(lVar10 + 0xa8);
    uVar16 = (ulong)(uint)(float)*(int *)(lVar10 + 0xa4);
    uVar7 = (ulong)(uint)(float)(int)*(uint *)(lVar10 + 0xa8);
    uVar20 = 0;
  }
  fVar18 = (float)uVar14;
  fVar21 = (float)uVar15;
  switch(*(int *)(param_5 + 0x28)) {
  case 2:
code_r0x0094167c:
    fVar18 = *(float *)(param_5 + 0x34);
    uVar14 = uVar16;
    break;
  default:
    uVar16 = (ulong)(uint)(fVar18 * *(float *)(param_5 + 0x30));
    uVar14 = uVar16;
    uVar15 = uVar7;
    if (*(int *)(param_5 + 0x28) != 1) goto code_r0x0094167c;
    goto LAB_00941688;
  case 4:
    fVar18 = *(float *)(param_5 + 0x34);
    uVar14 = (ulong)(uint)(fVar21 * *(float *)(param_5 + 0x30));
    break;
  case 5:
    fVar19 = *(float *)(param_5 + 0x38);
    fVar17 = *(float *)(param_5 + 0x3c);
    param_3 = (ulong)(uint)(fVar18 / fVar21);
    if (fVar18 / fVar21 <= fVar19 / fVar17) {
code_r0x00941658:
      uVar4 = (ulong)(uint)(fVar21 / fVar17);
      uVar14 = (ulong)(uint)(fVar19 * (fVar21 / fVar17));
      goto LAB_00941688;
    }
    goto code_r0x00941638;
  case 6:
    fVar19 = *(float *)(param_5 + 0x38);
    fVar17 = *(float *)(param_5 + 0x3c);
    param_3 = (ulong)(uint)(fVar18 / fVar21);
    if (fVar19 / fVar17 <= fVar18 / fVar21) goto code_r0x00941658;
code_r0x00941638:
    uVar4 = (ulong)(uint)fVar17;
    uVar15 = (ulong)(uint)(fVar17 * (fVar18 / fVar19));
    goto LAB_00941688;
  }
  uVar4 = (ulong)(uint)fVar18;
  uVar15 = (ulong)(uint)(fVar21 * fVar18);
LAB_00941688:
  uVar9 = *(undefined8 *)(param_5 + 0x60);
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar7 = native_UnityEngine_Object__op_Inequality_8d76fc(uVar9,0,0);
  fVar21 = (float)uVar14;
  fVar18 = (float)uVar15;
  if ((uVar7 & 1) == 0) {
    uVar9 = *(undefined8 *)(param_5 + 0x58);
    if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    uVar7 = native_UnityEngine_Object__op_Inequality_8d76fc(uVar9,0,0);
    if ((uVar7 & 1) != 0) {
      if (*(int *)(param_5 + 0x28) != 2) {
        lVar10 = *(long *)(param_5 + 0x58);
        uVar3 = native_UnityEngine_Mathf__RoundToInt_8e50f0(fVar21 - *(float *)(param_5 + 0x40),0);
        if (lVar10 == 0) goto LAB_00941994;
        native_UIWidget__set_width_941dec(lVar10,uVar3);
        if (*(int *)(param_5 + 0x28) == 1) goto LAB_009417c8;
      }
      fVar13 = *(float *)(param_5 + 0x44);
      lVar10 = *(long *)(param_5 + 0x58);
LAB_009417ac:
      uVar3 = native_UnityEngine_Mathf__RoundToInt_8e50f0(fVar18 - fVar13,0);
      if (lVar10 == 0) goto LAB_00941994;
      native_UIWidget__set_height_942098(lVar10,uVar3);
      goto LAB_009417c8;
    }
    uVar9 = *(undefined8 *)(param_5 + 0x68);
    if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    uVar4 = native_UnityEngine_Object__op_Inequality_8d76fc(uVar9,0,0);
    if ((uVar4 & 1) != 0) {
      lVar10 = *(long *)(param_5 + 0x68);
      if (lVar10 == 0) goto LAB_00941994;
      uVar4 = (ulong)*(uint *)(lVar10 + 0x148);
      if (*(int *)(param_5 + 0x28) == 2) {
        param_3 = (ulong)*(uint *)(lVar10 + 0x14c);
LAB_009418fc:
        fVar18 = fVar18 - *(float *)(param_5 + 0x44);
      }
      else {
        param_3 = (ulong)(uint)(fVar21 - *(float *)(param_5 + 0x40));
        if (*(int *)(param_5 + 0x28) != 1) goto LAB_009418fc;
        fVar18 = *(float *)(lVar10 + 0x150);
      }
      native_UIPanel__set_baseClipRegion_af025c
                (*(undefined4 *)(lVar10 + 0x144),uVar4,param_3,fVar18,lVar10,0);
      goto LAB_009417c8;
    }
    if ((*(int *)(param_5 + 0x28) == 2) ||
       (uVar14 = (ulong)(uint)(fVar21 - *(float *)(param_5 + 0x40)), *(int *)(param_5 + 0x28) != 1))
    {
      uVar15 = (ulong)(uint)(fVar18 - *(float *)(param_5 + 0x44));
    }
  }
  else {
    if (*(long *)(param_5 + 0x60) == 0) goto LAB_00941994;
    lVar10 = native_UISprite__get_atlas_c358c4(*(long *)(param_5 + 0x60),0);
    if (lVar10 != 0) {
      plVar8 = *(long **)(param_5 + 0x60);
      if (plVar8 == (long *)0x0) goto LAB_00941994;
      fVar13 = (float)(**(code **)(*plVar8 + 0x458))(plVar8,*(undefined8 *)(*plVar8 + 0x460));
    }
    fVar19 = *(float *)(param_5 + 0x44);
    if (*(int *)(param_5 + 0x28) == 2) {
LAB_0094172c:
      lVar10 = *(long *)(param_5 + 0x60);
      fVar13 = fVar13 * fVar19;
      goto LAB_009417ac;
    }
    lVar10 = *(long *)(param_5 + 0x60);
    uVar3 = native_UnityEngine_Mathf__RoundToInt_8e50f0
                      (fVar21 - fVar13 * *(float *)(param_5 + 0x40),0);
    if (lVar10 == 0) goto LAB_00941994;
    native_UIWidget__set_width_941dec(lVar10,uVar3);
    if (*(int *)(param_5 + 0x28) != 1) goto LAB_0094172c;
LAB_009417c8:
    uVar14 = native_UnityEngine_Vector3__get_one_776a20(0);
    uVar15 = uVar4;
    uVar20 = param_3;
  }
  if (*(long *)(param_5 + 0x50) == 0) {
LAB_00941994:
                    /* WARNING: Subroutine does not return */
    native_sub_432810();
  }
  native_UnityEngine_Transform__get_localScale_771d80(*(long *)(param_5 + 0x50),0);
  uVar4 = native_UnityEngine_Vector3__op_Inequality_776c48(0);
  if ((uVar4 & 1) != 0) {
    if (*(long *)(param_5 + 0x50) == 0) goto LAB_00941994;
    native_UnityEngine_Transform__set_localScale_771e30
              (uVar14,uVar15,uVar20,*(long *)(param_5 + 0x50),0);
  }
  if ((*(char *)(param_5 + 0x2c) != '\0') &&
     (uVar4 = native_UnityEngine_Application__get_isPlaying_8d60cc(0), (uVar4 & 1) != 0)) {
    native_UnityEngine_Behaviour__set_enabled_8d7b0c(param_5,0,0);
  }
  return;
}



/* UIStretch$$Start @ 0x941998
 * void UIStretch__Start (UIStretch_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIStretch$$Start
   void UIStretch__Start (UIStretch_o* __this, const MethodInfo* method); */

void native_UIStretch__Start_941998(long param_1)

{
  undefined4 uVar1;
  ulong uVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  long *plVar5;
  long lVar6;
  
  if ((bRam000000000134140c & 1) == 0) {
    native_sub_43273c(&Method_NGUITools_FindInParents_UIRoot____12e5780);
    native_sub_43273c(&NGUITools_TypeInfo_12d53c8);
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    bRam000000000134140c = 1;
  }
  puVar3 = (undefined8 *)(param_1 + 0x20);
  uVar4 = *puVar3;
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar2 = native_UnityEngine_Object__op_Equality_8e9a3c(uVar4,0,0);
  if ((uVar2 & 1) != 0) {
    plVar5 = (long *)(param_1 + 0x48);
    lVar6 = *plVar5;
    if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    uVar2 = native_UnityEngine_Object__op_Inequality_8d76fc(lVar6,0,0);
    if ((uVar2 & 1) != 0) {
      if (*plVar5 == 0) goto LAB_00941b94;
      uVar4 = native_UnityEngine_Component__get_gameObject_8da66c(*plVar5,0);
      *puVar3 = uVar4;
      native_sub_4326e0(puVar3,uVar4);
      *plVar5 = 0;
      native_sub_4326e0(plVar5,0);
    }
  }
  puVar3 = (undefined8 *)(param_1 + 0x18);
  uVar4 = *puVar3;
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar2 = native_UnityEngine_Object__op_Equality_8e9a3c(uVar4,0,0);
  if ((uVar2 & 1) != 0) {
    lVar6 = native_UnityEngine_Component__get_gameObject_8da66c(param_1,0);
    if (lVar6 == 0) {
LAB_00941b94:
                    /* WARNING: Subroutine does not return */
      native_sub_432810();
    }
    uVar1 = native_UnityEngine_GameObject__get_layer_8de608(lVar6,0);
    if (((*(byte *)(_NGUITools_TypeInfo_12d53c8 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_NGUITools_TypeInfo_12d53c8 + 0xe0) == 0)) {
      native_sub_4327ec(_NGUITools_TypeInfo_12d53c8);
    }
    uVar4 = native_NGUITools__FindCameraForLayer_72d2e8(uVar1,0);
    *puVar3 = uVar4;
    native_sub_4326e0(puVar3,uVar4);
  }
  uVar4 = native_UnityEngine_Component__get_gameObject_8da66c(param_1,0);
  if (((*(byte *)(_NGUITools_TypeInfo_12d53c8 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_NGUITools_TypeInfo_12d53c8 + 0xe0) == 0)) {
    native_sub_4327ec(_NGUITools_TypeInfo_12d53c8);
  }
  uVar4 = native_NGUITools__FindInParents_object__4a5c04
                    (uVar4,_Method_NGUITools_FindInParents_UIRoot____12e5780);
  *(undefined8 *)(param_1 + 0x70) = uVar4;
  native_sub_4326e0();
  native_UIStretch__Update_940fbc(param_1);
  *(undefined1 *)(param_1 + 0x90) = 1;
  return;
}



/* UIStretch$$Update @ 0x940fbc
 * void UIStretch__Update (UIStretch_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIStretch$$Update
   void UIStretch__Update (UIStretch_o* __this, const MethodInfo* method); */

void native_UIStretch__Update_940fbc
               (undefined1 param_1 [16],ulong param_2,ulong param_3,ulong param_4,long param_5)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  ulong uVar7;
  long *plVar8;
  undefined8 uVar9;
  long lVar10;
  long lVar11;
  undefined4 uVar12;
  float fVar13;
  ulong uVar14;
  ulong uVar15;
  ulong uVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  ulong uVar20;
  float fVar21;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  
  if ((bRam000000000134140d & 1) == 0) {
    native_sub_43273c(&Method_UnityEngine_GameObject_GetComponent_UIPanel____12e4ac8);
    native_sub_43273c(&Method_UnityEngine_GameObject_GetComponent_UIWidget____12e4ae8);
    native_sub_43273c(&NGUIMath_TypeInfo_12d53b8);
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    bRam000000000134140d = 1;
  }
  uStack_80 = 0;
  uStack_78 = 0;
  uStack_70 = 0;
  uStack_a0 = 0;
  uStack_98 = 0;
  uStack_90 = 0;
  uStack_c0 = 0;
  uStack_b8 = 0;
  uStack_b0 = 0;
  uVar9 = *(undefined8 *)(param_5 + 0x78);
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar4 = native_UnityEngine_Object__op_Inequality_8d76fc(uVar9,0,0);
  if ((uVar4 & 1) != 0) {
    if (*(long *)(param_5 + 0x78) == 0) goto LAB_00941994;
    uVar4 = native_UnityEngine_Animation__get_isPlaying_db16b0(*(long *)(param_5 + 0x78),0);
    if ((uVar4 & 1) != 0) {
      return;
    }
  }
  if (*(int *)(param_5 + 0x28) == 0) {
    return;
  }
  uVar9 = *(undefined8 *)(param_5 + 0x20);
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar4 = native_UnityEngine_Object__op_Equality_8e9a3c(uVar9,0,0);
  lVar10 = 0;
  if ((uVar4 & 1) == 0) {
    if (*(long *)(param_5 + 0x20) == 0) goto LAB_00941994;
    lVar10 = native_UnityEngine_GameObject__GetComponent_BE2_BlockSectionHeader_Custom__4a2214
                       (*(long *)(param_5 + 0x20),
                        _Method_UnityEngine_GameObject_GetComponent_UIWidget____12e4ae8);
  }
  uVar9 = *(undefined8 *)(param_5 + 0x20);
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar4 = native_UnityEngine_Object__op_Equality_8e9a3c(uVar9,0,0);
  if ((uVar4 & 1) == 0) {
LAB_00941144:
    if (*(long *)(param_5 + 0x20) == 0) goto LAB_00941994;
    lVar11 = native_UnityEngine_GameObject__GetComponent_BE2_BlockSectionHeader_Custom__4a2214
                       (*(long *)(param_5 + 0x20),
                        _Method_UnityEngine_GameObject_GetComponent_UIPanel____12e4ac8);
  }
  else {
    if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    uVar4 = native_UnityEngine_Object__op_Equality_8e9a3c(lVar10,0,0);
    lVar11 = 0;
    if ((uVar4 & 1) == 0) goto LAB_00941144;
  }
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar4 = native_UnityEngine_Object__op_Inequality_8d76fc(lVar10,0,0);
  if ((uVar4 & 1) == 0) {
    uVar4 = param_2;
    if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
      native_sub_4327ec();
      uVar4 = param_2;
    }
    uVar14 = native_UnityEngine_Object__op_Inequality_8d76fc(lVar11,0,0);
    if ((uVar14 & 1) != 0) {
      if (lVar11 == 0) goto LAB_00941994;
      if (*(int *)(lVar11 + 0x140) != 0) {
        param_2 = param_4;
        fVar18 = (float)native_UIPanel__get_finalClipRegion_af03c8(lVar11,0);
        lVar10 = param_5 + 0x80;
        fVar13 = (float)param_3 * 0.5;
        uVar15 = (ulong)(uint)fVar13;
        uVar14 = param_3;
        native_UnityEngine_Rect__set_x_7635fc(fVar18 - fVar13,lVar10,0);
        native_UnityEngine_Rect__set_y_76360c((float)uVar4 - (float)param_2 * 0.5,lVar10,0);
        native_UnityEngine_Rect__set_width_763684(param_3,lVar10,0);
        uVar4 = uVar15;
        param_3 = uVar14;
        goto LAB_00941528;
      }
      uVar9 = *(undefined8 *)(param_5 + 0x70);
      if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
        native_sub_4327ec();
      }
      uVar14 = native_UnityEngine_Object__op_Inequality_8d76fc(uVar9,0,0);
      if ((uVar14 & 1) == 0) {
        fVar18 = 0.5;
      }
      else {
        if (*(long *)(param_5 + 0x70) == 0) goto LAB_00941994;
        iVar2 = native_UIRoot__get_activeHeight_c2f58c(*(long *)(param_5 + 0x70),0);
        iVar1 = native_UnityEngine_Screen__get_height_76a618(0);
        uVar4 = 0x3f000000;
        fVar18 = ((float)iVar2 / (float)iVar1) * 0.5;
      }
      lVar10 = param_5 + 0x80;
      iVar2 = native_UnityEngine_Screen__get_width_76a5e4(0);
      native_UnityEngine_Rect__set_xMin_7636a4(fVar18 * (float)-iVar2,lVar10,0);
      iVar2 = native_UnityEngine_Screen__get_height_76a618(0);
      native_UnityEngine_Rect__set_yMin_7636c0(fVar18 * (float)-iVar2,lVar10,0);
      fVar18 = (float)native_UnityEngine_Rect__get_xMin_76363c(lVar10,0);
      native_UnityEngine_Rect__set_xMax_7636dc(-fVar18,lVar10,0);
      fVar18 = (float)native_UnityEngine_Rect__get_yMin_763644(lVar10,0);
      native_UnityEngine_Rect__set_yMax_7636ec(-fVar18,lVar10,0);
      goto LAB_00941530;
    }
    uVar9 = *(undefined8 *)(param_5 + 0x20);
    param_2 = uVar4;
    if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
      native_sub_4327ec();
      param_2 = uVar4;
    }
    uVar3 = (undefined4)param_4;
    uVar4 = native_UnityEngine_Object__op_Inequality_8d76fc(uVar9,0,0);
    if ((uVar4 & 1) != 0) {
      lVar10 = native_UnityEngine_Component__get_transform_8da62c(param_5,0);
      if (lVar10 == 0) goto LAB_00941994;
      uVar9 = native_UnityEngine_Transform__get_parent_765eb0(lVar10,0);
      if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
        native_sub_4327ec(_UnityEngine_Object_TypeInfo_12d54e0);
      }
      uVar4 = native_UnityEngine_Object__op_Inequality_8d76fc(uVar9,0,0);
      if (*(long *)(param_5 + 0x20) == 0) goto LAB_00941994;
      uVar5 = native_UnityEngine_GameObject__get_transform_8de5c8(*(long *)(param_5 + 0x20),0);
      if ((uVar4 & 1) == 0) {
        if (((*(ushort *)(_NGUIMath_TypeInfo_12d53b8 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(_NGUIMath_TypeInfo_12d53b8 + 0xe0) == 0)) {
          native_sub_4327ec(_NGUIMath_TypeInfo_12d53b8);
        }
        native_NGUIMath__CalculateRelativeWidgetBounds_805a40(&uStack_d8,uVar5,0);
      }
      else {
        if (((*(ushort *)(_NGUIMath_TypeInfo_12d53b8 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(_NGUIMath_TypeInfo_12d53b8 + 0xe0) == 0)) {
          native_sub_4327ec(_NGUIMath_TypeInfo_12d53b8);
        }
        native_NGUIMath__CalculateRelativeWidgetBounds_805e1c(&uStack_d8,uVar9,uVar5,0);
      }
      uStack_b8 = uStack_d0;
      uStack_c0 = uStack_d8;
      uStack_b0 = uStack_c8;
      uStack_90 = uStack_c8;
      lVar10 = param_5 + 0x80;
      uStack_98 = uStack_d0;
      uStack_a0 = uStack_d8;
      native_UnityEngine_Bounds__get_min_8d7f18(&uStack_a0,0);
      native_UnityEngine_Rect__set_x_7635fc(lVar10,0);
      native_UnityEngine_Bounds__get_min_8d7f18(&uStack_a0,0);
      native_UnityEngine_Rect__set_y_76360c(param_2,lVar10,0);
      native_UnityEngine_Bounds__get_size_8d7ed8(&uStack_a0,0);
      native_UnityEngine_Rect__set_width_763684(lVar10,0);
      puVar6 = &uStack_a0;
      goto LAB_00941518;
    }
    uVar9 = *(undefined8 *)(param_5 + 0x18);
    uVar4 = param_2;
    if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
      native_sub_4327ec();
      uVar4 = param_2;
    }
    uVar14 = native_UnityEngine_Object__op_Inequality_8d76fc(uVar9,0,0);
    if ((uVar14 & 1) == 0) {
      return;
    }
    if (*(long *)(param_5 + 0x18) == 0) goto LAB_00941994;
    uVar12 = native_UnityEngine_Camera__get_pixelRect_8d8c9c(*(long *)(param_5 + 0x18),0);
    *(undefined4 *)(param_5 + 0x80) = uVar12;
    *(int *)(param_5 + 0x84) = (int)uVar4;
    *(int *)(param_5 + 0x88) = (int)param_3;
    *(undefined4 *)(param_5 + 0x8c) = uVar3;
    uVar9 = *(undefined8 *)(param_5 + 0x70);
    if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    uVar14 = native_UnityEngine_Object__op_Inequality_8d76fc(uVar9,0,0);
    if ((uVar14 & 1) == 0) goto LAB_00941530;
    if (*(long *)(param_5 + 0x70) == 0) goto LAB_00941994;
    fVar18 = (float)native_UIRoot__get_pixelSizeAdjustment_c2f740(*(long *)(param_5 + 0x70),0);
  }
  else {
    lVar11 = native_UnityEngine_Component__get_transform_8da62c(param_5,0);
    if ((lVar11 == 0) ||
       (uVar9 = native_UnityEngine_Transform__get_parent_765eb0(lVar11,0), lVar10 == 0))
    goto LAB_00941994;
    native_UIWidget__CalculateBounds_941b98(&uStack_d8,lVar10,uVar9);
    uStack_70 = uStack_c8;
    uStack_78 = uStack_d0;
    uStack_80 = uStack_d8;
    lVar10 = param_5 + 0x80;
    native_UnityEngine_Bounds__get_min_8d7f18(&uStack_80,0);
    native_UnityEngine_Rect__set_x_7635fc(lVar10,0);
    native_UnityEngine_Bounds__get_min_8d7f18(&uStack_80,0);
    native_UnityEngine_Rect__set_y_76360c(param_2,lVar10,0);
    native_UnityEngine_Bounds__get_size_8d7ed8(&uStack_80,0);
    native_UnityEngine_Rect__set_width_763684(lVar10,0);
    puVar6 = &uStack_80;
LAB_00941518:
    native_UnityEngine_Bounds__get_size_8d7ed8(puVar6,0);
    uVar4 = param_2;
LAB_00941528:
    native_UnityEngine_Rect__set_height_763694(param_2,param_5 + 0x80,0);
LAB_00941530:
    fVar18 = 1.0;
  }
  uVar14 = native_UnityEngine_Rect__get_width_76367c(param_5 + 0x80,0);
  uVar15 = native_UnityEngine_Rect__get_height_76368c(param_5 + 0x80,0);
  fVar13 = 1.0;
  if ((fVar18 != 1.0) && (fVar18 = (float)uVar15, 1.0 < fVar18)) {
    if (*(long *)(param_5 + 0x70) == 0) goto LAB_00941994;
    iVar2 = native_UIRoot__get_activeHeight_c2f58c(*(long *)(param_5 + 0x70),0);
    uVar14 = (ulong)(uint)((float)uVar14 * ((float)iVar2 / fVar18));
    uVar15 = (ulong)(uint)(fVar18 * ((float)iVar2 / fVar18));
  }
  uVar9 = *(undefined8 *)(param_5 + 0x58);
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar7 = native_UnityEngine_Object__op_Inequality_8d76fc(uVar9,0,0);
  if ((uVar7 & 1) == 0) {
    if (*(long *)(param_5 + 0x50) == 0) goto LAB_00941994;
    uVar16 = native_UnityEngine_Transform__get_localScale_771d80(*(long *)(param_5 + 0x50),0);
    uVar7 = uVar4;
    uVar20 = param_3;
  }
  else {
    lVar10 = *(long *)(param_5 + 0x58);
    if (lVar10 == 0) goto LAB_00941994;
    uVar4 = (ulong)*(uint *)(lVar10 + 0xa8);
    uVar16 = (ulong)(uint)(float)*(int *)(lVar10 + 0xa4);
    uVar7 = (ulong)(uint)(float)(int)*(uint *)(lVar10 + 0xa8);
    uVar20 = 0;
  }
  fVar18 = (float)uVar14;
  fVar21 = (float)uVar15;
  switch(*(int *)(param_5 + 0x28)) {
  case 2:
code_r0x0094167c:
    fVar18 = *(float *)(param_5 + 0x34);
    uVar14 = uVar16;
    break;
  default:
    uVar16 = (ulong)(uint)(fVar18 * *(float *)(param_5 + 0x30));
    uVar14 = uVar16;
    uVar15 = uVar7;
    if (*(int *)(param_5 + 0x28) != 1) goto code_r0x0094167c;
    goto LAB_00941688;
  case 4:
    fVar18 = *(float *)(param_5 + 0x34);
    uVar14 = (ulong)(uint)(fVar21 * *(float *)(param_5 + 0x30));
    break;
  case 5:
    fVar19 = *(float *)(param_5 + 0x38);
    fVar17 = *(float *)(param_5 + 0x3c);
    param_3 = (ulong)(uint)(fVar18 / fVar21);
    if (fVar18 / fVar21 <= fVar19 / fVar17) {
code_r0x00941658:
      uVar4 = (ulong)(uint)(fVar21 / fVar17);
      uVar14 = (ulong)(uint)(fVar19 * (fVar21 / fVar17));
      goto LAB_00941688;
    }
    goto code_r0x00941638;
  case 6:
    fVar19 = *(float *)(param_5 + 0x38);
    fVar17 = *(float *)(param_5 + 0x3c);
    param_3 = (ulong)(uint)(fVar18 / fVar21);
    if (fVar19 / fVar17 <= fVar18 / fVar21) goto code_r0x00941658;
code_r0x00941638:
    uVar4 = (ulong)(uint)fVar17;
    uVar15 = (ulong)(uint)(fVar17 * (fVar18 / fVar19));
    goto LAB_00941688;
  }
  uVar4 = (ulong)(uint)fVar18;
  uVar15 = (ulong)(uint)(fVar21 * fVar18);
LAB_00941688:
  uVar9 = *(undefined8 *)(param_5 + 0x60);
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar7 = native_UnityEngine_Object__op_Inequality_8d76fc(uVar9,0,0);
  fVar21 = (float)uVar14;
  fVar18 = (float)uVar15;
  if ((uVar7 & 1) == 0) {
    uVar9 = *(undefined8 *)(param_5 + 0x58);
    if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    uVar7 = native_UnityEngine_Object__op_Inequality_8d76fc(uVar9,0,0);
    if ((uVar7 & 1) != 0) {
      if (*(int *)(param_5 + 0x28) != 2) {
        lVar10 = *(long *)(param_5 + 0x58);
        uVar3 = native_UnityEngine_Mathf__RoundToInt_8e50f0(fVar21 - *(float *)(param_5 + 0x40),0);
        if (lVar10 == 0) goto LAB_00941994;
        native_UIWidget__set_width_941dec(lVar10,uVar3);
        if (*(int *)(param_5 + 0x28) == 1) goto LAB_009417c8;
      }
      fVar13 = *(float *)(param_5 + 0x44);
      lVar10 = *(long *)(param_5 + 0x58);
LAB_009417ac:
      uVar3 = native_UnityEngine_Mathf__RoundToInt_8e50f0(fVar18 - fVar13,0);
      if (lVar10 == 0) goto LAB_00941994;
      native_UIWidget__set_height_942098(lVar10,uVar3);
      goto LAB_009417c8;
    }
    uVar9 = *(undefined8 *)(param_5 + 0x68);
    if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    uVar4 = native_UnityEngine_Object__op_Inequality_8d76fc(uVar9,0,0);
    if ((uVar4 & 1) != 0) {
      lVar10 = *(long *)(param_5 + 0x68);
      if (lVar10 == 0) goto LAB_00941994;
      uVar4 = (ulong)*(uint *)(lVar10 + 0x148);
      if (*(int *)(param_5 + 0x28) == 2) {
        param_3 = (ulong)*(uint *)(lVar10 + 0x14c);
LAB_009418fc:
        fVar18 = fVar18 - *(float *)(param_5 + 0x44);
      }
      else {
        param_3 = (ulong)(uint)(fVar21 - *(float *)(param_5 + 0x40));
        if (*(int *)(param_5 + 0x28) != 1) goto LAB_009418fc;
        fVar18 = *(float *)(lVar10 + 0x150);
      }
      native_UIPanel__set_baseClipRegion_af025c
                (*(undefined4 *)(lVar10 + 0x144),uVar4,param_3,fVar18,lVar10,0);
      goto LAB_009417c8;
    }
    if ((*(int *)(param_5 + 0x28) == 2) ||
       (uVar14 = (ulong)(uint)(fVar21 - *(float *)(param_5 + 0x40)), *(int *)(param_5 + 0x28) != 1))
    {
      uVar15 = (ulong)(uint)(fVar18 - *(float *)(param_5 + 0x44));
    }
  }
  else {
    if (*(long *)(param_5 + 0x60) == 0) goto LAB_00941994;
    lVar10 = native_UISprite__get_atlas_c358c4(*(long *)(param_5 + 0x60),0);
    if (lVar10 != 0) {
      plVar8 = *(long **)(param_5 + 0x60);
      if (plVar8 == (long *)0x0) goto LAB_00941994;
      fVar13 = (float)(**(code **)(*plVar8 + 0x458))(plVar8,*(undefined8 *)(*plVar8 + 0x460));
    }
    fVar19 = *(float *)(param_5 + 0x44);
    if (*(int *)(param_5 + 0x28) == 2) {
LAB_0094172c:
      lVar10 = *(long *)(param_5 + 0x60);
      fVar13 = fVar13 * fVar19;
      goto LAB_009417ac;
    }
    lVar10 = *(long *)(param_5 + 0x60);
    uVar3 = native_UnityEngine_Mathf__RoundToInt_8e50f0
                      (fVar21 - fVar13 * *(float *)(param_5 + 0x40),0);
    if (lVar10 == 0) goto LAB_00941994;
    native_UIWidget__set_width_941dec(lVar10,uVar3);
    if (*(int *)(param_5 + 0x28) != 1) goto LAB_0094172c;
LAB_009417c8:
    uVar14 = native_UnityEngine_Vector3__get_one_776a20(0);
    uVar15 = uVar4;
    uVar20 = param_3;
  }
  if (*(long *)(param_5 + 0x50) == 0) {
LAB_00941994:
                    /* WARNING: Subroutine does not return */
    native_sub_432810();
  }
  native_UnityEngine_Transform__get_localScale_771d80(*(long *)(param_5 + 0x50),0);
  uVar4 = native_UnityEngine_Vector3__op_Inequality_776c48(0);
  if ((uVar4 & 1) != 0) {
    if (*(long *)(param_5 + 0x50) == 0) goto LAB_00941994;
    native_UnityEngine_Transform__set_localScale_771e30
              (uVar14,uVar15,uVar20,*(long *)(param_5 + 0x50),0);
  }
  if ((*(char *)(param_5 + 0x2c) != '\0') &&
     (uVar4 = native_UnityEngine_Application__get_isPlaying_8d60cc(0), (uVar4 & 1) != 0)) {
    native_UnityEngine_Behaviour__set_enabled_8d7b0c(param_5,0,0);
  }
  return;
}



/* UIStretch$$.ctor @ 0x942334
 * void UIStretch___ctor (UIStretch_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIStretch$$.ctor
   void UIStretch___ctor (UIStretch_o* __this, const MethodInfo* method); */

undefined1  [16]
native_UIStretch___ctor_942334(undefined1 param_1 [16],undefined4 param_2,ulong param_3)

{
  undefined4 uVar1;
  undefined1 auVar2 [16];
  
  *(undefined1 *)(param_3 + 0x2c) = 1;
  uVar1 = native_UnityEngine_Vector2__get_one_765354(0);
  *(undefined4 *)(param_3 + 0x30) = uVar1;
  *(undefined4 *)(param_3 + 0x34) = param_2;
  uVar1 = native_UnityEngine_Vector2__get_one_765354(0);
  *(undefined4 *)(param_3 + 0x38) = uVar1;
  *(undefined4 *)(param_3 + 0x3c) = param_2;
  uVar1 = native_UnityEngine_Vector2__get_zero_765ef0(0);
  *(undefined4 *)(param_3 + 0x40) = uVar1;
  *(undefined4 *)(param_3 + 0x44) = param_2;
  if ((bRam0000000001340ae0 & 1) == 0) {
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0,0);
    bRam0000000001340ae0 = 1;
  }
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  auVar2._8_8_ = 0;
  auVar2._0_8_ = param_3;
  return auVar2;
}


