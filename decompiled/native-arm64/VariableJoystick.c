/* ARM64 IL2CPP native pseudocode from Ghidra.
 * Recovered implementation, not original C# source.
 * Function boundaries follow the IL2CPP method address table. */


/* VariableJoystick$$get_MoveThreshold @ 0x94dcd0
 * float VariableJoystick__get_MoveThreshold (VariableJoystick_o* __this, const MethodInfo* method); */

/* VariableJoystick$$get_MoveThreshold
   float VariableJoystick__get_MoveThreshold (VariableJoystick_o* __this, const MethodInfo* method);
    */

undefined4 native_VariableJoystick__get_MoveThreshold_94dcd0(long param_1)

{
  return *(undefined4 *)(param_1 + 0x58);
}



/* VariableJoystick$$set_MoveThreshold @ 0x94dcd8
 * void VariableJoystick__set_MoveThreshold (VariableJoystick_o* __this, float value, const MethodInfo* method); */

/* VariableJoystick$$set_MoveThreshold
   void VariableJoystick__set_MoveThreshold (VariableJoystick_o* __this, float value, const
   MethodInfo* method); */

void native_VariableJoystick__set_MoveThreshold_94dcd8(float param_1,long param_2)

{
  *(float *)(param_2 + 0x58) = ABS(param_1);
  return;
}



/* VariableJoystick$$SetMode @ 0x94dce4
 * void VariableJoystick__SetMode (VariableJoystick_o* __this, int32_t joystickType, const MethodInfo* method); */

/* VariableJoystick$$SetMode
   void VariableJoystick__SetMode (VariableJoystick_o* __this, int32_t joystickType, const
   MethodInfo* method); */

void native_VariableJoystick__SetMode_94dce4(long param_1,int param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = *(long *)(param_1 + 0x28);
  *(int *)(param_1 + 0x5c) = param_2;
  if (param_2 == 0) {
    if (lVar1 != 0) {
      native_UnityEngine_RectTransform__set_anchoredPosition_764ec0
                (*(undefined4 *)(param_1 + 0x60),*(undefined4 *)(param_1 + 100),lVar1,0);
      if ((*(long *)(param_1 + 0x28) != 0) &&
         (lVar1 = native_UnityEngine_Component__get_gameObject_8da66c(*(long *)(param_1 + 0x28),0),
         lVar1 != 0)) {
        uVar2 = 1;
        goto native_UnityEngine_GameObject__SetActive_8de698;
      }
    }
  }
  else if ((lVar1 != 0) &&
          (lVar1 = native_UnityEngine_Component__get_gameObject_8da66c(lVar1,0), lVar1 != 0)) {
    uVar2 = 0;
native_UnityEngine_GameObject__SetActive_8de698:
    if (pcRam0000000001340bf8 == (code *)0x0) {
      pcRam0000000001340bf8 = (code *)native_sub_4326f0(&UNK_00e2da67);
    }
                    /* WARNING: Could not recover jumptable at 0x008de6e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*pcRam0000000001340bf8)(lVar1,uVar2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* VariableJoystick$$Start @ 0x94dd54
 * void VariableJoystick__Start (VariableJoystick_o* __this, const MethodInfo* method); */

/* VariableJoystick$$Start
   void VariableJoystick__Start (VariableJoystick_o* __this, const MethodInfo* method); */

void native_VariableJoystick__Start_94dd54(undefined1 param_1 [16],undefined4 param_2,long param_3)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  
  native_Joystick__Start_7f7368(param_3,0);
  if (*(long *)(param_3 + 0x28) == 0) {
                    /* WARNING: Subroutine does not return */
    native_sub_432810();
  }
  uVar4 = native_UnityEngine_RectTransform__get_anchoredPosition_764e18(*(long *)(param_3 + 0x28),0)
  ;
  *(undefined4 *)(param_3 + 0x60) = uVar4;
  *(undefined4 *)(param_3 + 100) = param_2;
  iVar1 = *(int *)(param_3 + 0x5c);
  lVar2 = *(long *)(param_3 + 0x28);
  *(int *)(param_3 + 0x5c) = iVar1;
  if (iVar1 == 0) {
    if (lVar2 != 0) {
      native_UnityEngine_RectTransform__set_anchoredPosition_764ec0
                (*(undefined4 *)(param_3 + 0x60),*(undefined4 *)(param_3 + 100),lVar2,0);
      if ((*(long *)(param_3 + 0x28) != 0) &&
         (lVar2 = native_UnityEngine_Component__get_gameObject_8da66c(*(long *)(param_3 + 0x28),0),
         lVar2 != 0)) {
        uVar3 = 1;
        goto native_UnityEngine_GameObject__SetActive_8de698;
      }
    }
  }
  else if ((lVar2 != 0) &&
          (lVar2 = native_UnityEngine_Component__get_gameObject_8da66c(lVar2,0), lVar2 != 0)) {
    uVar3 = 0;
native_UnityEngine_GameObject__SetActive_8de698:
    if (pcRam0000000001340bf8 == (code *)0x0) {
      pcRam0000000001340bf8 = (code *)native_sub_4326f0(&UNK_00e2da67);
    }
                    /* WARNING: Could not recover jumptable at 0x008de6e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*pcRam0000000001340bf8)(lVar2,uVar3);
    return;
  }
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* VariableJoystick$$OnPointerDown @ 0x94dd98
 * void VariableJoystick__OnPointerDown (VariableJoystick_o* __this, UnityEngine_EventSystems_PointerEventData_o* eventData, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* VariableJoystick$$OnPointerDown
   void VariableJoystick__OnPointerDown (VariableJoystick_o* __this,
   UnityEngine_EventSystems_PointerEventData_o* eventData, const MethodInfo* method); */

void native_VariableJoystick__OnPointerDown_94dd98
               (undefined1 param_1 [16],ulong param_2,undefined8 param_3,long *param_4,long param_5)

{
  int iVar1;
  long *plVar2;
  long lVar3;
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
  
  if (*(int *)((long)param_4 + 0x5c) != 0) {
    if (param_5 == 0) {
LAB_0094de20:
                    /* WARNING: Subroutine does not return */
      native_sub_432810();
    }
    param_2 = (ulong)*(uint *)(param_5 + 0x104);
    lVar3 = param_4[5];
    native_Joystick__ScreenPointToAnchoredPosition_7f77bc
              (*(undefined4 *)(param_5 + 0x100),param_4,0);
    if (lVar3 == 0) goto LAB_0094de20;
    native_UnityEngine_RectTransform__set_anchoredPosition_764ec0(lVar3,0);
    if ((param_4[5] == 0) ||
       (lVar3 = native_UnityEngine_Component__get_gameObject_8da66c(param_4[5],0), lVar3 == 0))
    goto LAB_0094de20;
    native_UnityEngine_GameObject__SetActive_8de698(lVar3,1,0);
  }
  if ((bRam00000000013403e9 & 1) == 0) {
    native_sub_43273c(&UnityEngine_RectTransformUtility_TypeInfo_12d58f8,param_5,0);
    bRam00000000013403e9 = 1;
  }
  plVar2 = param_4 + 9;
  *plVar2 = 0;
  native_sub_4326e0(plVar2,0);
  if (param_4[8] != 0) {
    iVar1 = native_UnityEngine_Canvas__get_renderMode_db6058(param_4[8],0);
    if (iVar1 == 1) {
      if (param_4[8] == 0) goto LAB_007f7700;
      lVar3 = native_UnityEngine_Canvas__get_worldCamera_db6680(param_4[8],0);
      *plVar2 = lVar3;
      native_sub_4326e0(plVar2,lVar3);
    }
    if (param_4[5] != 0) {
      lVar3 = param_4[9];
      uVar7 = native_UnityEngine_Transform__get_position_77169c(param_4[5],0);
      if (((*(byte *)(_UnityEngine_RectTransformUtility_TypeInfo_12d58f8 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_UnityEngine_RectTransformUtility_TypeInfo_12d58f8 + 0xe0) == 0)) {
        native_sub_4327ec();
      }
      fVar4 = (float)native_UnityEngine_RectTransformUtility__WorldToScreenPoint_db818c
                               (uVar7,param_2,param_3,lVar3,0);
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
        lVar3 = param_4[6];
        if (lVar3 != 0) {
          fStack_28 = *(float *)(param_4 + 3) * fVar5 * *(float *)(param_4 + 10);
          fStack_24 = *(float *)(param_4 + 3) * fVar12 * *(float *)((long)param_4 + 0x54);
          if (pcRam000000000133f8d8 == (code *)0x0) {
            pcRam000000000133f8d8 = (code *)native_sub_4326f0(&UNK_00e2846b,0);
          }
          (*pcRam000000000133f8d8)(lVar3,&fStack_28);
          return;
        }
      }
    }
  }
LAB_007f7700:
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* VariableJoystick$$OnPointerUp @ 0x94de24
 * void VariableJoystick__OnPointerUp (VariableJoystick_o* __this, UnityEngine_EventSystems_PointerEventData_o* eventData, const MethodInfo* method); */

/* VariableJoystick$$OnPointerUp
   void VariableJoystick__OnPointerUp (VariableJoystick_o* __this,
   UnityEngine_EventSystems_PointerEventData_o* eventData, const MethodInfo* method); */

void native_VariableJoystick__OnPointerUp_94de24
               (undefined1 param_1 [16],undefined4 param_2,long param_3,undefined8 param_4)

{
  long lVar1;
  undefined4 uVar2;
  undefined4 uStack_28;
  undefined4 uStack_24;
  
  if (*(int *)(param_3 + 0x5c) != 0) {
    if ((*(long *)(param_3 + 0x28) == 0) ||
       (lVar1 = native_UnityEngine_Component__get_gameObject_8da66c(*(long *)(param_3 + 0x28),0),
       lVar1 == 0)) {
                    /* WARNING: Subroutine does not return */
      native_sub_432810();
    }
    native_UnityEngine_GameObject__SetActive_8de698(lVar1,0,0);
  }
  uVar2 = native_UnityEngine_Vector2__get_zero_765ef0(0,param_4,0);
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



/* VariableJoystick$$HandleInput @ 0x94de7c
 * void VariableJoystick__HandleInput (VariableJoystick_o* __this, float magnitude, UnityEngine_Vector2_o normalised, UnityEngine_Vector2_o radius, UnityEngine_Camera_o* cam, const MethodInfo* method); */

/* VariableJoystick$$HandleInput
   void VariableJoystick__HandleInput (VariableJoystick_o* __this, float magnitude,
   UnityEngine_Vector2_o normalised, UnityEngine_Vector2_o radius, UnityEngine_Camera_o* cam, const
   MethodInfo* method); */

void native_VariableJoystick__HandleInput_94de7c
               (float param_1,float param_2,float param_3,float param_4,float param_5,long param_6,
               undefined8 param_7)

{
  long lVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  if ((*(int *)(param_6 + 0x5c) == 2) && (*(float *)(param_6 + 0x58) < param_1)) {
    lVar1 = *(long *)(param_6 + 0x28);
    if (lVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      native_sub_432810();
    }
    fVar2 = param_1 - *(float *)(param_6 + 0x58);
    fVar4 = param_2 * fVar2;
    param_4 = param_4 * fVar4;
    fVar3 = (float)native_UnityEngine_RectTransform__get_anchoredPosition_764e18(lVar1,0);
    native_UnityEngine_RectTransform__set_anchoredPosition_764ec0
              (param_4 + fVar3,param_5 * param_3 * fVar2 + fVar4,lVar1,0);
  }
  if (param_1 <= *(float *)(param_6 + 0x1c)) {
    param_3 = param_2;
    param_2 = (float)native_UnityEngine_Vector2__get_zero_765ef0(0,param_7,0);
  }
  else if (param_1 <= 1.0) {
    return;
  }
  *(float *)(param_6 + 0x50) = param_2;
  *(float *)(param_6 + 0x54) = param_3;
  return;
}



/* VariableJoystick$$.ctor @ 0x94df50
 * void VariableJoystick___ctor (VariableJoystick_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* VariableJoystick$$.ctor
   void VariableJoystick___ctor (VariableJoystick_o* __this, const MethodInfo* method); */

undefined1  [16]
native_VariableJoystick___ctor_94df50(undefined1 param_1 [16],undefined4 param_2,ulong param_3)

{
  undefined4 uVar1;
  undefined1 auVar2 [16];
  
  *(undefined4 *)(param_3 + 0x58) = 0x3f800000;
  uVar1 = native_UnityEngine_Vector2__get_zero_765ef0(0);
  *(undefined4 *)(param_3 + 0x60) = uVar1;
  *(undefined4 *)(param_3 + 100) = param_2;
  *(undefined4 *)(param_3 + 0x18) = 0x3f800000;
  uVar1 = native_UnityEngine_Vector2__get_zero_765ef0(0,0);
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


