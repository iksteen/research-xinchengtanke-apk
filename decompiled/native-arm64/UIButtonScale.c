/* ARM64 IL2CPP native pseudocode from Ghidra.
 * Recovered implementation, not original C# source.
 * Function boundaries follow the IL2CPP method address table. */


/* UIButtonScale$$Start @ 0xc93d3c
 * void UIButtonScale__Start (UIButtonScale_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIButtonScale$$Start
   void UIButtonScale__Start (UIButtonScale_o* __this, const MethodInfo* method); */

void native_UIButtonScale__Start_c93d3c
               (undefined1 param_1 [16],undefined4 param_2,undefined4 param_3,long param_4)

{
  ulong uVar1;
  undefined8 uVar2;
  long *plVar3;
  long lVar4;
  undefined4 uVar5;
  
  if ((bRam00000000013428a4 & 1) == 0) {
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    bRam00000000013428a4 = 1;
  }
  if (*(char *)(param_4 + 0x48) == '\0') {
    plVar3 = (long *)(param_4 + 0x18);
    lVar4 = *plVar3;
    *(undefined1 *)(param_4 + 0x48) = 1;
    if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    uVar1 = native_UnityEngine_Object__op_Equality_8e9a3c(lVar4,0,0);
    if ((uVar1 & 1) != 0) {
      uVar2 = native_UnityEngine_Component__get_transform_8da62c(param_4,0);
      *(undefined8 *)(param_4 + 0x18) = uVar2;
      native_sub_4326e0(plVar3,uVar2);
    }
    if (*plVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      native_sub_432810();
    }
    uVar5 = native_UnityEngine_Transform__get_localScale_771d80(*plVar3,0);
    *(undefined4 *)(param_4 + 0x3c) = uVar5;
    *(undefined4 *)(param_4 + 0x40) = param_2;
    *(undefined4 *)(param_4 + 0x44) = param_3;
  }
  return;
}



/* UIButtonScale$$OnEnable @ 0xc93e04
 * void UIButtonScale__OnEnable (UIButtonScale_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIButtonScale$$OnEnable
   void UIButtonScale__OnEnable (UIButtonScale_o* __this, const MethodInfo* method); */

void native_UIButtonScale__OnEnable_c93e04(long param_1)

{
  uint uVar1;
  undefined8 uVar2;
  ulong uVar3;
  long lVar4;
  float fVar5;
  
  if ((bRam00000000013428a5 & 1) == 0) {
    native_sub_43273c(&UICamera_TypeInfo_12d6410);
    bRam00000000013428a5 = 1;
  }
  if (*(char *)(param_1 + 0x48) == '\0') {
    return;
  }
  uVar2 = native_UnityEngine_Component__get_gameObject_8da66c(param_1,0);
  if (((*(byte *)(_UICamera_TypeInfo_12d6410 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
    native_sub_4327ec(_UICamera_TypeInfo_12d6410);
  }
  uVar1 = native_UICamera__IsHighlighted_c92014(uVar2);
  uVar3 = native_UnityEngine_Behaviour__get_enabled_8d7acc(param_1,0);
  if ((uVar3 & 1) == 0) {
    return;
  }
  if (*(char *)(param_1 + 0x48) == '\0') {
    native_UIButtonScale__Start_c93d3c(param_1);
  }
  if (*(long *)(param_1 + 0x18) != 0) {
    uVar2 = native_UnityEngine_Component__get_gameObject_8da66c(*(long *)(param_1 + 0x18),0);
    uVar3 = *(ulong *)(param_1 + 0x3c);
    fVar5 = *(float *)(param_1 + 0x44);
    if ((uVar1 & 1) != 0) {
      uVar3 = CONCAT44((float)(uVar3 >> 0x20) *
                       (float)((ulong)*(undefined8 *)(param_1 + 0x20) >> 0x20),
                       (float)uVar3 * (float)*(undefined8 *)(param_1 + 0x20));
      fVar5 = fVar5 * *(float *)(param_1 + 0x28);
    }
    lVar4 = native_TweenScale__Begin_6e64cc
                      (*(undefined4 *)(param_1 + 0x38),uVar3,uVar3 >> 0x20,fVar5,uVar2,0);
    if (lVar4 != 0) {
      *(undefined4 *)(lVar4 + 0x18) = 3;
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* UIButtonScale$$OnDisable @ 0xc93f20
 * void UIButtonScale__OnDisable (UIButtonScale_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIButtonScale$$OnDisable
   void UIButtonScale__OnDisable (UIButtonScale_o* __this, const MethodInfo* method); */

void native_UIButtonScale__OnDisable_c93f20(long param_1)

{
  ulong uVar1;
  long lVar2;
  undefined8 uVar3;
  
  if ((bRam00000000013428a6 & 1) == 0) {
    native_sub_43273c(&Method_UnityEngine_Component_GetComponent_TweenScale____12e2b88);
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    bRam00000000013428a6 = 1;
  }
  if (*(char *)(param_1 + 0x48) != '\0') {
    uVar3 = *(undefined8 *)(param_1 + 0x18);
    if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    uVar1 = native_UnityEngine_Object__op_Inequality_8d76fc(uVar3,0,0);
    if ((uVar1 & 1) != 0) {
      if (*(long *)(param_1 + 0x18) != 0) {
        lVar2 = native_UnityEngine_Component__GetComponent_ActiveAnimation__49daec
                          (*(long *)(param_1 + 0x18),
                           _Method_UnityEngine_Component_GetComponent_TweenScale____12e2b88);
        if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
           (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
          native_sub_4327ec(_UnityEngine_Object_TypeInfo_12d54e0);
        }
        uVar1 = native_UnityEngine_Object__op_Inequality_8d76fc(lVar2,0,0);
        if ((uVar1 & 1) == 0) {
          return;
        }
        if (lVar2 != 0) {
          native_TweenScale__set_value_6e62dc
                    (*(undefined4 *)(param_1 + 0x3c),*(undefined4 *)(param_1 + 0x40),
                     *(undefined4 *)(param_1 + 0x44),lVar2,0);
          if (pcRam0000000001340948 == (code *)0x0) {
            pcRam0000000001340948 = (code *)native_sub_4326f0(&UNK_00e2c702);
          }
                    /* WARNING: Could not recover jumptable at 0x008d7b58. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*pcRam0000000001340948)(lVar2,0);
          return;
        }
      }
                    /* WARNING: Subroutine does not return */
      native_sub_432810();
    }
  }
  return;
}



/* UIButtonScale$$OnPress @ 0xc94034
 * void UIButtonScale__OnPress (UIButtonScale_o* __this, bool isPressed, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIButtonScale$$OnPress
   void UIButtonScale__OnPress (UIButtonScale_o* __this, bool isPressed, const MethodInfo* method);
    */

void native_UIButtonScale__OnPress_c94034(long param_1,ulong param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  float fVar5;
  undefined4 uVar6;
  
  if ((bRam00000000013428a7 & 1) == 0) {
    native_sub_43273c(&UICamera_TypeInfo_12d6410);
    bRam00000000013428a7 = 1;
  }
  uVar1 = native_UnityEngine_Behaviour__get_enabled_8d7acc(param_1,0);
  if ((uVar1 & 1) == 0) {
    return;
  }
  if (*(char *)(param_1 + 0x48) == '\0') {
    native_UIButtonScale__Start_c93d3c(param_1);
  }
  if (*(long *)(param_1 + 0x18) != 0) {
    uVar2 = native_UnityEngine_Component__get_gameObject_8da66c(*(long *)(param_1 + 0x18),0);
    uVar6 = *(undefined4 *)(param_1 + 0x38);
    if ((param_2 & 1) == 0) {
      uVar3 = native_UnityEngine_Component__get_gameObject_8da66c(param_1,0);
      if (((*(byte *)(_UICamera_TypeInfo_12d6410 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
        native_sub_4327ec(_UICamera_TypeInfo_12d6410);
      }
      uVar1 = native_UICamera__IsHighlighted_c92014(uVar3);
      uVar3 = *(undefined8 *)(param_1 + 0x3c);
      fVar5 = *(float *)(param_1 + 0x44);
      if ((uVar1 & 1) != 0) {
        uVar3 = CONCAT44((float)((ulong)uVar3 >> 0x20) *
                         (float)((ulong)*(undefined8 *)(param_1 + 0x20) >> 0x20),
                         (float)uVar3 * (float)*(undefined8 *)(param_1 + 0x20));
        fVar5 = fVar5 * *(float *)(param_1 + 0x28);
      }
    }
    else {
      uVar3 = CONCAT44((float)((ulong)*(undefined8 *)(param_1 + 0x3c) >> 0x20) *
                       (float)((ulong)*(undefined8 *)(param_1 + 0x2c) >> 0x20),
                       (float)*(undefined8 *)(param_1 + 0x3c) *
                       (float)*(undefined8 *)(param_1 + 0x2c));
      fVar5 = *(float *)(param_1 + 0x44) * *(float *)(param_1 + 0x34);
    }
    lVar4 = native_TweenScale__Begin_6e64cc(uVar6,uVar3,(int)((ulong)uVar3 >> 0x20),fVar5,uVar2,0);
    if (lVar4 != 0) {
      *(undefined4 *)(lVar4 + 0x18) = 3;
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* UIButtonScale$$OnHover @ 0xc93e98
 * void UIButtonScale__OnHover (UIButtonScale_o* __this, bool isOver, const MethodInfo* method); */

/* UIButtonScale$$OnHover
   void UIButtonScale__OnHover (UIButtonScale_o* __this, bool isOver, const MethodInfo* method); */

void native_UIButtonScale__OnHover_c93e98(long param_1,ulong param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  long lVar3;
  float fVar4;
  
  uVar1 = native_UnityEngine_Behaviour__get_enabled_8d7acc(param_1,0);
  if ((uVar1 & 1) == 0) {
    return;
  }
  if (*(char *)(param_1 + 0x48) == '\0') {
    native_UIButtonScale__Start_c93d3c(param_1);
  }
  if (*(long *)(param_1 + 0x18) != 0) {
    uVar2 = native_UnityEngine_Component__get_gameObject_8da66c(*(long *)(param_1 + 0x18),0);
    uVar1 = *(ulong *)(param_1 + 0x3c);
    fVar4 = *(float *)(param_1 + 0x44);
    if ((param_2 & 1) != 0) {
      uVar1 = CONCAT44((float)(uVar1 >> 0x20) *
                       (float)((ulong)*(undefined8 *)(param_1 + 0x20) >> 0x20),
                       (float)uVar1 * (float)*(undefined8 *)(param_1 + 0x20));
      fVar4 = fVar4 * *(float *)(param_1 + 0x28);
    }
    lVar3 = native_TweenScale__Begin_6e64cc
                      (*(undefined4 *)(param_1 + 0x38),uVar1,uVar1 >> 0x20,fVar4,uVar2,0);
    if (lVar3 != 0) {
      *(undefined4 *)(lVar3 + 0x18) = 3;
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* UIButtonScale$$OnSelect @ 0xc94158
 * void UIButtonScale__OnSelect (UIButtonScale_o* __this, bool isSelected, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIButtonScale$$OnSelect
   void UIButtonScale__OnSelect (UIButtonScale_o* __this, bool isSelected, const MethodInfo*
   method); */

void native_UIButtonScale__OnSelect_c94158(long param_1,ulong param_2)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  ulong uVar4;
  float fVar5;
  
  if ((bRam00000000013428a8 & 1) == 0) {
    native_sub_43273c(&UICamera_TypeInfo_12d6410);
    bRam00000000013428a8 = 1;
  }
  uVar4 = native_UnityEngine_Behaviour__get_enabled_8d7acc(param_1,0);
  if ((uVar4 & 1) == 0) {
    return;
  }
  if ((param_2 & 1) != 0) {
    if (((*(byte *)(_UICamera_TypeInfo_12d6410 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    iVar1 = native_UICamera__get_currentScheme_c92518();
    if (iVar1 != 2) {
      return;
    }
  }
  uVar4 = native_UnityEngine_Behaviour__get_enabled_8d7acc(param_1,0);
  if ((uVar4 & 1) == 0) {
    return;
  }
  if (*(char *)(param_1 + 0x48) == '\0') {
    native_UIButtonScale__Start_c93d3c(param_1);
  }
  if (*(long *)(param_1 + 0x18) != 0) {
    uVar2 = native_UnityEngine_Component__get_gameObject_8da66c(*(long *)(param_1 + 0x18),0);
    uVar4 = *(ulong *)(param_1 + 0x3c);
    fVar5 = *(float *)(param_1 + 0x44);
    if ((param_2 & 1) != 0) {
      uVar4 = CONCAT44((float)(uVar4 >> 0x20) *
                       (float)((ulong)*(undefined8 *)(param_1 + 0x20) >> 0x20),
                       (float)uVar4 * (float)*(undefined8 *)(param_1 + 0x20));
      fVar5 = fVar5 * *(float *)(param_1 + 0x28);
    }
    lVar3 = native_TweenScale__Begin_6e64cc
                      (*(undefined4 *)(param_1 + 0x38),uVar4,uVar4 >> 0x20,fVar5,uVar2,0);
    if (lVar3 != 0) {
      *(undefined4 *)(lVar3 + 0x18) = 3;
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* UIButtonScale$$.ctor @ 0xc941f8
 * void UIButtonScale___ctor (UIButtonScale_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIButtonScale$$.ctor
   void UIButtonScale___ctor (UIButtonScale_o* __this, const MethodInfo* method); */

undefined1  [16] native_UIButtonScale___ctor_c941f8(ulong param_1)

{
  undefined1 auVar1 [16];
  
  *(undefined8 *)(param_1 + 0x30) = 0x3f8666663f866666;
  *(undefined8 *)(param_1 + 0x28) = 0x3f8666663f8ccccd;
  *(undefined8 *)(param_1 + 0x20) = 0x3f8ccccd3f8ccccd;
  *(undefined4 *)(param_1 + 0x38) = 0x3e4ccccd;
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


