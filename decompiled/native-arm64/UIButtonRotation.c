/* ARM64 IL2CPP native pseudocode from Ghidra.
 * Recovered implementation, not original C# source.
 * Function boundaries follow the IL2CPP method address table. */


/* UIButtonRotation$$Start @ 0xc93774
 * void UIButtonRotation__Start (UIButtonRotation_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIButtonRotation$$Start
   void UIButtonRotation__Start (UIButtonRotation_o* __this, const MethodInfo* method); */

void native_UIButtonRotation__Start_c93774
               (undefined1 param_1 [16],undefined4 param_2,undefined4 param_3,undefined4 param_4,
               long param_5)

{
  ulong uVar1;
  undefined8 uVar2;
  long *plVar3;
  long lVar4;
  undefined4 uVar5;
  
  if ((bRam000000000134289f & 1) == 0) {
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    bRam000000000134289f = 1;
  }
  if (*(char *)(param_5 + 0x4c) == '\0') {
    plVar3 = (long *)(param_5 + 0x18);
    lVar4 = *plVar3;
    *(undefined1 *)(param_5 + 0x4c) = 1;
    if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    uVar1 = native_UnityEngine_Object__op_Equality_8e9a3c(lVar4,0,0);
    if ((uVar1 & 1) != 0) {
      uVar2 = native_UnityEngine_Component__get_transform_8da62c(param_5,0);
      *(undefined8 *)(param_5 + 0x18) = uVar2;
      native_sub_4326e0(plVar3,uVar2);
    }
    if (*plVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      native_sub_432810();
    }
    uVar5 = native_UnityEngine_Transform__get_localRotation_771c84(*plVar3,0);
    *(undefined4 *)(param_5 + 0x3c) = uVar5;
    *(undefined4 *)(param_5 + 0x40) = param_2;
    *(undefined4 *)(param_5 + 0x44) = param_3;
    *(undefined4 *)(param_5 + 0x48) = param_4;
  }
  return;
}



/* UIButtonRotation$$OnEnable @ 0xc9383c
 * void UIButtonRotation__OnEnable (UIButtonRotation_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIButtonRotation$$OnEnable
   void UIButtonRotation__OnEnable (UIButtonRotation_o* __this, const MethodInfo* method); */

void native_UIButtonRotation__OnEnable_c9383c(long param_1)

{
  uint uVar1;
  undefined8 uVar2;
  ulong uVar3;
  long lVar4;
  undefined8 uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  undefined8 in_d3;
  ulong uVar10;
  undefined4 uVar11;
  
  if ((bRam00000000013428a0 & 1) == 0) {
    native_sub_43273c(&UICamera_TypeInfo_12d6410);
    bRam00000000013428a0 = 1;
  }
  if (*(char *)(param_1 + 0x4c) == '\0') {
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
  if (*(char *)(param_1 + 0x4c) == '\0') {
    native_UIButtonRotation__Start_c93774(param_1);
  }
  if (*(long *)(param_1 + 0x18) != 0) {
    uVar2 = native_UnityEngine_Component__get_gameObject_8da66c(*(long *)(param_1 + 0x18),0);
    uVar11 = *(undefined4 *)(param_1 + 0x38);
    uVar3 = (ulong)*(uint *)(param_1 + 0x3c);
    uVar7 = (ulong)*(uint *)(param_1 + 0x40);
    uVar9 = (ulong)*(uint *)(param_1 + 0x44);
    uVar10 = (ulong)*(uint *)(param_1 + 0x48);
    if ((uVar1 & 1) != 0) {
      uVar6 = (ulong)*(uint *)(param_1 + 0x24);
      uVar8 = (ulong)*(uint *)(param_1 + 0x28);
      uVar5 = native_UnityEngine_Quaternion__Euler_762bdc
                        (*(undefined4 *)(param_1 + 0x20),uVar6,uVar8,0);
      uVar3 = native_UnityEngine_Quaternion__op_Multiply_76294c
                        (uVar3,uVar7,uVar9,uVar10,uVar5,uVar6,uVar8,in_d3,0);
    }
    lVar4 = native_TweenRotation__Begin_6e6044(uVar11,uVar3,uVar7,uVar9,uVar10,uVar2,0);
    if (lVar4 != 0) {
      *(undefined4 *)(lVar4 + 0x18) = 3;
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* UIButtonRotation$$OnDisable @ 0xc939c8
 * void UIButtonRotation__OnDisable (UIButtonRotation_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIButtonRotation$$OnDisable
   void UIButtonRotation__OnDisable (UIButtonRotation_o* __this, const MethodInfo* method); */

void native_UIButtonRotation__OnDisable_c939c8(long param_1)

{
  ulong uVar1;
  long lVar2;
  undefined8 uVar3;
  
  if ((bRam00000000013428a1 & 1) == 0) {
    native_sub_43273c(&Method_UnityEngine_Component_GetComponent_TweenRotation____12e2b80);
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    bRam00000000013428a1 = 1;
  }
  if (*(char *)(param_1 + 0x4c) != '\0') {
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
                           _Method_UnityEngine_Component_GetComponent_TweenRotation____12e2b80);
        if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
           (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
          native_sub_4327ec(_UnityEngine_Object_TypeInfo_12d54e0);
        }
        uVar1 = native_UnityEngine_Object__op_Inequality_8d76fc(lVar2,0,0);
        if ((uVar1 & 1) == 0) {
          return;
        }
        if (lVar2 != 0) {
          native_TweenRotation__set_value_6e5ee8
                    (*(undefined4 *)(param_1 + 0x3c),*(undefined4 *)(param_1 + 0x40),
                     *(undefined4 *)(param_1 + 0x44),*(undefined4 *)(param_1 + 0x48),lVar2,0);
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



/* UIButtonRotation$$OnPress @ 0xc93adc
 * void UIButtonRotation__OnPress (UIButtonRotation_o* __this, bool isPressed, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIButtonRotation$$OnPress
   void UIButtonRotation__OnPress (UIButtonRotation_o* __this, bool isPressed, const MethodInfo*
   method); */

void native_UIButtonRotation__OnPress_c93adc(long param_1,ulong param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  ulong uVar6;
  uint uVar7;
  ulong uVar8;
  uint uVar9;
  ulong uVar11;
  undefined8 in_d3;
  ulong uVar12;
  undefined4 uVar13;
  ulong uVar10;
  
  if ((bRam00000000013428a2 & 1) == 0) {
    native_sub_43273c(&UICamera_TypeInfo_12d6410);
    bRam00000000013428a2 = 1;
  }
  uVar1 = native_UnityEngine_Behaviour__get_enabled_8d7acc(param_1,0);
  if ((uVar1 & 1) == 0) {
    return;
  }
  if (*(char *)(param_1 + 0x4c) == '\0') {
    native_UIButtonRotation__Start_c93774(param_1);
  }
  if (*(long *)(param_1 + 0x18) == 0) goto LAB_00c93c48;
  uVar2 = native_UnityEngine_Component__get_gameObject_8da66c(*(long *)(param_1 + 0x18),0);
  uVar13 = *(undefined4 *)(param_1 + 0x38);
  if ((param_2 & 1) == 0) {
    uVar5 = native_UnityEngine_Component__get_gameObject_8da66c(param_1,0);
    if (((*(byte *)(_UICamera_TypeInfo_12d6410 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
      native_sub_4327ec(_UICamera_TypeInfo_12d6410);
    }
    uVar1 = native_UICamera__IsHighlighted_c92014(uVar5);
    uVar6 = (ulong)*(uint *)(param_1 + 0x3c);
    uVar8 = (ulong)*(uint *)(param_1 + 0x40);
    uVar11 = (ulong)*(uint *)(param_1 + 0x44);
    uVar12 = (ulong)*(uint *)(param_1 + 0x48);
    if ((uVar1 & 1) != 0) {
      uVar4 = *(undefined4 *)(param_1 + 0x20);
      uVar7 = *(uint *)(param_1 + 0x24);
      uVar9 = *(uint *)(param_1 + 0x28);
      goto LAB_00c93bc0;
    }
  }
  else {
    uVar6 = (ulong)*(uint *)(param_1 + 0x3c);
    uVar8 = (ulong)*(uint *)(param_1 + 0x40);
    uVar11 = (ulong)*(uint *)(param_1 + 0x44);
    uVar12 = (ulong)*(uint *)(param_1 + 0x48);
    uVar4 = *(undefined4 *)(param_1 + 0x2c);
    uVar7 = *(uint *)(param_1 + 0x30);
    uVar9 = *(uint *)(param_1 + 0x34);
LAB_00c93bc0:
    uVar10 = (ulong)uVar9;
    uVar1 = (ulong)uVar7;
    uVar5 = native_UnityEngine_Quaternion__Euler_762bdc(uVar4,uVar1,uVar10,0);
    uVar6 = native_UnityEngine_Quaternion__op_Multiply_76294c
                      (uVar6,uVar8,uVar11,uVar12,uVar5,uVar1,uVar10,in_d3,0);
  }
  lVar3 = native_TweenRotation__Begin_6e6044(uVar13,uVar6,uVar8,uVar11,uVar12,uVar2,0);
  if (lVar3 != 0) {
    *(undefined4 *)(lVar3 + 0x18) = 3;
    return;
  }
LAB_00c93c48:
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* UIButtonRotation$$OnHover @ 0xc938d0
 * void UIButtonRotation__OnHover (UIButtonRotation_o* __this, bool isOver, const MethodInfo* method); */

/* UIButtonRotation$$OnHover
   void UIButtonRotation__OnHover (UIButtonRotation_o* __this, bool isOver, const MethodInfo*
   method); */

void native_UIButtonRotation__OnHover_c938d0(long param_1,ulong param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  undefined8 in_d3;
  ulong uVar9;
  undefined4 uVar10;
  
  uVar1 = native_UnityEngine_Behaviour__get_enabled_8d7acc(param_1,0);
  if ((uVar1 & 1) == 0) {
    return;
  }
  if (*(char *)(param_1 + 0x4c) == '\0') {
    native_UIButtonRotation__Start_c93774(param_1);
  }
  if (*(long *)(param_1 + 0x18) != 0) {
    uVar2 = native_UnityEngine_Component__get_gameObject_8da66c(*(long *)(param_1 + 0x18),0);
    uVar10 = *(undefined4 *)(param_1 + 0x38);
    uVar1 = (ulong)*(uint *)(param_1 + 0x3c);
    uVar6 = (ulong)*(uint *)(param_1 + 0x40);
    uVar8 = (ulong)*(uint *)(param_1 + 0x44);
    uVar9 = (ulong)*(uint *)(param_1 + 0x48);
    if ((param_2 & 1) != 0) {
      uVar5 = (ulong)*(uint *)(param_1 + 0x24);
      uVar7 = (ulong)*(uint *)(param_1 + 0x28);
      uVar4 = native_UnityEngine_Quaternion__Euler_762bdc
                        (*(undefined4 *)(param_1 + 0x20),uVar5,uVar7,0);
      uVar1 = native_UnityEngine_Quaternion__op_Multiply_76294c
                        (uVar1,uVar6,uVar8,uVar9,uVar4,uVar5,uVar7,in_d3,0);
    }
    lVar3 = native_TweenRotation__Begin_6e6044(uVar10,uVar1,uVar6,uVar8,uVar9,uVar2,0);
    if (lVar3 != 0) {
      *(undefined4 *)(lVar3 + 0x18) = 3;
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* UIButtonRotation$$OnSelect @ 0xc93c4c
 * void UIButtonRotation__OnSelect (UIButtonRotation_o* __this, bool isSelected, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIButtonRotation$$OnSelect
   void UIButtonRotation__OnSelect (UIButtonRotation_o* __this, bool isSelected, const MethodInfo*
   method); */

void native_UIButtonRotation__OnSelect_c93c4c(long param_1,ulong param_2)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  ulong uVar4;
  undefined8 uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  undefined8 in_d3;
  undefined4 uVar11;
  
  if ((bRam00000000013428a3 & 1) == 0) {
    native_sub_43273c(&UICamera_TypeInfo_12d6410);
    bRam00000000013428a3 = 1;
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
  if (*(char *)(param_1 + 0x4c) == '\0') {
    native_UIButtonRotation__Start_c93774(param_1);
  }
  if (*(long *)(param_1 + 0x18) != 0) {
    uVar2 = native_UnityEngine_Component__get_gameObject_8da66c(*(long *)(param_1 + 0x18),0);
    uVar11 = *(undefined4 *)(param_1 + 0x38);
    uVar4 = (ulong)*(uint *)(param_1 + 0x3c);
    uVar7 = (ulong)*(uint *)(param_1 + 0x40);
    uVar9 = (ulong)*(uint *)(param_1 + 0x44);
    uVar10 = (ulong)*(uint *)(param_1 + 0x48);
    if ((param_2 & 1) != 0) {
      uVar6 = (ulong)*(uint *)(param_1 + 0x24);
      uVar8 = (ulong)*(uint *)(param_1 + 0x28);
      uVar5 = native_UnityEngine_Quaternion__Euler_762bdc
                        (*(undefined4 *)(param_1 + 0x20),uVar6,uVar8,0);
      uVar4 = native_UnityEngine_Quaternion__op_Multiply_76294c
                        (uVar4,uVar7,uVar9,uVar10,uVar5,uVar6,uVar8,in_d3,0);
    }
    lVar3 = native_TweenRotation__Begin_6e6044(uVar11,uVar4,uVar7,uVar9,uVar10,uVar2,0);
    if (lVar3 != 0) {
      *(undefined4 *)(lVar3 + 0x18) = 3;
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* UIButtonRotation$$.ctor @ 0xc93cec
 * void UIButtonRotation___ctor (UIButtonRotation_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIButtonRotation$$.ctor
   void UIButtonRotation___ctor (UIButtonRotation_o* __this, const MethodInfo* method); */

undefined1  [16]
native_UIButtonRotation___ctor_c93cec
          (undefined1 param_1 [16],undefined4 param_2,undefined4 param_3,ulong param_4)

{
  undefined4 uVar1;
  undefined1 auVar2 [16];
  
  uVar1 = native_UnityEngine_Vector3__get_zero_776668(0);
  *(undefined4 *)(param_4 + 0x20) = uVar1;
  *(undefined4 *)(param_4 + 0x24) = param_2;
  *(undefined4 *)(param_4 + 0x28) = param_3;
  uVar1 = native_UnityEngine_Vector3__get_zero_776668(0);
  *(undefined4 *)(param_4 + 0x2c) = uVar1;
  *(undefined4 *)(param_4 + 0x30) = param_2;
  *(undefined4 *)(param_4 + 0x34) = param_3;
  *(undefined4 *)(param_4 + 0x38) = 0x3e4ccccd;
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


