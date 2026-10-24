/* ARM64 IL2CPP native pseudocode from Ghidra.
 * Recovered implementation, not original C# source.
 * Function boundaries follow the IL2CPP method address table. */


/* UIButtonMessage$$Start @ 0xc92d94
 * void UIButtonMessage__Start (UIButtonMessage_o* __this, const MethodInfo* method); */

/* UIButtonMessage$$Start
   void UIButtonMessage__Start (UIButtonMessage_o* __this, const MethodInfo* method); */

void native_UIButtonMessage__Start_c92d94(long param_1)

{
  *(undefined1 *)(param_1 + 0x2d) = 1;
  return;
}



/* UIButtonMessage$$OnEnable @ 0xc92da0
 * void UIButtonMessage__OnEnable (UIButtonMessage_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIButtonMessage$$OnEnable
   void UIButtonMessage__OnEnable (UIButtonMessage_o* __this, const MethodInfo* method); */

void native_UIButtonMessage__OnEnable_c92da0(long param_1)

{
  uint uVar1;
  undefined8 uVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  int iVar7;
  
  if ((bRam0000000001342897 & 1) == 0) {
    native_sub_43273c(&UICamera_TypeInfo_12d6410);
    bRam0000000001342897 = 1;
  }
  if (*(char *)(param_1 + 0x2d) == '\0') {
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
  if ((uVar1 & 1) == 0) {
    if (*(int *)(param_1 + 0x28) != 2) {
      return;
    }
  }
  else if (*(int *)(param_1 + 0x28) != 1) {
    return;
  }
  if ((bRam0000000001342899 & 1) == 0) {
    native_sub_43273c(&Method_UnityEngine_GameObject_GetComponentsInChildren_Transform____12e4b68);
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    bRam0000000001342899 = 1;
  }
  uVar3 = native_System_String__IsNullOrEmpty_b09430(*(undefined8 *)(param_1 + 0x20),0);
  if ((uVar3 & 1) != 0) {
    return;
  }
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar3 = native_UnityEngine_Object__op_Equality_8e9a3c(uVar2,0,0);
  if ((uVar3 & 1) != 0) {
    uVar2 = native_UnityEngine_Component__get_gameObject_8da66c(param_1,0);
    *(undefined8 *)(param_1 + 0x18) = uVar2;
    native_sub_4326e0((undefined8 *)(param_1 + 0x18),uVar2);
  }
  lVar5 = *(long *)(param_1 + 0x18);
  if (*(char *)(param_1 + 0x2c) == '\0') {
    uVar6 = *(undefined8 *)(param_1 + 0x20);
    uVar2 = native_UnityEngine_Component__get_gameObject_8da66c(param_1,0);
    if (lVar5 != 0) {
      if (pcRam0000000001340c20 == (code *)0x0) {
        pcRam0000000001340c20 = (code *)native_sub_4326f0(&UNK_00e2db43,uVar6,uVar2,1);
      }
                    /* WARNING: Could not recover jumptable at 0x008de524. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*pcRam0000000001340c20)(lVar5,uVar6,uVar2,1);
      return;
    }
  }
  else if ((lVar5 != 0) &&
          (lVar5 = native_UnityEngine_GameObject__GetComponentsInChildren_Collider__4a2650
                             (lVar5,
                              _Method_UnityEngine_GameObject_GetComponentsInChildren_Transform____12e4b68
                             ), lVar5 != 0)) {
    iVar7 = (int)*(undefined8 *)(lVar5 + 0x18);
    if (iVar7 < 1) {
      return;
    }
    if (iVar7 != 0) {
      uVar1 = 0;
      do {
        lVar4 = *(long *)(lVar5 + (long)(int)uVar1 * 8 + 0x20);
        if (lVar4 == 0) goto LAB_00c9302c;
        lVar4 = native_UnityEngine_Component__get_gameObject_8da66c(lVar4,0);
        uVar6 = *(undefined8 *)(param_1 + 0x20);
        uVar2 = native_UnityEngine_Component__get_gameObject_8da66c(param_1,0);
        if (lVar4 == 0) goto LAB_00c9302c;
        native_UnityEngine_GameObject__SendMessage_8de4c0(lVar4,uVar6,uVar2,1,0);
        uVar1 = uVar1 + 1;
        if (iVar7 <= (int)uVar1) {
          return;
        }
      } while (uVar1 < *(uint *)(lVar5 + 0x18));
    }
    uVar2 = native_sub_43283c();
                    /* WARNING: Subroutine does not return */
    native_sub_4327dc(uVar2,0);
  }
LAB_00c9302c:
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* UIButtonMessage$$OnHover @ 0xc92e34
 * void UIButtonMessage__OnHover (UIButtonMessage_o* __this, bool isOver, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIButtonMessage$$OnHover
   void UIButtonMessage__OnHover (UIButtonMessage_o* __this, bool isOver, const MethodInfo* method);
    */

void native_UIButtonMessage__OnHover_c92e34(long param_1,ulong param_2)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  int iVar6;
  uint uVar7;
  
  uVar1 = native_UnityEngine_Behaviour__get_enabled_8d7acc(param_1,0);
  if ((uVar1 & 1) == 0) {
    return;
  }
  if ((param_2 & 1) == 0) {
    if (*(int *)(param_1 + 0x28) != 2) {
      return;
    }
  }
  else if (*(int *)(param_1 + 0x28) != 1) {
    return;
  }
  if ((bRam0000000001342899 & 1) == 0) {
    native_sub_43273c(&Method_UnityEngine_GameObject_GetComponentsInChildren_Transform____12e4b68);
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    bRam0000000001342899 = 1;
  }
  uVar1 = native_System_String__IsNullOrEmpty_b09430(*(undefined8 *)(param_1 + 0x20),0);
  if ((uVar1 & 1) != 0) {
    return;
  }
  uVar4 = *(undefined8 *)(param_1 + 0x18);
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar1 = native_UnityEngine_Object__op_Equality_8e9a3c(uVar4,0,0);
  if ((uVar1 & 1) != 0) {
    uVar4 = native_UnityEngine_Component__get_gameObject_8da66c(param_1,0);
    *(undefined8 *)(param_1 + 0x18) = uVar4;
    native_sub_4326e0((undefined8 *)(param_1 + 0x18),uVar4);
  }
  lVar3 = *(long *)(param_1 + 0x18);
  if (*(char *)(param_1 + 0x2c) == '\0') {
    uVar5 = *(undefined8 *)(param_1 + 0x20);
    uVar4 = native_UnityEngine_Component__get_gameObject_8da66c(param_1,0);
    if (lVar3 != 0) {
      if (pcRam0000000001340c20 == (code *)0x0) {
        pcRam0000000001340c20 = (code *)native_sub_4326f0(&UNK_00e2db43,uVar5,uVar4,1);
      }
                    /* WARNING: Could not recover jumptable at 0x008de524. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*pcRam0000000001340c20)(lVar3,uVar5,uVar4,1);
      return;
    }
  }
  else if ((lVar3 != 0) &&
          (lVar3 = native_UnityEngine_GameObject__GetComponentsInChildren_Collider__4a2650
                             (lVar3,
                              _Method_UnityEngine_GameObject_GetComponentsInChildren_Transform____12e4b68
                             ), lVar3 != 0)) {
    iVar6 = (int)*(undefined8 *)(lVar3 + 0x18);
    if (iVar6 < 1) {
      return;
    }
    if (iVar6 != 0) {
      uVar7 = 0;
      do {
        lVar2 = *(long *)(lVar3 + (long)(int)uVar7 * 8 + 0x20);
        if (lVar2 == 0) goto LAB_00c9302c;
        lVar2 = native_UnityEngine_Component__get_gameObject_8da66c(lVar2,0);
        uVar5 = *(undefined8 *)(param_1 + 0x20);
        uVar4 = native_UnityEngine_Component__get_gameObject_8da66c(param_1,0);
        if (lVar2 == 0) goto LAB_00c9302c;
        native_UnityEngine_GameObject__SendMessage_8de4c0(lVar2,uVar5,uVar4,1,0);
        uVar7 = uVar7 + 1;
        if (iVar6 <= (int)uVar7) {
          return;
        }
      } while (uVar7 < *(uint *)(lVar3 + 0x18));
    }
    uVar4 = native_sub_43283c();
                    /* WARNING: Subroutine does not return */
    native_sub_4327dc(uVar4,0);
  }
LAB_00c9302c:
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* UIButtonMessage$$OnPress @ 0xc93030
 * void UIButtonMessage__OnPress (UIButtonMessage_o* __this, bool isPressed, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIButtonMessage$$OnPress
   void UIButtonMessage__OnPress (UIButtonMessage_o* __this, bool isPressed, const MethodInfo*
   method); */

void native_UIButtonMessage__OnPress_c93030(long param_1,ulong param_2)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  int iVar6;
  uint uVar7;
  
  uVar2 = native_UnityEngine_Behaviour__get_enabled_8d7acc(param_1,0);
  if ((uVar2 & 1) == 0) {
    return;
  }
  if ((param_2 & 1) == 0) {
    if (*(int *)(param_1 + 0x28) != 4) {
      return;
    }
  }
  else if (*(int *)(param_1 + 0x28) != 3) {
    return;
  }
  if ((bRam0000000001342899 & 1) == 0) {
    native_sub_43273c(&Method_UnityEngine_GameObject_GetComponentsInChildren_Transform____12e4b68);
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    bRam0000000001342899 = 1;
  }
  uVar2 = native_System_String__IsNullOrEmpty_b09430(*(undefined8 *)(param_1 + 0x20),0);
  if ((uVar2 & 1) != 0) {
    return;
  }
  uVar4 = *(undefined8 *)(param_1 + 0x18);
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar2 = native_UnityEngine_Object__op_Equality_8e9a3c(uVar4,0,0);
  if ((uVar2 & 1) != 0) {
    uVar4 = native_UnityEngine_Component__get_gameObject_8da66c(param_1,0);
    *(undefined8 *)(param_1 + 0x18) = uVar4;
    native_sub_4326e0((undefined8 *)(param_1 + 0x18),uVar4);
  }
  lVar3 = *(long *)(param_1 + 0x18);
  if (*(char *)(param_1 + 0x2c) == '\0') {
    uVar5 = *(undefined8 *)(param_1 + 0x20);
    uVar4 = native_UnityEngine_Component__get_gameObject_8da66c(param_1,0);
    if (lVar3 != 0) {
      if (pcRam0000000001340c20 == (code *)0x0) {
        pcRam0000000001340c20 = (code *)native_sub_4326f0(&UNK_00e2db43,uVar5,uVar4,1);
      }
                    /* WARNING: Could not recover jumptable at 0x008de524. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*pcRam0000000001340c20)(lVar3,uVar5,uVar4,1);
      return;
    }
  }
  else if ((lVar3 != 0) &&
          (lVar3 = native_UnityEngine_GameObject__GetComponentsInChildren_Collider__4a2650
                             (lVar3,
                              _Method_UnityEngine_GameObject_GetComponentsInChildren_Transform____12e4b68
                             ), lVar3 != 0)) {
    iVar6 = (int)*(undefined8 *)(lVar3 + 0x18);
    if (iVar6 < 1) {
      return;
    }
    if (iVar6 != 0) {
      uVar7 = 0;
      do {
        lVar1 = *(long *)(lVar3 + (long)(int)uVar7 * 8 + 0x20);
        if (lVar1 == 0) goto LAB_00c9302c;
        lVar1 = native_UnityEngine_Component__get_gameObject_8da66c(lVar1,0);
        uVar5 = *(undefined8 *)(param_1 + 0x20);
        uVar4 = native_UnityEngine_Component__get_gameObject_8da66c(param_1,0);
        if (lVar1 == 0) goto LAB_00c9302c;
        native_UnityEngine_GameObject__SendMessage_8de4c0(lVar1,uVar5,uVar4,1,0);
        uVar7 = uVar7 + 1;
        if (iVar6 <= (int)uVar7) {
          return;
        }
      } while (uVar7 < *(uint *)(lVar3 + 0x18));
    }
    uVar4 = native_sub_43283c();
                    /* WARNING: Subroutine does not return */
    native_sub_4327dc(uVar4,0);
  }
LAB_00c9302c:
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* UIButtonMessage$$OnSelect @ 0xc93084
 * void UIButtonMessage__OnSelect (UIButtonMessage_o* __this, bool isSelected, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIButtonMessage$$OnSelect
   void UIButtonMessage__OnSelect (UIButtonMessage_o* __this, bool isSelected, const MethodInfo*
   method); */

void native_UIButtonMessage__OnSelect_c93084(long param_1,ulong param_2)

{
  int iVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  uint uVar7;
  
  if ((bRam0000000001342898 & 1) == 0) {
    native_sub_43273c(&UICamera_TypeInfo_12d6410);
    bRam0000000001342898 = 1;
  }
  uVar3 = native_UnityEngine_Behaviour__get_enabled_8d7acc(param_1,0);
  if ((uVar3 & 1) == 0) {
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
  uVar3 = native_UnityEngine_Behaviour__get_enabled_8d7acc(param_1,0);
  if ((uVar3 & 1) == 0) {
    return;
  }
  if ((param_2 & 1) == 0) {
    if (*(int *)(param_1 + 0x28) != 2) {
      return;
    }
  }
  else if (*(int *)(param_1 + 0x28) != 1) {
    return;
  }
  if ((bRam0000000001342899 & 1) == 0) {
    native_sub_43273c(&Method_UnityEngine_GameObject_GetComponentsInChildren_Transform____12e4b68);
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    bRam0000000001342899 = 1;
  }
  uVar3 = native_System_String__IsNullOrEmpty_b09430(*(undefined8 *)(param_1 + 0x20),0);
  if ((uVar3 & 1) != 0) {
    return;
  }
  uVar5 = *(undefined8 *)(param_1 + 0x18);
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar3 = native_UnityEngine_Object__op_Equality_8e9a3c(uVar5,0,0);
  if ((uVar3 & 1) != 0) {
    uVar5 = native_UnityEngine_Component__get_gameObject_8da66c(param_1,0);
    *(undefined8 *)(param_1 + 0x18) = uVar5;
    native_sub_4326e0((undefined8 *)(param_1 + 0x18),uVar5);
  }
  lVar4 = *(long *)(param_1 + 0x18);
  if (*(char *)(param_1 + 0x2c) == '\0') {
    uVar6 = *(undefined8 *)(param_1 + 0x20);
    uVar5 = native_UnityEngine_Component__get_gameObject_8da66c(param_1,0);
    if (lVar4 != 0) {
      if (pcRam0000000001340c20 == (code *)0x0) {
        pcRam0000000001340c20 = (code *)native_sub_4326f0(&UNK_00e2db43,uVar6,uVar5,1);
      }
                    /* WARNING: Could not recover jumptable at 0x008de524. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*pcRam0000000001340c20)(lVar4,uVar6,uVar5,1);
      return;
    }
  }
  else if ((lVar4 != 0) &&
          (lVar4 = native_UnityEngine_GameObject__GetComponentsInChildren_Collider__4a2650
                             (lVar4,
                              _Method_UnityEngine_GameObject_GetComponentsInChildren_Transform____12e4b68
                             ), lVar4 != 0)) {
    iVar1 = (int)*(undefined8 *)(lVar4 + 0x18);
    if (iVar1 < 1) {
      return;
    }
    if (iVar1 != 0) {
      uVar7 = 0;
      do {
        lVar2 = *(long *)(lVar4 + (long)(int)uVar7 * 8 + 0x20);
        if (lVar2 == 0) goto LAB_00c9302c;
        lVar2 = native_UnityEngine_Component__get_gameObject_8da66c(lVar2,0);
        uVar6 = *(undefined8 *)(param_1 + 0x20);
        uVar5 = native_UnityEngine_Component__get_gameObject_8da66c(param_1,0);
        if (lVar2 == 0) goto LAB_00c9302c;
        native_UnityEngine_GameObject__SendMessage_8de4c0(lVar2,uVar6,uVar5,1,0);
        uVar7 = uVar7 + 1;
        if (iVar1 <= (int)uVar7) {
          return;
        }
      } while (uVar7 < *(uint *)(lVar4 + 0x18));
    }
    uVar5 = native_sub_43283c();
                    /* WARNING: Subroutine does not return */
    native_sub_4327dc(uVar5,0);
  }
LAB_00c9302c:
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* UIButtonMessage$$OnClick @ 0xc93124
 * void UIButtonMessage__OnClick (UIButtonMessage_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIButtonMessage$$OnClick
   void UIButtonMessage__OnClick (UIButtonMessage_o* __this, const MethodInfo* method); */

void native_UIButtonMessage__OnClick_c93124(long param_1)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  int iVar6;
  uint uVar7;
  
  uVar2 = native_UnityEngine_Behaviour__get_enabled_8d7acc(param_1,0);
  if (((uVar2 & 1) == 0) || (*(int *)(param_1 + 0x28) != 0)) {
    return;
  }
  if ((bRam0000000001342899 & 1) == 0) {
    native_sub_43273c(&Method_UnityEngine_GameObject_GetComponentsInChildren_Transform____12e4b68);
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    bRam0000000001342899 = 1;
  }
  uVar2 = native_System_String__IsNullOrEmpty_b09430(*(undefined8 *)(param_1 + 0x20),0);
  if ((uVar2 & 1) != 0) {
    return;
  }
  uVar4 = *(undefined8 *)(param_1 + 0x18);
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar2 = native_UnityEngine_Object__op_Equality_8e9a3c(uVar4,0,0);
  if ((uVar2 & 1) != 0) {
    uVar4 = native_UnityEngine_Component__get_gameObject_8da66c(param_1,0);
    *(undefined8 *)(param_1 + 0x18) = uVar4;
    native_sub_4326e0((undefined8 *)(param_1 + 0x18),uVar4);
  }
  lVar3 = *(long *)(param_1 + 0x18);
  if (*(char *)(param_1 + 0x2c) == '\0') {
    uVar5 = *(undefined8 *)(param_1 + 0x20);
    uVar4 = native_UnityEngine_Component__get_gameObject_8da66c(param_1,0);
    if (lVar3 != 0) {
      if (pcRam0000000001340c20 == (code *)0x0) {
        pcRam0000000001340c20 = (code *)native_sub_4326f0(&UNK_00e2db43,uVar5,uVar4,1);
      }
                    /* WARNING: Could not recover jumptable at 0x008de524. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*pcRam0000000001340c20)(lVar3,uVar5,uVar4,1);
      return;
    }
  }
  else if ((lVar3 != 0) &&
          (lVar3 = native_UnityEngine_GameObject__GetComponentsInChildren_Collider__4a2650
                             (lVar3,
                              _Method_UnityEngine_GameObject_GetComponentsInChildren_Transform____12e4b68
                             ), lVar3 != 0)) {
    iVar6 = (int)*(undefined8 *)(lVar3 + 0x18);
    if (iVar6 < 1) {
      return;
    }
    if (iVar6 != 0) {
      uVar7 = 0;
      do {
        lVar1 = *(long *)(lVar3 + (long)(int)uVar7 * 8 + 0x20);
        if (lVar1 == 0) goto LAB_00c9302c;
        lVar1 = native_UnityEngine_Component__get_gameObject_8da66c(lVar1,0);
        uVar5 = *(undefined8 *)(param_1 + 0x20);
        uVar4 = native_UnityEngine_Component__get_gameObject_8da66c(param_1,0);
        if (lVar1 == 0) goto LAB_00c9302c;
        native_UnityEngine_GameObject__SendMessage_8de4c0(lVar1,uVar5,uVar4,1,0);
        uVar7 = uVar7 + 1;
        if (iVar6 <= (int)uVar7) {
          return;
        }
      } while (uVar7 < *(uint *)(lVar3 + 0x18));
    }
    uVar4 = native_sub_43283c();
                    /* WARNING: Subroutine does not return */
    native_sub_4327dc(uVar4,0);
  }
LAB_00c9302c:
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* UIButtonMessage$$OnDoubleClick @ 0xc93164
 * void UIButtonMessage__OnDoubleClick (UIButtonMessage_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIButtonMessage$$OnDoubleClick
   void UIButtonMessage__OnDoubleClick (UIButtonMessage_o* __this, const MethodInfo* method); */

void native_UIButtonMessage__OnDoubleClick_c93164(long param_1)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  int iVar6;
  uint uVar7;
  
  uVar2 = native_UnityEngine_Behaviour__get_enabled_8d7acc(param_1,0);
  if (((uVar2 & 1) == 0) || (*(int *)(param_1 + 0x28) != 5)) {
    return;
  }
  if ((bRam0000000001342899 & 1) == 0) {
    native_sub_43273c(&Method_UnityEngine_GameObject_GetComponentsInChildren_Transform____12e4b68);
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    bRam0000000001342899 = 1;
  }
  uVar2 = native_System_String__IsNullOrEmpty_b09430(*(undefined8 *)(param_1 + 0x20),0);
  if ((uVar2 & 1) != 0) {
    return;
  }
  uVar4 = *(undefined8 *)(param_1 + 0x18);
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar2 = native_UnityEngine_Object__op_Equality_8e9a3c(uVar4,0,0);
  if ((uVar2 & 1) != 0) {
    uVar4 = native_UnityEngine_Component__get_gameObject_8da66c(param_1,0);
    *(undefined8 *)(param_1 + 0x18) = uVar4;
    native_sub_4326e0((undefined8 *)(param_1 + 0x18),uVar4);
  }
  lVar3 = *(long *)(param_1 + 0x18);
  if (*(char *)(param_1 + 0x2c) == '\0') {
    uVar5 = *(undefined8 *)(param_1 + 0x20);
    uVar4 = native_UnityEngine_Component__get_gameObject_8da66c(param_1,0);
    if (lVar3 != 0) {
      if (pcRam0000000001340c20 == (code *)0x0) {
        pcRam0000000001340c20 = (code *)native_sub_4326f0(&UNK_00e2db43,uVar5,uVar4,1);
      }
                    /* WARNING: Could not recover jumptable at 0x008de524. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*pcRam0000000001340c20)(lVar3,uVar5,uVar4,1);
      return;
    }
  }
  else if ((lVar3 != 0) &&
          (lVar3 = native_UnityEngine_GameObject__GetComponentsInChildren_Collider__4a2650
                             (lVar3,
                              _Method_UnityEngine_GameObject_GetComponentsInChildren_Transform____12e4b68
                             ), lVar3 != 0)) {
    iVar6 = (int)*(undefined8 *)(lVar3 + 0x18);
    if (iVar6 < 1) {
      return;
    }
    if (iVar6 != 0) {
      uVar7 = 0;
      do {
        lVar1 = *(long *)(lVar3 + (long)(int)uVar7 * 8 + 0x20);
        if (lVar1 == 0) goto LAB_00c9302c;
        lVar1 = native_UnityEngine_Component__get_gameObject_8da66c(lVar1,0);
        uVar5 = *(undefined8 *)(param_1 + 0x20);
        uVar4 = native_UnityEngine_Component__get_gameObject_8da66c(param_1,0);
        if (lVar1 == 0) goto LAB_00c9302c;
        native_UnityEngine_GameObject__SendMessage_8de4c0(lVar1,uVar5,uVar4,1,0);
        uVar7 = uVar7 + 1;
        if (iVar6 <= (int)uVar7) {
          return;
        }
      } while (uVar7 < *(uint *)(lVar3 + 0x18));
    }
    uVar4 = native_sub_43283c();
                    /* WARNING: Subroutine does not return */
    native_sub_4327dc(uVar4,0);
  }
LAB_00c9302c:
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* UIButtonMessage$$Send @ 0xc92e88
 * void UIButtonMessage__Send (UIButtonMessage_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIButtonMessage$$Send
   void UIButtonMessage__Send (UIButtonMessage_o* __this, const MethodInfo* method); */

void native_UIButtonMessage__Send_c92e88(long param_1)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  int iVar6;
  uint uVar7;
  
  if ((bRam0000000001342899 & 1) == 0) {
    native_sub_43273c(&Method_UnityEngine_GameObject_GetComponentsInChildren_Transform____12e4b68);
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    bRam0000000001342899 = 1;
  }
  uVar1 = native_System_String__IsNullOrEmpty_b09430(*(undefined8 *)(param_1 + 0x20),0);
  if ((uVar1 & 1) != 0) {
    return;
  }
  uVar4 = *(undefined8 *)(param_1 + 0x18);
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar1 = native_UnityEngine_Object__op_Equality_8e9a3c(uVar4,0,0);
  if ((uVar1 & 1) != 0) {
    uVar4 = native_UnityEngine_Component__get_gameObject_8da66c(param_1,0);
    *(undefined8 *)(param_1 + 0x18) = uVar4;
    native_sub_4326e0((undefined8 *)(param_1 + 0x18),uVar4);
  }
  lVar3 = *(long *)(param_1 + 0x18);
  if (*(char *)(param_1 + 0x2c) == '\0') {
    uVar5 = *(undefined8 *)(param_1 + 0x20);
    uVar4 = native_UnityEngine_Component__get_gameObject_8da66c(param_1,0);
    if (lVar3 != 0) {
      if (pcRam0000000001340c20 == (code *)0x0) {
        pcRam0000000001340c20 = (code *)native_sub_4326f0(&UNK_00e2db43,uVar5,uVar4,1);
      }
                    /* WARNING: Could not recover jumptable at 0x008de524. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*pcRam0000000001340c20)(lVar3,uVar5,uVar4,1);
      return;
    }
  }
  else if ((lVar3 != 0) &&
          (lVar3 = native_UnityEngine_GameObject__GetComponentsInChildren_Collider__4a2650
                             (lVar3,
                              _Method_UnityEngine_GameObject_GetComponentsInChildren_Transform____12e4b68
                             ), lVar3 != 0)) {
    iVar6 = (int)*(undefined8 *)(lVar3 + 0x18);
    if (iVar6 < 1) {
      return;
    }
    if (iVar6 != 0) {
      uVar7 = 0;
      do {
        lVar2 = *(long *)(lVar3 + (long)(int)uVar7 * 8 + 0x20);
        if (lVar2 == 0) goto LAB_00c9302c;
        lVar2 = native_UnityEngine_Component__get_gameObject_8da66c(lVar2,0);
        uVar5 = *(undefined8 *)(param_1 + 0x20);
        uVar4 = native_UnityEngine_Component__get_gameObject_8da66c(param_1,0);
        if (lVar2 == 0) goto LAB_00c9302c;
        native_UnityEngine_GameObject__SendMessage_8de4c0(lVar2,uVar5,uVar4,1,0);
        uVar7 = uVar7 + 1;
        if (iVar6 <= (int)uVar7) {
          return;
        }
      } while (uVar7 < *(uint *)(lVar3 + 0x18));
    }
    uVar4 = native_sub_43283c();
                    /* WARNING: Subroutine does not return */
    native_sub_4327dc(uVar4,0);
  }
LAB_00c9302c:
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* UIButtonMessage$$.ctor @ 0xc931a8
 * void UIButtonMessage___ctor (UIButtonMessage_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIButtonMessage$$.ctor
   void UIButtonMessage___ctor (UIButtonMessage_o* __this, const MethodInfo* method); */

undefined1  [16] native_UIButtonMessage___ctor_c931a8(ulong param_1)

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


