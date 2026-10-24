/* ARM64 IL2CPP native pseudocode from Ghidra.
 * Recovered implementation, not original C# source.
 * Function boundaries follow the IL2CPP method address table. */


/* UIAnchor$$OnEnable @ 0x6e9adc
 * void UIAnchor__OnEnable (UIAnchor_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIAnchor$$OnEnable
   void UIAnchor__OnEnable (UIAnchor_o* __this, const MethodInfo* method); */

void native_UIAnchor__OnEnable_6e9adc
               (undefined1 param_1 [16],undefined8 param_2,undefined8 param_3,undefined8 param_4,
               long param_5)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  long *plVar7;
  long lVar8;
  ulong uVar9;
  long lVar10;
  double *pdVar11;
  ulong uVar12;
  ulong uVar13;
  uint uVar14;
  long *plVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  long lVar18;
  long lVar19;
  undefined4 uVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  double dVar25;
  undefined4 uVar26;
  undefined4 uVar27;
  ulong uVar28;
  undefined4 uVar29;
  double dStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  double dStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  double dStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  double dStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  
  if ((bRam000000000133f3cd & 1) == 0) {
    native_sub_43273c(&Method_UnityEngine_Component_GetComponent_Animation____12e2908);
    native_sub_43273c(&UICamera_OnScreenResize_TypeInfo_12d7a30);
    native_sub_43273c(&Method_UIAnchor_ScreenSizeChanged___12e77e0);
    native_sub_43273c(&UICamera_TypeInfo_12d6410);
    bRam000000000133f3cd = 1;
  }
  uVar6 = native_UnityEngine_Component__get_transform_8da62c(param_5,0);
  *(undefined8 *)(param_5 + 0x48) = uVar6;
  native_sub_4326e0(param_5 + 0x48);
  uVar6 = native_UnityEngine_Component__GetComponent_ActiveAnimation__49daec
                    (param_5,_Method_UnityEngine_Component_GetComponent_Animation____12e2908);
  *(undefined8 *)(param_5 + 0x50) = uVar6;
  native_sub_4326e0(param_5 + 0x50);
  if (((*(byte *)(_UICamera_TypeInfo_12d6410 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar16 = *(undefined8 *)(*(long *)(_UICamera_TypeInfo_12d6410 + 0xb8) + 0x48);
  uVar6 = native_sub_432808(_UICamera_OnScreenResize_TypeInfo_12d7a30);
  native_UICamera_OnScreenResize___ctor_553168
            (uVar6,param_5,_Method_UIAnchor_ScreenSizeChanged___12e77e0,0);
  plVar7 = (long *)native_System_Delegate__Combine_a6cf00(uVar16,uVar6,0);
  if ((plVar7 == (long *)0x0) || (*plVar7 == _UICamera_OnScreenResize_TypeInfo_12d7a30)) {
    plVar15 = (long *)(*(long *)(_UICamera_TypeInfo_12d6410 + 0xb8) + 0x48);
    *plVar15 = (long)plVar7;
native_sub_41086c:
    if (iRam0000000001345318 != 0) {
      puVar1 = (ulong *)(((ulong)plVar15 >> 0x12 & 0x7fff) * 8 + 0x138ecd8);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = *puVar1 | 1L << ((ulong)plVar15 >> 0xc & 0x3f);
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    return;
  }
  uVar6 = native_sub_432b04(plVar7);
  if ((bRam000000000133f3ce & 1) == 0) {
    native_sub_43273c(&UICamera_OnScreenResize_TypeInfo_12d7a30);
    native_sub_43273c(&Method_UIAnchor_ScreenSizeChanged___12e77e0);
    native_sub_43273c(&UICamera_TypeInfo_12d6410);
    bRam000000000133f3ce = 1;
  }
  if (((*(byte *)(_UICamera_TypeInfo_12d6410 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar17 = *(undefined8 *)(*(long *)(_UICamera_TypeInfo_12d6410 + 0xb8) + 0x48);
  uVar16 = native_sub_432808(_UICamera_OnScreenResize_TypeInfo_12d7a30);
  native_UICamera_OnScreenResize___ctor_553168
            (uVar16,uVar6,_Method_UIAnchor_ScreenSizeChanged___12e77e0,0);
  plVar7 = (long *)native_System_Delegate__Remove_a6d1c0(uVar17,uVar16,0);
  if ((plVar7 == (long *)0x0) || (*plVar7 == _UICamera_OnScreenResize_TypeInfo_12d7a30)) {
    plVar15 = (long *)(*(long *)(_UICamera_TypeInfo_12d6410 + 0xb8) + 0x48);
    *plVar15 = (long)plVar7;
    goto native_sub_41086c;
  }
  lVar8 = native_sub_432b04(plVar7);
  if ((*(char *)(lVar8 + 0x70) == '\0') || (*(char *)(lVar8 + 0x2c) == '\0')) {
    return;
  }
  if ((bRam000000000133f3d0 & 1) == 0) {
    native_sub_43273c(&Method_UnityEngine_GameObject_GetComponent_UIPanel____12e4ac8);
    native_sub_43273c(&Method_UnityEngine_GameObject_GetComponent_UIWidget____12e4ae8);
    native_sub_43273c(&NGUIMath_TypeInfo_12d53b8);
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    bRam000000000133f3d0 = 1;
  }
  dStack_100 = 0.0;
  uStack_f8 = 0;
  uStack_f0 = 0;
  dStack_120 = 0.0;
  uStack_118 = 0;
  uStack_110 = 0;
  dStack_140 = 0.0;
  uStack_138 = 0;
  uStack_130 = 0;
  uVar6 = *(undefined8 *)(lVar8 + 0x50);
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar9 = native_UnityEngine_Object__op_Inequality_8d76fc(uVar6,0,0);
  if ((uVar9 & 1) != 0) {
    if (*(long *)(lVar8 + 0x50) == 0) goto LAB_006ea904;
    uVar9 = native_UnityEngine_Behaviour__get_enabled_8d7acc(*(long *)(lVar8 + 0x50),0);
    if ((uVar9 & 1) != 0) {
      if (*(long *)(lVar8 + 0x50) == 0) goto LAB_006ea904;
      uVar9 = native_UnityEngine_Animation__get_isPlaying_db16b0(*(long *)(lVar8 + 0x50),0);
      if ((uVar9 & 1) != 0) {
        return;
      }
    }
  }
  uVar6 = *(undefined8 *)(lVar8 + 0x48);
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar9 = native_UnityEngine_Object__op_Equality_8e9a3c(uVar6,0,0);
  if ((uVar9 & 1) != 0) {
    return;
  }
  uVar6 = *(undefined8 *)(lVar8 + 0x20);
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar9 = native_UnityEngine_Object__op_Equality_8e9a3c(uVar6,0,0);
  lVar19 = 0;
  if ((uVar9 & 1) == 0) {
    if (*(long *)(lVar8 + 0x20) == 0) goto LAB_006ea904;
    lVar19 = native_UnityEngine_GameObject__GetComponent_BE2_BlockSectionHeader_Custom__4a2214
                       (*(long *)(lVar8 + 0x20),
                        _Method_UnityEngine_GameObject_GetComponent_UIWidget____12e4ae8);
  }
  uVar6 = *(undefined8 *)(lVar8 + 0x20);
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar9 = native_UnityEngine_Object__op_Equality_8e9a3c(uVar6,0,0);
  if ((uVar9 & 1) == 0) {
LAB_006e9f00:
    if (*(long *)(lVar8 + 0x20) == 0) goto LAB_006ea904;
    lVar18 = native_UnityEngine_GameObject__GetComponent_BE2_BlockSectionHeader_Custom__4a2214
                       (*(long *)(lVar8 + 0x20),
                        _Method_UnityEngine_GameObject_GetComponent_UIPanel____12e4ac8);
  }
  else {
    if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    uVar9 = native_UnityEngine_Object__op_Equality_8e9a3c(lVar19,0,0);
    lVar18 = 0;
    if ((uVar9 & 1) == 0) goto LAB_006e9f00;
  }
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar9 = native_UnityEngine_Object__op_Inequality_8d76fc(lVar19,0,0);
  if ((uVar9 & 1) == 0) {
    uVar6 = param_2;
    if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
      native_sub_4327ec();
      uVar6 = param_2;
    }
    uVar9 = native_UnityEngine_Object__op_Inequality_8d76fc(lVar18,0,0);
    if ((uVar9 & 1) != 0) {
      if (lVar18 == 0) goto LAB_006ea904;
      if (*(int *)(lVar18 + 0x140) != 0) {
        param_2 = param_4;
        fVar21 = (float)native_UIPanel__get_finalClipRegion_af03c8(lVar18,0);
        lVar19 = lVar8 + 0x58;
        native_UnityEngine_Rect__set_x_7635fc(fVar21 - (float)param_3 * 0.5,lVar19,0);
        native_UnityEngine_Rect__set_y_76360c((float)uVar6 - (float)param_2 * 0.5,lVar19,0);
        native_UnityEngine_Rect__set_width_763684(param_3,lVar19,0);
        goto LAB_006ea2b8;
      }
      uVar6 = *(undefined8 *)(lVar8 + 0x68);
      if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
        native_sub_4327ec();
      }
      uVar9 = native_UnityEngine_Object__op_Inequality_8d76fc(uVar6,0,0);
      if ((uVar9 & 1) == 0) {
        fVar21 = 0.5;
      }
      else {
        if (*(long *)(lVar8 + 0x68) == 0) goto LAB_006ea904;
        iVar4 = native_UIRoot__get_activeHeight_c2f58c(*(long *)(lVar8 + 0x68),0);
        iVar5 = native_UnityEngine_Screen__get_height_76a618(0);
        fVar21 = ((float)iVar4 / (float)iVar5) * 0.5;
      }
      lVar19 = lVar8 + 0x58;
      iVar4 = native_UnityEngine_Screen__get_width_76a5e4(0);
      native_UnityEngine_Rect__set_xMin_7636a4(fVar21 * (float)-iVar4,lVar19,0);
      iVar4 = native_UnityEngine_Screen__get_height_76a618(0);
      native_UnityEngine_Rect__set_yMin_7636c0(fVar21 * (float)-iVar4,lVar19,0);
      fVar21 = (float)native_UnityEngine_Rect__get_xMin_76363c(lVar19,0);
      native_UnityEngine_Rect__set_xMax_7636dc(-fVar21,lVar19,0);
      fVar21 = (float)native_UnityEngine_Rect__get_yMin_763644(lVar19,0);
      native_UnityEngine_Rect__set_yMax_7636ec(-fVar21,lVar19,0);
      goto LAB_006ea2c0;
    }
    uVar16 = *(undefined8 *)(lVar8 + 0x20);
    param_2 = uVar6;
    if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
      native_sub_4327ec();
      param_2 = uVar6;
    }
    uVar29 = (undefined4)param_4;
    uVar27 = (undefined4)param_3;
    uVar9 = native_UnityEngine_Object__op_Inequality_8d76fc(uVar16,0,0);
    if ((uVar9 & 1) != 0) {
      if ((*(long *)(lVar8 + 0x20) == 0) ||
         (lVar19 = native_UnityEngine_GameObject__get_transform_8de5c8(*(long *)(lVar8 + 0x20),0),
         lVar19 == 0)) goto LAB_006ea904;
      uVar6 = native_UnityEngine_Transform__get_parent_765eb0(lVar19,0);
      if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
        native_sub_4327ec(_UnityEngine_Object_TypeInfo_12d54e0);
      }
      uVar9 = native_UnityEngine_Object__op_Inequality_8d76fc(uVar6,0,0);
      if (*(long *)(lVar8 + 0x20) == 0) goto LAB_006ea904;
      uVar16 = native_UnityEngine_GameObject__get_transform_8de5c8(*(long *)(lVar8 + 0x20),0);
      if ((uVar9 & 1) == 0) {
        if (((*(ushort *)(_NGUIMath_TypeInfo_12d53b8 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(_NGUIMath_TypeInfo_12d53b8 + 0xe0) == 0)) {
          native_sub_4327ec(_NGUIMath_TypeInfo_12d53b8);
        }
        native_NGUIMath__CalculateRelativeWidgetBounds_805a40(&dStack_158,uVar16,0);
      }
      else {
        if (((*(ushort *)(_NGUIMath_TypeInfo_12d53b8 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(_NGUIMath_TypeInfo_12d53b8 + 0xe0) == 0)) {
          native_sub_4327ec(_NGUIMath_TypeInfo_12d53b8);
        }
        native_NGUIMath__CalculateRelativeWidgetBounds_805e1c(&dStack_158,uVar6,uVar16,0);
      }
      uStack_138 = uStack_150;
      dStack_140 = dStack_158;
      uStack_130 = uStack_148;
      uStack_110 = uStack_148;
      lVar19 = lVar8 + 0x58;
      uStack_118 = uStack_150;
      dStack_120 = dStack_158;
      native_UnityEngine_Bounds__get_min_8d7f18(&dStack_120,0);
      native_UnityEngine_Rect__set_x_7635fc(lVar19,0);
      native_UnityEngine_Bounds__get_min_8d7f18(&dStack_120,0);
      native_UnityEngine_Rect__set_y_76360c(param_2,lVar19,0);
      native_UnityEngine_Bounds__get_size_8d7ed8(&dStack_120,0);
      native_UnityEngine_Rect__set_width_763684(lVar19,0);
      pdVar11 = &dStack_120;
      goto LAB_006ea2a8;
    }
    uVar6 = *(undefined8 *)(lVar8 + 0x18);
    if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    uVar26 = (undefined4)param_2;
    uVar9 = native_UnityEngine_Object__op_Inequality_8d76fc(uVar6,0,0);
    if ((uVar9 & 1) == 0) {
      return;
    }
    if (*(long *)(lVar8 + 0x18) == 0) goto LAB_006ea904;
    uVar20 = native_UnityEngine_Camera__get_pixelRect_8d8c9c(*(long *)(lVar8 + 0x18),0);
    *(undefined4 *)(lVar8 + 0x58) = uVar20;
    bVar3 = true;
    *(undefined4 *)(lVar8 + 0x5c) = uVar26;
    *(undefined4 *)(lVar8 + 0x60) = uVar27;
    *(undefined4 *)(lVar8 + 100) = uVar29;
  }
  else {
    if (((*(long *)(lVar8 + 0x20) == 0) ||
        (lVar10 = native_UnityEngine_GameObject__get_transform_8de5c8(*(long *)(lVar8 + 0x20),0),
        lVar10 == 0)) ||
       (uVar6 = native_UnityEngine_Transform__get_parent_765eb0(lVar10,0), lVar19 == 0))
    goto LAB_006ea904;
    native_UIWidget__CalculateBounds_941b98(&dStack_158,lVar19,uVar6,0);
    uStack_f0 = uStack_148;
    uStack_f8 = uStack_150;
    dStack_100 = dStack_158;
    lVar19 = lVar8 + 0x58;
    native_UnityEngine_Bounds__get_min_8d7f18(&dStack_100,0);
    native_UnityEngine_Rect__set_x_7635fc(lVar19,0);
    native_UnityEngine_Bounds__get_min_8d7f18(&dStack_100,0);
    native_UnityEngine_Rect__set_y_76360c(param_2,lVar19,0);
    native_UnityEngine_Bounds__get_size_8d7ed8(&dStack_100,0);
    native_UnityEngine_Rect__set_width_763684(lVar19,0);
    pdVar11 = &dStack_100;
LAB_006ea2a8:
    native_UnityEngine_Bounds__get_size_8d7ed8(pdVar11,0);
LAB_006ea2b8:
    native_UnityEngine_Rect__set_height_763694(param_2,lVar8 + 0x58,0);
LAB_006ea2c0:
    bVar3 = false;
  }
  lVar19 = lVar8 + 0x58;
  fVar21 = (float)native_UnityEngine_Rect__get_xMin_76363c(lVar19,0);
  fVar22 = (float)native_UnityEngine_Rect__get_xMax_76365c(lVar19,0);
  fVar23 = (float)native_UnityEngine_Rect__get_yMin_763644(lVar19,0);
  fVar24 = (float)native_UnityEngine_Rect__get_yMax_76366c(lVar19,0);
  uVar14 = *(uint *)(lVar8 + 0x28);
  fVar23 = (fVar23 + fVar24) * 0.5;
  if (uVar14 - 3 < 6) {
    fVar21 = (fVar21 + fVar22) * 0.5;
    switch(uVar14) {
    case 3:
    case 7:
      goto code_r0x006ea35c;
    default:
      fVar21 = (float)native_UnityEngine_Rect__get_xMax_76365c(lVar19,0);
      goto code_r0x006ea354;
    case 8:
      goto LAB_006ea3a0;
    }
  }
  fVar21 = (float)native_UnityEngine_Rect__get_xMin_76363c(lVar19,0);
code_r0x006ea354:
  uVar14 = *(uint *)(lVar8 + 0x28);
code_r0x006ea35c:
  if (uVar14 < 9) {
    uVar14 = 1 << (ulong)(uVar14 & 0x1f);
    if ((uVar14 & 0x1c) == 0) {
      if ((uVar14 & 0x122) == 0) goto LAB_006ea380;
    }
    else {
      fVar23 = (float)native_UnityEngine_Rect__get_yMax_76366c(lVar19,0);
    }
  }
  else {
LAB_006ea380:
    fVar23 = (float)native_UnityEngine_Rect__get_yMin_763644(lVar19,0);
  }
LAB_006ea3a0:
  fVar22 = (float)native_UnityEngine_Rect__get_width_76367c(lVar19,0);
  fVar24 = (float)native_UnityEngine_Rect__get_height_76368c(lVar19,0);
  uVar28 = (ulong)(uint)*(float *)(lVar8 + 0x34);
  fVar21 = fVar21 + *(float *)(lVar8 + 0x38) + fVar22 * *(float *)(lVar8 + 0x30);
  fVar23 = fVar23 + *(float *)(lVar8 + 0x3c) + fVar24 * *(float *)(lVar8 + 0x34);
  uVar9 = (ulong)(uint)fVar23;
  if (bVar3) {
    if (*(long *)(lVar8 + 0x18) == 0) goto LAB_006ea904;
    uVar12 = native_UnityEngine_Camera__get_orthographic_8d86c0(*(long *)(lVar8 + 0x18),0);
    if ((uVar12 & 1) != 0) {
      dVar25 = (double)func_0x002c9600((double)fVar21,&dStack_158);
      if (0.0 <= fVar21) {
        if (dVar25 == 0.5) {
          fVar22 = 1.0;
          goto LAB_006ea48c;
        }
        fVar21 = (float)(int)(fVar21 + 0.5);
      }
      else if (dVar25 == -0.5) {
        fVar22 = -1.0;
LAB_006ea48c:
        fVar21 = (float)dStack_158;
        if (((long)dStack_158 & 1U) != 0) {
          fVar21 = (float)dStack_158 + fVar22;
        }
      }
      else {
        fVar21 = (float)(int)(fVar21 + -0.5);
      }
      dVar25 = (double)func_0x002c9600((double)fVar23,&dStack_158);
      if (0.0 <= fVar23) {
        if (dVar25 == 0.5) {
          fVar22 = 1.0;
          goto LAB_006ea710;
        }
        uVar9 = (ulong)(uint)(int)(fVar23 + 0.5);
      }
      else if (dVar25 == -0.5) {
        fVar22 = -1.0;
LAB_006ea710:
        fVar23 = (float)dStack_158;
        if (((long)dStack_158 & 1U) != 0) {
          fVar23 = (float)dStack_158 + fVar22;
        }
        uVar9 = (ulong)(uint)fVar23;
      }
      else {
        uVar9 = (ulong)(uint)(int)(fVar23 + -0.5);
      }
    }
    if (*(long *)(lVar8 + 0x48) == 0) goto LAB_006ea904;
    lVar19 = *(long *)(lVar8 + 0x18);
    native_UnityEngine_Transform__get_position_77169c(*(long *)(lVar8 + 0x48),0);
    if (lVar19 == 0) goto LAB_006ea904;
    native_UnityEngine_Camera__WorldToScreenPoint_8d9158(lVar19,0);
    if (*(long *)(lVar8 + 0x18) == 0) goto LAB_006ea904;
    uVar12 = native_UnityEngine_Camera__ScreenToWorldPoint_8d9170
                       (fVar21,uVar9,*(long *)(lVar8 + 0x18),0);
    if (*(long *)(lVar8 + 0x18) == 0) goto LAB_006ea904;
    uVar13 = native_UnityEngine_Camera__get_orthographic_8d86c0(*(long *)(lVar8 + 0x18),0);
    if ((uVar13 & 1) != 0) {
      if (*(long *)(lVar8 + 0x48) == 0) goto LAB_006ea904;
      uVar6 = native_UnityEngine_Transform__get_parent_765eb0(*(long *)(lVar8 + 0x48),0);
      if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
        native_sub_4327ec(_UnityEngine_Object_TypeInfo_12d54e0);
      }
      uVar13 = native_UnityEngine_Object__op_Inequality_8d76fc(uVar6,0,0);
      if ((uVar13 & 1) != 0) {
        if ((*(long *)(lVar8 + 0x48) == 0) ||
           (lVar19 = native_UnityEngine_Transform__get_parent_765eb0(*(long *)(lVar8 + 0x48),0),
           lVar19 == 0)) goto LAB_006ea904;
        native_UnityEngine_Transform__InverseTransformPoint_7729a0(uVar12,uVar9,uVar28,lVar19,0);
        iVar4 = native_UnityEngine_Mathf__RoundToInt_8e50f0(0);
        iVar5 = native_UnityEngine_Mathf__RoundToInt_8e50f0(uVar9,0);
        if (*(long *)(lVar8 + 0x48) == 0) goto LAB_006ea904;
        native_UnityEngine_Transform__get_localPosition_7717f4(*(long *)(lVar8 + 0x48),0);
        uVar9 = native_UnityEngine_Vector3__op_Inequality_776c48(0);
        if ((uVar9 & 1) != 0) {
          if (*(long *)(lVar8 + 0x48) == 0) goto LAB_006ea904;
          native_UnityEngine_Transform__set_localPosition_7718a4
                    ((float)iVar4,(float)iVar5,uVar28,*(long *)(lVar8 + 0x48),0);
        }
        goto LAB_006ea8c0;
      }
    }
  }
  else {
    dVar25 = (double)func_0x002c9600((double)fVar21,&dStack_158);
    if (0.0 <= fVar21) {
      if (dVar25 == 0.5) {
        fVar21 = 1.0;
        goto LAB_006ea460;
      }
      uVar12 = (ulong)(uint)(int)(fVar21 + 0.5);
    }
    else if (dVar25 == -0.5) {
      fVar21 = -1.0;
LAB_006ea460:
      fVar22 = (float)dStack_158;
      if (((long)dStack_158 & 1U) != 0) {
        fVar22 = (float)dStack_158 + fVar21;
      }
      uVar12 = (ulong)(uint)fVar22;
    }
    else {
      uVar12 = (ulong)(uint)(int)(fVar21 + -0.5);
    }
    dVar25 = (double)func_0x002c9600((double)fVar23,&dStack_158);
    if (0.0 <= fVar23) {
      if (dVar25 == 0.5) {
        fVar21 = 1.0;
        goto LAB_006ea4fc;
      }
      uVar9 = (ulong)(uint)(int)(fVar23 + 0.5);
    }
    else if (dVar25 == -0.5) {
      fVar21 = -1.0;
LAB_006ea4fc:
      fVar22 = (float)dStack_158;
      if (((long)dStack_158 & 1U) != 0) {
        fVar22 = (float)dStack_158 + fVar21;
      }
      uVar9 = (ulong)(uint)fVar22;
    }
    else {
      uVar9 = (ulong)(uint)(int)(fVar23 + -0.5);
    }
    if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    uVar13 = native_UnityEngine_Object__op_Inequality_8d76fc(lVar18,0,0);
    if ((uVar13 & 1) == 0) {
      uVar6 = *(undefined8 *)(lVar8 + 0x20);
      if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
        native_sub_4327ec();
      }
      uVar13 = native_UnityEngine_Object__op_Inequality_8d76fc(uVar6,0,0);
      if ((uVar13 & 1) != 0) {
        if ((*(long *)(lVar8 + 0x20) == 0) ||
           (lVar19 = native_UnityEngine_GameObject__get_transform_8de5c8(*(long *)(lVar8 + 0x20),0),
           lVar19 == 0)) goto LAB_006ea904;
        lVar19 = native_UnityEngine_Transform__get_parent_765eb0(lVar19,0);
        if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
           (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
          native_sub_4327ec(_UnityEngine_Object_TypeInfo_12d54e0);
        }
        uVar13 = native_UnityEngine_Object__op_Inequality_8d76fc(lVar19,0,0);
        if ((uVar13 & 1) != 0) goto joined_r0x006ea60c;
      }
    }
    else {
      if (lVar18 == 0) goto LAB_006ea904;
      lVar19 = native_UIRect__get_cachedTransform_c27c58(lVar18,0);
joined_r0x006ea60c:
      if (lVar19 == 0) goto LAB_006ea904;
      uVar28 = 0;
      uVar12 = native_UnityEngine_Transform__TransformPoint_7728d8(uVar12,uVar9,0,lVar19,0);
    }
    if (*(long *)(lVar8 + 0x48) == 0) goto LAB_006ea904;
    native_UnityEngine_Transform__get_position_77169c(*(long *)(lVar8 + 0x48),0);
  }
  if (*(long *)(lVar8 + 0x48) != 0) {
    native_UnityEngine_Transform__get_position_77169c(*(long *)(lVar8 + 0x48),0);
    uVar13 = native_UnityEngine_Vector3__op_Inequality_776c48(0);
    if ((uVar13 & 1) != 0) {
      if (*(long *)(lVar8 + 0x48) == 0) goto LAB_006ea904;
      native_UnityEngine_Transform__set_position_77174c
                (uVar12,uVar9,uVar28,*(long *)(lVar8 + 0x48),0);
    }
LAB_006ea8c0:
    if ((*(char *)(lVar8 + 0x2c) != '\0') &&
       (uVar9 = native_UnityEngine_Application__get_isPlaying_8d60cc(0), (uVar9 & 1) != 0)) {
      native_UnityEngine_Behaviour__set_enabled_8d7b0c(lVar8,0,0);
    }
    return;
  }
LAB_006ea904:
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* UIAnchor$$OnDisable @ 0x6e9c28
 * void UIAnchor__OnDisable (UIAnchor_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIAnchor$$OnDisable
   void UIAnchor__OnDisable (UIAnchor_o* __this, const MethodInfo* method); */

void native_UIAnchor__OnDisable_6e9c28
               (undefined1 param_1 [16],undefined8 param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  long *plVar7;
  long lVar8;
  ulong uVar9;
  long lVar10;
  double *pdVar11;
  ulong uVar12;
  ulong uVar13;
  uint uVar14;
  long *plVar15;
  undefined8 uVar16;
  long lVar17;
  long lVar18;
  undefined4 uVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  double dVar24;
  undefined4 uVar25;
  undefined4 uVar26;
  ulong uVar27;
  undefined4 uVar28;
  double dStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  double dStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  double dStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  double dStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  
  if ((bRam000000000133f3ce & 1) == 0) {
    native_sub_43273c(&UICamera_OnScreenResize_TypeInfo_12d7a30);
    native_sub_43273c(&Method_UIAnchor_ScreenSizeChanged___12e77e0);
    native_sub_43273c(&UICamera_TypeInfo_12d6410);
    bRam000000000133f3ce = 1;
  }
  if (((*(byte *)(_UICamera_TypeInfo_12d6410 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar16 = *(undefined8 *)(*(long *)(_UICamera_TypeInfo_12d6410 + 0xb8) + 0x48);
  uVar6 = native_sub_432808(_UICamera_OnScreenResize_TypeInfo_12d7a30);
  native_UICamera_OnScreenResize___ctor_553168
            (uVar6,param_5,_Method_UIAnchor_ScreenSizeChanged___12e77e0,0);
  plVar7 = (long *)native_System_Delegate__Remove_a6d1c0(uVar16,uVar6,0);
  if ((plVar7 == (long *)0x0) || (*plVar7 == _UICamera_OnScreenResize_TypeInfo_12d7a30)) {
    plVar15 = (long *)(*(long *)(_UICamera_TypeInfo_12d6410 + 0xb8) + 0x48);
    *plVar15 = (long)plVar7;
    if (iRam0000000001345318 != 0) {
      puVar1 = (ulong *)(((ulong)plVar15 >> 0x12 & 0x7fff) * 8 + 0x138ecd8);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = *puVar1 | 1L << ((ulong)plVar15 >> 0xc & 0x3f);
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    return;
  }
  lVar8 = native_sub_432b04(plVar7);
  if ((*(char *)(lVar8 + 0x70) == '\0') || (*(char *)(lVar8 + 0x2c) == '\0')) {
    return;
  }
  if ((bRam000000000133f3d0 & 1) == 0) {
    native_sub_43273c(&Method_UnityEngine_GameObject_GetComponent_UIPanel____12e4ac8);
    native_sub_43273c(&Method_UnityEngine_GameObject_GetComponent_UIWidget____12e4ae8);
    native_sub_43273c(&NGUIMath_TypeInfo_12d53b8);
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    bRam000000000133f3d0 = 1;
  }
  dStack_c0 = 0.0;
  uStack_b8 = 0;
  uStack_b0 = 0;
  dStack_e0 = 0.0;
  uStack_d8 = 0;
  uStack_d0 = 0;
  dStack_100 = 0.0;
  uStack_f8 = 0;
  uStack_f0 = 0;
  uVar6 = *(undefined8 *)(lVar8 + 0x50);
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar9 = native_UnityEngine_Object__op_Inequality_8d76fc(uVar6,0,0);
  if ((uVar9 & 1) != 0) {
    if (*(long *)(lVar8 + 0x50) == 0) goto LAB_006ea904;
    uVar9 = native_UnityEngine_Behaviour__get_enabled_8d7acc(*(long *)(lVar8 + 0x50),0);
    if ((uVar9 & 1) != 0) {
      if (*(long *)(lVar8 + 0x50) == 0) goto LAB_006ea904;
      uVar9 = native_UnityEngine_Animation__get_isPlaying_db16b0(*(long *)(lVar8 + 0x50),0);
      if ((uVar9 & 1) != 0) {
        return;
      }
    }
  }
  uVar6 = *(undefined8 *)(lVar8 + 0x48);
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar9 = native_UnityEngine_Object__op_Equality_8e9a3c(uVar6,0,0);
  if ((uVar9 & 1) != 0) {
    return;
  }
  uVar6 = *(undefined8 *)(lVar8 + 0x20);
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar9 = native_UnityEngine_Object__op_Equality_8e9a3c(uVar6,0,0);
  lVar18 = 0;
  if ((uVar9 & 1) == 0) {
    if (*(long *)(lVar8 + 0x20) == 0) goto LAB_006ea904;
    lVar18 = native_UnityEngine_GameObject__GetComponent_BE2_BlockSectionHeader_Custom__4a2214
                       (*(long *)(lVar8 + 0x20),
                        _Method_UnityEngine_GameObject_GetComponent_UIWidget____12e4ae8);
  }
  uVar6 = *(undefined8 *)(lVar8 + 0x20);
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar9 = native_UnityEngine_Object__op_Equality_8e9a3c(uVar6,0,0);
  if ((uVar9 & 1) == 0) {
LAB_006e9f00:
    if (*(long *)(lVar8 + 0x20) == 0) goto LAB_006ea904;
    lVar17 = native_UnityEngine_GameObject__GetComponent_BE2_BlockSectionHeader_Custom__4a2214
                       (*(long *)(lVar8 + 0x20),
                        _Method_UnityEngine_GameObject_GetComponent_UIPanel____12e4ac8);
  }
  else {
    if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    uVar9 = native_UnityEngine_Object__op_Equality_8e9a3c(lVar18,0,0);
    lVar17 = 0;
    if ((uVar9 & 1) == 0) goto LAB_006e9f00;
  }
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar9 = native_UnityEngine_Object__op_Inequality_8d76fc(lVar18,0,0);
  if ((uVar9 & 1) == 0) {
    uVar6 = param_2;
    if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
      native_sub_4327ec();
      uVar6 = param_2;
    }
    uVar9 = native_UnityEngine_Object__op_Inequality_8d76fc(lVar17,0,0);
    if ((uVar9 & 1) != 0) {
      if (lVar17 == 0) goto LAB_006ea904;
      if (*(int *)(lVar17 + 0x140) != 0) {
        param_2 = param_4;
        fVar20 = (float)native_UIPanel__get_finalClipRegion_af03c8(lVar17,0);
        lVar18 = lVar8 + 0x58;
        native_UnityEngine_Rect__set_x_7635fc(fVar20 - (float)param_3 * 0.5,lVar18,0);
        native_UnityEngine_Rect__set_y_76360c((float)uVar6 - (float)param_2 * 0.5,lVar18,0);
        native_UnityEngine_Rect__set_width_763684(param_3,lVar18,0);
        goto LAB_006ea2b8;
      }
      uVar6 = *(undefined8 *)(lVar8 + 0x68);
      if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
        native_sub_4327ec();
      }
      uVar9 = native_UnityEngine_Object__op_Inequality_8d76fc(uVar6,0,0);
      if ((uVar9 & 1) == 0) {
        fVar20 = 0.5;
      }
      else {
        if (*(long *)(lVar8 + 0x68) == 0) goto LAB_006ea904;
        iVar4 = native_UIRoot__get_activeHeight_c2f58c(*(long *)(lVar8 + 0x68),0);
        iVar5 = native_UnityEngine_Screen__get_height_76a618(0);
        fVar20 = ((float)iVar4 / (float)iVar5) * 0.5;
      }
      lVar18 = lVar8 + 0x58;
      iVar4 = native_UnityEngine_Screen__get_width_76a5e4(0);
      native_UnityEngine_Rect__set_xMin_7636a4(fVar20 * (float)-iVar4,lVar18,0);
      iVar4 = native_UnityEngine_Screen__get_height_76a618(0);
      native_UnityEngine_Rect__set_yMin_7636c0(fVar20 * (float)-iVar4,lVar18,0);
      fVar20 = (float)native_UnityEngine_Rect__get_xMin_76363c(lVar18,0);
      native_UnityEngine_Rect__set_xMax_7636dc(-fVar20,lVar18,0);
      fVar20 = (float)native_UnityEngine_Rect__get_yMin_763644(lVar18,0);
      native_UnityEngine_Rect__set_yMax_7636ec(-fVar20,lVar18,0);
      goto LAB_006ea2c0;
    }
    uVar16 = *(undefined8 *)(lVar8 + 0x20);
    param_2 = uVar6;
    if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
      native_sub_4327ec();
      param_2 = uVar6;
    }
    uVar28 = (undefined4)param_4;
    uVar26 = (undefined4)param_3;
    uVar9 = native_UnityEngine_Object__op_Inequality_8d76fc(uVar16,0,0);
    if ((uVar9 & 1) != 0) {
      if ((*(long *)(lVar8 + 0x20) == 0) ||
         (lVar18 = native_UnityEngine_GameObject__get_transform_8de5c8(*(long *)(lVar8 + 0x20),0),
         lVar18 == 0)) goto LAB_006ea904;
      uVar6 = native_UnityEngine_Transform__get_parent_765eb0(lVar18,0);
      if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
        native_sub_4327ec(_UnityEngine_Object_TypeInfo_12d54e0);
      }
      uVar9 = native_UnityEngine_Object__op_Inequality_8d76fc(uVar6,0,0);
      if (*(long *)(lVar8 + 0x20) == 0) goto LAB_006ea904;
      uVar16 = native_UnityEngine_GameObject__get_transform_8de5c8(*(long *)(lVar8 + 0x20),0);
      if ((uVar9 & 1) == 0) {
        if (((*(ushort *)(_NGUIMath_TypeInfo_12d53b8 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(_NGUIMath_TypeInfo_12d53b8 + 0xe0) == 0)) {
          native_sub_4327ec(_NGUIMath_TypeInfo_12d53b8);
        }
        native_NGUIMath__CalculateRelativeWidgetBounds_805a40(&dStack_118,uVar16,0);
      }
      else {
        if (((*(ushort *)(_NGUIMath_TypeInfo_12d53b8 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(_NGUIMath_TypeInfo_12d53b8 + 0xe0) == 0)) {
          native_sub_4327ec(_NGUIMath_TypeInfo_12d53b8);
        }
        native_NGUIMath__CalculateRelativeWidgetBounds_805e1c(&dStack_118,uVar6,uVar16,0);
      }
      uStack_f8 = uStack_110;
      dStack_100 = dStack_118;
      uStack_f0 = uStack_108;
      uStack_d0 = uStack_108;
      lVar18 = lVar8 + 0x58;
      uStack_d8 = uStack_110;
      dStack_e0 = dStack_118;
      native_UnityEngine_Bounds__get_min_8d7f18(&dStack_e0,0);
      native_UnityEngine_Rect__set_x_7635fc(lVar18,0);
      native_UnityEngine_Bounds__get_min_8d7f18(&dStack_e0,0);
      native_UnityEngine_Rect__set_y_76360c(param_2,lVar18,0);
      native_UnityEngine_Bounds__get_size_8d7ed8(&dStack_e0,0);
      native_UnityEngine_Rect__set_width_763684(lVar18,0);
      pdVar11 = &dStack_e0;
      goto LAB_006ea2a8;
    }
    uVar6 = *(undefined8 *)(lVar8 + 0x18);
    if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    uVar25 = (undefined4)param_2;
    uVar9 = native_UnityEngine_Object__op_Inequality_8d76fc(uVar6,0,0);
    if ((uVar9 & 1) == 0) {
      return;
    }
    if (*(long *)(lVar8 + 0x18) == 0) goto LAB_006ea904;
    uVar19 = native_UnityEngine_Camera__get_pixelRect_8d8c9c(*(long *)(lVar8 + 0x18),0);
    *(undefined4 *)(lVar8 + 0x58) = uVar19;
    bVar3 = true;
    *(undefined4 *)(lVar8 + 0x5c) = uVar25;
    *(undefined4 *)(lVar8 + 0x60) = uVar26;
    *(undefined4 *)(lVar8 + 100) = uVar28;
  }
  else {
    if (((*(long *)(lVar8 + 0x20) == 0) ||
        (lVar10 = native_UnityEngine_GameObject__get_transform_8de5c8(*(long *)(lVar8 + 0x20),0),
        lVar10 == 0)) ||
       (uVar6 = native_UnityEngine_Transform__get_parent_765eb0(lVar10,0), lVar18 == 0))
    goto LAB_006ea904;
    native_UIWidget__CalculateBounds_941b98(&dStack_118,lVar18,uVar6,0);
    uStack_b0 = uStack_108;
    uStack_b8 = uStack_110;
    dStack_c0 = dStack_118;
    lVar18 = lVar8 + 0x58;
    native_UnityEngine_Bounds__get_min_8d7f18(&dStack_c0,0);
    native_UnityEngine_Rect__set_x_7635fc(lVar18,0);
    native_UnityEngine_Bounds__get_min_8d7f18(&dStack_c0,0);
    native_UnityEngine_Rect__set_y_76360c(param_2,lVar18,0);
    native_UnityEngine_Bounds__get_size_8d7ed8(&dStack_c0,0);
    native_UnityEngine_Rect__set_width_763684(lVar18,0);
    pdVar11 = &dStack_c0;
LAB_006ea2a8:
    native_UnityEngine_Bounds__get_size_8d7ed8(pdVar11,0);
LAB_006ea2b8:
    native_UnityEngine_Rect__set_height_763694(param_2,lVar8 + 0x58,0);
LAB_006ea2c0:
    bVar3 = false;
  }
  lVar18 = lVar8 + 0x58;
  fVar20 = (float)native_UnityEngine_Rect__get_xMin_76363c(lVar18,0);
  fVar21 = (float)native_UnityEngine_Rect__get_xMax_76365c(lVar18,0);
  fVar22 = (float)native_UnityEngine_Rect__get_yMin_763644(lVar18,0);
  fVar23 = (float)native_UnityEngine_Rect__get_yMax_76366c(lVar18,0);
  uVar14 = *(uint *)(lVar8 + 0x28);
  fVar22 = (fVar22 + fVar23) * 0.5;
  if (uVar14 - 3 < 6) {
    fVar20 = (fVar20 + fVar21) * 0.5;
    switch(uVar14) {
    case 3:
    case 7:
      goto code_r0x006ea35c;
    default:
      fVar20 = (float)native_UnityEngine_Rect__get_xMax_76365c(lVar18,0);
      goto code_r0x006ea354;
    case 8:
      goto LAB_006ea3a0;
    }
  }
  fVar20 = (float)native_UnityEngine_Rect__get_xMin_76363c(lVar18,0);
code_r0x006ea354:
  uVar14 = *(uint *)(lVar8 + 0x28);
code_r0x006ea35c:
  if (uVar14 < 9) {
    uVar14 = 1 << (ulong)(uVar14 & 0x1f);
    if ((uVar14 & 0x1c) == 0) {
      if ((uVar14 & 0x122) == 0) goto LAB_006ea380;
    }
    else {
      fVar22 = (float)native_UnityEngine_Rect__get_yMax_76366c(lVar18,0);
    }
  }
  else {
LAB_006ea380:
    fVar22 = (float)native_UnityEngine_Rect__get_yMin_763644(lVar18,0);
  }
LAB_006ea3a0:
  fVar21 = (float)native_UnityEngine_Rect__get_width_76367c(lVar18,0);
  fVar23 = (float)native_UnityEngine_Rect__get_height_76368c(lVar18,0);
  uVar27 = (ulong)(uint)*(float *)(lVar8 + 0x34);
  fVar20 = fVar20 + *(float *)(lVar8 + 0x38) + fVar21 * *(float *)(lVar8 + 0x30);
  fVar22 = fVar22 + *(float *)(lVar8 + 0x3c) + fVar23 * *(float *)(lVar8 + 0x34);
  uVar9 = (ulong)(uint)fVar22;
  if (bVar3) {
    if (*(long *)(lVar8 + 0x18) == 0) goto LAB_006ea904;
    uVar12 = native_UnityEngine_Camera__get_orthographic_8d86c0(*(long *)(lVar8 + 0x18),0);
    if ((uVar12 & 1) != 0) {
      dVar24 = (double)func_0x002c9600((double)fVar20,&dStack_118);
      if (0.0 <= fVar20) {
        if (dVar24 == 0.5) {
          fVar21 = 1.0;
          goto LAB_006ea48c;
        }
        fVar20 = (float)(int)(fVar20 + 0.5);
      }
      else if (dVar24 == -0.5) {
        fVar21 = -1.0;
LAB_006ea48c:
        fVar20 = (float)dStack_118;
        if (((long)dStack_118 & 1U) != 0) {
          fVar20 = (float)dStack_118 + fVar21;
        }
      }
      else {
        fVar20 = (float)(int)(fVar20 + -0.5);
      }
      dVar24 = (double)func_0x002c9600((double)fVar22,&dStack_118);
      if (0.0 <= fVar22) {
        if (dVar24 == 0.5) {
          fVar21 = 1.0;
          goto LAB_006ea710;
        }
        uVar9 = (ulong)(uint)(int)(fVar22 + 0.5);
      }
      else if (dVar24 == -0.5) {
        fVar21 = -1.0;
LAB_006ea710:
        fVar22 = (float)dStack_118;
        if (((long)dStack_118 & 1U) != 0) {
          fVar22 = (float)dStack_118 + fVar21;
        }
        uVar9 = (ulong)(uint)fVar22;
      }
      else {
        uVar9 = (ulong)(uint)(int)(fVar22 + -0.5);
      }
    }
    if (*(long *)(lVar8 + 0x48) == 0) goto LAB_006ea904;
    lVar18 = *(long *)(lVar8 + 0x18);
    native_UnityEngine_Transform__get_position_77169c(*(long *)(lVar8 + 0x48),0);
    if (lVar18 == 0) goto LAB_006ea904;
    native_UnityEngine_Camera__WorldToScreenPoint_8d9158(lVar18,0);
    if (*(long *)(lVar8 + 0x18) == 0) goto LAB_006ea904;
    uVar12 = native_UnityEngine_Camera__ScreenToWorldPoint_8d9170
                       (fVar20,uVar9,*(long *)(lVar8 + 0x18),0);
    if (*(long *)(lVar8 + 0x18) == 0) goto LAB_006ea904;
    uVar13 = native_UnityEngine_Camera__get_orthographic_8d86c0(*(long *)(lVar8 + 0x18),0);
    if ((uVar13 & 1) != 0) {
      if (*(long *)(lVar8 + 0x48) == 0) goto LAB_006ea904;
      uVar6 = native_UnityEngine_Transform__get_parent_765eb0(*(long *)(lVar8 + 0x48),0);
      if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
        native_sub_4327ec(_UnityEngine_Object_TypeInfo_12d54e0);
      }
      uVar13 = native_UnityEngine_Object__op_Inequality_8d76fc(uVar6,0,0);
      if ((uVar13 & 1) != 0) {
        if ((*(long *)(lVar8 + 0x48) == 0) ||
           (lVar18 = native_UnityEngine_Transform__get_parent_765eb0(*(long *)(lVar8 + 0x48),0),
           lVar18 == 0)) goto LAB_006ea904;
        native_UnityEngine_Transform__InverseTransformPoint_7729a0(uVar12,uVar9,uVar27,lVar18,0);
        iVar4 = native_UnityEngine_Mathf__RoundToInt_8e50f0(0);
        iVar5 = native_UnityEngine_Mathf__RoundToInt_8e50f0(uVar9,0);
        if (*(long *)(lVar8 + 0x48) == 0) goto LAB_006ea904;
        native_UnityEngine_Transform__get_localPosition_7717f4(*(long *)(lVar8 + 0x48),0);
        uVar9 = native_UnityEngine_Vector3__op_Inequality_776c48(0);
        if ((uVar9 & 1) != 0) {
          if (*(long *)(lVar8 + 0x48) == 0) goto LAB_006ea904;
          native_UnityEngine_Transform__set_localPosition_7718a4
                    ((float)iVar4,(float)iVar5,uVar27,*(long *)(lVar8 + 0x48),0);
        }
        goto LAB_006ea8c0;
      }
    }
  }
  else {
    dVar24 = (double)func_0x002c9600((double)fVar20,&dStack_118);
    if (0.0 <= fVar20) {
      if (dVar24 == 0.5) {
        fVar20 = 1.0;
        goto LAB_006ea460;
      }
      uVar12 = (ulong)(uint)(int)(fVar20 + 0.5);
    }
    else if (dVar24 == -0.5) {
      fVar20 = -1.0;
LAB_006ea460:
      fVar21 = (float)dStack_118;
      if (((long)dStack_118 & 1U) != 0) {
        fVar21 = (float)dStack_118 + fVar20;
      }
      uVar12 = (ulong)(uint)fVar21;
    }
    else {
      uVar12 = (ulong)(uint)(int)(fVar20 + -0.5);
    }
    dVar24 = (double)func_0x002c9600((double)fVar22,&dStack_118);
    if (0.0 <= fVar22) {
      if (dVar24 == 0.5) {
        fVar20 = 1.0;
        goto LAB_006ea4fc;
      }
      uVar9 = (ulong)(uint)(int)(fVar22 + 0.5);
    }
    else if (dVar24 == -0.5) {
      fVar20 = -1.0;
LAB_006ea4fc:
      fVar21 = (float)dStack_118;
      if (((long)dStack_118 & 1U) != 0) {
        fVar21 = (float)dStack_118 + fVar20;
      }
      uVar9 = (ulong)(uint)fVar21;
    }
    else {
      uVar9 = (ulong)(uint)(int)(fVar22 + -0.5);
    }
    if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    uVar13 = native_UnityEngine_Object__op_Inequality_8d76fc(lVar17,0,0);
    if ((uVar13 & 1) == 0) {
      uVar6 = *(undefined8 *)(lVar8 + 0x20);
      if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
        native_sub_4327ec();
      }
      uVar13 = native_UnityEngine_Object__op_Inequality_8d76fc(uVar6,0,0);
      if ((uVar13 & 1) != 0) {
        if ((*(long *)(lVar8 + 0x20) == 0) ||
           (lVar18 = native_UnityEngine_GameObject__get_transform_8de5c8(*(long *)(lVar8 + 0x20),0),
           lVar18 == 0)) goto LAB_006ea904;
        lVar18 = native_UnityEngine_Transform__get_parent_765eb0(lVar18,0);
        if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
           (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
          native_sub_4327ec(_UnityEngine_Object_TypeInfo_12d54e0);
        }
        uVar13 = native_UnityEngine_Object__op_Inequality_8d76fc(lVar18,0,0);
        if ((uVar13 & 1) != 0) goto joined_r0x006ea60c;
      }
    }
    else {
      if (lVar17 == 0) goto LAB_006ea904;
      lVar18 = native_UIRect__get_cachedTransform_c27c58(lVar17,0);
joined_r0x006ea60c:
      if (lVar18 == 0) goto LAB_006ea904;
      uVar27 = 0;
      uVar12 = native_UnityEngine_Transform__TransformPoint_7728d8(uVar12,uVar9,0,lVar18,0);
    }
    if (*(long *)(lVar8 + 0x48) == 0) goto LAB_006ea904;
    native_UnityEngine_Transform__get_position_77169c(*(long *)(lVar8 + 0x48),0);
  }
  if (*(long *)(lVar8 + 0x48) != 0) {
    native_UnityEngine_Transform__get_position_77169c(*(long *)(lVar8 + 0x48),0);
    uVar13 = native_UnityEngine_Vector3__op_Inequality_776c48(0);
    if ((uVar13 & 1) != 0) {
      if (*(long *)(lVar8 + 0x48) == 0) goto LAB_006ea904;
      native_UnityEngine_Transform__set_position_77174c
                (uVar12,uVar9,uVar27,*(long *)(lVar8 + 0x48),0);
    }
LAB_006ea8c0:
    if ((*(char *)(lVar8 + 0x2c) != '\0') &&
       (uVar9 = native_UnityEngine_Application__get_isPlaying_8d60cc(0), (uVar9 & 1) != 0)) {
      native_UnityEngine_Behaviour__set_enabled_8d7b0c(lVar8,0,0);
    }
    return;
  }
LAB_006ea904:
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* UIAnchor$$ScreenSizeChanged @ 0x6e9d28
 * void UIAnchor__ScreenSizeChanged (UIAnchor_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIAnchor$$ScreenSizeChanged
   void UIAnchor__ScreenSizeChanged (UIAnchor_o* __this, const MethodInfo* method); */

void native_UIAnchor__ScreenSizeChanged_6e9d28
               (undefined1 param_1 [16],undefined8 param_2,undefined8 param_3,undefined8 param_4,
               long param_5)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  ulong uVar4;
  long lVar5;
  double *pdVar6;
  ulong uVar7;
  ulong uVar8;
  uint uVar9;
  undefined8 uVar10;
  long lVar11;
  long lVar12;
  undefined8 uVar13;
  undefined4 uVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  double dVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  ulong uVar22;
  undefined4 uVar23;
  double dStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  double dStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  double dStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  double dStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  
  if ((*(char *)(param_5 + 0x70) == '\0') || (*(char *)(param_5 + 0x2c) == '\0')) {
    return;
  }
  if ((bRam000000000133f3d0 & 1) == 0) {
    native_sub_43273c(&Method_UnityEngine_GameObject_GetComponent_UIPanel____12e4ac8);
    native_sub_43273c(&Method_UnityEngine_GameObject_GetComponent_UIWidget____12e4ae8);
    native_sub_43273c(&NGUIMath_TypeInfo_12d53b8);
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    bRam000000000133f3d0 = 1;
  }
  dStack_80 = 0.0;
  uStack_78 = 0;
  uStack_70 = 0;
  dStack_a0 = 0.0;
  uStack_98 = 0;
  uStack_90 = 0;
  dStack_c0 = 0.0;
  uStack_b8 = 0;
  uStack_b0 = 0;
  uVar10 = *(undefined8 *)(param_5 + 0x50);
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar4 = native_UnityEngine_Object__op_Inequality_8d76fc(uVar10,0,0);
  if ((uVar4 & 1) != 0) {
    if (*(long *)(param_5 + 0x50) == 0) goto LAB_006ea904;
    uVar4 = native_UnityEngine_Behaviour__get_enabled_8d7acc(*(long *)(param_5 + 0x50),0);
    if ((uVar4 & 1) != 0) {
      if (*(long *)(param_5 + 0x50) == 0) goto LAB_006ea904;
      uVar4 = native_UnityEngine_Animation__get_isPlaying_db16b0(*(long *)(param_5 + 0x50),0);
      if ((uVar4 & 1) != 0) {
        return;
      }
    }
  }
  uVar10 = *(undefined8 *)(param_5 + 0x48);
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar4 = native_UnityEngine_Object__op_Equality_8e9a3c(uVar10,0,0);
  if ((uVar4 & 1) != 0) {
    return;
  }
  uVar10 = *(undefined8 *)(param_5 + 0x20);
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar4 = native_UnityEngine_Object__op_Equality_8e9a3c(uVar10,0,0);
  lVar12 = 0;
  if ((uVar4 & 1) == 0) {
    if (*(long *)(param_5 + 0x20) == 0) goto LAB_006ea904;
    lVar12 = native_UnityEngine_GameObject__GetComponent_BE2_BlockSectionHeader_Custom__4a2214
                       (*(long *)(param_5 + 0x20),
                        _Method_UnityEngine_GameObject_GetComponent_UIWidget____12e4ae8);
  }
  uVar10 = *(undefined8 *)(param_5 + 0x20);
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar4 = native_UnityEngine_Object__op_Equality_8e9a3c(uVar10,0,0);
  if ((uVar4 & 1) == 0) {
LAB_006e9f00:
    if (*(long *)(param_5 + 0x20) == 0) goto LAB_006ea904;
    lVar11 = native_UnityEngine_GameObject__GetComponent_BE2_BlockSectionHeader_Custom__4a2214
                       (*(long *)(param_5 + 0x20),
                        _Method_UnityEngine_GameObject_GetComponent_UIPanel____12e4ac8);
  }
  else {
    if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    uVar4 = native_UnityEngine_Object__op_Equality_8e9a3c(lVar12,0,0);
    lVar11 = 0;
    if ((uVar4 & 1) == 0) goto LAB_006e9f00;
  }
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar4 = native_UnityEngine_Object__op_Inequality_8d76fc(lVar12,0,0);
  if ((uVar4 & 1) == 0) {
    uVar10 = param_2;
    if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
      native_sub_4327ec();
      uVar10 = param_2;
    }
    uVar4 = native_UnityEngine_Object__op_Inequality_8d76fc(lVar11,0,0);
    if ((uVar4 & 1) != 0) {
      if (lVar11 == 0) goto LAB_006ea904;
      if (*(int *)(lVar11 + 0x140) != 0) {
        param_2 = param_4;
        fVar15 = (float)native_UIPanel__get_finalClipRegion_af03c8(lVar11,0);
        lVar12 = param_5 + 0x58;
        native_UnityEngine_Rect__set_x_7635fc(fVar15 - (float)param_3 * 0.5,lVar12,0);
        native_UnityEngine_Rect__set_y_76360c((float)uVar10 - (float)param_2 * 0.5,lVar12,0);
        native_UnityEngine_Rect__set_width_763684(param_3,lVar12,0);
        goto LAB_006ea2b8;
      }
      uVar10 = *(undefined8 *)(param_5 + 0x68);
      if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
        native_sub_4327ec();
      }
      uVar4 = native_UnityEngine_Object__op_Inequality_8d76fc(uVar10,0,0);
      if ((uVar4 & 1) == 0) {
        fVar15 = 0.5;
      }
      else {
        if (*(long *)(param_5 + 0x68) == 0) goto LAB_006ea904;
        iVar2 = native_UIRoot__get_activeHeight_c2f58c(*(long *)(param_5 + 0x68),0);
        iVar3 = native_UnityEngine_Screen__get_height_76a618(0);
        fVar15 = ((float)iVar2 / (float)iVar3) * 0.5;
      }
      lVar12 = param_5 + 0x58;
      iVar2 = native_UnityEngine_Screen__get_width_76a5e4(0);
      native_UnityEngine_Rect__set_xMin_7636a4(fVar15 * (float)-iVar2,lVar12,0);
      iVar2 = native_UnityEngine_Screen__get_height_76a618(0);
      native_UnityEngine_Rect__set_yMin_7636c0(fVar15 * (float)-iVar2,lVar12,0);
      fVar15 = (float)native_UnityEngine_Rect__get_xMin_76363c(lVar12,0);
      native_UnityEngine_Rect__set_xMax_7636dc(-fVar15,lVar12,0);
      fVar15 = (float)native_UnityEngine_Rect__get_yMin_763644(lVar12,0);
      native_UnityEngine_Rect__set_yMax_7636ec(-fVar15,lVar12,0);
      goto LAB_006ea2c0;
    }
    uVar13 = *(undefined8 *)(param_5 + 0x20);
    param_2 = uVar10;
    if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
      native_sub_4327ec();
      param_2 = uVar10;
    }
    uVar23 = (undefined4)param_4;
    uVar21 = (undefined4)param_3;
    uVar4 = native_UnityEngine_Object__op_Inequality_8d76fc(uVar13,0,0);
    if ((uVar4 & 1) != 0) {
      if ((*(long *)(param_5 + 0x20) == 0) ||
         (lVar12 = native_UnityEngine_GameObject__get_transform_8de5c8(*(long *)(param_5 + 0x20),0),
         lVar12 == 0)) goto LAB_006ea904;
      uVar10 = native_UnityEngine_Transform__get_parent_765eb0(lVar12,0);
      if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
        native_sub_4327ec(_UnityEngine_Object_TypeInfo_12d54e0);
      }
      uVar4 = native_UnityEngine_Object__op_Inequality_8d76fc(uVar10,0,0);
      if (*(long *)(param_5 + 0x20) == 0) goto LAB_006ea904;
      uVar13 = native_UnityEngine_GameObject__get_transform_8de5c8(*(long *)(param_5 + 0x20),0);
      if ((uVar4 & 1) == 0) {
        if (((*(ushort *)(_NGUIMath_TypeInfo_12d53b8 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(_NGUIMath_TypeInfo_12d53b8 + 0xe0) == 0)) {
          native_sub_4327ec(_NGUIMath_TypeInfo_12d53b8);
        }
        native_NGUIMath__CalculateRelativeWidgetBounds_805a40(&dStack_d8,uVar13,0);
      }
      else {
        if (((*(ushort *)(_NGUIMath_TypeInfo_12d53b8 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(_NGUIMath_TypeInfo_12d53b8 + 0xe0) == 0)) {
          native_sub_4327ec(_NGUIMath_TypeInfo_12d53b8);
        }
        native_NGUIMath__CalculateRelativeWidgetBounds_805e1c(&dStack_d8,uVar10,uVar13,0);
      }
      uStack_b8 = uStack_d0;
      dStack_c0 = dStack_d8;
      uStack_b0 = uStack_c8;
      uStack_90 = uStack_c8;
      lVar12 = param_5 + 0x58;
      uStack_98 = uStack_d0;
      dStack_a0 = dStack_d8;
      native_UnityEngine_Bounds__get_min_8d7f18(&dStack_a0,0);
      native_UnityEngine_Rect__set_x_7635fc(lVar12,0);
      native_UnityEngine_Bounds__get_min_8d7f18(&dStack_a0,0);
      native_UnityEngine_Rect__set_y_76360c(param_2,lVar12,0);
      native_UnityEngine_Bounds__get_size_8d7ed8(&dStack_a0,0);
      native_UnityEngine_Rect__set_width_763684(lVar12,0);
      pdVar6 = &dStack_a0;
      goto LAB_006ea2a8;
    }
    uVar10 = *(undefined8 *)(param_5 + 0x18);
    if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    uVar20 = (undefined4)param_2;
    uVar4 = native_UnityEngine_Object__op_Inequality_8d76fc(uVar10,0,0);
    if ((uVar4 & 1) == 0) {
      return;
    }
    if (*(long *)(param_5 + 0x18) == 0) goto LAB_006ea904;
    uVar14 = native_UnityEngine_Camera__get_pixelRect_8d8c9c(*(long *)(param_5 + 0x18),0);
    *(undefined4 *)(param_5 + 0x58) = uVar14;
    bVar1 = true;
    *(undefined4 *)(param_5 + 0x5c) = uVar20;
    *(undefined4 *)(param_5 + 0x60) = uVar21;
    *(undefined4 *)(param_5 + 100) = uVar23;
  }
  else {
    if (((*(long *)(param_5 + 0x20) == 0) ||
        (lVar5 = native_UnityEngine_GameObject__get_transform_8de5c8(*(long *)(param_5 + 0x20),0),
        lVar5 == 0)) ||
       (uVar10 = native_UnityEngine_Transform__get_parent_765eb0(lVar5,0), lVar12 == 0))
    goto LAB_006ea904;
    native_UIWidget__CalculateBounds_941b98(&dStack_d8,lVar12,uVar10,0);
    uStack_70 = uStack_c8;
    uStack_78 = uStack_d0;
    dStack_80 = dStack_d8;
    lVar12 = param_5 + 0x58;
    native_UnityEngine_Bounds__get_min_8d7f18(&dStack_80,0);
    native_UnityEngine_Rect__set_x_7635fc(lVar12,0);
    native_UnityEngine_Bounds__get_min_8d7f18(&dStack_80,0);
    native_UnityEngine_Rect__set_y_76360c(param_2,lVar12,0);
    native_UnityEngine_Bounds__get_size_8d7ed8(&dStack_80,0);
    native_UnityEngine_Rect__set_width_763684(lVar12,0);
    pdVar6 = &dStack_80;
LAB_006ea2a8:
    native_UnityEngine_Bounds__get_size_8d7ed8(pdVar6,0);
LAB_006ea2b8:
    native_UnityEngine_Rect__set_height_763694(param_2,param_5 + 0x58,0);
LAB_006ea2c0:
    bVar1 = false;
  }
  lVar12 = param_5 + 0x58;
  fVar15 = (float)native_UnityEngine_Rect__get_xMin_76363c(lVar12,0);
  fVar16 = (float)native_UnityEngine_Rect__get_xMax_76365c(lVar12,0);
  fVar17 = (float)native_UnityEngine_Rect__get_yMin_763644(lVar12,0);
  fVar18 = (float)native_UnityEngine_Rect__get_yMax_76366c(lVar12,0);
  uVar9 = *(uint *)(param_5 + 0x28);
  fVar17 = (fVar17 + fVar18) * 0.5;
  if (uVar9 - 3 < 6) {
    fVar15 = (fVar15 + fVar16) * 0.5;
    switch(uVar9) {
    case 3:
    case 7:
      goto code_r0x006ea35c;
    default:
      fVar15 = (float)native_UnityEngine_Rect__get_xMax_76365c(lVar12,0);
      goto code_r0x006ea354;
    case 8:
      goto LAB_006ea3a0;
    }
  }
  fVar15 = (float)native_UnityEngine_Rect__get_xMin_76363c(lVar12,0);
code_r0x006ea354:
  uVar9 = *(uint *)(param_5 + 0x28);
code_r0x006ea35c:
  if (uVar9 < 9) {
    uVar9 = 1 << (ulong)(uVar9 & 0x1f);
    if ((uVar9 & 0x1c) == 0) {
      if ((uVar9 & 0x122) == 0) goto LAB_006ea380;
    }
    else {
      fVar17 = (float)native_UnityEngine_Rect__get_yMax_76366c(lVar12,0);
    }
  }
  else {
LAB_006ea380:
    fVar17 = (float)native_UnityEngine_Rect__get_yMin_763644(lVar12,0);
  }
LAB_006ea3a0:
  fVar16 = (float)native_UnityEngine_Rect__get_width_76367c(lVar12,0);
  fVar18 = (float)native_UnityEngine_Rect__get_height_76368c(lVar12,0);
  uVar22 = (ulong)(uint)*(float *)(param_5 + 0x34);
  fVar15 = fVar15 + *(float *)(param_5 + 0x38) + fVar16 * *(float *)(param_5 + 0x30);
  fVar17 = fVar17 + *(float *)(param_5 + 0x3c) + fVar18 * *(float *)(param_5 + 0x34);
  uVar4 = (ulong)(uint)fVar17;
  if (bVar1) {
    if (*(long *)(param_5 + 0x18) == 0) goto LAB_006ea904;
    uVar7 = native_UnityEngine_Camera__get_orthographic_8d86c0(*(long *)(param_5 + 0x18),0);
    if ((uVar7 & 1) != 0) {
      dVar19 = (double)func_0x002c9600((double)fVar15,&dStack_d8);
      if (0.0 <= fVar15) {
        if (dVar19 == 0.5) {
          fVar16 = 1.0;
          goto LAB_006ea48c;
        }
        fVar15 = (float)(int)(fVar15 + 0.5);
      }
      else if (dVar19 == -0.5) {
        fVar16 = -1.0;
LAB_006ea48c:
        fVar15 = (float)dStack_d8;
        if (((long)dStack_d8 & 1U) != 0) {
          fVar15 = (float)dStack_d8 + fVar16;
        }
      }
      else {
        fVar15 = (float)(int)(fVar15 + -0.5);
      }
      dVar19 = (double)func_0x002c9600((double)fVar17,&dStack_d8);
      if (0.0 <= fVar17) {
        if (dVar19 == 0.5) {
          fVar16 = 1.0;
          goto LAB_006ea710;
        }
        uVar4 = (ulong)(uint)(int)(fVar17 + 0.5);
      }
      else if (dVar19 == -0.5) {
        fVar16 = -1.0;
LAB_006ea710:
        fVar17 = (float)dStack_d8;
        if (((long)dStack_d8 & 1U) != 0) {
          fVar17 = (float)dStack_d8 + fVar16;
        }
        uVar4 = (ulong)(uint)fVar17;
      }
      else {
        uVar4 = (ulong)(uint)(int)(fVar17 + -0.5);
      }
    }
    if (*(long *)(param_5 + 0x48) == 0) goto LAB_006ea904;
    lVar12 = *(long *)(param_5 + 0x18);
    native_UnityEngine_Transform__get_position_77169c(*(long *)(param_5 + 0x48),0);
    if (lVar12 == 0) goto LAB_006ea904;
    native_UnityEngine_Camera__WorldToScreenPoint_8d9158(lVar12,0);
    if (*(long *)(param_5 + 0x18) == 0) goto LAB_006ea904;
    uVar7 = native_UnityEngine_Camera__ScreenToWorldPoint_8d9170
                      (fVar15,uVar4,*(long *)(param_5 + 0x18),0);
    if (*(long *)(param_5 + 0x18) == 0) goto LAB_006ea904;
    uVar8 = native_UnityEngine_Camera__get_orthographic_8d86c0(*(long *)(param_5 + 0x18),0);
    if ((uVar8 & 1) != 0) {
      if (*(long *)(param_5 + 0x48) == 0) goto LAB_006ea904;
      uVar10 = native_UnityEngine_Transform__get_parent_765eb0(*(long *)(param_5 + 0x48),0);
      if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
        native_sub_4327ec(_UnityEngine_Object_TypeInfo_12d54e0);
      }
      uVar8 = native_UnityEngine_Object__op_Inequality_8d76fc(uVar10,0,0);
      if ((uVar8 & 1) != 0) {
        if ((*(long *)(param_5 + 0x48) == 0) ||
           (lVar12 = native_UnityEngine_Transform__get_parent_765eb0(*(long *)(param_5 + 0x48),0),
           lVar12 == 0)) goto LAB_006ea904;
        native_UnityEngine_Transform__InverseTransformPoint_7729a0(uVar7,uVar4,uVar22,lVar12,0);
        iVar2 = native_UnityEngine_Mathf__RoundToInt_8e50f0(0);
        iVar3 = native_UnityEngine_Mathf__RoundToInt_8e50f0(uVar4,0);
        if (*(long *)(param_5 + 0x48) == 0) goto LAB_006ea904;
        native_UnityEngine_Transform__get_localPosition_7717f4(*(long *)(param_5 + 0x48),0);
        uVar4 = native_UnityEngine_Vector3__op_Inequality_776c48(0);
        if ((uVar4 & 1) != 0) {
          if (*(long *)(param_5 + 0x48) == 0) goto LAB_006ea904;
          native_UnityEngine_Transform__set_localPosition_7718a4
                    ((float)iVar2,(float)iVar3,uVar22,*(long *)(param_5 + 0x48),0);
        }
        goto LAB_006ea8c0;
      }
    }
  }
  else {
    dVar19 = (double)func_0x002c9600((double)fVar15,&dStack_d8);
    if (0.0 <= fVar15) {
      if (dVar19 == 0.5) {
        fVar15 = 1.0;
        goto LAB_006ea460;
      }
      uVar7 = (ulong)(uint)(int)(fVar15 + 0.5);
    }
    else if (dVar19 == -0.5) {
      fVar15 = -1.0;
LAB_006ea460:
      fVar16 = (float)dStack_d8;
      if (((long)dStack_d8 & 1U) != 0) {
        fVar16 = (float)dStack_d8 + fVar15;
      }
      uVar7 = (ulong)(uint)fVar16;
    }
    else {
      uVar7 = (ulong)(uint)(int)(fVar15 + -0.5);
    }
    dVar19 = (double)func_0x002c9600((double)fVar17,&dStack_d8);
    if (0.0 <= fVar17) {
      if (dVar19 == 0.5) {
        fVar15 = 1.0;
        goto LAB_006ea4fc;
      }
      uVar4 = (ulong)(uint)(int)(fVar17 + 0.5);
    }
    else if (dVar19 == -0.5) {
      fVar15 = -1.0;
LAB_006ea4fc:
      fVar16 = (float)dStack_d8;
      if (((long)dStack_d8 & 1U) != 0) {
        fVar16 = (float)dStack_d8 + fVar15;
      }
      uVar4 = (ulong)(uint)fVar16;
    }
    else {
      uVar4 = (ulong)(uint)(int)(fVar17 + -0.5);
    }
    if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    uVar8 = native_UnityEngine_Object__op_Inequality_8d76fc(lVar11,0,0);
    if ((uVar8 & 1) == 0) {
      uVar10 = *(undefined8 *)(param_5 + 0x20);
      if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
        native_sub_4327ec();
      }
      uVar8 = native_UnityEngine_Object__op_Inequality_8d76fc(uVar10,0,0);
      if ((uVar8 & 1) != 0) {
        if ((*(long *)(param_5 + 0x20) == 0) ||
           (lVar12 = native_UnityEngine_GameObject__get_transform_8de5c8
                               (*(long *)(param_5 + 0x20),0), lVar12 == 0)) goto LAB_006ea904;
        lVar12 = native_UnityEngine_Transform__get_parent_765eb0(lVar12,0);
        if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
           (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
          native_sub_4327ec(_UnityEngine_Object_TypeInfo_12d54e0);
        }
        uVar8 = native_UnityEngine_Object__op_Inequality_8d76fc(lVar12,0,0);
        if ((uVar8 & 1) != 0) goto joined_r0x006ea60c;
      }
    }
    else {
      if (lVar11 == 0) goto LAB_006ea904;
      lVar12 = native_UIRect__get_cachedTransform_c27c58(lVar11,0);
joined_r0x006ea60c:
      if (lVar12 == 0) goto LAB_006ea904;
      uVar22 = 0;
      uVar7 = native_UnityEngine_Transform__TransformPoint_7728d8(uVar7,uVar4,0,lVar12,0);
    }
    if (*(long *)(param_5 + 0x48) == 0) goto LAB_006ea904;
    native_UnityEngine_Transform__get_position_77169c(*(long *)(param_5 + 0x48),0);
  }
  if (*(long *)(param_5 + 0x48) != 0) {
    native_UnityEngine_Transform__get_position_77169c(*(long *)(param_5 + 0x48),0);
    uVar8 = native_UnityEngine_Vector3__op_Inequality_776c48(0);
    if ((uVar8 & 1) != 0) {
      if (*(long *)(param_5 + 0x48) == 0) goto LAB_006ea904;
      native_UnityEngine_Transform__set_position_77174c
                (uVar7,uVar4,uVar22,*(long *)(param_5 + 0x48),0);
    }
LAB_006ea8c0:
    if ((*(char *)(param_5 + 0x2c) != '\0') &&
       (uVar4 = native_UnityEngine_Application__get_isPlaying_8d60cc(0), (uVar4 & 1) != 0)) {
      native_UnityEngine_Behaviour__set_enabled_8d7b0c(param_5,0,0);
    }
    return;
  }
LAB_006ea904:
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* UIAnchor$$Start @ 0x6ea908
 * void UIAnchor__Start (UIAnchor_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIAnchor$$Start
   void UIAnchor__Start (UIAnchor_o* __this, const MethodInfo* method); */

void native_UIAnchor__Start_6ea908(long param_1)

{
  undefined4 uVar1;
  ulong uVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  long *plVar5;
  long lVar6;
  
  if ((bRam000000000133f3cf & 1) == 0) {
    native_sub_43273c(&Method_NGUITools_FindInParents_UIRoot____12e5780);
    native_sub_43273c(&NGUITools_TypeInfo_12d53c8);
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    bRam000000000133f3cf = 1;
  }
  puVar3 = (undefined8 *)(param_1 + 0x20);
  uVar4 = *puVar3;
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar2 = native_UnityEngine_Object__op_Equality_8e9a3c(uVar4,0,0);
  if ((uVar2 & 1) != 0) {
    plVar5 = (long *)(param_1 + 0x40);
    lVar6 = *plVar5;
    if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    uVar2 = native_UnityEngine_Object__op_Inequality_8d76fc(lVar6,0,0);
    if ((uVar2 & 1) != 0) {
      if (*plVar5 == 0) goto LAB_006eaafc;
      uVar4 = native_UnityEngine_Component__get_gameObject_8da66c(*plVar5,0);
      *puVar3 = uVar4;
      native_sub_4326e0(puVar3,uVar4);
      *plVar5 = 0;
      native_sub_4326e0(plVar5,0);
    }
  }
  uVar4 = native_UnityEngine_Component__get_gameObject_8da66c(param_1,0);
  if (((*(byte *)(_NGUITools_TypeInfo_12d53c8 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_NGUITools_TypeInfo_12d53c8 + 0xe0) == 0)) {
    native_sub_4327ec(_NGUITools_TypeInfo_12d53c8);
  }
  uVar4 = native_NGUITools__FindInParents_object__4a5c04
                    (uVar4,_Method_NGUITools_FindInParents_UIRoot____12e5780);
  *(undefined8 *)(param_1 + 0x68) = uVar4;
  native_sub_4326e0();
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
LAB_006eaafc:
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
  native_UIAnchor__Update_6e9d40(param_1);
  *(undefined1 *)(param_1 + 0x70) = 1;
  return;
}



/* UIAnchor$$Update @ 0x6e9d40
 * void UIAnchor__Update (UIAnchor_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIAnchor$$Update
   void UIAnchor__Update (UIAnchor_o* __this, const MethodInfo* method); */

void native_UIAnchor__Update_6e9d40
               (undefined1 param_1 [16],undefined8 param_2,undefined8 param_3,undefined8 param_4,
               long param_5)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  ulong uVar4;
  long lVar5;
  double *pdVar6;
  ulong uVar7;
  ulong uVar8;
  uint uVar9;
  undefined8 uVar10;
  long lVar11;
  long lVar12;
  undefined8 uVar13;
  undefined4 uVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  double dVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  ulong uVar22;
  undefined4 uVar23;
  double dStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  double dStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  double dStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  double dStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  
  if ((bRam000000000133f3d0 & 1) == 0) {
    native_sub_43273c(&Method_UnityEngine_GameObject_GetComponent_UIPanel____12e4ac8);
    native_sub_43273c(&Method_UnityEngine_GameObject_GetComponent_UIWidget____12e4ae8);
    native_sub_43273c(&NGUIMath_TypeInfo_12d53b8);
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    bRam000000000133f3d0 = 1;
  }
  dStack_80 = 0.0;
  uStack_78 = 0;
  uStack_70 = 0;
  dStack_a0 = 0.0;
  uStack_98 = 0;
  uStack_90 = 0;
  dStack_c0 = 0.0;
  uStack_b8 = 0;
  uStack_b0 = 0;
  uVar10 = *(undefined8 *)(param_5 + 0x50);
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar4 = native_UnityEngine_Object__op_Inequality_8d76fc(uVar10,0,0);
  if ((uVar4 & 1) != 0) {
    if (*(long *)(param_5 + 0x50) == 0) goto LAB_006ea904;
    uVar4 = native_UnityEngine_Behaviour__get_enabled_8d7acc(*(long *)(param_5 + 0x50),0);
    if ((uVar4 & 1) != 0) {
      if (*(long *)(param_5 + 0x50) == 0) goto LAB_006ea904;
      uVar4 = native_UnityEngine_Animation__get_isPlaying_db16b0(*(long *)(param_5 + 0x50),0);
      if ((uVar4 & 1) != 0) {
        return;
      }
    }
  }
  uVar10 = *(undefined8 *)(param_5 + 0x48);
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar4 = native_UnityEngine_Object__op_Equality_8e9a3c(uVar10,0,0);
  if ((uVar4 & 1) != 0) {
    return;
  }
  uVar10 = *(undefined8 *)(param_5 + 0x20);
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar4 = native_UnityEngine_Object__op_Equality_8e9a3c(uVar10,0,0);
  lVar12 = 0;
  if ((uVar4 & 1) == 0) {
    if (*(long *)(param_5 + 0x20) == 0) goto LAB_006ea904;
    lVar12 = native_UnityEngine_GameObject__GetComponent_BE2_BlockSectionHeader_Custom__4a2214
                       (*(long *)(param_5 + 0x20),
                        _Method_UnityEngine_GameObject_GetComponent_UIWidget____12e4ae8);
  }
  uVar10 = *(undefined8 *)(param_5 + 0x20);
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar4 = native_UnityEngine_Object__op_Equality_8e9a3c(uVar10,0,0);
  if ((uVar4 & 1) == 0) {
LAB_006e9f00:
    if (*(long *)(param_5 + 0x20) == 0) goto LAB_006ea904;
    lVar11 = native_UnityEngine_GameObject__GetComponent_BE2_BlockSectionHeader_Custom__4a2214
                       (*(long *)(param_5 + 0x20),
                        _Method_UnityEngine_GameObject_GetComponent_UIPanel____12e4ac8);
  }
  else {
    if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    uVar4 = native_UnityEngine_Object__op_Equality_8e9a3c(lVar12,0,0);
    lVar11 = 0;
    if ((uVar4 & 1) == 0) goto LAB_006e9f00;
  }
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar4 = native_UnityEngine_Object__op_Inequality_8d76fc(lVar12,0,0);
  if ((uVar4 & 1) == 0) {
    uVar10 = param_2;
    if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
      native_sub_4327ec();
      uVar10 = param_2;
    }
    uVar4 = native_UnityEngine_Object__op_Inequality_8d76fc(lVar11,0,0);
    if ((uVar4 & 1) != 0) {
      if (lVar11 == 0) goto LAB_006ea904;
      if (*(int *)(lVar11 + 0x140) != 0) {
        param_2 = param_4;
        fVar15 = (float)native_UIPanel__get_finalClipRegion_af03c8(lVar11,0);
        lVar12 = param_5 + 0x58;
        native_UnityEngine_Rect__set_x_7635fc(fVar15 - (float)param_3 * 0.5,lVar12,0);
        native_UnityEngine_Rect__set_y_76360c((float)uVar10 - (float)param_2 * 0.5,lVar12,0);
        native_UnityEngine_Rect__set_width_763684(param_3,lVar12,0);
        goto LAB_006ea2b8;
      }
      uVar10 = *(undefined8 *)(param_5 + 0x68);
      if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
        native_sub_4327ec();
      }
      uVar4 = native_UnityEngine_Object__op_Inequality_8d76fc(uVar10,0,0);
      if ((uVar4 & 1) == 0) {
        fVar15 = 0.5;
      }
      else {
        if (*(long *)(param_5 + 0x68) == 0) goto LAB_006ea904;
        iVar2 = native_UIRoot__get_activeHeight_c2f58c(*(long *)(param_5 + 0x68),0);
        iVar3 = native_UnityEngine_Screen__get_height_76a618(0);
        fVar15 = ((float)iVar2 / (float)iVar3) * 0.5;
      }
      lVar12 = param_5 + 0x58;
      iVar2 = native_UnityEngine_Screen__get_width_76a5e4(0);
      native_UnityEngine_Rect__set_xMin_7636a4(fVar15 * (float)-iVar2,lVar12,0);
      iVar2 = native_UnityEngine_Screen__get_height_76a618(0);
      native_UnityEngine_Rect__set_yMin_7636c0(fVar15 * (float)-iVar2,lVar12,0);
      fVar15 = (float)native_UnityEngine_Rect__get_xMin_76363c(lVar12,0);
      native_UnityEngine_Rect__set_xMax_7636dc(-fVar15,lVar12,0);
      fVar15 = (float)native_UnityEngine_Rect__get_yMin_763644(lVar12,0);
      native_UnityEngine_Rect__set_yMax_7636ec(-fVar15,lVar12,0);
      goto LAB_006ea2c0;
    }
    uVar13 = *(undefined8 *)(param_5 + 0x20);
    param_2 = uVar10;
    if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
      native_sub_4327ec();
      param_2 = uVar10;
    }
    uVar23 = (undefined4)param_4;
    uVar21 = (undefined4)param_3;
    uVar4 = native_UnityEngine_Object__op_Inequality_8d76fc(uVar13,0,0);
    if ((uVar4 & 1) != 0) {
      if ((*(long *)(param_5 + 0x20) == 0) ||
         (lVar12 = native_UnityEngine_GameObject__get_transform_8de5c8(*(long *)(param_5 + 0x20),0),
         lVar12 == 0)) goto LAB_006ea904;
      uVar10 = native_UnityEngine_Transform__get_parent_765eb0(lVar12,0);
      if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
        native_sub_4327ec(_UnityEngine_Object_TypeInfo_12d54e0);
      }
      uVar4 = native_UnityEngine_Object__op_Inequality_8d76fc(uVar10,0,0);
      if (*(long *)(param_5 + 0x20) == 0) goto LAB_006ea904;
      uVar13 = native_UnityEngine_GameObject__get_transform_8de5c8(*(long *)(param_5 + 0x20),0);
      if ((uVar4 & 1) == 0) {
        if (((*(ushort *)(_NGUIMath_TypeInfo_12d53b8 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(_NGUIMath_TypeInfo_12d53b8 + 0xe0) == 0)) {
          native_sub_4327ec(_NGUIMath_TypeInfo_12d53b8);
        }
        native_NGUIMath__CalculateRelativeWidgetBounds_805a40(&dStack_d8,uVar13,0);
      }
      else {
        if (((*(ushort *)(_NGUIMath_TypeInfo_12d53b8 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(_NGUIMath_TypeInfo_12d53b8 + 0xe0) == 0)) {
          native_sub_4327ec(_NGUIMath_TypeInfo_12d53b8);
        }
        native_NGUIMath__CalculateRelativeWidgetBounds_805e1c(&dStack_d8,uVar10,uVar13,0);
      }
      uStack_b8 = uStack_d0;
      dStack_c0 = dStack_d8;
      uStack_b0 = uStack_c8;
      uStack_90 = uStack_c8;
      lVar12 = param_5 + 0x58;
      uStack_98 = uStack_d0;
      dStack_a0 = dStack_d8;
      native_UnityEngine_Bounds__get_min_8d7f18(&dStack_a0,0);
      native_UnityEngine_Rect__set_x_7635fc(lVar12,0);
      native_UnityEngine_Bounds__get_min_8d7f18(&dStack_a0,0);
      native_UnityEngine_Rect__set_y_76360c(param_2,lVar12,0);
      native_UnityEngine_Bounds__get_size_8d7ed8(&dStack_a0,0);
      native_UnityEngine_Rect__set_width_763684(lVar12,0);
      pdVar6 = &dStack_a0;
      goto LAB_006ea2a8;
    }
    uVar10 = *(undefined8 *)(param_5 + 0x18);
    if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    uVar20 = (undefined4)param_2;
    uVar4 = native_UnityEngine_Object__op_Inequality_8d76fc(uVar10,0,0);
    if ((uVar4 & 1) == 0) {
      return;
    }
    if (*(long *)(param_5 + 0x18) == 0) goto LAB_006ea904;
    uVar14 = native_UnityEngine_Camera__get_pixelRect_8d8c9c(*(long *)(param_5 + 0x18),0);
    *(undefined4 *)(param_5 + 0x58) = uVar14;
    bVar1 = true;
    *(undefined4 *)(param_5 + 0x5c) = uVar20;
    *(undefined4 *)(param_5 + 0x60) = uVar21;
    *(undefined4 *)(param_5 + 100) = uVar23;
  }
  else {
    if (((*(long *)(param_5 + 0x20) == 0) ||
        (lVar5 = native_UnityEngine_GameObject__get_transform_8de5c8(*(long *)(param_5 + 0x20),0),
        lVar5 == 0)) ||
       (uVar10 = native_UnityEngine_Transform__get_parent_765eb0(lVar5,0), lVar12 == 0))
    goto LAB_006ea904;
    native_UIWidget__CalculateBounds_941b98(&dStack_d8,lVar12,uVar10,0);
    uStack_70 = uStack_c8;
    uStack_78 = uStack_d0;
    dStack_80 = dStack_d8;
    lVar12 = param_5 + 0x58;
    native_UnityEngine_Bounds__get_min_8d7f18(&dStack_80,0);
    native_UnityEngine_Rect__set_x_7635fc(lVar12,0);
    native_UnityEngine_Bounds__get_min_8d7f18(&dStack_80,0);
    native_UnityEngine_Rect__set_y_76360c(param_2,lVar12,0);
    native_UnityEngine_Bounds__get_size_8d7ed8(&dStack_80,0);
    native_UnityEngine_Rect__set_width_763684(lVar12,0);
    pdVar6 = &dStack_80;
LAB_006ea2a8:
    native_UnityEngine_Bounds__get_size_8d7ed8(pdVar6,0);
LAB_006ea2b8:
    native_UnityEngine_Rect__set_height_763694(param_2,param_5 + 0x58,0);
LAB_006ea2c0:
    bVar1 = false;
  }
  lVar12 = param_5 + 0x58;
  fVar15 = (float)native_UnityEngine_Rect__get_xMin_76363c(lVar12,0);
  fVar16 = (float)native_UnityEngine_Rect__get_xMax_76365c(lVar12,0);
  fVar17 = (float)native_UnityEngine_Rect__get_yMin_763644(lVar12,0);
  fVar18 = (float)native_UnityEngine_Rect__get_yMax_76366c(lVar12,0);
  uVar9 = *(uint *)(param_5 + 0x28);
  fVar17 = (fVar17 + fVar18) * 0.5;
  if (uVar9 - 3 < 6) {
    fVar15 = (fVar15 + fVar16) * 0.5;
    switch(uVar9) {
    case 3:
    case 7:
      goto code_r0x006ea35c;
    default:
      fVar15 = (float)native_UnityEngine_Rect__get_xMax_76365c(lVar12,0);
      goto code_r0x006ea354;
    case 8:
      goto LAB_006ea3a0;
    }
  }
  fVar15 = (float)native_UnityEngine_Rect__get_xMin_76363c(lVar12,0);
code_r0x006ea354:
  uVar9 = *(uint *)(param_5 + 0x28);
code_r0x006ea35c:
  if (uVar9 < 9) {
    uVar9 = 1 << (ulong)(uVar9 & 0x1f);
    if ((uVar9 & 0x1c) == 0) {
      if ((uVar9 & 0x122) == 0) goto LAB_006ea380;
    }
    else {
      fVar17 = (float)native_UnityEngine_Rect__get_yMax_76366c(lVar12,0);
    }
  }
  else {
LAB_006ea380:
    fVar17 = (float)native_UnityEngine_Rect__get_yMin_763644(lVar12,0);
  }
LAB_006ea3a0:
  fVar16 = (float)native_UnityEngine_Rect__get_width_76367c(lVar12,0);
  fVar18 = (float)native_UnityEngine_Rect__get_height_76368c(lVar12,0);
  uVar22 = (ulong)(uint)*(float *)(param_5 + 0x34);
  fVar15 = fVar15 + *(float *)(param_5 + 0x38) + fVar16 * *(float *)(param_5 + 0x30);
  fVar17 = fVar17 + *(float *)(param_5 + 0x3c) + fVar18 * *(float *)(param_5 + 0x34);
  uVar4 = (ulong)(uint)fVar17;
  if (bVar1) {
    if (*(long *)(param_5 + 0x18) == 0) goto LAB_006ea904;
    uVar7 = native_UnityEngine_Camera__get_orthographic_8d86c0(*(long *)(param_5 + 0x18),0);
    if ((uVar7 & 1) != 0) {
      dVar19 = (double)func_0x002c9600((double)fVar15,&dStack_d8);
      if (0.0 <= fVar15) {
        if (dVar19 == 0.5) {
          fVar16 = 1.0;
          goto LAB_006ea48c;
        }
        fVar15 = (float)(int)(fVar15 + 0.5);
      }
      else if (dVar19 == -0.5) {
        fVar16 = -1.0;
LAB_006ea48c:
        fVar15 = (float)dStack_d8;
        if (((long)dStack_d8 & 1U) != 0) {
          fVar15 = (float)dStack_d8 + fVar16;
        }
      }
      else {
        fVar15 = (float)(int)(fVar15 + -0.5);
      }
      dVar19 = (double)func_0x002c9600((double)fVar17,&dStack_d8);
      if (0.0 <= fVar17) {
        if (dVar19 == 0.5) {
          fVar16 = 1.0;
          goto LAB_006ea710;
        }
        uVar4 = (ulong)(uint)(int)(fVar17 + 0.5);
      }
      else if (dVar19 == -0.5) {
        fVar16 = -1.0;
LAB_006ea710:
        fVar17 = (float)dStack_d8;
        if (((long)dStack_d8 & 1U) != 0) {
          fVar17 = (float)dStack_d8 + fVar16;
        }
        uVar4 = (ulong)(uint)fVar17;
      }
      else {
        uVar4 = (ulong)(uint)(int)(fVar17 + -0.5);
      }
    }
    if (*(long *)(param_5 + 0x48) == 0) goto LAB_006ea904;
    lVar12 = *(long *)(param_5 + 0x18);
    native_UnityEngine_Transform__get_position_77169c(*(long *)(param_5 + 0x48),0);
    if (lVar12 == 0) goto LAB_006ea904;
    native_UnityEngine_Camera__WorldToScreenPoint_8d9158(lVar12,0);
    if (*(long *)(param_5 + 0x18) == 0) goto LAB_006ea904;
    uVar7 = native_UnityEngine_Camera__ScreenToWorldPoint_8d9170
                      (fVar15,uVar4,*(long *)(param_5 + 0x18),0);
    if (*(long *)(param_5 + 0x18) == 0) goto LAB_006ea904;
    uVar8 = native_UnityEngine_Camera__get_orthographic_8d86c0(*(long *)(param_5 + 0x18),0);
    if ((uVar8 & 1) != 0) {
      if (*(long *)(param_5 + 0x48) == 0) goto LAB_006ea904;
      uVar10 = native_UnityEngine_Transform__get_parent_765eb0(*(long *)(param_5 + 0x48),0);
      if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
        native_sub_4327ec(_UnityEngine_Object_TypeInfo_12d54e0);
      }
      uVar8 = native_UnityEngine_Object__op_Inequality_8d76fc(uVar10,0,0);
      if ((uVar8 & 1) != 0) {
        if ((*(long *)(param_5 + 0x48) == 0) ||
           (lVar12 = native_UnityEngine_Transform__get_parent_765eb0(*(long *)(param_5 + 0x48),0),
           lVar12 == 0)) goto LAB_006ea904;
        native_UnityEngine_Transform__InverseTransformPoint_7729a0(uVar7,uVar4,uVar22,lVar12,0);
        iVar2 = native_UnityEngine_Mathf__RoundToInt_8e50f0(0);
        iVar3 = native_UnityEngine_Mathf__RoundToInt_8e50f0(uVar4,0);
        if (*(long *)(param_5 + 0x48) == 0) goto LAB_006ea904;
        native_UnityEngine_Transform__get_localPosition_7717f4(*(long *)(param_5 + 0x48),0);
        uVar4 = native_UnityEngine_Vector3__op_Inequality_776c48(0);
        if ((uVar4 & 1) != 0) {
          if (*(long *)(param_5 + 0x48) == 0) goto LAB_006ea904;
          native_UnityEngine_Transform__set_localPosition_7718a4
                    ((float)iVar2,(float)iVar3,uVar22,*(long *)(param_5 + 0x48),0);
        }
        goto LAB_006ea8c0;
      }
    }
  }
  else {
    dVar19 = (double)func_0x002c9600((double)fVar15,&dStack_d8);
    if (0.0 <= fVar15) {
      if (dVar19 == 0.5) {
        fVar15 = 1.0;
        goto LAB_006ea460;
      }
      uVar7 = (ulong)(uint)(int)(fVar15 + 0.5);
    }
    else if (dVar19 == -0.5) {
      fVar15 = -1.0;
LAB_006ea460:
      fVar16 = (float)dStack_d8;
      if (((long)dStack_d8 & 1U) != 0) {
        fVar16 = (float)dStack_d8 + fVar15;
      }
      uVar7 = (ulong)(uint)fVar16;
    }
    else {
      uVar7 = (ulong)(uint)(int)(fVar15 + -0.5);
    }
    dVar19 = (double)func_0x002c9600((double)fVar17,&dStack_d8);
    if (0.0 <= fVar17) {
      if (dVar19 == 0.5) {
        fVar15 = 1.0;
        goto LAB_006ea4fc;
      }
      uVar4 = (ulong)(uint)(int)(fVar17 + 0.5);
    }
    else if (dVar19 == -0.5) {
      fVar15 = -1.0;
LAB_006ea4fc:
      fVar16 = (float)dStack_d8;
      if (((long)dStack_d8 & 1U) != 0) {
        fVar16 = (float)dStack_d8 + fVar15;
      }
      uVar4 = (ulong)(uint)fVar16;
    }
    else {
      uVar4 = (ulong)(uint)(int)(fVar17 + -0.5);
    }
    if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    uVar8 = native_UnityEngine_Object__op_Inequality_8d76fc(lVar11,0,0);
    if ((uVar8 & 1) == 0) {
      uVar10 = *(undefined8 *)(param_5 + 0x20);
      if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
        native_sub_4327ec();
      }
      uVar8 = native_UnityEngine_Object__op_Inequality_8d76fc(uVar10,0,0);
      if ((uVar8 & 1) != 0) {
        if ((*(long *)(param_5 + 0x20) == 0) ||
           (lVar12 = native_UnityEngine_GameObject__get_transform_8de5c8
                               (*(long *)(param_5 + 0x20),0), lVar12 == 0)) goto LAB_006ea904;
        lVar12 = native_UnityEngine_Transform__get_parent_765eb0(lVar12,0);
        if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
           (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
          native_sub_4327ec(_UnityEngine_Object_TypeInfo_12d54e0);
        }
        uVar8 = native_UnityEngine_Object__op_Inequality_8d76fc(lVar12,0,0);
        if ((uVar8 & 1) != 0) goto joined_r0x006ea60c;
      }
    }
    else {
      if (lVar11 == 0) goto LAB_006ea904;
      lVar12 = native_UIRect__get_cachedTransform_c27c58(lVar11,0);
joined_r0x006ea60c:
      if (lVar12 == 0) goto LAB_006ea904;
      uVar22 = 0;
      uVar7 = native_UnityEngine_Transform__TransformPoint_7728d8(uVar7,uVar4,0,lVar12,0);
    }
    if (*(long *)(param_5 + 0x48) == 0) goto LAB_006ea904;
    native_UnityEngine_Transform__get_position_77169c(*(long *)(param_5 + 0x48),0);
  }
  if (*(long *)(param_5 + 0x48) != 0) {
    native_UnityEngine_Transform__get_position_77169c(*(long *)(param_5 + 0x48),0);
    uVar8 = native_UnityEngine_Vector3__op_Inequality_776c48(0);
    if ((uVar8 & 1) != 0) {
      if (*(long *)(param_5 + 0x48) == 0) goto LAB_006ea904;
      native_UnityEngine_Transform__set_position_77174c
                (uVar7,uVar4,uVar22,*(long *)(param_5 + 0x48),0);
    }
LAB_006ea8c0:
    if ((*(char *)(param_5 + 0x2c) != '\0') &&
       (uVar4 = native_UnityEngine_Application__get_isPlaying_8d60cc(0), (uVar4 & 1) != 0)) {
      native_UnityEngine_Behaviour__set_enabled_8d7b0c(param_5,0,0);
    }
    return;
  }
LAB_006ea904:
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* UIAnchor$$.ctor @ 0x6eab00
 * void UIAnchor___ctor (UIAnchor_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIAnchor$$.ctor
   void UIAnchor___ctor (UIAnchor_o* __this, const MethodInfo* method); */

undefined1  [16]
native_UIAnchor___ctor_6eab00(undefined1 param_1 [16],undefined4 param_2,ulong param_3)

{
  undefined4 uVar1;
  undefined1 auVar2 [16];
  
  *(undefined4 *)(param_3 + 0x28) = 8;
  *(undefined1 *)(param_3 + 0x2c) = 1;
  uVar1 = native_UnityEngine_Vector2__get_zero_765ef0(0);
  *(undefined4 *)(param_3 + 0x30) = uVar1;
  *(undefined4 *)(param_3 + 0x34) = param_2;
  uVar1 = native_UnityEngine_Vector2__get_zero_765ef0(0);
  *(undefined4 *)(param_3 + 0x38) = uVar1;
  *(undefined4 *)(param_3 + 0x3c) = param_2;
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


