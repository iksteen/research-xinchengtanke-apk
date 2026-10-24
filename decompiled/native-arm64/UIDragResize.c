/* ARM64 IL2CPP native pseudocode from Ghidra.
 * Recovered implementation, not original C# source.
 * Function boundaries follow the IL2CPP method address table. */


/* UIDragResize$$OnDragStart @ 0x9e4280
 * void UIDragResize__OnDragStart (UIDragResize_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIDragResize$$OnDragStart
   void UIDragResize__OnDragStart (UIDragResize_o* __this, const MethodInfo* method); */

void native_UIDragResize__OnDragStart_9e4280(long param_1)

{
  uint uVar1;
  ulong uVar2;
  long *plVar3;
  long lVar4;
  undefined8 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined4 uStack_44;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  
  if ((bRam00000000013418e5 & 1) == 0) {
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    native_sub_43273c(&UICamera_TypeInfo_12d6410);
    bRam00000000013418e5 = 1;
  }
  uStack_38 = 0;
  uStack_40 = 0;
  uStack_30 = 0;
  uStack_44 = 0;
  uVar5 = *(undefined8 *)(param_1 + 0x18);
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar2 = native_UnityEngine_Object__op_Inequality_8d76fc(uVar5,0,0);
  if ((uVar2 & 1) == 0) {
    return;
  }
  plVar3 = *(long **)(param_1 + 0x18);
  if ((plVar3 != (long *)0x0) &&
     (lVar4 = (**(code **)(*plVar3 + 0x1e8))(plVar3,*(undefined8 *)(*plVar3 + 0x1f0)), lVar4 != 0))
  {
    uVar1 = *(uint *)(lVar4 + 0x18);
    if ((uVar1 == 0) || ((uVar1 == 1 || (uVar1 < 4)))) {
      uVar5 = native_sub_43283c();
                    /* WARNING: Subroutine does not return */
      native_sub_4327dc(uVar5,0);
    }
    uVar7 = *(undefined4 *)(lVar4 + 0x24);
    uVar8 = *(undefined4 *)(lVar4 + 0x28);
    uStack_60 = 0;
    uStack_58 = 0;
    native_UnityEngine_Plane___ctor_8eb91c
              (*(undefined4 *)(lVar4 + 0x20),uVar7,uVar8,*(undefined4 *)(lVar4 + 0x2c),
               *(undefined4 *)(lVar4 + 0x30),*(undefined4 *)(lVar4 + 0x34),&uStack_60,0);
    *(undefined8 *)(param_1 + 0x40) = uStack_58;
    *(undefined8 *)(param_1 + 0x38) = uStack_60;
    if (((*(byte *)(_UICamera_TypeInfo_12d6410 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    native_UICamera__get_currentRay_c94b78(&uStack_78,0);
    uStack_38 = uStack_70;
    uStack_40 = uStack_78;
    uStack_30 = uStack_68;
    uStack_80 = uStack_68;
    uStack_88 = uStack_70;
    uStack_90 = uStack_78;
    uVar2 = native_UnityEngine_Plane__Raycast_8eb9a4(param_1 + 0x38,&uStack_90,&uStack_44,0);
    if ((uVar2 & 1) == 0) {
      return;
    }
    uVar6 = native_UnityEngine_Ray__GetPoint_7631f4(uStack_44,&uStack_40,0);
    *(undefined4 *)(param_1 + 0x48) = uVar6;
    *(undefined4 *)(param_1 + 0x4c) = uVar7;
    *(undefined4 *)(param_1 + 0x50) = uVar8;
    if ((*(long *)(param_1 + 0x18) != 0) &&
       (lVar4 = native_UIRect__get_cachedTransform_c27c58(*(long *)(param_1 + 0x18),0), lVar4 != 0))
    {
      uVar6 = native_UnityEngine_Transform__get_localPosition_7717f4(lVar4,0);
      lVar4 = *(long *)(param_1 + 0x18);
      *(undefined4 *)(param_1 + 0x54) = uVar6;
      *(undefined4 *)(param_1 + 0x58) = uVar7;
      *(undefined4 *)(param_1 + 0x5c) = uVar8;
      if (lVar4 != 0) {
        *(undefined4 *)(param_1 + 0x60) = *(undefined4 *)(lVar4 + 0xa4);
        uVar7 = *(undefined4 *)(lVar4 + 0xa8);
        *(undefined1 *)(param_1 + 0x68) = 1;
        *(undefined4 *)(param_1 + 100) = uVar7;
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* UIDragResize$$OnDrag @ 0x9e4448
 * void UIDragResize__OnDrag (UIDragResize_o* __this, UnityEngine_Vector2_o delta, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIDragResize$$OnDrag
   void UIDragResize__OnDrag (UIDragResize_o* __this, UnityEngine_Vector2_o delta, const MethodInfo*
   method); */

void native_UIDragResize__OnDrag_9e4448(long param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  ulong uVar6;
  long lVar7;
  undefined8 uVar8;
  float fVar9;
  float fVar10;
  undefined8 uVar11;
  float fVar12;
  ulong uVar13;
  float fVar14;
  ulong uVar15;
  ulong uVar16;
  float fVar17;
  float fVar19;
  float fVar20;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined4 uStack_44;
  ulong uVar18;
  
  if ((bRam00000000013418e6 & 1) == 0) {
    native_sub_43273c(&NGUIMath_TypeInfo_12d53b8);
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    native_sub_43273c(&UICamera_TypeInfo_12d6410);
    native_sub_43273c(&StringLiteral_UpdateAnchors_12f2d00);
    bRam00000000013418e6 = 1;
  }
  uStack_44 = 0;
  uStack_88 = 0;
  uStack_80 = 0;
  uStack_90 = 0;
  if (*(char *)(param_1 + 0x68) != '\0') {
    uVar8 = *(undefined8 *)(param_1 + 0x18);
    if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    uVar6 = native_UnityEngine_Object__op_Inequality_8d76fc(uVar8,0,0);
    if ((uVar6 & 1) != 0) {
      if (((*(byte *)(_UICamera_TypeInfo_12d6410 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
        native_sub_4327ec();
      }
      native_UICamera__get_currentRay_c94b78(&uStack_a8,0);
      uStack_88 = uStack_a0;
      uStack_90 = uStack_a8;
      uStack_80 = uStack_98;
      uStack_b0 = uStack_98;
      uStack_b8 = uStack_a0;
      uStack_c0 = uStack_a8;
      uVar6 = native_UnityEngine_Plane__Raycast_8eb9a4(param_1 + 0x38,&uStack_c0,&uStack_44,0);
      if ((uVar6 & 1) != 0) {
        if ((*(long *)(param_1 + 0x18) != 0) &&
           (lVar7 = native_UIRect__get_cachedTransform_c27c58(*(long *)(param_1 + 0x18),0),
           lVar7 != 0)) {
          fVar12 = *(float *)(param_1 + 0x58);
          fVar14 = *(float *)(param_1 + 0x5c);
          native_UnityEngine_Transform__set_localPosition_7718a4
                    (*(undefined4 *)(param_1 + 0x54),fVar12,fVar14,lVar7,0);
          if (*(long *)(param_1 + 0x18) != 0) {
            native_UIWidget__set_width_941dec
                      (*(long *)(param_1 + 0x18),*(undefined4 *)(param_1 + 0x60),0);
            if (*(long *)(param_1 + 0x18) != 0) {
              native_UIWidget__set_height_942098
                        (*(long *)(param_1 + 0x18),*(undefined4 *)(param_1 + 100),0);
              fVar9 = (float)native_UnityEngine_Ray__GetPoint_7631f4(uStack_44,&uStack_90,0);
              fVar17 = *(float *)(param_1 + 0x48);
              uVar18 = (ulong)(uint)fVar17;
              fVar19 = fVar12 - *(float *)(param_1 + 0x4c);
              fVar20 = fVar14 - *(float *)(param_1 + 0x50);
              fVar10 = (float)native_UnityEngine_Transform__get_position_77169c(lVar7,0);
              uVar13 = (ulong)(uint)(fVar19 + fVar12);
              uVar15 = (ulong)(uint)(fVar20 + fVar14);
              native_UnityEngine_Transform__set_position_77174c
                        ((fVar9 - fVar17) + fVar10,uVar13,uVar15,lVar7,0);
              native_UnityEngine_Transform__get_localRotation_771c84(lVar7,0);
              uVar8 = native_UnityEngine_Quaternion__Inverse_762204(0);
              uVar6 = uVar13;
              uVar16 = uVar15;
              fVar12 = (float)native_UnityEngine_Transform__get_localPosition_7717f4(lVar7,0);
              uVar11 = native_UnityEngine_Quaternion__op_Multiply_7629c0
                                 (uVar8,uVar13,uVar15,uVar18,fVar12 - *(float *)(param_1 + 0x54),
                                  (float)uVar6 - *(float *)(param_1 + 0x58),
                                  (float)uVar16 - *(float *)(param_1 + 0x5c),0);
              native_UnityEngine_Transform__set_localPosition_7718a4
                        (*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58),
                         *(undefined4 *)(param_1 + 0x5c),lVar7,0);
              uVar8 = *(undefined8 *)(param_1 + 0x18);
              uVar1 = *(undefined4 *)(param_1 + 0x20);
              uVar3 = *(undefined4 *)(param_1 + 0x24);
              uVar2 = *(undefined4 *)(param_1 + 0x28);
              uVar4 = *(undefined4 *)(param_1 + 0x2c);
              uVar5 = *(undefined4 *)(param_1 + 0x30);
              if (((*(byte *)(_NGUIMath_TypeInfo_12d53b8 + 0x133) >> 2 & 1) != 0) &&
                 (*(int *)(_NGUIMath_TypeInfo_12d53b8 + 0xe0) == 0)) {
                native_sub_4327ec();
              }
              native_NGUIMath__ResizeWidget_8070f4
                        (uVar11,uVar13,uVar8,uVar1,uVar3,uVar2,uVar4,uVar5,0);
              if (*(char *)(param_1 + 0x34) == '\0') {
                return;
              }
              if (*(long *)(param_1 + 0x18) != 0) {
                native_UnityEngine_Component__BroadcastMessage_8dac40
                          (*(long *)(param_1 + 0x18),_StringLiteral_UpdateAnchors_12f2d00,0);
                return;
              }
            }
          }
        }
                    /* WARNING: Subroutine does not return */
        native_sub_432810();
      }
    }
  }
  return;
}



/* UIDragResize$$OnDragEnd @ 0x9e4718
 * void UIDragResize__OnDragEnd (UIDragResize_o* __this, const MethodInfo* method); */

/* UIDragResize$$OnDragEnd
   void UIDragResize__OnDragEnd (UIDragResize_o* __this, const MethodInfo* method); */

void native_UIDragResize__OnDragEnd_9e4718(long param_1)

{
  *(undefined1 *)(param_1 + 0x68) = 0;
  return;
}



/* UIDragResize$$.ctor @ 0x9e4720
 * void UIDragResize___ctor (UIDragResize_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIDragResize$$.ctor
   void UIDragResize___ctor (UIDragResize_o* __this, const MethodInfo* method); */

undefined1  [16] native_UIDragResize___ctor_9e4720(ulong param_1)

{
  undefined1 auVar1 [16];
  
  *(undefined8 *)(param_1 + 0x28) = 0x186a000000064;
  *(undefined8 *)(param_1 + 0x20) = 0x6400000008;
  *(undefined4 *)(param_1 + 0x30) = 100000;
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


