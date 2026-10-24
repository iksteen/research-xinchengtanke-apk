/* ARM64 IL2CPP native pseudocode from Ghidra.
 * Recovered implementation, not original C# source.
 * Function boundaries follow the IL2CPP method address table. */


/* MG_BlocksEngine2.Horizontal.Block.BE2_SetIconOnDropdownChange$$OnEnable @ 0x619144
 * void MG_BlocksEngine2_Horizontal_Block_BE2_SetIconOnDropdownChange__OnEnable (MG_BlocksEngine2_Horizontal_Block_BE2_SetIconOnDropdownChange_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MG_BlocksEngine2.Horizontal.Block.BE2_SetIconOnDropdownChange$$OnEnable
   void MG_BlocksEngine2_Horizontal_Block_BE2_SetIconOnDropdownChange__OnEnable
   (MG_BlocksEngine2_Horizontal_Block_BE2_SetIconOnDropdownChange_o* __this, const MethodInfo*
   method); */

void native_MG_BlocksEngine2_Horizontal_Block_BE2_SetIconOnDropdownChange__OnEnable_619144
               (long param_1)

{
  undefined8 uVar1;
  long lVar2;
  
  if ((bRam000000000133eeaa & 1) == 0) {
    native_sub_43273c(&
                      Method_MG_BlocksEngine2_Horizontal_Block_BE2_SetIconOnDropdownChange__OnEnable_b__4_0___12e22b0
                     );
    native_sub_43273c(&Method_UnityEngine_Events_UnityAction_int___ctor___12de3b0);
    native_sub_43273c(&UnityEngine_Events_UnityAction_int__TypeInfo_12d2f48);
    native_sub_43273c(&Method_UnityEngine_Events_UnityEvent_int__AddListener___12de488);
    bRam000000000133eeaa = 1;
  }
  uVar1 = native_UnityEngine_Component__get_transform_8da62c(param_1,0);
  uVar1 = native_MG_BlocksEngine2_Utils_BE2_Dropdown__GetBE2ComponentInChildren_57ffa0(uVar1,0);
  *(undefined8 *)(param_1 + 0x20) = uVar1;
  native_sub_4326e0(param_1 + 0x20);
  if (*(long *)(param_1 + 0x20) != 0) {
    lVar2 = native_MG_BlocksEngine2_Utils_BE2_Dropdown__get_onValueChanged_567184
                      (*(long *)(param_1 + 0x20),0);
    uVar1 = native_sub_432808(_UnityEngine_Events_UnityAction_int__TypeInfo_12d2f48);
    native_UnityEngine_Events_UnityAction_int____ctor_89b2bc
              (uVar1,param_1,
               _Method_MG_BlocksEngine2_Horizontal_Block_BE2_SetIconOnDropdownChange__OnEnable_b__4_0___12e22b0
               ,_Method_UnityEngine_Events_UnityAction_int___ctor___12de3b0);
    if (lVar2 != 0) {
      uVar1 = (**(code **)**(undefined8 **)
                            (*(long *)(
                                      _Method_UnityEngine_Events_UnityEvent_int__AddListener___12de488
                                      + 0x18) + 0xc0))(uVar1);
      if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
        native_sub_432810();
      }
      lVar2 = *(long *)(lVar2 + 0x10);
      if (lVar2 != 0) {
        if ((bRam0000000001340cbd & 1) == 0) {
          native_sub_43273c(&Method_System_Collections_Generic_List_BaseInvokableCall__Add___12dc5b0
                            ,uVar1,0);
          bRam0000000001340cbd = 1;
        }
        if (*(long *)(lVar2 + 0x18) != 0) {
          native_System_Collections_Generic_List_int_____Add_d40c00
                    (*(long *)(lVar2 + 0x18),uVar1,
                     _Method_System_Collections_Generic_List_BaseInvokableCall__Add___12dc5b0);
          *(undefined1 *)(lVar2 + 0x28) = 1;
          return;
        }
                    /* WARNING: Subroutine does not return */
        native_sub_432810();
      }
                    /* WARNING: Subroutine does not return */
      native_sub_432810(0,uVar1,0);
    }
  }
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* MG_BlocksEngine2.Horizontal.Block.BE2_SetIconOnDropdownChange$$OnDisable @ 0x619238
 * void MG_BlocksEngine2_Horizontal_Block_BE2_SetIconOnDropdownChange__OnDisable (MG_BlocksEngine2_Horizontal_Block_BE2_SetIconOnDropdownChange_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MG_BlocksEngine2.Horizontal.Block.BE2_SetIconOnDropdownChange$$OnDisable
   void MG_BlocksEngine2_Horizontal_Block_BE2_SetIconOnDropdownChange__OnDisable
   (MG_BlocksEngine2_Horizontal_Block_BE2_SetIconOnDropdownChange_o* __this, const MethodInfo*
   method); */

void native_MG_BlocksEngine2_Horizontal_Block_BE2_SetIconOnDropdownChange__OnDisable_619238
               (long param_1)

{
  long lVar1;
  
  if ((*(long *)(param_1 + 0x20) == 0) ||
     (lVar1 = native_MG_BlocksEngine2_Utils_BE2_Dropdown__get_onValueChanged_567184
                        (*(long *)(param_1 + 0x20),0), lVar1 == 0)) {
                    /* WARNING: Subroutine does not return */
    native_sub_432810();
  }
  lVar1 = *(long *)(lVar1 + 0x10);
  if (lVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    native_sub_432810(0,0);
  }
  if ((bRam0000000001340cbf & 1) == 0) {
    native_sub_43273c(&Method_System_Collections_Generic_List_BaseInvokableCall__Clear___12dc5c0,0);
    bRam0000000001340cbf = 1;
  }
  if (*(long *)(lVar1 + 0x18) != 0) {
    native_System_Collections_Generic_List_Action___Clear_d40e80
              (*(long *)(lVar1 + 0x18),
               _Method_System_Collections_Generic_List_BaseInvokableCall__Clear___12dc5c0);
    *(undefined1 *)(lVar1 + 0x28) = 1;
    return;
  }
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* MG_BlocksEngine2.Horizontal.Block.BE2_SetIconOnDropdownChange$$SetIcon @ 0x619264
 * void MG_BlocksEngine2_Horizontal_Block_BE2_SetIconOnDropdownChange__SetIcon (MG_BlocksEngine2_Horizontal_Block_BE2_SetIconOnDropdownChange_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MG_BlocksEngine2.Horizontal.Block.BE2_SetIconOnDropdownChange$$SetIcon
   void MG_BlocksEngine2_Horizontal_Block_BE2_SetIconOnDropdownChange__SetIcon
   (MG_BlocksEngine2_Horizontal_Block_BE2_SetIconOnDropdownChange_o* __this, const MethodInfo*
   method); */

void native_MG_BlocksEngine2_Horizontal_Block_BE2_SetIconOnDropdownChange__SetIcon_619264
               (undefined1 param_1 [16],float param_2,undefined4 param_3,undefined4 param_4,
               long param_5)

{
  byte bVar1;
  undefined8 uVar2;
  ulong uVar3;
  long *plVar4;
  long lVar5;
  long *plVar6;
  long lVar7;
  undefined8 uVar8;
  undefined4 uVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  if ((bRam000000000133eeab & 1) == 0) {
    native_sub_43273c(&StringLiteral_Right_12f0b30);
    native_sub_43273c(&StringLiteral_Left_12ef550);
    bRam000000000133eeab = 1;
  }
  if (*(long *)(param_5 + 0x20) == 0) {
LAB_00619320:
                    /* WARNING: Subroutine does not return */
    native_sub_432810();
  }
  uVar2 = native_MG_BlocksEngine2_Utils_BE2_Dropdown__GetSelectedOptionText_567528
                    (*(long *)(param_5 + 0x20),0);
  uVar3 = native_System_String__op_Equality_afc18c(uVar2,_StringLiteral_Left_12ef550,0);
  if ((uVar3 & 1) == 0) {
    uVar3 = native_System_String__op_Equality_afc18c(uVar2,_StringLiteral_Right_12f0b30,0);
    if ((uVar3 & 1) == 0) {
      return;
    }
    plVar4 = *(long **)(param_5 + 0x18);
    if (plVar4 == (long *)0x0) goto LAB_00619320;
    lVar5 = *(long *)(param_5 + 0x30);
  }
  else {
    plVar4 = *(long **)(param_5 + 0x18);
    if (plVar4 == (long *)0x0) goto LAB_00619320;
    lVar5 = *(long *)(param_5 + 0x28);
  }
  if ((bRam0000000001342995 & 1) == 0) {
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0,lVar5,0);
    bRam0000000001342995 = 1;
  }
  uStack_60 = 0;
  uStack_58 = 0;
  plVar6 = plVar4 + 0x1a;
  lVar7 = *plVar6;
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar3 = native_UnityEngine_Object__op_Inequality_8d76fc(lVar7,0,0);
  if ((uVar3 & 1) == 0) {
    if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    uVar3 = native_UnityEngine_Object__op_Inequality_8d76fc(lVar5,0,0);
    if ((uVar3 & 1) == 0) {
      return;
    }
    if (lVar5 != 0) {
      uVar9 = native_UnityEngine_Sprite__get_rect_76bc08(lVar5,0);
      uStack_60 = CONCAT44(param_2,uVar9);
      uStack_58 = CONCAT44(param_4,param_3);
      fVar10 = (float)native_UnityEngine_Rect__get_size_76369c(&uStack_60,0);
      fVar12 = param_2;
      fVar11 = (float)native_UnityEngine_Vector2__get_zero_765ef0(0);
      *(bool *)(plVar4 + 6) =
           (fVar10 - fVar11) * (fVar10 - fVar11) + (param_2 - fVar12) * (param_2 - fVar12) <
           9.9999994e-11;
      uVar2 = native_UnityEngine_Sprite__get_texture_76bd60(lVar5,0);
      if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
        native_sub_4327ec(_UnityEngine_Object_TypeInfo_12d54e0);
      }
      uVar8 = 0;
code_r0x00cb76e0:
      bVar1 = native_UnityEngine_Object__op_Equality_8e9a3c(uVar2,uVar8,0);
      *(byte *)((long)plVar4 + 0x31) = bVar1 & 1;
      plVar4[0x1a] = lVar5;
      native_sub_4326e0(plVar6,lVar5);
      (**(code **)(*plVar4 + 0x2d8))(plVar4,*(undefined8 *)(*plVar4 + 0x2e0));
      native_UnityEngine_UI_Image__TrackSprite_cb773c(plVar4);
      return;
    }
  }
  else {
    lVar7 = *plVar6;
    if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    uVar3 = native_UnityEngine_Object__op_Inequality_8d76fc(lVar7,lVar5,0);
    if ((uVar3 & 1) == 0) {
      return;
    }
    if (*plVar6 != 0) {
      uVar9 = native_UnityEngine_Sprite__get_rect_76bc08(*plVar6,0);
      uStack_60 = CONCAT44(param_2,uVar9);
      uStack_58 = CONCAT44(param_4,param_3);
      fVar10 = (float)native_UnityEngine_Rect__get_size_76369c(&uStack_60,0);
      fVar12 = param_2;
      if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
        native_sub_4327ec();
      }
      uVar3 = native_UnityEngine_Object__op_Implicit_8e1b98(lVar5,0);
      if ((uVar3 & 1) == 0) {
        fVar11 = (float)native_UnityEngine_Vector2__get_zero_765ef0(0);
      }
      else {
        if (lVar5 == 0) goto code_r0x00cb7738;
        uVar9 = native_UnityEngine_Sprite__get_rect_76bc08(lVar5,0);
        uStack_60 = CONCAT44(fVar12,uVar9);
        uStack_58 = CONCAT44(param_4,param_3);
        fVar11 = (float)native_UnityEngine_Rect__get_size_76369c(&uStack_60,0);
      }
      *(bool *)(plVar4 + 6) = fVar10 == fVar11 && param_2 == fVar12;
      if (plVar4[0x1a] != 0) {
        uVar2 = native_UnityEngine_Sprite__get_texture_76bd60(plVar4[0x1a],0);
        if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
           (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
          native_sub_4327ec(_UnityEngine_Object_TypeInfo_12d54e0);
        }
        uVar3 = native_UnityEngine_Object__op_Implicit_8e1b98(lVar5,0);
        uVar8 = 0;
        if ((uVar3 & 1) != 0) {
          if (lVar5 == 0) goto code_r0x00cb7738;
          uVar8 = native_UnityEngine_Sprite__get_texture_76bd60(lVar5,0);
        }
        if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
           (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
          native_sub_4327ec();
        }
        goto code_r0x00cb76e0;
      }
    }
  }
code_r0x00cb7738:
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* MG_BlocksEngine2.Horizontal.Block.BE2_SetIconOnDropdownChange$$.ctor @ 0x619324
 * void MG_BlocksEngine2_Horizontal_Block_BE2_SetIconOnDropdownChange___ctor (MG_BlocksEngine2_Horizontal_Block_BE2_SetIconOnDropdownChange_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MG_BlocksEngine2.Horizontal.Block.BE2_SetIconOnDropdownChange$$.ctor
   void MG_BlocksEngine2_Horizontal_Block_BE2_SetIconOnDropdownChange___ctor
   (MG_BlocksEngine2_Horizontal_Block_BE2_SetIconOnDropdownChange_o* __this, const MethodInfo*
   method); */

undefined1  [16]
native_MG_BlocksEngine2_Horizontal_Block_BE2_SetIconOnDropdownChange___ctor_619324(ulong param_1)

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



/* MG_BlocksEngine2.Horizontal.Block.BE2_SetIconOnDropdownChange$$<OnEnable>b__4_0 @ 0x61932c
 * void MG_BlocksEngine2_Horizontal_Block_BE2_SetIconOnDropdownChange___OnEnable_b__4_0 (MG_BlocksEngine2_Horizontal_Block_BE2_SetIconOnDropdownChange_o* __this, int32_t _p0_, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MG_BlocksEngine2.Horizontal.Block.BE2_SetIconOnDropdownChange$$<OnEnable>b__4_0
   void MG_BlocksEngine2_Horizontal_Block_BE2_SetIconOnDropdownChange___OnEnable_b__4_0
   (MG_BlocksEngine2_Horizontal_Block_BE2_SetIconOnDropdownChange_o* __this, int32_t _p0_, const
   MethodInfo* method); */

void native_MG_BlocksEngine2_Horizontal_Block_BE2_SetIconOnDropdownChange___OnEnable_b__4_0_61932c
               (undefined1 param_1 [16],float param_2,undefined4 param_3,undefined4 param_4,
               long param_5)

{
  byte bVar1;
  undefined8 uVar2;
  ulong uVar3;
  long *plVar4;
  long lVar5;
  long *plVar6;
  long lVar7;
  undefined8 uVar8;
  undefined4 uVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  if ((bRam000000000133eeab & 1) == 0) {
    native_sub_43273c(&StringLiteral_Right_12f0b30);
    native_sub_43273c(&StringLiteral_Left_12ef550);
    bRam000000000133eeab = 1;
  }
  if (*(long *)(param_5 + 0x20) == 0) {
LAB_00619320:
                    /* WARNING: Subroutine does not return */
    native_sub_432810();
  }
  uVar2 = native_MG_BlocksEngine2_Utils_BE2_Dropdown__GetSelectedOptionText_567528
                    (*(long *)(param_5 + 0x20),0);
  uVar3 = native_System_String__op_Equality_afc18c(uVar2,_StringLiteral_Left_12ef550,0);
  if ((uVar3 & 1) == 0) {
    uVar3 = native_System_String__op_Equality_afc18c(uVar2,_StringLiteral_Right_12f0b30,0);
    if ((uVar3 & 1) == 0) {
      return;
    }
    plVar4 = *(long **)(param_5 + 0x18);
    if (plVar4 == (long *)0x0) goto LAB_00619320;
    lVar5 = *(long *)(param_5 + 0x30);
  }
  else {
    plVar4 = *(long **)(param_5 + 0x18);
    if (plVar4 == (long *)0x0) goto LAB_00619320;
    lVar5 = *(long *)(param_5 + 0x28);
  }
  if ((bRam0000000001342995 & 1) == 0) {
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0,lVar5,0);
    bRam0000000001342995 = 1;
  }
  uStack_60 = 0;
  uStack_58 = 0;
  plVar6 = plVar4 + 0x1a;
  lVar7 = *plVar6;
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar3 = native_UnityEngine_Object__op_Inequality_8d76fc(lVar7,0,0);
  if ((uVar3 & 1) == 0) {
    if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    uVar3 = native_UnityEngine_Object__op_Inequality_8d76fc(lVar5,0,0);
    if ((uVar3 & 1) == 0) {
      return;
    }
    if (lVar5 != 0) {
      uVar9 = native_UnityEngine_Sprite__get_rect_76bc08(lVar5,0);
      uStack_60 = CONCAT44(param_2,uVar9);
      uStack_58 = CONCAT44(param_4,param_3);
      fVar10 = (float)native_UnityEngine_Rect__get_size_76369c(&uStack_60,0);
      fVar12 = param_2;
      fVar11 = (float)native_UnityEngine_Vector2__get_zero_765ef0(0);
      *(bool *)(plVar4 + 6) =
           (fVar10 - fVar11) * (fVar10 - fVar11) + (param_2 - fVar12) * (param_2 - fVar12) <
           9.9999994e-11;
      uVar2 = native_UnityEngine_Sprite__get_texture_76bd60(lVar5,0);
      if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
        native_sub_4327ec(_UnityEngine_Object_TypeInfo_12d54e0);
      }
      uVar8 = 0;
code_r0x00cb76e0:
      bVar1 = native_UnityEngine_Object__op_Equality_8e9a3c(uVar2,uVar8,0);
      *(byte *)((long)plVar4 + 0x31) = bVar1 & 1;
      plVar4[0x1a] = lVar5;
      native_sub_4326e0(plVar6,lVar5);
      (**(code **)(*plVar4 + 0x2d8))(plVar4,*(undefined8 *)(*plVar4 + 0x2e0));
      native_UnityEngine_UI_Image__TrackSprite_cb773c(plVar4);
      return;
    }
  }
  else {
    lVar7 = *plVar6;
    if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    uVar3 = native_UnityEngine_Object__op_Inequality_8d76fc(lVar7,lVar5,0);
    if ((uVar3 & 1) == 0) {
      return;
    }
    if (*plVar6 != 0) {
      uVar9 = native_UnityEngine_Sprite__get_rect_76bc08(*plVar6,0);
      uStack_60 = CONCAT44(param_2,uVar9);
      uStack_58 = CONCAT44(param_4,param_3);
      fVar10 = (float)native_UnityEngine_Rect__get_size_76369c(&uStack_60,0);
      fVar12 = param_2;
      if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
        native_sub_4327ec();
      }
      uVar3 = native_UnityEngine_Object__op_Implicit_8e1b98(lVar5,0);
      if ((uVar3 & 1) == 0) {
        fVar11 = (float)native_UnityEngine_Vector2__get_zero_765ef0(0);
      }
      else {
        if (lVar5 == 0) goto code_r0x00cb7738;
        uVar9 = native_UnityEngine_Sprite__get_rect_76bc08(lVar5,0);
        uStack_60 = CONCAT44(fVar12,uVar9);
        uStack_58 = CONCAT44(param_4,param_3);
        fVar11 = (float)native_UnityEngine_Rect__get_size_76369c(&uStack_60,0);
      }
      *(bool *)(plVar4 + 6) = fVar10 == fVar11 && param_2 == fVar12;
      if (plVar4[0x1a] != 0) {
        uVar2 = native_UnityEngine_Sprite__get_texture_76bd60(plVar4[0x1a],0);
        if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
           (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
          native_sub_4327ec(_UnityEngine_Object_TypeInfo_12d54e0);
        }
        uVar3 = native_UnityEngine_Object__op_Implicit_8e1b98(lVar5,0);
        uVar8 = 0;
        if ((uVar3 & 1) != 0) {
          if (lVar5 == 0) goto code_r0x00cb7738;
          uVar8 = native_UnityEngine_Sprite__get_texture_76bd60(lVar5,0);
        }
        if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
           (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
          native_sub_4327ec();
        }
        goto code_r0x00cb76e0;
      }
    }
  }
code_r0x00cb7738:
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}


