/* ARM64 IL2CPP native pseudocode from Ghidra.
 * Recovered implementation, not original C# source.
 * Function boundaries follow the IL2CPP method address table. */


/* UIRect$$get_cachedGameObject @ 0xc2d1c0
 * UnityEngine_GameObject_o* UIRect__get_cachedGameObject (UIRect_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIRect$$get_cachedGameObject
   UnityEngine_GameObject_o* UIRect__get_cachedGameObject (UIRect_o* __this, const MethodInfo*
   method); */

undefined8 native_UIRect__get_cachedGameObject_c2d1c0(long param_1)

{
  ulong uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  
  if ((bRam0000000001342703 & 1) == 0) {
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    bRam0000000001342703 = 1;
  }
  puVar2 = (undefined8 *)(param_1 + 0x40);
  uVar3 = *puVar2;
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar1 = native_UnityEngine_Object__op_Equality_8e9a3c(uVar3,0,0);
  if ((uVar1 & 1) != 0) {
    uVar3 = native_UnityEngine_Component__get_gameObject_8da66c(param_1,0);
    *(undefined8 *)(param_1 + 0x40) = uVar3;
    native_sub_4326e0(puVar2,uVar3);
  }
  return *puVar2;
}



/* UIRect$$get_cachedTransform @ 0xc27c58
 * UnityEngine_Transform_o* UIRect__get_cachedTransform (UIRect_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIRect$$get_cachedTransform
   UnityEngine_Transform_o* UIRect__get_cachedTransform (UIRect_o* __this, const MethodInfo*
   method); */

undefined8 native_UIRect__get_cachedTransform_c27c58(long param_1)

{
  ulong uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  
  if ((bRam0000000001342704 & 1) == 0) {
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    bRam0000000001342704 = 1;
  }
  puVar2 = (undefined8 *)(param_1 + 0x48);
  uVar3 = *puVar2;
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar1 = native_UnityEngine_Object__op_Equality_8e9a3c(uVar3,0,0);
  if ((uVar1 & 1) != 0) {
    uVar3 = native_UnityEngine_Component__get_transform_8da62c(param_1,0);
    *(undefined8 *)(param_1 + 0x48) = uVar3;
    native_sub_4326e0(puVar2,uVar3);
  }
  return *puVar2;
}



/* UIRect$$get_anchorCamera @ 0xc26f1c
 * UnityEngine_Camera_o* UIRect__get_anchorCamera (UIRect_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIRect$$get_anchorCamera
   UnityEngine_Camera_o* UIRect__get_anchorCamera (UIRect_o* __this, const MethodInfo* method); */

undefined8 native_UIRect__get_anchorCamera_c26f1c(long param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  
  if ((bRam0000000001342705 & 1) == 0) {
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    bRam0000000001342705 = 1;
  }
  uVar2 = *(undefined8 *)(param_1 + 0x80);
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar1 = native_UnityEngine_Object__op_Implicit_8e1b98(uVar2,0);
  if (((uVar1 & 1) == 0) || (*(char *)(param_1 + 0x60) == '\0')) {
    native_UIRect__ResetAnchors_c2d260(param_1);
  }
  return *(undefined8 *)(param_1 + 0x80);
}



/* UIRect$$get_isFullyAnchored @ 0xc2d4f0
 * bool UIRect__get_isFullyAnchored (UIRect_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIRect$$get_isFullyAnchored
   bool UIRect__get_isFullyAnchored (UIRect_o* __this, const MethodInfo* method); */

uint native_UIRect__get_isFullyAnchored_c2d4f0(long param_1)

{
  uint uVar1;
  ulong uVar2;
  undefined8 uVar3;
  
  if ((bRam0000000001342706 & 1) == 0) {
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    bRam0000000001342706 = 1;
  }
  if (*(long *)(param_1 + 0x18) != 0) {
    uVar3 = *(undefined8 *)(*(long *)(param_1 + 0x18) + 0x10);
    if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    uVar2 = native_UnityEngine_Object__op_Implicit_8e1b98(uVar3,0);
    if ((uVar2 & 1) == 0) {
      return 0;
    }
    if (*(long *)(param_1 + 0x20) != 0) {
      uVar3 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x10);
      if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
        native_sub_4327ec();
      }
      uVar2 = native_UnityEngine_Object__op_Implicit_8e1b98(uVar3,0);
      if ((uVar2 & 1) == 0) {
        return 0;
      }
      if (*(long *)(param_1 + 0x30) != 0) {
        uVar3 = *(undefined8 *)(*(long *)(param_1 + 0x30) + 0x10);
        if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
           (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
          native_sub_4327ec();
        }
        uVar2 = native_UnityEngine_Object__op_Implicit_8e1b98(uVar3,0);
        if ((uVar2 & 1) == 0) {
          return 0;
        }
        if (*(long *)(param_1 + 0x28) != 0) {
          uVar3 = *(undefined8 *)(*(long *)(param_1 + 0x28) + 0x10);
          if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
             (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
            native_sub_4327ec();
          }
          if ((bRam0000000001341032 & 1) == 0) {
            native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0,0);
            bRam0000000001341032 = 1;
          }
          if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
             (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
            native_sub_4327ec();
          }
          uVar1 = native_UnityEngine_Object__CompareBaseObjects_8e9aac(uVar3,0);
          return ~uVar1 & 1;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* UIRect$$get_isAnchoredHorizontally @ 0xc2d61c
 * bool UIRect__get_isAnchoredHorizontally (UIRect_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIRect$$get_isAnchoredHorizontally
   bool UIRect__get_isAnchoredHorizontally (UIRect_o* __this, const MethodInfo* method); */

uint native_UIRect__get_isAnchoredHorizontally_c2d61c(long param_1)

{
  uint uVar1;
  ulong uVar2;
  undefined8 uVar3;
  
  if ((bRam0000000001342707 & 1) == 0) {
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    bRam0000000001342707 = 1;
  }
  if (*(long *)(param_1 + 0x18) != 0) {
    uVar3 = *(undefined8 *)(*(long *)(param_1 + 0x18) + 0x10);
    if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    uVar2 = native_UnityEngine_Object__op_Implicit_8e1b98(uVar3,0);
    if ((uVar2 & 1) != 0) {
      return 1;
    }
    if (*(long *)(param_1 + 0x20) != 0) {
      uVar3 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x10);
      if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
        native_sub_4327ec();
      }
      if ((bRam0000000001341032 & 1) == 0) {
        native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0,0);
        bRam0000000001341032 = 1;
      }
      if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
        native_sub_4327ec();
      }
      uVar1 = native_UnityEngine_Object__CompareBaseObjects_8e9aac(uVar3,0);
      return ~uVar1 & 1;
    }
  }
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* UIRect$$get_isAnchoredVertically @ 0xc2d6e0
 * bool UIRect__get_isAnchoredVertically (UIRect_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIRect$$get_isAnchoredVertically
   bool UIRect__get_isAnchoredVertically (UIRect_o* __this, const MethodInfo* method); */

uint native_UIRect__get_isAnchoredVertically_c2d6e0(long param_1)

{
  uint uVar1;
  ulong uVar2;
  undefined8 uVar3;
  
  if ((bRam0000000001342708 & 1) == 0) {
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    bRam0000000001342708 = 1;
  }
  if (*(long *)(param_1 + 0x28) != 0) {
    uVar3 = *(undefined8 *)(*(long *)(param_1 + 0x28) + 0x10);
    if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    uVar2 = native_UnityEngine_Object__op_Implicit_8e1b98(uVar3,0);
    if ((uVar2 & 1) != 0) {
      return 1;
    }
    if (*(long *)(param_1 + 0x30) != 0) {
      uVar3 = *(undefined8 *)(*(long *)(param_1 + 0x30) + 0x10);
      if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
        native_sub_4327ec();
      }
      if ((bRam0000000001341032 & 1) == 0) {
        native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0,0);
        bRam0000000001341032 = 1;
      }
      if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
        native_sub_4327ec();
      }
      uVar1 = native_UnityEngine_Object__CompareBaseObjects_8e9aac(uVar3,0);
      return ~uVar1 & 1;
    }
  }
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* UIRect$$get_canBeAnchored @ 0xc2d7a4
 * bool UIRect__get_canBeAnchored (UIRect_o* __this, const MethodInfo* method); */

/* UIRect$$get_canBeAnchored
   bool UIRect__get_canBeAnchored (UIRect_o* __this, const MethodInfo* method); */

undefined8 native_UIRect__get_canBeAnchored_c2d7a4(void)

{
  return 1;
}



/* UIRect$$get_parent @ 0xc2afcc
 * UIRect_o* UIRect__get_parent (UIRect_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIRect$$get_parent
   UIRect_o* UIRect__get_parent (UIRect_o* __this, const MethodInfo* method); */

undefined8 native_UIRect__get_parent_c2afcc(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  if ((bRam0000000001342709 & 1) == 0) {
    native_sub_43273c(&Method_NGUITools_FindInParents_UIRect____12e5778);
    native_sub_43273c(&NGUITools_TypeInfo_12d53c8);
    bRam0000000001342709 = 1;
  }
  if (*(char *)(param_1 + 0x59) == '\0') {
    *(undefined1 *)(param_1 + 0x59) = 1;
    lVar1 = native_UIRect__get_cachedTransform_c27c58(param_1);
    if (lVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      native_sub_432810();
    }
    uVar2 = native_UnityEngine_Transform__get_parent_765eb0(lVar1,0);
    if (((*(byte *)(_NGUITools_TypeInfo_12d53c8 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_NGUITools_TypeInfo_12d53c8 + 0xe0) == 0)) {
      native_sub_4327ec(_NGUITools_TypeInfo_12d53c8);
    }
    uVar2 = native_NGUITools__FindInParents_object__4a5cac
                      (uVar2,_Method_NGUITools_FindInParents_UIRect____12e5778);
    *(undefined8 *)(param_1 + 0x70) = uVar2;
    native_sub_4326e0((undefined8 *)(param_1 + 0x70),uVar2);
  }
  return *(undefined8 *)(param_1 + 0x70);
}



/* UIRect$$get_root @ 0xc2d7ac
 * UIRoot_o* UIRect__get_root (UIRect_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIRect$$get_root
   UIRoot_o* UIRect__get_root (UIRect_o* __this, const MethodInfo* method); */

undefined8 native_UIRect__get_root_c2d7ac(long param_1)

{
  undefined8 uVar1;
  ulong uVar2;
  
  while( true ) {
    if ((bRam000000000134270a & 1) == 0) {
      native_sub_43273c(&Method_NGUITools_FindInParents_UIRoot____12e5788);
      native_sub_43273c(&NGUITools_TypeInfo_12d53c8);
      native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
      bRam000000000134270a = 1;
    }
    uVar1 = native_UIRect__get_parent_c2afcc(param_1);
    if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
      native_sub_4327ec(_UnityEngine_Object_TypeInfo_12d54e0);
    }
    uVar2 = native_UnityEngine_Object__op_Inequality_8d76fc(uVar1,0,0);
    if ((uVar2 & 1) == 0) break;
    param_1 = *(long *)(param_1 + 0x70);
    if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
      native_sub_432810();
    }
  }
  if (*(char *)(param_1 + 0x78) == '\0') {
    *(undefined1 *)(param_1 + 0x78) = 1;
    uVar1 = native_UIRect__get_cachedTransform_c27c58(param_1);
    if (((*(byte *)(_NGUITools_TypeInfo_12d53c8 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_NGUITools_TypeInfo_12d53c8 + 0xe0) == 0)) {
      native_sub_4327ec(_NGUITools_TypeInfo_12d53c8);
    }
    uVar1 = native_NGUITools__FindInParents_object__4a5cac
                      (uVar1,_Method_NGUITools_FindInParents_UIRoot____12e5788);
    *(undefined8 *)(param_1 + 0x68) = uVar1;
    native_sub_4326e0((undefined8 *)(param_1 + 0x68),uVar1);
  }
  return *(undefined8 *)(param_1 + 0x68);
}



/* UIRect$$get_isAnchored @ 0xc2d8cc
 * bool UIRect__get_isAnchored (UIRect_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIRect$$get_isAnchored
   bool UIRect__get_isAnchored (UIRect_o* __this, const MethodInfo* method); */

undefined8 native_UIRect__get_isAnchored_c2d8cc(long *param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  
  if ((bRam000000000134270b & 1) == 0) {
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    bRam000000000134270b = 1;
  }
  if (param_1[3] != 0) {
    uVar2 = *(undefined8 *)(param_1[3] + 0x10);
    if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    uVar1 = native_UnityEngine_Object__op_Implicit_8e1b98(uVar2,0);
    if ((uVar1 & 1) == 0) {
      if (param_1[4] == 0) goto LAB_00c2da08;
      uVar2 = *(undefined8 *)(param_1[4] + 0x10);
      if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
        native_sub_4327ec();
      }
      uVar1 = native_UnityEngine_Object__op_Implicit_8e1b98(uVar2,0);
      if ((uVar1 & 1) == 0) {
        if (param_1[6] == 0) goto LAB_00c2da08;
        uVar2 = *(undefined8 *)(param_1[6] + 0x10);
        if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
           (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
          native_sub_4327ec();
        }
        uVar1 = native_UnityEngine_Object__op_Implicit_8e1b98(uVar2,0);
        if ((uVar1 & 1) == 0) {
          if (param_1[5] == 0) goto LAB_00c2da08;
          uVar2 = *(undefined8 *)(param_1[5] + 0x10);
          if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
             (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
            native_sub_4327ec();
          }
          uVar1 = native_UnityEngine_Object__op_Implicit_8e1b98(uVar2,0);
          if ((uVar1 & 1) == 0) {
            return 0;
          }
        }
      }
    }
                    /* WARNING: Could not recover jumptable at 0x00c2d9f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (**(code **)(*param_1 + 0x198))(param_1,*(undefined8 *)(*param_1 + 0x1a0));
    return uVar2;
  }
LAB_00c2da08:
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* UIRect$$get_cameraRayDistance @ 0xc2da0c
 * float UIRect__get_cameraRayDistance (UIRect_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIRect$$get_cameraRayDistance
   float UIRect__get_cameraRayDistance (UIRect_o* __this, const MethodInfo* method); */

undefined1  [16]
native_UIRect__get_cameraRayDistance_c2da0c
          (undefined1 param_1 [16],undefined8 param_2,undefined8 param_3,undefined8 param_4,
          long param_5)

{
  undefined8 uVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined1 auVar11 [16];
  undefined8 uVar12;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  uint uStack_8c;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  if ((bRam000000000134270c & 1) == 0) {
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    bRam000000000134270c = 1;
  }
  uStack_70 = 0;
  uStack_68 = 0;
  uStack_88 = 0;
  uStack_80 = 0;
  uStack_78 = 0;
  uStack_8c = 0;
  uVar1 = native_UIRect__get_anchorCamera_c26f1c(param_5);
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec(_UnityEngine_Object_TypeInfo_12d54e0);
  }
  uVar2 = native_UnityEngine_Object__op_Equality_8e9a3c(uVar1,0,0);
  if ((uVar2 & 1) != 0) {
    return ZEXT816(0);
  }
  if (*(long *)(param_5 + 0x80) == 0) goto LAB_00c2dc80;
  uVar2 = native_UnityEngine_Camera__get_orthographic_8d86c0(0,*(long *)(param_5 + 0x80),0);
  if ((uVar2 & 1) == 0) {
    lVar3 = native_UIRect__get_cachedTransform_c27c58(param_5);
    if ((*(long *)(param_5 + 0x80) == 0) ||
       (lVar4 = native_UnityEngine_Component__get_transform_8da62c(*(long *)(param_5 + 0x80),0),
       lVar3 == 0)) goto LAB_00c2dc80;
    uVar5 = native_UnityEngine_Transform__get_rotation_771a30(lVar3,0);
    uVar1 = param_2;
    uVar10 = param_3;
    uVar6 = native_UnityEngine_Vector3__get_back_776a70(0);
    uVar5 = native_UnityEngine_Quaternion__op_Multiply_7629c0
                      (uVar5,param_2,param_3,param_4,uVar6,uVar1,uVar10,0);
    uVar1 = param_2;
    uVar10 = param_3;
    uVar6 = native_UnityEngine_Transform__get_position_77169c(lVar3,0);
    native_UnityEngine_Plane___ctor_8eb884(uVar5,param_2,param_3,uVar6,uVar1,uVar10,&uStack_70,0);
    if (lVar4 == 0) goto LAB_00c2dc80;
    uVar7 = native_UnityEngine_Transform__get_position_77169c(lVar4,0);
    uVar1 = param_2;
    uVar5 = param_3;
    uVar8 = native_UnityEngine_Transform__get_rotation_771a30(lVar4,0);
    uVar10 = uVar1;
    uVar12 = uVar5;
    uVar9 = native_UnityEngine_Vector3__get_forward_771ae0(0);
    uVar10 = native_UnityEngine_Quaternion__op_Multiply_7629c0
                       (uVar8,uVar1,uVar5,uVar6,uVar9,uVar10,uVar12,0);
    native_UnityEngine_Ray___ctor_763194(uVar7,param_2,param_3,uVar10,uVar1,uVar5,&uStack_88,0);
    uStack_a0 = uStack_78;
    uStack_a8 = uStack_80;
    uStack_b0 = uStack_88;
    uVar2 = native_UnityEngine_Plane__Raycast_8eb9a4(&uStack_70,&uStack_b0,&uStack_8c,0);
    if ((uVar2 & 1) != 0) {
      return ZEXT416(uStack_8c);
    }
  }
  if (*(long *)(param_5 + 0x80) != 0) {
    uVar1 = native_UnityEngine_Camera__get_nearClipPlane_8d8480(*(long *)(param_5 + 0x80),0);
    if (*(long *)(param_5 + 0x80) != 0) {
      uVar10 = native_UnityEngine_Camera__get_farClipPlane_8d8510(*(long *)(param_5 + 0x80),0);
      auVar11 = native_UnityEngine_Mathf__Lerp_8e5224(uVar1,uVar10,0x3f000000,0);
      return auVar11;
    }
  }
LAB_00c2dc80:
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* UIRect$$Invalidate @ 0xc2dc84
 * void UIRect__Invalidate (UIRect_o* __this, bool includeChildren, const MethodInfo* method); */

/* UIRect$$Invalidate
   void UIRect__Invalidate (UIRect_o* __this, bool includeChildren, const MethodInfo* method); */

void native_UIRect__Invalidate_c2dc84(long param_1,ulong param_2)

{
  long *plVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  
  *(undefined1 *)(param_1 + 0x58) = 1;
  if ((param_2 & 1) == 0) {
    return;
  }
  lVar3 = *(long *)(param_1 + 0x50);
  if (lVar3 != 0) {
    lVar4 = 0;
    do {
      if (*(int *)(lVar3 + 0x18) <= (int)(uint)lVar4) {
        return;
      }
      lVar3 = *(long *)(lVar3 + 0x10);
      if (lVar3 == 0) break;
      if (*(uint *)(lVar3 + 0x18) <= (uint)lVar4) {
        uVar2 = native_sub_43283c();
                    /* WARNING: Subroutine does not return */
        native_sub_4327dc(uVar2,0);
      }
      plVar1 = *(long **)(lVar3 + lVar4 * 8 + 0x20);
      if (plVar1 == (long *)0x0) break;
      (**(code **)(*plVar1 + 0x1f8))(plVar1,1,*(undefined8 *)(*plVar1 + 0x200));
      lVar3 = *(long *)(param_1 + 0x50);
      lVar4 = lVar4 + 1;
    } while (lVar3 != 0);
  }
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* UIRect$$GetSides @ 0xc2dd10
 * UnityEngine_Vector3_array* UIRect__GetSides (UIRect_o* __this, UnityEngine_Transform_o* relativeTo, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIRect$$GetSides
   UnityEngine_Vector3_array* UIRect__GetSides (UIRect_o* __this, UnityEngine_Transform_o*
   relativeTo, const MethodInfo* method); */

undefined8
native_UIRect__GetSides_c2dd10
          (undefined1 param_1 [16],float param_2,undefined8 param_3,undefined4 param_4,long param_5,
          long param_6)

{
  long lVar1;
  int iVar2;
  int iVar3;
  ulong uVar4;
  undefined8 uVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  float fVar9;
  undefined4 uVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined8 uVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  
  if ((bRam000000000134270d & 1) == 0) {
    native_sub_43273c(&NGUITools_TypeInfo_12d53c8);
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    native_sub_43273c(&UIRect_TypeInfo_12d64a0);
    bRam000000000134270d = 1;
  }
  uVar5 = native_UIRect__get_anchorCamera_c26f1c(param_5);
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec(_UnityEngine_Object_TypeInfo_12d54e0);
  }
  uVar6 = native_UnityEngine_Object__op_Inequality_8d76fc(uVar5,0,0);
  if ((uVar6 & 1) == 0) {
    lVar8 = native_UIRect__get_cachedTransform_c27c58(param_5);
    uVar10 = (undefined4)param_3;
    if (lVar8 == 0) {
LAB_00c2df88:
                    /* WARNING: Subroutine does not return */
      native_sub_432810();
    }
    uVar15 = native_UnityEngine_Transform__get_position_77169c(lVar8,0);
    lVar8 = 0;
    uVar6 = 0xffffffffffffffff;
    do {
      if (((*(byte *)(_UIRect_TypeInfo_12d64a0 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_UIRect_TypeInfo_12d64a0 + 0xe0) == 0)) {
        native_sub_4327ec();
      }
      lVar7 = **(long **)(_UIRect_TypeInfo_12d64a0 + 0xb8);
      if (lVar7 == 0) goto LAB_00c2df88;
      if ((ulong)*(uint *)(lVar7 + 0x18) <= uVar6 + 1) goto LAB_00c2df8c;
      uVar6 = uVar6 + 1;
      lVar7 = lVar7 + lVar8;
      lVar8 = lVar8 + 0xc;
      *(undefined4 *)(lVar7 + 0x20) = uVar15;
      *(float *)(lVar7 + 0x24) = param_2;
      *(undefined4 *)(lVar7 + 0x28) = uVar10;
    } while (uVar6 < 3);
    if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    uVar6 = native_UnityEngine_Object__op_Inequality_8d76fc(param_6,0,0);
    if ((uVar6 & 1) != 0) {
      lVar8 = 0;
      uVar6 = 0xffffffffffffffff;
      do {
        if (((*(byte *)(_UIRect_TypeInfo_12d64a0 + 0x133) >> 2 & 1) != 0) &&
           (*(int *)(_UIRect_TypeInfo_12d64a0 + 0xe0) == 0)) {
          native_sub_4327ec();
        }
        lVar7 = **(long **)(_UIRect_TypeInfo_12d64a0 + 0xb8);
        if (lVar7 == 0) goto LAB_00c2df88;
        if ((ulong)*(uint *)(lVar7 + 0x18) <= uVar6 + 1) {
LAB_00c2df8c:
          uVar5 = native_sub_43283c();
                    /* WARNING: Subroutine does not return */
          native_sub_4327dc(uVar5,0);
        }
        if (param_6 == 0) goto LAB_00c2df88;
        lVar1 = lVar7 + lVar8;
        uVar15 = *(undefined4 *)(lVar1 + 0x24);
        uVar16 = *(undefined4 *)(lVar1 + 0x28);
        uVar10 = native_UnityEngine_Transform__InverseTransformPoint_7729a0
                           (*(undefined4 *)(lVar1 + 0x20),param_6,0);
        if ((ulong)*(uint *)(lVar7 + 0x18) <= uVar6 + 1) goto LAB_00c2df8c;
        uVar6 = uVar6 + 1;
        lVar8 = lVar8 + 0xc;
        *(undefined4 *)(lVar1 + 0x20) = uVar10;
        *(undefined4 *)(lVar1 + 0x24) = uVar15;
        *(undefined4 *)(lVar1 + 0x28) = uVar16;
      } while (uVar6 < 3);
    }
    if (((*(byte *)(_UIRect_TypeInfo_12d64a0 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UIRect_TypeInfo_12d64a0 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    return **(undefined8 **)(_UIRect_TypeInfo_12d64a0 + 0xb8);
  }
  lVar8 = *(long *)(param_5 + 0x80);
  fVar14 = (float)native_UIRect__get_cameraRayDistance_c2da0c(param_5);
  if (((*(byte *)(_NGUITools_TypeInfo_12d53c8 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_NGUITools_TypeInfo_12d53c8 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  if ((bRam000000000133f5c9 & 1) == 0) {
    native_sub_43273c(&NGUITools_TypeInfo_12d53c8,param_6,0);
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    bRam000000000133f5c9 = 1;
  }
  uStack_a0 = 0;
  uStack_98 = 0;
  if (lVar8 != 0) {
    uVar6 = native_UnityEngine_Camera__get_orthographic_8d86c0(lVar8,0);
    if ((uVar6 & 1) == 0) {
      if (((*(byte *)(_NGUITools_TypeInfo_12d53c8 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_NGUITools_TypeInfo_12d53c8 + 0xe0) == 0)) {
        native_sub_4327ec();
      }
      uVar15 = 0x3f000000;
      lVar7 = *(long *)(*(long *)(_NGUITools_TypeInfo_12d53c8 + 0xb8) + 0x38);
      fVar19 = fVar14;
      uVar10 = native_UnityEngine_Camera__ViewportToWorldPoint_8d9168(0,lVar8,0);
      if (lVar7 != 0) {
        if (*(int *)(lVar7 + 0x18) != 0) {
          *(undefined4 *)(lVar7 + 0x20) = uVar10;
          *(undefined4 *)(lVar7 + 0x24) = uVar15;
          *(float *)(lVar7 + 0x28) = fVar19;
          uVar15 = 0x3f800000;
          lVar7 = *(long *)(*(long *)(_NGUITools_TypeInfo_12d53c8 + 0xb8) + 0x38);
          fVar19 = fVar14;
          uVar10 = native_UnityEngine_Camera__ViewportToWorldPoint_8d9168(0x3f000000,lVar8,0);
          if (lVar7 == 0) goto LAB_00733764;
          if (1 < *(uint *)(lVar7 + 0x18)) {
            *(undefined4 *)(lVar7 + 0x2c) = uVar10;
            *(undefined4 *)(lVar7 + 0x30) = uVar15;
            *(float *)(lVar7 + 0x34) = fVar19;
            uVar15 = 0x3f000000;
            lVar7 = *(long *)(*(long *)(_NGUITools_TypeInfo_12d53c8 + 0xb8) + 0x38);
            fVar19 = fVar14;
            uVar10 = native_UnityEngine_Camera__ViewportToWorldPoint_8d9168(0x3f800000,lVar8,0);
            if (lVar7 == 0) goto LAB_00733764;
            if (2 < *(uint *)(lVar7 + 0x18)) {
              *(undefined4 *)(lVar7 + 0x38) = uVar10;
              *(undefined4 *)(lVar7 + 0x3c) = uVar15;
              *(float *)(lVar7 + 0x40) = fVar19;
              fVar19 = 0.0;
              lVar7 = *(long *)(*(long *)(_NGUITools_TypeInfo_12d53c8 + 0xb8) + 0x38);
              fVar13 = (float)native_UnityEngine_Camera__ViewportToWorldPoint_8d9168
                                        (0x3f000000,lVar8,0);
              if (lVar7 == 0) goto LAB_00733764;
              if (3 < *(uint *)(lVar7 + 0x18)) {
LAB_00733648:
                *(float *)(lVar7 + 0x44) = fVar13;
                *(float *)(lVar7 + 0x48) = fVar19;
                *(float *)(lVar7 + 0x4c) = fVar14;
                if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
                   (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
                  native_sub_4327ec();
                }
                uVar6 = native_UnityEngine_Object__op_Inequality_8d76fc(param_6,0,0);
                if ((uVar6 & 1) != 0) {
                  lVar8 = 0;
                  uVar6 = 0xffffffffffffffff;
                  do {
                    if (((*(byte *)(_NGUITools_TypeInfo_12d53c8 + 0x133) >> 2 & 1) != 0) &&
                       (*(int *)(_NGUITools_TypeInfo_12d53c8 + 0xe0) == 0)) {
                      native_sub_4327ec();
                    }
                    lVar7 = *(long *)(*(long *)(_NGUITools_TypeInfo_12d53c8 + 0xb8) + 0x38);
                    if (lVar7 == 0) goto LAB_00733764;
                    if ((ulong)*(uint *)(lVar7 + 0x18) <= uVar6 + 1) goto LAB_00733768;
                    if (param_6 == 0) goto LAB_00733764;
                    lVar1 = lVar7 + lVar8;
                    uVar15 = *(undefined4 *)(lVar1 + 0x24);
                    uVar16 = *(undefined4 *)(lVar1 + 0x28);
                    uVar10 = native_UnityEngine_Transform__InverseTransformPoint_7729a0
                                       (*(undefined4 *)(lVar1 + 0x20),param_6,0);
                    if ((ulong)*(uint *)(lVar7 + 0x18) <= uVar6 + 1) goto LAB_00733768;
                    uVar6 = uVar6 + 1;
                    lVar8 = lVar8 + 0xc;
                    *(undefined4 *)(lVar1 + 0x20) = uVar10;
                    *(undefined4 *)(lVar1 + 0x24) = uVar15;
                    *(undefined4 *)(lVar1 + 0x28) = uVar16;
                  } while (uVar6 < 3);
                }
                if (((*(byte *)(_NGUITools_TypeInfo_12d53c8 + 0x133) >> 2 & 1) != 0) &&
                   (*(int *)(_NGUITools_TypeInfo_12d53c8 + 0xe0) == 0)) {
                  native_sub_4327ec();
                }
                return *(undefined8 *)(*(long *)(_NGUITools_TypeInfo_12d53c8 + 0xb8) + 0x38);
              }
            }
          }
        }
LAB_00733768:
        uVar5 = native_sub_43283c();
                    /* WARNING: Subroutine does not return */
        native_sub_4327dc(uVar5,0);
      }
    }
    else {
      fVar9 = (float)native_UnityEngine_Camera__get_orthographicSize_8d8630(lVar8,0);
      uVar10 = native_UnityEngine_Camera__get_rect_8d8b48(lVar8,0);
      uStack_a0 = CONCAT44(param_2,uVar10);
      uStack_98 = CONCAT44(param_4,(int)param_3);
      if (((*(byte *)(_NGUITools_TypeInfo_12d53c8 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_NGUITools_TypeInfo_12d53c8 + 0xe0) == 0)) {
        native_sub_4327ec();
      }
      iVar2 = native_UnityEngine_Screen__get_width_76a5e4(0);
      iVar3 = native_UnityEngine_Screen__get_height_76a618(0);
      fVar11 = (float)native_UnityEngine_Rect__get_width_76367c(&uStack_a0,0);
      fVar12 = (float)native_UnityEngine_Rect__get_height_76368c(&uStack_a0,0);
      lVar8 = native_UnityEngine_Component__get_transform_8da62c(lVar8,0);
      if (lVar8 != 0) {
        fVar20 = (float)iVar2;
        fVar18 = (float)iVar3;
        uVar10 = native_UnityEngine_Transform__get_rotation_771a30(lVar8,0);
        uVar5 = param_3;
        fVar19 = param_2;
        fVar13 = (float)native_UnityEngine_Transform__get_position_77169c(lVar8,0);
        uVar6 = native_UnityEngine_Mathf__RoundToInt_8e50f0(fVar20,0);
        uVar4 = native_UnityEngine_Mathf__RoundToInt_8e50f0(fVar18,0);
        if ((uVar6 & 1) != 0) {
          fVar13 = fVar13 + -1.0 / fVar20;
        }
        fVar11 = (fVar20 / fVar18) * (fVar11 / fVar12);
        if ((uVar4 & 1) != 0) {
          fVar19 = 1.0 / fVar18 + fVar19;
        }
        if (((*(byte *)(_NGUITools_TypeInfo_12d53c8 + 0x133) >> 2 & 1) != 0) &&
           (*(int *)(_NGUITools_TypeInfo_12d53c8 + 0xe0) == 0)) {
          native_sub_4327ec();
        }
        lVar8 = *(long *)(*(long *)(_NGUITools_TypeInfo_12d53c8 + 0xb8) + 0x38);
        uVar17 = param_3;
        fVar12 = param_2;
        fVar18 = (float)native_UnityEngine_Quaternion__op_Multiply_7629c0
                                  (uVar10,param_2,param_3,param_4,fVar11 * -fVar9,0,fVar14,0);
        if (lVar8 != 0) {
          if (*(int *)(lVar8 + 0x18) != 0) {
            fVar20 = (float)uVar5;
            *(float *)(lVar8 + 0x20) = fVar13 + fVar18;
            *(float *)(lVar8 + 0x24) = fVar19 + fVar12;
            *(float *)(lVar8 + 0x28) = fVar20 + (float)uVar17;
            lVar8 = *(long *)(*(long *)(_NGUITools_TypeInfo_12d53c8 + 0xb8) + 0x38);
            uVar5 = param_3;
            fVar12 = param_2;
            fVar18 = (float)native_UnityEngine_Quaternion__op_Multiply_7629c0
                                      (uVar10,param_2,param_3,param_4,0,fVar9,fVar14,0);
            if (lVar8 == 0) goto LAB_00733764;
            if (1 < *(uint *)(lVar8 + 0x18)) {
              *(float *)(lVar8 + 0x2c) = fVar13 + fVar18;
              *(float *)(lVar8 + 0x30) = fVar19 + fVar12;
              *(float *)(lVar8 + 0x34) = fVar20 + (float)uVar5;
              lVar8 = *(long *)(*(long *)(_NGUITools_TypeInfo_12d53c8 + 0xb8) + 0x38);
              uVar5 = param_3;
              fVar12 = param_2;
              fVar11 = (float)native_UnityEngine_Quaternion__op_Multiply_7629c0
                                        (uVar10,param_2,param_3,param_4,fVar9 * fVar11,0,fVar14,0);
              if (lVar8 == 0) goto LAB_00733764;
              if (2 < *(uint *)(lVar8 + 0x18)) {
                *(float *)(lVar8 + 0x38) = fVar13 + fVar11;
                *(float *)(lVar8 + 0x3c) = fVar19 + fVar12;
                *(float *)(lVar8 + 0x40) = fVar20 + (float)uVar5;
                lVar7 = *(long *)(*(long *)(_NGUITools_TypeInfo_12d53c8 + 0xb8) + 0x38);
                fVar9 = (float)native_UnityEngine_Quaternion__op_Multiply_7629c0
                                         (uVar10,param_2,param_3,param_4,0,-fVar9,fVar14,0);
                if (lVar7 == 0) goto LAB_00733764;
                if (3 < *(uint *)(lVar7 + 0x18)) {
                  fVar14 = fVar20 + (float)param_3;
                  fVar19 = fVar19 + param_2;
                  fVar13 = fVar13 + fVar9;
                  goto LAB_00733648;
                }
              }
            }
          }
          goto LAB_00733768;
        }
      }
    }
  }
LAB_00733764:
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* UIRect$$GetLocalPos @ 0xc2df98
 * UnityEngine_Vector3_o UIRect__GetLocalPos (UIRect_o* __this, UIRect_AnchorPoint_o* ac, UnityEngine_Transform_o* trans, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIRect$$GetLocalPos
   UnityEngine_Vector3_o UIRect__GetLocalPos (UIRect_o* __this, UIRect_AnchorPoint_o* ac,
   UnityEngine_Transform_o* trans, const MethodInfo* method); */

undefined1  [16]
native_UIRect__GetLocalPos_c2df98
          (undefined1 param_1 [16],float param_2,undefined8 param_3,undefined4 param_4,long param_5,
          long param_6,long param_7)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined4 uVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  undefined1 auVar11 [16];
  undefined8 uStack_80;
  undefined8 uStack_78;
  
  if ((bRam000000000134270e & 1) == 0) {
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    bRam000000000134270e = 1;
  }
  uStack_80 = 0;
  uStack_78 = 0;
  if (param_6 == 0) goto LAB_00c2e1fc;
  uVar4 = *(undefined8 *)(param_6 + 0x28);
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar1 = native_UnityEngine_Object__op_Equality_8e9a3c(uVar4,0,0);
  if ((uVar1 & 1) != 0) {
    native_UIRect__FindCameraFor_c2e200(uVar1,param_6);
  }
  uVar4 = native_UIRect__get_anchorCamera_c26f1c(param_5);
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec(_UnityEngine_Object_TypeInfo_12d54e0);
  }
  uVar1 = native_UnityEngine_Object__op_Equality_8e9a3c(uVar4,0,0);
  if ((uVar1 & 1) == 0) {
    uVar4 = *(undefined8 *)(param_6 + 0x28);
    if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    uVar1 = native_UnityEngine_Object__op_Equality_8e9a3c(uVar4,0,0);
    if ((uVar1 & 1) == 0) {
      if (*(long *)(param_6 + 0x28) != 0) {
        uVar5 = native_UnityEngine_Camera__get_rect_8d8b48(*(long *)(param_6 + 0x28),0);
        uStack_80 = CONCAT44(param_2,uVar5);
        uStack_78 = CONCAT44(param_4,(int)param_3);
        if (*(long *)(param_6 + 0x10) != 0) {
          lVar2 = *(long *)(param_6 + 0x28);
          native_UnityEngine_Transform__get_position_77169c(*(long *)(param_6 + 0x10),0);
          if (lVar2 != 0) {
            fVar6 = (float)native_UnityEngine_Camera__WorldToViewportPoint_8d9160(lVar2,0);
            fVar7 = (float)native_UnityEngine_Rect__get_width_76367c(&uStack_80,0);
            fVar8 = (float)native_UnityEngine_Rect__get_x_7635f4(&uStack_80,0);
            fVar9 = (float)native_UnityEngine_Rect__get_height_76368c(&uStack_80,0);
            fVar10 = (float)native_UnityEngine_Rect__get_y_763604(&uStack_80,0);
            if (*(long *)(param_5 + 0x80) != 0) {
              uVar1 = (ulong)(uint)(param_2 * fVar9 + fVar10);
              uVar4 = native_UnityEngine_Camera__ViewportToWorldPoint_8d9168
                                (fVar6 * fVar7 + fVar8,uVar1,param_3,*(long *)(param_5 + 0x80),0);
              if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
                 (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
                native_sub_4327ec();
              }
              uVar3 = native_UnityEngine_Object__op_Inequality_8d76fc(param_7,0,0);
              if ((uVar3 & 1) != 0) {
                if (param_7 == 0) goto LAB_00c2e1fc;
                uVar4 = native_UnityEngine_Transform__InverseTransformPoint_7729a0
                                  (uVar4,uVar1,param_3,param_7,0);
              }
              return ZEXT416((uint)(int)((float)uVar4 + 0.5));
            }
          }
        }
      }
      goto LAB_00c2e1fc;
    }
  }
  lVar2 = native_UIRect__get_cachedTransform_c27c58(param_5);
  if (lVar2 != 0) {
    auVar11 = native_UnityEngine_Transform__get_localPosition_7717f4(lVar2,0);
    return auVar11;
  }
LAB_00c2e1fc:
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* UIRect$$OnEnable @ 0xc2e32c
 * void UIRect__OnEnable (UIRect_o* __this, const MethodInfo* method); */

/* UIRect$$OnEnable
   void UIRect__OnEnable (UIRect_o* __this, const MethodInfo* method); */

void native_UIRect__OnEnable_c2e32c(long *param_1)

{
  *(undefined4 *)((long)param_1 + 0x5c) = 0xffffffff;
  if ((int)param_1[7] == 0) {
    *(undefined1 *)(param_1 + 0xc) = 0;
    *(undefined1 *)((long)param_1 + 0x5a) = 1;
  }
  if ((char)param_1[0x11] != '\0') {
    (**(code **)(*param_1 + 0x228))(param_1,*(undefined8 *)(*param_1 + 0x230));
  }
  *(undefined4 *)((long)param_1 + 0x5c) = 0xffffffff;
  return;
}



/* UIRect$$OnInit @ 0xc2e388
 * void UIRect__OnInit (UIRect_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIRect$$OnInit
   void UIRect__OnInit (UIRect_o* __this, const MethodInfo* method); */

void native_UIRect__OnInit_c2e388(long param_1)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  undefined8 uVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  uint uVar9;
  
  if ((bRam000000000134270f & 1) == 0) {
    native_sub_43273c(&Method_BetterList_UIRect__Add___12d8a08);
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    bRam000000000134270f = 1;
  }
  *(undefined2 *)(param_1 + 0x58) = 1;
  *(undefined1 *)(param_1 + 0x78) = 0;
  uVar5 = native_UIRect__get_parent_c2afcc(param_1);
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec(_UnityEngine_Object_TypeInfo_12d54e0);
  }
  uVar6 = native_UnityEngine_Object__op_Inequality_8d76fc(uVar5,0,0);
  if ((uVar6 & 1) == 0) {
    return;
  }
  if ((*(long *)(param_1 + 0x70) == 0) ||
     (lVar7 = *(long *)(*(long *)(param_1 + 0x70) + 0x50), lVar7 == 0)) {
                    /* WARNING: Subroutine does not return */
    native_sub_432810();
  }
  lVar8 = *(long *)(lVar7 + 0x10);
  if ((lVar8 == 0) || (uVar9 = *(uint *)(lVar7 + 0x18), uVar9 == *(uint *)(lVar8 + 0x18))) {
    (*(code *)**(undefined8 **)
                (*(long *)(*(long *)(_Method_BetterList_UIRect__Add___12d8a08 + 0x18) + 0xc0) + 0x18
                ))(lVar7);
    uVar9 = *(uint *)(lVar7 + 0x18);
    lVar8 = *(long *)(lVar7 + 0x10);
    *(uint *)(lVar7 + 0x18) = uVar9 + 1;
    if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
      native_sub_432810();
    }
  }
  else {
    *(uint *)(lVar7 + 0x18) = uVar9 + 1;
  }
  if (uVar9 < *(uint *)(lVar8 + 0x18)) {
    plVar4 = (long *)(lVar8 + (long)(int)uVar9 * 8 + 0x20);
    *plVar4 = param_1;
    if (iRam0000000001345318 != 0) {
      puVar1 = (ulong *)(((ulong)plVar4 >> 0x12 & 0x7fff) * 8 + 0x138ecd8);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = *puVar1 | 1L << ((ulong)plVar4 >> 0xc & 0x3f);
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    return;
  }
  uVar5 = native_sub_43283c();
                    /* WARNING: Subroutine does not return */
  native_sub_4327dc(uVar5,0);
}



/* UIRect$$OnDisable @ 0xc2e450
 * void UIRect__OnDisable (UIRect_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIRect$$OnDisable
   void UIRect__OnDisable (UIRect_o* __this, const MethodInfo* method); */

void native_UIRect__OnDisable_c2e450(long param_1)

{
  ulong uVar1;
  long *plVar2;
  long lVar3;
  
  if ((bRam0000000001342710 & 1) == 0) {
    native_sub_43273c(&Method_BetterList_UIRect__Remove___12d8a10);
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    bRam0000000001342710 = 1;
  }
  plVar2 = (long *)(param_1 + 0x70);
  lVar3 = *plVar2;
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar1 = native_UnityEngine_Object__op_Implicit_8e1b98(lVar3,0);
  if ((uVar1 & 1) != 0) {
    if ((*plVar2 == 0) || (lVar3 = *(long *)(*plVar2 + 0x50), lVar3 == 0)) {
                    /* WARNING: Subroutine does not return */
      native_sub_432810();
    }
    native_BetterList_object___Remove_ba2804
              (lVar3,param_1,_Method_BetterList_UIRect__Remove___12d8a10);
  }
  *(undefined8 *)(param_1 + 0x70) = 0;
  native_sub_4326e0(plVar2,0);
  *(undefined8 *)(param_1 + 0x68) = 0;
  native_sub_4326e0((undefined8 *)(param_1 + 0x68),0);
  *(undefined1 *)(param_1 + 0x78) = 0;
  *(undefined1 *)(param_1 + 0x59) = 0;
  return;
}



/* UIRect$$Awake @ 0xc2e528
 * void UIRect__Awake (UIRect_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIRect$$Awake
   void UIRect__Awake (UIRect_o* __this, const MethodInfo* method); */

void native_UIRect__Awake_c2e528(long param_1)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  undefined8 uVar4;
  
  if ((bRam0000000001342711 & 1) == 0) {
    native_sub_43273c(&NGUITools_TypeInfo_12d53c8);
    bRam0000000001342711 = 1;
  }
  uVar4 = native_UnityEngine_Component__get_gameObject_8da66c(param_1,0);
  if (((*(byte *)(_NGUITools_TypeInfo_12d53c8 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_NGUITools_TypeInfo_12d53c8 + 0xe0) == 0)) {
    native_sub_4327ec(_NGUITools_TypeInfo_12d53c8);
  }
  native_NGUITools__CheckForPrefabStage_72eb68(uVar4,0);
  *(undefined1 *)(param_1 + 0x88) = 0;
  uVar4 = native_UnityEngine_Component__get_gameObject_8da66c(param_1,0);
  *(undefined8 *)(param_1 + 0x40) = uVar4;
  native_sub_4326e0(param_1 + 0x40);
  uVar4 = native_UnityEngine_Component__get_transform_8da62c(param_1,0);
  *(undefined8 *)(param_1 + 0x48) = uVar4;
  if (iRam0000000001345318 != 0) {
    puVar1 = (ulong *)((param_1 + 0x48U >> 0x12 & 0x7fff) * 8 + 0x138ecd8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar3) {
        *puVar1 = *puVar1 | 1L << (param_1 + 0x48U >> 0xc & 0x3f);
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  return;
}



/* UIRect$$Start @ 0xc2e5dc
 * void UIRect__Start (UIRect_o* __this, const MethodInfo* method); */

/* UIRect$$Start
   void UIRect__Start (UIRect_o* __this, const MethodInfo* method); */

void native_UIRect__Start_c2e5dc(long *param_1)

{
  if ((char)param_1[0x11] != '\0') {
    return;
  }
  *(undefined1 *)(param_1 + 0x11) = 1;
  (**(code **)(*param_1 + 0x228))(param_1,*(undefined8 *)(*param_1 + 0x230));
                    /* WARNING: Could not recover jumptable at 0x00c2e628. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x288))(param_1,*(undefined8 *)(*param_1 + 0x290));
  return;
}



/* UIRect$$Update @ 0xc2e62c
 * void UIRect__Update (UIRect_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIRect$$Update
   void UIRect__Update (UIRect_o* __this, const MethodInfo* method); */

void native_UIRect__Update_c2e62c(long *param_1)

{
  int iVar1;
  ulong uVar2;
  long lVar3;
  
  if ((bRam0000000001342712 & 1) == 0) {
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    bRam0000000001342712 = 1;
  }
  lVar3 = param_1[0x10];
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar2 = native_UnityEngine_Object__op_Implicit_8e1b98(lVar3,0);
  if ((uVar2 & 1) == 0) {
    native_UIRect__ResetAnchors_c2d260(param_1);
    native_UIRect__UpdateAnchors_c2ea10(param_1);
    *(undefined4 *)((long)param_1 + 0x5c) = 0xffffffff;
  }
  else if ((char)param_1[0xc] == '\0') {
    native_UIRect__ResetAnchors_c2d260(param_1);
  }
  iVar1 = native_UnityEngine_Time__get_frameCount_770964(0);
  if (*(int *)((long)param_1 + 0x5c) == iVar1) {
    return;
  }
  if (((int)param_1[7] == 1) || (*(char *)((long)param_1 + 0x5a) != '\0')) {
    native_UIRect__UpdateAnchorsInternal_c2e73c(param_1,iVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00c2e714. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x298))(param_1,*(undefined8 *)(*param_1 + 0x2a0));
  return;
}



/* UIRect$$UpdateAnchorsInternal @ 0xc2e73c
 * void UIRect__UpdateAnchorsInternal (UIRect_o* __this, int32_t frame, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIRect$$UpdateAnchorsInternal
   void UIRect__UpdateAnchorsInternal (UIRect_o* __this, int32_t frame, const MethodInfo* method);
    */

void native_UIRect__UpdateAnchorsInternal_c2e73c(long *param_1,int param_2)

{
  bool bVar1;
  ulong uVar2;
  long lVar3;
  undefined8 uVar4;
  
  if ((bRam0000000001342713 & 1) == 0) {
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    bRam0000000001342713 = 1;
  }
  *(int *)((long)param_1 + 0x5c) = param_2;
  *(undefined1 *)((long)param_1 + 0x5a) = 0;
  if (param_1[3] != 0) {
    uVar4 = *(undefined8 *)(param_1[3] + 0x10);
    if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    uVar2 = native_UnityEngine_Object__op_Implicit_8e1b98(uVar4,0);
    if ((uVar2 & 1) == 0) {
      bVar1 = false;
    }
    else {
      if (param_1[3] == 0) goto LAB_00c2ea0c;
      uVar4 = *(undefined8 *)(param_1[3] + 0x20);
      if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
        native_sub_4327ec();
      }
      uVar2 = native_UnityEngine_Object__op_Inequality_8d76fc(uVar4,0,0);
      if ((uVar2 & 1) != 0) {
        if ((param_1[3] == 0) || (lVar3 = *(long *)(param_1[3] + 0x20), lVar3 == 0))
        goto LAB_00c2ea0c;
        if (*(int *)(lVar3 + 0x5c) != param_2) {
          native_UIRect__Update_c2e62c();
        }
      }
      bVar1 = true;
    }
    if (param_1[5] != 0) {
      uVar4 = *(undefined8 *)(param_1[5] + 0x10);
      if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
        native_sub_4327ec();
      }
      uVar2 = native_UnityEngine_Object__op_Implicit_8e1b98(uVar4,0);
      if ((uVar2 & 1) != 0) {
        if (param_1[5] == 0) goto LAB_00c2ea0c;
        uVar4 = *(undefined8 *)(param_1[5] + 0x20);
        if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
           (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
          native_sub_4327ec();
        }
        uVar2 = native_UnityEngine_Object__op_Inequality_8d76fc(uVar4,0,0);
        if ((uVar2 & 1) != 0) {
          if ((param_1[5] == 0) || (lVar3 = *(long *)(param_1[5] + 0x20), lVar3 == 0))
          goto LAB_00c2ea0c;
          if (*(int *)(lVar3 + 0x5c) != param_2) {
            native_UIRect__Update_c2e62c();
          }
        }
        bVar1 = true;
      }
      if (param_1[4] != 0) {
        uVar4 = *(undefined8 *)(param_1[4] + 0x10);
        if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
           (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
          native_sub_4327ec();
        }
        uVar2 = native_UnityEngine_Object__op_Implicit_8e1b98(uVar4,0);
        if ((uVar2 & 1) != 0) {
          if (param_1[4] == 0) goto LAB_00c2ea0c;
          uVar4 = *(undefined8 *)(param_1[4] + 0x20);
          if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
             (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
            native_sub_4327ec();
          }
          uVar2 = native_UnityEngine_Object__op_Inequality_8d76fc(uVar4,0,0);
          if ((uVar2 & 1) != 0) {
            if ((param_1[4] == 0) || (lVar3 = *(long *)(param_1[4] + 0x20), lVar3 == 0))
            goto LAB_00c2ea0c;
            if (*(int *)(lVar3 + 0x5c) != param_2) {
              native_UIRect__Update_c2e62c();
            }
          }
          bVar1 = true;
        }
        if (param_1[6] != 0) {
          uVar4 = *(undefined8 *)(param_1[6] + 0x10);
          if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
             (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
            native_sub_4327ec();
          }
          uVar2 = native_UnityEngine_Object__op_Implicit_8e1b98(uVar4,0);
          if ((uVar2 & 1) == 0) {
            if (!bVar1) {
              return;
            }
          }
          else {
            if (param_1[6] == 0) goto LAB_00c2ea0c;
            uVar4 = *(undefined8 *)(param_1[6] + 0x20);
            if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
               (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
              native_sub_4327ec();
            }
            uVar2 = native_UnityEngine_Object__op_Inequality_8d76fc(uVar4,0,0);
            if ((uVar2 & 1) != 0) {
              if ((param_1[6] == 0) || (lVar3 = *(long *)(param_1[6] + 0x20), lVar3 == 0))
              goto LAB_00c2ea0c;
              if (*(int *)(lVar3 + 0x5c) != param_2) {
                native_UIRect__Update_c2e62c();
              }
            }
          }
                    /* WARNING: Could not recover jumptable at 0x00c2e9f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(*param_1 + 600))(param_1,*(undefined8 *)(*param_1 + 0x260));
          return;
        }
      }
    }
  }
LAB_00c2ea0c:
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* UIRect$$UpdateAnchors @ 0xc2ea10
 * void UIRect__UpdateAnchors (UIRect_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIRect$$UpdateAnchors
   void UIRect__UpdateAnchors (UIRect_o* __this, const MethodInfo* method); */

void native_UIRect__UpdateAnchors_c2ea10(long *param_1)

{
  bool bVar1;
  int iVar2;
  long lVar3;
  ulong uVar4;
  undefined8 uVar5;
  
  uVar4 = native_UIRect__get_isAnchored_c2d8cc();
  if ((uVar4 & 1) == 0) {
    return;
  }
  *(undefined4 *)((long)param_1 + 0x5c) = 0xffffffff;
  *(undefined1 *)((long)param_1 + 0x5a) = 1;
  iVar2 = native_UnityEngine_Time__get_frameCount_770964(0);
  if ((bRam0000000001342713 & 1) == 0) {
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    bRam0000000001342713 = 1;
  }
  *(int *)((long)param_1 + 0x5c) = iVar2;
  *(undefined1 *)((long)param_1 + 0x5a) = 0;
  if (param_1[3] != 0) {
    uVar5 = *(undefined8 *)(param_1[3] + 0x10);
    if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    uVar4 = native_UnityEngine_Object__op_Implicit_8e1b98(uVar5,0);
    if ((uVar4 & 1) == 0) {
      bVar1 = false;
    }
    else {
      if (param_1[3] == 0) goto LAB_00c2ea0c;
      uVar5 = *(undefined8 *)(param_1[3] + 0x20);
      if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
        native_sub_4327ec();
      }
      uVar4 = native_UnityEngine_Object__op_Inequality_8d76fc(uVar5,0,0);
      if ((uVar4 & 1) != 0) {
        if ((param_1[3] == 0) || (lVar3 = *(long *)(param_1[3] + 0x20), lVar3 == 0))
        goto LAB_00c2ea0c;
        if (*(int *)(lVar3 + 0x5c) != iVar2) {
          native_UIRect__Update_c2e62c();
        }
      }
      bVar1 = true;
    }
    if (param_1[5] != 0) {
      uVar5 = *(undefined8 *)(param_1[5] + 0x10);
      if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
        native_sub_4327ec();
      }
      uVar4 = native_UnityEngine_Object__op_Implicit_8e1b98(uVar5,0);
      if ((uVar4 & 1) != 0) {
        if (param_1[5] == 0) goto LAB_00c2ea0c;
        uVar5 = *(undefined8 *)(param_1[5] + 0x20);
        if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
           (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
          native_sub_4327ec();
        }
        uVar4 = native_UnityEngine_Object__op_Inequality_8d76fc(uVar5,0,0);
        if ((uVar4 & 1) != 0) {
          if ((param_1[5] == 0) || (lVar3 = *(long *)(param_1[5] + 0x20), lVar3 == 0))
          goto LAB_00c2ea0c;
          if (*(int *)(lVar3 + 0x5c) != iVar2) {
            native_UIRect__Update_c2e62c();
          }
        }
        bVar1 = true;
      }
      if (param_1[4] != 0) {
        uVar5 = *(undefined8 *)(param_1[4] + 0x10);
        if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
           (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
          native_sub_4327ec();
        }
        uVar4 = native_UnityEngine_Object__op_Implicit_8e1b98(uVar5,0);
        if ((uVar4 & 1) != 0) {
          if (param_1[4] == 0) goto LAB_00c2ea0c;
          uVar5 = *(undefined8 *)(param_1[4] + 0x20);
          if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
             (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
            native_sub_4327ec();
          }
          uVar4 = native_UnityEngine_Object__op_Inequality_8d76fc(uVar5,0,0);
          if ((uVar4 & 1) != 0) {
            if ((param_1[4] == 0) || (lVar3 = *(long *)(param_1[4] + 0x20), lVar3 == 0))
            goto LAB_00c2ea0c;
            if (*(int *)(lVar3 + 0x5c) != iVar2) {
              native_UIRect__Update_c2e62c();
            }
          }
          bVar1 = true;
        }
        if (param_1[6] != 0) {
          uVar5 = *(undefined8 *)(param_1[6] + 0x10);
          if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
             (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
            native_sub_4327ec();
          }
          uVar4 = native_UnityEngine_Object__op_Implicit_8e1b98(uVar5,0);
          if ((uVar4 & 1) == 0) {
            if (!bVar1) {
              return;
            }
          }
          else {
            if (param_1[6] == 0) goto LAB_00c2ea0c;
            uVar5 = *(undefined8 *)(param_1[6] + 0x20);
            if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
               (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
              native_sub_4327ec();
            }
            uVar4 = native_UnityEngine_Object__op_Inequality_8d76fc(uVar5,0,0);
            if ((uVar4 & 1) != 0) {
              if ((param_1[6] == 0) || (lVar3 = *(long *)(param_1[6] + 0x20), lVar3 == 0))
              goto LAB_00c2ea0c;
              if (*(int *)(lVar3 + 0x5c) != iVar2) {
                native_UIRect__Update_c2e62c();
              }
            }
          }
                    /* WARNING: Could not recover jumptable at 0x00c2e9f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(*param_1 + 600))(param_1,*(undefined8 *)(*param_1 + 0x260));
          return;
        }
      }
    }
  }
LAB_00c2ea0c:
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* UIRect$$SetAnchor @ 0xc2ea60
 * void UIRect__SetAnchor (UIRect_o* __this, UnityEngine_Transform_o* t, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIRect$$SetAnchor
   void UIRect__SetAnchor (UIRect_o* __this, UnityEngine_Transform_o* t, const MethodInfo* method);
    */

void native_UIRect__SetAnchor_c2ea60(long *param_1,undefined8 param_2)

{
  bool bVar1;
  int iVar2;
  long lVar3;
  ulong uVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  
  if (param_1[3] != 0) {
    *(undefined8 *)(param_1[3] + 0x10) = param_2;
    native_sub_4326e0();
    if (param_1[4] != 0) {
      puVar5 = (undefined8 *)(param_1[4] + 0x10);
      *puVar5 = param_2;
      native_sub_4326e0(puVar5,param_2);
      if (param_1[6] != 0) {
        puVar5 = (undefined8 *)(param_1[6] + 0x10);
        *puVar5 = param_2;
        native_sub_4326e0(puVar5,param_2);
        if (param_1[5] != 0) {
          puVar5 = (undefined8 *)(param_1[5] + 0x10);
          *puVar5 = param_2;
          native_sub_4326e0(puVar5,param_2);
          native_UIRect__ResetAnchors_c2d260(param_1);
          uVar4 = native_UIRect__get_isAnchored_c2d8cc();
          if ((uVar4 & 1) == 0) {
            return;
          }
          *(undefined4 *)((long)param_1 + 0x5c) = 0xffffffff;
          *(undefined1 *)((long)param_1 + 0x5a) = 1;
          iVar2 = native_UnityEngine_Time__get_frameCount_770964(0);
          if ((bRam0000000001342713 & 1) == 0) {
            native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
            bRam0000000001342713 = 1;
          }
          *(int *)((long)param_1 + 0x5c) = iVar2;
          *(undefined1 *)((long)param_1 + 0x5a) = 0;
          if (param_1[3] != 0) {
            uVar6 = *(undefined8 *)(param_1[3] + 0x10);
            if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
               (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
              native_sub_4327ec();
            }
            uVar4 = native_UnityEngine_Object__op_Implicit_8e1b98(uVar6,0);
            if ((uVar4 & 1) == 0) {
              bVar1 = false;
            }
            else {
              if (param_1[3] == 0) goto LAB_00c2ea0c;
              uVar6 = *(undefined8 *)(param_1[3] + 0x20);
              if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
                 (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
                native_sub_4327ec();
              }
              uVar4 = native_UnityEngine_Object__op_Inequality_8d76fc(uVar6,0,0);
              if ((uVar4 & 1) != 0) {
                if ((param_1[3] == 0) || (lVar3 = *(long *)(param_1[3] + 0x20), lVar3 == 0))
                goto LAB_00c2ea0c;
                if (*(int *)(lVar3 + 0x5c) != iVar2) {
                  native_UIRect__Update_c2e62c();
                }
              }
              bVar1 = true;
            }
            if (param_1[5] != 0) {
              uVar6 = *(undefined8 *)(param_1[5] + 0x10);
              if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
                 (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
                native_sub_4327ec();
              }
              uVar4 = native_UnityEngine_Object__op_Implicit_8e1b98(uVar6,0);
              if ((uVar4 & 1) != 0) {
                if (param_1[5] == 0) goto LAB_00c2ea0c;
                uVar6 = *(undefined8 *)(param_1[5] + 0x20);
                if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
                   (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
                  native_sub_4327ec();
                }
                uVar4 = native_UnityEngine_Object__op_Inequality_8d76fc(uVar6,0,0);
                if ((uVar4 & 1) != 0) {
                  if ((param_1[5] == 0) || (lVar3 = *(long *)(param_1[5] + 0x20), lVar3 == 0))
                  goto LAB_00c2ea0c;
                  if (*(int *)(lVar3 + 0x5c) != iVar2) {
                    native_UIRect__Update_c2e62c();
                  }
                }
                bVar1 = true;
              }
              if (param_1[4] != 0) {
                uVar6 = *(undefined8 *)(param_1[4] + 0x10);
                if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
                   (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
                  native_sub_4327ec();
                }
                uVar4 = native_UnityEngine_Object__op_Implicit_8e1b98(uVar6,0);
                if ((uVar4 & 1) != 0) {
                  if (param_1[4] == 0) goto LAB_00c2ea0c;
                  uVar6 = *(undefined8 *)(param_1[4] + 0x20);
                  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
                     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
                    native_sub_4327ec();
                  }
                  uVar4 = native_UnityEngine_Object__op_Inequality_8d76fc(uVar6,0,0);
                  if ((uVar4 & 1) != 0) {
                    if ((param_1[4] == 0) || (lVar3 = *(long *)(param_1[4] + 0x20), lVar3 == 0))
                    goto LAB_00c2ea0c;
                    if (*(int *)(lVar3 + 0x5c) != iVar2) {
                      native_UIRect__Update_c2e62c();
                    }
                  }
                  bVar1 = true;
                }
                if (param_1[6] != 0) {
                  uVar6 = *(undefined8 *)(param_1[6] + 0x10);
                  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
                     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
                    native_sub_4327ec();
                  }
                  uVar4 = native_UnityEngine_Object__op_Implicit_8e1b98(uVar6,0);
                  if ((uVar4 & 1) == 0) {
                    if (!bVar1) {
                      return;
                    }
                  }
                  else {
                    if (param_1[6] == 0) goto LAB_00c2ea0c;
                    uVar6 = *(undefined8 *)(param_1[6] + 0x20);
                    if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
                       (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
                      native_sub_4327ec();
                    }
                    uVar4 = native_UnityEngine_Object__op_Inequality_8d76fc(uVar6,0,0);
                    if ((uVar4 & 1) != 0) {
                      if ((param_1[6] == 0) || (lVar3 = *(long *)(param_1[6] + 0x20), lVar3 == 0))
                      goto LAB_00c2ea0c;
                      if (*(int *)(lVar3 + 0x5c) != iVar2) {
                        native_UIRect__Update_c2e62c();
                      }
                    }
                  }
                    /* WARNING: Could not recover jumptable at 0x00c2e9f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                  (**(code **)(*param_1 + 600))(param_1,*(undefined8 *)(*param_1 + 0x260));
                  return;
                }
              }
            }
          }
LAB_00c2ea0c:
                    /* WARNING: Subroutine does not return */
          native_sub_432810();
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* UIRect$$SetAnchor @ 0xc2eadc
 * void UIRect__SetAnchor (UIRect_o* __this, UnityEngine_GameObject_o* go, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIRect$$SetAnchor
   void UIRect__SetAnchor (UIRect_o* __this, UnityEngine_GameObject_o* go, const MethodInfo*
   method); */

void native_UIRect__SetAnchor_c2eadc(long *param_1,long param_2)

{
  bool bVar1;
  int iVar2;
  long lVar3;
  ulong uVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  
  if ((bRam0000000001342714 & 1) == 0) {
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    bRam0000000001342714 = 1;
  }
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar4 = native_UnityEngine_Object__op_Inequality_8d76fc(param_2,0,0);
  uVar6 = 0;
  if ((uVar4 & 1) != 0) {
    if (param_2 == 0) goto LAB_00c2ebcc;
    uVar6 = native_UnityEngine_GameObject__get_transform_8de5c8(param_2,0);
  }
  if (param_1[3] != 0) {
    puVar5 = (undefined8 *)(param_1[3] + 0x10);
    *puVar5 = uVar6;
    native_sub_4326e0(puVar5,uVar6);
    if (param_1[4] != 0) {
      puVar5 = (undefined8 *)(param_1[4] + 0x10);
      *puVar5 = uVar6;
      native_sub_4326e0(puVar5,uVar6);
      if (param_1[6] != 0) {
        puVar5 = (undefined8 *)(param_1[6] + 0x10);
        *puVar5 = uVar6;
        native_sub_4326e0(puVar5,uVar6);
        if (param_1[5] != 0) {
          puVar5 = (undefined8 *)(param_1[5] + 0x10);
          *puVar5 = uVar6;
          native_sub_4326e0(puVar5,uVar6);
          native_UIRect__ResetAnchors_c2d260(param_1);
          uVar4 = native_UIRect__get_isAnchored_c2d8cc();
          if ((uVar4 & 1) == 0) {
            return;
          }
          *(undefined4 *)((long)param_1 + 0x5c) = 0xffffffff;
          *(undefined1 *)((long)param_1 + 0x5a) = 1;
          iVar2 = native_UnityEngine_Time__get_frameCount_770964(0);
          if ((bRam0000000001342713 & 1) == 0) {
            native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
            bRam0000000001342713 = 1;
          }
          *(int *)((long)param_1 + 0x5c) = iVar2;
          *(undefined1 *)((long)param_1 + 0x5a) = 0;
          if (param_1[3] != 0) {
            uVar6 = *(undefined8 *)(param_1[3] + 0x10);
            if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
               (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
              native_sub_4327ec();
            }
            uVar4 = native_UnityEngine_Object__op_Implicit_8e1b98(uVar6,0);
            if ((uVar4 & 1) == 0) {
              bVar1 = false;
            }
            else {
              if (param_1[3] == 0) goto LAB_00c2ea0c;
              uVar6 = *(undefined8 *)(param_1[3] + 0x20);
              if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
                 (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
                native_sub_4327ec();
              }
              uVar4 = native_UnityEngine_Object__op_Inequality_8d76fc(uVar6,0,0);
              if ((uVar4 & 1) != 0) {
                if ((param_1[3] == 0) || (lVar3 = *(long *)(param_1[3] + 0x20), lVar3 == 0))
                goto LAB_00c2ea0c;
                if (*(int *)(lVar3 + 0x5c) != iVar2) {
                  native_UIRect__Update_c2e62c();
                }
              }
              bVar1 = true;
            }
            if (param_1[5] != 0) {
              uVar6 = *(undefined8 *)(param_1[5] + 0x10);
              if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
                 (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
                native_sub_4327ec();
              }
              uVar4 = native_UnityEngine_Object__op_Implicit_8e1b98(uVar6,0);
              if ((uVar4 & 1) != 0) {
                if (param_1[5] == 0) goto LAB_00c2ea0c;
                uVar6 = *(undefined8 *)(param_1[5] + 0x20);
                if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
                   (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
                  native_sub_4327ec();
                }
                uVar4 = native_UnityEngine_Object__op_Inequality_8d76fc(uVar6,0,0);
                if ((uVar4 & 1) != 0) {
                  if ((param_1[5] == 0) || (lVar3 = *(long *)(param_1[5] + 0x20), lVar3 == 0))
                  goto LAB_00c2ea0c;
                  if (*(int *)(lVar3 + 0x5c) != iVar2) {
                    native_UIRect__Update_c2e62c();
                  }
                }
                bVar1 = true;
              }
              if (param_1[4] != 0) {
                uVar6 = *(undefined8 *)(param_1[4] + 0x10);
                if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
                   (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
                  native_sub_4327ec();
                }
                uVar4 = native_UnityEngine_Object__op_Implicit_8e1b98(uVar6,0);
                if ((uVar4 & 1) != 0) {
                  if (param_1[4] == 0) goto LAB_00c2ea0c;
                  uVar6 = *(undefined8 *)(param_1[4] + 0x20);
                  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
                     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
                    native_sub_4327ec();
                  }
                  uVar4 = native_UnityEngine_Object__op_Inequality_8d76fc(uVar6,0,0);
                  if ((uVar4 & 1) != 0) {
                    if ((param_1[4] == 0) || (lVar3 = *(long *)(param_1[4] + 0x20), lVar3 == 0))
                    goto LAB_00c2ea0c;
                    if (*(int *)(lVar3 + 0x5c) != iVar2) {
                      native_UIRect__Update_c2e62c();
                    }
                  }
                  bVar1 = true;
                }
                if (param_1[6] != 0) {
                  uVar6 = *(undefined8 *)(param_1[6] + 0x10);
                  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
                     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
                    native_sub_4327ec();
                  }
                  uVar4 = native_UnityEngine_Object__op_Implicit_8e1b98(uVar6,0);
                  if ((uVar4 & 1) == 0) {
                    if (!bVar1) {
                      return;
                    }
                  }
                  else {
                    if (param_1[6] == 0) goto LAB_00c2ea0c;
                    uVar6 = *(undefined8 *)(param_1[6] + 0x20);
                    if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
                       (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
                      native_sub_4327ec();
                    }
                    uVar4 = native_UnityEngine_Object__op_Inequality_8d76fc(uVar6,0,0);
                    if ((uVar4 & 1) != 0) {
                      if ((param_1[6] == 0) || (lVar3 = *(long *)(param_1[6] + 0x20), lVar3 == 0))
                      goto LAB_00c2ea0c;
                      if (*(int *)(lVar3 + 0x5c) != iVar2) {
                        native_UIRect__Update_c2e62c();
                      }
                    }
                  }
                    /* WARNING: Could not recover jumptable at 0x00c2e9f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                  (**(code **)(*param_1 + 600))(param_1,*(undefined8 *)(*param_1 + 0x260));
                  return;
                }
              }
            }
          }
LAB_00c2ea0c:
                    /* WARNING: Subroutine does not return */
          native_sub_432810();
        }
      }
    }
  }
LAB_00c2ebcc:
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* UIRect$$SetAnchor @ 0xc2ebd0
 * void UIRect__SetAnchor (UIRect_o* __this, UnityEngine_GameObject_o* go, int32_t left, int32_t bottom, int32_t right, int32_t top, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIRect$$SetAnchor
   void UIRect__SetAnchor (UIRect_o* __this, UnityEngine_GameObject_o* go, int32_t left, int32_t
   bottom, int32_t right, int32_t top, const MethodInfo* method); */

void native_UIRect__SetAnchor_c2ebd0
               (long *param_1,long param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,
               undefined4 param_6)

{
  bool bVar1;
  int iVar2;
  long lVar3;
  ulong uVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  
  if ((bRam0000000001342715 & 1) == 0) {
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    bRam0000000001342715 = 1;
  }
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar4 = native_UnityEngine_Object__op_Inequality_8d76fc(param_2,0,0);
  uVar6 = 0;
  if ((uVar4 & 1) != 0) {
    if (param_2 == 0) goto LAB_00c2ed48;
    uVar6 = native_UnityEngine_GameObject__get_transform_8de5c8(param_2,0);
  }
  if (param_1[3] != 0) {
    puVar5 = (undefined8 *)(param_1[3] + 0x10);
    *puVar5 = uVar6;
    native_sub_4326e0(puVar5,uVar6);
    if (param_1[4] != 0) {
      puVar5 = (undefined8 *)(param_1[4] + 0x10);
      *puVar5 = uVar6;
      native_sub_4326e0(puVar5,uVar6);
      if (param_1[6] != 0) {
        puVar5 = (undefined8 *)(param_1[6] + 0x10);
        *puVar5 = uVar6;
        native_sub_4326e0(puVar5,uVar6);
        if (param_1[5] != 0) {
          puVar5 = (undefined8 *)(param_1[5] + 0x10);
          *puVar5 = uVar6;
          native_sub_4326e0(puVar5,uVar6);
          if (param_1[3] != 0) {
            *(undefined4 *)(param_1[3] + 0x18) = 0;
            if (param_1[4] != 0) {
              *(undefined4 *)(param_1[4] + 0x18) = 0x3f800000;
              if (param_1[5] != 0) {
                *(undefined4 *)(param_1[5] + 0x18) = 0;
                if (param_1[6] != 0) {
                  *(undefined4 *)(param_1[6] + 0x18) = 0x3f800000;
                  if (param_1[3] != 0) {
                    *(undefined4 *)(param_1[3] + 0x1c) = param_3;
                    if (param_1[4] != 0) {
                      *(undefined4 *)(param_1[4] + 0x1c) = param_5;
                      if (param_1[5] != 0) {
                        *(undefined4 *)(param_1[5] + 0x1c) = param_4;
                        if (param_1[6] != 0) {
                          *(undefined4 *)(param_1[6] + 0x1c) = param_6;
                          native_UIRect__ResetAnchors_c2d260(param_1);
                          uVar4 = native_UIRect__get_isAnchored_c2d8cc();
                          if ((uVar4 & 1) == 0) {
                            return;
                          }
                          *(undefined4 *)((long)param_1 + 0x5c) = 0xffffffff;
                          *(undefined1 *)((long)param_1 + 0x5a) = 1;
                          iVar2 = native_UnityEngine_Time__get_frameCount_770964(0);
                          if ((bRam0000000001342713 & 1) == 0) {
                            native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
                            bRam0000000001342713 = 1;
                          }
                          *(int *)((long)param_1 + 0x5c) = iVar2;
                          *(undefined1 *)((long)param_1 + 0x5a) = 0;
                          if (param_1[3] != 0) {
                            uVar6 = *(undefined8 *)(param_1[3] + 0x10);
                            if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1)
                                 != 0) &&
                               (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
                              native_sub_4327ec();
                            }
                            uVar4 = native_UnityEngine_Object__op_Implicit_8e1b98(uVar6,0);
                            if ((uVar4 & 1) == 0) {
                              bVar1 = false;
                            }
                            else {
                              if (param_1[3] == 0) goto LAB_00c2ea0c;
                              uVar6 = *(undefined8 *)(param_1[3] + 0x20);
                              if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1
                                   ) != 0) &&
                                 (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
                                native_sub_4327ec();
                              }
                              uVar4 = native_UnityEngine_Object__op_Inequality_8d76fc(uVar6,0,0);
                              if ((uVar4 & 1) != 0) {
                                if ((param_1[3] == 0) ||
                                   (lVar3 = *(long *)(param_1[3] + 0x20), lVar3 == 0))
                                goto LAB_00c2ea0c;
                                if (*(int *)(lVar3 + 0x5c) != iVar2) {
                                  native_UIRect__Update_c2e62c();
                                }
                              }
                              bVar1 = true;
                            }
                            if (param_1[5] != 0) {
                              uVar6 = *(undefined8 *)(param_1[5] + 0x10);
                              if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1
                                   ) != 0) &&
                                 (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
                                native_sub_4327ec();
                              }
                              uVar4 = native_UnityEngine_Object__op_Implicit_8e1b98(uVar6,0);
                              if ((uVar4 & 1) != 0) {
                                if (param_1[5] == 0) goto LAB_00c2ea0c;
                                uVar6 = *(undefined8 *)(param_1[5] + 0x20);
                                if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 &
                                     1) != 0) &&
                                   (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
                                  native_sub_4327ec();
                                }
                                uVar4 = native_UnityEngine_Object__op_Inequality_8d76fc(uVar6,0,0);
                                if ((uVar4 & 1) != 0) {
                                  if ((param_1[5] == 0) ||
                                     (lVar3 = *(long *)(param_1[5] + 0x20), lVar3 == 0))
                                  goto LAB_00c2ea0c;
                                  if (*(int *)(lVar3 + 0x5c) != iVar2) {
                                    native_UIRect__Update_c2e62c();
                                  }
                                }
                                bVar1 = true;
                              }
                              if (param_1[4] != 0) {
                                uVar6 = *(undefined8 *)(param_1[4] + 0x10);
                                if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 &
                                     1) != 0) &&
                                   (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
                                  native_sub_4327ec();
                                }
                                uVar4 = native_UnityEngine_Object__op_Implicit_8e1b98(uVar6,0);
                                if ((uVar4 & 1) != 0) {
                                  if (param_1[4] == 0) goto LAB_00c2ea0c;
                                  uVar6 = *(undefined8 *)(param_1[4] + 0x20);
                                  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2
                                       & 1) != 0) &&
                                     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
                                    native_sub_4327ec();
                                  }
                                  uVar4 = native_UnityEngine_Object__op_Inequality_8d76fc(uVar6,0,0)
                                  ;
                                  if ((uVar4 & 1) != 0) {
                                    if ((param_1[4] == 0) ||
                                       (lVar3 = *(long *)(param_1[4] + 0x20), lVar3 == 0))
                                    goto LAB_00c2ea0c;
                                    if (*(int *)(lVar3 + 0x5c) != iVar2) {
                                      native_UIRect__Update_c2e62c();
                                    }
                                  }
                                  bVar1 = true;
                                }
                                if (param_1[6] != 0) {
                                  uVar6 = *(undefined8 *)(param_1[6] + 0x10);
                                  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2
                                       & 1) != 0) &&
                                     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
                                    native_sub_4327ec();
                                  }
                                  uVar4 = native_UnityEngine_Object__op_Implicit_8e1b98(uVar6,0);
                                  if ((uVar4 & 1) == 0) {
                                    if (!bVar1) {
                                      return;
                                    }
                                  }
                                  else {
                                    if (param_1[6] == 0) goto LAB_00c2ea0c;
                                    uVar6 = *(undefined8 *)(param_1[6] + 0x20);
                                    if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >>
                                          2 & 1) != 0) &&
                                       (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0))
                                    {
                                      native_sub_4327ec();
                                    }
                                    uVar4 = native_UnityEngine_Object__op_Inequality_8d76fc
                                                      (uVar6,0,0);
                                    if ((uVar4 & 1) != 0) {
                                      if ((param_1[6] == 0) ||
                                         (lVar3 = *(long *)(param_1[6] + 0x20), lVar3 == 0))
                                      goto LAB_00c2ea0c;
                                      if (*(int *)(lVar3 + 0x5c) != iVar2) {
                                        native_UIRect__Update_c2e62c();
                                      }
                                    }
                                  }
                    /* WARNING: Could not recover jumptable at 0x00c2e9f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                                  (**(code **)(*param_1 + 600))
                                            (param_1,*(undefined8 *)(*param_1 + 0x260));
                                  return;
                                }
                              }
                            }
                          }
LAB_00c2ea0c:
                    /* WARNING: Subroutine does not return */
                          native_sub_432810();
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
LAB_00c2ed48:
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* UIRect$$SetAnchor @ 0xc2ed4c
 * void UIRect__SetAnchor (UIRect_o* __this, UnityEngine_GameObject_o* go, float left, float bottom, float right, float top, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIRect$$SetAnchor
   void UIRect__SetAnchor (UIRect_o* __this, UnityEngine_GameObject_o* go, float left, float bottom,
   float right, float top, const MethodInfo* method); */

void native_UIRect__SetAnchor_c2ed4c
               (undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
               long *param_5,long param_6)

{
  bool bVar1;
  int iVar2;
  long lVar3;
  ulong uVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  
  if ((bRam0000000001342716 & 1) == 0) {
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    bRam0000000001342716 = 1;
  }
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar4 = native_UnityEngine_Object__op_Inequality_8d76fc(param_6,0,0);
  uVar6 = 0;
  if ((uVar4 & 1) != 0) {
    if (param_6 == 0) goto LAB_00c2eebc;
    uVar6 = native_UnityEngine_GameObject__get_transform_8de5c8(param_6,0);
  }
  if (param_5[3] != 0) {
    puVar5 = (undefined8 *)(param_5[3] + 0x10);
    *puVar5 = uVar6;
    native_sub_4326e0(puVar5,uVar6);
    if (param_5[4] != 0) {
      puVar5 = (undefined8 *)(param_5[4] + 0x10);
      *puVar5 = uVar6;
      native_sub_4326e0(puVar5,uVar6);
      if (param_5[6] != 0) {
        puVar5 = (undefined8 *)(param_5[6] + 0x10);
        *puVar5 = uVar6;
        native_sub_4326e0(puVar5,uVar6);
        if (param_5[5] != 0) {
          puVar5 = (undefined8 *)(param_5[5] + 0x10);
          *puVar5 = uVar6;
          native_sub_4326e0(puVar5,uVar6);
          if (param_5[3] != 0) {
            *(undefined4 *)(param_5[3] + 0x18) = param_1;
            if (param_5[4] != 0) {
              *(undefined4 *)(param_5[4] + 0x18) = param_3;
              if (param_5[5] != 0) {
                *(undefined4 *)(param_5[5] + 0x18) = param_2;
                if (param_5[6] != 0) {
                  *(undefined4 *)(param_5[6] + 0x18) = param_4;
                  if (param_5[3] != 0) {
                    *(undefined4 *)(param_5[3] + 0x1c) = 0;
                    if (param_5[4] != 0) {
                      *(undefined4 *)(param_5[4] + 0x1c) = 0;
                      if (param_5[5] != 0) {
                        *(undefined4 *)(param_5[5] + 0x1c) = 0;
                        if (param_5[6] != 0) {
                          *(undefined4 *)(param_5[6] + 0x1c) = 0;
                          native_UIRect__ResetAnchors_c2d260(param_5);
                          uVar4 = native_UIRect__get_isAnchored_c2d8cc();
                          if ((uVar4 & 1) == 0) {
                            return;
                          }
                          *(undefined4 *)((long)param_5 + 0x5c) = 0xffffffff;
                          *(undefined1 *)((long)param_5 + 0x5a) = 1;
                          iVar2 = native_UnityEngine_Time__get_frameCount_770964(0);
                          if ((bRam0000000001342713 & 1) == 0) {
                            native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
                            bRam0000000001342713 = 1;
                          }
                          *(int *)((long)param_5 + 0x5c) = iVar2;
                          *(undefined1 *)((long)param_5 + 0x5a) = 0;
                          if (param_5[3] != 0) {
                            uVar6 = *(undefined8 *)(param_5[3] + 0x10);
                            if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1)
                                 != 0) &&
                               (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
                              native_sub_4327ec();
                            }
                            uVar4 = native_UnityEngine_Object__op_Implicit_8e1b98(uVar6,0);
                            if ((uVar4 & 1) == 0) {
                              bVar1 = false;
                            }
                            else {
                              if (param_5[3] == 0) goto LAB_00c2ea0c;
                              uVar6 = *(undefined8 *)(param_5[3] + 0x20);
                              if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1
                                   ) != 0) &&
                                 (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
                                native_sub_4327ec();
                              }
                              uVar4 = native_UnityEngine_Object__op_Inequality_8d76fc(uVar6,0,0);
                              if ((uVar4 & 1) != 0) {
                                if ((param_5[3] == 0) ||
                                   (lVar3 = *(long *)(param_5[3] + 0x20), lVar3 == 0))
                                goto LAB_00c2ea0c;
                                if (*(int *)(lVar3 + 0x5c) != iVar2) {
                                  native_UIRect__Update_c2e62c();
                                }
                              }
                              bVar1 = true;
                            }
                            if (param_5[5] != 0) {
                              uVar6 = *(undefined8 *)(param_5[5] + 0x10);
                              if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1
                                   ) != 0) &&
                                 (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
                                native_sub_4327ec();
                              }
                              uVar4 = native_UnityEngine_Object__op_Implicit_8e1b98(uVar6,0);
                              if ((uVar4 & 1) != 0) {
                                if (param_5[5] == 0) goto LAB_00c2ea0c;
                                uVar6 = *(undefined8 *)(param_5[5] + 0x20);
                                if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 &
                                     1) != 0) &&
                                   (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
                                  native_sub_4327ec();
                                }
                                uVar4 = native_UnityEngine_Object__op_Inequality_8d76fc(uVar6,0,0);
                                if ((uVar4 & 1) != 0) {
                                  if ((param_5[5] == 0) ||
                                     (lVar3 = *(long *)(param_5[5] + 0x20), lVar3 == 0))
                                  goto LAB_00c2ea0c;
                                  if (*(int *)(lVar3 + 0x5c) != iVar2) {
                                    native_UIRect__Update_c2e62c();
                                  }
                                }
                                bVar1 = true;
                              }
                              if (param_5[4] != 0) {
                                uVar6 = *(undefined8 *)(param_5[4] + 0x10);
                                if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 &
                                     1) != 0) &&
                                   (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
                                  native_sub_4327ec();
                                }
                                uVar4 = native_UnityEngine_Object__op_Implicit_8e1b98(uVar6,0);
                                if ((uVar4 & 1) != 0) {
                                  if (param_5[4] == 0) goto LAB_00c2ea0c;
                                  uVar6 = *(undefined8 *)(param_5[4] + 0x20);
                                  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2
                                       & 1) != 0) &&
                                     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
                                    native_sub_4327ec();
                                  }
                                  uVar4 = native_UnityEngine_Object__op_Inequality_8d76fc(uVar6,0,0)
                                  ;
                                  if ((uVar4 & 1) != 0) {
                                    if ((param_5[4] == 0) ||
                                       (lVar3 = *(long *)(param_5[4] + 0x20), lVar3 == 0))
                                    goto LAB_00c2ea0c;
                                    if (*(int *)(lVar3 + 0x5c) != iVar2) {
                                      native_UIRect__Update_c2e62c();
                                    }
                                  }
                                  bVar1 = true;
                                }
                                if (param_5[6] != 0) {
                                  uVar6 = *(undefined8 *)(param_5[6] + 0x10);
                                  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2
                                       & 1) != 0) &&
                                     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
                                    native_sub_4327ec();
                                  }
                                  uVar4 = native_UnityEngine_Object__op_Implicit_8e1b98(uVar6,0);
                                  if ((uVar4 & 1) == 0) {
                                    if (!bVar1) {
                                      return;
                                    }
                                  }
                                  else {
                                    if (param_5[6] == 0) goto LAB_00c2ea0c;
                                    uVar6 = *(undefined8 *)(param_5[6] + 0x20);
                                    if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >>
                                          2 & 1) != 0) &&
                                       (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0))
                                    {
                                      native_sub_4327ec();
                                    }
                                    uVar4 = native_UnityEngine_Object__op_Inequality_8d76fc
                                                      (uVar6,0,0);
                                    if ((uVar4 & 1) != 0) {
                                      if ((param_5[6] == 0) ||
                                         (lVar3 = *(long *)(param_5[6] + 0x20), lVar3 == 0))
                                      goto LAB_00c2ea0c;
                                      if (*(int *)(lVar3 + 0x5c) != iVar2) {
                                        native_UIRect__Update_c2e62c();
                                      }
                                    }
                                  }
                    /* WARNING: Could not recover jumptable at 0x00c2e9f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                                  (**(code **)(*param_5 + 600))
                                            (param_5,*(undefined8 *)(*param_5 + 0x260));
                                  return;
                                }
                              }
                            }
                          }
LAB_00c2ea0c:
                    /* WARNING: Subroutine does not return */
                          native_sub_432810();
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
LAB_00c2eebc:
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* UIRect$$SetAnchor @ 0xc2eec0
 * void UIRect__SetAnchor (UIRect_o* __this, UnityEngine_GameObject_o* go, float left, int32_t leftOffset, float bottom, int32_t bottomOffset, float right, int32_t rightOffset, float top, int32_t topOffset, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIRect$$SetAnchor
   void UIRect__SetAnchor (UIRect_o* __this, UnityEngine_GameObject_o* go, float left, int32_t
   leftOffset, float bottom, int32_t bottomOffset, float right, int32_t rightOffset, float top,
   int32_t topOffset, const MethodInfo* method); */

void native_UIRect__SetAnchor_c2eec0
               (undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
               long *param_5,long param_6,undefined4 param_7,undefined4 param_8,undefined4 param_9,
               undefined4 param_10)

{
  bool bVar1;
  int iVar2;
  long lVar3;
  ulong uVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  
  if ((bRam0000000001342717 & 1) == 0) {
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    bRam0000000001342717 = 1;
  }
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar4 = native_UnityEngine_Object__op_Inequality_8d76fc(param_6,0,0);
  uVar6 = 0;
  if ((uVar4 & 1) != 0) {
    if (param_6 == 0) goto LAB_00c2f050;
    uVar6 = native_UnityEngine_GameObject__get_transform_8de5c8(param_6,0);
  }
  if (param_5[3] != 0) {
    puVar5 = (undefined8 *)(param_5[3] + 0x10);
    *puVar5 = uVar6;
    native_sub_4326e0(puVar5,uVar6);
    if (param_5[4] != 0) {
      puVar5 = (undefined8 *)(param_5[4] + 0x10);
      *puVar5 = uVar6;
      native_sub_4326e0(puVar5,uVar6);
      if (param_5[6] != 0) {
        puVar5 = (undefined8 *)(param_5[6] + 0x10);
        *puVar5 = uVar6;
        native_sub_4326e0(puVar5,uVar6);
        if (param_5[5] != 0) {
          puVar5 = (undefined8 *)(param_5[5] + 0x10);
          *puVar5 = uVar6;
          native_sub_4326e0(puVar5,uVar6);
          if (param_5[3] != 0) {
            *(undefined4 *)(param_5[3] + 0x18) = param_1;
            if (param_5[4] != 0) {
              *(undefined4 *)(param_5[4] + 0x18) = param_3;
              if (param_5[5] != 0) {
                *(undefined4 *)(param_5[5] + 0x18) = param_2;
                if (param_5[6] != 0) {
                  *(undefined4 *)(param_5[6] + 0x18) = param_4;
                  if (param_5[3] != 0) {
                    *(undefined4 *)(param_5[3] + 0x1c) = param_7;
                    if (param_5[4] != 0) {
                      *(undefined4 *)(param_5[4] + 0x1c) = param_9;
                      if (param_5[5] != 0) {
                        *(undefined4 *)(param_5[5] + 0x1c) = param_8;
                        if (param_5[6] != 0) {
                          *(undefined4 *)(param_5[6] + 0x1c) = param_10;
                          native_UIRect__ResetAnchors_c2d260(param_5);
                          uVar4 = native_UIRect__get_isAnchored_c2d8cc();
                          if ((uVar4 & 1) == 0) {
                            return;
                          }
                          *(undefined4 *)((long)param_5 + 0x5c) = 0xffffffff;
                          *(undefined1 *)((long)param_5 + 0x5a) = 1;
                          iVar2 = native_UnityEngine_Time__get_frameCount_770964(0);
                          if ((bRam0000000001342713 & 1) == 0) {
                            native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
                            bRam0000000001342713 = 1;
                          }
                          *(int *)((long)param_5 + 0x5c) = iVar2;
                          *(undefined1 *)((long)param_5 + 0x5a) = 0;
                          if (param_5[3] != 0) {
                            uVar6 = *(undefined8 *)(param_5[3] + 0x10);
                            if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1)
                                 != 0) &&
                               (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
                              native_sub_4327ec();
                            }
                            uVar4 = native_UnityEngine_Object__op_Implicit_8e1b98(uVar6,0);
                            if ((uVar4 & 1) == 0) {
                              bVar1 = false;
                            }
                            else {
                              if (param_5[3] == 0) goto LAB_00c2ea0c;
                              uVar6 = *(undefined8 *)(param_5[3] + 0x20);
                              if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1
                                   ) != 0) &&
                                 (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
                                native_sub_4327ec();
                              }
                              uVar4 = native_UnityEngine_Object__op_Inequality_8d76fc(uVar6,0,0);
                              if ((uVar4 & 1) != 0) {
                                if ((param_5[3] == 0) ||
                                   (lVar3 = *(long *)(param_5[3] + 0x20), lVar3 == 0))
                                goto LAB_00c2ea0c;
                                if (*(int *)(lVar3 + 0x5c) != iVar2) {
                                  native_UIRect__Update_c2e62c();
                                }
                              }
                              bVar1 = true;
                            }
                            if (param_5[5] != 0) {
                              uVar6 = *(undefined8 *)(param_5[5] + 0x10);
                              if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1
                                   ) != 0) &&
                                 (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
                                native_sub_4327ec();
                              }
                              uVar4 = native_UnityEngine_Object__op_Implicit_8e1b98(uVar6,0);
                              if ((uVar4 & 1) != 0) {
                                if (param_5[5] == 0) goto LAB_00c2ea0c;
                                uVar6 = *(undefined8 *)(param_5[5] + 0x20);
                                if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 &
                                     1) != 0) &&
                                   (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
                                  native_sub_4327ec();
                                }
                                uVar4 = native_UnityEngine_Object__op_Inequality_8d76fc(uVar6,0,0);
                                if ((uVar4 & 1) != 0) {
                                  if ((param_5[5] == 0) ||
                                     (lVar3 = *(long *)(param_5[5] + 0x20), lVar3 == 0))
                                  goto LAB_00c2ea0c;
                                  if (*(int *)(lVar3 + 0x5c) != iVar2) {
                                    native_UIRect__Update_c2e62c();
                                  }
                                }
                                bVar1 = true;
                              }
                              if (param_5[4] != 0) {
                                uVar6 = *(undefined8 *)(param_5[4] + 0x10);
                                if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 &
                                     1) != 0) &&
                                   (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
                                  native_sub_4327ec();
                                }
                                uVar4 = native_UnityEngine_Object__op_Implicit_8e1b98(uVar6,0);
                                if ((uVar4 & 1) != 0) {
                                  if (param_5[4] == 0) goto LAB_00c2ea0c;
                                  uVar6 = *(undefined8 *)(param_5[4] + 0x20);
                                  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2
                                       & 1) != 0) &&
                                     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
                                    native_sub_4327ec();
                                  }
                                  uVar4 = native_UnityEngine_Object__op_Inequality_8d76fc(uVar6,0,0)
                                  ;
                                  if ((uVar4 & 1) != 0) {
                                    if ((param_5[4] == 0) ||
                                       (lVar3 = *(long *)(param_5[4] + 0x20), lVar3 == 0))
                                    goto LAB_00c2ea0c;
                                    if (*(int *)(lVar3 + 0x5c) != iVar2) {
                                      native_UIRect__Update_c2e62c();
                                    }
                                  }
                                  bVar1 = true;
                                }
                                if (param_5[6] != 0) {
                                  uVar6 = *(undefined8 *)(param_5[6] + 0x10);
                                  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2
                                       & 1) != 0) &&
                                     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
                                    native_sub_4327ec();
                                  }
                                  uVar4 = native_UnityEngine_Object__op_Implicit_8e1b98(uVar6,0);
                                  if ((uVar4 & 1) == 0) {
                                    if (!bVar1) {
                                      return;
                                    }
                                  }
                                  else {
                                    if (param_5[6] == 0) goto LAB_00c2ea0c;
                                    uVar6 = *(undefined8 *)(param_5[6] + 0x20);
                                    if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >>
                                          2 & 1) != 0) &&
                                       (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0))
                                    {
                                      native_sub_4327ec();
                                    }
                                    uVar4 = native_UnityEngine_Object__op_Inequality_8d76fc
                                                      (uVar6,0,0);
                                    if ((uVar4 & 1) != 0) {
                                      if ((param_5[6] == 0) ||
                                         (lVar3 = *(long *)(param_5[6] + 0x20), lVar3 == 0))
                                      goto LAB_00c2ea0c;
                                      if (*(int *)(lVar3 + 0x5c) != iVar2) {
                                        native_UIRect__Update_c2e62c();
                                      }
                                    }
                                  }
                    /* WARNING: Could not recover jumptable at 0x00c2e9f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                                  (**(code **)(*param_5 + 600))
                                            (param_5,*(undefined8 *)(*param_5 + 0x260));
                                  return;
                                }
                              }
                            }
                          }
LAB_00c2ea0c:
                    /* WARNING: Subroutine does not return */
                          native_sub_432810();
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
LAB_00c2f050:
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* UIRect$$SetAnchor @ 0xc2f054
 * void UIRect__SetAnchor (UIRect_o* __this, float left, int32_t leftOffset, float bottom, int32_t bottomOffset, float right, int32_t rightOffset, float top, int32_t topOffset, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIRect$$SetAnchor
   void UIRect__SetAnchor (UIRect_o* __this, float left, int32_t leftOffset, float bottom, int32_t
   bottomOffset, float right, int32_t rightOffset, float top, int32_t topOffset, const MethodInfo*
   method); */

void native_UIRect__SetAnchor_c2f054
               (undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
               long *param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
               undefined4 param_9)

{
  bool bVar1;
  int iVar2;
  ulong uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  
  lVar4 = native_UIRect__get_cachedTransform_c27c58();
  if (lVar4 != 0) {
    uVar5 = native_UnityEngine_Transform__get_parent_765eb0(lVar4,0);
    if (param_5[3] != 0) {
      puVar6 = (undefined8 *)(param_5[3] + 0x10);
      *puVar6 = uVar5;
      native_sub_4326e0(puVar6,uVar5);
      if (param_5[4] != 0) {
        puVar6 = (undefined8 *)(param_5[4] + 0x10);
        *puVar6 = uVar5;
        native_sub_4326e0(puVar6,uVar5);
        if (param_5[6] != 0) {
          puVar6 = (undefined8 *)(param_5[6] + 0x10);
          *puVar6 = uVar5;
          native_sub_4326e0(puVar6,uVar5);
          if (param_5[5] != 0) {
            puVar6 = (undefined8 *)(param_5[5] + 0x10);
            *puVar6 = uVar5;
            native_sub_4326e0(puVar6,uVar5);
            if (param_5[3] != 0) {
              *(undefined4 *)(param_5[3] + 0x18) = param_1;
              if (param_5[4] != 0) {
                *(undefined4 *)(param_5[4] + 0x18) = param_3;
                if (param_5[5] != 0) {
                  *(undefined4 *)(param_5[5] + 0x18) = param_2;
                  if (param_5[6] != 0) {
                    *(undefined4 *)(param_5[6] + 0x18) = param_4;
                    if (param_5[3] != 0) {
                      *(undefined4 *)(param_5[3] + 0x1c) = param_6;
                      if (param_5[4] != 0) {
                        *(undefined4 *)(param_5[4] + 0x1c) = param_8;
                        if (param_5[5] != 0) {
                          *(undefined4 *)(param_5[5] + 0x1c) = param_7;
                          if (param_5[6] != 0) {
                            *(undefined4 *)(param_5[6] + 0x1c) = param_9;
                            native_UIRect__ResetAnchors_c2d260(param_5);
                            uVar3 = native_UIRect__get_isAnchored_c2d8cc();
                            if ((uVar3 & 1) == 0) {
                              return;
                            }
                            *(undefined4 *)((long)param_5 + 0x5c) = 0xffffffff;
                            *(undefined1 *)((long)param_5 + 0x5a) = 1;
                            iVar2 = native_UnityEngine_Time__get_frameCount_770964(0);
                            if ((bRam0000000001342713 & 1) == 0) {
                              native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
                              bRam0000000001342713 = 1;
                            }
                            *(int *)((long)param_5 + 0x5c) = iVar2;
                            *(undefined1 *)((long)param_5 + 0x5a) = 0;
                            if (param_5[3] != 0) {
                              uVar5 = *(undefined8 *)(param_5[3] + 0x10);
                              if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1
                                   ) != 0) &&
                                 (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
                                native_sub_4327ec();
                              }
                              uVar3 = native_UnityEngine_Object__op_Implicit_8e1b98(uVar5,0);
                              if ((uVar3 & 1) == 0) {
                                bVar1 = false;
                              }
                              else {
                                if (param_5[3] == 0) goto LAB_00c2ea0c;
                                uVar5 = *(undefined8 *)(param_5[3] + 0x20);
                                if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 &
                                     1) != 0) &&
                                   (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
                                  native_sub_4327ec();
                                }
                                uVar3 = native_UnityEngine_Object__op_Inequality_8d76fc(uVar5,0,0);
                                if ((uVar3 & 1) != 0) {
                                  if ((param_5[3] == 0) ||
                                     (lVar4 = *(long *)(param_5[3] + 0x20), lVar4 == 0))
                                  goto LAB_00c2ea0c;
                                  if (*(int *)(lVar4 + 0x5c) != iVar2) {
                                    native_UIRect__Update_c2e62c();
                                  }
                                }
                                bVar1 = true;
                              }
                              if (param_5[5] != 0) {
                                uVar5 = *(undefined8 *)(param_5[5] + 0x10);
                                if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 &
                                     1) != 0) &&
                                   (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
                                  native_sub_4327ec();
                                }
                                uVar3 = native_UnityEngine_Object__op_Implicit_8e1b98(uVar5,0);
                                if ((uVar3 & 1) != 0) {
                                  if (param_5[5] == 0) goto LAB_00c2ea0c;
                                  uVar5 = *(undefined8 *)(param_5[5] + 0x20);
                                  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2
                                       & 1) != 0) &&
                                     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
                                    native_sub_4327ec();
                                  }
                                  uVar3 = native_UnityEngine_Object__op_Inequality_8d76fc(uVar5,0,0)
                                  ;
                                  if ((uVar3 & 1) != 0) {
                                    if ((param_5[5] == 0) ||
                                       (lVar4 = *(long *)(param_5[5] + 0x20), lVar4 == 0))
                                    goto LAB_00c2ea0c;
                                    if (*(int *)(lVar4 + 0x5c) != iVar2) {
                                      native_UIRect__Update_c2e62c();
                                    }
                                  }
                                  bVar1 = true;
                                }
                                if (param_5[4] != 0) {
                                  uVar5 = *(undefined8 *)(param_5[4] + 0x10);
                                  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2
                                       & 1) != 0) &&
                                     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
                                    native_sub_4327ec();
                                  }
                                  uVar3 = native_UnityEngine_Object__op_Implicit_8e1b98(uVar5,0);
                                  if ((uVar3 & 1) != 0) {
                                    if (param_5[4] == 0) goto LAB_00c2ea0c;
                                    uVar5 = *(undefined8 *)(param_5[4] + 0x20);
                                    if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >>
                                          2 & 1) != 0) &&
                                       (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0))
                                    {
                                      native_sub_4327ec();
                                    }
                                    uVar3 = native_UnityEngine_Object__op_Inequality_8d76fc
                                                      (uVar5,0,0);
                                    if ((uVar3 & 1) != 0) {
                                      if ((param_5[4] == 0) ||
                                         (lVar4 = *(long *)(param_5[4] + 0x20), lVar4 == 0))
                                      goto LAB_00c2ea0c;
                                      if (*(int *)(lVar4 + 0x5c) != iVar2) {
                                        native_UIRect__Update_c2e62c();
                                      }
                                    }
                                    bVar1 = true;
                                  }
                                  if (param_5[6] != 0) {
                                    uVar5 = *(undefined8 *)(param_5[6] + 0x10);
                                    if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >>
                                          2 & 1) != 0) &&
                                       (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0))
                                    {
                                      native_sub_4327ec();
                                    }
                                    uVar3 = native_UnityEngine_Object__op_Implicit_8e1b98(uVar5,0);
                                    if ((uVar3 & 1) == 0) {
                                      if (!bVar1) {
                                        return;
                                      }
                                    }
                                    else {
                                      if (param_5[6] == 0) goto LAB_00c2ea0c;
                                      uVar5 = *(undefined8 *)(param_5[6] + 0x20);
                                      if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133)
                                            >> 2 & 1) != 0) &&
                                         (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0
                                         )) {
                                        native_sub_4327ec();
                                      }
                                      uVar3 = native_UnityEngine_Object__op_Inequality_8d76fc
                                                        (uVar5,0,0);
                                      if ((uVar3 & 1) != 0) {
                                        if ((param_5[6] == 0) ||
                                           (lVar4 = *(long *)(param_5[6] + 0x20), lVar4 == 0))
                                        goto LAB_00c2ea0c;
                                        if (*(int *)(lVar4 + 0x5c) != iVar2) {
                                          native_UIRect__Update_c2e62c();
                                        }
                                      }
                                    }
                    /* WARNING: Could not recover jumptable at 0x00c2e9f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                                    (**(code **)(*param_5 + 600))
                                              (param_5,*(undefined8 *)(*param_5 + 0x260));
                                    return;
                                  }
                                }
                              }
                            }
LAB_00c2ea0c:
                    /* WARNING: Subroutine does not return */
                            native_sub_432810();
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
  }
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* UIRect$$SetScreenRect @ 0xc2f188
 * void UIRect__SetScreenRect (UIRect_o* __this, int32_t left, int32_t top, int32_t width, int32_t height, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIRect$$SetScreenRect
   void UIRect__SetScreenRect (UIRect_o* __this, int32_t left, int32_t top, int32_t width, int32_t
   height, const MethodInfo* method); */

void native_UIRect__SetScreenRect_c2f188
               (long *param_1,int param_2,int param_3,int param_4,int param_5)

{
  bool bVar1;
  int iVar2;
  ulong uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  
  lVar4 = native_UIRect__get_cachedTransform_c27c58();
  if (lVar4 != 0) {
    uVar5 = native_UnityEngine_Transform__get_parent_765eb0(lVar4,0);
    if (param_1[3] != 0) {
      puVar6 = (undefined8 *)(param_1[3] + 0x10);
      *puVar6 = uVar5;
      native_sub_4326e0(puVar6,uVar5);
      if (param_1[4] != 0) {
        puVar6 = (undefined8 *)(param_1[4] + 0x10);
        *puVar6 = uVar5;
        native_sub_4326e0(puVar6,uVar5);
        if (param_1[6] != 0) {
          puVar6 = (undefined8 *)(param_1[6] + 0x10);
          *puVar6 = uVar5;
          native_sub_4326e0(puVar6,uVar5);
          if (param_1[5] != 0) {
            puVar6 = (undefined8 *)(param_1[5] + 0x10);
            *puVar6 = uVar5;
            native_sub_4326e0(puVar6,uVar5);
            if (param_1[3] != 0) {
              *(undefined4 *)(param_1[3] + 0x18) = 0;
              if (param_1[4] != 0) {
                *(undefined4 *)(param_1[4] + 0x18) = 0;
                if (param_1[5] != 0) {
                  *(undefined4 *)(param_1[5] + 0x18) = 0x3f800000;
                  if (param_1[6] != 0) {
                    *(undefined4 *)(param_1[6] + 0x18) = 0x3f800000;
                    if (param_1[3] != 0) {
                      *(int *)(param_1[3] + 0x1c) = param_2;
                      if (param_1[4] != 0) {
                        *(int *)(param_1[4] + 0x1c) = param_4 + param_2;
                        if (param_1[5] != 0) {
                          *(int *)(param_1[5] + 0x1c) = -param_3 - param_5;
                          if (param_1[6] != 0) {
                            *(int *)(param_1[6] + 0x1c) = -param_3;
                            native_UIRect__ResetAnchors_c2d260(param_1);
                            uVar3 = native_UIRect__get_isAnchored_c2d8cc();
                            if ((uVar3 & 1) == 0) {
                              return;
                            }
                            *(undefined4 *)((long)param_1 + 0x5c) = 0xffffffff;
                            *(undefined1 *)((long)param_1 + 0x5a) = 1;
                            iVar2 = native_UnityEngine_Time__get_frameCount_770964(0);
                            if ((bRam0000000001342713 & 1) == 0) {
                              native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
                              bRam0000000001342713 = 1;
                            }
                            *(int *)((long)param_1 + 0x5c) = iVar2;
                            *(undefined1 *)((long)param_1 + 0x5a) = 0;
                            if (param_1[3] != 0) {
                              uVar5 = *(undefined8 *)(param_1[3] + 0x10);
                              if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1
                                   ) != 0) &&
                                 (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
                                native_sub_4327ec();
                              }
                              uVar3 = native_UnityEngine_Object__op_Implicit_8e1b98(uVar5,0);
                              if ((uVar3 & 1) == 0) {
                                bVar1 = false;
                              }
                              else {
                                if (param_1[3] == 0) goto LAB_00c2ea0c;
                                uVar5 = *(undefined8 *)(param_1[3] + 0x20);
                                if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 &
                                     1) != 0) &&
                                   (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
                                  native_sub_4327ec();
                                }
                                uVar3 = native_UnityEngine_Object__op_Inequality_8d76fc(uVar5,0,0);
                                if ((uVar3 & 1) != 0) {
                                  if ((param_1[3] == 0) ||
                                     (lVar4 = *(long *)(param_1[3] + 0x20), lVar4 == 0))
                                  goto LAB_00c2ea0c;
                                  if (*(int *)(lVar4 + 0x5c) != iVar2) {
                                    native_UIRect__Update_c2e62c();
                                  }
                                }
                                bVar1 = true;
                              }
                              if (param_1[5] != 0) {
                                uVar5 = *(undefined8 *)(param_1[5] + 0x10);
                                if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 &
                                     1) != 0) &&
                                   (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
                                  native_sub_4327ec();
                                }
                                uVar3 = native_UnityEngine_Object__op_Implicit_8e1b98(uVar5,0);
                                if ((uVar3 & 1) != 0) {
                                  if (param_1[5] == 0) goto LAB_00c2ea0c;
                                  uVar5 = *(undefined8 *)(param_1[5] + 0x20);
                                  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2
                                       & 1) != 0) &&
                                     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
                                    native_sub_4327ec();
                                  }
                                  uVar3 = native_UnityEngine_Object__op_Inequality_8d76fc(uVar5,0,0)
                                  ;
                                  if ((uVar3 & 1) != 0) {
                                    if ((param_1[5] == 0) ||
                                       (lVar4 = *(long *)(param_1[5] + 0x20), lVar4 == 0))
                                    goto LAB_00c2ea0c;
                                    if (*(int *)(lVar4 + 0x5c) != iVar2) {
                                      native_UIRect__Update_c2e62c();
                                    }
                                  }
                                  bVar1 = true;
                                }
                                if (param_1[4] != 0) {
                                  uVar5 = *(undefined8 *)(param_1[4] + 0x10);
                                  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2
                                       & 1) != 0) &&
                                     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
                                    native_sub_4327ec();
                                  }
                                  uVar3 = native_UnityEngine_Object__op_Implicit_8e1b98(uVar5,0);
                                  if ((uVar3 & 1) != 0) {
                                    if (param_1[4] == 0) goto LAB_00c2ea0c;
                                    uVar5 = *(undefined8 *)(param_1[4] + 0x20);
                                    if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >>
                                          2 & 1) != 0) &&
                                       (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0))
                                    {
                                      native_sub_4327ec();
                                    }
                                    uVar3 = native_UnityEngine_Object__op_Inequality_8d76fc
                                                      (uVar5,0,0);
                                    if ((uVar3 & 1) != 0) {
                                      if ((param_1[4] == 0) ||
                                         (lVar4 = *(long *)(param_1[4] + 0x20), lVar4 == 0))
                                      goto LAB_00c2ea0c;
                                      if (*(int *)(lVar4 + 0x5c) != iVar2) {
                                        native_UIRect__Update_c2e62c();
                                      }
                                    }
                                    bVar1 = true;
                                  }
                                  if (param_1[6] != 0) {
                                    uVar5 = *(undefined8 *)(param_1[6] + 0x10);
                                    if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >>
                                          2 & 1) != 0) &&
                                       (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0))
                                    {
                                      native_sub_4327ec();
                                    }
                                    uVar3 = native_UnityEngine_Object__op_Implicit_8e1b98(uVar5,0);
                                    if ((uVar3 & 1) == 0) {
                                      if (!bVar1) {
                                        return;
                                      }
                                    }
                                    else {
                                      if (param_1[6] == 0) goto LAB_00c2ea0c;
                                      uVar5 = *(undefined8 *)(param_1[6] + 0x20);
                                      if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133)
                                            >> 2 & 1) != 0) &&
                                         (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0
                                         )) {
                                        native_sub_4327ec();
                                      }
                                      uVar3 = native_UnityEngine_Object__op_Inequality_8d76fc
                                                        (uVar5,0,0);
                                      if ((uVar3 & 1) != 0) {
                                        if ((param_1[6] == 0) ||
                                           (lVar4 = *(long *)(param_1[6] + 0x20), lVar4 == 0))
                                        goto LAB_00c2ea0c;
                                        if (*(int *)(lVar4 + 0x5c) != iVar2) {
                                          native_UIRect__Update_c2e62c();
                                        }
                                      }
                                    }
                    /* WARNING: Could not recover jumptable at 0x00c2e9f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                                    (**(code **)(*param_1 + 600))
                                              (param_1,*(undefined8 *)(*param_1 + 0x260));
                                    return;
                                  }
                                }
                              }
                            }
LAB_00c2ea0c:
                    /* WARNING: Subroutine does not return */
                            native_sub_432810();
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
  }
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* UIRect$$ResetAnchors @ 0xc2d260
 * void UIRect__ResetAnchors (UIRect_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIRect$$ResetAnchors
   void UIRect__ResetAnchors (UIRect_o* __this, const MethodInfo* method); */

void native_UIRect__ResetAnchors_c2d260(long param_1)

{
  undefined4 uVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  
  if ((bRam0000000001342718 & 1) == 0) {
    native_sub_43273c(&Method_UnityEngine_Component_GetComponent_UIRect____12e2bf8);
    native_sub_43273c(&NGUITools_TypeInfo_12d53c8);
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    bRam0000000001342718 = 1;
  }
  lVar4 = *(long *)(param_1 + 0x18);
  *(undefined1 *)(param_1 + 0x60) = 1;
  if (lVar4 != 0) {
    uVar5 = *(undefined8 *)(lVar4 + 0x10);
    if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    uVar2 = native_UnityEngine_Object__op_Implicit_8e1b98(uVar5,0);
    uVar5 = 0;
    if ((uVar2 & 1) != 0) {
      if ((*(long *)(param_1 + 0x18) == 0) ||
         (lVar3 = *(long *)(*(long *)(param_1 + 0x18) + 0x10), lVar3 == 0)) goto LAB_00c2d4ec;
      uVar5 = native_UnityEngine_Component__GetComponent_ActiveAnimation__49daec
                        (lVar3,_Method_UnityEngine_Component_GetComponent_UIRect____12e2bf8);
    }
    *(undefined8 *)(lVar4 + 0x20) = uVar5;
    native_sub_4326e0((undefined8 *)(lVar4 + 0x20));
    lVar4 = *(long *)(param_1 + 0x28);
    if (lVar4 != 0) {
      uVar5 = *(undefined8 *)(lVar4 + 0x10);
      if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
        native_sub_4327ec();
      }
      uVar2 = native_UnityEngine_Object__op_Implicit_8e1b98(uVar5,0);
      uVar5 = 0;
      if ((uVar2 & 1) != 0) {
        if ((*(long *)(param_1 + 0x28) == 0) ||
           (lVar3 = *(long *)(*(long *)(param_1 + 0x28) + 0x10), lVar3 == 0)) goto LAB_00c2d4ec;
        uVar5 = native_UnityEngine_Component__GetComponent_ActiveAnimation__49daec
                          (lVar3,_Method_UnityEngine_Component_GetComponent_UIRect____12e2bf8);
      }
      *(undefined8 *)(lVar4 + 0x20) = uVar5;
      native_sub_4326e0((undefined8 *)(lVar4 + 0x20));
      lVar4 = *(long *)(param_1 + 0x20);
      if (lVar4 != 0) {
        uVar5 = *(undefined8 *)(lVar4 + 0x10);
        if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
           (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
          native_sub_4327ec();
        }
        uVar2 = native_UnityEngine_Object__op_Implicit_8e1b98(uVar5,0);
        uVar5 = 0;
        if ((uVar2 & 1) != 0) {
          if ((*(long *)(param_1 + 0x20) == 0) ||
             (lVar3 = *(long *)(*(long *)(param_1 + 0x20) + 0x10), lVar3 == 0)) goto LAB_00c2d4ec;
          uVar5 = native_UnityEngine_Component__GetComponent_ActiveAnimation__49daec
                            (lVar3,_Method_UnityEngine_Component_GetComponent_UIRect____12e2bf8);
        }
        *(undefined8 *)(lVar4 + 0x20) = uVar5;
        native_sub_4326e0((undefined8 *)(lVar4 + 0x20));
        lVar4 = *(long *)(param_1 + 0x30);
        if (lVar4 != 0) {
          uVar5 = *(undefined8 *)(lVar4 + 0x10);
          if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
             (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
            native_sub_4327ec();
          }
          uVar2 = native_UnityEngine_Object__op_Implicit_8e1b98(uVar5,0);
          uVar5 = 0;
          if ((uVar2 & 1) != 0) {
            if ((*(long *)(param_1 + 0x30) == 0) ||
               (lVar3 = *(long *)(*(long *)(param_1 + 0x30) + 0x10), lVar3 == 0)) goto LAB_00c2d4ec;
            uVar5 = native_UnityEngine_Component__GetComponent_ActiveAnimation__49daec
                              (lVar3,_Method_UnityEngine_Component_GetComponent_UIRect____12e2bf8);
          }
          *(undefined8 *)(lVar4 + 0x20) = uVar5;
          native_sub_4326e0((undefined8 *)(lVar4 + 0x20));
          lVar4 = native_UIRect__get_cachedGameObject_c2d1c0(param_1);
          if (lVar4 != 0) {
            uVar1 = native_UnityEngine_GameObject__get_layer_8de608(lVar4,0);
            if (((*(byte *)(_NGUITools_TypeInfo_12d53c8 + 0x133) >> 2 & 1) != 0) &&
               (*(int *)(_NGUITools_TypeInfo_12d53c8 + 0xe0) == 0)) {
              native_sub_4327ec(_NGUITools_TypeInfo_12d53c8);
            }
            uVar5 = native_NGUITools__FindCameraForLayer_72d2e8(uVar1,0);
            *(undefined8 *)(param_1 + 0x80) = uVar5;
            uVar5 = native_sub_4326e0((undefined8 *)(param_1 + 0x80),uVar5);
            uVar5 = native_UIRect__FindCameraFor_c2e200(uVar5,*(undefined8 *)(param_1 + 0x18));
            uVar5 = native_UIRect__FindCameraFor_c2e200(uVar5,*(undefined8 *)(param_1 + 0x28));
            uVar5 = native_UIRect__FindCameraFor_c2e200(uVar5,*(undefined8 *)(param_1 + 0x20));
            native_UIRect__FindCameraFor_c2e200(uVar5,*(undefined8 *)(param_1 + 0x30));
            *(undefined1 *)(param_1 + 0x5a) = 1;
            return;
          }
        }
      }
    }
  }
LAB_00c2d4ec:
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* UIRect$$ResetAndUpdateAnchors @ 0xc2e718
 * void UIRect__ResetAndUpdateAnchors (UIRect_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIRect$$ResetAndUpdateAnchors
   void UIRect__ResetAndUpdateAnchors (UIRect_o* __this, const MethodInfo* method); */

void native_UIRect__ResetAndUpdateAnchors_c2e718(long *param_1)

{
  bool bVar1;
  int iVar2;
  long lVar3;
  ulong uVar4;
  undefined8 uVar5;
  
  native_UIRect__ResetAnchors_c2d260();
  uVar4 = native_UIRect__get_isAnchored_c2d8cc();
  if ((uVar4 & 1) == 0) {
    return;
  }
  *(undefined4 *)((long)param_1 + 0x5c) = 0xffffffff;
  *(undefined1 *)((long)param_1 + 0x5a) = 1;
  iVar2 = native_UnityEngine_Time__get_frameCount_770964(0);
  if ((bRam0000000001342713 & 1) == 0) {
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    bRam0000000001342713 = 1;
  }
  *(int *)((long)param_1 + 0x5c) = iVar2;
  *(undefined1 *)((long)param_1 + 0x5a) = 0;
  if (param_1[3] != 0) {
    uVar5 = *(undefined8 *)(param_1[3] + 0x10);
    if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    uVar4 = native_UnityEngine_Object__op_Implicit_8e1b98(uVar5,0);
    if ((uVar4 & 1) == 0) {
      bVar1 = false;
    }
    else {
      if (param_1[3] == 0) goto LAB_00c2ea0c;
      uVar5 = *(undefined8 *)(param_1[3] + 0x20);
      if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
        native_sub_4327ec();
      }
      uVar4 = native_UnityEngine_Object__op_Inequality_8d76fc(uVar5,0,0);
      if ((uVar4 & 1) != 0) {
        if ((param_1[3] == 0) || (lVar3 = *(long *)(param_1[3] + 0x20), lVar3 == 0))
        goto LAB_00c2ea0c;
        if (*(int *)(lVar3 + 0x5c) != iVar2) {
          native_UIRect__Update_c2e62c();
        }
      }
      bVar1 = true;
    }
    if (param_1[5] != 0) {
      uVar5 = *(undefined8 *)(param_1[5] + 0x10);
      if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
        native_sub_4327ec();
      }
      uVar4 = native_UnityEngine_Object__op_Implicit_8e1b98(uVar5,0);
      if ((uVar4 & 1) != 0) {
        if (param_1[5] == 0) goto LAB_00c2ea0c;
        uVar5 = *(undefined8 *)(param_1[5] + 0x20);
        if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
           (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
          native_sub_4327ec();
        }
        uVar4 = native_UnityEngine_Object__op_Inequality_8d76fc(uVar5,0,0);
        if ((uVar4 & 1) != 0) {
          if ((param_1[5] == 0) || (lVar3 = *(long *)(param_1[5] + 0x20), lVar3 == 0))
          goto LAB_00c2ea0c;
          if (*(int *)(lVar3 + 0x5c) != iVar2) {
            native_UIRect__Update_c2e62c();
          }
        }
        bVar1 = true;
      }
      if (param_1[4] != 0) {
        uVar5 = *(undefined8 *)(param_1[4] + 0x10);
        if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
           (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
          native_sub_4327ec();
        }
        uVar4 = native_UnityEngine_Object__op_Implicit_8e1b98(uVar5,0);
        if ((uVar4 & 1) != 0) {
          if (param_1[4] == 0) goto LAB_00c2ea0c;
          uVar5 = *(undefined8 *)(param_1[4] + 0x20);
          if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
             (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
            native_sub_4327ec();
          }
          uVar4 = native_UnityEngine_Object__op_Inequality_8d76fc(uVar5,0,0);
          if ((uVar4 & 1) != 0) {
            if ((param_1[4] == 0) || (lVar3 = *(long *)(param_1[4] + 0x20), lVar3 == 0))
            goto LAB_00c2ea0c;
            if (*(int *)(lVar3 + 0x5c) != iVar2) {
              native_UIRect__Update_c2e62c();
            }
          }
          bVar1 = true;
        }
        if (param_1[6] != 0) {
          uVar5 = *(undefined8 *)(param_1[6] + 0x10);
          if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
             (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
            native_sub_4327ec();
          }
          uVar4 = native_UnityEngine_Object__op_Implicit_8e1b98(uVar5,0);
          if ((uVar4 & 1) == 0) {
            if (!bVar1) {
              return;
            }
          }
          else {
            if (param_1[6] == 0) goto LAB_00c2ea0c;
            uVar5 = *(undefined8 *)(param_1[6] + 0x20);
            if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
               (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
              native_sub_4327ec();
            }
            uVar4 = native_UnityEngine_Object__op_Inequality_8d76fc(uVar5,0,0);
            if ((uVar4 & 1) != 0) {
              if ((param_1[6] == 0) || (lVar3 = *(long *)(param_1[6] + 0x20), lVar3 == 0))
              goto LAB_00c2ea0c;
              if (*(int *)(lVar3 + 0x5c) != iVar2) {
                native_UIRect__Update_c2e62c();
              }
            }
          }
                    /* WARNING: Could not recover jumptable at 0x00c2e9f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(*param_1 + 600))(param_1,*(undefined8 *)(*param_1 + 0x260));
          return;
        }
      }
    }
  }
LAB_00c2ea0c:
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* UIRect$$FindCameraFor @ 0xc2e200
 * void UIRect__FindCameraFor (UIRect_o* __this, UIRect_AnchorPoint_o* ap, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIRect$$FindCameraFor
   void UIRect__FindCameraFor (UIRect_o* __this, UIRect_AnchorPoint_o* ap, const MethodInfo*
   method); */

void native_UIRect__FindCameraFor_c2e200(undefined8 param_1,long param_2)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  undefined4 uVar4;
  ulong uVar5;
  long lVar6;
  undefined8 uVar7;
  
  if ((bRam0000000001342719 & 1) == 0) {
    native_sub_43273c(&NGUITools_TypeInfo_12d53c8);
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    bRam0000000001342719 = 1;
  }
  if (param_2 == 0) {
LAB_00c2e328:
                    /* WARNING: Subroutine does not return */
    native_sub_432810();
  }
  uVar7 = *(undefined8 *)(param_2 + 0x10);
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar5 = native_UnityEngine_Object__op_Equality_8e9a3c(uVar7,0,0);
  if ((uVar5 & 1) == 0) {
    uVar7 = *(undefined8 *)(param_2 + 0x20);
    if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    uVar5 = native_UnityEngine_Object__op_Inequality_8d76fc(uVar7,0,0);
    if ((uVar5 & 1) == 0) {
      if ((*(long *)(param_2 + 0x10) == 0) ||
         (lVar6 = native_UnityEngine_Component__get_gameObject_8da66c(*(long *)(param_2 + 0x10),0),
         lVar6 == 0)) goto LAB_00c2e328;
      uVar4 = native_UnityEngine_GameObject__get_layer_8de608(lVar6,0);
      if (((*(byte *)(_NGUITools_TypeInfo_12d53c8 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_NGUITools_TypeInfo_12d53c8 + 0xe0) == 0)) {
        native_sub_4327ec(_NGUITools_TypeInfo_12d53c8);
      }
      uVar7 = native_NGUITools__FindCameraForLayer_72d2e8(uVar4,0);
      *(undefined8 *)(param_2 + 0x28) = uVar7;
      goto native_sub_41086c;
    }
  }
  *(undefined8 *)(param_2 + 0x28) = 0;
native_sub_41086c:
  if (iRam0000000001345318 != 0) {
    puVar1 = (ulong *)((param_2 + 0x28U >> 0x12 & 0x7fff) * 8 + 0x138ecd8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar3) {
        *puVar1 = *puVar1 | 1L << (param_2 + 0x28U >> 0xc & 0x3f);
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  return;
}



/* UIRect$$ParentHasChanged @ 0xc2f1ac
 * void UIRect__ParentHasChanged (UIRect_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIRect$$ParentHasChanged
   void UIRect__ParentHasChanged (UIRect_o* __this, const MethodInfo* method); */

void native_UIRect__ParentHasChanged_c2f1ac(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  ulong uVar3;
  long *plVar4;
  long lVar5;
  
  if ((bRam000000000134271a & 1) == 0) {
    native_sub_43273c(&Method_BetterList_UIRect__Add___12d8a08);
    native_sub_43273c(&Method_BetterList_UIRect__Remove___12d8a10);
    native_sub_43273c(&Method_NGUITools_FindInParents_UIRect____12e5778);
    native_sub_43273c(&NGUITools_TypeInfo_12d53c8);
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    bRam000000000134271a = 1;
  }
  *(undefined1 *)(param_1 + 0x59) = 0;
  lVar1 = native_UIRect__get_cachedTransform_c27c58(param_1);
  if (lVar1 != 0) {
    uVar2 = native_UnityEngine_Transform__get_parent_765eb0(lVar1,0);
    if (((*(byte *)(_NGUITools_TypeInfo_12d53c8 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_NGUITools_TypeInfo_12d53c8 + 0xe0) == 0)) {
      native_sub_4327ec(_NGUITools_TypeInfo_12d53c8);
    }
    lVar1 = native_NGUITools__FindInParents_object__4a5cac
                      (uVar2,_Method_NGUITools_FindInParents_UIRect____12e5778);
    plVar4 = (long *)(param_1 + 0x70);
    lVar5 = *plVar4;
    if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
      native_sub_4327ec(_UnityEngine_Object_TypeInfo_12d54e0);
    }
    uVar3 = native_UnityEngine_Object__op_Inequality_8d76fc(lVar5,lVar1,0);
    if ((uVar3 & 1) != 0) {
      lVar5 = *plVar4;
      if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
        native_sub_4327ec();
      }
      uVar3 = native_UnityEngine_Object__op_Implicit_8e1b98(lVar5,0);
      if ((uVar3 & 1) != 0) {
        if ((*plVar4 == 0) || (lVar5 = *(long *)(*plVar4 + 0x50), lVar5 == 0)) goto LAB_00c2f374;
        native_BetterList_object___Remove_ba2804
                  (lVar5,param_1,_Method_BetterList_UIRect__Remove___12d8a10);
      }
      *plVar4 = lVar1;
      native_sub_4326e0(plVar4,lVar1);
      lVar1 = *plVar4;
      if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
        native_sub_4327ec();
      }
      uVar3 = native_UnityEngine_Object__op_Implicit_8e1b98(lVar1,0);
      if ((uVar3 & 1) != 0) {
        if ((*plVar4 == 0) || (lVar1 = *(long *)(*plVar4 + 0x50), lVar1 == 0)) goto LAB_00c2f374;
        native_BetterList_object___Add_ba24d8
                  (lVar1,param_1,_Method_BetterList_UIRect__Add___12d8a08);
      }
      *(undefined1 *)(param_1 + 0x78) = 0;
    }
    return;
  }
LAB_00c2f374:
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* UIRect$$OnUpdate @ 0xc2f378
 * void UIRect__OnUpdate (UIRect_o* __this, const MethodInfo* method); */

/* UIRect$$OnUpdate
   void UIRect__OnUpdate (UIRect_o* __this, const MethodInfo* method); */

void native_UIRect__OnUpdate_c2f378(void)

{
  return;
}



/* UIRect$$.ctor @ 0xc2f37c
 * void UIRect___ctor (UIRect_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIRect$$.ctor
   void UIRect___ctor (UIRect_o* __this, const MethodInfo* method); */

undefined1  [16] native_UIRect___ctor_c2f37c(ulong param_1)

{
  undefined8 uVar1;
  undefined1 auVar2 [16];
  
  if ((bRam000000000134271b & 1) == 0) {
    native_sub_43273c(&UIRect_AnchorPoint_TypeInfo_12d7a90);
    native_sub_43273c(&Method_BetterList_UIRect___ctor___12d8a00);
    native_sub_43273c(&BetterList_UIRect__TypeInfo_12d2148);
    bRam000000000134271b = 1;
  }
  uVar1 = native_sub_432808(_UIRect_AnchorPoint_TypeInfo_12d7a90);
  native_UIRect_AnchorPoint___ctor_558f24(uVar1,0);
  *(undefined8 *)(param_1 + 0x18) = uVar1;
  native_sub_4326e0((undefined8 *)(param_1 + 0x18),uVar1);
  uVar1 = native_sub_432808(_UIRect_AnchorPoint_TypeInfo_12d7a90);
  native_UIRect_AnchorPoint___ctor_558f2c(0x3f800000,uVar1,0);
  *(undefined8 *)(param_1 + 0x20) = uVar1;
  native_sub_4326e0(param_1 + 0x20,uVar1);
  uVar1 = native_sub_432808(_UIRect_AnchorPoint_TypeInfo_12d7a90);
  native_UIRect_AnchorPoint___ctor_558f24(uVar1,0);
  *(undefined8 *)(param_1 + 0x28) = uVar1;
  native_sub_4326e0(param_1 + 0x28,uVar1);
  uVar1 = native_sub_432808(_UIRect_AnchorPoint_TypeInfo_12d7a90);
  native_UIRect_AnchorPoint___ctor_558f2c(0x3f800000,uVar1,0);
  *(undefined8 *)(param_1 + 0x30) = uVar1;
  native_sub_4326e0(param_1 + 0x30,uVar1);
  *(undefined4 *)(param_1 + 0x38) = 1;
  uVar1 = native_sub_432808(_BetterList_UIRect__TypeInfo_12d2148);
  native_BetterList_object____ctor_ba2d1c(uVar1,_Method_BetterList_UIRect___ctor___12d8a00);
  *(undefined8 *)(param_1 + 0x50) = uVar1;
  native_sub_4326e0(param_1 + 0x50,uVar1);
  *(undefined1 *)(param_1 + 0x58) = 1;
  *(undefined1 *)(param_1 + 0x5a) = 1;
  *(undefined4 *)(param_1 + 0x5c) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x8c) = 0x3f800000;
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



/* UIRect$$.cctor @ 0xc2f4e0
 * void UIRect___cctor (const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIRect$$.cctor
   void UIRect___cctor (const MethodInfo* method); */

void native_UIRect___cctor_c2f4e0(void)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  
  if ((bRam000000000134271c & 1) == 0) {
    native_sub_43273c(&UIRect_TypeInfo_12d64a0);
    native_sub_43273c(&UnityEngine_Vector3___TypeInfo_12d3478);
    bRam000000000134271c = 1;
  }
  uVar4 = native_sub_432750(_UnityEngine_Vector3___TypeInfo_12d3478,4);
  puVar5 = *(undefined8 **)(_UIRect_TypeInfo_12d64a0 + 0xb8);
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


