/* ARM64 IL2CPP native pseudocode from Ghidra.
 * Recovered implementation, not original C# source.
 * Function boundaries follow the IL2CPP method address table. */


/* UIButtonKeys$$OnEnable @ 0xc92878
 * void UIButtonKeys__OnEnable (UIButtonKeys_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIButtonKeys$$OnEnable
   void UIButtonKeys__OnEnable (UIButtonKeys_o* __this, const MethodInfo* method); */

void native_UIButtonKeys__OnEnable_c92878(long param_1)

{
  undefined8 uVar1;
  
  native_UIButtonKeys__Upgrade_c928a0();
  if ((bRam0000000001341fec & 1) == 0) {
    native_sub_43273c(&Method_BetterList_UIKeyNavigation__Add___12d89d8,0);
    native_sub_43273c(&UIKeyNavigation_TypeInfo_12d6460);
    native_sub_43273c(&StringLiteral_Start_12f1038);
    bRam0000000001341fec = 1;
  }
  if (((*(byte *)(_UIKeyNavigation_TypeInfo_12d6460 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UIKeyNavigation_TypeInfo_12d6460 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  if (**(long **)(_UIKeyNavigation_TypeInfo_12d6460 + 0xb8) != 0) {
    native_BetterList_object___Add_ba24d8
              (**(long **)(_UIKeyNavigation_TypeInfo_12d6460 + 0xb8),param_1,
               _Method_BetterList_UIKeyNavigation__Add___12d89d8);
    uVar1 = _StringLiteral_Start_12f1038;
    if (*(char *)(param_1 + 0x51) != '\0') {
      if (pcRam0000000001340fd0 == (code *)0x0) {
        pcRam0000000001340fd0 = (code *)native_sub_4326f0(&UNK_00e2f47b);
      }
                    /* WARNING: Could not recover jumptable at 0x008e8d50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*pcRam0000000001340fd0)(0x3a83126f,0,param_1,uVar1);
      return;
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* UIButtonKeys$$Upgrade @ 0xc928a0
 * void UIButtonKeys__Upgrade (UIButtonKeys_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIButtonKeys$$Upgrade
   void UIButtonKeys__Upgrade (UIButtonKeys_o* __this, const MethodInfo* method); */

undefined1  [16] native_UIButtonKeys__Upgrade_c928a0(long param_1)

{
  ulong uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  long *plVar4;
  long lVar5;
  undefined1 auVar6 [16];
  
  if ((bRam0000000001342895 & 1) == 0) {
    native_sub_43273c(&NGUITools_TypeInfo_12d53c8);
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    native_sub_43273c(&StringLiteral_last_change_12f5390);
    bRam0000000001342895 = 1;
  }
  puVar2 = (undefined8 *)(param_1 + 0x40);
  uVar3 = *puVar2;
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar1 = native_UnityEngine_Object__op_Equality_8e9a3c(uVar3,0,0);
  if ((uVar1 & 1) != 0) {
    plVar4 = (long *)(param_1 + 0x58);
    lVar5 = *plVar4;
    if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    uVar1 = native_UnityEngine_Object__op_Inequality_8d76fc(lVar5,0,0);
    if ((uVar1 & 1) != 0) {
      if (*plVar4 == 0) goto LAB_00c92d2c;
      uVar3 = native_UnityEngine_Component__get_gameObject_8da66c(*plVar4,0);
      *puVar2 = uVar3;
      native_sub_4326e0(puVar2,uVar3);
      *plVar4 = 0;
      native_sub_4326e0(plVar4,0);
      if (((*(byte *)(_NGUITools_TypeInfo_12d53c8 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_NGUITools_TypeInfo_12d53c8 + 0xe0) == 0)) {
        native_sub_4327ec();
      }
      native_NGUITools__SetDirty_72ea3c(param_1,_StringLiteral_last_change_12f5390,0);
    }
  }
  puVar2 = (undefined8 *)(param_1 + 0x30);
  uVar3 = *puVar2;
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar1 = native_UnityEngine_Object__op_Equality_8e9a3c(uVar3,0,0);
  if ((uVar1 & 1) != 0) {
    plVar4 = (long *)(param_1 + 0x70);
    lVar5 = *plVar4;
    if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    uVar1 = native_UnityEngine_Object__op_Inequality_8d76fc(lVar5,0,0);
    if ((uVar1 & 1) != 0) {
      if (*plVar4 == 0) goto LAB_00c92d2c;
      uVar3 = native_UnityEngine_Component__get_gameObject_8da66c(*plVar4,0);
      *puVar2 = uVar3;
      native_sub_4326e0(puVar2,uVar3);
      *plVar4 = 0;
      native_sub_4326e0(plVar4,0);
      if (((*(byte *)(_NGUITools_TypeInfo_12d53c8 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_NGUITools_TypeInfo_12d53c8 + 0xe0) == 0)) {
        native_sub_4327ec();
      }
      native_NGUITools__SetDirty_72ea3c(param_1,_StringLiteral_last_change_12f5390,0);
    }
  }
  puVar2 = (undefined8 *)(param_1 + 0x38);
  uVar3 = *puVar2;
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar1 = native_UnityEngine_Object__op_Equality_8e9a3c(uVar3,0,0);
  if ((uVar1 & 1) != 0) {
    plVar4 = (long *)(param_1 + 0x78);
    lVar5 = *plVar4;
    if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    uVar1 = native_UnityEngine_Object__op_Inequality_8d76fc(lVar5,0,0);
    if ((uVar1 & 1) != 0) {
      if (*plVar4 == 0) goto LAB_00c92d2c;
      uVar3 = native_UnityEngine_Component__get_gameObject_8da66c(*plVar4,0);
      *puVar2 = uVar3;
      native_sub_4326e0(puVar2,uVar3);
      *plVar4 = 0;
      native_sub_4326e0(plVar4,0);
      if (((*(byte *)(_NGUITools_TypeInfo_12d53c8 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_NGUITools_TypeInfo_12d53c8 + 0xe0) == 0)) {
        native_sub_4327ec();
      }
      native_NGUITools__SetDirty_72ea3c(param_1,_StringLiteral_last_change_12f5390,0);
    }
  }
  puVar2 = (undefined8 *)(param_1 + 0x20);
  uVar3 = *puVar2;
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar1 = native_UnityEngine_Object__op_Equality_8e9a3c(uVar3,0,0);
  if ((uVar1 & 1) != 0) {
    plVar4 = (long *)(param_1 + 0x60);
    lVar5 = *plVar4;
    if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    uVar1 = native_UnityEngine_Object__op_Inequality_8d76fc(lVar5,0,0);
    if ((uVar1 & 1) != 0) {
      if (*plVar4 == 0) goto LAB_00c92d2c;
      uVar3 = native_UnityEngine_Component__get_gameObject_8da66c(*plVar4,0);
      *puVar2 = uVar3;
      native_sub_4326e0(puVar2,uVar3);
      *plVar4 = 0;
      native_sub_4326e0(plVar4,0);
      if (((*(byte *)(_NGUITools_TypeInfo_12d53c8 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_NGUITools_TypeInfo_12d53c8 + 0xe0) == 0)) {
        native_sub_4327ec();
      }
      native_NGUITools__SetDirty_72ea3c(param_1,_StringLiteral_last_change_12f5390,0);
    }
  }
  puVar2 = (undefined8 *)(param_1 + 0x28);
  uVar3 = *puVar2;
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  auVar6 = native_UnityEngine_Object__op_Equality_8e9a3c(uVar3,0,0);
  if ((auVar6._0_8_ & 1) != 0) {
    plVar4 = (long *)(param_1 + 0x68);
    lVar5 = *plVar4;
    if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    auVar6 = native_UnityEngine_Object__op_Inequality_8d76fc(lVar5,0,0);
    if ((auVar6._0_8_ & 1) != 0) {
      if (*plVar4 != 0) {
        uVar3 = native_UnityEngine_Component__get_gameObject_8da66c(*plVar4,0);
        *puVar2 = uVar3;
        native_sub_4326e0(puVar2,uVar3);
        *plVar4 = 0;
        native_sub_4326e0(plVar4,0);
        if (((*(byte *)(_NGUITools_TypeInfo_12d53c8 + 0x133) >> 2 & 1) != 0) &&
           (*(int *)(_NGUITools_TypeInfo_12d53c8 + 0xe0) == 0)) {
          native_sub_4327ec();
        }
        auVar6._8_8_ = _StringLiteral_last_change_12f5390;
        auVar6._0_8_ = param_1;
        return auVar6;
      }
LAB_00c92d2c:
                    /* WARNING: Subroutine does not return */
      native_sub_432810();
    }
  }
  return auVar6;
}



/* UIButtonKeys$$.ctor @ 0xc92d30
 * void UIButtonKeys___ctor (UIButtonKeys_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIButtonKeys$$.ctor
   void UIButtonKeys___ctor (UIButtonKeys_o* __this, const MethodInfo* method); */

undefined1  [16] native_UIButtonKeys___ctor_c92d30(ulong param_1)

{
  undefined1 auVar1 [16];
  
  if ((bRam0000000001342896 & 1) == 0) {
    native_sub_43273c(&UIKeyNavigation_TypeInfo_12d6460);
    bRam0000000001342896 = 1;
  }
  if (((*(byte *)(_UIKeyNavigation_TypeInfo_12d6460 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UIKeyNavigation_TypeInfo_12d6460 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
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


