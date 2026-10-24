/* ARM64 IL2CPP native pseudocode from Ghidra.
 * Recovered implementation, not original C# source.
 * Function boundaries follow the IL2CPP method address table. */


/* UIDragObject$$get_dragMovement @ 0x9e2b34
 * UnityEngine_Vector3_o UIDragObject__get_dragMovement (UIDragObject_o* __this, const MethodInfo* method); */

/* UIDragObject$$get_dragMovement
   UnityEngine_Vector3_o UIDragObject__get_dragMovement (UIDragObject_o* __this, const MethodInfo*
   method); */

undefined4 native_UIDragObject__get_dragMovement_9e2b34(long param_1)

{
  return *(undefined4 *)(param_1 + 0x48);
}



/* UIDragObject$$set_dragMovement @ 0x9e2b40
 * void UIDragObject__set_dragMovement (UIDragObject_o* __this, UnityEngine_Vector3_o value, const MethodInfo* method); */

/* UIDragObject$$set_dragMovement
   void UIDragObject__set_dragMovement (UIDragObject_o* __this, UnityEngine_Vector3_o value, const
   MethodInfo* method); */

void native_UIDragObject__set_dragMovement_9e2b40
               (undefined4 param_1,undefined4 param_2,undefined4 param_3,long param_4)

{
  *(undefined4 *)(param_4 + 0x48) = param_1;
  *(undefined4 *)(param_4 + 0x4c) = param_2;
  *(undefined4 *)(param_4 + 0x50) = param_3;
  return;
}



/* UIDragObject$$OnEnable @ 0x9e2b4c
 * void UIDragObject__OnEnable (UIDragObject_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIDragObject$$OnEnable
   void UIDragObject__OnEnable (UIDragObject_o* __this, const MethodInfo* method); */

void native_UIDragObject__OnEnable_9e2b4c
               (undefined1 param_1 [16],undefined8 param_2,float param_3,long param_4)

{
  ulong uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  float fVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  
  if ((bRam00000000013418db & 1) == 0) {
    native_sub_43273c(&Method_UnityEngine_Component_GetComponent_UIWidget____12e2c30);
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    bRam00000000013418db = 1;
  }
  fVar4 = *(float *)(param_4 + 0x54);
  if (fVar4 != 0.0) {
    param_3 = *(float *)(param_4 + 0x50);
    *(undefined4 *)(param_4 + 0x54) = 0;
    param_2 = CONCAT44((float)((ulong)*(undefined8 *)(param_4 + 0x48) >> 0x20) * fVar4,
                       (float)*(undefined8 *)(param_4 + 0x48) * fVar4);
    *(undefined8 *)(param_4 + 0x28) = param_2;
    *(float *)(param_4 + 0x30) = fVar4 * param_3;
  }
  uVar6 = (undefined4)param_2;
  puVar2 = (undefined8 *)(param_4 + 0x38);
  uVar3 = *puVar2;
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar1 = native_UnityEngine_Object__op_Equality_8e9a3c(uVar3,0,0);
  if ((uVar1 & 1) != 0) {
    uVar3 = *(undefined8 *)(param_4 + 0x18);
    if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    uVar1 = native_UnityEngine_Object__op_Inequality_8d76fc(uVar3,0,0);
    if (((uVar1 & 1) != 0) &&
       (uVar1 = native_UnityEngine_Application__get_isPlaying_8d60cc(0), (uVar1 & 1) != 0)) {
      if (*(long *)(param_4 + 0x18) == 0) goto LAB_009e2cec;
      uVar3 = native_UnityEngine_Component__GetComponent_ActiveAnimation__49daec
                        (*(long *)(param_4 + 0x18),
                         _Method_UnityEngine_Component_GetComponent_UIWidget____12e2c30);
      if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
        native_sub_4327ec(_UnityEngine_Object_TypeInfo_12d54e0);
      }
      uVar1 = native_UnityEngine_Object__op_Inequality_8d76fc(uVar3,0,0);
      if ((uVar1 & 1) != 0) {
        *puVar2 = uVar3;
        native_sub_4326e0(puVar2,uVar3);
      }
    }
  }
  uVar3 = *(undefined8 *)(param_4 + 0x18);
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar1 = native_UnityEngine_Object__op_Inequality_8d76fc(uVar3,0,0);
  if ((uVar1 & 1) == 0) {
    uVar5 = native_UnityEngine_Vector3__get_zero_776668(0);
  }
  else {
    if (*(long *)(param_4 + 0x18) == 0) {
LAB_009e2cec:
                    /* WARNING: Subroutine does not return */
      native_sub_432810();
    }
    uVar5 = native_UnityEngine_Transform__get_position_77169c(*(long *)(param_4 + 0x18),0);
  }
  *(undefined4 *)(param_4 + 0x68) = uVar5;
  *(undefined4 *)(param_4 + 0x6c) = uVar6;
  *(float *)(param_4 + 0x70) = param_3;
  return;
}



/* UIDragObject$$OnDisable @ 0x9e2cf0
 * void UIDragObject__OnDisable (UIDragObject_o* __this, const MethodInfo* method); */

/* UIDragObject$$OnDisable
   void UIDragObject__OnDisable (UIDragObject_o* __this, const MethodInfo* method); */

void native_UIDragObject__OnDisable_9e2cf0(long param_1)

{
  *(undefined1 *)(param_1 + 0xb4) = 0;
  return;
}



/* UIDragObject$$FindPanel @ 0x9e2cf8
 * void UIDragObject__FindPanel (UIDragObject_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIDragObject$$FindPanel
   void UIDragObject__FindPanel (UIDragObject_o* __this, const MethodInfo* method); */

void native_UIDragObject__FindPanel_9e2cf8(long param_1)

{
  ulong uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  
  if ((bRam00000000013418dc & 1) == 0) {
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    native_sub_43273c(&UIPanel_TypeInfo_12d6478);
    bRam00000000013418dc = 1;
  }
  uVar3 = *(undefined8 *)(param_1 + 0x18);
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar1 = native_UnityEngine_Object__op_Inequality_8d76fc(uVar3,0,0);
  uVar3 = 0;
  if ((uVar1 & 1) != 0) {
    if ((*(long *)(param_1 + 0x18) == 0) ||
       (lVar2 = native_UnityEngine_Component__get_transform_8da62c(*(long *)(param_1 + 0x18),0),
       lVar2 == 0)) {
                    /* WARNING: Subroutine does not return */
      native_sub_432810();
    }
    uVar3 = native_UnityEngine_Transform__get_parent_765eb0(lVar2,0);
    if (((*(byte *)(_UIPanel_TypeInfo_12d6478 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UIPanel_TypeInfo_12d6478 + 0xe0) == 0)) {
      native_sub_4327ec(_UIPanel_TypeInfo_12d6478);
    }
    uVar3 = native_UIPanel__Find_af4e04(uVar3,0);
  }
  puVar4 = (undefined8 *)(param_1 + 0x20);
  *puVar4 = uVar3;
  native_sub_4326e0(puVar4);
  uVar3 = *puVar4;
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar1 = native_UnityEngine_Object__op_Equality_8e9a3c(uVar3,0,0);
  if ((uVar1 & 1) != 0) {
    *(undefined1 *)(param_1 + 0x34) = 0;
  }
  return;
}



/* UIDragObject$$UpdateBounds @ 0x9e2e20
 * void UIDragObject__UpdateBounds (UIDragObject_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIDragObject$$UpdateBounds
   void UIDragObject__UpdateBounds (UIDragObject_o* __this, const MethodInfo* method); */

void native_UIDragObject__UpdateBounds_9e2e20(long param_1)

{
  ulong uVar1;
  long lVar2;
  long *plVar3;
  undefined4 *puVar4;
  undefined8 uVar5;
  uint *puVar6;
  uint uVar7;
  ulong uVar8;
  ulong uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  if ((bRam00000000013418dd & 1) == 0) {
    native_sub_43273c(&NGUIMath_TypeInfo_12d53b8);
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    bRam00000000013418dd = 1;
  }
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_88 = 0;
  uStack_90 = 0;
  uStack_78 = 0;
  uStack_80 = 0;
  uVar5 = *(undefined8 *)(param_1 + 0x38);
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar1 = native_UnityEngine_Object__op_Implicit_8e1b98(uVar5,0);
  if (*(long *)(param_1 + 0x20) != 0) {
    lVar2 = native_UIRect__get_cachedTransform_c27c58(*(long *)(param_1 + 0x20),0);
    if ((uVar1 & 1) == 0) {
      uVar5 = *(undefined8 *)(param_1 + 0x18);
      if (((*(byte *)(_NGUIMath_TypeInfo_12d53b8 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_NGUIMath_TypeInfo_12d53b8 + 0xe0) == 0)) {
        native_sub_4327ec();
      }
      native_NGUIMath__CalculateRelativeWidgetBounds_805e1c(&uStack_d0,lVar2,uVar5,0);
      *(undefined8 *)(param_1 + 0xa8) = uStack_c0;
      *(undefined8 *)(param_1 + 0xa0) = uStack_c8;
      *(undefined8 *)(param_1 + 0x98) = uStack_d0;
      return;
    }
    if (lVar2 != 0) {
      native_UnityEngine_Transform__get_worldToLocalMatrix_772138(&uStack_d0,lVar2,0);
      uStack_68 = uStack_a8;
      uStack_70 = uStack_b0;
      uStack_58 = uStack_98;
      uStack_60 = uStack_a0;
      uStack_88 = uStack_c8;
      uStack_90 = uStack_d0;
      uStack_78 = uStack_b8;
      uStack_80 = uStack_c0;
      plVar3 = *(long **)(param_1 + 0x38);
      if ((plVar3 != (long *)0x0) &&
         (lVar2 = (**(code **)(*plVar3 + 0x1e8))(plVar3,*(undefined8 *)(*plVar3 + 0x1f0)),
         lVar2 != 0)) {
        uVar7 = *(uint *)(lVar2 + 0x18);
        uVar1 = 0xffffffffffffffff;
        puVar6 = (uint *)(lVar2 + 0x28);
        do {
          if ((ulong)uVar7 <= uVar1 + 1) goto LAB_009e305c;
          uVar8 = (ulong)puVar6[-1];
          uVar9 = (ulong)*puVar6;
          uVar7 = native_UnityEngine_Matrix4x4__MultiplyPoint3x4_8e5cec(puVar6[-2],&uStack_90,0);
          if ((ulong)*(uint *)(lVar2 + 0x18) <= uVar1 + 1) goto LAB_009e305c;
          puVar6[-2] = uVar7;
          puVar6[-1] = (uint)uVar8;
          *puVar6 = (uint)uVar9;
          uVar7 = *(uint *)(lVar2 + 0x18);
          uVar1 = uVar1 + 1;
          puVar6 = puVar6 + 3;
        } while (uVar1 < 3);
        if (uVar7 != 0) {
          uVar10 = *(undefined4 *)(lVar2 + 0x20);
          uVar11 = *(undefined4 *)(lVar2 + 0x24);
          uVar12 = *(undefined4 *)(lVar2 + 0x28);
          uVar5 = native_UnityEngine_Vector3__get_zero_776668(0);
          uStack_d0 = 0;
          uStack_c8 = 0;
          uStack_c0 = 0;
          native_UnityEngine_Bounds___ctor_8d7d14
                    (uVar10,uVar11,uVar12,uVar5,uVar8,uVar9,&uStack_d0,0);
          uVar1 = 0;
          *(undefined8 *)(param_1 + 0xa8) = uStack_c0;
          *(undefined8 *)(param_1 + 0xa0) = uStack_c8;
          *(undefined8 *)(param_1 + 0x98) = uStack_d0;
          puVar4 = (undefined4 *)(lVar2 + 0x34);
          while (uVar1 = uVar1 + 1, uVar1 < *(uint *)(lVar2 + 0x18)) {
            native_UnityEngine_Bounds__Encapsulate_8d80dc
                      (puVar4[-2],puVar4[-1],*puVar4,param_1 + 0x98,0);
            puVar4 = puVar4 + 3;
            if (2 < uVar1) {
              return;
            }
          }
        }
LAB_009e305c:
        uVar5 = native_sub_43283c();
                    /* WARNING: Subroutine does not return */
        native_sub_4327dc(uVar5,0);
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* UIDragObject$$OnPress @ 0x9e306c
 * void UIDragObject__OnPress (UIDragObject_o* __this, bool pressed, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIDragObject$$OnPress
   void UIDragObject__OnPress (UIDragObject_o* __this, bool pressed, const MethodInfo* method); */

void native_UIDragObject__OnPress_9e306c
               (undefined1 param_1 [16],undefined1 param_2 [16],ulong param_3,undefined8 param_4,
               long param_5,ulong param_6)

{
  int iVar1;
  int iVar2;
  int iVar3;
  ulong uVar4;
  undefined8 uVar5;
  long lVar6;
  ulong uVar7;
  float fVar8;
  undefined4 uVar9;
  undefined8 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  ulong uVar13;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  if ((bRam00000000013418de & 1) == 0) {
    native_sub_43273c(&NGUITools_TypeInfo_12d53c8);
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    native_sub_43273c(&UICamera_TypeInfo_12d6410);
    bRam00000000013418de = 1;
  }
  if (((*(byte *)(_UICamera_TypeInfo_12d6410 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  iVar1 = *(int *)(*(long *)(_UICamera_TypeInfo_12d6410 + 0xb8) + 0xd4);
  if (iVar1 == -2) {
    return;
  }
  if (((*(byte *)(_UICamera_TypeInfo_12d6410 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
    native_sub_4327ec();
    iVar1 = *(int *)(*(long *)(_UICamera_TypeInfo_12d6410 + 0xb8) + 0xd4);
  }
  if (iVar1 == -3) {
    return;
  }
  fVar8 = (float)native_UnityEngine_Time__get_timeScale_770930(0);
  uVar7 = 0x3c23d70a;
  if ((fVar8 < 0.01) && (fVar8 != 0.0)) {
    return;
  }
  uVar4 = native_UnityEngine_Behaviour__get_enabled_8d7acc(param_5,0);
  if ((uVar4 & 1) == 0) {
    return;
  }
  uVar5 = native_UnityEngine_Component__get_gameObject_8da66c(param_5,0);
  if (((*(byte *)(_NGUITools_TypeInfo_12d53c8 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_NGUITools_TypeInfo_12d53c8 + 0xe0) == 0)) {
    native_sub_4327ec(_NGUITools_TypeInfo_12d53c8);
  }
  uVar4 = native_NGUITools__GetActive_72d0d4(uVar5,0);
  if ((uVar4 & 1) == 0) {
    return;
  }
  uVar5 = *(undefined8 *)(param_5 + 0x18);
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar4 = native_UnityEngine_Object__op_Inequality_8d76fc(uVar5,0,0);
  if ((uVar4 & 1) == 0) {
    return;
  }
  if ((param_6 & 1) != 0) {
    if (*(char *)(param_5 + 0xb5) != '\0') {
      return;
    }
    if (((*(byte *)(_UICamera_TypeInfo_12d6410 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    uVar11 = *(undefined4 *)(*(long *)(_UICamera_TypeInfo_12d6410 + 0xb8) + 0xd4);
    *(undefined2 *)(param_5 + 0xb4) = 0x100;
    *(undefined4 *)(param_5 + 0xb0) = uVar11;
    native_UIDragObject__CancelMovement_9e344c(param_5);
    if (*(char *)(param_5 + 0x34) != '\0') {
      uVar5 = *(undefined8 *)(param_5 + 0x20);
      if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
        native_sub_4327ec();
      }
      uVar4 = native_UnityEngine_Object__op_Equality_8e9a3c(uVar5,0,0);
      if ((uVar4 & 1) != 0) {
        native_UIDragObject__FindPanel_9e2cf8(param_5);
      }
      if (*(char *)(param_5 + 0x34) != '\0') {
        native_UIDragObject__UpdateBounds_9e2e20(param_5);
      }
    }
    native_UIDragObject__CancelSpring_9e35a8(param_5);
    if (((*(byte *)(_UICamera_TypeInfo_12d6410 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    lVar6 = *(long *)(*(long *)(_UICamera_TypeInfo_12d6410 + 0xb8) + 0xc0);
    if (lVar6 != 0) {
      lVar6 = native_UnityEngine_Component__get_transform_8da62c(lVar6,0);
      uVar5 = *(undefined8 *)(param_5 + 0x20);
      if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
        native_sub_4327ec(_UnityEngine_Object_TypeInfo_12d54e0);
      }
      uVar4 = native_UnityEngine_Object__op_Inequality_8d76fc(uVar5,0,0);
      if ((uVar4 & 1) != 0) {
        if (*(long *)(param_5 + 0x20) == 0) goto LAB_009e3448;
        lVar6 = native_UIRect__get_cachedTransform_c27c58(*(long *)(param_5 + 0x20),0);
      }
      if (lVar6 != 0) {
        uVar5 = native_UnityEngine_Transform__get_rotation_771a30(lVar6,0);
        uVar4 = uVar7;
        uVar13 = param_3;
        uVar10 = native_UnityEngine_Vector3__get_back_776a70(0);
        uVar5 = native_UnityEngine_Quaternion__op_Multiply_7629c0
                          (uVar5,uVar7,param_3,param_4,uVar10,uVar4,uVar13,0);
        if (((*(byte *)(_UICamera_TypeInfo_12d6410 + 0x133) >> 2 & 1) != 0) &&
           (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
          native_sub_4327ec();
        }
        lVar6 = *(long *)(_UICamera_TypeInfo_12d6410 + 0xb8);
        uStack_70 = 0;
        uStack_68 = 0;
        native_UnityEngine_Plane___ctor_8eb884
                  (uVar5,uVar7,param_3,*(undefined4 *)(lVar6 + 100),*(undefined4 *)(lVar6 + 0x68),
                   *(undefined4 *)(lVar6 + 0x6c),&uStack_70,0);
        *(undefined8 *)(param_5 + 0x60) = uStack_68;
        *(undefined8 *)(param_5 + 0x58) = uStack_70;
        return;
      }
    }
LAB_009e3448:
                    /* WARNING: Subroutine does not return */
    native_sub_432810();
  }
  if (*(char *)(param_5 + 0xb5) == '\0') {
    return;
  }
  iVar1 = *(int *)(param_5 + 0xb0);
  if (((*(byte *)(_UICamera_TypeInfo_12d6410 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  if (iVar1 != *(int *)(*(long *)(_UICamera_TypeInfo_12d6410 + 0xb8) + 0xd4)) {
    return;
  }
  *(undefined1 *)(param_5 + 0xb5) = 0;
  if (*(char *)(param_5 + 0x34) == '\0') {
    return;
  }
  if (*(int *)(param_5 + 0x40) != 2) {
    return;
  }
  if (*(long *)(param_5 + 0x20) == 0) goto LAB_009e3448;
  uVar4 = native_UIPanel__ConstrainTargetToBounds_af4a98
                    (*(long *)(param_5 + 0x20),*(undefined8 *)(param_5 + 0x18),param_5 + 0x98,0,0);
  if ((uVar4 & 1) == 0) {
    return;
  }
  if ((bRam00000000013418e2 & 1) == 0) {
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    bRam00000000013418e2 = 1;
  }
  uVar5 = *(undefined8 *)(param_5 + 0x18);
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar4 = native_UnityEngine_Object__op_Inequality_8d76fc(uVar5,0,0);
  if ((uVar4 & 1) != 0) {
    if (*(long *)(param_5 + 0x18) == 0) goto LAB_009e35a4;
    native_UnityEngine_Transform__get_localPosition_7717f4(*(long *)(param_5 + 0x18),0);
    iVar1 = native_UnityEngine_Mathf__RoundToInt_8e50f0(0);
    iVar2 = native_UnityEngine_Mathf__RoundToInt_8e50f0(uVar7,0);
    iVar3 = native_UnityEngine_Mathf__RoundToInt_8e50f0(param_3,0);
    if (*(long *)(param_5 + 0x18) == 0) goto LAB_009e35a4;
    param_3 = (ulong)(uint)(float)iVar3;
    uVar7 = (ulong)(uint)(float)iVar2;
    native_UnityEngine_Transform__set_localPosition_7718a4((float)iVar1,*(long *)(param_5 + 0x18),0)
    ;
  }
  uVar12 = (undefined4)param_3;
  uVar11 = (undefined4)uVar7;
  uVar5 = *(undefined8 *)(param_5 + 0x18);
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar7 = native_UnityEngine_Object__op_Inequality_8d76fc(uVar5,0,0);
  if ((uVar7 & 1) == 0) {
    uVar9 = native_UnityEngine_Vector3__get_zero_776668(0);
  }
  else {
    if (*(long *)(param_5 + 0x18) == 0) {
LAB_009e35a4:
                    /* WARNING: Subroutine does not return */
      native_sub_432810();
    }
    uVar9 = native_UnityEngine_Transform__get_position_77169c(*(long *)(param_5 + 0x18),0);
  }
  *(undefined4 *)(param_5 + 0x68) = uVar9;
  *(undefined4 *)(param_5 + 0x6c) = uVar11;
  *(undefined4 *)(param_5 + 0x70) = uVar12;
  uVar9 = native_UnityEngine_Vector3__get_zero_776668(0);
  *(undefined4 *)(param_5 + 0x80) = uVar9;
  *(undefined4 *)(param_5 + 0x84) = uVar11;
  *(undefined4 *)(param_5 + 0x88) = uVar12;
  uVar9 = native_UnityEngine_Vector3__get_zero_776668(0);
  *(undefined4 *)(param_5 + 0x8c) = uVar9;
  *(undefined4 *)(param_5 + 0x90) = uVar11;
  *(undefined4 *)(param_5 + 0x94) = uVar12;
  return;
}



/* UIDragObject$$OnDrag @ 0x9e3664
 * void UIDragObject__OnDrag (UIDragObject_o* __this, UnityEngine_Vector2_o delta, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIDragObject$$OnDrag
   void UIDragObject__OnDrag (UIDragObject_o* __this, UnityEngine_Vector2_o delta, const MethodInfo*
   method); */

void native_UIDragObject__OnDrag_9e3664(long param_1)

{
  int iVar1;
  ulong uVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  float fVar6;
  float fVar7;
  ulong uVar8;
  float fVar9;
  ulong uVar10;
  float fVar11;
  ulong uVar12;
  ulong uVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined4 uStack_24;
  
  if ((bRam00000000013418df & 1) == 0) {
    native_sub_43273c(&NGUITools_TypeInfo_12d53c8);
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    native_sub_43273c(&UICamera_TypeInfo_12d6410);
    bRam00000000013418df = 1;
  }
  uStack_90 = 0;
  uStack_88 = 0;
  uStack_80 = 0;
  uStack_24 = 0;
  if (*(char *)(param_1 + 0xb5) != '\0') {
    iVar1 = *(int *)(param_1 + 0xb0);
    if (((*(byte *)(_UICamera_TypeInfo_12d6410 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    if ((iVar1 == *(int *)(*(long *)(_UICamera_TypeInfo_12d6410 + 0xb8) + 0xd4)) &&
       (uVar2 = native_UnityEngine_Behaviour__get_enabled_8d7acc(param_1,0), (uVar2 & 1) != 0)) {
      uVar3 = native_UnityEngine_Component__get_gameObject_8da66c(param_1,0);
      if (((*(byte *)(_NGUITools_TypeInfo_12d53c8 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_NGUITools_TypeInfo_12d53c8 + 0xe0) == 0)) {
        native_sub_4327ec(_NGUITools_TypeInfo_12d53c8);
      }
      uVar2 = native_NGUITools__GetActive_72d0d4(uVar3,0);
      if ((uVar2 & 1) != 0) {
        uVar3 = *(undefined8 *)(param_1 + 0x18);
        if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
           (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
          native_sub_4327ec();
        }
        uVar2 = native_UnityEngine_Object__op_Inequality_8d76fc(uVar3,0,0);
        if ((uVar2 & 1) != 0) {
          if (((*(byte *)(_UICamera_TypeInfo_12d6410 + 0x133) >> 2 & 1) != 0) &&
             (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
            native_sub_4327ec();
          }
          lVar4 = _UICamera_TypeInfo_12d6410;
          lVar5 = *(long *)(*(long *)(_UICamera_TypeInfo_12d6410 + 0xb8) + 0xe0);
          if (lVar5 != 0) {
            *(undefined4 *)(lVar5 + 0x70) = 2;
            lVar5 = *(long *)(*(long *)(lVar4 + 0xb8) + 0xe0);
            if ((lVar5 != 0) && (lVar4 = *(long *)(*(long *)(lVar4 + 0xb8) + 0xc0), lVar4 != 0)) {
              uVar10 = (ulong)*(uint *)(lVar5 + 0x18);
              uVar12 = 0;
              native_UnityEngine_Camera__ScreenPointToRay_8d9368
                        (&uStack_a8,*(undefined4 *)(lVar5 + 0x14),lVar4,0);
              uStack_88 = uStack_a0;
              uStack_90 = uStack_a8;
              uStack_80 = uStack_98;
              uStack_b0 = uStack_98;
              uStack_b8 = uStack_a0;
              uStack_c0 = uStack_a8;
              uVar2 = native_UnityEngine_Plane__Raycast_8eb9a4
                                (param_1 + 0x58,&uStack_c0,&uStack_24,0);
              if ((uVar2 & 1) == 0) {
                return;
              }
              fVar6 = (float)native_UnityEngine_Ray__GetPoint_7631f4(uStack_24,&uStack_90,0);
              fVar14 = *(float *)(param_1 + 0x74);
              fVar15 = *(float *)(param_1 + 0x78);
              fVar16 = *(float *)(param_1 + 0x7c);
              *(float *)(param_1 + 0x74) = fVar6;
              *(float *)(param_1 + 0x78) = (float)uVar10;
              *(float *)(param_1 + 0x7c) = (float)uVar12;
              if (*(char *)(param_1 + 0xb4) == '\0') {
                *(undefined1 *)(param_1 + 0xb4) = 1;
                uVar8 = native_UnityEngine_Vector3__get_zero_776668(0);
                uVar2 = uVar10;
                uVar13 = uVar12;
              }
              else {
                uVar8 = (ulong)(uint)(fVar6 - fVar14);
                uVar2 = (ulong)(uint)((float)uVar10 - fVar15);
                uVar13 = (ulong)(uint)((float)uVar12 - fVar16);
              }
              if (((float)uVar8 != 0.0) || ((float)uVar2 != 0.0)) {
                if (*(long *)(param_1 + 0x18) == 0) goto LAB_009e3a34;
                fVar6 = (float)native_UnityEngine_Transform__InverseTransformDirection_772814
                                         (uVar8,*(long *)(param_1 + 0x18),0);
                if (*(long *)(param_1 + 0x18) == 0) goto LAB_009e3a34;
                uVar12 = (ulong)(uint)((float)uVar13 * *(float *)(param_1 + 0x50));
                uVar10 = (ulong)(uint)((float)uVar2 * *(float *)(param_1 + 0x4c));
                uVar8 = native_UnityEngine_Transform__TransformDirection_7722dc
                                  (fVar6 * *(float *)(param_1 + 0x48),*(long *)(param_1 + 0x18),0);
                uVar2 = uVar10;
                uVar13 = uVar12;
              }
              fVar14 = (float)uVar12;
              fVar6 = (float)uVar10;
              if (*(int *)(param_1 + 0x40) != 0) {
                fVar18 = *(float *)(param_1 + 0x88);
                fVar6 = *(float *)(param_1 + 0x80);
                fVar14 = *(float *)(param_1 + 0x84);
                fVar15 = *(float *)(param_1 + 0x44) * 0.01;
                fVar17 = (float)uVar13;
                fVar16 = (float)native_UnityEngine_Mathf__Clamp01_8d9d9c(0x3f2b851f,0);
                uVar13 = uVar13 & 0xffffffff;
                fVar6 = fVar6 + fVar16 * ((fVar6 + (float)uVar8 * fVar15) - fVar6);
                fVar14 = fVar14 + fVar16 * ((fVar14 + (float)uVar2 * fVar15) - fVar14);
                *(float *)(param_1 + 0x80) = fVar6;
                *(float *)(param_1 + 0x84) = fVar14;
                *(float *)(param_1 + 0x88) = fVar18 + fVar16 * ((fVar18 + fVar17 * fVar15) - fVar18)
                ;
              }
              if (*(long *)(param_1 + 0x18) != 0) {
                fVar15 = (float)native_UnityEngine_Transform__get_localPosition_7717f4
                                          (*(long *)(param_1 + 0x18),0);
                native_UIDragObject__Move_9e3a38(uVar8,uVar2,uVar13,param_1);
                fVar17 = (float)uVar13;
                fVar16 = (float)uVar2;
                if (*(char *)(param_1 + 0x34) == '\0') {
                  return;
                }
                lVar4 = param_1 + 0x98;
                fVar18 = (float)native_UnityEngine_Bounds__get_center_8d7d98(lVar4,0);
                if (*(long *)(param_1 + 0x18) != 0) {
                  fVar9 = fVar16;
                  fVar11 = fVar17;
                  fVar7 = (float)native_UnityEngine_Transform__get_localPosition_7717f4
                                           (*(long *)(param_1 + 0x18),0);
                  native_UnityEngine_Bounds__set_center_8d7ecc
                            (fVar18 + (fVar7 - fVar15),fVar16 + (fVar9 - fVar6),
                             fVar17 + (fVar11 - fVar14),lVar4,0);
                  if (*(int *)(param_1 + 0x40) == 2) {
                    return;
                  }
                  if (*(long *)(param_1 + 0x20) != 0) {
                    uVar2 = native_UIPanel__ConstrainTargetToBounds_af4a98
                                      (*(long *)(param_1 + 0x20),*(undefined8 *)(param_1 + 0x18),
                                       lVar4,1,0);
                    if ((uVar2 & 1) == 0) {
                      return;
                    }
                    native_UIDragObject__CancelMovement_9e344c(param_1);
                    return;
                  }
                }
              }
            }
          }
LAB_009e3a34:
                    /* WARNING: Subroutine does not return */
          native_sub_432810();
        }
      }
    }
  }
  return;
}



/* UIDragObject$$Move @ 0x9e3a38
 * void UIDragObject__Move (UIDragObject_o* __this, UnityEngine_Vector3_o worldDelta, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIDragObject$$Move
   void UIDragObject__Move (UIDragObject_o* __this, UnityEngine_Vector3_o worldDelta, const
   MethodInfo* method); */

void native_UIDragObject__Move_9e3a38(float param_1,float param_2,float param_3,long param_4)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  long *plVar5;
  undefined8 uVar6;
  float fVar7;
  float fVar8;
  double dVar9;
  float fVar10;
  double dStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  double dStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  fVar7 = param_3;
  fVar10 = param_2;
  if ((bRam00000000013418e0 & 1) == 0) {
    native_sub_43273c(&Method_UnityEngine_Component_GetComponent_Rigidbody____12e2ae0);
    native_sub_43273c(&Method_UnityEngine_Component_GetComponent_UIScrollView____12e2c08);
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    bRam00000000013418e0 = 1;
  }
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_88 = 0;
  dStack_90 = 0.0;
  uStack_78 = 0;
  uStack_80 = 0;
  uVar6 = *(undefined8 *)(param_4 + 0x20);
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar1 = native_UnityEngine_Object__op_Inequality_8d76fc(uVar6,0,0);
  if ((uVar1 & 1) == 0) {
    lVar2 = *(long *)(param_4 + 0x18);
    if (lVar2 != 0) {
      fVar8 = (float)native_UnityEngine_Transform__get_position_77169c(lVar2,0);
      native_UnityEngine_Transform__set_position_77174c
                (param_1 + fVar8,param_2 + fVar10,param_3 + fVar7,lVar2,0);
      return;
    }
    goto LAB_009e3e34;
  }
  *(ulong *)(param_4 + 0x68) =
       CONCAT44(param_2 + (float)((ulong)*(undefined8 *)(param_4 + 0x68) >> 0x20),
                param_1 + (float)*(undefined8 *)(param_4 + 0x68));
  *(float *)(param_4 + 0x70) = param_3 + *(float *)(param_4 + 0x70);
  if (*(long *)(param_4 + 0x18) == 0) goto LAB_009e3e34;
  lVar2 = native_UnityEngine_Transform__get_parent_765eb0(*(long *)(param_4 + 0x18),0);
  if (*(long *)(param_4 + 0x18) == 0) goto LAB_009e3e34;
  lVar3 = native_UnityEngine_Component__GetComponent_ActiveAnimation__49daec
                    (*(long *)(param_4 + 0x18),
                     _Method_UnityEngine_Component_GetComponent_Rigidbody____12e2ae0);
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec(_UnityEngine_Object_TypeInfo_12d54e0);
  }
  uVar1 = native_UnityEngine_Object__op_Inequality_8d76fc(lVar2,0,0);
  if ((uVar1 & 1) == 0) {
    if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    uVar1 = native_UnityEngine_Object__op_Inequality_8d76fc(lVar3,0,0);
    if ((uVar1 & 1) != 0) {
      if (lVar3 == 0) goto LAB_009e3e34;
      uVar1 = (ulong)*(uint *)(param_4 + 0x68);
      goto LAB_009e3d88;
    }
    if (*(long *)(param_4 + 0x18) == 0) goto LAB_009e3e34;
    native_UnityEngine_Transform__set_position_77174c
              (*(undefined4 *)(param_4 + 0x68),*(undefined4 *)(param_4 + 0x6c),
               *(undefined4 *)(param_4 + 0x70),*(long *)(param_4 + 0x18),0);
  }
  else {
    if (lVar2 == 0) goto LAB_009e3e34;
    native_UnityEngine_Transform__get_worldToLocalMatrix_772138(&dStack_d0,lVar2,0);
    uStack_68 = uStack_a8;
    uStack_70 = uStack_b0;
    uStack_58 = uStack_98;
    uStack_60 = uStack_a0;
    uStack_88 = uStack_c8;
    dStack_90 = dStack_d0;
    uStack_78 = uStack_b8;
    uStack_80 = uStack_c0;
    fVar10 = *(float *)(param_4 + 0x6c);
    uVar1 = (ulong)*(uint *)(param_4 + 0x70);
    fVar7 = (float)native_UnityEngine_Matrix4x4__MultiplyPoint3x4_8e5cec
                             (*(undefined4 *)(param_4 + 0x68),fVar10,uVar1,&dStack_90,0);
    dVar9 = (double)func_0x002c9600((double)fVar7,&dStack_d0);
    if (0.0 <= fVar7) {
      if (dVar9 == 0.5) {
        fVar7 = 1.0;
        goto LAB_009e3c5c;
      }
      fVar8 = (float)(int)(fVar7 + 0.5);
    }
    else if (dVar9 == -0.5) {
      fVar7 = -1.0;
LAB_009e3c5c:
      fVar8 = (float)dStack_d0;
      if (((long)dStack_d0 & 1U) != 0) {
        fVar8 = (float)dStack_d0 + fVar7;
      }
    }
    else {
      fVar8 = (float)(int)(fVar7 + -0.5);
    }
    dVar9 = (double)func_0x002c9600((double)fVar10,&dStack_d0);
    if (0.0 <= fVar10) {
      if (dVar9 == 0.5) {
        fVar7 = 1.0;
        goto LAB_009e3cec;
      }
      fVar10 = (float)(int)(fVar10 + 0.5);
    }
    else if (dVar9 == -0.5) {
      fVar7 = -1.0;
LAB_009e3cec:
      fVar10 = (float)dStack_d0;
      if (((long)dStack_d0 & 1U) != 0) {
        fVar10 = (float)dStack_d0 + fVar7;
      }
    }
    else {
      fVar10 = (float)(int)(fVar10 + -0.5);
    }
    if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    uVar4 = native_UnityEngine_Object__op_Inequality_8d76fc(lVar3,0,0);
    if ((uVar4 & 1) == 0) {
      if (*(long *)(param_4 + 0x18) == 0) goto LAB_009e3e34;
      native_UnityEngine_Transform__set_localPosition_7718a4
                (fVar8,fVar10,uVar1,*(long *)(param_4 + 0x18),0);
    }
    else {
      native_UnityEngine_Transform__get_localToWorldMatrix_7657b8(&dStack_d0,lVar2,0);
      uStack_68 = uStack_a8;
      uStack_70 = uStack_b0;
      uStack_58 = uStack_98;
      uStack_60 = uStack_a0;
      uStack_88 = uStack_c8;
      dStack_90 = dStack_d0;
      uStack_78 = uStack_b8;
      uStack_80 = uStack_c0;
      uVar1 = native_UnityEngine_Matrix4x4__MultiplyPoint3x4_8e5cec(fVar8,fVar10,uVar1,&dStack_90,0)
      ;
      if (lVar3 == 0) goto LAB_009e3e34;
LAB_009e3d88:
      native_UnityEngine_Rigidbody__set_position_dbd134(uVar1,lVar3,0);
    }
  }
  if (*(long *)(param_4 + 0x20) == 0) {
LAB_009e3e34:
                    /* WARNING: Subroutine does not return */
    native_sub_432810();
  }
  plVar5 = (long *)native_UnityEngine_Component__GetComponent_ActiveAnimation__49daec
                             (*(long *)(param_4 + 0x20),
                              _Method_UnityEngine_Component_GetComponent_UIScrollView____12e2c08);
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec(_UnityEngine_Object_TypeInfo_12d54e0);
  }
  uVar1 = native_UnityEngine_Object__op_Inequality_8d76fc(plVar5,0,0);
  if ((uVar1 & 1) != 0) {
    if (plVar5 == (long *)0x0) goto LAB_009e3e34;
    (**(code **)(*plVar5 + 0x1b8))(plVar5,1,*(undefined8 *)(*plVar5 + 0x1c0));
  }
  return;
}



/* UIDragObject$$LateUpdate @ 0x9e3e38
 * void UIDragObject__LateUpdate (UIDragObject_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIDragObject$$LateUpdate
   void UIDragObject__LateUpdate (UIDragObject_o* __this, const MethodInfo* method); */

void native_UIDragObject__LateUpdate_9e3e38(long param_1)

{
  undefined8 *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  ulong uVar5;
  ulong uVar6;
  undefined8 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined8 uVar10;
  float fVar11;
  undefined4 uVar12;
  ulong uVar13;
  undefined8 uVar14;
  float fVar15;
  
  if ((bRam00000000013418e1 & 1) == 0) {
    native_sub_43273c(&NGUIMath_TypeInfo_12d53b8);
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    bRam00000000013418e1 = 1;
  }
  uVar7 = *(undefined8 *)(param_1 + 0x18);
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar5 = native_UnityEngine_Object__op_Equality_8e9a3c(uVar7,0,0);
  if ((uVar5 & 1) != 0) {
    return;
  }
  uVar5 = native_RealTime__get_deltaTime_73d0b8(0);
  uVar14 = *(undefined8 *)(param_1 + 0x8c);
  uVar13 = (ulong)(uint)*(float *)(param_1 + 0x94);
  fVar15 = (float)((ulong)uVar14 >> 0x20);
  fVar11 = *(float *)(param_1 + 0x88) - *(float *)(param_1 + 0x94);
  uVar6 = (ulong)(uint)fVar11;
  *(ulong *)(param_1 + 0x80) =
       CONCAT44((float)((ulong)*(undefined8 *)(param_1 + 0x80) >> 0x20) - fVar15,
                (float)*(undefined8 *)(param_1 + 0x80) - (float)uVar14);
  *(float *)(param_1 + 0x88) = fVar11;
  uVar7 = uVar14;
  uVar10 = native_UnityEngine_Vector3__get_zero_776668(0);
  if (((*(byte *)(_NGUIMath_TypeInfo_12d53b8 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_NGUIMath_TypeInfo_12d53b8 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar9 = native_NGUIMath__SpringLerp_806684
                    (uVar14,fVar15,uVar13,uVar10,uVar6,uVar7,0x41a00000,uVar5,0);
  puVar1 = (undefined8 *)(param_1 + 0x80);
  *(undefined4 *)(param_1 + 0x8c) = uVar9;
  *(float *)(param_1 + 0x90) = fVar15;
  *(int *)(param_1 + 0x94) = (int)uVar13;
  fVar11 = (float)native_UnityEngine_Vector3__get_magnitude_77684c(puVar1,0);
  if (fVar11 < 0.0001) {
    return;
  }
  if (*(char *)(param_1 + 0xb5) != '\0') {
    if (((*(byte *)(_NGUIMath_TypeInfo_12d53b8 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_NGUIMath_TypeInfo_12d53b8 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    fVar11 = (float)uVar5;
    if (1.0 < (float)uVar5) {
      fVar11 = 1.0;
    }
    iVar2 = native_UnityEngine_Mathf__RoundToInt_8e50f0(fVar11 * 1000.0,0,0);
    fVar11 = (float)func_0x002c89c0(0x3f7db22d,(float)iVar2);
    func_0x002c9a20(0x3f7db22d);
    *puVar1 = CONCAT44((float)((ulong)*puVar1 >> 0x20) * fVar11,(float)*puVar1 * fVar11);
    *(float *)(param_1 + 0x88) = fVar11 * *(float *)(param_1 + 0x88);
    return;
  }
  uVar7 = *(undefined8 *)(param_1 + 0x20);
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar6 = native_UnityEngine_Object__op_Equality_8e9a3c(uVar7,0,0);
  if ((uVar6 & 1) != 0) {
    native_UIDragObject__FindPanel_9e2cf8(param_1);
  }
  if (((*(byte *)(_NGUIMath_TypeInfo_12d53b8 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_NGUIMath_TypeInfo_12d53b8 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  native_NGUIMath__SpringDampen_80634c(0x41100000,uVar5,puVar1,0);
  native_UIDragObject__Move_9e3a38(param_1);
  if (*(char *)(param_1 + 0x34) != '\0') {
    uVar7 = *(undefined8 *)(param_1 + 0x20);
    if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    uVar6 = native_UnityEngine_Object__op_Inequality_8d76fc(uVar7,0,0);
    if ((uVar6 & 1) != 0) {
      native_UIDragObject__UpdateBounds_9e2e20(param_1);
      if (*(long *)(param_1 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
        native_sub_432810();
      }
      uVar6 = native_UIPanel__ConstrainTargetToBounds_af4a98
                        (*(long *)(param_1 + 0x20),*(undefined8 *)(param_1 + 0x18),param_1 + 0x98,
                         *(int *)(param_1 + 0x40) == 0,0);
      if ((uVar6 & 1) == 0) {
        native_UIDragObject__CancelSpring_9e35a8(param_1);
      }
      else {
        native_UIDragObject__CancelMovement_9e344c(param_1);
      }
    }
  }
  if (((*(byte *)(_NGUIMath_TypeInfo_12d53b8 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_NGUIMath_TypeInfo_12d53b8 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  native_NGUIMath__SpringDampen_80634c(0x41100000,puVar1,0);
  fVar11 = (float)native_UnityEngine_Vector3__get_magnitude_77684c(puVar1,0);
  if (0.0001 <= fVar11) {
    return;
  }
  if ((bRam00000000013418e2 & 1) == 0) {
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    bRam00000000013418e2 = 1;
  }
  uVar7 = *(undefined8 *)(param_1 + 0x18);
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar6 = native_UnityEngine_Object__op_Inequality_8d76fc(uVar7,0,0);
  if ((uVar6 & 1) != 0) {
    if (*(long *)(param_1 + 0x18) == 0) goto LAB_009e35a4;
    native_UnityEngine_Transform__get_localPosition_7717f4(*(long *)(param_1 + 0x18),0);
    iVar2 = native_UnityEngine_Mathf__RoundToInt_8e50f0(0);
    iVar3 = native_UnityEngine_Mathf__RoundToInt_8e50f0(uVar5,0);
    iVar4 = native_UnityEngine_Mathf__RoundToInt_8e50f0(uVar13,0);
    if (*(long *)(param_1 + 0x18) == 0) goto LAB_009e35a4;
    uVar13 = (ulong)(uint)(float)iVar4;
    uVar5 = (ulong)(uint)(float)iVar3;
    native_UnityEngine_Transform__set_localPosition_7718a4((float)iVar2,*(long *)(param_1 + 0x18),0)
    ;
  }
  uVar12 = (undefined4)uVar13;
  uVar9 = (undefined4)uVar5;
  uVar7 = *(undefined8 *)(param_1 + 0x18);
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar5 = native_UnityEngine_Object__op_Inequality_8d76fc(uVar7,0,0);
  if ((uVar5 & 1) == 0) {
    uVar8 = native_UnityEngine_Vector3__get_zero_776668(0);
  }
  else {
    if (*(long *)(param_1 + 0x18) == 0) {
LAB_009e35a4:
                    /* WARNING: Subroutine does not return */
      native_sub_432810();
    }
    uVar8 = native_UnityEngine_Transform__get_position_77169c(*(long *)(param_1 + 0x18),0);
  }
  *(undefined4 *)(param_1 + 0x68) = uVar8;
  *(undefined4 *)(param_1 + 0x6c) = uVar9;
  *(undefined4 *)(param_1 + 0x70) = uVar12;
  uVar8 = native_UnityEngine_Vector3__get_zero_776668(0);
  *(undefined4 *)(param_1 + 0x80) = uVar8;
  *(undefined4 *)(param_1 + 0x84) = uVar9;
  *(undefined4 *)(param_1 + 0x88) = uVar12;
  uVar8 = native_UnityEngine_Vector3__get_zero_776668(0);
  *(undefined4 *)(param_1 + 0x8c) = uVar8;
  *(undefined4 *)(param_1 + 0x90) = uVar9;
  *(undefined4 *)(param_1 + 0x94) = uVar12;
  return;
}



/* UIDragObject$$CancelMovement @ 0x9e344c
 * void UIDragObject__CancelMovement (UIDragObject_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIDragObject$$CancelMovement
   void UIDragObject__CancelMovement (UIDragObject_o* __this, const MethodInfo* method); */

void native_UIDragObject__CancelMovement_9e344c
               (undefined1 param_1 [16],undefined1 param_2 [16],undefined1 param_3 [16],long param_4
               )

{
  int iVar1;
  int iVar2;
  int iVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined4 uVar6;
  float fVar7;
  float fVar8;
  undefined4 uVar9;
  
  uVar9 = param_3._4_4_;
  fVar8 = param_3._0_4_;
  uVar6 = param_2._4_4_;
  fVar7 = param_2._0_4_;
  if ((bRam00000000013418e2 & 1) == 0) {
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    bRam00000000013418e2 = 1;
  }
  uVar5 = *(undefined8 *)(param_4 + 0x18);
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar4 = native_UnityEngine_Object__op_Inequality_8d76fc(uVar5,0,0);
  if ((uVar4 & 1) != 0) {
    if (*(long *)(param_4 + 0x18) == 0) goto LAB_009e35a4;
    native_UnityEngine_Transform__get_localPosition_7717f4(*(long *)(param_4 + 0x18),0);
    iVar1 = native_UnityEngine_Mathf__RoundToInt_8e50f0(0);
    iVar2 = native_UnityEngine_Mathf__RoundToInt_8e50f0(CONCAT44(uVar6,fVar7),0);
    iVar3 = native_UnityEngine_Mathf__RoundToInt_8e50f0(CONCAT44(uVar9,fVar8),0);
    if (*(long *)(param_4 + 0x18) == 0) goto LAB_009e35a4;
    fVar8 = (float)iVar3;
    fVar7 = (float)iVar2;
    native_UnityEngine_Transform__set_localPosition_7718a4((float)iVar1,*(long *)(param_4 + 0x18),0)
    ;
  }
  uVar5 = *(undefined8 *)(param_4 + 0x18);
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar4 = native_UnityEngine_Object__op_Inequality_8d76fc(uVar5,0,0);
  if ((uVar4 & 1) == 0) {
    uVar6 = native_UnityEngine_Vector3__get_zero_776668(0);
  }
  else {
    if (*(long *)(param_4 + 0x18) == 0) {
LAB_009e35a4:
                    /* WARNING: Subroutine does not return */
      native_sub_432810();
    }
    uVar6 = native_UnityEngine_Transform__get_position_77169c(*(long *)(param_4 + 0x18),0);
  }
  *(undefined4 *)(param_4 + 0x68) = uVar6;
  *(float *)(param_4 + 0x6c) = fVar7;
  *(float *)(param_4 + 0x70) = fVar8;
  uVar6 = native_UnityEngine_Vector3__get_zero_776668(0);
  *(undefined4 *)(param_4 + 0x80) = uVar6;
  *(float *)(param_4 + 0x84) = fVar7;
  *(float *)(param_4 + 0x88) = fVar8;
  uVar6 = native_UnityEngine_Vector3__get_zero_776668(0);
  *(undefined4 *)(param_4 + 0x8c) = uVar6;
  *(float *)(param_4 + 0x90) = fVar7;
  *(float *)(param_4 + 0x94) = fVar8;
  return;
}



/* UIDragObject$$CancelSpring @ 0x9e35a8
 * void UIDragObject__CancelSpring (UIDragObject_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIDragObject$$CancelSpring
   void UIDragObject__CancelSpring (UIDragObject_o* __this, const MethodInfo* method); */

void native_UIDragObject__CancelSpring_9e35a8(long param_1)

{
  long lVar1;
  ulong uVar2;
  
  if ((bRam00000000013418e3 & 1) == 0) {
    native_sub_43273c(&Method_UnityEngine_Component_GetComponent_SpringPosition____12e2b10);
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    bRam00000000013418e3 = 1;
  }
  if (*(long *)(param_1 + 0x18) != 0) {
    lVar1 = native_UnityEngine_Component__GetComponent_ActiveAnimation__49daec
                      (*(long *)(param_1 + 0x18),
                       _Method_UnityEngine_Component_GetComponent_SpringPosition____12e2b10);
    if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
      native_sub_4327ec(_UnityEngine_Object_TypeInfo_12d54e0);
    }
    uVar2 = native_UnityEngine_Object__op_Inequality_8d76fc(lVar1,0,0);
    if ((uVar2 & 1) == 0) {
      return;
    }
    if (lVar1 != 0) {
      if (pcRam0000000001340948 == (code *)0x0) {
        pcRam0000000001340948 = (code *)native_sub_4326f0(&UNK_00e2c702);
      }
                    /* WARNING: Could not recover jumptable at 0x008d7b58. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*pcRam0000000001340948)(lVar1,0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* UIDragObject$$OnScroll @ 0x9e4148
 * void UIDragObject__OnScroll (UIDragObject_o* __this, float delta, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIDragObject$$OnScroll
   void UIDragObject__OnScroll (UIDragObject_o* __this, float delta, const MethodInfo* method); */

void native_UIDragObject__OnScroll_9e4148(float param_1,long param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  
  if ((bRam00000000013418e4 & 1) == 0) {
    native_sub_43273c(&NGUITools_TypeInfo_12d53c8);
    bRam00000000013418e4 = 1;
  }
  uVar1 = native_UnityEngine_Behaviour__get_enabled_8d7acc(param_2,0);
  if ((uVar1 & 1) != 0) {
    uVar2 = native_UnityEngine_Component__get_gameObject_8da66c(param_2,0);
    if (((*(byte *)(_NGUITools_TypeInfo_12d53c8 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_NGUITools_TypeInfo_12d53c8 + 0xe0) == 0)) {
      native_sub_4327ec(_NGUITools_TypeInfo_12d53c8);
    }
    uVar1 = native_NGUITools__GetActive_72d0d4(uVar2,0);
    if ((uVar1 & 1) != 0) {
      param_1 = param_1 * 0.05;
      *(ulong *)(param_2 + 0x8c) =
           CONCAT44((float)((ulong)*(undefined8 *)(param_2 + 0x8c) >> 0x20) -
                    (float)((ulong)*(undefined8 *)(param_2 + 0x28) >> 0x20) * param_1,
                    (float)*(undefined8 *)(param_2 + 0x8c) -
                    (float)*(undefined8 *)(param_2 + 0x28) * param_1);
      *(float *)(param_2 + 0x94) = *(float *)(param_2 + 0x94) - param_1 * *(float *)(param_2 + 0x30)
      ;
    }
  }
  return;
}



/* UIDragObject$$.ctor @ 0x9e4218
 * void UIDragObject___ctor (UIDragObject_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIDragObject$$.ctor
   void UIDragObject___ctor (UIDragObject_o* __this, const MethodInfo* method); */

undefined1  [16]
native_UIDragObject___ctor_9e4218
          (undefined1 param_1 [16],undefined4 param_2,undefined4 param_3,ulong param_4)

{
  undefined4 uVar1;
  undefined1 auVar2 [16];
  
  uVar1 = native_UnityEngine_Vector3__get_zero_776668(0);
  *(undefined4 *)(param_4 + 0x28) = uVar1;
  *(undefined4 *)(param_4 + 0x2c) = param_2;
  *(undefined4 *)(param_4 + 0x30) = param_3;
  *(undefined4 *)(param_4 + 0x40) = 2;
  *(undefined8 *)(param_4 + 0x4c) = 0x3f800000;
  *(undefined8 *)(param_4 + 0x44) = 0x3f800000420c0000;
  uVar1 = native_UnityEngine_Vector3__get_zero_776668(0);
  *(undefined4 *)(param_4 + 0x80) = uVar1;
  *(undefined4 *)(param_4 + 0x84) = param_2;
  *(undefined4 *)(param_4 + 0x88) = param_3;
  uVar1 = native_UnityEngine_Vector3__get_zero_776668(0);
  *(undefined4 *)(param_4 + 0x8c) = uVar1;
  *(undefined4 *)(param_4 + 0x90) = param_2;
  *(undefined4 *)(param_4 + 0x94) = param_3;
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


