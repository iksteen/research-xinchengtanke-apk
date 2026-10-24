/* ARM64 IL2CPP native pseudocode from Ghidra.
 * Recovered implementation, not original C# source.
 * Function boundaries follow the IL2CPP method address table. */


/* UIRect.AnchorPoint$$.ctor @ 0x558f24
 * void UIRect_AnchorPoint___ctor (UIRect_AnchorPoint_o* __this, const MethodInfo* method); */

/* UIRect.AnchorPoint$$.ctor
   void UIRect_AnchorPoint___ctor (UIRect_AnchorPoint_o* __this, const MethodInfo* method); */

void native_UIRect_AnchorPoint___ctor_558f24(void)

{
  return;
}



/* UIRect.AnchorPoint$$.ctor @ 0x558f2c
 * void UIRect_AnchorPoint___ctor (UIRect_AnchorPoint_o* __this, float relative, const MethodInfo* method); */

/* UIRect.AnchorPoint$$.ctor
   void UIRect_AnchorPoint___ctor (UIRect_AnchorPoint_o* __this, float relative, const MethodInfo*
   method); */

void native_UIRect_AnchorPoint___ctor_558f2c(undefined4 param_1,long param_2)

{
  native_System_Object___ctor_ad2798(param_2,0);
  *(undefined4 *)(param_2 + 0x18) = param_1;
  return;
}



/* UIRect.AnchorPoint$$Set @ 0x558f60
 * void UIRect_AnchorPoint__Set (UIRect_AnchorPoint_o* __this, float relative, float absolute, const MethodInfo* method); */

/* UIRect.AnchorPoint$$Set
   void UIRect_AnchorPoint__Set (UIRect_AnchorPoint_o* __this, float relative, float absolute, const
   MethodInfo* method); */

void native_UIRect_AnchorPoint__Set_558f60(undefined4 param_1,float param_2,long param_3)

{
  undefined4 uVar1;
  
  *(undefined4 *)(param_3 + 0x18) = param_1;
  uVar1 = native_UnityEngine_Mathf__FloorToInt_8e506c(param_2 + 0.5,0);
  *(undefined4 *)(param_3 + 0x1c) = uVar1;
  return;
}



/* UIRect.AnchorPoint$$Set @ 0x558f94
 * void UIRect_AnchorPoint__Set (UIRect_AnchorPoint_o* __this, UnityEngine_Transform_o* target, float relative, float absolute, const MethodInfo* method); */

/* UIRect.AnchorPoint$$Set
   void UIRect_AnchorPoint__Set (UIRect_AnchorPoint_o* __this, UnityEngine_Transform_o* target,
   float relative, float absolute, const MethodInfo* method); */

void native_UIRect_AnchorPoint__Set_558f94
               (undefined4 param_1,float param_2,long param_3,undefined8 param_4)

{
  undefined4 uVar1;
  
  *(undefined8 *)(param_3 + 0x10) = param_4;
  native_sub_4326e0((undefined8 *)(param_3 + 0x10));
  *(undefined4 *)(param_3 + 0x18) = param_1;
  uVar1 = native_UnityEngine_Mathf__FloorToInt_8e506c(param_2 + 0.5,0);
  *(undefined4 *)(param_3 + 0x1c) = uVar1;
  return;
}



/* UIRect.AnchorPoint$$SetToNearest @ 0x558fe4
 * void UIRect_AnchorPoint__SetToNearest (UIRect_AnchorPoint_o* __this, float abs0, float abs1, float abs2, const MethodInfo* method); */

/* UIRect.AnchorPoint$$SetToNearest
   void UIRect_AnchorPoint__SetToNearest (UIRect_AnchorPoint_o* __this, float abs0, float abs1,
   float abs2, const MethodInfo* method); */

void native_UIRect_AnchorPoint__SetToNearest_558fe4
               (float param_1,float param_2,float param_3,long param_4)

{
  undefined4 uVar1;
  float fVar2;
  float fVar3;
  
  fVar3 = ABS(param_1);
  fVar2 = ABS(param_2);
  if ((fVar2 <= fVar3) || (ABS(param_3) <= fVar3)) {
    if ((fVar3 <= fVar2) || (ABS(param_3) <= fVar2)) {
      *(undefined4 *)(param_4 + 0x18) = 0x3f800000;
    }
    else {
      *(undefined4 *)(param_4 + 0x18) = 0x3f000000;
      param_3 = param_2;
    }
  }
  else {
    *(undefined4 *)(param_4 + 0x18) = 0;
    param_3 = param_1;
  }
  uVar1 = native_UnityEngine_Mathf__FloorToInt_8e506c(param_3 + 0.5,0);
  *(undefined4 *)(param_4 + 0x1c) = uVar1;
  return;
}



/* UIRect.AnchorPoint$$SetToNearest @ 0x559000
 * void UIRect_AnchorPoint__SetToNearest (UIRect_AnchorPoint_o* __this, float rel0, float rel1, float rel2, float abs0, float abs1, float abs2, const MethodInfo* method); */

/* UIRect.AnchorPoint$$SetToNearest
   void UIRect_AnchorPoint__SetToNearest (UIRect_AnchorPoint_o* __this, float rel0, float rel1,
   float rel2, float abs0, float abs1, float abs2, const MethodInfo* method); */

void native_UIRect_AnchorPoint__SetToNearest_559000
               (undefined4 param_1,undefined4 param_2,undefined4 param_3,float param_4,float param_5
               ,float param_6,long param_7)

{
  undefined4 uVar1;
  float fVar2;
  float fVar3;
  
  fVar3 = ABS(param_4);
  fVar2 = ABS(param_5);
  if ((fVar2 <= fVar3) || (ABS(param_6) <= fVar3)) {
    if ((fVar3 <= fVar2) || (ABS(param_6) <= fVar2)) {
      *(undefined4 *)(param_7 + 0x18) = param_3;
    }
    else {
      *(undefined4 *)(param_7 + 0x18) = param_2;
      param_6 = param_5;
    }
  }
  else {
    *(undefined4 *)(param_7 + 0x18) = param_1;
    param_6 = param_4;
  }
  uVar1 = native_UnityEngine_Mathf__FloorToInt_8e506c(param_6 + 0.5,0);
  *(undefined4 *)(param_7 + 0x1c) = uVar1;
  return;
}



/* UIRect.AnchorPoint$$SetHorizontal @ 0x559078
 * void UIRect_AnchorPoint__SetHorizontal (UIRect_AnchorPoint_o* __this, UnityEngine_Transform_o* parent, float localPos, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIRect.AnchorPoint$$SetHorizontal
   void UIRect_AnchorPoint__SetHorizontal (UIRect_AnchorPoint_o* __this, UnityEngine_Transform_o*
   parent, float localPos, const MethodInfo* method); */

void native_UIRect_AnchorPoint__SetHorizontal_559078
               (float param_1,undefined8 param_2,undefined8 param_3,long param_4,long param_5)

{
  undefined4 uVar1;
  ulong uVar2;
  long *plVar3;
  long lVar4;
  undefined8 uVar5;
  
  if ((bRam000000000133ea03 & 1) == 0) {
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    bRam000000000133ea03 = 1;
  }
  uVar5 = *(undefined8 *)(param_4 + 0x20);
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar2 = native_UnityEngine_Object__op_Implicit_8e1b98(uVar5,0);
  if ((uVar2 & 1) == 0) {
    if (*(long *)(param_4 + 0x10) != 0) {
      uVar5 = native_UnityEngine_Transform__get_position_77169c(*(long *)(param_4 + 0x10),0);
      if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
        native_sub_4327ec();
      }
      uVar2 = native_UnityEngine_Object__op_Inequality_8d76fc(param_5,0,0);
      if ((uVar2 & 1) != 0) {
        if (param_5 == 0) goto LAB_005591d0;
        uVar5 = native_UnityEngine_Transform__InverseTransformPoint_7729a0
                          (uVar5,param_2,param_3,param_5,0);
      }
LAB_005591a0:
      uVar1 = native_UnityEngine_Mathf__FloorToInt_8e506c((param_1 - (float)uVar5) + 0.5,0);
      *(undefined4 *)(param_4 + 0x1c) = uVar1;
      return;
    }
  }
  else {
    plVar3 = *(long **)(param_4 + 0x20);
    if ((plVar3 != (long *)0x0) &&
       (lVar4 = (**(code **)(*plVar3 + 0x208))(plVar3,param_5,*(undefined8 *)(*plVar3 + 0x210)),
       lVar4 != 0)) {
      if ((*(uint *)(lVar4 + 0x18) == 0) || (*(uint *)(lVar4 + 0x18) < 3)) {
        uVar5 = native_sub_43283c();
                    /* WARNING: Subroutine does not return */
        native_sub_4327dc(uVar5,0);
      }
      uVar5 = native_UnityEngine_Mathf__Lerp_8e5224
                        (*(undefined4 *)(lVar4 + 0x20),*(undefined4 *)(lVar4 + 0x38),
                         *(undefined4 *)(param_4 + 0x18),0);
      goto LAB_005591a0;
    }
  }
LAB_005591d0:
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* UIRect.AnchorPoint$$SetVertical @ 0x5591e0
 * void UIRect_AnchorPoint__SetVertical (UIRect_AnchorPoint_o* __this, UnityEngine_Transform_o* parent, float localPos, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIRect.AnchorPoint$$SetVertical
   void UIRect_AnchorPoint__SetVertical (UIRect_AnchorPoint_o* __this, UnityEngine_Transform_o*
   parent, float localPos, const MethodInfo* method); */

void native_UIRect_AnchorPoint__SetVertical_5591e0
               (float param_1,undefined8 param_2,undefined8 param_3,long param_4,long param_5)

{
  undefined4 uVar1;
  ulong uVar2;
  long *plVar3;
  long lVar4;
  undefined8 uVar5;
  
  if ((bRam000000000133ea04 & 1) == 0) {
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    bRam000000000133ea04 = 1;
  }
  uVar5 = *(undefined8 *)(param_4 + 0x20);
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar2 = native_UnityEngine_Object__op_Implicit_8e1b98(uVar5,0);
  if ((uVar2 & 1) == 0) {
    if (*(long *)(param_4 + 0x10) != 0) {
      uVar5 = native_UnityEngine_Transform__get_position_77169c(*(long *)(param_4 + 0x10),0);
      if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
        native_sub_4327ec();
      }
      uVar2 = native_UnityEngine_Object__op_Inequality_8d76fc(param_5,0,0);
      if ((uVar2 & 1) != 0) {
        if (param_5 == 0) goto LAB_00559338;
        native_UnityEngine_Transform__InverseTransformPoint_7729a0(uVar5,param_2,param_3,param_5,0);
      }
LAB_00559308:
      uVar1 = native_UnityEngine_Mathf__FloorToInt_8e506c((param_1 - (float)param_2) + 0.5,0);
      *(undefined4 *)(param_4 + 0x1c) = uVar1;
      return;
    }
  }
  else {
    plVar3 = *(long **)(param_4 + 0x20);
    if (plVar3 != (long *)0x0) {
      lVar4 = (**(code **)(*plVar3 + 0x208))(plVar3,param_5,*(undefined8 *)(*plVar3 + 0x210));
      if (lVar4 != 0) {
        if (*(uint *)(lVar4 + 0x18) < 4) {
          uVar5 = native_sub_43283c();
                    /* WARNING: Subroutine does not return */
          native_sub_4327dc(uVar5,0);
        }
        param_2 = native_UnityEngine_Mathf__Lerp_8e5224
                            (*(undefined4 *)(lVar4 + 0x48),*(undefined4 *)(lVar4 + 0x30),
                             *(undefined4 *)(param_4 + 0x18),0);
        goto LAB_00559308;
      }
    }
  }
LAB_00559338:
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* UIRect.AnchorPoint$$GetSides @ 0x559348
 * UnityEngine_Vector3_array* UIRect_AnchorPoint__GetSides (UIRect_AnchorPoint_o* __this, UnityEngine_Transform_o* relativeTo, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIRect.AnchorPoint$$GetSides
   UnityEngine_Vector3_array* UIRect_AnchorPoint__GetSides (UIRect_AnchorPoint_o* __this,
   UnityEngine_Transform_o* relativeTo, const MethodInfo* method); */

undefined8 native_UIRect_AnchorPoint__GetSides_559348(long param_1,long param_2)

{
  long lVar1;
  int iVar2;
  int iVar3;
  ulong uVar4;
  long *plVar5;
  long lVar6;
  ulong uVar7;
  undefined8 uVar8;
  long lVar9;
  float fVar10;
  undefined4 uVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined4 in_s3;
  float fVar21;
  float fVar22;
  float fVar23;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  
  if ((bRam000000000133ea05 & 1) == 0) {
    native_sub_43273c(&Method_UnityEngine_Component_GetComponent_Camera____12e29a8);
    native_sub_43273c(&NGUITools_TypeInfo_12d53c8);
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    bRam000000000133ea05 = 1;
  }
  uVar8 = *(undefined8 *)(param_1 + 0x10);
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar4 = native_UnityEngine_Object__op_Inequality_8d76fc(uVar8,0,0);
  if ((uVar4 & 1) == 0) {
    return 0;
  }
  uVar8 = *(undefined8 *)(param_1 + 0x20);
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar4 = native_UnityEngine_Object__op_Inequality_8d76fc(uVar8,0,0);
  if ((uVar4 & 1) == 0) {
    if (*(long *)(param_1 + 0x10) != 0) {
      lVar6 = native_UnityEngine_Component__GetComponent_ActiveAnimation__49daec
                        (*(long *)(param_1 + 0x10),
                         _Method_UnityEngine_Component_GetComponent_Camera____12e29a8);
      if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
        native_sub_4327ec(_UnityEngine_Object_TypeInfo_12d54e0);
      }
      uVar4 = native_UnityEngine_Object__op_Inequality_8d76fc(lVar6,0,0);
      if ((uVar4 & 1) == 0) {
        return 0;
      }
      if (((*(byte *)(_NGUITools_TypeInfo_12d53c8 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_NGUITools_TypeInfo_12d53c8 + 0xe0) == 0)) {
        native_sub_4327ec();
      }
      if ((bRam000000000133f5c8 & 1) == 0) {
        native_sub_43273c(&NGUITools_TypeInfo_12d53c8,param_2,0);
        bRam000000000133f5c8 = 1;
      }
      if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
        native_sub_432810();
      }
      uVar8 = native_UnityEngine_Camera__get_nearClipPlane_8d8480(lVar6,0);
      fVar15 = (float)native_UnityEngine_Camera__get_farClipPlane_8d8510(lVar6,0);
      uVar20 = 0x3f000000;
      fVar16 = (float)native_UnityEngine_Mathf__Lerp_8e5224(uVar8,0);
      if (((*(byte *)(_NGUITools_TypeInfo_12d53c8 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_NGUITools_TypeInfo_12d53c8 + 0xe0) == 0)) {
        native_sub_4327ec();
      }
      if ((bRam000000000133f5c9 & 1) == 0) {
        native_sub_43273c(&NGUITools_TypeInfo_12d53c8);
        native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
        bRam000000000133f5c9 = 1;
      }
      uStack_a0 = 0;
      uStack_98 = 0;
      if (lVar6 != 0) {
        uVar4 = native_UnityEngine_Camera__get_orthographic_8d86c0(lVar6,0);
        if ((uVar4 & 1) == 0) {
          if (((*(byte *)(_NGUITools_TypeInfo_12d53c8 + 0x133) >> 2 & 1) != 0) &&
             (*(int *)(_NGUITools_TypeInfo_12d53c8 + 0xe0) == 0)) {
            native_sub_4327ec();
          }
          uVar17 = 0x3f000000;
          lVar9 = *(long *)(*(long *)(_NGUITools_TypeInfo_12d53c8 + 0xb8) + 0x38);
          fVar15 = fVar16;
          uVar11 = native_UnityEngine_Camera__ViewportToWorldPoint_8d9168(0,lVar6,0);
          if (lVar9 != 0) {
            if (*(int *)(lVar9 + 0x18) != 0) {
              *(undefined4 *)(lVar9 + 0x20) = uVar11;
              *(undefined4 *)(lVar9 + 0x24) = uVar17;
              *(float *)(lVar9 + 0x28) = fVar15;
              uVar17 = 0x3f800000;
              lVar9 = *(long *)(*(long *)(_NGUITools_TypeInfo_12d53c8 + 0xb8) + 0x38);
              fVar15 = fVar16;
              uVar11 = native_UnityEngine_Camera__ViewportToWorldPoint_8d9168(0x3f000000,lVar6,0);
              if (lVar9 == 0) goto LAB_00733764;
              if (1 < *(uint *)(lVar9 + 0x18)) {
                *(undefined4 *)(lVar9 + 0x2c) = uVar11;
                *(undefined4 *)(lVar9 + 0x30) = uVar17;
                *(float *)(lVar9 + 0x34) = fVar15;
                uVar17 = 0x3f000000;
                lVar9 = *(long *)(*(long *)(_NGUITools_TypeInfo_12d53c8 + 0xb8) + 0x38);
                fVar15 = fVar16;
                uVar11 = native_UnityEngine_Camera__ViewportToWorldPoint_8d9168(0x3f800000,lVar6,0);
                if (lVar9 == 0) goto LAB_00733764;
                if (2 < *(uint *)(lVar9 + 0x18)) {
                  *(undefined4 *)(lVar9 + 0x38) = uVar11;
                  *(undefined4 *)(lVar9 + 0x3c) = uVar17;
                  *(float *)(lVar9 + 0x40) = fVar15;
                  fVar22 = 0.0;
                  lVar9 = *(long *)(*(long *)(_NGUITools_TypeInfo_12d53c8 + 0xb8) + 0x38);
                  fVar14 = (float)native_UnityEngine_Camera__ViewportToWorldPoint_8d9168
                                            (0x3f000000,lVar6,0);
                  if (lVar9 == 0) goto LAB_00733764;
                  if (3 < *(uint *)(lVar9 + 0x18)) {
LAB_00733648:
                    *(float *)(lVar9 + 0x44) = fVar14;
                    *(float *)(lVar9 + 0x48) = fVar22;
                    *(float *)(lVar9 + 0x4c) = fVar16;
                    if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
                       (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
                      native_sub_4327ec();
                    }
                    uVar4 = native_UnityEngine_Object__op_Inequality_8d76fc(param_2,0,0);
                    if ((uVar4 & 1) != 0) {
                      lVar6 = 0;
                      uVar4 = 0xffffffffffffffff;
                      do {
                        if (((*(byte *)(_NGUITools_TypeInfo_12d53c8 + 0x133) >> 2 & 1) != 0) &&
                           (*(int *)(_NGUITools_TypeInfo_12d53c8 + 0xe0) == 0)) {
                          native_sub_4327ec();
                        }
                        lVar9 = *(long *)(*(long *)(_NGUITools_TypeInfo_12d53c8 + 0xb8) + 0x38);
                        if (lVar9 == 0) goto LAB_00733764;
                        if ((ulong)*(uint *)(lVar9 + 0x18) <= uVar4 + 1) goto LAB_00733768;
                        if (param_2 == 0) goto LAB_00733764;
                        lVar1 = lVar9 + lVar6;
                        uVar17 = *(undefined4 *)(lVar1 + 0x24);
                        uVar18 = *(undefined4 *)(lVar1 + 0x28);
                        uVar11 = native_UnityEngine_Transform__InverseTransformPoint_7729a0
                                           (*(undefined4 *)(lVar1 + 0x20),param_2,0);
                        if ((ulong)*(uint *)(lVar9 + 0x18) <= uVar4 + 1) goto LAB_00733768;
                        uVar4 = uVar4 + 1;
                        lVar6 = lVar6 + 0xc;
                        *(undefined4 *)(lVar1 + 0x20) = uVar11;
                        *(undefined4 *)(lVar1 + 0x24) = uVar17;
                        *(undefined4 *)(lVar1 + 0x28) = uVar18;
                      } while (uVar4 < 3);
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
            uVar8 = native_sub_43283c();
                    /* WARNING: Subroutine does not return */
            native_sub_4327dc(uVar8,0);
          }
        }
        else {
          fVar10 = (float)native_UnityEngine_Camera__get_orthographicSize_8d8630(lVar6,0);
          uVar11 = native_UnityEngine_Camera__get_rect_8d8b48(lVar6,0);
          uStack_a0 = CONCAT44(fVar15,uVar11);
          uStack_98 = CONCAT44(in_s3,(int)uVar20);
          if (((*(byte *)(_NGUITools_TypeInfo_12d53c8 + 0x133) >> 2 & 1) != 0) &&
             (*(int *)(_NGUITools_TypeInfo_12d53c8 + 0xe0) == 0)) {
            native_sub_4327ec();
          }
          iVar2 = native_UnityEngine_Screen__get_width_76a5e4(0);
          iVar3 = native_UnityEngine_Screen__get_height_76a618(0);
          fVar12 = (float)native_UnityEngine_Rect__get_width_76367c(&uStack_a0,0);
          fVar13 = (float)native_UnityEngine_Rect__get_height_76368c(&uStack_a0,0);
          lVar6 = native_UnityEngine_Component__get_transform_8da62c(lVar6,0);
          if (lVar6 != 0) {
            fVar23 = (float)iVar2;
            fVar21 = (float)iVar3;
            uVar11 = native_UnityEngine_Transform__get_rotation_771a30(lVar6,0);
            uVar8 = uVar20;
            fVar22 = fVar15;
            fVar14 = (float)native_UnityEngine_Transform__get_position_77169c(lVar6,0);
            uVar4 = native_UnityEngine_Mathf__RoundToInt_8e50f0(fVar23,0);
            uVar7 = native_UnityEngine_Mathf__RoundToInt_8e50f0(fVar21,0);
            if ((uVar4 & 1) != 0) {
              fVar14 = fVar14 + -1.0 / fVar23;
            }
            fVar12 = (fVar23 / fVar21) * (fVar12 / fVar13);
            if ((uVar7 & 1) != 0) {
              fVar22 = 1.0 / fVar21 + fVar22;
            }
            if (((*(byte *)(_NGUITools_TypeInfo_12d53c8 + 0x133) >> 2 & 1) != 0) &&
               (*(int *)(_NGUITools_TypeInfo_12d53c8 + 0xe0) == 0)) {
              native_sub_4327ec();
            }
            lVar6 = *(long *)(*(long *)(_NGUITools_TypeInfo_12d53c8 + 0xb8) + 0x38);
            uVar19 = uVar20;
            fVar13 = fVar15;
            fVar21 = (float)native_UnityEngine_Quaternion__op_Multiply_7629c0
                                      (uVar11,fVar15,uVar20,in_s3,fVar12 * -fVar10,0,fVar16,0);
            if (lVar6 != 0) {
              if (*(int *)(lVar6 + 0x18) != 0) {
                fVar23 = (float)uVar8;
                *(float *)(lVar6 + 0x20) = fVar14 + fVar21;
                *(float *)(lVar6 + 0x24) = fVar22 + fVar13;
                *(float *)(lVar6 + 0x28) = fVar23 + (float)uVar19;
                lVar6 = *(long *)(*(long *)(_NGUITools_TypeInfo_12d53c8 + 0xb8) + 0x38);
                uVar8 = uVar20;
                fVar13 = fVar15;
                fVar21 = (float)native_UnityEngine_Quaternion__op_Multiply_7629c0
                                          (uVar11,fVar15,uVar20,in_s3,0,fVar10,fVar16,0);
                if (lVar6 == 0) goto LAB_00733764;
                if (1 < *(uint *)(lVar6 + 0x18)) {
                  *(float *)(lVar6 + 0x2c) = fVar14 + fVar21;
                  *(float *)(lVar6 + 0x30) = fVar22 + fVar13;
                  *(float *)(lVar6 + 0x34) = fVar23 + (float)uVar8;
                  lVar6 = *(long *)(*(long *)(_NGUITools_TypeInfo_12d53c8 + 0xb8) + 0x38);
                  uVar8 = uVar20;
                  fVar13 = fVar15;
                  fVar12 = (float)native_UnityEngine_Quaternion__op_Multiply_7629c0
                                            (uVar11,fVar15,uVar20,in_s3,fVar10 * fVar12,0,fVar16,0);
                  if (lVar6 == 0) goto LAB_00733764;
                  if (2 < *(uint *)(lVar6 + 0x18)) {
                    *(float *)(lVar6 + 0x38) = fVar14 + fVar12;
                    *(float *)(lVar6 + 0x3c) = fVar22 + fVar13;
                    *(float *)(lVar6 + 0x40) = fVar23 + (float)uVar8;
                    lVar9 = *(long *)(*(long *)(_NGUITools_TypeInfo_12d53c8 + 0xb8) + 0x38);
                    fVar10 = (float)native_UnityEngine_Quaternion__op_Multiply_7629c0
                                              (uVar11,fVar15,uVar20,in_s3,0,-fVar10,fVar16,0);
                    if (lVar9 == 0) goto LAB_00733764;
                    if (3 < *(uint *)(lVar9 + 0x18)) {
                      fVar16 = fVar23 + (float)uVar20;
                      fVar22 = fVar22 + fVar15;
                      fVar14 = fVar14 + fVar10;
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
  }
  else {
    plVar5 = *(long **)(param_1 + 0x20);
    if (plVar5 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00559424. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar8 = (**(code **)(*plVar5 + 0x208))(plVar5,param_2,*(undefined8 *)(*plVar5 + 0x210));
      return uVar8;
    }
  }
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}


