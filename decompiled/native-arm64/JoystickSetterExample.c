/* ARM64 IL2CPP native pseudocode from Ghidra.
 * Recovered implementation, not original C# source.
 * Function boundaries follow the IL2CPP method address table. */


/* JoystickSetterExample$$Start @ 0x7f7a68
 * void JoystickSetterExample__Start (JoystickSetterExample_o* __this, const MethodInfo* method); */

/* JoystickSetterExample$$Start
   void JoystickSetterExample__Start (JoystickSetterExample_o* __this, const MethodInfo* method); */

void native_JoystickSetterExample__Start_7f7a68(void)

{
  return;
}



/* JoystickSetterExample$$ModeChanged @ 0x7f7a6c
 * void JoystickSetterExample__ModeChanged (JoystickSetterExample_o* __this, int32_t index, const MethodInfo* method); */

/* JoystickSetterExample$$ModeChanged
   void JoystickSetterExample__ModeChanged (JoystickSetterExample_o* __this, int32_t index, const
   MethodInfo* method); */

void native_JoystickSetterExample__ModeChanged_7f7a6c(long param_1,int param_2)

{
  long lVar1;
  long lVar2;
  int iVar3;
  undefined8 uVar4;
  
  if (param_2 == 2) {
    lVar1 = *(long *)(param_1 + 0x18);
    if (lVar1 == 0) goto LAB_007f7ac8;
    iVar3 = 2;
  }
  else if (param_2 == 1) {
    lVar1 = *(long *)(param_1 + 0x18);
    if (lVar1 == 0) goto LAB_007f7ac8;
    iVar3 = 1;
  }
  else {
    if (param_2 != 0) {
      return;
    }
    lVar1 = *(long *)(param_1 + 0x18);
    if (lVar1 == 0) {
LAB_007f7ac8:
                    /* WARNING: Subroutine does not return */
      native_sub_432810();
    }
    iVar3 = 0;
  }
  lVar2 = *(long *)(lVar1 + 0x28);
  *(int *)(lVar1 + 0x5c) = iVar3;
  if (iVar3 == 0) {
    if (lVar2 != 0) {
      native_UnityEngine_RectTransform__set_anchoredPosition_764ec0
                (*(undefined4 *)(lVar1 + 0x60),*(undefined4 *)(lVar1 + 100),lVar2,0,0);
      if ((*(long *)(lVar1 + 0x28) != 0) &&
         (lVar1 = native_UnityEngine_Component__get_gameObject_8da66c(*(long *)(lVar1 + 0x28),0),
         lVar1 != 0)) {
        uVar4 = 1;
        goto native_UnityEngine_GameObject__SetActive_8de698;
      }
    }
  }
  else if ((lVar2 != 0) &&
          (lVar1 = native_UnityEngine_Component__get_gameObject_8da66c(lVar2,0), lVar1 != 0)) {
    uVar4 = 0;
native_UnityEngine_GameObject__SetActive_8de698:
    if (pcRam0000000001340bf8 == (code *)0x0) {
      pcRam0000000001340bf8 = (code *)native_sub_4326f0(&UNK_00e2da67);
    }
                    /* WARNING: Could not recover jumptable at 0x008de6e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*pcRam0000000001340bf8)(lVar1,uVar4);
    return;
  }
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* JoystickSetterExample$$AxisChanged @ 0x7f7acc
 * void JoystickSetterExample__AxisChanged (JoystickSetterExample_o* __this, int32_t index, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* JoystickSetterExample$$AxisChanged
   void JoystickSetterExample__AxisChanged (JoystickSetterExample_o* __this, int32_t index, const
   MethodInfo* method); */

void native_JoystickSetterExample__AxisChanged_7f7acc
               (undefined1 param_1 [16],float param_2,undefined4 param_3,undefined4 param_4,
               long param_5,int param_6)

{
  byte bVar1;
  long *plVar2;
  ulong uVar3;
  undefined8 uVar4;
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
  
  if (param_6 == 2) {
    if (*(long *)(param_5 + 0x18) == 0) {
LAB_007f7b8c:
                    /* WARNING: Subroutine does not return */
      native_sub_432810();
    }
    *(undefined4 *)(*(long *)(param_5 + 0x18) + 0x20) = 2;
    lVar5 = *(long *)(param_5 + 0x30);
    if (lVar5 == 0) goto LAB_007f7b8c;
    if (*(uint *)(lVar5 + 0x18) < 3) goto LAB_007f7b90;
    plVar2 = *(long **)(param_5 + 0x28);
    if (plVar2 == (long *)0x0) goto LAB_007f7b8c;
    lVar5 = *(long *)(lVar5 + 0x30);
  }
  else if (param_6 == 1) {
    if (*(long *)(param_5 + 0x18) == 0) goto LAB_007f7b8c;
    *(undefined4 *)(*(long *)(param_5 + 0x18) + 0x20) = 1;
    lVar5 = *(long *)(param_5 + 0x30);
    if (lVar5 == 0) goto LAB_007f7b8c;
    if (*(uint *)(lVar5 + 0x18) < 2) goto LAB_007f7b90;
    plVar2 = *(long **)(param_5 + 0x28);
    if (plVar2 == (long *)0x0) goto LAB_007f7b8c;
    lVar5 = *(long *)(lVar5 + 0x28);
  }
  else {
    if (param_6 != 0) {
      return;
    }
    if (*(long *)(param_5 + 0x18) == 0) goto LAB_007f7b8c;
    *(undefined4 *)(*(long *)(param_5 + 0x18) + 0x20) = 0;
    lVar5 = *(long *)(param_5 + 0x30);
    if (lVar5 == 0) goto LAB_007f7b8c;
    if (*(int *)(lVar5 + 0x18) == 0) {
LAB_007f7b90:
      uVar4 = native_sub_43283c();
                    /* WARNING: Subroutine does not return */
      native_sub_4327dc(uVar4,0);
    }
    plVar2 = *(long **)(param_5 + 0x28);
    if (plVar2 == (long *)0x0) goto LAB_007f7b8c;
    lVar5 = *(long *)(lVar5 + 0x20);
  }
  if ((bRam0000000001342995 & 1) == 0) {
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0,lVar5,0);
    bRam0000000001342995 = 1;
  }
  uStack_60 = 0;
  uStack_58 = 0;
  plVar6 = plVar2 + 0x1a;
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
      *(bool *)(plVar2 + 6) =
           (fVar10 - fVar11) * (fVar10 - fVar11) + (param_2 - fVar12) * (param_2 - fVar12) <
           9.9999994e-11;
      uVar4 = native_UnityEngine_Sprite__get_texture_76bd60(lVar5,0);
      if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
        native_sub_4327ec(_UnityEngine_Object_TypeInfo_12d54e0);
      }
      uVar8 = 0;
code_r0x00cb76e0:
      bVar1 = native_UnityEngine_Object__op_Equality_8e9a3c(uVar4,uVar8,0);
      *(byte *)((long)plVar2 + 0x31) = bVar1 & 1;
      plVar2[0x1a] = lVar5;
      native_sub_4326e0(plVar6,lVar5);
      (**(code **)(*plVar2 + 0x2d8))(plVar2,*(undefined8 *)(*plVar2 + 0x2e0));
      native_UnityEngine_UI_Image__TrackSprite_cb773c(plVar2);
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
      *(bool *)(plVar2 + 6) = fVar10 == fVar11 && param_2 == fVar12;
      if (plVar2[0x1a] != 0) {
        uVar4 = native_UnityEngine_Sprite__get_texture_76bd60(plVar2[0x1a],0);
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



/* JoystickSetterExample$$SnapX @ 0x7f7b9c
 * void JoystickSetterExample__SnapX (JoystickSetterExample_o* __this, bool value, const MethodInfo* method); */

/* JoystickSetterExample$$SnapX
   void JoystickSetterExample__SnapX (JoystickSetterExample_o* __this, bool value, const MethodInfo*
   method); */

void native_JoystickSetterExample__SnapX_7f7b9c(long param_1,byte param_2)

{
  if (*(long *)(param_1 + 0x18) != 0) {
    *(byte *)(*(long *)(param_1 + 0x18) + 0x24) = param_2 & 1;
    return;
  }
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* JoystickSetterExample$$SnapY @ 0x7f7bbc
 * void JoystickSetterExample__SnapY (JoystickSetterExample_o* __this, bool value, const MethodInfo* method); */

/* JoystickSetterExample$$SnapY
   void JoystickSetterExample__SnapY (JoystickSetterExample_o* __this, bool value, const MethodInfo*
   method); */

void native_JoystickSetterExample__SnapY_7f7bbc(long param_1,byte param_2)

{
  if (*(long *)(param_1 + 0x18) != 0) {
    *(byte *)(*(long *)(param_1 + 0x18) + 0x25) = param_2 & 1;
    return;
  }
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* JoystickSetterExample$$Update @ 0x7f7bdc
 * void JoystickSetterExample__Update (JoystickSetterExample_o* __this, const MethodInfo* method); */

/* JoystickSetterExample$$Update
   void JoystickSetterExample__Update (JoystickSetterExample_o* __this, const MethodInfo* method);
    */

void native_JoystickSetterExample__Update_7f7bdc(void)

{
  return;
}



/* JoystickSetterExample$$.ctor @ 0x7f7be0
 * void JoystickSetterExample___ctor (JoystickSetterExample_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* JoystickSetterExample$$.ctor
   void JoystickSetterExample___ctor (JoystickSetterExample_o* __this, const MethodInfo* method); */

undefined1  [16] native_JoystickSetterExample___ctor_7f7be0(ulong param_1)

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


