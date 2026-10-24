/* ARM64 IL2CPP native pseudocode from Ghidra.
 * Recovered implementation, not original C# source.
 * Function boundaries follow the IL2CPP method address table. */


/* UIImageButton$$get_isEnabled @ 0x9f12d4
 * bool UIImageButton__get_isEnabled (UIImageButton_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIImageButton$$get_isEnabled
   bool UIImageButton__get_isEnabled (UIImageButton_o* __this, const MethodInfo* method); */

undefined8 native_UIImageButton__get_isEnabled_9f12d4(undefined8 param_1)

{
  long lVar1;
  ulong uVar2;
  undefined8 uVar3;
  
  if ((bRam0000000001341970 & 1) == 0) {
    native_sub_43273c(&Method_UnityEngine_GameObject_GetComponent_Collider____12e4978);
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    bRam0000000001341970 = 1;
  }
  lVar1 = native_UnityEngine_Component__get_gameObject_8da66c(param_1,0);
  if (lVar1 != 0) {
    lVar1 = native_UnityEngine_GameObject__GetComponent_BE2_BlockSectionHeader_Custom__4a2214
                      (lVar1,_Method_UnityEngine_GameObject_GetComponent_Collider____12e4978);
    if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
      native_sub_4327ec(_UnityEngine_Object_TypeInfo_12d54e0);
    }
    uVar2 = native_UnityEngine_Object__op_Implicit_8e1b98(lVar1,0);
    if ((uVar2 & 1) == 0) {
      return 0;
    }
    if (lVar1 != 0) {
      if (pcRam0000000001343a68 == (code *)0x0) {
        pcRam0000000001343a68 = (code *)native_sub_4326f0(&UNK_00ecb640);
      }
                    /* WARNING: Could not recover jumptable at 0x00dbac48. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar3 = (*pcRam0000000001343a68)(lVar1);
      return uVar3;
    }
  }
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* UIImageButton$$set_isEnabled @ 0x9f1394
 * void UIImageButton__set_isEnabled (UIImageButton_o* __this, bool value, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIImageButton$$set_isEnabled
   void UIImageButton__set_isEnabled (UIImageButton_o* __this, bool value, const MethodInfo*
   method); */

void native_UIImageButton__set_isEnabled_9f1394(long param_1,uint param_2)

{
  uint uVar1;
  long lVar2;
  ulong uVar3;
  long *plVar4;
  undefined8 *puVar5;
  int *piVar6;
  undefined8 uVar7;
  
  if ((bRam0000000001341971 & 1) == 0) {
    native_sub_43273c(&Method_UnityEngine_GameObject_GetComponent_Collider____12e4978);
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    bRam0000000001341971 = 1;
  }
  lVar2 = native_UnityEngine_Component__get_gameObject_8da66c(param_1,0);
  if (lVar2 == 0) {
LAB_009f147c:
                    /* WARNING: Subroutine does not return */
    native_sub_432810();
  }
  lVar2 = native_UnityEngine_GameObject__GetComponent_BE2_BlockSectionHeader_Custom__4a2214
                    (lVar2,_Method_UnityEngine_GameObject_GetComponent_Collider____12e4978);
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec(_UnityEngine_Object_TypeInfo_12d54e0);
  }
  uVar3 = native_UnityEngine_Object__op_Implicit_8e1b98(lVar2,0);
  if ((uVar3 & 1) != 0) {
    if (lVar2 == 0) goto LAB_009f147c;
    uVar1 = native_UnityEngine_Collider__get_enabled_dbac0c(lVar2,0);
    if (((uVar1 ^ param_2) & 1) != 0) {
      native_UnityEngine_Collider__set_enabled_dbac4c(lVar2,param_2 & 1,0);
      if ((bRam0000000001341974 & 1) == 0) {
        native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
        native_sub_43273c(&UICamera_TypeInfo_12d6410);
        bRam0000000001341974 = 1;
      }
      uVar7 = *(undefined8 *)(param_1 + 0x18);
      if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
        native_sub_4327ec();
      }
      uVar3 = native_UnityEngine_Object__op_Inequality_8d76fc(uVar7,0,0);
      if ((uVar3 & 1) == 0) {
        return;
      }
      uVar3 = native_UIImageButton__get_isEnabled_9f12d4(param_1);
      if ((uVar3 & 1) == 0) {
        uVar7 = *(undefined8 *)(param_1 + 0x38);
      }
      else {
        uVar7 = native_UnityEngine_Component__get_gameObject_8da66c(param_1,0);
        if (((*(byte *)(_UICamera_TypeInfo_12d6410 + 0x133) >> 2 & 1) != 0) &&
           (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
          native_sub_4327ec(_UICamera_TypeInfo_12d6410);
        }
        uVar3 = native_UICamera__IsHighlighted_c92014(uVar7,0);
        lVar2 = 0x28;
        if ((uVar3 & 1) == 0) {
          lVar2 = 0x20;
        }
        uVar7 = *(undefined8 *)(param_1 + lVar2);
      }
      if ((bRam0000000001341976 & 1) == 0) {
        native_sub_43273c(&INGUIAtlas_TypeInfo_12d4c68);
        bRam0000000001341976 = 1;
      }
      uVar3 = native_System_String__IsNullOrEmpty_b09430(uVar7,0);
      if ((uVar3 & 1) == 0) {
        if (*(long *)(param_1 + 0x18) == 0) {
LAB_009f1880:
                    /* WARNING: Subroutine does not return */
          native_sub_432810();
        }
        plVar4 = (long *)native_UISprite__get_atlas_c358c4(*(long *)(param_1 + 0x18),0);
        if (plVar4 != (long *)0x0) {
          lVar2 = *plVar4;
          if ((ulong)*(ushort *)(lVar2 + 0x12a) != 0) {
            uVar3 = 0;
            piVar6 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
            do {
              if (*(long *)(piVar6 + -2) == _INGUIAtlas_TypeInfo_12d4c68) {
                puVar5 = (undefined8 *)(lVar2 + (long)(*piVar6 + 10) * 0x10 + 0x138);
                goto LAB_009f181c;
              }
              uVar3 = uVar3 + 1;
              piVar6 = piVar6 + 4;
            } while (uVar3 < *(ushort *)(lVar2 + 0x12a));
          }
          puVar5 = (undefined8 *)native_sub_3c9b34(plVar4,_INGUIAtlas_TypeInfo_12d4c68,10);
LAB_009f181c:
          lVar2 = (*(code *)*puVar5)(plVar4,uVar7,puVar5[1]);
          if (lVar2 != 0) {
            if (*(long *)(param_1 + 0x18) != 0) {
              native_UISprite__set_spriteName_c35c6c(*(long *)(param_1 + 0x18),uVar7,0);
              if (*(char *)(param_1 + 0x40) == '\0') {
                return;
              }
              plVar4 = *(long **)(param_1 + 0x18);
              if (plVar4 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x009f186c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                (**(code **)(*plVar4 + 0x3a8))(plVar4,*(undefined8 *)(*plVar4 + 0x3b0));
                return;
              }
            }
            goto LAB_009f1880;
          }
        }
      }
      return;
    }
  }
  return;
}



/* UIImageButton$$OnEnable @ 0x9f1578
 * void UIImageButton__OnEnable (UIImageButton_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIImageButton$$OnEnable
   void UIImageButton__OnEnable (UIImageButton_o* __this, const MethodInfo* method); */

void native_UIImageButton__OnEnable_9f1578(long param_1)

{
  ulong uVar1;
  long *plVar2;
  undefined8 *puVar3;
  long lVar4;
  int *piVar5;
  undefined8 uVar6;
  
  if ((bRam0000000001341972 & 1) == 0) {
    native_sub_43273c(&Method_UnityEngine_Component_GetComponentInChildren_UISprite____12e2ce0);
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    bRam0000000001341972 = 1;
  }
  uVar6 = *(undefined8 *)(param_1 + 0x18);
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar1 = native_UnityEngine_Object__op_Equality_8e9a3c(uVar6,0,0);
  if ((uVar1 & 1) != 0) {
    uVar6 = native_UnityEngine_Component__GetComponentInChildren_Animation__49db98
                      (param_1,
                       _Method_UnityEngine_Component_GetComponentInChildren_UISprite____12e2ce0);
    *(undefined8 *)(param_1 + 0x18) = uVar6;
    native_sub_4326e0((undefined8 *)(param_1 + 0x18),uVar6);
  }
  if ((bRam0000000001341974 & 1) == 0) {
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    native_sub_43273c(&UICamera_TypeInfo_12d6410);
    bRam0000000001341974 = 1;
  }
  uVar6 = *(undefined8 *)(param_1 + 0x18);
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar1 = native_UnityEngine_Object__op_Inequality_8d76fc(uVar6,0,0);
  if ((uVar1 & 1) == 0) {
    return;
  }
  uVar1 = native_UIImageButton__get_isEnabled_9f12d4(param_1);
  if ((uVar1 & 1) == 0) {
    uVar6 = *(undefined8 *)(param_1 + 0x38);
  }
  else {
    uVar6 = native_UnityEngine_Component__get_gameObject_8da66c(param_1,0);
    if (((*(byte *)(_UICamera_TypeInfo_12d6410 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
      native_sub_4327ec(_UICamera_TypeInfo_12d6410);
    }
    uVar1 = native_UICamera__IsHighlighted_c92014(uVar6,0);
    lVar4 = 0x28;
    if ((uVar1 & 1) == 0) {
      lVar4 = 0x20;
    }
    uVar6 = *(undefined8 *)(param_1 + lVar4);
  }
  if ((bRam0000000001341976 & 1) == 0) {
    native_sub_43273c(&INGUIAtlas_TypeInfo_12d4c68);
    bRam0000000001341976 = 1;
  }
  uVar1 = native_System_String__IsNullOrEmpty_b09430(uVar6,0);
  if ((uVar1 & 1) == 0) {
    if (*(long *)(param_1 + 0x18) == 0) {
LAB_009f1880:
                    /* WARNING: Subroutine does not return */
      native_sub_432810();
    }
    plVar2 = (long *)native_UISprite__get_atlas_c358c4(*(long *)(param_1 + 0x18),0);
    if (plVar2 != (long *)0x0) {
      lVar4 = *plVar2;
      if ((ulong)*(ushort *)(lVar4 + 0x12a) != 0) {
        uVar1 = 0;
        piVar5 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
        do {
          if (*(long *)(piVar5 + -2) == _INGUIAtlas_TypeInfo_12d4c68) {
            puVar3 = (undefined8 *)(lVar4 + (long)(*piVar5 + 10) * 0x10 + 0x138);
            goto LAB_009f181c;
          }
          uVar1 = uVar1 + 1;
          piVar5 = piVar5 + 4;
        } while (uVar1 < *(ushort *)(lVar4 + 0x12a));
      }
      puVar3 = (undefined8 *)native_sub_3c9b34(plVar2,_INGUIAtlas_TypeInfo_12d4c68,10);
LAB_009f181c:
      lVar4 = (*(code *)*puVar3)(plVar2,uVar6,puVar3[1]);
      if (lVar4 != 0) {
        if (*(long *)(param_1 + 0x18) != 0) {
          native_UISprite__set_spriteName_c35c6c(*(long *)(param_1 + 0x18),uVar6,0);
          if (*(char *)(param_1 + 0x40) == '\0') {
            return;
          }
          plVar2 = *(long **)(param_1 + 0x18);
          if (plVar2 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x009f186c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (**(code **)(*plVar2 + 0x3a8))(plVar2,*(undefined8 *)(*plVar2 + 0x3b0));
            return;
          }
        }
        goto LAB_009f1880;
      }
    }
  }
  return;
}



/* UIImageButton$$OnValidate @ 0x9f162c
 * void UIImageButton__OnValidate (UIImageButton_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIImageButton$$OnValidate
   void UIImageButton__OnValidate (UIImageButton_o* __this, const MethodInfo* method); */

void native_UIImageButton__OnValidate_9f162c(long param_1)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  
  if ((bRam0000000001341973 & 1) == 0) {
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    bRam0000000001341973 = 1;
  }
  uVar5 = *(undefined8 *)(param_1 + 0x18);
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar4 = native_UnityEngine_Object__op_Inequality_8d76fc(uVar5,0,0);
  if ((uVar4 & 1) != 0) {
    puVar6 = (undefined8 *)(param_1 + 0x20);
    uVar4 = native_System_String__IsNullOrEmpty_b09430(*puVar6,0);
    if ((uVar4 & 1) != 0) {
      if (*(long *)(param_1 + 0x18) == 0) goto LAB_009f1758;
      *puVar6 = *(undefined8 *)(*(long *)(param_1 + 0x18) + 0x208);
      native_sub_4326e0(puVar6);
    }
    puVar6 = (undefined8 *)(param_1 + 0x28);
    uVar4 = native_System_String__IsNullOrEmpty_b09430(*puVar6,0);
    if ((uVar4 & 1) != 0) {
      if (*(long *)(param_1 + 0x18) == 0) goto LAB_009f1758;
      *puVar6 = *(undefined8 *)(*(long *)(param_1 + 0x18) + 0x208);
      native_sub_4326e0(puVar6);
    }
    puVar6 = (undefined8 *)(param_1 + 0x30);
    uVar4 = native_System_String__IsNullOrEmpty_b09430(*puVar6,0);
    if ((uVar4 & 1) != 0) {
      if (*(long *)(param_1 + 0x18) == 0) goto LAB_009f1758;
      *puVar6 = *(undefined8 *)(*(long *)(param_1 + 0x18) + 0x208);
      native_sub_4326e0(puVar6);
    }
    puVar6 = (undefined8 *)(param_1 + 0x38);
    uVar4 = native_System_String__IsNullOrEmpty_b09430(*puVar6,0);
    if ((uVar4 & 1) != 0) {
      if (*(long *)(param_1 + 0x18) != 0) {
        *puVar6 = *(undefined8 *)(*(long *)(param_1 + 0x18) + 0x208);
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
LAB_009f1758:
                    /* WARNING: Subroutine does not return */
      native_sub_432810();
    }
  }
  return;
}



/* UIImageButton$$UpdateImage @ 0x9f1480
 * void UIImageButton__UpdateImage (UIImageButton_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIImageButton$$UpdateImage
   void UIImageButton__UpdateImage (UIImageButton_o* __this, const MethodInfo* method); */

void native_UIImageButton__UpdateImage_9f1480(long param_1)

{
  ulong uVar1;
  long *plVar2;
  undefined8 *puVar3;
  long lVar4;
  int *piVar5;
  undefined8 uVar6;
  
  if ((bRam0000000001341974 & 1) == 0) {
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    native_sub_43273c(&UICamera_TypeInfo_12d6410);
    bRam0000000001341974 = 1;
  }
  uVar6 = *(undefined8 *)(param_1 + 0x18);
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar1 = native_UnityEngine_Object__op_Inequality_8d76fc(uVar6,0,0);
  if ((uVar1 & 1) == 0) {
    return;
  }
  uVar1 = native_UIImageButton__get_isEnabled_9f12d4(param_1);
  if ((uVar1 & 1) == 0) {
    uVar6 = *(undefined8 *)(param_1 + 0x38);
  }
  else {
    uVar6 = native_UnityEngine_Component__get_gameObject_8da66c(param_1,0);
    if (((*(byte *)(_UICamera_TypeInfo_12d6410 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
      native_sub_4327ec(_UICamera_TypeInfo_12d6410);
    }
    uVar1 = native_UICamera__IsHighlighted_c92014(uVar6,0);
    lVar4 = 0x28;
    if ((uVar1 & 1) == 0) {
      lVar4 = 0x20;
    }
    uVar6 = *(undefined8 *)(param_1 + lVar4);
  }
  if ((bRam0000000001341976 & 1) == 0) {
    native_sub_43273c(&INGUIAtlas_TypeInfo_12d4c68);
    bRam0000000001341976 = 1;
  }
  uVar1 = native_System_String__IsNullOrEmpty_b09430(uVar6,0);
  if ((uVar1 & 1) == 0) {
    if (*(long *)(param_1 + 0x18) == 0) {
LAB_009f1880:
                    /* WARNING: Subroutine does not return */
      native_sub_432810();
    }
    plVar2 = (long *)native_UISprite__get_atlas_c358c4(*(long *)(param_1 + 0x18),0);
    if (plVar2 != (long *)0x0) {
      lVar4 = *plVar2;
      if ((ulong)*(ushort *)(lVar4 + 0x12a) != 0) {
        uVar1 = 0;
        piVar5 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
        do {
          if (*(long *)(piVar5 + -2) == _INGUIAtlas_TypeInfo_12d4c68) {
            puVar3 = (undefined8 *)(lVar4 + (long)(*piVar5 + 10) * 0x10 + 0x138);
            goto LAB_009f181c;
          }
          uVar1 = uVar1 + 1;
          piVar5 = piVar5 + 4;
        } while (uVar1 < *(ushort *)(lVar4 + 0x12a));
      }
      puVar3 = (undefined8 *)native_sub_3c9b34(plVar2,_INGUIAtlas_TypeInfo_12d4c68,10);
LAB_009f181c:
      lVar4 = (*(code *)*puVar3)(plVar2,uVar6,puVar3[1]);
      if (lVar4 != 0) {
        if (*(long *)(param_1 + 0x18) != 0) {
          native_UISprite__set_spriteName_c35c6c(*(long *)(param_1 + 0x18),uVar6,0);
          if (*(char *)(param_1 + 0x40) == '\0') {
            return;
          }
          plVar2 = *(long **)(param_1 + 0x18);
          if (plVar2 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x009f186c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (**(code **)(*plVar2 + 0x3a8))(plVar2,*(undefined8 *)(*plVar2 + 0x3b0));
            return;
          }
        }
        goto LAB_009f1880;
      }
    }
  }
  return;
}



/* UIImageButton$$OnHover @ 0x9f1884
 * void UIImageButton__OnHover (UIImageButton_o* __this, bool isOver, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIImageButton$$OnHover
   void UIImageButton__OnHover (UIImageButton_o* __this, bool isOver, const MethodInfo* method); */

void native_UIImageButton__OnHover_9f1884(long param_1,ulong param_2)

{
  long *plVar1;
  undefined8 *puVar2;
  ulong uVar3;
  long lVar4;
  int *piVar5;
  undefined8 uVar6;
  
  if ((bRam0000000001341975 & 1) == 0) {
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    bRam0000000001341975 = 1;
  }
  uVar3 = native_UIImageButton__get_isEnabled_9f12d4(param_1);
  if ((uVar3 & 1) != 0) {
    uVar6 = *(undefined8 *)(param_1 + 0x18);
    if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    uVar3 = native_UnityEngine_Object__op_Inequality_8d76fc(uVar6,0,0);
    if ((uVar3 & 1) != 0) {
      lVar4 = 0x28;
      if ((param_2 & 1) == 0) {
        lVar4 = 0x20;
      }
      uVar6 = *(undefined8 *)(param_1 + lVar4);
      if ((bRam0000000001341976 & 1) == 0) {
        native_sub_43273c(&INGUIAtlas_TypeInfo_12d4c68);
        bRam0000000001341976 = 1;
      }
      uVar3 = native_System_String__IsNullOrEmpty_b09430(uVar6,0);
      if ((uVar3 & 1) == 0) {
        if (*(long *)(param_1 + 0x18) == 0) {
LAB_009f1880:
                    /* WARNING: Subroutine does not return */
          native_sub_432810();
        }
        plVar1 = (long *)native_UISprite__get_atlas_c358c4(*(long *)(param_1 + 0x18),0);
        if (plVar1 != (long *)0x0) {
          lVar4 = *plVar1;
          if ((ulong)*(ushort *)(lVar4 + 0x12a) != 0) {
            uVar3 = 0;
            piVar5 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
            do {
              if (*(long *)(piVar5 + -2) == _INGUIAtlas_TypeInfo_12d4c68) {
                puVar2 = (undefined8 *)(lVar4 + (long)(*piVar5 + 10) * 0x10 + 0x138);
                goto LAB_009f181c;
              }
              uVar3 = uVar3 + 1;
              piVar5 = piVar5 + 4;
            } while (uVar3 < *(ushort *)(lVar4 + 0x12a));
          }
          puVar2 = (undefined8 *)native_sub_3c9b34(plVar1,_INGUIAtlas_TypeInfo_12d4c68,10);
LAB_009f181c:
          lVar4 = (*(code *)*puVar2)(plVar1,uVar6,puVar2[1]);
          if (lVar4 != 0) {
            if (*(long *)(param_1 + 0x18) != 0) {
              native_UISprite__set_spriteName_c35c6c(*(long *)(param_1 + 0x18),uVar6,0);
              if (*(char *)(param_1 + 0x40) == '\0') {
                return;
              }
              plVar1 = *(long **)(param_1 + 0x18);
              if (plVar1 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x009f186c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                (**(code **)(*plVar1 + 0x3a8))(plVar1,*(undefined8 *)(*plVar1 + 0x3b0));
                return;
              }
            }
            goto LAB_009f1880;
          }
        }
      }
      return;
    }
  }
  return;
}



/* UIImageButton$$OnPress @ 0x9f1938
 * void UIImageButton__OnPress (UIImageButton_o* __this, bool pressed, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIImageButton$$OnPress
   void UIImageButton__OnPress (UIImageButton_o* __this, bool pressed, const MethodInfo* method); */

void native_UIImageButton__OnPress_9f1938(long param_1,ulong param_2)

{
  ulong uVar1;
  long *plVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  long lVar5;
  int *piVar6;
  
  if ((param_2 & 1) == 0) {
    if ((bRam0000000001341974 & 1) == 0) {
      native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
      native_sub_43273c(&UICamera_TypeInfo_12d6410);
      bRam0000000001341974 = 1;
    }
    uVar4 = *(undefined8 *)(param_1 + 0x18);
    if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    uVar1 = native_UnityEngine_Object__op_Inequality_8d76fc(uVar4,0,0);
    if ((uVar1 & 1) == 0) {
      return;
    }
    uVar1 = native_UIImageButton__get_isEnabled_9f12d4(param_1);
    if ((uVar1 & 1) == 0) {
      uVar4 = *(undefined8 *)(param_1 + 0x38);
    }
    else {
      uVar4 = native_UnityEngine_Component__get_gameObject_8da66c(param_1,0);
      if (((*(byte *)(_UICamera_TypeInfo_12d6410 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
        native_sub_4327ec(_UICamera_TypeInfo_12d6410);
      }
      uVar1 = native_UICamera__IsHighlighted_c92014(uVar4,0);
      lVar5 = 0x28;
      if ((uVar1 & 1) == 0) {
        lVar5 = 0x20;
      }
      uVar4 = *(undefined8 *)(param_1 + lVar5);
    }
  }
  else {
    uVar4 = *(undefined8 *)(param_1 + 0x30);
  }
  if ((bRam0000000001341976 & 1) == 0) {
    native_sub_43273c(&INGUIAtlas_TypeInfo_12d4c68);
    bRam0000000001341976 = 1;
  }
  uVar1 = native_System_String__IsNullOrEmpty_b09430(uVar4,0);
  if ((uVar1 & 1) == 0) {
    if (*(long *)(param_1 + 0x18) == 0) {
LAB_009f1880:
                    /* WARNING: Subroutine does not return */
      native_sub_432810();
    }
    plVar2 = (long *)native_UISprite__get_atlas_c358c4(*(long *)(param_1 + 0x18),0);
    if (plVar2 != (long *)0x0) {
      lVar5 = *plVar2;
      if ((ulong)*(ushort *)(lVar5 + 0x12a) != 0) {
        uVar1 = 0;
        piVar6 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(long *)(piVar6 + -2) == _INGUIAtlas_TypeInfo_12d4c68) {
            puVar3 = (undefined8 *)(lVar5 + (long)(*piVar6 + 10) * 0x10 + 0x138);
            goto LAB_009f181c;
          }
          uVar1 = uVar1 + 1;
          piVar6 = piVar6 + 4;
        } while (uVar1 < *(ushort *)(lVar5 + 0x12a));
      }
      puVar3 = (undefined8 *)native_sub_3c9b34(plVar2,_INGUIAtlas_TypeInfo_12d4c68,10);
LAB_009f181c:
      lVar5 = (*(code *)*puVar3)(plVar2,uVar4,puVar3[1]);
      if (lVar5 != 0) {
        if (*(long *)(param_1 + 0x18) != 0) {
          native_UISprite__set_spriteName_c35c6c(*(long *)(param_1 + 0x18),uVar4,0);
          if (*(char *)(param_1 + 0x40) == '\0') {
            return;
          }
          plVar2 = *(long **)(param_1 + 0x18);
          if (plVar2 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x009f186c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (**(code **)(*plVar2 + 0x3a8))(plVar2,*(undefined8 *)(*plVar2 + 0x3b0));
            return;
          }
        }
        goto LAB_009f1880;
      }
    }
  }
  return;
}



/* UIImageButton$$SetSprite @ 0x9f175c
 * void UIImageButton__SetSprite (UIImageButton_o* __this, System_String_o* sprite, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIImageButton$$SetSprite
   void UIImageButton__SetSprite (UIImageButton_o* __this, System_String_o* sprite, const
   MethodInfo* method); */

void native_UIImageButton__SetSprite_9f175c(long param_1,undefined8 param_2)

{
  ulong uVar1;
  long *plVar2;
  undefined8 *puVar3;
  long lVar4;
  int *piVar5;
  
  if ((bRam0000000001341976 & 1) == 0) {
    native_sub_43273c(&INGUIAtlas_TypeInfo_12d4c68);
    bRam0000000001341976 = 1;
  }
  uVar1 = native_System_String__IsNullOrEmpty_b09430(param_2,0);
  if ((uVar1 & 1) == 0) {
    if (*(long *)(param_1 + 0x18) == 0) {
LAB_009f1880:
                    /* WARNING: Subroutine does not return */
      native_sub_432810();
    }
    plVar2 = (long *)native_UISprite__get_atlas_c358c4(*(long *)(param_1 + 0x18),0);
    if (plVar2 != (long *)0x0) {
      lVar4 = *plVar2;
      if ((ulong)*(ushort *)(lVar4 + 0x12a) != 0) {
        uVar1 = 0;
        piVar5 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
        do {
          if (*(long *)(piVar5 + -2) == _INGUIAtlas_TypeInfo_12d4c68) {
            puVar3 = (undefined8 *)(lVar4 + (long)(*piVar5 + 10) * 0x10 + 0x138);
            goto LAB_009f181c;
          }
          uVar1 = uVar1 + 1;
          piVar5 = piVar5 + 4;
        } while (uVar1 < *(ushort *)(lVar4 + 0x12a));
      }
      puVar3 = (undefined8 *)native_sub_3c9b34(plVar2,_INGUIAtlas_TypeInfo_12d4c68,10);
LAB_009f181c:
      lVar4 = (*(code *)*puVar3)(plVar2,param_2,puVar3[1]);
      if (lVar4 != 0) {
        if (*(long *)(param_1 + 0x18) != 0) {
          native_UISprite__set_spriteName_c35c6c(*(long *)(param_1 + 0x18),param_2,0);
          if (*(char *)(param_1 + 0x40) == '\0') {
            return;
          }
          plVar2 = *(long **)(param_1 + 0x18);
          if (plVar2 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x009f186c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (**(code **)(*plVar2 + 0x3a8))(plVar2,*(undefined8 *)(*plVar2 + 0x3b0));
            return;
          }
        }
        goto LAB_009f1880;
      }
    }
  }
  return;
}



/* UIImageButton$$.ctor @ 0x9f1948
 * void UIImageButton___ctor (UIImageButton_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIImageButton$$.ctor
   void UIImageButton___ctor (UIImageButton_o* __this, const MethodInfo* method); */

undefined1  [16] native_UIImageButton___ctor_9f1948(ulong param_1)

{
  undefined1 auVar1 [16];
  
  *(undefined1 *)(param_1 + 0x40) = 1;
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


