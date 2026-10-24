/* ARM64 IL2CPP native pseudocode from Ghidra.
 * Recovered implementation, not original C# source.
 * Function boundaries follow the IL2CPP method address table. */


/* Joystick$$get_Horizontal @ 0x7f7094
 * float Joystick__get_Horizontal (Joystick_o* __this, const MethodInfo* method); */

/* WARNING: Removing unreachable block (ram,0x007f723c) */
/* WARNING: Removing unreachable block (ram,0x007f7244) */
/* WARNING: Removing unreachable block (ram,0x007f7248) */
/* WARNING: Removing unreachable block (ram,0x007f724c) */
/* WARNING: Removing unreachable block (ram,0x007f7254) */
/* WARNING: Removing unreachable block (ram,0x007f7258) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Joystick$$get_Horizontal
   float Joystick__get_Horizontal (Joystick_o* __this, const MethodInfo* method); */

float native_Joystick__get_Horizontal_7f7094(undefined1 param_1 [16],float param_2,long param_3)

{
  undefined8 uVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  double dVar6;
  float fStack_50;
  float fStack_4c;
  undefined8 uStack_48;
  
  fVar2 = *(float *)(param_3 + 0x50);
  if (*(char *)(param_3 + 0x24) != '\0') {
    fVar3 = fVar2;
    if (fVar2 != 0.0) {
      if (*(int *)(param_3 + 0x20) == 0) {
        uVar1 = *(undefined8 *)(param_3 + 0x50);
        fStack_50 = (float)native_UnityEngine_Vector2__get_up_775914(0);
        fStack_4c = param_2;
        uStack_48 = uVar1;
        if (cRam00000000013404ac == '\0') {
          native_sub_43273c(&System_Math_TypeInfo_12d51c0);
          cRam00000000013404ac = '\x01';
        }
        fVar3 = (float)native_UnityEngine_Vector2__get_sqrMagnitude_775674(&uStack_48,0);
        fVar4 = (float)native_UnityEngine_Vector2__get_sqrMagnitude_775674(&fStack_50,0);
        if (((*(byte *)(_System_Math_TypeInfo_12d51c0 + 0x133) >> 2 & 1) != 0) &&
           (*(int *)(_System_Math_TypeInfo_12d51c0 + 0xe0) == 0)) {
          native_sub_4327ec();
        }
        fVar5 = SQRT(fVar3 * fVar4);
        if (NAN(fVar5)) {
          fVar5 = (float)func_0x002ca470(fVar3 * fVar4);
        }
        fVar4 = 0.0;
        if (1e-15 <= fVar5) {
          fVar3 = (float)native_UnityEngine_Mathf__Clamp_8e51ec
                                   (((float)uStack_48 * fStack_50 + uStack_48._4_4_ * fStack_4c) /
                                    fVar5,0xbf800000,0x3f800000,0);
          if (((*(byte *)(_System_Math_TypeInfo_12d51c0 + 0x133) >> 2 & 1) != 0) &&
             (*(int *)(_System_Math_TypeInfo_12d51c0 + 0xe0) == 0)) {
            native_sub_4327ec();
          }
          dVar6 = (double)func_0x002c9cb0((double)fVar3);
          fVar4 = (float)dVar6 * 57.29578;
        }
        fVar3 = 0.0;
        if (((22.5 <= fVar4) && (fVar4 <= 157.5)) && (fVar3 = 1.0, fVar2 <= 0.0)) {
          fVar3 = -1.0;
        }
      }
      else if (0.0 < fVar2) {
        fVar3 = 1.0;
      }
      else {
        fVar3 = 0.0;
        if (fVar2 < 0.0) {
          fVar3 = -1.0;
        }
      }
    }
    return fVar3;
  }
  return fVar2;
}



/* Joystick$$get_Vertical @ 0x7f728c
 * float Joystick__get_Vertical (Joystick_o* __this, const MethodInfo* method); */

/* WARNING: Removing unreachable block (ram,0x007f71fc) */
/* WARNING: Removing unreachable block (ram,0x007f7204) */
/* WARNING: Removing unreachable block (ram,0x007f720c) */
/* WARNING: Removing unreachable block (ram,0x007f7210) */
/* WARNING: Removing unreachable block (ram,0x007f7218) */
/* WARNING: Removing unreachable block (ram,0x007f7220) */
/* WARNING: Removing unreachable block (ram,0x007f7224) */
/* WARNING: Removing unreachable block (ram,0x007f7228) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Joystick$$get_Vertical
   float Joystick__get_Vertical (Joystick_o* __this, const MethodInfo* method); */

float native_Joystick__get_Vertical_7f728c(undefined1 param_1 [16],float param_2,long param_3)

{
  undefined8 uVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  double dVar6;
  float fStack_50;
  float fStack_4c;
  undefined8 uStack_48;
  
  fVar5 = *(float *)(param_3 + 0x54);
  if (*(char *)(param_3 + 0x25) != '\0') {
    fVar2 = fVar5;
    if (fVar5 != 0.0) {
      if (*(int *)(param_3 + 0x20) == 0) {
        uVar1 = *(undefined8 *)(param_3 + 0x50);
        fStack_50 = (float)native_UnityEngine_Vector2__get_up_775914(0);
        fStack_4c = param_2;
        uStack_48 = uVar1;
        if (cRam00000000013404ac == '\0') {
          native_sub_43273c(&System_Math_TypeInfo_12d51c0);
          cRam00000000013404ac = '\x01';
        }
        fVar2 = (float)native_UnityEngine_Vector2__get_sqrMagnitude_775674(&uStack_48,0);
        fVar3 = (float)native_UnityEngine_Vector2__get_sqrMagnitude_775674(&fStack_50,0);
        if (((*(byte *)(_System_Math_TypeInfo_12d51c0 + 0x133) >> 2 & 1) != 0) &&
           (*(int *)(_System_Math_TypeInfo_12d51c0 + 0xe0) == 0)) {
          native_sub_4327ec();
        }
        fVar4 = SQRT(fVar2 * fVar3);
        if (NAN(fVar4)) {
          fVar4 = (float)func_0x002ca470(fVar2 * fVar3);
        }
        fVar3 = 0.0;
        if (1e-15 <= fVar4) {
          fVar2 = (float)native_UnityEngine_Mathf__Clamp_8e51ec
                                   (((float)uStack_48 * fStack_50 + uStack_48._4_4_ * fStack_4c) /
                                    fVar4,0xbf800000,0x3f800000,0);
          if (((*(byte *)(_System_Math_TypeInfo_12d51c0 + 0x133) >> 2 & 1) != 0) &&
             (*(int *)(_System_Math_TypeInfo_12d51c0 + 0xe0) == 0)) {
            native_sub_4327ec();
          }
          dVar6 = (double)func_0x002c9cb0((double)fVar2);
          fVar3 = (float)dVar6 * 57.29578;
        }
        if (((fVar3 <= 67.5) || (fVar2 = 0.0, 112.5 <= fVar3)) && (fVar2 = 1.0, fVar5 <= 0.0)) {
          fVar2 = -1.0;
        }
      }
      else if (0.0 < fVar5) {
        fVar2 = 1.0;
      }
      else {
        fVar2 = 0.0;
        if (fVar5 < 0.0) {
          fVar2 = -1.0;
        }
      }
    }
    return fVar2;
  }
  return fVar5;
}



/* Joystick$$get_Direction @ 0x7f72a4
 * UnityEngine_Vector2_o Joystick__get_Direction (Joystick_o* __this, const MethodInfo* method); */

/* Joystick$$get_Direction
   UnityEngine_Vector2_o Joystick__get_Direction (Joystick_o* __this, const MethodInfo* method); */

undefined1  [16] native_Joystick__get_Direction_7f72a4(long param_1)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  ulong uVar3;
  undefined8 uVar4;
  
  uVar3 = CONCAT44(0,*(uint *)(param_1 + 0x50));
  auVar1._8_8_ = 0;
  auVar1._0_8_ = uVar3;
  if (*(char *)(param_1 + 0x24) != '\0') {
    auVar1 = native_Joystick__SnapFloat_7f70ac(uVar3,param_1,1);
  }
  uVar4 = auVar1._8_8_;
  if (*(char *)(param_1 + 0x25) != '\0') {
    native_Joystick__SnapFloat_7f70ac(*(undefined4 *)(param_1 + 0x54),param_1,2);
  }
  auVar2._8_8_ = uVar4;
  auVar2._0_8_ = auVar1._0_8_;
  return auVar2;
}



/* Joystick$$get_HandleRange @ 0x7f730c
 * float Joystick__get_HandleRange (Joystick_o* __this, const MethodInfo* method); */

/* Joystick$$get_HandleRange
   float Joystick__get_HandleRange (Joystick_o* __this, const MethodInfo* method); */

undefined4 native_Joystick__get_HandleRange_7f730c(long param_1)

{
  return *(undefined4 *)(param_1 + 0x18);
}



/* Joystick$$set_HandleRange @ 0x7f7314
 * void Joystick__set_HandleRange (Joystick_o* __this, float value, const MethodInfo* method); */

/* Joystick$$set_HandleRange
   void Joystick__set_HandleRange (Joystick_o* __this, float value, const MethodInfo* method); */

void native_Joystick__set_HandleRange_7f7314(float param_1,long param_2)

{
  *(float *)(param_2 + 0x18) = ABS(param_1);
  return;
}



/* Joystick$$get_DeadZone @ 0x7f7320
 * float Joystick__get_DeadZone (Joystick_o* __this, const MethodInfo* method); */

/* Joystick$$get_DeadZone
   float Joystick__get_DeadZone (Joystick_o* __this, const MethodInfo* method); */

undefined4 native_Joystick__get_DeadZone_7f7320(long param_1)

{
  return *(undefined4 *)(param_1 + 0x1c);
}



/* Joystick$$set_DeadZone @ 0x7f7328
 * void Joystick__set_DeadZone (Joystick_o* __this, float value, const MethodInfo* method); */

/* Joystick$$set_DeadZone
   void Joystick__set_DeadZone (Joystick_o* __this, float value, const MethodInfo* method); */

void native_Joystick__set_DeadZone_7f7328(float param_1,long param_2)

{
  *(float *)(param_2 + 0x1c) = ABS(param_1);
  return;
}



/* Joystick$$get_AxisOptions @ 0x7f7334
 * int32_t Joystick__get_AxisOptions (Joystick_o* __this, const MethodInfo* method); */

/* Joystick$$get_AxisOptions
   int32_t Joystick__get_AxisOptions (Joystick_o* __this, const MethodInfo* method); */

void native_Joystick__get_AxisOptions_7f7334(void)

{
  return;
}



/* Joystick$$set_AxisOptions @ 0x7f7338
 * void Joystick__set_AxisOptions (Joystick_o* __this, int32_t value, const MethodInfo* method); */

/* Joystick$$set_AxisOptions
   void Joystick__set_AxisOptions (Joystick_o* __this, int32_t value, const MethodInfo* method); */

void native_Joystick__set_AxisOptions_7f7338(long param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x20) = param_2;
  return;
}



/* Joystick$$get_SnapX @ 0x7f7340
 * bool Joystick__get_SnapX (Joystick_o* __this, const MethodInfo* method); */

/* Joystick$$get_SnapX
   bool Joystick__get_SnapX (Joystick_o* __this, const MethodInfo* method); */

undefined1 native_Joystick__get_SnapX_7f7340(long param_1)

{
  return *(undefined1 *)(param_1 + 0x24);
}



/* Joystick$$set_SnapX @ 0x7f7348
 * void Joystick__set_SnapX (Joystick_o* __this, bool value, const MethodInfo* method); */

/* Joystick$$set_SnapX
   void Joystick__set_SnapX (Joystick_o* __this, bool value, const MethodInfo* method); */

void native_Joystick__set_SnapX_7f7348(long param_1,byte param_2)

{
  *(byte *)(param_1 + 0x24) = param_2 & 1;
  return;
}



/* Joystick$$get_SnapY @ 0x7f7354
 * bool Joystick__get_SnapY (Joystick_o* __this, const MethodInfo* method); */

/* Joystick$$get_SnapY
   bool Joystick__get_SnapY (Joystick_o* __this, const MethodInfo* method); */

undefined1 native_Joystick__get_SnapY_7f7354(long param_1)

{
  return *(undefined1 *)(param_1 + 0x25);
}



/* Joystick$$set_SnapY @ 0x7f735c
 * void Joystick__set_SnapY (Joystick_o* __this, bool value, const MethodInfo* method); */

/* Joystick$$set_SnapY
   void Joystick__set_SnapY (Joystick_o* __this, bool value, const MethodInfo* method); */

void native_Joystick__set_SnapY_7f735c(long param_1,byte param_2)

{
  *(byte *)(param_1 + 0x25) = param_2 & 1;
  return;
}



/* Joystick$$Start @ 0x7f7368
 * void Joystick__Start (Joystick_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Joystick$$Start
   void Joystick__Start (Joystick_o* __this, const MethodInfo* method); */

void native_Joystick__Start_7f7368(long param_1)

{
  undefined8 uVar1;
  ulong uVar2;
  long lVar3;
  undefined4 uVar4;
  undefined4 uStack_28;
  undefined4 uStack_24;
  
  if ((bRam00000000013403e8 & 1) == 0) {
    native_sub_43273c(&Method_UnityEngine_Component_GetComponentInParent_Canvas____12e2d28);
    native_sub_43273c(&Method_UnityEngine_Component_GetComponent_RectTransform____12e2ad0);
    native_sub_43273c(&UnityEngine_Debug_TypeInfo_12d4338);
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    native_sub_43273c(&StringLiteral_The_Joystick_is_not_placed_inside_a_canvas_12f1858);
    bRam00000000013403e8 = 1;
  }
  *(ulong *)(param_1 + 0x18) =
       CONCAT44(ABS((float)((ulong)*(undefined8 *)(param_1 + 0x18) >> 0x20)),
                ABS((float)*(undefined8 *)(param_1 + 0x18)));
  uVar1 = native_UnityEngine_Component__GetComponent_ActiveAnimation__49daec
                    (param_1,_Method_UnityEngine_Component_GetComponent_RectTransform____12e2ad0);
  *(undefined8 *)(param_1 + 0x38) = uVar1;
  native_sub_4326e0(param_1 + 0x38);
  uVar1 = native_UnityEngine_Component__GetComponentInParent_BE2_Canvas__49dc70
                    (param_1,_Method_UnityEngine_Component_GetComponentInParent_Canvas____12e2d28);
  *(undefined8 *)(param_1 + 0x40) = uVar1;
  native_sub_4326e0(param_1 + 0x40);
  uVar1 = *(undefined8 *)(param_1 + 0x40);
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar2 = native_UnityEngine_Object__op_Equality_8e9a3c(uVar1,0,0);
  if ((uVar2 & 1) != 0) {
    if (((*(byte *)(_UnityEngine_Debug_TypeInfo_12d4338 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UnityEngine_Debug_TypeInfo_12d4338 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    native_UnityEngine_Debug__LogError_8dc5cc
              (_StringLiteral_The_Joystick_is_not_placed_inside_a_canvas_12f1858,0);
  }
  if (*(long *)(param_1 + 0x28) != 0) {
    native_UnityEngine_RectTransform__set_pivot_765158
              (0x3f000000,0x3f000000,*(long *)(param_1 + 0x28),0);
    if (*(long *)(param_1 + 0x30) != 0) {
      native_UnityEngine_RectTransform__set_anchorMin_764c28
                (0x3f000000,0x3f000000,*(long *)(param_1 + 0x30),0);
      if (*(long *)(param_1 + 0x30) != 0) {
        native_UnityEngine_RectTransform__set_anchorMax_764d74
                  (0x3f000000,0x3f000000,*(long *)(param_1 + 0x30),0);
        if (*(long *)(param_1 + 0x30) != 0) {
          uVar4 = 0x3f000000;
          native_UnityEngine_RectTransform__set_pivot_765158(*(long *)(param_1 + 0x30),0);
          lVar3 = *(long *)(param_1 + 0x30);
          uStack_28 = native_UnityEngine_Vector2__get_zero_765ef0(0);
          if (lVar3 != 0) {
            uStack_24 = uVar4;
            if (pcRam000000000133f8d8 == (code *)0x0) {
              pcRam000000000133f8d8 = (code *)native_sub_4326f0(&UNK_00e2846b,0);
            }
            (*pcRam000000000133f8d8)(lVar3,&uStack_28);
            return;
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* Joystick$$OnPointerDown @ 0x7f7510
 * void Joystick__OnPointerDown (Joystick_o* __this, UnityEngine_EventSystems_PointerEventData_o* eventData, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Joystick$$OnPointerDown
   void Joystick__OnPointerDown (Joystick_o* __this, UnityEngine_EventSystems_PointerEventData_o*
   eventData, const MethodInfo* method); */

void native_Joystick__OnPointerDown_7f7510
               (undefined1 param_1 [16],undefined8 param_2,undefined8 param_3,long *param_4,
               long param_5)

{
  int iVar1;
  long lVar2;
  long *plVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  ulong uVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fStack_28;
  float fStack_24;
  
  if ((bRam00000000013403e9 & 1) == 0) {
    native_sub_43273c(&UnityEngine_RectTransformUtility_TypeInfo_12d58f8);
    bRam00000000013403e9 = 1;
  }
  plVar3 = param_4 + 9;
  *plVar3 = 0;
  native_sub_4326e0(plVar3,0);
  if (param_4[8] != 0) {
    iVar1 = native_UnityEngine_Canvas__get_renderMode_db6058(param_4[8],0);
    if (iVar1 == 1) {
      if (param_4[8] == 0) goto LAB_007f7700;
      lVar2 = native_UnityEngine_Canvas__get_worldCamera_db6680(param_4[8],0);
      *plVar3 = lVar2;
      native_sub_4326e0(plVar3,lVar2);
    }
    if (param_4[5] != 0) {
      lVar2 = param_4[9];
      uVar7 = native_UnityEngine_Transform__get_position_77169c(param_4[5],0);
      if (((*(byte *)(_UnityEngine_RectTransformUtility_TypeInfo_12d58f8 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_UnityEngine_RectTransformUtility_TypeInfo_12d58f8 + 0xe0) == 0)) {
        native_sub_4327ec();
      }
      fVar4 = (float)native_UnityEngine_RectTransformUtility__WorldToScreenPoint_db818c
                               (uVar7,param_2,param_3,lVar2,0);
      if (((param_4[5] != 0) &&
          (fVar12 = (float)param_2,
          fVar5 = (float)native_UnityEngine_RectTransform__get_sizeDelta_764f64(param_4[5],0),
          param_5 != 0)) && (param_4[8] != 0)) {
        fVar10 = *(float *)(param_5 + 0x100);
        fVar11 = *(float *)(param_5 + 0x104);
        fVar5 = fVar5 * 0.5;
        fVar12 = fVar12 * 0.5;
        fVar6 = (float)native_UnityEngine_Canvas__get_scaleFactor_db6128(param_4[8],0);
        fVar4 = (fVar10 - fVar4) / (fVar5 * fVar6);
        uVar9 = (ulong)(uint)fVar4;
        *(float *)(param_4 + 10) = fVar4;
        *(float *)((long)param_4 + 0x54) = (fVar11 - (float)param_2) / (fVar12 * fVar6);
        if ((int)param_4[4] == 2) {
          *(undefined4 *)(param_4 + 10) = 0;
        }
        else if ((int)param_4[4] == 1) {
          *(undefined4 *)((long)param_4 + 0x54) = 0;
        }
        uVar7 = native_UnityEngine_Vector2__get_magnitude_7752bc(param_4 + 10,0);
        uVar8 = native_UnityEngine_Vector2__get_normalized_775350(param_4 + 10,0);
        (**(code **)(*param_4 + 0x1c8))
                  (uVar7,uVar8,uVar9,fVar5,fVar12,param_4,param_4[9],
                   *(undefined8 *)(*param_4 + 0x1d0));
        lVar2 = param_4[6];
        if (lVar2 != 0) {
          fStack_28 = *(float *)(param_4 + 3) * fVar5 * *(float *)(param_4 + 10);
          fStack_24 = *(float *)(param_4 + 3) * fVar12 * *(float *)((long)param_4 + 0x54);
          if (pcRam000000000133f8d8 == (code *)0x0) {
            pcRam000000000133f8d8 = (code *)native_sub_4326f0(&UNK_00e2846b,0);
          }
          (*pcRam000000000133f8d8)(lVar2,&fStack_28);
          return;
        }
      }
    }
  }
LAB_007f7700:
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* Joystick$$OnDrag @ 0x7f7514
 * void Joystick__OnDrag (Joystick_o* __this, UnityEngine_EventSystems_PointerEventData_o* eventData, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Joystick$$OnDrag
   void Joystick__OnDrag (Joystick_o* __this, UnityEngine_EventSystems_PointerEventData_o*
   eventData, const MethodInfo* method); */

void native_Joystick__OnDrag_7f7514
               (undefined1 param_1 [16],undefined8 param_2,undefined8 param_3,long *param_4,
               long param_5)

{
  int iVar1;
  long lVar2;
  long *plVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  ulong uVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fStack_28;
  float fStack_24;
  
  if ((bRam00000000013403e9 & 1) == 0) {
    native_sub_43273c(&UnityEngine_RectTransformUtility_TypeInfo_12d58f8);
    bRam00000000013403e9 = 1;
  }
  plVar3 = param_4 + 9;
  *plVar3 = 0;
  native_sub_4326e0(plVar3,0);
  if (param_4[8] != 0) {
    iVar1 = native_UnityEngine_Canvas__get_renderMode_db6058(param_4[8],0);
    if (iVar1 == 1) {
      if (param_4[8] == 0) goto LAB_007f7700;
      lVar2 = native_UnityEngine_Canvas__get_worldCamera_db6680(param_4[8],0);
      *plVar3 = lVar2;
      native_sub_4326e0(plVar3,lVar2);
    }
    if (param_4[5] != 0) {
      lVar2 = param_4[9];
      uVar7 = native_UnityEngine_Transform__get_position_77169c(param_4[5],0);
      if (((*(byte *)(_UnityEngine_RectTransformUtility_TypeInfo_12d58f8 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_UnityEngine_RectTransformUtility_TypeInfo_12d58f8 + 0xe0) == 0)) {
        native_sub_4327ec();
      }
      fVar4 = (float)native_UnityEngine_RectTransformUtility__WorldToScreenPoint_db818c
                               (uVar7,param_2,param_3,lVar2,0);
      if (((param_4[5] != 0) &&
          (fVar12 = (float)param_2,
          fVar5 = (float)native_UnityEngine_RectTransform__get_sizeDelta_764f64(param_4[5],0),
          param_5 != 0)) && (param_4[8] != 0)) {
        fVar10 = *(float *)(param_5 + 0x100);
        fVar11 = *(float *)(param_5 + 0x104);
        fVar5 = fVar5 * 0.5;
        fVar12 = fVar12 * 0.5;
        fVar6 = (float)native_UnityEngine_Canvas__get_scaleFactor_db6128(param_4[8],0);
        fVar4 = (fVar10 - fVar4) / (fVar5 * fVar6);
        uVar9 = (ulong)(uint)fVar4;
        *(float *)(param_4 + 10) = fVar4;
        *(float *)((long)param_4 + 0x54) = (fVar11 - (float)param_2) / (fVar12 * fVar6);
        if ((int)param_4[4] == 2) {
          *(undefined4 *)(param_4 + 10) = 0;
        }
        else if ((int)param_4[4] == 1) {
          *(undefined4 *)((long)param_4 + 0x54) = 0;
        }
        uVar7 = native_UnityEngine_Vector2__get_magnitude_7752bc(param_4 + 10,0);
        uVar8 = native_UnityEngine_Vector2__get_normalized_775350(param_4 + 10,0);
        (**(code **)(*param_4 + 0x1c8))
                  (uVar7,uVar8,uVar9,fVar5,fVar12,param_4,param_4[9],
                   *(undefined8 *)(*param_4 + 0x1d0));
        lVar2 = param_4[6];
        if (lVar2 != 0) {
          fStack_28 = *(float *)(param_4 + 3) * fVar5 * *(float *)(param_4 + 10);
          fStack_24 = *(float *)(param_4 + 3) * fVar12 * *(float *)((long)param_4 + 0x54);
          if (pcRam000000000133f8d8 == (code *)0x0) {
            pcRam000000000133f8d8 = (code *)native_sub_4326f0(&UNK_00e2846b,0);
          }
          (*pcRam000000000133f8d8)(lVar2,&fStack_28);
          return;
        }
      }
    }
  }
LAB_007f7700:
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* Joystick$$HandleInput @ 0x7f7728
 * void Joystick__HandleInput (Joystick_o* __this, float magnitude, UnityEngine_Vector2_o normalised, UnityEngine_Vector2_o radius, UnityEngine_Camera_o* cam, const MethodInfo* method); */

/* Joystick$$HandleInput
   void Joystick__HandleInput (Joystick_o* __this, float magnitude, UnityEngine_Vector2_o
   normalised, UnityEngine_Vector2_o radius, UnityEngine_Camera_o* cam, const MethodInfo* method);
    */

void native_Joystick__HandleInput_7f7728
               (float param_1,undefined4 param_2,undefined4 param_3,long param_4)

{
  undefined4 uVar1;
  
  if (param_1 <= *(float *)(param_4 + 0x1c)) {
    uVar1 = native_UnityEngine_Vector2__get_zero_765ef0(0);
  }
  else {
    uVar1 = param_2;
    param_2 = param_3;
    if (param_1 <= 1.0) {
      return;
    }
  }
  *(undefined4 *)(param_4 + 0x50) = uVar1;
  *(undefined4 *)(param_4 + 0x54) = param_2;
  return;
}



/* Joystick$$FormatInput @ 0x7f7704
 * void Joystick__FormatInput (Joystick_o* __this, const MethodInfo* method); */

/* Joystick$$FormatInput
   void Joystick__FormatInput (Joystick_o* __this, const MethodInfo* method); */

void native_Joystick__FormatInput_7f7704(long param_1)

{
  if (*(int *)(param_1 + 0x20) == 2) {
    *(undefined4 *)(param_1 + 0x50) = 0;
  }
  else if (*(int *)(param_1 + 0x20) == 1) {
    *(undefined4 *)(param_1 + 0x54) = 0;
    return;
  }
  return;
}



/* Joystick$$SnapFloat @ 0x7f70ac
 * float Joystick__SnapFloat (Joystick_o* __this, float value, int32_t snapAxis, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Joystick$$SnapFloat
   float Joystick__SnapFloat (Joystick_o* __this, float value, int32_t snapAxis, const MethodInfo*
   method); */

undefined1  [16]
native_Joystick__SnapFloat_7f70ac(undefined1 param_1 [16],float param_2,long param_3,int param_4)

{
  undefined8 uVar1;
  float fVar2;
  uint uVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  ulong uVar7;
  double dVar8;
  undefined8 uVar10;
  undefined1 auVar9 [16];
  float fStack_50;
  float fStack_4c;
  undefined8 uStack_48;
  
  uVar10 = param_1._8_8_;
  uVar7 = param_1._0_8_;
  fVar2 = param_1._0_4_;
  if (fVar2 != 0.0) {
    if (*(int *)(param_3 + 0x20) == 0) {
      uVar1 = *(undefined8 *)(param_3 + 0x50);
      fStack_50 = (float)native_UnityEngine_Vector2__get_up_775914(0);
      fStack_4c = param_2;
      uStack_48 = uVar1;
      if (cRam00000000013404ac == '\0') {
        native_sub_43273c(&System_Math_TypeInfo_12d51c0);
        cRam00000000013404ac = '\x01';
      }
      fVar4 = (float)native_UnityEngine_Vector2__get_sqrMagnitude_775674(&uStack_48,0);
      fVar5 = (float)native_UnityEngine_Vector2__get_sqrMagnitude_775674(&fStack_50,0);
      if (((*(byte *)(_System_Math_TypeInfo_12d51c0 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_System_Math_TypeInfo_12d51c0 + 0xe0) == 0)) {
        native_sub_4327ec();
      }
      fVar6 = SQRT(fVar4 * fVar5);
      if (NAN(fVar6)) {
        fVar6 = (float)func_0x002ca470(fVar4 * fVar5);
      }
      fVar4 = 0.0;
      if (1e-15 <= fVar6) {
        fVar4 = (float)native_UnityEngine_Mathf__Clamp_8e51ec
                                 (((float)uStack_48 * fStack_50 + uStack_48._4_4_ * fStack_4c) /
                                  fVar6,0xbf800000,0x3f800000,0);
        if (((*(byte *)(_System_Math_TypeInfo_12d51c0 + 0x133) >> 2 & 1) != 0) &&
           (*(int *)(_System_Math_TypeInfo_12d51c0 + 0xe0) == 0)) {
          native_sub_4327ec();
        }
        dVar8 = (double)func_0x002c9cb0((double)fVar4);
        fVar4 = (float)dVar8 * 57.29578;
      }
      if (param_4 == 2) {
        if (67.5 < fVar4) {
          uVar7 = 0;
          uVar10 = 0;
          if (fVar4 < 112.5) goto LAB_007f7270;
        }
      }
      else {
        if (param_4 != 1) goto LAB_007f7270;
        uVar7 = 0;
        uVar10 = 0;
        if ((fVar4 < 22.5) || (157.5 < fVar4)) goto LAB_007f7270;
      }
      uVar7 = 0x3f800000;
      uVar10 = 0;
      if (fVar2 <= 0.0) {
        uVar7 = 0xbf800000;
        uVar10 = 0;
      }
    }
    else if (0.0 < fVar2) {
      uVar7 = 0x3f800000;
      uVar10 = 0;
    }
    else {
      uVar3 = 0;
      if (fVar2 < 0.0) {
        uVar3 = 0xbf800000;
      }
      uVar10 = 0;
      uVar7 = (ulong)uVar3;
    }
  }
LAB_007f7270:
  auVar9._8_8_ = uVar10;
  auVar9._0_8_ = uVar7;
  return auVar9;
}



/* Joystick$$OnPointerUp @ 0x7f7778
 * void Joystick__OnPointerUp (Joystick_o* __this, UnityEngine_EventSystems_PointerEventData_o* eventData, const MethodInfo* method); */

/* Joystick$$OnPointerUp
   void Joystick__OnPointerUp (Joystick_o* __this, UnityEngine_EventSystems_PointerEventData_o*
   eventData, const MethodInfo* method); */

void native_Joystick__OnPointerUp_7f7778(undefined1 param_1 [16],undefined4 param_2,long param_3)

{
  long lVar1;
  undefined4 uVar2;
  undefined4 uStack_28;
  undefined4 uStack_24;
  
  uVar2 = native_UnityEngine_Vector2__get_zero_765ef0(0);
  lVar1 = *(long *)(param_3 + 0x30);
  *(undefined4 *)(param_3 + 0x50) = uVar2;
  *(undefined4 *)(param_3 + 0x54) = param_2;
  uStack_28 = native_UnityEngine_Vector2__get_zero_765ef0(0);
  if (lVar1 != 0) {
    uStack_24 = param_2;
    if (pcRam000000000133f8d8 == (code *)0x0) {
      pcRam000000000133f8d8 = (code *)native_sub_4326f0(&UNK_00e2846b,0);
    }
    (*pcRam000000000133f8d8)(lVar1,&uStack_28);
    return;
  }
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* Joystick$$ScreenPointToAnchoredPosition @ 0x7f77bc
 * UnityEngine_Vector2_o Joystick__ScreenPointToAnchoredPosition (Joystick_o* __this, UnityEngine_Vector2_o screenPosition, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Joystick$$ScreenPointToAnchoredPosition
   UnityEngine_Vector2_o Joystick__ScreenPointToAnchoredPosition (Joystick_o* __this,
   UnityEngine_Vector2_o screenPosition, const MethodInfo* method); */

undefined1  [16]
native_Joystick__ScreenPointToAnchoredPosition_7f77bc
          (undefined8 param_1,undefined8 param_2,long param_3)

{
  float fVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  undefined1 auVar9 [16];
  undefined4 uVar10;
  float fStack_28;
  undefined4 uStack_24;
  
  uVar3 = param_2;
  if ((bRam00000000013403ea & 1) == 0) {
    native_sub_43273c(&UnityEngine_RectTransformUtility_TypeInfo_12d58f8);
    bRam00000000013403ea = 1;
  }
  uVar10 = (undefined4)uVar3;
  fStack_28 = (float)native_UnityEngine_Vector2__get_zero_765ef0(0);
  uVar4 = *(undefined8 *)(param_3 + 0x38);
  uVar3 = *(undefined8 *)(param_3 + 0x48);
  uStack_24 = uVar10;
  if (((*(byte *)(_UnityEngine_RectTransformUtility_TypeInfo_12d58f8 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_RectTransformUtility_TypeInfo_12d58f8 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar2 = native_UnityEngine_RectTransformUtility__ScreenPointToLocalPointInRectangle_db80ac
                    (param_1,param_2,uVar4,uVar3,&fStack_28,0);
  if ((uVar2 & 1) == 0) {
    auVar9 = native_UnityEngine_Vector2__get_zero_765ef0(0);
    return auVar9;
  }
  if (*(long *)(param_3 + 0x38) != 0) {
    fVar5 = (float)native_UnityEngine_RectTransform__get_pivot_7650b0(*(long *)(param_3 + 0x38),0);
    if (*(long *)(param_3 + 0x38) != 0) {
      fVar6 = (float)native_UnityEngine_RectTransform__get_sizeDelta_764f64
                               (*(long *)(param_3 + 0x38),0);
      fVar1 = fStack_28;
      if (*(long *)(param_3 + 0x28) != 0) {
        fVar7 = (float)native_UnityEngine_RectTransform__get_anchorMax_764ccc
                                 (*(long *)(param_3 + 0x28),0);
        if (*(long *)(param_3 + 0x38) != 0) {
          fVar8 = (float)native_UnityEngine_RectTransform__get_sizeDelta_764f64
                                   (*(long *)(param_3 + 0x38),0);
          return ZEXT416((uint)(fVar5 * fVar6 + (fVar1 - fVar7 * fVar8)));
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* Joystick$$.ctor @ 0x7f7908
 * void Joystick___ctor (Joystick_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Joystick$$.ctor
   void Joystick___ctor (Joystick_o* __this, const MethodInfo* method); */

undefined1  [16]
native_Joystick___ctor_7f7908(undefined1 param_1 [16],undefined4 param_2,ulong param_3)

{
  undefined4 uVar1;
  undefined1 auVar2 [16];
  
  *(undefined4 *)(param_3 + 0x18) = 0x3f800000;
  uVar1 = native_UnityEngine_Vector2__get_zero_765ef0(0);
  *(undefined4 *)(param_3 + 0x50) = uVar1;
  *(undefined4 *)(param_3 + 0x54) = param_2;
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


