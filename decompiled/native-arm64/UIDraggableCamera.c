/* ARM64 IL2CPP native pseudocode from Ghidra.
 * Recovered implementation, not original C# source.
 * Function boundaries follow the IL2CPP method address table. */


/* UIDraggableCamera$$get_cachedCamera @ 0x9e4f90
 * UnityEngine_Camera_o* UIDraggableCamera__get_cachedCamera (UIDraggableCamera_o* __this, const MethodInfo* method); */

/* UIDraggableCamera$$get_cachedCamera
   UnityEngine_Camera_o* UIDraggableCamera__get_cachedCamera (UIDraggableCamera_o* __this, const
   MethodInfo* method); */

undefined8 native_UIDraggableCamera__get_cachedCamera_9e4f90(long param_1)

{
  return *(undefined8 *)(param_1 + 0x50);
}



/* UIDraggableCamera$$get_currentMomentum @ 0x9e4f98
 * UnityEngine_Vector2_o UIDraggableCamera__get_currentMomentum (UIDraggableCamera_o* __this, const MethodInfo* method); */

/* UIDraggableCamera$$get_currentMomentum
   UnityEngine_Vector2_o UIDraggableCamera__get_currentMomentum (UIDraggableCamera_o* __this, const
   MethodInfo* method); */

undefined4 native_UIDraggableCamera__get_currentMomentum_9e4f98(long param_1)

{
  return *(undefined4 *)(param_1 + 100);
}



/* UIDraggableCamera$$set_currentMomentum @ 0x9e4fa0
 * void UIDraggableCamera__set_currentMomentum (UIDraggableCamera_o* __this, UnityEngine_Vector2_o value, const MethodInfo* method); */

/* UIDraggableCamera$$set_currentMomentum
   void UIDraggableCamera__set_currentMomentum (UIDraggableCamera_o* __this, UnityEngine_Vector2_o
   value, const MethodInfo* method); */

void native_UIDraggableCamera__set_currentMomentum_9e4fa0
               (undefined4 param_1,undefined4 param_2,long param_3)

{
  *(undefined4 *)(param_3 + 100) = param_1;
  *(undefined4 *)(param_3 + 0x68) = param_2;
  return;
}



/* UIDraggableCamera$$get_zoom @ 0x9e4fa8
 * float UIDraggableCamera__get_zoom (UIDraggableCamera_o* __this, const MethodInfo* method); */

/* WARNING: Removing unreachable block (ram,0x008e54e0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIDraggableCamera$$get_zoom
   float UIDraggableCamera__get_zoom (UIDraggableCamera_o* __this, const MethodInfo* method); */

ulong native_UIDraggableCamera__get_zoom_9e4fa8(long param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  
  if ((bRam00000000013418ee & 1) == 0) {
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    bRam00000000013418ee = 1;
  }
  uVar2 = *(undefined8 *)(param_1 + 0x50);
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar1 = native_UnityEngine_Object__op_Equality_8e9a3c(uVar2,0,0);
  if ((((uVar1 & 1) == 0) && (*(float *)(param_1 + 0x2c) != 0.0)) &&
     (*(float *)(param_1 + 0x30) != 0.0)) {
    if (*(long *)(param_1 + 0x50) == 0) {
                    /* WARNING: Subroutine does not return */
      native_sub_432810();
    }
    native_UnityEngine_Camera__get_orthographicSize_8d8630(*(long *)(param_1 + 0x50),0);
    return 0;
  }
  return uVar1;
}



/* UIDraggableCamera$$Start @ 0x9e5074
 * void UIDraggableCamera__Start (UIDraggableCamera_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIDraggableCamera$$Start
   void UIDraggableCamera__Start (UIDraggableCamera_o* __this, const MethodInfo* method); */

void native_UIDraggableCamera__Start_9e5074(long param_1)

{
  undefined8 uVar1;
  ulong uVar2;
  
  if ((bRam00000000013418ef & 1) == 0) {
    native_sub_43273c(&Method_UnityEngine_Component_GetComponent_Camera____12e29a8);
    native_sub_43273c(&UnityEngine_Debug_TypeInfo_12d4338);
    native_sub_43273c(&NGUITools_TypeInfo_12d53c8);
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    native_sub_43273c(&StringLiteral__needs_the__Root_For_Bounds__parameter_to_be_set_12eaeb8);
    bRam00000000013418ef = 1;
  }
  uVar1 = native_UnityEngine_Component__GetComponent_ActiveAnimation__49daec
                    (param_1,_Method_UnityEngine_Component_GetComponent_Camera____12e29a8);
  *(undefined8 *)(param_1 + 0x50) = uVar1;
  native_sub_4326e0(param_1 + 0x50);
  uVar1 = native_UnityEngine_Component__get_transform_8da62c(param_1,0);
  *(undefined8 *)(param_1 + 0x58) = uVar1;
  native_sub_4326e0(param_1 + 0x58);
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar2 = native_UnityEngine_Object__op_Equality_8e9a3c(uVar1,0,0);
  if ((uVar2 & 1) != 0) {
    uVar1 = native_UnityEngine_Component__get_gameObject_8da66c(param_1,0);
    if (((*(byte *)(_NGUITools_TypeInfo_12d53c8 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_NGUITools_TypeInfo_12d53c8 + 0xe0) == 0)) {
      native_sub_4327ec(_NGUITools_TypeInfo_12d53c8);
    }
    uVar1 = native_NGUITools__GetHierarchy_72d178(uVar1,0);
    uVar1 = native_System_String__Concat_afbd68
                      (uVar1,_StringLiteral__needs_the__Root_For_Bounds__parameter_to_be_set_12eaeb8
                       ,0);
    if (((*(byte *)(_UnityEngine_Debug_TypeInfo_12d4338 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UnityEngine_Debug_TypeInfo_12d4338 + 0xe0) == 0)) {
      native_sub_4327ec(_UnityEngine_Debug_TypeInfo_12d4338);
    }
    native_UnityEngine_Debug__LogError_8dc6f8(uVar1,param_1,0);
    if (pcRam0000000001340948 == (code *)0x0) {
      pcRam0000000001340948 = (code *)native_sub_4326f0(&UNK_00e2c702);
    }
                    /* WARNING: Could not recover jumptable at 0x008d7b58. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*pcRam0000000001340948)(param_1,0);
    return;
  }
  return;
}



/* UIDraggableCamera$$CalculateConstrainOffset @ 0x9e51fc
 * UnityEngine_Vector3_o UIDraggableCamera__CalculateConstrainOffset (UIDraggableCamera_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIDraggableCamera$$CalculateConstrainOffset
   UnityEngine_Vector3_o UIDraggableCamera__CalculateConstrainOffset (UIDraggableCamera_o* __this,
   const MethodInfo* method); */

void native_UIDraggableCamera__CalculateConstrainOffset_9e51fc
               (undefined1 param_1 [16],undefined4 param_2,undefined4 param_3,undefined4 param_4,
               long param_5)

{
  int iVar1;
  int iVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined4 uVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  undefined8 uVar12;
  float fVar13;
  undefined8 uStack_80;
  undefined8 uStack_78;
  
  if ((bRam00000000013418f0 & 1) == 0) {
    native_sub_43273c(&NGUIMath_TypeInfo_12d53b8);
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    bRam00000000013418f0 = 1;
  }
  uStack_80 = 0;
  uStack_78 = 0;
  uVar4 = *(undefined8 *)(param_5 + 0x18);
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar3 = native_UnityEngine_Object__op_Equality_8e9a3c(uVar4,0,0);
  if ((uVar3 & 1) != 0) {
    native_UnityEngine_Vector3__get_zero_776668(0);
    return;
  }
  if (*(long *)(param_5 + 0x50) != 0) {
    uVar5 = native_UnityEngine_Camera__get_rect_8d8b48(*(long *)(param_5 + 0x50),0);
    uStack_80 = CONCAT44(param_2,uVar5);
    uStack_78 = CONCAT44(param_4,param_3);
    iVar1 = native_UnityEngine_Screen__get_width_76a5e4(0);
    iVar2 = native_UnityEngine_Screen__get_height_76a618(0);
    fVar6 = (float)native_UnityEngine_Rect__get_xMin_76363c(&uStack_80,0);
    fVar7 = (float)native_UnityEngine_Rect__get_yMin_763644(&uStack_80,0);
    fVar8 = (float)native_UnityEngine_Rect__get_xMax_76365c(&uStack_80,0);
    fVar9 = (float)native_UnityEngine_Rect__get_yMax_76366c(&uStack_80,0);
    if (*(long *)(param_5 + 0x50) != 0) {
      uVar3 = (ulong)(uint)(fVar7 * (float)iVar2);
      uVar4 = native_UnityEngine_Camera__ScreenToWorldPoint_8d9170
                        (fVar6 * (float)iVar1,uVar3,0,*(long *)(param_5 + 0x50),0);
      if (*(long *)(param_5 + 0x50) != 0) {
        fVar9 = fVar9 * (float)iVar2;
        uVar12 = native_UnityEngine_Camera__ScreenToWorldPoint_8d9170
                           (fVar8 * (float)iVar1,fVar9,0,*(long *)(param_5 + 0x50),0);
        fVar8 = *(float *)(param_5 + 0x40);
        fVar7 = *(float *)(param_5 + 0x44);
        fVar6 = fVar9;
        if (*(char *)(param_5 + 0x48) == '\0') {
LAB_009e53a4:
          param_5 = param_5 + 0x6c;
          fVar10 = (float)native_UnityEngine_Bounds__get_min_8d7f18(param_5,0);
          native_UnityEngine_Bounds__get_min_8d7f18(param_5,0);
          fVar13 = fVar6 - fVar7;
          fVar11 = (float)native_UnityEngine_Bounds__get_max_8d7f88(param_5,0);
          native_UnityEngine_Bounds__get_max_8d7f88(param_5,0);
          if (((*(byte *)(_NGUIMath_TypeInfo_12d53b8 + 0x133) >> 2 & 1) != 0) &&
             (*(int *)(_NGUIMath_TypeInfo_12d53b8 + 0xe0) == 0)) {
            native_sub_4327ec();
          }
          native_NGUIMath__ConstrainRect_805500
                    (fVar10 - fVar8,fVar13,fVar8 + fVar11,fVar7 + fVar6,uVar4,uVar3,uVar12,fVar9,0);
          return;
        }
        if (*(long *)(param_5 + 0x50) != 0) {
          fVar10 = (float)native_UnityEngine_Camera__get_orthographicSize_8d8630
                                    (*(long *)(param_5 + 0x50),0);
          if (*(long *)(param_5 + 0x50) != 0) {
            fVar11 = (float)native_UnityEngine_Camera__get_aspect_8d8870
                                      (*(long *)(param_5 + 0x50),0);
            fVar8 = fVar8 * (fVar10 + fVar10) * fVar11;
            fVar7 = fVar7 * (fVar10 + fVar10);
            goto LAB_009e53a4;
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* UIDraggableCamera$$ConstrainToBounds @ 0x9e5464
 * bool UIDraggableCamera__ConstrainToBounds (UIDraggableCamera_o* __this, bool immediate, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIDraggableCamera$$ConstrainToBounds
   bool UIDraggableCamera__ConstrainToBounds (UIDraggableCamera_o* __this, bool immediate, const
   MethodInfo* method); */

undefined8
native_UIDraggableCamera__ConstrainToBounds_9e5464
          (undefined1 param_1 [16],float param_2,float param_3,long param_4,ulong param_5)

{
  ulong uVar1;
  long lVar2;
  undefined8 uVar3;
  float fVar4;
  undefined8 uStack_40;
  float fStack_38;
  
  if ((bRam00000000013418f1 & 1) == 0) {
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    bRam00000000013418f1 = 1;
  }
  fStack_38 = 0.0;
  uStack_40 = 0;
  uVar3 = *(undefined8 *)(param_4 + 0x58);
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar1 = native_UnityEngine_Object__op_Inequality_8d76fc(uVar3,0,0);
  if ((uVar1 & 1) != 0) {
    uVar3 = *(undefined8 *)(param_4 + 0x18);
    if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    uVar1 = native_UnityEngine_Object__op_Inequality_8d76fc(uVar3,0,0);
    if ((uVar1 & 1) != 0) {
      uStack_40._0_4_ = (float)native_UIDraggableCamera__CalculateConstrainOffset_9e51fc(param_4);
      fStack_38 = param_3;
      uStack_40._4_4_ = param_2;
      fVar4 = (float)native_UnityEngine_Vector3__get_sqrMagnitude_776910(&uStack_40,0);
      if (0.0 < fVar4) {
        if ((param_5 & 1) == 0) {
          uVar3 = native_UnityEngine_Component__get_gameObject_8da66c(param_4,0);
          if (*(long *)(param_4 + 0x58) != 0) {
            fVar4 = (float)native_UnityEngine_Transform__get_position_77169c
                                     (*(long *)(param_4 + 0x58),0);
            lVar2 = native_SpringPosition__Begin_73f250
                              (fVar4 - (float)uStack_40,param_2 - uStack_40._4_4_,
                               param_3 - fStack_38,0x41500000,uVar3,0);
            if (lVar2 != 0) {
              *(undefined2 *)(lVar2 + 0x28) = 0x101;
              return 1;
            }
          }
        }
        else {
          lVar2 = *(long *)(param_4 + 0x58);
          if (lVar2 != 0) {
            fVar4 = (float)native_UnityEngine_Transform__get_position_77169c(lVar2,0);
            native_UnityEngine_Transform__set_position_77174c
                      (fVar4 - (float)uStack_40,param_2 - uStack_40._4_4_,param_3 - fStack_38,lVar2,
                       0);
            return 1;
          }
        }
                    /* WARNING: Subroutine does not return */
        native_sub_432810();
      }
    }
  }
  return 0;
}



/* UIDraggableCamera$$Press @ 0x9df9a4
 * void UIDraggableCamera__Press (UIDraggableCamera_o* __this, bool isPressed, const MethodInfo* method); */

/* WARNING: Removing unreachable block (ram,0x009e5538) */
/* WARNING: Removing unreachable block (ram,0x009e5540) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIDraggableCamera$$Press
   void UIDraggableCamera__Press (UIDraggableCamera_o* __this, bool isPressed, const MethodInfo*
   method); */

ulong native_UIDraggableCamera__Press_9df9a4
                (undefined1 param_1 [16],float param_2,float param_3,long param_4,byte param_5)

{
  ulong uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  float fVar5;
  undefined8 uStack_48;
  undefined8 uStack_40;
  float fStack_38;
  undefined4 uStack_34;
  
  if ((bRam00000000013418f2 & 1) == 0) {
    native_sub_43273c(&Method_UnityEngine_Component_GetComponent_SpringPosition____12e2b10);
    native_sub_43273c(&NGUIMath_TypeInfo_12d53b8);
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    bRam00000000013418f2 = 1;
  }
  if ((param_5 & 1) != 0) {
    *(undefined1 *)(param_4 + 0x88) = 0;
  }
  uVar3 = *(undefined8 *)(param_4 + 0x18);
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar1 = native_UnityEngine_Object__op_Inequality_8d76fc(uVar3,0,0);
  if ((uVar1 & 1) == 0) {
    return uVar1;
  }
  *(byte *)(param_4 + 0x60) = param_5 & 1;
  if ((param_5 & 1) == 0) {
    if (*(int *)(param_4 + 0x34) != 2) {
      return uVar1;
    }
    if ((bRam00000000013418f1 & 1) == 0) {
      native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
      bRam00000000013418f1 = 1;
    }
    fStack_38 = 0.0;
    uStack_40 = 0;
    uVar3 = *(undefined8 *)(param_4 + 0x58);
    if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    uVar1 = native_UnityEngine_Object__op_Inequality_8d76fc(uVar3,0,0);
    if ((uVar1 & 1) != 0) {
      uVar3 = *(undefined8 *)(param_4 + 0x18);
      if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
        native_sub_4327ec();
      }
      uVar1 = native_UnityEngine_Object__op_Inequality_8d76fc(uVar3,0,0);
      if ((uVar1 & 1) != 0) {
        uStack_40._0_4_ = (float)native_UIDraggableCamera__CalculateConstrainOffset_9e51fc(param_4);
        fStack_38 = param_3;
        uStack_40._4_4_ = param_2;
        fVar5 = (float)native_UnityEngine_Vector3__get_sqrMagnitude_776910(&uStack_40,0);
        if (0.0 < fVar5) {
          uVar3 = native_UnityEngine_Component__get_gameObject_8da66c(param_4,0);
          if (*(long *)(param_4 + 0x58) != 0) {
            fVar5 = (float)native_UnityEngine_Transform__get_position_77169c
                                     (*(long *)(param_4 + 0x58),0);
            lVar2 = native_SpringPosition__Begin_73f250
                              (fVar5 - (float)uStack_40,param_2 - uStack_40._4_4_,
                               param_3 - fStack_38,0x41500000,uVar3,0);
            if (lVar2 != 0) {
              *(undefined2 *)(lVar2 + 0x28) = 0x101;
              return 1;
            }
          }
                    /* WARNING: Subroutine does not return */
          native_sub_432810();
        }
      }
    }
    return 0;
  }
  uVar3 = *(undefined8 *)(param_4 + 0x18);
  if (((*(byte *)(_NGUIMath_TypeInfo_12d53b8 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_NGUIMath_TypeInfo_12d53b8 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  native_NGUIMath__CalculateAbsoluteWidgetBounds_8055d0(&uStack_48,uVar3,0);
  *(ulong *)(param_4 + 0x7c) = CONCAT44(uStack_34,fStack_38);
  *(undefined8 *)(param_4 + 0x74) = uStack_40;
  *(undefined8 *)(param_4 + 0x6c) = uStack_48;
  uVar4 = native_UnityEngine_Vector2__get_zero_765ef0(0);
  *(undefined4 *)(param_4 + 100) = uVar4;
  *(float *)(param_4 + 0x68) = param_2;
  if (*(float *)(param_4 + 0x2c) == 0.0) {
    *(undefined4 *)(param_4 + 0x84) = 0;
  }
  lVar2 = native_UnityEngine_Component__GetComponent_ActiveAnimation__49daec
                    (param_4,_Method_UnityEngine_Component_GetComponent_SpringPosition____12e2b10);
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec(_UnityEngine_Object_TypeInfo_12d54e0);
  }
  uVar1 = native_UnityEngine_Object__op_Inequality_8d76fc(lVar2,0,0);
  if ((uVar1 & 1) == 0) {
    return uVar1;
  }
  if (lVar2 != 0) {
    uVar1 = native_UnityEngine_Behaviour__set_enabled_8d7b0c(lVar2,0,0);
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* UIDraggableCamera$$Drag @ 0x9dfc6c
 * void UIDraggableCamera__Drag (UIDraggableCamera_o* __this, UnityEngine_Vector2_o delta, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIDraggableCamera$$Drag
   void UIDraggableCamera__Drag (UIDraggableCamera_o* __this, UnityEngine_Vector2_o delta, const
   MethodInfo* method); */

void native_UIDraggableCamera__Drag_9dfc6c(float param_1,float param_2,long param_3)

{
  int iVar1;
  ulong uVar2;
  long lVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  undefined4 uVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  undefined8 uVar11;
  
  fVar8 = param_2;
  if ((bRam00000000013418f3 & 1) == 0) {
    native_sub_43273c(&UICamera_TypeInfo_12d6410);
    bRam00000000013418f3 = 1;
  }
  if ((*(char *)(param_3 + 0x38) != '\0') && (*(char *)(param_3 + 0x88) == '\0')) {
    *(undefined1 *)(param_3 + 0x88) = 1;
    return;
  }
  if (((*(byte *)(_UICamera_TypeInfo_12d6410 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  lVar3 = *(long *)(*(long *)(_UICamera_TypeInfo_12d6410 + 0xb8) + 0xe0);
  if (lVar3 != 0) {
    *(undefined4 *)(lVar3 + 0x70) = 2;
    if (*(long *)(param_3 + 0x58) != 0) {
      uVar11 = *(undefined8 *)(param_3 + 0x20);
      native_UnityEngine_Transform__get_lossyScale_772cac(*(long *)(param_3 + 0x58),0);
      iVar1 = native_UnityEngine_Screen__get_height_76a618(0);
      if (*(long *)(param_3 + 0x50) != 0) {
        fVar4 = (float)native_UnityEngine_Camera__get_orthographicSize_8d8630
                                 (*(long *)(param_3 + 0x50),0);
        lVar3 = *(long *)(param_3 + 0x58);
        if (lVar3 != 0) {
          fVar8 = fVar8 * (float)iVar1;
          param_1 = param_1 * (float)uVar11;
          fVar4 = (fVar4 + fVar4) / fVar8;
          fVar5 = param_1 * fVar4;
          fVar4 = param_2 * (float)((ulong)uVar11 >> 0x20) * fVar4;
          fVar6 = (float)native_UnityEngine_Transform__get_localPosition_7717f4(lVar3,0);
          native_UnityEngine_Transform__set_localPosition_7718a4
                    (fVar6 - fVar5,fVar8 - fVar4,param_1 + 0.0,lVar3,0);
          fVar8 = *(float *)(param_3 + 0x3c) * 0.01;
          fVar9 = (float)*(undefined8 *)(param_3 + 100);
          fVar10 = (float)((ulong)*(undefined8 *)(param_3 + 100) >> 0x20);
          fVar6 = (float)native_UnityEngine_Mathf__Clamp01_8d9d9c(0x3f2b851f,0);
          fVar5 = (fVar9 - fVar5 * fVar8) - fVar9;
          *(ulong *)(param_3 + 100) =
               CONCAT44(fVar10 + ((fVar10 - fVar4 * fVar8) - fVar10) * fVar6,fVar9 + fVar5 * fVar6);
          if (*(int *)(param_3 + 0x34) == 2) {
            return;
          }
          uVar2 = native_UIDraggableCamera__ConstrainToBounds_9e5464(param_3,1);
          if ((uVar2 & 1) == 0) {
            return;
          }
          uVar7 = native_UnityEngine_Vector2__get_zero_765ef0(0);
          *(undefined4 *)(param_3 + 100) = uVar7;
          *(float *)(param_3 + 0x68) = fVar5;
          if (*(float *)(param_3 + 0x2c) != 0.0) {
            return;
          }
          *(undefined4 *)(param_3 + 0x84) = 0;
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* UIDraggableCamera$$Scroll @ 0x9dff40
 * void UIDraggableCamera__Scroll (UIDraggableCamera_o* __this, float delta, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIDraggableCamera$$Scroll
   void UIDraggableCamera__Scroll (UIDraggableCamera_o* __this, float delta, const MethodInfo*
   method); */

void native_UIDraggableCamera__Scroll_9dff40(undefined8 param_1,long param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  float fVar3;
  float fVar4;
  
  if ((bRam00000000013418f4 & 1) == 0) {
    native_sub_43273c(&NGUITools_TypeInfo_12d53c8);
    bRam00000000013418f4 = 1;
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
      fVar3 = (float)native_UnityEngine_Mathf__Sign_8e51d8(*(undefined4 *)(param_2 + 0x84),0);
      fVar4 = (float)native_UnityEngine_Mathf__Sign_8e51d8(param_1,0);
      if (fVar3 == fVar4) {
        fVar3 = *(float *)(param_2 + 0x84);
      }
      else {
        fVar3 = 0.0;
        *(undefined4 *)(param_2 + 0x84) = 0;
      }
      *(float *)(param_2 + 0x84) = fVar3 + *(float *)(param_2 + 0x28) * (float)param_1;
    }
  }
  return;
}



/* UIDraggableCamera$$Update @ 0x9e55e8
 * void UIDraggableCamera__Update (UIDraggableCamera_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIDraggableCamera$$Update
   void UIDraggableCamera__Update (UIDraggableCamera_o* __this, const MethodInfo* method); */

void native_UIDraggableCamera__Update_9e55e8
               (undefined1 param_1 [16],undefined1 param_2 [16],float param_3,long param_4)

{
  int iVar1;
  long lVar2;
  ulong uVar3;
  float fVar4;
  undefined4 uVar5;
  float fVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  float fVar9;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  if ((bRam00000000013418f5 & 1) == 0) {
    native_sub_43273c(&Method_UnityEngine_Component_GetComponent_SpringPosition____12e2b10);
    native_sub_43273c(&NGUIMath_TypeInfo_12d53b8);
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    bRam00000000013418f5 = 1;
  }
  uVar7 = native_RealTime__get_deltaTime_73d0b8(0);
  if (*(char *)(param_4 + 0x60) == '\0') {
    if (*(float *)(param_4 + 0x2c) == 0.0) {
      fVar9 = *(float *)(param_4 + 0x84);
      fVar4 = fVar9 * 20.0;
      *(ulong *)(param_4 + 100) =
           CONCAT44((float)((ulong)*(undefined8 *)(param_4 + 100) >> 0x20) +
                    (float)((ulong)*(undefined8 *)(param_4 + 0x20) >> 0x20) * fVar4,
                    (float)*(undefined8 *)(param_4 + 100) +
                    (float)*(undefined8 *)(param_4 + 0x20) * fVar4);
      if (((*(byte *)(_NGUIMath_TypeInfo_12d53b8 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_NGUIMath_TypeInfo_12d53b8 + 0xe0) == 0)) {
        native_sub_4327ec();
      }
      param_3 = 20.0;
      uVar5 = native_NGUIMath__SpringLerp_806544(fVar9,0,0x41a00000,uVar7,0);
      *(undefined4 *)(param_4 + 0x84) = uVar5;
    }
    else {
      if (*(long *)(param_4 + 0x50) == 0) goto LAB_009e59b0;
      uVar3 = native_UnityEngine_Camera__get_orthographic_8d86c0(*(long *)(param_4 + 0x50),0);
      if ((uVar3 & 1) != 0) {
        lVar2 = *(long *)(param_4 + 0x50);
        if (lVar2 == 0) goto LAB_009e59b0;
        uVar8 = native_UnityEngine_Camera__get_orthographicSize_8d8630(lVar2,0);
        if (*(long *)(param_4 + 0x50) == 0) goto LAB_009e59b0;
        fVar4 = (float)native_UnityEngine_Camera__get_orthographicSize_8d8630
                                 (*(long *)(param_4 + 0x50),0);
        fVar9 = *(float *)(param_4 + 0x84);
        if (((*(byte *)(_NGUIMath_TypeInfo_12d53b8 + 0x133) >> 2 & 1) != 0) &&
           (*(int *)(_NGUIMath_TypeInfo_12d53b8 + 0xe0) == 0)) {
          native_sub_4327ec();
        }
        uVar8 = native_NGUIMath__SpringLerp_806544(uVar8,fVar4 - fVar9,0x3f800000,uVar7,0);
        native_UnityEngine_Mathf__Clamp_8e51ec
                  (uVar8,*(undefined4 *)(param_4 + 0x2c),*(undefined4 *)(param_4 + 0x30),0);
        native_UnityEngine_Camera__set_orthographicSize_8d8670(lVar2,0);
        fVar4 = (float)native_NGUIMath__SpringLerp_806544
                                 (*(undefined4 *)(param_4 + 0x84),0,0x40a00000,uVar7,0);
        param_3 = ABS(fVar4);
        *(float *)(param_4 + 0x84) = fVar4;
        if (param_3 < 0.001) {
          *(undefined4 *)(param_4 + 0x84) = 0;
        }
      }
    }
    fVar4 = (float)native_UnityEngine_Vector2__get_magnitude_7752bc(param_4 + 100,0);
    fVar9 = 0.01;
    if ((0.01 < fVar4) || (*(float *)(param_4 + 0x84) != 0.0)) {
      lVar2 = *(long *)(param_4 + 0x58);
      if (lVar2 != 0) {
        fVar4 = (float)native_UnityEngine_Transform__get_localPosition_7717f4(lVar2,0);
        if (((*(byte *)(_NGUIMath_TypeInfo_12d53b8 + 0x133) >> 2 & 1) != 0) &&
           (*(int *)(_NGUIMath_TypeInfo_12d53b8 + 0xe0) == 0)) {
          native_sub_4327ec();
        }
        fVar6 = (float)native_NGUIMath__SpringDampen_80641c(0x41100000,uVar7,param_4 + 100,0);
        native_UnityEngine_Transform__set_localPosition_7718a4
                  (fVar4 + fVar6,fVar9 + (float)uVar7,param_3 + 0.0,lVar2,0);
        native_NGUIMath__CalculateAbsoluteWidgetBounds_8055d0
                  (&uStack_68,*(undefined8 *)(param_4 + 0x18),0);
        *(undefined8 *)(param_4 + 0x7c) = uStack_58;
        *(undefined8 *)(param_4 + 0x74) = uStack_60;
        *(undefined8 *)(param_4 + 0x6c) = uStack_68;
        uVar3 = native_UIDraggableCamera__ConstrainToBounds_9e5464
                          (param_4,*(int *)(param_4 + 0x34) == 0);
        if ((uVar3 & 1) == 0) {
          lVar2 = native_UnityEngine_Component__GetComponent_ActiveAnimation__49daec
                            (param_4,
                             _Method_UnityEngine_Component_GetComponent_SpringPosition____12e2b10);
          if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
             (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
            native_sub_4327ec(_UnityEngine_Object_TypeInfo_12d54e0);
          }
          uVar3 = native_UnityEngine_Object__op_Inequality_8d76fc(lVar2,0,0);
          if ((uVar3 & 1) != 0) {
            if (lVar2 == 0) goto LAB_009e59b0;
            native_UnityEngine_Behaviour__set_enabled_8d7b0c(lVar2,0,0);
          }
        }
        return;
      }
LAB_009e59b0:
                    /* WARNING: Subroutine does not return */
      native_sub_432810();
    }
  }
  else {
    lVar2 = native_UnityEngine_Component__GetComponent_ActiveAnimation__49daec
                      (param_4,_Method_UnityEngine_Component_GetComponent_SpringPosition____12e2b10)
    ;
    if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
      native_sub_4327ec(_UnityEngine_Object_TypeInfo_12d54e0);
    }
    uVar3 = native_UnityEngine_Object__op_Inequality_8d76fc(lVar2,0,0);
    if ((uVar3 & 1) != 0) {
      if (lVar2 == 0) goto LAB_009e59b0;
      native_UnityEngine_Behaviour__set_enabled_8d7b0c(lVar2,0,0);
    }
  }
  if (*(float *)(param_4 + 0x2c) == 0.0) {
    *(undefined4 *)(param_4 + 0x84) = 0;
  }
  if (((*(byte *)(_NGUIMath_TypeInfo_12d53b8 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_NGUIMath_TypeInfo_12d53b8 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  fVar4 = (float)uVar7;
  if (1.0 < (float)uVar7) {
    fVar4 = 1.0;
  }
  iVar1 = native_UnityEngine_Mathf__RoundToInt_8e50f0(fVar4 * 1000.0,0,0);
  fVar4 = (float)func_0x002c89c0(0x3f7db22d,(float)iVar1);
  func_0x002c9a20(0x3f7db22d);
  uVar7 = *(undefined8 *)(param_4 + 100);
  *(undefined8 *)(param_4 + 100) =
       CONCAT44((float)((ulong)uVar7 >> 0x20) * fVar4,(float)uVar7 * fVar4);
  return;
}



/* UIDraggableCamera$$.ctor @ 0x9e59b4
 * void UIDraggableCamera___ctor (UIDraggableCamera_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIDraggableCamera$$.ctor
   void UIDraggableCamera___ctor (UIDraggableCamera_o* __this, const MethodInfo* method); */

undefined1  [16]
native_UIDraggableCamera___ctor_9e59b4(undefined1 param_1 [16],undefined4 param_2,ulong param_3)

{
  undefined4 uVar1;
  undefined1 auVar2 [16];
  
  uVar1 = native_UnityEngine_Vector2__get_one_765354(0);
  *(undefined4 *)(param_3 + 0x20) = uVar1;
  *(undefined4 *)(param_3 + 0x24) = param_2;
  *(undefined4 *)(param_3 + 0x34) = 2;
  *(undefined1 *)(param_3 + 0x38) = 1;
  *(undefined4 *)(param_3 + 0x3c) = 0x420c0000;
  uVar1 = native_UnityEngine_Vector2__get_zero_765ef0(0);
  *(undefined4 *)(param_3 + 0x40) = uVar1;
  *(undefined4 *)(param_3 + 0x44) = param_2;
  *(undefined1 *)(param_3 + 0x48) = 1;
  uVar1 = native_UnityEngine_Vector2__get_zero_765ef0(0);
  *(undefined4 *)(param_3 + 100) = uVar1;
  *(undefined4 *)(param_3 + 0x68) = param_2;
  if ((bRam0000000001340ae0 & 1) == 0) {
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0,0);
    bRam0000000001340ae0 = 1;
  }
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  auVar2._8_8_ = 0;
  auVar2._0_8_ = param_3;
  return auVar2;
}


