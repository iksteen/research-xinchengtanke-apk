/* ARM64 IL2CPP native pseudocode from Ghidra.
 * Recovered implementation, not original C# source.
 * Function boundaries follow the IL2CPP method address table. */


/* UIScrollView$$get_panel @ 0xc31790
 * UIPanel_o* UIScrollView__get_panel (UIScrollView_o* __this, const MethodInfo* method); */

/* UIScrollView$$get_panel
   UIPanel_o* UIScrollView__get_panel (UIScrollView_o* __this, const MethodInfo* method); */

undefined8 native_UIScrollView__get_panel_c31790(long param_1)

{
  return *(undefined8 *)(param_1 + 0x98);
}



/* UIScrollView$$get_isDragging @ 0xc31798
 * bool UIScrollView__get_isDragging (UIScrollView_o* __this, const MethodInfo* method); */

/* UIScrollView$$get_isDragging
   bool UIScrollView__get_isDragging (UIScrollView_o* __this, const MethodInfo* method); */

bool native_UIScrollView__get_isDragging_c31798(long param_1)

{
  if (*(char *)(param_1 + 0xbc) != '\0') {
    return *(char *)(param_1 + 0xf8) != '\0';
  }
  return false;
}



/* UIScrollView$$get_bounds @ 0xc317b8
 * UnityEngine_Bounds_o UIScrollView__get_bounds (UIScrollView_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIScrollView$$get_bounds
   UnityEngine_Bounds_o UIScrollView__get_bounds (UIScrollView_o* __this, const MethodInfo* method);
    */

void native_UIScrollView__get_bounds_c317b8(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  if ((bRam0000000001342732 & 1) == 0) {
    native_sub_43273c(&NGUIMath_TypeInfo_12d53b8);
    bRam0000000001342732 = 1;
  }
  if (*(char *)(param_2 + 0xe8) == '\0') {
    *(undefined1 *)(param_2 + 0xe8) = 1;
    uVar1 = native_UnityEngine_Component__get_transform_8da62c(param_2,0);
    *(undefined8 *)(param_2 + 0x90) = uVar1;
    native_sub_4326e0(param_2 + 0x90);
    uVar1 = *(undefined8 *)(param_2 + 0x90);
    if (((*(byte *)(_NGUIMath_TypeInfo_12d53b8 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_NGUIMath_TypeInfo_12d53b8 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    native_NGUIMath__CalculateRelativeWidgetBounds_805e1c(&uStack_48,uVar1,uVar1,0);
    *(undefined8 *)(param_2 + 0xe0) = uStack_38;
    *(undefined8 *)(param_2 + 0xd8) = uStack_40;
    *(undefined8 *)(param_2 + 0xd0) = uStack_48;
  }
  uVar2 = *(undefined8 *)(param_2 + 0xd8);
  uVar1 = *(undefined8 *)(param_2 + 0xd0);
  param_1[2] = *(undefined8 *)(param_2 + 0xe0);
  param_1[1] = uVar2;
  *param_1 = uVar1;
  return;
}



/* UIScrollView$$get_canMoveHorizontally @ 0xc318a8
 * bool UIScrollView__get_canMoveHorizontally (UIScrollView_o* __this, const MethodInfo* method); */

/* UIScrollView$$get_canMoveHorizontally
   bool UIScrollView__get_canMoveHorizontally (UIScrollView_o* __this, const MethodInfo* method); */

bool native_UIScrollView__get_canMoveHorizontally_c318a8(long param_1)

{
  int iVar1;
  bool bVar2;
  
  iVar1 = *(int *)(param_1 + 0x18);
  bVar2 = true;
  if ((iVar1 != 0) && (iVar1 != 2)) {
    if (iVar1 == 3) {
      return *(float *)(param_1 + 0x4c) != 0.0;
    }
    bVar2 = false;
  }
  return bVar2;
}



/* UIScrollView$$get_canMoveVertically @ 0xc318e0
 * bool UIScrollView__get_canMoveVertically (UIScrollView_o* __this, const MethodInfo* method); */

/* UIScrollView$$get_canMoveVertically
   bool UIScrollView__get_canMoveVertically (UIScrollView_o* __this, const MethodInfo* method); */

bool native_UIScrollView__get_canMoveVertically_c318e0(long param_1)

{
  if (*(int *)(param_1 + 0x18) - 1U < 2) {
    return true;
  }
  if (*(int *)(param_1 + 0x18) == 3) {
    return *(float *)(param_1 + 0x50) != 0.0;
  }
  return false;
}



/* UIScrollView$$get_shouldMoveHorizontally @ 0xc31918
 * bool UIScrollView__get_shouldMoveHorizontally (UIScrollView_o* __this, const MethodInfo* method); */

/* UIScrollView$$get_shouldMoveHorizontally
   bool UIScrollView__get_shouldMoveHorizontally (UIScrollView_o* __this, const MethodInfo* method);
    */

bool native_UIScrollView__get_shouldMoveHorizontally_c31918(long *param_1)

{
  int iVar1;
  long lVar2;
  float fVar3;
  float fVar4;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  
  uStack_40 = 0;
  uStack_38 = 0;
  uStack_30 = 0;
  (**(code **)(*param_1 + 0x178))(&uStack_58,param_1,*(undefined8 *)(*param_1 + 0x180));
  uStack_30 = uStack_48;
  uStack_38 = uStack_50;
  uStack_40 = uStack_58;
  fVar3 = (float)native_UnityEngine_Bounds__get_size_8d7ed8(&uStack_40,0);
  lVar2 = param_1[0x13];
  if (lVar2 != 0) {
    if (*(int *)(lVar2 + 0x140) == 3) {
      fVar3 = fVar3 + *(float *)(lVar2 + 0x154) + *(float *)(lVar2 + 0x154);
    }
    fVar4 = (float)native_UIPanel__get_width_aefab0(lVar2,0);
    iVar1 = native_UnityEngine_Mathf__RoundToInt_8e50f0(fVar3 - fVar4,0);
    return 0 < iVar1;
  }
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* UIScrollView$$get_shouldMoveVertically @ 0xc319bc
 * bool UIScrollView__get_shouldMoveVertically (UIScrollView_o* __this, const MethodInfo* method); */

/* UIScrollView$$get_shouldMoveVertically
   bool UIScrollView__get_shouldMoveVertically (UIScrollView_o* __this, const MethodInfo* method);
    */

bool native_UIScrollView__get_shouldMoveVertically_c319bc
               (undefined1 param_1 [16],float param_2,long *param_3)

{
  int iVar1;
  long lVar2;
  float fVar3;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  
  uStack_40 = 0;
  uStack_38 = 0;
  uStack_30 = 0;
  (**(code **)(*param_3 + 0x178))(&uStack_58,param_3,*(undefined8 *)(*param_3 + 0x180));
  uStack_30 = uStack_48;
  uStack_38 = uStack_50;
  uStack_40 = uStack_58;
  native_UnityEngine_Bounds__get_size_8d7ed8(&uStack_40,0);
  lVar2 = param_3[0x13];
  if (lVar2 != 0) {
    if (*(int *)(lVar2 + 0x140) == 3) {
      param_2 = param_2 + *(float *)(lVar2 + 0x158) + *(float *)(lVar2 + 0x158);
    }
    fVar3 = (float)native_UIPanel__get_height_aefb2c(lVar2,0);
    iVar1 = native_UnityEngine_Mathf__RoundToInt_8e50f0(param_2 - fVar3,0);
    return 0 < iVar1;
  }
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* UIScrollView$$get_shouldMove @ 0xc31a60
 * bool UIScrollView__get_shouldMove (UIScrollView_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIScrollView$$get_shouldMove
   bool UIScrollView__get_shouldMove (UIScrollView_o* __this, const MethodInfo* method); */

undefined8
native_UIScrollView__get_shouldMove_c31a60
          (undefined1 param_1 [16],float param_2,float param_3,float param_4,long *param_5)

{
  int iVar1;
  ulong uVar2;
  long *plVar3;
  long lVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  
  if ((bRam0000000001342733 & 1) == 0) {
    native_sub_43273c(&Method_UnityEngine_Component_GetComponent_UIPanel____12e2be0);
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    bRam0000000001342733 = 1;
  }
  uStack_68 = 0;
  uStack_60 = 0;
  uStack_70 = 0;
  if (*(char *)((long)param_5 + 0x22) == '\0') {
    return 1;
  }
  plVar3 = param_5 + 0x13;
  lVar4 = *plVar3;
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar2 = native_UnityEngine_Object__op_Equality_8e9a3c(lVar4,0,0);
  if ((uVar2 & 1) != 0) {
    lVar4 = native_UnityEngine_Component__GetComponent_ActiveAnimation__49daec
                      (param_5,_Method_UnityEngine_Component_GetComponent_UIPanel____12e2be0);
    param_5[0x13] = lVar4;
    native_sub_4326e0(plVar3,lVar4);
  }
  if (*plVar3 == 0) {
                    /* WARNING: Subroutine does not return */
    native_sub_432810();
  }
  fVar5 = (float)native_UIPanel__get_finalClipRegion_af03c8(*plVar3,0);
  fVar6 = param_2;
  (**(code **)(*param_5 + 0x178))(&uStack_88,param_5,*(undefined8 *)(*param_5 + 0x180));
  uStack_60 = uStack_78;
  uStack_68 = uStack_80;
  uStack_70 = uStack_88;
  if (param_3 == 0.0) {
    iVar1 = native_UnityEngine_Screen__get_width_76a5e4(0);
    param_3 = (float)iVar1;
  }
  else {
    param_3 = param_3 * 0.5;
  }
  if (param_4 == 0.0) {
    iVar1 = native_UnityEngine_Screen__get_height_76a618(0);
    param_4 = (float)iVar1;
  }
  else {
    param_4 = param_4 * 0.5;
  }
  iVar1 = (int)param_5[3];
  if ((iVar1 == 0) || (iVar1 == 2)) {
LAB_00c31bc4:
    fVar6 = (float)native_UnityEngine_Bounds__get_min_8d7f18(&uStack_70,0);
    if (fVar6 + 0.001 < fVar5 - param_3) {
      return 1;
    }
    fVar7 = (float)native_UnityEngine_Bounds__get_max_8d7f88(&uStack_70,0);
    fVar6 = fVar5 + param_3;
    if (fVar6 < fVar7 + -0.001) {
      return 1;
    }
    iVar1 = (int)param_5[3];
LAB_00c31c10:
    if (iVar1 - 1U < 2) goto LAB_00c31c30;
    if (iVar1 != 3) {
      return 0;
    }
  }
  else {
    if (iVar1 != 3) goto LAB_00c31c10;
    if (*(float *)((long)param_5 + 0x4c) != 0.0) goto LAB_00c31bc4;
  }
  if (*(float *)(param_5 + 10) == 0.0) {
    return 0;
  }
LAB_00c31c30:
  native_UnityEngine_Bounds__get_min_8d7f18(&uStack_70,0);
  fVar5 = param_2 - param_4;
  if ((fVar5 <= fVar6 + 0.001) &&
     (native_UnityEngine_Bounds__get_max_8d7f88(&uStack_70,0), fVar5 + -0.001 <= param_2 + param_4))
  {
    return 0;
  }
  return 1;
}



/* UIScrollView$$get_currentMomentum @ 0xc31ca4
 * UnityEngine_Vector3_o UIScrollView__get_currentMomentum (UIScrollView_o* __this, const MethodInfo* method); */

/* UIScrollView$$get_currentMomentum
   UnityEngine_Vector3_o UIScrollView__get_currentMomentum (UIScrollView_o* __this, const
   MethodInfo* method); */

undefined4 native_UIScrollView__get_currentMomentum_c31ca4(long param_1)

{
  return *(undefined4 *)(param_1 + 0xc0);
}



/* UIScrollView$$set_currentMomentum @ 0xc31cb0
 * void UIScrollView__set_currentMomentum (UIScrollView_o* __this, UnityEngine_Vector3_o value, const MethodInfo* method); */

/* UIScrollView$$set_currentMomentum
   void UIScrollView__set_currentMomentum (UIScrollView_o* __this, UnityEngine_Vector3_o value,
   const MethodInfo* method); */

void native_UIScrollView__set_currentMomentum_c31cb0
               (undefined4 param_1,undefined4 param_2,undefined4 param_3,long param_4)

{
  *(undefined4 *)(param_4 + 0xc0) = param_1;
  *(undefined4 *)(param_4 + 0xc4) = param_2;
  *(undefined4 *)(param_4 + 200) = param_3;
  *(undefined1 *)(param_4 + 0xe9) = 1;
  return;
}



/* UIScrollView$$Awake @ 0xc31cc4
 * void UIScrollView__Awake (UIScrollView_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIScrollView$$Awake
   void UIScrollView__Awake (UIScrollView_o* __this, const MethodInfo* method); */

void native_UIScrollView__Awake_c31cc4
               (undefined1 param_1 [16],float param_2,float param_3,long param_4)

{
  undefined8 uVar1;
  long lVar2;
  float fVar3;
  undefined4 uVar4;
  float fVar5;
  float fVar6;
  
  if ((bRam0000000001342734 & 1) == 0) {
    native_sub_43273c(&Method_UnityEngine_Component_GetComponent_UIPanel____12e2be0);
    native_sub_43273c(&NGUIMath_TypeInfo_12d53b8);
    bRam0000000001342734 = 1;
  }
  uVar1 = native_UnityEngine_Component__get_transform_8da62c(param_4,0);
  *(undefined8 *)(param_4 + 0x90) = uVar1;
  native_sub_4326e0(param_4 + 0x90);
  uVar1 = native_UnityEngine_Component__GetComponent_ActiveAnimation__49daec
                    (param_4,_Method_UnityEngine_Component_GetComponent_UIPanel____12e2be0);
  *(undefined8 *)(param_4 + 0x98) = uVar1;
  native_sub_4326e0(param_4 + 0x98);
  lVar2 = *(long *)(param_4 + 0x98);
  if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    native_sub_432810();
  }
  if (*(int *)(lVar2 + 0x140) == 0) {
    native_UIPanel__set_clipping_aefe74(lVar2,4,0);
  }
  if (*(int *)(param_4 + 0x18) == 3) goto LAB_00c31e18;
  fVar3 = (float)native_UnityEngine_Vector3__get_sqrMagnitude_776910((float *)(param_4 + 0x78),0);
  param_2 = 0.001;
  if (fVar3 <= 0.001) goto LAB_00c31e18;
  fVar3 = *(float *)(param_4 + 0x78);
  param_2 = 1.0;
  if ((fVar3 == 1.0) && (param_3 = *(float *)(param_4 + 0x7c), param_3 == 0.0)) {
    *(undefined4 *)(param_4 + 0x18) = 0;
  }
  else if ((fVar3 == 0.0) && (param_3 = *(float *)(param_4 + 0x7c), param_3 == 1.0)) {
    uVar4 = 1;
LAB_00c31de4:
    *(undefined4 *)(param_4 + 0x18) = uVar4;
  }
  else {
    if (fVar3 == 1.0) {
      param_3 = *(float *)(param_4 + 0x7c);
      fVar5 = param_3;
      if (param_3 == 1.0) {
        uVar4 = 2;
        goto LAB_00c31de4;
      }
    }
    else {
      fVar5 = *(float *)(param_4 + 0x7c);
    }
    *(float *)(param_4 + 0x4c) = fVar3;
    *(undefined4 *)(param_4 + 0x18) = 3;
    *(float *)(param_4 + 0x50) = fVar5;
  }
  uVar4 = native_UnityEngine_Vector3__get_zero_776668(0);
  *(undefined4 *)(param_4 + 0x78) = uVar4;
  *(float *)(param_4 + 0x7c) = param_2;
  *(float *)(param_4 + 0x80) = param_3;
LAB_00c31e18:
  if ((*(int *)(param_4 + 0x54) == 0) &&
     (fVar5 = *(float *)(param_4 + 0x84), fVar6 = *(float *)(param_4 + 0x88),
     fVar3 = (float)native_UnityEngine_Vector2__get_zero_765ef0(0), fVar5 = fVar5 - fVar3,
     fVar6 = fVar6 - param_2, 9.9999994e-11 <= fVar5 * fVar5 + fVar6 * fVar6)) {
    uVar4 = *(undefined4 *)(param_4 + 0x84);
    fVar3 = 1.0 - *(float *)(param_4 + 0x88);
    if (((*(byte *)(_NGUIMath_TypeInfo_12d53b8 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_NGUIMath_TypeInfo_12d53b8 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    uVar4 = native_NGUIMath__GetPivot_806d28(uVar4,0);
    *(undefined4 *)(param_4 + 0x54) = uVar4;
    uVar4 = native_UnityEngine_Vector2__get_zero_765ef0(0);
    *(undefined4 *)(param_4 + 0x84) = uVar4;
    *(float *)(param_4 + 0x88) = fVar3;
  }
  return;
}



/* UIScrollView$$OnEnable @ 0xc31eb0
 * void UIScrollView__OnEnable (UIScrollView_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIScrollView$$OnEnable
   void UIScrollView__OnEnable (UIScrollView_o* __this, const MethodInfo* method); */

void native_UIScrollView__OnEnable_c31eb0(long *param_1)

{
  long *plVar1;
  ulong uVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  float fVar7;
  undefined4 uVar8;
  
  if ((bRam0000000001342735 & 1) == 0) {
    native_sub_43273c(&Method_BetterList_UIScrollView__Add___12d8a20);
    native_sub_43273c(&UIScrollView_TypeInfo_12d64b8);
    bRam0000000001342735 = 1;
  }
  if (((*(byte *)(_UIScrollView_TypeInfo_12d64b8 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UIScrollView_TypeInfo_12d64b8 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  if (**(long **)(_UIScrollView_TypeInfo_12d64b8 + 0xb8) == 0) {
                    /* WARNING: Subroutine does not return */
    native_sub_432810();
  }
  native_BetterList_object___Add_ba24d8
            (**(long **)(_UIScrollView_TypeInfo_12d64b8 + 0xb8),param_1,
             _Method_BetterList_UIScrollView__Add___12d8a20);
  if ((*(char *)((long)param_1 + 0xf9) == '\0') ||
     (uVar2 = native_UnityEngine_Application__get_isPlaying_8d60cc(0), (uVar2 & 1) == 0)) {
    return;
  }
  if ((bRam0000000001342736 & 1) == 0) {
    native_sub_43273c(&EventDelegate_Callback_TypeInfo_12d72e8);
    native_sub_43273c(&EventDelegate_TypeInfo_12d4590);
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    native_sub_43273c(&Method_UIScrollView_OnScrollBar___12e7898);
    native_sub_43273c(&StringLiteral_CacheDefaultColor_12ecb50);
    bRam0000000001342736 = 1;
  }
  lVar5 = param_1[7];
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar2 = native_UnityEngine_Object__op_Inequality_8d76fc(lVar5,0,0);
  if ((uVar2 & 1) != 0) {
    if (param_1[7] == 0) goto LAB_00c321c4;
    uVar6 = *(undefined8 *)(param_1[7] + 0x68);
    uVar3 = native_sub_432808(_EventDelegate_Callback_TypeInfo_12d72e8);
    native_EventDelegate_Callback___ctor_54bd18
              (uVar3,param_1,_Method_UIScrollView_OnScrollBar___12e7898,0);
    if (((*(byte *)(_EventDelegate_TypeInfo_12d4590 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_EventDelegate_TypeInfo_12d4590 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    native_EventDelegate__Add_def10c(uVar6,uVar3,0);
    if (param_1[7] == 0) goto LAB_00c321c4;
    native_UnityEngine_Component__BroadcastMessage_8dac98
              (param_1[7],_StringLiteral_CacheDefaultColor_12ecb50,1,0);
    lVar5 = param_1[7];
    if ((int)param_1[9] == 0) {
LAB_00c320ac:
      uVar8 = 0x3f800000;
    }
    else {
      uVar2 = (**(code **)(*param_1 + 0x188))(param_1,*(undefined8 *)(*param_1 + 400));
      uVar8 = 0;
      if ((uVar2 & 1) != 0) goto LAB_00c320ac;
    }
    if (lVar5 == 0) goto LAB_00c321c4;
    native_UIProgressBar__set_alpha_c2ba2c(uVar8,lVar5);
  }
  lVar5 = param_1[8];
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar2 = native_UnityEngine_Object__op_Inequality_8d76fc(lVar5,0,0);
  if ((uVar2 & 1) == 0) {
    return;
  }
  if (param_1[8] == 0) goto LAB_00c321c4;
  uVar6 = *(undefined8 *)(param_1[8] + 0x68);
  uVar3 = native_sub_432808(_EventDelegate_Callback_TypeInfo_12d72e8);
  native_EventDelegate_Callback___ctor_54bd18
            (uVar3,param_1,_Method_UIScrollView_OnScrollBar___12e7898,0);
  if (((*(byte *)(_EventDelegate_TypeInfo_12d4590 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_EventDelegate_TypeInfo_12d4590 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  native_EventDelegate__Add_def10c(uVar6,uVar3,0);
  if (param_1[8] == 0) goto LAB_00c321c4;
  native_UnityEngine_Component__BroadcastMessage_8dac98
            (param_1[8],_StringLiteral_CacheDefaultColor_12ecb50,1,0);
  lVar5 = param_1[8];
  if ((int)param_1[9] == 0) {
LAB_00c32198:
    uVar8 = 0x3f800000;
  }
  else {
    uVar2 = (**(code **)(*param_1 + 0x198))(param_1,*(undefined8 *)(*param_1 + 0x1a0));
    uVar8 = 0;
    if ((uVar2 & 1) != 0) goto LAB_00c32198;
  }
  if (lVar5 == 0) {
LAB_00c321c4:
                    /* WARNING: Subroutine does not return */
    native_sub_432810();
  }
  if ((bRam00000000013426fa & 1) == 0) {
    native_sub_43273c(&Method_UnityEngine_Component_GetComponent_Collider2D____12e29c8);
    native_sub_43273c(&Method_UnityEngine_Component_GetComponent_Collider____12e29c0);
    native_sub_43273c(&Method_UnityEngine_Component_GetComponent_UIWidget____12e2c30);
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    bRam00000000013426fa = 1;
  }
  uVar3 = *(undefined8 *)(lVar5 + 0x30);
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar2 = native_UnityEngine_Object__op_Inequality_8d76fc(uVar3,0,0);
  if ((uVar2 & 1) != 0) {
    plVar1 = *(long **)(lVar5 + 0x30);
    if (plVar1 == (long *)0x0) goto LAB_00c2bf64;
    (**(code **)(*plVar1 + 0x1b8))(uVar8,plVar1,*(undefined8 *)(*plVar1 + 0x1c0));
    if (*(long *)(lVar5 + 0x30) == 0) goto LAB_00c2bf64;
    uVar3 = native_UnityEngine_Component__GetComponent_ActiveAnimation__49daec
                      (*(long *)(lVar5 + 0x30),
                       _Method_UnityEngine_Component_GetComponent_Collider____12e29c0);
    if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
      native_sub_4327ec(_UnityEngine_Object_TypeInfo_12d54e0);
    }
    uVar2 = native_UnityEngine_Object__op_Inequality_8d76fc(uVar3,0,0);
    lVar4 = *(long *)(lVar5 + 0x30);
    if (lVar4 == 0) goto LAB_00c2bf64;
    if ((uVar2 & 1) == 0) {
      uVar3 = native_UnityEngine_Component__GetComponent_ActiveAnimation__49daec
                        (lVar4,_Method_UnityEngine_Component_GetComponent_Collider2D____12e29c8);
      if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
        native_sub_4327ec(_UnityEngine_Object_TypeInfo_12d54e0);
      }
      uVar2 = native_UnityEngine_Object__op_Inequality_8d76fc(uVar3,0,0);
      if ((uVar2 & 1) != 0) {
        if (*(long *)(lVar5 + 0x30) == 0) goto LAB_00c2bf64;
        lVar4 = native_UnityEngine_Component__GetComponent_ActiveAnimation__49daec
                          (*(long *)(lVar5 + 0x30),
                           _Method_UnityEngine_Component_GetComponent_Collider2D____12e29c8);
        plVar1 = *(long **)(lVar5 + 0x30);
        if ((plVar1 == (long *)0x0) ||
           (fVar7 = (float)(**(code **)(*plVar1 + 0x1a8))(plVar1,*(undefined8 *)(*plVar1 + 0x1b0)),
           lVar4 == 0)) goto LAB_00c2bf64;
        native_UnityEngine_Behaviour__set_enabled_8d7b0c(lVar4,0.001 < fVar7,0);
      }
    }
    else {
      lVar4 = native_UnityEngine_Component__GetComponent_ActiveAnimation__49daec
                        (lVar4,_Method_UnityEngine_Component_GetComponent_Collider____12e29c0);
      plVar1 = *(long **)(lVar5 + 0x30);
      if ((plVar1 == (long *)0x0) ||
         (fVar7 = (float)(**(code **)(*plVar1 + 0x1a8))(plVar1,*(undefined8 *)(*plVar1 + 0x1b0)),
         lVar4 == 0)) goto LAB_00c2bf64;
      native_UnityEngine_Collider__set_enabled_dbac4c(lVar4,0.001 < fVar7,0);
    }
  }
  uVar3 = *(undefined8 *)(lVar5 + 0x28);
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar2 = native_UnityEngine_Object__op_Inequality_8d76fc(uVar3,0,0);
  if ((uVar2 & 1) != 0) {
    plVar1 = *(long **)(lVar5 + 0x28);
    if (plVar1 == (long *)0x0) goto LAB_00c2bf64;
    (**(code **)(*plVar1 + 0x1b8))(uVar8,plVar1,*(undefined8 *)(*plVar1 + 0x1c0));
    if (*(long *)(lVar5 + 0x28) == 0) goto LAB_00c2bf64;
    uVar3 = native_UnityEngine_Component__GetComponent_ActiveAnimation__49daec
                      (*(long *)(lVar5 + 0x28),
                       _Method_UnityEngine_Component_GetComponent_Collider____12e29c0);
    if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
      native_sub_4327ec(_UnityEngine_Object_TypeInfo_12d54e0);
    }
    uVar2 = native_UnityEngine_Object__op_Inequality_8d76fc(uVar3,0,0);
    lVar4 = *(long *)(lVar5 + 0x28);
    if (lVar4 == 0) goto LAB_00c2bf64;
    if ((uVar2 & 1) == 0) {
      uVar3 = native_UnityEngine_Component__GetComponent_ActiveAnimation__49daec
                        (lVar4,_Method_UnityEngine_Component_GetComponent_Collider2D____12e29c8);
      if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
        native_sub_4327ec(_UnityEngine_Object_TypeInfo_12d54e0);
      }
      uVar2 = native_UnityEngine_Object__op_Inequality_8d76fc(uVar3,0,0);
      if ((uVar2 & 1) != 0) {
        if (*(long *)(lVar5 + 0x28) == 0) goto LAB_00c2bf64;
        lVar4 = native_UnityEngine_Component__GetComponent_ActiveAnimation__49daec
                          (*(long *)(lVar5 + 0x28),
                           _Method_UnityEngine_Component_GetComponent_Collider2D____12e29c8);
        plVar1 = *(long **)(lVar5 + 0x28);
        if ((plVar1 == (long *)0x0) ||
           (fVar7 = (float)(**(code **)(*plVar1 + 0x1a8))(plVar1,*(undefined8 *)(*plVar1 + 0x1b0)),
           lVar4 == 0)) goto LAB_00c2bf64;
        native_UnityEngine_Behaviour__set_enabled_8d7b0c(lVar4,0.001 < fVar7,0);
      }
    }
    else {
      lVar4 = native_UnityEngine_Component__GetComponent_ActiveAnimation__49daec
                        (lVar4,_Method_UnityEngine_Component_GetComponent_Collider____12e29c0);
      plVar1 = *(long **)(lVar5 + 0x28);
      if ((plVar1 == (long *)0x0) ||
         (fVar7 = (float)(**(code **)(*plVar1 + 0x1a8))(plVar1,*(undefined8 *)(*plVar1 + 0x1b0)),
         lVar4 == 0)) goto LAB_00c2bf64;
      native_UnityEngine_Collider__set_enabled_dbac4c(lVar4,0.001 < fVar7,0);
    }
  }
  uVar3 = *(undefined8 *)(lVar5 + 0x20);
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar2 = native_UnityEngine_Object__op_Inequality_8d76fc(uVar3,0,0);
  if ((uVar2 & 1) == 0) {
    return;
  }
  if (*(long *)(lVar5 + 0x20) != 0) {
    plVar1 = (long *)native_UnityEngine_Component__GetComponent_ActiveAnimation__49daec
                               (*(long *)(lVar5 + 0x20),
                                _Method_UnityEngine_Component_GetComponent_UIWidget____12e2c30);
    if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
      native_sub_4327ec(_UnityEngine_Object_TypeInfo_12d54e0);
    }
    uVar2 = native_UnityEngine_Object__op_Inequality_8d76fc(plVar1,0,0);
    if ((uVar2 & 1) == 0) {
      return;
    }
    if (plVar1 != (long *)0x0) {
      (**(code **)(*plVar1 + 0x1b8))(uVar8,plVar1,*(undefined8 *)(*plVar1 + 0x1c0));
      uVar3 = native_UnityEngine_Component__GetComponent_ActiveAnimation__49daec
                        (plVar1,_Method_UnityEngine_Component_GetComponent_Collider____12e29c0);
      if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
        native_sub_4327ec(_UnityEngine_Object_TypeInfo_12d54e0);
      }
      uVar2 = native_UnityEngine_Object__op_Inequality_8d76fc(uVar3,0,0);
      if ((uVar2 & 1) == 0) {
        uVar3 = native_UnityEngine_Component__GetComponent_ActiveAnimation__49daec
                          (plVar1,_Method_UnityEngine_Component_GetComponent_Collider2D____12e29c8);
        if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
           (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
          native_sub_4327ec(_UnityEngine_Object_TypeInfo_12d54e0);
        }
        uVar2 = native_UnityEngine_Object__op_Inequality_8d76fc(uVar3,0,0);
        if ((uVar2 & 1) == 0) {
          return;
        }
        lVar5 = native_UnityEngine_Component__GetComponent_ActiveAnimation__49daec
                          (plVar1,_Method_UnityEngine_Component_GetComponent_Collider2D____12e29c8);
        fVar7 = (float)(**(code **)(*plVar1 + 0x1a8))(plVar1,*(undefined8 *)(*plVar1 + 0x1b0));
        if (lVar5 != 0) {
          if (pcRam0000000001340948 == (code *)0x0) {
            pcRam0000000001340948 = (code *)native_sub_4326f0(&UNK_00e2c702);
          }
                    /* WARNING: Could not recover jumptable at 0x008d7b58. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*pcRam0000000001340948)(lVar5,0.001 < fVar7);
          return;
        }
      }
      else {
        lVar5 = native_UnityEngine_Component__GetComponent_ActiveAnimation__49daec
                          (plVar1,_Method_UnityEngine_Component_GetComponent_Collider____12e29c0);
        fVar7 = (float)(**(code **)(*plVar1 + 0x1a8))(plVar1,*(undefined8 *)(*plVar1 + 0x1b0));
        if (lVar5 != 0) {
          if (pcRam0000000001343a70 == (code *)0x0) {
            pcRam0000000001343a70 = (code *)native_sub_4326f0(&UNK_00ecb664);
          }
                    /* WARNING: Could not recover jumptable at 0x00dbac98. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*pcRam0000000001343a70)(lVar5,0.001 < fVar7);
          return;
        }
      }
    }
  }
LAB_00c2bf64:
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* UIScrollView$$Start @ 0xc321c8
 * void UIScrollView__Start (UIScrollView_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIScrollView$$Start
   void UIScrollView__Start (UIScrollView_o* __this, const MethodInfo* method); */

void native_UIScrollView__Start_c321c8(long *param_1)

{
  long *plVar1;
  undefined8 uVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  float fVar7;
  undefined4 uVar8;
  
  *(undefined1 *)((long)param_1 + 0xf9) = 1;
  uVar3 = native_UnityEngine_Application__get_isPlaying_8d60cc(0);
  if ((uVar3 & 1) == 0) {
    return;
  }
  if ((bRam0000000001342736 & 1) == 0) {
    native_sub_43273c(&EventDelegate_Callback_TypeInfo_12d72e8);
    native_sub_43273c(&EventDelegate_TypeInfo_12d4590);
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    native_sub_43273c(&Method_UIScrollView_OnScrollBar___12e7898);
    native_sub_43273c(&StringLiteral_CacheDefaultColor_12ecb50);
    bRam0000000001342736 = 1;
  }
  lVar5 = param_1[7];
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar3 = native_UnityEngine_Object__op_Inequality_8d76fc(lVar5,0,0);
  if ((uVar3 & 1) != 0) {
    if (param_1[7] == 0) goto LAB_00c321c4;
    uVar6 = *(undefined8 *)(param_1[7] + 0x68);
    uVar2 = native_sub_432808(_EventDelegate_Callback_TypeInfo_12d72e8);
    native_EventDelegate_Callback___ctor_54bd18
              (uVar2,param_1,_Method_UIScrollView_OnScrollBar___12e7898,0);
    if (((*(byte *)(_EventDelegate_TypeInfo_12d4590 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_EventDelegate_TypeInfo_12d4590 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    native_EventDelegate__Add_def10c(uVar6,uVar2,0);
    if (param_1[7] == 0) goto LAB_00c321c4;
    native_UnityEngine_Component__BroadcastMessage_8dac98
              (param_1[7],_StringLiteral_CacheDefaultColor_12ecb50,1,0);
    lVar5 = param_1[7];
    if ((int)param_1[9] == 0) {
LAB_00c320ac:
      uVar8 = 0x3f800000;
    }
    else {
      uVar3 = (**(code **)(*param_1 + 0x188))(param_1,*(undefined8 *)(*param_1 + 400));
      uVar8 = 0;
      if ((uVar3 & 1) != 0) goto LAB_00c320ac;
    }
    if (lVar5 == 0) goto LAB_00c321c4;
    native_UIProgressBar__set_alpha_c2ba2c(uVar8,lVar5);
  }
  lVar5 = param_1[8];
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar3 = native_UnityEngine_Object__op_Inequality_8d76fc(lVar5,0,0);
  if ((uVar3 & 1) == 0) {
    return;
  }
  if (param_1[8] == 0) goto LAB_00c321c4;
  uVar6 = *(undefined8 *)(param_1[8] + 0x68);
  uVar2 = native_sub_432808(_EventDelegate_Callback_TypeInfo_12d72e8);
  native_EventDelegate_Callback___ctor_54bd18
            (uVar2,param_1,_Method_UIScrollView_OnScrollBar___12e7898,0);
  if (((*(byte *)(_EventDelegate_TypeInfo_12d4590 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_EventDelegate_TypeInfo_12d4590 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  native_EventDelegate__Add_def10c(uVar6,uVar2,0);
  if (param_1[8] == 0) goto LAB_00c321c4;
  native_UnityEngine_Component__BroadcastMessage_8dac98
            (param_1[8],_StringLiteral_CacheDefaultColor_12ecb50,1,0);
  lVar5 = param_1[8];
  if ((int)param_1[9] == 0) {
LAB_00c32198:
    uVar8 = 0x3f800000;
  }
  else {
    uVar3 = (**(code **)(*param_1 + 0x198))(param_1,*(undefined8 *)(*param_1 + 0x1a0));
    uVar8 = 0;
    if ((uVar3 & 1) != 0) goto LAB_00c32198;
  }
  if (lVar5 == 0) {
LAB_00c321c4:
                    /* WARNING: Subroutine does not return */
    native_sub_432810();
  }
  if ((bRam00000000013426fa & 1) == 0) {
    native_sub_43273c(&Method_UnityEngine_Component_GetComponent_Collider2D____12e29c8);
    native_sub_43273c(&Method_UnityEngine_Component_GetComponent_Collider____12e29c0);
    native_sub_43273c(&Method_UnityEngine_Component_GetComponent_UIWidget____12e2c30);
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    bRam00000000013426fa = 1;
  }
  uVar2 = *(undefined8 *)(lVar5 + 0x30);
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar3 = native_UnityEngine_Object__op_Inequality_8d76fc(uVar2,0,0);
  if ((uVar3 & 1) != 0) {
    plVar1 = *(long **)(lVar5 + 0x30);
    if (plVar1 == (long *)0x0) goto LAB_00c2bf64;
    (**(code **)(*plVar1 + 0x1b8))(uVar8,plVar1,*(undefined8 *)(*plVar1 + 0x1c0));
    if (*(long *)(lVar5 + 0x30) == 0) goto LAB_00c2bf64;
    uVar2 = native_UnityEngine_Component__GetComponent_ActiveAnimation__49daec
                      (*(long *)(lVar5 + 0x30),
                       _Method_UnityEngine_Component_GetComponent_Collider____12e29c0);
    if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
      native_sub_4327ec(_UnityEngine_Object_TypeInfo_12d54e0);
    }
    uVar3 = native_UnityEngine_Object__op_Inequality_8d76fc(uVar2,0,0);
    lVar4 = *(long *)(lVar5 + 0x30);
    if (lVar4 == 0) goto LAB_00c2bf64;
    if ((uVar3 & 1) == 0) {
      uVar2 = native_UnityEngine_Component__GetComponent_ActiveAnimation__49daec
                        (lVar4,_Method_UnityEngine_Component_GetComponent_Collider2D____12e29c8);
      if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
        native_sub_4327ec(_UnityEngine_Object_TypeInfo_12d54e0);
      }
      uVar3 = native_UnityEngine_Object__op_Inequality_8d76fc(uVar2,0,0);
      if ((uVar3 & 1) != 0) {
        if (*(long *)(lVar5 + 0x30) == 0) goto LAB_00c2bf64;
        lVar4 = native_UnityEngine_Component__GetComponent_ActiveAnimation__49daec
                          (*(long *)(lVar5 + 0x30),
                           _Method_UnityEngine_Component_GetComponent_Collider2D____12e29c8);
        plVar1 = *(long **)(lVar5 + 0x30);
        if ((plVar1 == (long *)0x0) ||
           (fVar7 = (float)(**(code **)(*plVar1 + 0x1a8))(plVar1,*(undefined8 *)(*plVar1 + 0x1b0)),
           lVar4 == 0)) goto LAB_00c2bf64;
        native_UnityEngine_Behaviour__set_enabled_8d7b0c(lVar4,0.001 < fVar7,0);
      }
    }
    else {
      lVar4 = native_UnityEngine_Component__GetComponent_ActiveAnimation__49daec
                        (lVar4,_Method_UnityEngine_Component_GetComponent_Collider____12e29c0);
      plVar1 = *(long **)(lVar5 + 0x30);
      if ((plVar1 == (long *)0x0) ||
         (fVar7 = (float)(**(code **)(*plVar1 + 0x1a8))(plVar1,*(undefined8 *)(*plVar1 + 0x1b0)),
         lVar4 == 0)) goto LAB_00c2bf64;
      native_UnityEngine_Collider__set_enabled_dbac4c(lVar4,0.001 < fVar7,0);
    }
  }
  uVar2 = *(undefined8 *)(lVar5 + 0x28);
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar3 = native_UnityEngine_Object__op_Inequality_8d76fc(uVar2,0,0);
  if ((uVar3 & 1) != 0) {
    plVar1 = *(long **)(lVar5 + 0x28);
    if (plVar1 == (long *)0x0) goto LAB_00c2bf64;
    (**(code **)(*plVar1 + 0x1b8))(uVar8,plVar1,*(undefined8 *)(*plVar1 + 0x1c0));
    if (*(long *)(lVar5 + 0x28) == 0) goto LAB_00c2bf64;
    uVar2 = native_UnityEngine_Component__GetComponent_ActiveAnimation__49daec
                      (*(long *)(lVar5 + 0x28),
                       _Method_UnityEngine_Component_GetComponent_Collider____12e29c0);
    if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
      native_sub_4327ec(_UnityEngine_Object_TypeInfo_12d54e0);
    }
    uVar3 = native_UnityEngine_Object__op_Inequality_8d76fc(uVar2,0,0);
    lVar4 = *(long *)(lVar5 + 0x28);
    if (lVar4 == 0) goto LAB_00c2bf64;
    if ((uVar3 & 1) == 0) {
      uVar2 = native_UnityEngine_Component__GetComponent_ActiveAnimation__49daec
                        (lVar4,_Method_UnityEngine_Component_GetComponent_Collider2D____12e29c8);
      if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
        native_sub_4327ec(_UnityEngine_Object_TypeInfo_12d54e0);
      }
      uVar3 = native_UnityEngine_Object__op_Inequality_8d76fc(uVar2,0,0);
      if ((uVar3 & 1) != 0) {
        if (*(long *)(lVar5 + 0x28) == 0) goto LAB_00c2bf64;
        lVar4 = native_UnityEngine_Component__GetComponent_ActiveAnimation__49daec
                          (*(long *)(lVar5 + 0x28),
                           _Method_UnityEngine_Component_GetComponent_Collider2D____12e29c8);
        plVar1 = *(long **)(lVar5 + 0x28);
        if ((plVar1 == (long *)0x0) ||
           (fVar7 = (float)(**(code **)(*plVar1 + 0x1a8))(plVar1,*(undefined8 *)(*plVar1 + 0x1b0)),
           lVar4 == 0)) goto LAB_00c2bf64;
        native_UnityEngine_Behaviour__set_enabled_8d7b0c(lVar4,0.001 < fVar7,0);
      }
    }
    else {
      lVar4 = native_UnityEngine_Component__GetComponent_ActiveAnimation__49daec
                        (lVar4,_Method_UnityEngine_Component_GetComponent_Collider____12e29c0);
      plVar1 = *(long **)(lVar5 + 0x28);
      if ((plVar1 == (long *)0x0) ||
         (fVar7 = (float)(**(code **)(*plVar1 + 0x1a8))(plVar1,*(undefined8 *)(*plVar1 + 0x1b0)),
         lVar4 == 0)) goto LAB_00c2bf64;
      native_UnityEngine_Collider__set_enabled_dbac4c(lVar4,0.001 < fVar7,0);
    }
  }
  uVar2 = *(undefined8 *)(lVar5 + 0x20);
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar3 = native_UnityEngine_Object__op_Inequality_8d76fc(uVar2,0,0);
  if ((uVar3 & 1) == 0) {
    return;
  }
  if (*(long *)(lVar5 + 0x20) != 0) {
    plVar1 = (long *)native_UnityEngine_Component__GetComponent_ActiveAnimation__49daec
                               (*(long *)(lVar5 + 0x20),
                                _Method_UnityEngine_Component_GetComponent_UIWidget____12e2c30);
    if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
      native_sub_4327ec(_UnityEngine_Object_TypeInfo_12d54e0);
    }
    uVar3 = native_UnityEngine_Object__op_Inequality_8d76fc(plVar1,0,0);
    if ((uVar3 & 1) == 0) {
      return;
    }
    if (plVar1 != (long *)0x0) {
      (**(code **)(*plVar1 + 0x1b8))(uVar8,plVar1,*(undefined8 *)(*plVar1 + 0x1c0));
      uVar2 = native_UnityEngine_Component__GetComponent_ActiveAnimation__49daec
                        (plVar1,_Method_UnityEngine_Component_GetComponent_Collider____12e29c0);
      if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
        native_sub_4327ec(_UnityEngine_Object_TypeInfo_12d54e0);
      }
      uVar3 = native_UnityEngine_Object__op_Inequality_8d76fc(uVar2,0,0);
      if ((uVar3 & 1) == 0) {
        uVar2 = native_UnityEngine_Component__GetComponent_ActiveAnimation__49daec
                          (plVar1,_Method_UnityEngine_Component_GetComponent_Collider2D____12e29c8);
        if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
           (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
          native_sub_4327ec(_UnityEngine_Object_TypeInfo_12d54e0);
        }
        uVar3 = native_UnityEngine_Object__op_Inequality_8d76fc(uVar2,0,0);
        if ((uVar3 & 1) == 0) {
          return;
        }
        lVar5 = native_UnityEngine_Component__GetComponent_ActiveAnimation__49daec
                          (plVar1,_Method_UnityEngine_Component_GetComponent_Collider2D____12e29c8);
        fVar7 = (float)(**(code **)(*plVar1 + 0x1a8))(plVar1,*(undefined8 *)(*plVar1 + 0x1b0));
        if (lVar5 != 0) {
          if (pcRam0000000001340948 == (code *)0x0) {
            pcRam0000000001340948 = (code *)native_sub_4326f0(&UNK_00e2c702);
          }
                    /* WARNING: Could not recover jumptable at 0x008d7b58. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*pcRam0000000001340948)(lVar5,0.001 < fVar7);
          return;
        }
      }
      else {
        lVar5 = native_UnityEngine_Component__GetComponent_ActiveAnimation__49daec
                          (plVar1,_Method_UnityEngine_Component_GetComponent_Collider____12e29c0);
        fVar7 = (float)(**(code **)(*plVar1 + 0x1a8))(plVar1,*(undefined8 *)(*plVar1 + 0x1b0));
        if (lVar5 != 0) {
          if (pcRam0000000001343a70 == (code *)0x0) {
            pcRam0000000001343a70 = (code *)native_sub_4326f0(&UNK_00ecb664);
          }
                    /* WARNING: Could not recover jumptable at 0x00dbac98. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*pcRam0000000001343a70)(lVar5,0.001 < fVar7);
          return;
        }
      }
    }
  }
LAB_00c2bf64:
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* UIScrollView$$CheckScrollbars @ 0xc31f64
 * void UIScrollView__CheckScrollbars (UIScrollView_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIScrollView$$CheckScrollbars
   void UIScrollView__CheckScrollbars (UIScrollView_o* __this, const MethodInfo* method); */

void native_UIScrollView__CheckScrollbars_c31f64(long *param_1)

{
  long *plVar1;
  ulong uVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  float fVar7;
  undefined4 uVar8;
  
  if ((bRam0000000001342736 & 1) == 0) {
    native_sub_43273c(&EventDelegate_Callback_TypeInfo_12d72e8);
    native_sub_43273c(&EventDelegate_TypeInfo_12d4590);
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    native_sub_43273c(&Method_UIScrollView_OnScrollBar___12e7898);
    native_sub_43273c(&StringLiteral_CacheDefaultColor_12ecb50);
    bRam0000000001342736 = 1;
  }
  lVar5 = param_1[7];
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar2 = native_UnityEngine_Object__op_Inequality_8d76fc(lVar5,0,0);
  if ((uVar2 & 1) != 0) {
    if (param_1[7] == 0) goto LAB_00c321c4;
    uVar6 = *(undefined8 *)(param_1[7] + 0x68);
    uVar3 = native_sub_432808(_EventDelegate_Callback_TypeInfo_12d72e8);
    native_EventDelegate_Callback___ctor_54bd18
              (uVar3,param_1,_Method_UIScrollView_OnScrollBar___12e7898,0);
    if (((*(byte *)(_EventDelegate_TypeInfo_12d4590 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_EventDelegate_TypeInfo_12d4590 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    native_EventDelegate__Add_def10c(uVar6,uVar3,0);
    if (param_1[7] == 0) goto LAB_00c321c4;
    native_UnityEngine_Component__BroadcastMessage_8dac98
              (param_1[7],_StringLiteral_CacheDefaultColor_12ecb50,1,0);
    lVar5 = param_1[7];
    if ((int)param_1[9] == 0) {
LAB_00c320ac:
      uVar8 = 0x3f800000;
    }
    else {
      uVar2 = (**(code **)(*param_1 + 0x188))(param_1,*(undefined8 *)(*param_1 + 400));
      uVar8 = 0;
      if ((uVar2 & 1) != 0) goto LAB_00c320ac;
    }
    if (lVar5 == 0) goto LAB_00c321c4;
    native_UIProgressBar__set_alpha_c2ba2c(uVar8,lVar5);
  }
  lVar5 = param_1[8];
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar2 = native_UnityEngine_Object__op_Inequality_8d76fc(lVar5,0,0);
  if ((uVar2 & 1) == 0) {
    return;
  }
  if (param_1[8] == 0) goto LAB_00c321c4;
  uVar6 = *(undefined8 *)(param_1[8] + 0x68);
  uVar3 = native_sub_432808(_EventDelegate_Callback_TypeInfo_12d72e8);
  native_EventDelegate_Callback___ctor_54bd18
            (uVar3,param_1,_Method_UIScrollView_OnScrollBar___12e7898,0);
  if (((*(byte *)(_EventDelegate_TypeInfo_12d4590 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_EventDelegate_TypeInfo_12d4590 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  native_EventDelegate__Add_def10c(uVar6,uVar3,0);
  if (param_1[8] == 0) goto LAB_00c321c4;
  native_UnityEngine_Component__BroadcastMessage_8dac98
            (param_1[8],_StringLiteral_CacheDefaultColor_12ecb50,1,0);
  lVar5 = param_1[8];
  if ((int)param_1[9] == 0) {
LAB_00c32198:
    uVar8 = 0x3f800000;
  }
  else {
    uVar2 = (**(code **)(*param_1 + 0x198))(param_1,*(undefined8 *)(*param_1 + 0x1a0));
    uVar8 = 0;
    if ((uVar2 & 1) != 0) goto LAB_00c32198;
  }
  if (lVar5 == 0) {
LAB_00c321c4:
                    /* WARNING: Subroutine does not return */
    native_sub_432810();
  }
  if ((bRam00000000013426fa & 1) == 0) {
    native_sub_43273c(&Method_UnityEngine_Component_GetComponent_Collider2D____12e29c8);
    native_sub_43273c(&Method_UnityEngine_Component_GetComponent_Collider____12e29c0);
    native_sub_43273c(&Method_UnityEngine_Component_GetComponent_UIWidget____12e2c30);
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    bRam00000000013426fa = 1;
  }
  uVar3 = *(undefined8 *)(lVar5 + 0x30);
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar2 = native_UnityEngine_Object__op_Inequality_8d76fc(uVar3,0,0);
  if ((uVar2 & 1) != 0) {
    plVar1 = *(long **)(lVar5 + 0x30);
    if (plVar1 == (long *)0x0) goto LAB_00c2bf64;
    (**(code **)(*plVar1 + 0x1b8))(uVar8,plVar1,*(undefined8 *)(*plVar1 + 0x1c0));
    if (*(long *)(lVar5 + 0x30) == 0) goto LAB_00c2bf64;
    uVar3 = native_UnityEngine_Component__GetComponent_ActiveAnimation__49daec
                      (*(long *)(lVar5 + 0x30),
                       _Method_UnityEngine_Component_GetComponent_Collider____12e29c0);
    if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
      native_sub_4327ec(_UnityEngine_Object_TypeInfo_12d54e0);
    }
    uVar2 = native_UnityEngine_Object__op_Inequality_8d76fc(uVar3,0,0);
    lVar4 = *(long *)(lVar5 + 0x30);
    if (lVar4 == 0) goto LAB_00c2bf64;
    if ((uVar2 & 1) == 0) {
      uVar3 = native_UnityEngine_Component__GetComponent_ActiveAnimation__49daec
                        (lVar4,_Method_UnityEngine_Component_GetComponent_Collider2D____12e29c8);
      if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
        native_sub_4327ec(_UnityEngine_Object_TypeInfo_12d54e0);
      }
      uVar2 = native_UnityEngine_Object__op_Inequality_8d76fc(uVar3,0,0);
      if ((uVar2 & 1) != 0) {
        if (*(long *)(lVar5 + 0x30) == 0) goto LAB_00c2bf64;
        lVar4 = native_UnityEngine_Component__GetComponent_ActiveAnimation__49daec
                          (*(long *)(lVar5 + 0x30),
                           _Method_UnityEngine_Component_GetComponent_Collider2D____12e29c8);
        plVar1 = *(long **)(lVar5 + 0x30);
        if ((plVar1 == (long *)0x0) ||
           (fVar7 = (float)(**(code **)(*plVar1 + 0x1a8))(plVar1,*(undefined8 *)(*plVar1 + 0x1b0)),
           lVar4 == 0)) goto LAB_00c2bf64;
        native_UnityEngine_Behaviour__set_enabled_8d7b0c(lVar4,0.001 < fVar7,0);
      }
    }
    else {
      lVar4 = native_UnityEngine_Component__GetComponent_ActiveAnimation__49daec
                        (lVar4,_Method_UnityEngine_Component_GetComponent_Collider____12e29c0);
      plVar1 = *(long **)(lVar5 + 0x30);
      if ((plVar1 == (long *)0x0) ||
         (fVar7 = (float)(**(code **)(*plVar1 + 0x1a8))(plVar1,*(undefined8 *)(*plVar1 + 0x1b0)),
         lVar4 == 0)) goto LAB_00c2bf64;
      native_UnityEngine_Collider__set_enabled_dbac4c(lVar4,0.001 < fVar7,0);
    }
  }
  uVar3 = *(undefined8 *)(lVar5 + 0x28);
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar2 = native_UnityEngine_Object__op_Inequality_8d76fc(uVar3,0,0);
  if ((uVar2 & 1) != 0) {
    plVar1 = *(long **)(lVar5 + 0x28);
    if (plVar1 == (long *)0x0) goto LAB_00c2bf64;
    (**(code **)(*plVar1 + 0x1b8))(uVar8,plVar1,*(undefined8 *)(*plVar1 + 0x1c0));
    if (*(long *)(lVar5 + 0x28) == 0) goto LAB_00c2bf64;
    uVar3 = native_UnityEngine_Component__GetComponent_ActiveAnimation__49daec
                      (*(long *)(lVar5 + 0x28),
                       _Method_UnityEngine_Component_GetComponent_Collider____12e29c0);
    if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
      native_sub_4327ec(_UnityEngine_Object_TypeInfo_12d54e0);
    }
    uVar2 = native_UnityEngine_Object__op_Inequality_8d76fc(uVar3,0,0);
    lVar4 = *(long *)(lVar5 + 0x28);
    if (lVar4 == 0) goto LAB_00c2bf64;
    if ((uVar2 & 1) == 0) {
      uVar3 = native_UnityEngine_Component__GetComponent_ActiveAnimation__49daec
                        (lVar4,_Method_UnityEngine_Component_GetComponent_Collider2D____12e29c8);
      if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
        native_sub_4327ec(_UnityEngine_Object_TypeInfo_12d54e0);
      }
      uVar2 = native_UnityEngine_Object__op_Inequality_8d76fc(uVar3,0,0);
      if ((uVar2 & 1) != 0) {
        if (*(long *)(lVar5 + 0x28) == 0) goto LAB_00c2bf64;
        lVar4 = native_UnityEngine_Component__GetComponent_ActiveAnimation__49daec
                          (*(long *)(lVar5 + 0x28),
                           _Method_UnityEngine_Component_GetComponent_Collider2D____12e29c8);
        plVar1 = *(long **)(lVar5 + 0x28);
        if ((plVar1 == (long *)0x0) ||
           (fVar7 = (float)(**(code **)(*plVar1 + 0x1a8))(plVar1,*(undefined8 *)(*plVar1 + 0x1b0)),
           lVar4 == 0)) goto LAB_00c2bf64;
        native_UnityEngine_Behaviour__set_enabled_8d7b0c(lVar4,0.001 < fVar7,0);
      }
    }
    else {
      lVar4 = native_UnityEngine_Component__GetComponent_ActiveAnimation__49daec
                        (lVar4,_Method_UnityEngine_Component_GetComponent_Collider____12e29c0);
      plVar1 = *(long **)(lVar5 + 0x28);
      if ((plVar1 == (long *)0x0) ||
         (fVar7 = (float)(**(code **)(*plVar1 + 0x1a8))(plVar1,*(undefined8 *)(*plVar1 + 0x1b0)),
         lVar4 == 0)) goto LAB_00c2bf64;
      native_UnityEngine_Collider__set_enabled_dbac4c(lVar4,0.001 < fVar7,0);
    }
  }
  uVar3 = *(undefined8 *)(lVar5 + 0x20);
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar2 = native_UnityEngine_Object__op_Inequality_8d76fc(uVar3,0,0);
  if ((uVar2 & 1) == 0) {
    return;
  }
  if (*(long *)(lVar5 + 0x20) != 0) {
    plVar1 = (long *)native_UnityEngine_Component__GetComponent_ActiveAnimation__49daec
                               (*(long *)(lVar5 + 0x20),
                                _Method_UnityEngine_Component_GetComponent_UIWidget____12e2c30);
    if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
      native_sub_4327ec(_UnityEngine_Object_TypeInfo_12d54e0);
    }
    uVar2 = native_UnityEngine_Object__op_Inequality_8d76fc(plVar1,0,0);
    if ((uVar2 & 1) == 0) {
      return;
    }
    if (plVar1 != (long *)0x0) {
      (**(code **)(*plVar1 + 0x1b8))(uVar8,plVar1,*(undefined8 *)(*plVar1 + 0x1c0));
      uVar3 = native_UnityEngine_Component__GetComponent_ActiveAnimation__49daec
                        (plVar1,_Method_UnityEngine_Component_GetComponent_Collider____12e29c0);
      if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
        native_sub_4327ec(_UnityEngine_Object_TypeInfo_12d54e0);
      }
      uVar2 = native_UnityEngine_Object__op_Inequality_8d76fc(uVar3,0,0);
      if ((uVar2 & 1) == 0) {
        uVar3 = native_UnityEngine_Component__GetComponent_ActiveAnimation__49daec
                          (plVar1,_Method_UnityEngine_Component_GetComponent_Collider2D____12e29c8);
        if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
           (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
          native_sub_4327ec(_UnityEngine_Object_TypeInfo_12d54e0);
        }
        uVar2 = native_UnityEngine_Object__op_Inequality_8d76fc(uVar3,0,0);
        if ((uVar2 & 1) == 0) {
          return;
        }
        lVar5 = native_UnityEngine_Component__GetComponent_ActiveAnimation__49daec
                          (plVar1,_Method_UnityEngine_Component_GetComponent_Collider2D____12e29c8);
        fVar7 = (float)(**(code **)(*plVar1 + 0x1a8))(plVar1,*(undefined8 *)(*plVar1 + 0x1b0));
        if (lVar5 != 0) {
          if (pcRam0000000001340948 == (code *)0x0) {
            pcRam0000000001340948 = (code *)native_sub_4326f0(&UNK_00e2c702);
          }
                    /* WARNING: Could not recover jumptable at 0x008d7b58. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*pcRam0000000001340948)(lVar5,0.001 < fVar7);
          return;
        }
      }
      else {
        lVar5 = native_UnityEngine_Component__GetComponent_ActiveAnimation__49daec
                          (plVar1,_Method_UnityEngine_Component_GetComponent_Collider____12e29c0);
        fVar7 = (float)(**(code **)(*plVar1 + 0x1a8))(plVar1,*(undefined8 *)(*plVar1 + 0x1b0));
        if (lVar5 != 0) {
          if (pcRam0000000001343a70 == (code *)0x0) {
            pcRam0000000001343a70 = (code *)native_sub_4326f0(&UNK_00ecb664);
          }
                    /* WARNING: Could not recover jumptable at 0x00dbac98. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*pcRam0000000001343a70)(lVar5,0.001 < fVar7);
          return;
        }
      }
    }
  }
LAB_00c2bf64:
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* UIScrollView$$OnDisable @ 0xc32208
 * void UIScrollView__OnDisable (UIScrollView_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIScrollView$$OnDisable
   void UIScrollView__OnDisable (UIScrollView_o* __this, const MethodInfo* method); */

void native_UIScrollView__OnDisable_c32208(long param_1)

{
  if ((bRam0000000001342737 & 1) == 0) {
    native_sub_43273c(&Method_BetterList_UIScrollView__Remove___12d8a28);
    native_sub_43273c(&UIScrollView_TypeInfo_12d64b8);
    bRam0000000001342737 = 1;
  }
  if (((*(byte *)(_UIScrollView_TypeInfo_12d64b8 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UIScrollView_TypeInfo_12d64b8 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  if (**(long **)(_UIScrollView_TypeInfo_12d64b8 + 0xb8) != 0) {
    native_BetterList_object___Remove_ba2804
              (**(long **)(_UIScrollView_TypeInfo_12d64b8 + 0xb8),param_1,
               _Method_BetterList_UIScrollView__Remove___12d8a28);
    *(undefined1 *)(param_1 + 0xbc) = 0;
    return;
  }
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* UIScrollView$$RestrictWithinBounds @ 0xc3229c
 * bool UIScrollView__RestrictWithinBounds (UIScrollView_o* __this, bool instant, const MethodInfo* method); */

/* WARNING: Removing unreachable block (ram,0x00c323c0) */
/* WARNING: Removing unreachable block (ram,0x00c323c8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIScrollView$$RestrictWithinBounds
   bool UIScrollView__RestrictWithinBounds (UIScrollView_o* __this, bool instant, const MethodInfo*
   method); */

undefined8
native_UIScrollView__RestrictWithinBounds_c3229c
          (undefined1 param_1 [16],undefined8 param_2,long *param_3,uint param_4)

{
  ulong uVar1;
  undefined8 uVar2;
  long lVar3;
  long *plVar4;
  float fVar5;
  float fVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  double dVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  double dStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  float fStack_90;
  float fStack_8c;
  float fStack_88;
  double dStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  
  if ((bRam0000000001342738 & 1) == 0) {
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    bRam0000000001342738 = 1;
  }
  dStack_80 = 0.0;
  uStack_78 = 0;
  uStack_70 = 0;
  fStack_88 = 0.0;
  fStack_90 = 0.0;
  fStack_8c = 0.0;
  lVar3 = param_3[0x13];
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar1 = native_UnityEngine_Object__op_Equality_8e9a3c(lVar3,0,0);
  if ((uVar1 & 1) != 0) {
    return 0;
  }
  (**(code **)(*param_3 + 0x178))(&dStack_a8,param_3,*(undefined8 *)(*param_3 + 0x180));
  uStack_70 = uStack_98;
  uStack_78 = uStack_a0;
  dStack_80 = dStack_a8;
  plVar4 = (long *)param_3[0x13];
  uVar7 = native_UnityEngine_Bounds__get_min_8d7f18(&dStack_80,0);
  uVar2 = param_2;
  uVar8 = native_UnityEngine_Bounds__get_max_8d7f88(&dStack_80,0);
  if (plVar4 == (long *)0x0) goto LAB_00c325c0;
  fStack_90 = (float)(**(code **)(*plVar4 + 0x2a8))
                               (uVar7,param_2,uVar8,uVar2,plVar4,*(undefined8 *)(*plVar4 + 0x2b0));
  fStack_8c = (float)param_2;
  fVar10 = (float)uVar8;
  fStack_88 = fVar10;
  fVar5 = (float)native_UnityEngine_Vector3__get_sqrMagnitude_776910(&fStack_90,0);
  fVar12 = 0.1;
  if (fVar5 <= 0.1) {
    return 0;
  }
  if (((param_4 & 1) != 0) || (*(int *)((long)param_3 + 0x1c) != 2)) {
    (**(code **)(*param_3 + 0x1d8))
              (fStack_90,fStack_8c,fStack_88,param_3,*(undefined8 *)(*param_3 + 0x1e0));
    if (0.01 < ABS(fStack_90)) {
      *(undefined4 *)(param_3 + 0x18) = 0;
    }
    if (0.01 < ABS(fStack_8c)) {
      *(undefined4 *)((long)param_3 + 0xc4) = 0;
    }
    if (0.01 < ABS(fStack_88)) {
      *(undefined4 *)(param_3 + 0x19) = 0;
    }
    *(undefined4 *)((long)param_3 + 0xcc) = 0;
    return 1;
  }
  if (param_3[0x12] == 0) goto LAB_00c325c0;
  fVar6 = (float)native_UnityEngine_Transform__get_localPosition_7717f4(param_3[0x12],0);
  fVar5 = fStack_88;
  fVar6 = fVar6 + fStack_90;
  fVar12 = fVar12 + fStack_8c;
  dVar9 = (double)func_0x002c9600((double)fVar6,&dStack_a8);
  if (0.0 <= fVar6) {
    if (dVar9 == 0.5) {
      fVar6 = 1.0;
      goto LAB_00c324c8;
    }
    fVar11 = (float)(int)(fVar6 + 0.5);
  }
  else if (dVar9 == -0.5) {
    fVar6 = -1.0;
LAB_00c324c8:
    fVar11 = (float)dStack_a8;
    if (((long)dStack_a8 & 1U) != 0) {
      fVar11 = (float)dStack_a8 + fVar6;
    }
  }
  else {
    fVar11 = (float)(int)(fVar6 + -0.5);
  }
  dVar9 = (double)func_0x002c9600((double)fVar12,&dStack_a8);
  if (0.0 <= fVar12) {
    if (dVar9 == 0.5) {
      fVar12 = 1.0;
      goto LAB_00c3253c;
    }
    fVar6 = (float)(int)(fVar12 + 0.5);
  }
  else if (dVar9 == -0.5) {
    fVar12 = -1.0;
LAB_00c3253c:
    fVar6 = (float)dStack_a8;
    if (((long)dStack_a8 & 1U) != 0) {
      fVar6 = (float)dStack_a8 + fVar12;
    }
  }
  else {
    fVar6 = (float)(int)(fVar12 + -0.5);
  }
  if (param_3[0x13] != 0) {
    uVar2 = native_UnityEngine_Component__get_gameObject_8da66c(param_3[0x13],0);
    native_SpringPanel__Begin_73ea10(fVar11,fVar6,fVar10 + fVar5,(int)param_3[6],uVar2,0);
    return 1;
  }
LAB_00c325c0:
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* UIScrollView$$RestrictWithinBounds @ 0xc322ac
 * bool UIScrollView__RestrictWithinBounds (UIScrollView_o* __this, bool instant, bool horizontal, bool vertical, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIScrollView$$RestrictWithinBounds
   bool UIScrollView__RestrictWithinBounds (UIScrollView_o* __this, bool instant, bool horizontal,
   bool vertical, const MethodInfo* method); */

undefined8
native_UIScrollView__RestrictWithinBounds_c322ac
          (undefined1 param_1 [16],undefined8 param_2,long *param_3,ulong param_4,ulong param_5,
          uint param_6)

{
  ulong uVar1;
  undefined8 uVar2;
  long lVar3;
  long *plVar4;
  float fVar5;
  float fVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  double dVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  double dStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  float fStack_90;
  float fStack_8c;
  float fStack_88;
  double dStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  
  if ((bRam0000000001342738 & 1) == 0) {
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    bRam0000000001342738 = 1;
  }
  dStack_80 = 0.0;
  uStack_78 = 0;
  uStack_70 = 0;
  fStack_88 = 0.0;
  fStack_90 = 0.0;
  fStack_8c = 0.0;
  lVar3 = param_3[0x13];
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar1 = native_UnityEngine_Object__op_Equality_8e9a3c(lVar3,0,0);
  if ((uVar1 & 1) != 0) {
    return 0;
  }
  (**(code **)(*param_3 + 0x178))(&dStack_a8,param_3,*(undefined8 *)(*param_3 + 0x180));
  uStack_70 = uStack_98;
  uStack_78 = uStack_a0;
  dStack_80 = dStack_a8;
  plVar4 = (long *)param_3[0x13];
  uVar7 = native_UnityEngine_Bounds__get_min_8d7f18(&dStack_80,0);
  uVar2 = param_2;
  uVar8 = native_UnityEngine_Bounds__get_max_8d7f88(&dStack_80,0);
  if (plVar4 == (long *)0x0) goto LAB_00c325c0;
  fStack_90 = (float)(**(code **)(*plVar4 + 0x2a8))
                               (uVar7,param_2,uVar8,uVar2,plVar4,*(undefined8 *)(*plVar4 + 0x2b0));
  fStack_8c = (float)param_2;
  fVar10 = (float)uVar8;
  if ((param_5 & 1) == 0) {
    fStack_90 = 0.0;
  }
  if ((param_6 & 1) == 0) {
    fStack_8c = 0.0;
  }
  fStack_88 = fVar10;
  fVar5 = (float)native_UnityEngine_Vector3__get_sqrMagnitude_776910(&fStack_90,0);
  fVar12 = 0.1;
  if (fVar5 <= 0.1) {
    return 0;
  }
  if (((param_4 & 1) != 0) || (*(int *)((long)param_3 + 0x1c) != 2)) {
    (**(code **)(*param_3 + 0x1d8))
              (fStack_90,fStack_8c,fStack_88,param_3,*(undefined8 *)(*param_3 + 0x1e0));
    if (0.01 < ABS(fStack_90)) {
      *(undefined4 *)(param_3 + 0x18) = 0;
    }
    if (0.01 < ABS(fStack_8c)) {
      *(undefined4 *)((long)param_3 + 0xc4) = 0;
    }
    if (0.01 < ABS(fStack_88)) {
      *(undefined4 *)(param_3 + 0x19) = 0;
    }
    *(undefined4 *)((long)param_3 + 0xcc) = 0;
    return 1;
  }
  if (param_3[0x12] == 0) goto LAB_00c325c0;
  fVar6 = (float)native_UnityEngine_Transform__get_localPosition_7717f4(param_3[0x12],0);
  fVar5 = fStack_88;
  fVar6 = fVar6 + fStack_90;
  fVar12 = fVar12 + fStack_8c;
  dVar9 = (double)func_0x002c9600((double)fVar6,&dStack_a8);
  if (0.0 <= fVar6) {
    if (dVar9 == 0.5) {
      fVar6 = 1.0;
      goto LAB_00c324c8;
    }
    fVar11 = (float)(int)(fVar6 + 0.5);
  }
  else if (dVar9 == -0.5) {
    fVar6 = -1.0;
LAB_00c324c8:
    fVar11 = (float)dStack_a8;
    if (((long)dStack_a8 & 1U) != 0) {
      fVar11 = (float)dStack_a8 + fVar6;
    }
  }
  else {
    fVar11 = (float)(int)(fVar6 + -0.5);
  }
  dVar9 = (double)func_0x002c9600((double)fVar12,&dStack_a8);
  if (0.0 <= fVar12) {
    if (dVar9 == 0.5) {
      fVar12 = 1.0;
      goto LAB_00c3253c;
    }
    fVar6 = (float)(int)(fVar12 + 0.5);
  }
  else if (dVar9 == -0.5) {
    fVar12 = -1.0;
LAB_00c3253c:
    fVar6 = (float)dStack_a8;
    if (((long)dStack_a8 & 1U) != 0) {
      fVar6 = (float)dStack_a8 + fVar12;
    }
  }
  else {
    fVar6 = (float)(int)(fVar12 + -0.5);
  }
  if (param_3[0x13] != 0) {
    uVar2 = native_UnityEngine_Component__get_gameObject_8da66c(param_3[0x13],0);
    native_SpringPanel__Begin_73ea10(fVar11,fVar6,fVar10 + fVar5,(int)param_3[6],uVar2,0);
    return 1;
  }
LAB_00c325c0:
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* UIScrollView$$DisableSpring @ 0xc325c4
 * void UIScrollView__DisableSpring (UIScrollView_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIScrollView$$DisableSpring
   void UIScrollView__DisableSpring (UIScrollView_o* __this, const MethodInfo* method); */

void native_UIScrollView__DisableSpring_c325c4(undefined8 param_1)

{
  long lVar1;
  ulong uVar2;
  
  if ((bRam0000000001342739 & 1) == 0) {
    native_sub_43273c(&Method_UnityEngine_Component_GetComponent_SpringPanel____12e2b08);
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    bRam0000000001342739 = 1;
  }
  lVar1 = native_UnityEngine_Component__GetComponent_ActiveAnimation__49daec
                    (param_1,_Method_UnityEngine_Component_GetComponent_SpringPanel____12e2b08);
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec(_UnityEngine_Object_TypeInfo_12d54e0);
  }
  uVar2 = native_UnityEngine_Object__op_Inequality_8d76fc(lVar1,0,0);
  if ((uVar2 & 1) != 0) {
    if (lVar1 != 0) {
      if (pcRam0000000001340948 == (code *)0x0) {
        pcRam0000000001340948 = (code *)native_sub_4326f0(&UNK_00e2c702);
      }
                    /* WARNING: Could not recover jumptable at 0x008d7b58. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*pcRam0000000001340948)(lVar1,0);
      return;
    }
                    /* WARNING: Subroutine does not return */
    native_sub_432810();
  }
  return;
}



/* UIScrollView$$UpdateScrollbars @ 0xc3267c
 * void UIScrollView__UpdateScrollbars (UIScrollView_o* __this, const MethodInfo* method); */

/* UIScrollView$$UpdateScrollbars
   void UIScrollView__UpdateScrollbars (UIScrollView_o* __this, const MethodInfo* method); */

void native_UIScrollView__UpdateScrollbars_c3267c(long *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00c32688. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x1b8))(param_1,1,*(undefined8 *)(*param_1 + 0x1c0));
  return;
}



/* UIScrollView$$QueueUpdateScrollbars @ 0xc3268c
 * void UIScrollView__QueueUpdateScrollbars (UIScrollView_o* __this, const MethodInfo* method); */

/* UIScrollView$$QueueUpdateScrollbars
   void UIScrollView__QueueUpdateScrollbars (UIScrollView_o* __this, const MethodInfo* method); */

void native_UIScrollView__QueueUpdateScrollbars_c3268c(long param_1)

{
  *(undefined1 *)(param_1 + 0xfa) = 1;
  return;
}



/* UIScrollView$$Update @ 0xc32698
 * void UIScrollView__Update (UIScrollView_o* __this, const MethodInfo* method); */

/* UIScrollView$$Update
   void UIScrollView__Update (UIScrollView_o* __this, const MethodInfo* method); */

void native_UIScrollView__Update_c32698(long *param_1)

{
  if (*(char *)((long)param_1 + 0xfa) != '\0') {
    *(undefined1 *)((long)param_1 + 0xfa) = 0;
                    /* WARNING: Could not recover jumptable at 0x00c326b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x1b8))(param_1,1,*(undefined8 *)(*param_1 + 0x1c0));
    return;
  }
  return;
}



/* UIScrollView$$UpdateScrollbars @ 0xc326b8
 * void UIScrollView__UpdateScrollbars (UIScrollView_o* __this, bool recalculateBounds, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIScrollView$$UpdateScrollbars
   void UIScrollView__UpdateScrollbars (UIScrollView_o* __this, bool recalculateBounds, const
   MethodInfo* method); */

void native_UIScrollView__UpdateScrollbars_c326b8
               (undefined1 param_1 [16],float param_2,undefined1 param_3 [16],
               undefined1 param_4 [16],long *param_5,ulong param_6)

{
  byte bVar1;
  uint uVar2;
  ulong uVar3;
  long lVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  double dVar9;
  float fVar10;
  float fVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  float fVar15;
  double dStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  double dStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  
  uVar14 = param_4._4_4_;
  fVar15 = param_4._0_4_;
  uVar13 = param_3._4_4_;
  uVar12 = param_3._0_4_;
  if ((bRam000000000134273a & 1) == 0) {
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    bRam000000000134273a = 1;
  }
  dStack_90 = 0.0;
  uStack_88 = 0;
  uStack_80 = 0;
  lVar4 = param_5[0x13];
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar3 = native_UnityEngine_Object__op_Equality_8e9a3c(lVar4,0,0);
  if ((uVar3 & 1) != 0) {
    return;
  }
  *(undefined1 *)((long)param_5 + 0xfa) = 0;
  lVar4 = param_5[7];
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar3 = native_UnityEngine_Object__op_Inequality_8d76fc(lVar4,0,0);
  if ((uVar3 & 1) == 0) {
    lVar4 = param_5[8];
    if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    uVar3 = native_UnityEngine_Object__op_Inequality_8d76fc(lVar4,0,0);
    if ((uVar3 & 1) == 0) {
      if ((param_6 & 1) == 0) {
        return;
      }
      *(undefined1 *)(param_5 + 0x1d) = 0;
      return;
    }
  }
  if ((param_6 & 1) != 0) {
    *(undefined1 *)(param_5 + 0x1d) = 0;
    bVar1 = (**(code **)(*param_5 + 0x1a8))(param_5,*(undefined8 *)(*param_5 + 0x1b0));
    *(byte *)((long)param_5 + 0xe9) = bVar1 & 1;
  }
  (**(code **)(*param_5 + 0x178))(&dStack_a8,param_5,*(undefined8 *)(*param_5 + 0x180));
  uStack_80 = uStack_98;
  uStack_88 = uStack_a0;
  dStack_90 = dStack_a8;
  fVar5 = (float)native_UnityEngine_Bounds__get_min_8d7f18(&dStack_90,0);
  fVar10 = param_2;
  fVar6 = (float)native_UnityEngine_Bounds__get_max_8d7f88(&dStack_90,0);
  lVar4 = param_5[7];
  fVar11 = fVar10;
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar3 = native_UnityEngine_Object__op_Inequality_8d76fc(lVar4,0,0);
  if ((fVar5 < fVar6) && ((uVar3 & 1) != 0)) {
    if (param_5[0x13] == 0) goto LAB_00c32a84;
    fVar7 = (float)native_UIPanel__get_finalClipRegion_af03c8(param_5[0x13],0);
    uVar2 = native_UnityEngine_Mathf__RoundToInt_8e50f0(CONCAT44(uVar13,uVar12),0);
    fVar15 = (float)(int)(uVar2 - (uVar2 & 1)) * 0.5;
    dVar9 = (double)func_0x002c9600((double)fVar15,&dStack_a8);
    if (0.0 <= fVar15) {
      if (dVar9 == 0.5) {
        fVar15 = 1.0;
        goto LAB_00c328cc;
      }
      fVar8 = (float)(int)(fVar15 + 0.5);
    }
    else if (dVar9 == -0.5) {
      fVar15 = -1.0;
LAB_00c328cc:
      fVar8 = (float)dStack_a8;
      if (((long)dStack_a8 & 1U) != 0) {
        fVar8 = (float)dStack_a8 + fVar15;
      }
    }
    else {
      fVar8 = (float)(int)(fVar15 + -0.5);
    }
    lVar4 = param_5[0x13];
    if (lVar4 == 0) goto LAB_00c32a84;
    if (*(int *)(lVar4 + 0x140) == 3) {
      fVar8 = fVar8 - *(float *)(lVar4 + 0x154);
    }
    fVar15 = fVar8 + fVar8;
    uVar14 = 0;
    fVar11 = fVar6 - (fVar7 + fVar8);
    native_UIScrollView__UpdateScrollbars_c32a88
              ((fVar7 - fVar8) - fVar5,fVar11,fVar6 - fVar5,fVar15,param_5,param_5[7],0);
  }
  lVar4 = param_5[8];
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar3 = native_UnityEngine_Object__op_Inequality_8d76fc(lVar4,0,0);
  if (fVar10 <= param_2) {
    return;
  }
  if ((uVar3 & 1) == 0) {
    return;
  }
  if (param_5[0x13] == 0) goto LAB_00c32a84;
  native_UIPanel__get_finalClipRegion_af03c8(param_5[0x13],0);
  uVar2 = native_UnityEngine_Mathf__RoundToInt_8e50f0(CONCAT44(uVar14,fVar15),0);
  fVar15 = (float)(int)(uVar2 - (uVar2 & 1)) * 0.5;
  dVar9 = (double)func_0x002c9600((double)fVar15,&dStack_a8);
  if (0.0 <= fVar15) {
    if (dVar9 == 0.5) {
      fVar15 = 1.0;
      goto LAB_00c329ec;
    }
    fVar5 = (float)(int)(fVar15 + 0.5);
  }
  else if (dVar9 == -0.5) {
    fVar15 = -1.0;
LAB_00c329ec:
    fVar5 = (float)dStack_a8;
    if (((long)dStack_a8 & 1U) != 0) {
      fVar5 = (float)dStack_a8 + fVar15;
    }
  }
  else {
    fVar5 = (float)(int)(fVar15 + -0.5);
  }
  lVar4 = param_5[0x13];
  if (lVar4 != 0) {
    if (*(int *)(lVar4 + 0x140) == 3) {
      fVar5 = fVar5 - *(float *)(lVar4 + 0x158);
    }
    native_UIScrollView__UpdateScrollbars_c32a88
              ((fVar11 - fVar5) - param_2,fVar10 - (fVar11 + fVar5),fVar10 - param_2,fVar5 + fVar5,
               param_5,param_5[8],1);
    return;
  }
LAB_00c32a84:
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* UIScrollView$$UpdateScrollbars @ 0xc32a88
 * void UIScrollView__UpdateScrollbars (UIScrollView_o* __this, UIProgressBar_o* slider, float contentMin, float contentMax, float contentSize, float viewSize, bool inverted, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIScrollView$$UpdateScrollbars
   void UIScrollView__UpdateScrollbars (UIScrollView_o* __this, UIProgressBar_o* slider, float
   contentMin, float contentMax, float contentSize, float viewSize, bool inverted, const MethodInfo*
   method); */

void native_UIScrollView__UpdateScrollbars_c32a88
               (float param_1,float param_2,float param_3,float param_4,long param_5,long *param_6,
               ulong param_7)

{
  ulong uVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  
  if ((bRam000000000134273b & 1) == 0) {
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    native_sub_43273c(&UIScrollBar_TypeInfo_12d64b0);
    bRam000000000134273b = 1;
  }
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar1 = native_UnityEngine_Object__op_Equality_8e9a3c(param_6,0,0);
  if ((uVar1 & 1) == 0) {
    *(undefined1 *)(param_5 + 0xea) = 1;
    if (param_3 <= param_4) {
      fVar2 = (float)native_UnityEngine_Mathf__Clamp01_8d9d9c(-param_1 / param_3,0);
      fVar4 = (float)native_UnityEngine_Mathf__Clamp01_8d9d9c(-param_2 / param_3,0);
      fVar3 = fVar2 + fVar4;
      if ((param_7 & 1) == 0) {
        if (0.001 < fVar3) {
          fVar5 = fVar2 / fVar3;
        }
        else {
          fVar5 = 1.0;
        }
      }
      else {
        fVar5 = 0.0;
        if (0.001 < fVar3) {
          fVar5 = 1.0 - fVar2 / fVar3;
        }
      }
      if (param_6 == (long *)0x0) goto LAB_00c32ce4;
      native_UIProgressBar__Set_c2b7c4(fVar5,param_6,1);
      if (0.0 < param_3) {
        fVar3 = (float)native_UnityEngine_Mathf__Clamp01_8d9d9c(fVar2 / param_3,0);
        fVar2 = (float)native_UnityEngine_Mathf__Clamp01_8d9d9c(fVar4 / param_3,0);
        fVar3 = fVar3 + fVar2;
      }
    }
    else {
      fVar2 = (float)native_UnityEngine_Mathf__Clamp01_8d9d9c(param_1 / param_3,0);
      fVar3 = (float)native_UnityEngine_Mathf__Clamp01_8d9d9c(param_2 / param_3,0);
      fVar3 = fVar2 + fVar3;
      if ((param_7 & 1) == 0) {
        if (0.001 < fVar3) {
          fVar4 = fVar2 / fVar3;
        }
        else {
          fVar4 = 1.0;
        }
      }
      else {
        fVar4 = 0.0;
        if (0.001 < fVar3) {
          fVar4 = 1.0 - fVar2 / fVar3;
        }
      }
      if (param_6 == (long *)0x0) goto LAB_00c32ce4;
      native_UIProgressBar__Set_c2b7c4(fVar4,param_6,1);
    }
    if (param_6 != (long *)0x0) {
      if (*(byte *)(*param_6 + 300) < *(byte *)(_UIScrollBar_TypeInfo_12d64b0 + 300)) {
        param_6 = (long *)0x0;
      }
      else if (*(long *)(*(long *)(*param_6 + 200) +
                         (ulong)*(byte *)(_UIScrollBar_TypeInfo_12d64b0 + 300) * 8 + -8) !=
               _UIScrollBar_TypeInfo_12d64b0) {
        param_6 = (long *)0x0;
      }
    }
    if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    uVar1 = native_UnityEngine_Object__op_Inequality_8d76fc(param_6,0,0);
    if ((uVar1 & 1) != 0) {
      if (param_6 == (long *)0x0) {
LAB_00c32ce4:
                    /* WARNING: Subroutine does not return */
        native_sub_432810();
      }
      native_UIScrollBar__set_barSize_c309c0(1.0 - fVar3,param_6);
    }
    *(undefined1 *)(param_5 + 0xea) = 0;
  }
  return;
}



/* UIScrollView$$SetDragAmount @ 0xc32ce8
 * void UIScrollView__SetDragAmount (UIScrollView_o* __this, float x, float y, bool updateScrollbars, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIScrollView$$SetDragAmount
   void UIScrollView__SetDragAmount (UIScrollView_o* __this, float x, float y, bool
   updateScrollbars, const MethodInfo* method); */

void native_UIScrollView__SetDragAmount_c32ce8
               (undefined8 param_1,float param_2,float param_3,float param_4,long *param_5,
               ulong param_6)

{
  int iVar1;
  ulong uVar2;
  long *plVar3;
  long lVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  
  fVar10 = param_2;
  if ((bRam000000000134273c & 1) == 0) {
    native_sub_43273c(&Method_UnityEngine_Component_GetComponent_UIPanel____12e2be0);
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    bRam000000000134273c = 1;
  }
  uStack_90 = 0;
  uStack_88 = 0;
  uStack_80 = 0;
  plVar3 = param_5 + 0x13;
  lVar4 = *plVar3;
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar2 = native_UnityEngine_Object__op_Equality_8e9a3c(lVar4,0,0);
  if ((uVar2 & 1) != 0) {
    lVar4 = native_UnityEngine_Component__GetComponent_ActiveAnimation__49daec
                      (param_5,_Method_UnityEngine_Component_GetComponent_UIPanel____12e2be0);
    param_5[0x13] = lVar4;
    native_sub_4326e0(plVar3,lVar4);
  }
  native_UIScrollView__DisableSpring_c325c4(param_5);
  (**(code **)(*param_5 + 0x178))(&uStack_a8,param_5,*(undefined8 *)(*param_5 + 0x180));
  uStack_80 = uStack_98;
  uStack_88 = uStack_a0;
  uStack_90 = uStack_a8;
  fVar5 = (float)native_UnityEngine_Bounds__get_min_8d7f18(&uStack_90,0);
  fVar6 = (float)native_UnityEngine_Bounds__get_max_8d7f88(&uStack_90,0);
  if (fVar5 == fVar6) {
    return;
  }
  native_UnityEngine_Bounds__get_min_8d7f18(&uStack_90,0);
  fVar5 = fVar10;
  native_UnityEngine_Bounds__get_max_8d7f88(&uStack_90,0);
  if (fVar10 == fVar5) {
    return;
  }
  if (*plVar3 == 0) goto LAB_00c33030;
  fVar7 = (float)native_UIPanel__get_finalClipRegion_af03c8(*plVar3,0);
  fVar6 = fVar5;
  fVar8 = (float)native_UnityEngine_Bounds__get_min_8d7f18(&uStack_90,0);
  fVar9 = (float)native_UnityEngine_Bounds__get_max_8d7f88(&uStack_90,0);
  native_UnityEngine_Bounds__get_min_8d7f18(&uStack_90,0);
  fVar10 = fVar6;
  native_UnityEngine_Bounds__get_max_8d7f88(&uStack_90,0);
  lVar4 = *plVar3;
  if (lVar4 == 0) goto LAB_00c33030;
  fVar8 = fVar8 + param_3 * 0.5;
  fVar9 = fVar9 - param_3 * 0.5;
  fVar6 = param_4 * 0.5 + fVar6;
  fVar10 = fVar10 - param_4 * 0.5;
  if (*(int *)(lVar4 + 0x140) == 3) {
    fVar8 = fVar8 - *(float *)(lVar4 + 0x154);
    fVar9 = fVar9 + *(float *)(lVar4 + 0x154);
    fVar6 = fVar6 - *(float *)(lVar4 + 0x158);
    fVar10 = fVar10 + *(float *)(lVar4 + 0x158);
  }
  fVar9 = (float)native_UnityEngine_Mathf__Lerp_8e5224(fVar8,fVar9,param_1,0);
  fVar10 = (float)native_UnityEngine_Mathf__Lerp_8e5224(fVar10,fVar6,param_2,0);
  if ((param_6 & 1) == 0) {
    if (param_5[0x12] == 0) goto LAB_00c33030;
    native_UnityEngine_Transform__get_localPosition_7717f4(param_5[0x12],0);
    if (param_5[0x12] == 0) goto LAB_00c33030;
    native_UnityEngine_Transform__set_localPosition_7718a4(param_5[0x12],0);
  }
  iVar1 = (int)param_5[3];
  fVar6 = fVar9;
  if ((((iVar1 == 0) || (iVar1 == 2)) || (fVar6 = fVar7, iVar1 != 3)) ||
     (fVar6 = fVar9, *(float *)((long)param_5 + 0x4c) != 0.0)) {
    fVar7 = fVar6;
    if (iVar1 - 1U < 2) goto LAB_00c32fc8;
    if (iVar1 == 3) goto LAB_00c32fbc;
  }
  else {
LAB_00c32fbc:
    if (*(float *)(param_5 + 10) != 0.0) {
LAB_00c32fc8:
      fVar5 = fVar10;
    }
  }
  lVar4 = *plVar3;
  if (lVar4 != 0) {
    native_UIPanel__set_clipOffset_aeff9c
              (fVar7 - *(float *)(lVar4 + 0x144),fVar5 - *(float *)(lVar4 + 0x148),lVar4,0);
    if ((param_6 & 1) != 0) {
      (**(code **)(*param_5 + 0x1b8))
                (param_5,*(int *)((long)param_5 + 0xec) == -10,*(undefined8 *)(*param_5 + 0x1c0));
    }
    return;
  }
LAB_00c33030:
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* UIScrollView$$InvalidateBounds @ 0xc33034
 * void UIScrollView__InvalidateBounds (UIScrollView_o* __this, const MethodInfo* method); */

/* UIScrollView$$InvalidateBounds
   void UIScrollView__InvalidateBounds (UIScrollView_o* __this, const MethodInfo* method); */

void native_UIScrollView__InvalidateBounds_c33034(long param_1)

{
  *(undefined1 *)(param_1 + 0xe8) = 0;
  return;
}



/* UIScrollView$$ResetPosition @ 0xc3303c
 * void UIScrollView__ResetPosition (UIScrollView_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIScrollView$$ResetPosition
   void UIScrollView__ResetPosition (UIScrollView_o* __this, const MethodInfo* method); */

void native_UIScrollView__ResetPosition_c3303c(undefined1 param_1 [16],float param_2,long *param_3)

{
  undefined4 uVar1;
  ulong uVar2;
  undefined8 uVar3;
  
  if ((bRam000000000134273d & 1) == 0) {
    native_sub_43273c(&NGUIMath_TypeInfo_12d53b8);
    native_sub_43273c(&NGUITools_TypeInfo_12d53c8);
    bRam000000000134273d = 1;
  }
  if (((*(byte *)(_NGUITools_TypeInfo_12d53c8 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_NGUITools_TypeInfo_12d53c8 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar2 = native_NGUITools__GetActive_72d02c(param_3,0);
  if ((uVar2 & 1) != 0) {
    *(undefined1 *)(param_3 + 0x1d) = 0;
    uVar1 = *(undefined4 *)((long)param_3 + 0x54);
    if (((*(byte *)(_NGUIMath_TypeInfo_12d53b8 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_NGUIMath_TypeInfo_12d53b8 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    uVar3 = native_NGUIMath__GetPivotOffset_806cd0(uVar1,0);
    (**(code **)(*param_3 + 0x1c8))(uVar3,1.0 - param_2,param_3,0,*(undefined8 *)(*param_3 + 0x1d0))
    ;
                    /* WARNING: Could not recover jumptable at 0x00c3312c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_3 + 0x1c8))(uVar3,1.0 - param_2,param_3,1,*(undefined8 *)(*param_3 + 0x1d0))
    ;
    return;
  }
  return;
}



/* UIScrollView$$UpdatePosition @ 0xc33140
 * void UIScrollView__UpdatePosition (UIScrollView_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIScrollView$$UpdatePosition
   void UIScrollView__UpdatePosition (UIScrollView_o* __this, const MethodInfo* method); */

void native_UIScrollView__UpdatePosition_c33140(undefined1 param_1 [16],float param_2,long *param_3)

{
  undefined4 uVar1;
  ulong uVar2;
  long lVar3;
  undefined8 uVar4;
  
  if ((bRam000000000134273e & 1) == 0) {
    native_sub_43273c(&NGUIMath_TypeInfo_12d53b8);
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    bRam000000000134273e = 1;
  }
  if (*(char *)((long)param_3 + 0xea) == '\0') {
    lVar3 = param_3[7];
    if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    uVar2 = native_UnityEngine_Object__op_Inequality_8d76fc(lVar3,0,0);
    if ((uVar2 & 1) == 0) {
      lVar3 = param_3[8];
      if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
        native_sub_4327ec();
      }
      uVar2 = native_UnityEngine_Object__op_Inequality_8d76fc(lVar3,0,0);
      if ((uVar2 & 1) == 0) {
        return;
      }
    }
    *(undefined1 *)(param_3 + 0x1d) = 0;
    *(undefined1 *)((long)param_3 + 0xea) = 1;
    uVar1 = *(undefined4 *)((long)param_3 + 0x54);
    if (((*(byte *)(_NGUIMath_TypeInfo_12d53b8 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_NGUIMath_TypeInfo_12d53b8 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    uVar4 = native_NGUIMath__GetPivotOffset_806cd0(uVar1,0);
    lVar3 = param_3[7];
    if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    uVar2 = native_UnityEngine_Object__op_Inequality_8d76fc(lVar3,0,0);
    if ((uVar2 & 1) != 0) {
      if (param_3[7] == 0) goto LAB_00c33308;
      uVar4 = native_UIProgressBar__get_value_c2b6f0();
    }
    lVar3 = param_3[8];
    if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    uVar2 = native_UnityEngine_Object__op_Inequality_8d76fc(lVar3,0,0);
    if ((uVar2 & 1) == 0) {
      uVar2 = (ulong)(uint)(1.0 - param_2);
    }
    else {
      if (param_3[8] == 0) {
LAB_00c33308:
                    /* WARNING: Subroutine does not return */
        native_sub_432810();
      }
      uVar2 = native_UIProgressBar__get_value_c2b6f0();
    }
    (**(code **)(*param_3 + 0x1c8))(uVar4,uVar2,param_3,0,*(undefined8 *)(*param_3 + 0x1d0));
    (**(code **)(*param_3 + 0x1b8))(param_3,1,*(undefined8 *)(*param_3 + 0x1c0));
    *(undefined1 *)((long)param_3 + 0xea) = 0;
  }
  return;
}



/* UIScrollView$$OnScrollBar @ 0xc3330c
 * void UIScrollView__OnScrollBar (UIScrollView_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIScrollView$$OnScrollBar
   void UIScrollView__OnScrollBar (UIScrollView_o* __this, const MethodInfo* method); */

void native_UIScrollView__OnScrollBar_c3330c(long *param_1)

{
  ulong uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 extraout_d0;
  undefined8 uVar4;
  
  if ((bRam000000000134273f & 1) == 0) {
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    bRam000000000134273f = 1;
  }
  if (*(char *)((long)param_1 + 0xea) == '\0') {
    *(undefined1 *)((long)param_1 + 0xea) = 1;
    lVar2 = param_1[7];
    if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    uVar1 = native_UnityEngine_Object__op_Inequality_8d76fc(lVar2,0,0);
    uVar3 = 0;
    if ((uVar1 & 1) != 0) {
      if (param_1[7] == 0) goto LAB_00c33414;
      uVar3 = native_UIProgressBar__get_value_c2b6f0();
    }
    lVar2 = param_1[8];
    if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    uVar1 = native_UnityEngine_Object__op_Inequality_8d76fc(lVar2,0,0);
    uVar4 = 0;
    if ((uVar1 & 1) != 0) {
      if (param_1[8] == 0) {
LAB_00c33414:
                    /* WARNING: Subroutine does not return */
        native_sub_432810();
      }
      uVar4 = native_UIProgressBar__get_value_c2b6f0(extraout_d0,0);
    }
    (**(code **)(*param_1 + 0x1c8))(uVar3,uVar4,param_1,0,*(undefined8 *)(*param_1 + 0x1d0));
    *(undefined1 *)((long)param_1 + 0xea) = 0;
  }
  return;
}



/* UIScrollView$$MoveRelative @ 0xc33418
 * void UIScrollView__MoveRelative (UIScrollView_o* __this, UnityEngine_Vector3_o relative, const MethodInfo* method); */

/* UIScrollView$$MoveRelative
   void UIScrollView__MoveRelative (UIScrollView_o* __this, UnityEngine_Vector3_o relative, const
   MethodInfo* method); */

void native_UIScrollView__MoveRelative_c33418
               (float param_1,float param_2,float param_3,long *param_4)

{
  long lVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  lVar1 = param_4[0x12];
  if (lVar1 != 0) {
    fVar3 = param_2;
    fVar4 = param_3;
    fVar2 = (float)native_UnityEngine_Transform__get_localPosition_7717f4(lVar1,0);
    native_UnityEngine_Transform__set_localPosition_7718a4
              (param_1 + fVar2,param_2 + fVar3,param_3 + fVar4,lVar1,0);
    lVar1 = param_4[0x13];
    if (lVar1 != 0) {
      native_UIPanel__set_clipOffset_aeff9c
                (*(float *)(lVar1 + 0x174) - param_1,*(float *)(lVar1 + 0x178) - param_2,lVar1,0);
                    /* WARNING: Could not recover jumptable at 0x00c334a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_4 + 0x1b8))(param_4,0,*(undefined8 *)(*param_4 + 0x1c0));
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* UIScrollView$$MoveAbsolute @ 0xc334b0
 * void UIScrollView__MoveAbsolute (UIScrollView_o* __this, UnityEngine_Vector3_o absolute, const MethodInfo* method); */

/* UIScrollView$$MoveAbsolute
   void UIScrollView__MoveAbsolute (UIScrollView_o* __this, UnityEngine_Vector3_o absolute, const
   MethodInfo* method); */

void native_UIScrollView__MoveAbsolute_c334b0
               (undefined1 param_1 [16],float param_2,float param_3,long *param_4)

{
  long lVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  
  if (param_4[0x12] != 0) {
    fVar2 = (float)native_UnityEngine_Transform__InverseTransformPoint_7729a0(param_4[0x12],0);
    lVar1 = param_4[0x12];
    fVar4 = param_2;
    fVar5 = param_3;
    native_UnityEngine_Vector3__get_zero_776668(0);
    if (lVar1 != 0) {
      fVar3 = (float)native_UnityEngine_Transform__InverseTransformPoint_7729a0(lVar1,0);
                    /* WARNING: Could not recover jumptable at 0x00c33528. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_4 + 0x1d8))
                (fVar2 - fVar3,param_2 - fVar4,param_3 - fVar5,param_4,
                 *(undefined8 *)(*param_4 + 0x1e0));
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* UIScrollView$$Press @ 0xc33530
 * void UIScrollView__Press (UIScrollView_o* __this, bool pressed, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIScrollView$$Press
   void UIScrollView__Press (UIScrollView_o* __this, bool pressed, const MethodInfo* method); */

void native_UIScrollView__Press_c33530
               (undefined1 param_1 [16],undefined8 param_2,undefined8 param_3,undefined8 param_4,
               long *param_5,byte param_6)

{
  uint uVar1;
  ushort uVar2;
  undefined1 *puVar3;
  bool bVar4;
  bool bVar5;
  byte bVar6;
  int iVar7;
  undefined8 *puVar8;
  ulong uVar9;
  long *plVar10;
  long lVar11;
  ulong uVar12;
  long lVar13;
  ulong uVar14;
  undefined8 uVar15;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  undefined8 extraout_x1_01;
  undefined8 extraout_x1_02;
  undefined8 extraout_x1_03;
  long lVar16;
  long lVar17;
  int *piVar18;
  undefined8 unaff_x19;
  long *plVar19;
  undefined8 unaff_x20;
  long lVar20;
  long *unaff_x21;
  code *pcVar21;
  long unaff_x22;
  undefined8 unaff_x23;
  uint uVar22;
  undefined *unaff_x24;
  uint uVar23;
  long lVar24;
  undefined8 unaff_x25;
  undefined8 unaff_x26;
  uint uVar25;
  int iVar26;
  long lVar27;
  undefined8 unaff_x27;
  undefined *unaff_x28;
  undefined8 unaff_x29;
  undefined8 unaff_x30;
  float fVar28;
  undefined4 uVar29;
  undefined8 uVar30;
  undefined8 uVar31;
  double dVar32;
  float fVar33;
  float fVar34;
  undefined8 uVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  undefined8 unaff_d8;
  float fVar39;
  undefined8 unaff_d9;
  undefined8 unaff_d10;
  undefined8 unaff_d11;
  undefined8 unaff_d12;
  float fVar40;
  undefined8 unaff_d13;
  long lStack_70;
  long lStack_68;
  double dStack_58;
  
  if ((bRam0000000001342740 & 1) == 0) {
    native_sub_43273c(&NGUITools_TypeInfo_12d53c8);
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    native_sub_43273c(&UICamera_TypeInfo_12d6410);
    bRam0000000001342740 = 1;
  }
  if (((*(char *)((long)param_5 + 0xbc) != '\0' ^ param_6) & 1) == 0) {
    return;
  }
  if (((*(byte *)(_UICamera_TypeInfo_12d6410 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  iVar7 = native_UICamera__get_currentScheme_c92518(0);
  if (iVar7 == 2) {
    return;
  }
  if ((*(char *)((long)param_5 + 0x23) != '\0') && ((param_6 & 1) != 0)) {
    *(undefined1 *)(param_5 + 0x1f) = 0;
    uVar29 = native_UnityEngine_Vector2__get_zero_765ef0(0);
    *(undefined4 *)(param_5 + 0x1e) = uVar29;
    *(int *)((long)param_5 + 0xf4) = (int)param_2;
  }
  uVar14 = native_UnityEngine_Behaviour__get_enabled_8d7acc(param_5,0);
  if ((uVar14 & 1) == 0) {
    return;
  }
  uVar15 = native_UnityEngine_Component__get_gameObject_8da66c(param_5,0);
  if (((*(byte *)(_NGUITools_TypeInfo_12d53c8 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_NGUITools_TypeInfo_12d53c8 + 0xe0) == 0)) {
    native_sub_4327ec(_NGUITools_TypeInfo_12d53c8);
  }
  uVar14 = native_NGUITools__GetActive_72d0d4(uVar15,0);
  if ((uVar14 & 1) == 0) {
    return;
  }
  if ((param_6 & 1) == 0) {
    iVar7 = *(int *)((long)param_5 + 0xec);
    if (((*(byte *)(_UICamera_TypeInfo_12d6410 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    if (iVar7 == *(int *)(*(long *)(_UICamera_TypeInfo_12d6410 + 0xb8) + 0xd4)) {
      *(undefined4 *)((long)param_5 + 0xec) = 0xfffffff6;
    }
  }
  *(undefined1 *)(param_5 + 0x1d) = 0;
  bVar6 = (**(code **)(*param_5 + 0x1a8))(param_5,*(undefined8 *)(*param_5 + 0x1b0));
  *(byte *)((long)param_5 + 0xe9) = bVar6 & 1;
  if ((bVar6 & 1) == 0) {
    return;
  }
  *(byte *)((long)param_5 + 0xbc) = param_6 & 1;
  if ((param_6 & 1) != 0) {
    uVar29 = native_UnityEngine_Vector3__get_zero_776668(0);
    *(undefined4 *)(param_5 + 0x18) = uVar29;
    *(int *)((long)param_5 + 0xc4) = (int)param_2;
    *(int *)(param_5 + 0x19) = (int)param_3;
    *(undefined4 *)((long)param_5 + 0xcc) = 0;
    native_UIScrollView__DisableSpring_c325c4(param_5);
    if (((*(byte *)(_UICamera_TypeInfo_12d6410 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    uVar29 = *(undefined4 *)(*(long *)(_UICamera_TypeInfo_12d6410 + 0xb8) + 0x6c);
    param_5[0x16] = *(long *)(*(long *)(_UICamera_TypeInfo_12d6410 + 0xb8) + 100);
    *(undefined4 *)(param_5 + 0x17) = uVar29;
    if (param_5[0x12] == 0) goto LAB_00c33b00;
    uVar30 = native_UnityEngine_Transform__get_rotation_771a30(param_5[0x12],0);
    uVar15 = param_2;
    uVar35 = param_3;
    uVar31 = native_UnityEngine_Vector3__get_back_776a70(0);
    native_UnityEngine_Quaternion__op_Multiply_7629c0
              (uVar30,param_2,param_3,param_4,uVar31,uVar15,uVar35,0);
    lStack_70 = 0;
    lStack_68 = 0;
    native_UnityEngine_Plane___ctor_8eb884(&lStack_70,0);
    lVar17 = param_5[0x13];
    param_5[0x15] = lStack_68;
    param_5[0x14] = lStack_70;
    if (lVar17 == 0) goto LAB_00c33b00;
    fVar38 = *(float *)(lVar17 + 0x174);
    fVar39 = *(float *)(lVar17 + 0x178);
    dVar32 = (double)func_0x002c9600((double)fVar38,&dStack_58);
    if (0.0 <= fVar38) {
      if (dVar32 == 0.5) {
        fVar38 = 1.0;
        goto LAB_00c33874;
      }
      fVar36 = (float)(int)(fVar38 + 0.5);
    }
    else if (dVar32 == -0.5) {
      fVar38 = -1.0;
LAB_00c33874:
      fVar36 = (float)dStack_58;
      if (((long)dStack_58 & 1U) != 0) {
        fVar36 = (float)dStack_58 + fVar38;
      }
    }
    else {
      fVar36 = (float)(int)(fVar38 + -0.5);
    }
    dVar32 = (double)func_0x002c9600((double)fVar39,&dStack_58);
    if (0.0 <= fVar39) {
      if (dVar32 == 0.5) {
        fVar38 = 1.0;
        goto LAB_00c338e8;
      }
      fVar39 = (float)(int)(fVar39 + 0.5);
    }
    else if (dVar32 == -0.5) {
      fVar38 = -1.0;
LAB_00c338e8:
      fVar39 = (float)dStack_58;
      if (((long)dStack_58 & 1U) != 0) {
        fVar39 = (float)dStack_58 + fVar38;
      }
    }
    else {
      fVar39 = (float)(int)(fVar39 + -0.5);
    }
    if (param_5[0x13] == 0) goto LAB_00c33b00;
    native_UIPanel__set_clipOffset_aeff9c(fVar36,param_5[0x13],0);
    if (param_5[0x12] == 0) goto LAB_00c33b00;
    fVar38 = (float)native_UnityEngine_Transform__get_localPosition_7717f4(param_5[0x12],0);
    dVar32 = (double)func_0x002c9600((double)fVar38,&dStack_58);
    if (0.0 <= fVar38) {
      if (dVar32 == 0.5) {
        fVar38 = 1.0;
        goto LAB_00c3398c;
      }
      fVar36 = (float)(int)(fVar38 + 0.5);
    }
    else if (dVar32 == -0.5) {
      fVar38 = -1.0;
LAB_00c3398c:
      fVar36 = (float)dStack_58;
      if (((long)dStack_58 & 1U) != 0) {
        fVar36 = (float)dStack_58 + fVar38;
      }
    }
    else {
      fVar36 = (float)(int)(fVar38 + -0.5);
    }
    dVar32 = (double)func_0x002c9600((double)fVar39,&dStack_58);
    if (0.0 <= fVar39) {
      if (dVar32 == 0.5) {
        fVar38 = 1.0;
        goto LAB_00c33a00;
      }
      fVar39 = (float)(int)(fVar39 + 0.5);
    }
    else if (dVar32 == -0.5) {
      fVar38 = -1.0;
LAB_00c33a00:
      fVar39 = (float)dStack_58;
      if (((long)dStack_58 & 1U) != 0) {
        fVar39 = (float)dStack_58 + fVar38;
      }
    }
    else {
      fVar39 = (float)(int)(fVar39 + -0.5);
    }
    if (param_5[0x12] != 0) {
      native_UnityEngine_Transform__set_localPosition_7718a4(fVar36,fVar39,param_3,param_5[0x12],0);
      if ((*(byte *)((long)param_5 + 0x23) & 1) != 0) {
        return;
      }
      *(undefined1 *)(param_5 + 0x1f) = 1;
      uVar29 = native_UnityEngine_Vector2__get_zero_765ef0(0);
      *(undefined4 *)(param_5 + 0x1e) = uVar29;
      *(float *)((long)param_5 + 0xf4) = fVar39;
      if (param_5[0xb] == 0) {
        return;
      }
      native_UIScrollView_OnDragNotification__Invoke_559534(param_5[0xb],0);
      return;
    }
LAB_00c33b00:
                    /* WARNING: Subroutine does not return */
    native_sub_432810();
  }
  lVar17 = param_5[0x20];
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar14 = native_UnityEngine_Object__op_Implicit_8e1b98(lVar17,0);
  if ((uVar14 & 1) != 0) {
    if (((char)param_5[0x1f] != '\0') && (param_5[0xc] != 0)) {
      native_UIScrollView_OnDragNotification__Invoke_559534(param_5[0xc],0);
    }
    if (param_5[0x20] != 0) {
      uVar15 = 0;
      puVar3 = (undefined1 *)register0x00000008;
      lVar17 = param_5[0x20];
native_UICenterOnChild__Recenter_9dc788:
      *(undefined8 *)(puVar3 + -0x90) = unaff_d13;
      *(undefined8 *)(puVar3 + -0x88) = unaff_d12;
      *(undefined8 *)(puVar3 + -0x80) = unaff_d11;
      *(undefined8 *)(puVar3 + -0x78) = unaff_d10;
      *(undefined8 *)(puVar3 + -0x70) = unaff_d9;
      *(undefined8 *)(puVar3 + -0x68) = unaff_d8;
      *(undefined **)(puVar3 + -0x60) = unaff_x28;
      *(undefined8 *)(puVar3 + -0x58) = unaff_x27;
      *(undefined8 *)(puVar3 + -0x50) = unaff_x26;
      *(undefined8 *)(puVar3 + -0x48) = unaff_x25;
      *(undefined **)(puVar3 + -0x40) = unaff_x24;
      *(undefined8 *)(puVar3 + -0x38) = unaff_x23;
      *(long *)(puVar3 + -0x30) = unaff_x22;
      *(long **)(puVar3 + -0x28) = unaff_x21;
      *(undefined8 *)(puVar3 + -0x20) = unaff_x20;
      *(undefined8 *)(puVar3 + -0x18) = unaff_x19;
      *(undefined8 *)(puVar3 + -0x10) = unaff_x29;
      *(undefined8 *)(puVar3 + -8) = unaff_x30;
      if ((bRam00000000013418b3 & 1) == 0) {
        native_sub_43273c(&Method_UnityEngine_Component_GetComponent_UIGrid____12e2bc0,uVar15);
        native_sub_43273c(&Method_UnityEngine_Component_GetComponent_UIWrapContent____12e2c38);
        native_sub_43273c(&UnityEngine_Debug_TypeInfo_12d4338);
        native_sub_43273c(&Method_System_Collections_Generic_List_Transform__get_Count___12dd1a8);
        native_sub_43273c(&Method_System_Collections_Generic_List_Transform__get_Item___12dd1b0);
        native_sub_43273c(&NGUIMath_TypeInfo_12d53b8);
        native_sub_43273c(&Method_NGUITools_FindInParents_UIScrollView____12e5790);
        native_sub_43273c(&NGUITools_TypeInfo_12d53c8);
        native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
        native_sub_43273c(&UIProgressBar_OnDragFinished_TypeInfo_12d7a88);
        native_sub_43273c(&System_Type_TypeInfo_12d6340);
        native_sub_43273c(&UICamera_TypeInfo_12d6410);
        native_sub_43273c(&Method_UICenterOnChild_OnDragFinished___12e77f0);
        native_sub_43273c(&UIScrollView_var_12d1958);
        native_sub_43273c(&StringLiteral__requires__12eaef8);
        native_sub_43273c(&StringLiteral__on_a_parent_object_in_order_to_work_12eaee0);
        bRam00000000013418b3 = 1;
      }
      *(undefined4 *)(puVar3 + -0x98) = 0;
      *(undefined8 *)(puVar3 + -0xa0) = 0;
      *(undefined4 *)(puVar3 + -0xa8) = 0;
      *(undefined8 *)(puVar3 + -0xb0) = 0;
      unaff_x28 = &UnityEngine_Object_TypeInfo_12d54e0;
      plVar19 = (long *)(lVar17 + 0x30);
      lVar20 = *plVar19;
      if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
        native_sub_4327ec();
      }
      uVar14 = native_UnityEngine_Object__op_Equality_8e9a3c(lVar20,0,0);
      if ((uVar14 & 1) != 0) {
        uVar15 = native_UnityEngine_Component__get_gameObject_8da66c(lVar17,0);
        if (((*(byte *)(_NGUITools_TypeInfo_12d53c8 + 0x133) >> 2 & 1) != 0) &&
           (*(int *)(_NGUITools_TypeInfo_12d53c8 + 0xe0) == 0)) {
          native_sub_4327ec(_NGUITools_TypeInfo_12d53c8);
        }
        lVar20 = native_NGUITools__FindInParents_object__4a5c04
                           (uVar15,_Method_NGUITools_FindInParents_UIScrollView____12e5790);
        *plVar19 = lVar20;
        native_sub_4326e0(plVar19,lVar20);
        lVar20 = *plVar19;
        if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
           (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
          native_sub_4327ec();
        }
        uVar14 = native_UnityEngine_Object__op_Equality_8e9a3c(lVar20,0,0);
        if ((uVar14 & 1) != 0) {
          plVar19 = (long *)native_System_Object__GetType_adb48c(lVar17,0);
          if (plVar19 == (long *)0x0) {
            uVar15 = 0;
          }
          else {
            uVar15 = (**(code **)(*plVar19 + 0x168))(plVar19,*(undefined8 *)(*plVar19 + 0x170));
          }
          uVar35 = _UIScrollView_var_12d1958;
          if (((*(byte *)(_System_Type_TypeInfo_12d6340 + 0x133) >> 2 & 1) != 0) &&
             (*(int *)(_System_Type_TypeInfo_12d6340 + 0xe0) == 0)) {
            native_sub_4327ec();
          }
          plVar19 = (long *)native_System_Type__GetTypeFromHandle_b0fb24(uVar35,0);
          uVar35 = _StringLiteral__requires__12eaef8;
          if (plVar19 == (long *)0x0) {
            uVar30 = 0;
          }
          else {
            uVar30 = (**(code **)(*plVar19 + 0x168))(plVar19,*(undefined8 *)(*plVar19 + 0x170));
          }
          uVar15 = native_System_String__Concat_afcabc
                             (uVar15,uVar35,uVar30,
                              _StringLiteral__on_a_parent_object_in_order_to_work_12eaee0,0);
          if (((*(byte *)(_UnityEngine_Debug_TypeInfo_12d4338 + 0x133) >> 2 & 1) != 0) &&
             (*(int *)(_UnityEngine_Debug_TypeInfo_12d4338 + 0xe0) == 0)) {
            native_sub_4327ec(_UnityEngine_Debug_TypeInfo_12d4338);
          }
          native_UnityEngine_Debug__LogWarning_8dcbc8(uVar15,lVar17,0);
          native_UnityEngine_Behaviour__set_enabled_8d7b0c(lVar17,0,0);
          return;
        }
        lVar20 = *plVar19;
        if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
           (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
          native_sub_4327ec();
        }
        uVar14 = native_UnityEngine_Object__op_Implicit_8e1b98(lVar20,0);
        if ((uVar14 & 1) != 0) {
          lVar20 = *plVar19;
          if (lVar20 == 0) goto LAB_009dd300;
          *(long *)(lVar20 + 0x100) = lVar17;
          native_sub_4326e0(lVar20 + 0x100,lVar17);
        }
        if (*plVar19 == 0) goto LAB_009dd300;
        uVar15 = *(undefined8 *)(*plVar19 + 0x38);
        if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
           (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
          native_sub_4327ec();
        }
        uVar14 = native_UnityEngine_Object__op_Inequality_8d76fc(uVar15,0,0);
        if ((uVar14 & 1) != 0) {
          if ((*plVar19 == 0) || (lVar20 = *(long *)(*plVar19 + 0x38), lVar20 == 0))
          goto LAB_009dd300;
          unaff_x21 = (long *)(lVar20 + 0x18);
          unaff_x22 = *unaff_x21;
          unaff_x23 = native_sub_432808(_UIProgressBar_OnDragFinished_TypeInfo_12d7a88);
          native_UIProgressBar_OnDragFinished___ctor_558c74
                    (unaff_x23,lVar17,_Method_UICenterOnChild_OnDragFinished___12e77f0,0);
          plVar10 = (long *)native_System_Delegate__Combine_a6cf00(unaff_x22,unaff_x23,0);
          if ((plVar10 == (long *)0x0) ||
             (*plVar10 == _UIProgressBar_OnDragFinished_TypeInfo_12d7a88)) {
            *unaff_x21 = (long)plVar10;
            native_sub_4326e0(unaff_x21,plVar10);
            goto LAB_009dca78;
          }
LAB_009dd310:
          unaff_x24 = &UIProgressBar_OnDragFinished_TypeInfo_12d7a88;
          lVar20 = native_sub_432b04(plVar10);
          *(long **)(puVar3 + -0xf0) = plVar19;
          *(long *)(puVar3 + -0xe8) = lVar17;
          *(undefined1 **)(puVar3 + -0xe0) = puVar3 + -0x10;
          *(code **)(puVar3 + -0xd8) = native_UICenterOnChild__OnEnable_9dd318;
          if ((bRam00000000013418b1 & 1) == 0) {
            native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
            bRam00000000013418b1 = 1;
          }
          uVar15 = *(undefined8 *)(lVar20 + 0x30);
          if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
             (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
            native_sub_4327ec();
          }
          uVar14 = native_UnityEngine_Object__op_Implicit_8e1b98(uVar15,0);
          if ((uVar14 & 1) == 0) {
            return;
          }
          lVar17 = *(long *)(lVar20 + 0x30);
          if (lVar17 == 0) {
                    /* WARNING: Subroutine does not return */
            native_sub_432810();
          }
          *(long *)(lVar17 + 0x100) = lVar20;
          native_sub_4326e0(lVar17 + 0x100,lVar20);
          unaff_x29 = *(undefined8 *)(puVar3 + -0xe0);
          unaff_x30 = *(undefined8 *)(puVar3 + -0xd8);
          unaff_x20 = *(undefined8 *)(puVar3 + -0xf0);
          unaff_x19 = *(undefined8 *)(puVar3 + -0xe8);
          puVar3 = puVar3 + -0xd0;
          lVar17 = lVar20;
          uVar15 = extraout_x1_03;
          goto native_UICenterOnChild__Recenter_9dc788;
        }
LAB_009dca78:
        if (*plVar19 == 0) goto LAB_009dd300;
        uVar15 = *(undefined8 *)(*plVar19 + 0x40);
        if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
           (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
          native_sub_4327ec();
        }
        uVar14 = native_UnityEngine_Object__op_Inequality_8d76fc(uVar15,0,0);
        if ((uVar14 & 1) == 0) goto LAB_009dcb28;
        if ((*plVar19 == 0) || (lVar20 = *(long *)(*plVar19 + 0x40), lVar20 == 0))
        goto LAB_009dd300;
        unaff_x21 = (long *)(lVar20 + 0x18);
        unaff_x22 = *unaff_x21;
        unaff_x23 = native_sub_432808(_UIProgressBar_OnDragFinished_TypeInfo_12d7a88);
        native_UIProgressBar_OnDragFinished___ctor_558c74
                  (unaff_x23,lVar17,_Method_UICenterOnChild_OnDragFinished___12e77f0,0);
        plVar10 = (long *)native_System_Delegate__Combine_a6cf00(unaff_x22,unaff_x23,0);
        if ((plVar10 != (long *)0x0) && (*plVar10 != _UIProgressBar_OnDragFinished_TypeInfo_12d7a88)
           ) goto LAB_009dd310;
        *unaff_x21 = (long)plVar10;
        native_sub_4326e0(unaff_x21,plVar10);
      }
LAB_009dcb28:
      if (*plVar19 == 0) goto LAB_009dd300;
      uVar15 = *(undefined8 *)(*plVar19 + 0x98);
      if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
        native_sub_4327ec();
      }
      uVar14 = native_UnityEngine_Object__op_Equality_8e9a3c(uVar15,0,0);
      if ((uVar14 & 1) != 0) {
        return;
      }
      lVar20 = native_UnityEngine_Component__get_transform_8da62c(lVar17,0);
      if (lVar20 == 0) goto LAB_009dd300;
      iVar7 = native_UnityEngine_Transform__get_childCount_772a64(lVar20,0);
      if (iVar7 == 0) {
        return;
      }
      if (((*plVar19 == 0) || (plVar10 = *(long **)(*plVar19 + 0x98), plVar10 == (long *)0x0)) ||
         (lVar11 = (**(code **)(*plVar10 + 0x1e8))(plVar10,*(undefined8 *)(*plVar10 + 0x1f0)),
         lVar11 == 0)) goto LAB_009dd300;
      if (*(uint *)(lVar11 + 0x18) < 3) {
        uVar15 = native_sub_43283c();
                    /* WARNING: Subroutine does not return */
        native_sub_4327dc(uVar15,0);
      }
      lVar16 = *plVar19;
      if (lVar16 == 0) goto LAB_009dd300;
      uVar15 = *(undefined8 *)(lVar11 + 0x38);
      uVar35 = *(undefined8 *)(lVar11 + 0x20);
      fVar37 = *(float *)(lVar16 + 0x2c);
      fVar38 = *(float *)(lVar11 + 0x40);
      fVar36 = *(float *)(lVar11 + 0x28);
      fVar39 = *(float *)(lVar16 + 200) * fVar37;
      uVar14 = (ulong)(uint)fVar39;
      *(ulong *)(puVar3 + -0xa0) =
           CONCAT44((float)((ulong)*(undefined8 *)(lVar16 + 0xc0) >> 0x20) * fVar37,
                    (float)*(undefined8 *)(lVar16 + 0xc0) * fVar37);
      *(float *)(puVar3 + -0x98) = fVar39;
      bVar6 = *(byte *)(_NGUIMath_TypeInfo_12d53b8 + 0x133);
      *(undefined8 *)(puVar3 + -200) = 0;
      *(ulong *)(puVar3 + -0xd0) =
           CONCAT44(((float)((ulong)uVar15 >> 0x20) + (float)((ulong)uVar35 >> 0x20)) * 0.5,
                    ((float)uVar15 + (float)uVar35) * 0.5);
      if (((bVar6 >> 2 & 1) != 0) && (*(int *)(_NGUIMath_TypeInfo_12d53b8 + 0xe0) == 0)) {
        native_sub_4327ec();
      }
      uVar9 = 0x40000000;
      fVar37 = (fVar38 + fVar36) * 0.5;
      fVar38 = (float)native_NGUIMath__SpringDampen_80634c(0x41100000,puVar3 + -0xa0,0);
      uVar15 = *(undefined8 *)(puVar3 + -0xd0);
      fVar39 = (float)uVar9;
      fVar36 = (float)uVar14;
      lVar11 = native_UnityEngine_Component__GetComponent_ActiveAnimation__49daec
                         (lVar17,_Method_UnityEngine_Component_GetComponent_UIGrid____12e2bc0);
      if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
        native_sub_4327ec(_UnityEngine_Object_TypeInfo_12d54e0);
      }
      fVar38 = (float)*(undefined8 *)(puVar3 + -0xd0) - fVar38 * 0.01;
      fVar39 = (float)((ulong)uVar15 >> 0x20) - fVar39 * 0.01;
      fVar36 = fVar37 - fVar36 * 0.01;
      uVar12 = native_UnityEngine_Object__op_Inequality_8d76fc(lVar11,0,0);
      if ((uVar12 & 1) == 0) {
        iVar7 = native_UnityEngine_Transform__get_childCount_772a64(lVar20,0);
        uVar29 = (undefined4)uVar14;
        fVar33 = (float)uVar9;
        if (0 < iVar7) {
          fVar40 = 3.4028235e+38;
          lVar11 = 0;
          uVar22 = 0;
          uVar23 = 0;
          iVar26 = 0;
          *(undefined4 *)(puVar3 + -0xb4) = 0;
          goto LAB_009dcdc0;
        }
        lVar16 = 0;
      }
      else {
        if (lVar11 == 0) goto LAB_009dd300;
        lVar16 = native_UIGrid__GetChildList_9dd490(lVar11);
        uVar29 = (undefined4)uVar14;
        fVar33 = (float)uVar9;
        if (lVar16 == 0) goto LAB_009dd300;
        uVar23 = *(uint *)(lVar16 + 0x18);
        if (0 < (int)uVar23) {
          fVar40 = 3.4028235e+38;
          lVar27 = 0;
          lVar11 = 0;
          uVar22 = 0;
          iVar7 = 0;
          *(undefined4 *)(puVar3 + -0xb4) = 0;
          uVar1 = uVar23;
          goto LAB_009dccf0;
        }
      }
      *(undefined4 *)(puVar3 + -0xb4) = 0;
      uVar22 = 0;
      lVar11 = 0;
      goto LAB_009dcf28;
    }
    goto LAB_00c33b00;
  }
  if ((char)param_5[0x1f] == '\0') goto LAB_00c33ab4;
  if ((char)param_5[4] != '\0') {
    if (param_5[0x13] == 0) goto LAB_00c33b00;
    if (*(int *)(param_5[0x13] + 0x140) == 0) goto LAB_00c33aa4;
    iVar7 = (int)param_5[3];
    bVar4 = true;
    if ((iVar7 == 0) || (iVar7 == 2)) {
LAB_00c33a80:
      bVar5 = 1 < iVar7 - 1U;
    }
    else {
      if (iVar7 != 3) {
        bVar4 = false;
        goto LAB_00c33a80;
      }
      bVar4 = *(float *)((long)param_5 + 0x4c) != 0.0;
      bVar5 = *(float *)(param_5 + 10) == 0.0;
    }
    native_UIScrollView__RestrictWithinBounds_c322ac
              (param_5,*(int *)((long)param_5 + 0x1c) == 0,bVar4,!bVar5);
    if ((char)param_5[0x1f] == '\0') goto LAB_00c33ab4;
  }
LAB_00c33aa4:
  if (param_5[0xc] != 0) {
    native_UIScrollView_OnDragNotification__Invoke_559534(param_5[0xc],0);
  }
LAB_00c33ab4:
  if (((*(byte *)((long)param_5 + 0xe9) & 1) != 0) || (lVar17 = param_5[0xe], lVar17 == 0)) {
    return;
  }
  uVar15 = 0;
  lVar20 = *(long *)(lVar17 + 0x68);
  if (lVar20 == 0) {
    puVar3 = &stack0xffffffffffffffb8;
    lVar11 = 1;
  }
  else {
    lVar11 = *(long *)(lVar20 + 0x18);
    if (lVar11 == 0) {
      return;
    }
    puVar3 = (undefined1 *)(lVar20 + 0x20);
  }
  lVar20 = 0;
  do {
    lVar27 = *(long *)(puVar3 + lVar20 * 8);
    plVar19 = *(long **)(lVar27 + 0x20);
    lVar16 = *(long *)(lVar27 + 0x28);
    pcVar21 = *(code **)(lVar27 + 0x10);
    if (*(short *)(lVar16 + 0x48) == -1) {
      native_sub_4327f4(lVar16,uVar15);
    }
    uVar14 = native_sub_432768(lVar16);
    if ((uVar14 & 1) == 0) {
      if ((((plVar19 == (long *)0x0) || (*(short *)(lVar16 + 0x48) == -1)) ||
          ((*(byte *)(*plVar19 + 0x115) & 1) != 0)) || (*(long *)(lVar17 + 0x18) == 0))
      goto LAB_00559710;
      uVar14 = native_sub_432760(lVar16);
      uVar9 = native_sub_432b64(lVar16);
      if ((uVar14 & 1) == 0) {
        uVar2 = *(ushort *)(lVar16 + 0x48);
        if ((uVar9 & 1) == 0) {
          lVar16 = *plVar19 + (ulong)uVar2 * 0x10;
          (**(code **)(lVar16 + 0x138))(plVar19,*(undefined8 *)(lVar16 + 0x140));
          uVar15 = extraout_x1;
          goto LAB_0055971c;
        }
        lVar16 = native_sub_432764(lVar16);
        lVar27 = *plVar19;
        if ((ulong)*(ushort *)(lVar27 + 0x12a) != 0) {
          uVar14 = 0;
          piVar18 = (int *)(*(long *)(lVar27 + 0xb0) + 8);
          do {
            if (*(long *)(piVar18 + -2) == lVar16) {
              puVar8 = (undefined8 *)(lVar27 + (long)(int)(*piVar18 + (uint)uVar2) * 0x10 + 0x138);
              goto LAB_00559638;
            }
            uVar14 = uVar14 + 1;
            piVar18 = piVar18 + 4;
          } while (uVar14 < *(ushort *)(lVar27 + 0x12a));
        }
        puVar8 = (undefined8 *)native_sub_3c9b34(plVar19,lVar16,(ulong)uVar2);
LAB_00559638:
        pcVar21 = (code *)*puVar8;
        puVar8 = (undefined8 *)puVar8[1];
      }
      else {
        if ((uVar9 & 1) == 0) {
          uVar15 = *(undefined8 *)(*plVar19 + (ulong)*(ushort *)(lVar16 + 0x48) * 0x10 + 0x140);
        }
        else {
          lVar27 = *plVar19;
          if ((ulong)*(ushort *)(lVar27 + 0x12a) != 0) {
            uVar14 = 0;
            piVar18 = (int *)(*(long *)(lVar27 + 0xb0) + 8);
            do {
              if (*(long *)(piVar18 + -2) == *(long *)(lVar16 + 0x18)) {
                lVar27 = lVar27 + (long)(int)(*piVar18 + (uint)*(ushort *)(lVar16 + 0x48)) * 0x10 +
                         0x138;
                goto LAB_00559610;
              }
              uVar14 = uVar14 + 1;
              piVar18 = piVar18 + 4;
            } while (uVar14 < *(ushort *)(lVar27 + 0x12a));
          }
          lVar27 = native_sub_3c9b34(plVar19);
LAB_00559610:
          uVar15 = *(undefined8 *)(lVar27 + 8);
        }
        puVar8 = (undefined8 *)native_sub_4327e8(uVar15,lVar16);
        pcVar21 = (code *)*puVar8;
      }
      (*pcVar21)(plVar19,puVar8);
      uVar15 = extraout_x1_00;
    }
    else if (*(char *)(lVar16 + 0x4a) == '\0') {
      (*pcVar21)(lVar16);
      uVar15 = extraout_x1_01;
    }
    else {
LAB_00559710:
      (*pcVar21)(plVar19,lVar16);
      uVar15 = extraout_x1_02;
    }
LAB_0055971c:
    lVar20 = lVar20 + 1;
    if (lVar20 == lVar11) {
      return;
    }
  } while( true );
LAB_009dccf0:
  uVar25 = (uint)lVar27;
  if (uVar1 <= uVar25) {
    native_System_ThrowHelper__ThrowArgumentOutOfRangeException_9fe0f4(0);
  }
  lVar24 = *(long *)(*(long *)(lVar16 + 0x10) + lVar27 * 8 + 0x20);
  if ((lVar24 == 0) ||
     (lVar13 = native_UnityEngine_Component__get_gameObject_8da66c(lVar24,0), lVar13 == 0))
  goto LAB_009dd300;
  uVar12 = native_UnityEngine_GameObject__get_activeInHierarchy_8de728(lVar13,0);
  fVar34 = (float)uVar14;
  fVar33 = (float)uVar9;
  if ((uVar12 & 1) != 0) {
    fVar28 = (float)native_UnityEngine_Transform__get_position_77169c(lVar24,0);
    fVar28 = fVar28 - fVar38;
    fVar33 = fVar33 - fVar39;
    fVar34 = fVar34 - fVar36;
    uVar14 = (ulong)(uint)fVar34;
    uVar9 = (ulong)(uint)(fVar34 * fVar34);
    fVar33 = fVar34 * fVar34 + fVar28 * fVar28 + fVar33 * fVar33;
    if (fVar33 < fVar40) {
      *(int *)(puVar3 + -0xb4) = iVar7;
      lVar11 = lVar24;
      uVar22 = uVar25;
      fVar40 = fVar33;
    }
    iVar7 = iVar7 + 1;
  }
  uVar29 = (undefined4)uVar14;
  fVar33 = (float)uVar9;
  if ((int)uVar23 <= (int)(uVar25 + 1)) goto LAB_009dcf28;
  uVar1 = *(uint *)(lVar16 + 0x18);
  lVar27 = lVar27 + 1;
  goto LAB_009dccf0;
  while( true ) {
    uVar12 = native_UnityEngine_GameObject__get_activeInHierarchy_8de728(lVar27,0);
    fVar34 = (float)uVar14;
    fVar33 = (float)uVar9;
    if ((uVar12 & 1) != 0) {
      fVar28 = (float)native_UnityEngine_Transform__get_position_77169c(lVar16,0);
      fVar28 = fVar28 - fVar38;
      fVar33 = fVar33 - fVar39;
      fVar34 = fVar34 - fVar36;
      uVar14 = (ulong)(uint)fVar34;
      uVar9 = (ulong)(uint)(fVar34 * fVar34);
      fVar33 = fVar34 * fVar34 + fVar28 * fVar28 + fVar33 * fVar33;
      if (fVar33 < fVar40) {
        *(int *)(puVar3 + -0xb4) = iVar26;
        lVar11 = lVar16;
        uVar22 = uVar23;
        fVar40 = fVar33;
      }
      iVar26 = iVar26 + 1;
    }
    uVar29 = (undefined4)uVar14;
    fVar33 = (float)uVar9;
    uVar23 = uVar23 + 1;
    if (iVar7 <= (int)uVar23) break;
LAB_009dcdc0:
    lVar16 = native_UnityEngine_Transform__GetChild_772ef0(lVar20,uVar23,0);
    if ((lVar16 == 0) ||
       (lVar27 = native_UnityEngine_Component__get_gameObject_8da66c(lVar16,0), lVar27 == 0))
    goto LAB_009dd300;
  }
  lVar16 = 0;
LAB_009dcf28:
  if (*(float *)(lVar17 + 0x1c) <= 0.0) goto LAB_009dd2bc;
  if (((*(byte *)(_UICamera_TypeInfo_12d6410 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  if (*(long *)(*(long *)(_UICamera_TypeInfo_12d6410 + 0xb8) + 0xe0) == 0) goto LAB_009dd2bc;
  uVar35 = *(undefined8 *)(lVar17 + 0x38);
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar14 = native_UnityEngine_Object__op_Inequality_8d76fc(uVar35,0,0);
  if ((uVar14 & 1) == 0) goto LAB_009dd2bc;
  if (*(long *)(lVar17 + 0x38) == 0) goto LAB_009dd300;
  uVar35 = native_UnityEngine_GameObject__get_transform_8de5c8(*(long *)(lVar17 + 0x38),0);
  if (lVar16 == 0) {
    uVar30 = native_UnityEngine_Transform__GetChild_772ef0(lVar20,uVar22,0);
  }
  else {
    if (*(uint *)(lVar16 + 0x18) <= uVar22) {
      native_System_ThrowHelper__ThrowArgumentOutOfRangeException_9fe0f4(0);
    }
    uVar30 = *(undefined8 *)(*(long *)(lVar16 + 0x10) + (long)(int)uVar22 * 8 + 0x20);
  }
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar14 = native_UnityEngine_Object__op_Equality_8e9a3c(uVar35,uVar30,0);
  if ((uVar14 & 1) == 0) goto LAB_009dd2bc;
  if (((*(byte *)(_UICamera_TypeInfo_12d6410 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  lVar27 = *(long *)(*(long *)(_UICamera_TypeInfo_12d6410 + 0xb8) + 0xe0);
  if (lVar27 == 0) {
LAB_009dd300:
                    /* WARNING: Subroutine does not return */
    native_sub_432810();
  }
  uVar35 = *(undefined8 *)(lVar27 + 0x2c);
  *(undefined4 *)(puVar3 + -0xa8) = 0;
  *(undefined8 *)(puVar3 + -0xb0) = uVar35;
  lVar27 = native_UnityEngine_Component__get_transform_8da62c(lVar17,0);
  if (lVar27 == 0) goto LAB_009dd300;
  native_UnityEngine_Transform__get_rotation_771a30(lVar27,0);
  fVar38 = (float)native_UnityEngine_Quaternion__op_Multiply_7629c0(0);
  *(float *)(puVar3 + -0xb0) = fVar38;
  *(float *)(puVar3 + -0xac) = fVar33;
  *(undefined4 *)(puVar3 + -0xa8) = uVar29;
  if (*plVar19 == 0) goto LAB_009dd300;
  iVar7 = *(int *)(*plVar19 + 0x18);
  if (iVar7 != 0) {
    if (iVar7 == 1) {
      fVar38 = -fVar33;
    }
    else {
      fVar38 = (float)native_UnityEngine_Vector3__get_magnitude_77684c(puVar3 + -0xb0,0);
    }
  }
  fVar39 = *(float *)(lVar17 + 0x1c);
  if (ABS(fVar38) <= fVar39) goto LAB_009dd2bc;
  if (fVar38 <= fVar39) {
    if (-fVar39 <= fVar38) goto LAB_009dd2bc;
    if (lVar16 != 0) {
      uVar23 = *(uint *)(lVar16 + 0x18);
      if ((int)(uVar23 - 1) <= *(int *)(puVar3 + -0xb4)) {
        uVar35 = native_UnityEngine_Component__GetComponent_ActiveAnimation__49daec
                           (lVar17,
                            _Method_UnityEngine_Component_GetComponent_UIWrapContent____12e2c38);
        if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
           (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
          native_sub_4327ec(_UnityEngine_Object_TypeInfo_12d54e0);
        }
        uVar14 = native_UnityEngine_Object__op_Equality_8e9a3c(uVar35,0,0);
        iVar7 = *(int *)(lVar16 + 0x18);
        if ((uVar14 & 1) != 0) goto LAB_009dd248;
        goto LAB_009dd1c0;
      }
      uVar22 = *(int *)(puVar3 + -0xb4) + 1;
      goto LAB_009dd0f8;
    }
    iVar7 = native_UnityEngine_Transform__get_childCount_772a64(lVar20,0);
    if (iVar7 + -1 <= *(int *)(puVar3 + -0xb4)) {
      uVar35 = native_UnityEngine_Component__GetComponent_ActiveAnimation__49daec
                         (lVar17,_Method_UnityEngine_Component_GetComponent_UIWrapContent____12e2c38
                         );
      if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
        native_sub_4327ec(_UnityEngine_Object_TypeInfo_12d54e0);
      }
      uVar14 = native_UnityEngine_Object__op_Equality_8e9a3c(uVar35,0,0);
      if ((uVar14 & 1) != 0) goto LAB_009dd29c;
      goto LAB_009dd168;
    }
    iVar7 = *(int *)(puVar3 + -0xb4) + 1;
  }
  else {
    if (lVar16 != 0) {
      uVar22 = *(int *)(puVar3 + -0xb4) - 1;
      if (*(int *)(puVar3 + -0xb4) < 1) {
        uVar35 = native_UnityEngine_Component__GetComponent_ActiveAnimation__49daec
                           (lVar17,
                            _Method_UnityEngine_Component_GetComponent_UIWrapContent____12e2c38);
        if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
           (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
          native_sub_4327ec(_UnityEngine_Object_TypeInfo_12d54e0);
        }
        uVar14 = native_UnityEngine_Object__op_Equality_8e9a3c(uVar35,0,0);
        iVar7 = *(int *)(lVar16 + 0x18);
        if ((uVar14 & 1) == 0) {
LAB_009dd248:
          uVar22 = iVar7 - 1;
          if (iVar7 == 0) goto LAB_009dd100;
          goto LAB_009dd108;
        }
LAB_009dd1c0:
        if (iVar7 == 0) {
          native_System_ThrowHelper__ThrowArgumentOutOfRangeException_9fe0f4(0);
        }
        lVar20 = *(long *)(lVar16 + 0x10);
      }
      else {
        uVar23 = *(uint *)(lVar16 + 0x18);
LAB_009dd0f8:
        if (uVar23 <= uVar22) {
LAB_009dd100:
          native_System_ThrowHelper__ThrowArgumentOutOfRangeException_9fe0f4(0);
        }
LAB_009dd108:
        lVar20 = *(long *)(lVar16 + 0x10) + (long)(int)uVar22 * 8;
      }
      lVar11 = *(long *)(lVar20 + 0x20);
      goto LAB_009dd2bc;
    }
    iVar7 = *(int *)(puVar3 + -0xb4) + -1;
    if (*(int *)(puVar3 + -0xb4) < 1) {
      uVar35 = native_UnityEngine_Component__GetComponent_ActiveAnimation__49daec
                         (lVar17,_Method_UnityEngine_Component_GetComponent_UIWrapContent____12e2c38
                         );
      if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
        native_sub_4327ec(_UnityEngine_Object_TypeInfo_12d54e0);
      }
      uVar14 = native_UnityEngine_Object__op_Equality_8e9a3c(uVar35,0,0);
      if ((uVar14 & 1) == 0) {
LAB_009dd29c:
        iVar7 = native_UnityEngine_Transform__get_childCount_772a64(lVar20,0);
        iVar7 = iVar7 + -1;
      }
      else {
LAB_009dd168:
        iVar7 = 0;
      }
    }
  }
  lVar11 = native_UnityEngine_Transform__GetChild_772ef0(lVar20,iVar7,0);
LAB_009dd2bc:
  native_UICenterOnChild__CenterOn_9dd7e8
            (*(undefined8 *)(puVar3 + -0xd0),(float)((ulong)uVar15 >> 0x20),fVar37,lVar17,lVar11);
  return;
}



/* UIScrollView$$Drag @ 0xc33b04
 * void UIScrollView__Drag (UIScrollView_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIScrollView$$Drag
   void UIScrollView__Drag (UIScrollView_o* __this, const MethodInfo* method); */

void native_UIScrollView__Drag_c33b04(long *param_1)

{
  bool bVar1;
  bool bVar2;
  int iVar3;
  ulong uVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  long *plVar8;
  float fVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  float fVar14;
  ulong uVar12;
  undefined8 uVar13;
  uint uVar15;
  ulong uVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_90;
  undefined4 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined4 uStack_54;
  ulong uVar16;
  
  if ((bRam0000000001342741 & 1) == 0) {
    native_sub_43273c(&NGUITools_TypeInfo_12d53c8);
    native_sub_43273c(&UICamera_TypeInfo_12d6410);
    bRam0000000001342741 = 1;
  }
  uStack_80 = 0;
  uStack_78 = 0;
  uStack_70 = 0;
  uStack_54 = 0;
  uStack_88 = 0;
  uStack_90 = 0;
  uStack_b0 = 0;
  uStack_a8 = 0;
  uStack_a0 = 0;
  uStack_c8 = 0;
  uStack_c0 = 0;
  uStack_d0 = 0;
  if (*(char *)((long)param_1 + 0xbc) == '\0') {
    return;
  }
  if (((*(byte *)(_UICamera_TypeInfo_12d6410 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  iVar3 = native_UICamera__get_currentScheme_c92518(0);
  if (iVar3 == 2) {
    return;
  }
  uVar4 = native_UnityEngine_Behaviour__get_enabled_8d7acc(param_1,0);
  if ((uVar4 & 1) == 0) {
    return;
  }
  uVar5 = native_UnityEngine_Component__get_gameObject_8da66c(param_1,0);
  if (((*(byte *)(_NGUITools_TypeInfo_12d53c8 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_NGUITools_TypeInfo_12d53c8 + 0xe0) == 0)) {
    native_sub_4327ec(_NGUITools_TypeInfo_12d53c8);
  }
  uVar4 = native_NGUITools__GetActive_72d0d4(uVar5,0);
  if ((uVar4 & 1) == 0) {
    return;
  }
  if (*(char *)((long)param_1 + 0xe9) == '\0') {
    return;
  }
  lVar6 = _UICamera_TypeInfo_12d6410;
  if (*(int *)((long)param_1 + 0xec) == -10) {
    if (((*(byte *)(_UICamera_TypeInfo_12d6410 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    lVar6 = _UICamera_TypeInfo_12d6410;
    *(undefined4 *)((long)param_1 + 0xec) =
         *(undefined4 *)(*(long *)(_UICamera_TypeInfo_12d6410 + 0xb8) + 0xd4);
  }
  if (((*(byte *)(lVar6 + 0x133) >> 2 & 1) != 0) && (*(int *)(lVar6 + 0xe0) == 0)) {
    native_sub_4327ec();
    lVar6 = _UICamera_TypeInfo_12d6410;
  }
  lVar7 = *(long *)(*(long *)(lVar6 + 0xb8) + 0xe0);
  if (lVar7 == 0) goto LAB_00c340c4;
  *(undefined4 *)(lVar7 + 0x70) = 2;
  if (*(char *)((long)param_1 + 0x23) == '\0') {
    if ((*(byte *)(lVar6 + 0x133) >> 2 & 1) != 0) {
LAB_00c33d28:
      if (*(int *)(lVar6 + 0xe0) == 0) {
        native_sub_4327ec();
        lVar6 = _UICamera_TypeInfo_12d6410;
      }
    }
LAB_00c33d38:
    lVar7 = *(long *)(*(long *)(lVar6 + 0xb8) + 0xe0);
    if ((lVar7 == 0) || (lVar6 = *(long *)(*(long *)(lVar6 + 0xb8) + 0xc0), lVar6 == 0))
    goto LAB_00c340c4;
    uVar4 = (ulong)*(uint *)(lVar7 + 0x14);
    fVar14 = *(float *)(lVar7 + 0x18);
  }
  else {
    if ((char)param_1[0x1f] == '\0') {
      *(undefined1 *)(param_1 + 0x1f) = 1;
      if (((*(byte *)(lVar6 + 0x133) >> 2 & 1) != 0) && (*(int *)(lVar6 + 0xe0) == 0)) {
        native_sub_4327ec();
        lVar6 = _UICamera_TypeInfo_12d6410;
      }
      lVar7 = *(long *)(*(long *)(lVar6 + 0xb8) + 0xe0);
      if (lVar7 == 0) goto LAB_00c340c4;
      param_1[0x1e] = *(long *)(lVar7 + 0x2c);
      if (param_1[0xb] != 0) {
        native_UIScrollView_OnDragNotification__Invoke_559534(param_1[0xb],0);
        lVar6 = _UICamera_TypeInfo_12d6410;
      }
    }
    if (*(char *)((long)param_1 + 0x23) == '\0') {
      if ((*(ushort *)(lVar6 + 0x132) >> 10 & 1) != 0) goto LAB_00c33d28;
      goto LAB_00c33d38;
    }
    if (((*(ushort *)(lVar6 + 0x132) >> 10 & 1) != 0) && (*(int *)(lVar6 + 0xe0) == 0)) {
      native_sub_4327ec();
      lVar6 = _UICamera_TypeInfo_12d6410;
    }
    lVar7 = *(long *)(*(long *)(lVar6 + 0xb8) + 0xe0);
    if ((lVar7 == 0) || (lVar6 = *(long *)(*(long *)(lVar6 + 0xb8) + 0xc0), lVar6 == 0))
    goto LAB_00c340c4;
    uVar5 = *(undefined8 *)(lVar7 + 0x14);
    fVar14 = (float)((ulong)uVar5 >> 0x20) - (float)((ulong)param_1[0x1e] >> 0x20);
    uVar4 = CONCAT44(fVar14,(float)uVar5 - (float)param_1[0x1e]);
  }
  uVar17 = 0;
  native_UnityEngine_Camera__ScreenPointToRay_8d9368(&uStack_e8,uVar4,lVar6,0);
  uStack_c8 = uStack_e0;
  uStack_d0 = uStack_e8;
  uStack_c0 = uStack_d8;
  uStack_54 = 0;
  uStack_70 = uStack_d8;
  uStack_78 = uStack_e0;
  uStack_80 = uStack_e8;
  uStack_f0 = uStack_d8;
  uStack_f8 = uStack_e0;
  uStack_100 = uStack_e8;
  uVar4 = native_UnityEngine_Plane__Raycast_8eb9a4(param_1 + 0x14,&uStack_100,&uStack_54,0);
  if ((uVar4 & 1) == 0) {
    return;
  }
  fVar9 = (float)native_UnityEngine_Ray__GetPoint_7631f4(uStack_54,&uStack_80,0);
  lVar6 = param_1[0x16];
  *(float *)(param_1 + 0x16) = fVar9;
  *(float *)((long)param_1 + 0xb4) = fVar14;
  fVar9 = fVar9 - (float)lVar6;
  fVar14 = fVar14 - (float)((ulong)lVar6 >> 0x20);
  uVar12 = CONCAT44(fVar14,fVar9);
  uVar15 = -(uint)(fVar9 == 0.0);
  uVar16 = CONCAT44(-(uint)(fVar14 == 0.0),uVar15);
  fVar9 = (float)uVar17 - *(float *)(param_1 + 0x17);
  uVar4 = (ulong)(uint)fVar9;
  *(float *)(param_1 + 0x17) = (float)uVar17;
  if ((((uVar15 & 1) == 0) || ((-(uint)(fVar14 == 0.0) & 1) == 0)) || (fVar9 != 0.0)) {
    if (param_1[0x12] == 0) goto LAB_00c340c4;
    uVar16 = (ulong)(uint)fVar14;
    uVar12 = native_UnityEngine_Transform__InverseTransformDirection_772814(param_1[0x12],0);
    iVar3 = (int)param_1[3];
    uVar17 = 0;
    if (iVar3 == 0) {
      uVar16 = 0;
    }
    else if (iVar3 == 1) {
      uVar12 = 0;
      uVar17 = 0;
    }
    else if (iVar3 != 2) {
      uVar12 = (ulong)(uint)((float)uVar12 * *(float *)((long)param_1 + 0x4c));
      uVar16 = (ulong)(uint)((float)uVar16 * *(float *)(param_1 + 10));
      uVar17 = (ulong)(uint)((float)uVar4 * 0.0);
    }
    if (param_1[0x12] == 0) goto LAB_00c340c4;
    uVar10 = native_UnityEngine_Transform__TransformDirection_7722dc(uVar12,param_1[0x12],0);
    uVar12 = CONCAT44((int)uVar16,uVar10);
    uVar4 = uVar17;
  }
  uVar10 = (undefined4)uVar17;
  fVar14 = (float)(uVar12 >> 0x20);
  if (*(int *)((long)param_1 + 0x1c) == 0) {
    uVar11 = native_UnityEngine_Vector3__get_zero_776668(0);
    *(undefined4 *)(param_1 + 0x18) = uVar11;
    *(int *)((long)param_1 + 0xc4) = (int)uVar16;
    *(undefined4 *)(param_1 + 0x19) = uVar10;
  }
  else {
    fVar21 = *(float *)(param_1 + 0x19);
    fVar18 = *(float *)((long)param_1 + 0x2c) * 0.01;
    fVar19 = (float)param_1[0x18];
    fVar20 = (float)((ulong)param_1[0x18] >> 0x20);
    fVar9 = (float)native_UnityEngine_Mathf__Clamp01_8d9d9c(0x3f2b851f,0);
    uVar16 = CONCAT44(fVar20 + ((fVar20 + fVar14 * fVar18) - fVar20) * fVar9,
                      fVar19 + ((fVar19 + (float)uVar12 * fVar18) - fVar19) * fVar9);
    param_1[0x18] = uVar16;
    *(float *)(param_1 + 0x19) = fVar21 + fVar9 * ((fVar21 + (float)uVar4 * fVar18) - fVar21);
  }
  if ((*(char *)((long)param_1 + 0x24) == '\0') || (*(int *)((long)param_1 + 0x1c) != 2)) {
LAB_00c34014:
    native_UIScrollView__MoveAbsolute_c334b0(uVar12,uVar12 >> 0x20,uVar4,param_1);
  }
  else {
    plVar8 = (long *)param_1[0x13];
    (**(code **)(*param_1 + 0x178))(&uStack_e8,param_1,*(undefined8 *)(*param_1 + 0x180));
    uStack_a0 = uStack_d8;
    uStack_a8 = uStack_e0;
    uStack_b0 = uStack_e8;
    uVar5 = native_UnityEngine_Bounds__get_min_8d7f18(&uStack_b0,0);
    uVar17 = uVar16;
    (**(code **)(*param_1 + 0x178))(&uStack_e8,param_1,*(undefined8 *)(*param_1 + 0x180));
    uStack_a0 = uStack_d8;
    uStack_a8 = uStack_e0;
    uStack_b0 = uStack_e8;
    uVar13 = native_UnityEngine_Bounds__get_max_8d7f88(&uStack_b0,0);
    if (plVar8 == (long *)0x0) goto LAB_00c340c4;
    fVar9 = (float)(**(code **)(*plVar8 + 0x2a8))
                             (uVar5,uVar16,uVar13,uVar17,plVar8,*(undefined8 *)(*plVar8 + 0x2b0));
    uStack_90 = CONCAT44((float)uVar16,fVar9);
    uStack_88 = (undefined4)uVar13;
    iVar3 = (int)param_1[3];
    if (iVar3 == 3) {
      uStack_90 = CONCAT44((float)uVar16 *
                           (float)((ulong)*(undefined8 *)((long)param_1 + 0x4c) >> 0x20),
                           fVar9 * (float)*(undefined8 *)((long)param_1 + 0x4c));
    }
    else if (iVar3 == 1) {
      uStack_90 = uVar16 << 0x20;
    }
    else if (iVar3 == 0) {
      uStack_90 = (ulong)(uint)fVar9;
    }
    fVar9 = (float)native_UnityEngine_Vector3__get_magnitude_77684c(&uStack_90,0);
    if (fVar9 <= 1.0) goto LAB_00c34014;
    native_UIScrollView__MoveAbsolute_c334b0
              ((float)uVar12 * 0.5,fVar14 * 0.5,(float)uVar4 * 0.5,param_1);
    param_1[0x18] = CONCAT44((float)((ulong)param_1[0x18] >> 0x20) * 0.5,(float)param_1[0x18] * 0.5)
    ;
    *(float *)(param_1 + 0x19) = *(float *)(param_1 + 0x19) * 0.5;
  }
  if (*(char *)((long)param_1 + 0x21) == '\0') {
    return;
  }
  if ((char)param_1[4] == '\0') {
    return;
  }
  if (param_1[0x13] == 0) {
LAB_00c340c4:
                    /* WARNING: Subroutine does not return */
    native_sub_432810();
  }
  if (*(int *)(param_1[0x13] + 0x140) == 0) {
    return;
  }
  if (*(int *)((long)param_1 + 0x1c) == 2) {
    return;
  }
  iVar3 = (int)param_1[3];
  bVar1 = true;
  if ((iVar3 != 0) && (iVar3 != 2)) {
    if (iVar3 == 3) {
      bVar1 = *(float *)((long)param_1 + 0x4c) != 0.0;
      bVar2 = *(float *)(param_1 + 10) == 0.0;
      goto LAB_00c34098;
    }
    bVar1 = false;
  }
  bVar2 = 1 < iVar3 - 1U;
LAB_00c34098:
  native_UIScrollView__RestrictWithinBounds_c322ac(param_1,1,bVar1,!bVar2);
  return;
}



/* UIScrollView$$Scroll @ 0xc340c8
 * void UIScrollView__Scroll (UIScrollView_o* __this, float delta, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIScrollView$$Scroll
   void UIScrollView__Scroll (UIScrollView_o* __this, float delta, const MethodInfo* method); */

void native_UIScrollView__Scroll_c340c8(undefined8 param_1,long *param_2)

{
  char cVar1;
  byte bVar2;
  ulong uVar3;
  undefined8 uVar4;
  float fVar5;
  float fVar6;
  
  if ((bRam0000000001342742 & 1) == 0) {
    native_sub_43273c(&NGUITools_TypeInfo_12d53c8);
    bRam0000000001342742 = 1;
  }
  uVar3 = native_UnityEngine_Behaviour__get_enabled_8d7acc(param_2,0);
  if ((uVar3 & 1) != 0) {
    uVar4 = native_UnityEngine_Component__get_gameObject_8da66c(param_2,0);
    if (((*(byte *)(_NGUITools_TypeInfo_12d53c8 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_NGUITools_TypeInfo_12d53c8 + 0xe0) == 0)) {
      native_sub_4327ec(_NGUITools_TypeInfo_12d53c8);
    }
    uVar3 = native_NGUITools__GetActive_72d0d4(uVar4,0);
    if (((uVar3 & 1) != 0) && (*(float *)(param_2 + 5) != 0.0)) {
      native_UIScrollView__DisableSpring_c325c4(param_2);
      cVar1 = *(char *)((long)param_2 + 0xe9);
      bVar2 = (**(code **)(*param_2 + 0x1a8))(param_2,*(undefined8 *)(*param_2 + 0x1b0));
      *(byte *)((long)param_2 + 0xe9) = cVar1 != '\0' | bVar2 & 1;
      fVar5 = (float)native_UnityEngine_Mathf__Sign_8e51d8(*(undefined4 *)((long)param_2 + 0xcc),0);
      fVar6 = (float)native_UnityEngine_Mathf__Sign_8e51d8(param_1,0);
      if (fVar5 == fVar6) {
        fVar5 = *(float *)((long)param_2 + 0xcc);
      }
      else {
        fVar5 = 0.0;
        *(undefined4 *)((long)param_2 + 0xcc) = 0;
      }
      *(float *)((long)param_2 + 0xcc) = fVar5 + *(float *)(param_2 + 5) * (float)param_1;
    }
  }
  return;
}



/* UIScrollView$$LateUpdate @ 0xc341e4
 * void UIScrollView__LateUpdate (UIScrollView_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIScrollView$$LateUpdate
   void UIScrollView__LateUpdate (UIScrollView_o* __this, const MethodInfo* method); */

void native_UIScrollView__LateUpdate_c341e4
               (undefined1 param_1 [16],undefined1 param_2 [16],undefined4 param_3,long *param_4)

{
  long *plVar1;
  ushort uVar2;
  bool bVar3;
  bool bVar4;
  int iVar5;
  long lVar6;
  undefined8 *puVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  undefined8 extraout_x1_01;
  undefined8 extraout_x1_02;
  long lVar11;
  long lVar12;
  int *piVar13;
  long lVar14;
  code *pcVar15;
  long lVar16;
  undefined1 *puVar17;
  float fVar18;
  float fVar19;
  undefined4 uVar20;
  float fVar21;
  undefined4 uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  float fVar25;
  undefined4 uVar26;
  float fVar27;
  float fVar28;
  
  if ((bRam0000000001342743 & 1) == 0) {
    native_sub_43273c(&Method_UnityEngine_Component_GetComponent_SpringPanel____12e2b08);
    native_sub_43273c(&NGUIMath_TypeInfo_12d53b8);
    native_sub_43273c(&NGUITools_TypeInfo_12d53c8);
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    bRam0000000001342743 = 1;
  }
  uVar8 = native_UnityEngine_Application__get_isPlaying_8d60cc(0);
  if ((uVar8 & 1) == 0) {
    return;
  }
  uVar23 = native_RealTime__get_deltaTime_73d0b8(0);
  fVar18 = (float)uVar23;
  if ((int)param_4[9] != 0) {
    lVar14 = param_4[8];
    if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    uVar8 = native_UnityEngine_Object__op_Implicit_8e1b98(lVar14,0);
    if ((uVar8 & 1) == 0) {
      lVar14 = param_4[7];
      if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
        native_sub_4327ec();
      }
      uVar8 = native_UnityEngine_Object__op_Implicit_8e1b98(lVar14,0);
      if ((uVar8 & 1) == 0) goto LAB_00c34424;
    }
    if ((((int)param_4[9] != 2) || (*(int *)((long)param_4 + 0xec) != -10)) ||
       (fVar19 = (float)native_UnityEngine_Vector3__get_magnitude_77684c(param_4 + 0x18,0),
       0.01 < fVar19)) {
      uVar8 = (**(code **)(*param_4 + 0x198))(param_4,*(undefined8 *)(*param_4 + 0x1a0));
      uVar8 = uVar8 & 0xffffffff;
      uVar9 = (**(code **)(*param_4 + 0x188))(param_4,*(undefined8 *)(*param_4 + 400));
      uVar9 = uVar9 & 0xffffffff;
    }
    else {
      uVar9 = 0;
      uVar8 = 0;
    }
    lVar14 = param_4[8];
    if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    uVar10 = native_UnityEngine_Object__op_Implicit_8e1b98(lVar14,0);
    if ((uVar10 & 1) != 0) {
      if (param_4[8] == 0) goto LAB_00c347c8;
      fVar19 = (float)native_UIProgressBar__get_alpha_c2b950();
      fVar27 = 6.0;
      param_3 = 0x40c00000;
      if ((uVar8 & 1) == 0) {
        fVar27 = -3.0;
      }
      uVar24 = native_UnityEngine_Mathf__Clamp01_8d9d9c(fVar18 * fVar27 + fVar19,0);
      if (param_4[8] == 0) goto LAB_00c347c8;
      fVar19 = (float)native_UIProgressBar__get_alpha_c2b950();
      if (fVar19 != (float)uVar24) {
        if (param_4[8] == 0) goto LAB_00c347c8;
        native_UIProgressBar__set_alpha_c2ba2c(uVar24);
      }
    }
    lVar14 = param_4[7];
    if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    uVar8 = native_UnityEngine_Object__op_Implicit_8e1b98(lVar14,0);
    if ((uVar8 & 1) != 0) {
      if (param_4[7] == 0) goto LAB_00c347c8;
      fVar19 = (float)native_UIProgressBar__get_alpha_c2b950();
      fVar27 = 6.0;
      param_3 = 0x40c00000;
      if ((uVar9 & 1) == 0) {
        fVar27 = -3.0;
      }
      uVar24 = native_UnityEngine_Mathf__Clamp01_8d9d9c(fVar18 * fVar27 + fVar19,0);
      if (param_4[7] == 0) goto LAB_00c347c8;
      fVar19 = (float)native_UIProgressBar__get_alpha_c2b950();
      if (fVar19 != (float)uVar24) {
        if (param_4[7] == 0) goto LAB_00c347c8;
        native_UIProgressBar__set_alpha_c2ba2c(uVar24);
      }
    }
  }
LAB_00c34424:
  if (*(char *)((long)param_4 + 0xe9) == '\0') {
    return;
  }
  if (*(char *)((long)param_4 + 0xbc) != '\0') {
    *(undefined4 *)((long)param_4 + 0xcc) = 0;
    if (((*(byte *)(_NGUIMath_TypeInfo_12d53b8 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_NGUIMath_TypeInfo_12d53b8 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    if (1.0 < fVar18) {
      fVar18 = 1.0;
    }
    iVar5 = native_UnityEngine_Mathf__RoundToInt_8e50f0(fVar18 * 1000.0,0,0);
    fVar18 = (float)func_0x002c89c0(0x3f7db22d,(float)iVar5);
    func_0x002c9a20(0x3f7db22d);
    lVar14 = param_4[0x18];
    param_4[0x18] = CONCAT44((float)((ulong)lVar14 >> 0x20) * fVar18,(float)lVar14 * fVar18);
    *(float *)(param_4 + 0x19) = fVar18 * *(float *)(param_4 + 0x19);
    return;
  }
  fVar18 = (float)native_UnityEngine_Vector3__get_magnitude_77684c(param_4 + 0x18,0);
  uVar26 = 0x38d1b717;
  if ((fVar18 <= 0.0001) && (ABS(*(float *)((long)param_4 + 0xcc)) <= 0.0001)) {
    *(undefined4 *)((long)param_4 + 0xcc) = 0;
    uVar20 = native_UnityEngine_Vector3__get_zero_776668(0);
    *(undefined4 *)(param_4 + 0x18) = uVar20;
    *(undefined4 *)((long)param_4 + 0xc4) = uVar26;
    *(undefined4 *)(param_4 + 0x19) = param_3;
    lVar14 = native_UnityEngine_Component__GetComponent_ActiveAnimation__49daec
                       (param_4,_Method_UnityEngine_Component_GetComponent_SpringPanel____12e2b08);
    if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
      native_sub_4327ec(_UnityEngine_Object_TypeInfo_12d54e0);
    }
    uVar8 = native_UnityEngine_Object__op_Inequality_8d76fc(lVar14,0,0);
    if ((uVar8 & 1) != 0) {
      if (lVar14 == 0) goto LAB_00c347c8;
      uVar8 = native_UnityEngine_Behaviour__get_enabled_8d7acc(lVar14,0);
      if ((uVar8 & 1) != 0) {
        return;
      }
    }
    lVar14 = param_4[0xe];
    *(undefined1 *)((long)param_4 + 0xe9) = 0;
    goto joined_r0x00c3458c;
  }
  iVar5 = (int)param_4[3];
  if (iVar5 == 1) {
    lVar14 = param_4[0x12];
    if (lVar14 == 0) goto LAB_00c347c8;
    fVar19 = *(float *)(param_4 + 0x18);
    fVar27 = *(float *)((long)param_4 + 0xc4);
    fVar28 = *(float *)(param_4 + 0x19);
    fVar18 = *(float *)((long)param_4 + 0xcc) * 0.05;
    uVar8 = 0;
  }
  else if (iVar5 == 0) {
    lVar14 = param_4[0x12];
    if (lVar14 == 0) goto LAB_00c347c8;
    fVar19 = *(float *)(param_4 + 0x18);
    fVar27 = *(float *)((long)param_4 + 0xc4);
    fVar28 = *(float *)(param_4 + 0x19);
    uVar8 = (ulong)(uint)(*(float *)((long)param_4 + 0xcc) * 0.05);
    fVar18 = 0.0;
  }
  else {
    fVar19 = *(float *)(param_4 + 0x18);
    fVar27 = *(float *)((long)param_4 + 0xc4);
    fVar28 = *(float *)(param_4 + 0x19);
    lVar14 = param_4[0x12];
    fVar21 = *(float *)((long)param_4 + 0xcc);
    if (iVar5 == 2) {
      if (lVar14 == 0) goto LAB_00c347c8;
      fVar18 = fVar21 * 0.05;
      uVar8 = (ulong)(uint)fVar18;
    }
    else {
      if (lVar14 == 0) goto LAB_00c347c8;
      fVar18 = (float)((ulong)*(undefined8 *)((long)param_4 + 0x4c) >> 0x20) * fVar21 * 0.05;
      uVar8 = CONCAT44(fVar18,(float)*(undefined8 *)((long)param_4 + 0x4c) * fVar21 * 0.05);
    }
  }
  fVar25 = 0.0;
  fVar21 = (float)native_UnityEngine_Transform__TransformDirection_7722dc(uVar8,lVar14,0);
  *(float *)(param_4 + 0x18) = fVar19 - fVar21;
  *(float *)((long)param_4 + 0xc4) = fVar27 - fVar18;
  *(float *)(param_4 + 0x19) = fVar28 - fVar25;
  uVar26 = *(undefined4 *)((long)param_4 + 0xcc);
  if (((*(byte *)(_NGUIMath_TypeInfo_12d53b8 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_NGUIMath_TypeInfo_12d53b8 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar20 = 0x41a00000;
  uVar26 = native_NGUIMath__SpringLerp_806544(uVar26,0,0x41a00000,uVar23,0);
  *(undefined4 *)((long)param_4 + 0xcc) = uVar26;
  native_NGUIMath__SpringDampen_80634c(*(undefined4 *)((long)param_4 + 0x34),param_4 + 0x18,0);
  uVar26 = (undefined4)uVar23;
  native_UIScrollView__MoveAbsolute_c334b0(param_4);
  if ((char)param_4[4] == '\0') goto LAB_00c347a0;
  if (param_4[0x13] == 0) {
LAB_00c347c8:
                    /* WARNING: Subroutine does not return */
    native_sub_432810();
  }
  if (*(int *)(param_4[0x13] + 0x140) != 0) {
    lVar14 = param_4[0x20];
    if (((*(byte *)(_NGUITools_TypeInfo_12d53c8 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_NGUITools_TypeInfo_12d53c8 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    uVar8 = native_NGUITools__GetActive_72d02c(lVar14,0);
    if ((uVar8 & 1) == 0) {
      iVar5 = (int)param_4[3];
      bVar3 = true;
      if ((iVar5 == 0) || (iVar5 == 2)) {
LAB_00c34788:
        bVar4 = 1 < iVar5 - 1U;
      }
      else {
        if (iVar5 != 3) {
          bVar3 = false;
          goto LAB_00c34788;
        }
        bVar3 = *(float *)((long)param_4 + 0x4c) != 0.0;
        bVar4 = *(float *)(param_4 + 10) == 0.0;
      }
      native_UIScrollView__RestrictWithinBounds_c322ac(param_4,0,bVar3,!bVar4);
    }
    else {
      lVar14 = param_4[0x20];
      if (lVar14 == 0) goto LAB_00c347c8;
      if (*(float *)(lVar14 + 0x1c) == 0.0) {
        native_UICenterOnChild__Recenter_9dc788(lVar14,0);
      }
      else {
        uVar22 = native_UnityEngine_Vector3__get_zero_776668(0);
        *(undefined4 *)(param_4 + 0x18) = uVar22;
        *(undefined4 *)((long)param_4 + 0xc4) = uVar26;
        *(undefined4 *)(param_4 + 0x19) = uVar20;
        *(undefined4 *)((long)param_4 + 0xcc) = 0;
      }
    }
  }
LAB_00c347a0:
  lVar14 = param_4[0xd];
joined_r0x00c3458c:
  if (lVar14 == 0) {
    return;
  }
  uVar23 = 0;
  lVar11 = *(long *)(lVar14 + 0x68);
  if (lVar11 == 0) {
    puVar17 = &stack0xffffffffffffffb8;
    lVar16 = 1;
  }
  else {
    lVar16 = *(long *)(lVar11 + 0x18);
    if (lVar16 == 0) {
      return;
    }
    puVar17 = (undefined1 *)(lVar11 + 0x20);
  }
  lVar11 = 0;
  do {
    lVar12 = *(long *)(puVar17 + lVar11 * 8);
    plVar1 = *(long **)(lVar12 + 0x20);
    lVar6 = *(long *)(lVar12 + 0x28);
    pcVar15 = *(code **)(lVar12 + 0x10);
    if (*(short *)(lVar6 + 0x48) == -1) {
      native_sub_4327f4(lVar6,uVar23);
    }
    uVar8 = native_sub_432768(lVar6);
    if ((uVar8 & 1) == 0) {
      if ((((plVar1 == (long *)0x0) || (*(short *)(lVar6 + 0x48) == -1)) ||
          ((*(byte *)(*plVar1 + 0x115) & 1) != 0)) || (*(long *)(lVar14 + 0x18) == 0))
      goto LAB_00559710;
      uVar8 = native_sub_432760(lVar6);
      uVar9 = native_sub_432b64(lVar6);
      if ((uVar8 & 1) == 0) {
        uVar2 = *(ushort *)(lVar6 + 0x48);
        if ((uVar9 & 1) == 0) {
          lVar6 = *plVar1 + (ulong)uVar2 * 0x10;
          (**(code **)(lVar6 + 0x138))(plVar1,*(undefined8 *)(lVar6 + 0x140));
          uVar23 = extraout_x1;
          goto LAB_0055971c;
        }
        lVar6 = native_sub_432764(lVar6);
        lVar12 = *plVar1;
        if ((ulong)*(ushort *)(lVar12 + 0x12a) != 0) {
          uVar8 = 0;
          piVar13 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
          do {
            if (*(long *)(piVar13 + -2) == lVar6) {
              puVar7 = (undefined8 *)(lVar12 + (long)(int)(*piVar13 + (uint)uVar2) * 0x10 + 0x138);
              goto LAB_00559638;
            }
            uVar8 = uVar8 + 1;
            piVar13 = piVar13 + 4;
          } while (uVar8 < *(ushort *)(lVar12 + 0x12a));
        }
        puVar7 = (undefined8 *)native_sub_3c9b34(plVar1,lVar6,(ulong)uVar2);
LAB_00559638:
        pcVar15 = (code *)*puVar7;
        puVar7 = (undefined8 *)puVar7[1];
      }
      else {
        if ((uVar9 & 1) == 0) {
          uVar23 = *(undefined8 *)(*plVar1 + (ulong)*(ushort *)(lVar6 + 0x48) * 0x10 + 0x140);
        }
        else {
          lVar12 = *plVar1;
          if ((ulong)*(ushort *)(lVar12 + 0x12a) != 0) {
            uVar8 = 0;
            piVar13 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
            do {
              if (*(long *)(piVar13 + -2) == *(long *)(lVar6 + 0x18)) {
                lVar12 = lVar12 + (long)(int)(*piVar13 + (uint)*(ushort *)(lVar6 + 0x48)) * 0x10 +
                         0x138;
                goto LAB_00559610;
              }
              uVar8 = uVar8 + 1;
              piVar13 = piVar13 + 4;
            } while (uVar8 < *(ushort *)(lVar12 + 0x12a));
          }
          lVar12 = native_sub_3c9b34(plVar1);
LAB_00559610:
          uVar23 = *(undefined8 *)(lVar12 + 8);
        }
        puVar7 = (undefined8 *)native_sub_4327e8(uVar23,lVar6);
        pcVar15 = (code *)*puVar7;
      }
      (*pcVar15)(plVar1,puVar7);
      uVar23 = extraout_x1_00;
    }
    else if (*(char *)(lVar6 + 0x4a) == '\0') {
      (*pcVar15)(lVar6);
      uVar23 = extraout_x1_01;
    }
    else {
LAB_00559710:
      (*pcVar15)(plVar1,lVar6);
      uVar23 = extraout_x1_02;
    }
LAB_0055971c:
    lVar11 = lVar11 + 1;
    if (lVar11 == lVar16) {
      return;
    }
  } while( true );
}



/* UIScrollView$$OnPan @ 0xc347cc
 * void UIScrollView__OnPan (UIScrollView_o* __this, UnityEngine_Vector2_o delta, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIScrollView$$OnPan
   void UIScrollView__OnPan (UIScrollView_o* __this, UnityEngine_Vector2_o delta, const MethodInfo*
   method); */

void native_UIScrollView__OnPan_c347cc(undefined8 param_1,undefined8 param_2,long *param_3)

{
  char cVar1;
  byte bVar2;
  undefined8 uVar3;
  ulong uVar4;
  long *plVar5;
  long lVar6;
  float fVar7;
  float fVar8;
  
  if ((bRam0000000001342744 & 1) == 0) {
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    bRam0000000001342744 = 1;
  }
  lVar6 = param_3[7];
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar4 = native_UnityEngine_Object__op_Inequality_8d76fc(lVar6,0,0);
  if ((uVar4 & 1) != 0) {
    plVar5 = (long *)param_3[7];
    if (plVar5 == (long *)0x0) goto LAB_00c34980;
    (**(code **)(*plVar5 + 0x1b8))(param_1,param_2,plVar5,*(undefined8 *)(*plVar5 + 0x1c0));
  }
  lVar6 = param_3[8];
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar4 = native_UnityEngine_Object__op_Inequality_8d76fc(lVar6,0,0);
  if ((uVar4 & 1) != 0) {
    plVar5 = (long *)param_3[8];
    if (plVar5 == (long *)0x0) {
LAB_00c34980:
                    /* WARNING: Subroutine does not return */
      native_sub_432810();
    }
    (**(code **)(*plVar5 + 0x1b8))(param_1,param_2,plVar5,*(undefined8 *)(*plVar5 + 0x1c0));
  }
  lVar6 = param_3[7];
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar4 = native_UnityEngine_Object__op_Equality_8e9a3c(lVar6,0,0);
  if ((uVar4 & 1) == 0) {
LAB_00c3496c:
    return;
  }
  lVar6 = param_3[8];
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar4 = native_UnityEngine_Object__op_Equality_8e9a3c(lVar6,0,0);
  if ((uVar4 & 1) == 0) {
    return;
  }
  switch((int)param_3[3]) {
  case 1:
code_r0x00c3492c:
    break;
  case 3:
    if (*(float *)((long)param_3 + 0x4c) == 0.0) {
      if (*(float *)(param_3 + 10) == 0.0) {
        return;
      }
      goto code_r0x00c3492c;
    }
  case 0:
  case 2:
    param_2 = param_1;
    break;
  default:
    goto LAB_00c3496c;
  }
  if ((bRam0000000001342742 & 1) == 0) {
    native_sub_43273c(&NGUITools_TypeInfo_12d53c8);
    bRam0000000001342742 = 1;
  }
  uVar4 = native_UnityEngine_Behaviour__get_enabled_8d7acc(param_3,0);
  if ((uVar4 & 1) != 0) {
    uVar3 = native_UnityEngine_Component__get_gameObject_8da66c(param_3,0);
    if (((*(byte *)(_NGUITools_TypeInfo_12d53c8 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_NGUITools_TypeInfo_12d53c8 + 0xe0) == 0)) {
      native_sub_4327ec(_NGUITools_TypeInfo_12d53c8);
    }
    uVar4 = native_NGUITools__GetActive_72d0d4(uVar3,0);
    if (((uVar4 & 1) != 0) && (*(float *)(param_3 + 5) != 0.0)) {
      native_UIScrollView__DisableSpring_c325c4(param_3);
      cVar1 = *(char *)((long)param_3 + 0xe9);
      bVar2 = (**(code **)(*param_3 + 0x1a8))(param_3,*(undefined8 *)(*param_3 + 0x1b0));
      *(byte *)((long)param_3 + 0xe9) = cVar1 != '\0' | bVar2 & 1;
      fVar7 = (float)native_UnityEngine_Mathf__Sign_8e51d8(*(undefined4 *)((long)param_3 + 0xcc),0);
      fVar8 = (float)native_UnityEngine_Mathf__Sign_8e51d8(param_2,0);
      if (fVar7 == fVar8) {
        fVar7 = *(float *)((long)param_3 + 0xcc);
      }
      else {
        fVar7 = 0.0;
        *(undefined4 *)((long)param_3 + 0xcc) = 0;
      }
      *(float *)((long)param_3 + 0xcc) = fVar7 + *(float *)(param_3 + 5) * (float)param_2;
    }
  }
  return;
}



/* UIScrollView$$.ctor @ 0xc34984
 * void UIScrollView___ctor (UIScrollView_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIScrollView$$.ctor
   void UIScrollView___ctor (UIScrollView_o* __this, const MethodInfo* method); */

undefined1  [16]
native_UIScrollView___ctor_c34984
          (undefined1 param_1 [16],undefined4 param_2,undefined4 param_3,ulong param_4)

{
  undefined4 uVar1;
  undefined1 auVar2 [16];
  
  *(undefined4 *)(param_4 + 0x1c) = 2;
  *(undefined8 *)(param_4 + 0x30) = 0x4110000041000000;
  *(undefined8 *)(param_4 + 0x28) = 0x420c00003e800000;
  *(undefined1 *)(param_4 + 0x20) = 1;
  *(undefined2 *)(param_4 + 0x23) = 0x101;
  *(undefined4 *)(param_4 + 0x48) = 1;
  *(undefined8 *)(param_4 + 0x4c) = 0x3f800000;
  *(undefined8 *)(param_4 + 0x78) = 0x3f800000;
  *(undefined4 *)(param_4 + 0x80) = 0;
  uVar1 = native_UnityEngine_Vector2__get_zero_765ef0(0);
  *(undefined4 *)(param_4 + 0x84) = uVar1;
  *(undefined4 *)(param_4 + 0x88) = param_2;
  uVar1 = native_UnityEngine_Vector3__get_zero_776668(0);
  *(undefined4 *)(param_4 + 0xc0) = uVar1;
  *(undefined4 *)(param_4 + 0xc4) = param_2;
  *(undefined4 *)(param_4 + 200) = param_3;
  *(undefined4 *)(param_4 + 0xec) = 0xfffffff6;
  uVar1 = native_UnityEngine_Vector2__get_zero_765ef0(0);
  *(undefined4 *)(param_4 + 0xf0) = uVar1;
  *(undefined4 *)(param_4 + 0xf4) = param_2;
  if ((bRam0000000001340ae0 & 1) == 0) {
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0,0);
    bRam0000000001340ae0 = 1;
  }
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  auVar2._8_8_ = 0;
  auVar2._0_8_ = param_4;
  return auVar2;
}



/* UIScrollView$$.cctor @ 0xc34a14
 * void UIScrollView___cctor (const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIScrollView$$.cctor
   void UIScrollView___cctor (const MethodInfo* method); */

void native_UIScrollView___cctor_c34a14(void)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  
  if ((bRam0000000001342745 & 1) == 0) {
    native_sub_43273c(&Method_BetterList_UIScrollView___ctor___12d8a18);
    native_sub_43273c(&BetterList_UIScrollView__TypeInfo_12d2150);
    native_sub_43273c(&UIScrollView_TypeInfo_12d64b8);
    bRam0000000001342745 = 1;
  }
  uVar4 = native_sub_432808(_BetterList_UIScrollView__TypeInfo_12d2150);
  native_BetterList_object____ctor_ba2d1c(uVar4,_Method_BetterList_UIScrollView___ctor___12d8a18);
  puVar5 = *(undefined8 **)(_UIScrollView_TypeInfo_12d64b8 + 0xb8);
  *puVar5 = uVar4;
  if (iRam0000000001345318 != 0) {
    puVar1 = (ulong *)(((ulong)puVar5 >> 0x12 & 0x7fff) * 8 + 0x138ecd8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar3) {
        *puVar1 = *puVar1 | 1L << ((ulong)puVar5 >> 0xc & 0x3f);
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  return;
}


