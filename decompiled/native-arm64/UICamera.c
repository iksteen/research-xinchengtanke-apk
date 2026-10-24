/* ARM64 IL2CPP native pseudocode from Ghidra.
 * Recovered implementation, not original C# source.
 * Function boundaries follow the IL2CPP method address table. */


/* UICamera$$get_stickyPress @ 0xc94228
 * bool UICamera__get_stickyPress (UICamera_o* __this, const MethodInfo* method); */

/* UICamera$$get_stickyPress
   bool UICamera__get_stickyPress (UICamera_o* __this, const MethodInfo* method); */

undefined8 native_UICamera__get_stickyPress_c94228(void)

{
  return 1;
}



/* UICamera$$get_disableController @ 0xc94230
 * bool UICamera__get_disableController (const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UICamera$$get_disableController
   bool UICamera__get_disableController (const MethodInfo* method); */

byte native_UICamera__get_disableController_c94230(void)

{
  byte bVar1;
  
  if ((bRam00000000013428a9 & 1) == 0) {
    native_sub_43273c(&UICamera_TypeInfo_12d6410);
    native_sub_43273c(&UIPopupList_TypeInfo_12d6490);
    bRam00000000013428a9 = 1;
  }
  if (((*(byte *)(_UICamera_TypeInfo_12d6410 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  bVar1 = 0;
  if (*(char *)(*(long *)(_UICamera_TypeInfo_12d6410 + 0xb8) + 0x5b) != '\0') {
    if (((*(byte *)(_UIPopupList_TypeInfo_12d6490 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UIPopupList_TypeInfo_12d6490 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    bVar1 = native_UIPopupList__get_isOpen_c264f8(0);
    bVar1 = bVar1 ^ 1;
  }
  return bVar1 & 1;
}



/* UICamera$$set_disableController @ 0xc942d4
 * void UICamera__set_disableController (bool value, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UICamera$$set_disableController
   void UICamera__set_disableController (bool value, const MethodInfo* method); */

void native_UICamera__set_disableController_c942d4(byte param_1)

{
  if ((bRam00000000013428aa & 1) == 0) {
    native_sub_43273c(&UICamera_TypeInfo_12d6410);
    bRam00000000013428aa = 1;
  }
  if (((*(byte *)(_UICamera_TypeInfo_12d6410 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  *(byte *)(*(long *)(_UICamera_TypeInfo_12d6410 + 0xb8) + 0x5b) = param_1 & 1;
  return;
}



/* UICamera$$get_lastTouchPosition @ 0xc94340
 * UnityEngine_Vector2_o UICamera__get_lastTouchPosition (const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UICamera$$get_lastTouchPosition
   UnityEngine_Vector2_o UICamera__get_lastTouchPosition (const MethodInfo* method); */

undefined4 native_UICamera__get_lastTouchPosition_c94340(void)

{
  if ((bRam00000000013428ab & 1) == 0) {
    native_sub_43273c(&UICamera_TypeInfo_12d6410);
    bRam00000000013428ab = 1;
  }
  if (((*(byte *)(_UICamera_TypeInfo_12d6410 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  return *(undefined4 *)(*(long *)(_UICamera_TypeInfo_12d6410 + 0xb8) + 0x5c);
}



/* UICamera$$set_lastTouchPosition @ 0xc943a4
 * void UICamera__set_lastTouchPosition (UnityEngine_Vector2_o value, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UICamera$$set_lastTouchPosition
   void UICamera__set_lastTouchPosition (UnityEngine_Vector2_o value, const MethodInfo* method); */

void native_UICamera__set_lastTouchPosition_c943a4(undefined4 param_1,undefined4 param_2)

{
  long lVar1;
  
  if ((bRam00000000013428ac & 1) == 0) {
    native_sub_43273c(&UICamera_TypeInfo_12d6410);
    bRam00000000013428ac = 1;
  }
  if (((*(byte *)(_UICamera_TypeInfo_12d6410 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  lVar1 = *(long *)(_UICamera_TypeInfo_12d6410 + 0xb8);
  *(undefined4 *)(lVar1 + 0x5c) = param_1;
  *(undefined4 *)(lVar1 + 0x60) = param_2;
  return;
}



/* UICamera$$get_lastEventPosition @ 0xc94418
 * UnityEngine_Vector2_o UICamera__get_lastEventPosition (const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UICamera$$get_lastEventPosition
   UnityEngine_Vector2_o UICamera__get_lastEventPosition (const MethodInfo* method); */

undefined1  [16] native_UICamera__get_lastEventPosition_c94418(void)

{
  int iVar1;
  undefined4 uVar2;
  long lVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined1 auVar6 [16];
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  
  if ((bRam00000000013428ad & 1) == 0) {
    native_sub_43273c(&NGUIMath_TypeInfo_12d53b8);
    native_sub_43273c(&NGUITools_TypeInfo_12d53c8);
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    native_sub_43273c(&UICamera_TypeInfo_12d6410);
    bRam00000000013428ad = 1;
  }
  uStack_38 = 0;
  uStack_30 = 0;
  uStack_40 = 0;
  if (((*(byte *)(_UICamera_TypeInfo_12d6410 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  iVar1 = native_UICamera__get_currentScheme_c92518();
  if (iVar1 == 2) {
    if (((*(byte *)(_UICamera_TypeInfo_12d6410 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    lVar3 = native_UICamera__get_hoveredObject_c9114c();
    if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
      native_sub_4327ec(_UnityEngine_Object_TypeInfo_12d54e0);
    }
    uVar4 = native_UnityEngine_Object__op_Inequality_8d76fc(lVar3,0,0);
    if ((uVar4 & 1) != 0) {
      if (lVar3 != 0) {
        uVar5 = native_UnityEngine_GameObject__get_transform_8de5c8(lVar3,0);
        if (((*(byte *)(_NGUIMath_TypeInfo_12d53b8 + 0x133) >> 2 & 1) != 0) &&
           (*(int *)(_NGUIMath_TypeInfo_12d53b8 + 0xe0) == 0)) {
          native_sub_4327ec(_NGUIMath_TypeInfo_12d53b8);
        }
        native_NGUIMath__CalculateAbsoluteWidgetBounds_8055d0(&uStack_58,uVar5,0);
        uStack_30 = uStack_48;
        uStack_38 = uStack_50;
        uStack_40 = uStack_58;
        uVar2 = native_UnityEngine_GameObject__get_layer_8de608(lVar3,0);
        if (((*(byte *)(_NGUITools_TypeInfo_12d53c8 + 0x133) >> 2 & 1) != 0) &&
           (*(int *)(_NGUITools_TypeInfo_12d53c8 + 0xe0) == 0)) {
          native_sub_4327ec(_NGUITools_TypeInfo_12d53c8);
        }
        lVar3 = native_NGUITools__FindCameraForLayer_72d2e8(uVar2,0);
        native_UnityEngine_Bounds__get_center_8d7d98(&uStack_40,0);
        if (lVar3 != 0) {
          auVar6 = native_UnityEngine_Camera__WorldToScreenPoint_8d9158(lVar3,0);
          return auVar6;
        }
      }
                    /* WARNING: Subroutine does not return */
      native_sub_432810();
    }
  }
  if (((*(byte *)(_UICamera_TypeInfo_12d6410 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  return ZEXT416(*(uint *)(*(long *)(_UICamera_TypeInfo_12d6410 + 0xb8) + 0x5c));
}



/* UICamera$$set_lastEventPosition @ 0xc945ec
 * void UICamera__set_lastEventPosition (UnityEngine_Vector2_o value, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UICamera$$set_lastEventPosition
   void UICamera__set_lastEventPosition (UnityEngine_Vector2_o value, const MethodInfo* method); */

void native_UICamera__set_lastEventPosition_c945ec(undefined4 param_1,undefined4 param_2)

{
  long lVar1;
  
  if ((bRam00000000013428ae & 1) == 0) {
    native_sub_43273c(&UICamera_TypeInfo_12d6410);
    bRam00000000013428ae = 1;
  }
  if (((*(byte *)(_UICamera_TypeInfo_12d6410 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  lVar1 = *(long *)(_UICamera_TypeInfo_12d6410 + 0xb8);
  *(undefined4 *)(lVar1 + 0x5c) = param_1;
  *(undefined4 *)(lVar1 + 0x60) = param_2;
  return;
}



/* UICamera$$get_first @ 0xc94660
 * UICamera_o* UICamera__get_first (const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UICamera$$get_first
   UICamera_o* UICamera__get_first (const MethodInfo* method); */

undefined8 native_UICamera__get_first_c94660(void)

{
  undefined8 uVar1;
  long lVar2;
  
  if ((bRam00000000013428af & 1) == 0) {
    native_sub_43273c(&UICamera_TypeInfo_12d6410);
    bRam00000000013428af = 1;
  }
  if (((*(byte *)(_UICamera_TypeInfo_12d6410 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  lVar2 = **(long **)(_UICamera_TypeInfo_12d6410 + 0xb8);
  if (lVar2 == 0) {
    return 0;
  }
  if (((*(byte *)(_UICamera_TypeInfo_12d6410 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
    native_sub_4327ec();
    lVar2 = **(long **)(_UICamera_TypeInfo_12d6410 + 0xb8);
    if (lVar2 == 0) goto LAB_00c94734;
  }
  if (*(int *)(lVar2 + 0x18) == 0) {
    return 0;
  }
  if (((*(byte *)(_UICamera_TypeInfo_12d6410 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
    native_sub_4327ec();
    lVar2 = **(long **)(_UICamera_TypeInfo_12d6410 + 0xb8);
    if (lVar2 == 0) goto LAB_00c94734;
  }
  lVar2 = *(long *)(lVar2 + 0x10);
  if (lVar2 != 0) {
    if (*(int *)(lVar2 + 0x18) == 0) {
      uVar1 = native_sub_43283c();
                    /* WARNING: Subroutine does not return */
      native_sub_4327dc(uVar1,0);
    }
    return *(undefined8 *)(lVar2 + 0x20);
  }
LAB_00c94734:
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* UICamera$$get_currentScheme @ 0xc92518
 * int32_t UICamera__get_currentScheme (const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UICamera$$get_currentScheme
   int32_t UICamera__get_currentScheme (const MethodInfo* method); */

undefined4 native_UICamera__get_currentScheme_c92518(void)

{
  ulong uVar1;
  long lVar2;
  int iVar3;
  long lVar4;
  undefined8 uVar5;
  
  if ((bRam00000000013428b0 & 1) == 0) {
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    native_sub_43273c(&UICamera_TypeInfo_12d6410);
    bRam00000000013428b0 = 1;
  }
  if (((*(byte *)(_UICamera_TypeInfo_12d6410 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  lVar2 = *(long *)(_UICamera_TypeInfo_12d6410 + 0xb8);
  iVar3 = *(int *)(lVar2 + 0xd8);
  if (iVar3 == 0) {
    return 1;
  }
  if (((*(byte *)(_UICamera_TypeInfo_12d6410 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
    native_sub_4327ec();
    lVar2 = *(long *)(_UICamera_TypeInfo_12d6410 + 0xb8);
    iVar3 = *(int *)(lVar2 + 0xd8);
  }
  if (0x149 < iVar3) {
    return 2;
  }
  if (((*(byte *)(_UICamera_TypeInfo_12d6410 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
    native_sub_4327ec();
    lVar2 = *(long *)(_UICamera_TypeInfo_12d6410 + 0xb8);
  }
  uVar5 = *(undefined8 *)(lVar2 + 0xb8);
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar1 = native_UnityEngine_Object__op_Inequality_8d76fc(uVar5,0,0);
  if ((uVar1 & 1) != 0) {
    if (((*(byte *)(_UICamera_TypeInfo_12d6410 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    lVar2 = *(long *)(_UICamera_TypeInfo_12d6410 + 0xb8);
    if (*(int *)(lVar2 + 0xd0) == 2) {
      if (((*(byte *)(_UICamera_TypeInfo_12d6410 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
        native_sub_4327ec();
        lVar2 = *(long *)(_UICamera_TypeInfo_12d6410 + 0xb8);
      }
      lVar4 = *(long *)(lVar2 + 0xb8);
      if (lVar4 == 0) goto LAB_00c92714;
      if (*(int *)(lVar2 + 0xd8) == *(int *)(lVar4 + 0x7c)) {
        return 2;
      }
      if (((*(byte *)(_UICamera_TypeInfo_12d6410 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
        native_sub_4327ec();
        lVar2 = *(long *)(_UICamera_TypeInfo_12d6410 + 0xb8);
        lVar4 = *(long *)(lVar2 + 0xb8);
        if (lVar4 == 0) goto LAB_00c92714;
      }
      if (*(int *)(lVar2 + 0xd8) == *(int *)(lVar4 + 0x80)) {
        return 2;
      }
    }
    if (((*(byte *)(_UICamera_TypeInfo_12d6410 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    lVar2 = *(long *)(*(long *)(_UICamera_TypeInfo_12d6410 + 0xb8) + 0xb8);
    if (lVar2 == 0) {
LAB_00c92714:
                    /* WARNING: Subroutine does not return */
      native_sub_432810();
    }
    if (*(char *)(lVar2 + 0x29) == '\0') {
      if (((*(byte *)(_UICamera_TypeInfo_12d6410 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
        native_sub_4327ec();
        lVar2 = *(long *)(*(long *)(_UICamera_TypeInfo_12d6410 + 0xb8) + 0xb8);
        if (lVar2 == 0) goto LAB_00c92714;
      }
      if (*(char *)(lVar2 + 0x2a) == '\0') {
        return 2;
      }
      return 1;
    }
  }
  return 0;
}



/* UICamera$$set_currentScheme @ 0xc94744
 * void UICamera__set_currentScheme (int32_t value, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UICamera$$set_currentScheme
   void UICamera__set_currentScheme (int32_t value, const MethodInfo* method); */

void native_UICamera__set_currentScheme_c94744(int param_1)

{
  undefined8 uVar1;
  
  if ((bRam00000000013428b1 & 1) == 0) {
    native_sub_43273c(&UICamera_TypeInfo_12d6410);
    bRam00000000013428b1 = 1;
  }
  if (((*(byte *)(_UICamera_TypeInfo_12d6410 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  if (*(int *)(*(long *)(_UICamera_TypeInfo_12d6410 + 0xb8) + 0xd0) != param_1) {
    if (param_1 == 2) {
      if (((*(byte *)(_UICamera_TypeInfo_12d6410 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
        native_sub_4327ec();
      }
      uVar1 = 0x14a;
    }
    else if (param_1 == 0) {
      if (((*(byte *)(_UICamera_TypeInfo_12d6410 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
        native_sub_4327ec();
      }
      uVar1 = 0x143;
    }
    else if (param_1 == 1) {
      if (((*(ushort *)(_UICamera_TypeInfo_12d6410 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
        native_sub_4327ec();
      }
      uVar1 = 0;
    }
    else {
      if (((*(ushort *)(_UICamera_TypeInfo_12d6410 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
        native_sub_4327ec();
      }
      uVar1 = 0x30;
    }
    native_UICamera__set_currentKey_c94858(uVar1);
    if (((*(byte *)(_UICamera_TypeInfo_12d6410 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    *(int *)(*(long *)(_UICamera_TypeInfo_12d6410 + 0xb8) + 0xd0) = param_1;
  }
  return;
}



/* UICamera$$get_currentKey @ 0xc94ab8
 * int32_t UICamera__get_currentKey (const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UICamera$$get_currentKey
   int32_t UICamera__get_currentKey (const MethodInfo* method); */

undefined4 native_UICamera__get_currentKey_c94ab8(void)

{
  if ((bRam00000000013428b2 & 1) == 0) {
    native_sub_43273c(&UICamera_TypeInfo_12d6410);
    bRam00000000013428b2 = 1;
  }
  if (((*(byte *)(_UICamera_TypeInfo_12d6410 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  return *(undefined4 *)(*(long *)(_UICamera_TypeInfo_12d6410 + 0xb8) + 0xd8);
}



/* UICamera$$set_currentKey @ 0xc94858
 * void UICamera__set_currentKey (int32_t value, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UICamera$$set_currentKey
   void UICamera__set_currentKey (int32_t value, const MethodInfo* method); */

void native_UICamera__set_currentKey_c94858(int param_1)

{
  long *plVar1;
  int iVar2;
  ushort uVar3;
  undefined4 uVar4;
  long lVar5;
  undefined8 *puVar6;
  ulong uVar7;
  ulong uVar8;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  undefined8 extraout_x1_01;
  undefined8 extraout_x1_02;
  long lVar9;
  long lVar10;
  long lVar11;
  int *piVar12;
  undefined8 uVar13;
  code *pcVar14;
  long lVar15;
  long *plVar16;
  long lStack_48;
  
  if ((bRam00000000013428b3 & 1) == 0) {
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    native_sub_43273c(&UICamera_TypeInfo_12d6410);
    bRam00000000013428b3 = 1;
  }
  if (((*(byte *)(_UICamera_TypeInfo_12d6410 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  lVar11 = *(long *)(_UICamera_TypeInfo_12d6410 + 0xb8);
  if (*(int *)(lVar11 + 0xd8) == param_1) {
    return;
  }
  if (((*(byte *)(_UICamera_TypeInfo_12d6410 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
    native_sub_4327ec();
    lVar11 = *(long *)(_UICamera_TypeInfo_12d6410 + 0xb8);
  }
  iVar2 = *(int *)(lVar11 + 0xd0);
  *(int *)(lVar11 + 0xd8) = param_1;
  uVar4 = native_UICamera__get_currentScheme_c92518();
  lVar11 = _UICamera_TypeInfo_12d6410;
  *(undefined4 *)(*(long *)(_UICamera_TypeInfo_12d6410 + 0xb8) + 0xd0) = uVar4;
  if (iVar2 == *(int *)(*(long *)(lVar11 + 0xb8) + 0xd0)) {
    return;
  }
  if (((*(byte *)(lVar11 + 0x133) >> 2 & 1) != 0) && (*(int *)(lVar11 + 0xe0) == 0)) {
    native_sub_4327ec(lVar11);
  }
  native_UICamera__HideTooltip_c94b1c();
  lVar11 = *(long *)(_UICamera_TypeInfo_12d6410 + 0xb8);
  if (*(int *)(lVar11 + 0xd0) == 0) {
    native_UnityEngine_Cursor__set_lockState_8dbe98(0,0);
    native_UnityEngine_Cursor__set_visible_8dbe24(1,0);
  }
  else {
    if (((*(byte *)(_UICamera_TypeInfo_12d6410 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
      native_sub_4327ec();
      lVar11 = *(long *)(_UICamera_TypeInfo_12d6410 + 0xb8);
    }
    uVar13 = *(undefined8 *)(lVar11 + 0xb8);
    if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    uVar8 = native_UnityEngine_Object__op_Inequality_8d76fc(uVar13,0,0);
    if ((uVar8 & 1) != 0) {
      if (((*(byte *)(_UICamera_TypeInfo_12d6410 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
        native_sub_4327ec();
      }
      lVar11 = *(long *)(*(long *)(_UICamera_TypeInfo_12d6410 + 0xb8) + 0xb8);
      if (lVar11 == 0) goto LAB_00c94aa8;
      if (*(char *)(lVar11 + 0x8c) != '\0') {
        native_UnityEngine_Cursor__set_visible_8dbe24(0,0);
        native_UnityEngine_Cursor__set_lockState_8dbe98(1,0);
        if (((*(byte *)(_UICamera_TypeInfo_12d6410 + 0x133) >> 2 & 1) != 0) &&
           (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
          native_sub_4327ec();
        }
        lVar11 = *(long *)(*(long *)(_UICamera_TypeInfo_12d6410 + 0xb8) + 0x188);
        if (lVar11 == 0) goto LAB_00c94aa8;
        if (*(int *)(lVar11 + 0x18) == 0) {
          uVar13 = native_sub_43283c();
                    /* WARNING: Subroutine does not return */
          native_sub_4327dc(uVar13,0);
        }
        if (*(long *)(lVar11 + 0x20) == 0) goto LAB_00c94aa8;
        *(undefined4 *)(*(long *)(lVar11 + 0x20) + 0x78) = 2;
      }
    }
  }
  if (((*(byte *)(_UICamera_TypeInfo_12d6410 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  lVar11 = *(long *)(*(long *)(_UICamera_TypeInfo_12d6410 + 0xb8) + 200);
  if (lVar11 == 0) {
    return;
  }
  if (((*(byte *)(_UICamera_TypeInfo_12d6410 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
    native_sub_4327ec();
    lVar11 = *(long *)(*(long *)(_UICamera_TypeInfo_12d6410 + 0xb8) + 200);
    if (lVar11 == 0) {
LAB_00c94aa8:
                    /* WARNING: Subroutine does not return */
      native_sub_432810();
    }
  }
  uVar13 = 0;
  lStack_48 = lVar11;
  lVar9 = *(long *)(lVar11 + 0x68);
  if (lVar9 == 0) {
    plVar16 = &lStack_48;
    lVar15 = 1;
  }
  else {
    lVar15 = *(long *)(lVar9 + 0x18);
    if (lVar15 == 0) {
      return;
    }
    plVar16 = (long *)(lVar9 + 0x20);
  }
  lVar9 = 0;
  do {
    lVar10 = plVar16[lVar9];
    plVar1 = *(long **)(lVar10 + 0x20);
    lVar5 = *(long *)(lVar10 + 0x28);
    pcVar14 = *(code **)(lVar10 + 0x10);
    if (*(short *)(lVar5 + 0x48) == -1) {
      native_sub_4327f4(lVar5,uVar13);
    }
    uVar8 = native_sub_432768(lVar5);
    if ((uVar8 & 1) == 0) {
      if ((((plVar1 == (long *)0x0) || (*(short *)(lVar5 + 0x48) == -1)) ||
          ((*(byte *)(*plVar1 + 0x115) & 1) != 0)) || (*(long *)(lVar11 + 0x18) == 0))
      goto LAB_00553100;
      uVar8 = native_sub_432760(lVar5);
      uVar7 = native_sub_432b64(lVar5);
      if ((uVar8 & 1) == 0) {
        uVar3 = *(ushort *)(lVar5 + 0x48);
        if ((uVar7 & 1) == 0) {
          lVar5 = *plVar1 + (ulong)uVar3 * 0x10;
          (**(code **)(lVar5 + 0x138))(plVar1,*(undefined8 *)(lVar5 + 0x140));
          uVar13 = extraout_x1;
          goto LAB_0055310c;
        }
        lVar5 = native_sub_432764(lVar5);
        lVar10 = *plVar1;
        if ((ulong)*(ushort *)(lVar10 + 0x12a) != 0) {
          uVar8 = 0;
          piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
          do {
            if (*(long *)(piVar12 + -2) == lVar5) {
              puVar6 = (undefined8 *)(lVar10 + (long)(int)(*piVar12 + (uint)uVar3) * 0x10 + 0x138);
              goto LAB_00553028;
            }
            uVar8 = uVar8 + 1;
            piVar12 = piVar12 + 4;
          } while (uVar8 < *(ushort *)(lVar10 + 0x12a));
        }
        puVar6 = (undefined8 *)native_sub_3c9b34(plVar1,lVar5,(ulong)uVar3);
LAB_00553028:
        pcVar14 = (code *)*puVar6;
        puVar6 = (undefined8 *)puVar6[1];
      }
      else {
        if ((uVar7 & 1) == 0) {
          uVar13 = *(undefined8 *)(*plVar1 + (ulong)*(ushort *)(lVar5 + 0x48) * 0x10 + 0x140);
        }
        else {
          lVar10 = *plVar1;
          if ((ulong)*(ushort *)(lVar10 + 0x12a) != 0) {
            uVar8 = 0;
            piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
            do {
              if (*(long *)(piVar12 + -2) == *(long *)(lVar5 + 0x18)) {
                lVar10 = lVar10 + (long)(int)(*piVar12 + (uint)*(ushort *)(lVar5 + 0x48)) * 0x10 +
                         0x138;
                goto LAB_00553000;
              }
              uVar8 = uVar8 + 1;
              piVar12 = piVar12 + 4;
            } while (uVar8 < *(ushort *)(lVar10 + 0x12a));
          }
          lVar10 = native_sub_3c9b34(plVar1);
LAB_00553000:
          uVar13 = *(undefined8 *)(lVar10 + 8);
        }
        puVar6 = (undefined8 *)native_sub_4327e8(uVar13,lVar5);
        pcVar14 = (code *)*puVar6;
      }
      (*pcVar14)(plVar1,puVar6);
      uVar13 = extraout_x1_00;
    }
    else if (*(char *)(lVar5 + 0x4a) == '\0') {
      (*pcVar14)(lVar5);
      uVar13 = extraout_x1_01;
    }
    else {
LAB_00553100:
      (*pcVar14)(plVar1,lVar5);
      uVar13 = extraout_x1_02;
    }
LAB_0055310c:
    lVar9 = lVar9 + 1;
    if (lVar9 == lVar15) {
      return;
    }
  } while( true );
}



/* UICamera$$get_currentRay @ 0xc94b78
 * UnityEngine_Ray_o UICamera__get_currentRay (const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UICamera$$get_currentRay
   UnityEngine_Ray_o UICamera__get_currentRay (const MethodInfo* method); */

void native_UICamera__get_currentRay_c94b78(undefined8 *param_1)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  if ((bRam00000000013428b4 & 1) == 0) {
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    native_sub_43273c(&UICamera_TypeInfo_12d6410);
    bRam00000000013428b4 = 1;
  }
  if (((*(byte *)(_UICamera_TypeInfo_12d6410 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar4 = *(undefined8 *)(*(long *)(_UICamera_TypeInfo_12d6410 + 0xb8) + 0xc0);
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec(_UnityEngine_Object_TypeInfo_12d54e0);
  }
  uVar1 = native_UnityEngine_Object__op_Inequality_8d76fc(uVar4,0,0);
  if ((uVar1 & 1) == 0) {
LAB_00c94c9c:
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    return;
  }
  if (((*(byte *)(_UICamera_TypeInfo_12d6410 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  lVar3 = *(long *)(_UICamera_TypeInfo_12d6410 + 0xb8);
  lVar2 = *(long *)(lVar3 + 0xe0);
  if (lVar2 == 0) goto LAB_00c94c9c;
  if (((*(byte *)(_UICamera_TypeInfo_12d6410 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
    native_sub_4327ec();
    lVar3 = *(long *)(_UICamera_TypeInfo_12d6410 + 0xb8);
    lVar2 = *(long *)(lVar3 + 0xe0);
    if (lVar2 == 0) goto LAB_00c94cb8;
  }
  if (*(long *)(lVar3 + 0xc0) != 0) {
    native_UnityEngine_Camera__ScreenPointToRay_8d9368
              (&uStack_48,*(undefined4 *)(lVar2 + 0x14),*(undefined4 *)(lVar2 + 0x18),0,
               *(long *)(lVar3 + 0xc0),0);
    param_1[2] = uStack_38;
    param_1[1] = uStack_40;
    *param_1 = uStack_48;
    return;
  }
LAB_00c94cb8:
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* UICamera$$get_inputHasFocus @ 0xc94cbc
 * bool UICamera__get_inputHasFocus (const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UICamera$$get_inputHasFocus
   bool UICamera__get_inputHasFocus (const MethodInfo* method); */

undefined8 native_UICamera__get_inputHasFocus_c94cbc(void)

{
  ulong uVar1;
  long lVar2;
  undefined8 uVar3;
  
  if ((bRam00000000013428b5 & 1) == 0) {
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    native_sub_43273c(&UICamera_TypeInfo_12d6410);
    bRam00000000013428b5 = 1;
  }
  if (((*(byte *)(_UICamera_TypeInfo_12d6410 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  lVar2 = *(long *)(_UICamera_TypeInfo_12d6410 + 0xb8);
  if (*(char *)(lVar2 + 0xe8) != '\0') {
    if (((*(byte *)(_UICamera_TypeInfo_12d6410 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
      native_sub_4327ec();
      lVar2 = *(long *)(_UICamera_TypeInfo_12d6410 + 0xb8);
    }
    uVar3 = *(undefined8 *)(lVar2 + 0x1e8);
    if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    uVar1 = native_UnityEngine_Object__op_Implicit_8e1b98(uVar3,0);
    if ((uVar1 & 1) != 0) {
      if (((*(byte *)(_UICamera_TypeInfo_12d6410 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
        native_sub_4327ec();
      }
      lVar2 = *(long *)(*(long *)(_UICamera_TypeInfo_12d6410 + 0xb8) + 0x1e8);
      if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
        native_sub_432810();
      }
      uVar1 = native_UnityEngine_GameObject__get_activeInHierarchy_8de728(lVar2,0);
      if ((uVar1 & 1) != 0) {
        return 1;
      }
    }
  }
  return 0;
}



/* UICamera$$get_genericEventHandler @ 0xc94dc4
 * UnityEngine_GameObject_o* UICamera__get_genericEventHandler (const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UICamera$$get_genericEventHandler
   UnityEngine_GameObject_o* UICamera__get_genericEventHandler (const MethodInfo* method); */

undefined8 native_UICamera__get_genericEventHandler_c94dc4(void)

{
  if ((bRam00000000013428b6 & 1) == 0) {
    native_sub_43273c(&UICamera_TypeInfo_12d6410);
    bRam00000000013428b6 = 1;
  }
  if (((*(byte *)(_UICamera_TypeInfo_12d6410 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  return *(undefined8 *)(*(long *)(_UICamera_TypeInfo_12d6410 + 0xb8) + 0xf0);
}



/* UICamera$$set_genericEventHandler @ 0xc94e28
 * void UICamera__set_genericEventHandler (UnityEngine_GameObject_o* value, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UICamera$$set_genericEventHandler
   void UICamera__set_genericEventHandler (UnityEngine_GameObject_o* value, const MethodInfo*
   method); */

void native_UICamera__set_genericEventHandler_c94e28(undefined8 param_1)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  
  if ((bRam00000000013428b7 & 1) == 0) {
    native_sub_43273c(&UICamera_TypeInfo_12d6410);
    bRam00000000013428b7 = 1;
  }
  if (((*(byte *)(_UICamera_TypeInfo_12d6410 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  puVar4 = (undefined8 *)(*(long *)(_UICamera_TypeInfo_12d6410 + 0xb8) + 0xf0);
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



/* UICamera$$get_mouse0 @ 0xc94e94
 * UICamera_MouseOrTouch_o* UICamera__get_mouse0 (const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UICamera$$get_mouse0
   UICamera_MouseOrTouch_o* UICamera__get_mouse0 (const MethodInfo* method); */

undefined8 native_UICamera__get_mouse0_c94e94(void)

{
  undefined8 uVar1;
  long lVar2;
  
  if ((bRam00000000013428b8 & 1) == 0) {
    native_sub_43273c(&UICamera_TypeInfo_12d6410);
    bRam00000000013428b8 = 1;
  }
  if (((*(byte *)(_UICamera_TypeInfo_12d6410 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  lVar2 = *(long *)(*(long *)(_UICamera_TypeInfo_12d6410 + 0xb8) + 0x188);
  if (lVar2 != 0) {
    if (*(int *)(lVar2 + 0x18) != 0) {
      return *(undefined8 *)(lVar2 + 0x20);
    }
    uVar1 = native_sub_43283c();
                    /* WARNING: Subroutine does not return */
    native_sub_4327dc(uVar1,0);
  }
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* UICamera$$get_mouse1 @ 0xc94f18
 * UICamera_MouseOrTouch_o* UICamera__get_mouse1 (const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UICamera$$get_mouse1
   UICamera_MouseOrTouch_o* UICamera__get_mouse1 (const MethodInfo* method); */

undefined8 native_UICamera__get_mouse1_c94f18(void)

{
  undefined8 uVar1;
  long lVar2;
  
  if ((bRam00000000013428b9 & 1) == 0) {
    native_sub_43273c(&UICamera_TypeInfo_12d6410);
    bRam00000000013428b9 = 1;
  }
  if (((*(byte *)(_UICamera_TypeInfo_12d6410 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  lVar2 = *(long *)(*(long *)(_UICamera_TypeInfo_12d6410 + 0xb8) + 0x188);
  if (lVar2 != 0) {
    if (1 < *(uint *)(lVar2 + 0x18)) {
      return *(undefined8 *)(lVar2 + 0x28);
    }
    uVar1 = native_sub_43283c();
                    /* WARNING: Subroutine does not return */
    native_sub_4327dc(uVar1,0);
  }
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* UICamera$$get_mouse2 @ 0xc94fa0
 * UICamera_MouseOrTouch_o* UICamera__get_mouse2 (const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UICamera$$get_mouse2
   UICamera_MouseOrTouch_o* UICamera__get_mouse2 (const MethodInfo* method); */

undefined8 native_UICamera__get_mouse2_c94fa0(void)

{
  undefined8 uVar1;
  long lVar2;
  
  if ((bRam00000000013428ba & 1) == 0) {
    native_sub_43273c(&UICamera_TypeInfo_12d6410);
    bRam00000000013428ba = 1;
  }
  if (((*(byte *)(_UICamera_TypeInfo_12d6410 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  lVar2 = *(long *)(*(long *)(_UICamera_TypeInfo_12d6410 + 0xb8) + 0x188);
  if (lVar2 != 0) {
    if (2 < *(uint *)(lVar2 + 0x18)) {
      return *(undefined8 *)(lVar2 + 0x30);
    }
    uVar1 = native_sub_43283c();
                    /* WARNING: Subroutine does not return */
    native_sub_4327dc(uVar1,0);
  }
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* UICamera$$get_handlesEvents @ 0xc95028
 * bool UICamera__get_handlesEvents (UICamera_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UICamera$$get_handlesEvents
   bool UICamera__get_handlesEvents (UICamera_o* __this, const MethodInfo* method); */

byte native_UICamera__get_handlesEvents_c95028(long param_1)

{
  byte bVar1;
  long lVar2;
  
  if ((bRam00000000013428bb & 1) == 0) {
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    native_sub_43273c(&UICamera_TypeInfo_12d6410);
    bRam00000000013428bb = 1;
  }
  if (((*(byte *)(_UICamera_TypeInfo_12d6410 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  lVar2 = native_UICamera__get_eventHandler_c950c8();
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec(_UnityEngine_Object_TypeInfo_12d54e0);
  }
  if ((bRam0000000001341083 & 1) == 0) {
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0,param_1,0);
    bRam0000000001341083 = 1;
  }
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  if ((bRam0000000001341033 & 1) == 0) {
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    bRam0000000001341033 = 1;
  }
  if (lVar2 == 0 && param_1 == 0) {
    bVar1 = 1;
  }
  else {
    if (param_1 == 0) {
      param_1 = lVar2;
      if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
        native_sub_4327ec();
      }
    }
    else {
      if (lVar2 != 0) {
        bVar1 = lVar2 == param_1;
        goto code_r0x008e9b5c;
      }
      if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
        native_sub_4327ec();
      }
    }
    bVar1 = native_UnityEngine_Object__IsNativeObjectAlive_8e9b70(param_1);
    bVar1 = bVar1 ^ 1;
  }
code_r0x008e9b5c:
  return bVar1 & 1;
}



/* UICamera$$get_cachedCamera @ 0xc95254
 * UnityEngine_Camera_o* UICamera__get_cachedCamera (UICamera_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UICamera$$get_cachedCamera
   UnityEngine_Camera_o* UICamera__get_cachedCamera (UICamera_o* __this, const MethodInfo* method);
    */

undefined8 native_UICamera__get_cachedCamera_c95254(long param_1)

{
  ulong uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  
  if ((bRam00000000013428bc & 1) == 0) {
    native_sub_43273c(&Method_UnityEngine_Component_GetComponent_Camera____12e29a8);
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    bRam00000000013428bc = 1;
  }
  puVar2 = (undefined8 *)(param_1 + 0x90);
  uVar3 = *puVar2;
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar1 = native_UnityEngine_Object__op_Equality_8e9a3c(uVar3,0,0);
  if ((uVar1 & 1) != 0) {
    uVar3 = native_UnityEngine_Component__GetComponent_ActiveAnimation__49daec
                      (param_1,_Method_UnityEngine_Component_GetComponent_Camera____12e29a8);
    *(undefined8 *)(param_1 + 0x90) = uVar3;
    native_sub_4326e0(puVar2,uVar3);
  }
  return *puVar2;
}



/* UICamera$$get_tooltipObject @ 0xc95308
 * UnityEngine_GameObject_o* UICamera__get_tooltipObject (const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UICamera$$get_tooltipObject
   UnityEngine_GameObject_o* UICamera__get_tooltipObject (const MethodInfo* method); */

undefined8 native_UICamera__get_tooltipObject_c95308(void)

{
  if ((bRam00000000013428bd & 1) == 0) {
    native_sub_43273c(&UICamera_TypeInfo_12d6410);
    bRam00000000013428bd = 1;
  }
  if (((*(byte *)(_UICamera_TypeInfo_12d6410 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  return *(undefined8 *)(*(long *)(_UICamera_TypeInfo_12d6410 + 0xb8) + 0x1b0);
}



/* UICamera$$set_tooltipObject @ 0xc9536c
 * void UICamera__set_tooltipObject (UnityEngine_GameObject_o* value, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UICamera$$set_tooltipObject
   void UICamera__set_tooltipObject (UnityEngine_GameObject_o* value, const MethodInfo* method); */

undefined4 native_UICamera__set_tooltipObject_c9536c(undefined8 param_1)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined1 auStack_38 [4];
  undefined1 auStack_34 [4];
  
  if ((bRam00000000013428be & 1) == 0) {
    native_sub_43273c(&UICamera_TypeInfo_12d6410);
    bRam00000000013428be = 1;
  }
  if (((*(byte *)(_UICamera_TypeInfo_12d6410 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  if ((bRam00000000013428ed & 1) == 0) {
    native_sub_43273c(&bool_TypeInfo_12d3bd0);
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    native_sub_43273c(&UICamera_TypeInfo_12d6410);
    native_sub_43273c(&StringLiteral_OnTooltip_12f02d8);
    bRam00000000013428ed = 1;
  }
  if (((*(byte *)(_UICamera_TypeInfo_12d6410 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar5 = *(undefined8 *)(*(long *)(_UICamera_TypeInfo_12d6410 + 0xb8) + 0x1b0);
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec(_UnityEngine_Object_TypeInfo_12d54e0);
  }
  uVar1 = native_UnityEngine_Object__op_Inequality_8d76fc(uVar5,param_1,0);
  if ((uVar1 & 1) == 0) {
    uVar4 = 0;
  }
  else {
    if (((*(byte *)(_UICamera_TypeInfo_12d6410 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    uVar5 = *(undefined8 *)(*(long *)(_UICamera_TypeInfo_12d6410 + 0xb8) + 0x1b0);
    if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
      native_sub_4327ec(_UnityEngine_Object_TypeInfo_12d54e0);
    }
    uVar1 = native_UnityEngine_Object__op_Inequality_8d76fc(uVar5,0,0);
    if ((uVar1 & 1) != 0) {
      if (((*(byte *)(_UICamera_TypeInfo_12d6410 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
        native_sub_4327ec();
      }
      lVar3 = *(long *)(_UICamera_TypeInfo_12d6410 + 0xb8);
      lVar2 = *(long *)(lVar3 + 0x178);
      if (lVar2 != 0) {
        if (((*(byte *)(_UICamera_TypeInfo_12d6410 + 0x133) >> 2 & 1) != 0) &&
           (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
          native_sub_4327ec();
          lVar3 = *(long *)(_UICamera_TypeInfo_12d6410 + 0xb8);
          lVar2 = *(long *)(lVar3 + 0x178);
          if (lVar2 == 0) goto LAB_00c956e4;
        }
        native_UICamera_BoolDelegate__Invoke_550030(lVar2,*(undefined8 *)(lVar3 + 0x1b0),0,0);
      }
      if (((*(byte *)(_UICamera_TypeInfo_12d6410 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
        native_sub_4327ec();
      }
      uVar6 = *(undefined8 *)(*(long *)(_UICamera_TypeInfo_12d6410 + 0xb8) + 0x1b0);
      auStack_34[0] = 0;
      uVar5 = native_sub_4327fc(_bool_TypeInfo_12d3bd0,auStack_34);
      native_UICamera__Notify_c96a08(uVar6,_StringLiteral_OnTooltip_12f02d8,uVar5);
    }
    if (((*(byte *)(_UICamera_TypeInfo_12d6410 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    lVar2 = *(long *)(_UICamera_TypeInfo_12d6410 + 0xb8);
    *(undefined8 *)(lVar2 + 0x1b0) = param_1;
    native_sub_4326e0(lVar2 + 0x1b0,param_1);
    lVar2 = _UICamera_TypeInfo_12d6410;
    *(undefined4 *)(*(long *)(_UICamera_TypeInfo_12d6410 + 0xb8) + 0x1b8) = 0;
    uVar5 = *(undefined8 *)(*(long *)(lVar2 + 0xb8) + 0x1b0);
    if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    uVar1 = native_UnityEngine_Object__op_Inequality_8d76fc(uVar5,0,0);
    if ((uVar1 & 1) == 0) {
      uVar4 = 1;
    }
    else {
      if (((*(byte *)(_UICamera_TypeInfo_12d6410 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
        native_sub_4327ec();
      }
      lVar3 = *(long *)(_UICamera_TypeInfo_12d6410 + 0xb8);
      lVar2 = *(long *)(lVar3 + 0x178);
      if (lVar2 != 0) {
        if (((*(byte *)(_UICamera_TypeInfo_12d6410 + 0x133) >> 2 & 1) != 0) &&
           (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
          native_sub_4327ec();
          lVar3 = *(long *)(_UICamera_TypeInfo_12d6410 + 0xb8);
          lVar2 = *(long *)(lVar3 + 0x178);
          if (lVar2 == 0) {
LAB_00c956e4:
                    /* WARNING: Subroutine does not return */
            native_sub_432810();
          }
        }
        native_UICamera_BoolDelegate__Invoke_550030(lVar2,*(undefined8 *)(lVar3 + 0x1b0),1,0);
      }
      if (((*(byte *)(_UICamera_TypeInfo_12d6410 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
        native_sub_4327ec();
      }
      uVar4 = 1;
      uVar6 = *(undefined8 *)(*(long *)(_UICamera_TypeInfo_12d6410 + 0xb8) + 0x1b0);
      auStack_38[0] = 1;
      uVar5 = native_sub_4327fc(_bool_TypeInfo_12d3bd0,auStack_38);
      native_UICamera__Notify_c96a08(uVar6,_StringLiteral_OnTooltip_12f02d8,uVar5);
    }
  }
  return uVar4;
}



/* UICamera$$IsPartOfUI @ 0xc956e8
 * bool UICamera__IsPartOfUI (UnityEngine_GameObject_o* go, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UICamera$$IsPartOfUI
   bool UICamera__IsPartOfUI (UnityEngine_GameObject_o* go, const MethodInfo* method); */

uint native_UICamera__IsPartOfUI_c956e8(undefined8 param_1)

{
  uint uVar1;
  ulong uVar2;
  undefined8 uVar3;
  
  if ((bRam00000000013428bf & 1) == 0) {
    native_sub_43273c(&Method_NGUITools_FindInParents_UIRoot____12e5780);
    native_sub_43273c(&NGUITools_TypeInfo_12d53c8);
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    native_sub_43273c(&UICamera_TypeInfo_12d6410);
    bRam00000000013428bf = 1;
  }
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar2 = native_UnityEngine_Object__op_Equality_8e9a3c(param_1,0,0);
  if ((uVar2 & 1) == 0) {
    if (((*(byte *)(_UICamera_TypeInfo_12d6410 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    uVar3 = *(undefined8 *)(*(long *)(_UICamera_TypeInfo_12d6410 + 0xb8) + 0xf8);
    if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
      native_sub_4327ec(_UnityEngine_Object_TypeInfo_12d54e0);
    }
    uVar2 = native_UnityEngine_Object__op_Equality_8e9a3c(param_1,uVar3,0);
    if ((uVar2 & 1) == 0) {
      if (((*(byte *)(_NGUITools_TypeInfo_12d53c8 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_NGUITools_TypeInfo_12d53c8 + 0xe0) == 0)) {
        native_sub_4327ec();
      }
      uVar3 = native_NGUITools__FindInParents_object__4a5c04
                        (param_1,_Method_NGUITools_FindInParents_UIRoot____12e5780);
      if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
        native_sub_4327ec(_UnityEngine_Object_TypeInfo_12d54e0);
      }
      if ((bRam0000000001341084 & 1) == 0) {
        native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0,0,0);
        bRam0000000001341084 = 1;
      }
      if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
        native_sub_4327ec();
      }
      uVar1 = native_UnityEngine_Object__CompareBaseObjects_8e9aac(uVar3,0);
      return ~uVar1 & 1;
    }
  }
  return 0;
}



/* UICamera$$get_isOverUI @ 0xc95854
 * bool UICamera__get_isOverUI (const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UICamera$$get_isOverUI
   bool UICamera__get_isOverUI (const MethodInfo* method); */

undefined1 native_UICamera__get_isOverUI_c95854(void)

{
  ushort uVar1;
  byte bVar2;
  int iVar3;
  ulong uVar4;
  long lVar5;
  long *plVar6;
  int *piVar7;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
  undefined8 *puVar11;
  
  if ((bRam00000000013428c0 & 1) == 0) {
    native_sub_43273c(&
                      Method_System_Collections_Generic_List_UICamera_MouseOrTouch__get_Count___12dd960
                     );
    native_sub_43273c(&
                      Method_System_Collections_Generic_List_UICamera_MouseOrTouch__get_Item___12dd968
                     );
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    native_sub_43273c(&UICamera_TypeInfo_12d6410);
    bRam00000000013428c0 = 1;
  }
  iVar3 = native_UnityEngine_Time__get_frameCount_770964(0);
  if (((*(byte *)(_UICamera_TypeInfo_12d6410 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
    native_sub_4327ec(_UICamera_TypeInfo_12d6410);
  }
  lVar5 = _UICamera_TypeInfo_12d6410;
  if (*(int *)(*(long *)(_UICamera_TypeInfo_12d6410 + 0xb8) + 0x1d0) != iVar3) {
    piVar7 = (int *)(*(long *)(_UICamera_TypeInfo_12d6410 + 0xb8) + 0x1d0);
    if (((*(byte *)(_UICamera_TypeInfo_12d6410 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
      native_sub_4327ec(_UICamera_TypeInfo_12d6410);
      piVar7 = (int *)(*(long *)(_UICamera_TypeInfo_12d6410 + 0xb8) + 0x1d0);
    }
    lVar5 = _UICamera_TypeInfo_12d6410;
    *piVar7 = iVar3;
    lVar9 = *(long *)(lVar5 + 0xb8);
    lVar8 = *(long *)(lVar9 + 0xe0);
    if (lVar8 != 0) {
      if (((*(ushort *)(lVar5 + 0x132) >> 10 & 1) != 0) && (*(int *)(lVar5 + 0xe0) == 0)) {
        native_sub_4327ec(lVar5);
        lVar8 = *(long *)(*(long *)(_UICamera_TypeInfo_12d6410 + 0xb8) + 0xe0);
        if (lVar8 == 0) goto LAB_00c95c18;
      }
      uVar10 = *(undefined8 *)(lVar8 + 0x50);
      if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
        native_sub_4327ec();
      }
      uVar4 = native_UnityEngine_Object__op_Inequality_8d76fc(uVar10,0,0);
      if ((uVar4 & 1) == 0) {
        if (((*(ushort *)(_UICamera_TypeInfo_12d6410 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
          native_sub_4327ec(_UICamera_TypeInfo_12d6410);
        }
        lVar5 = *(long *)(*(long *)(_UICamera_TypeInfo_12d6410 + 0xb8) + 0xe0);
        if (lVar5 == 0) goto LAB_00c95c18;
        uVar10 = *(undefined8 *)(lVar5 + 0x48);
      }
      else {
        if (((*(ushort *)(_UICamera_TypeInfo_12d6410 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
          native_sub_4327ec(_UICamera_TypeInfo_12d6410);
        }
        lVar5 = *(long *)(*(long *)(_UICamera_TypeInfo_12d6410 + 0xb8) + 0xe0);
        if (lVar5 == 0) goto LAB_00c95c18;
        uVar10 = *(undefined8 *)(lVar5 + 0x50);
      }
      bVar2 = native_UICamera__IsPartOfUI_c956e8(uVar10);
      bVar2 = bVar2 & 1;
      plVar6 = (long *)(_UICamera_TypeInfo_12d6410 + 0xb8);
      lVar5 = *plVar6;
      goto LAB_00c95bf8;
    }
    if (((*(ushort *)(lVar5 + 0x132) >> 10 & 1) != 0) && (*(int *)(lVar5 + 0xe0) == 0)) {
      native_sub_4327ec(lVar5);
      lVar9 = *(long *)(_UICamera_TypeInfo_12d6410 + 0xb8);
      lVar5 = _UICamera_TypeInfo_12d6410;
    }
    if (*(long *)(lVar9 + 0x198) == 0) {
LAB_00c95c18:
                    /* WARNING: Subroutine does not return */
      native_sub_432810();
    }
    iVar3 = *(int *)(*(long *)(lVar9 + 0x198) + 0x18);
    if (0 < iVar3) {
      lVar8 = 0;
      do {
        if (((*(byte *)(lVar5 + 0x133) >> 2 & 1) != 0) && (*(int *)(lVar5 + 0xe0) == 0)) {
          native_sub_4327ec(lVar5);
          lVar5 = _UICamera_TypeInfo_12d6410;
        }
        lVar5 = *(long *)(*(long *)(lVar5 + 0xb8) + 0x198);
        if (lVar5 == 0) goto LAB_00c95c18;
        if (*(uint *)(lVar5 + 0x18) <= (uint)lVar8) {
          native_System_ThrowHelper__ThrowArgumentOutOfRangeException_9fe0f4(0);
        }
        lVar5 = *(long *)(*(long *)(lVar5 + 0x10) + lVar8 * 8 + 0x20);
        if (lVar5 == 0) goto LAB_00c95c18;
        uVar4 = native_UICamera__IsPartOfUI_c956e8(*(undefined8 *)(lVar5 + 0x50));
        if ((uVar4 & 1) != 0) goto LAB_00c95bd0;
        lVar8 = lVar8 + 1;
        lVar5 = _UICamera_TypeInfo_12d6410;
      } while ((int)lVar8 < iVar3);
    }
    lVar8 = 0;
    uVar1 = (ushort)(*(byte *)(lVar5 + 0x133) >> 2);
    do {
      if (((uVar1 & 1) != 0) && (*(int *)(lVar5 + 0xe0) == 0)) {
        native_sub_4327ec(lVar5);
        lVar5 = _UICamera_TypeInfo_12d6410;
      }
      lVar5 = *(long *)(*(long *)(lVar5 + 0xb8) + 0x188);
      if (lVar5 == 0) goto LAB_00c95c18;
      if (*(uint *)(lVar5 + 0x18) <= (uint)lVar8) {
        uVar10 = native_sub_43283c();
                    /* WARNING: Subroutine does not return */
        native_sub_4327dc(uVar10,0);
      }
      lVar5 = *(long *)(lVar5 + lVar8 * 8 + 0x20);
      if (lVar5 == 0) goto LAB_00c95c18;
      puVar11 = (undefined8 *)(lVar5 + 0x50);
      uVar10 = *puVar11;
      if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
        native_sub_4327ec();
      }
      uVar4 = native_UnityEngine_Object__op_Inequality_8d76fc(uVar10,0,0);
      if ((uVar4 & 1) == 0) {
        if ((uint)lVar8 == 0) {
          puVar11 = (undefined8 *)(lVar5 + 0x48);
          goto LAB_00c95b10;
        }
        uVar10 = 0;
      }
      else {
LAB_00c95b10:
        uVar10 = *puVar11;
      }
      if (((*(byte *)(_UICamera_TypeInfo_12d6410 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
        native_sub_4327ec();
      }
      uVar4 = native_UICamera__IsPartOfUI_c956e8(uVar10);
      if ((uVar4 & 1) != 0) goto LAB_00c95bd0;
      lVar8 = lVar8 + 1;
      uVar1 = *(ushort *)(_UICamera_TypeInfo_12d6410 + 0x132) >> 10;
      lVar5 = _UICamera_TypeInfo_12d6410;
    } while ((int)lVar8 - 1U < 2);
    if (((*(ushort *)(_UICamera_TypeInfo_12d6410 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
      native_sub_4327ec(_UICamera_TypeInfo_12d6410);
    }
    lVar5 = *(long *)(*(long *)(_UICamera_TypeInfo_12d6410 + 0xb8) + 400);
    if (lVar5 == 0) goto LAB_00c95c18;
    bVar2 = native_UICamera__IsPartOfUI_c956e8(*(undefined8 *)(lVar5 + 0x50));
    lVar5 = _UICamera_TypeInfo_12d6410;
    *(byte *)(*(long *)(_UICamera_TypeInfo_12d6410 + 0xb8) + 0x1d4) = bVar2 & 1;
  }
  if (((*(byte *)(lVar5 + 0x133) >> 2 & 1) != 0) && (*(int *)(lVar5 + 0xe0) == 0)) {
    native_sub_4327ec(lVar5);
    lVar5 = _UICamera_TypeInfo_12d6410;
  }
  plVar6 = (long *)(lVar5 + 0xb8);
  goto LAB_00c95bfc;
LAB_00c95bd0:
  if (((*(byte *)(_UICamera_TypeInfo_12d6410 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
    native_sub_4327ec(_UICamera_TypeInfo_12d6410);
  }
  plVar6 = (long *)(_UICamera_TypeInfo_12d6410 + 0xb8);
  lVar5 = *plVar6;
  bVar2 = 1;
LAB_00c95bf8:
  *(byte *)(lVar5 + 0x1d4) = bVar2;
LAB_00c95bfc:
  return *(undefined1 *)(*plVar6 + 0x1d4);
}



/* UICamera$$get_uiHasFocus @ 0xc95c28
 * bool UICamera__get_uiHasFocus (const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UICamera$$get_uiHasFocus
   bool UICamera__get_uiHasFocus (const MethodInfo* method); */

undefined1 native_UICamera__get_uiHasFocus_c95c28(void)

{
  ushort uVar1;
  byte bVar2;
  int iVar3;
  ulong uVar4;
  long *plVar5;
  ushort uVar6;
  int *piVar7;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
  
  if ((bRam00000000013428c1 & 1) == 0) {
    native_sub_43273c(&
                      Method_System_Collections_Generic_List_UICamera_MouseOrTouch__get_Count___12dd960
                     );
    native_sub_43273c(&
                      Method_System_Collections_Generic_List_UICamera_MouseOrTouch__get_Item___12dd968
                     );
    native_sub_43273c(&UICamera_TypeInfo_12d6410);
    bRam00000000013428c1 = 1;
  }
  iVar3 = native_UnityEngine_Time__get_frameCount_770964(0);
  if (((*(byte *)(_UICamera_TypeInfo_12d6410 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
    native_sub_4327ec(_UICamera_TypeInfo_12d6410);
  }
  lVar8 = _UICamera_TypeInfo_12d6410;
  if (*(int *)(*(long *)(_UICamera_TypeInfo_12d6410 + 0xb8) + 0x1c8) == iVar3) {
LAB_00c95cb4:
    if (((*(byte *)(lVar8 + 0x133) >> 2 & 1) != 0) && (*(int *)(lVar8 + 0xe0) == 0)) {
      native_sub_4327ec(lVar8);
      lVar8 = _UICamera_TypeInfo_12d6410;
    }
    plVar5 = (long *)(lVar8 + 0xb8);
    goto LAB_00c95f70;
  }
  piVar7 = (int *)(*(long *)(_UICamera_TypeInfo_12d6410 + 0xb8) + 0x1c8);
  if (((*(byte *)(_UICamera_TypeInfo_12d6410 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
    native_sub_4327ec(_UICamera_TypeInfo_12d6410);
    piVar7 = (int *)(*(long *)(_UICamera_TypeInfo_12d6410 + 0xb8) + 0x1c8);
  }
  *piVar7 = iVar3;
  uVar4 = native_UICamera__get_inputHasFocus_c94cbc();
  uVar1 = *(ushort *)(_UICamera_TypeInfo_12d6410 + 0x132);
  uVar6 = uVar1 & 0x400;
  if ((uVar4 & 1) == 0) {
    if (((uVar1 & 0x400) != 0) && (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
      native_sub_4327ec(_UICamera_TypeInfo_12d6410);
      uVar6 = *(ushort *)(_UICamera_TypeInfo_12d6410 + 0x132) & 0x400;
    }
    lVar9 = *(long *)(_UICamera_TypeInfo_12d6410 + 0xb8);
    lVar8 = *(long *)(lVar9 + 0xe0);
    if (lVar8 == 0) {
      if ((uVar6 != 0) && (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
        native_sub_4327ec(_UICamera_TypeInfo_12d6410);
        lVar9 = *(long *)(_UICamera_TypeInfo_12d6410 + 0xb8);
      }
      if (*(long *)(lVar9 + 0x198) == 0) {
LAB_00c95f88:
                    /* WARNING: Subroutine does not return */
        native_sub_432810();
      }
      iVar3 = *(int *)(*(long *)(lVar9 + 0x198) + 0x18);
      bVar2 = *(byte *)(_UICamera_TypeInfo_12d6410 + 0x133) >> 2 & 1;
      if (0 < iVar3) {
        lVar8 = 0;
        do {
          if ((bVar2 != 0) && (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
            native_sub_4327ec(_UICamera_TypeInfo_12d6410);
          }
          lVar9 = *(long *)(*(long *)(_UICamera_TypeInfo_12d6410 + 0xb8) + 0x198);
          if (lVar9 == 0) goto LAB_00c95f88;
          if (*(uint *)(lVar9 + 0x18) <= (uint)lVar8) {
            native_System_ThrowHelper__ThrowArgumentOutOfRangeException_9fe0f4(0);
          }
          lVar9 = *(long *)(*(long *)(lVar9 + 0x10) + lVar8 * 8 + 0x20);
          if (lVar9 == 0) goto LAB_00c95f88;
          uVar4 = native_UICamera__IsPartOfUI_c956e8(*(undefined8 *)(lVar9 + 0x50));
          if ((uVar4 & 1) != 0) goto LAB_00c95f44;
          lVar8 = lVar8 + 1;
          bVar2 = *(byte *)(_UICamera_TypeInfo_12d6410 + 0x133) >> 2 & 1;
        } while ((int)lVar8 < iVar3);
      }
      if ((bVar2 != 0) && (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
        native_sub_4327ec(_UICamera_TypeInfo_12d6410);
      }
      lVar8 = *(long *)(*(long *)(_UICamera_TypeInfo_12d6410 + 0xb8) + 0x188);
      if (lVar8 == 0) goto LAB_00c95f88;
      if (*(int *)(lVar8 + 0x18) == 0) {
LAB_00c95f8c:
        uVar10 = native_sub_43283c();
                    /* WARNING: Subroutine does not return */
        native_sub_4327dc(uVar10,0);
      }
      lVar8 = *(long *)(lVar8 + 0x20);
      if (lVar8 == 0) goto LAB_00c95f88;
      uVar4 = native_UICamera__IsPartOfUI_c956e8(*(undefined8 *)(lVar8 + 0x50));
      if ((uVar4 & 1) == 0) {
        uVar10 = *(undefined8 *)(lVar8 + 0x48);
        if (((*(byte *)(_UICamera_TypeInfo_12d6410 + 0x133) >> 2 & 1) != 0) &&
           (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
          native_sub_4327ec();
        }
        uVar4 = native_UICamera__IsPartOfUI_c956e8(uVar10);
        if ((uVar4 & 1) == 0) {
          lVar8 = 0;
          uVar6 = (ushort)(*(byte *)(_UICamera_TypeInfo_12d6410 + 0x133) >> 2);
          do {
            if (((uVar6 & 1) != 0) && (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
              native_sub_4327ec();
            }
            lVar9 = *(long *)(*(long *)(_UICamera_TypeInfo_12d6410 + 0xb8) + 0x188);
            if (lVar9 == 0) goto LAB_00c95f88;
            if (*(uint *)(lVar9 + 0x18) <= (int)lVar8 + 1U) goto LAB_00c95f8c;
            lVar9 = *(long *)(lVar9 + lVar8 * 8 + 0x28);
            if (lVar9 == 0) goto LAB_00c95f88;
            uVar4 = native_UICamera__IsPartOfUI_c956e8(*(undefined8 *)(lVar9 + 0x50));
            if ((uVar4 & 1) != 0) goto LAB_00c95f44;
            lVar8 = lVar8 + 1;
            uVar6 = *(ushort *)(_UICamera_TypeInfo_12d6410 + 0x132) >> 10;
          } while ((uint)lVar8 < 2);
          if (((*(ushort *)(_UICamera_TypeInfo_12d6410 + 0x132) >> 10 & 1) != 0) &&
             (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
            native_sub_4327ec();
          }
          lVar8 = *(long *)(*(long *)(_UICamera_TypeInfo_12d6410 + 0xb8) + 400);
          if (lVar8 == 0) goto LAB_00c95f88;
          bVar2 = native_UICamera__IsPartOfUI_c956e8(*(undefined8 *)(lVar8 + 0x50));
          lVar8 = _UICamera_TypeInfo_12d6410;
          *(byte *)(*(long *)(_UICamera_TypeInfo_12d6410 + 0xb8) + 0x1cc) = bVar2 & 1;
          goto LAB_00c95cb4;
        }
      }
LAB_00c95f44:
      if ((*(byte *)(_UICamera_TypeInfo_12d6410 + 0x133) >> 2 & 1) != 0) goto LAB_00c95f50;
      goto LAB_00c95f64;
    }
    if ((uVar6 != 0) && (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
      native_sub_4327ec(_UICamera_TypeInfo_12d6410);
      lVar8 = *(long *)(*(long *)(_UICamera_TypeInfo_12d6410 + 0xb8) + 0xe0);
      if (lVar8 == 0) goto LAB_00c95f88;
    }
    bVar2 = native_UICamera_MouseOrTouch__get_isOverUI_5522fc(lVar8,0);
    bVar2 = bVar2 & 1;
    plVar5 = (long *)(_UICamera_TypeInfo_12d6410 + 0xb8);
    lVar8 = *plVar5;
  }
  else {
    if ((uVar1 & 0x400) != 0) {
LAB_00c95f50:
      if (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0) {
        native_sub_4327ec(_UICamera_TypeInfo_12d6410);
      }
    }
LAB_00c95f64:
    plVar5 = (long *)(_UICamera_TypeInfo_12d6410 + 0xb8);
    lVar8 = *plVar5;
    bVar2 = 1;
  }
  *(byte *)(lVar8 + 0x1cc) = bVar2;
LAB_00c95f70:
  return *(undefined1 *)(*plVar5 + 0x1cc);
}



/* UICamera$$get_interactingWithUI @ 0xc95f98
 * bool UICamera__get_interactingWithUI (const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UICamera$$get_interactingWithUI
   bool UICamera__get_interactingWithUI (const MethodInfo* method); */

undefined1 native_UICamera__get_interactingWithUI_c95f98(void)

{
  ushort uVar1;
  byte bVar2;
  int iVar3;
  ulong uVar4;
  undefined8 uVar5;
  long *plVar6;
  int *piVar7;
  long lVar8;
  long lVar9;
  
  if ((bRam00000000013428c2 & 1) == 0) {
    native_sub_43273c(&
                      Method_System_Collections_Generic_List_UICamera_MouseOrTouch__get_Count___12dd960
                     );
    native_sub_43273c(&
                      Method_System_Collections_Generic_List_UICamera_MouseOrTouch__get_Item___12dd968
                     );
    native_sub_43273c(&UICamera_TypeInfo_12d6410);
    bRam00000000013428c2 = 1;
  }
  iVar3 = native_UnityEngine_Time__get_frameCount_770964(0);
  if (((*(byte *)(_UICamera_TypeInfo_12d6410 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
    native_sub_4327ec(_UICamera_TypeInfo_12d6410);
  }
  lVar8 = _UICamera_TypeInfo_12d6410;
  if (*(int *)(*(long *)(_UICamera_TypeInfo_12d6410 + 0xb8) + 0x1c0) != iVar3) {
    piVar7 = (int *)(*(long *)(_UICamera_TypeInfo_12d6410 + 0xb8) + 0x1c0);
    if (((*(byte *)(_UICamera_TypeInfo_12d6410 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
      native_sub_4327ec(_UICamera_TypeInfo_12d6410);
      piVar7 = (int *)(*(long *)(_UICamera_TypeInfo_12d6410 + 0xb8) + 0x1c0);
    }
    *piVar7 = iVar3;
    uVar4 = native_UICamera__get_inputHasFocus_c94cbc();
    if ((uVar4 & 1) != 0) {
      if ((*(ushort *)(_UICamera_TypeInfo_12d6410 + 0x132) >> 10 & 1) != 0) goto LAB_00c961e4;
      goto LAB_00c961f8;
    }
    if (((*(ushort *)(_UICamera_TypeInfo_12d6410 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
      native_sub_4327ec(_UICamera_TypeInfo_12d6410);
    }
    lVar8 = *(long *)(*(long *)(_UICamera_TypeInfo_12d6410 + 0xb8) + 0x198);
    if (lVar8 == 0) {
LAB_00c9621c:
                    /* WARNING: Subroutine does not return */
      native_sub_432810();
    }
    iVar3 = *(int *)(lVar8 + 0x18);
    if (0 < iVar3) {
      lVar8 = 0;
      do {
        if (((*(byte *)(_UICamera_TypeInfo_12d6410 + 0x133) >> 2 & 1) != 0) &&
           (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
          native_sub_4327ec(_UICamera_TypeInfo_12d6410);
        }
        lVar9 = *(long *)(*(long *)(_UICamera_TypeInfo_12d6410 + 0xb8) + 0x198);
        if (lVar9 == 0) goto LAB_00c9621c;
        if (*(uint *)(lVar9 + 0x18) <= (uint)lVar8) {
          native_System_ThrowHelper__ThrowArgumentOutOfRangeException_9fe0f4(0);
        }
        lVar9 = *(long *)(*(long *)(lVar9 + 0x10) + lVar8 * 8 + 0x20);
        if (lVar9 == 0) goto LAB_00c9621c;
        uVar4 = native_UICamera__IsPartOfUI_c956e8(*(undefined8 *)(lVar9 + 0x50));
        if ((uVar4 & 1) != 0) goto LAB_00c961d8;
        lVar8 = lVar8 + 1;
      } while ((int)lVar8 < iVar3);
    }
    lVar8 = 0;
    uVar1 = (ushort)(*(byte *)(_UICamera_TypeInfo_12d6410 + 0x133) >> 2);
    do {
      if (((uVar1 & 1) != 0) && (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
        native_sub_4327ec(_UICamera_TypeInfo_12d6410);
      }
      lVar9 = *(long *)(*(long *)(_UICamera_TypeInfo_12d6410 + 0xb8) + 0x188);
      if (lVar9 == 0) goto LAB_00c9621c;
      if (*(uint *)(lVar9 + 0x18) <= (uint)lVar8) {
        uVar5 = native_sub_43283c();
                    /* WARNING: Subroutine does not return */
        native_sub_4327dc(uVar5,0);
      }
      lVar9 = *(long *)(lVar9 + lVar8 * 8 + 0x20);
      if (lVar9 == 0) goto LAB_00c9621c;
      uVar4 = native_UICamera__IsPartOfUI_c956e8(*(undefined8 *)(lVar9 + 0x50));
      if ((uVar4 & 1) != 0) goto LAB_00c961d8;
      lVar8 = lVar8 + 1;
      uVar1 = *(ushort *)(_UICamera_TypeInfo_12d6410 + 0x132) >> 10;
    } while ((int)lVar8 - 1U < 2);
    if (((*(ushort *)(_UICamera_TypeInfo_12d6410 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
      native_sub_4327ec(_UICamera_TypeInfo_12d6410);
    }
    lVar8 = *(long *)(*(long *)(_UICamera_TypeInfo_12d6410 + 0xb8) + 400);
    if (lVar8 == 0) goto LAB_00c9621c;
    bVar2 = native_UICamera__IsPartOfUI_c956e8(*(undefined8 *)(lVar8 + 0x50));
    lVar8 = _UICamera_TypeInfo_12d6410;
    *(byte *)(*(long *)(_UICamera_TypeInfo_12d6410 + 0xb8) + 0x1c4) = bVar2 & 1;
  }
  if (((*(byte *)(lVar8 + 0x133) >> 2 & 1) != 0) && (*(int *)(lVar8 + 0xe0) == 0)) {
    native_sub_4327ec(lVar8);
    lVar8 = _UICamera_TypeInfo_12d6410;
  }
  plVar6 = (long *)(lVar8 + 0xb8);
LAB_00c96204:
  return *(undefined1 *)(*plVar6 + 0x1c4);
LAB_00c961d8:
  if ((*(byte *)(_UICamera_TypeInfo_12d6410 + 0x133) >> 2 & 1) != 0) {
LAB_00c961e4:
    if (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0) {
      native_sub_4327ec(_UICamera_TypeInfo_12d6410);
    }
  }
LAB_00c961f8:
  plVar6 = (long *)(_UICamera_TypeInfo_12d6410 + 0xb8);
  *(undefined1 *)(*plVar6 + 0x1c4) = 1;
  goto LAB_00c96204;
}



/* UICamera$$get_hoveredObject @ 0xc9114c
 * UnityEngine_GameObject_o* UICamera__get_hoveredObject (const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UICamera$$get_hoveredObject
   UnityEngine_GameObject_o* UICamera__get_hoveredObject (const MethodInfo* method); */

undefined8 native_UICamera__get_hoveredObject_c9114c(void)

{
  int iVar1;
  undefined8 uVar2;
  ulong uVar3;
  long lVar4;
  
  if ((bRam00000000013428c3 & 1) == 0) {
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    native_sub_43273c(&UICamera_TypeInfo_12d6410);
    bRam00000000013428c3 = 1;
  }
  if (((*(byte *)(_UICamera_TypeInfo_12d6410 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
    native_sub_4327ec(_UICamera_TypeInfo_12d6410);
  }
  if (*(long *)(*(long *)(_UICamera_TypeInfo_12d6410 + 0xb8) + 0xe0) == 0) {
LAB_00c9123c:
    if (((*(byte *)(_UICamera_TypeInfo_12d6410 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
      native_sub_4327ec(_UICamera_TypeInfo_12d6410);
    }
    uVar2 = *(undefined8 *)(*(long *)(_UICamera_TypeInfo_12d6410 + 0xb8) + 0x1e0);
    if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    uVar3 = native_UnityEngine_Object__op_Implicit_8e1b98(uVar2,0);
    if ((uVar3 & 1) != 0) {
      if (((*(byte *)(_UICamera_TypeInfo_12d6410 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
        native_sub_4327ec();
      }
      lVar4 = *(long *)(*(long *)(_UICamera_TypeInfo_12d6410 + 0xb8) + 0x1e0);
      if (lVar4 == 0) goto LAB_00c9132c;
      uVar3 = native_UnityEngine_GameObject__get_activeInHierarchy_8de728(lVar4,0);
      if ((uVar3 & 1) != 0) {
        if (((*(byte *)(_UICamera_TypeInfo_12d6410 + 0x133) >> 2 & 1) != 0) &&
           (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
          native_sub_4327ec();
        }
        return *(undefined8 *)(*(long *)(_UICamera_TypeInfo_12d6410 + 0xb8) + 0x1e0);
      }
    }
    if (((*(byte *)(_UICamera_TypeInfo_12d6410 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    lVar4 = *(long *)(_UICamera_TypeInfo_12d6410 + 0xb8);
    *(undefined8 *)(lVar4 + 0x1e0) = 0;
    native_sub_4326e0(lVar4 + 0x1e0,0);
    uVar2 = 0;
  }
  else {
    if (((*(byte *)(_UICamera_TypeInfo_12d6410 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
      native_sub_4327ec(_UICamera_TypeInfo_12d6410);
    }
    iVar1 = native_UICamera__get_currentScheme_c92518();
    if (iVar1 == 0) {
      if (((*(byte *)(_UICamera_TypeInfo_12d6410 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
        native_sub_4327ec(_UICamera_TypeInfo_12d6410);
      }
      lVar4 = *(long *)(*(long *)(_UICamera_TypeInfo_12d6410 + 0xb8) + 0xe0);
      if (lVar4 == 0) goto LAB_00c9132c;
      if (*(char *)(lVar4 + 0x76) == '\0') goto LAB_00c9123c;
    }
    if (((*(byte *)(_UICamera_TypeInfo_12d6410 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
      native_sub_4327ec(_UICamera_TypeInfo_12d6410);
    }
    lVar4 = *(long *)(*(long *)(_UICamera_TypeInfo_12d6410 + 0xb8) + 0xe0);
    if (lVar4 == 0) {
LAB_00c9132c:
                    /* WARNING: Subroutine does not return */
      native_sub_432810();
    }
    uVar2 = *(undefined8 *)(lVar4 + 0x48);
  }
  return uVar2;
}



/* UICamera$$set_hoveredObject @ 0xc9622c
 * void UICamera__set_hoveredObject (UnityEngine_GameObject_o* value, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UICamera$$set_hoveredObject
   void UICamera__set_hoveredObject (UnityEngine_GameObject_o* value, const MethodInfo* method); */

void native_UICamera__set_hoveredObject_c9622c(undefined8 param_1)

{
  bool bVar1;
  int iVar2;
  ulong uVar3;
  long *plVar4;
  undefined8 *puVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  long lVar9;
  undefined8 uVar10;
  undefined1 auStack_4c [4];
  undefined1 auStack_48 [4];
  undefined1 auStack_44 [4];
  
  if ((bRam00000000013428c4 & 1) == 0) {
    native_sub_43273c(&bool_TypeInfo_12d3bd0);
    native_sub_43273c(&Method_UnityEngine_GameObject_GetComponent_UIKeyNavigation____12e4ab8);
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    native_sub_43273c(&UICamera_TypeInfo_12d6410);
    native_sub_43273c(&StringLiteral_OnHover_12f0238);
    native_sub_43273c(&StringLiteral_OnSelect_12f02c0);
    bRam00000000013428c4 = 1;
  }
  if (((*(byte *)(_UICamera_TypeInfo_12d6410 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar8 = *(undefined8 *)(*(long *)(_UICamera_TypeInfo_12d6410 + 0xb8) + 0x1e0);
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec(_UnityEngine_Object_TypeInfo_12d54e0);
  }
  uVar3 = native_UnityEngine_Object__op_Equality_8e9a3c(uVar8,param_1,0);
  if ((uVar3 & 1) == 0) {
    if (((*(byte *)(_UICamera_TypeInfo_12d6410 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    plVar4 = (long *)(_UICamera_TypeInfo_12d6410 + 0xb8);
    lVar6 = *plVar4;
    lVar9 = *(long *)(lVar6 + 0xb8);
    if (*(long *)(lVar6 + 0xe0) == 0) {
      if (((*(byte *)(_UICamera_TypeInfo_12d6410 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
        native_sub_4327ec();
        plVar4 = (long *)(_UICamera_TypeInfo_12d6410 + 0xb8);
        lVar6 = *plVar4;
      }
      *(undefined4 *)(lVar6 + 0xd4) = 0xffffff9c;
      lVar6 = *plVar4;
      *(undefined8 *)(lVar6 + 0xe0) = *(undefined8 *)(lVar6 + 400);
      native_sub_4326e0(lVar6 + 0xe0);
      bVar1 = true;
    }
    else {
      bVar1 = false;
    }
    if (((*(byte *)(_UICamera_TypeInfo_12d6410 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    native_UICamera__ShowTooltip_c953cc(0);
    uVar8 = *(undefined8 *)(*(long *)(_UICamera_TypeInfo_12d6410 + 0xb8) + 0x1e8);
    if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    uVar3 = native_UnityEngine_Object__op_Implicit_8e1b98(uVar8,0);
    if ((uVar3 & 1) != 0) {
      if (((*(byte *)(_UICamera_TypeInfo_12d6410 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
        native_sub_4327ec();
      }
      iVar2 = native_UICamera__get_currentScheme_c92518();
      if (iVar2 == 2) {
        if (((*(byte *)(_UICamera_TypeInfo_12d6410 + 0x133) >> 2 & 1) != 0) &&
           (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
          native_sub_4327ec();
        }
        uVar10 = *(undefined8 *)(*(long *)(_UICamera_TypeInfo_12d6410 + 0xb8) + 0x1e8);
        auStack_44[0] = 0;
        uVar8 = native_sub_4327fc(_bool_TypeInfo_12d3bd0,auStack_44);
        native_UICamera__Notify_c96a08(uVar10,_StringLiteral_OnSelect_12f02c0,uVar8);
        lVar7 = *(long *)(_UICamera_TypeInfo_12d6410 + 0xb8);
        lVar6 = *(long *)(lVar7 + 0x120);
        if (lVar6 != 0) {
          if (((*(byte *)(_UICamera_TypeInfo_12d6410 + 0x133) >> 2 & 1) != 0) &&
             (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
            native_sub_4327ec();
            lVar7 = *(long *)(_UICamera_TypeInfo_12d6410 + 0xb8);
            lVar6 = *(long *)(lVar7 + 0x120);
            if (lVar6 == 0) goto LAB_00c969f8;
          }
          native_UICamera_BoolDelegate__Invoke_550030(lVar6,*(undefined8 *)(lVar7 + 0x1e8),0,0);
        }
        if (((*(byte *)(_UICamera_TypeInfo_12d6410 + 0x133) >> 2 & 1) != 0) &&
           (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
          native_sub_4327ec();
        }
        lVar6 = *(long *)(_UICamera_TypeInfo_12d6410 + 0xb8);
        *(undefined8 *)(lVar6 + 0x1e8) = 0;
        native_sub_4326e0(lVar6 + 0x1e8,0);
      }
    }
    if (((*(byte *)(_UICamera_TypeInfo_12d6410 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    uVar8 = *(undefined8 *)(*(long *)(_UICamera_TypeInfo_12d6410 + 0xb8) + 0x1e0);
    if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
      native_sub_4327ec(_UnityEngine_Object_TypeInfo_12d54e0);
    }
    uVar3 = native_UnityEngine_Object__op_Implicit_8e1b98(uVar8,0);
    if ((uVar3 & 1) != 0) {
      if (((*(byte *)(_UICamera_TypeInfo_12d6410 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
        native_sub_4327ec();
      }
      uVar10 = *(undefined8 *)(*(long *)(_UICamera_TypeInfo_12d6410 + 0xb8) + 0x1e0);
      auStack_48[0] = 0;
      uVar8 = native_sub_4327fc(_bool_TypeInfo_12d3bd0,auStack_48);
      native_UICamera__Notify_c96a08(uVar10,_StringLiteral_OnHover_12f0238,uVar8);
      lVar7 = *(long *)(_UICamera_TypeInfo_12d6410 + 0xb8);
      lVar6 = *(long *)(lVar7 + 0x110);
      if (lVar6 != 0) {
        if (((*(byte *)(_UICamera_TypeInfo_12d6410 + 0x133) >> 2 & 1) != 0) &&
           (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
          native_sub_4327ec(_UICamera_TypeInfo_12d6410);
          lVar7 = *(long *)(_UICamera_TypeInfo_12d6410 + 0xb8);
          lVar6 = *(long *)(lVar7 + 0x110);
          if (lVar6 == 0) goto LAB_00c969f8;
        }
        native_UICamera_BoolDelegate__Invoke_550030(lVar6,*(undefined8 *)(lVar7 + 0x1e0),0,0);
      }
    }
    if (((*(byte *)(_UICamera_TypeInfo_12d6410 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    lVar6 = *(long *)(_UICamera_TypeInfo_12d6410 + 0xb8);
    *(undefined8 *)(lVar6 + 0x1e0) = param_1;
    native_sub_4326e0(lVar6 + 0x1e0,param_1);
    lVar6 = _UICamera_TypeInfo_12d6410;
    lVar7 = *(long *)(*(long *)(_UICamera_TypeInfo_12d6410 + 0xb8) + 0xe0);
    if (lVar7 == 0) {
LAB_00c969f8:
                    /* WARNING: Subroutine does not return */
      native_sub_432810();
    }
    *(undefined4 *)(lVar7 + 0x70) = 0;
    uVar8 = *(undefined8 *)(*(long *)(lVar6 + 0xb8) + 0x1e0);
    if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    uVar3 = native_UnityEngine_Object__op_Implicit_8e1b98(uVar8,0);
    if ((uVar3 & 1) != 0) {
      if (((*(byte *)(_UICamera_TypeInfo_12d6410 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
        native_sub_4327ec();
      }
      lVar6 = *(long *)(*(long *)(_UICamera_TypeInfo_12d6410 + 0xb8) + 400);
      if (lVar6 == 0) goto LAB_00c969f8;
      uVar8 = *(undefined8 *)(*(long *)(_UICamera_TypeInfo_12d6410 + 0xb8) + 0x1e0);
      uVar10 = *(undefined8 *)(lVar6 + 0x48);
      if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
        native_sub_4327ec();
      }
      uVar3 = native_UnityEngine_Object__op_Inequality_8d76fc(uVar8,uVar10,0);
      if ((uVar3 & 1) != 0) {
        if (((*(byte *)(_UICamera_TypeInfo_12d6410 + 0x133) >> 2 & 1) != 0) &&
           (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
          native_sub_4327ec();
        }
        lVar6 = *(long *)(*(long *)(_UICamera_TypeInfo_12d6410 + 0xb8) + 0x1e0);
        if (lVar6 == 0) goto LAB_00c969f8;
        uVar8 = native_UnityEngine_GameObject__GetComponent_BE2_BlockSectionHeader_Custom__4a2214
                          (lVar6,
                           _Method_UnityEngine_GameObject_GetComponent_UIKeyNavigation____12e4ab8);
        if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
           (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
          native_sub_4327ec(_UnityEngine_Object_TypeInfo_12d54e0);
        }
        uVar3 = native_UnityEngine_Object__op_Inequality_8d76fc(uVar8,0,0);
        if ((uVar3 & 1) != 0) {
          if (((*(byte *)(_UICamera_TypeInfo_12d6410 + 0x133) >> 2 & 1) != 0) &&
             (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
            native_sub_4327ec();
          }
          lVar6 = *(long *)(*(long *)(_UICamera_TypeInfo_12d6410 + 0xb8) + 400);
          if (lVar6 == 0) goto LAB_00c969f8;
          *(undefined8 *)(lVar6 + 0x48) =
               *(undefined8 *)(*(long *)(_UICamera_TypeInfo_12d6410 + 0xb8) + 0x1e0);
          native_sub_4326e0();
        }
      }
      if (bVar1) {
        if (((*(byte *)(_UICamera_TypeInfo_12d6410 + 0x133) >> 2 & 1) != 0) &&
           (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
          native_sub_4327ec();
        }
        uVar8 = *(undefined8 *)(*(long *)(_UICamera_TypeInfo_12d6410 + 0xb8) + 0x1e0);
        if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
           (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
          native_sub_4327ec(_UnityEngine_Object_TypeInfo_12d54e0);
        }
        uVar3 = native_UnityEngine_Object__op_Inequality_8d76fc(uVar8,0,0);
        if ((uVar3 & 1) == 0) {
          if (((*(ushort *)(_UICamera_TypeInfo_12d6410 + 0x132) >> 10 & 1) != 0) &&
             (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
            native_sub_4327ec(_UICamera_TypeInfo_12d6410);
          }
          if ((**(long **)(_UICamera_TypeInfo_12d6410 + 0xb8) == 0) ||
             (lVar6 = *(long *)(**(long **)(_UICamera_TypeInfo_12d6410 + 0xb8) + 0x10), lVar6 == 0))
          goto LAB_00c969f8;
          if (*(int *)(lVar6 + 0x18) == 0) {
            uVar8 = native_sub_43283c();
                    /* WARNING: Subroutine does not return */
            native_sub_4327dc(uVar8,0);
          }
          lVar6 = *(long *)(lVar6 + 0x20);
        }
        else {
          if (((*(ushort *)(_UICamera_TypeInfo_12d6410 + 0x132) >> 10 & 1) != 0) &&
             (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
            native_sub_4327ec(_UICamera_TypeInfo_12d6410);
          }
          lVar6 = *(long *)(*(long *)(_UICamera_TypeInfo_12d6410 + 0xb8) + 0x1e0);
          if (lVar6 == 0) goto LAB_00c969f8;
          native_UnityEngine_GameObject__get_layer_8de608(lVar6,0);
          lVar6 = native_UICamera__FindCameraForLayer_c96d2c();
        }
        if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
           (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
          native_sub_4327ec();
        }
        uVar3 = native_UnityEngine_Object__op_Inequality_8d76fc(lVar6,0,0);
        if ((uVar3 & 1) != 0) {
          if (((*(byte *)(_UICamera_TypeInfo_12d6410 + 0x133) >> 2 & 1) != 0) &&
             (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
            native_sub_4327ec();
          }
          plVar4 = (long *)(*(long *)(_UICamera_TypeInfo_12d6410 + 0xb8) + 0xb8);
          *plVar4 = lVar6;
          native_sub_4326e0(plVar4,lVar6);
          if (lVar6 == 0) goto LAB_00c969f8;
          uVar8 = native_UICamera__get_cachedCamera_c95254(lVar6);
          puVar5 = (undefined8 *)(*(long *)(_UICamera_TypeInfo_12d6410 + 0xb8) + 0xc0);
          *puVar5 = uVar8;
          native_sub_4326e0(puVar5,uVar8);
        }
      }
      if (((*(byte *)(_UICamera_TypeInfo_12d6410 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
        native_sub_4327ec();
      }
      lVar7 = *(long *)(_UICamera_TypeInfo_12d6410 + 0xb8);
      lVar6 = *(long *)(lVar7 + 0x110);
      if (lVar6 != 0) {
        if (((*(byte *)(_UICamera_TypeInfo_12d6410 + 0x133) >> 2 & 1) != 0) &&
           (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
          native_sub_4327ec();
          lVar7 = *(long *)(_UICamera_TypeInfo_12d6410 + 0xb8);
          lVar6 = *(long *)(lVar7 + 0x110);
          if (lVar6 == 0) goto LAB_00c969f8;
        }
        native_UICamera_BoolDelegate__Invoke_550030(lVar6,*(undefined8 *)(lVar7 + 0x1e0),1,0);
      }
      if (((*(byte *)(_UICamera_TypeInfo_12d6410 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
        native_sub_4327ec();
      }
      uVar10 = *(undefined8 *)(*(long *)(_UICamera_TypeInfo_12d6410 + 0xb8) + 0x1e0);
      auStack_4c[0] = 1;
      uVar8 = native_sub_4327fc(_bool_TypeInfo_12d3bd0,auStack_4c);
      native_UICamera__Notify_c96a08(uVar10,_StringLiteral_OnHover_12f0238,uVar8);
    }
    if (bVar1) {
      if (((*(byte *)(_UICamera_TypeInfo_12d6410 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
        native_sub_4327ec();
      }
      plVar4 = (long *)(*(long *)(_UICamera_TypeInfo_12d6410 + 0xb8) + 0xb8);
      *plVar4 = lVar9;
      native_sub_4326e0(plVar4,lVar9);
      if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
        native_sub_4327ec();
      }
      uVar3 = native_UnityEngine_Object__op_Inequality_8d76fc(lVar9,0,0);
      uVar8 = 0;
      if ((uVar3 & 1) != 0) {
        if (lVar9 == 0) goto LAB_00c969f8;
        uVar8 = native_UICamera__get_cachedCamera_c95254(lVar9);
      }
      if (((*(byte *)(_UICamera_TypeInfo_12d6410 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
        native_sub_4327ec();
      }
      puVar5 = (undefined8 *)(*(long *)(_UICamera_TypeInfo_12d6410 + 0xb8) + 0xc0);
      *puVar5 = uVar8;
      native_sub_4326e0(puVar5,uVar8);
      puVar5 = (undefined8 *)(*(long *)(_UICamera_TypeInfo_12d6410 + 0xb8) + 0xe0);
      *puVar5 = 0;
      native_sub_4326e0(puVar5,0);
      *(undefined4 *)(*(long *)(_UICamera_TypeInfo_12d6410 + 0xb8) + 0xd4) = 0xffffff9c;
    }
  }
  return;
}



/* UICamera$$get_controllerNavigationObject @ 0xc96e8c
 * UnityEngine_GameObject_o* UICamera__get_controllerNavigationObject (const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UICamera$$get_controllerNavigationObject
   UnityEngine_GameObject_o* UICamera__get_controllerNavigationObject (const MethodInfo* method); */

undefined8 native_UICamera__get_controllerNavigationObject_c96e8c(void)

{
  int iVar1;
  ulong uVar2;
  undefined8 *puVar3;
  ulong uVar4;
  long lVar5;
  undefined8 uVar6;
  
  if ((bRam00000000013428c5 & 1) == 0) {
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    native_sub_43273c(&UICamera_TypeInfo_12d6410);
    native_sub_43273c(&UIKeyNavigation_TypeInfo_12d6460);
    bRam00000000013428c5 = 1;
  }
  if (((*(byte *)(_UICamera_TypeInfo_12d6410 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  lVar5 = *(long *)(*(long *)(_UICamera_TypeInfo_12d6410 + 0xb8) + 400);
  if (lVar5 != 0) {
    uVar6 = *(undefined8 *)(lVar5 + 0x48);
    if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    uVar2 = native_UnityEngine_Object__op_Implicit_8e1b98(uVar6,0);
    if ((uVar2 & 1) != 0) {
      if (((*(byte *)(_UICamera_TypeInfo_12d6410 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
        native_sub_4327ec();
      }
      lVar5 = *(long *)(*(long *)(_UICamera_TypeInfo_12d6410 + 0xb8) + 400);
      if ((lVar5 == 0) || (lVar5 = *(long *)(lVar5 + 0x48), lVar5 == 0)) goto LAB_00c9732c;
      uVar2 = native_UnityEngine_GameObject__get_activeInHierarchy_8de728(lVar5,0);
      if ((uVar2 & 1) != 0) {
        if (((*(byte *)(_UICamera_TypeInfo_12d6410 + 0x133) >> 2 & 1) != 0) &&
           (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
          native_sub_4327ec();
        }
        lVar5 = *(long *)(*(long *)(_UICamera_TypeInfo_12d6410 + 0xb8) + 400);
        if (lVar5 != 0) {
          return *(undefined8 *)(lVar5 + 0x48);
        }
        goto LAB_00c9732c;
      }
    }
    if (((*(byte *)(_UICamera_TypeInfo_12d6410 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    iVar1 = native_UICamera__get_currentScheme_c92518();
    if (iVar1 == 2) {
      if (((*(byte *)(_UICamera_TypeInfo_12d6410 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
        native_sub_4327ec();
      }
      uVar6 = *(undefined8 *)(*(long *)(_UICamera_TypeInfo_12d6410 + 0xb8) + 0xb8);
      if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
        native_sub_4327ec(_UnityEngine_Object_TypeInfo_12d54e0);
      }
      uVar2 = native_UnityEngine_Object__op_Inequality_8d76fc(uVar6,0,0);
      if ((uVar2 & 1) != 0) {
        if (((*(byte *)(_UICamera_TypeInfo_12d6410 + 0x133) >> 2 & 1) != 0) &&
           (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
          native_sub_4327ec();
        }
        lVar5 = *(long *)(_UICamera_TypeInfo_12d6410 + 0xb8);
        if (*(long *)(lVar5 + 0xb8) == 0) goto LAB_00c9732c;
        if (*(char *)(*(long *)(lVar5 + 0xb8) + 0x2d) != '\0') {
          if (((*(byte *)(_UICamera_TypeInfo_12d6410 + 0x133) >> 2 & 1) != 0) &&
             (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
            native_sub_4327ec();
            lVar5 = *(long *)(_UICamera_TypeInfo_12d6410 + 0xb8);
          }
          if (*(char *)(lVar5 + 0x5a) == '\0') {
            if (((*(byte *)(_UIKeyNavigation_TypeInfo_12d6460 + 0x133) >> 2 & 1) != 0) &&
               (*(int *)(_UIKeyNavigation_TypeInfo_12d6460 + 0xe0) == 0)) {
              native_sub_4327ec();
            }
            if (**(long **)(_UIKeyNavigation_TypeInfo_12d6460 + 0xb8) == 0) goto LAB_00c9732c;
            if (0 < *(int *)(**(long **)(_UIKeyNavigation_TypeInfo_12d6460 + 0xb8) + 0x18)) {
              uVar2 = 0;
              do {
                if (((*(byte *)(_UIKeyNavigation_TypeInfo_12d6460 + 0x133) >> 2 & 1) != 0) &&
                   (*(int *)(_UIKeyNavigation_TypeInfo_12d6460 + 0xe0) == 0)) {
                  native_sub_4327ec();
                }
                lVar5 = **(long **)(_UIKeyNavigation_TypeInfo_12d6460 + 0xb8);
                if (lVar5 == 0) goto LAB_00c9732c;
                if ((long)*(int *)(lVar5 + 0x18) <= (long)uVar2) {
                  if (((*(byte *)(_UICamera_TypeInfo_12d6410 + 0x133) >> 2 & 1) != 0) &&
                     (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
                    native_sub_4327ec();
                  }
                  uVar6 = *(undefined8 *)(*(long *)(_UICamera_TypeInfo_12d6410 + 0xb8) + 0x1e0);
                  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
                     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
                    native_sub_4327ec(_UnityEngine_Object_TypeInfo_12d54e0);
                  }
                  uVar2 = native_UnityEngine_Object__op_Equality_8e9a3c(uVar6,0,0);
                  if ((uVar2 & 1) == 0) break;
                  uVar2 = 0;
                  goto LAB_00c97294;
                }
                if (((*(byte *)(_UIKeyNavigation_TypeInfo_12d6460 + 0x133) >> 2 & 1) != 0) &&
                   (*(int *)(_UIKeyNavigation_TypeInfo_12d6460 + 0xe0) == 0)) {
                  native_sub_4327ec();
                  lVar5 = **(long **)(_UIKeyNavigation_TypeInfo_12d6460 + 0xb8);
                  if (lVar5 == 0) goto LAB_00c9732c;
                }
                lVar5 = *(long *)(lVar5 + 0x10);
                if (lVar5 == 0) goto LAB_00c9732c;
                if (*(uint *)(lVar5 + 0x18) <= uVar2) goto LAB_00c97330;
                lVar5 = *(long *)(lVar5 + uVar2 * 8 + 0x20);
                if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
                   (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
                  native_sub_4327ec();
                }
                uVar4 = native_UnityEngine_Object__op_Implicit_8e1b98(lVar5,0);
                if ((uVar4 & 1) != 0) {
                  if (lVar5 == 0) goto LAB_00c9732c;
                  if ((*(int *)(lVar5 + 0x18) != 3) && (*(char *)(lVar5 + 0x50) != '\0'))
                  goto LAB_00c972cc;
                }
                uVar2 = uVar2 + 1;
              } while( true );
            }
          }
        }
      }
    }
LAB_00c97074:
    if (((*(byte *)(_UICamera_TypeInfo_12d6410 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    lVar5 = *(long *)(*(long *)(_UICamera_TypeInfo_12d6410 + 0xb8) + 400);
    if (lVar5 != 0) {
      puVar3 = (undefined8 *)(lVar5 + 0x48);
      *puVar3 = 0;
      native_sub_4326e0(puVar3,0);
      return 0;
    }
  }
  goto LAB_00c9732c;
LAB_00c97294:
  if (((*(byte *)(_UIKeyNavigation_TypeInfo_12d6460 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UIKeyNavigation_TypeInfo_12d6460 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  lVar5 = **(long **)(_UIKeyNavigation_TypeInfo_12d6460 + 0xb8);
  if (lVar5 == 0) goto LAB_00c9732c;
  if ((long)*(int *)(lVar5 + 0x18) <= (long)uVar2) goto LAB_00c97074;
  if (((*(byte *)(_UIKeyNavigation_TypeInfo_12d6460 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UIKeyNavigation_TypeInfo_12d6460 + 0xe0) == 0)) {
    native_sub_4327ec();
    lVar5 = **(long **)(_UIKeyNavigation_TypeInfo_12d6460 + 0xb8);
    if (lVar5 == 0) goto LAB_00c9732c;
  }
  lVar5 = *(long *)(lVar5 + 0x10);
  if (lVar5 == 0) goto LAB_00c9732c;
  if (*(uint *)(lVar5 + 0x18) <= uVar2) {
LAB_00c97330:
    uVar6 = native_sub_43283c();
                    /* WARNING: Subroutine does not return */
    native_sub_4327dc(uVar6,0);
  }
  lVar5 = *(long *)(lVar5 + uVar2 * 8 + 0x20);
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar4 = native_UnityEngine_Object__op_Implicit_8e1b98(lVar5,0);
  if ((uVar4 & 1) != 0) {
    if (lVar5 == 0) goto LAB_00c9732c;
    if (*(int *)(lVar5 + 0x18) != 3) goto LAB_00c972cc;
  }
  uVar2 = uVar2 + 1;
  goto LAB_00c97294;
LAB_00c972cc:
  uVar6 = native_UnityEngine_Component__get_gameObject_8da66c(lVar5,0);
  if (((*(byte *)(_UICamera_TypeInfo_12d6410 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
    native_sub_4327ec(_UICamera_TypeInfo_12d6410);
  }
  native_UICamera__set_hoveredObject_c9622c(uVar6);
  lVar5 = *(long *)(*(long *)(_UICamera_TypeInfo_12d6410 + 0xb8) + 400);
  if (lVar5 != 0) {
    *(undefined8 *)(lVar5 + 0x48) =
         *(undefined8 *)(*(long *)(_UICamera_TypeInfo_12d6410 + 0xb8) + 0x1e0);
    native_sub_4326e0();
    return *(undefined8 *)(*(long *)(_UICamera_TypeInfo_12d6410 + 0xb8) + 0x1e0);
  }
LAB_00c9732c:
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* UICamera$$set_controllerNavigationObject @ 0xc9733c
 * void UICamera__set_controllerNavigationObject (UnityEngine_GameObject_o* value, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UICamera$$set_controllerNavigationObject
   void UICamera__set_controllerNavigationObject (UnityEngine_GameObject_o* value, const MethodInfo*
   method); */

void native_UICamera__set_controllerNavigationObject_c9733c(undefined8 param_1)

{
  ulong uVar1;
  undefined8 *puVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined1 auStack_34 [4];
  
  if ((bRam00000000013428c6 & 1) == 0) {
    native_sub_43273c(&bool_TypeInfo_12d3bd0);
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    native_sub_43273c(&UICamera_TypeInfo_12d6410);
    native_sub_43273c(&StringLiteral_OnHover_12f0238);
    bRam00000000013428c6 = 1;
  }
  if (((*(byte *)(_UICamera_TypeInfo_12d6410 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  lVar3 = *(long *)(*(long *)(_UICamera_TypeInfo_12d6410 + 0xb8) + 400);
  if (lVar3 != 0) {
    uVar5 = *(undefined8 *)(lVar3 + 0x48);
    if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    uVar1 = native_UnityEngine_Object__op_Inequality_8d76fc(uVar5,param_1,0);
    if ((uVar1 & 1) == 0) {
LAB_00c97534:
      if (((*(byte *)(_UICamera_TypeInfo_12d6410 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
        native_sub_4327ec();
      }
      native_UICamera__set_hoveredObject_c9622c(param_1);
      return;
    }
    if (((*(byte *)(_UICamera_TypeInfo_12d6410 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    lVar3 = *(long *)(*(long *)(_UICamera_TypeInfo_12d6410 + 0xb8) + 400);
    if (lVar3 != 0) {
      uVar5 = *(undefined8 *)(lVar3 + 0x48);
      if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
        native_sub_4327ec();
      }
      uVar1 = native_UnityEngine_Object__op_Implicit_8e1b98(uVar5,0);
      if ((uVar1 & 1) == 0) goto LAB_00c97534;
      if (((*(byte *)(_UICamera_TypeInfo_12d6410 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
        native_sub_4327ec();
      }
      lVar3 = *(long *)(*(long *)(_UICamera_TypeInfo_12d6410 + 0xb8) + 400);
      if (lVar3 != 0) {
        uVar6 = *(undefined8 *)(lVar3 + 0x48);
        auStack_34[0] = 0;
        uVar5 = native_sub_4327fc(_bool_TypeInfo_12d3bd0,auStack_34);
        native_UICamera__Notify_c96a08(uVar6,_StringLiteral_OnHover_12f0238,uVar5);
        lVar4 = *(long *)(_UICamera_TypeInfo_12d6410 + 0xb8);
        lVar3 = *(long *)(lVar4 + 0x110);
        if (lVar3 != 0) {
          if (((*(byte *)(_UICamera_TypeInfo_12d6410 + 0x133) >> 2 & 1) != 0) &&
             (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
            native_sub_4327ec();
            lVar4 = *(long *)(_UICamera_TypeInfo_12d6410 + 0xb8);
            lVar3 = *(long *)(lVar4 + 0x110);
          }
          if ((*(long *)(lVar4 + 400) == 0) || (lVar3 == 0)) goto LAB_00c97568;
          native_UICamera_BoolDelegate__Invoke_550030
                    (lVar3,*(undefined8 *)(*(long *)(lVar4 + 400) + 0x48),0,0);
        }
        if (((*(byte *)(_UICamera_TypeInfo_12d6410 + 0x133) >> 2 & 1) != 0) &&
           (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
          native_sub_4327ec();
        }
        lVar3 = *(long *)(*(long *)(_UICamera_TypeInfo_12d6410 + 0xb8) + 400);
        if (lVar3 != 0) {
          puVar2 = (undefined8 *)(lVar3 + 0x48);
          *puVar2 = 0;
          native_sub_4326e0(puVar2,0);
          goto LAB_00c97534;
        }
      }
    }
  }
LAB_00c97568:
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* UICamera$$get_selectedObject @ 0xc9756c
 * UnityEngine_GameObject_o* UICamera__get_selectedObject (const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UICamera$$get_selectedObject
   UnityEngine_GameObject_o* UICamera__get_selectedObject (const MethodInfo* method); */

undefined8 native_UICamera__get_selectedObject_c9756c(void)

{
  ulong uVar1;
  long lVar2;
  undefined8 uVar3;
  
  if ((bRam00000000013428c7 & 1) == 0) {
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    native_sub_43273c(&UICamera_TypeInfo_12d6410);
    bRam00000000013428c7 = 1;
  }
  if (((*(byte *)(_UICamera_TypeInfo_12d6410 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar3 = *(undefined8 *)(*(long *)(_UICamera_TypeInfo_12d6410 + 0xb8) + 0x1e8);
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec(_UnityEngine_Object_TypeInfo_12d54e0);
  }
  uVar1 = native_UnityEngine_Object__op_Implicit_8e1b98(uVar3,0);
  if ((uVar1 & 1) != 0) {
    if (((*(byte *)(_UICamera_TypeInfo_12d6410 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    lVar2 = *(long *)(*(long *)(_UICamera_TypeInfo_12d6410 + 0xb8) + 0x1e8);
    if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      native_sub_432810();
    }
    uVar1 = native_UnityEngine_GameObject__get_activeInHierarchy_8de728(lVar2,0);
    if ((uVar1 & 1) != 0) {
      if (((*(byte *)(_UICamera_TypeInfo_12d6410 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
        native_sub_4327ec();
      }
      return *(undefined8 *)(*(long *)(_UICamera_TypeInfo_12d6410 + 0xb8) + 0x1e8);
    }
  }
  if (((*(byte *)(_UICamera_TypeInfo_12d6410 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  lVar2 = *(long *)(_UICamera_TypeInfo_12d6410 + 0xb8);
  *(undefined8 *)(lVar2 + 0x1e8) = 0;
  native_sub_4326e0(lVar2 + 0x1e8,0);
  return 0;
}



/* UICamera$$set_selectedObject @ 0xc976a4
 * void UICamera__set_selectedObject (UnityEngine_GameObject_o* value, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UICamera$$set_selectedObject
   void UICamera__set_selectedObject (UnityEngine_GameObject_o* value, const MethodInfo* method); */

void native_UICamera__set_selectedObject_c976a4(long param_1)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  byte bVar4;
  uint uVar5;
  ulong uVar6;
  long lVar7;
  long *plVar8;
  undefined8 *puVar9;
  long lVar10;
  long lVar11;
  undefined8 uVar12;
  long lVar13;
  undefined8 uVar14;
  uint uVar15;
  undefined1 auStack_48 [4];
  undefined1 auStack_44 [4];
  
  if ((bRam00000000013428c8 & 1) == 0) {
    native_sub_43273c(&bool_TypeInfo_12d3bd0);
    native_sub_43273c(&Method_UnityEngine_GameObject_GetComponent_UIInput____12e4ab0);
    native_sub_43273c(&Method_UnityEngine_GameObject_GetComponent_UIKeyNavigation____12e4ab8);
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    native_sub_43273c(&UICamera_TypeInfo_12d6410);
    native_sub_43273c(&StringLiteral_OnSelect_12f02c0);
    bRam00000000013428c8 = 1;
  }
  if (((*(byte *)(_UICamera_TypeInfo_12d6410 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar12 = *(undefined8 *)(*(long *)(_UICamera_TypeInfo_12d6410 + 0xb8) + 0x1e8);
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec(_UnityEngine_Object_TypeInfo_12d54e0);
  }
  uVar6 = native_UnityEngine_Object__op_Equality_8e9a3c(uVar12,param_1,0);
  if ((uVar6 & 1) != 0) {
    if (((*(ushort *)(_UICamera_TypeInfo_12d6410 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
      native_sub_4327ec(_UICamera_TypeInfo_12d6410);
    }
    native_UICamera__set_hoveredObject_c9622c(param_1);
    lVar7 = *(long *)(*(long *)(_UICamera_TypeInfo_12d6410 + 0xb8) + 400);
    if (lVar7 != 0) {
      plVar8 = (long *)(lVar7 + 0x48);
      *plVar8 = param_1;
      if (iRam0000000001345318 != 0) {
        puVar1 = (ulong *)(((ulong)plVar8 >> 0x12 & 0x7fff) * 8 + 0x138ecd8);
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar3) {
            *puVar1 = *puVar1 | 1L << ((ulong)plVar8 >> 0xc & 0x3f);
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      return;
    }
    goto LAB_00c97ea8;
  }
  if (((*(ushort *)(_UICamera_TypeInfo_12d6410 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
    native_sub_4327ec(_UICamera_TypeInfo_12d6410);
  }
  native_UICamera__ShowTooltip_c953cc(0);
  plVar8 = (long *)(_UICamera_TypeInfo_12d6410 + 0xb8);
  lVar7 = *plVar8;
  lVar13 = *(long *)(lVar7 + 0xb8);
  if (*(long *)(lVar7 + 0xe0) == 0) {
    if (((*(byte *)(_UICamera_TypeInfo_12d6410 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
      native_sub_4327ec();
      plVar8 = (long *)(_UICamera_TypeInfo_12d6410 + 0xb8);
      lVar7 = *plVar8;
    }
    *(undefined4 *)(lVar7 + 0xd4) = 0xffffff9c;
    lVar7 = *plVar8;
    *(undefined8 *)(lVar7 + 0xe0) = *(undefined8 *)(lVar7 + 400);
    native_sub_4326e0(lVar7 + 0xe0);
    uVar15 = 1;
  }
  else {
    uVar15 = 0;
  }
  if (((*(byte *)(_UICamera_TypeInfo_12d6410 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  lVar7 = _UICamera_TypeInfo_12d6410;
  *(undefined1 *)(*(long *)(_UICamera_TypeInfo_12d6410 + 0xb8) + 0xe8) = 0;
  uVar12 = *(undefined8 *)(*(long *)(lVar7 + 0xb8) + 0x1e8);
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec(_UnityEngine_Object_TypeInfo_12d54e0);
  }
  uVar6 = native_UnityEngine_Object__op_Implicit_8e1b98(uVar12,0);
  if ((uVar6 & 1) != 0) {
    if (((*(byte *)(_UICamera_TypeInfo_12d6410 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    uVar14 = *(undefined8 *)(*(long *)(_UICamera_TypeInfo_12d6410 + 0xb8) + 0x1e8);
    auStack_44[0] = 0;
    uVar12 = native_sub_4327fc(_bool_TypeInfo_12d3bd0,auStack_44);
    native_UICamera__Notify_c96a08(uVar14,_StringLiteral_OnSelect_12f02c0,uVar12);
    lVar10 = *(long *)(_UICamera_TypeInfo_12d6410 + 0xb8);
    lVar7 = *(long *)(lVar10 + 0x120);
    if (lVar7 != 0) {
      if (((*(byte *)(_UICamera_TypeInfo_12d6410 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
        native_sub_4327ec(_UICamera_TypeInfo_12d6410);
        lVar10 = *(long *)(_UICamera_TypeInfo_12d6410 + 0xb8);
        lVar7 = *(long *)(lVar10 + 0x120);
        if (lVar7 == 0) goto LAB_00c97ea8;
      }
      native_UICamera_BoolDelegate__Invoke_550030(lVar7,*(undefined8 *)(lVar10 + 0x1e8),0,0);
    }
  }
  if (((*(byte *)(_UICamera_TypeInfo_12d6410 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  lVar7 = *(long *)(_UICamera_TypeInfo_12d6410 + 0xb8);
  *(long *)(lVar7 + 0x1e8) = param_1;
  native_sub_4326e0(lVar7 + 0x1e8,param_1);
  lVar7 = *(long *)(*(long *)(_UICamera_TypeInfo_12d6410 + 0xb8) + 0xe0);
  if (lVar7 == 0) goto LAB_00c97ea8;
  *(undefined4 *)(lVar7 + 0x70) = 0;
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar6 = native_UnityEngine_Object__op_Inequality_8d76fc(param_1,0,0);
  if ((uVar6 & 1) != 0) {
    if (param_1 == 0) goto LAB_00c97ea8;
    uVar12 = native_UnityEngine_GameObject__GetComponent_BE2_BlockSectionHeader_Custom__4a2214
                       (param_1,
                        _Method_UnityEngine_GameObject_GetComponent_UIKeyNavigation____12e4ab8);
    if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
      native_sub_4327ec(_UnityEngine_Object_TypeInfo_12d54e0);
    }
    uVar6 = native_UnityEngine_Object__op_Inequality_8d76fc(uVar12,0,0);
    if ((uVar6 & 1) == 0) {
      uVar12 = native_UnityEngine_GameObject__GetComponent_BE2_BlockSectionHeader_Custom__4a2214
                         (param_1,_Method_UnityEngine_GameObject_GetComponent_UIInput____12e4ab0);
      if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
        native_sub_4327ec(_UnityEngine_Object_TypeInfo_12d54e0);
      }
      uVar6 = native_UnityEngine_Object__op_Inequality_8d76fc(uVar12,0,0);
      if ((uVar6 & 1) == 0) goto LAB_00c97a78;
    }
    if (((*(byte *)(_UICamera_TypeInfo_12d6410 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    lVar7 = *(long *)(*(long *)(_UICamera_TypeInfo_12d6410 + 0xb8) + 400);
    if (lVar7 == 0) goto LAB_00c97ea8;
    plVar8 = (long *)(lVar7 + 0x48);
    *plVar8 = param_1;
    native_sub_4326e0(plVar8,param_1);
  }
LAB_00c97a78:
  if (((*(byte *)(_UICamera_TypeInfo_12d6410 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar12 = *(undefined8 *)(*(long *)(_UICamera_TypeInfo_12d6410 + 0xb8) + 0x1e8);
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec(_UnityEngine_Object_TypeInfo_12d54e0);
  }
  uVar5 = native_UnityEngine_Object__op_Implicit_8e1b98(uVar12,0);
  if ((uVar15 & uVar5) == 1) {
    if (((*(byte *)(_UICamera_TypeInfo_12d6410 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    uVar12 = *(undefined8 *)(*(long *)(_UICamera_TypeInfo_12d6410 + 0xb8) + 0x1e8);
    if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
      native_sub_4327ec(_UnityEngine_Object_TypeInfo_12d54e0);
    }
    uVar6 = native_UnityEngine_Object__op_Inequality_8d76fc(uVar12,0,0);
    if ((uVar6 & 1) == 0) {
      if (((*(ushort *)(_UICamera_TypeInfo_12d6410 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
        native_sub_4327ec(_UICamera_TypeInfo_12d6410);
      }
      if ((**(long **)(_UICamera_TypeInfo_12d6410 + 0xb8) == 0) ||
         (lVar7 = *(long *)(**(long **)(_UICamera_TypeInfo_12d6410 + 0xb8) + 0x10), lVar7 == 0))
      goto LAB_00c97ea8;
      if (*(int *)(lVar7 + 0x18) == 0) {
        uVar12 = native_sub_43283c();
                    /* WARNING: Subroutine does not return */
        native_sub_4327dc(uVar12,0);
      }
      lVar7 = *(long *)(lVar7 + 0x20);
    }
    else {
      if (((*(ushort *)(_UICamera_TypeInfo_12d6410 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
        native_sub_4327ec(_UICamera_TypeInfo_12d6410);
      }
      lVar7 = *(long *)(*(long *)(_UICamera_TypeInfo_12d6410 + 0xb8) + 0x1e8);
      if (lVar7 == 0) goto LAB_00c97ea8;
      native_UnityEngine_GameObject__get_layer_8de608(lVar7,0);
      lVar7 = native_UICamera__FindCameraForLayer_c96d2c();
    }
    if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    uVar6 = native_UnityEngine_Object__op_Inequality_8d76fc(lVar7,0,0);
    if ((uVar6 & 1) != 0) {
      if (((*(byte *)(_UICamera_TypeInfo_12d6410 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
        native_sub_4327ec();
      }
      plVar8 = (long *)(*(long *)(_UICamera_TypeInfo_12d6410 + 0xb8) + 0xb8);
      *plVar8 = lVar7;
      native_sub_4326e0(plVar8,lVar7);
      if (lVar7 == 0) goto LAB_00c97ea8;
      uVar12 = native_UICamera__get_cachedCamera_c95254(lVar7);
      puVar9 = (undefined8 *)(*(long *)(_UICamera_TypeInfo_12d6410 + 0xb8) + 0xc0);
      *puVar9 = uVar12;
      native_sub_4326e0(puVar9,uVar12);
    }
  }
  if (((*(byte *)(_UICamera_TypeInfo_12d6410 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar12 = *(undefined8 *)(*(long *)(_UICamera_TypeInfo_12d6410 + 0xb8) + 0x1e8);
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec(_UnityEngine_Object_TypeInfo_12d54e0);
  }
  uVar6 = native_UnityEngine_Object__op_Implicit_8e1b98(uVar12,0);
  if ((uVar6 & 1) != 0) {
    if (((*(byte *)(_UICamera_TypeInfo_12d6410 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    lVar7 = *(long *)(*(long *)(_UICamera_TypeInfo_12d6410 + 0xb8) + 0x1e8);
    if (lVar7 == 0) goto LAB_00c97ea8;
    uVar6 = native_UnityEngine_GameObject__get_activeInHierarchy_8de728(lVar7,0);
    if ((uVar6 & 1) == 0) {
      bVar4 = 0;
    }
    else {
      if (((*(byte *)(_UICamera_TypeInfo_12d6410 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
        native_sub_4327ec();
      }
      lVar7 = *(long *)(*(long *)(_UICamera_TypeInfo_12d6410 + 0xb8) + 0x1e8);
      if (lVar7 == 0) goto LAB_00c97ea8;
      uVar12 = native_UnityEngine_GameObject__GetComponent_BE2_BlockSectionHeader_Custom__4a2214
                         (lVar7,_Method_UnityEngine_GameObject_GetComponent_UIInput____12e4ab0);
      if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
        native_sub_4327ec(_UnityEngine_Object_TypeInfo_12d54e0);
      }
      bVar4 = native_UnityEngine_Object__op_Inequality_8d76fc(uVar12,0,0);
      bVar4 = bVar4 & 1;
    }
    if (((*(byte *)(_UICamera_TypeInfo_12d6410 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    lVar7 = _UICamera_TypeInfo_12d6410;
    *(byte *)(*(long *)(_UICamera_TypeInfo_12d6410 + 0xb8) + 0xe8) = bVar4;
    lVar11 = *(long *)(lVar7 + 0xb8);
    lVar10 = *(long *)(lVar11 + 0x120);
    if (lVar10 != 0) {
      if (((*(byte *)(lVar7 + 0x133) >> 2 & 1) != 0) && (*(int *)(lVar7 + 0xe0) == 0)) {
        native_sub_4327ec();
        lVar11 = *(long *)(_UICamera_TypeInfo_12d6410 + 0xb8);
        lVar10 = *(long *)(lVar11 + 0x120);
        if (lVar10 == 0) goto LAB_00c97ea8;
      }
      native_UICamera_BoolDelegate__Invoke_550030(lVar10,*(undefined8 *)(lVar11 + 0x1e8),1,0);
      lVar7 = _UICamera_TypeInfo_12d6410;
    }
    if (((*(byte *)(lVar7 + 0x133) >> 2 & 1) != 0) && (*(int *)(lVar7 + 0xe0) == 0)) {
      native_sub_4327ec();
      lVar7 = _UICamera_TypeInfo_12d6410;
    }
    uVar14 = *(undefined8 *)(*(long *)(lVar7 + 0xb8) + 0x1e8);
    auStack_48[0] = 1;
    uVar12 = native_sub_4327fc(_bool_TypeInfo_12d3bd0,auStack_48);
    native_UICamera__Notify_c96a08(uVar14,_StringLiteral_OnSelect_12f02c0,uVar12);
  }
  if (uVar15 != 0) {
    if (((*(byte *)(_UICamera_TypeInfo_12d6410 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    plVar8 = (long *)(*(long *)(_UICamera_TypeInfo_12d6410 + 0xb8) + 0xb8);
    *plVar8 = lVar13;
    native_sub_4326e0(plVar8,lVar13);
    if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    uVar6 = native_UnityEngine_Object__op_Inequality_8d76fc(lVar13,0,0);
    uVar12 = 0;
    if ((uVar6 & 1) != 0) {
      if (lVar13 == 0) {
LAB_00c97ea8:
                    /* WARNING: Subroutine does not return */
        native_sub_432810();
      }
      uVar12 = native_UICamera__get_cachedCamera_c95254(lVar13);
    }
    if (((*(byte *)(_UICamera_TypeInfo_12d6410 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    puVar9 = (undefined8 *)(*(long *)(_UICamera_TypeInfo_12d6410 + 0xb8) + 0xc0);
    *puVar9 = uVar12;
    native_sub_4326e0(puVar9,uVar12);
    puVar9 = (undefined8 *)(*(long *)(_UICamera_TypeInfo_12d6410 + 0xb8) + 0xe0);
    *puVar9 = 0;
    native_sub_4326e0(puVar9,0);
    *(undefined4 *)(*(long *)(_UICamera_TypeInfo_12d6410 + 0xb8) + 0xd4) = 0xffffff9c;
  }
  return;
}



/* UICamera$$IsPressed @ 0xc97eb8
 * bool UICamera__IsPressed (UnityEngine_GameObject_o* go, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UICamera$$IsPressed
   bool UICamera__IsPressed (UnityEngine_GameObject_o* go, const MethodInfo* method); */

byte native_UICamera__IsPressed_c97eb8(long param_1)

{
  int iVar1;
  byte bVar2;
  bool bVar3;
  ulong uVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  
  if ((bRam00000000013428c9 & 1) == 0) {
    native_sub_43273c(&
                      Method_System_Collections_Generic_List_UICamera_MouseOrTouch__get_Count___12dd960
                     );
    native_sub_43273c(&
                      Method_System_Collections_Generic_List_UICamera_MouseOrTouch__get_Item___12dd968
                     );
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    native_sub_43273c(&UICamera_TypeInfo_12d6410);
    bRam00000000013428c9 = 1;
  }
  lVar7 = 0;
  bVar3 = (*(byte *)(_UICamera_TypeInfo_12d6410 + 0x133) & 4) == 0;
  do {
    if ((!bVar3) && (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    lVar5 = *(long *)(*(long *)(_UICamera_TypeInfo_12d6410 + 0xb8) + 0x188);
    if (lVar5 == 0) goto LAB_00c980f8;
    if (*(uint *)(lVar5 + 0x18) <= (uint)lVar7) {
      uVar6 = native_sub_43283c();
                    /* WARNING: Subroutine does not return */
      native_sub_4327dc(uVar6,0);
    }
    lVar5 = *(long *)(lVar5 + lVar7 * 8 + 0x20);
    if (lVar5 == 0) goto LAB_00c980f8;
    uVar6 = *(undefined8 *)(lVar5 + 0x50);
    if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    uVar4 = native_UnityEngine_Object__op_Equality_8e9a3c(uVar6,param_1,0);
    if ((uVar4 & 1) != 0) {
      return 1;
    }
    lVar7 = lVar7 + 1;
    bVar3 = (*(ushort *)(_UICamera_TypeInfo_12d6410 + 0x132) & 0x400) == 0;
  } while ((int)lVar7 - 1U < 2);
  if (((*(ushort *)(_UICamera_TypeInfo_12d6410 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  lVar7 = *(long *)(*(long *)(_UICamera_TypeInfo_12d6410 + 0xb8) + 0x198);
  if (lVar7 != 0) {
    iVar1 = *(int *)(lVar7 + 0x18);
    bVar2 = *(byte *)(_UICamera_TypeInfo_12d6410 + 0x133) >> 2 & 1;
    if (0 < iVar1) {
      lVar7 = 0;
      do {
        if ((bVar2 != 0) && (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
          native_sub_4327ec();
        }
        lVar5 = *(long *)(*(long *)(_UICamera_TypeInfo_12d6410 + 0xb8) + 0x198);
        if (lVar5 == 0) goto LAB_00c980f8;
        if (*(uint *)(lVar5 + 0x18) <= (uint)lVar7) {
          native_System_ThrowHelper__ThrowArgumentOutOfRangeException_9fe0f4(0);
        }
        lVar5 = *(long *)(*(long *)(lVar5 + 0x10) + lVar7 * 8 + 0x20);
        if (lVar5 == 0) goto LAB_00c980f8;
        uVar6 = *(undefined8 *)(lVar5 + 0x50);
        if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
           (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
          native_sub_4327ec();
        }
        uVar4 = native_UnityEngine_Object__op_Equality_8e9a3c(uVar6,param_1,0);
        if ((uVar4 & 1) != 0) {
          return 1;
        }
        lVar7 = lVar7 + 1;
        bVar2 = *(byte *)(_UICamera_TypeInfo_12d6410 + 0x133) >> 2 & 1;
      } while ((int)lVar7 < iVar1);
    }
    if ((bVar2 != 0) && (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    lVar7 = *(long *)(*(long *)(_UICamera_TypeInfo_12d6410 + 0xb8) + 400);
    if (lVar7 != 0) {
      lVar7 = *(long *)(lVar7 + 0x50);
      if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
        native_sub_4327ec();
      }
      if ((bRam0000000001341083 & 1) == 0) {
        native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0,param_1,0);
        bRam0000000001341083 = 1;
      }
      if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
        native_sub_4327ec();
      }
      if ((bRam0000000001341033 & 1) == 0) {
        native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
        bRam0000000001341033 = 1;
      }
      if (lVar7 == 0 && param_1 == 0) {
        bVar2 = 1;
      }
      else {
        if (param_1 == 0) {
          param_1 = lVar7;
          if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
             (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
            native_sub_4327ec();
          }
        }
        else {
          if (lVar7 != 0) {
            bVar2 = lVar7 == param_1;
            goto code_r0x008e9b5c;
          }
          if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
             (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
            native_sub_4327ec();
          }
        }
        bVar2 = native_UnityEngine_Object__IsNativeObjectAlive_8e9b70(param_1);
        bVar2 = bVar2 ^ 1;
      }
code_r0x008e9b5c:
      return bVar2 & 1;
    }
  }
LAB_00c980f8:
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* UICamera$$get_touchCount @ 0xc98108
 * int32_t UICamera__get_touchCount (const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UICamera$$get_touchCount
   int32_t UICamera__get_touchCount (const MethodInfo* method); */

int native_UICamera__get_touchCount_c98108(void)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  int iVar7;
  
  if ((bRam00000000013428ca & 1) == 0) {
    native_sub_43273c(&UICamera_TypeInfo_12d6410);
    bRam00000000013428ca = 1;
  }
  if (((*(byte *)(_UICamera_TypeInfo_12d6410 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  if ((bRam00000000013428cb & 1) == 0) {
    native_sub_43273c(&
                      Method_System_Collections_Generic_List_UICamera_MouseOrTouch__get_Count___12dd960
                     );
    native_sub_43273c(&
                      Method_System_Collections_Generic_List_UICamera_MouseOrTouch__get_Item___12dd968
                     );
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    native_sub_43273c(&UICamera_TypeInfo_12d6410);
    bRam00000000013428cb = 1;
  }
  if (((*(byte *)(_UICamera_TypeInfo_12d6410 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  lVar4 = *(long *)(*(long *)(_UICamera_TypeInfo_12d6410 + 0xb8) + 0x198);
  if (lVar4 != 0) {
    iVar1 = *(int *)(lVar4 + 0x18);
    if (iVar1 < 1) {
      iVar7 = 0;
    }
    else {
      lVar4 = 0;
      iVar7 = 0;
      while( true ) {
        if (((*(byte *)(_UICamera_TypeInfo_12d6410 + 0x133) >> 2 & 1) != 0) &&
           (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
          native_sub_4327ec();
        }
        lVar5 = *(long *)(*(long *)(_UICamera_TypeInfo_12d6410 + 0xb8) + 0x198);
        if (lVar5 == 0) goto LAB_00c983c0;
        if (*(uint *)(lVar5 + 0x18) <= (uint)lVar4) {
          native_System_ThrowHelper__ThrowArgumentOutOfRangeException_9fe0f4(0);
        }
        lVar5 = *(long *)(*(long *)(lVar5 + 0x10) + lVar4 * 8 + 0x20);
        if (lVar5 == 0) goto LAB_00c983c0;
        uVar6 = *(undefined8 *)(lVar5 + 0x50);
        if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
           (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
          native_sub_4327ec();
        }
        uVar2 = native_UnityEngine_Object__op_Inequality_8d76fc(uVar6,0,0);
        iVar7 = iVar7 + (uVar2 & 1);
        if (iVar1 <= (int)((uint)lVar4 + 1)) break;
        lVar4 = lVar4 + 1;
      }
    }
    uVar2 = 0;
    while( true ) {
      if (((*(byte *)(_UICamera_TypeInfo_12d6410 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
        native_sub_4327ec();
      }
      lVar5 = *(long *)(_UICamera_TypeInfo_12d6410 + 0xb8);
      lVar4 = *(long *)(lVar5 + 0x188);
      if (lVar4 == 0) goto LAB_00c983c0;
      if (*(int *)(lVar4 + 0x18) <= (int)uVar2) break;
      if (((*(ushort *)(_UICamera_TypeInfo_12d6410 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
        native_sub_4327ec();
        lVar4 = *(long *)(*(long *)(_UICamera_TypeInfo_12d6410 + 0xb8) + 0x188);
        if (lVar4 == 0) goto LAB_00c983c0;
      }
      if (*(uint *)(lVar4 + 0x18) <= uVar2) {
        uVar6 = native_sub_43283c();
                    /* WARNING: Subroutine does not return */
        native_sub_4327dc(uVar6,0);
      }
      lVar4 = *(long *)(lVar4 + (long)(int)uVar2 * 8 + 0x20);
      if (lVar4 == 0) goto LAB_00c983c0;
      uVar6 = *(undefined8 *)(lVar4 + 0x50);
      if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
        native_sub_4327ec();
      }
      uVar3 = native_UnityEngine_Object__op_Inequality_8d76fc(uVar6,0,0);
      iVar7 = iVar7 + (uVar3 & 1);
      uVar2 = uVar2 + 1;
    }
    if (((*(ushort *)(_UICamera_TypeInfo_12d6410 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
      native_sub_4327ec();
      lVar5 = *(long *)(_UICamera_TypeInfo_12d6410 + 0xb8);
    }
    if (*(long *)(lVar5 + 400) != 0) {
      uVar6 = *(undefined8 *)(*(long *)(lVar5 + 400) + 0x50);
      if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
        native_sub_4327ec();
      }
      uVar2 = native_UnityEngine_Object__op_Inequality_8d76fc(uVar6,0,0);
      return iVar7 + (uVar2 & 1);
    }
  }
LAB_00c983c0:
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* UICamera$$CountInputSources @ 0xc98160
 * int32_t UICamera__CountInputSources (const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UICamera$$CountInputSources
   int32_t UICamera__CountInputSources (const MethodInfo* method); */

int native_UICamera__CountInputSources_c98160(void)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  int iVar7;
  
  if ((bRam00000000013428cb & 1) == 0) {
    native_sub_43273c(&
                      Method_System_Collections_Generic_List_UICamera_MouseOrTouch__get_Count___12dd960
                     );
    native_sub_43273c(&
                      Method_System_Collections_Generic_List_UICamera_MouseOrTouch__get_Item___12dd968
                     );
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    native_sub_43273c(&UICamera_TypeInfo_12d6410);
    bRam00000000013428cb = 1;
  }
  if (((*(byte *)(_UICamera_TypeInfo_12d6410 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  lVar4 = *(long *)(*(long *)(_UICamera_TypeInfo_12d6410 + 0xb8) + 0x198);
  if (lVar4 != 0) {
    iVar1 = *(int *)(lVar4 + 0x18);
    if (iVar1 < 1) {
      iVar7 = 0;
    }
    else {
      lVar4 = 0;
      iVar7 = 0;
      while( true ) {
        if (((*(byte *)(_UICamera_TypeInfo_12d6410 + 0x133) >> 2 & 1) != 0) &&
           (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
          native_sub_4327ec();
        }
        lVar5 = *(long *)(*(long *)(_UICamera_TypeInfo_12d6410 + 0xb8) + 0x198);
        if (lVar5 == 0) goto LAB_00c983c0;
        if (*(uint *)(lVar5 + 0x18) <= (uint)lVar4) {
          native_System_ThrowHelper__ThrowArgumentOutOfRangeException_9fe0f4(0);
        }
        lVar5 = *(long *)(*(long *)(lVar5 + 0x10) + lVar4 * 8 + 0x20);
        if (lVar5 == 0) goto LAB_00c983c0;
        uVar6 = *(undefined8 *)(lVar5 + 0x50);
        if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
           (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
          native_sub_4327ec();
        }
        uVar2 = native_UnityEngine_Object__op_Inequality_8d76fc(uVar6,0,0);
        iVar7 = iVar7 + (uVar2 & 1);
        if (iVar1 <= (int)((uint)lVar4 + 1)) break;
        lVar4 = lVar4 + 1;
      }
    }
    uVar2 = 0;
    while( true ) {
      if (((*(byte *)(_UICamera_TypeInfo_12d6410 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
        native_sub_4327ec();
      }
      lVar5 = *(long *)(_UICamera_TypeInfo_12d6410 + 0xb8);
      lVar4 = *(long *)(lVar5 + 0x188);
      if (lVar4 == 0) goto LAB_00c983c0;
      if (*(int *)(lVar4 + 0x18) <= (int)uVar2) break;
      if (((*(ushort *)(_UICamera_TypeInfo_12d6410 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
        native_sub_4327ec();
        lVar4 = *(long *)(*(long *)(_UICamera_TypeInfo_12d6410 + 0xb8) + 0x188);
        if (lVar4 == 0) goto LAB_00c983c0;
      }
      if (*(uint *)(lVar4 + 0x18) <= uVar2) {
        uVar6 = native_sub_43283c();
                    /* WARNING: Subroutine does not return */
        native_sub_4327dc(uVar6,0);
      }
      lVar4 = *(long *)(lVar4 + (long)(int)uVar2 * 8 + 0x20);
      if (lVar4 == 0) goto LAB_00c983c0;
      uVar6 = *(undefined8 *)(lVar4 + 0x50);
      if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
        native_sub_4327ec();
      }
      uVar3 = native_UnityEngine_Object__op_Inequality_8d76fc(uVar6,0,0);
      iVar7 = iVar7 + (uVar3 & 1);
      uVar2 = uVar2 + 1;
    }
    if (((*(ushort *)(_UICamera_TypeInfo_12d6410 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
      native_sub_4327ec();
      lVar5 = *(long *)(_UICamera_TypeInfo_12d6410 + 0xb8);
    }
    if (*(long *)(lVar5 + 400) != 0) {
      uVar6 = *(undefined8 *)(*(long *)(lVar5 + 400) + 0x50);
      if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
        native_sub_4327ec();
      }
      uVar2 = native_UnityEngine_Object__op_Inequality_8d76fc(uVar6,0,0);
      return iVar7 + (uVar2 & 1);
    }
  }
LAB_00c983c0:
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* UICamera$$get_dragCount @ 0xc983d0
 * int32_t UICamera__get_dragCount (const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UICamera$$get_dragCount
   int32_t UICamera__get_dragCount (const MethodInfo* method); */

int native_UICamera__get_dragCount_c983d0(void)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  int iVar7;
  
  if ((bRam00000000013428cc & 1) == 0) {
    native_sub_43273c(&
                      Method_System_Collections_Generic_List_UICamera_MouseOrTouch__get_Count___12dd960
                     );
    native_sub_43273c(&
                      Method_System_Collections_Generic_List_UICamera_MouseOrTouch__get_Item___12dd968
                     );
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    native_sub_43273c(&UICamera_TypeInfo_12d6410);
    bRam00000000013428cc = 1;
  }
  if (((*(byte *)(_UICamera_TypeInfo_12d6410 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  lVar4 = *(long *)(*(long *)(_UICamera_TypeInfo_12d6410 + 0xb8) + 0x198);
  if (lVar4 != 0) {
    iVar1 = *(int *)(lVar4 + 0x18);
    if (iVar1 < 1) {
      iVar7 = 0;
    }
    else {
      lVar4 = 0;
      iVar7 = 0;
      while( true ) {
        if (((*(byte *)(_UICamera_TypeInfo_12d6410 + 0x133) >> 2 & 1) != 0) &&
           (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
          native_sub_4327ec();
        }
        lVar5 = *(long *)(*(long *)(_UICamera_TypeInfo_12d6410 + 0xb8) + 0x198);
        if (lVar5 == 0) goto LAB_00c98630;
        if (*(uint *)(lVar5 + 0x18) <= (uint)lVar4) {
          native_System_ThrowHelper__ThrowArgumentOutOfRangeException_9fe0f4(0);
        }
        lVar5 = *(long *)(*(long *)(lVar5 + 0x10) + lVar4 * 8 + 0x20);
        if (lVar5 == 0) goto LAB_00c98630;
        uVar6 = *(undefined8 *)(lVar5 + 0x58);
        if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
           (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
          native_sub_4327ec();
        }
        uVar2 = native_UnityEngine_Object__op_Inequality_8d76fc(uVar6,0,0);
        iVar7 = iVar7 + (uVar2 & 1);
        if (iVar1 <= (int)((uint)lVar4 + 1)) break;
        lVar4 = lVar4 + 1;
      }
    }
    uVar2 = 0;
    while( true ) {
      if (((*(byte *)(_UICamera_TypeInfo_12d6410 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
        native_sub_4327ec();
      }
      lVar5 = *(long *)(_UICamera_TypeInfo_12d6410 + 0xb8);
      lVar4 = *(long *)(lVar5 + 0x188);
      if (lVar4 == 0) goto LAB_00c98630;
      if (*(int *)(lVar4 + 0x18) <= (int)uVar2) break;
      if (((*(ushort *)(_UICamera_TypeInfo_12d6410 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
        native_sub_4327ec();
        lVar4 = *(long *)(*(long *)(_UICamera_TypeInfo_12d6410 + 0xb8) + 0x188);
        if (lVar4 == 0) goto LAB_00c98630;
      }
      if (*(uint *)(lVar4 + 0x18) <= uVar2) {
        uVar6 = native_sub_43283c();
                    /* WARNING: Subroutine does not return */
        native_sub_4327dc(uVar6,0);
      }
      lVar4 = *(long *)(lVar4 + (long)(int)uVar2 * 8 + 0x20);
      if (lVar4 == 0) goto LAB_00c98630;
      uVar6 = *(undefined8 *)(lVar4 + 0x58);
      if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
        native_sub_4327ec();
      }
      uVar3 = native_UnityEngine_Object__op_Inequality_8d76fc(uVar6,0,0);
      iVar7 = iVar7 + (uVar3 & 1);
      uVar2 = uVar2 + 1;
    }
    if (((*(ushort *)(_UICamera_TypeInfo_12d6410 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
      native_sub_4327ec();
      lVar5 = *(long *)(_UICamera_TypeInfo_12d6410 + 0xb8);
    }
    if (*(long *)(lVar5 + 400) != 0) {
      uVar6 = *(undefined8 *)(*(long *)(lVar5 + 400) + 0x58);
      if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
        native_sub_4327ec();
      }
      uVar2 = native_UnityEngine_Object__op_Inequality_8d76fc(uVar6,0,0);
      return iVar7 + (uVar2 & 1);
    }
  }
LAB_00c98630:
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* UICamera$$get_mainCamera @ 0xc98640
 * UnityEngine_Camera_o* UICamera__get_mainCamera (const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UICamera$$get_mainCamera
   UnityEngine_Camera_o* UICamera__get_mainCamera (const MethodInfo* method); */

undefined8 native_UICamera__get_mainCamera_c98640(void)

{
  long lVar1;
  ulong uVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  
  if ((bRam00000000013428cd & 1) == 0) {
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    native_sub_43273c(&UICamera_TypeInfo_12d6410);
    bRam00000000013428cd = 1;
  }
  if (((*(byte *)(_UICamera_TypeInfo_12d6410 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  lVar1 = native_UICamera__get_eventHandler_c950c8();
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec(_UnityEngine_Object_TypeInfo_12d54e0);
  }
  uVar2 = native_UnityEngine_Object__op_Inequality_8d76fc(lVar1,0,0);
  if ((uVar2 & 1) != 0) {
    if (lVar1 != 0) {
      if ((bRam00000000013428bc & 1) == 0) {
        native_sub_43273c(&Method_UnityEngine_Component_GetComponent_Camera____12e29a8);
        native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
        bRam00000000013428bc = 1;
      }
      puVar3 = (undefined8 *)(lVar1 + 0x90);
      uVar4 = *puVar3;
      if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
        native_sub_4327ec();
      }
      uVar2 = native_UnityEngine_Object__op_Equality_8e9a3c(uVar4,0,0);
      if ((uVar2 & 1) != 0) {
        uVar4 = native_UnityEngine_Component__GetComponent_ActiveAnimation__49daec
                          (lVar1,_Method_UnityEngine_Component_GetComponent_Camera____12e29a8);
        *(undefined8 *)(lVar1 + 0x90) = uVar4;
        native_sub_4326e0(puVar3,uVar4);
      }
      return *puVar3;
    }
                    /* WARNING: Subroutine does not return */
    native_sub_432810();
  }
  return 0;
}



/* UICamera$$get_eventHandler @ 0xc950c8
 * UICamera_o* UICamera__get_eventHandler (const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UICamera$$get_eventHandler
   UICamera_o* UICamera__get_eventHandler (const MethodInfo* method); */

long native_UICamera__get_eventHandler_c950c8(void)

{
  ulong uVar1;
  undefined8 uVar2;
  long lVar3;
  ulong uVar4;
  
  if ((bRam00000000013428ce & 1) == 0) {
    native_sub_43273c(&NGUITools_TypeInfo_12d53c8);
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    native_sub_43273c(&UICamera_TypeInfo_12d6410);
    bRam00000000013428ce = 1;
  }
  uVar4 = 0;
  while( true ) {
    if (((*(byte *)(_UICamera_TypeInfo_12d6410 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    lVar3 = **(long **)(_UICamera_TypeInfo_12d6410 + 0xb8);
    if (lVar3 == 0) break;
    if ((long)*(int *)(lVar3 + 0x18) <= (long)uVar4) {
      return 0;
    }
    if (((*(byte *)(_UICamera_TypeInfo_12d6410 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
      native_sub_4327ec();
      lVar3 = **(long **)(_UICamera_TypeInfo_12d6410 + 0xb8);
      if (lVar3 == 0) break;
    }
    lVar3 = *(long *)(lVar3 + 0x10);
    if (lVar3 == 0) break;
    if (*(uint *)(lVar3 + 0x18) <= uVar4) {
      uVar2 = native_sub_43283c();
                    /* WARNING: Subroutine does not return */
      native_sub_4327dc(uVar2,0);
    }
    lVar3 = *(long *)(lVar3 + uVar4 * 8 + 0x20);
    if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    uVar1 = native_UnityEngine_Object__op_Equality_8e9a3c(lVar3,0,0);
    if ((uVar1 & 1) == 0) {
      if (lVar3 == 0) break;
      uVar1 = native_UnityEngine_Behaviour__get_enabled_8d7acc(lVar3,0);
      if ((uVar1 & 1) != 0) {
        uVar2 = native_UnityEngine_Component__get_gameObject_8da66c(lVar3,0);
        if (((*(byte *)(_NGUITools_TypeInfo_12d53c8 + 0x133) >> 2 & 1) != 0) &&
           (*(int *)(_NGUITools_TypeInfo_12d53c8 + 0xe0) == 0)) {
          native_sub_4327ec(_NGUITools_TypeInfo_12d53c8);
        }
        uVar1 = native_NGUITools__GetActive_72d0d4(uVar2,0);
        if ((uVar1 & 1) != 0) {
          return lVar3;
        }
      }
    }
    uVar4 = uVar4 + 1;
  }
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* UICamera$$CompareFunc @ 0xc98700
 * int32_t UICamera__CompareFunc (UICamera_o* a, UICamera_o* b, const MethodInfo* method); */

/* UICamera$$CompareFunc
   int32_t UICamera__CompareFunc (UICamera_o* a, UICamera_o* b, const MethodInfo* method); */

int native_UICamera__CompareFunc_c98700(long param_1,long param_2)

{
  long lVar1;
  float fVar2;
  float fVar3;
  
  if ((((param_1 != 0) && (lVar1 = native_UICamera__get_cachedCamera_c95254(), lVar1 != 0)) &&
      (fVar2 = (float)native_UnityEngine_Camera__get_depth_8d87e0(lVar1,0), param_2 != 0)) &&
     (lVar1 = native_UICamera__get_cachedCamera_c95254(param_2), lVar1 != 0)) {
    fVar3 = (float)native_UnityEngine_Camera__get_depth_8d87e0(lVar1,0);
    if (fVar2 < fVar3) {
      return 1;
    }
    lVar1 = native_UICamera__get_cachedCamera_c95254(param_1);
    if (lVar1 != 0) {
      fVar2 = (float)native_UnityEngine_Camera__get_depth_8d87e0(lVar1,0);
      lVar1 = native_UICamera__get_cachedCamera_c95254(param_2);
      if (lVar1 != 0) {
        fVar3 = (float)native_UnityEngine_Camera__get_depth_8d87e0(lVar1,0);
        return -(uint)(fVar3 < fVar2);
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* UICamera$$FindRootRigidbody @ 0xc987a0
 * UnityEngine_Rigidbody_o* UICamera__FindRootRigidbody (UnityEngine_Transform_o* trans, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UICamera$$FindRootRigidbody
   UnityEngine_Rigidbody_o* UICamera__FindRootRigidbody (UnityEngine_Transform_o* trans, const
   MethodInfo* method); */

undefined8 native_UICamera__FindRootRigidbody_c987a0(long param_1)

{
  undefined8 uVar1;
  ulong uVar2;
  
  if ((bRam00000000013428cf & 1) == 0) {
    native_sub_43273c(&Method_UnityEngine_Component_GetComponent_Rigidbody____12e2ae0);
    native_sub_43273c(&Method_UnityEngine_Component_GetComponent_UIPanel____12e2be0);
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    bRam00000000013428cf = 1;
  }
  while( true ) {
    if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    uVar2 = native_UnityEngine_Object__op_Inequality_8d76fc(param_1,0,0);
    if ((uVar2 & 1) == 0) {
      return 0;
    }
    if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
      native_sub_432810();
    }
    uVar1 = native_UnityEngine_Component__GetComponent_ActiveAnimation__49daec
                      (param_1,_Method_UnityEngine_Component_GetComponent_UIPanel____12e2be0);
    if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
      native_sub_4327ec(_UnityEngine_Object_TypeInfo_12d54e0);
    }
    uVar2 = native_UnityEngine_Object__op_Inequality_8d76fc(uVar1,0,0);
    if ((uVar2 & 1) != 0) break;
    uVar1 = native_UnityEngine_Component__GetComponent_ActiveAnimation__49daec
                      (param_1,_Method_UnityEngine_Component_GetComponent_Rigidbody____12e2ae0);
    if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
      native_sub_4327ec(_UnityEngine_Object_TypeInfo_12d54e0);
    }
    uVar2 = native_UnityEngine_Object__op_Inequality_8d76fc(uVar1,0,0);
    if ((uVar2 & 1) != 0) {
      return uVar1;
    }
    param_1 = native_UnityEngine_Transform__get_parent_765eb0(param_1,0);
  }
  return 0;
}



/* UICamera$$FindRootRigidbody2D @ 0xc988e4
 * UnityEngine_Rigidbody2D_o* UICamera__FindRootRigidbody2D (UnityEngine_Transform_o* trans, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UICamera$$FindRootRigidbody2D
   UnityEngine_Rigidbody2D_o* UICamera__FindRootRigidbody2D (UnityEngine_Transform_o* trans, const
   MethodInfo* method); */

undefined8 native_UICamera__FindRootRigidbody2D_c988e4(long param_1)

{
  undefined8 uVar1;
  ulong uVar2;
  
  if ((bRam00000000013428d0 & 1) == 0) {
    native_sub_43273c(&Method_UnityEngine_Component_GetComponent_Rigidbody2D____12e2ae8);
    native_sub_43273c(&Method_UnityEngine_Component_GetComponent_UIPanel____12e2be0);
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    bRam00000000013428d0 = 1;
  }
  while( true ) {
    if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    uVar2 = native_UnityEngine_Object__op_Inequality_8d76fc(param_1,0,0);
    if ((uVar2 & 1) == 0) {
      return 0;
    }
    if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
      native_sub_432810();
    }
    uVar1 = native_UnityEngine_Component__GetComponent_ActiveAnimation__49daec
                      (param_1,_Method_UnityEngine_Component_GetComponent_UIPanel____12e2be0);
    if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
      native_sub_4327ec(_UnityEngine_Object_TypeInfo_12d54e0);
    }
    uVar2 = native_UnityEngine_Object__op_Inequality_8d76fc(uVar1,0,0);
    if ((uVar2 & 1) != 0) break;
    uVar1 = native_UnityEngine_Component__GetComponent_ActiveAnimation__49daec
                      (param_1,_Method_UnityEngine_Component_GetComponent_Rigidbody2D____12e2ae8);
    if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
      native_sub_4327ec(_UnityEngine_Object_TypeInfo_12d54e0);
    }
    uVar2 = native_UnityEngine_Object__op_Inequality_8d76fc(uVar1,0,0);
    if ((uVar2 & 1) != 0) {
      return uVar1;
    }
    param_1 = native_UnityEngine_Transform__get_parent_765eb0(param_1,0);
  }
  return 0;
}



/* UICamera$$Raycast @ 0xc98a28
 * void UICamera__Raycast (UICamera_MouseOrTouch_o* touch, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UICamera$$Raycast
   void UICamera__Raycast (UICamera_MouseOrTouch_o* touch, const MethodInfo* method); */

void native_UICamera__Raycast_c98a28(long param_1)

{
  ulong uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  if ((bRam00000000013428d1 & 1) == 0) {
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    native_sub_43273c(&UICamera_TypeInfo_12d6410);
    bRam00000000013428d1 = 1;
  }
  if (param_1 != 0) {
    uVar4 = *(undefined4 *)(param_1 + 0x14);
    uVar5 = *(undefined4 *)(param_1 + 0x18);
    if (((*(byte *)(_UICamera_TypeInfo_12d6410 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    uVar1 = native_UICamera__Raycast_c98bd0(uVar4,uVar5,0);
    if ((uVar1 & 1) == 0) {
      if (((*(byte *)(_UICamera_TypeInfo_12d6410 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
        native_sub_4327ec();
      }
      lVar2 = *(long *)(_UICamera_TypeInfo_12d6410 + 0xb8);
      *(undefined8 *)(lVar2 + 0x1d8) = *(undefined8 *)(lVar2 + 0xf8);
      native_sub_4326e0(lVar2 + 0x1d8);
    }
    if (((*(byte *)(_UICamera_TypeInfo_12d6410 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    uVar3 = *(undefined8 *)(*(long *)(_UICamera_TypeInfo_12d6410 + 0xb8) + 0x1d8);
    if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
      native_sub_4327ec(_UnityEngine_Object_TypeInfo_12d54e0);
    }
    uVar1 = native_UnityEngine_Object__op_Equality_8e9a3c(uVar3,0,0);
    if ((uVar1 & 1) != 0) {
      if (((*(byte *)(_UICamera_TypeInfo_12d6410 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
        native_sub_4327ec();
      }
      lVar2 = *(long *)(_UICamera_TypeInfo_12d6410 + 0xb8);
      *(undefined8 *)(lVar2 + 0x1d8) = *(undefined8 *)(lVar2 + 0xf0);
      native_sub_4326e0(lVar2 + 0x1d8);
    }
    *(undefined8 *)(param_1 + 0x40) = *(undefined8 *)(param_1 + 0x48);
    native_sub_4326e0(param_1 + 0x40);
    if (((*(byte *)(_UICamera_TypeInfo_12d6410 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    *(undefined8 *)(param_1 + 0x48) =
         *(undefined8 *)(*(long *)(_UICamera_TypeInfo_12d6410 + 0xb8) + 0x1d8);
    native_sub_4326e0((undefined8 *)(param_1 + 0x48));
    *(undefined8 *)(*(long *)(_UICamera_TypeInfo_12d6410 + 0xb8) + 0x5c) =
         *(undefined8 *)(param_1 + 0x14);
    return;
  }
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* UICamera$$Raycast @ 0xc98bd0
 * bool UICamera__Raycast (UnityEngine_Vector3_o inPos, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UICamera$$Raycast
   bool UICamera__Raycast (UnityEngine_Vector3_o inPos, const MethodInfo* method); */

undefined8 native_UICamera__Raycast_c98bd0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  ushort uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  long lVar8;
  long *plVar9;
  ulong uVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  uint uVar14;
  float fVar15;
  float fVar16;
  undefined4 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined4 uVar23;
  undefined4 uVar24;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined1 auStack_198 [72];
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  float fStack_114;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  char cStack_b8;
  
  if ((bRam00000000013428d2 & 1) == 0) {
    native_sub_43273c(&Method_BetterList_UICamera_DepthEntry__Add___12d8a70);
    native_sub_43273c(&Method_BetterList_UICamera_DepthEntry__Clear___12d8a78);
    native_sub_43273c(&Method_BetterList_UICamera_DepthEntry__Sort___12d8a80);
    native_sub_43273c(&UnityEngine_Collider2D___TypeInfo_12d3098);
    native_sub_43273c(&Method_BetterList_CompareFunc_UICamera_DepthEntry___ctor___12d8af8);
    native_sub_43273c(&BetterList_CompareFunc_UICamera_DepthEntry__TypeInfo_12d21a8);
    native_sub_43273c(&Method_UnityEngine_GameObject_GetComponentInParent_Rigidbody____12e4b38);
    native_sub_43273c(&Method_UnityEngine_GameObject_GetComponent_UIWidget____12e4ae8);
    native_sub_43273c(&Method_NGUITools_FindInParents_UIRect____12e5770);
    native_sub_43273c(&NGUITools_TypeInfo_12d53c8);
    native_sub_43273c(&Method_System_Nullable_UISpriteCollection_Sprite__get_HasValue___12dda78);
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    native_sub_43273c(&UnityEngine_Physics2D_TypeInfo_12d5670);
    native_sub_43273c(&UnityEngine_RaycastHit___TypeInfo_12d3318);
    native_sub_43273c(&Method_UICamera___c__Raycast_b__190_0___12ea148);
    native_sub_43273c(&Method_UICamera___c__Raycast_b__190_1___12ea150);
    native_sub_43273c(&UICamera___c_TypeInfo_12d79d8);
    native_sub_43273c(&UICamera_TypeInfo_12d6410);
    native_sub_43273c(&UISpriteCollection_TypeInfo_12d64c8);
    bRam00000000013428d2 = 1;
  }
  uStack_110 = 0;
  uStack_108 = 0;
  uStack_100 = 0;
  fStack_114 = 0.0;
  uVar14 = 0;
LAB_00c98d50:
  if (((*(byte *)(_UICamera_TypeInfo_12d6410 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  lVar11 = **(long **)(_UICamera_TypeInfo_12d6410 + 0xb8);
  if (lVar11 == 0) goto LAB_00c9a45c;
  if (*(int *)(lVar11 + 0x18) <= (int)uVar14) {
    return 0;
  }
  if (((*(byte *)(_UICamera_TypeInfo_12d6410 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
    native_sub_4327ec();
    lVar11 = **(long **)(_UICamera_TypeInfo_12d6410 + 0xb8);
    if (lVar11 == 0) goto LAB_00c9a45c;
  }
  lVar11 = *(long *)(lVar11 + 0x10);
  if (lVar11 == 0) goto LAB_00c9a45c;
  if (*(uint *)(lVar11 + 0x18) <= uVar14) goto LAB_00c9a460;
  lVar11 = *(long *)(lVar11 + (long)(int)uVar14 * 8 + 0x20);
  if (lVar11 == 0) goto LAB_00c9a45c;
  uVar5 = native_UnityEngine_Behaviour__get_enabled_8d7acc(lVar11,0);
  if ((uVar5 & 1) == 0) goto LAB_00c99f78;
  uVar6 = native_UnityEngine_Component__get_gameObject_8da66c(lVar11,0);
  if (((*(byte *)(_NGUITools_TypeInfo_12d53c8 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_NGUITools_TypeInfo_12d53c8 + 0xe0) == 0)) {
    native_sub_4327ec(_NGUITools_TypeInfo_12d53c8);
  }
  uVar5 = native_NGUITools__GetActive_72d0d4(uVar6,0);
  if ((uVar5 & 1) == 0) goto LAB_00c99f78;
  uVar6 = native_UICamera__get_cachedCamera_c95254(lVar11);
  if (((*(byte *)(_UICamera_TypeInfo_12d6410 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
    native_sub_4327ec(_UICamera_TypeInfo_12d6410);
  }
  puVar7 = (undefined8 *)(*(long *)(_UICamera_TypeInfo_12d6410 + 0xb8) + 0xc0);
  *puVar7 = uVar6;
  native_sub_4326e0(puVar7,uVar6);
  lVar8 = *(long *)(*(long *)(_UICamera_TypeInfo_12d6410 + 0xb8) + 0xc0);
  if (lVar8 == 0) goto LAB_00c9a45c;
  iVar2 = native_UnityEngine_Camera__get_targetDisplay_8d8d88(lVar8,0);
  if (iVar2 != 0) goto LAB_00c99f78;
  if (((*(byte *)(_UICamera_TypeInfo_12d6410 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  lVar8 = *(long *)(*(long *)(_UICamera_TypeInfo_12d6410 + 0xb8) + 0xc0);
  if (lVar8 == 0) goto LAB_00c9a45c;
  uVar6 = param_2;
  fVar15 = (float)native_UnityEngine_Camera__ScreenToViewportPoint_8d9178
                            (param_1,param_2,param_3,lVar8,0);
  uVar5 = native_System_Single__IsNaN_af8684(0);
  if ((uVar5 & 1) != 0) goto LAB_00c99f78;
  uVar5 = native_System_Single__IsNaN_af8684(uVar6,0);
  if ((((1.0 < (float)uVar6) || ((float)uVar6 < 0.0)) || (1.0 < fVar15)) ||
     ((fVar15 < 0.0 || ((uVar5 & 1) != 0)))) goto LAB_00c99f78;
  if (((*(byte *)(_UICamera_TypeInfo_12d6410 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  lVar8 = *(long *)(*(long *)(_UICamera_TypeInfo_12d6410 + 0xb8) + 0xc0);
  if (lVar8 == 0) goto LAB_00c9a45c;
  uVar6 = param_2;
  uVar18 = param_3;
  native_UnityEngine_Camera__ScreenPointToRay_8d9368(&uStack_f0,param_1,lVar8,0);
  uStack_100 = uStack_e0;
  uStack_108 = uStack_e8;
  uStack_110 = uStack_f0;
  lVar8 = *(long *)(*(long *)(_UICamera_TypeInfo_12d6410 + 0xb8) + 0xc0);
  if (lVar8 == 0) goto LAB_00c9a45c;
  uVar3 = native_UnityEngine_Camera__get_cullingMask_8d88b0(lVar8,0);
  uVar4 = native_UnityEngine_LayerMask__op_Implicit_8dfe08(*(undefined4 *)(lVar11 + 0x20),0);
  fVar15 = *(float *)(lVar11 + 0x48);
  if (*(float *)(lVar11 + 0x48) <= 0.0) {
    if (((*(byte *)(_UICamera_TypeInfo_12d6410 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    lVar8 = *(long *)(*(long *)(_UICamera_TypeInfo_12d6410 + 0xb8) + 0xc0);
    if (lVar8 == 0) goto LAB_00c9a45c;
    fVar15 = (float)native_UnityEngine_Camera__get_farClipPlane_8d8510(lVar8,0);
    lVar8 = *(long *)(*(long *)(_UICamera_TypeInfo_12d6410 + 0xb8) + 0xc0);
    if (lVar8 == 0) goto LAB_00c9a45c;
    fVar16 = (float)native_UnityEngine_Camera__get_nearClipPlane_8d8480(lVar8,0);
    fVar15 = fVar15 - fVar16;
  }
  fStack_114 = fVar15;
  uVar23 = (undefined4)uVar18;
  if (3 < *(uint *)(lVar11 + 0x18)) goto LAB_00c99f78;
  uVar4 = uVar4 & uVar3;
  switch(*(uint *)(lVar11 + 0x18)) {
  case 0:
    uStack_e0 = uStack_100;
    uStack_e8 = uStack_108;
    uStack_f0 = uStack_110;
    if (((*(byte *)(_UICamera_TypeInfo_12d6410 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    lVar8 = _UICamera_TypeInfo_12d6410;
    lVar12 = *(long *)(_UICamera_TypeInfo_12d6410 + 0xb8);
    *(undefined8 *)(lVar12 + 0x80) = uStack_e0;
    *(undefined8 *)(lVar12 + 0x78) = uStack_e8;
    *(undefined8 *)(lVar12 + 0x70) = uStack_f0;
    uStack_120 = uStack_100;
    uStack_128 = uStack_108;
    uStack_130 = uStack_110;
    uVar6 = uStack_110;
    uVar5 = native_UnityEngine_Physics__Raycast_dbb964
                      (fStack_114,&uStack_130,*(long *)(lVar8 + 0xb8) + 0x88,uVar4,1,0);
    uVar24 = (undefined4)uVar6;
    if ((uVar5 & 1) == 0) break;
    if (((*(byte *)(_UICamera_TypeInfo_12d6410 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    uVar17 = native_UnityEngine_RaycastHit__get_point_dbcdc0
                       (*(long *)(_UICamera_TypeInfo_12d6410 + 0xb8) + 0x88,0);
    lVar8 = _UICamera_TypeInfo_12d6410;
    lVar12 = *(long *)(_UICamera_TypeInfo_12d6410 + 0xb8);
    *(undefined4 *)(lVar12 + 100) = uVar17;
    *(undefined4 *)(lVar12 + 0x68) = uVar24;
    *(undefined4 *)(lVar12 + 0x6c) = uVar23;
    lVar8 = native_UnityEngine_RaycastHit__get_collider_dbcd08(*(long *)(lVar8 + 0xb8) + 0x88,0);
    if (lVar8 == 0) goto LAB_00c9a45c;
    uVar6 = native_UnityEngine_Component__get_gameObject_8da66c(lVar8,0);
    lVar8 = *(long *)(_UICamera_TypeInfo_12d6410 + 0xb8);
    *(undefined8 *)(lVar8 + 0x1d8) = uVar6;
    native_sub_4326e0(lVar8 + 0x1d8);
    if (*(char *)(lVar11 + 0x1c) != '\0') {
      return 1;
    }
    if (((*(byte *)(_UICamera_TypeInfo_12d6410 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    lVar11 = *(long *)(*(long *)(_UICamera_TypeInfo_12d6410 + 0xb8) + 0x1d8);
    if ((lVar11 == 0) ||
       (lVar11 = native_UnityEngine_GameObject__get_gameObject_8debb8(lVar11,0), lVar11 == 0))
    goto LAB_00c9a45c;
    lVar11 = native_UnityEngine_GameObject__GetComponentInParent_Canvas__4a23c0
                       (lVar11,
                        _Method_UnityEngine_GameObject_GetComponentInParent_Rigidbody____12e4b38);
code_r0x00c9a318:
    if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
      native_sub_4327ec(_UnityEngine_Object_TypeInfo_12d54e0);
    }
    uVar5 = native_UnityEngine_Object__op_Inequality_8d76fc(lVar11,0,0);
    if ((uVar5 & 1) == 0) {
      return 1;
    }
    if (lVar11 == 0) goto LAB_00c9a45c;
    lVar11 = native_UnityEngine_Component__get_gameObject_8da66c(lVar11,0);
    if (((*(byte *)(_UICamera_TypeInfo_12d6410 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
      native_sub_4327ec(_UICamera_TypeInfo_12d6410);
    }
    lVar8 = *(long *)(_UICamera_TypeInfo_12d6410 + 0xb8);
    goto code_r0x00c9a384;
  case 1:
    if (((*(byte *)(_UICamera_TypeInfo_12d6410 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    if (*(long *)(*(long *)(_UICamera_TypeInfo_12d6410 + 0xb8) + 0x240) == 0) {
      uVar6 = native_sub_432750(_UnityEngine_RaycastHit___TypeInfo_12d3318,0x32);
      if (((*(byte *)(_UICamera_TypeInfo_12d6410 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
        native_sub_4327ec(_UICamera_TypeInfo_12d6410);
      }
      lVar11 = *(long *)(_UICamera_TypeInfo_12d6410 + 0xb8);
      *(undefined8 *)(lVar11 + 0x240) = uVar6;
      native_sub_4326e0(lVar11 + 0x240,uVar6);
    }
    uStack_e0 = uStack_100;
    uStack_e8 = uStack_108;
    uStack_f0 = uStack_110;
    if (((*(byte *)(_UICamera_TypeInfo_12d6410 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    uStack_140 = uStack_e0;
    uStack_148 = uStack_e8;
    uStack_150 = uStack_f0;
    uVar6 = uStack_f0;
    iVar2 = native_UnityEngine_Physics__RaycastNonAlloc_dbc0cc
                      (fStack_114,&uStack_150,
                       *(undefined8 *)(*(long *)(_UICamera_TypeInfo_12d6410 + 0xb8) + 0x240),uVar4,2
                       ,0);
    uVar23 = (undefined4)uVar18;
    if (1 < iVar2) {
      uVar5 = 0;
      lVar11 = 0x20;
      uVar1 = (ushort)(*(byte *)(_UICamera_TypeInfo_12d6410 + 0x133) >> 2);
code_r0x00c99554:
      if (((uVar1 & 1) != 0) && (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
        native_sub_4327ec();
      }
      lVar8 = *(long *)(*(long *)(_UICamera_TypeInfo_12d6410 + 0xb8) + 0x240);
      if (lVar8 == 0) goto LAB_00c9a45c;
      if (*(uint *)(lVar8 + 0x18) <= uVar5) goto LAB_00c9a460;
      lVar8 = native_UnityEngine_RaycastHit__get_collider_dbcd08(lVar8 + lVar11,0);
      if ((lVar8 == 0) ||
         (lVar8 = native_UnityEngine_Component__get_gameObject_8da66c(lVar8,0), lVar8 == 0))
      goto LAB_00c9a45c;
      plVar9 = (long *)native_UnityEngine_GameObject__GetComponent_BE2_BlockSectionHeader_Custom__4a2214
                                 (lVar8,
                                  _Method_UnityEngine_GameObject_GetComponent_UIWidget____12e4ae8);
      if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
        native_sub_4327ec(_UnityEngine_Object_TypeInfo_12d54e0);
      }
      uVar10 = native_UnityEngine_Object__op_Inequality_8d76fc(plVar9,0,0);
      if ((uVar10 & 1) == 0) {
        if (((*(byte *)(_NGUITools_TypeInfo_12d53c8 + 0x133) >> 2 & 1) != 0) &&
           (*(int *)(_NGUITools_TypeInfo_12d53c8 + 0xe0) == 0)) {
          native_sub_4327ec();
        }
        lVar12 = native_NGUITools__FindInParents_object__4a5c04
                           (lVar8,_Method_NGUITools_FindInParents_UIRect____12e5770);
        if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
           (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
          native_sub_4327ec(_UnityEngine_Object_TypeInfo_12d54e0);
        }
        uVar10 = native_UnityEngine_Object__op_Inequality_8d76fc(lVar12,0,0);
        if ((uVar10 & 1) != 0) {
          if (lVar12 != 0) {
            if (*(float *)(lVar12 + 0x8c) < 0.001) goto code_r0x00c99894;
            goto code_r0x00c99708;
          }
          goto LAB_00c9a45c;
        }
      }
      else {
        if (plVar9 == (long *)0x0) goto LAB_00c9a45c;
        uVar10 = native_UIWidget__get_isVisible_9499c8(plVar9,0);
        if ((uVar10 & 1) == 0) goto code_r0x00c99894;
        if (((*(byte *)(_UISpriteCollection_TypeInfo_12d64c8 + 300) <= *(byte *)(*plVar9 + 300)) &&
            (*(long *)(*(long *)(*plVar9 + 200) +
                       (ulong)*(byte *)(_UISpriteCollection_TypeInfo_12d64c8 + 300) * 8 + -8) ==
             _UISpriteCollection_TypeInfo_12d64c8)) &&
           (native_UISpriteCollection__GetCurrentSprite_c395a4(&uStack_f0,plVar9,0),
           cStack_b8 == '\0')) goto code_r0x00c99894;
        lVar12 = plVar9[0x1d];
        if (lVar12 != 0) {
          if (((*(byte *)(_UICamera_TypeInfo_12d6410 + 0x133) >> 2 & 1) != 0) &&
             (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
            native_sub_4327ec();
          }
          lVar13 = *(long *)(*(long *)(_UICamera_TypeInfo_12d6410 + 0xb8) + 0x240);
          if (lVar13 == 0) goto LAB_00c9a45c;
          if (*(uint *)(lVar13 + 0x18) <= uVar5) goto LAB_00c9a460;
          native_UnityEngine_RaycastHit__get_point_dbcdc0(lVar13 + lVar11,0);
          uVar10 = native_UIWidget_HitCheck__Invoke_55b6bc(lVar12,0);
          if ((uVar10 & 1) == 0) goto code_r0x00c99894;
        }
      }
code_r0x00c99708:
      if (((*(byte *)(_UICamera_TypeInfo_12d6410 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
        native_sub_4327ec();
      }
      if (((*(byte *)(_NGUITools_TypeInfo_12d53c8 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_NGUITools_TypeInfo_12d53c8 + 0xe0) == 0)) {
        native_sub_4327ec();
      }
      uVar23 = native_NGUITools__CalculateRaycastDepth_72f14c(lVar8,0);
      lVar8 = _UICamera_TypeInfo_12d6410;
      plVar9 = (long *)(_UICamera_TypeInfo_12d6410 + 0xb8);
      *(undefined4 *)(*plVar9 + 0x1f0) = uVar23;
      lVar12 = *plVar9;
      if (*(int *)(lVar12 + 0x1f0) != 0x7fffffff) {
        if (((*(byte *)(lVar8 + 0x133) >> 2 & 1) != 0) && (*(int *)(lVar8 + 0xe0) == 0)) {
          native_sub_4327ec(lVar8);
          plVar9 = (long *)(_UICamera_TypeInfo_12d6410 + 0xb8);
          lVar12 = *plVar9;
        }
        lVar8 = *(long *)(lVar12 + 0x240);
        if (lVar8 == 0) goto LAB_00c9a45c;
        if (*(uint *)(lVar8 + 0x18) <= uVar5) goto LAB_00c9a460;
        puVar7 = (undefined8 *)(lVar8 + lVar11);
        uVar6 = puVar7[4];
        uVar20 = puVar7[1];
        uVar19 = *puVar7;
        uVar22 = puVar7[3];
        uVar21 = puVar7[2];
        *(undefined4 *)(lVar12 + 0x21c) = *(undefined4 *)(puVar7 + 5);
        *(undefined8 *)(lVar12 + 0x214) = uVar6;
        *(undefined8 *)(lVar12 + 0x20c) = uVar22;
        *(undefined8 *)(lVar12 + 0x204) = uVar21;
        *(undefined8 *)(lVar12 + 0x1fc) = uVar20;
        *(undefined8 *)(lVar12 + 500) = uVar19;
        lVar8 = *(long *)(*plVar9 + 0x240);
        if (lVar8 == 0) goto LAB_00c9a45c;
        if (*(uint *)(lVar8 + 0x18) <= uVar5) goto LAB_00c9a460;
        uVar23 = native_UnityEngine_RaycastHit__get_point_dbcdc0(lVar8 + lVar11,0);
        lVar8 = _UICamera_TypeInfo_12d6410;
        lVar12 = *(long *)(_UICamera_TypeInfo_12d6410 + 0xb8);
        *(undefined4 *)(lVar12 + 0x220) = uVar23;
        *(int *)(lVar12 + 0x224) = (int)uVar21;
        *(int *)(lVar12 + 0x228) = (int)uVar18;
        lVar8 = *(long *)(*(long *)(lVar8 + 0xb8) + 0x240);
        if (lVar8 == 0) goto LAB_00c9a45c;
        if (*(uint *)(lVar8 + 0x18) <= uVar5) goto LAB_00c9a460;
        lVar8 = native_UnityEngine_RaycastHit__get_collider_dbcd08(lVar8 + lVar11,0);
        if (lVar8 == 0) goto LAB_00c9a45c;
        uVar6 = native_UnityEngine_Component__get_gameObject_8da66c(lVar8,0);
        lVar8 = *(long *)(_UICamera_TypeInfo_12d6410 + 0xb8);
        *(undefined8 *)(lVar8 + 0x230) = uVar6;
        native_sub_4326e0(lVar8 + 0x230);
        lVar8 = *(long *)(*(long *)(_UICamera_TypeInfo_12d6410 + 0xb8) + 0x238);
        func_0x002ca3e0(auStack_198,*(long *)(_UICamera_TypeInfo_12d6410 + 0xb8) + 0x1f0,0x48);
        uVar6 = _Method_BetterList_UICamera_DepthEntry__Add___12d8a70;
        if (lVar8 == 0) goto LAB_00c9a45c;
        func_0x002ca3e0(&uStack_f0,auStack_198,0x48);
        native_BetterList_UICamera_DepthEntry___Add_ba4ab0(lVar8,&uStack_f0,uVar6);
      }
code_r0x00c99894:
      uVar5 = uVar5 + 1;
      lVar11 = lVar11 + 0x2c;
      uVar1 = *(ushort *)(_UICamera_TypeInfo_12d6410 + 0x132) >> 10;
      if ((long)iVar2 <= (long)uVar5) goto code_r0x00c998b0;
      goto code_r0x00c99554;
    }
    if (iVar2 == 1) {
      if (((*(byte *)(_UICamera_TypeInfo_12d6410 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
        native_sub_4327ec();
      }
      lVar11 = *(long *)(*(long *)(_UICamera_TypeInfo_12d6410 + 0xb8) + 0x240);
      if (lVar11 == 0) goto LAB_00c9a45c;
      if (*(int *)(lVar11 + 0x18) == 0) goto LAB_00c9a460;
      lVar11 = native_UnityEngine_RaycastHit__get_collider_dbcd08(lVar11 + 0x20,0);
      if ((lVar11 == 0) ||
         (lVar11 = native_UnityEngine_Component__get_gameObject_8da66c(lVar11,0), lVar11 == 0))
      goto LAB_00c9a45c;
      lVar8 = native_UnityEngine_GameObject__GetComponent_BE2_BlockSectionHeader_Custom__4a2214
                        (lVar11,_Method_UnityEngine_GameObject_GetComponent_UIWidget____12e4ae8);
      if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
        native_sub_4327ec(_UnityEngine_Object_TypeInfo_12d54e0);
      }
      uVar5 = native_UnityEngine_Object__op_Inequality_8d76fc(lVar8,0,0);
      if ((uVar5 & 1) == 0) {
        if (((*(byte *)(_NGUITools_TypeInfo_12d53c8 + 0x133) >> 2 & 1) != 0) &&
           (*(int *)(_NGUITools_TypeInfo_12d53c8 + 0xe0) == 0)) {
          native_sub_4327ec();
        }
        lVar11 = native_NGUITools__FindInParents_object__4a5c04
                           (lVar11,_Method_NGUITools_FindInParents_UIRect____12e5770);
        if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
           (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
          native_sub_4327ec(_UnityEngine_Object_TypeInfo_12d54e0);
        }
        uVar5 = native_UnityEngine_Object__op_Inequality_8d76fc(lVar11,0,0);
        if ((uVar5 & 1) != 0) {
          if (lVar11 == 0) goto LAB_00c9a45c;
          if (*(float *)(lVar11 + 0x8c) < 0.001) break;
        }
      }
      else {
        if (lVar8 == 0) goto LAB_00c9a45c;
        uVar5 = native_UIWidget__get_isVisible_9499c8(lVar8,0);
        if ((uVar5 & 1) == 0) break;
        lVar11 = *(long *)(lVar8 + 0xe8);
        if (lVar11 != 0) {
          if (((*(byte *)(_UICamera_TypeInfo_12d6410 + 0x133) >> 2 & 1) != 0) &&
             (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
            native_sub_4327ec();
          }
          lVar8 = *(long *)(*(long *)(_UICamera_TypeInfo_12d6410 + 0xb8) + 0x240);
          if (lVar8 == 0) goto LAB_00c9a45c;
          if (*(int *)(lVar8 + 0x18) == 0) goto LAB_00c9a460;
          native_UnityEngine_RaycastHit__get_point_dbcdc0(lVar8 + 0x20,0);
          uVar5 = native_UIWidget_HitCheck__Invoke_55b6bc(lVar11,0);
          if ((uVar5 & 1) == 0) break;
        }
      }
      if (((*(byte *)(_UICamera_TypeInfo_12d6410 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
        native_sub_4327ec();
      }
      lVar11 = *(long *)(*(long *)(_UICamera_TypeInfo_12d6410 + 0xb8) + 0x240);
      if (lVar11 == 0) goto LAB_00c9a45c;
      if (*(int *)(lVar11 + 0x18) == 0) {
LAB_00c9a460:
        uVar6 = native_sub_43283c();
                    /* WARNING: Subroutine does not return */
        native_sub_4327dc(uVar6,0);
      }
      uVar18 = native_UnityEngine_RaycastHit__get_point_dbcdc0(lVar11 + 0x20,0);
      lVar11 = *(long *)(*(long *)(_UICamera_TypeInfo_12d6410 + 0xb8) + 0x240);
      if (lVar11 == 0) goto LAB_00c9a45c;
      if (*(int *)(lVar11 + 0x18) == 0) goto LAB_00c9a460;
      lVar11 = native_UnityEngine_RaycastHit__get_collider_dbcd08(lVar11 + 0x20,0);
      if (lVar11 == 0) goto LAB_00c9a45c;
      native_UnityEngine_Component__get_gameObject_8da66c(lVar11,0);
      uVar5 = native_UICamera__IsVisible_c9a56c(uVar18,uVar6);
      if ((uVar5 & 1) != 0) {
        if (((*(byte *)(_UICamera_TypeInfo_12d6410 + 0x133) >> 2 & 1) != 0) &&
           (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
          native_sub_4327ec();
        }
        lVar11 = _UICamera_TypeInfo_12d6410;
        lVar8 = *(long *)(_UICamera_TypeInfo_12d6410 + 0xb8);
        lVar12 = *(long *)(lVar8 + 0x240);
        if (lVar12 != 0) {
          if (*(int *)(lVar12 + 0x18) == 0) goto LAB_00c9a460;
          uVar6 = *(undefined8 *)(lVar12 + 0x40);
          uVar21 = *(undefined8 *)(lVar12 + 0x28);
          uVar20 = *(undefined8 *)(lVar12 + 0x20);
          uVar19 = *(undefined8 *)(lVar12 + 0x38);
          uVar18 = *(undefined8 *)(lVar12 + 0x30);
          *(undefined4 *)(lVar8 + 0xb0) = *(undefined4 *)(lVar12 + 0x48);
          *(undefined8 *)(lVar8 + 0xa8) = uVar6;
          *(undefined8 *)(lVar8 + 0xa0) = uVar19;
          *(undefined8 *)(lVar8 + 0x98) = uVar18;
          *(undefined8 *)(lVar8 + 0x90) = uVar21;
          *(undefined8 *)(lVar8 + 0x88) = uVar20;
          lVar8 = *(long *)(lVar11 + 0xb8);
          *(undefined8 *)(lVar8 + 0x80) = uStack_100;
          *(undefined8 *)(lVar8 + 0x78) = uStack_108;
          *(undefined8 *)(lVar8 + 0x70) = uStack_110;
          lVar11 = *(long *)(*(long *)(lVar11 + 0xb8) + 0x240);
          if (lVar11 == 0) goto LAB_00c9a45c;
          if (*(int *)(lVar11 + 0x18) == 0) goto LAB_00c9a460;
          uVar24 = native_UnityEngine_RaycastHit__get_point_dbcdc0(lVar11 + 0x20,0);
          lVar11 = _UICamera_TypeInfo_12d6410;
          lVar8 = *(long *)(_UICamera_TypeInfo_12d6410 + 0xb8);
          *(undefined4 *)(lVar8 + 100) = uVar24;
          *(int *)(lVar8 + 0x68) = (int)uVar20;
          *(undefined4 *)(lVar8 + 0x6c) = uVar23;
          lVar11 = native_UnityEngine_RaycastHit__get_collider_dbcd08
                             (*(long *)(lVar11 + 0xb8) + 0x88,0);
          if (lVar11 != 0) {
            lVar11 = native_UnityEngine_Component__get_gameObject_8da66c(lVar11,0);
            lVar8 = *(long *)(_UICamera_TypeInfo_12d6410 + 0xb8);
            *(long *)(lVar8 + 0x1d8) = lVar11;
            goto code_r0x00c9a454;
          }
        }
        goto LAB_00c9a45c;
      }
    }
    break;
  case 2:
    if (((*(byte *)(_UICamera_TypeInfo_12d6410 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    uStack_1a0 = uStack_100;
    uStack_1a8 = uStack_108;
    uStack_1b0 = uStack_110;
    uVar5 = native_UnityEngine_Plane__Raycast_8eb9a4
                      (*(long *)(_UICamera_TypeInfo_12d6410 + 0xb8) + 0x250,&uStack_1b0,&fStack_114,
                       0);
    if ((uVar5 & 1) != 0) {
      uVar18 = native_UnityEngine_Ray__GetPoint_7631f4(fStack_114,&uStack_110,0);
      if (((*(byte *)(_UnityEngine_Physics2D_TypeInfo_12d5670 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_UnityEngine_Physics2D_TypeInfo_12d5670 + 0xe0) == 0)) {
        native_sub_4327ec();
      }
      lVar8 = native_UnityEngine_Physics2D__OverlapPoint_db9e0c(uVar18,uVar6,uVar4,0);
      if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
        native_sub_4327ec(_UnityEngine_Object_TypeInfo_12d54e0);
      }
      uVar5 = native_UnityEngine_Object__op_Implicit_8e1b98(lVar8,0);
      if ((uVar5 & 1) != 0) {
        if (((*(byte *)(_UICamera_TypeInfo_12d6410 + 0x133) >> 2 & 1) != 0) &&
           (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
          native_sub_4327ec();
        }
        lVar12 = *(long *)(_UICamera_TypeInfo_12d6410 + 0xb8);
        *(int *)(lVar12 + 100) = (int)uVar18;
        *(int *)(lVar12 + 0x68) = (int)uVar6;
        *(undefined4 *)(lVar12 + 0x6c) = uVar23;
        if (lVar8 == 0) goto LAB_00c9a45c;
        uVar6 = native_UnityEngine_Component__get_gameObject_8da66c(lVar8,0);
        lVar8 = *(long *)(_UICamera_TypeInfo_12d6410 + 0xb8);
        *(undefined8 *)(lVar8 + 0x1d8) = uVar6;
        native_sub_4326e0(lVar8 + 0x1d8);
        if (*(char *)(lVar11 + 0x1c) != '\0') {
          return 1;
        }
        if (((*(byte *)(_UICamera_TypeInfo_12d6410 + 0x133) >> 2 & 1) != 0) &&
           (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
          native_sub_4327ec();
        }
        lVar11 = *(long *)(*(long *)(_UICamera_TypeInfo_12d6410 + 0xb8) + 0x1d8);
        if (lVar11 == 0) goto LAB_00c9a45c;
        native_UnityEngine_GameObject__get_transform_8de5c8(lVar11,0);
        lVar11 = native_UICamera__FindRootRigidbody2D_c988e4();
        goto code_r0x00c9a318;
      }
    }
    break;
  case 3:
    if (((*(byte *)(_UICamera_TypeInfo_12d6410 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    uVar24 = (undefined4)uVar6;
    uStack_1c0 = uStack_100;
    uStack_1c8 = uStack_108;
    uStack_1d0 = uStack_110;
    uVar5 = native_UnityEngine_Plane__Raycast_8eb9a4
                      (*(long *)(_UICamera_TypeInfo_12d6410 + 0xb8) + 0x250,&uStack_1d0,&fStack_114,
                       0);
    if ((uVar5 & 1) == 0) break;
    uVar17 = native_UnityEngine_Ray__GetPoint_7631f4(fStack_114,&uStack_110,0);
    if (((*(byte *)(_UICamera_TypeInfo_12d6410 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    lVar11 = _UICamera_TypeInfo_12d6410;
    lVar8 = *(long *)(_UICamera_TypeInfo_12d6410 + 0xb8);
    *(undefined4 *)(lVar8 + 100) = uVar17;
    *(undefined4 *)(lVar8 + 0x68) = uVar24;
    *(undefined4 *)(lVar8 + 0x6c) = uVar23;
    if (*(long *)(*(long *)(lVar11 + 0xb8) + 0x248) == 0) {
      uVar6 = native_sub_432750(_UnityEngine_Collider2D___TypeInfo_12d3098,0x32);
      if (((*(byte *)(_UICamera_TypeInfo_12d6410 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
        native_sub_4327ec(_UICamera_TypeInfo_12d6410);
      }
      lVar11 = *(long *)(_UICamera_TypeInfo_12d6410 + 0xb8);
      *(undefined8 *)(lVar11 + 0x248) = uVar6;
      native_sub_4326e0(lVar11 + 0x248,uVar6);
      lVar11 = _UICamera_TypeInfo_12d6410;
    }
    if (((*(byte *)(lVar11 + 0x133) >> 2 & 1) != 0) && (*(int *)(lVar11 + 0xe0) == 0)) {
      native_sub_4327ec();
      lVar11 = _UICamera_TypeInfo_12d6410;
    }
    lVar11 = *(long *)(lVar11 + 0xb8);
    uVar24 = *(undefined4 *)(lVar11 + 100);
    uVar23 = *(undefined4 *)(lVar11 + 0x68);
    uVar6 = *(undefined8 *)(lVar11 + 0x248);
    if (((*(byte *)(_UnityEngine_Physics2D_TypeInfo_12d5670 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UnityEngine_Physics2D_TypeInfo_12d5670 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    iVar2 = native_UnityEngine_Physics2D__OverlapPointNonAlloc_db9f00(uVar24,uVar23,uVar6,uVar4,0);
    if (1 < iVar2) {
      lVar11 = 0;
      uVar1 = (ushort)(*(byte *)(_UICamera_TypeInfo_12d6410 + 0x133) >> 2);
      do {
        if (((uVar1 & 1) != 0) && (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
          native_sub_4327ec();
        }
        lVar8 = *(long *)(*(long *)(_UICamera_TypeInfo_12d6410 + 0xb8) + 0x248);
        if (lVar8 == 0) goto LAB_00c9a45c;
        if (*(uint *)(lVar8 + 0x18) <= (uint)lVar11) goto LAB_00c9a460;
        lVar8 = *(long *)(lVar8 + lVar11 * 8 + 0x20);
        if ((lVar8 == 0) ||
           (lVar8 = native_UnityEngine_Component__get_gameObject_8da66c(lVar8,0), lVar8 == 0))
        goto LAB_00c9a45c;
        lVar12 = native_UnityEngine_GameObject__GetComponent_BE2_BlockSectionHeader_Custom__4a2214
                           (lVar8,_Method_UnityEngine_GameObject_GetComponent_UIWidget____12e4ae8);
        if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
           (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
          native_sub_4327ec(_UnityEngine_Object_TypeInfo_12d54e0);
        }
        uVar5 = native_UnityEngine_Object__op_Inequality_8d76fc(lVar12,0,0);
        if ((uVar5 & 1) == 0) {
          if (((*(byte *)(_NGUITools_TypeInfo_12d53c8 + 0x133) >> 2 & 1) != 0) &&
             (*(int *)(_NGUITools_TypeInfo_12d53c8 + 0xe0) == 0)) {
            native_sub_4327ec();
          }
          lVar12 = native_NGUITools__FindInParents_object__4a5c04
                             (lVar8,_Method_NGUITools_FindInParents_UIRect____12e5770);
          if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
             (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
            native_sub_4327ec(_UnityEngine_Object_TypeInfo_12d54e0);
          }
          uVar5 = native_UnityEngine_Object__op_Inequality_8d76fc(lVar12,0,0);
          if ((uVar5 & 1) != 0) {
            if (lVar12 == 0) goto LAB_00c9a45c;
            if (*(float *)(lVar12 + 0x8c) < 0.001) goto code_r0x00c99b20;
          }
code_r0x00c99a34:
          if (((*(byte *)(_UICamera_TypeInfo_12d6410 + 0x133) >> 2 & 1) != 0) &&
             (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
            native_sub_4327ec();
          }
          if (((*(byte *)(_NGUITools_TypeInfo_12d53c8 + 0x133) >> 2 & 1) != 0) &&
             (*(int *)(_NGUITools_TypeInfo_12d53c8 + 0xe0) == 0)) {
            native_sub_4327ec();
          }
          uVar23 = native_NGUITools__CalculateRaycastDepth_72f14c(lVar8,0);
          lVar12 = _UICamera_TypeInfo_12d6410;
          *(undefined4 *)(*(long *)(_UICamera_TypeInfo_12d6410 + 0xb8) + 0x1f0) = uVar23;
          lVar13 = *(long *)(lVar12 + 0xb8);
          if (*(int *)(lVar13 + 0x1f0) != 0x7fffffff) {
            if (((*(byte *)(lVar12 + 0x133) >> 2 & 1) != 0) && (*(int *)(lVar12 + 0xe0) == 0)) {
              native_sub_4327ec(lVar12);
              lVar13 = *(long *)(_UICamera_TypeInfo_12d6410 + 0xb8);
            }
            *(long *)(lVar13 + 0x230) = lVar8;
            native_sub_4326e0(lVar13 + 0x230,lVar8);
            lVar8 = _UICamera_TypeInfo_12d6410;
            lVar12 = *(long *)(_UICamera_TypeInfo_12d6410 + 0xb8);
            *(undefined8 *)(lVar12 + 0x220) = *(undefined8 *)(lVar12 + 100);
            *(undefined4 *)(lVar12 + 0x228) = *(undefined4 *)(lVar12 + 0x6c);
            lVar12 = *(long *)(*(long *)(lVar8 + 0xb8) + 0x238);
            func_0x002ca3e0(auStack_198,*(long *)(lVar8 + 0xb8) + 0x1f0,0x48);
            uVar6 = _Method_BetterList_UICamera_DepthEntry__Add___12d8a70;
            if (lVar12 == 0) goto LAB_00c9a45c;
            func_0x002ca3e0(&uStack_f0,auStack_198,0x48);
            native_BetterList_UICamera_DepthEntry___Add_ba4ab0(lVar12,&uStack_f0,uVar6);
          }
        }
        else {
          if (lVar12 == 0) goto LAB_00c9a45c;
          uVar5 = native_UIWidget__get_isVisible_9499c8(lVar12,0);
          if ((uVar5 & 1) != 0) {
            lVar12 = *(long *)(lVar12 + 0xe8);
            if (lVar12 != 0) {
              if (((*(byte *)(_UICamera_TypeInfo_12d6410 + 0x133) >> 2 & 1) != 0) &&
                 (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
                native_sub_4327ec();
              }
              lVar13 = *(long *)(_UICamera_TypeInfo_12d6410 + 0xb8);
              uVar5 = native_UIWidget_HitCheck__Invoke_55b6bc
                                (*(undefined4 *)(lVar13 + 100),*(undefined4 *)(lVar13 + 0x68),
                                 *(undefined4 *)(lVar13 + 0x6c),lVar12,0);
              if ((uVar5 & 1) == 0) goto code_r0x00c99b20;
            }
            goto code_r0x00c99a34;
          }
        }
code_r0x00c99b20:
        lVar11 = lVar11 + 1;
        uVar1 = *(ushort *)(_UICamera_TypeInfo_12d6410 + 0x132) >> 10;
      } while ((int)lVar11 < iVar2);
      if (((*(ushort *)(_UICamera_TypeInfo_12d6410 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
        native_sub_4327ec();
      }
      lVar11 = *(long *)(*(long *)(_UICamera_TypeInfo_12d6410 + 0xb8) + 0x238);
      if (((*(byte *)(_UICamera___c_TypeInfo_12d79d8 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_UICamera___c_TypeInfo_12d79d8 + 0xe0) == 0)) {
        native_sub_4327ec(_UICamera___c_TypeInfo_12d79d8);
      }
      puVar7 = *(undefined8 **)(_UICamera___c_TypeInfo_12d79d8 + 0xb8);
      lVar8 = puVar7[2];
      if (lVar8 == 0) {
        if (((*(byte *)(_UICamera___c_TypeInfo_12d79d8 + 0x133) >> 2 & 1) != 0) &&
           (*(int *)(_UICamera___c_TypeInfo_12d79d8 + 0xe0) == 0)) {
          native_sub_4327ec(_UICamera___c_TypeInfo_12d79d8);
          puVar7 = *(undefined8 **)(_UICamera___c_TypeInfo_12d79d8 + 0xb8);
        }
        uVar6 = *puVar7;
        lVar8 = native_sub_432808(_BetterList_CompareFunc_UICamera_DepthEntry__TypeInfo_12d21a8);
        native_BetterList_CompareFunc_UICamera_DepthEntry____ctor_ba9b10
                  (lVar8,uVar6,_Method_UICamera___c__Raycast_b__190_1___12ea150,
                   _Method_BetterList_CompareFunc_UICamera_DepthEntry___ctor___12d8af8);
        plVar9 = (long *)(*(long *)(_UICamera___c_TypeInfo_12d79d8 + 0xb8) + 0x10);
        *plVar9 = lVar8;
        native_sub_4326e0(plVar9,lVar8);
      }
      if (lVar11 == 0) goto LAB_00c9a45c;
      native_BetterList_UICamera_DepthEntry___Sort_ba548c
                (lVar11,lVar8,_Method_BetterList_UICamera_DepthEntry__Sort___12d8a80);
      uVar5 = 0;
      lVar11 = 0x60;
      while( true ) {
        if (((*(byte *)(_UICamera_TypeInfo_12d6410 + 0x133) >> 2 & 1) != 0) &&
           (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
          native_sub_4327ec();
        }
        lVar8 = *(long *)(*(long *)(_UICamera_TypeInfo_12d6410 + 0xb8) + 0x238);
        if (lVar8 == 0) goto LAB_00c9a45c;
        uVar1 = *(ushort *)(_UICamera_TypeInfo_12d6410 + 0x132);
        if ((long)*(int *)(lVar8 + 0x18) <= (long)uVar5) break;
        if (((uVar1 >> 10 & 1) != 0) && (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
          native_sub_4327ec();
          lVar8 = *(long *)(*(long *)(_UICamera_TypeInfo_12d6410 + 0xb8) + 0x238);
          if (lVar8 == 0) goto LAB_00c9a45c;
        }
        lVar8 = *(long *)(lVar8 + 0x10);
        if (lVar8 == 0) goto LAB_00c9a45c;
        if (*(uint *)(lVar8 + 0x18) <= uVar5) goto LAB_00c9a460;
        uVar10 = native_UICamera__IsVisible_c9a46c(lVar8 + lVar11 + -0x40);
        if ((uVar10 & 1) != 0) {
          if (((*(byte *)(_UICamera_TypeInfo_12d6410 + 0x133) >> 2 & 1) != 0) &&
             (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
            native_sub_4327ec();
          }
          lVar8 = *(long *)(_UICamera_TypeInfo_12d6410 + 0xb8);
          if ((*(long *)(lVar8 + 0x238) == 0) ||
             (lVar12 = *(long *)(*(long *)(lVar8 + 0x238) + 0x10), lVar12 == 0)) goto LAB_00c9a45c;
          if (*(uint *)(lVar12 + 0x18) <= (uint)uVar5) goto LAB_00c9a460;
          *(undefined8 *)(lVar8 + 0x1d8) = *(undefined8 *)(lVar12 + lVar11);
          native_sub_4326e0(lVar8 + 0x1d8);
          lVar11 = _UICamera_TypeInfo_12d6410;
          goto code_r0x00c9a1b0;
        }
        uVar5 = uVar5 + 1;
        lVar11 = lVar11 + 0x48;
      }
      goto code_r0x00c99f4c;
    }
    if (iVar2 == 1) {
      if (((*(byte *)(_UICamera_TypeInfo_12d6410 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
        native_sub_4327ec();
      }
      lVar11 = *(long *)(*(long *)(_UICamera_TypeInfo_12d6410 + 0xb8) + 0x248);
      if (lVar11 == 0) goto LAB_00c9a45c;
      if (*(int *)(lVar11 + 0x18) == 0) goto LAB_00c9a460;
      if ((*(long *)(lVar11 + 0x20) == 0) ||
         (lVar11 = native_UnityEngine_Component__get_gameObject_8da66c(*(long *)(lVar11 + 0x20),0),
         lVar11 == 0)) goto LAB_00c9a45c;
      lVar8 = native_UnityEngine_GameObject__GetComponent_BE2_BlockSectionHeader_Custom__4a2214
                        (lVar11,_Method_UnityEngine_GameObject_GetComponent_UIWidget____12e4ae8);
      if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
        native_sub_4327ec(_UnityEngine_Object_TypeInfo_12d54e0);
      }
      uVar5 = native_UnityEngine_Object__op_Inequality_8d76fc(lVar8,0,0);
      if ((uVar5 & 1) == 0) {
        if (((*(byte *)(_NGUITools_TypeInfo_12d53c8 + 0x133) >> 2 & 1) != 0) &&
           (*(int *)(_NGUITools_TypeInfo_12d53c8 + 0xe0) == 0)) {
          native_sub_4327ec();
        }
        lVar8 = native_NGUITools__FindInParents_object__4a5c04
                          (lVar11,_Method_NGUITools_FindInParents_UIRect____12e5770);
        if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
           (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
          native_sub_4327ec(_UnityEngine_Object_TypeInfo_12d54e0);
        }
        uVar5 = native_UnityEngine_Object__op_Inequality_8d76fc(lVar8,0,0);
        if ((uVar5 & 1) != 0) {
          if (lVar8 == 0) goto LAB_00c9a45c;
          if (*(float *)(lVar8 + 0x8c) < 0.001) break;
        }
        goto code_r0x00c99ff0;
      }
      if (lVar8 == 0) goto LAB_00c9a45c;
      uVar5 = native_UIWidget__get_isVisible_9499c8(lVar8,0);
      if ((uVar5 & 1) == 0) break;
      lVar8 = *(long *)(lVar8 + 0xe8);
      if (lVar8 != 0) {
        if (((*(byte *)(_UICamera_TypeInfo_12d6410 + 0x133) >> 2 & 1) != 0) &&
           (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
          native_sub_4327ec();
        }
        lVar12 = *(long *)(_UICamera_TypeInfo_12d6410 + 0xb8);
        uVar5 = native_UIWidget_HitCheck__Invoke_55b6bc
                          (*(undefined4 *)(lVar12 + 100),*(undefined4 *)(lVar12 + 0x68),
                           *(undefined4 *)(lVar12 + 0x6c),lVar8,0);
        if ((uVar5 & 1) == 0) break;
      }
code_r0x00c99ff0:
      if (((*(byte *)(_UICamera_TypeInfo_12d6410 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
        native_sub_4327ec();
      }
      lVar8 = *(long *)(_UICamera_TypeInfo_12d6410 + 0xb8);
      uVar5 = native_UICamera__IsVisible_c9a56c
                        (*(undefined4 *)(lVar8 + 100),*(undefined4 *)(lVar8 + 0x68),
                         *(undefined4 *)(lVar8 + 0x6c),lVar11);
      if ((uVar5 & 1) != 0) {
        if (((*(byte *)(_UICamera_TypeInfo_12d6410 + 0x133) >> 2 & 1) != 0) &&
           (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
          native_sub_4327ec();
        }
        lVar8 = *(long *)(_UICamera_TypeInfo_12d6410 + 0xb8);
code_r0x00c9a384:
        *(long *)(lVar8 + 0x1d8) = lVar11;
code_r0x00c9a454:
        native_sub_4326e0(lVar8 + 0x1d8,lVar11);
        return 1;
      }
    }
  }
LAB_00c99f78:
  uVar14 = uVar14 + 1;
  goto LAB_00c98d50;
code_r0x00c998b0:
  if (((*(ushort *)(_UICamera_TypeInfo_12d6410 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  lVar11 = *(long *)(*(long *)(_UICamera_TypeInfo_12d6410 + 0xb8) + 0x238);
  if (((*(byte *)(_UICamera___c_TypeInfo_12d79d8 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UICamera___c_TypeInfo_12d79d8 + 0xe0) == 0)) {
    native_sub_4327ec(_UICamera___c_TypeInfo_12d79d8);
  }
  puVar7 = *(undefined8 **)(_UICamera___c_TypeInfo_12d79d8 + 0xb8);
  lVar8 = puVar7[1];
  if (lVar8 == 0) {
    if (((*(byte *)(_UICamera___c_TypeInfo_12d79d8 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UICamera___c_TypeInfo_12d79d8 + 0xe0) == 0)) {
      native_sub_4327ec(_UICamera___c_TypeInfo_12d79d8);
      puVar7 = *(undefined8 **)(_UICamera___c_TypeInfo_12d79d8 + 0xb8);
    }
    uVar6 = *puVar7;
    lVar8 = native_sub_432808(_BetterList_CompareFunc_UICamera_DepthEntry__TypeInfo_12d21a8);
    native_BetterList_CompareFunc_UICamera_DepthEntry____ctor_ba9b10
              (lVar8,uVar6,_Method_UICamera___c__Raycast_b__190_0___12ea148,
               _Method_BetterList_CompareFunc_UICamera_DepthEntry___ctor___12d8af8);
    plVar9 = (long *)(*(long *)(_UICamera___c_TypeInfo_12d79d8 + 0xb8) + 8);
    *plVar9 = lVar8;
    native_sub_4326e0(plVar9,lVar8);
  }
  if (lVar11 == 0) {
LAB_00c9a45c:
                    /* WARNING: Subroutine does not return */
    native_sub_432810();
  }
  native_BetterList_UICamera_DepthEntry___Sort_ba548c
            (lVar11,lVar8,_Method_BetterList_UICamera_DepthEntry__Sort___12d8a80);
  lVar12 = 0;
  uVar5 = 0;
  while( true ) {
    if (((*(byte *)(_UICamera_TypeInfo_12d6410 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    lVar8 = *(long *)(*(long *)(_UICamera_TypeInfo_12d6410 + 0xb8) + 0x238);
    if (lVar8 == 0) goto LAB_00c9a45c;
    uVar1 = *(ushort *)(_UICamera_TypeInfo_12d6410 + 0x132);
    if ((long)*(int *)(lVar8 + 0x18) <= (long)uVar5) break;
    if (((uVar1 >> 10 & 1) != 0) && (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
      native_sub_4327ec();
      lVar8 = *(long *)(*(long *)(_UICamera_TypeInfo_12d6410 + 0xb8) + 0x238);
      if (lVar8 == 0) goto LAB_00c9a45c;
    }
    lVar11 = *(long *)(lVar8 + 0x10);
    if (lVar11 == 0) goto LAB_00c9a45c;
    if (*(uint *)(lVar11 + 0x18) <= uVar5) goto LAB_00c9a460;
    uVar10 = native_UICamera__IsVisible_c9a46c(lVar11 + lVar12 + 0x20);
    if ((uVar10 & 1) != 0) {
      if (((*(byte *)(_UICamera_TypeInfo_12d6410 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
        native_sub_4327ec();
      }
      lVar11 = _UICamera_TypeInfo_12d6410;
      lVar8 = *(long *)(_UICamera_TypeInfo_12d6410 + 0xb8);
      if ((*(long *)(lVar8 + 0x238) == 0) ||
         (lVar13 = *(long *)(*(long *)(lVar8 + 0x238) + 0x10), lVar13 == 0)) goto LAB_00c9a45c;
      uVar14 = (uint)uVar5;
      if (*(uint *)(lVar13 + 0x18) <= uVar14) goto LAB_00c9a460;
      lVar13 = lVar13 + lVar12;
      uVar6 = *(undefined8 *)(lVar13 + 0x44);
      uVar19 = *(undefined8 *)(lVar13 + 0x3c);
      uVar18 = *(undefined8 *)(lVar13 + 0x34);
      uVar21 = *(undefined8 *)(lVar13 + 0x2c);
      uVar20 = *(undefined8 *)(lVar13 + 0x24);
      *(undefined4 *)(lVar8 + 0xb0) = *(undefined4 *)(lVar13 + 0x4c);
      *(undefined8 *)(lVar8 + 0xa8) = uVar6;
      *(undefined8 *)(lVar8 + 0xa0) = uVar19;
      *(undefined8 *)(lVar8 + 0x98) = uVar18;
      *(undefined8 *)(lVar8 + 0x90) = uVar21;
      *(undefined8 *)(lVar8 + 0x88) = uVar20;
      lVar11 = *(long *)(lVar11 + 0xb8);
      if ((*(long *)(lVar11 + 0x238) == 0) ||
         (lVar8 = *(long *)(*(long *)(lVar11 + 0x238) + 0x10), lVar8 == 0)) goto LAB_00c9a45c;
      if (*(uint *)(lVar8 + 0x18) <= uVar14) goto LAB_00c9a460;
      *(undefined8 *)(lVar11 + 0x1d8) = *(undefined8 *)(lVar8 + lVar12 + 0x60);
      native_sub_4326e0(lVar11 + 0x1d8);
      lVar11 = _UICamera_TypeInfo_12d6410;
      lVar8 = *(long *)(_UICamera_TypeInfo_12d6410 + 0xb8);
      *(undefined8 *)(lVar8 + 0x80) = uStack_100;
      *(undefined8 *)(lVar8 + 0x78) = uStack_108;
      *(undefined8 *)(lVar8 + 0x70) = uStack_110;
      lVar8 = *(long *)(lVar11 + 0xb8);
      if ((*(long *)(lVar8 + 0x238) == 0) ||
         (lVar13 = *(long *)(*(long *)(lVar8 + 0x238) + 0x10), lVar13 == 0)) goto LAB_00c9a45c;
      if (uVar14 < *(uint *)(lVar13 + 0x18)) {
        uVar23 = *(undefined4 *)(lVar13 + lVar12 + 0x58);
        *(undefined8 *)(lVar8 + 100) = *(undefined8 *)(lVar13 + lVar12 + 0x50);
        *(undefined4 *)(lVar8 + 0x6c) = uVar23;
code_r0x00c9a1b0:
        lVar11 = *(long *)(*(long *)(lVar11 + 0xb8) + 0x238);
        if (lVar11 != 0) {
          native_BetterList_UICamera_DepthEntry___Clear_ba4a98
                    (lVar11,_Method_BetterList_UICamera_DepthEntry__Clear___12d8a78);
          return 1;
        }
        goto LAB_00c9a45c;
      }
      goto LAB_00c9a460;
    }
    uVar5 = uVar5 + 1;
    lVar12 = lVar12 + 0x48;
  }
code_r0x00c99f4c:
  if (((uVar1 >> 10 & 1) != 0) && (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
    native_sub_4327ec();
    lVar8 = *(long *)(*(long *)(_UICamera_TypeInfo_12d6410 + 0xb8) + 0x238);
    if (lVar8 == 0) goto LAB_00c9a45c;
  }
  native_BetterList_UICamera_DepthEntry___Clear_ba4a98
            (lVar8,_Method_BetterList_UICamera_DepthEntry__Clear___12d8a78);
  goto LAB_00c99f78;
}



/* UICamera$$IsVisible @ 0xc9a56c
 * bool UICamera__IsVisible (UnityEngine_Vector3_o worldPoint, UnityEngine_GameObject_o* go, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UICamera$$IsVisible
   bool UICamera__IsVisible (UnityEngine_Vector3_o worldPoint, UnityEngine_GameObject_o* go, const
   MethodInfo* method); */

undefined8
native_UICamera__IsVisible_c9a56c
          (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  ulong uVar2;
  
  if ((bRam00000000013428d3 & 1) == 0) {
    native_sub_43273c(&Method_NGUITools_FindInParents_UIPanel____12e5760);
    native_sub_43273c(&NGUITools_TypeInfo_12d53c8);
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    bRam00000000013428d3 = 1;
  }
  if (((*(byte *)(_NGUITools_TypeInfo_12d53c8 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_NGUITools_TypeInfo_12d53c8 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  lVar1 = native_NGUITools__FindInParents_object__4a5c04
                    (param_4,_Method_NGUITools_FindInParents_UIPanel____12e5760);
  while( true ) {
    if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    uVar2 = native_UnityEngine_Object__op_Inequality_8d76fc(lVar1,0,0);
    if ((uVar2 & 1) == 0) {
      return 1;
    }
    if (lVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      native_sub_432810();
    }
    uVar2 = native_UIPanel__IsVisible_af1784(param_1,param_2,param_3,lVar1,0);
    if ((uVar2 & 1) == 0) break;
    lVar1 = *(long *)(lVar1 + 0x1a0);
  }
  return 0;
}



/* UICamera$$IsVisible @ 0xc9a46c
 * bool UICamera__IsVisible (UICamera_DepthEntry_o* de, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UICamera$$IsVisible
   bool UICamera__IsVisible (UICamera_DepthEntry_o* de, const MethodInfo* method); */

undefined8 native_UICamera__IsVisible_c9a46c(long param_1)

{
  long lVar1;
  ulong uVar2;
  undefined8 uVar3;
  
  if ((bRam00000000013428d4 & 1) == 0) {
    native_sub_43273c(&Method_NGUITools_FindInParents_UIPanel____12e5760);
    native_sub_43273c(&NGUITools_TypeInfo_12d53c8);
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    bRam00000000013428d4 = 1;
  }
  uVar3 = *(undefined8 *)(param_1 + 0x40);
  if (((*(byte *)(_NGUITools_TypeInfo_12d53c8 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_NGUITools_TypeInfo_12d53c8 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  lVar1 = native_NGUITools__FindInParents_object__4a5c04
                    (uVar3,_Method_NGUITools_FindInParents_UIPanel____12e5760);
  while( true ) {
    if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    uVar2 = native_UnityEngine_Object__op_Inequality_8d76fc(lVar1,0,0);
    if ((uVar2 & 1) == 0) {
      return 1;
    }
    if (lVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      native_sub_432810();
    }
    uVar2 = native_UIPanel__IsVisible_af1784
                      (*(undefined4 *)(param_1 + 0x30),*(undefined4 *)(param_1 + 0x34),
                       *(undefined4 *)(param_1 + 0x38),lVar1,0);
    if ((uVar2 & 1) == 0) break;
    lVar1 = *(long *)(lVar1 + 0x1a0);
  }
  return 0;
}



/* UICamera$$IsHighlighted @ 0xc92014
 * bool UICamera__IsHighlighted (UnityEngine_GameObject_o* go, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UICamera$$IsHighlighted
   bool UICamera__IsHighlighted (UnityEngine_GameObject_o* go, const MethodInfo* method); */

byte native_UICamera__IsHighlighted_c92014(long param_1)

{
  byte bVar1;
  long lVar2;
  
  if ((bRam00000000013428d5 & 1) == 0) {
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    native_sub_43273c(&UICamera_TypeInfo_12d6410);
    bRam00000000013428d5 = 1;
  }
  if (((*(byte *)(_UICamera_TypeInfo_12d6410 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  lVar2 = native_UICamera__get_hoveredObject_c9114c();
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec(_UnityEngine_Object_TypeInfo_12d54e0);
  }
  if ((bRam0000000001341083 & 1) == 0) {
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0,param_1,0);
    bRam0000000001341083 = 1;
  }
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  if ((bRam0000000001341033 & 1) == 0) {
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    bRam0000000001341033 = 1;
  }
  if (lVar2 == 0 && param_1 == 0) {
    bVar1 = 1;
  }
  else {
    if (param_1 == 0) {
      param_1 = lVar2;
      if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
        native_sub_4327ec();
      }
    }
    else {
      if (lVar2 != 0) {
        bVar1 = lVar2 == param_1;
        goto code_r0x008e9b5c;
      }
      if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
        native_sub_4327ec();
      }
    }
    bVar1 = native_UnityEngine_Object__IsNativeObjectAlive_8e9b70(param_1);
    bVar1 = bVar1 ^ 1;
  }
code_r0x008e9b5c:
  return bVar1 & 1;
}



/* UICamera$$FindCameraForLayer @ 0xc96d2c
 * UICamera_o* UICamera__FindCameraForLayer (int32_t layer, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UICamera$$FindCameraForLayer
   UICamera_o* UICamera__FindCameraForLayer (int32_t layer, const MethodInfo* method); */

long native_UICamera__FindCameraForLayer_c96d2c(uint param_1)

{
  uint uVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  long lVar5;
  uint uVar6;
  
  if ((bRam00000000013428d6 & 1) == 0) {
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    native_sub_43273c(&UICamera_TypeInfo_12d6410);
    bRam00000000013428d6 = 1;
  }
  uVar6 = 0;
  while( true ) {
    if (((*(byte *)(_UICamera_TypeInfo_12d6410 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    lVar5 = **(long **)(_UICamera_TypeInfo_12d6410 + 0xb8);
    if (lVar5 == 0) break;
    if (*(int *)(lVar5 + 0x18) <= (int)uVar6) {
      return 0;
    }
    if (((*(byte *)(_UICamera_TypeInfo_12d6410 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
      native_sub_4327ec();
      lVar5 = **(long **)(_UICamera_TypeInfo_12d6410 + 0xb8);
      if (lVar5 == 0) break;
    }
    lVar5 = *(long *)(lVar5 + 0x10);
    if (lVar5 == 0) break;
    if (*(uint *)(lVar5 + 0x18) <= uVar6) {
      uVar4 = native_sub_43283c();
                    /* WARNING: Subroutine does not return */
      native_sub_4327dc(uVar4,0);
    }
    lVar5 = *(long *)(lVar5 + (long)(int)uVar6 * 8 + 0x20);
    if (lVar5 == 0) break;
    lVar2 = native_UICamera__get_cachedCamera_c95254(lVar5);
    if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
      native_sub_4327ec(_UnityEngine_Object_TypeInfo_12d54e0);
    }
    uVar3 = native_UnityEngine_Object__op_Inequality_8d76fc(lVar2,0,0);
    if ((uVar3 & 1) != 0) {
      if (lVar2 == 0) break;
      uVar1 = native_UnityEngine_Camera__get_cullingMask_8d88b0(lVar2,0);
      if ((uVar1 & 1 << (ulong)(param_1 & 0x1f)) != 0) {
        return lVar5;
      }
    }
    uVar6 = uVar6 + 1;
  }
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* UICamera$$GetDirection @ 0xc9a680
 * int32_t UICamera__GetDirection (int32_t up, int32_t down, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UICamera$$GetDirection
   int32_t UICamera__GetDirection (int32_t up, int32_t down, const MethodInfo* method); */

undefined8 native_UICamera__GetDirection_c9a680(undefined4 param_1,undefined4 param_2)

{
  long lVar1;
  ulong uVar2;
  undefined8 uVar3;
  
  if ((bRam00000000013428d7 & 1) == 0) {
    native_sub_43273c(&UICamera_TypeInfo_12d6410);
    bRam00000000013428d7 = 1;
  }
  if (((*(byte *)(_UICamera_TypeInfo_12d6410 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  lVar1 = *(long *)(*(long *)(_UICamera_TypeInfo_12d6410 + 0xb8) + 8);
  if (lVar1 != 0) {
    uVar2 = native_UICamera_GetKeyStateFunc__Invoke_551094(lVar1,param_1,0);
    if ((uVar2 & 1) == 0) {
      if (((*(ushort *)(_UICamera_TypeInfo_12d6410 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
        native_sub_4327ec(_UICamera_TypeInfo_12d6410);
      }
      lVar1 = *(long *)(*(long *)(_UICamera_TypeInfo_12d6410 + 0xb8) + 8);
      if (lVar1 == 0) goto LAB_00c9a794;
      uVar2 = native_UICamera_GetKeyStateFunc__Invoke_551094(lVar1,param_2,0);
      if ((uVar2 & 1) == 0) {
        uVar3 = 0;
      }
      else {
        if (((*(byte *)(_UICamera_TypeInfo_12d6410 + 0x133) >> 2 & 1) != 0) &&
           (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
          native_sub_4327ec();
        }
        native_UICamera__set_currentKey_c94858(param_2);
        uVar3 = 0xffffffff;
      }
    }
    else {
      if (((*(ushort *)(_UICamera_TypeInfo_12d6410 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
        native_sub_4327ec(_UICamera_TypeInfo_12d6410);
      }
      native_UICamera__set_currentKey_c94858(param_1);
      uVar3 = 1;
    }
    return uVar3;
  }
LAB_00c9a794:
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* UICamera$$GetDirection @ 0xc9a798
 * int32_t UICamera__GetDirection (int32_t up0, int32_t up1, int32_t down0, int32_t down1, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UICamera$$GetDirection
   int32_t UICamera__GetDirection (int32_t up0, int32_t up1, int32_t down0, int32_t down1, const
   MethodInfo* method); */

undefined8
native_UICamera__GetDirection_c9a798
          (undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  long lVar1;
  ulong uVar2;
  
  if ((bRam00000000013428d8 & 1) == 0) {
    native_sub_43273c(&UICamera_TypeInfo_12d6410);
    bRam00000000013428d8 = 1;
  }
  if (((*(byte *)(_UICamera_TypeInfo_12d6410 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  lVar1 = *(long *)(*(long *)(_UICamera_TypeInfo_12d6410 + 0xb8) + 8);
  if (lVar1 != 0) {
    uVar2 = native_UICamera_GetKeyStateFunc__Invoke_551094(lVar1,param_1,0);
    if ((uVar2 & 1) != 0) {
      if (((*(ushort *)(_UICamera_TypeInfo_12d6410 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
        native_sub_4327ec(_UICamera_TypeInfo_12d6410);
      }
LAB_00c9a894:
      native_UICamera__set_currentKey_c94858(param_1);
      return 1;
    }
    if (((*(ushort *)(_UICamera_TypeInfo_12d6410 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
      native_sub_4327ec(_UICamera_TypeInfo_12d6410);
    }
    lVar1 = *(long *)(*(long *)(_UICamera_TypeInfo_12d6410 + 0xb8) + 8);
    if (lVar1 != 0) {
      uVar2 = native_UICamera_GetKeyStateFunc__Invoke_551094(lVar1,param_2,0);
      if ((uVar2 & 1) != 0) {
        param_1 = param_2;
        if (((*(ushort *)(_UICamera_TypeInfo_12d6410 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
          native_sub_4327ec(_UICamera_TypeInfo_12d6410);
        }
        goto LAB_00c9a894;
      }
      if (((*(ushort *)(_UICamera_TypeInfo_12d6410 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
        native_sub_4327ec(_UICamera_TypeInfo_12d6410);
      }
      lVar1 = *(long *)(*(long *)(_UICamera_TypeInfo_12d6410 + 0xb8) + 8);
      if (lVar1 != 0) {
        uVar2 = native_UICamera_GetKeyStateFunc__Invoke_551094(lVar1,param_3,0);
        if ((uVar2 & 1) == 0) {
          if (((*(ushort *)(_UICamera_TypeInfo_12d6410 + 0x132) >> 10 & 1) != 0) &&
             (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
            native_sub_4327ec(_UICamera_TypeInfo_12d6410);
          }
          lVar1 = *(long *)(*(long *)(_UICamera_TypeInfo_12d6410 + 0xb8) + 8);
          if (lVar1 == 0) goto LAB_00c9a96c;
          uVar2 = native_UICamera_GetKeyStateFunc__Invoke_551094(lVar1,param_4,0);
          if ((uVar2 & 1) == 0) {
            return 0;
          }
          param_3 = param_4;
          if (((*(byte *)(_UICamera_TypeInfo_12d6410 + 0x133) >> 2 & 1) != 0) &&
             (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
            native_sub_4327ec();
          }
        }
        else if (((*(ushort *)(_UICamera_TypeInfo_12d6410 + 0x132) >> 10 & 1) != 0) &&
                (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
          native_sub_4327ec(_UICamera_TypeInfo_12d6410);
        }
        native_UICamera__set_currentKey_c94858(param_3);
        return 0xffffffff;
      }
    }
  }
LAB_00c9a96c:
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* UICamera$$GetDirection @ 0xc9a970
 * int32_t UICamera__GetDirection (System_String_o* axis, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UICamera$$GetDirection
   int32_t UICamera__GetDirection (System_String_o* axis, const MethodInfo* method); */

undefined8 native_UICamera__GetDirection_c9a970(undefined8 param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  long lVar3;
  float fVar4;
  float fVar5;
  
  if ((bRam00000000013428d9 & 1) == 0) {
    native_sub_43273c(&UICamera_TypeInfo_12d6410);
    bRam00000000013428d9 = 1;
  }
  fVar4 = (float)native_RealTime__get_time_72d024(0);
  if (((*(byte *)(_UICamera_TypeInfo_12d6410 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  if ((fVar4 <= *(float *)(*(long *)(_UICamera_TypeInfo_12d6410 + 0xb8) + 0x260)) ||
     (uVar1 = native_System_String__IsNullOrEmpty_b09430(param_1,0), (uVar1 & 1) != 0)) {
LAB_00c9a9f4:
    uVar2 = 0;
  }
  else {
    if (((*(byte *)(_UICamera_TypeInfo_12d6410 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    lVar3 = *(long *)(*(long *)(_UICamera_TypeInfo_12d6410 + 0xb8) + 0x20);
    if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      native_sub_432810();
    }
    fVar5 = (float)native_UICamera_GetAxisFunc__Invoke_550c58(lVar3,param_1,0);
    if (fVar5 <= 0.75) {
      if (-0.75 <= fVar5) goto LAB_00c9a9f4;
      if (((*(byte *)(_UICamera_TypeInfo_12d6410 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
        native_sub_4327ec();
      }
      native_UICamera__set_currentKey_c94858(0x14a);
      uVar2 = 0xffffffff;
    }
    else {
      if (((*(byte *)(_UICamera_TypeInfo_12d6410 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
        native_sub_4327ec();
      }
      native_UICamera__set_currentKey_c94858(0x14a);
      uVar2 = 1;
    }
    *(float *)(*(long *)(_UICamera_TypeInfo_12d6410 + 0xb8) + 0x260) = fVar4 + 0.25;
  }
  return uVar2;
}



/* UICamera$$Notify @ 0xc96a08
 * void UICamera__Notify (UnityEngine_GameObject_o* go, System_String_o* funcName, Il2CppObject* obj, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UICamera$$Notify
   void UICamera__Notify (UnityEngine_GameObject_o* go, System_String_o* funcName, Il2CppObject*
   obj, const MethodInfo* method); */

void native_UICamera__Notify_c96a08(long param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  ulong uVar2;
  long lVar3;
  undefined8 uVar4;
  
  if ((bRam00000000013428da & 1) == 0) {
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    native_sub_43273c(&UICamera_TypeInfo_12d6410);
    native_sub_43273c(&UIPopupList_TypeInfo_12d6490);
    bRam00000000013428da = 1;
  }
  if (((*(byte *)(_UICamera_TypeInfo_12d6410 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  if (*(int *)(*(long *)(_UICamera_TypeInfo_12d6410 + 0xb8) + 0x264) < 0xb) {
    if (((*(byte *)(_UICamera_TypeInfo_12d6410 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    iVar1 = native_UICamera__get_currentScheme_c92518();
    if (iVar1 == 2) {
      if (((*(byte *)(_UIPopupList_TypeInfo_12d6490 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_UIPopupList_TypeInfo_12d6490 + 0xe0) == 0)) {
        native_sub_4327ec();
      }
      uVar2 = native_UIPopupList__get_isOpen_c264f8(0);
      if ((uVar2 & 1) != 0) {
        if (((*(byte *)(_UIPopupList_TypeInfo_12d6490 + 0x133) >> 2 & 1) != 0) &&
           (*(int *)(_UIPopupList_TypeInfo_12d6490 + 0xe0) == 0)) {
          native_sub_4327ec();
        }
        if (**(long **)(_UIPopupList_TypeInfo_12d6490 + 0xb8) == 0) goto LAB_00c96d28;
        uVar4 = *(undefined8 *)(**(long **)(_UIPopupList_TypeInfo_12d6490 + 0xb8) + 0x160);
        if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
           (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
          native_sub_4327ec();
        }
        uVar2 = native_UnityEngine_Object__op_Equality_8e9a3c(uVar4,param_1,0);
        if ((uVar2 & 1) != 0) {
          if (((*(byte *)(_UIPopupList_TypeInfo_12d6490 + 0x133) >> 2 & 1) != 0) &&
             (*(int *)(_UIPopupList_TypeInfo_12d6490 + 0xe0) == 0)) {
            native_sub_4327ec();
          }
          uVar2 = native_UIPopupList__get_isOpen_c264f8(0);
          if ((uVar2 & 1) != 0) {
            if (((*(byte *)(_UIPopupList_TypeInfo_12d6490 + 0x133) >> 2 & 1) != 0) &&
               (*(int *)(_UIPopupList_TypeInfo_12d6490 + 0xe0) == 0)) {
              native_sub_4327ec();
            }
            if (**(long **)(_UIPopupList_TypeInfo_12d6490 + 0xb8) == 0) goto LAB_00c96d28;
            param_1 = native_UnityEngine_Component__get_gameObject_8da66c
                                (**(long **)(_UIPopupList_TypeInfo_12d6490 + 0xb8),0);
          }
        }
      }
    }
    if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    uVar2 = native_UnityEngine_Object__op_Implicit_8e1b98(param_1,0);
    if ((uVar2 & 1) != 0) {
      if (param_1 == 0) {
LAB_00c96d28:
                    /* WARNING: Subroutine does not return */
        native_sub_432810();
      }
      uVar2 = native_UnityEngine_GameObject__get_activeInHierarchy_8de728(param_1,0);
      if ((uVar2 & 1) != 0) {
        if (((*(byte *)(_UICamera_TypeInfo_12d6410 + 0x133) >> 2 & 1) != 0) &&
           (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
          native_sub_4327ec();
        }
        *(int *)(*(long *)(_UICamera_TypeInfo_12d6410 + 0xb8) + 0x264) =
             *(int *)(*(long *)(_UICamera_TypeInfo_12d6410 + 0xb8) + 0x264) + 1;
        native_UnityEngine_GameObject__SendMessage_8de4c0(param_1,param_2,param_3,1,0);
        uVar4 = *(undefined8 *)(*(long *)(_UICamera_TypeInfo_12d6410 + 0xb8) + 0xf0);
        if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
           (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
          native_sub_4327ec();
        }
        uVar2 = native_UnityEngine_Object__op_Inequality_8d76fc(uVar4,0,0);
        if ((uVar2 & 1) != 0) {
          if (((*(byte *)(_UICamera_TypeInfo_12d6410 + 0x133) >> 2 & 1) != 0) &&
             (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
            native_sub_4327ec();
          }
          uVar4 = *(undefined8 *)(*(long *)(_UICamera_TypeInfo_12d6410 + 0xb8) + 0xf0);
          if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
             (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
            native_sub_4327ec(_UnityEngine_Object_TypeInfo_12d54e0);
          }
          uVar2 = native_UnityEngine_Object__op_Inequality_8d76fc(uVar4,param_1,0);
          if ((uVar2 & 1) != 0) {
            if (((*(byte *)(_UICamera_TypeInfo_12d6410 + 0x133) >> 2 & 1) != 0) &&
               (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
              native_sub_4327ec();
            }
            lVar3 = *(long *)(*(long *)(_UICamera_TypeInfo_12d6410 + 0xb8) + 0xf0);
            if (lVar3 == 0) goto LAB_00c96d28;
            native_UnityEngine_GameObject__SendMessage_8de4c0(lVar3,param_2,param_3,1,0);
          }
        }
        if (((*(byte *)(_UICamera_TypeInfo_12d6410 + 0x133) >> 2 & 1) != 0) &&
           (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
          native_sub_4327ec();
        }
        *(int *)(*(long *)(_UICamera_TypeInfo_12d6410 + 0xb8) + 0x264) =
             *(int *)(*(long *)(_UICamera_TypeInfo_12d6410 + 0xb8) + 0x264) + -1;
      }
    }
  }
  return;
}



/* UICamera$$Awake @ 0xc9aac8
 * void UICamera__Awake (UICamera_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UICamera$$Awake
   void UICamera__Awake (UICamera_o* __this, const MethodInfo* method); */

void native_UICamera__Awake_c9aac8(undefined1 param_1 [16],undefined4 param_2)

{
  ushort uVar1;
  undefined4 uVar2;
  long lVar3;
  undefined8 uVar4;
  uint uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  
  if ((bRam00000000013428db & 1) == 0) {
    native_sub_43273c(&UICamera_TypeInfo_12d6410);
    bRam00000000013428db = 1;
  }
  uVar2 = native_UnityEngine_Screen__get_width_76a5e4(0);
  if (((*(byte *)(_UICamera_TypeInfo_12d6410 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
    native_sub_4327ec(_UICamera_TypeInfo_12d6410);
  }
  *(undefined4 *)(*(long *)(_UICamera_TypeInfo_12d6410 + 0xb8) + 0x1a8) = uVar2;
  uVar2 = native_UnityEngine_Screen__get_height_76a618(0);
  *(undefined4 *)(*(long *)(_UICamera_TypeInfo_12d6410 + 0xb8) + 0x1ac) = uVar2;
  native_UICamera__set_currentScheme_c94744(1);
  lVar6 = *(long *)(*(long *)(_UICamera_TypeInfo_12d6410 + 0xb8) + 0x188);
  if (lVar6 != 0) {
    if (*(int *)(lVar6 + 0x18) == 0) {
LAB_00c9ac60:
      uVar4 = native_sub_43283c();
                    /* WARNING: Subroutine does not return */
      native_sub_4327dc(uVar4,0);
    }
    lVar6 = *(long *)(lVar6 + 0x20);
    uVar2 = native_UnityEngine_Input__get_mousePosition_dbdd8c(0);
    if (lVar6 != 0) {
      *(undefined4 *)(lVar6 + 0x14) = uVar2;
      *(undefined4 *)(lVar6 + 0x18) = param_2;
      lVar6 = 5;
      uVar1 = (ushort)(*(byte *)(_UICamera_TypeInfo_12d6410 + 0x133) >> 2);
      lVar3 = _UICamera_TypeInfo_12d6410;
      do {
        if (((uVar1 & 1) != 0) && (*(int *)(lVar3 + 0xe0) == 0)) {
          native_sub_4327ec();
          lVar3 = _UICamera_TypeInfo_12d6410;
        }
        lVar7 = *(long *)(*(long *)(lVar3 + 0xb8) + 0x188);
        if (lVar7 == 0) goto LAB_00c9ac5c;
        uVar5 = (int)lVar6 - 4;
        if (*(uint *)(lVar7 + 0x18) <= uVar5) goto LAB_00c9ac60;
        if ((*(long *)(lVar7 + 0x20) == 0) || (lVar8 = *(long *)(lVar7 + lVar6 * 8), lVar8 == 0))
        goto LAB_00c9ac5c;
        *(undefined8 *)(lVar8 + 0x14) = *(undefined8 *)(*(long *)(lVar7 + 0x20) + 0x14);
        lVar7 = *(long *)(*(long *)(lVar3 + 0xb8) + 0x188);
        if (lVar7 == 0) goto LAB_00c9ac5c;
        if (*(uint *)(lVar7 + 0x18) <= uVar5) goto LAB_00c9ac60;
        if ((*(long *)(lVar7 + 0x20) == 0) || (lVar8 = *(long *)(lVar7 + lVar6 * 8), lVar8 == 0))
        goto LAB_00c9ac5c;
        lVar6 = lVar6 + 1;
        *(undefined8 *)(lVar8 + 0x1c) = *(undefined8 *)(*(long *)(lVar7 + 0x20) + 0x14);
        uVar1 = *(ushort *)(lVar3 + 0x132) >> 10;
      } while ((int)lVar6 - 5U < 2);
      if (((*(ushort *)(lVar3 + 0x132) >> 10 & 1) != 0) && (*(int *)(lVar3 + 0xe0) == 0)) {
        native_sub_4327ec();
        lVar3 = _UICamera_TypeInfo_12d6410;
      }
      lVar6 = *(long *)(*(long *)(lVar3 + 0xb8) + 0x188);
      if (lVar6 != 0) {
        if (*(int *)(lVar6 + 0x18) == 0) goto LAB_00c9ac60;
        if (*(long *)(lVar6 + 0x20) != 0) {
          *(undefined8 *)(*(long *)(lVar3 + 0xb8) + 0x5c) =
               *(undefined8 *)(*(long *)(lVar6 + 0x20) + 0x14);
          return;
        }
      }
    }
  }
LAB_00c9ac5c:
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* UICamera$$OnEnable @ 0xc9ac6c
 * void UICamera__OnEnable (UICamera_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UICamera$$OnEnable
   void UICamera__OnEnable (UICamera_o* __this, const MethodInfo* method); */

void native_UICamera__OnEnable_c9ac6c(undefined8 param_1)

{
  long lVar1;
  int iVar2;
  bool bVar3;
  long lVar4;
  int iVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  int iVar9;
  long lVar10;
  uint uVar11;
  uint uVar12;
  long lVar13;
  long lVar14;
  ulong uVar15;
  ulong uStack_80;
  
  if ((bRam00000000013428dc & 1) == 0) {
    native_sub_43273c(&Method_BetterList_UICamera__Add___12d8980);
    native_sub_43273c(&Method_BetterList_UICamera__Sort___12d8990);
    native_sub_43273c(&Method_BetterList_CompareFunc_UICamera___ctor___12d8af0);
    native_sub_43273c(&BetterList_CompareFunc_UICamera__TypeInfo_12d21a0);
    native_sub_43273c(&Method_UICamera_CompareFunc___12e77e8);
    native_sub_43273c(&UICamera_TypeInfo_12d6410);
    bRam00000000013428dc = 1;
  }
  if (((*(byte *)(_UICamera_TypeInfo_12d6410 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  if (**(long **)(_UICamera_TypeInfo_12d6410 + 0xb8) != 0) {
    native_BetterList_object___Add_ba24d8
              (**(long **)(_UICamera_TypeInfo_12d6410 + 0xb8),param_1,
               _Method_BetterList_UICamera__Add___12d8980);
    lVar10 = **(long **)(_UICamera_TypeInfo_12d6410 + 0xb8);
    lVar7 = native_sub_432808(_BetterList_CompareFunc_UICamera__TypeInfo_12d21a0);
    native_BetterList_CompareFunc_object____ctor_ba8e0c
              (lVar7,0,_Method_UICamera_CompareFunc___12e77e8,
               _Method_BetterList_CompareFunc_UICamera___ctor___12d8af0);
    lVar4 = _Method_BetterList_UICamera__Sort___12d8990;
    if (lVar10 != 0) {
      iVar2 = *(int *)(lVar10 + 0x18) + -1;
      uStack_80 = 0;
      do {
        iVar9 = (int)uStack_80;
        if (iVar2 <= iVar9) {
          return;
        }
        lVar13 = 0;
        lVar14 = 0;
        bVar3 = false;
        uVar15 = -(uStack_80 >> 0x1f) & 0xfffffff800000000 | uStack_80 << 3;
        do {
          lVar8 = *(long *)(lVar10 + 0x10);
          if (lVar8 == 0) {
code_r0x00ba2d18:
                    /* WARNING: Subroutine does not return */
            native_sub_432810();
          }
          uVar12 = iVar9 + (int)lVar14;
          if ((*(uint *)(lVar8 + 0x18) <= uVar12) ||
             (uVar11 = uVar12 + 1, *(uint *)(lVar8 + 0x18) <= uVar11)) goto code_r0x00ba2d0c;
          if (lVar7 == 0) goto code_r0x00ba2d18;
          iVar5 = (*(code *)**(undefined8 **)(*(long *)(*(long *)(lVar4 + 0x18) + 0xc0) + 0x50))
                            (lVar7,*(undefined8 *)(lVar8 + uVar15 + lVar14 * 8 + 0x20),
                             *(undefined8 *)(lVar8 + uVar15 + lVar14 * 8 + 0x28));
          if (iVar5 < 1) {
            if (!bVar3) {
              uVar12 = 0;
              if (iVar9 + lVar14 != 0) {
                uVar12 = iVar9 + -1 + (int)lVar14;
              }
              uStack_80 = (ulong)uVar12;
            }
          }
          else {
            lVar8 = *(long *)(lVar10 + 0x10);
            if (lVar8 == 0) goto code_r0x00ba2d18;
            if ((*(uint *)(lVar8 + 0x18) <= uVar12) || (*(uint *)(lVar8 + 0x18) <= uVar11)) {
code_r0x00ba2d0c:
              uVar6 = native_sub_43283c();
                    /* WARNING: Subroutine does not return */
              native_sub_4327dc(uVar6,0);
            }
            lVar1 = lVar8 + uVar15 + lVar14 * 8;
            uVar6 = *(undefined8 *)(lVar1 + 0x20);
            *(undefined8 *)(lVar1 + 0x20) = *(undefined8 *)(lVar1 + 0x28);
            native_sub_4326e0(lVar8 + uVar15 + lVar13 + 0x20);
            lVar8 = *(long *)(lVar10 + 0x10);
            if (lVar8 == 0) goto code_r0x00ba2d18;
            if (*(uint *)(lVar8 + 0x18) <= uVar11) goto code_r0x00ba2d0c;
            *(undefined8 *)(lVar8 + uVar15 + lVar14 * 8 + 0x28) = uVar6;
            native_sub_4326e0(lVar8 + uVar15 + lVar13 + 0x28,uVar6);
            bVar3 = true;
          }
          lVar14 = lVar14 + 1;
          lVar13 = lVar13 + 8;
        } while (iVar9 + lVar14 < (long)iVar2);
        if (!bVar3) {
          return;
        }
      } while( true );
    }
  }
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* UICamera$$OnDisable @ 0xc9ad84
 * void UICamera__OnDisable (UICamera_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UICamera$$OnDisable
   void UICamera__OnDisable (UICamera_o* __this, const MethodInfo* method); */

undefined8 native_UICamera__OnDisable_c9ad84(undefined8 param_1)

{
  bool bVar1;
  long *plVar2;
  ulong uVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  uint uVar8;
  long lVar9;
  ulong uVar10;
  
  if ((bRam00000000013428dd & 1) == 0) {
    native_sub_43273c(&Method_BetterList_UICamera__Remove___12d8988);
    native_sub_43273c(&UICamera_TypeInfo_12d6410);
    bRam00000000013428dd = 1;
  }
  if (((*(byte *)(_UICamera_TypeInfo_12d6410 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  lVar6 = **(long **)(_UICamera_TypeInfo_12d6410 + 0xb8);
  if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
    native_sub_432810();
  }
  if ((*(long *)(lVar6 + 0x10) != 0) &&
     (plVar2 = (long *)(*(code *)**(undefined8 **)
                                   (*(long *)(*(long *)(
                                                  _Method_BetterList_UICamera__Remove___12d8988 +
                                                  0x18) + 0xc0) + 0x30))(),
     0 < *(int *)(lVar6 + 0x18))) {
    uVar10 = 0;
    lVar9 = 0x20;
    do {
      lVar7 = *(long *)(lVar6 + 0x10);
      if (lVar7 == 0) goto code_r0x00ba2974;
      if (*(uint *)(lVar7 + 0x18) <= uVar10) goto code_r0x00ba2978;
      if (plVar2 == (long *)0x0) goto code_r0x00ba2974;
      uVar3 = (**(code **)(*plVar2 + 0x1b8))
                        (plVar2,*(undefined8 *)(lVar7 + uVar10 * 8 + 0x20),param_1,
                         *(undefined8 *)(*plVar2 + 0x1c0));
      if ((uVar3 & 1) != 0) {
        lVar7 = *(long *)(lVar6 + 0x10);
        *(int *)(lVar6 + 0x18) = *(int *)(lVar6 + 0x18) + -1;
        if (lVar7 == 0) goto code_r0x00ba2974;
        if (*(uint *)(lVar7 + 0x18) <= (uint)uVar10) goto code_r0x00ba2978;
        puVar4 = (undefined8 *)(lVar7 + uVar10 * 8 + 0x20);
        *puVar4 = 0;
        native_sub_4326e0(puVar4,0);
        lVar7 = *(long *)(lVar6 + 0x10);
        uVar8 = *(uint *)(lVar6 + 0x18);
        bVar1 = lVar7 == 0;
        if ((int)uVar8 <= (int)(uint)uVar10) goto code_r0x00ba294c;
        uVar10 = uVar10 & 0xffffffff;
        goto code_r0x00ba2904;
      }
      uVar10 = uVar10 + 1;
      lVar9 = lVar9 + 8;
    } while ((long)uVar10 < (long)*(int *)(lVar6 + 0x18));
  }
  return 0;
  while( true ) {
    uVar3 = uVar10 + 1;
    if (*(uint *)(lVar7 + 0x18) <= uVar3) goto code_r0x00ba2978;
    *(undefined8 *)(lVar7 + lVar9) = *(undefined8 *)(lVar7 + uVar10 * 8 + 0x28);
    native_sub_4326e0();
    lVar7 = *(long *)(lVar6 + 0x10);
    uVar8 = *(uint *)(lVar6 + 0x18);
    lVar9 = lVar9 + 8;
    bVar1 = lVar7 == 0;
    uVar10 = uVar3;
    if ((long)(int)uVar8 <= (long)uVar3) break;
code_r0x00ba2904:
    if (bVar1) goto code_r0x00ba2974;
  }
code_r0x00ba294c:
  if (!bVar1) {
    if (uVar8 < *(uint *)(lVar7 + 0x18)) {
      puVar4 = (undefined8 *)(lVar7 + (long)(int)uVar8 * 8 + 0x20);
      *puVar4 = 0;
      native_sub_4326e0(puVar4,0);
      return 1;
    }
code_r0x00ba2978:
    uVar5 = native_sub_43283c();
                    /* WARNING: Subroutine does not return */
    native_sub_4327dc(uVar5,0);
  }
code_r0x00ba2974:
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* UICamera$$Start @ 0xc9ae10
 * void UICamera__Start (UICamera_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UICamera$$Start
   void UICamera__Start (UICamera_o* __this, const MethodInfo* method); */

void native_UICamera__Start_c9ae10(long param_1)

{
  int iVar1;
  undefined8 uVar2;
  ulong uVar3;
  long lVar4;
  undefined8 *puVar5;
  long lVar6;
  
  if ((bRam00000000013428de & 1) == 0) {
    native_sub_43273c(&Method_BetterList_UICamera__Sort___12d8990);
    native_sub_43273c(&Method_BetterList_CompareFunc_UICamera___ctor___12d8af0);
    native_sub_43273c(&BetterList_CompareFunc_UICamera__TypeInfo_12d21a0);
    native_sub_43273c(&Method_NGUITools_FindInParents_UIRoot____12e5780);
    native_sub_43273c(&NGUITools_TypeInfo_12d53c8);
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    native_sub_43273c(&Method_UICamera_CompareFunc___12e77e8);
    native_sub_43273c(&UICamera_TypeInfo_12d6410);
    bRam00000000013428de = 1;
  }
  if (((*(byte *)(_UICamera_TypeInfo_12d6410 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  lVar6 = **(long **)(_UICamera_TypeInfo_12d6410 + 0xb8);
  uVar2 = native_sub_432808(_BetterList_CompareFunc_UICamera__TypeInfo_12d21a0);
  native_BetterList_CompareFunc_object____ctor_ba8e0c
            (uVar2,0,_Method_UICamera_CompareFunc___12e77e8,
             _Method_BetterList_CompareFunc_UICamera___ctor___12d8af0);
  if (lVar6 != 0) {
    native_BetterList_object___Sort_ba2b60(lVar6,uVar2,_Method_BetterList_UICamera__Sort___12d8990);
    if (*(int *)(param_1 + 0x18) != 0) {
      lVar6 = native_UICamera__get_cachedCamera_c95254(param_1);
      if (lVar6 == 0) goto LAB_00c9b0b4;
      iVar1 = native_UnityEngine_Camera__get_transparencySortMode_8d8750(lVar6,0);
      if (iVar1 != 2) {
        lVar6 = native_UICamera__get_cachedCamera_c95254(param_1);
        if (lVar6 == 0) goto LAB_00c9b0b4;
        native_UnityEngine_Camera__set_transparencySortMode_8d8790(lVar6,2,0);
      }
    }
    uVar3 = native_UnityEngine_Application__get_isPlaying_8d60cc(0);
    if ((uVar3 & 1) == 0) {
      return;
    }
    if (((*(byte *)(_UICamera_TypeInfo_12d6410 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    uVar2 = *(undefined8 *)(*(long *)(_UICamera_TypeInfo_12d6410 + 0xb8) + 0xf8);
    if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
      native_sub_4327ec(_UnityEngine_Object_TypeInfo_12d54e0);
    }
    uVar3 = native_UnityEngine_Object__op_Equality_8e9a3c(uVar2,0,0);
    if ((uVar3 & 1) != 0) {
      uVar2 = native_UnityEngine_Component__get_gameObject_8da66c(param_1,0);
      if (((*(byte *)(_NGUITools_TypeInfo_12d53c8 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_NGUITools_TypeInfo_12d53c8 + 0xe0) == 0)) {
        native_sub_4327ec(_NGUITools_TypeInfo_12d53c8);
      }
      lVar6 = native_NGUITools__FindInParents_object__4a5c04
                        (uVar2,_Method_NGUITools_FindInParents_UIRoot____12e5780);
      if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
        native_sub_4327ec(_UnityEngine_Object_TypeInfo_12d54e0);
      }
      uVar3 = native_UnityEngine_Object__op_Inequality_8d76fc(lVar6,0,0);
      lVar4 = param_1;
      if (((uVar3 & 1) != 0) && (lVar4 = lVar6, lVar6 == 0)) goto LAB_00c9b0b4;
      uVar2 = native_UnityEngine_Component__get_gameObject_8da66c(lVar4,0);
      if (((*(byte *)(_UICamera_TypeInfo_12d6410 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
        native_sub_4327ec(_UICamera_TypeInfo_12d6410);
      }
      puVar5 = (undefined8 *)(*(long *)(_UICamera_TypeInfo_12d6410 + 0xb8) + 0xf8);
      *puVar5 = uVar2;
      native_sub_4326e0(puVar5,uVar2);
    }
    lVar6 = native_UICamera__get_cachedCamera_c95254(param_1);
    if (lVar6 != 0) {
      if (pcRam0000000001340a00 == (code *)0x0) {
        pcRam0000000001340a00 = (code *)native_sub_4326f0(&UNK_00e2caf0);
      }
                    /* WARNING: Could not recover jumptable at 0x008d89cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*pcRam0000000001340a00)(lVar6,0);
      return;
    }
  }
LAB_00c9b0b4:
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* UICamera$$StartIgnoring @ 0xc9b0b8
 * void UICamera__StartIgnoring (UICamera_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UICamera$$StartIgnoring
   void UICamera__StartIgnoring (UICamera_o* __this, const MethodInfo* method); */

void native_UICamera__StartIgnoring_c9b0b8(void)

{
  if ((bRam00000000013428df & 1) == 0) {
    native_sub_43273c(&UICamera_TypeInfo_12d6410);
    bRam00000000013428df = 1;
  }
  if (((*(byte *)(_UICamera_TypeInfo_12d6410 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  *(undefined1 *)(*(long *)(_UICamera_TypeInfo_12d6410 + 0xb8) + 0x59) = 1;
  return;
}



/* UICamera$$StopIgnoring @ 0xc9b120
 * void UICamera__StopIgnoring (UICamera_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UICamera$$StopIgnoring
   void UICamera__StopIgnoring (UICamera_o* __this, const MethodInfo* method); */

void native_UICamera__StopIgnoring_c9b120(void)

{
  if ((bRam00000000013428e0 & 1) == 0) {
    native_sub_43273c(&UICamera_TypeInfo_12d6410);
    bRam00000000013428e0 = 1;
  }
  if (((*(byte *)(_UICamera_TypeInfo_12d6410 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  *(undefined1 *)(*(long *)(_UICamera_TypeInfo_12d6410 + 0xb8) + 0x59) = 0;
  return;
}



/* UICamera$$Update @ 0xc9b184
 * void UICamera__Update (UICamera_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UICamera$$Update
   void UICamera__Update (UICamera_o* __this, const MethodInfo* method); */

void native_UICamera__Update_c9b184(long param_1)

{
  char cVar1;
  int iVar2;
  ulong uVar3;
  long *plVar4;
  undefined8 *puVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  float fVar10;
  float fVar11;
  float fStack_34;
  
  if ((bRam00000000013428e1 & 1) == 0) {
    native_sub_43273c(&UICamera_TypeInfo_12d6410);
    bRam00000000013428e1 = 1;
  }
  if (((*(byte *)(_UICamera_TypeInfo_12d6410 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  if (((*(char *)(*(long *)(_UICamera_TypeInfo_12d6410 + 0xb8) + 0x59) != '\0') ||
      (uVar3 = native_UICamera__get_handlesEvents_c95028(param_1), (uVar3 & 1) == 0)) ||
     (*(int *)(param_1 + 0x24) != 0)) {
    return;
  }
  if ((bRam00000000013428e3 & 1) == 0) {
    native_sub_43273c(&NGUIDebug_TypeInfo_12d53a8);
    native_sub_43273c(&NGUITools_TypeInfo_12d53c8);
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    native_sub_43273c(&float_TypeInfo_12d5db0);
    native_sub_43273c(&UICamera_TypeInfo_12d6410);
    native_sub_43273c(&UIPopupList_TypeInfo_12d6490);
    native_sub_43273c(&StringLiteral_OnScroll_12f02b8);
    bRam00000000013428e3 = 1;
  }
  if (((*(byte *)(_UICamera_TypeInfo_12d6410 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  plVar4 = (long *)(*(long *)(_UICamera_TypeInfo_12d6410 + 0xb8) + 0xb8);
  *plVar4 = param_1;
  native_sub_4326e0(plVar4,param_1);
  cVar1 = *(char *)(param_1 + 0x28);
  if (((*(byte *)(_NGUIDebug_TypeInfo_12d53a8 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_NGUIDebug_TypeInfo_12d53a8 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  native_NGUIDebug__set_debugRaycast_7fed7c(cVar1 != '\0',0);
  if (*(char *)(param_1 + 0x2a) == '\0') {
    if (*(char *)(param_1 + 0x29) != '\0') {
      native_UICamera__ProcessMouse_c9bf40(param_1);
    }
  }
  else {
    native_UICamera__ProcessTouches_c9ba20(param_1);
  }
  if (((*(byte *)(_UICamera_TypeInfo_12d6410 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  lVar6 = *(long *)(*(long *)(_UICamera_TypeInfo_12d6410 + 0xb8) + 0x50);
  if (lVar6 != 0) {
    if (((*(byte *)(_UICamera_TypeInfo_12d6410 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
      native_sub_4327ec();
      lVar6 = *(long *)(*(long *)(_UICamera_TypeInfo_12d6410 + 0xb8) + 0x50);
      if (lVar6 == 0) goto LAB_00c9b868;
    }
    native_UICamera_OnCustomInput__Invoke_552c74(lVar6,0);
  }
  if ((*(char *)(param_1 + 0x2c) != '\0') || (*(char *)(param_1 + 0x2d) != '\0')) {
    if (((*(byte *)(_UICamera_TypeInfo_12d6410 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    uVar3 = native_UICamera__get_disableController_c94230();
    if ((uVar3 & 1) == 0) {
      if (((*(byte *)(_UICamera_TypeInfo_12d6410 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
        native_sub_4327ec();
      }
      if (*(char *)(*(long *)(_UICamera_TypeInfo_12d6410 + 0xb8) + 0x5a) == '\0') {
        native_UICamera__ProcessOthers_c9ca68(param_1);
      }
    }
  }
  if (*(char *)(param_1 + 0x29) != '\0') {
    if (((*(byte *)(_UICamera_TypeInfo_12d6410 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    uVar9 = *(undefined8 *)(*(long *)(_UICamera_TypeInfo_12d6410 + 0xb8) + 0x1e0);
    if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
      native_sub_4327ec(_UnityEngine_Object_TypeInfo_12d54e0);
    }
    uVar3 = native_UnityEngine_Object__op_Inequality_8d76fc(uVar9,0,0);
    if ((uVar3 & 1) == 0) goto LAB_00c9b560;
    uVar3 = native_System_String__IsNullOrEmpty_b09430(*(undefined8 *)(param_1 + 0x70),0);
    if ((uVar3 & 1) == 0) {
      if (((*(byte *)(_UICamera_TypeInfo_12d6410 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
        native_sub_4327ec();
      }
      lVar6 = *(long *)(*(long *)(_UICamera_TypeInfo_12d6410 + 0xb8) + 0x20);
      if (lVar6 == 0) goto LAB_00c9b868;
      uVar9 = native_UICamera_GetAxisFunc__Invoke_550c58(lVar6,*(undefined8 *)(param_1 + 0x70),0);
      if ((float)uVar9 != 0.0) {
        if (((*(byte *)(_UICamera_TypeInfo_12d6410 + 0x133) >> 2 & 1) != 0) &&
           (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
          native_sub_4327ec();
        }
        lVar7 = *(long *)(_UICamera_TypeInfo_12d6410 + 0xb8);
        lVar6 = *(long *)(lVar7 + 0x128);
        if (lVar6 != 0) {
          if (((*(byte *)(_UICamera_TypeInfo_12d6410 + 0x133) >> 2 & 1) != 0) &&
             (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
            native_sub_4327ec();
            lVar7 = *(long *)(_UICamera_TypeInfo_12d6410 + 0xb8);
            lVar6 = *(long *)(lVar7 + 0x128);
            if (lVar6 == 0) goto LAB_00c9b868;
          }
          native_UICamera_FloatDelegate__Invoke_5504d8(uVar9,lVar6,*(undefined8 *)(lVar7 + 0x1e0),0)
          ;
        }
        if (((*(byte *)(_UICamera_TypeInfo_12d6410 + 0x133) >> 2 & 1) != 0) &&
           (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
          native_sub_4327ec();
        }
        uVar8 = *(undefined8 *)(*(long *)(_UICamera_TypeInfo_12d6410 + 0xb8) + 0x1e0);
        fStack_34 = (float)uVar9;
        uVar9 = native_sub_4327fc(_float_TypeInfo_12d5db0,&fStack_34);
        native_UICamera__Notify_c96a08(uVar8,_StringLiteral_OnScroll_12f02b8,uVar9);
      }
    }
    if (((*(byte *)(_UICamera_TypeInfo_12d6410 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    iVar2 = native_UICamera__get_currentScheme_c92518();
    if (iVar2 == 0) {
      if (((*(byte *)(_UICamera_TypeInfo_12d6410 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
        native_sub_4327ec();
      }
      lVar6 = *(long *)(_UICamera_TypeInfo_12d6410 + 0xb8);
      if (*(char *)(lVar6 + 0x58) != '\0') {
        if (((*(byte *)(_UICamera_TypeInfo_12d6410 + 0x133) >> 2 & 1) != 0) &&
           (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
          native_sub_4327ec();
          lVar6 = *(long *)(_UICamera_TypeInfo_12d6410 + 0xb8);
        }
        if (*(float *)(lVar6 + 0x1b8) != 0.0) {
          if (((*(byte *)(_UIPopupList_TypeInfo_12d6490 + 0x133) >> 2 & 1) != 0) &&
             (*(int *)(_UIPopupList_TypeInfo_12d6490 + 0xe0) == 0)) {
            native_sub_4327ec();
          }
          uVar3 = native_UIPopupList__get_isOpen_c264f8(0);
          if ((uVar3 & 1) == 0) {
            if (((*(byte *)(_UICamera_TypeInfo_12d6410 + 0x133) >> 2 & 1) != 0) &&
               (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
              native_sub_4327ec();
            }
            lVar6 = *(long *)(*(long *)(_UICamera_TypeInfo_12d6410 + 0xb8) + 0x188);
            if (lVar6 != 0) {
              if (*(int *)(lVar6 + 0x18) == 0) {
LAB_00c9b86c:
                uVar9 = native_sub_43283c();
                    /* WARNING: Subroutine does not return */
                native_sub_4327dc(uVar9,0);
              }
              if (*(long *)(lVar6 + 0x20) != 0) {
                uVar9 = *(undefined8 *)(*(long *)(lVar6 + 0x20) + 0x58);
                if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
                   (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
                  native_sub_4327ec();
                }
                uVar3 = native_UnityEngine_Object__op_Equality_8e9a3c(uVar9,0,0);
                if ((uVar3 & 1) == 0) goto LAB_00c9b560;
                if (((*(byte *)(_UICamera_TypeInfo_12d6410 + 0x133) >> 2 & 1) != 0) &&
                   (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
                  native_sub_4327ec();
                }
                fVar11 = *(float *)(*(long *)(_UICamera_TypeInfo_12d6410 + 0xb8) + 0x1b8);
                fVar10 = (float)native_UnityEngine_Time__get_unscaledTime_770860(0);
                if (fVar10 <= fVar11) {
                  if (((*(byte *)(_UICamera_TypeInfo_12d6410 + 0x133) >> 2 & 1) != 0) &&
                     (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
                    native_sub_4327ec();
                  }
                  lVar6 = *(long *)(*(long *)(_UICamera_TypeInfo_12d6410 + 0xb8) + 0x18);
                  if (lVar6 == 0) goto LAB_00c9b868;
                  uVar3 = native_UICamera_GetKeyStateFunc__Invoke_551094(lVar6,0x130,0);
                  if ((uVar3 & 1) == 0) {
                    if (((*(byte *)(_UICamera_TypeInfo_12d6410 + 0x133) >> 2 & 1) != 0) &&
                       (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
                      native_sub_4327ec();
                    }
                    lVar6 = *(long *)(*(long *)(_UICamera_TypeInfo_12d6410 + 0xb8) + 0x18);
                    if (lVar6 == 0) goto LAB_00c9b868;
                    uVar3 = native_UICamera_GetKeyStateFunc__Invoke_551094(lVar6,0x12f,0);
                    if ((uVar3 & 1) == 0) goto LAB_00c9b560;
                  }
                }
                if (((*(byte *)(_UICamera_TypeInfo_12d6410 + 0x133) >> 2 & 1) != 0) &&
                   (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
                  native_sub_4327ec();
                }
                lVar6 = *(long *)(*(long *)(_UICamera_TypeInfo_12d6410 + 0xb8) + 0x188);
                if (lVar6 != 0) {
                  if (*(int *)(lVar6 + 0x18) != 0) {
                    *(undefined8 *)(*(long *)(_UICamera_TypeInfo_12d6410 + 0xb8) + 0xe0) =
                         *(undefined8 *)(lVar6 + 0x20);
                    native_sub_4326e0();
                    lVar6 = _UICamera_TypeInfo_12d6410;
                    *(undefined4 *)(*(long *)(_UICamera_TypeInfo_12d6410 + 0xb8) + 0xd4) =
                         0xffffffff;
                    native_UICamera__ShowTooltip_c953cc
                              (*(undefined8 *)(*(long *)(lVar6 + 0xb8) + 0x1e0));
                    goto LAB_00c9b560;
                  }
                  goto LAB_00c9b86c;
                }
              }
            }
LAB_00c9b868:
                    /* WARNING: Subroutine does not return */
            native_sub_432810();
          }
        }
      }
    }
  }
LAB_00c9b560:
  if (((*(byte *)(_UICamera_TypeInfo_12d6410 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar9 = *(undefined8 *)(*(long *)(_UICamera_TypeInfo_12d6410 + 0xb8) + 0x1b0);
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec(_UnityEngine_Object_TypeInfo_12d54e0);
  }
  uVar3 = native_UnityEngine_Object__op_Inequality_8d76fc(uVar9,0,0);
  if ((uVar3 & 1) != 0) {
    if (((*(byte *)(_UICamera_TypeInfo_12d6410 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    uVar9 = *(undefined8 *)(*(long *)(_UICamera_TypeInfo_12d6410 + 0xb8) + 0x1b0);
    if (((*(byte *)(_NGUITools_TypeInfo_12d53c8 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_NGUITools_TypeInfo_12d53c8 + 0xe0) == 0)) {
      native_sub_4327ec(_NGUITools_TypeInfo_12d53c8);
    }
    uVar3 = native_NGUITools__GetActive_72d0d4(uVar9,0);
    if ((uVar3 & 1) == 0) {
      if (((*(byte *)(_UICamera_TypeInfo_12d6410 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
        native_sub_4327ec();
      }
      native_UICamera__ShowTooltip_c953cc(0);
    }
  }
  if (((*(byte *)(_UICamera_TypeInfo_12d6410 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  puVar5 = (undefined8 *)(*(long *)(_UICamera_TypeInfo_12d6410 + 0xb8) + 0xb8);
  *puVar5 = 0;
  native_sub_4326e0(puVar5,0);
  *(undefined4 *)(*(long *)(_UICamera_TypeInfo_12d6410 + 0xb8) + 0xd4) = 0xffffff9c;
  return;
}



/* UICamera$$LateUpdate @ 0xc9b878
 * void UICamera__LateUpdate (UICamera_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UICamera$$LateUpdate
   void UICamera__LateUpdate (UICamera_o* __this, const MethodInfo* method); */

void native_UICamera__LateUpdate_c9b878(long param_1)

{
  long *plVar1;
  ushort uVar2;
  int iVar3;
  int iVar4;
  long lVar5;
  undefined8 *puVar6;
  ulong uVar7;
  ulong uVar8;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  undefined8 extraout_x1_01;
  undefined8 extraout_x1_02;
  undefined8 uVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  int *piVar13;
  code *pcVar14;
  long lVar15;
  long *plVar16;
  long lStack_48;
  
  if ((bRam00000000013428e2 & 1) == 0) {
    native_sub_43273c(&UICamera_TypeInfo_12d6410);
    native_sub_43273c(&UIRoot_TypeInfo_12d64a8);
    native_sub_43273c(&StringLiteral_UpdateAnchors_12f2d00);
    bRam00000000013428e2 = 1;
  }
  uVar8 = native_UICamera__get_handlesEvents_c95028(param_1);
  if ((uVar8 & 1) == 0) {
    return;
  }
  if (*(int *)(param_1 + 0x24) == 1) {
    native_UICamera__ProcessEvents_c9b214(param_1);
  }
  iVar3 = native_UnityEngine_Screen__get_width_76a5e4(0);
  iVar4 = native_UnityEngine_Screen__get_height_76a618(0);
  if (((*(byte *)(_UICamera_TypeInfo_12d6410 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
    native_sub_4327ec(_UICamera_TypeInfo_12d6410);
  }
  lVar12 = *(long *)(_UICamera_TypeInfo_12d6410 + 0xb8);
  if (iVar3 == *(int *)(lVar12 + 0x1a8)) {
    if (((*(byte *)(_UICamera_TypeInfo_12d6410 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
      native_sub_4327ec(_UICamera_TypeInfo_12d6410);
      lVar12 = *(long *)(_UICamera_TypeInfo_12d6410 + 0xb8);
    }
    if (iVar4 == *(int *)(lVar12 + 0x1ac)) {
      return;
    }
  }
  if (((*(byte *)(_UICamera_TypeInfo_12d6410 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
    native_sub_4327ec(_UICamera_TypeInfo_12d6410);
  }
  lVar12 = _UICamera_TypeInfo_12d6410;
  *(int *)(*(long *)(_UICamera_TypeInfo_12d6410 + 0xb8) + 0x1a8) = iVar3;
  *(int *)(*(long *)(lVar12 + 0xb8) + 0x1ac) = iVar4;
  if (((*(byte *)(_UIRoot_TypeInfo_12d64a8 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UIRoot_TypeInfo_12d64a8 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  native_UIRoot__Broadcast_c2fc74(_StringLiteral_UpdateAnchors_12f2d00,0);
  lVar12 = *(long *)(*(long *)(_UICamera_TypeInfo_12d6410 + 0xb8) + 0x48);
  if (lVar12 == 0) {
    return;
  }
  if (((*(byte *)(_UICamera_TypeInfo_12d6410 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
    native_sub_4327ec(_UICamera_TypeInfo_12d6410);
    lVar12 = *(long *)(*(long *)(_UICamera_TypeInfo_12d6410 + 0xb8) + 0x48);
    if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
      native_sub_432810();
    }
  }
  uVar9 = 0;
  lStack_48 = lVar12;
  lVar10 = *(long *)(lVar12 + 0x68);
  if (lVar10 == 0) {
    plVar16 = &lStack_48;
    lVar15 = 1;
  }
  else {
    lVar15 = *(long *)(lVar10 + 0x18);
    if (lVar15 == 0) {
      return;
    }
    plVar16 = (long *)(lVar10 + 0x20);
  }
  lVar10 = 0;
  do {
    lVar11 = plVar16[lVar10];
    plVar1 = *(long **)(lVar11 + 0x20);
    lVar5 = *(long *)(lVar11 + 0x28);
    pcVar14 = *(code **)(lVar11 + 0x10);
    if (*(short *)(lVar5 + 0x48) == -1) {
      native_sub_4327f4(lVar5,uVar9);
    }
    uVar8 = native_sub_432768(lVar5);
    if ((uVar8 & 1) == 0) {
      if ((((plVar1 == (long *)0x0) || (*(short *)(lVar5 + 0x48) == -1)) ||
          ((*(byte *)(*plVar1 + 0x115) & 1) != 0)) || (*(long *)(lVar12 + 0x18) == 0))
      goto LAB_005533b0;
      uVar8 = native_sub_432760(lVar5);
      uVar7 = native_sub_432b64(lVar5);
      if ((uVar8 & 1) == 0) {
        uVar2 = *(ushort *)(lVar5 + 0x48);
        if ((uVar7 & 1) == 0) {
          lVar5 = *plVar1 + (ulong)uVar2 * 0x10;
          (**(code **)(lVar5 + 0x138))(plVar1,*(undefined8 *)(lVar5 + 0x140));
          uVar9 = extraout_x1;
          goto LAB_005533bc;
        }
        lVar5 = native_sub_432764(lVar5);
        lVar11 = *plVar1;
        if ((ulong)*(ushort *)(lVar11 + 0x12a) != 0) {
          uVar8 = 0;
          piVar13 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
          do {
            if (*(long *)(piVar13 + -2) == lVar5) {
              puVar6 = (undefined8 *)(lVar11 + (long)(int)(*piVar13 + (uint)uVar2) * 0x10 + 0x138);
              goto LAB_005532d8;
            }
            uVar8 = uVar8 + 1;
            piVar13 = piVar13 + 4;
          } while (uVar8 < *(ushort *)(lVar11 + 0x12a));
        }
        puVar6 = (undefined8 *)native_sub_3c9b34(plVar1,lVar5,(ulong)uVar2);
LAB_005532d8:
        pcVar14 = (code *)*puVar6;
        puVar6 = (undefined8 *)puVar6[1];
      }
      else {
        if ((uVar7 & 1) == 0) {
          uVar9 = *(undefined8 *)(*plVar1 + (ulong)*(ushort *)(lVar5 + 0x48) * 0x10 + 0x140);
        }
        else {
          lVar11 = *plVar1;
          if ((ulong)*(ushort *)(lVar11 + 0x12a) != 0) {
            uVar8 = 0;
            piVar13 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
            do {
              if (*(long *)(piVar13 + -2) == *(long *)(lVar5 + 0x18)) {
                lVar11 = lVar11 + (long)(int)(*piVar13 + (uint)*(ushort *)(lVar5 + 0x48)) * 0x10 +
                         0x138;
                goto LAB_005532b0;
              }
              uVar8 = uVar8 + 1;
              piVar13 = piVar13 + 4;
            } while (uVar8 < *(ushort *)(lVar11 + 0x12a));
          }
          lVar11 = native_sub_3c9b34(plVar1);
LAB_005532b0:
          uVar9 = *(undefined8 *)(lVar11 + 8);
        }
        puVar6 = (undefined8 *)native_sub_4327e8(uVar9,lVar5);
        pcVar14 = (code *)*puVar6;
      }
      (*pcVar14)(plVar1,puVar6);
      uVar9 = extraout_x1_00;
    }
    else if (*(char *)(lVar5 + 0x4a) == '\0') {
      (*pcVar14)(lVar5);
      uVar9 = extraout_x1_01;
    }
    else {
LAB_005533b0:
      (*pcVar14)(plVar1,lVar5);
      uVar9 = extraout_x1_02;
    }
LAB_005533bc:
    lVar10 = lVar10 + 1;
    if (lVar10 == lVar15) {
      return;
    }
  } while( true );
}



/* UICamera$$ProcessEvents @ 0xc9b214
 * void UICamera__ProcessEvents (UICamera_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UICamera$$ProcessEvents
   void UICamera__ProcessEvents (UICamera_o* __this, const MethodInfo* method); */

void native_UICamera__ProcessEvents_c9b214(long param_1)

{
  char cVar1;
  int iVar2;
  long *plVar3;
  ulong uVar4;
  undefined8 *puVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  float fVar10;
  float fVar11;
  float fStack_34;
  
  if ((bRam00000000013428e3 & 1) == 0) {
    native_sub_43273c(&NGUIDebug_TypeInfo_12d53a8);
    native_sub_43273c(&NGUITools_TypeInfo_12d53c8);
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    native_sub_43273c(&float_TypeInfo_12d5db0);
    native_sub_43273c(&UICamera_TypeInfo_12d6410);
    native_sub_43273c(&UIPopupList_TypeInfo_12d6490);
    native_sub_43273c(&StringLiteral_OnScroll_12f02b8);
    bRam00000000013428e3 = 1;
  }
  if (((*(byte *)(_UICamera_TypeInfo_12d6410 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  plVar3 = (long *)(*(long *)(_UICamera_TypeInfo_12d6410 + 0xb8) + 0xb8);
  *plVar3 = param_1;
  native_sub_4326e0(plVar3,param_1);
  cVar1 = *(char *)(param_1 + 0x28);
  if (((*(byte *)(_NGUIDebug_TypeInfo_12d53a8 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_NGUIDebug_TypeInfo_12d53a8 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  native_NGUIDebug__set_debugRaycast_7fed7c(cVar1 != '\0',0);
  if (*(char *)(param_1 + 0x2a) == '\0') {
    if (*(char *)(param_1 + 0x29) != '\0') {
      native_UICamera__ProcessMouse_c9bf40(param_1);
    }
  }
  else {
    native_UICamera__ProcessTouches_c9ba20(param_1);
  }
  if (((*(byte *)(_UICamera_TypeInfo_12d6410 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  lVar6 = *(long *)(*(long *)(_UICamera_TypeInfo_12d6410 + 0xb8) + 0x50);
  if (lVar6 != 0) {
    if (((*(byte *)(_UICamera_TypeInfo_12d6410 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
      native_sub_4327ec();
      lVar6 = *(long *)(*(long *)(_UICamera_TypeInfo_12d6410 + 0xb8) + 0x50);
      if (lVar6 == 0) goto LAB_00c9b868;
    }
    native_UICamera_OnCustomInput__Invoke_552c74(lVar6,0);
  }
  if ((*(char *)(param_1 + 0x2c) != '\0') || (*(char *)(param_1 + 0x2d) != '\0')) {
    if (((*(byte *)(_UICamera_TypeInfo_12d6410 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    uVar4 = native_UICamera__get_disableController_c94230();
    if ((uVar4 & 1) == 0) {
      if (((*(byte *)(_UICamera_TypeInfo_12d6410 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
        native_sub_4327ec();
      }
      if (*(char *)(*(long *)(_UICamera_TypeInfo_12d6410 + 0xb8) + 0x5a) == '\0') {
        native_UICamera__ProcessOthers_c9ca68(param_1);
      }
    }
  }
  if (*(char *)(param_1 + 0x29) != '\0') {
    if (((*(byte *)(_UICamera_TypeInfo_12d6410 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    uVar9 = *(undefined8 *)(*(long *)(_UICamera_TypeInfo_12d6410 + 0xb8) + 0x1e0);
    if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
      native_sub_4327ec(_UnityEngine_Object_TypeInfo_12d54e0);
    }
    uVar4 = native_UnityEngine_Object__op_Inequality_8d76fc(uVar9,0,0);
    if ((uVar4 & 1) == 0) goto LAB_00c9b560;
    uVar4 = native_System_String__IsNullOrEmpty_b09430(*(undefined8 *)(param_1 + 0x70),0);
    if ((uVar4 & 1) == 0) {
      if (((*(byte *)(_UICamera_TypeInfo_12d6410 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
        native_sub_4327ec();
      }
      lVar6 = *(long *)(*(long *)(_UICamera_TypeInfo_12d6410 + 0xb8) + 0x20);
      if (lVar6 == 0) goto LAB_00c9b868;
      uVar9 = native_UICamera_GetAxisFunc__Invoke_550c58(lVar6,*(undefined8 *)(param_1 + 0x70),0);
      if ((float)uVar9 != 0.0) {
        if (((*(byte *)(_UICamera_TypeInfo_12d6410 + 0x133) >> 2 & 1) != 0) &&
           (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
          native_sub_4327ec();
        }
        lVar7 = *(long *)(_UICamera_TypeInfo_12d6410 + 0xb8);
        lVar6 = *(long *)(lVar7 + 0x128);
        if (lVar6 != 0) {
          if (((*(byte *)(_UICamera_TypeInfo_12d6410 + 0x133) >> 2 & 1) != 0) &&
             (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
            native_sub_4327ec();
            lVar7 = *(long *)(_UICamera_TypeInfo_12d6410 + 0xb8);
            lVar6 = *(long *)(lVar7 + 0x128);
            if (lVar6 == 0) goto LAB_00c9b868;
          }
          native_UICamera_FloatDelegate__Invoke_5504d8(uVar9,lVar6,*(undefined8 *)(lVar7 + 0x1e0),0)
          ;
        }
        if (((*(byte *)(_UICamera_TypeInfo_12d6410 + 0x133) >> 2 & 1) != 0) &&
           (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
          native_sub_4327ec();
        }
        uVar8 = *(undefined8 *)(*(long *)(_UICamera_TypeInfo_12d6410 + 0xb8) + 0x1e0);
        fStack_34 = (float)uVar9;
        uVar9 = native_sub_4327fc(_float_TypeInfo_12d5db0,&fStack_34);
        native_UICamera__Notify_c96a08(uVar8,_StringLiteral_OnScroll_12f02b8,uVar9);
      }
    }
    if (((*(byte *)(_UICamera_TypeInfo_12d6410 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    iVar2 = native_UICamera__get_currentScheme_c92518();
    if (iVar2 == 0) {
      if (((*(byte *)(_UICamera_TypeInfo_12d6410 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
        native_sub_4327ec();
      }
      lVar6 = *(long *)(_UICamera_TypeInfo_12d6410 + 0xb8);
      if (*(char *)(lVar6 + 0x58) != '\0') {
        if (((*(byte *)(_UICamera_TypeInfo_12d6410 + 0x133) >> 2 & 1) != 0) &&
           (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
          native_sub_4327ec();
          lVar6 = *(long *)(_UICamera_TypeInfo_12d6410 + 0xb8);
        }
        if (*(float *)(lVar6 + 0x1b8) != 0.0) {
          if (((*(byte *)(_UIPopupList_TypeInfo_12d6490 + 0x133) >> 2 & 1) != 0) &&
             (*(int *)(_UIPopupList_TypeInfo_12d6490 + 0xe0) == 0)) {
            native_sub_4327ec();
          }
          uVar4 = native_UIPopupList__get_isOpen_c264f8(0);
          if ((uVar4 & 1) == 0) {
            if (((*(byte *)(_UICamera_TypeInfo_12d6410 + 0x133) >> 2 & 1) != 0) &&
               (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
              native_sub_4327ec();
            }
            lVar6 = *(long *)(*(long *)(_UICamera_TypeInfo_12d6410 + 0xb8) + 0x188);
            if (lVar6 != 0) {
              if (*(int *)(lVar6 + 0x18) == 0) {
LAB_00c9b86c:
                uVar9 = native_sub_43283c();
                    /* WARNING: Subroutine does not return */
                native_sub_4327dc(uVar9,0);
              }
              if (*(long *)(lVar6 + 0x20) != 0) {
                uVar9 = *(undefined8 *)(*(long *)(lVar6 + 0x20) + 0x58);
                if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
                   (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
                  native_sub_4327ec();
                }
                uVar4 = native_UnityEngine_Object__op_Equality_8e9a3c(uVar9,0,0);
                if ((uVar4 & 1) == 0) goto LAB_00c9b560;
                if (((*(byte *)(_UICamera_TypeInfo_12d6410 + 0x133) >> 2 & 1) != 0) &&
                   (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
                  native_sub_4327ec();
                }
                fVar11 = *(float *)(*(long *)(_UICamera_TypeInfo_12d6410 + 0xb8) + 0x1b8);
                fVar10 = (float)native_UnityEngine_Time__get_unscaledTime_770860(0);
                if (fVar10 <= fVar11) {
                  if (((*(byte *)(_UICamera_TypeInfo_12d6410 + 0x133) >> 2 & 1) != 0) &&
                     (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
                    native_sub_4327ec();
                  }
                  lVar6 = *(long *)(*(long *)(_UICamera_TypeInfo_12d6410 + 0xb8) + 0x18);
                  if (lVar6 == 0) goto LAB_00c9b868;
                  uVar4 = native_UICamera_GetKeyStateFunc__Invoke_551094(lVar6,0x130,0);
                  if ((uVar4 & 1) == 0) {
                    if (((*(byte *)(_UICamera_TypeInfo_12d6410 + 0x133) >> 2 & 1) != 0) &&
                       (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
                      native_sub_4327ec();
                    }
                    lVar6 = *(long *)(*(long *)(_UICamera_TypeInfo_12d6410 + 0xb8) + 0x18);
                    if (lVar6 == 0) goto LAB_00c9b868;
                    uVar4 = native_UICamera_GetKeyStateFunc__Invoke_551094(lVar6,0x12f,0);
                    if ((uVar4 & 1) == 0) goto LAB_00c9b560;
                  }
                }
                if (((*(byte *)(_UICamera_TypeInfo_12d6410 + 0x133) >> 2 & 1) != 0) &&
                   (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
                  native_sub_4327ec();
                }
                lVar6 = *(long *)(*(long *)(_UICamera_TypeInfo_12d6410 + 0xb8) + 0x188);
                if (lVar6 != 0) {
                  if (*(int *)(lVar6 + 0x18) != 0) {
                    *(undefined8 *)(*(long *)(_UICamera_TypeInfo_12d6410 + 0xb8) + 0xe0) =
                         *(undefined8 *)(lVar6 + 0x20);
                    native_sub_4326e0();
                    lVar6 = _UICamera_TypeInfo_12d6410;
                    *(undefined4 *)(*(long *)(_UICamera_TypeInfo_12d6410 + 0xb8) + 0xd4) =
                         0xffffffff;
                    native_UICamera__ShowTooltip_c953cc
                              (*(undefined8 *)(*(long *)(lVar6 + 0xb8) + 0x1e0));
                    goto LAB_00c9b560;
                  }
                  goto LAB_00c9b86c;
                }
              }
            }
LAB_00c9b868:
                    /* WARNING: Subroutine does not return */
            native_sub_432810();
          }
        }
      }
    }
  }
LAB_00c9b560:
  if (((*(byte *)(_UICamera_TypeInfo_12d6410 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar9 = *(undefined8 *)(*(long *)(_UICamera_TypeInfo_12d6410 + 0xb8) + 0x1b0);
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec(_UnityEngine_Object_TypeInfo_12d54e0);
  }
  uVar4 = native_UnityEngine_Object__op_Inequality_8d76fc(uVar9,0,0);
  if ((uVar4 & 1) != 0) {
    if (((*(byte *)(_UICamera_TypeInfo_12d6410 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    uVar9 = *(undefined8 *)(*(long *)(_UICamera_TypeInfo_12d6410 + 0xb8) + 0x1b0);
    if (((*(byte *)(_NGUITools_TypeInfo_12d53c8 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_NGUITools_TypeInfo_12d53c8 + 0xe0) == 0)) {
      native_sub_4327ec(_NGUITools_TypeInfo_12d53c8);
    }
    uVar4 = native_NGUITools__GetActive_72d0d4(uVar9,0);
    if ((uVar4 & 1) == 0) {
      if (((*(byte *)(_UICamera_TypeInfo_12d6410 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
        native_sub_4327ec();
      }
      native_UICamera__ShowTooltip_c953cc(0);
    }
  }
  if (((*(byte *)(_UICamera_TypeInfo_12d6410 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  puVar5 = (undefined8 *)(*(long *)(_UICamera_TypeInfo_12d6410 + 0xb8) + 0xb8);
  *puVar5 = 0;
  native_sub_4326e0(puVar5,0);
  *(undefined4 *)(*(long *)(_UICamera_TypeInfo_12d6410 + 0xb8) + 0xd4) = 0xffffff9c;
  return;
}



/* UICamera$$ProcessMouse @ 0xc9bf40
 * void UICamera__ProcessMouse (UICamera_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UICamera$$ProcessMouse
   void UICamera__ProcessMouse (UICamera_o* __this, const MethodInfo* method); */

void native_UICamera__ProcessMouse_c9bf40(undefined1 param_1 [16],float param_2,long param_3)

{
  byte bVar1;
  bool bVar2;
  byte bVar3;
  byte bVar4;
  int iVar5;
  uint uVar6;
  ulong uVar7;
  undefined8 *puVar8;
  ulong uVar9;
  uint uVar10;
  long lVar11;
  long *plVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  byte bVar18;
  byte bVar19;
  float fVar20;
  float fVar21;
  undefined4 uVar22;
  
  if ((bRam00000000013428e4 & 1) == 0) {
    native_sub_43273c(&
                      Method_System_Collections_Generic_List_UICamera_MouseOrTouch__get_Count___12dd960
                     );
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    native_sub_43273c(&UICamera_TypeInfo_12d6410);
    bRam00000000013428e4 = 1;
  }
  bVar18 = 0;
  bVar1 = 0;
  iVar5 = 0;
  do {
    uVar7 = native_UnityEngine_Input__GetMouseButtonDown_dbda98(iVar5,0);
    if ((uVar7 & 1) == 0) {
      uVar7 = native_UnityEngine_Input__GetMouseButton_dbda58(iVar5,0);
      if ((uVar7 & 1) != 0) {
        if (((*(byte *)(_UICamera_TypeInfo_12d6410 + 0x133) >> 2 & 1) != 0) &&
           (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
          native_sub_4327ec();
        }
        native_UICamera__set_currentKey_c94858(iVar5 + 0x143);
        goto LAB_00c9c01c;
      }
    }
    else {
      if (((*(byte *)(_UICamera_TypeInfo_12d6410 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
        native_sub_4327ec();
      }
      native_UICamera__set_currentKey_c94858(iVar5 + 0x143);
      bVar1 = 1;
LAB_00c9c01c:
      bVar18 = 1;
    }
    iVar5 = iVar5 + 1;
  } while (iVar5 != 3);
  if (((*(byte *)(_UICamera_TypeInfo_12d6410 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  iVar5 = native_UICamera__get_currentScheme_c92518();
  if (iVar5 == 1) {
    if (((*(byte *)(_UICamera_TypeInfo_12d6410 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
      native_sub_4327ec(_UICamera_TypeInfo_12d6410);
    }
    lVar11 = *(long *)(*(long *)(_UICamera_TypeInfo_12d6410 + 0xb8) + 0x198);
    if (lVar11 == 0) goto LAB_00c9ca58;
    if (0 < *(int *)(lVar11 + 0x18)) {
      return;
    }
  }
  if (((*(byte *)(_UICamera_TypeInfo_12d6410 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
    native_sub_4327ec(_UICamera_TypeInfo_12d6410);
  }
  lVar11 = *(long *)(*(long *)(_UICamera_TypeInfo_12d6410 + 0xb8) + 0x188);
  if (lVar11 == 0) goto LAB_00c9ca58;
  if (*(int *)(lVar11 + 0x18) == 0) goto LAB_00c9ca5c;
  *(undefined8 *)(*(long *)(_UICamera_TypeInfo_12d6410 + 0xb8) + 0xe0) =
       *(undefined8 *)(lVar11 + 0x20);
  native_sub_4326e0();
  fVar20 = (float)native_UnityEngine_Input__get_mousePosition_dbdd8c(0);
  plVar12 = (long *)(_UICamera_TypeInfo_12d6410 + 0xb8);
  lVar11 = *(long *)(*plVar12 + 0xe0);
  if (lVar11 == 0) goto LAB_00c9ca58;
  if (*(int *)(lVar11 + 0x78) == 0) {
    if (((*(ushort *)(_UICamera_TypeInfo_12d6410 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
      native_sub_4327ec();
      lVar11 = *(long *)(*(long *)(_UICamera_TypeInfo_12d6410 + 0xb8) + 0xe0);
      if (lVar11 == 0) goto LAB_00c9ca58;
    }
    lVar13 = _UICamera_TypeInfo_12d6410;
    fVar21 = param_2 - *(float *)(lVar11 + 0x18);
    *(float *)(lVar11 + 0x24) = fVar20 - *(float *)(lVar11 + 0x14);
  }
  else {
    if (((*(ushort *)(_UICamera_TypeInfo_12d6410 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
      native_sub_4327ec();
      plVar12 = (long *)(_UICamera_TypeInfo_12d6410 + 0xb8);
      lVar11 = *(long *)(*plVar12 + 0xe0);
      if (lVar11 == 0) goto LAB_00c9ca58;
    }
    lVar13 = _UICamera_TypeInfo_12d6410;
    *(int *)(lVar11 + 0x78) = *(int *)(lVar11 + 0x78) + -1;
    lVar11 = *(long *)(*(long *)(lVar13 + 0xb8) + 0xe0);
    if (lVar11 == 0) goto LAB_00c9ca58;
    *(undefined4 *)(lVar11 + 0x24) = 0;
    lVar11 = *(long *)(*plVar12 + 0xe0);
    if (lVar11 == 0) goto LAB_00c9ca58;
    fVar21 = 0.0;
  }
  *(float *)(lVar11 + 0x28) = fVar21;
  if (((*(byte *)(lVar13 + 0x133) >> 2 & 1) != 0) && (*(int *)(lVar13 + 0xe0) == 0)) {
    native_sub_4327ec();
    lVar13 = _UICamera_TypeInfo_12d6410;
  }
  lVar11 = *(long *)(*(long *)(lVar13 + 0xb8) + 0xe0);
  if (lVar11 == 0) goto LAB_00c9ca58;
  fVar21 = (float)native_UnityEngine_Vector2__get_sqrMagnitude_775674(lVar11 + 0x24,0);
  lVar11 = _UICamera_TypeInfo_12d6410;
  lVar13 = *(long *)(*(long *)(_UICamera_TypeInfo_12d6410 + 0xb8) + 0xe0);
  if (lVar13 == 0) goto LAB_00c9ca58;
  *(float *)(lVar13 + 0x14) = fVar20;
  *(float *)(lVar13 + 0x18) = param_2;
  lVar11 = *(long *)(lVar11 + 0xb8);
  *(float *)(lVar11 + 0x5c) = fVar20;
  *(float *)(lVar11 + 0x60) = param_2;
  iVar5 = native_UICamera__get_currentScheme_c92518();
  if (iVar5 == 0) {
    if (0.001 < fVar21) goto LAB_00c9c20c;
    bVar19 = 0;
  }
  else {
    if (fVar21 < 0.001) {
      return;
    }
    if (((*(byte *)(_UICamera_TypeInfo_12d6410 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    native_UICamera__set_currentKey_c94858(0x143);
LAB_00c9c20c:
    bVar19 = 1;
  }
  lVar11 = 5;
  lVar13 = _UICamera_TypeInfo_12d6410;
  do {
    if (((*(byte *)(lVar13 + 0x133) >> 2 & 1) != 0) && (*(int *)(lVar13 + 0xe0) == 0)) {
      native_sub_4327ec();
      lVar13 = _UICamera_TypeInfo_12d6410;
    }
    lVar14 = *(long *)(*(long *)(lVar13 + 0xb8) + 0x188);
    if (lVar14 == 0) goto LAB_00c9ca58;
    uVar10 = (int)lVar11 - 4;
    if (*(uint *)(lVar14 + 0x18) <= uVar10) goto LAB_00c9ca5c;
    lVar15 = *(long *)(*(long *)(lVar13 + 0xb8) + 0xe0);
    if ((lVar15 == 0) || (lVar14 = *(long *)(lVar14 + lVar11 * 8), lVar14 == 0)) goto LAB_00c9ca58;
    *(undefined8 *)(lVar14 + 0x14) = *(undefined8 *)(lVar15 + 0x14);
    lVar14 = *(long *)(*(long *)(lVar13 + 0xb8) + 0x188);
    if (lVar14 == 0) goto LAB_00c9ca58;
    if (*(uint *)(lVar14 + 0x18) <= uVar10) goto LAB_00c9ca5c;
    lVar15 = *(long *)(*(long *)(lVar13 + 0xb8) + 0xe0);
    if ((lVar15 == 0) || (lVar14 = *(long *)(lVar14 + lVar11 * 8), lVar14 == 0)) goto LAB_00c9ca58;
    lVar11 = lVar11 + 1;
    *(undefined8 *)(lVar14 + 0x24) = *(undefined8 *)(lVar15 + 0x24);
  } while ((int)lVar11 - 5U < 2);
  if ((bVar18 != 0 || bVar19 != 0) ||
     (fVar21 = *(float *)(param_3 + 0x98), fVar20 = (float)native_RealTime__get_time_72d024(0),
     fVar21 < fVar20)) {
    fVar20 = (float)native_RealTime__get_time_72d024(0);
    *(float *)(param_3 + 0x98) = fVar20 + 0.02;
    if (((*(byte *)(_UICamera_TypeInfo_12d6410 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    native_UICamera__Raycast_c98a28
              (*(undefined8 *)(*(long *)(_UICamera_TypeInfo_12d6410 + 0xb8) + 0xe0));
    if (bVar18 == 0) {
      if (((*(byte *)(_UICamera_TypeInfo_12d6410 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
        native_sub_4327ec();
      }
      lVar11 = *(long *)(*(long *)(_UICamera_TypeInfo_12d6410 + 0xb8) + 0x188);
      if (lVar11 == 0) goto LAB_00c9ca58;
      if (*(int *)(lVar11 + 0x18) == 0) goto LAB_00c9ca5c;
      if ((*(long *)(lVar11 + 0x20) == 0) ||
         (lVar13 = *(long *)(*(long *)(_UICamera_TypeInfo_12d6410 + 0xb8) + 0xe0), lVar13 == 0))
      goto LAB_00c9ca58;
      uVar17 = *(undefined8 *)(*(long *)(lVar11 + 0x20) + 0x48);
      uVar16 = *(undefined8 *)(lVar13 + 0x48);
      if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
        native_sub_4327ec();
      }
      uVar7 = native_UnityEngine_Object__op_Inequality_8d76fc(uVar17,uVar16,0);
      if ((uVar7 & 1) == 0) goto LAB_00c9c488;
      if (((*(byte *)(_UICamera_TypeInfo_12d6410 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
        native_sub_4327ec();
      }
      native_UICamera__set_currentKey_c94858(0x143);
      lVar11 = 0;
      do {
        if (((*(byte *)(_UICamera_TypeInfo_12d6410 + 0x133) >> 2 & 1) != 0) &&
           (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
          native_sub_4327ec();
        }
        lVar13 = *(long *)(*(long *)(_UICamera_TypeInfo_12d6410 + 0xb8) + 0x188);
        if (lVar13 == 0) goto LAB_00c9ca58;
        if (*(uint *)(lVar13 + 0x18) <= (int)lVar11 + 1U) goto LAB_00c9ca5c;
        lVar14 = *(long *)(*(long *)(_UICamera_TypeInfo_12d6410 + 0xb8) + 0xe0);
        if ((lVar14 == 0) || (lVar13 = *(long *)(lVar13 + lVar11 * 8 + 0x28), lVar13 == 0))
        goto LAB_00c9ca58;
        *(undefined8 *)(lVar13 + 0x48) = *(undefined8 *)(lVar14 + 0x48);
        native_sub_4326e0();
        lVar11 = lVar11 + 1;
      } while ((uint)lVar11 < 2);
    }
    else {
      lVar11 = 0;
      do {
        if (((*(byte *)(_UICamera_TypeInfo_12d6410 + 0x133) >> 2 & 1) != 0) &&
           (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
          native_sub_4327ec();
        }
        lVar13 = *(long *)(*(long *)(_UICamera_TypeInfo_12d6410 + 0xb8) + 0x188);
        if (lVar13 == 0) goto LAB_00c9ca58;
        if (*(uint *)(lVar13 + 0x18) <= (int)lVar11 + 1U) goto LAB_00c9ca5c;
        lVar14 = *(long *)(*(long *)(_UICamera_TypeInfo_12d6410 + 0xb8) + 0xe0);
        if ((lVar14 == 0) || (lVar13 = *(long *)(lVar13 + lVar11 * 8 + 0x28), lVar13 == 0))
        goto LAB_00c9ca58;
        *(undefined8 *)(lVar13 + 0x48) = *(undefined8 *)(lVar14 + 0x48);
        native_sub_4326e0();
        lVar11 = lVar11 + 1;
      } while ((uint)lVar11 < 2);
    }
    bVar19 = 1;
  }
  else {
    bVar19 = 0;
  }
LAB_00c9c488:
  if (((*(byte *)(_UICamera_TypeInfo_12d6410 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  lVar11 = *(long *)(*(long *)(_UICamera_TypeInfo_12d6410 + 0xb8) + 0xe0);
  if (lVar11 != 0) {
    uVar17 = *(undefined8 *)(lVar11 + 0x40);
    uVar16 = *(undefined8 *)(lVar11 + 0x48);
    if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    bVar3 = native_UnityEngine_Object__op_Inequality_8d76fc(uVar17,uVar16,0);
    lVar11 = *(long *)(*(long *)(_UICamera_TypeInfo_12d6410 + 0xb8) + 0xe0);
    if (lVar11 == 0) goto LAB_00c9ca58;
    bVar4 = native_UnityEngine_Object__op_Inequality_8d76fc(*(undefined8 *)(lVar11 + 0x50),0,0);
    if ((bVar19 & (bVar4 ^ 1)) == 1) {
      if (((*(byte *)(_UICamera_TypeInfo_12d6410 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
        native_sub_4327ec();
      }
      lVar11 = *(long *)(*(long *)(_UICamera_TypeInfo_12d6410 + 0xb8) + 0xe0);
      if (lVar11 == 0) goto LAB_00c9ca58;
      native_UICamera__set_hoveredObject_c9622c(*(undefined8 *)(lVar11 + 0x48));
    }
    if (((*(byte *)(_UICamera_TypeInfo_12d6410 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    lVar11 = _UICamera_TypeInfo_12d6410;
    *(undefined4 *)(*(long *)(_UICamera_TypeInfo_12d6410 + 0xb8) + 0xd4) = 0xffffffff;
    if ((bVar3 & 1) != 0) {
      if (((*(byte *)(lVar11 + 0x133) >> 2 & 1) != 0) && (*(int *)(lVar11 + 0xe0) == 0)) {
        native_sub_4327ec();
      }
      native_UICamera__set_currentKey_c94858(0x143);
    }
    if ((bVar19 & (bVar18 ^ 1)) == 1) {
      if (((*(byte *)(_UICamera_TypeInfo_12d6410 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
        native_sub_4327ec();
      }
      lVar11 = *(long *)(_UICamera_TypeInfo_12d6410 + 0xb8);
      if (*(float *)(lVar11 + 0x1b8) == 0.0) {
        if (((*(byte *)(_UICamera_TypeInfo_12d6410 + 0x133) >> 2 & 1) != 0) &&
           (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
          native_sub_4327ec();
          lVar11 = *(long *)(_UICamera_TypeInfo_12d6410 + 0xb8);
        }
        uVar17 = *(undefined8 *)(lVar11 + 0x1b0);
        if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
           (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
          native_sub_4327ec();
        }
        uVar7 = native_UnityEngine_Object__op_Inequality_8d76fc(uVar17,0,0);
        if (((uVar7 & 1) != 0) && ((*(char *)(param_3 + 0x2e) != '\0' & (bVar3 ^ 0xff)) == 0)) {
          if (((*(byte *)(_UICamera_TypeInfo_12d6410 + 0x133) >> 2 & 1) != 0) &&
             (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
            native_sub_4327ec();
          }
          native_UICamera__ShowTooltip_c953cc(0);
        }
      }
      else {
        fVar20 = (float)native_UnityEngine_Time__get_unscaledTime_770860(0);
        fVar21 = *(float *)(param_3 + 0x30);
        if (((*(byte *)(_UICamera_TypeInfo_12d6410 + 0x133) >> 2 & 1) != 0) &&
           (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
          native_sub_4327ec();
        }
        *(float *)(*(long *)(_UICamera_TypeInfo_12d6410 + 0xb8) + 0x1b8) = fVar20 + fVar21;
      }
    }
    if (bVar19 != 0) {
      if (((*(byte *)(_UICamera_TypeInfo_12d6410 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
        native_sub_4327ec();
      }
      lVar13 = *(long *)(_UICamera_TypeInfo_12d6410 + 0xb8);
      lVar11 = *(long *)(lVar13 + 0x180);
      if (lVar11 != 0) {
        if (((*(byte *)(_UICamera_TypeInfo_12d6410 + 0x133) >> 2 & 1) != 0) &&
           (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
          native_sub_4327ec();
          lVar13 = *(long *)(_UICamera_TypeInfo_12d6410 + 0xb8);
          lVar11 = *(long *)(lVar13 + 0x180);
        }
        lVar13 = *(long *)(lVar13 + 0xe0);
        if ((lVar13 == 0) || (lVar11 == 0)) goto LAB_00c9ca58;
        native_UICamera_MoveDelegate__Invoke_5524e0
                  (*(undefined4 *)(lVar13 + 0x24),*(undefined4 *)(lVar13 + 0x28),lVar11,0);
        puVar8 = (undefined8 *)(*(long *)(_UICamera_TypeInfo_12d6410 + 0xb8) + 0xe0);
        *puVar8 = 0;
        native_sub_4326e0(puVar8,0);
      }
    }
    if (((bVar3 & 1) != 0) && ((bVar18 == 0 && ((bVar4 ^ 1) & 1) == 0 || (!(bool)(bVar1 ^ 1))))) {
      if (((*(byte *)(_UICamera_TypeInfo_12d6410 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
        native_sub_4327ec();
      }
      native_UICamera__set_hoveredObject_c9622c(0);
    }
    uVar7 = 0;
    iVar5 = -1;
    do {
      uVar10 = native_UnityEngine_Input__GetMouseButtonDown_dbda98(uVar7 & 0xffffffff,0);
      uVar6 = native_UnityEngine_Input__GetMouseButtonUp_dbdad8(uVar7 & 0xffffffff,0);
      if (((uVar10 & 1) != 0) || ((uVar6 & 1) != 0)) {
        if (((*(byte *)(_UICamera_TypeInfo_12d6410 + 0x133) >> 2 & 1) != 0) &&
           (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
          native_sub_4327ec();
        }
        native_UICamera__set_currentKey_c94858((int)uVar7 + 0x143);
      }
      if (((*(byte *)(_UICamera_TypeInfo_12d6410 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
        native_sub_4327ec();
      }
      lVar11 = *(long *)(*(long *)(_UICamera_TypeInfo_12d6410 + 0xb8) + 0x188);
      if (lVar11 == 0) goto LAB_00c9ca58;
      if (*(uint *)(lVar11 + 0x18) <= uVar7) goto LAB_00c9ca5c;
      *(undefined8 *)(*(long *)(_UICamera_TypeInfo_12d6410 + 0xb8) + 0xe0) =
           *(undefined8 *)(lVar11 + uVar7 * 8 + 0x20);
      native_sub_4326e0();
      *(int *)(*(long *)(_UICamera_TypeInfo_12d6410 + 0xb8) + 0xd4) = iVar5;
      native_UICamera__set_currentKey_c94858((int)uVar7 + 0x143);
      if ((uVar10 & 1) == 0) {
        if (((*(ushort *)(_UICamera_TypeInfo_12d6410 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
          native_sub_4327ec();
        }
        lVar11 = *(long *)(*(long *)(_UICamera_TypeInfo_12d6410 + 0xb8) + 0xe0);
        if (lVar11 == 0) goto LAB_00c9ca58;
        uVar17 = *(undefined8 *)(lVar11 + 0x50);
        if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
           (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
          native_sub_4327ec();
        }
        uVar9 = native_UnityEngine_Object__op_Inequality_8d76fc(uVar17,0,0);
        if ((uVar9 & 1) != 0) {
          if (((*(byte *)(_UICamera_TypeInfo_12d6410 + 0x133) >> 2 & 1) != 0) &&
             (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
            native_sub_4327ec();
          }
          lVar11 = *(long *)(*(long *)(_UICamera_TypeInfo_12d6410 + 0xb8) + 0xe0);
          if (lVar11 == 0) goto LAB_00c9ca58;
          *(undefined8 *)(*(long *)(_UICamera_TypeInfo_12d6410 + 0xb8) + 0xc0) =
               *(undefined8 *)(lVar11 + 0x38);
          native_sub_4326e0();
        }
      }
      else {
        if (((*(ushort *)(_UICamera_TypeInfo_12d6410 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
          native_sub_4327ec();
        }
        lVar11 = *(long *)(*(long *)(_UICamera_TypeInfo_12d6410 + 0xb8) + 0xe0);
        if (lVar11 == 0) goto LAB_00c9ca58;
        *(undefined8 *)(lVar11 + 0x38) =
             *(undefined8 *)(*(long *)(_UICamera_TypeInfo_12d6410 + 0xb8) + 0xc0);
        native_sub_4326e0();
        lVar11 = *(long *)(*(long *)(_UICamera_TypeInfo_12d6410 + 0xb8) + 0xe0);
        uVar22 = native_RealTime__get_time_72d024(0);
        if (lVar11 == 0) goto LAB_00c9ca58;
        *(undefined4 *)(lVar11 + 0x68) = uVar22;
      }
      native_UICamera__ProcessTouch_c9d7c0(param_3,uVar10 & 1,uVar6 & 1);
      bVar2 = uVar7 < 2;
      uVar7 = uVar7 + 1;
      iVar5 = iVar5 + -1;
    } while (bVar2);
    if ((bVar3 & (bVar18 ^ 1)) != 0) {
      if (((*(byte *)(_UICamera_TypeInfo_12d6410 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
        native_sub_4327ec();
      }
      lVar11 = *(long *)(*(long *)(_UICamera_TypeInfo_12d6410 + 0xb8) + 0x188);
      if (lVar11 == 0) goto LAB_00c9ca58;
      if (*(int *)(lVar11 + 0x18) == 0) goto LAB_00c9ca5c;
      *(undefined8 *)(*(long *)(_UICamera_TypeInfo_12d6410 + 0xb8) + 0xe0) =
           *(undefined8 *)(lVar11 + 0x20);
      native_sub_4326e0();
      fVar20 = (float)native_UnityEngine_Time__get_unscaledTime_770860(0);
      lVar11 = _UICamera_TypeInfo_12d6410;
      *(float *)(*(long *)(_UICamera_TypeInfo_12d6410 + 0xb8) + 0x1b8) =
           fVar20 + *(float *)(param_3 + 0x30);
      *(undefined4 *)(*(long *)(lVar11 + 0xb8) + 0xd4) = 0xffffffff;
      native_UICamera__set_currentKey_c94858(0x143);
      lVar11 = *(long *)(*(long *)(_UICamera_TypeInfo_12d6410 + 0xb8) + 0xe0);
      if (lVar11 == 0) goto LAB_00c9ca58;
      native_UICamera__set_hoveredObject_c9622c(*(undefined8 *)(lVar11 + 0x48));
    }
    if (((*(byte *)(_UICamera_TypeInfo_12d6410 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    puVar8 = (undefined8 *)(*(long *)(_UICamera_TypeInfo_12d6410 + 0xb8) + 0xe0);
    *puVar8 = 0;
    native_sub_4326e0(puVar8,0);
    lVar11 = *(long *)(*(long *)(_UICamera_TypeInfo_12d6410 + 0xb8) + 0x188);
    if (lVar11 != 0) {
      if (*(int *)(lVar11 + 0x18) == 0) {
LAB_00c9ca5c:
        uVar17 = native_sub_43283c();
                    /* WARNING: Subroutine does not return */
        native_sub_4327dc(uVar17,0);
      }
      lVar11 = *(long *)(lVar11 + 0x20);
      if (lVar11 != 0) {
        *(undefined8 *)(lVar11 + 0x40) = *(undefined8 *)(lVar11 + 0x48);
        native_sub_4326e0(lVar11 + 0x40);
        lVar11 = 0;
        while( true ) {
          if (((*(byte *)(_UICamera_TypeInfo_12d6410 + 0x133) >> 2 & 1) != 0) &&
             (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
            native_sub_4327ec();
          }
          lVar13 = *(long *)(*(long *)(_UICamera_TypeInfo_12d6410 + 0xb8) + 0x188);
          if (lVar13 == 0) break;
          if (*(uint *)(lVar13 + 0x18) <= (int)lVar11 + 1U) goto LAB_00c9ca5c;
          if ((*(long *)(lVar13 + 0x20) == 0) ||
             (lVar14 = *(long *)(lVar13 + lVar11 * 8 + 0x28), lVar14 == 0)) break;
          *(undefined8 *)(lVar14 + 0x40) = *(undefined8 *)(*(long *)(lVar13 + 0x20) + 0x40);
          native_sub_4326e0();
          lVar11 = lVar11 + 1;
          if (1 < (uint)lVar11) {
            return;
          }
        }
      }
    }
  }
LAB_00c9ca58:
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* UICamera$$ProcessTouches @ 0xc9ba20
 * void UICamera__ProcessTouches (UICamera_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UICamera$$ProcessTouches
   void UICamera__ProcessTouches (UICamera_o* __this, const MethodInfo* method); */

void native_UICamera__ProcessTouches_c9ba20(undefined1 param_1 [16],float param_2,long param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  undefined8 uVar5;
  ulong uVar6;
  long lVar7;
  undefined8 *puVar8;
  undefined1 *puVar9;
  int iVar10;
  char cVar11;
  undefined4 uVar12;
  float fVar13;
  float fVar14;
  undefined1 auStack_100 [72];
  undefined1 auStack_b8 [72];
  
  if ((bRam00000000013428e5 & 1) == 0) {
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    native_sub_43273c(&UICamera_TypeInfo_12d6410);
    bRam00000000013428e5 = 1;
  }
  func_0x002c8be0(auStack_b8,0,0x44);
  if (((*(byte *)(_UICamera_TypeInfo_12d6410 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  lVar7 = *(long *)(*(long *)(_UICamera_TypeInfo_12d6410 + 0xb8) + 0x270);
  if (lVar7 == 0) {
    iVar1 = native_UnityEngine_Input__get_touchCount_dbe094(0);
  }
  else {
    if (((*(byte *)(_UICamera_TypeInfo_12d6410 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
      native_sub_4327ec();
      lVar7 = *(long *)(*(long *)(_UICamera_TypeInfo_12d6410 + 0xb8) + 0x270);
      if (lVar7 == 0) {
LAB_00c9bf3c:
                    /* WARNING: Subroutine does not return */
        native_sub_432810();
      }
    }
    iVar1 = native_UICamera_GetTouchCountCallback__Invoke_551848(lVar7,0);
  }
  if (0 < iVar1) {
    iVar10 = 0;
    do {
      if (((*(byte *)(_UICamera_TypeInfo_12d6410 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
        native_sub_4327ec();
      }
      lVar7 = *(long *)(*(long *)(_UICamera_TypeInfo_12d6410 + 0xb8) + 0x278);
      if (lVar7 == 0) {
        native_UnityEngine_Input__GetTouch_dbdb18(auStack_100,iVar10,0);
        func_0x002ca3e0(auStack_b8,auStack_100,0x44);
        iVar2 = native_UnityEngine_Touch__get_phase_dbf524(auStack_b8,0);
        uVar12 = native_UnityEngine_Touch__get_fingerId_dbf504(auStack_b8,0);
        fVar13 = (float)native_UnityEngine_Touch__get_position_dbf50c(auStack_b8,0);
        iVar3 = native_UnityEngine_Touch__get_tapCount_dbf51c(auStack_b8,0);
        fVar14 = param_2;
      }
      else {
        if (((*(byte *)(_UICamera_TypeInfo_12d6410 + 0x133) >> 2 & 1) != 0) &&
           (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
          native_sub_4327ec();
          lVar7 = *(long *)(*(long *)(_UICamera_TypeInfo_12d6410 + 0xb8) + 0x278);
          if (lVar7 == 0) goto LAB_00c9bf3c;
        }
        lVar7 = native_UICamera_GetTouchCallback__Invoke_551514(lVar7,iVar10,0);
        if (lVar7 == 0) goto LAB_00c9bf3c;
        uVar12 = *(undefined4 *)(lVar7 + 0x10);
        iVar2 = *(int *)(lVar7 + 0x14);
        fVar13 = *(float *)(lVar7 + 0x18);
        iVar3 = *(int *)(lVar7 + 0x20);
        fVar14 = *(float *)(lVar7 + 0x1c);
      }
      if (*(char *)(param_3 + 0x2b) == '\0') {
        uVar12 = 1;
      }
      if (((*(byte *)(_UICamera_TypeInfo_12d6410 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
        native_sub_4327ec();
      }
      lVar7 = _UICamera_TypeInfo_12d6410;
      *(undefined4 *)(*(long *)(_UICamera_TypeInfo_12d6410 + 0xb8) + 0xd4) = uVar12;
      lVar4 = *(long *)(*(long *)(lVar7 + 0xb8) + 0x38);
      if (lVar4 == 0) goto LAB_00c9bf3c;
      cVar11 = '\x01';
      uVar5 = native_UICamera_GetTouchDelegate__Invoke_551b20
                        (lVar4,*(undefined4 *)(*(long *)(lVar7 + 0xb8) + 0xd4),1,0);
      puVar8 = (undefined8 *)(*(long *)(_UICamera_TypeInfo_12d6410 + 0xb8) + 0xe0);
      *puVar8 = uVar5;
      native_sub_4326e0(puVar8,uVar5);
      if (iVar2 != 0) {
        if (((*(byte *)(_UICamera_TypeInfo_12d6410 + 0x133) >> 2 & 1) != 0) &&
           (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
          native_sub_4327ec();
        }
        lVar7 = *(long *)(*(long *)(_UICamera_TypeInfo_12d6410 + 0xb8) + 0xe0);
        if (lVar7 == 0) goto LAB_00c9bf3c;
        cVar11 = *(char *)(lVar7 + 0x74);
      }
      if (((*(byte *)(_UICamera_TypeInfo_12d6410 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
        native_sub_4327ec();
      }
      lVar7 = _UICamera_TypeInfo_12d6410;
      lVar4 = *(long *)(*(long *)(_UICamera_TypeInfo_12d6410 + 0xb8) + 0xe0);
      if (lVar4 == 0) goto LAB_00c9bf3c;
      param_2 = fVar14 - *(float *)(lVar4 + 0x18);
      *(float *)(lVar4 + 0x24) = fVar13 - *(float *)(lVar4 + 0x14);
      *(float *)(lVar4 + 0x28) = param_2;
      lVar7 = *(long *)(*(long *)(lVar7 + 0xb8) + 0xe0);
      if (lVar7 == 0) goto LAB_00c9bf3c;
      *(float *)(lVar7 + 0x14) = fVar13;
      *(float *)(lVar7 + 0x18) = fVar14;
      native_UICamera__set_currentKey_c94858(0);
      native_UICamera__Raycast_c98a28
                (*(undefined8 *)(*(long *)(_UICamera_TypeInfo_12d6410 + 0xb8) + 0xe0));
      if (cVar11 == '\0') {
        if (((*(ushort *)(_UICamera_TypeInfo_12d6410 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
          native_sub_4327ec();
        }
        lVar7 = *(long *)(*(long *)(_UICamera_TypeInfo_12d6410 + 0xb8) + 0xe0);
        if (lVar7 == 0) goto LAB_00c9bf3c;
        uVar5 = *(undefined8 *)(lVar7 + 0x50);
        if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
           (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
          native_sub_4327ec();
        }
        uVar6 = native_UnityEngine_Object__op_Inequality_8d76fc(uVar5,0,0);
        if ((uVar6 & 1) != 0) {
          if (((*(byte *)(_UICamera_TypeInfo_12d6410 + 0x133) >> 2 & 1) != 0) &&
             (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
            native_sub_4327ec();
          }
          lVar7 = *(long *)(*(long *)(_UICamera_TypeInfo_12d6410 + 0xb8) + 0xe0);
          if (lVar7 != 0) {
            *(undefined8 *)(*(long *)(_UICamera_TypeInfo_12d6410 + 0xb8) + 0xc0) =
                 *(undefined8 *)(lVar7 + 0x38);
            goto LAB_00c9bd88;
          }
          goto LAB_00c9bf3c;
        }
      }
      else {
        if (((*(ushort *)(_UICamera_TypeInfo_12d6410 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
          native_sub_4327ec();
        }
        lVar7 = *(long *)(*(long *)(_UICamera_TypeInfo_12d6410 + 0xb8) + 0xe0);
        if (lVar7 == 0) goto LAB_00c9bf3c;
        *(undefined8 *)(lVar7 + 0x38) =
             *(undefined8 *)(*(long *)(_UICamera_TypeInfo_12d6410 + 0xb8) + 0xc0);
LAB_00c9bd88:
        native_sub_4326e0();
      }
      if (1 < iVar3) {
        if (((*(byte *)(_UICamera_TypeInfo_12d6410 + 0x133) >> 2 & 1) != 0) &&
           (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
          native_sub_4327ec();
        }
        lVar7 = *(long *)(*(long *)(_UICamera_TypeInfo_12d6410 + 0xb8) + 0xe0);
        uVar12 = native_RealTime__get_time_72d024(0);
        if (lVar7 == 0) goto LAB_00c9bf3c;
        *(undefined4 *)(lVar7 + 0x6c) = uVar12;
      }
      native_UICamera__ProcessTouch_c9d7c0(param_3,cVar11 != '\0',iVar2 - 3U < 2);
      if (iVar2 - 3U < 2) {
        if (((*(byte *)(_UICamera_TypeInfo_12d6410 + 0x133) >> 2 & 1) != 0) &&
           (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
          native_sub_4327ec();
        }
        lVar7 = *(long *)(*(long *)(_UICamera_TypeInfo_12d6410 + 0xb8) + 0x40);
        if (lVar7 == 0) goto LAB_00c9bf3c;
        native_UICamera_RemoveTouchDelegate__Invoke_553484
                  (lVar7,*(undefined4 *)(*(long *)(_UICamera_TypeInfo_12d6410 + 0xb8) + 0xd4),0);
      }
      if (((*(byte *)(_UICamera_TypeInfo_12d6410 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
        native_sub_4327ec();
      }
      lVar7 = _UICamera_TypeInfo_12d6410;
      lVar4 = *(long *)(*(long *)(_UICamera_TypeInfo_12d6410 + 0xb8) + 0xe0);
      if (lVar4 == 0) goto LAB_00c9bf3c;
      *(undefined1 *)(lVar4 + 0x74) = 0;
      lVar7 = *(long *)(*(long *)(lVar7 + 0xb8) + 0xe0);
      if (lVar7 == 0) goto LAB_00c9bf3c;
      puVar8 = (undefined8 *)(lVar7 + 0x40);
      *puVar8 = 0;
      native_sub_4326e0(puVar8,0);
      puVar8 = (undefined8 *)(*(long *)(_UICamera_TypeInfo_12d6410 + 0xb8) + 0xe0);
      *puVar8 = 0;
      native_sub_4326e0(puVar8,0);
    } while ((*(char *)(param_3 + 0x2b) != '\0') && (iVar10 = iVar10 + 1, iVar10 < iVar1));
  }
  if (iVar1 == 0) {
    if (((*(ushort *)(_UICamera_TypeInfo_12d6410 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    if (*(char *)(*(long *)(_UICamera_TypeInfo_12d6410 + 0xb8) + 0x268) == '\0') {
      if (*(char *)(param_3 + 0x29) != '\0') {
        native_UICamera__ProcessMouse_c9bf40(param_3);
      }
    }
    else {
      puVar9 = (undefined1 *)(*(long *)(_UICamera_TypeInfo_12d6410 + 0xb8) + 0x268);
      if (((*(byte *)(_UICamera_TypeInfo_12d6410 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
        native_sub_4327ec();
        puVar9 = (undefined1 *)(*(long *)(_UICamera_TypeInfo_12d6410 + 0xb8) + 0x268);
      }
      *puVar9 = 0;
    }
  }
  else {
    if (((*(ushort *)(_UICamera_TypeInfo_12d6410 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    *(undefined1 *)(*(long *)(_UICamera_TypeInfo_12d6410 + 0xb8) + 0x268) = 1;
  }
  return;
}



/* UICamera$$ProcessFakeTouches @ 0xc9db58
 * void UICamera__ProcessFakeTouches (UICamera_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UICamera$$ProcessFakeTouches
   void UICamera__ProcessFakeTouches (UICamera_o* __this, const MethodInfo* method); */

void native_UICamera__ProcessFakeTouches_c9db58
               (undefined1 param_1 [16],float param_2,undefined8 param_3)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  byte bVar4;
  uint uVar5;
  ulong uVar6;
  undefined8 *puVar7;
  long lVar8;
  long *plVar9;
  long lVar10;
  undefined8 uVar11;
  undefined4 uVar12;
  float fVar13;
  
  if ((bRam00000000013428e6 & 1) == 0) {
    native_sub_43273c(&Method_System_Collections_Generic_List_UICamera_MouseOrTouch__Add___12dd948);
    native_sub_43273c(&
                      Method_System_Collections_Generic_List_UICamera_MouseOrTouch__Remove___12dd950
                     );
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    native_sub_43273c(&UICamera_TypeInfo_12d6410);
    bRam00000000013428e6 = 1;
  }
  bVar4 = native_UnityEngine_Input__GetMouseButtonDown_dbda98(0,0);
  uVar5 = native_UnityEngine_Input__GetMouseButtonUp_dbdad8(0,0);
  uVar6 = native_UnityEngine_Input__GetMouseButton_dbda58(0,0);
  if ((((bVar4 & 1) == 0) && ((uVar5 & 1) == 0)) && ((uVar6 & 1) == 0)) {
    return;
  }
  if (((*(byte *)(_UICamera_TypeInfo_12d6410 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  lVar10 = _UICamera_TypeInfo_12d6410;
  *(undefined4 *)(*(long *)(_UICamera_TypeInfo_12d6410 + 0xb8) + 0xd4) = 1;
  lVar8 = *(long *)(*(long *)(lVar10 + 0xb8) + 0x188);
  if (lVar8 == 0) goto LAB_00c9dec8;
  if (*(int *)(lVar8 + 0x18) == 0) {
    uVar11 = native_sub_43283c();
                    /* WARNING: Subroutine does not return */
    native_sub_4327dc(uVar11,0);
  }
  *(undefined8 *)(*(long *)(lVar10 + 0xb8) + 0xe0) = *(undefined8 *)(lVar8 + 0x20);
  native_sub_4326e0();
  lVar10 = _UICamera_TypeInfo_12d6410;
  plVar9 = (long *)(_UICamera_TypeInfo_12d6410 + 0xb8);
  if (*(long *)(*plVar9 + 0xe0) == 0) goto LAB_00c9dec8;
  *(byte *)(*(long *)(*plVar9 + 0xe0) + 0x74) = bVar4 & 1;
  if ((bVar4 & 1) != 0) {
    if (((*(byte *)(lVar10 + 0x133) >> 2 & 1) != 0) && (*(int *)(lVar10 + 0xe0) == 0)) {
      native_sub_4327ec();
      plVar9 = (long *)(_UICamera_TypeInfo_12d6410 + 0xb8);
    }
    lVar10 = *(long *)(*plVar9 + 0xe0);
    uVar12 = native_RealTime__get_time_72d024(0);
    if (lVar10 == 0) goto LAB_00c9dec8;
    *(undefined4 *)(lVar10 + 0x68) = uVar12;
    lVar10 = *(long *)(*(long *)(_UICamera_TypeInfo_12d6410 + 0xb8) + 0x198);
    if (lVar10 == 0) goto LAB_00c9dec8;
    native_System_Collections_Generic_List_int_____Add_d40c00
              (lVar10,*(undefined8 *)(*(long *)(_UICamera_TypeInfo_12d6410 + 0xb8) + 0xe0),
               _Method_System_Collections_Generic_List_UICamera_MouseOrTouch__Add___12dd948);
  }
  fVar13 = (float)native_UnityEngine_Input__get_mousePosition_dbdd8c(0);
  if (((*(byte *)(_UICamera_TypeInfo_12d6410 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  lVar10 = _UICamera_TypeInfo_12d6410;
  lVar8 = *(long *)(*(long *)(_UICamera_TypeInfo_12d6410 + 0xb8) + 0xe0);
  if (lVar8 == 0) goto LAB_00c9dec8;
  *(ulong *)(lVar8 + 0x24) =
       CONCAT44(param_2 - (float)((ulong)*(undefined8 *)(lVar8 + 0x14) >> 0x20),
                fVar13 - (float)*(undefined8 *)(lVar8 + 0x14));
  lVar8 = *(long *)(*(long *)(lVar10 + 0xb8) + 0xe0);
  if (lVar8 == 0) goto LAB_00c9dec8;
  *(float *)(lVar8 + 0x14) = fVar13;
  *(float *)(lVar8 + 0x18) = param_2;
  native_UICamera__Raycast_c98a28(*(undefined8 *)(*(long *)(lVar10 + 0xb8) + 0xe0));
  if ((bVar4 & 1) == 0) {
    if (((*(ushort *)(_UICamera_TypeInfo_12d6410 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    lVar10 = *(long *)(*(long *)(_UICamera_TypeInfo_12d6410 + 0xb8) + 0xe0);
    if (lVar10 == 0) goto LAB_00c9dec8;
    uVar11 = *(undefined8 *)(lVar10 + 0x50);
    if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    uVar6 = native_UnityEngine_Object__op_Inequality_8d76fc(uVar11,0,0);
    if ((uVar6 & 1) != 0) {
      if (((*(byte *)(_UICamera_TypeInfo_12d6410 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
        native_sub_4327ec();
      }
      lVar10 = *(long *)(*(long *)(_UICamera_TypeInfo_12d6410 + 0xb8) + 0xe0);
      if (lVar10 == 0) goto LAB_00c9dec8;
      *(undefined8 *)(*(long *)(_UICamera_TypeInfo_12d6410 + 0xb8) + 0xc0) =
           *(undefined8 *)(lVar10 + 0x38);
      goto LAB_00c9ddf8;
    }
  }
  else {
    if (((*(ushort *)(_UICamera_TypeInfo_12d6410 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    lVar10 = *(long *)(*(long *)(_UICamera_TypeInfo_12d6410 + 0xb8) + 0xe0);
    if (lVar10 == 0) goto LAB_00c9dec8;
    *(undefined8 *)(lVar10 + 0x38) =
         *(undefined8 *)(*(long *)(_UICamera_TypeInfo_12d6410 + 0xb8) + 0xc0);
LAB_00c9ddf8:
    native_sub_4326e0();
  }
  if (((*(byte *)(_UICamera_TypeInfo_12d6410 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  native_UICamera__set_currentKey_c94858(0);
  native_UICamera__ProcessTouch_c9d7c0(param_3,bVar4 & 1,uVar5 & 1);
  if ((uVar5 & 1) != 0) {
    if (((*(byte *)(_UICamera_TypeInfo_12d6410 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    lVar10 = *(long *)(*(long *)(_UICamera_TypeInfo_12d6410 + 0xb8) + 0x198);
    if (lVar10 == 0) goto LAB_00c9dec8;
    native_System_Collections_Generic_List_BMSymbol___Remove_d41f3c
              (lVar10,*(undefined8 *)(*(long *)(_UICamera_TypeInfo_12d6410 + 0xb8) + 0xe0),
               _Method_System_Collections_Generic_List_UICamera_MouseOrTouch__Remove___12dd950);
  }
  if (((*(byte *)(_UICamera_TypeInfo_12d6410 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  lVar10 = *(long *)(*(long *)(_UICamera_TypeInfo_12d6410 + 0xb8) + 0xe0);
  if (lVar10 != 0) {
    puVar7 = (undefined8 *)(lVar10 + 0x40);
    *puVar7 = 0;
    native_sub_4326e0(puVar7,0);
    puVar7 = (undefined8 *)(*(long *)(_UICamera_TypeInfo_12d6410 + 0xb8) + 0xe0);
    *puVar7 = 0;
    if (iRam0000000001345318 != 0) {
      puVar1 = (ulong *)(((ulong)puVar7 >> 0x12 & 0x7fff) * 8 + 0x138ecd8);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = *puVar1 | 1L << ((ulong)puVar7 >> 0xc & 0x3f);
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    return;
  }
LAB_00c9dec8:
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* UICamera$$ProcessOthers @ 0xc9ca68
 * void UICamera__ProcessOthers (UICamera_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UICamera$$ProcessOthers
   void UICamera__ProcessOthers (UICamera_o* __this, const MethodInfo* method); */

void native_UICamera__ProcessOthers_c9ca68(long param_1)

{
  int iVar1;
  int iVar2;
  ulong uVar3;
  undefined8 uVar4;
  ulong uVar5;
  long lVar6;
  float fVar7;
  long lVar8;
  int iVar9;
  undefined8 *puVar10;
  undefined8 uVar11;
  undefined4 uVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fStack_78;
  float fStack_74;
  
  if ((bRam00000000013428e7 & 1) == 0) {
    native_sub_43273c(&UnityEngine_KeyCode_TypeInfo_12d4fb8);
    native_sub_43273c(&NGUITools_TypeInfo_12d53c8);
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    native_sub_43273c(&UICamera_TypeInfo_12d6410);
    native_sub_43273c(&UnityEngine_Vector2_TypeInfo_12d66e0);
    native_sub_43273c(&StringLiteral_OnPan_12f0298);
    native_sub_43273c(&StringLiteral_OnKey_12f0240);
    native_sub_43273c(&StringLiteral_OnNavigate_12f0290);
    bRam00000000013428e7 = 1;
  }
  if (((*(byte *)(_UICamera_TypeInfo_12d6410 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  lVar6 = _UICamera_TypeInfo_12d6410;
  *(undefined4 *)(*(long *)(_UICamera_TypeInfo_12d6410 + 0xb8) + 0xd4) = 0xffffff9c;
  lVar6 = *(long *)(lVar6 + 0xb8);
  *(undefined8 *)(lVar6 + 0xe0) = *(undefined8 *)(lVar6 + 400);
  native_sub_4326e0(lVar6 + 0xe0);
  if (*(int *)(param_1 + 0x7c) == 0) {
LAB_00c9cb88:
    if (*(int *)(param_1 + 0x80) != 0) {
      if (((*(byte *)(_UICamera_TypeInfo_12d6410 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
        native_sub_4327ec();
      }
      lVar6 = *(long *)(*(long *)(_UICamera_TypeInfo_12d6410 + 0xb8) + 8);
      if (lVar6 == 0) goto LAB_00c9d7b0;
      uVar3 = native_UICamera_GetKeyStateFunc__Invoke_551094
                        (lVar6,*(undefined4 *)(param_1 + 0x80),0);
      if ((uVar3 & 1) == 0) goto LAB_00c9cbd4;
      uVar12 = *(undefined4 *)(param_1 + 0x80);
      goto LAB_00c9cc2c;
    }
LAB_00c9cbd4:
    if ((*(int *)(param_1 + 0x7c) == 0xd) || (*(int *)(param_1 + 0x80) == 0xd)) {
      if (((*(byte *)(_UICamera_TypeInfo_12d6410 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
        native_sub_4327ec();
      }
      lVar6 = *(long *)(*(long *)(_UICamera_TypeInfo_12d6410 + 0xb8) + 8);
      if (lVar6 == 0) goto LAB_00c9d7b0;
      uVar3 = native_UICamera_GetKeyStateFunc__Invoke_551094(lVar6,0x10f,0);
      if ((uVar3 & 1) != 0) goto LAB_00c9cc24;
      iVar2 = 0;
      goto LAB_00c9cc54;
    }
    iVar2 = 0;
    if (*(int *)(param_1 + 0x7c) != 0) goto LAB_00c9cc5c;
LAB_00c9cc94:
    if (*(int *)(param_1 + 0x80) != 0) {
      if (((*(byte *)(_UICamera_TypeInfo_12d6410 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
        native_sub_4327ec();
      }
      lVar6 = *(long *)(*(long *)(_UICamera_TypeInfo_12d6410 + 0xb8) + 0x10);
      if (lVar6 == 0) goto LAB_00c9d7b0;
      uVar3 = native_UICamera_GetKeyStateFunc__Invoke_551094
                        (lVar6,*(undefined4 *)(param_1 + 0x80),0);
      if ((uVar3 & 1) == 0) goto LAB_00c9cce0;
      uVar12 = *(undefined4 *)(param_1 + 0x80);
      goto LAB_00c9cd38;
    }
LAB_00c9cce0:
    if ((*(int *)(param_1 + 0x7c) == 0xd) || (*(int *)(param_1 + 0x80) == 0xd)) {
      if (((*(byte *)(_UICamera_TypeInfo_12d6410 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
        native_sub_4327ec();
      }
      lVar6 = *(long *)(*(long *)(_UICamera_TypeInfo_12d6410 + 0xb8) + 0x10);
      if (lVar6 == 0) goto LAB_00c9d7b0;
      uVar3 = native_UICamera_GetKeyStateFunc__Invoke_551094(lVar6,0x10f,0);
      if ((uVar3 & 1) != 0) goto LAB_00c9cd30;
    }
    iVar9 = 0;
    if (iVar2 == 0) goto LAB_00c9cd9c;
LAB_00c9cd5c:
    if (((*(byte *)(_UICamera_TypeInfo_12d6410 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    lVar6 = *(long *)(*(long *)(_UICamera_TypeInfo_12d6410 + 0xb8) + 0xe0);
    uVar12 = native_RealTime__get_time_72d024(0);
    if (lVar6 == 0) goto LAB_00c9d7b0;
    *(undefined4 *)(lVar6 + 0x68) = uVar12;
LAB_00c9cda0:
    if (((*(byte *)(_UICamera_TypeInfo_12d6410 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    iVar1 = native_UICamera__get_currentScheme_c92518();
    if (iVar1 == 2) {
      if (((*(byte *)(_UICamera_TypeInfo_12d6410 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
        native_sub_4327ec();
      }
      lVar6 = *(long *)(*(long *)(_UICamera_TypeInfo_12d6410 + 0xb8) + 0xe0);
      uVar4 = native_UICamera__get_controllerNavigationObject_c96e8c();
      if (lVar6 == 0) goto LAB_00c9d7b0;
      puVar10 = (undefined8 *)(lVar6 + 0x48);
      *puVar10 = uVar4;
      native_sub_4326e0(puVar10,uVar4);
      native_UICamera__ProcessTouch_c9d7c0(param_1,iVar2,iVar9);
      lVar6 = *(long *)(*(long *)(_UICamera_TypeInfo_12d6410 + 0xb8) + 0xe0);
      if (lVar6 == 0) goto LAB_00c9d7b0;
      *(undefined8 *)(lVar6 + 0x40) = *(undefined8 *)(lVar6 + 0x48);
      native_sub_4326e0(lVar6 + 0x40);
    }
  }
  else {
    if (((*(byte *)(_UICamera_TypeInfo_12d6410 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    lVar6 = *(long *)(*(long *)(_UICamera_TypeInfo_12d6410 + 0xb8) + 8);
    if (lVar6 == 0) goto LAB_00c9d7b0;
    uVar3 = native_UICamera_GetKeyStateFunc__Invoke_551094(lVar6,*(undefined4 *)(param_1 + 0x7c),0);
    if ((uVar3 & 1) == 0) goto LAB_00c9cb88;
LAB_00c9cc24:
    uVar12 = *(undefined4 *)(param_1 + 0x7c);
LAB_00c9cc2c:
    if (((*(byte *)(_UICamera_TypeInfo_12d6410 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    native_UICamera__set_currentKey_c94858(uVar12);
    iVar2 = 1;
LAB_00c9cc54:
    if (*(int *)(param_1 + 0x7c) == 0) goto LAB_00c9cc94;
LAB_00c9cc5c:
    if (((*(byte *)(_UICamera_TypeInfo_12d6410 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    lVar6 = *(long *)(*(long *)(_UICamera_TypeInfo_12d6410 + 0xb8) + 0x10);
    if (lVar6 == 0) goto LAB_00c9d7b0;
    uVar3 = native_UICamera_GetKeyStateFunc__Invoke_551094(lVar6,*(undefined4 *)(param_1 + 0x7c),0);
    if ((uVar3 & 1) == 0) goto LAB_00c9cc94;
LAB_00c9cd30:
    uVar12 = *(undefined4 *)(param_1 + 0x7c);
LAB_00c9cd38:
    if (((*(byte *)(_UICamera_TypeInfo_12d6410 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    native_UICamera__set_currentKey_c94858(uVar12);
    iVar9 = 1;
    if (iVar2 != 0) goto LAB_00c9cd5c;
LAB_00c9cd9c:
    if (iVar9 != 0) goto LAB_00c9cda0;
  }
  if (*(char *)(param_1 + 0x2d) == '\0') {
LAB_00c9ce60:
    fVar7 = 0.0;
  }
  else {
    if (((*(byte *)(_UICamera_TypeInfo_12d6410 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    if (*(char *)(*(long *)(_UICamera_TypeInfo_12d6410 + 0xb8) + 0x5a) != '\0') goto LAB_00c9ce60;
    if (((*(byte *)(_UICamera_TypeInfo_12d6410 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    uVar3 = native_UICamera__get_disableController_c94230();
    if ((uVar3 & 1) == 0) {
      if (((*(byte *)(_UICamera_TypeInfo_12d6410 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
        native_sub_4327ec();
      }
      iVar2 = native_UICamera__get_currentScheme_c92518();
      if (iVar2 == 2) {
        if (((*(byte *)(_UICamera_TypeInfo_12d6410 + 0x133) >> 2 & 1) != 0) &&
           (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
          native_sub_4327ec();
        }
        lVar6 = *(long *)(*(long *)(_UICamera_TypeInfo_12d6410 + 0xb8) + 0xe0);
        if (lVar6 == 0) goto LAB_00c9d7b0;
        uVar4 = *(undefined8 *)(lVar6 + 0x48);
        if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
           (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
          native_sub_4327ec();
        }
        uVar3 = native_UnityEngine_Object__op_Equality_8e9a3c(uVar4,0,0);
        if ((uVar3 & 1) == 0) {
          if (((*(byte *)(_UICamera_TypeInfo_12d6410 + 0x133) >> 2 & 1) != 0) &&
             (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
            native_sub_4327ec();
          }
          lVar6 = *(long *)(*(long *)(_UICamera_TypeInfo_12d6410 + 0xb8) + 0xe0);
          if ((lVar6 == 0) || (lVar6 = *(long *)(lVar6 + 0x48), lVar6 == 0)) goto LAB_00c9d7b0;
          uVar3 = native_UnityEngine_GameObject__get_activeInHierarchy_8de728(lVar6,0);
          if ((uVar3 & 1) != 0) goto LAB_00c9d240;
        }
        if (((*(byte *)(_UICamera_TypeInfo_12d6410 + 0x133) >> 2 & 1) != 0) &&
           (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
          native_sub_4327ec();
        }
        lVar6 = *(long *)(*(long *)(_UICamera_TypeInfo_12d6410 + 0xb8) + 0xe0);
        uVar4 = native_UICamera__get_controllerNavigationObject_c96e8c();
        if (lVar6 == 0) goto LAB_00c9d7b0;
        puVar10 = (undefined8 *)(lVar6 + 0x48);
        *puVar10 = uVar4;
        native_sub_4326e0(puVar10,uVar4);
      }
    }
LAB_00c9d240:
    uVar3 = native_System_String__IsNullOrEmpty_b09430(*(undefined8 *)(param_1 + 0x58),0);
    if ((uVar3 & 1) == 0) {
      uVar4 = *(undefined8 *)(param_1 + 0x58);
      if (((*(byte *)(_UICamera_TypeInfo_12d6410 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
        native_sub_4327ec();
      }
      iVar2 = native_UICamera__GetDirection_c9a970(uVar4);
      fVar7 = 0.0;
      if (iVar2 != 0) {
        if (((*(byte *)(_UICamera_TypeInfo_12d6410 + 0x133) >> 2 & 1) != 0) &&
           (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
          native_sub_4327ec();
        }
        native_UICamera__ShowTooltip_c953cc(0);
        native_UICamera__set_currentScheme_c94744(2);
        lVar6 = *(long *)(*(long *)(_UICamera_TypeInfo_12d6410 + 0xb8) + 0xe0);
        uVar4 = native_UICamera__get_controllerNavigationObject_c96e8c();
        if (lVar6 == 0) goto LAB_00c9d7b0;
        puVar10 = (undefined8 *)(lVar6 + 0x48);
        *puVar10 = uVar4;
        native_sub_4326e0(puVar10,uVar4);
        lVar6 = *(long *)(*(long *)(_UICamera_TypeInfo_12d6410 + 0xb8) + 0xe0);
        if (lVar6 == 0) goto LAB_00c9d7b0;
        uVar4 = *(undefined8 *)(lVar6 + 0x48);
        if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
           (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
          native_sub_4327ec();
        }
        uVar3 = native_UnityEngine_Object__op_Inequality_8d76fc(uVar4,0,0);
        if ((uVar3 & 1) == 0) goto LAB_00c9d3e4;
        fVar7 = 3.82554e-43;
        if (iVar2 < 1) {
          fVar7 = 3.83956e-43;
        }
        if (((*(byte *)(_UICamera_TypeInfo_12d6410 + 0x133) >> 2 & 1) != 0) &&
           (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
          native_sub_4327ec();
        }
        lVar8 = *(long *)(_UICamera_TypeInfo_12d6410 + 0xb8);
        lVar6 = *(long *)(lVar8 + 0x168);
        if (lVar6 != 0) {
          if (((*(byte *)(_UICamera_TypeInfo_12d6410 + 0x133) >> 2 & 1) != 0) &&
             (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
            native_sub_4327ec();
            lVar8 = *(long *)(_UICamera_TypeInfo_12d6410 + 0xb8);
            lVar6 = *(long *)(lVar8 + 0x168);
          }
          if ((*(long *)(lVar8 + 0xe0) == 0) || (lVar6 == 0)) goto LAB_00c9d7b0;
          native_UICamera_KeyCodeDelegate__Invoke_551e98
                    (lVar6,*(undefined8 *)(*(long *)(lVar8 + 0xe0) + 0x48),fVar7,0);
        }
        if (((*(byte *)(_UICamera_TypeInfo_12d6410 + 0x133) >> 2 & 1) != 0) &&
           (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
          native_sub_4327ec();
        }
        lVar6 = *(long *)(*(long *)(_UICamera_TypeInfo_12d6410 + 0xb8) + 0xe0);
        if (lVar6 == 0) goto LAB_00c9d7b0;
        uVar11 = *(undefined8 *)(lVar6 + 0x48);
        fStack_78 = fVar7;
        uVar4 = native_sub_4327fc(_UnityEngine_KeyCode_TypeInfo_12d4fb8,&fStack_78);
        native_UICamera__Notify_c96a08(uVar11,_StringLiteral_OnNavigate_12f0290,uVar4);
      }
    }
    else {
LAB_00c9d3e4:
      fVar7 = 0.0;
    }
    uVar3 = native_System_String__IsNullOrEmpty_b09430(*(undefined8 *)(param_1 + 0x50),0);
    if ((uVar3 & 1) == 0) {
      uVar4 = *(undefined8 *)(param_1 + 0x50);
      if (((*(byte *)(_UICamera_TypeInfo_12d6410 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
        native_sub_4327ec();
      }
      iVar2 = native_UICamera__GetDirection_c9a970(uVar4);
      if (iVar2 != 0) {
        if (((*(byte *)(_UICamera_TypeInfo_12d6410 + 0x133) >> 2 & 1) != 0) &&
           (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
          native_sub_4327ec();
        }
        native_UICamera__ShowTooltip_c953cc(0);
        native_UICamera__set_currentScheme_c94744(2);
        lVar6 = *(long *)(*(long *)(_UICamera_TypeInfo_12d6410 + 0xb8) + 0xe0);
        uVar4 = native_UICamera__get_controllerNavigationObject_c96e8c();
        if (lVar6 == 0) goto LAB_00c9d7b0;
        puVar10 = (undefined8 *)(lVar6 + 0x48);
        *puVar10 = uVar4;
        native_sub_4326e0(puVar10,uVar4);
        lVar6 = *(long *)(*(long *)(_UICamera_TypeInfo_12d6410 + 0xb8) + 0xe0);
        if (lVar6 == 0) goto LAB_00c9d7b0;
        uVar4 = *(undefined8 *)(lVar6 + 0x48);
        if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
           (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
          native_sub_4327ec();
        }
        uVar3 = native_UnityEngine_Object__op_Inequality_8d76fc(uVar4,0,0);
        if ((uVar3 & 1) != 0) {
          fVar7 = 3.85357e-43;
          if (iVar2 < 1) {
            fVar7 = 3.86758e-43;
          }
          if (((*(byte *)(_UICamera_TypeInfo_12d6410 + 0x133) >> 2 & 1) != 0) &&
             (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
            native_sub_4327ec();
          }
          lVar8 = *(long *)(_UICamera_TypeInfo_12d6410 + 0xb8);
          lVar6 = *(long *)(lVar8 + 0x168);
          if (lVar6 != 0) {
            if (((*(byte *)(_UICamera_TypeInfo_12d6410 + 0x133) >> 2 & 1) != 0) &&
               (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
              native_sub_4327ec();
              lVar8 = *(long *)(_UICamera_TypeInfo_12d6410 + 0xb8);
              lVar6 = *(long *)(lVar8 + 0x168);
            }
            if ((*(long *)(lVar8 + 0xe0) == 0) || (lVar6 == 0)) goto LAB_00c9d7b0;
            native_UICamera_KeyCodeDelegate__Invoke_551e98
                      (lVar6,*(undefined8 *)(*(long *)(lVar8 + 0xe0) + 0x48),fVar7,0);
          }
          if (((*(byte *)(_UICamera_TypeInfo_12d6410 + 0x133) >> 2 & 1) != 0) &&
             (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
            native_sub_4327ec();
          }
          lVar6 = *(long *)(*(long *)(_UICamera_TypeInfo_12d6410 + 0xb8) + 0xe0);
          if (lVar6 == 0) goto LAB_00c9d7b0;
          uVar11 = *(undefined8 *)(lVar6 + 0x48);
          fStack_78 = fVar7;
          uVar4 = native_sub_4327fc(_UnityEngine_KeyCode_TypeInfo_12d4fb8,&fStack_78);
          native_UICamera__Notify_c96a08(uVar11,_StringLiteral_OnNavigate_12f0290,uVar4);
        }
      }
    }
    uVar3 = native_System_String__IsNullOrEmpty_b09430(*(undefined8 *)(param_1 + 0x60),0);
    fVar14 = 0.0;
    fVar13 = 0.0;
    if ((uVar3 & 1) == 0) {
      if (((*(byte *)(_UICamera_TypeInfo_12d6410 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
        native_sub_4327ec();
      }
      lVar6 = *(long *)(*(long *)(_UICamera_TypeInfo_12d6410 + 0xb8) + 0x20);
      if (lVar6 == 0) goto LAB_00c9d7b0;
      fVar13 = (float)native_UICamera_GetAxisFunc__Invoke_550c58
                                (lVar6,*(undefined8 *)(param_1 + 0x60),0);
    }
    uVar3 = native_System_String__IsNullOrEmpty_b09430(*(undefined8 *)(param_1 + 0x68),0);
    if ((uVar3 & 1) == 0) {
      if (((*(byte *)(_UICamera_TypeInfo_12d6410 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
        native_sub_4327ec();
      }
      lVar6 = *(long *)(*(long *)(_UICamera_TypeInfo_12d6410 + 0xb8) + 0x20);
      if (lVar6 == 0) goto LAB_00c9d7b0;
      fVar14 = (float)native_UICamera_GetAxisFunc__Invoke_550c58
                                (lVar6,*(undefined8 *)(param_1 + 0x68),0);
    }
    if ((fVar13 != 0.0) || (fVar14 != 0.0)) {
      if (((*(byte *)(_UICamera_TypeInfo_12d6410 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
        native_sub_4327ec();
      }
      native_UICamera__ShowTooltip_c953cc(0);
      native_UICamera__set_currentScheme_c94744(2);
      lVar6 = *(long *)(*(long *)(_UICamera_TypeInfo_12d6410 + 0xb8) + 0xe0);
      uVar4 = native_UICamera__get_controllerNavigationObject_c96e8c();
      if (lVar6 == 0) goto LAB_00c9d7b0;
      puVar10 = (undefined8 *)(lVar6 + 0x48);
      *puVar10 = uVar4;
      native_sub_4326e0(puVar10,uVar4);
      lVar6 = *(long *)(*(long *)(_UICamera_TypeInfo_12d6410 + 0xb8) + 0xe0);
      if (lVar6 == 0) goto LAB_00c9d7b0;
      uVar4 = *(undefined8 *)(lVar6 + 0x48);
      if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
        native_sub_4327ec();
      }
      uVar3 = native_UnityEngine_Object__op_Inequality_8d76fc(uVar4,0,0);
      if ((uVar3 & 1) != 0) {
        fVar15 = (float)native_UnityEngine_Time__get_unscaledDeltaTime_770894(0);
        if (((*(byte *)(_UICamera_TypeInfo_12d6410 + 0x133) >> 2 & 1) != 0) &&
           (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
          native_sub_4327ec();
        }
        lVar8 = *(long *)(_UICamera_TypeInfo_12d6410 + 0xb8);
        lVar6 = *(long *)(lVar8 + 0x170);
        if (lVar6 != 0) {
          if (((*(byte *)(_UICamera_TypeInfo_12d6410 + 0x133) >> 2 & 1) != 0) &&
             (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
            native_sub_4327ec();
            lVar8 = *(long *)(_UICamera_TypeInfo_12d6410 + 0xb8);
            lVar6 = *(long *)(lVar8 + 0x170);
          }
          if ((*(long *)(lVar8 + 0xe0) == 0) || (lVar6 == 0)) goto LAB_00c9d7b0;
          native_UICamera_VectorDelegate__Invoke_5537b8
                    (fVar13 * fVar15,fVar14 * fVar15,lVar6,
                     *(undefined8 *)(*(long *)(lVar8 + 0xe0) + 0x48),0);
        }
        if (((*(byte *)(_UICamera_TypeInfo_12d6410 + 0x133) >> 2 & 1) != 0) &&
           (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
          native_sub_4327ec();
        }
        lVar6 = *(long *)(*(long *)(_UICamera_TypeInfo_12d6410 + 0xb8) + 0xe0);
        if (lVar6 == 0) goto LAB_00c9d7b0;
        uVar11 = *(undefined8 *)(lVar6 + 0x48);
        fStack_78 = fVar13 * fVar15;
        fStack_74 = fVar14 * fVar15;
        uVar4 = native_sub_4327fc(_UnityEngine_Vector2_TypeInfo_12d66e0,&fStack_78);
        native_UICamera__Notify_c96a08(uVar11,_StringLiteral_OnPan_12f0298,uVar4);
      }
    }
  }
  if (((*(byte *)(_UICamera_TypeInfo_12d6410 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  lVar6 = *(long *)(*(long *)(_UICamera_TypeInfo_12d6410 + 0xb8) + 0x28);
  if (lVar6 == 0) {
    uVar3 = native_UnityEngine_Input__get_anyKeyDown_dbdd24(0);
  }
  else {
    if (((*(byte *)(_UICamera_TypeInfo_12d6410 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
      native_sub_4327ec();
      lVar6 = *(long *)(*(long *)(_UICamera_TypeInfo_12d6410 + 0xb8) + 0x28);
      if (lVar6 == 0) goto LAB_00c9d7b0;
    }
    uVar3 = native_UICamera_GetAnyKeyFunc__Invoke_55097c(lVar6,0);
  }
  if ((uVar3 & 1) != 0) {
    if (((*(byte *)(_NGUITools_TypeInfo_12d53c8 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_NGUITools_TypeInfo_12d53c8 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    lVar6 = *(long *)(*(long *)(_NGUITools_TypeInfo_12d53c8 + 0xb8) + 0x40);
    if (lVar6 == 0) {
LAB_00c9d7b0:
                    /* WARNING: Subroutine does not return */
      native_sub_432810();
    }
    iVar2 = (int)*(undefined8 *)(lVar6 + 0x18);
    if (0 < iVar2) {
      uVar3 = 0;
      do {
        if (((*(byte *)(_NGUITools_TypeInfo_12d53c8 + 0x133) >> 2 & 1) != 0) &&
           (*(int *)(_NGUITools_TypeInfo_12d53c8 + 0xe0) == 0)) {
          native_sub_4327ec();
        }
        lVar6 = *(long *)(*(long *)(_NGUITools_TypeInfo_12d53c8 + 0xb8) + 0x40);
        if (lVar6 == 0) goto LAB_00c9d7b0;
        if (*(uint *)(lVar6 + 0x18) <= uVar3) {
          uVar4 = native_sub_43283c();
                    /* WARNING: Subroutine does not return */
          native_sub_4327dc(uVar4,0);
        }
        fVar13 = *(float *)(lVar6 + uVar3 * 4 + 0x20);
        if (fVar7 != fVar13) {
          if (((*(byte *)(_UICamera_TypeInfo_12d6410 + 0x133) >> 2 & 1) != 0) &&
             (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
            native_sub_4327ec();
          }
          lVar6 = *(long *)(*(long *)(_UICamera_TypeInfo_12d6410 + 0xb8) + 8);
          if (lVar6 == 0) goto LAB_00c9d7b0;
          uVar5 = native_UICamera_GetKeyStateFunc__Invoke_551094(lVar6,fVar13,0);
          if (((uVar5 & 1) != 0) && ((0x142 < (int)fVar13 || (*(char *)(param_1 + 0x2c) != '\0'))))
          {
            if (*(char *)(param_1 + 0x2d) == '\0') {
              if ((int)fVar13 < 0x14a) goto LAB_00c9cff8;
            }
            else {
              if (((*(byte *)(_UICamera_TypeInfo_12d6410 + 0x133) >> 2 & 1) != 0) &&
                 (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
                native_sub_4327ec();
              }
              if (((int)fVar13 < 0x14a) ||
                 (*(char *)(*(long *)(_UICamera_TypeInfo_12d6410 + 0xb8) + 0x5a) == '\0')) {
LAB_00c9cff8:
                if ((0x149 < (int)fVar13) ||
                   (((int)fVar13 < 0x143 || (*(char *)(param_1 + 0x29) != '\0')))) {
                  if (((*(byte *)(_UICamera_TypeInfo_12d6410 + 0x133) >> 2 & 1) != 0) &&
                     (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
                    native_sub_4327ec();
                  }
                  native_UICamera__set_currentKey_c94858(fVar13);
                  lVar8 = *(long *)(_UICamera_TypeInfo_12d6410 + 0xb8);
                  lVar6 = *(long *)(lVar8 + 0x160);
                  if (lVar6 != 0) {
                    if (((*(byte *)(_UICamera_TypeInfo_12d6410 + 0x133) >> 2 & 1) != 0) &&
                       (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
                      native_sub_4327ec();
                      lVar8 = *(long *)(_UICamera_TypeInfo_12d6410 + 0xb8);
                      lVar6 = *(long *)(lVar8 + 0x160);
                    }
                    if ((*(long *)(lVar8 + 0xe0) == 0) || (lVar6 == 0)) goto LAB_00c9d7b0;
                    native_UICamera_KeyCodeDelegate__Invoke_551e98
                              (lVar6,*(undefined8 *)(*(long *)(lVar8 + 0xe0) + 0x48),fVar13,0);
                  }
                  if (((*(byte *)(_UICamera_TypeInfo_12d6410 + 0x133) >> 2 & 1) != 0) &&
                     (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
                    native_sub_4327ec();
                  }
                  lVar6 = *(long *)(*(long *)(_UICamera_TypeInfo_12d6410 + 0xb8) + 0xe0);
                  if (lVar6 == 0) goto LAB_00c9d7b0;
                  uVar11 = *(undefined8 *)(lVar6 + 0x48);
                  fStack_78 = fVar13;
                  uVar4 = native_sub_4327fc(_UnityEngine_KeyCode_TypeInfo_12d4fb8,&fStack_78);
                  native_UICamera__Notify_c96a08(uVar11,_StringLiteral_OnKey_12f0240,uVar4);
                }
              }
            }
          }
        }
        uVar3 = uVar3 + 1;
      } while ((long)uVar3 < (long)iVar2);
    }
  }
  if (((*(byte *)(_UICamera_TypeInfo_12d6410 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  puVar10 = (undefined8 *)(*(long *)(_UICamera_TypeInfo_12d6410 + 0xb8) + 0xe0);
  *puVar10 = 0;
  native_sub_4326e0(puVar10,0);
  return;
}



/* UICamera$$ProcessPress @ 0xc9ded8
 * void UICamera__ProcessPress (UICamera_o* __this, bool pressed, float click, float drag, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UICamera$$ProcessPress
   void UICamera__ProcessPress (UICamera_o* __this, bool pressed, float click, float drag, const
   MethodInfo* method); */

void native_UICamera__ProcessPress_c9ded8(float param_1,float param_2,long param_3,ulong param_4)

{
  byte bVar1;
  int iVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  undefined8 *puVar6;
  long *plVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  float fVar11;
  undefined4 uVar12;
  float fVar13;
  float fVar14;
  undefined8 uStack_70;
  undefined1 auStack_68 [4];
  undefined1 auStack_64 [4];
  undefined1 auStack_58 [4];
  undefined1 auStack_54 [4];
  
  fVar13 = param_2;
  if ((bRam00000000013428e8 & 1) == 0) {
    native_sub_43273c(&bool_TypeInfo_12d3bd0);
    native_sub_43273c(&Method_UnityEngine_GameObject_GetComponent_UIInput____12e4ab0);
    native_sub_43273c(&Method_UnityEngine_GameObject_GetComponent_UIKeyNavigation____12e4ab8);
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    native_sub_43273c(&UICamera_TypeInfo_12d6410);
    native_sub_43273c(&UnityEngine_Vector2_TypeInfo_12d66e0);
    native_sub_43273c(&StringLiteral_OnDragStart_12f0228);
    native_sub_43273c(&StringLiteral_OnDrag_12f0208);
    native_sub_43273c(&StringLiteral_OnSelect_12f02c0);
    native_sub_43273c(&StringLiteral_OnPress_12f02b0);
    native_sub_43273c(&StringLiteral_OnDragOut_12f0218);
    native_sub_43273c(&StringLiteral_OnDragOver_12f0220);
    bRam00000000013428e8 = 1;
  }
  if ((param_4 & 1) != 0) {
    if (((*(ushort *)(_UICamera_TypeInfo_12d6410 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    uVar10 = *(undefined8 *)(*(long *)(_UICamera_TypeInfo_12d6410 + 0xb8) + 0x1b0);
    if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
      native_sub_4327ec(_UnityEngine_Object_TypeInfo_12d54e0);
    }
    uVar3 = native_UnityEngine_Object__op_Inequality_8d76fc(uVar10,0,0);
    if ((uVar3 & 1) != 0) {
      if (((*(byte *)(_UICamera_TypeInfo_12d6410 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
        native_sub_4327ec();
      }
      native_UICamera__ShowTooltip_c953cc(0);
    }
    fVar11 = (float)native_UnityEngine_Time__get_unscaledTime_770860(0);
    fVar14 = *(float *)(param_3 + 0x30);
    if (((*(byte *)(_UICamera_TypeInfo_12d6410 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    lVar5 = _UICamera_TypeInfo_12d6410;
    *(float *)(*(long *)(_UICamera_TypeInfo_12d6410 + 0xb8) + 0x1b8) = fVar11 + fVar14;
    lVar4 = *(long *)(*(long *)(lVar5 + 0xb8) + 0xe0);
    if (lVar4 != 0) {
      *(undefined1 *)(lVar4 + 0x75) = 1;
      lVar4 = *(long *)(lVar5 + 0xb8);
      if (*(long *)(lVar4 + 0x118) != 0) {
        if (((*(byte *)(lVar5 + 0x133) >> 2 & 1) != 0) && (*(int *)(lVar5 + 0xe0) == 0)) {
          native_sub_4327ec();
          lVar4 = *(long *)(_UICamera_TypeInfo_12d6410 + 0xb8);
        }
        if (*(long *)(lVar4 + 0xe0) == 0) goto LAB_00c9f070;
        uVar10 = *(undefined8 *)(*(long *)(lVar4 + 0xe0) + 0x50);
        if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
           (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
          native_sub_4327ec();
        }
        uVar3 = native_UnityEngine_Object__op_Implicit_8e1b98(uVar10,0);
        if ((uVar3 & 1) != 0) {
          if (((*(byte *)(_UICamera_TypeInfo_12d6410 + 0x133) >> 2 & 1) != 0) &&
             (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
            native_sub_4327ec();
          }
          lVar5 = *(long *)(*(long *)(_UICamera_TypeInfo_12d6410 + 0xb8) + 0xe0);
          if ((lVar5 == 0) ||
             (lVar4 = *(long *)(*(long *)(_UICamera_TypeInfo_12d6410 + 0xb8) + 0x118), lVar4 == 0))
          goto LAB_00c9f070;
          native_UICamera_BoolDelegate__Invoke_550030(lVar4,*(undefined8 *)(lVar5 + 0x50),0,0);
        }
      }
      if (((*(byte *)(_UICamera_TypeInfo_12d6410 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
        native_sub_4327ec();
      }
      lVar5 = *(long *)(*(long *)(_UICamera_TypeInfo_12d6410 + 0xb8) + 0xe0);
      if (lVar5 != 0) {
        uVar9 = *(undefined8 *)(lVar5 + 0x50);
        auStack_54[0] = 0;
        uVar10 = native_sub_4327fc(_bool_TypeInfo_12d3bd0,auStack_54);
        native_UICamera__Notify_c96a08(uVar9,_StringLiteral_OnPress_12f02b0,uVar10);
        iVar2 = native_UICamera__get_currentScheme_c92518();
        if (iVar2 == 0) {
          if (((*(byte *)(_UICamera_TypeInfo_12d6410 + 0x133) >> 2 & 1) != 0) &&
             (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
            native_sub_4327ec();
          }
          uVar10 = native_UICamera__get_hoveredObject_c9114c();
          if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
             (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
            native_sub_4327ec(_UnityEngine_Object_TypeInfo_12d54e0);
          }
          uVar3 = native_UnityEngine_Object__op_Equality_8e9a3c(uVar10,0,0);
          if ((uVar3 & 1) != 0) {
            if (((*(byte *)(_UICamera_TypeInfo_12d6410 + 0x133) >> 2 & 1) != 0) &&
               (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
              native_sub_4327ec();
            }
            lVar5 = *(long *)(*(long *)(_UICamera_TypeInfo_12d6410 + 0xb8) + 0xe0);
            if (lVar5 == 0) goto LAB_00c9f070;
            uVar10 = *(undefined8 *)(lVar5 + 0x48);
            if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
               (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
              native_sub_4327ec();
            }
            uVar3 = native_UnityEngine_Object__op_Inequality_8d76fc(uVar10,0,0);
            if ((uVar3 & 1) != 0) {
              if (((*(byte *)(_UICamera_TypeInfo_12d6410 + 0x133) >> 2 & 1) != 0) &&
                 (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
                native_sub_4327ec();
              }
              lVar5 = *(long *)(*(long *)(_UICamera_TypeInfo_12d6410 + 0xb8) + 0xe0);
              if (lVar5 == 0) goto LAB_00c9f070;
              native_UICamera__set_hoveredObject_c9622c(*(undefined8 *)(lVar5 + 0x48));
            }
          }
        }
        if (((*(byte *)(_UICamera_TypeInfo_12d6410 + 0x133) >> 2 & 1) != 0) &&
           (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
          native_sub_4327ec();
        }
        lVar5 = *(long *)(*(long *)(_UICamera_TypeInfo_12d6410 + 0xb8) + 0xe0);
        if (lVar5 != 0) {
          *(undefined8 *)(lVar5 + 0x50) = *(undefined8 *)(lVar5 + 0x48);
          native_sub_4326e0(lVar5 + 0x50);
          lVar5 = *(long *)(*(long *)(_UICamera_TypeInfo_12d6410 + 0xb8) + 0xe0);
          if (lVar5 != 0) {
            *(undefined8 *)(lVar5 + 0x58) = *(undefined8 *)(lVar5 + 0x48);
            native_sub_4326e0(lVar5 + 0x58);
            lVar5 = _UICamera_TypeInfo_12d6410;
            lVar4 = *(long *)(*(long *)(_UICamera_TypeInfo_12d6410 + 0xb8) + 0xe0);
            if (lVar4 != 0) {
              *(undefined4 *)(lVar4 + 0x70) = 2;
              lVar5 = *(long *)(*(long *)(lVar5 + 0xb8) + 0xe0);
              uVar12 = native_UnityEngine_Vector2__get_zero_765ef0(0);
              if (lVar5 != 0) {
                *(undefined4 *)(lVar5 + 0x2c) = uVar12;
                *(float *)(lVar5 + 0x30) = fVar13;
                lVar5 = _UICamera_TypeInfo_12d6410;
                lVar4 = *(long *)(*(long *)(_UICamera_TypeInfo_12d6410 + 0xb8) + 0xe0);
                if (lVar4 != 0) {
                  *(undefined1 *)(lVar4 + 0x76) = 0;
                  lVar4 = *(long *)(lVar5 + 0xb8);
                  if (*(long *)(lVar4 + 0x118) != 0) {
                    if (((*(byte *)(lVar5 + 0x133) >> 2 & 1) != 0) && (*(int *)(lVar5 + 0xe0) == 0))
                    {
                      native_sub_4327ec();
                      lVar4 = *(long *)(_UICamera_TypeInfo_12d6410 + 0xb8);
                    }
                    if (*(long *)(lVar4 + 0xe0) == 0) goto LAB_00c9f070;
                    uVar10 = *(undefined8 *)(*(long *)(lVar4 + 0xe0) + 0x50);
                    if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
                       (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
                      native_sub_4327ec();
                    }
                    uVar3 = native_UnityEngine_Object__op_Implicit_8e1b98(uVar10,0);
                    if ((uVar3 & 1) != 0) {
                      if (((*(byte *)(_UICamera_TypeInfo_12d6410 + 0x133) >> 2 & 1) != 0) &&
                         (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
                        native_sub_4327ec();
                      }
                      lVar5 = *(long *)(*(long *)(_UICamera_TypeInfo_12d6410 + 0xb8) + 0xe0);
                      if ((lVar5 == 0) ||
                         (lVar4 = *(long *)(*(long *)(_UICamera_TypeInfo_12d6410 + 0xb8) + 0x118),
                         lVar4 == 0)) goto LAB_00c9f070;
                      native_UICamera_BoolDelegate__Invoke_550030
                                (lVar4,*(undefined8 *)(lVar5 + 0x50),1,0);
                    }
                  }
                  if (((*(byte *)(_UICamera_TypeInfo_12d6410 + 0x133) >> 2 & 1) != 0) &&
                     (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
                    native_sub_4327ec();
                  }
                  lVar5 = *(long *)(*(long *)(_UICamera_TypeInfo_12d6410 + 0xb8) + 0xe0);
                  if (lVar5 != 0) {
                    uVar9 = *(undefined8 *)(lVar5 + 0x50);
                    auStack_58[0] = 1;
                    uVar10 = native_sub_4327fc(_bool_TypeInfo_12d3bd0,auStack_58);
                    native_UICamera__Notify_c96a08(uVar9,_StringLiteral_OnPress_12f02b0,uVar10);
                    lVar5 = *(long *)(*(long *)(_UICamera_TypeInfo_12d6410 + 0xb8) + 0xe0);
                    if (lVar5 != 0) {
                      uVar10 = *(undefined8 *)(*(long *)(_UICamera_TypeInfo_12d6410 + 0xb8) + 0x1e8)
                      ;
                      uVar9 = *(undefined8 *)(lVar5 + 0x50);
                      if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0)
                         && (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
                        native_sub_4327ec();
                      }
                      uVar3 = native_UnityEngine_Object__op_Inequality_8d76fc(uVar10,uVar9,0);
                      if ((uVar3 & 1) == 0) {
                        return;
                      }
                      if (((*(byte *)(_UICamera_TypeInfo_12d6410 + 0x133) >> 2 & 1) != 0) &&
                         (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
                        native_sub_4327ec();
                      }
                      lVar5 = _UICamera_TypeInfo_12d6410;
                      *(undefined1 *)(*(long *)(_UICamera_TypeInfo_12d6410 + 0xb8) + 0xe8) = 0;
                      uVar10 = *(undefined8 *)(*(long *)(lVar5 + 0xb8) + 0x1e8);
                      if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0)
                         && (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
                        native_sub_4327ec(_UnityEngine_Object_TypeInfo_12d54e0);
                      }
                      uVar3 = native_UnityEngine_Object__op_Implicit_8e1b98(uVar10,0);
                      if ((uVar3 & 1) != 0) {
                        if (((*(byte *)(_UICamera_TypeInfo_12d6410 + 0x133) >> 2 & 1) != 0) &&
                           (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
                          native_sub_4327ec();
                        }
                        uVar9 = *(undefined8 *)
                                 (*(long *)(_UICamera_TypeInfo_12d6410 + 0xb8) + 0x1e8);
                        auStack_64[0] = 0;
                        uVar10 = native_sub_4327fc(_bool_TypeInfo_12d3bd0,auStack_64);
                        native_UICamera__Notify_c96a08(uVar9,_StringLiteral_OnSelect_12f02c0,uVar10)
                        ;
                        lVar4 = *(long *)(_UICamera_TypeInfo_12d6410 + 0xb8);
                        lVar5 = *(long *)(lVar4 + 0x120);
                        if (lVar5 != 0) {
                          if (((*(byte *)(_UICamera_TypeInfo_12d6410 + 0x133) >> 2 & 1) != 0) &&
                             (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
                            native_sub_4327ec(_UICamera_TypeInfo_12d6410);
                            lVar4 = *(long *)(_UICamera_TypeInfo_12d6410 + 0xb8);
                            lVar5 = *(long *)(lVar4 + 0x120);
                            if (lVar5 == 0) goto LAB_00c9f070;
                          }
                          native_UICamera_BoolDelegate__Invoke_550030
                                    (lVar5,*(undefined8 *)(lVar4 + 0x1e8),0,0);
                        }
                      }
                      if (((*(byte *)(_UICamera_TypeInfo_12d6410 + 0x133) >> 2 & 1) != 0) &&
                         (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
                        native_sub_4327ec();
                      }
                      lVar5 = *(long *)(_UICamera_TypeInfo_12d6410 + 0xb8);
                      if (*(long *)(lVar5 + 0xe0) != 0) {
                        *(undefined8 *)(lVar5 + 0x1e8) =
                             *(undefined8 *)(*(long *)(lVar5 + 0xe0) + 0x50);
                        native_sub_4326e0(lVar5 + 0x1e8);
                        lVar5 = *(long *)(*(long *)(_UICamera_TypeInfo_12d6410 + 0xb8) + 0xe0);
                        if (lVar5 != 0) {
                          uVar10 = *(undefined8 *)(lVar5 + 0x50);
                          if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) !=
                               0) && (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
                            native_sub_4327ec();
                          }
                          uVar3 = native_UnityEngine_Object__op_Inequality_8d76fc(uVar10,0,0);
                          if ((uVar3 & 1) != 0) {
                            if (((*(byte *)(_UICamera_TypeInfo_12d6410 + 0x133) >> 2 & 1) != 0) &&
                               (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
                              native_sub_4327ec();
                            }
                            lVar5 = *(long *)(*(long *)(_UICamera_TypeInfo_12d6410 + 0xb8) + 0xe0);
                            if ((lVar5 == 0) || (lVar5 = *(long *)(lVar5 + 0x50), lVar5 == 0))
                            goto LAB_00c9f070;
                            uVar10 = native_UnityEngine_GameObject__GetComponent_BE2_BlockSectionHeader_Custom__4a2214
                                               (lVar5,
                                                _Method_UnityEngine_GameObject_GetComponent_UIKeyNavigation____12e4ab8
                                               );
                            if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1)
                                 != 0) &&
                               (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
                              native_sub_4327ec(_UnityEngine_Object_TypeInfo_12d54e0);
                            }
                            uVar3 = native_UnityEngine_Object__op_Inequality_8d76fc(uVar10,0,0);
                            if ((uVar3 & 1) != 0) {
                              if (((*(byte *)(_UICamera_TypeInfo_12d6410 + 0x133) >> 2 & 1) != 0) &&
                                 (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
                                native_sub_4327ec();
                              }
                              lVar5 = *(long *)(*(long *)(_UICamera_TypeInfo_12d6410 + 0xb8) + 0xe0)
                              ;
                              if ((lVar5 == 0) ||
                                 (lVar4 = *(long *)(*(long *)(_UICamera_TypeInfo_12d6410 + 0xb8) +
                                                   400), lVar4 == 0)) goto LAB_00c9f070;
                              *(undefined8 *)(lVar4 + 0x48) = *(undefined8 *)(lVar5 + 0x50);
                              native_sub_4326e0();
                            }
                          }
                          if (((*(byte *)(_UICamera_TypeInfo_12d6410 + 0x133) >> 2 & 1) != 0) &&
                             (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
                            native_sub_4327ec();
                          }
                          uVar10 = *(undefined8 *)
                                    (*(long *)(_UICamera_TypeInfo_12d6410 + 0xb8) + 0x1e8);
                          if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) !=
                               0) && (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
                            native_sub_4327ec(_UnityEngine_Object_TypeInfo_12d54e0);
                          }
                          uVar3 = native_UnityEngine_Object__op_Implicit_8e1b98(uVar10,0);
                          if ((uVar3 & 1) == 0) {
                            return;
                          }
                          if (((*(byte *)(_UICamera_TypeInfo_12d6410 + 0x133) >> 2 & 1) != 0) &&
                             (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
                            native_sub_4327ec();
                          }
                          lVar5 = *(long *)(*(long *)(_UICamera_TypeInfo_12d6410 + 0xb8) + 0x1e8);
                          if (lVar5 != 0) {
                            uVar3 = native_UnityEngine_GameObject__get_activeInHierarchy_8de728
                                              (lVar5,0);
                            if ((uVar3 & 1) == 0) {
                              bVar1 = 0;
                            }
                            else {
                              if (((*(byte *)(_UICamera_TypeInfo_12d6410 + 0x133) >> 2 & 1) != 0) &&
                                 (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
                                native_sub_4327ec();
                              }
                              lVar5 = *(long *)(*(long *)(_UICamera_TypeInfo_12d6410 + 0xb8) + 0x1e8
                                               );
                              if (lVar5 == 0) goto LAB_00c9f070;
                              uVar10 = native_UnityEngine_GameObject__GetComponent_BE2_BlockSectionHeader_Custom__4a2214
                                                 (lVar5,
                                                  _Method_UnityEngine_GameObject_GetComponent_UIInput____12e4ab0
                                                 );
                              if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1
                                   ) != 0) &&
                                 (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
                                native_sub_4327ec(_UnityEngine_Object_TypeInfo_12d54e0);
                              }
                              bVar1 = native_UnityEngine_Object__op_Inequality_8d76fc(uVar10,0,0);
                              bVar1 = bVar1 & 1;
                            }
                            if (((*(byte *)(_UICamera_TypeInfo_12d6410 + 0x133) >> 2 & 1) != 0) &&
                               (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
                              native_sub_4327ec();
                            }
                            lVar5 = _UICamera_TypeInfo_12d6410;
                            *(byte *)(*(long *)(_UICamera_TypeInfo_12d6410 + 0xb8) + 0xe8) = bVar1;
                            lVar8 = *(long *)(lVar5 + 0xb8);
                            lVar4 = *(long *)(lVar8 + 0x120);
                            if (lVar4 != 0) {
                              if (((*(byte *)(lVar5 + 0x133) >> 2 & 1) != 0) &&
                                 (*(int *)(lVar5 + 0xe0) == 0)) {
                                native_sub_4327ec();
                                lVar8 = *(long *)(_UICamera_TypeInfo_12d6410 + 0xb8);
                                lVar4 = *(long *)(lVar8 + 0x120);
                                if (lVar4 == 0) goto LAB_00c9f070;
                              }
                              native_UICamera_BoolDelegate__Invoke_550030
                                        (lVar4,*(undefined8 *)(lVar8 + 0x1e8),1,0);
                              lVar5 = _UICamera_TypeInfo_12d6410;
                            }
                            if (((*(byte *)(lVar5 + 0x133) >> 2 & 1) != 0) &&
                               (*(int *)(lVar5 + 0xe0) == 0)) {
                              native_sub_4327ec();
                              lVar5 = _UICamera_TypeInfo_12d6410;
                            }
                            uVar9 = *(undefined8 *)(*(long *)(lVar5 + 0xb8) + 0x1e8);
                            auStack_68[0] = 1;
                            uVar10 = native_sub_4327fc(_bool_TypeInfo_12d3bd0,auStack_68);
                            native_UICamera__Notify_c96a08
                                      (uVar9,_StringLiteral_OnSelect_12f02c0,uVar10);
                            return;
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
    goto LAB_00c9f070;
  }
  if (((*(ushort *)(_UICamera_TypeInfo_12d6410 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  lVar5 = *(long *)(*(long *)(_UICamera_TypeInfo_12d6410 + 0xb8) + 0xe0);
  if (lVar5 == 0) goto LAB_00c9f070;
  uVar10 = *(undefined8 *)(lVar5 + 0x50);
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar3 = native_UnityEngine_Object__op_Inequality_8d76fc(uVar10,0,0);
  if ((uVar3 & 1) == 0) {
    return;
  }
  if (((*(byte *)(_UICamera_TypeInfo_12d6410 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  lVar5 = *(long *)(*(long *)(_UICamera_TypeInfo_12d6410 + 0xb8) + 0xe0);
  if (lVar5 == 0) goto LAB_00c9f070;
  fVar13 = (float)native_UnityEngine_Vector2__get_sqrMagnitude_775674(lVar5 + 0x24,0);
  if (fVar13 == 0.0) {
    if (((*(byte *)(_UICamera_TypeInfo_12d6410 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    lVar5 = *(long *)(*(long *)(_UICamera_TypeInfo_12d6410 + 0xb8) + 0xe0);
    if (lVar5 == 0) goto LAB_00c9f070;
    uVar10 = *(undefined8 *)(lVar5 + 0x40);
    uVar9 = *(undefined8 *)(lVar5 + 0x48);
    if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    uVar3 = native_UnityEngine_Object__op_Inequality_8d76fc(uVar9,uVar10,0);
    if ((uVar3 & 1) == 0) {
      return;
    }
  }
  if (((*(byte *)(_UICamera_TypeInfo_12d6410 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  lVar5 = _UICamera_TypeInfo_12d6410;
  lVar4 = *(long *)(*(long *)(_UICamera_TypeInfo_12d6410 + 0xb8) + 0xe0);
  if (lVar4 == 0) goto LAB_00c9f070;
  *(ulong *)(lVar4 + 0x2c) =
       CONCAT44((float)((ulong)*(undefined8 *)(lVar4 + 0x2c) >> 0x20) +
                (float)((ulong)*(undefined8 *)(lVar4 + 0x24) >> 0x20),
                (float)*(undefined8 *)(lVar4 + 0x2c) + (float)*(undefined8 *)(lVar4 + 0x24));
  lVar5 = *(long *)(*(long *)(lVar5 + 0xb8) + 0xe0);
  if (lVar5 == 0) goto LAB_00c9f070;
  fVar13 = (float)native_UnityEngine_Vector2__get_sqrMagnitude_775674(lVar5 + 0x2c,0);
  lVar5 = *(long *)(*(long *)(_UICamera_TypeInfo_12d6410 + 0xb8) + 0xe0);
  if (lVar5 == 0) goto LAB_00c9f070;
  if (*(char *)(lVar5 + 0x76) == '\0') {
    if (((*(byte *)(_UICamera_TypeInfo_12d6410 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
      native_sub_4327ec(_UICamera_TypeInfo_12d6410);
      lVar5 = *(long *)(*(long *)(_UICamera_TypeInfo_12d6410 + 0xb8) + 0xe0);
      if (lVar5 == 0) goto LAB_00c9f070;
    }
    uVar10 = *(undefined8 *)(lVar5 + 0x40);
    uVar9 = *(undefined8 *)(lVar5 + 0x48);
    if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    uVar3 = native_UnityEngine_Object__op_Inequality_8d76fc(uVar10,uVar9,0);
    if ((uVar3 & 1) == 0) goto LAB_00c9ea70;
    if (((*(byte *)(_UICamera_TypeInfo_12d6410 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
      native_sub_4327ec(_UICamera_TypeInfo_12d6410);
    }
    lVar5 = _UICamera_TypeInfo_12d6410;
    lVar4 = *(long *)(*(long *)(_UICamera_TypeInfo_12d6410 + 0xb8) + 0xe0);
    if (lVar4 == 0) goto LAB_00c9f070;
    *(undefined1 *)(lVar4 + 0x76) = 1;
    lVar4 = *(long *)(*(long *)(lVar5 + 0xb8) + 0xe0);
    if (lVar4 == 0) goto LAB_00c9f070;
    *(undefined8 *)(lVar4 + 0x24) = *(undefined8 *)(lVar4 + 0x2c);
    lVar4 = *(long *)(*(long *)(lVar5 + 0xb8) + 0xe0);
    if (lVar4 == 0) goto LAB_00c9f070;
    *(undefined4 *)(lVar4 + 0x70) = 0;
    *(undefined1 *)(*(long *)(lVar5 + 0xb8) + 0x1bc) = 1;
    lVar8 = *(long *)(lVar5 + 0xb8);
    lVar4 = *(long *)(lVar8 + 0x138);
    if (lVar4 != 0) {
      if (((*(byte *)(lVar5 + 0x133) >> 2 & 1) != 0) && (*(int *)(lVar5 + 0xe0) == 0)) {
        native_sub_4327ec(lVar5);
        lVar8 = *(long *)(_UICamera_TypeInfo_12d6410 + 0xb8);
        lVar4 = *(long *)(lVar8 + 0x138);
      }
      if ((*(long *)(lVar8 + 0xe0) == 0) || (lVar4 == 0)) goto LAB_00c9f070;
      native_UICamera_VoidDelegate__Invoke_553c80
                (lVar4,*(undefined8 *)(*(long *)(lVar8 + 0xe0) + 0x58),0);
      lVar5 = _UICamera_TypeInfo_12d6410;
    }
    if (((*(byte *)(lVar5 + 0x133) >> 2 & 1) != 0) && (*(int *)(lVar5 + 0xe0) == 0)) {
      native_sub_4327ec(lVar5);
      lVar5 = _UICamera_TypeInfo_12d6410;
    }
    lVar5 = *(long *)(*(long *)(lVar5 + 0xb8) + 0xe0);
    if (lVar5 == 0) goto LAB_00c9f070;
    native_UICamera__Notify_c96a08
              (*(undefined8 *)(lVar5 + 0x58),_StringLiteral_OnDragStart_12f0228,0);
    lVar4 = *(long *)(_UICamera_TypeInfo_12d6410 + 0xb8);
    lVar5 = *(long *)(lVar4 + 0x140);
    if (lVar5 != 0) {
      if (((*(byte *)(_UICamera_TypeInfo_12d6410 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
        native_sub_4327ec();
        lVar4 = *(long *)(_UICamera_TypeInfo_12d6410 + 0xb8);
        lVar5 = *(long *)(lVar4 + 0x140);
      }
      lVar4 = *(long *)(lVar4 + 0xe0);
      if ((lVar4 == 0) || (lVar5 == 0)) goto LAB_00c9f070;
      native_UICamera_ObjectDelegate__Invoke_552838
                (lVar5,*(undefined8 *)(lVar4 + 0x40),*(undefined8 *)(lVar4 + 0x58),0);
    }
    if (((*(byte *)(_UICamera_TypeInfo_12d6410 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    lVar5 = *(long *)(*(long *)(_UICamera_TypeInfo_12d6410 + 0xb8) + 0xe0);
    if (lVar5 == 0) goto LAB_00c9f070;
    native_UICamera__Notify_c96a08
              (*(undefined8 *)(lVar5 + 0x40),_StringLiteral_OnDragOver_12f0220,
               *(undefined8 *)(lVar5 + 0x58));
    lVar4 = _UICamera_TypeInfo_12d6410;
    bVar1 = 0;
    *(undefined1 *)(*(long *)(_UICamera_TypeInfo_12d6410 + 0xb8) + 0x1bc) = 0;
  }
  else {
LAB_00c9ea70:
    if (((*(byte *)(_UICamera_TypeInfo_12d6410 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
      native_sub_4327ec(_UICamera_TypeInfo_12d6410);
    }
    lVar5 = *(long *)(*(long *)(_UICamera_TypeInfo_12d6410 + 0xb8) + 0xe0);
    if (lVar5 == 0) goto LAB_00c9f070;
    bVar1 = 0;
    lVar4 = _UICamera_TypeInfo_12d6410;
    if ((param_2 < fVar13) && (*(char *)(lVar5 + 0x76) == '\0')) {
      if (((*(byte *)(_UICamera_TypeInfo_12d6410 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
        native_sub_4327ec(_UICamera_TypeInfo_12d6410);
        lVar5 = *(long *)(*(long *)(_UICamera_TypeInfo_12d6410 + 0xb8) + 0xe0);
        if (lVar5 == 0) goto LAB_00c9f070;
      }
      lVar4 = _UICamera_TypeInfo_12d6410;
      *(undefined1 *)(lVar5 + 0x76) = 1;
      lVar5 = *(long *)(*(long *)(lVar4 + 0xb8) + 0xe0);
      if (lVar5 == 0) goto LAB_00c9f070;
      bVar1 = 1;
      *(undefined8 *)(lVar5 + 0x24) = *(undefined8 *)(lVar5 + 0x2c);
    }
  }
  if (((*(byte *)(lVar4 + 0x133) >> 2 & 1) != 0) && (*(int *)(lVar4 + 0xe0) == 0)) {
    native_sub_4327ec(lVar4);
    lVar4 = _UICamera_TypeInfo_12d6410;
  }
  lVar5 = *(long *)(lVar4 + 0xb8);
  if (*(long *)(lVar5 + 0xe0) == 0) goto LAB_00c9f070;
  if (*(char *)(*(long *)(lVar5 + 0xe0) + 0x76) == '\0') {
    return;
  }
  if (((*(byte *)(lVar4 + 0x133) >> 2 & 1) != 0) && (*(int *)(lVar4 + 0xe0) == 0)) {
    native_sub_4327ec(lVar4);
    lVar5 = *(long *)(_UICamera_TypeInfo_12d6410 + 0xb8);
  }
  uVar10 = *(undefined8 *)(lVar5 + 0x1b0);
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar3 = native_UnityEngine_Object__op_Inequality_8d76fc(uVar10,0,0);
  if ((uVar3 & 1) != 0) {
    if (((*(byte *)(_UICamera_TypeInfo_12d6410 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    native_UICamera__ShowTooltip_c953cc(0);
  }
  if (((*(byte *)(_UICamera_TypeInfo_12d6410 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  lVar5 = _UICamera_TypeInfo_12d6410;
  *(undefined1 *)(*(long *)(_UICamera_TypeInfo_12d6410 + 0xb8) + 0x1bc) = 1;
  lVar8 = *(long *)(lVar5 + 0xb8);
  lVar4 = *(long *)(lVar8 + 0xe0);
  if (lVar4 == 0) goto LAB_00c9f070;
  iVar2 = *(int *)(lVar4 + 0x70);
  if ((bool)(bVar1 ^ 1)) {
    if (((*(ushort *)(lVar5 + 0x132) >> 10 & 1) != 0) && (*(int *)(lVar5 + 0xe0) == 0)) {
      native_sub_4327ec();
      lVar4 = *(long *)(*(long *)(_UICamera_TypeInfo_12d6410 + 0xb8) + 0xe0);
      if (lVar4 == 0) goto LAB_00c9f070;
    }
    uVar10 = *(undefined8 *)(lVar4 + 0x40);
    uVar9 = *(undefined8 *)(lVar4 + 0x48);
    if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    uVar3 = native_UnityEngine_Object__op_Inequality_8d76fc(uVar10,uVar9,0);
    if ((uVar3 & 1) != 0) {
      if (((*(byte *)(_UICamera_TypeInfo_12d6410 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
        native_sub_4327ec();
      }
      lVar4 = *(long *)(_UICamera_TypeInfo_12d6410 + 0xb8);
      lVar5 = *(long *)(lVar4 + 0x148);
      if (lVar5 != 0) {
        if (((*(byte *)(_UICamera_TypeInfo_12d6410 + 0x133) >> 2 & 1) != 0) &&
           (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
          native_sub_4327ec();
          lVar4 = *(long *)(_UICamera_TypeInfo_12d6410 + 0xb8);
          lVar5 = *(long *)(lVar4 + 0x148);
        }
        lVar4 = *(long *)(lVar4 + 0xe0);
        if ((lVar4 == 0) || (lVar5 == 0)) goto LAB_00c9f070;
        native_UICamera_ObjectDelegate__Invoke_552838
                  (lVar5,*(undefined8 *)(lVar4 + 0x40),*(undefined8 *)(lVar4 + 0x58),0);
      }
      if (((*(byte *)(_UICamera_TypeInfo_12d6410 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
        native_sub_4327ec();
      }
      lVar5 = *(long *)(*(long *)(_UICamera_TypeInfo_12d6410 + 0xb8) + 0xe0);
      if (lVar5 == 0) goto LAB_00c9f070;
      uVar10 = *(undefined8 *)(lVar5 + 0x40);
      uVar9 = *(undefined8 *)(lVar5 + 0x58);
      puVar6 = (undefined8 *)&StringLiteral_OnDragOut_12f0218;
      goto LAB_00c9ee3c;
    }
  }
  else {
    if (((*(ushort *)(lVar5 + 0x132) >> 10 & 1) != 0) && (*(int *)(lVar5 + 0xe0) == 0)) {
      native_sub_4327ec();
      lVar8 = *(long *)(_UICamera_TypeInfo_12d6410 + 0xb8);
      lVar5 = _UICamera_TypeInfo_12d6410;
    }
    lVar4 = *(long *)(lVar8 + 0x138);
    if (lVar4 != 0) {
      if (((*(byte *)(lVar5 + 0x133) >> 2 & 1) != 0) && (*(int *)(lVar5 + 0xe0) == 0)) {
        native_sub_4327ec();
        lVar8 = *(long *)(_UICamera_TypeInfo_12d6410 + 0xb8);
        lVar4 = *(long *)(lVar8 + 0x138);
      }
      if ((*(long *)(lVar8 + 0xe0) == 0) || (lVar4 == 0)) goto LAB_00c9f070;
      native_UICamera_VoidDelegate__Invoke_553c80
                (lVar4,*(undefined8 *)(*(long *)(lVar8 + 0xe0) + 0x58),0);
      lVar5 = _UICamera_TypeInfo_12d6410;
    }
    if (((*(byte *)(lVar5 + 0x133) >> 2 & 1) != 0) && (*(int *)(lVar5 + 0xe0) == 0)) {
      native_sub_4327ec();
      lVar5 = _UICamera_TypeInfo_12d6410;
    }
    lVar5 = *(long *)(*(long *)(lVar5 + 0xb8) + 0xe0);
    if (lVar5 == 0) goto LAB_00c9f070;
    uVar10 = *(undefined8 *)(lVar5 + 0x58);
    puVar6 = (undefined8 *)&StringLiteral_OnDragStart_12f0228;
    uVar9 = 0;
LAB_00c9ee3c:
    native_UICamera__Notify_c96a08(uVar10,*puVar6,uVar9);
    lVar4 = *(long *)(_UICamera_TypeInfo_12d6410 + 0xb8);
    lVar5 = *(long *)(lVar4 + 0x140);
    if (lVar5 != 0) {
      if (((*(byte *)(_UICamera_TypeInfo_12d6410 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
        native_sub_4327ec();
        lVar4 = *(long *)(_UICamera_TypeInfo_12d6410 + 0xb8);
        lVar5 = *(long *)(lVar4 + 0x140);
      }
      lVar4 = *(long *)(lVar4 + 0xe0);
      if ((lVar4 == 0) || (lVar5 == 0)) goto LAB_00c9f070;
      native_UICamera_ObjectDelegate__Invoke_552838
                (lVar5,*(undefined8 *)(lVar4 + 0x40),*(undefined8 *)(lVar4 + 0x58),0);
    }
    if (((*(byte *)(_UICamera_TypeInfo_12d6410 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    lVar5 = *(long *)(*(long *)(_UICamera_TypeInfo_12d6410 + 0xb8) + 0xe0);
    if (lVar5 == 0) goto LAB_00c9f070;
    native_UICamera__Notify_c96a08
              (*(undefined8 *)(lVar5 + 0x48),_StringLiteral_OnDragOver_12f0220,
               *(undefined8 *)(lVar5 + 0x58));
  }
  if (((*(byte *)(_UICamera_TypeInfo_12d6410 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  lVar4 = *(long *)(_UICamera_TypeInfo_12d6410 + 0xb8);
  lVar5 = *(long *)(lVar4 + 0x130);
  if (lVar5 != 0) {
    if (((*(byte *)(_UICamera_TypeInfo_12d6410 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
      native_sub_4327ec();
      lVar4 = *(long *)(_UICamera_TypeInfo_12d6410 + 0xb8);
      lVar5 = *(long *)(lVar4 + 0x130);
    }
    lVar4 = *(long *)(lVar4 + 0xe0);
    if ((lVar4 == 0) || (lVar5 == 0)) goto LAB_00c9f070;
    native_UICamera_VectorDelegate__Invoke_5537b8
              (*(undefined4 *)(lVar4 + 0x24),*(undefined4 *)(lVar4 + 0x28),lVar5,
               *(undefined8 *)(lVar4 + 0x58),0);
  }
  if (((*(byte *)(_UICamera_TypeInfo_12d6410 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  lVar5 = *(long *)(*(long *)(_UICamera_TypeInfo_12d6410 + 0xb8) + 0xe0);
  if (lVar5 != 0) {
    uVar9 = *(undefined8 *)(lVar5 + 0x58);
    uStack_70 = *(undefined8 *)(lVar5 + 0x24);
    uVar10 = native_sub_4327fc(_UnityEngine_Vector2_TypeInfo_12d66e0,&uStack_70);
    native_UICamera__Notify_c96a08(uVar9,_StringLiteral_OnDrag_12f0208,uVar10);
    lVar5 = *(long *)(*(long *)(_UICamera_TypeInfo_12d6410 + 0xb8) + 0xe0);
    if (lVar5 == 0) goto LAB_00c9f070;
    *(undefined8 *)(lVar5 + 0x40) = *(undefined8 *)(lVar5 + 0x48);
    native_sub_4326e0(lVar5 + 0x40);
    lVar5 = _UICamera_TypeInfo_12d6410;
    plVar7 = (long *)(_UICamera_TypeInfo_12d6410 + 0xb8);
    *(undefined1 *)(*plVar7 + 0x1bc) = 0;
    if (iVar2 == 0) {
      if (((*(ushort *)(lVar5 + 0x132) >> 10 & 1) != 0) && (*(int *)(lVar5 + 0xe0) == 0)) {
        native_sub_4327ec();
        plVar7 = (long *)(_UICamera_TypeInfo_12d6410 + 0xb8);
      }
      lVar5 = *plVar7;
    }
    else {
      if (((*(ushort *)(lVar5 + 0x132) >> 10 & 1) != 0) && (*(int *)(lVar5 + 0xe0) == 0)) {
        native_sub_4327ec();
        lVar5 = _UICamera_TypeInfo_12d6410;
      }
      lVar4 = *(long *)(*(long *)(lVar5 + 0xb8) + 0xe0);
      if (lVar4 == 0) goto LAB_00c9f070;
      if (fVar13 <= param_1) {
        return;
      }
      if (*(int *)(lVar4 + 0x70) != 2) {
        return;
      }
      if (((*(byte *)(lVar5 + 0x133) >> 2 & 1) == 0) || (*(int *)(lVar5 + 0xe0) != 0))
      goto LAB_00c9eff8;
      native_sub_4327ec();
      lVar5 = *(long *)(_UICamera_TypeInfo_12d6410 + 0xb8);
    }
    lVar4 = *(long *)(lVar5 + 0xe0);
    if (lVar4 != 0) {
LAB_00c9eff8:
      *(undefined4 *)(lVar4 + 0x70) = 0;
      return;
    }
  }
LAB_00c9f070:
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* UICamera$$ProcessRelease @ 0xc9f074
 * void UICamera__ProcessRelease (UICamera_o* __this, bool isMouse, float drag, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UICamera$$ProcessRelease
   void UICamera__ProcessRelease (UICamera_o* __this, bool isMouse, float drag, const MethodInfo*
   method); */

void native_UICamera__ProcessRelease_c9f074(float param_1,undefined8 param_2,ulong param_3)

{
  int iVar1;
  ulong uVar2;
  undefined8 *puVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  float fVar9;
  undefined1 auStack_48 [4];
  undefined1 auStack_44 [4];
  
  if ((bRam00000000013428e9 & 1) == 0) {
    native_sub_43273c(&bool_TypeInfo_12d3bd0);
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    native_sub_43273c(&UICamera_TypeInfo_12d6410);
    native_sub_43273c(&StringLiteral_OnDragEnd_12f0210);
    native_sub_43273c(&StringLiteral_OnClick_12f01f0);
    native_sub_43273c(&StringLiteral_OnDoubleClick_12f0200);
    native_sub_43273c(&StringLiteral_OnDrop_12f0230);
    native_sub_43273c(&StringLiteral_OnHover_12f0238);
    native_sub_43273c(&StringLiteral_OnPress_12f02b0);
    native_sub_43273c(&StringLiteral_OnDragOut_12f0218);
    bRam00000000013428e9 = 1;
  }
  if (((*(byte *)(_UICamera_TypeInfo_12d6410 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  plVar4 = (long *)(_UICamera_TypeInfo_12d6410 + 0xb8);
  lVar6 = *(long *)(*plVar4 + 0xe0);
  if (lVar6 == 0) {
    return;
  }
  if (((*(byte *)(_UICamera_TypeInfo_12d6410 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
    native_sub_4327ec();
    plVar4 = (long *)(_UICamera_TypeInfo_12d6410 + 0xb8);
    lVar6 = *(long *)(*plVar4 + 0xe0);
    if (lVar6 == 0) goto LAB_00c9fa5c;
  }
  *(undefined1 *)(lVar6 + 0x75) = 0;
  if (*(long *)(*plVar4 + 0xe0) == 0) goto LAB_00c9fa5c;
  uVar7 = *(undefined8 *)(*(long *)(*plVar4 + 0xe0) + 0x50);
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar2 = native_UnityEngine_Object__op_Inequality_8d76fc(uVar7,0,0);
  if ((uVar2 & 1) != 0) {
    if (((*(byte *)(_UICamera_TypeInfo_12d6410 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    lVar6 = *(long *)(_UICamera_TypeInfo_12d6410 + 0xb8);
    if (*(long *)(lVar6 + 0xe0) == 0) goto LAB_00c9fa5c;
    if (*(char *)(*(long *)(lVar6 + 0xe0) + 0x76) != '\0') {
      if (((*(byte *)(_UICamera_TypeInfo_12d6410 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
        native_sub_4327ec();
        lVar6 = *(long *)(_UICamera_TypeInfo_12d6410 + 0xb8);
      }
      lVar5 = *(long *)(lVar6 + 0x148);
      if (lVar5 != 0) {
        if (((*(byte *)(_UICamera_TypeInfo_12d6410 + 0x133) >> 2 & 1) != 0) &&
           (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
          native_sub_4327ec();
          lVar6 = *(long *)(_UICamera_TypeInfo_12d6410 + 0xb8);
          lVar5 = *(long *)(lVar6 + 0x148);
        }
        lVar6 = *(long *)(lVar6 + 0xe0);
        if ((lVar6 == 0) || (lVar5 == 0)) goto LAB_00c9fa5c;
        native_UICamera_ObjectDelegate__Invoke_552838
                  (lVar5,*(undefined8 *)(lVar6 + 0x40),*(undefined8 *)(lVar6 + 0x58),0);
      }
      if (((*(byte *)(_UICamera_TypeInfo_12d6410 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
        native_sub_4327ec();
      }
      lVar6 = *(long *)(*(long *)(_UICamera_TypeInfo_12d6410 + 0xb8) + 0xe0);
      if (lVar6 == 0) goto LAB_00c9fa5c;
      native_UICamera__Notify_c96a08
                (*(undefined8 *)(lVar6 + 0x40),_StringLiteral_OnDragOut_12f0218,
                 *(undefined8 *)(lVar6 + 0x58));
      lVar5 = *(long *)(_UICamera_TypeInfo_12d6410 + 0xb8);
      lVar6 = *(long *)(lVar5 + 0x150);
      if (lVar6 != 0) {
        if (((*(byte *)(_UICamera_TypeInfo_12d6410 + 0x133) >> 2 & 1) != 0) &&
           (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
          native_sub_4327ec();
          lVar5 = *(long *)(_UICamera_TypeInfo_12d6410 + 0xb8);
          lVar6 = *(long *)(lVar5 + 0x150);
        }
        if ((*(long *)(lVar5 + 0xe0) == 0) || (lVar6 == 0)) goto LAB_00c9fa5c;
        native_UICamera_VoidDelegate__Invoke_553c80
                  (lVar6,*(undefined8 *)(*(long *)(lVar5 + 0xe0) + 0x58),0);
      }
      if (((*(byte *)(_UICamera_TypeInfo_12d6410 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
        native_sub_4327ec();
      }
      lVar6 = *(long *)(*(long *)(_UICamera_TypeInfo_12d6410 + 0xb8) + 0xe0);
      if (lVar6 == 0) goto LAB_00c9fa5c;
      native_UICamera__Notify_c96a08
                (*(undefined8 *)(lVar6 + 0x58),_StringLiteral_OnDragEnd_12f0210,0);
    }
    if (((*(byte *)(_UICamera_TypeInfo_12d6410 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    lVar5 = *(long *)(_UICamera_TypeInfo_12d6410 + 0xb8);
    lVar6 = *(long *)(lVar5 + 0x118);
    if (lVar6 != 0) {
      if (((*(byte *)(_UICamera_TypeInfo_12d6410 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
        native_sub_4327ec();
        lVar5 = *(long *)(_UICamera_TypeInfo_12d6410 + 0xb8);
        lVar6 = *(long *)(lVar5 + 0x118);
      }
      if ((*(long *)(lVar5 + 0xe0) == 0) || (lVar6 == 0)) goto LAB_00c9fa5c;
      native_UICamera_BoolDelegate__Invoke_550030
                (lVar6,*(undefined8 *)(*(long *)(lVar5 + 0xe0) + 0x50),0,0);
    }
    if (((*(byte *)(_UICamera_TypeInfo_12d6410 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    lVar6 = *(long *)(*(long *)(_UICamera_TypeInfo_12d6410 + 0xb8) + 0xe0);
    if (lVar6 == 0) goto LAB_00c9fa5c;
    uVar8 = *(undefined8 *)(lVar6 + 0x50);
    auStack_44[0] = 0;
    uVar7 = native_sub_4327fc(_bool_TypeInfo_12d3bd0,auStack_44);
    native_UICamera__Notify_c96a08(uVar8,_StringLiteral_OnPress_12f02b0,uVar7);
    if ((param_3 & 1) != 0) {
      if (((*(byte *)(_UICamera_TypeInfo_12d6410 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
        native_sub_4327ec();
      }
      lVar6 = *(long *)(*(long *)(_UICamera_TypeInfo_12d6410 + 0xb8) + 0xe0);
      if (lVar6 == 0) goto LAB_00c9fa5c;
      uVar2 = native_UICamera__HasCollider_c9fa60
                        (_UICamera_TypeInfo_12d6410,*(undefined8 *)(lVar6 + 0x50));
      if ((uVar2 & 1) != 0) {
        if (((*(byte *)(_UICamera_TypeInfo_12d6410 + 0x133) >> 2 & 1) != 0) &&
           (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
          native_sub_4327ec();
        }
        lVar6 = *(long *)(*(long *)(_UICamera_TypeInfo_12d6410 + 0xb8) + 0xe0);
        if (lVar6 == 0) goto LAB_00c9fa5c;
        uVar7 = *(undefined8 *)(*(long *)(_UICamera_TypeInfo_12d6410 + 0xb8) + 0x1e0);
        uVar8 = *(undefined8 *)(lVar6 + 0x48);
        if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
           (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
          native_sub_4327ec();
        }
        uVar2 = native_UnityEngine_Object__op_Equality_8e9a3c(uVar7,uVar8,0);
        if ((uVar2 & 1) == 0) {
          if (((*(ushort *)(_UICamera_TypeInfo_12d6410 + 0x132) >> 10 & 1) != 0) &&
             (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
            native_sub_4327ec(_UICamera_TypeInfo_12d6410);
          }
          lVar6 = *(long *)(*(long *)(_UICamera_TypeInfo_12d6410 + 0xb8) + 0xe0);
          if (lVar6 == 0) goto LAB_00c9fa5c;
          native_UICamera__set_hoveredObject_c9622c(*(undefined8 *)(lVar6 + 0x48));
        }
        else {
          if (((*(ushort *)(_UICamera_TypeInfo_12d6410 + 0x132) >> 10 & 1) != 0) &&
             (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
            native_sub_4327ec(_UICamera_TypeInfo_12d6410);
          }
          lVar5 = *(long *)(_UICamera_TypeInfo_12d6410 + 0xb8);
          lVar6 = *(long *)(lVar5 + 0x110);
          if (lVar6 != 0) {
            if (((*(byte *)(_UICamera_TypeInfo_12d6410 + 0x133) >> 2 & 1) != 0) &&
               (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
              native_sub_4327ec(_UICamera_TypeInfo_12d6410);
              lVar5 = *(long *)(_UICamera_TypeInfo_12d6410 + 0xb8);
              lVar6 = *(long *)(lVar5 + 0x110);
            }
            if ((*(long *)(lVar5 + 0xe0) == 0) || (lVar6 == 0)) goto LAB_00c9fa5c;
            native_UICamera_BoolDelegate__Invoke_550030
                      (lVar6,*(undefined8 *)(*(long *)(lVar5 + 0xe0) + 0x48),1,0);
          }
          if (((*(byte *)(_UICamera_TypeInfo_12d6410 + 0x133) >> 2 & 1) != 0) &&
             (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
            native_sub_4327ec(_UICamera_TypeInfo_12d6410);
          }
          lVar6 = *(long *)(*(long *)(_UICamera_TypeInfo_12d6410 + 0xb8) + 0xe0);
          if (lVar6 == 0) goto LAB_00c9fa5c;
          uVar8 = *(undefined8 *)(lVar6 + 0x48);
          auStack_48[0] = 1;
          uVar7 = native_sub_4327fc(_bool_TypeInfo_12d3bd0,auStack_48);
          native_UICamera__Notify_c96a08(uVar8,_StringLiteral_OnHover_12f0238,uVar7);
        }
      }
    }
    if (((*(byte *)(_UICamera_TypeInfo_12d6410 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    lVar6 = *(long *)(*(long *)(_UICamera_TypeInfo_12d6410 + 0xb8) + 0xe0);
    if (lVar6 == 0) goto LAB_00c9fa5c;
    uVar7 = *(undefined8 *)(lVar6 + 0x58);
    uVar8 = *(undefined8 *)(lVar6 + 0x48);
    if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    uVar2 = native_UnityEngine_Object__op_Equality_8e9a3c(uVar7,uVar8,0);
    if ((uVar2 & 1) == 0) {
      if (((*(byte *)(_UICamera_TypeInfo_12d6410 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
        native_sub_4327ec();
      }
      iVar1 = native_UICamera__get_currentScheme_c92518();
      if (iVar1 != 2) {
        if (((*(byte *)(_UICamera_TypeInfo_12d6410 + 0x133) >> 2 & 1) != 0) &&
           (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
          native_sub_4327ec();
        }
        lVar6 = *(long *)(*(long *)(_UICamera_TypeInfo_12d6410 + 0xb8) + 0xe0);
        if (lVar6 == 0) goto LAB_00c9fa5c;
        if (*(int *)(lVar6 + 0x70) != 0) {
          if (((*(byte *)(_UICamera_TypeInfo_12d6410 + 0x133) >> 2 & 1) != 0) &&
             (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
            native_sub_4327ec();
            lVar6 = *(long *)(*(long *)(_UICamera_TypeInfo_12d6410 + 0xb8) + 0xe0);
            if (lVar6 == 0) goto LAB_00c9fa5c;
          }
          fVar9 = (float)native_UnityEngine_Vector2__get_sqrMagnitude_775674(lVar6 + 0x2c,0);
          if (fVar9 < param_1) goto LAB_00c9f5d0;
        }
      }
      if (((*(byte *)(_UICamera_TypeInfo_12d6410 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
        native_sub_4327ec();
      }
      lVar6 = *(long *)(_UICamera_TypeInfo_12d6410 + 0xb8);
      if (*(long *)(lVar6 + 0xe0) == 0) goto LAB_00c9fa5c;
      if (*(char *)(*(long *)(lVar6 + 0xe0) + 0x76) != '\0') {
        if (((*(byte *)(_UICamera_TypeInfo_12d6410 + 0x133) >> 2 & 1) != 0) &&
           (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
          native_sub_4327ec();
          lVar6 = *(long *)(_UICamera_TypeInfo_12d6410 + 0xb8);
        }
        lVar5 = *(long *)(lVar6 + 0x158);
        if (lVar5 != 0) {
          if (((*(byte *)(_UICamera_TypeInfo_12d6410 + 0x133) >> 2 & 1) != 0) &&
             (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
            native_sub_4327ec();
            lVar6 = *(long *)(_UICamera_TypeInfo_12d6410 + 0xb8);
            lVar5 = *(long *)(lVar6 + 0x158);
          }
          lVar6 = *(long *)(lVar6 + 0xe0);
          if ((lVar6 == 0) || (lVar5 == 0)) goto LAB_00c9fa5c;
          native_UICamera_ObjectDelegate__Invoke_552838
                    (lVar5,*(undefined8 *)(lVar6 + 0x48),*(undefined8 *)(lVar6 + 0x58),0);
        }
        if (((*(byte *)(_UICamera_TypeInfo_12d6410 + 0x133) >> 2 & 1) != 0) &&
           (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
          native_sub_4327ec();
        }
        lVar6 = *(long *)(*(long *)(_UICamera_TypeInfo_12d6410 + 0xb8) + 0xe0);
        if (lVar6 == 0) goto LAB_00c9fa5c;
        native_UICamera__Notify_c96a08
                  (*(undefined8 *)(lVar6 + 0x48),_StringLiteral_OnDrop_12f0230,
                   *(undefined8 *)(lVar6 + 0x58));
      }
    }
    else {
LAB_00c9f5d0:
      if (((*(byte *)(_UICamera_TypeInfo_12d6410 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
        native_sub_4327ec();
      }
      lVar6 = *(long *)(*(long *)(_UICamera_TypeInfo_12d6410 + 0xb8) + 0xe0);
      if (lVar6 == 0) goto LAB_00c9fa5c;
      if (*(int *)(lVar6 + 0x70) != 0) {
        if (((*(byte *)(_UICamera_TypeInfo_12d6410 + 0x133) >> 2 & 1) != 0) &&
           (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
          native_sub_4327ec();
          lVar6 = *(long *)(*(long *)(_UICamera_TypeInfo_12d6410 + 0xb8) + 0xe0);
          if (lVar6 == 0) goto LAB_00c9fa5c;
        }
        uVar7 = *(undefined8 *)(lVar6 + 0x48);
        uVar8 = *(undefined8 *)(lVar6 + 0x50);
        if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
           (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
          native_sub_4327ec();
        }
        uVar2 = native_UnityEngine_Object__op_Equality_8e9a3c(uVar8,uVar7,0);
        if ((uVar2 & 1) != 0) {
          if (((*(byte *)(_UICamera_TypeInfo_12d6410 + 0x133) >> 2 & 1) != 0) &&
             (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
            native_sub_4327ec();
          }
          native_UICamera__ShowTooltip_c953cc(0);
          fVar9 = (float)native_RealTime__get_time_72d024(0);
          lVar5 = *(long *)(_UICamera_TypeInfo_12d6410 + 0xb8);
          lVar6 = *(long *)(lVar5 + 0x100);
          if (lVar6 != 0) {
            if (((*(byte *)(_UICamera_TypeInfo_12d6410 + 0x133) >> 2 & 1) != 0) &&
               (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
              native_sub_4327ec();
              lVar5 = *(long *)(_UICamera_TypeInfo_12d6410 + 0xb8);
              lVar6 = *(long *)(lVar5 + 0x100);
            }
            if ((*(long *)(lVar5 + 0xe0) == 0) || (lVar6 == 0)) goto LAB_00c9fa5c;
            native_UICamera_VoidDelegate__Invoke_553c80
                      (lVar6,*(undefined8 *)(*(long *)(lVar5 + 0xe0) + 0x50),0);
          }
          if (((*(byte *)(_UICamera_TypeInfo_12d6410 + 0x133) >> 2 & 1) != 0) &&
             (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
            native_sub_4327ec();
          }
          lVar6 = *(long *)(*(long *)(_UICamera_TypeInfo_12d6410 + 0xb8) + 0xe0);
          if (lVar6 == 0) goto LAB_00c9fa5c;
          native_UICamera__Notify_c96a08
                    (*(undefined8 *)(lVar6 + 0x50),_StringLiteral_OnClick_12f01f0,0);
          lVar6 = *(long *)(*(long *)(_UICamera_TypeInfo_12d6410 + 0xb8) + 0xe0);
          if (lVar6 == 0) goto LAB_00c9fa5c;
          if (fVar9 < *(float *)(lVar6 + 0x6c) + 0.35) {
            if (((*(byte *)(_UICamera_TypeInfo_12d6410 + 0x133) >> 2 & 1) != 0) &&
               (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
              native_sub_4327ec();
              lVar6 = *(long *)(*(long *)(_UICamera_TypeInfo_12d6410 + 0xb8) + 0xe0);
              if (lVar6 == 0) goto LAB_00c9fa5c;
            }
            uVar7 = *(undefined8 *)(lVar6 + 0x60);
            uVar8 = *(undefined8 *)(lVar6 + 0x50);
            if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
               (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
              native_sub_4327ec();
            }
            uVar2 = native_UnityEngine_Object__op_Equality_8e9a3c(uVar7,uVar8,0);
            if ((uVar2 & 1) != 0) {
              if (((*(byte *)(_UICamera_TypeInfo_12d6410 + 0x133) >> 2 & 1) != 0) &&
                 (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
                native_sub_4327ec();
              }
              lVar5 = *(long *)(_UICamera_TypeInfo_12d6410 + 0xb8);
              lVar6 = *(long *)(lVar5 + 0x108);
              if (lVar6 != 0) {
                if (((*(byte *)(_UICamera_TypeInfo_12d6410 + 0x133) >> 2 & 1) != 0) &&
                   (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
                  native_sub_4327ec();
                  lVar5 = *(long *)(_UICamera_TypeInfo_12d6410 + 0xb8);
                  lVar6 = *(long *)(lVar5 + 0x108);
                }
                if ((*(long *)(lVar5 + 0xe0) == 0) || (lVar6 == 0)) goto LAB_00c9fa5c;
                native_UICamera_VoidDelegate__Invoke_553c80
                          (lVar6,*(undefined8 *)(*(long *)(lVar5 + 0xe0) + 0x50),0);
              }
              if (((*(byte *)(_UICamera_TypeInfo_12d6410 + 0x133) >> 2 & 1) != 0) &&
                 (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
                native_sub_4327ec();
              }
              lVar6 = *(long *)(*(long *)(_UICamera_TypeInfo_12d6410 + 0xb8) + 0xe0);
              if (lVar6 == 0) goto LAB_00c9fa5c;
              native_UICamera__Notify_c96a08
                        (*(undefined8 *)(lVar6 + 0x50),_StringLiteral_OnDoubleClick_12f0200,0);
            }
          }
          if (((*(byte *)(_UICamera_TypeInfo_12d6410 + 0x133) >> 2 & 1) != 0) &&
             (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
            native_sub_4327ec();
          }
          lVar6 = *(long *)(*(long *)(_UICamera_TypeInfo_12d6410 + 0xb8) + 0xe0);
          if (lVar6 == 0) goto LAB_00c9fa5c;
          *(undefined8 *)(lVar6 + 0x60) = *(undefined8 *)(lVar6 + 0x50);
          native_sub_4326e0(lVar6 + 0x60);
          lVar6 = *(long *)(*(long *)(_UICamera_TypeInfo_12d6410 + 0xb8) + 0xe0);
          if (lVar6 == 0) goto LAB_00c9fa5c;
          *(float *)(lVar6 + 0x6c) = fVar9;
        }
      }
    }
  }
  if (((*(byte *)(_UICamera_TypeInfo_12d6410 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  lVar6 = _UICamera_TypeInfo_12d6410;
  lVar5 = *(long *)(*(long *)(_UICamera_TypeInfo_12d6410 + 0xb8) + 0xe0);
  if (lVar5 != 0) {
    *(undefined1 *)(lVar5 + 0x76) = 0;
    lVar6 = *(long *)(*(long *)(lVar6 + 0xb8) + 0xe0);
    if (lVar6 != 0) {
      puVar3 = (undefined8 *)(lVar6 + 0x50);
      *puVar3 = 0;
      native_sub_4326e0(puVar3,0);
      lVar6 = *(long *)(*(long *)(_UICamera_TypeInfo_12d6410 + 0xb8) + 0xe0);
      if (lVar6 != 0) {
        puVar3 = (undefined8 *)(lVar6 + 0x58);
        *puVar3 = 0;
        native_sub_4326e0(puVar3,0);
        return;
      }
    }
  }
LAB_00c9fa5c:
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* UICamera$$HasCollider @ 0xc9fa60
 * bool UICamera__HasCollider (UICamera_o* __this, UnityEngine_GameObject_o* go, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UICamera$$HasCollider
   bool UICamera__HasCollider (UICamera_o* __this, UnityEngine_GameObject_o* go, const MethodInfo*
   method); */

undefined8 native_UICamera__HasCollider_c9fa60(undefined8 param_1,long param_2)

{
  ulong uVar1;
  long lVar2;
  undefined8 uVar3;
  
  if ((bRam00000000013428ea & 1) == 0) {
    native_sub_43273c(&Method_UnityEngine_GameObject_GetComponent_Collider2D____12e4980);
    native_sub_43273c(&Method_UnityEngine_GameObject_GetComponent_Collider____12e4978);
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    bRam00000000013428ea = 1;
  }
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar1 = native_UnityEngine_Object__op_Equality_8e9a3c(param_2,0,0);
  if ((uVar1 & 1) != 0) {
    return 0;
  }
  if (param_2 != 0) {
    lVar2 = native_UnityEngine_GameObject__GetComponent_BE2_BlockSectionHeader_Custom__4a2214
                      (param_2,_Method_UnityEngine_GameObject_GetComponent_Collider____12e4978);
    if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
      native_sub_4327ec(_UnityEngine_Object_TypeInfo_12d54e0);
    }
    uVar1 = native_UnityEngine_Object__op_Inequality_8d76fc(lVar2,0,0);
    if ((uVar1 & 1) == 0) {
      lVar2 = native_UnityEngine_GameObject__GetComponent_BE2_BlockSectionHeader_Custom__4a2214
                        (param_2,_Method_UnityEngine_GameObject_GetComponent_Collider2D____12e4980);
      if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
        native_sub_4327ec(_UnityEngine_Object_TypeInfo_12d54e0);
      }
      uVar1 = native_UnityEngine_Object__op_Inequality_8d76fc(lVar2,0,0);
      if ((uVar1 & 1) == 0) {
        return 0;
      }
      if (lVar2 != 0) {
        if (pcRam0000000001340940 == (code *)0x0) {
          pcRam0000000001340940 = (code *)native_sub_4326f0(&UNK_00e2c6dd);
        }
                    /* WARNING: Could not recover jumptable at 0x008d7b08. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar3 = (*pcRam0000000001340940)(lVar2);
        return uVar3;
      }
    }
    else if (lVar2 != 0) {
      if (pcRam0000000001343a68 == (code *)0x0) {
        pcRam0000000001343a68 = (code *)native_sub_4326f0(&UNK_00ecb640);
      }
                    /* WARNING: Could not recover jumptable at 0x00dbac48. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar3 = (*pcRam0000000001343a68)(lVar2);
      return uVar3;
    }
  }
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* UICamera$$ProcessTouch @ 0xc9d7c0
 * void UICamera__ProcessTouch (UICamera_o* __this, bool pressed, bool released, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UICamera$$ProcessTouch
   void UICamera__ProcessTouch (UICamera_o* __this, bool pressed, bool released, const MethodInfo*
   method); */

void native_UICamera__ProcessTouch_c9d7c0(long param_1,uint param_2,ulong param_3)

{
  int iVar1;
  ulong uVar2;
  undefined8 *puVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  float fVar9;
  float fVar10;
  undefined1 auStack_48 [4];
  undefined1 auStack_44 [4];
  
  if ((bRam00000000013428eb & 1) == 0) {
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    native_sub_43273c(&UICamera_TypeInfo_12d6410);
    native_sub_43273c(&StringLiteral_OnLongPress_12f0250);
    bRam00000000013428eb = 1;
  }
  lVar5 = _UICamera_TypeInfo_12d6410;
  if ((param_3 & 1) != 0) {
    if (((*(byte *)(_UICamera_TypeInfo_12d6410 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    lVar5 = _UICamera_TypeInfo_12d6410;
    *(undefined4 *)(*(long *)(_UICamera_TypeInfo_12d6410 + 0xb8) + 0x1b8) = 0;
  }
  if (((*(byte *)(lVar5 + 0x133) >> 2 & 1) != 0) && (*(int *)(lVar5 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  iVar1 = native_UICamera__get_currentScheme_c92518();
  lVar5 = 0x38;
  if (iVar1 != 0) {
    lVar5 = 0x40;
  }
  lVar6 = 0x3c;
  if (iVar1 != 0) {
    lVar6 = 0x44;
  }
  fVar10 = *(float *)(param_1 + lVar6);
  fVar9 = *(float *)(param_1 + lVar5);
  if (((*(byte *)(_UICamera_TypeInfo_12d6410 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  lVar5 = *(long *)(*(long *)(_UICamera_TypeInfo_12d6410 + 0xb8) + 0xe0);
  if (lVar5 == 0) goto LAB_00c9db54;
  uVar8 = *(undefined8 *)(lVar5 + 0x50);
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  fVar9 = fVar9 * fVar9;
  fVar10 = fVar10 * fVar10;
  uVar2 = native_UnityEngine_Object__op_Inequality_8d76fc(uVar8,0,0);
  if ((uVar2 & 1) != 0) {
    if ((param_3 & 1) != 0) {
      native_UICamera__ProcessRelease_c9f074(fVar9,param_1,iVar1 == 0);
    }
    native_UICamera__ProcessPress_c9ded8(fVar10,fVar9,param_1,param_2 & 1);
    if (*(float *)(param_1 + 0x30) == 0.0) {
      return;
    }
    if (((*(byte *)(_UICamera_TypeInfo_12d6410 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    lVar5 = *(long *)(*(long *)(_UICamera_TypeInfo_12d6410 + 0xb8) + 0xe0);
    if (lVar5 == 0) {
LAB_00c9db54:
                    /* WARNING: Subroutine does not return */
      native_sub_432810();
    }
    fVar9 = (float)native_UICamera_MouseOrTouch__get_deltaTime_5522d0(lVar5,0);
    if (fVar9 <= *(float *)(param_1 + 0x30)) {
      return;
    }
    if (((*(byte *)(_UICamera_TypeInfo_12d6410 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    lVar5 = *(long *)(*(long *)(_UICamera_TypeInfo_12d6410 + 0xb8) + 0xe0);
    if (lVar5 == 0) goto LAB_00c9db54;
    uVar8 = *(undefined8 *)(lVar5 + 0x48);
    uVar7 = *(undefined8 *)(lVar5 + 0x50);
    if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    uVar2 = native_UnityEngine_Object__op_Equality_8e9a3c(uVar7,uVar8,0);
    if ((uVar2 & 1) == 0) {
      return;
    }
    if (((*(byte *)(_UICamera_TypeInfo_12d6410 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    plVar4 = (long *)(_UICamera_TypeInfo_12d6410 + 0xb8);
    lVar5 = *plVar4;
    if (*(float *)(lVar5 + 0x1b8) == 0.0) {
      return;
    }
    if (((*(byte *)(_UICamera_TypeInfo_12d6410 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
      native_sub_4327ec();
      plVar4 = (long *)(_UICamera_TypeInfo_12d6410 + 0xb8);
      lVar5 = *plVar4;
    }
    if (*(long *)(lVar5 + 0xe0) == 0) goto LAB_00c9db54;
    if (*(char *)(*(long *)(lVar5 + 0xe0) + 0x76) != '\0') {
      return;
    }
    if (((*(byte *)(_UICamera_TypeInfo_12d6410 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
      native_sub_4327ec();
      plVar4 = (long *)(_UICamera_TypeInfo_12d6410 + 0xb8);
      lVar5 = *plVar4;
    }
    lVar6 = _UICamera_TypeInfo_12d6410;
    *(undefined4 *)(lVar5 + 0x1b8) = 0;
    if (*(long *)(*plVar4 + 0xe0) == 0) goto LAB_00c9db54;
    *(undefined4 *)(*(long *)(*plVar4 + 0xe0) + 0x70) = 0;
    if (*(char *)(param_1 + 0x34) != '\0') {
      if (((*(byte *)(lVar6 + 0x133) >> 2 & 1) != 0) && (*(int *)(lVar6 + 0xe0) == 0)) {
        native_sub_4327ec();
        plVar4 = (long *)(_UICamera_TypeInfo_12d6410 + 0xb8);
      }
      if (*(long *)(*plVar4 + 0xe0) == 0) goto LAB_00c9db54;
      native_UICamera__ShowTooltip_c953cc(*(undefined8 *)(*(long *)(*plVar4 + 0xe0) + 0x50));
      lVar6 = _UICamera_TypeInfo_12d6410;
    }
    if (((*(byte *)(lVar6 + 0x133) >> 2 & 1) != 0) && (*(int *)(lVar6 + 0xe0) == 0)) {
      native_sub_4327ec();
      lVar6 = _UICamera_TypeInfo_12d6410;
    }
    uVar8 = _StringLiteral_OnLongPress_12f0250;
    lVar5 = *(long *)(*(long *)(lVar6 + 0xb8) + 0xe0);
    if (lVar5 == 0) goto LAB_00c9db54;
    lVar5 = *(long *)(lVar5 + 0x48);
    if ((bRam00000000013428da & 1) == 0) {
      native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
      native_sub_43273c(&UICamera_TypeInfo_12d6410);
      native_sub_43273c(&UIPopupList_TypeInfo_12d6490);
      bRam00000000013428da = 1;
    }
    if (((*(byte *)(_UICamera_TypeInfo_12d6410 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    if (*(int *)(*(long *)(_UICamera_TypeInfo_12d6410 + 0xb8) + 0x264) < 0xb) {
      if (((*(byte *)(_UICamera_TypeInfo_12d6410 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
        native_sub_4327ec();
      }
      iVar1 = native_UICamera__get_currentScheme_c92518();
      if (iVar1 == 2) {
        if (((*(byte *)(_UIPopupList_TypeInfo_12d6490 + 0x133) >> 2 & 1) != 0) &&
           (*(int *)(_UIPopupList_TypeInfo_12d6490 + 0xe0) == 0)) {
          native_sub_4327ec();
        }
        uVar2 = native_UIPopupList__get_isOpen_c264f8(0);
        if ((uVar2 & 1) != 0) {
          if (((*(byte *)(_UIPopupList_TypeInfo_12d6490 + 0x133) >> 2 & 1) != 0) &&
             (*(int *)(_UIPopupList_TypeInfo_12d6490 + 0xe0) == 0)) {
            native_sub_4327ec();
          }
          if (**(long **)(_UIPopupList_TypeInfo_12d6490 + 0xb8) == 0) goto LAB_00c96d28;
          uVar7 = *(undefined8 *)(**(long **)(_UIPopupList_TypeInfo_12d6490 + 0xb8) + 0x160);
          if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
             (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
            native_sub_4327ec();
          }
          uVar2 = native_UnityEngine_Object__op_Equality_8e9a3c(uVar7,lVar5,0);
          if ((uVar2 & 1) != 0) {
            if (((*(byte *)(_UIPopupList_TypeInfo_12d6490 + 0x133) >> 2 & 1) != 0) &&
               (*(int *)(_UIPopupList_TypeInfo_12d6490 + 0xe0) == 0)) {
              native_sub_4327ec();
            }
            uVar2 = native_UIPopupList__get_isOpen_c264f8(0);
            if ((uVar2 & 1) != 0) {
              if (((*(byte *)(_UIPopupList_TypeInfo_12d6490 + 0x133) >> 2 & 1) != 0) &&
                 (*(int *)(_UIPopupList_TypeInfo_12d6490 + 0xe0) == 0)) {
                native_sub_4327ec();
              }
              if (**(long **)(_UIPopupList_TypeInfo_12d6490 + 0xb8) == 0) goto LAB_00c96d28;
              lVar5 = native_UnityEngine_Component__get_gameObject_8da66c
                                (**(long **)(_UIPopupList_TypeInfo_12d6490 + 0xb8),0);
            }
          }
        }
      }
      if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
        native_sub_4327ec();
      }
      uVar2 = native_UnityEngine_Object__op_Implicit_8e1b98(lVar5,0);
      if ((uVar2 & 1) != 0) {
        if (lVar5 == 0) {
LAB_00c96d28:
                    /* WARNING: Subroutine does not return */
          native_sub_432810();
        }
        uVar2 = native_UnityEngine_GameObject__get_activeInHierarchy_8de728(lVar5,0);
        if ((uVar2 & 1) != 0) {
          if (((*(byte *)(_UICamera_TypeInfo_12d6410 + 0x133) >> 2 & 1) != 0) &&
             (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
            native_sub_4327ec();
          }
          *(int *)(*(long *)(_UICamera_TypeInfo_12d6410 + 0xb8) + 0x264) =
               *(int *)(*(long *)(_UICamera_TypeInfo_12d6410 + 0xb8) + 0x264) + 1;
          native_UnityEngine_GameObject__SendMessage_8de4c0(lVar5,uVar8,0,1,0);
          uVar7 = *(undefined8 *)(*(long *)(_UICamera_TypeInfo_12d6410 + 0xb8) + 0xf0);
          if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
             (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
            native_sub_4327ec();
          }
          uVar2 = native_UnityEngine_Object__op_Inequality_8d76fc(uVar7,0,0);
          if ((uVar2 & 1) != 0) {
            if (((*(byte *)(_UICamera_TypeInfo_12d6410 + 0x133) >> 2 & 1) != 0) &&
               (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
              native_sub_4327ec();
            }
            uVar7 = *(undefined8 *)(*(long *)(_UICamera_TypeInfo_12d6410 + 0xb8) + 0xf0);
            if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
               (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
              native_sub_4327ec(_UnityEngine_Object_TypeInfo_12d54e0);
            }
            uVar2 = native_UnityEngine_Object__op_Inequality_8d76fc(uVar7,lVar5,0);
            if ((uVar2 & 1) != 0) {
              if (((*(byte *)(_UICamera_TypeInfo_12d6410 + 0x133) >> 2 & 1) != 0) &&
                 (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
                native_sub_4327ec();
              }
              lVar5 = *(long *)(*(long *)(_UICamera_TypeInfo_12d6410 + 0xb8) + 0xf0);
              if (lVar5 == 0) goto LAB_00c96d28;
              native_UnityEngine_GameObject__SendMessage_8de4c0(lVar5,uVar8,0,1,0);
            }
          }
          if (((*(byte *)(_UICamera_TypeInfo_12d6410 + 0x133) >> 2 & 1) != 0) &&
             (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
            native_sub_4327ec();
          }
          *(int *)(*(long *)(_UICamera_TypeInfo_12d6410 + 0xb8) + 0x264) =
               *(int *)(*(long *)(_UICamera_TypeInfo_12d6410 + 0xb8) + 0x264) + -1;
        }
      }
    }
    return;
  }
  if (((iVar1 != 0) && ((param_2 & 1) == 0)) && ((param_3 & 1) == 0)) {
    return;
  }
  native_UICamera__ProcessPress_c9ded8(fVar10,fVar9,param_1,param_2 & 1);
  if ((param_3 & 1) == 0) {
    return;
  }
  if ((bRam00000000013428e9 & 1) == 0) {
    native_sub_43273c(&bool_TypeInfo_12d3bd0);
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    native_sub_43273c(&UICamera_TypeInfo_12d6410);
    native_sub_43273c(&StringLiteral_OnDragEnd_12f0210);
    native_sub_43273c(&StringLiteral_OnClick_12f01f0);
    native_sub_43273c(&StringLiteral_OnDoubleClick_12f0200);
    native_sub_43273c(&StringLiteral_OnDrop_12f0230);
    native_sub_43273c(&StringLiteral_OnHover_12f0238);
    native_sub_43273c(&StringLiteral_OnPress_12f02b0);
    native_sub_43273c(&StringLiteral_OnDragOut_12f0218);
    bRam00000000013428e9 = 1;
  }
  if (((*(byte *)(_UICamera_TypeInfo_12d6410 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  plVar4 = (long *)(_UICamera_TypeInfo_12d6410 + 0xb8);
  lVar5 = *(long *)(*plVar4 + 0xe0);
  if (lVar5 == 0) {
    return;
  }
  if (((*(byte *)(_UICamera_TypeInfo_12d6410 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
    native_sub_4327ec();
    plVar4 = (long *)(_UICamera_TypeInfo_12d6410 + 0xb8);
    lVar5 = *(long *)(*plVar4 + 0xe0);
    if (lVar5 == 0) goto LAB_00c9fa5c;
  }
  *(undefined1 *)(lVar5 + 0x75) = 0;
  if (*(long *)(*plVar4 + 0xe0) == 0) goto LAB_00c9fa5c;
  uVar8 = *(undefined8 *)(*(long *)(*plVar4 + 0xe0) + 0x50);
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar2 = native_UnityEngine_Object__op_Inequality_8d76fc(uVar8,0,0);
  if ((uVar2 & 1) != 0) {
    if (((*(byte *)(_UICamera_TypeInfo_12d6410 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    lVar5 = *(long *)(_UICamera_TypeInfo_12d6410 + 0xb8);
    if (*(long *)(lVar5 + 0xe0) == 0) goto LAB_00c9fa5c;
    if (*(char *)(*(long *)(lVar5 + 0xe0) + 0x76) != '\0') {
      if (((*(byte *)(_UICamera_TypeInfo_12d6410 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
        native_sub_4327ec();
        lVar5 = *(long *)(_UICamera_TypeInfo_12d6410 + 0xb8);
      }
      lVar6 = *(long *)(lVar5 + 0x148);
      if (lVar6 != 0) {
        if (((*(byte *)(_UICamera_TypeInfo_12d6410 + 0x133) >> 2 & 1) != 0) &&
           (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
          native_sub_4327ec();
          lVar5 = *(long *)(_UICamera_TypeInfo_12d6410 + 0xb8);
          lVar6 = *(long *)(lVar5 + 0x148);
        }
        lVar5 = *(long *)(lVar5 + 0xe0);
        if ((lVar5 == 0) || (lVar6 == 0)) goto LAB_00c9fa5c;
        native_UICamera_ObjectDelegate__Invoke_552838
                  (lVar6,*(undefined8 *)(lVar5 + 0x40),*(undefined8 *)(lVar5 + 0x58),0);
      }
      if (((*(byte *)(_UICamera_TypeInfo_12d6410 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
        native_sub_4327ec();
      }
      lVar5 = *(long *)(*(long *)(_UICamera_TypeInfo_12d6410 + 0xb8) + 0xe0);
      if (lVar5 == 0) goto LAB_00c9fa5c;
      native_UICamera__Notify_c96a08
                (*(undefined8 *)(lVar5 + 0x40),_StringLiteral_OnDragOut_12f0218,
                 *(undefined8 *)(lVar5 + 0x58));
      lVar6 = *(long *)(_UICamera_TypeInfo_12d6410 + 0xb8);
      lVar5 = *(long *)(lVar6 + 0x150);
      if (lVar5 != 0) {
        if (((*(byte *)(_UICamera_TypeInfo_12d6410 + 0x133) >> 2 & 1) != 0) &&
           (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
          native_sub_4327ec();
          lVar6 = *(long *)(_UICamera_TypeInfo_12d6410 + 0xb8);
          lVar5 = *(long *)(lVar6 + 0x150);
        }
        if ((*(long *)(lVar6 + 0xe0) == 0) || (lVar5 == 0)) goto LAB_00c9fa5c;
        native_UICamera_VoidDelegate__Invoke_553c80
                  (lVar5,*(undefined8 *)(*(long *)(lVar6 + 0xe0) + 0x58),0);
      }
      if (((*(byte *)(_UICamera_TypeInfo_12d6410 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
        native_sub_4327ec();
      }
      lVar5 = *(long *)(*(long *)(_UICamera_TypeInfo_12d6410 + 0xb8) + 0xe0);
      if (lVar5 == 0) goto LAB_00c9fa5c;
      native_UICamera__Notify_c96a08
                (*(undefined8 *)(lVar5 + 0x58),_StringLiteral_OnDragEnd_12f0210,0);
    }
    if (((*(byte *)(_UICamera_TypeInfo_12d6410 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    lVar6 = *(long *)(_UICamera_TypeInfo_12d6410 + 0xb8);
    lVar5 = *(long *)(lVar6 + 0x118);
    if (lVar5 != 0) {
      if (((*(byte *)(_UICamera_TypeInfo_12d6410 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
        native_sub_4327ec();
        lVar6 = *(long *)(_UICamera_TypeInfo_12d6410 + 0xb8);
        lVar5 = *(long *)(lVar6 + 0x118);
      }
      if ((*(long *)(lVar6 + 0xe0) == 0) || (lVar5 == 0)) goto LAB_00c9fa5c;
      native_UICamera_BoolDelegate__Invoke_550030
                (lVar5,*(undefined8 *)(*(long *)(lVar6 + 0xe0) + 0x50),0,0);
    }
    if (((*(byte *)(_UICamera_TypeInfo_12d6410 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    lVar5 = *(long *)(*(long *)(_UICamera_TypeInfo_12d6410 + 0xb8) + 0xe0);
    if (lVar5 == 0) goto LAB_00c9fa5c;
    uVar7 = *(undefined8 *)(lVar5 + 0x50);
    auStack_44[0] = 0;
    uVar8 = native_sub_4327fc(_bool_TypeInfo_12d3bd0,auStack_44);
    native_UICamera__Notify_c96a08(uVar7,_StringLiteral_OnPress_12f02b0,uVar8);
    if (iVar1 == 0) {
      if (((*(byte *)(_UICamera_TypeInfo_12d6410 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
        native_sub_4327ec();
      }
      lVar5 = *(long *)(*(long *)(_UICamera_TypeInfo_12d6410 + 0xb8) + 0xe0);
      if (lVar5 == 0) goto LAB_00c9fa5c;
      uVar2 = native_UICamera__HasCollider_c9fa60
                        (_UICamera_TypeInfo_12d6410,*(undefined8 *)(lVar5 + 0x50));
      if ((uVar2 & 1) != 0) {
        if (((*(byte *)(_UICamera_TypeInfo_12d6410 + 0x133) >> 2 & 1) != 0) &&
           (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
          native_sub_4327ec();
        }
        lVar5 = *(long *)(*(long *)(_UICamera_TypeInfo_12d6410 + 0xb8) + 0xe0);
        if (lVar5 == 0) goto LAB_00c9fa5c;
        uVar8 = *(undefined8 *)(*(long *)(_UICamera_TypeInfo_12d6410 + 0xb8) + 0x1e0);
        uVar7 = *(undefined8 *)(lVar5 + 0x48);
        if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
           (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
          native_sub_4327ec();
        }
        uVar2 = native_UnityEngine_Object__op_Equality_8e9a3c(uVar8,uVar7,0);
        if ((uVar2 & 1) == 0) {
          if (((*(ushort *)(_UICamera_TypeInfo_12d6410 + 0x132) >> 10 & 1) != 0) &&
             (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
            native_sub_4327ec(_UICamera_TypeInfo_12d6410);
          }
          lVar5 = *(long *)(*(long *)(_UICamera_TypeInfo_12d6410 + 0xb8) + 0xe0);
          if (lVar5 == 0) goto LAB_00c9fa5c;
          native_UICamera__set_hoveredObject_c9622c(*(undefined8 *)(lVar5 + 0x48));
        }
        else {
          if (((*(ushort *)(_UICamera_TypeInfo_12d6410 + 0x132) >> 10 & 1) != 0) &&
             (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
            native_sub_4327ec(_UICamera_TypeInfo_12d6410);
          }
          lVar6 = *(long *)(_UICamera_TypeInfo_12d6410 + 0xb8);
          lVar5 = *(long *)(lVar6 + 0x110);
          if (lVar5 != 0) {
            if (((*(byte *)(_UICamera_TypeInfo_12d6410 + 0x133) >> 2 & 1) != 0) &&
               (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
              native_sub_4327ec(_UICamera_TypeInfo_12d6410);
              lVar6 = *(long *)(_UICamera_TypeInfo_12d6410 + 0xb8);
              lVar5 = *(long *)(lVar6 + 0x110);
            }
            if ((*(long *)(lVar6 + 0xe0) == 0) || (lVar5 == 0)) goto LAB_00c9fa5c;
            native_UICamera_BoolDelegate__Invoke_550030
                      (lVar5,*(undefined8 *)(*(long *)(lVar6 + 0xe0) + 0x48),1,0);
          }
          if (((*(byte *)(_UICamera_TypeInfo_12d6410 + 0x133) >> 2 & 1) != 0) &&
             (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
            native_sub_4327ec(_UICamera_TypeInfo_12d6410);
          }
          lVar5 = *(long *)(*(long *)(_UICamera_TypeInfo_12d6410 + 0xb8) + 0xe0);
          if (lVar5 == 0) goto LAB_00c9fa5c;
          uVar7 = *(undefined8 *)(lVar5 + 0x48);
          auStack_48[0] = 1;
          uVar8 = native_sub_4327fc(_bool_TypeInfo_12d3bd0,auStack_48);
          native_UICamera__Notify_c96a08(uVar7,_StringLiteral_OnHover_12f0238,uVar8);
        }
      }
    }
    if (((*(byte *)(_UICamera_TypeInfo_12d6410 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    lVar5 = *(long *)(*(long *)(_UICamera_TypeInfo_12d6410 + 0xb8) + 0xe0);
    if (lVar5 == 0) goto LAB_00c9fa5c;
    uVar8 = *(undefined8 *)(lVar5 + 0x58);
    uVar7 = *(undefined8 *)(lVar5 + 0x48);
    if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    uVar2 = native_UnityEngine_Object__op_Equality_8e9a3c(uVar8,uVar7,0);
    if ((uVar2 & 1) == 0) {
      if (((*(byte *)(_UICamera_TypeInfo_12d6410 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
        native_sub_4327ec();
      }
      iVar1 = native_UICamera__get_currentScheme_c92518();
      if (iVar1 != 2) {
        if (((*(byte *)(_UICamera_TypeInfo_12d6410 + 0x133) >> 2 & 1) != 0) &&
           (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
          native_sub_4327ec();
        }
        lVar5 = *(long *)(*(long *)(_UICamera_TypeInfo_12d6410 + 0xb8) + 0xe0);
        if (lVar5 == 0) goto LAB_00c9fa5c;
        if (*(int *)(lVar5 + 0x70) != 0) {
          if (((*(byte *)(_UICamera_TypeInfo_12d6410 + 0x133) >> 2 & 1) != 0) &&
             (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
            native_sub_4327ec();
            lVar5 = *(long *)(*(long *)(_UICamera_TypeInfo_12d6410 + 0xb8) + 0xe0);
            if (lVar5 == 0) goto LAB_00c9fa5c;
          }
          fVar10 = (float)native_UnityEngine_Vector2__get_sqrMagnitude_775674(lVar5 + 0x2c,0);
          if (fVar10 < fVar9) goto LAB_00c9f5d0;
        }
      }
      if (((*(byte *)(_UICamera_TypeInfo_12d6410 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
        native_sub_4327ec();
      }
      lVar5 = *(long *)(_UICamera_TypeInfo_12d6410 + 0xb8);
      if (*(long *)(lVar5 + 0xe0) == 0) goto LAB_00c9fa5c;
      if (*(char *)(*(long *)(lVar5 + 0xe0) + 0x76) != '\0') {
        if (((*(byte *)(_UICamera_TypeInfo_12d6410 + 0x133) >> 2 & 1) != 0) &&
           (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
          native_sub_4327ec();
          lVar5 = *(long *)(_UICamera_TypeInfo_12d6410 + 0xb8);
        }
        lVar6 = *(long *)(lVar5 + 0x158);
        if (lVar6 != 0) {
          if (((*(byte *)(_UICamera_TypeInfo_12d6410 + 0x133) >> 2 & 1) != 0) &&
             (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
            native_sub_4327ec();
            lVar5 = *(long *)(_UICamera_TypeInfo_12d6410 + 0xb8);
            lVar6 = *(long *)(lVar5 + 0x158);
          }
          lVar5 = *(long *)(lVar5 + 0xe0);
          if ((lVar5 == 0) || (lVar6 == 0)) goto LAB_00c9fa5c;
          native_UICamera_ObjectDelegate__Invoke_552838
                    (lVar6,*(undefined8 *)(lVar5 + 0x48),*(undefined8 *)(lVar5 + 0x58),0);
        }
        if (((*(byte *)(_UICamera_TypeInfo_12d6410 + 0x133) >> 2 & 1) != 0) &&
           (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
          native_sub_4327ec();
        }
        lVar5 = *(long *)(*(long *)(_UICamera_TypeInfo_12d6410 + 0xb8) + 0xe0);
        if (lVar5 == 0) goto LAB_00c9fa5c;
        native_UICamera__Notify_c96a08
                  (*(undefined8 *)(lVar5 + 0x48),_StringLiteral_OnDrop_12f0230,
                   *(undefined8 *)(lVar5 + 0x58));
      }
    }
    else {
LAB_00c9f5d0:
      if (((*(byte *)(_UICamera_TypeInfo_12d6410 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
        native_sub_4327ec();
      }
      lVar5 = *(long *)(*(long *)(_UICamera_TypeInfo_12d6410 + 0xb8) + 0xe0);
      if (lVar5 == 0) goto LAB_00c9fa5c;
      if (*(int *)(lVar5 + 0x70) != 0) {
        if (((*(byte *)(_UICamera_TypeInfo_12d6410 + 0x133) >> 2 & 1) != 0) &&
           (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
          native_sub_4327ec();
          lVar5 = *(long *)(*(long *)(_UICamera_TypeInfo_12d6410 + 0xb8) + 0xe0);
          if (lVar5 == 0) goto LAB_00c9fa5c;
        }
        uVar8 = *(undefined8 *)(lVar5 + 0x48);
        uVar7 = *(undefined8 *)(lVar5 + 0x50);
        if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
           (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
          native_sub_4327ec();
        }
        uVar2 = native_UnityEngine_Object__op_Equality_8e9a3c(uVar7,uVar8,0);
        if ((uVar2 & 1) != 0) {
          if (((*(byte *)(_UICamera_TypeInfo_12d6410 + 0x133) >> 2 & 1) != 0) &&
             (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
            native_sub_4327ec();
          }
          native_UICamera__ShowTooltip_c953cc(0);
          fVar9 = (float)native_RealTime__get_time_72d024(0);
          lVar6 = *(long *)(_UICamera_TypeInfo_12d6410 + 0xb8);
          lVar5 = *(long *)(lVar6 + 0x100);
          if (lVar5 != 0) {
            if (((*(byte *)(_UICamera_TypeInfo_12d6410 + 0x133) >> 2 & 1) != 0) &&
               (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
              native_sub_4327ec();
              lVar6 = *(long *)(_UICamera_TypeInfo_12d6410 + 0xb8);
              lVar5 = *(long *)(lVar6 + 0x100);
            }
            if ((*(long *)(lVar6 + 0xe0) == 0) || (lVar5 == 0)) goto LAB_00c9fa5c;
            native_UICamera_VoidDelegate__Invoke_553c80
                      (lVar5,*(undefined8 *)(*(long *)(lVar6 + 0xe0) + 0x50),0);
          }
          if (((*(byte *)(_UICamera_TypeInfo_12d6410 + 0x133) >> 2 & 1) != 0) &&
             (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
            native_sub_4327ec();
          }
          lVar5 = *(long *)(*(long *)(_UICamera_TypeInfo_12d6410 + 0xb8) + 0xe0);
          if (lVar5 == 0) goto LAB_00c9fa5c;
          native_UICamera__Notify_c96a08
                    (*(undefined8 *)(lVar5 + 0x50),_StringLiteral_OnClick_12f01f0,0);
          lVar5 = *(long *)(*(long *)(_UICamera_TypeInfo_12d6410 + 0xb8) + 0xe0);
          if (lVar5 == 0) goto LAB_00c9fa5c;
          if (fVar9 < *(float *)(lVar5 + 0x6c) + 0.35) {
            if (((*(byte *)(_UICamera_TypeInfo_12d6410 + 0x133) >> 2 & 1) != 0) &&
               (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
              native_sub_4327ec();
              lVar5 = *(long *)(*(long *)(_UICamera_TypeInfo_12d6410 + 0xb8) + 0xe0);
              if (lVar5 == 0) goto LAB_00c9fa5c;
            }
            uVar8 = *(undefined8 *)(lVar5 + 0x60);
            uVar7 = *(undefined8 *)(lVar5 + 0x50);
            if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
               (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
              native_sub_4327ec();
            }
            uVar2 = native_UnityEngine_Object__op_Equality_8e9a3c(uVar8,uVar7,0);
            if ((uVar2 & 1) != 0) {
              if (((*(byte *)(_UICamera_TypeInfo_12d6410 + 0x133) >> 2 & 1) != 0) &&
                 (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
                native_sub_4327ec();
              }
              lVar6 = *(long *)(_UICamera_TypeInfo_12d6410 + 0xb8);
              lVar5 = *(long *)(lVar6 + 0x108);
              if (lVar5 != 0) {
                if (((*(byte *)(_UICamera_TypeInfo_12d6410 + 0x133) >> 2 & 1) != 0) &&
                   (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
                  native_sub_4327ec();
                  lVar6 = *(long *)(_UICamera_TypeInfo_12d6410 + 0xb8);
                  lVar5 = *(long *)(lVar6 + 0x108);
                }
                if ((*(long *)(lVar6 + 0xe0) == 0) || (lVar5 == 0)) goto LAB_00c9fa5c;
                native_UICamera_VoidDelegate__Invoke_553c80
                          (lVar5,*(undefined8 *)(*(long *)(lVar6 + 0xe0) + 0x50),0);
              }
              if (((*(byte *)(_UICamera_TypeInfo_12d6410 + 0x133) >> 2 & 1) != 0) &&
                 (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
                native_sub_4327ec();
              }
              lVar5 = *(long *)(*(long *)(_UICamera_TypeInfo_12d6410 + 0xb8) + 0xe0);
              if (lVar5 == 0) goto LAB_00c9fa5c;
              native_UICamera__Notify_c96a08
                        (*(undefined8 *)(lVar5 + 0x50),_StringLiteral_OnDoubleClick_12f0200,0);
            }
          }
          if (((*(byte *)(_UICamera_TypeInfo_12d6410 + 0x133) >> 2 & 1) != 0) &&
             (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
            native_sub_4327ec();
          }
          lVar5 = *(long *)(*(long *)(_UICamera_TypeInfo_12d6410 + 0xb8) + 0xe0);
          if (lVar5 == 0) goto LAB_00c9fa5c;
          *(undefined8 *)(lVar5 + 0x60) = *(undefined8 *)(lVar5 + 0x50);
          native_sub_4326e0(lVar5 + 0x60);
          lVar5 = *(long *)(*(long *)(_UICamera_TypeInfo_12d6410 + 0xb8) + 0xe0);
          if (lVar5 == 0) goto LAB_00c9fa5c;
          *(float *)(lVar5 + 0x6c) = fVar9;
        }
      }
    }
  }
  if (((*(byte *)(_UICamera_TypeInfo_12d6410 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  lVar5 = _UICamera_TypeInfo_12d6410;
  lVar6 = *(long *)(*(long *)(_UICamera_TypeInfo_12d6410 + 0xb8) + 0xe0);
  if (lVar6 != 0) {
    *(undefined1 *)(lVar6 + 0x76) = 0;
    lVar5 = *(long *)(*(long *)(lVar5 + 0xb8) + 0xe0);
    if (lVar5 != 0) {
      puVar3 = (undefined8 *)(lVar5 + 0x50);
      *puVar3 = 0;
      native_sub_4326e0(puVar3,0);
      lVar5 = *(long *)(*(long *)(_UICamera_TypeInfo_12d6410 + 0xb8) + 0xe0);
      if (lVar5 != 0) {
        puVar3 = (undefined8 *)(lVar5 + 0x58);
        *puVar3 = 0;
        native_sub_4326e0(puVar3,0);
        return;
      }
    }
  }
LAB_00c9fa5c:
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* UICamera$$CancelNextTooltip @ 0xc9fbc4
 * void UICamera__CancelNextTooltip (const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UICamera$$CancelNextTooltip
   void UICamera__CancelNextTooltip (const MethodInfo* method); */

void native_UICamera__CancelNextTooltip_c9fbc4(void)

{
  if ((bRam00000000013428ec & 1) == 0) {
    native_sub_43273c(&UICamera_TypeInfo_12d6410);
    bRam00000000013428ec = 1;
  }
  if (((*(byte *)(_UICamera_TypeInfo_12d6410 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  *(undefined4 *)(*(long *)(_UICamera_TypeInfo_12d6410 + 0xb8) + 0x1b8) = 0;
  return;
}



/* UICamera$$ShowTooltip @ 0xc953cc
 * bool UICamera__ShowTooltip (UnityEngine_GameObject_o* go, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UICamera$$ShowTooltip
   bool UICamera__ShowTooltip (UnityEngine_GameObject_o* go, const MethodInfo* method); */

undefined4 native_UICamera__ShowTooltip_c953cc(undefined8 param_1)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined1 auStack_38 [4];
  undefined1 auStack_34 [4];
  
  if ((bRam00000000013428ed & 1) == 0) {
    native_sub_43273c(&bool_TypeInfo_12d3bd0);
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    native_sub_43273c(&UICamera_TypeInfo_12d6410);
    native_sub_43273c(&StringLiteral_OnTooltip_12f02d8);
    bRam00000000013428ed = 1;
  }
  if (((*(byte *)(_UICamera_TypeInfo_12d6410 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar5 = *(undefined8 *)(*(long *)(_UICamera_TypeInfo_12d6410 + 0xb8) + 0x1b0);
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec(_UnityEngine_Object_TypeInfo_12d54e0);
  }
  uVar1 = native_UnityEngine_Object__op_Inequality_8d76fc(uVar5,param_1,0);
  if ((uVar1 & 1) == 0) {
    uVar4 = 0;
  }
  else {
    if (((*(byte *)(_UICamera_TypeInfo_12d6410 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    uVar5 = *(undefined8 *)(*(long *)(_UICamera_TypeInfo_12d6410 + 0xb8) + 0x1b0);
    if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
      native_sub_4327ec(_UnityEngine_Object_TypeInfo_12d54e0);
    }
    uVar1 = native_UnityEngine_Object__op_Inequality_8d76fc(uVar5,0,0);
    if ((uVar1 & 1) != 0) {
      if (((*(byte *)(_UICamera_TypeInfo_12d6410 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
        native_sub_4327ec();
      }
      lVar3 = *(long *)(_UICamera_TypeInfo_12d6410 + 0xb8);
      lVar2 = *(long *)(lVar3 + 0x178);
      if (lVar2 != 0) {
        if (((*(byte *)(_UICamera_TypeInfo_12d6410 + 0x133) >> 2 & 1) != 0) &&
           (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
          native_sub_4327ec();
          lVar3 = *(long *)(_UICamera_TypeInfo_12d6410 + 0xb8);
          lVar2 = *(long *)(lVar3 + 0x178);
          if (lVar2 == 0) goto LAB_00c956e4;
        }
        native_UICamera_BoolDelegate__Invoke_550030(lVar2,*(undefined8 *)(lVar3 + 0x1b0),0,0);
      }
      if (((*(byte *)(_UICamera_TypeInfo_12d6410 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
        native_sub_4327ec();
      }
      uVar6 = *(undefined8 *)(*(long *)(_UICamera_TypeInfo_12d6410 + 0xb8) + 0x1b0);
      auStack_34[0] = 0;
      uVar5 = native_sub_4327fc(_bool_TypeInfo_12d3bd0,auStack_34);
      native_UICamera__Notify_c96a08(uVar6,_StringLiteral_OnTooltip_12f02d8,uVar5);
    }
    if (((*(byte *)(_UICamera_TypeInfo_12d6410 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    lVar2 = *(long *)(_UICamera_TypeInfo_12d6410 + 0xb8);
    *(undefined8 *)(lVar2 + 0x1b0) = param_1;
    native_sub_4326e0(lVar2 + 0x1b0,param_1);
    lVar2 = _UICamera_TypeInfo_12d6410;
    *(undefined4 *)(*(long *)(_UICamera_TypeInfo_12d6410 + 0xb8) + 0x1b8) = 0;
    uVar5 = *(undefined8 *)(*(long *)(lVar2 + 0xb8) + 0x1b0);
    if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    uVar1 = native_UnityEngine_Object__op_Inequality_8d76fc(uVar5,0,0);
    if ((uVar1 & 1) == 0) {
      uVar4 = 1;
    }
    else {
      if (((*(byte *)(_UICamera_TypeInfo_12d6410 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
        native_sub_4327ec();
      }
      lVar3 = *(long *)(_UICamera_TypeInfo_12d6410 + 0xb8);
      lVar2 = *(long *)(lVar3 + 0x178);
      if (lVar2 != 0) {
        if (((*(byte *)(_UICamera_TypeInfo_12d6410 + 0x133) >> 2 & 1) != 0) &&
           (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
          native_sub_4327ec();
          lVar3 = *(long *)(_UICamera_TypeInfo_12d6410 + 0xb8);
          lVar2 = *(long *)(lVar3 + 0x178);
          if (lVar2 == 0) {
LAB_00c956e4:
                    /* WARNING: Subroutine does not return */
            native_sub_432810();
          }
        }
        native_UICamera_BoolDelegate__Invoke_550030(lVar2,*(undefined8 *)(lVar3 + 0x1b0),1,0);
      }
      if (((*(byte *)(_UICamera_TypeInfo_12d6410 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
        native_sub_4327ec();
      }
      uVar4 = 1;
      uVar6 = *(undefined8 *)(*(long *)(_UICamera_TypeInfo_12d6410 + 0xb8) + 0x1b0);
      auStack_38[0] = 1;
      uVar5 = native_sub_4327fc(_bool_TypeInfo_12d3bd0,auStack_38);
      native_UICamera__Notify_c96a08(uVar6,_StringLiteral_OnTooltip_12f02d8,uVar5);
    }
  }
  return uVar4;
}



/* UICamera$$HideTooltip @ 0xc94b1c
 * bool UICamera__HideTooltip (const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UICamera$$HideTooltip
   bool UICamera__HideTooltip (const MethodInfo* method); */

undefined4 native_UICamera__HideTooltip_c94b1c(void)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined1 auStack_38 [4];
  undefined1 auStack_34 [4];
  
  if ((bRam00000000013428ee & 1) == 0) {
    native_sub_43273c(&UICamera_TypeInfo_12d6410);
    bRam00000000013428ee = 1;
  }
  if (((*(byte *)(_UICamera_TypeInfo_12d6410 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  if ((bRam00000000013428ed & 1) == 0) {
    native_sub_43273c(&bool_TypeInfo_12d3bd0);
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    native_sub_43273c(&UICamera_TypeInfo_12d6410);
    native_sub_43273c(&StringLiteral_OnTooltip_12f02d8);
    bRam00000000013428ed = 1;
  }
  if (((*(byte *)(_UICamera_TypeInfo_12d6410 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar5 = *(undefined8 *)(*(long *)(_UICamera_TypeInfo_12d6410 + 0xb8) + 0x1b0);
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec(_UnityEngine_Object_TypeInfo_12d54e0);
  }
  uVar1 = native_UnityEngine_Object__op_Inequality_8d76fc(uVar5,0,0);
  if ((uVar1 & 1) == 0) {
    uVar4 = 0;
  }
  else {
    if (((*(byte *)(_UICamera_TypeInfo_12d6410 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    uVar5 = *(undefined8 *)(*(long *)(_UICamera_TypeInfo_12d6410 + 0xb8) + 0x1b0);
    if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
      native_sub_4327ec(_UnityEngine_Object_TypeInfo_12d54e0);
    }
    uVar1 = native_UnityEngine_Object__op_Inequality_8d76fc(uVar5,0,0);
    if ((uVar1 & 1) != 0) {
      if (((*(byte *)(_UICamera_TypeInfo_12d6410 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
        native_sub_4327ec();
      }
      lVar3 = *(long *)(_UICamera_TypeInfo_12d6410 + 0xb8);
      lVar2 = *(long *)(lVar3 + 0x178);
      if (lVar2 != 0) {
        if (((*(byte *)(_UICamera_TypeInfo_12d6410 + 0x133) >> 2 & 1) != 0) &&
           (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
          native_sub_4327ec();
          lVar3 = *(long *)(_UICamera_TypeInfo_12d6410 + 0xb8);
          lVar2 = *(long *)(lVar3 + 0x178);
          if (lVar2 == 0) goto LAB_00c956e4;
        }
        native_UICamera_BoolDelegate__Invoke_550030(lVar2,*(undefined8 *)(lVar3 + 0x1b0),0,0);
      }
      if (((*(byte *)(_UICamera_TypeInfo_12d6410 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
        native_sub_4327ec();
      }
      uVar6 = *(undefined8 *)(*(long *)(_UICamera_TypeInfo_12d6410 + 0xb8) + 0x1b0);
      auStack_34[0] = 0;
      uVar5 = native_sub_4327fc(_bool_TypeInfo_12d3bd0,auStack_34);
      native_UICamera__Notify_c96a08(uVar6,_StringLiteral_OnTooltip_12f02d8,uVar5);
    }
    if (((*(byte *)(_UICamera_TypeInfo_12d6410 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    lVar2 = *(long *)(_UICamera_TypeInfo_12d6410 + 0xb8);
    *(undefined8 *)(lVar2 + 0x1b0) = 0;
    native_sub_4326e0(lVar2 + 0x1b0,0);
    lVar2 = _UICamera_TypeInfo_12d6410;
    *(undefined4 *)(*(long *)(_UICamera_TypeInfo_12d6410 + 0xb8) + 0x1b8) = 0;
    uVar5 = *(undefined8 *)(*(long *)(lVar2 + 0xb8) + 0x1b0);
    if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    uVar1 = native_UnityEngine_Object__op_Inequality_8d76fc(uVar5,0,0);
    if ((uVar1 & 1) == 0) {
      uVar4 = 1;
    }
    else {
      if (((*(byte *)(_UICamera_TypeInfo_12d6410 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
        native_sub_4327ec();
      }
      lVar3 = *(long *)(_UICamera_TypeInfo_12d6410 + 0xb8);
      lVar2 = *(long *)(lVar3 + 0x178);
      if (lVar2 != 0) {
        if (((*(byte *)(_UICamera_TypeInfo_12d6410 + 0x133) >> 2 & 1) != 0) &&
           (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
          native_sub_4327ec();
          lVar3 = *(long *)(_UICamera_TypeInfo_12d6410 + 0xb8);
          lVar2 = *(long *)(lVar3 + 0x178);
          if (lVar2 == 0) {
LAB_00c956e4:
                    /* WARNING: Subroutine does not return */
            native_sub_432810();
          }
        }
        native_UICamera_BoolDelegate__Invoke_550030(lVar2,*(undefined8 *)(lVar3 + 0x1b0),1,0);
      }
      if (((*(byte *)(_UICamera_TypeInfo_12d6410 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
        native_sub_4327ec();
      }
      uVar4 = 1;
      uVar6 = *(undefined8 *)(*(long *)(_UICamera_TypeInfo_12d6410 + 0xb8) + 0x1b0);
      auStack_38[0] = 1;
      uVar5 = native_sub_4327fc(_bool_TypeInfo_12d3bd0,auStack_38);
      native_UICamera__Notify_c96a08(uVar6,_StringLiteral_OnTooltip_12f02d8,uVar5);
    }
  }
  return uVar4;
}



/* UICamera$$ResetTooltip @ 0xc9fc28
 * void UICamera__ResetTooltip (float delay, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UICamera$$ResetTooltip
   void UICamera__ResetTooltip (float delay, const MethodInfo* method); */

void native_UICamera__ResetTooltip_c9fc28(float param_1)

{
  float fVar1;
  
  if ((bRam00000000013428ef & 1) == 0) {
    native_sub_43273c(&UICamera_TypeInfo_12d6410);
    bRam00000000013428ef = 1;
  }
  if (((*(byte *)(_UICamera_TypeInfo_12d6410 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  native_UICamera__ShowTooltip_c953cc(0);
  fVar1 = (float)native_UnityEngine_Time__get_unscaledTime_770860(0);
  *(float *)(*(long *)(_UICamera_TypeInfo_12d6410 + 0xb8) + 0x1b8) = fVar1 + param_1;
  return;
}



/* UICamera$$.ctor @ 0xc9fcac
 * void UICamera___ctor (UICamera_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UICamera$$.ctor
   void UICamera___ctor (UICamera_o* __this, const MethodInfo* method); */

undefined1  [16] native_UICamera___ctor_c9fcac(ulong param_1)

{
  undefined4 uVar1;
  undefined1 auVar2 [16];
  
  if ((bRam00000000013428f0 & 1) == 0) {
    native_sub_43273c(&StringLiteral_Vertical_12f2f10);
    native_sub_43273c(&StringLiteral_Horizontal_12ee3d0);
    native_sub_43273c(&StringLiteral_Mouse_ScrollWheel_12efae8);
    bRam00000000013428f0 = 1;
  }
  *(undefined4 *)(param_1 + 0x18) = 1;
  uVar1 = native_UnityEngine_LayerMask__op_Implicit_8dfe0c(0xffffffff,0);
  *(undefined4 *)(param_1 + 0x29) = 0x1010101;
  *(undefined2 *)(param_1 + 0x2d) = 0x101;
  *(undefined4 *)(param_1 + 0x20) = uVar1;
  *(undefined4 *)(param_1 + 0x30) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x48) = 0xbf800000;
  *(undefined8 *)(param_1 + 0x40) = 0x4220000042200000;
  *(undefined8 *)(param_1 + 0x38) = 0x4120000040800000;
  *(undefined8 *)(param_1 + 0x50) = _StringLiteral_Horizontal_12ee3d0;
  native_sub_4326e0(param_1 + 0x50);
  *(undefined8 *)(param_1 + 0x58) = _StringLiteral_Vertical_12f2f10;
  native_sub_4326e0(param_1 + 0x58);
  *(undefined8 *)(param_1 + 0x70) = _StringLiteral_Mouse_ScrollWheel_12efae8;
  native_sub_4326e0(param_1 + 0x70);
  *(undefined1 *)(param_1 + 0x78) = 1;
  *(undefined1 *)(param_1 + 0x8c) = 1;
  *(undefined8 *)(param_1 + 0x84) = 0x14b0000001b;
  *(undefined8 *)(param_1 + 0x7c) = 0x14a0000000d;
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



/* UICamera$$.cctor @ 0xc9fda8
 * void UICamera___cctor (const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UICamera$$.cctor
   void UICamera___cctor (const MethodInfo* method); */

void native_UICamera___cctor_c9fda8(undefined1 param_1 [16],undefined4 param_2,undefined4 param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined4 uVar7;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  if ((bRam00000000013428f1 & 1) == 0) {
    native_sub_43273c(&Method_BetterList_UICamera___ctor___12d8978);
    native_sub_43273c(&Method_BetterList_UICamera_DepthEntry___ctor___12d8a68);
    native_sub_43273c(&BetterList_UICamera_DepthEntry__TypeInfo_12d2168);
    native_sub_43273c(&BetterList_UICamera__TypeInfo_12d2128);
    native_sub_43273c(&UICamera_GetAxisFunc_TypeInfo_12d79f8);
    native_sub_43273c(&UICamera_GetKeyStateFunc_TypeInfo_12d7a00);
    native_sub_43273c(&UICamera_GetMouseDelegate_TypeInfo_12d7a08);
    native_sub_43273c(&UICamera_GetTouchDelegate_TypeInfo_12d7a10);
    native_sub_43273c(&Method_System_Collections_Generic_List_int___ctor___12dca80);
    native_sub_43273c(&Method_System_Collections_Generic_List_UICamera_MouseOrTouch___ctor___12dd940
                     );
    native_sub_43273c(&System_Collections_Generic_List_int__TypeInfo_12d2aa0);
    native_sub_43273c(&System_Collections_Generic_List_UICamera_MouseOrTouch__TypeInfo_12d2d40);
    native_sub_43273c(&UICamera_MouseOrTouch___TypeInfo_12d35b0);
    native_sub_43273c(&UICamera_MouseOrTouch_TypeInfo_12d7a18);
    native_sub_43273c(&UICamera_RemoveTouchDelegate_TypeInfo_12d7a38);
    native_sub_43273c(&Method_UICamera___c___cctor_b__230_0___12ea110);
    native_sub_43273c(&Method_UICamera___c___cctor_b__230_1___12ea118);
    native_sub_43273c(&Method_UICamera___c___cctor_b__230_2___12ea120);
    native_sub_43273c(&Method_UICamera___c___cctor_b__230_3___12ea128);
    native_sub_43273c(&Method_UICamera___c___cctor_b__230_4___12ea130);
    native_sub_43273c(&Method_UICamera___c___cctor_b__230_5___12ea138);
    native_sub_43273c(&Method_UICamera___c___cctor_b__230_6___12ea140);
    native_sub_43273c(&UICamera___c_TypeInfo_12d79d8);
    native_sub_43273c(&UICamera_TypeInfo_12d6410);
    bRam00000000013428f1 = 1;
  }
  uVar1 = native_sub_432808(_BetterList_UICamera__TypeInfo_12d2128);
  native_BetterList_object____ctor_ba2d1c(uVar1,_Method_BetterList_UICamera___ctor___12d8978);
  puVar2 = *(undefined8 **)(_UICamera_TypeInfo_12d6410 + 0xb8);
  *puVar2 = uVar1;
  native_sub_4326e0(puVar2,uVar1);
  if (((*(byte *)(_UICamera___c_TypeInfo_12d79d8 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UICamera___c_TypeInfo_12d79d8 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar6 = **(undefined8 **)(_UICamera___c_TypeInfo_12d79d8 + 0xb8);
  uVar1 = native_sub_432808(_UICamera_GetKeyStateFunc_TypeInfo_12d7a00);
  native_UICamera_GetKeyStateFunc___ctor_551028
            (uVar1,uVar6,_Method_UICamera___c___cctor_b__230_0___12ea110,0);
  puVar2 = (undefined8 *)(*(long *)(_UICamera_TypeInfo_12d6410 + 0xb8) + 8);
  *puVar2 = uVar1;
  native_sub_4326e0(puVar2,uVar1);
  uVar6 = **(undefined8 **)(_UICamera___c_TypeInfo_12d79d8 + 0xb8);
  uVar1 = native_sub_432808(_UICamera_GetKeyStateFunc_TypeInfo_12d7a00);
  native_UICamera_GetKeyStateFunc___ctor_551028
            (uVar1,uVar6,_Method_UICamera___c___cctor_b__230_1___12ea118,0);
  puVar2 = (undefined8 *)(*(long *)(_UICamera_TypeInfo_12d6410 + 0xb8) + 0x10);
  *puVar2 = uVar1;
  native_sub_4326e0(puVar2,uVar1);
  uVar6 = **(undefined8 **)(_UICamera___c_TypeInfo_12d79d8 + 0xb8);
  uVar1 = native_sub_432808(_UICamera_GetKeyStateFunc_TypeInfo_12d7a00);
  native_UICamera_GetKeyStateFunc___ctor_551028
            (uVar1,uVar6,_Method_UICamera___c___cctor_b__230_2___12ea120,0);
  puVar2 = (undefined8 *)(*(long *)(_UICamera_TypeInfo_12d6410 + 0xb8) + 0x18);
  *puVar2 = uVar1;
  native_sub_4326e0(puVar2,uVar1);
  uVar6 = **(undefined8 **)(_UICamera___c_TypeInfo_12d79d8 + 0xb8);
  uVar1 = native_sub_432808(_UICamera_GetAxisFunc_TypeInfo_12d79f8);
  native_UICamera_GetAxisFunc___ctor_550bec
            (uVar1,uVar6,_Method_UICamera___c___cctor_b__230_3___12ea128,0);
  puVar2 = (undefined8 *)(*(long *)(_UICamera_TypeInfo_12d6410 + 0xb8) + 0x20);
  *puVar2 = uVar1;
  native_sub_4326e0(puVar2,uVar1);
  uVar6 = **(undefined8 **)(_UICamera___c_TypeInfo_12d79d8 + 0xb8);
  uVar1 = native_sub_432808(_UICamera_GetMouseDelegate_TypeInfo_12d7a08);
  native_UICamera_GetMouseDelegate___ctor_5513a8
            (uVar1,uVar6,_Method_UICamera___c___cctor_b__230_4___12ea130,0);
  puVar2 = (undefined8 *)(*(long *)(_UICamera_TypeInfo_12d6410 + 0xb8) + 0x30);
  *puVar2 = uVar1;
  native_sub_4326e0(puVar2,uVar1);
  uVar6 = **(undefined8 **)(_UICamera___c_TypeInfo_12d79d8 + 0xb8);
  uVar1 = native_sub_432808(_UICamera_GetTouchDelegate_TypeInfo_12d7a10);
  native_UICamera_GetTouchDelegate___ctor_551ab4
            (uVar1,uVar6,_Method_UICamera___c___cctor_b__230_5___12ea138,0);
  puVar2 = (undefined8 *)(*(long *)(_UICamera_TypeInfo_12d6410 + 0xb8) + 0x38);
  *puVar2 = uVar1;
  native_sub_4326e0(puVar2,uVar1);
  uVar6 = **(undefined8 **)(_UICamera___c_TypeInfo_12d79d8 + 0xb8);
  uVar1 = native_sub_432808(_UICamera_RemoveTouchDelegate_TypeInfo_12d7a38);
  native_UICamera_RemoveTouchDelegate___ctor_553418
            (uVar1,uVar6,_Method_UICamera___c___cctor_b__230_6___12ea140,0);
  puVar2 = (undefined8 *)(*(long *)(_UICamera_TypeInfo_12d6410 + 0xb8) + 0x40);
  *puVar2 = uVar1;
  native_sub_4326e0(puVar2,uVar1);
  lVar4 = _UICamera_TypeInfo_12d6410;
  *(undefined1 *)(*(long *)(_UICamera_TypeInfo_12d6410 + 0xb8) + 0x58) = 1;
  *(undefined1 *)(*(long *)(lVar4 + 0xb8) + 0x59) = 0;
  *(undefined1 *)(*(long *)(lVar4 + 0xb8) + 0x5a) = 0;
  *(undefined1 *)(*(long *)(lVar4 + 0xb8) + 0x5b) = 0;
  uVar7 = native_UnityEngine_Vector2__get_zero_765ef0(0);
  lVar4 = *(long *)(_UICamera_TypeInfo_12d6410 + 0xb8);
  *(undefined4 *)(lVar4 + 0x5c) = uVar7;
  *(undefined4 *)(lVar4 + 0x60) = param_2;
  uVar7 = native_UnityEngine_Vector3__get_zero_776668(0);
  lVar4 = _UICamera_TypeInfo_12d6410;
  lVar5 = *(long *)(_UICamera_TypeInfo_12d6410 + 0xb8);
  *(undefined4 *)(lVar5 + 100) = uVar7;
  *(undefined4 *)(lVar5 + 0x68) = param_2;
  *(undefined4 *)(lVar5 + 0x6c) = param_3;
  lVar5 = *(long *)(lVar4 + 0xb8);
  *(undefined8 *)(lVar5 + 0x70) = 0;
  *(undefined8 *)(lVar5 + 0x78) = 0;
  *(undefined8 *)(lVar5 + 0x80) = 0;
  puVar2 = (undefined8 *)(*(long *)(lVar4 + 0xb8) + 0xb8);
  *puVar2 = 0;
  native_sub_4326e0(puVar2,0);
  puVar2 = (undefined8 *)(*(long *)(_UICamera_TypeInfo_12d6410 + 0xb8) + 0xc0);
  *puVar2 = 0;
  native_sub_4326e0(puVar2,0);
  lVar4 = _UICamera_TypeInfo_12d6410;
  *(undefined4 *)(*(long *)(_UICamera_TypeInfo_12d6410 + 0xb8) + 0xd0) = 0;
  *(undefined4 *)(*(long *)(lVar4 + 0xb8) + 0xd4) = 0xffffff9c;
  *(undefined4 *)(*(long *)(lVar4 + 0xb8) + 0xd8) = 0x30;
  puVar2 = (undefined8 *)(*(long *)(lVar4 + 0xb8) + 0xe0);
  *puVar2 = 0;
  native_sub_4326e0(puVar2,0);
  *(undefined1 *)(*(long *)(_UICamera_TypeInfo_12d6410 + 0xb8) + 0xe8) = 0;
  plVar3 = (long *)native_sub_432750(_UICamera_MouseOrTouch___TypeInfo_12d35b0,3);
  lVar4 = native_sub_432808(_UICamera_MouseOrTouch_TypeInfo_12d7a18);
  native_UICamera_MouseOrTouch___ctor_54fe1c(lVar4,0);
  if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    native_sub_432810();
  }
  if ((lVar4 != 0) && (lVar5 = native_sub_4327f8(lVar4,*(undefined8 *)(*plVar3 + 0x40)), lVar5 == 0)
     ) {
LAB_00ca0500:
    uVar1 = native_sub_432830();
                    /* WARNING: Subroutine does not return */
    native_sub_4327dc(uVar1,0);
  }
  if ((int)plVar3[3] != 0) {
    plVar3[4] = lVar4;
    native_sub_4326e0(plVar3 + 4,lVar4);
    lVar4 = native_sub_432808(_UICamera_MouseOrTouch_TypeInfo_12d7a18);
    native_UICamera_MouseOrTouch___ctor_54fe1c(lVar4,0);
    if ((lVar4 != 0) &&
       (lVar5 = native_sub_4327f8(lVar4,*(undefined8 *)(*plVar3 + 0x40)), lVar5 == 0))
    goto LAB_00ca0500;
    if (1 < *(uint *)(plVar3 + 3)) {
      plVar3[5] = lVar4;
      native_sub_4326e0(plVar3 + 5,lVar4);
      lVar4 = native_sub_432808(_UICamera_MouseOrTouch_TypeInfo_12d7a18);
      native_UICamera_MouseOrTouch___ctor_54fe1c(lVar4,0);
      if ((lVar4 != 0) &&
         (lVar5 = native_sub_4327f8(lVar4,*(undefined8 *)(*plVar3 + 0x40)), lVar5 == 0))
      goto LAB_00ca0500;
      if (2 < *(uint *)(plVar3 + 3)) {
        plVar3[6] = lVar4;
        native_sub_4326e0(plVar3 + 6,lVar4);
        lVar4 = *(long *)(_UICamera_TypeInfo_12d6410 + 0xb8);
        *(long **)(lVar4 + 0x188) = plVar3;
        native_sub_4326e0(lVar4 + 0x188,plVar3);
        uVar1 = native_sub_432808(_UICamera_MouseOrTouch_TypeInfo_12d7a18);
        native_UICamera_MouseOrTouch___ctor_54fe1c(uVar1,0);
        lVar4 = *(long *)(_UICamera_TypeInfo_12d6410 + 0xb8);
        *(undefined8 *)(lVar4 + 400) = uVar1;
        native_sub_4326e0(lVar4 + 400,uVar1);
        uVar1 = native_sub_432808(
                                 _System_Collections_Generic_List_UICamera_MouseOrTouch__TypeInfo_12d2d40
                                 );
        native_System_Collections_Generic_List_XmlEventCache_XmlEvent______ctor_d3ff44
                  (uVar1,
                   _Method_System_Collections_Generic_List_UICamera_MouseOrTouch___ctor___12dd940);
        lVar4 = *(long *)(_UICamera_TypeInfo_12d6410 + 0xb8);
        *(undefined8 *)(lVar4 + 0x198) = uVar1;
        native_sub_4326e0(lVar4 + 0x198,uVar1);
        uVar1 = native_sub_432808(_System_Collections_Generic_List_int__TypeInfo_12d2aa0);
        native_System_Collections_Generic_List_int____ctor_d38324
                  (uVar1,_Method_System_Collections_Generic_List_int___ctor___12dca80);
        lVar4 = *(long *)(_UICamera_TypeInfo_12d6410 + 0xb8);
        *(undefined8 *)(lVar4 + 0x1a0) = uVar1;
        native_sub_4326e0(lVar4 + 0x1a0,uVar1);
        lVar4 = _UICamera_TypeInfo_12d6410;
        *(undefined4 *)(*(long *)(_UICamera_TypeInfo_12d6410 + 0xb8) + 0x1a8) = 0;
        *(undefined4 *)(*(long *)(lVar4 + 0xb8) + 0x1ac) = 0;
        lVar4 = *(long *)(lVar4 + 0xb8);
        *(undefined8 *)(lVar4 + 0x1b0) = 0;
        native_sub_4326e0(lVar4 + 0x1b0,0);
        lVar4 = _UICamera_TypeInfo_12d6410;
        *(undefined4 *)(*(long *)(_UICamera_TypeInfo_12d6410 + 0xb8) + 0x1b8) = 0;
        *(undefined1 *)(*(long *)(lVar4 + 0xb8) + 0x1bc) = 0;
        *(undefined4 *)(*(long *)(lVar4 + 0xb8) + 0x1c0) = 0xffffffff;
        *(undefined1 *)(*(long *)(lVar4 + 0xb8) + 0x1c4) = 0;
        *(undefined4 *)(*(long *)(lVar4 + 0xb8) + 0x1c8) = 0xffffffff;
        *(undefined1 *)(*(long *)(lVar4 + 0xb8) + 0x1cc) = 0;
        *(undefined4 *)(*(long *)(lVar4 + 0xb8) + 0x1d0) = 0xffffffff;
        *(undefined1 *)(*(long *)(lVar4 + 0xb8) + 0x1d4) = 0;
        func_0x002c8be0(*(long *)(lVar4 + 0xb8) + 0x1f0,0,0x48);
        uVar1 = native_sub_432808(_BetterList_UICamera_DepthEntry__TypeInfo_12d2168);
        native_BetterList_UICamera_DepthEntry____ctor_ba56b8
                  (uVar1,_Method_BetterList_UICamera_DepthEntry___ctor___12d8a68);
        lVar4 = *(long *)(_UICamera_TypeInfo_12d6410 + 0xb8);
        *(undefined8 *)(lVar4 + 0x238) = uVar1;
        native_sub_4326e0(lVar4 + 0x238,uVar1);
        native_UnityEngine_Vector3__get_back_776a70(0);
        uStack_50 = 0;
        uStack_48 = 0;
        native_UnityEngine_Plane___ctor_8eb8e4(&uStack_50,0);
        lVar4 = _UICamera_TypeInfo_12d6410;
        lVar5 = *(long *)(_UICamera_TypeInfo_12d6410 + 0xb8);
        *(undefined8 *)(lVar5 + 600) = uStack_48;
        *(undefined8 *)(lVar5 + 0x250) = uStack_50;
        *(undefined4 *)(*(long *)(lVar4 + 0xb8) + 0x260) = 0;
        *(undefined4 *)(*(long *)(lVar4 + 0xb8) + 0x264) = 0;
        *(undefined1 *)(*(long *)(lVar4 + 0xb8) + 0x268) = 1;
        return;
      }
    }
  }
  uVar1 = native_sub_43283c();
                    /* WARNING: Subroutine does not return */
  native_sub_4327dc(uVar1,0);
}


