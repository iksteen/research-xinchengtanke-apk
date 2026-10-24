/* ARM64 IL2CPP native pseudocode from Ghidra.
 * Recovered implementation, not original C# source.
 * Function boundaries follow the IL2CPP method address table. */


/* UIToggle$$get_value @ 0x945b24
 * bool UIToggle__get_value (UIToggle_o* __this, const MethodInfo* method); */

/* UIToggle$$get_value
   bool UIToggle__get_value (UIToggle_o* __this, const MethodInfo* method); */

undefined1 native_UIToggle__get_value_945b24(long param_1)

{
  long lVar1;
  
  lVar1 = 0x48;
  if (*(char *)(param_1 + 0x89) != '\0') {
    lVar1 = 0x88;
  }
  return *(undefined1 *)(param_1 + lVar1);
}



/* UIToggle$$set_value @ 0x945b40
 * void UIToggle__set_value (UIToggle_o* __this, bool value, const MethodInfo* method); */

/* WARNING: Removing unreachable block (ram,0x00945e54) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIToggle$$set_value
   void UIToggle__set_value (UIToggle_o* __this, bool value, const MethodInfo* method); */

void native_UIToggle__set_value_945b40(long param_1,byte param_2)

{
  bool bVar1;
  long lVar2;
  byte bVar3;
  ulong uVar4;
  ulong uVar5;
  undefined8 uVar6;
  int iVar7;
  long lVar8;
  long *plVar9;
  undefined8 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined1 auStack_64 [4];
  
  if (*(char *)(param_1 + 0x89) == '\0') {
    *(byte *)(param_1 + 0x48) = param_2 & 1;
    return;
  }
  if (((*(int *)(param_1 + 0x18) != 0) && ((param_2 & 1) == 0)) &&
     (*(char *)(param_1 + 0x4a) == '\0')) {
    return;
  }
  bVar1 = (bool)(param_2 & 1);
  if ((bRam0000000001341431 & 1) == 0) {
    native_sub_43273c(&bool_TypeInfo_12d3bd0);
    native_sub_43273c(&EventDelegate_TypeInfo_12d4590);
    native_sub_43273c(&Method_UnityEngine_GameObject_GetComponentsInChildren_UITweener____12e4b98);
    native_sub_43273c(&NGUITools_TypeInfo_12d53c8);
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    native_sub_43273c(&UIToggle_TypeInfo_12d64e0);
    bRam0000000001341431 = 1;
  }
  if ((*(long *)(param_1 + 0x58) != 0) &&
     (uVar4 = native_UIToggle_Validate__Invoke_55b360(*(long *)(param_1 + 0x58),bVar1,0),
     (uVar4 & 1) == 0)) {
    return;
  }
  if (*(char *)(param_1 + 0x89) == '\0') {
    *(bool *)(param_1 + 0x88) = bVar1;
    *(bool *)(param_1 + 0x48) = bVar1;
    uVar10 = *(undefined8 *)(param_1 + 0x20);
    if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    uVar4 = native_UnityEngine_Object__op_Inequality_8d76fc(uVar10,0,0);
    if ((uVar4 & 1) == 0) {
      return;
    }
    plVar9 = *(long **)(param_1 + 0x20);
    if (plVar9 != (long *)0x0) {
      uVar12 = 0;
      uVar11 = 0x3f800000;
      if ((param_2 & 1) == 0) {
        uVar12 = 0x3f800000;
        uVar11 = 0;
      }
      if (*(char *)(param_1 + 0x28) != '\0') {
        uVar11 = uVar12;
      }
                    /* WARNING: Could not recover jumptable at 0x00945ee8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar9 + 0x1b8))(uVar11,plVar9,*(undefined8 *)(*plVar9 + 0x1c0));
      return;
    }
    goto LAB_00946448;
  }
  if ((*(char *)(param_1 + 0x88) != '\0') == bVar1) {
    return;
  }
  if ((*(int *)(param_1 + 0x18) != 0) && ((param_2 & 1) != 0)) {
    if (((*(byte *)(_UIToggle_TypeInfo_12d64e0 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UIToggle_TypeInfo_12d64e0 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    if (**(long **)(_UIToggle_TypeInfo_12d64e0 + 0xb8) == 0) goto LAB_00946448;
    iVar7 = *(int *)(**(long **)(_UIToggle_TypeInfo_12d64e0 + 0xb8) + 0x18);
    while (0 < iVar7) {
      uVar4 = 0;
      while( true ) {
        if (((*(byte *)(_UIToggle_TypeInfo_12d64e0 + 0x133) >> 2 & 1) != 0) &&
           (*(int *)(_UIToggle_TypeInfo_12d64e0 + 0xe0) == 0)) {
          native_sub_4327ec();
        }
        if ((**(long **)(_UIToggle_TypeInfo_12d64e0 + 0xb8) == 0) ||
           (lVar8 = *(long *)(**(long **)(_UIToggle_TypeInfo_12d64e0 + 0xb8) + 0x10), lVar8 == 0))
        goto LAB_00946448;
        if (*(uint *)(lVar8 + 0x18) <= uVar4) goto LAB_0094641c;
        lVar8 = *(long *)(lVar8 + uVar4 * 8 + 0x20);
        if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
           (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
          native_sub_4327ec();
        }
        uVar5 = native_UnityEngine_Object__op_Inequality_8d76fc(lVar8,param_1,0);
        if ((uVar5 & 1) != 0) {
          if (lVar8 == 0) goto LAB_00946448;
          if (*(int *)(lVar8 + 0x18) == *(int *)(param_1 + 0x18)) {
            native_UIToggle__Set_945b78(lVar8,0,1);
          }
        }
        if (((*(byte *)(_UIToggle_TypeInfo_12d64e0 + 0x133) >> 2 & 1) != 0) &&
           (*(int *)(_UIToggle_TypeInfo_12d64e0 + 0xe0) == 0)) {
          native_sub_4327ec();
        }
        lVar8 = **(long **)(_UIToggle_TypeInfo_12d64e0 + 0xb8);
        if (lVar8 == 0) goto LAB_00946448;
        if (*(int *)(lVar8 + 0x18) != iVar7) break;
        uVar4 = uVar4 + 1;
        if ((long)iVar7 <= (long)uVar4) goto LAB_00945d90;
      }
      if (((*(byte *)(_UIToggle_TypeInfo_12d64e0 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_UIToggle_TypeInfo_12d64e0 + 0xe0) == 0)) {
        native_sub_4327ec();
        lVar8 = **(long **)(_UIToggle_TypeInfo_12d64e0 + 0xb8);
        if (lVar8 == 0) goto LAB_00946448;
      }
      iVar7 = *(int *)(lVar8 + 0x18);
    }
  }
LAB_00945d90:
  *(bool *)(param_1 + 0x88) = bVar1;
  uVar10 = *(undefined8 *)(param_1 + 0x20);
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar4 = native_UnityEngine_Object__op_Inequality_8d76fc(uVar10,0,0);
  if ((uVar4 & 1) != 0) {
    if (*(char *)(param_1 + 0x49) == '\0') {
      if (((*(byte *)(_NGUITools_TypeInfo_12d53c8 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_NGUITools_TypeInfo_12d53c8 + 0xe0) == 0)) {
        native_sub_4327ec();
      }
      uVar4 = native_NGUITools__GetActive_72d02c(param_1,0);
      if ((uVar4 & 1) != 0) {
        if (*(long *)(param_1 + 0x20) == 0) goto LAB_00946448;
        uVar10 = native_UnityEngine_Component__get_gameObject_8da66c(*(long *)(param_1 + 0x20),0);
        uVar12 = 0;
        uVar11 = 0x3f800000;
        if (*(char *)(param_1 + 0x88) == '\0') {
          uVar12 = 0x3f800000;
          uVar11 = 0;
        }
        if (*(char *)(param_1 + 0x28) != '\0') {
          uVar11 = uVar12;
        }
        native_TweenAlpha__Begin_6e3220(0x3e19999a,uVar11,0,uVar10,0);
        goto LAB_00945f28;
      }
    }
    plVar9 = *(long **)(param_1 + 0x20);
    if (plVar9 == (long *)0x0) goto LAB_00946448;
    uVar12 = 0;
    uVar11 = 0x3f800000;
    if (*(char *)(param_1 + 0x88) == '\0') {
      uVar12 = 0x3f800000;
      uVar11 = 0;
    }
    if (*(char *)(param_1 + 0x28) != '\0') {
      uVar11 = uVar12;
    }
    (**(code **)(*plVar9 + 0x1b8))(uVar11,plVar9,*(undefined8 *)(*plVar9 + 0x1c0));
  }
LAB_00945f28:
  if (((*(byte *)(_UIToggle_TypeInfo_12d64e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UIToggle_TypeInfo_12d64e0 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar10 = *(undefined8 *)(*(long *)(_UIToggle_TypeInfo_12d64e0 + 0xb8) + 8);
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec(_UnityEngine_Object_TypeInfo_12d54e0);
  }
  uVar4 = native_UnityEngine_Object__op_Equality_8e9a3c(uVar10,0,0);
  if ((uVar4 & 1) != 0) {
    if (((*(byte *)(_UIToggle_TypeInfo_12d64e0 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UIToggle_TypeInfo_12d64e0 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    plVar9 = (long *)(*(long *)(_UIToggle_TypeInfo_12d64e0 + 0xb8) + 8);
    lVar8 = *plVar9;
    *plVar9 = param_1;
    native_sub_4326e0(plVar9,param_1);
    uVar10 = *(undefined8 *)(param_1 + 0x50);
    if (((*(byte *)(_EventDelegate_TypeInfo_12d4590 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_EventDelegate_TypeInfo_12d4590 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    uVar4 = native_EventDelegate__IsValid_deef08(uVar10,0);
    if ((uVar4 & 1) == 0) {
      uVar10 = *(undefined8 *)(param_1 + 0x70);
      if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
        native_sub_4327ec();
      }
      uVar4 = native_UnityEngine_Object__op_Inequality_8d76fc(uVar10,0,0);
      if (((uVar4 & 1) != 0) &&
         (uVar4 = native_System_String__IsNullOrEmpty_b09430(*(undefined8 *)(param_1 + 0x78),0),
         (uVar4 & 1) == 0)) {
        lVar2 = *(long *)(param_1 + 0x70);
        uVar10 = *(undefined8 *)(param_1 + 0x78);
        auStack_64[0] = *(undefined1 *)(param_1 + 0x88);
        uVar6 = native_sub_4327fc(_bool_TypeInfo_12d3bd0,auStack_64);
        if (lVar2 == 0) goto LAB_00946448;
        native_UnityEngine_GameObject__SendMessage_8de4c0(lVar2,uVar10,uVar6,1,0);
      }
    }
    else {
      uVar10 = *(undefined8 *)(param_1 + 0x50);
      if (((*(byte *)(_EventDelegate_TypeInfo_12d4590 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_EventDelegate_TypeInfo_12d4590 + 0xe0) == 0)) {
        native_sub_4327ec();
      }
      native_EventDelegate__Execute_deecbc(uVar10,0);
    }
    if (((*(byte *)(_UIToggle_TypeInfo_12d64e0 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UIToggle_TypeInfo_12d64e0 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    plVar9 = (long *)(*(long *)(_UIToggle_TypeInfo_12d64e0 + 0xb8) + 8);
    *plVar9 = lVar8;
    native_sub_4326e0(plVar9,lVar8);
  }
  uVar10 = *(undefined8 *)(param_1 + 0x38);
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar4 = native_UnityEngine_Object__op_Inequality_8d76fc(uVar10,0,0);
  if ((uVar4 & 1) != 0) {
    uVar11 = 0xffffffff;
    if ((param_2 & 1) != 0) {
      uVar11 = 1;
    }
    lVar8 = native_ActiveAnimation__Play_561f30(*(undefined8 *)(param_1 + 0x38),0,uVar11,2,0,0);
    if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
      native_sub_4327ec(_UnityEngine_Object_TypeInfo_12d54e0);
    }
    uVar4 = native_UnityEngine_Object__op_Inequality_8d76fc(lVar8,0,0);
    if ((uVar4 & 1) != 0) {
      if (*(char *)(param_1 + 0x49) == '\0') {
        if (((*(byte *)(_NGUITools_TypeInfo_12d53c8 + 0x133) >> 2 & 1) != 0) &&
           (*(int *)(_NGUITools_TypeInfo_12d53c8 + 0xe0) == 0)) {
          native_sub_4327ec();
        }
        uVar4 = native_NGUITools__GetActive_72d02c(param_1,0);
        if ((uVar4 & 1) != 0) goto LAB_0094618c;
      }
      if (lVar8 == 0) goto LAB_00946448;
      native_ActiveAnimation__Finish_5608e8(lVar8,0);
    }
  }
LAB_0094618c:
  uVar10 = *(undefined8 *)(param_1 + 0x30);
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar4 = native_UnityEngine_Object__op_Inequality_8d76fc(uVar10,0,0);
  if ((uVar4 & 1) != 0) {
    uVar11 = 0xffffffff;
    if ((param_2 & 1) != 0) {
      uVar11 = 1;
    }
    lVar8 = native_ActiveAnimation__Play_561c20(*(undefined8 *)(param_1 + 0x30),0,uVar11,2,0,0);
    if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
      native_sub_4327ec(_UnityEngine_Object_TypeInfo_12d54e0);
    }
    uVar4 = native_UnityEngine_Object__op_Inequality_8d76fc(lVar8,0,0);
    if ((uVar4 & 1) != 0) {
      if (*(char *)(param_1 + 0x49) == '\0') {
        if (((*(byte *)(_NGUITools_TypeInfo_12d53c8 + 0x133) >> 2 & 1) != 0) &&
           (*(int *)(_NGUITools_TypeInfo_12d53c8 + 0xe0) == 0)) {
          native_sub_4327ec();
        }
        uVar4 = native_NGUITools__GetActive_72d02c(param_1,0);
        if ((uVar4 & 1) != 0) goto LAB_0094625c;
      }
      if (lVar8 == 0) goto LAB_00946448;
      native_ActiveAnimation__Finish_5608e8(lVar8,0);
    }
  }
LAB_0094625c:
  uVar10 = *(undefined8 *)(param_1 + 0x40);
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar4 = native_UnityEngine_Object__op_Inequality_8d76fc(uVar10,0,0);
  if ((uVar4 & 1) == 0) {
    return;
  }
  if (((*(byte *)(_NGUITools_TypeInfo_12d53c8 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_NGUITools_TypeInfo_12d53c8 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  bVar3 = native_NGUITools__GetActive_72d02c(param_1,0);
  plVar9 = *(long **)(param_1 + 0x40);
  if (plVar9 != (long *)0x0) {
    (**(code **)(*plVar9 + 0x198))(plVar9,bVar1,*(undefined8 *)(*plVar9 + 0x1a0));
    if ((*(char *)(param_1 + 0x49) != '\0') || (((bVar3 ^ 1) & 1) != 0)) {
      lVar8 = *(long *)(param_1 + 0x40);
      if (lVar8 == 0) goto LAB_00946448;
      uVar11 = 0x3f800000;
      if ((param_2 & 1) == 0) {
        uVar11 = 0;
      }
      uVar11 = native_UnityEngine_Mathf__Clamp01_8d9d9c(uVar11,0);
      *(undefined4 *)(lVar8 + 0x74) = uVar11;
    }
    if (*(long *)(param_1 + 0x40) != 0) {
      if (*(int *)(*(long *)(param_1 + 0x40) + 0x3c) != 0) {
        lVar8 = native_UnityEngine_Component__get_gameObject_8da66c(param_1,0);
        if ((lVar8 == 0) ||
           (lVar8 = native_UnityEngine_GameObject__GetComponentsInChildren_object__4a2674
                              (lVar8,1,
                               _Method_UnityEngine_GameObject_GetComponentsInChildren_UITweener____12e4b98
                              ), lVar8 == 0)) goto LAB_00946448;
        iVar7 = (int)*(ulong *)(lVar8 + 0x18);
        if (0 < iVar7) {
          uVar11 = 0x3f800000;
          if ((param_2 & 1) == 0) {
            uVar11 = 0;
          }
          if ((*(ulong *)(lVar8 + 0x18) & 0xffffffff) != 0) {
            uVar4 = 0;
            do {
              plVar9 = *(long **)(lVar8 + 0x20 + uVar4 * 8);
              uVar10 = *(undefined8 *)(param_1 + 0x40);
              if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
                 (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
                native_sub_4327ec();
              }
              uVar5 = native_UnityEngine_Object__op_Inequality_8d76fc(plVar9,uVar10,0);
              if ((uVar5 & 1) != 0) {
                if ((plVar9 == (long *)0x0) || (*(long *)(param_1 + 0x40) == 0)) goto LAB_00946448;
                if ((*(int *)((long)plVar9 + 0x3c) == *(int *)(*(long *)(param_1 + 0x40) + 0x3c)) &&
                   ((**(code **)(*plVar9 + 0x198))(plVar9,bVar1,*(undefined8 *)(*plVar9 + 0x1a0)),
                   (*(char *)(param_1 + 0x49) == '\0' & bVar3) == 0)) {
                  uVar12 = native_UnityEngine_Mathf__Clamp01_8d9d9c(uVar11,0);
                  *(undefined4 *)((long)plVar9 + 0x74) = uVar12;
                }
              }
              uVar4 = uVar4 + 1;
              if ((long)iVar7 <= (long)uVar4) {
                return;
              }
            } while (uVar4 < *(uint *)(lVar8 + 0x18));
          }
LAB_0094641c:
          uVar10 = native_sub_43283c();
                    /* WARNING: Subroutine does not return */
          native_sub_4327dc(uVar10,0);
        }
      }
      return;
    }
  }
LAB_00946448:
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* UIToggle$$get_isColliderEnabled @ 0x94644c
 * bool UIToggle__get_isColliderEnabled (UIToggle_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIToggle$$get_isColliderEnabled
   bool UIToggle__get_isColliderEnabled (UIToggle_o* __this, const MethodInfo* method); */

undefined8 native_UIToggle__get_isColliderEnabled_94644c(undefined8 param_1)

{
  long lVar1;
  ulong uVar2;
  undefined8 uVar3;
  
  if ((bRam000000000134142b & 1) == 0) {
    native_sub_43273c(&Method_UnityEngine_Component_GetComponent_Collider2D____12e29c8);
    native_sub_43273c(&Method_UnityEngine_Component_GetComponent_Collider____12e29c0);
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    bRam000000000134142b = 1;
  }
  lVar1 = native_UnityEngine_Component__GetComponent_ActiveAnimation__49daec
                    (param_1,_Method_UnityEngine_Component_GetComponent_Collider____12e29c0);
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec(_UnityEngine_Object_TypeInfo_12d54e0);
  }
  uVar2 = native_UnityEngine_Object__op_Inequality_8d76fc(lVar1,0,0);
  if ((uVar2 & 1) == 0) {
    lVar1 = native_UnityEngine_Component__GetComponent_ActiveAnimation__49daec
                      (param_1,_Method_UnityEngine_Component_GetComponent_Collider2D____12e29c8);
    if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
      native_sub_4327ec(_UnityEngine_Object_TypeInfo_12d54e0);
    }
    uVar2 = native_UnityEngine_Object__op_Inequality_8d76fc(lVar1,0,0);
    if ((uVar2 & 1) == 0) {
      return 0;
    }
    if (lVar1 != 0) {
      if (pcRam0000000001340940 == (code *)0x0) {
        pcRam0000000001340940 = (code *)native_sub_4326f0(&UNK_00e2c6dd);
      }
                    /* WARNING: Could not recover jumptable at 0x008d7b08. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar3 = (*pcRam0000000001340940)(lVar1);
      return uVar3;
    }
  }
  else if (lVar1 != 0) {
    if (pcRam0000000001343a68 == (code *)0x0) {
      pcRam0000000001343a68 = (code *)native_sub_4326f0(&UNK_00ecb640);
    }
                    /* WARNING: Could not recover jumptable at 0x00dbac48. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar3 = (*pcRam0000000001343a68)(lVar1);
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* UIToggle$$get_isChecked @ 0x946580
 * bool UIToggle__get_isChecked (UIToggle_o* __this, const MethodInfo* method); */

/* UIToggle$$get_isChecked
   bool UIToggle__get_isChecked (UIToggle_o* __this, const MethodInfo* method); */

undefined1 native_UIToggle__get_isChecked_946580(long param_1)

{
  long lVar1;
  
  lVar1 = 0x48;
  if (*(char *)(param_1 + 0x89) != '\0') {
    lVar1 = 0x88;
  }
  return *(undefined1 *)(param_1 + lVar1);
}



/* UIToggle$$set_isChecked @ 0x94659c
 * void UIToggle__set_isChecked (UIToggle_o* __this, bool value, const MethodInfo* method); */

/* WARNING: Removing unreachable block (ram,0x00945e54) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIToggle$$set_isChecked
   void UIToggle__set_isChecked (UIToggle_o* __this, bool value, const MethodInfo* method); */

void native_UIToggle__set_isChecked_94659c(long param_1,byte param_2)

{
  bool bVar1;
  long lVar2;
  byte bVar3;
  ulong uVar4;
  ulong uVar5;
  undefined8 uVar6;
  int iVar7;
  long lVar8;
  long *plVar9;
  undefined8 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined1 auStack_64 [4];
  
  bVar1 = (bool)(param_2 & 1);
  if (*(char *)(param_1 + 0x89) == '\0') {
    *(bool *)(param_1 + 0x48) = bVar1;
    return;
  }
  if (((*(int *)(param_1 + 0x18) != 0) && (bVar1 == false)) && (*(char *)(param_1 + 0x4a) == '\0'))
  {
    return;
  }
  if ((bRam0000000001341431 & 1) == 0) {
    native_sub_43273c(&bool_TypeInfo_12d3bd0);
    native_sub_43273c(&EventDelegate_TypeInfo_12d4590);
    native_sub_43273c(&Method_UnityEngine_GameObject_GetComponentsInChildren_UITweener____12e4b98);
    native_sub_43273c(&NGUITools_TypeInfo_12d53c8);
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    native_sub_43273c(&UIToggle_TypeInfo_12d64e0);
    bRam0000000001341431 = 1;
  }
  if ((*(long *)(param_1 + 0x58) != 0) &&
     (uVar4 = native_UIToggle_Validate__Invoke_55b360(*(long *)(param_1 + 0x58),bVar1,0),
     (uVar4 & 1) == 0)) {
    return;
  }
  if (*(char *)(param_1 + 0x89) == '\0') {
    *(bool *)(param_1 + 0x88) = bVar1;
    *(bool *)(param_1 + 0x48) = bVar1;
    uVar10 = *(undefined8 *)(param_1 + 0x20);
    if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    uVar4 = native_UnityEngine_Object__op_Inequality_8d76fc(uVar10,0,0);
    if ((uVar4 & 1) == 0) {
      return;
    }
    plVar9 = *(long **)(param_1 + 0x20);
    if (plVar9 != (long *)0x0) {
      uVar12 = 0;
      uVar11 = 0x3f800000;
      if (bVar1 == false) {
        uVar12 = 0x3f800000;
        uVar11 = 0;
      }
      if (*(char *)(param_1 + 0x28) != '\0') {
        uVar11 = uVar12;
      }
                    /* WARNING: Could not recover jumptable at 0x00945ee8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar9 + 0x1b8))(uVar11,plVar9,*(undefined8 *)(*plVar9 + 0x1c0));
      return;
    }
    goto LAB_00946448;
  }
  if ((*(char *)(param_1 + 0x88) != '\0') == bVar1) {
    return;
  }
  if ((*(int *)(param_1 + 0x18) != 0) && (bVar1 != false)) {
    if (((*(byte *)(_UIToggle_TypeInfo_12d64e0 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UIToggle_TypeInfo_12d64e0 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    if (**(long **)(_UIToggle_TypeInfo_12d64e0 + 0xb8) == 0) goto LAB_00946448;
    iVar7 = *(int *)(**(long **)(_UIToggle_TypeInfo_12d64e0 + 0xb8) + 0x18);
    while (0 < iVar7) {
      uVar4 = 0;
      while( true ) {
        if (((*(byte *)(_UIToggle_TypeInfo_12d64e0 + 0x133) >> 2 & 1) != 0) &&
           (*(int *)(_UIToggle_TypeInfo_12d64e0 + 0xe0) == 0)) {
          native_sub_4327ec();
        }
        if ((**(long **)(_UIToggle_TypeInfo_12d64e0 + 0xb8) == 0) ||
           (lVar8 = *(long *)(**(long **)(_UIToggle_TypeInfo_12d64e0 + 0xb8) + 0x10), lVar8 == 0))
        goto LAB_00946448;
        if (*(uint *)(lVar8 + 0x18) <= uVar4) goto LAB_0094641c;
        lVar8 = *(long *)(lVar8 + uVar4 * 8 + 0x20);
        if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
           (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
          native_sub_4327ec();
        }
        uVar5 = native_UnityEngine_Object__op_Inequality_8d76fc(lVar8,param_1,0);
        if ((uVar5 & 1) != 0) {
          if (lVar8 == 0) goto LAB_00946448;
          if (*(int *)(lVar8 + 0x18) == *(int *)(param_1 + 0x18)) {
            native_UIToggle__Set_945b78(lVar8,0,1);
          }
        }
        if (((*(byte *)(_UIToggle_TypeInfo_12d64e0 + 0x133) >> 2 & 1) != 0) &&
           (*(int *)(_UIToggle_TypeInfo_12d64e0 + 0xe0) == 0)) {
          native_sub_4327ec();
        }
        lVar8 = **(long **)(_UIToggle_TypeInfo_12d64e0 + 0xb8);
        if (lVar8 == 0) goto LAB_00946448;
        if (*(int *)(lVar8 + 0x18) != iVar7) break;
        uVar4 = uVar4 + 1;
        if ((long)iVar7 <= (long)uVar4) goto LAB_00945d90;
      }
      if (((*(byte *)(_UIToggle_TypeInfo_12d64e0 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_UIToggle_TypeInfo_12d64e0 + 0xe0) == 0)) {
        native_sub_4327ec();
        lVar8 = **(long **)(_UIToggle_TypeInfo_12d64e0 + 0xb8);
        if (lVar8 == 0) goto LAB_00946448;
      }
      iVar7 = *(int *)(lVar8 + 0x18);
    }
  }
LAB_00945d90:
  *(bool *)(param_1 + 0x88) = bVar1;
  uVar10 = *(undefined8 *)(param_1 + 0x20);
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar4 = native_UnityEngine_Object__op_Inequality_8d76fc(uVar10,0,0);
  if ((uVar4 & 1) != 0) {
    if (*(char *)(param_1 + 0x49) == '\0') {
      if (((*(byte *)(_NGUITools_TypeInfo_12d53c8 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_NGUITools_TypeInfo_12d53c8 + 0xe0) == 0)) {
        native_sub_4327ec();
      }
      uVar4 = native_NGUITools__GetActive_72d02c(param_1,0);
      if ((uVar4 & 1) != 0) {
        if (*(long *)(param_1 + 0x20) == 0) goto LAB_00946448;
        uVar10 = native_UnityEngine_Component__get_gameObject_8da66c(*(long *)(param_1 + 0x20),0);
        uVar12 = 0;
        uVar11 = 0x3f800000;
        if (*(char *)(param_1 + 0x88) == '\0') {
          uVar12 = 0x3f800000;
          uVar11 = 0;
        }
        if (*(char *)(param_1 + 0x28) != '\0') {
          uVar11 = uVar12;
        }
        native_TweenAlpha__Begin_6e3220(0x3e19999a,uVar11,0,uVar10,0);
        goto LAB_00945f28;
      }
    }
    plVar9 = *(long **)(param_1 + 0x20);
    if (plVar9 == (long *)0x0) goto LAB_00946448;
    uVar12 = 0;
    uVar11 = 0x3f800000;
    if (*(char *)(param_1 + 0x88) == '\0') {
      uVar12 = 0x3f800000;
      uVar11 = 0;
    }
    if (*(char *)(param_1 + 0x28) != '\0') {
      uVar11 = uVar12;
    }
    (**(code **)(*plVar9 + 0x1b8))(uVar11,plVar9,*(undefined8 *)(*plVar9 + 0x1c0));
  }
LAB_00945f28:
  if (((*(byte *)(_UIToggle_TypeInfo_12d64e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UIToggle_TypeInfo_12d64e0 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar10 = *(undefined8 *)(*(long *)(_UIToggle_TypeInfo_12d64e0 + 0xb8) + 8);
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec(_UnityEngine_Object_TypeInfo_12d54e0);
  }
  uVar4 = native_UnityEngine_Object__op_Equality_8e9a3c(uVar10,0,0);
  if ((uVar4 & 1) != 0) {
    if (((*(byte *)(_UIToggle_TypeInfo_12d64e0 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UIToggle_TypeInfo_12d64e0 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    plVar9 = (long *)(*(long *)(_UIToggle_TypeInfo_12d64e0 + 0xb8) + 8);
    lVar8 = *plVar9;
    *plVar9 = param_1;
    native_sub_4326e0(plVar9,param_1);
    uVar10 = *(undefined8 *)(param_1 + 0x50);
    if (((*(byte *)(_EventDelegate_TypeInfo_12d4590 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_EventDelegate_TypeInfo_12d4590 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    uVar4 = native_EventDelegate__IsValid_deef08(uVar10,0);
    if ((uVar4 & 1) == 0) {
      uVar10 = *(undefined8 *)(param_1 + 0x70);
      if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
        native_sub_4327ec();
      }
      uVar4 = native_UnityEngine_Object__op_Inequality_8d76fc(uVar10,0,0);
      if (((uVar4 & 1) != 0) &&
         (uVar4 = native_System_String__IsNullOrEmpty_b09430(*(undefined8 *)(param_1 + 0x78),0),
         (uVar4 & 1) == 0)) {
        lVar2 = *(long *)(param_1 + 0x70);
        uVar10 = *(undefined8 *)(param_1 + 0x78);
        auStack_64[0] = *(undefined1 *)(param_1 + 0x88);
        uVar6 = native_sub_4327fc(_bool_TypeInfo_12d3bd0,auStack_64);
        if (lVar2 == 0) goto LAB_00946448;
        native_UnityEngine_GameObject__SendMessage_8de4c0(lVar2,uVar10,uVar6,1,0);
      }
    }
    else {
      uVar10 = *(undefined8 *)(param_1 + 0x50);
      if (((*(byte *)(_EventDelegate_TypeInfo_12d4590 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_EventDelegate_TypeInfo_12d4590 + 0xe0) == 0)) {
        native_sub_4327ec();
      }
      native_EventDelegate__Execute_deecbc(uVar10,0);
    }
    if (((*(byte *)(_UIToggle_TypeInfo_12d64e0 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UIToggle_TypeInfo_12d64e0 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    plVar9 = (long *)(*(long *)(_UIToggle_TypeInfo_12d64e0 + 0xb8) + 8);
    *plVar9 = lVar8;
    native_sub_4326e0(plVar9,lVar8);
  }
  uVar10 = *(undefined8 *)(param_1 + 0x38);
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar4 = native_UnityEngine_Object__op_Inequality_8d76fc(uVar10,0,0);
  if ((uVar4 & 1) != 0) {
    uVar11 = 0xffffffff;
    if (bVar1 != false) {
      uVar11 = 1;
    }
    lVar8 = native_ActiveAnimation__Play_561f30(*(undefined8 *)(param_1 + 0x38),0,uVar11,2,0,0);
    if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
      native_sub_4327ec(_UnityEngine_Object_TypeInfo_12d54e0);
    }
    uVar4 = native_UnityEngine_Object__op_Inequality_8d76fc(lVar8,0,0);
    if ((uVar4 & 1) != 0) {
      if (*(char *)(param_1 + 0x49) == '\0') {
        if (((*(byte *)(_NGUITools_TypeInfo_12d53c8 + 0x133) >> 2 & 1) != 0) &&
           (*(int *)(_NGUITools_TypeInfo_12d53c8 + 0xe0) == 0)) {
          native_sub_4327ec();
        }
        uVar4 = native_NGUITools__GetActive_72d02c(param_1,0);
        if ((uVar4 & 1) != 0) goto LAB_0094618c;
      }
      if (lVar8 == 0) goto LAB_00946448;
      native_ActiveAnimation__Finish_5608e8(lVar8,0);
    }
  }
LAB_0094618c:
  uVar10 = *(undefined8 *)(param_1 + 0x30);
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar4 = native_UnityEngine_Object__op_Inequality_8d76fc(uVar10,0,0);
  if ((uVar4 & 1) != 0) {
    uVar11 = 0xffffffff;
    if (bVar1 != false) {
      uVar11 = 1;
    }
    lVar8 = native_ActiveAnimation__Play_561c20(*(undefined8 *)(param_1 + 0x30),0,uVar11,2,0,0);
    if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
      native_sub_4327ec(_UnityEngine_Object_TypeInfo_12d54e0);
    }
    uVar4 = native_UnityEngine_Object__op_Inequality_8d76fc(lVar8,0,0);
    if ((uVar4 & 1) != 0) {
      if (*(char *)(param_1 + 0x49) == '\0') {
        if (((*(byte *)(_NGUITools_TypeInfo_12d53c8 + 0x133) >> 2 & 1) != 0) &&
           (*(int *)(_NGUITools_TypeInfo_12d53c8 + 0xe0) == 0)) {
          native_sub_4327ec();
        }
        uVar4 = native_NGUITools__GetActive_72d02c(param_1,0);
        if ((uVar4 & 1) != 0) goto LAB_0094625c;
      }
      if (lVar8 == 0) goto LAB_00946448;
      native_ActiveAnimation__Finish_5608e8(lVar8,0);
    }
  }
LAB_0094625c:
  uVar10 = *(undefined8 *)(param_1 + 0x40);
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar4 = native_UnityEngine_Object__op_Inequality_8d76fc(uVar10,0,0);
  if ((uVar4 & 1) == 0) {
    return;
  }
  if (((*(byte *)(_NGUITools_TypeInfo_12d53c8 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_NGUITools_TypeInfo_12d53c8 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  bVar3 = native_NGUITools__GetActive_72d02c(param_1,0);
  plVar9 = *(long **)(param_1 + 0x40);
  if (plVar9 != (long *)0x0) {
    (**(code **)(*plVar9 + 0x198))(plVar9,bVar1,*(undefined8 *)(*plVar9 + 0x1a0));
    if ((*(char *)(param_1 + 0x49) != '\0') || (((bVar3 ^ 1) & 1) != 0)) {
      lVar8 = *(long *)(param_1 + 0x40);
      if (lVar8 == 0) goto LAB_00946448;
      uVar11 = 0x3f800000;
      if (bVar1 == false) {
        uVar11 = 0;
      }
      uVar11 = native_UnityEngine_Mathf__Clamp01_8d9d9c(uVar11,0);
      *(undefined4 *)(lVar8 + 0x74) = uVar11;
    }
    if (*(long *)(param_1 + 0x40) != 0) {
      if (*(int *)(*(long *)(param_1 + 0x40) + 0x3c) != 0) {
        lVar8 = native_UnityEngine_Component__get_gameObject_8da66c(param_1,0);
        if ((lVar8 == 0) ||
           (lVar8 = native_UnityEngine_GameObject__GetComponentsInChildren_object__4a2674
                              (lVar8,1,
                               _Method_UnityEngine_GameObject_GetComponentsInChildren_UITweener____12e4b98
                              ), lVar8 == 0)) goto LAB_00946448;
        iVar7 = (int)*(ulong *)(lVar8 + 0x18);
        if (0 < iVar7) {
          uVar11 = 0x3f800000;
          if (bVar1 == false) {
            uVar11 = 0;
          }
          if ((*(ulong *)(lVar8 + 0x18) & 0xffffffff) != 0) {
            uVar4 = 0;
            do {
              plVar9 = *(long **)(lVar8 + 0x20 + uVar4 * 8);
              uVar10 = *(undefined8 *)(param_1 + 0x40);
              if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
                 (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
                native_sub_4327ec();
              }
              uVar5 = native_UnityEngine_Object__op_Inequality_8d76fc(plVar9,uVar10,0);
              if ((uVar5 & 1) != 0) {
                if ((plVar9 == (long *)0x0) || (*(long *)(param_1 + 0x40) == 0)) goto LAB_00946448;
                if ((*(int *)((long)plVar9 + 0x3c) == *(int *)(*(long *)(param_1 + 0x40) + 0x3c)) &&
                   ((**(code **)(*plVar9 + 0x198))(plVar9,bVar1,*(undefined8 *)(*plVar9 + 0x1a0)),
                   (*(char *)(param_1 + 0x49) == '\0' & bVar3) == 0)) {
                  uVar12 = native_UnityEngine_Mathf__Clamp01_8d9d9c(uVar11,0);
                  *(undefined4 *)((long)plVar9 + 0x74) = uVar12;
                }
              }
              uVar4 = uVar4 + 1;
              if ((long)iVar7 <= (long)uVar4) {
                return;
              }
            } while (uVar4 < *(uint *)(lVar8 + 0x18));
          }
LAB_0094641c:
          uVar10 = native_sub_43283c();
                    /* WARNING: Subroutine does not return */
          native_sub_4327dc(uVar10,0);
        }
      }
      return;
    }
  }
LAB_00946448:
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* UIToggle$$GetActiveToggle @ 0x9465a4
 * UIToggle_o* UIToggle__GetActiveToggle (int32_t group, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIToggle$$GetActiveToggle
   UIToggle_o* UIToggle__GetActiveToggle (int32_t group, const MethodInfo* method); */

long native_UIToggle__GetActiveToggle_9465a4(int param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  long lVar3;
  ulong uVar4;
  
  if ((bRam000000000134142c & 1) == 0) {
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    native_sub_43273c(&UIToggle_TypeInfo_12d64e0);
    bRam000000000134142c = 1;
  }
  uVar4 = 0;
  while( true ) {
    if (((*(byte *)(_UIToggle_TypeInfo_12d64e0 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UIToggle_TypeInfo_12d64e0 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    lVar3 = **(long **)(_UIToggle_TypeInfo_12d64e0 + 0xb8);
    if (lVar3 == 0) break;
    if ((long)*(int *)(lVar3 + 0x18) <= (long)uVar4) {
      return 0;
    }
    if (((*(byte *)(_UIToggle_TypeInfo_12d64e0 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UIToggle_TypeInfo_12d64e0 + 0xe0) == 0)) {
      native_sub_4327ec();
      lVar3 = **(long **)(_UIToggle_TypeInfo_12d64e0 + 0xb8);
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
    uVar1 = native_UnityEngine_Object__op_Inequality_8d76fc(lVar3,0,0);
    if ((uVar1 & 1) != 0) {
      if (lVar3 == 0) break;
      if ((*(int *)(lVar3 + 0x18) == param_1) && (*(char *)(lVar3 + 0x88) != '\0')) {
        return lVar3;
      }
    }
    uVar4 = uVar4 + 1;
  }
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* UIToggle$$OnEnable @ 0x9466e8
 * void UIToggle__OnEnable (UIToggle_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIToggle$$OnEnable
   void UIToggle__OnEnable (UIToggle_o* __this, const MethodInfo* method); */

void native_UIToggle__OnEnable_9466e8(long param_1)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  undefined4 uVar4;
  long lVar5;
  long *plVar6;
  undefined8 uVar7;
  long lVar8;
  uint uVar9;
  
  if ((bRam000000000134142d & 1) == 0) {
    native_sub_43273c(&Method_BetterList_UIToggle__Add___12d8a38);
    native_sub_43273c(&UIToggle_TypeInfo_12d64e0);
    bRam000000000134142d = 1;
  }
  uVar4 = native_UnityEngine_Time__get_frameCount_770964(0);
  *(undefined4 *)(param_1 + 0x84) = uVar4;
  if (((*(byte *)(_UIToggle_TypeInfo_12d64e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UIToggle_TypeInfo_12d64e0 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  lVar5 = **(long **)(_UIToggle_TypeInfo_12d64e0 + 0xb8);
  if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
    native_sub_432810();
  }
  lVar8 = *(long *)(lVar5 + 0x10);
  if ((lVar8 == 0) || (uVar9 = *(uint *)(lVar5 + 0x18), uVar9 == *(uint *)(lVar8 + 0x18))) {
    (*(code *)**(undefined8 **)
                (*(long *)(*(long *)(_Method_BetterList_UIToggle__Add___12d8a38 + 0x18) + 0xc0) +
                0x18))(lVar5);
    uVar9 = *(uint *)(lVar5 + 0x18);
    lVar8 = *(long *)(lVar5 + 0x10);
    *(uint *)(lVar5 + 0x18) = uVar9 + 1;
    if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
      native_sub_432810();
    }
  }
  else {
    *(uint *)(lVar5 + 0x18) = uVar9 + 1;
  }
  if (uVar9 < *(uint *)(lVar8 + 0x18)) {
    plVar6 = (long *)(lVar8 + (long)(int)uVar9 * 8 + 0x20);
    *plVar6 = param_1;
    if (iRam0000000001345318 != 0) {
      puVar1 = (ulong *)(((ulong)plVar6 >> 0x12 & 0x7fff) * 8 + 0x138ecd8);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = *puVar1 | 1L << ((ulong)plVar6 >> 0xc & 0x3f);
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    return;
  }
  uVar7 = native_sub_43283c();
                    /* WARNING: Subroutine does not return */
  native_sub_4327dc(uVar7,0);
}



/* UIToggle$$OnDisable @ 0x946780
 * void UIToggle__OnDisable (UIToggle_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIToggle$$OnDisable
   void UIToggle__OnDisable (UIToggle_o* __this, const MethodInfo* method); */

undefined8 native_UIToggle__OnDisable_946780(undefined8 param_1)

{
  bool bVar1;
  long lVar2;
  long *plVar3;
  ulong uVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  long lVar7;
  uint uVar8;
  long lVar9;
  ulong uVar10;
  
  if ((bRam000000000134142e & 1) == 0) {
    native_sub_43273c(&Method_BetterList_UIToggle__Remove___12d8a40);
    native_sub_43273c(&UIToggle_TypeInfo_12d64e0);
    bRam000000000134142e = 1;
  }
  if (((*(byte *)(_UIToggle_TypeInfo_12d64e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UIToggle_TypeInfo_12d64e0 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  lVar2 = **(long **)(_UIToggle_TypeInfo_12d64e0 + 0xb8);
  if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    native_sub_432810();
  }
  if ((*(long *)(lVar2 + 0x10) != 0) &&
     (plVar3 = (long *)(*(code *)**(undefined8 **)
                                   (*(long *)(*(long *)(
                                                  _Method_BetterList_UIToggle__Remove___12d8a40 +
                                                  0x18) + 0xc0) + 0x30))(),
     0 < *(int *)(lVar2 + 0x18))) {
    uVar10 = 0;
    lVar9 = 0x20;
    do {
      lVar7 = *(long *)(lVar2 + 0x10);
      if (lVar7 == 0) goto code_r0x00ba2974;
      if (*(uint *)(lVar7 + 0x18) <= uVar10) goto code_r0x00ba2978;
      if (plVar3 == (long *)0x0) goto code_r0x00ba2974;
      uVar4 = (**(code **)(*plVar3 + 0x1b8))
                        (plVar3,*(undefined8 *)(lVar7 + uVar10 * 8 + 0x20),param_1,
                         *(undefined8 *)(*plVar3 + 0x1c0));
      if ((uVar4 & 1) != 0) {
        lVar7 = *(long *)(lVar2 + 0x10);
        *(int *)(lVar2 + 0x18) = *(int *)(lVar2 + 0x18) + -1;
        if (lVar7 == 0) goto code_r0x00ba2974;
        if (*(uint *)(lVar7 + 0x18) <= (uint)uVar10) goto code_r0x00ba2978;
        puVar5 = (undefined8 *)(lVar7 + uVar10 * 8 + 0x20);
        *puVar5 = 0;
        native_sub_4326e0(puVar5,0);
        lVar7 = *(long *)(lVar2 + 0x10);
        uVar8 = *(uint *)(lVar2 + 0x18);
        bVar1 = lVar7 == 0;
        if ((int)uVar8 <= (int)(uint)uVar10) goto code_r0x00ba294c;
        uVar10 = uVar10 & 0xffffffff;
        goto code_r0x00ba2904;
      }
      uVar10 = uVar10 + 1;
      lVar9 = lVar9 + 8;
    } while ((long)uVar10 < (long)*(int *)(lVar2 + 0x18));
  }
  return 0;
  while( true ) {
    uVar4 = uVar10 + 1;
    if (*(uint *)(lVar7 + 0x18) <= uVar4) goto code_r0x00ba2978;
    *(undefined8 *)(lVar7 + lVar9) = *(undefined8 *)(lVar7 + uVar10 * 8 + 0x28);
    native_sub_4326e0();
    lVar7 = *(long *)(lVar2 + 0x10);
    uVar8 = *(uint *)(lVar2 + 0x18);
    lVar9 = lVar9 + 8;
    bVar1 = lVar7 == 0;
    uVar10 = uVar4;
    if ((long)(int)uVar8 <= (long)uVar4) break;
code_r0x00ba2904:
    if (bVar1) goto code_r0x00ba2974;
  }
code_r0x00ba294c:
  if (!bVar1) {
    if (uVar8 < *(uint *)(lVar7 + 0x18)) {
      puVar5 = (undefined8 *)(lVar7 + (long)(int)uVar8 * 8 + 0x20);
      *puVar5 = 0;
      native_sub_4326e0(puVar5,0);
      return 1;
    }
code_r0x00ba2978:
    uVar6 = native_sub_43283c();
                    /* WARNING: Subroutine does not return */
    native_sub_4327dc(uVar6,0);
  }
code_r0x00ba2974:
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* UIToggle$$Start @ 0x94680c
 * void UIToggle__Start (UIToggle_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIToggle$$Start
   void UIToggle__Start (UIToggle_o* __this, const MethodInfo* method); */

void native_UIToggle__Start_94680c(long param_1)

{
  ulong *puVar1;
  undefined1 uVar2;
  char cVar3;
  bool bVar4;
  ulong uVar5;
  long *plVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  
  if ((bRam000000000134142f & 1) == 0) {
    native_sub_43273c(&EventDelegate_TypeInfo_12d4590);
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    bRam000000000134142f = 1;
  }
  if (*(char *)(param_1 + 0x89) == '\0') {
    if (*(char *)(param_1 + 0x80) != '\0') {
      *(undefined1 *)(param_1 + 0x80) = 0;
      *(undefined1 *)(param_1 + 0x48) = 1;
    }
    uVar5 = native_UnityEngine_Application__get_isPlaying_8d60cc(0);
    if ((uVar5 & 1) == 0) {
      puVar7 = (undefined8 *)(param_1 + 0x60);
      uVar8 = *puVar7;
      if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
        native_sub_4327ec();
      }
      uVar5 = native_UnityEngine_Object__op_Inequality_8d76fc(uVar8,0,0);
      if ((uVar5 & 1) != 0) {
        puVar9 = (undefined8 *)(param_1 + 0x20);
        uVar8 = *puVar9;
        if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
           (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
          native_sub_4327ec();
        }
        uVar5 = native_UnityEngine_Object__op_Equality_8e9a3c(uVar8,0,0);
        if ((uVar5 & 1) != 0) {
          *puVar9 = *puVar7;
          native_sub_4326e0(puVar9);
          *puVar7 = 0;
          native_sub_4326e0(puVar7,0);
        }
      }
      puVar7 = (undefined8 *)(param_1 + 0x68);
      uVar8 = *puVar7;
      if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
        native_sub_4327ec();
      }
      uVar5 = native_UnityEngine_Object__op_Inequality_8d76fc(uVar8,0,0);
      if ((uVar5 & 1) != 0) {
        puVar9 = (undefined8 *)(param_1 + 0x30);
        uVar8 = *puVar9;
        if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
           (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
          native_sub_4327ec();
        }
        uVar5 = native_UnityEngine_Object__op_Equality_8e9a3c(uVar8,0,0);
        if ((uVar5 & 1) != 0) {
          *puVar9 = *puVar7;
          native_sub_4326e0(puVar9);
          *puVar7 = 0;
          native_sub_4326e0(puVar7,0);
        }
      }
      uVar5 = native_UnityEngine_Application__get_isPlaying_8d60cc(0);
      if ((uVar5 & 1) != 0) {
        uVar8 = *(undefined8 *)(param_1 + 0x20);
        if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
           (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
          native_sub_4327ec();
        }
        uVar5 = native_UnityEngine_Object__op_Inequality_8d76fc(uVar8,0,0);
        if ((uVar5 & 1) != 0) {
          plVar6 = *(long **)(param_1 + 0x20);
          if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            native_sub_432810();
          }
          bVar4 = *(char *)(param_1 + 0x48) == '\0';
          uVar11 = 0x3f800000;
          if (bVar4) {
            uVar11 = 0;
          }
          uVar10 = 0;
          if (bVar4) {
            uVar10 = 0x3f800000;
          }
          if (*(char *)(param_1 + 0x28) != '\0') {
            uVar11 = uVar10;
          }
          (**(code **)(*plVar6 + 0x1b8))(uVar11,plVar6,*(undefined8 *)(*plVar6 + 0x1c0));
        }
      }
      uVar8 = *(undefined8 *)(param_1 + 0x50);
      if (((*(byte *)(_EventDelegate_TypeInfo_12d4590 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_EventDelegate_TypeInfo_12d4590 + 0xe0) == 0)) {
        native_sub_4327ec();
      }
      uVar5 = native_EventDelegate__IsValid_deef08(uVar8,0);
      if ((uVar5 & 1) != 0) {
        *(undefined8 *)(param_1 + 0x70) = 0;
        native_sub_4326e0((undefined8 *)(param_1 + 0x70),0);
        puVar7 = (undefined8 *)(param_1 + 0x78);
        *puVar7 = 0;
        if (iRam0000000001345318 != 0) {
          puVar1 = (ulong *)(((ulong)puVar7 >> 0x12 & 0x7fff) * 8 + 0x138ecd8);
          do {
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
            if (bVar4) {
              *puVar1 = *puVar1 | 1L << ((ulong)puVar7 >> 0xc & 0x3f);
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
        }
        return;
      }
    }
    else {
      uVar2 = *(undefined1 *)(param_1 + 0x49);
      *(undefined1 *)(param_1 + 0x89) = 1;
      *(bool *)(param_1 + 0x88) = *(char *)(param_1 + 0x48) == '\0';
      *(undefined1 *)(param_1 + 0x49) = 1;
      native_UIToggle__Set_945b78(param_1,*(char *)(param_1 + 0x48),1);
      *(undefined1 *)(param_1 + 0x49) = uVar2;
    }
  }
  return;
}



/* UIToggle$$OnClick @ 0x946ab4
 * void UIToggle__OnClick (UIToggle_o* __this, const MethodInfo* method); */

/* WARNING: Removing unreachable block (ram,0x00945e54) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIToggle$$OnClick
   void UIToggle__OnClick (UIToggle_o* __this, const MethodInfo* method); */

void native_UIToggle__OnClick_946ab4(long param_1)

{
  long lVar1;
  bool bVar2;
  byte bVar3;
  int iVar4;
  undefined4 uVar5;
  ulong uVar6;
  undefined8 uVar7;
  ulong uVar8;
  int iVar9;
  long lVar10;
  long *plVar11;
  undefined8 uVar12;
  undefined4 uVar13;
  undefined1 auStack_64 [4];
  
  if ((bRam0000000001341430 & 1) == 0) {
    native_sub_43273c(&UICamera_TypeInfo_12d6410);
    bRam0000000001341430 = 1;
  }
  iVar9 = *(int *)(param_1 + 0x84);
  iVar4 = native_UnityEngine_Time__get_frameCount_770964(0);
  if (((iVar9 == iVar4) ||
      (uVar8 = native_UnityEngine_Behaviour__get_enabled_8d7acc(param_1,0), (uVar8 & 1) == 0)) ||
     (uVar8 = native_UIToggle__get_isColliderEnabled_94644c(param_1), (uVar8 & 1) == 0)) {
    return;
  }
  if (((*(byte *)(_UICamera_TypeInfo_12d6410 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  if (*(int *)(*(long *)(_UICamera_TypeInfo_12d6410 + 0xb8) + 0xd4) == -2) {
    return;
  }
  uVar5 = native_UnityEngine_Time__get_frameCount_770964(0);
  *(undefined4 *)(param_1 + 0x84) = uVar5;
  lVar10 = 0x48;
  if (*(char *)(param_1 + 0x89) != '\0') {
    lVar10 = 0x88;
  }
  bVar2 = *(char *)(param_1 + lVar10) == '\0';
  if (*(char *)(param_1 + 0x89) == '\0') {
    *(bool *)(param_1 + 0x48) = bVar2;
    return;
  }
  if (((*(int *)(param_1 + 0x18) != 0) && (!bVar2)) && (*(char *)(param_1 + 0x4a) == '\0')) {
    return;
  }
  if ((bRam0000000001341431 & 1) == 0) {
    native_sub_43273c(&bool_TypeInfo_12d3bd0);
    native_sub_43273c(&EventDelegate_TypeInfo_12d4590);
    native_sub_43273c(&Method_UnityEngine_GameObject_GetComponentsInChildren_UITweener____12e4b98);
    native_sub_43273c(&NGUITools_TypeInfo_12d53c8);
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    native_sub_43273c(&UIToggle_TypeInfo_12d64e0);
    bRam0000000001341431 = 1;
  }
  if ((*(long *)(param_1 + 0x58) != 0) &&
     (uVar8 = native_UIToggle_Validate__Invoke_55b360(*(long *)(param_1 + 0x58),bVar2,0),
     (uVar8 & 1) == 0)) {
    return;
  }
  if (*(char *)(param_1 + 0x89) == '\0') {
    *(bool *)(param_1 + 0x88) = bVar2;
    *(bool *)(param_1 + 0x48) = bVar2;
    uVar12 = *(undefined8 *)(param_1 + 0x20);
    if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    uVar8 = native_UnityEngine_Object__op_Inequality_8d76fc(uVar12,0,0);
    if ((uVar8 & 1) == 0) {
      return;
    }
    plVar11 = *(long **)(param_1 + 0x20);
    if (plVar11 != (long *)0x0) {
      uVar13 = 0;
      uVar5 = 0x3f800000;
      if (!bVar2) {
        uVar13 = 0x3f800000;
        uVar5 = 0;
      }
      if (*(char *)(param_1 + 0x28) != '\0') {
        uVar5 = uVar13;
      }
                    /* WARNING: Could not recover jumptable at 0x00945ee8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar11 + 0x1b8))(uVar5,plVar11,*(undefined8 *)(*plVar11 + 0x1c0));
      return;
    }
    goto LAB_00946448;
  }
  if ((*(char *)(param_1 + 0x88) != '\0') == bVar2) {
    return;
  }
  if ((*(int *)(param_1 + 0x18) != 0) && (bVar2)) {
    if (((*(byte *)(_UIToggle_TypeInfo_12d64e0 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UIToggle_TypeInfo_12d64e0 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    if (**(long **)(_UIToggle_TypeInfo_12d64e0 + 0xb8) == 0) goto LAB_00946448;
    iVar9 = *(int *)(**(long **)(_UIToggle_TypeInfo_12d64e0 + 0xb8) + 0x18);
    while (0 < iVar9) {
      uVar8 = 0;
      while( true ) {
        if (((*(byte *)(_UIToggle_TypeInfo_12d64e0 + 0x133) >> 2 & 1) != 0) &&
           (*(int *)(_UIToggle_TypeInfo_12d64e0 + 0xe0) == 0)) {
          native_sub_4327ec();
        }
        if ((**(long **)(_UIToggle_TypeInfo_12d64e0 + 0xb8) == 0) ||
           (lVar10 = *(long *)(**(long **)(_UIToggle_TypeInfo_12d64e0 + 0xb8) + 0x10), lVar10 == 0))
        goto LAB_00946448;
        if (*(uint *)(lVar10 + 0x18) <= uVar8) goto LAB_0094641c;
        lVar10 = *(long *)(lVar10 + uVar8 * 8 + 0x20);
        if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
           (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
          native_sub_4327ec();
        }
        uVar6 = native_UnityEngine_Object__op_Inequality_8d76fc(lVar10,param_1,0);
        if ((uVar6 & 1) != 0) {
          if (lVar10 == 0) goto LAB_00946448;
          if (*(int *)(lVar10 + 0x18) == *(int *)(param_1 + 0x18)) {
            native_UIToggle__Set_945b78(lVar10,0,1);
          }
        }
        if (((*(byte *)(_UIToggle_TypeInfo_12d64e0 + 0x133) >> 2 & 1) != 0) &&
           (*(int *)(_UIToggle_TypeInfo_12d64e0 + 0xe0) == 0)) {
          native_sub_4327ec();
        }
        lVar10 = **(long **)(_UIToggle_TypeInfo_12d64e0 + 0xb8);
        if (lVar10 == 0) goto LAB_00946448;
        if (*(int *)(lVar10 + 0x18) != iVar9) break;
        uVar8 = uVar8 + 1;
        if ((long)iVar9 <= (long)uVar8) goto LAB_00945d90;
      }
      if (((*(byte *)(_UIToggle_TypeInfo_12d64e0 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_UIToggle_TypeInfo_12d64e0 + 0xe0) == 0)) {
        native_sub_4327ec();
        lVar10 = **(long **)(_UIToggle_TypeInfo_12d64e0 + 0xb8);
        if (lVar10 == 0) goto LAB_00946448;
      }
      iVar9 = *(int *)(lVar10 + 0x18);
    }
  }
LAB_00945d90:
  *(bool *)(param_1 + 0x88) = bVar2;
  uVar12 = *(undefined8 *)(param_1 + 0x20);
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar8 = native_UnityEngine_Object__op_Inequality_8d76fc(uVar12,0,0);
  if ((uVar8 & 1) != 0) {
    if (*(char *)(param_1 + 0x49) == '\0') {
      if (((*(byte *)(_NGUITools_TypeInfo_12d53c8 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_NGUITools_TypeInfo_12d53c8 + 0xe0) == 0)) {
        native_sub_4327ec();
      }
      uVar8 = native_NGUITools__GetActive_72d02c(param_1,0);
      if ((uVar8 & 1) != 0) {
        if (*(long *)(param_1 + 0x20) == 0) goto LAB_00946448;
        uVar12 = native_UnityEngine_Component__get_gameObject_8da66c(*(long *)(param_1 + 0x20),0);
        uVar13 = 0;
        uVar5 = 0x3f800000;
        if (*(char *)(param_1 + 0x88) == '\0') {
          uVar13 = 0x3f800000;
          uVar5 = 0;
        }
        if (*(char *)(param_1 + 0x28) != '\0') {
          uVar5 = uVar13;
        }
        native_TweenAlpha__Begin_6e3220(0x3e19999a,uVar5,0,uVar12,0);
        goto LAB_00945f28;
      }
    }
    plVar11 = *(long **)(param_1 + 0x20);
    if (plVar11 == (long *)0x0) goto LAB_00946448;
    uVar13 = 0;
    uVar5 = 0x3f800000;
    if (*(char *)(param_1 + 0x88) == '\0') {
      uVar13 = 0x3f800000;
      uVar5 = 0;
    }
    if (*(char *)(param_1 + 0x28) != '\0') {
      uVar5 = uVar13;
    }
    (**(code **)(*plVar11 + 0x1b8))(uVar5,plVar11,*(undefined8 *)(*plVar11 + 0x1c0));
  }
LAB_00945f28:
  if (((*(byte *)(_UIToggle_TypeInfo_12d64e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UIToggle_TypeInfo_12d64e0 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar12 = *(undefined8 *)(*(long *)(_UIToggle_TypeInfo_12d64e0 + 0xb8) + 8);
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec(_UnityEngine_Object_TypeInfo_12d54e0);
  }
  uVar8 = native_UnityEngine_Object__op_Equality_8e9a3c(uVar12,0,0);
  if ((uVar8 & 1) != 0) {
    if (((*(byte *)(_UIToggle_TypeInfo_12d64e0 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UIToggle_TypeInfo_12d64e0 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    plVar11 = (long *)(*(long *)(_UIToggle_TypeInfo_12d64e0 + 0xb8) + 8);
    lVar10 = *plVar11;
    *plVar11 = param_1;
    native_sub_4326e0(plVar11,param_1);
    uVar12 = *(undefined8 *)(param_1 + 0x50);
    if (((*(byte *)(_EventDelegate_TypeInfo_12d4590 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_EventDelegate_TypeInfo_12d4590 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    uVar8 = native_EventDelegate__IsValid_deef08(uVar12,0);
    if ((uVar8 & 1) == 0) {
      uVar12 = *(undefined8 *)(param_1 + 0x70);
      if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
        native_sub_4327ec();
      }
      uVar8 = native_UnityEngine_Object__op_Inequality_8d76fc(uVar12,0,0);
      if (((uVar8 & 1) != 0) &&
         (uVar8 = native_System_String__IsNullOrEmpty_b09430(*(undefined8 *)(param_1 + 0x78),0),
         (uVar8 & 1) == 0)) {
        lVar1 = *(long *)(param_1 + 0x70);
        uVar12 = *(undefined8 *)(param_1 + 0x78);
        auStack_64[0] = *(undefined1 *)(param_1 + 0x88);
        uVar7 = native_sub_4327fc(_bool_TypeInfo_12d3bd0,auStack_64);
        if (lVar1 == 0) goto LAB_00946448;
        native_UnityEngine_GameObject__SendMessage_8de4c0(lVar1,uVar12,uVar7,1,0);
      }
    }
    else {
      uVar12 = *(undefined8 *)(param_1 + 0x50);
      if (((*(byte *)(_EventDelegate_TypeInfo_12d4590 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_EventDelegate_TypeInfo_12d4590 + 0xe0) == 0)) {
        native_sub_4327ec();
      }
      native_EventDelegate__Execute_deecbc(uVar12,0);
    }
    if (((*(byte *)(_UIToggle_TypeInfo_12d64e0 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UIToggle_TypeInfo_12d64e0 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    plVar11 = (long *)(*(long *)(_UIToggle_TypeInfo_12d64e0 + 0xb8) + 8);
    *plVar11 = lVar10;
    native_sub_4326e0(plVar11,lVar10);
  }
  uVar12 = *(undefined8 *)(param_1 + 0x38);
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar8 = native_UnityEngine_Object__op_Inequality_8d76fc(uVar12,0,0);
  if ((uVar8 & 1) != 0) {
    uVar5 = 0xffffffff;
    if (bVar2) {
      uVar5 = 1;
    }
    lVar10 = native_ActiveAnimation__Play_561f30(*(undefined8 *)(param_1 + 0x38),0,uVar5,2,0,0);
    if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
      native_sub_4327ec(_UnityEngine_Object_TypeInfo_12d54e0);
    }
    uVar8 = native_UnityEngine_Object__op_Inequality_8d76fc(lVar10,0,0);
    if ((uVar8 & 1) != 0) {
      if (*(char *)(param_1 + 0x49) == '\0') {
        if (((*(byte *)(_NGUITools_TypeInfo_12d53c8 + 0x133) >> 2 & 1) != 0) &&
           (*(int *)(_NGUITools_TypeInfo_12d53c8 + 0xe0) == 0)) {
          native_sub_4327ec();
        }
        uVar8 = native_NGUITools__GetActive_72d02c(param_1,0);
        if ((uVar8 & 1) != 0) goto LAB_0094618c;
      }
      if (lVar10 == 0) goto LAB_00946448;
      native_ActiveAnimation__Finish_5608e8(lVar10,0);
    }
  }
LAB_0094618c:
  uVar12 = *(undefined8 *)(param_1 + 0x30);
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar8 = native_UnityEngine_Object__op_Inequality_8d76fc(uVar12,0,0);
  if ((uVar8 & 1) != 0) {
    uVar5 = 0xffffffff;
    if (bVar2) {
      uVar5 = 1;
    }
    lVar10 = native_ActiveAnimation__Play_561c20(*(undefined8 *)(param_1 + 0x30),0,uVar5,2,0,0);
    if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
      native_sub_4327ec(_UnityEngine_Object_TypeInfo_12d54e0);
    }
    uVar8 = native_UnityEngine_Object__op_Inequality_8d76fc(lVar10,0,0);
    if ((uVar8 & 1) != 0) {
      if (*(char *)(param_1 + 0x49) == '\0') {
        if (((*(byte *)(_NGUITools_TypeInfo_12d53c8 + 0x133) >> 2 & 1) != 0) &&
           (*(int *)(_NGUITools_TypeInfo_12d53c8 + 0xe0) == 0)) {
          native_sub_4327ec();
        }
        uVar8 = native_NGUITools__GetActive_72d02c(param_1,0);
        if ((uVar8 & 1) != 0) goto LAB_0094625c;
      }
      if (lVar10 == 0) goto LAB_00946448;
      native_ActiveAnimation__Finish_5608e8(lVar10,0);
    }
  }
LAB_0094625c:
  uVar12 = *(undefined8 *)(param_1 + 0x40);
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar8 = native_UnityEngine_Object__op_Inequality_8d76fc(uVar12,0,0);
  if ((uVar8 & 1) == 0) {
    return;
  }
  if (((*(byte *)(_NGUITools_TypeInfo_12d53c8 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_NGUITools_TypeInfo_12d53c8 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  bVar3 = native_NGUITools__GetActive_72d02c(param_1,0);
  plVar11 = *(long **)(param_1 + 0x40);
  if (plVar11 != (long *)0x0) {
    (**(code **)(*plVar11 + 0x198))(plVar11,bVar2,*(undefined8 *)(*plVar11 + 0x1a0));
    if ((*(char *)(param_1 + 0x49) != '\0') || (((bVar3 ^ 1) & 1) != 0)) {
      lVar10 = *(long *)(param_1 + 0x40);
      if (lVar10 == 0) goto LAB_00946448;
      uVar5 = 0x3f800000;
      if (!bVar2) {
        uVar5 = 0;
      }
      uVar5 = native_UnityEngine_Mathf__Clamp01_8d9d9c(uVar5,0);
      *(undefined4 *)(lVar10 + 0x74) = uVar5;
    }
    if (*(long *)(param_1 + 0x40) != 0) {
      if (*(int *)(*(long *)(param_1 + 0x40) + 0x3c) != 0) {
        lVar10 = native_UnityEngine_Component__get_gameObject_8da66c(param_1,0);
        if ((lVar10 == 0) ||
           (lVar10 = native_UnityEngine_GameObject__GetComponentsInChildren_object__4a2674
                               (lVar10,1,
                                _Method_UnityEngine_GameObject_GetComponentsInChildren_UITweener____12e4b98
                               ), lVar10 == 0)) goto LAB_00946448;
        iVar9 = (int)*(ulong *)(lVar10 + 0x18);
        if (0 < iVar9) {
          uVar5 = 0x3f800000;
          if (!bVar2) {
            uVar5 = 0;
          }
          if ((*(ulong *)(lVar10 + 0x18) & 0xffffffff) != 0) {
            uVar8 = 0;
            do {
              plVar11 = *(long **)(lVar10 + 0x20 + uVar8 * 8);
              uVar12 = *(undefined8 *)(param_1 + 0x40);
              if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
                 (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
                native_sub_4327ec();
              }
              uVar6 = native_UnityEngine_Object__op_Inequality_8d76fc(plVar11,uVar12,0);
              if ((uVar6 & 1) != 0) {
                if ((plVar11 == (long *)0x0) || (*(long *)(param_1 + 0x40) == 0)) goto LAB_00946448;
                if ((*(int *)((long)plVar11 + 0x3c) == *(int *)(*(long *)(param_1 + 0x40) + 0x3c))
                   && ((**(code **)(*plVar11 + 0x198))
                                 (plVar11,bVar2,*(undefined8 *)(*plVar11 + 0x1a0)),
                      (*(char *)(param_1 + 0x49) == '\0' & bVar3) == 0)) {
                  uVar13 = native_UnityEngine_Mathf__Clamp01_8d9d9c(uVar5,0);
                  *(undefined4 *)((long)plVar11 + 0x74) = uVar13;
                }
              }
              uVar8 = uVar8 + 1;
              if ((long)iVar9 <= (long)uVar8) {
                return;
              }
            } while (uVar8 < *(uint *)(lVar10 + 0x18));
          }
LAB_0094641c:
          uVar12 = native_sub_43283c();
                    /* WARNING: Subroutine does not return */
          native_sub_4327dc(uVar12,0);
        }
      }
      return;
    }
  }
LAB_00946448:
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* UIToggle$$Set @ 0x945b78
 * void UIToggle__Set (UIToggle_o* __this, bool state, bool notify, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIToggle$$Set
   void UIToggle__Set (UIToggle_o* __this, bool state, bool notify, const MethodInfo* method); */

void native_UIToggle__Set_945b78(long param_1,byte param_2,ulong param_3)

{
  long lVar1;
  byte bVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 uVar5;
  int iVar6;
  long lVar7;
  long *plVar8;
  undefined8 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined1 auStack_64 [4];
  
  if ((bRam0000000001341431 & 1) == 0) {
    native_sub_43273c(&bool_TypeInfo_12d3bd0);
    native_sub_43273c(&EventDelegate_TypeInfo_12d4590);
    native_sub_43273c(&Method_UnityEngine_GameObject_GetComponentsInChildren_UITweener____12e4b98);
    native_sub_43273c(&NGUITools_TypeInfo_12d53c8);
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    native_sub_43273c(&UIToggle_TypeInfo_12d64e0);
    bRam0000000001341431 = 1;
  }
  if ((*(long *)(param_1 + 0x58) != 0) &&
     (uVar3 = native_UIToggle_Validate__Invoke_55b360(*(long *)(param_1 + 0x58),param_2 & 1,0),
     (uVar3 & 1) == 0)) {
    return;
  }
  if (*(char *)(param_1 + 0x89) == '\0') {
    *(byte *)(param_1 + 0x88) = param_2 & 1;
    *(byte *)(param_1 + 0x48) = param_2 & 1;
    uVar9 = *(undefined8 *)(param_1 + 0x20);
    if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    uVar3 = native_UnityEngine_Object__op_Inequality_8d76fc(uVar9,0,0);
    if ((uVar3 & 1) == 0) {
      return;
    }
    plVar8 = *(long **)(param_1 + 0x20);
    if (plVar8 != (long *)0x0) {
      uVar11 = 0;
      uVar10 = 0x3f800000;
      if ((param_2 & 1) == 0) {
        uVar11 = 0x3f800000;
        uVar10 = 0;
      }
      if (*(char *)(param_1 + 0x28) != '\0') {
        uVar10 = uVar11;
      }
                    /* WARNING: Could not recover jumptable at 0x00945ee8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar8 + 0x1b8))(uVar10,plVar8,*(undefined8 *)(*plVar8 + 0x1c0));
      return;
    }
    goto LAB_00946448;
  }
  if (((*(char *)(param_1 + 0x88) != '\0' ^ param_2) & 1) == 0) {
    return;
  }
  if ((*(int *)(param_1 + 0x18) != 0) && ((param_2 & 1) != 0)) {
    if (((*(byte *)(_UIToggle_TypeInfo_12d64e0 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UIToggle_TypeInfo_12d64e0 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    if (**(long **)(_UIToggle_TypeInfo_12d64e0 + 0xb8) == 0) goto LAB_00946448;
    iVar6 = *(int *)(**(long **)(_UIToggle_TypeInfo_12d64e0 + 0xb8) + 0x18);
    while (0 < iVar6) {
      uVar3 = 0;
      while( true ) {
        if (((*(byte *)(_UIToggle_TypeInfo_12d64e0 + 0x133) >> 2 & 1) != 0) &&
           (*(int *)(_UIToggle_TypeInfo_12d64e0 + 0xe0) == 0)) {
          native_sub_4327ec();
        }
        if ((**(long **)(_UIToggle_TypeInfo_12d64e0 + 0xb8) == 0) ||
           (lVar7 = *(long *)(**(long **)(_UIToggle_TypeInfo_12d64e0 + 0xb8) + 0x10), lVar7 == 0))
        goto LAB_00946448;
        if (*(uint *)(lVar7 + 0x18) <= uVar3) goto LAB_0094641c;
        lVar7 = *(long *)(lVar7 + uVar3 * 8 + 0x20);
        if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
           (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
          native_sub_4327ec();
        }
        uVar4 = native_UnityEngine_Object__op_Inequality_8d76fc(lVar7,param_1,0);
        if ((uVar4 & 1) != 0) {
          if (lVar7 == 0) goto LAB_00946448;
          if (*(int *)(lVar7 + 0x18) == *(int *)(param_1 + 0x18)) {
            native_UIToggle__Set_945b78(lVar7,0,1);
          }
        }
        if (((*(byte *)(_UIToggle_TypeInfo_12d64e0 + 0x133) >> 2 & 1) != 0) &&
           (*(int *)(_UIToggle_TypeInfo_12d64e0 + 0xe0) == 0)) {
          native_sub_4327ec();
        }
        lVar7 = **(long **)(_UIToggle_TypeInfo_12d64e0 + 0xb8);
        if (lVar7 == 0) goto LAB_00946448;
        if (*(int *)(lVar7 + 0x18) != iVar6) break;
        uVar3 = uVar3 + 1;
        if ((long)iVar6 <= (long)uVar3) goto LAB_00945d90;
      }
      if (((*(byte *)(_UIToggle_TypeInfo_12d64e0 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_UIToggle_TypeInfo_12d64e0 + 0xe0) == 0)) {
        native_sub_4327ec();
        lVar7 = **(long **)(_UIToggle_TypeInfo_12d64e0 + 0xb8);
        if (lVar7 == 0) goto LAB_00946448;
      }
      iVar6 = *(int *)(lVar7 + 0x18);
    }
  }
LAB_00945d90:
  *(byte *)(param_1 + 0x88) = param_2 & 1;
  uVar9 = *(undefined8 *)(param_1 + 0x20);
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar3 = native_UnityEngine_Object__op_Inequality_8d76fc(uVar9,0,0);
  if ((uVar3 & 1) != 0) {
    if (*(char *)(param_1 + 0x49) == '\0') {
      if (((*(byte *)(_NGUITools_TypeInfo_12d53c8 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_NGUITools_TypeInfo_12d53c8 + 0xe0) == 0)) {
        native_sub_4327ec();
      }
      uVar3 = native_NGUITools__GetActive_72d02c(param_1,0);
      if ((uVar3 & 1) != 0) {
        if (*(long *)(param_1 + 0x20) == 0) goto LAB_00946448;
        uVar9 = native_UnityEngine_Component__get_gameObject_8da66c(*(long *)(param_1 + 0x20),0);
        uVar11 = 0;
        uVar10 = 0x3f800000;
        if (*(char *)(param_1 + 0x88) == '\0') {
          uVar11 = 0x3f800000;
          uVar10 = 0;
        }
        if (*(char *)(param_1 + 0x28) != '\0') {
          uVar10 = uVar11;
        }
        native_TweenAlpha__Begin_6e3220(0x3e19999a,uVar10,0,uVar9,0);
        goto joined_r0x00945e50;
      }
    }
    plVar8 = *(long **)(param_1 + 0x20);
    if (plVar8 == (long *)0x0) goto LAB_00946448;
    uVar11 = 0;
    uVar10 = 0x3f800000;
    if (*(char *)(param_1 + 0x88) == '\0') {
      uVar11 = 0x3f800000;
      uVar10 = 0;
    }
    if (*(char *)(param_1 + 0x28) != '\0') {
      uVar10 = uVar11;
    }
    (**(code **)(*plVar8 + 0x1b8))(uVar10,plVar8,*(undefined8 *)(*plVar8 + 0x1c0));
  }
joined_r0x00945e50:
  if ((param_3 & 1) != 0) {
    if (((*(byte *)(_UIToggle_TypeInfo_12d64e0 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UIToggle_TypeInfo_12d64e0 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    uVar9 = *(undefined8 *)(*(long *)(_UIToggle_TypeInfo_12d64e0 + 0xb8) + 8);
    if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
      native_sub_4327ec(_UnityEngine_Object_TypeInfo_12d54e0);
    }
    uVar3 = native_UnityEngine_Object__op_Equality_8e9a3c(uVar9,0,0);
    if ((uVar3 & 1) != 0) {
      if (((*(byte *)(_UIToggle_TypeInfo_12d64e0 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_UIToggle_TypeInfo_12d64e0 + 0xe0) == 0)) {
        native_sub_4327ec();
      }
      plVar8 = (long *)(*(long *)(_UIToggle_TypeInfo_12d64e0 + 0xb8) + 8);
      lVar7 = *plVar8;
      *plVar8 = param_1;
      native_sub_4326e0(plVar8,param_1);
      uVar9 = *(undefined8 *)(param_1 + 0x50);
      if (((*(byte *)(_EventDelegate_TypeInfo_12d4590 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_EventDelegate_TypeInfo_12d4590 + 0xe0) == 0)) {
        native_sub_4327ec();
      }
      uVar3 = native_EventDelegate__IsValid_deef08(uVar9,0);
      if ((uVar3 & 1) == 0) {
        uVar9 = *(undefined8 *)(param_1 + 0x70);
        if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
           (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
          native_sub_4327ec();
        }
        uVar3 = native_UnityEngine_Object__op_Inequality_8d76fc(uVar9,0,0);
        if (((uVar3 & 1) != 0) &&
           (uVar3 = native_System_String__IsNullOrEmpty_b09430(*(undefined8 *)(param_1 + 0x78),0),
           (uVar3 & 1) == 0)) {
          lVar1 = *(long *)(param_1 + 0x70);
          uVar9 = *(undefined8 *)(param_1 + 0x78);
          auStack_64[0] = *(undefined1 *)(param_1 + 0x88);
          uVar5 = native_sub_4327fc(_bool_TypeInfo_12d3bd0,auStack_64);
          if (lVar1 == 0) goto LAB_00946448;
          native_UnityEngine_GameObject__SendMessage_8de4c0(lVar1,uVar9,uVar5,1,0);
        }
      }
      else {
        uVar9 = *(undefined8 *)(param_1 + 0x50);
        if (((*(byte *)(_EventDelegate_TypeInfo_12d4590 + 0x133) >> 2 & 1) != 0) &&
           (*(int *)(_EventDelegate_TypeInfo_12d4590 + 0xe0) == 0)) {
          native_sub_4327ec();
        }
        native_EventDelegate__Execute_deecbc(uVar9,0);
      }
      if (((*(byte *)(_UIToggle_TypeInfo_12d64e0 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_UIToggle_TypeInfo_12d64e0 + 0xe0) == 0)) {
        native_sub_4327ec();
      }
      plVar8 = (long *)(*(long *)(_UIToggle_TypeInfo_12d64e0 + 0xb8) + 8);
      *plVar8 = lVar7;
      native_sub_4326e0(plVar8,lVar7);
    }
  }
  uVar9 = *(undefined8 *)(param_1 + 0x38);
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar3 = native_UnityEngine_Object__op_Inequality_8d76fc(uVar9,0,0);
  if ((uVar3 & 1) != 0) {
    uVar10 = 0xffffffff;
    if ((param_2 & 1) != 0) {
      uVar10 = 1;
    }
    lVar7 = native_ActiveAnimation__Play_561f30(*(undefined8 *)(param_1 + 0x38),0,uVar10,2,0,0);
    if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
      native_sub_4327ec(_UnityEngine_Object_TypeInfo_12d54e0);
    }
    uVar3 = native_UnityEngine_Object__op_Inequality_8d76fc(lVar7,0,0);
    if ((uVar3 & 1) != 0) {
      if (*(char *)(param_1 + 0x49) == '\0') {
        if (((*(byte *)(_NGUITools_TypeInfo_12d53c8 + 0x133) >> 2 & 1) != 0) &&
           (*(int *)(_NGUITools_TypeInfo_12d53c8 + 0xe0) == 0)) {
          native_sub_4327ec();
        }
        uVar3 = native_NGUITools__GetActive_72d02c(param_1,0);
        if ((uVar3 & 1) != 0) goto LAB_0094618c;
      }
      if (lVar7 == 0) goto LAB_00946448;
      native_ActiveAnimation__Finish_5608e8(lVar7,0);
    }
  }
LAB_0094618c:
  uVar9 = *(undefined8 *)(param_1 + 0x30);
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar3 = native_UnityEngine_Object__op_Inequality_8d76fc(uVar9,0,0);
  if ((uVar3 & 1) != 0) {
    uVar10 = 0xffffffff;
    if ((param_2 & 1) != 0) {
      uVar10 = 1;
    }
    lVar7 = native_ActiveAnimation__Play_561c20(*(undefined8 *)(param_1 + 0x30),0,uVar10,2,0,0);
    if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
      native_sub_4327ec(_UnityEngine_Object_TypeInfo_12d54e0);
    }
    uVar3 = native_UnityEngine_Object__op_Inequality_8d76fc(lVar7,0,0);
    if ((uVar3 & 1) != 0) {
      if (*(char *)(param_1 + 0x49) == '\0') {
        if (((*(byte *)(_NGUITools_TypeInfo_12d53c8 + 0x133) >> 2 & 1) != 0) &&
           (*(int *)(_NGUITools_TypeInfo_12d53c8 + 0xe0) == 0)) {
          native_sub_4327ec();
        }
        uVar3 = native_NGUITools__GetActive_72d02c(param_1,0);
        if ((uVar3 & 1) != 0) goto LAB_0094625c;
      }
      if (lVar7 == 0) goto LAB_00946448;
      native_ActiveAnimation__Finish_5608e8(lVar7,0);
    }
  }
LAB_0094625c:
  uVar9 = *(undefined8 *)(param_1 + 0x40);
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar3 = native_UnityEngine_Object__op_Inequality_8d76fc(uVar9,0,0);
  if ((uVar3 & 1) == 0) {
    return;
  }
  if (((*(byte *)(_NGUITools_TypeInfo_12d53c8 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_NGUITools_TypeInfo_12d53c8 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  bVar2 = native_NGUITools__GetActive_72d02c(param_1,0);
  plVar8 = *(long **)(param_1 + 0x40);
  if (plVar8 != (long *)0x0) {
    (**(code **)(*plVar8 + 0x198))(plVar8,param_2 & 1,*(undefined8 *)(*plVar8 + 0x1a0));
    if ((*(char *)(param_1 + 0x49) != '\0') || (((bVar2 ^ 1) & 1) != 0)) {
      lVar7 = *(long *)(param_1 + 0x40);
      if (lVar7 == 0) goto LAB_00946448;
      uVar10 = 0x3f800000;
      if ((param_2 & 1) == 0) {
        uVar10 = 0;
      }
      uVar10 = native_UnityEngine_Mathf__Clamp01_8d9d9c(uVar10,0);
      *(undefined4 *)(lVar7 + 0x74) = uVar10;
    }
    if (*(long *)(param_1 + 0x40) != 0) {
      if (*(int *)(*(long *)(param_1 + 0x40) + 0x3c) != 0) {
        lVar7 = native_UnityEngine_Component__get_gameObject_8da66c(param_1,0);
        if ((lVar7 == 0) ||
           (lVar7 = native_UnityEngine_GameObject__GetComponentsInChildren_object__4a2674
                              (lVar7,1,
                               _Method_UnityEngine_GameObject_GetComponentsInChildren_UITweener____12e4b98
                              ), lVar7 == 0)) goto LAB_00946448;
        iVar6 = (int)*(ulong *)(lVar7 + 0x18);
        if (0 < iVar6) {
          uVar10 = 0x3f800000;
          if ((param_2 & 1) == 0) {
            uVar10 = 0;
          }
          if ((*(ulong *)(lVar7 + 0x18) & 0xffffffff) != 0) {
            uVar3 = 0;
            do {
              plVar8 = *(long **)(lVar7 + 0x20 + uVar3 * 8);
              uVar9 = *(undefined8 *)(param_1 + 0x40);
              if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
                 (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
                native_sub_4327ec();
              }
              uVar4 = native_UnityEngine_Object__op_Inequality_8d76fc(plVar8,uVar9,0);
              if ((uVar4 & 1) != 0) {
                if ((plVar8 == (long *)0x0) || (*(long *)(param_1 + 0x40) == 0)) goto LAB_00946448;
                if ((*(int *)((long)plVar8 + 0x3c) == *(int *)(*(long *)(param_1 + 0x40) + 0x3c)) &&
                   ((**(code **)(*plVar8 + 0x198))
                              (plVar8,param_2 & 1,*(undefined8 *)(*plVar8 + 0x1a0)),
                   (*(char *)(param_1 + 0x49) == '\0' & bVar2) == 0)) {
                  uVar11 = native_UnityEngine_Mathf__Clamp01_8d9d9c(uVar10,0);
                  *(undefined4 *)((long)plVar8 + 0x74) = uVar11;
                }
              }
              uVar3 = uVar3 + 1;
              if ((long)iVar6 <= (long)uVar3) {
                return;
              }
            } while (uVar3 < *(uint *)(lVar7 + 0x18));
          }
LAB_0094641c:
          uVar9 = native_sub_43283c();
                    /* WARNING: Subroutine does not return */
          native_sub_4327dc(uVar9,0);
        }
      }
      return;
    }
  }
LAB_00946448:
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* UIToggle$$.ctor @ 0x946bb8
 * void UIToggle___ctor (UIToggle_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIToggle$$.ctor
   void UIToggle___ctor (UIToggle_o* __this, const MethodInfo* method); */

undefined1  [16] native_UIToggle___ctor_946bb8(ulong param_1)

{
  undefined8 uVar1;
  undefined1 auVar2 [16];
  
  if ((bRam0000000001341432 & 1) == 0) {
    native_sub_43273c(&Method_System_Collections_Generic_List_EventDelegate___ctor___12dc738);
    native_sub_43273c(&System_Collections_Generic_List_EventDelegate__TypeInfo_12d2a08);
    native_sub_43273c(&StringLiteral_OnActivate_12f01e8);
    bRam0000000001341432 = 1;
  }
  uVar1 = native_sub_432808(_System_Collections_Generic_List_EventDelegate__TypeInfo_12d2a08);
  native_System_Collections_Generic_List_XmlEventCache_XmlEvent______ctor_d3ff44
            (uVar1,_Method_System_Collections_Generic_List_EventDelegate___ctor___12dc738);
  *(undefined8 *)(param_1 + 0x50) = uVar1;
  native_sub_4326e0((undefined8 *)(param_1 + 0x50),uVar1);
  *(undefined8 *)(param_1 + 0x78) = _StringLiteral_OnActivate_12f01e8;
  native_sub_4326e0(param_1 + 0x78);
  *(undefined1 *)(param_1 + 0x88) = 1;
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



/* UIToggle$$.cctor @ 0x946c68
 * void UIToggle___cctor (const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIToggle$$.cctor
   void UIToggle___cctor (const MethodInfo* method); */

void native_UIToggle___cctor_946c68(void)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  
  if ((bRam0000000001341433 & 1) == 0) {
    native_sub_43273c(&Method_BetterList_UIToggle___ctor___12d8a30);
    native_sub_43273c(&BetterList_UIToggle__TypeInfo_12d2158);
    native_sub_43273c(&UIToggle_TypeInfo_12d64e0);
    bRam0000000001341433 = 1;
  }
  uVar4 = native_sub_432808(_BetterList_UIToggle__TypeInfo_12d2158);
  native_BetterList_object____ctor_ba2d1c(uVar4,_Method_BetterList_UIToggle___ctor___12d8a30);
  puVar5 = *(undefined8 **)(_UIToggle_TypeInfo_12d64e0 + 0xb8);
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


