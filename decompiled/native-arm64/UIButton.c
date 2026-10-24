/* ARM64 IL2CPP native pseudocode from Ghidra.
 * Recovered implementation, not original C# source.
 * Function boundaries follow the IL2CPP method address table. */


/* UIButton$$get_isEnabled @ 0xc90214
 * bool UIButton__get_isEnabled (UIButton_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIButton$$get_isEnabled
   bool UIButton__get_isEnabled (UIButton_o* __this, const MethodInfo* method); */

undefined8 native_UIButton__get_isEnabled_c90214(undefined8 param_1)

{
  undefined8 uVar1;
  ulong uVar2;
  long lVar3;
  
  if ((bRam000000000134287f & 1) == 0) {
    native_sub_43273c(&Method_UnityEngine_Component_GetComponent_Collider2D____12e29c8);
    native_sub_43273c(&Method_UnityEngine_GameObject_GetComponent_Collider____12e4978);
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    bRam000000000134287f = 1;
  }
  uVar2 = native_UnityEngine_Behaviour__get_enabled_8d7acc(param_1,0);
  if ((uVar2 & 1) == 0) {
    return 0;
  }
  lVar3 = native_UnityEngine_Component__get_gameObject_8da66c(param_1,0);
  if (lVar3 != 0) {
    lVar3 = native_UnityEngine_GameObject__GetComponent_BE2_BlockSectionHeader_Custom__4a2214
                      (lVar3,_Method_UnityEngine_GameObject_GetComponent_Collider____12e4978);
    if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
      native_sub_4327ec(_UnityEngine_Object_TypeInfo_12d54e0);
    }
    uVar2 = native_UnityEngine_Object__op_Implicit_8e1b98(lVar3,0);
    if ((uVar2 & 1) != 0) {
      if (lVar3 == 0) goto LAB_00c90358;
      uVar2 = native_UnityEngine_Collider__get_enabled_dbac0c(lVar3,0);
      if ((uVar2 & 1) != 0) {
        return 1;
      }
    }
    lVar3 = native_UnityEngine_Component__GetComponent_ActiveAnimation__49daec
                      (param_1,_Method_UnityEngine_Component_GetComponent_Collider2D____12e29c8);
    if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
      native_sub_4327ec(_UnityEngine_Object_TypeInfo_12d54e0);
    }
    uVar2 = native_UnityEngine_Object__op_Implicit_8e1b98(lVar3,0);
    if ((uVar2 & 1) == 0) {
      return 0;
    }
    if (lVar3 != 0) {
      if (pcRam0000000001340940 == (code *)0x0) {
        pcRam0000000001340940 = (code *)native_sub_4326f0(&UNK_00e2c6dd);
      }
                    /* WARNING: Could not recover jumptable at 0x008d7b08. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar1 = (*pcRam0000000001340940)(lVar3);
      return uVar1;
    }
  }
LAB_00c90358:
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* UIButton$$set_isEnabled @ 0xc9035c
 * void UIButton__set_isEnabled (UIButton_o* __this, bool value, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIButton$$set_isEnabled
   void UIButton__set_isEnabled (UIButton_o* __this, bool value, const MethodInfo* method); */

void native_UIButton__set_isEnabled_c9035c(long *param_1,uint param_2)

{
  undefined4 uVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  long *plVar7;
  undefined8 uVar8;
  uint uVar9;
  
  if ((bRam0000000001342880 & 1) == 0) {
    native_sub_43273c(&Method_UnityEngine_Component_GetComponent_Collider2D____12e29c8);
    native_sub_43273c(&Method_UnityEngine_Component_GetComponents_UIButtonColor____12e2da8);
    native_sub_43273c(&Method_UnityEngine_GameObject_GetComponent_Collider____12e4978);
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    bRam0000000001342880 = 1;
  }
  uVar3 = (**(code **)(*param_1 + 0x178))(param_1,*(undefined8 *)(*param_1 + 0x180));
  if (((uVar3 ^ param_2) & 1) == 0) {
    return;
  }
  lVar4 = native_UnityEngine_Component__get_gameObject_8da66c(param_1,0);
  if (lVar4 != 0) {
    lVar4 = native_UnityEngine_GameObject__GetComponent_BE2_BlockSectionHeader_Custom__4a2214
                      (lVar4,_Method_UnityEngine_GameObject_GetComponent_Collider____12e4978);
    lVar5 = native_UnityEngine_Component__get_gameObject_8da66c(param_1,0);
    if (lVar5 != 0) {
      uVar3 = native_UnityEngine_GameObject__get_activeInHierarchy_8de728(lVar5,0);
      if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
        native_sub_4327ec(_UnityEngine_Object_TypeInfo_12d54e0);
      }
      uVar6 = native_UnityEngine_Object__op_Inequality_8d76fc(lVar4,0,0);
      if ((uVar6 & 1) == 0) {
        lVar4 = native_UnityEngine_Component__GetComponent_ActiveAnimation__49daec
                          (param_1,_Method_UnityEngine_Component_GetComponent_Collider2D____12e29c8)
        ;
        if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
           (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
          native_sub_4327ec(_UnityEngine_Object_TypeInfo_12d54e0);
        }
        uVar6 = native_UnityEngine_Object__op_Inequality_8d76fc(lVar4,0,0);
        if ((uVar6 & 1) == 0) {
          if (pcRam0000000001340948 == (code *)0x0) {
            pcRam0000000001340948 = (code *)native_sub_4326f0(&UNK_00e2c702);
          }
                    /* WARNING: Could not recover jumptable at 0x008d7b58. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*pcRam0000000001340948)(param_1,param_2 & 1);
          return;
        }
        if (lVar4 != 0) {
          native_UnityEngine_Behaviour__set_enabled_8d7b0c(lVar4,param_2 & 1,0);
          lVar4 = native_UnityEngine_Component__GetComponents_BaseInput__49dd48
                            (param_1,
                             _Method_UnityEngine_Component_GetComponents_UIButtonColor____12e2da8);
          if (lVar4 != 0) {
            uVar2 = *(uint *)(lVar4 + 0x18);
            uVar1 = 0;
            if ((param_2 & 1) == 0) {
              uVar1 = 3;
            }
            if ((int)uVar2 < 1) {
              return;
            }
            uVar9 = 0;
            while (uVar9 < uVar2) {
              plVar7 = *(long **)(lVar4 + (long)(int)uVar9 * 8 + 0x20);
              if (plVar7 == (long *)0x0) goto LAB_00c905e0;
              (**(code **)(*plVar7 + 0x208))
                        (plVar7,uVar1,(uVar3 ^ 1) & 1,*(undefined8 *)(*plVar7 + 0x210));
              uVar2 = *(uint *)(lVar4 + 0x18);
              uVar9 = uVar9 + 1;
              if ((int)uVar2 <= (int)uVar9) {
                return;
              }
            }
LAB_00c905e4:
            uVar8 = native_sub_43283c();
                    /* WARNING: Subroutine does not return */
            native_sub_4327dc(uVar8,0);
          }
        }
      }
      else if (lVar4 != 0) {
        native_UnityEngine_Collider__set_enabled_dbac4c(lVar4,param_2 & 1,0);
        lVar4 = native_UnityEngine_Component__GetComponents_BaseInput__49dd48
                          (param_1,
                           _Method_UnityEngine_Component_GetComponents_UIButtonColor____12e2da8);
        if (lVar4 != 0) {
          uVar2 = *(uint *)(lVar4 + 0x18);
          uVar1 = 0;
          if ((param_2 & 1) == 0) {
            uVar1 = 3;
          }
          if (0 < (int)uVar2) {
            uVar9 = 0;
            do {
              if (uVar2 <= uVar9) goto LAB_00c905e4;
              plVar7 = *(long **)(lVar4 + (long)(int)uVar9 * 8 + 0x20);
              if (plVar7 == (long *)0x0) goto LAB_00c905e0;
              (**(code **)(*plVar7 + 0x208))
                        (plVar7,uVar1,(uVar3 ^ 1) & 1,*(undefined8 *)(*plVar7 + 0x210));
              uVar2 = *(uint *)(lVar4 + 0x18);
              uVar9 = uVar9 + 1;
            } while ((int)uVar9 < (int)uVar2);
          }
          return;
        }
      }
    }
  }
LAB_00c905e0:
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* UIButton$$get_normalSprite @ 0xc905f0
 * System_String_o* UIButton__get_normalSprite (UIButton_o* __this, const MethodInfo* method); */

/* UIButton$$get_normalSprite
   System_String_o* UIButton__get_normalSprite (UIButton_o* __this, const MethodInfo* method); */

long native_UIButton__get_normalSprite_c905f0(long *param_1)

{
  if (*(char *)((long)param_1 + 0x74) == '\0') {
    (**(code **)(*param_1 + 0x198))(param_1,*(undefined8 *)(*param_1 + 0x1a0));
  }
  return param_1[0x1b];
}



/* UIButton$$set_normalSprite @ 0xc90628
 * void UIButton__set_normalSprite (UIButton_o* __this, System_String_o* value, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIButton$$set_normalSprite
   void UIButton__set_normalSprite (UIButton_o* __this, System_String_o* value, const MethodInfo*
   method); */

undefined1  [16] native_UIButton__set_normalSprite_c90628(long *param_1,long param_2)

{
  ulong uVar1;
  long *plVar2;
  long lVar3;
  undefined1 auVar4 [16];
  
  if ((bRam0000000001342881 & 1) == 0) {
    native_sub_43273c(&NGUITools_TypeInfo_12d53c8);
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    native_sub_43273c(&StringLiteral_last_change_12f5390);
    bRam0000000001342881 = 1;
  }
  if (*(char *)((long)param_1 + 0x74) == '\0') {
    (**(code **)(*param_1 + 0x198))(param_1,*(undefined8 *)(*param_1 + 0x1a0));
  }
  lVar3 = param_1[0x19];
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar1 = native_UnityEngine_Object__op_Inequality_8d76fc(lVar3,0,0);
  plVar2 = param_1 + 0x1b;
  if (((uVar1 & 1) != 0) &&
     (uVar1 = native_System_String__IsNullOrEmpty_b09430(*plVar2,0), (uVar1 & 1) == 0)) {
    if (param_1[0x19] == 0) {
                    /* WARNING: Subroutine does not return */
      native_sub_432810();
    }
    uVar1 = native_System_String__op_Equality_afc18c
                      (*plVar2,*(undefined8 *)(param_1[0x19] + 0x208),0);
    if ((uVar1 & 1) != 0) {
      param_1[0x1b] = param_2;
      native_sub_4326e0(plVar2,param_2);
      native_UIButton__SetSprite_c907a0(param_1,param_2);
      lVar3 = param_1[0x19];
      if (((*(byte *)(_NGUITools_TypeInfo_12d53c8 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_NGUITools_TypeInfo_12d53c8 + 0xe0) == 0)) {
        native_sub_4327ec();
      }
      auVar4._8_8_ = _StringLiteral_last_change_12f5390;
      auVar4._0_8_ = lVar3;
      return auVar4;
    }
  }
  param_1[0x1b] = param_2;
  auVar4 = native_sub_4326e0(plVar2,param_2);
  if ((int)param_1[0x10] != 0) {
    return auVar4;
  }
  if ((bRam0000000001342889 & 1) == 0) {
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    bRam0000000001342889 = 1;
  }
  lVar3 = param_1[0x19];
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  auVar4 = native_UnityEngine_Object__op_Inequality_8d76fc(lVar3,0,0);
  if (((auVar4._0_8_ & 1) != 0) &&
     (auVar4 = native_System_String__IsNullOrEmpty_b09430(param_2,0), (auVar4._0_8_ & 1) == 0)) {
    if (param_1[0x19] != 0) {
      auVar4 = native_System_String__op_Inequality_afbbb4
                         (*(undefined8 *)(param_1[0x19] + 0x208),param_2,0);
      if ((auVar4._0_8_ & 1) == 0) {
        return auVar4;
      }
      if (param_1[0x19] != 0) {
        auVar4 = native_UISprite__set_spriteName_c35c6c(param_1[0x19],param_2,0);
        if ((char)param_1[0x17] == '\0') {
          return auVar4;
        }
        plVar2 = (long *)param_1[0x19];
        if (plVar2 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00c90878. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          auVar4 = (**(code **)(*plVar2 + 0x3a8))(plVar2,*(undefined8 *)(*plVar2 + 0x3b0));
          return auVar4;
        }
      }
    }
                    /* WARNING: Subroutine does not return */
    native_sub_432810();
  }
  return auVar4;
}



/* UIButton$$get_normalSprite2D @ 0xc90890
 * UnityEngine_Sprite_o* UIButton__get_normalSprite2D (UIButton_o* __this, const MethodInfo* method); */

/* UIButton$$get_normalSprite2D
   UnityEngine_Sprite_o* UIButton__get_normalSprite2D (UIButton_o* __this, const MethodInfo*
   method); */

long native_UIButton__get_normalSprite2D_c90890(long *param_1)

{
  if (*(char *)((long)param_1 + 0x74) == '\0') {
    (**(code **)(*param_1 + 0x198))(param_1,*(undefined8 *)(*param_1 + 0x1a0));
  }
  return param_1[0x1c];
}



/* UIButton$$set_normalSprite2D @ 0xc908c8
 * void UIButton__set_normalSprite2D (UIButton_o* __this, UnityEngine_Sprite_o* value, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIButton$$set_normalSprite2D
   void UIButton__set_normalSprite2D (UIButton_o* __this, UnityEngine_Sprite_o* value, const
   MethodInfo* method); */

undefined1  [16] native_UIButton__set_normalSprite2D_c908c8(long *param_1,long param_2)

{
  ulong uVar1;
  long *plVar2;
  long lVar3;
  undefined8 uVar4;
  undefined1 auVar5 [16];
  
  if ((bRam0000000001342882 & 1) == 0) {
    native_sub_43273c(&NGUITools_TypeInfo_12d53c8);
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    native_sub_43273c(&StringLiteral_last_change_12f5390);
    bRam0000000001342882 = 1;
  }
  if (*(char *)((long)param_1 + 0x74) == '\0') {
    (**(code **)(*param_1 + 0x198))(param_1,*(undefined8 *)(*param_1 + 0x1a0));
  }
  lVar3 = param_1[0x1a];
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar1 = native_UnityEngine_Object__op_Inequality_8d76fc(lVar3,0,0);
  if ((uVar1 & 1) != 0) {
    if (param_1[0x1a] == 0) {
                    /* WARNING: Subroutine does not return */
      native_sub_432810();
    }
    lVar3 = param_1[0x1c];
    uVar4 = *(undefined8 *)(param_1[0x1a] + 0x200);
    if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    uVar1 = native_UnityEngine_Object__op_Equality_8e9a3c(lVar3,uVar4,0);
    if ((uVar1 & 1) != 0) {
      param_1[0x1c] = param_2;
      native_sub_4326e0(param_1 + 0x1c,param_2);
      native_UIButton__SetSprite_c90a60(param_1,param_2);
      lVar3 = param_1[0x19];
      if (((*(byte *)(_NGUITools_TypeInfo_12d53c8 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_NGUITools_TypeInfo_12d53c8 + 0xe0) == 0)) {
        native_sub_4327ec();
      }
      auVar5._8_8_ = _StringLiteral_last_change_12f5390;
      auVar5._0_8_ = lVar3;
      return auVar5;
    }
  }
  param_1[0x1c] = param_2;
  auVar5 = native_sub_4326e0(param_1 + 0x1c,param_2);
  if ((int)param_1[0x10] != 0) {
    return auVar5;
  }
  if ((bRam000000000134288a & 1) == 0) {
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    bRam000000000134288a = 1;
  }
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  auVar5 = native_UnityEngine_Object__op_Inequality_8d76fc(param_2,0,0);
  if ((auVar5._0_8_ & 1) != 0) {
    lVar3 = param_1[0x1a];
    if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    auVar5 = native_UnityEngine_Object__op_Inequality_8d76fc(lVar3,0,0);
    if ((auVar5._0_8_ & 1) != 0) {
      if (param_1[0x1a] != 0) {
        uVar4 = *(undefined8 *)(param_1[0x1a] + 0x200);
        if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
           (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
          native_sub_4327ec();
        }
        auVar5 = native_UnityEngine_Object__op_Inequality_8d76fc(uVar4,param_2,0);
        if ((auVar5._0_8_ & 1) == 0) {
          return auVar5;
        }
        if (param_1[0x1a] != 0) {
          auVar5 = native_UI2DSprite__set_sprite2D_6e81bc(param_1[0x1a],param_2,0);
          if ((char)param_1[0x17] == '\0') {
            return auVar5;
          }
          plVar2 = (long *)param_1[0x1a];
          if (plVar2 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00c90b70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            auVar5 = (**(code **)(*plVar2 + 0x3a8))(plVar2,*(undefined8 *)(*plVar2 + 0x3b0));
            return auVar5;
          }
        }
      }
                    /* WARNING: Subroutine does not return */
      native_sub_432810();
    }
  }
  return auVar5;
}



/* UIButton$$OnInit @ 0xc90b88
 * void UIButton__OnInit (UIButton_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIButton$$OnInit
   void UIButton__OnInit (UIButton_o* __this, const MethodInfo* method); */

void native_UIButton__OnInit_c90b88(long param_1)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  ulong uVar4;
  long *plVar5;
  undefined8 *puVar6;
  long *plVar7;
  long *plVar8;
  long lVar9;
  undefined8 uVar10;
  
  if ((bRam0000000001342883 & 1) == 0) {
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    native_sub_43273c(&UI2DSprite_TypeInfo_12d63f0);
    native_sub_43273c(&UISprite_TypeInfo_12d64c0);
    bRam0000000001342883 = 1;
  }
  native_UIButtonColor__OnInit_c90d48(param_1);
  plVar5 = *(long **)(param_1 + 0x78);
  if (plVar5 == (long *)0x0) {
LAB_00c90c08:
    plVar5 = (long *)0x0;
  }
  else {
    if (*(byte *)(*plVar5 + 300) < *(byte *)(_UISprite_TypeInfo_12d64c0 + 300)) goto LAB_00c90c08;
    if (*(long *)(*(long *)(*plVar5 + 200) + (ulong)*(byte *)(_UISprite_TypeInfo_12d64c0 + 300) * 8
                 + -8) != _UISprite_TypeInfo_12d64c0) {
      plVar5 = (long *)0x0;
    }
  }
  plVar8 = (long *)(param_1 + 200);
  *plVar8 = (long)plVar5;
  native_sub_4326e0(plVar8);
  plVar5 = *(long **)(param_1 + 0x78);
  if (plVar5 == (long *)0x0) {
LAB_00c90c5c:
    plVar5 = (long *)0x0;
  }
  else {
    if (*(byte *)(*plVar5 + 300) < *(byte *)(_UI2DSprite_TypeInfo_12d63f0 + 300)) goto LAB_00c90c5c;
    if (*(long *)(*(long *)(*plVar5 + 200) +
                  (ulong)*(byte *)(_UI2DSprite_TypeInfo_12d63f0 + 300) * 8 + -8) !=
        _UI2DSprite_TypeInfo_12d63f0) {
      plVar5 = (long *)0x0;
    }
  }
  plVar7 = (long *)(param_1 + 0xd0);
  *plVar7 = (long)plVar5;
  native_sub_4326e0(plVar7);
  uVar10 = *(undefined8 *)(param_1 + 200);
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar4 = native_UnityEngine_Object__op_Inequality_8d76fc(uVar10,0,0);
  if ((uVar4 & 1) != 0) {
    if (*plVar8 == 0) goto LAB_00c90d44;
    *(undefined8 *)(param_1 + 0xd8) = *(undefined8 *)(*plVar8 + 0x208);
    native_sub_4326e0();
  }
  lVar9 = *plVar7;
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar4 = native_UnityEngine_Object__op_Inequality_8d76fc(lVar9,0,0);
  if ((uVar4 & 1) == 0) {
    return;
  }
  if (*plVar7 != 0) {
    puVar6 = (undefined8 *)(param_1 + 0xe0);
    *puVar6 = *(undefined8 *)(*plVar7 + 0x200);
    if (iRam0000000001345318 != 0) {
      puVar1 = (ulong *)(((ulong)puVar6 >> 0x12 & 0x7fff) * 8 + 0x138ecd8);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = *puVar1 | 1L << ((ulong)puVar6 >> 0xc & 0x3f);
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    return;
  }
LAB_00c90d44:
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* UIButton$$OnEnable @ 0xc91020
 * void UIButton__OnEnable (UIButton_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIButton$$OnEnable
   void UIButton__OnEnable (UIButton_o* __this, const MethodInfo* method); */

void native_UIButton__OnEnable_c91020(long *param_1)

{
  undefined4 uVar1;
  uint uVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if ((bRam0000000001342884 & 1) == 0) {
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    native_sub_43273c(&UICamera_TypeInfo_12d6410);
    bRam0000000001342884 = 1;
  }
  uVar1 = native_UnityEngine_Time__get_frameCount_770964(0);
  *(undefined4 *)(param_1 + 0x1d) = uVar1;
  uVar3 = (**(code **)(*param_1 + 0x178))(param_1,*(undefined8 *)(*param_1 + 0x180));
  if ((uVar3 & 1) != 0) {
    if (*(char *)((long)param_1 + 0x74) != '\0') {
      if (((*(byte *)(_UICamera_TypeInfo_12d6410 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
        native_sub_4327ec();
      }
      uVar4 = native_UICamera__get_hoveredObject_c9114c();
      uVar5 = native_UnityEngine_Component__get_gameObject_8da66c(param_1,0);
      if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
        native_sub_4327ec(_UnityEngine_Object_TypeInfo_12d54e0);
      }
      uVar2 = native_UnityEngine_Object__op_Equality_8e9a3c(uVar4,uVar5,0);
                    /* WARNING: Could not recover jumptable at 0x00c91110. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x1c8))(param_1,uVar2 & 1,*(undefined8 *)(*param_1 + 0x1d0));
      return;
    }
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00c91138. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x208))(param_1,3,1,*(undefined8 *)(*param_1 + 0x210));
  return;
}



/* UIButton$$OnDragOver @ 0xc91330
 * void UIButton__OnDragOver (UIButton_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIButton$$OnDragOver
   void UIButton__OnDragOver (UIButton_o* __this, const MethodInfo* method); */

void native_UIButton__OnDragOver_c91330(long *param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  
  if ((bRam0000000001342885 & 1) == 0) {
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    native_sub_43273c(&UICamera_TypeInfo_12d6410);
    bRam0000000001342885 = 1;
  }
  uVar1 = (**(code **)(*param_1 + 0x178))(param_1,*(undefined8 *)(*param_1 + 0x180));
  if ((uVar1 & 1) == 0) {
    return;
  }
  if (*(char *)((long)param_1 + 0x84) == '\0') {
    if (((*(byte *)(_UICamera_TypeInfo_12d6410 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    lVar3 = *(long *)(*(long *)(_UICamera_TypeInfo_12d6410 + 0xb8) + 0xe0);
    if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      native_sub_432810();
    }
    uVar4 = *(undefined8 *)(lVar3 + 0x50);
    uVar2 = native_UnityEngine_Component__get_gameObject_8da66c(param_1,0);
    if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
      native_sub_4327ec(_UnityEngine_Object_TypeInfo_12d54e0);
    }
    uVar1 = native_UnityEngine_Object__op_Equality_8e9a3c(uVar4,uVar2,0);
    if ((uVar1 & 1) == 0) {
      return;
    }
  }
  if ((bRam0000000001342892 & 1) == 0) {
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    bRam0000000001342892 = 1;
  }
  uVar1 = (**(code **)(*param_1 + 0x178))(param_1,*(undefined8 *)(*param_1 + 0x180));
  if ((uVar1 & 1) != 0) {
    if (*(char *)((long)param_1 + 0x74) == '\0') {
      (**(code **)(*param_1 + 0x198))(param_1,*(undefined8 *)(*param_1 + 0x1a0));
    }
    lVar3 = param_1[3];
    if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    uVar1 = native_UnityEngine_Object__op_Inequality_8d76fc(lVar3,0,0);
    if ((uVar1 & 1) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00c914e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x208))(param_1,2,0,*(undefined8 *)(*param_1 + 0x210));
      return;
    }
  }
  return;
}



/* UIButton$$OnDragOut @ 0xc914f4
 * void UIButton__OnDragOut (UIButton_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIButton$$OnDragOut
   void UIButton__OnDragOut (UIButton_o* __this, const MethodInfo* method); */

void native_UIButton__OnDragOut_c914f4(long *param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  
  if ((bRam0000000001342886 & 1) == 0) {
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    native_sub_43273c(&UICamera_TypeInfo_12d6410);
    bRam0000000001342886 = 1;
  }
  uVar1 = (**(code **)(*param_1 + 0x178))(param_1,*(undefined8 *)(*param_1 + 0x180));
  if ((uVar1 & 1) == 0) {
    return;
  }
  if (*(char *)((long)param_1 + 0x84) == '\0') {
    if (((*(byte *)(_UICamera_TypeInfo_12d6410 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    lVar3 = *(long *)(*(long *)(_UICamera_TypeInfo_12d6410 + 0xb8) + 0xe0);
    if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      native_sub_432810();
    }
    uVar4 = *(undefined8 *)(lVar3 + 0x50);
    uVar2 = native_UnityEngine_Component__get_gameObject_8da66c(param_1,0);
    if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
      native_sub_4327ec(_UnityEngine_Object_TypeInfo_12d54e0);
    }
    uVar1 = native_UnityEngine_Object__op_Equality_8e9a3c(uVar4,uVar2,0);
    if ((uVar1 & 1) == 0) {
      return;
    }
  }
  if ((bRam0000000001342893 & 1) == 0) {
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    bRam0000000001342893 = 1;
  }
  uVar1 = (**(code **)(*param_1 + 0x178))(param_1,*(undefined8 *)(*param_1 + 0x180));
  if ((uVar1 & 1) != 0) {
    if (*(char *)((long)param_1 + 0x74) == '\0') {
      (**(code **)(*param_1 + 0x198))(param_1,*(undefined8 *)(*param_1 + 0x1a0));
    }
    lVar3 = param_1[3];
    if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    uVar1 = native_UnityEngine_Object__op_Inequality_8d76fc(lVar3,0,0);
    if ((uVar1 & 1) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00c916a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x208))(param_1,0,0,*(undefined8 *)(*param_1 + 0x210));
      return;
    }
  }
  return;
}



/* UIButton$$OnClick @ 0xc916b8
 * void UIButton__OnClick (UIButton_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIButton$$OnClick
   void UIButton__OnClick (UIButton_o* __this, const MethodInfo* method); */

void native_UIButton__OnClick_c916b8(long *param_1)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  undefined4 uVar5;
  ulong uVar6;
  long *plVar7;
  undefined8 *puVar8;
  long lVar9;
  undefined8 uVar10;
  
  if ((bRam0000000001342887 & 1) == 0) {
    native_sub_43273c(&EventDelegate_TypeInfo_12d4590);
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    native_sub_43273c(&UIButton_TypeInfo_12d6408);
    native_sub_43273c(&UICamera_TypeInfo_12d6410);
    bRam0000000001342887 = 1;
  }
  lVar9 = param_1[0x1d];
  iVar4 = native_UnityEngine_Time__get_frameCount_770964(0);
  if ((int)lVar9 != iVar4) {
    uVar10 = **(undefined8 **)(_UIButton_TypeInfo_12d6408 + 0xb8);
    if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    uVar6 = native_UnityEngine_Object__op_Equality_8e9a3c(uVar10,0,0);
    if ((uVar6 & 1) != 0) {
      uVar6 = (**(code **)(*param_1 + 0x178))(param_1,*(undefined8 *)(*param_1 + 0x180));
      if ((uVar6 & 1) != 0) {
        if (((*(byte *)(_UICamera_TypeInfo_12d6410 + 0x133) >> 2 & 1) != 0) &&
           (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
          native_sub_4327ec();
        }
        iVar4 = *(int *)(*(long *)(_UICamera_TypeInfo_12d6410 + 0xb8) + 0xd4);
        if (iVar4 != -2) {
          if (((*(byte *)(_UICamera_TypeInfo_12d6410 + 0x133) >> 2 & 1) != 0) &&
             (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
            native_sub_4327ec();
            iVar4 = *(int *)(*(long *)(_UICamera_TypeInfo_12d6410 + 0xb8) + 0xd4);
          }
          if (iVar4 != -3) {
            plVar7 = *(long **)(_UIButton_TypeInfo_12d6408 + 0xb8);
            *plVar7 = (long)param_1;
            native_sub_4326e0(plVar7,param_1);
            uVar5 = native_UnityEngine_Time__get_frameCount_770964(0);
            *(undefined4 *)(param_1 + 0x1d) = uVar5;
            lVar9 = param_1[0x18];
            if (((*(byte *)(_EventDelegate_TypeInfo_12d4590 + 0x133) >> 2 & 1) != 0) &&
               (*(int *)(_EventDelegate_TypeInfo_12d4590 + 0xe0) == 0)) {
              native_sub_4327ec();
            }
            native_EventDelegate__Execute_deecbc(lVar9,0);
            puVar8 = *(undefined8 **)(_UIButton_TypeInfo_12d6408 + 0xb8);
            *puVar8 = 0;
            if (iRam0000000001345318 != 0) {
              puVar1 = (ulong *)(((ulong)puVar8 >> 0x12 & 0x7fff) * 8 + 0x138ecd8);
              do {
                cVar2 = '\x01';
                bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
                if (bVar3) {
                  *puVar1 = *puVar1 | 1L << ((ulong)puVar8 >> 0xc & 0x3f);
                  cVar2 = ExclusiveMonitorsStatus();
                }
              } while (cVar2 != '\0');
            }
            return;
          }
        }
      }
    }
  }
  return;
}



/* UIButton$$SetState @ 0xc9185c
 * void UIButton__SetState (UIButton_o* __this, int32_t state, bool immediate, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIButton$$SetState
   void UIButton__SetState (UIButton_o* __this, int32_t state, bool immediate, const MethodInfo*
   method); */

void native_UIButton__SetState_c9185c(long param_1,undefined4 param_2,uint param_3)

{
  long *plVar1;
  ulong uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if ((bRam0000000001342888 & 1) == 0) {
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    bRam0000000001342888 = 1;
  }
  native_UIButtonColor__SetState_c91a18(param_1,param_2,param_3 & 1);
  uVar5 = *(undefined8 *)(param_1 + 200);
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar2 = native_UnityEngine_Object__op_Inequality_8d76fc(uVar5,0,0);
  if ((uVar2 & 1) != 0) {
    switch(param_2) {
    case 0:
      uVar5 = *(undefined8 *)(param_1 + 0xd8);
      break;
    case 1:
      uVar2 = native_System_String__IsNullOrEmpty_b09430(*(undefined8 *)(param_1 + 0x88),0);
      lVar3 = 0xd8;
      if ((uVar2 & 1) == 0) {
        lVar3 = 0x88;
      }
      uVar5 = *(undefined8 *)(param_1 + lVar3);
      break;
    case 2:
      uVar5 = *(undefined8 *)(param_1 + 0x90);
      break;
    case 3:
      uVar5 = *(undefined8 *)(param_1 + 0x98);
      break;
    default:
      goto LAB_00c91960;
    }
    if ((bRam0000000001342889 & 1) == 0) {
      native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
      bRam0000000001342889 = 1;
    }
    uVar4 = *(undefined8 *)(param_1 + 200);
    if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    uVar2 = native_UnityEngine_Object__op_Inequality_8d76fc(uVar4,0,0);
    if (((uVar2 & 1) == 0) ||
       (uVar2 = native_System_String__IsNullOrEmpty_b09430(uVar5,0), (uVar2 & 1) != 0)) {
      return;
    }
    if (*(long *)(param_1 + 200) != 0) {
      uVar2 = native_System_String__op_Inequality_afbbb4
                        (*(undefined8 *)(*(long *)(param_1 + 200) + 0x208),uVar5,0);
      if ((uVar2 & 1) == 0) {
        return;
      }
      if (*(long *)(param_1 + 200) != 0) {
        native_UISprite__set_spriteName_c35c6c(*(long *)(param_1 + 200),uVar5,0);
        if (*(char *)(param_1 + 0xb8) == '\0') {
          return;
        }
        plVar1 = *(long **)(param_1 + 200);
        if (plVar1 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00c90878. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(*plVar1 + 0x3a8))(plVar1,*(undefined8 *)(*plVar1 + 0x3b0));
          return;
        }
      }
    }
                    /* WARNING: Subroutine does not return */
    native_sub_432810();
  }
  uVar5 = *(undefined8 *)(param_1 + 0xd0);
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar2 = native_UnityEngine_Object__op_Inequality_8d76fc(uVar5,0,0);
  if ((uVar2 & 1) != 0) {
    switch(param_2) {
    case 0:
      uVar5 = *(undefined8 *)(param_1 + 0xe0);
      break;
    case 1:
      uVar5 = *(undefined8 *)(param_1 + 0xa0);
      if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
        native_sub_4327ec();
      }
      uVar2 = native_UnityEngine_Object__op_Equality_8e9a3c(uVar5,0,0);
      lVar3 = 0xe0;
      if ((uVar2 & 1) == 0) {
        lVar3 = 0xa0;
      }
      uVar5 = *(undefined8 *)(param_1 + lVar3);
      break;
    case 2:
      uVar5 = *(undefined8 *)(param_1 + 0xa8);
      break;
    case 3:
      uVar5 = *(undefined8 *)(param_1 + 0xb0);
      break;
    default:
      goto LAB_00c91960;
    }
    if ((bRam000000000134288a & 1) == 0) {
      native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
      bRam000000000134288a = 1;
    }
    if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    uVar2 = native_UnityEngine_Object__op_Inequality_8d76fc(uVar5,0,0);
    if ((uVar2 & 1) != 0) {
      uVar4 = *(undefined8 *)(param_1 + 0xd0);
      if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
        native_sub_4327ec();
      }
      uVar2 = native_UnityEngine_Object__op_Inequality_8d76fc(uVar4,0,0);
      if ((uVar2 & 1) != 0) {
        if (*(long *)(param_1 + 0xd0) != 0) {
          uVar4 = *(undefined8 *)(*(long *)(param_1 + 0xd0) + 0x200);
          if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
             (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
            native_sub_4327ec();
          }
          uVar2 = native_UnityEngine_Object__op_Inequality_8d76fc(uVar4,uVar5,0);
          if ((uVar2 & 1) == 0) {
            return;
          }
          if (*(long *)(param_1 + 0xd0) != 0) {
            native_UI2DSprite__set_sprite2D_6e81bc(*(long *)(param_1 + 0xd0),uVar5,0);
            if (*(char *)(param_1 + 0xb8) == '\0') {
              return;
            }
            plVar1 = *(long **)(param_1 + 0xd0);
            if (plVar1 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00c90b70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
              (**(code **)(*plVar1 + 0x3a8))(plVar1,*(undefined8 *)(*plVar1 + 0x3b0));
              return;
            }
          }
        }
                    /* WARNING: Subroutine does not return */
        native_sub_432810();
      }
    }
    return;
  }
LAB_00c91960:
  return;
}



/* UIButton$$SetSprite @ 0xc907a0
 * void UIButton__SetSprite (UIButton_o* __this, System_String_o* sp, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIButton$$SetSprite
   void UIButton__SetSprite (UIButton_o* __this, System_String_o* sp, const MethodInfo* method); */

void native_UIButton__SetSprite_c907a0(long param_1,undefined8 param_2)

{
  ulong uVar1;
  long *plVar2;
  undefined8 uVar3;
  
  if ((bRam0000000001342889 & 1) == 0) {
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    bRam0000000001342889 = 1;
  }
  uVar3 = *(undefined8 *)(param_1 + 200);
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar1 = native_UnityEngine_Object__op_Inequality_8d76fc(uVar3,0,0);
  if (((uVar1 & 1) == 0) ||
     (uVar1 = native_System_String__IsNullOrEmpty_b09430(param_2,0), (uVar1 & 1) != 0)) {
    return;
  }
  if (*(long *)(param_1 + 200) != 0) {
    uVar1 = native_System_String__op_Inequality_afbbb4
                      (*(undefined8 *)(*(long *)(param_1 + 200) + 0x208),param_2,0);
    if ((uVar1 & 1) == 0) {
      return;
    }
    if (*(long *)(param_1 + 200) != 0) {
      native_UISprite__set_spriteName_c35c6c(*(long *)(param_1 + 200),param_2,0);
      if (*(char *)(param_1 + 0xb8) == '\0') {
        return;
      }
      plVar2 = *(long **)(param_1 + 200);
      if (plVar2 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00c90878. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar2 + 0x3a8))(plVar2,*(undefined8 *)(*plVar2 + 0x3b0));
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* UIButton$$SetSprite @ 0xc90a60
 * void UIButton__SetSprite (UIButton_o* __this, UnityEngine_Sprite_o* sp, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIButton$$SetSprite
   void UIButton__SetSprite (UIButton_o* __this, UnityEngine_Sprite_o* sp, const MethodInfo*
   method); */

void native_UIButton__SetSprite_c90a60(long param_1,undefined8 param_2)

{
  ulong uVar1;
  long *plVar2;
  undefined8 uVar3;
  
  if ((bRam000000000134288a & 1) == 0) {
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    bRam000000000134288a = 1;
  }
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar1 = native_UnityEngine_Object__op_Inequality_8d76fc(param_2,0,0);
  if ((uVar1 & 1) != 0) {
    uVar3 = *(undefined8 *)(param_1 + 0xd0);
    if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    uVar1 = native_UnityEngine_Object__op_Inequality_8d76fc(uVar3,0,0);
    if ((uVar1 & 1) != 0) {
      if (*(long *)(param_1 + 0xd0) != 0) {
        uVar3 = *(undefined8 *)(*(long *)(param_1 + 0xd0) + 0x200);
        if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
           (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
          native_sub_4327ec();
        }
        uVar1 = native_UnityEngine_Object__op_Inequality_8d76fc(uVar3,param_2,0);
        if ((uVar1 & 1) == 0) {
          return;
        }
        if (*(long *)(param_1 + 0xd0) != 0) {
          native_UI2DSprite__set_sprite2D_6e81bc(*(long *)(param_1 + 0xd0),param_2,0);
          if (*(char *)(param_1 + 0xb8) == '\0') {
            return;
          }
          plVar2 = *(long **)(param_1 + 0xd0);
          if (plVar2 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00c90b70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (**(code **)(*plVar2 + 0x3a8))(plVar2,*(undefined8 *)(*plVar2 + 0x3b0));
            return;
          }
        }
      }
                    /* WARNING: Subroutine does not return */
      native_sub_432810();
    }
  }
  return;
}



/* UIButton$$.ctor @ 0xc91a8c
 * void UIButton___ctor (UIButton_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIButton$$.ctor
   void UIButton___ctor (UIButton_o* __this, const MethodInfo* method); */

void native_UIButton___ctor_c91a8c(long param_1)

{
  undefined8 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  if ((bRam000000000134288b & 1) == 0) {
    native_sub_43273c(&Method_System_Collections_Generic_List_EventDelegate___ctor___12dc738);
    native_sub_43273c(&System_Collections_Generic_List_EventDelegate__TypeInfo_12d2a08);
    bRam000000000134288b = 1;
  }
  uVar1 = native_sub_432808(_System_Collections_Generic_List_EventDelegate__TypeInfo_12d2a08);
  native_System_Collections_Generic_List_XmlEventCache_XmlEvent______ctor_d3ff44
            (uVar1,_Method_System_Collections_Generic_List_EventDelegate___ctor___12dc738);
  *(undefined8 *)(param_1 + 0xc0) = uVar1;
  native_sub_4326e0((undefined8 *)(param_1 + 0xc0),uVar1);
  uVar5 = 0x3f800000;
  uStack_30 = 0;
  uStack_28 = 0;
  native_UnityEngine_Color___ctor_8d980c(0x3f61e1e2,0x3f48c8c9,0x3f169697,0x3f800000,&uStack_30,0);
  *(undefined8 *)(param_1 + 0x28) = uStack_28;
  *(undefined8 *)(param_1 + 0x20) = uStack_30;
  uVar3 = 0x3f23a3a4;
  uVar4 = 0x3ef6f6f7;
  uStack_40 = 0;
  uStack_38 = 0;
  native_UnityEngine_Color___ctor_8d980c(0x3f37b7b8,&uStack_40,0);
  *(undefined8 *)(param_1 + 0x38) = uStack_38;
  *(undefined8 *)(param_1 + 0x30) = uStack_40;
  uVar2 = native_UnityEngine_Color__get_grey_8d9e54(0);
  *(undefined4 *)(param_1 + 0x40) = uVar2;
  *(undefined4 *)(param_1 + 0x44) = uVar3;
  *(undefined4 *)(param_1 + 0x48) = uVar4;
  *(undefined4 *)(param_1 + 0x4c) = uVar5;
  *(undefined4 *)(param_1 + 0x50) = 0x3e4ccccd;
  native_UIWidgetContainer___ctor_94341c(param_1,0);
  return;
}


