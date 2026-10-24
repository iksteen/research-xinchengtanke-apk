/* ARM64 IL2CPP native pseudocode from Ghidra.
 * Recovered implementation, not original C# source.
 * Function boundaries follow the IL2CPP method address table. */


/* MG_BlocksEngine2.UI.CustomScrollRect$$get_MultiTouchPosition @ 0xdeca24
 * UnityEngine_Vector2_o MG_BlocksEngine2_UI_CustomScrollRect__get_MultiTouchPosition (MG_BlocksEngine2_UI_CustomScrollRect_o* __this, const MethodInfo* method); */

/* MG_BlocksEngine2.UI.CustomScrollRect$$get_MultiTouchPosition
   UnityEngine_Vector2_o MG_BlocksEngine2_UI_CustomScrollRect__get_MultiTouchPosition
   (MG_BlocksEngine2_UI_CustomScrollRect_o* __this, const MethodInfo* method); */

float native_MG_BlocksEngine2_UI_CustomScrollRect__get_MultiTouchPosition_deca24(long param_1)

{
  int iVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  ulong uVar5;
  long lVar6;
  float fVar7;
  float fVar8;
  
  fVar7 = (float)native_UnityEngine_Vector2__get_zero_765ef0(0);
  iVar1 = native_UnityEngine_Input__get_touchCount_dbe094(0);
  if (0 < iVar1) {
    uVar5 = 0;
    lVar6 = 0x20;
    do {
      if ((long)*(int *)(param_1 + 0x128) <= (long)uVar5) break;
      lVar3 = native_UnityEngine_Input__get_touches_dbe200(0);
      if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
        native_sub_432810();
      }
      if (*(uint *)(lVar3 + 0x18) <= uVar5) {
        uVar4 = native_sub_43283c();
                    /* WARNING: Subroutine does not return */
        native_sub_4327dc(uVar4,0);
      }
      fVar8 = (float)native_UnityEngine_Touch__get_position_dbf50c(lVar3 + lVar6,0);
      fVar7 = fVar7 + fVar8;
      uVar5 = uVar5 + 1;
      iVar1 = native_UnityEngine_Input__get_touchCount_dbe094(0);
      lVar6 = lVar6 + 0x44;
    } while ((long)uVar5 < (long)iVar1);
  }
  iVar2 = native_UnityEngine_Input__get_touchCount_dbe094(0);
  iVar1 = *(int *)(param_1 + 0x128);
  if (iVar2 <= iVar1) {
    iVar1 = native_UnityEngine_Input__get_touchCount_dbe094(0);
  }
  return fVar7 / (float)iVar1;
}



/* MG_BlocksEngine2.UI.CustomScrollRect$$OnEnable @ 0xdecb04
 * void MG_BlocksEngine2_UI_CustomScrollRect__OnEnable (MG_BlocksEngine2_UI_CustomScrollRect_o* __this, const MethodInfo* method); */

/* MG_BlocksEngine2.UI.CustomScrollRect$$OnEnable
   void MG_BlocksEngine2_UI_CustomScrollRect__OnEnable (MG_BlocksEngine2_UI_CustomScrollRect_o*
   __this, const MethodInfo* method); */

void native_MG_BlocksEngine2_UI_CustomScrollRect__OnEnable_decb04(void)

{
  return;
}



/* MG_BlocksEngine2.UI.CustomScrollRect$$OnBeginDrag @ 0xdecb08
 * void MG_BlocksEngine2_UI_CustomScrollRect__OnBeginDrag (MG_BlocksEngine2_UI_CustomScrollRect_o* __this, UnityEngine_EventSystems_PointerEventData_o* eventData, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MG_BlocksEngine2.UI.CustomScrollRect$$OnBeginDrag
   void MG_BlocksEngine2_UI_CustomScrollRect__OnBeginDrag (MG_BlocksEngine2_UI_CustomScrollRect_o*
   __this, UnityEngine_EventSystems_PointerEventData_o* eventData, const MethodInfo* method); */

void native_MG_BlocksEngine2_UI_CustomScrollRect__OnBeginDrag_decb08
               (undefined1 param_1 [16],undefined4 param_2,long *param_3,long param_4)

{
  int iVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  
  if (param_4 == 0) {
                    /* WARNING: Subroutine does not return */
    native_sub_432810();
  }
  if (*(int *)(param_4 + 0x144) == 2) {
    *(undefined4 *)(param_4 + 0x144) = 0;
    native_UnityEngine_UI_ScrollRect__OnBeginDrag_a8a258(param_3,param_4,0);
  }
  iVar1 = native_UnityEngine_Input__get_touchCount_dbe094(0);
  if (iVar1 < (int)param_3[0x25]) {
    return;
  }
  uVar5 = native_MG_BlocksEngine2_UI_CustomScrollRect__get_MultiTouchPosition_deca24(param_3);
  *(undefined4 *)(param_4 + 0x100) = uVar5;
  *(undefined4 *)(param_4 + 0x104) = param_2;
  if ((bRam0000000001341dd3 & 1) == 0) {
    native_sub_43273c(&UnityEngine_RectTransformUtility_TypeInfo_12d58f8,param_4,0);
    bRam0000000001341dd3 = 1;
  }
  if (param_4 != 0) {
    if (*(int *)(param_4 + 0x144) == 0) {
      uVar2 = (**(code **)(*param_3 + 0x1c8))(param_3,*(undefined8 *)(*param_3 + 0x1d0));
      if ((uVar2 & 1) != 0) {
        native_UnityEngine_UI_ScrollRect__UpdateBounds_a893ac(param_3);
        uVar5 = native_UnityEngine_Vector2__get_zero_765ef0(0);
        *(undefined4 *)(param_3 + 0xd) = uVar5;
        *(undefined4 *)((long)param_3 + 0x6c) = param_2;
        uVar3 = native_UnityEngine_UI_ScrollRect__get_viewRect_a88c90(param_3);
        uVar6 = *(undefined4 *)(param_4 + 0x100);
        uVar5 = *(undefined4 *)(param_4 + 0x104);
        uVar4 = native_UnityEngine_EventSystems_PointerEventData__get_pressEventCamera_a8360c
                          (param_4);
        if (((*(byte *)(_UnityEngine_RectTransformUtility_TypeInfo_12d58f8 + 0x133) >> 2 & 1) != 0)
           && (*(int *)(_UnityEngine_RectTransformUtility_TypeInfo_12d58f8 + 0xe0) == 0)) {
          native_sub_4327ec(_UnityEngine_RectTransformUtility_TypeInfo_12d58f8);
        }
        native_UnityEngine_RectTransformUtility__ScreenPointToLocalPointInRectangle_db80ac
                  (uVar6,uVar3,uVar4,param_3 + 0xd,0);
        if (param_3[3] == 0) goto code_r0x00a8a35c;
        uVar6 = native_UnityEngine_RectTransform__get_anchoredPosition_764e18(param_3[3],0);
        *(undefined4 *)(param_3 + 0xe) = uVar6;
        *(undefined4 *)((long)param_3 + 0x74) = uVar5;
        *(undefined1 *)(param_3 + 0x17) = 1;
      }
    }
    return;
  }
code_r0x00a8a35c:
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* MG_BlocksEngine2.UI.CustomScrollRect$$OnEndDrag @ 0xdecb8c
 * void MG_BlocksEngine2_UI_CustomScrollRect__OnEndDrag (MG_BlocksEngine2_UI_CustomScrollRect_o* __this, UnityEngine_EventSystems_PointerEventData_o* eventData, const MethodInfo* method); */

/* MG_BlocksEngine2.UI.CustomScrollRect$$OnEndDrag
   void MG_BlocksEngine2_UI_CustomScrollRect__OnEndDrag (MG_BlocksEngine2_UI_CustomScrollRect_o*
   __this, UnityEngine_EventSystems_PointerEventData_o* eventData, const MethodInfo* method); */

void native_MG_BlocksEngine2_UI_CustomScrollRect__OnEndDrag_decb8c
               (undefined1 param_1 [16],undefined4 param_2,long param_3,long param_4)

{
  int iVar1;
  undefined4 uVar2;
  
  if (param_4 == 0) {
                    /* WARNING: Subroutine does not return */
    native_sub_432810();
  }
  if (*(int *)(param_4 + 0x144) == 2) {
    *(undefined4 *)(param_4 + 0x144) = 0;
    native_UnityEngine_UI_ScrollRect__OnEndDrag_a8a360(param_3,param_4,0);
  }
  iVar1 = native_UnityEngine_Input__get_touchCount_dbe094(0);
  if (iVar1 < *(int *)(param_3 + 0x128)) {
    return;
  }
  uVar2 = native_MG_BlocksEngine2_UI_CustomScrollRect__get_MultiTouchPosition_deca24(param_3);
  *(undefined4 *)(param_4 + 0x100) = uVar2;
  *(undefined4 *)(param_4 + 0x104) = param_2;
  if (param_4 == 0) {
                    /* WARNING: Subroutine does not return */
    native_sub_432810(param_3,0,0);
  }
  if (*(int *)(param_4 + 0x144) != 0) {
    return;
  }
  *(undefined1 *)(param_3 + 0xb8) = 0;
  return;
}



/* MG_BlocksEngine2.UI.CustomScrollRect$$OnDrag @ 0xdecc10
 * void MG_BlocksEngine2_UI_CustomScrollRect__OnDrag (MG_BlocksEngine2_UI_CustomScrollRect_o* __this, UnityEngine_EventSystems_PointerEventData_o* eventData, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MG_BlocksEngine2.UI.CustomScrollRect$$OnDrag
   void MG_BlocksEngine2_UI_CustomScrollRect__OnDrag (MG_BlocksEngine2_UI_CustomScrollRect_o*
   __this, UnityEngine_EventSystems_PointerEventData_o* eventData, const MethodInfo* method); */

void native_MG_BlocksEngine2_UI_CustomScrollRect__OnDrag_decc10
               (undefined1 param_1 [16],undefined4 param_2,long *param_3,long param_4)

{
  long *plVar1;
  int iVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  undefined4 uVar10;
  float fVar11;
  long lVar12;
  ulong uVar13;
  undefined4 uVar14;
  float fVar15;
  undefined8 uStack_68;
  undefined8 uStack_28;
  
  if (param_4 == 0) {
                    /* WARNING: Subroutine does not return */
    native_sub_432810();
  }
  if (*(int *)(param_4 + 0x144) == 2) {
    *(undefined4 *)(param_4 + 0x144) = 0;
    native_UnityEngine_UI_ScrollRect__OnDrag_a8a384(param_3,param_4,0);
  }
  iVar2 = native_UnityEngine_Input__get_touchCount_dbe094(0);
  if (iVar2 < (int)param_3[0x25]) {
    return;
  }
  uVar10 = native_MG_BlocksEngine2_UI_CustomScrollRect__get_MultiTouchPosition_deca24(param_3);
  *(undefined4 *)(param_4 + 0x100) = uVar10;
  *(undefined4 *)(param_4 + 0x104) = param_2;
  if ((bRam0000000001341dd4 & 1) == 0) {
    native_sub_43273c(&UnityEngine_RectTransformUtility_TypeInfo_12d58f8,param_4,0);
    bRam0000000001341dd4 = 1;
  }
  uStack_68 = 0;
  if ((char)param_3[0x17] != '\0') {
    if (param_4 == 0) {
code_r0x00a8a5c0:
                    /* WARNING: Subroutine does not return */
      native_sub_432810();
    }
    if ((*(int *)(param_4 + 0x144) == 0) &&
       (uVar3 = (**(code **)(*param_3 + 0x1c8))(param_3,*(undefined8 *)(*param_3 + 0x1d0)),
       (uVar3 & 1) != 0)) {
      uVar4 = native_UnityEngine_UI_ScrollRect__get_viewRect_a88c90(param_3);
      uVar10 = *(undefined4 *)(param_4 + 0x100);
      uVar14 = *(undefined4 *)(param_4 + 0x104);
      uVar5 = native_UnityEngine_EventSystems_PointerEventData__get_pressEventCamera_a8360c(param_4)
      ;
      if (((*(byte *)(_UnityEngine_RectTransformUtility_TypeInfo_12d58f8 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_UnityEngine_RectTransformUtility_TypeInfo_12d58f8 + 0xe0) == 0)) {
        native_sub_4327ec(_UnityEngine_RectTransformUtility_TypeInfo_12d58f8);
      }
      uVar3 = native_UnityEngine_RectTransformUtility__ScreenPointToLocalPointInRectangle_db80ac
                        (uVar10,uVar14,uVar4,uVar5,&uStack_68,0);
      if ((uVar3 & 1) != 0) {
        native_UnityEngine_UI_ScrollRect__UpdateBounds_a893ac(param_3);
        if (param_3[3] == 0) goto code_r0x00a8a5c0;
        lVar12 = param_3[0xd];
        fVar6 = ((float)uStack_68 - (float)lVar12) + (float)param_3[0xe];
        fVar11 = ((float)((ulong)uStack_68 >> 0x20) - (float)((ulong)lVar12 >> 0x20)) +
                 (float)((ulong)param_3[0xe] >> 0x20);
        uVar3 = CONCAT44(fVar11,fVar6);
        fVar7 = (float)native_UnityEngine_RectTransform__get_anchoredPosition_764e18(param_3[3],0);
        plVar1 = param_3 + 0x13;
        uStack_28 = CONCAT44(fVar11 - (float)lVar12,fVar6 - fVar7);
        uVar4 = native_UnityEngine_UI_ScrollRect__InternalCalculateOffset_a8bf4c
                          (plVar1,param_3 + 0x10,(char)param_3[4],
                           *(undefined1 *)((long)param_3 + 0x21),
                           *(undefined4 *)((long)param_3 + 0x24),&uStack_28);
        fVar15 = (float)uVar4;
        fVar6 = fVar6 + fVar15;
        fVar7 = (float)uVar3;
        fVar11 = fVar11 + fVar7;
        if (*(int *)((long)param_3 + 0x24) == 1) {
          uVar13 = uVar3;
          if (fVar15 != 0.0) {
            fVar8 = (float)native_UnityEngine_Bounds__get_size_8d7ed8(plVar1,0);
            fVar9 = (float)native_UnityEngine_Mathf__Sign_8e51d8(uVar4,0);
            fVar8 = fVar8 * (1.0 - 1.0 / ((ABS(fVar15) * 0.55) / fVar8 + 1.0));
            uVar13 = (ulong)(uint)fVar8;
            fVar6 = fVar6 - fVar9 * fVar8;
          }
          fVar15 = (float)uVar13;
          if (fVar7 != 0.0) {
            native_UnityEngine_Bounds__get_size_8d7ed8(plVar1,0);
            fVar8 = (float)native_UnityEngine_Mathf__Sign_8e51d8(uVar3,0);
            fVar11 = fVar11 - fVar8 * fVar15 * (1.0 - 1.0 / ((ABS(fVar7) * 0.55) / fVar15 + 1.0));
          }
        }
        (**(code **)(*param_3 + 0x428))(fVar6,fVar11,param_3,*(undefined8 *)(*param_3 + 0x430));
      }
    }
  }
  return;
}



/* MG_BlocksEngine2.UI.CustomScrollRect$$.ctor @ 0xdecc94
 * void MG_BlocksEngine2_UI_CustomScrollRect___ctor (MG_BlocksEngine2_UI_CustomScrollRect_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MG_BlocksEngine2.UI.CustomScrollRect$$.ctor
   void MG_BlocksEngine2_UI_CustomScrollRect___ctor (MG_BlocksEngine2_UI_CustomScrollRect_o* __this,
   const MethodInfo* method); */

undefined1  [16]
native_MG_BlocksEngine2_UI_CustomScrollRect___ctor_decc94
          (undefined1 param_1 [16],undefined4 param_2,ulong param_3)

{
  undefined8 uVar1;
  undefined4 uVar2;
  undefined1 auVar3 [16];
  
  *(undefined4 *)(param_3 + 0x128) = 2;
  if ((bRam0000000001341dcd & 1) == 0) {
    native_sub_43273c(&UnityEngine_UI_ScrollRect_ScrollRectEvent_TypeInfo_12d7640,0);
    native_sub_43273c(&UnityEngine_Vector3___TypeInfo_12d3478);
    bRam0000000001341dcd = 1;
  }
  *(undefined2 *)(param_3 + 0x20) = 0x101;
  *(undefined8 *)(param_3 + 0x24) = 0x3dcccccd00000001;
  *(undefined1 *)(param_3 + 0x2c) = 1;
  *(undefined8 *)(param_3 + 0x30) = 0x3f8000003e0a3d71;
  uVar1 = native_sub_432808(_UnityEngine_UI_ScrollRect_ScrollRectEvent_TypeInfo_12d7640);
  native_UnityEngine_UI_ScrollRect_ScrollRectEvent___ctor_c70058(uVar1,0);
  *(undefined8 *)(param_3 + 0x60) = uVar1;
  native_sub_4326e0(param_3 + 0x60,uVar1);
  uVar2 = native_UnityEngine_Vector2__get_zero_765ef0(0);
  *(undefined4 *)(param_3 + 0x68) = uVar2;
  *(undefined4 *)(param_3 + 0x6c) = param_2;
  uVar2 = native_UnityEngine_Vector2__get_zero_765ef0(0);
  *(undefined4 *)(param_3 + 0x70) = uVar2;
  *(undefined4 *)(param_3 + 0x74) = param_2;
  uVar2 = native_UnityEngine_Vector2__get_zero_765ef0(0);
  *(undefined4 *)(param_3 + 0xbc) = uVar2;
  *(undefined4 *)(param_3 + 0xc0) = param_2;
  uVar1 = native_sub_432750(_UnityEngine_Vector3___TypeInfo_12d3478,4);
  *(undefined8 *)(param_3 + 0x120) = uVar1;
  native_sub_4326e0(param_3 + 0x120);
  if ((bRam0000000001340ae0 & 1) == 0) {
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0,0);
    bRam0000000001340ae0 = 1;
  }
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  auVar3._8_8_ = 0;
  auVar3._0_8_ = param_3;
  return auVar3;
}


