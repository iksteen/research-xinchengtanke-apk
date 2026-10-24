/* ARM64 IL2CPP native pseudocode from Ghidra.
 * Recovered implementation, not original C# source.
 * Function boundaries follow the IL2CPP method address table. */


/* DynamicJoystick$$get_MoveThreshold @ 0xdece10
 * float DynamicJoystick__get_MoveThreshold (DynamicJoystick_o* __this, const MethodInfo* method); */

/* DynamicJoystick$$get_MoveThreshold
   float DynamicJoystick__get_MoveThreshold (DynamicJoystick_o* __this, const MethodInfo* method);
    */

undefined4 native_DynamicJoystick__get_MoveThreshold_dece10(long param_1)

{
  return *(undefined4 *)(param_1 + 0x58);
}



/* DynamicJoystick$$set_MoveThreshold @ 0xdece18
 * void DynamicJoystick__set_MoveThreshold (DynamicJoystick_o* __this, float value, const MethodInfo* method); */

/* DynamicJoystick$$set_MoveThreshold
   void DynamicJoystick__set_MoveThreshold (DynamicJoystick_o* __this, float value, const
   MethodInfo* method); */

void native_DynamicJoystick__set_MoveThreshold_dece18(float param_1,long param_2)

{
  *(float *)(param_2 + 0x58) = ABS(param_1);
  return;
}



/* DynamicJoystick$$Start @ 0xdece24
 * void DynamicJoystick__Start (DynamicJoystick_o* __this, const MethodInfo* method); */

/* DynamicJoystick$$Start
   void DynamicJoystick__Start (DynamicJoystick_o* __this, const MethodInfo* method); */

void native_DynamicJoystick__Start_dece24(long param_1)

{
  long lVar1;
  
  *(float *)(param_1 + 0x58) = ABS(*(float *)(param_1 + 0x58));
  native_Joystick__Start_7f7368(param_1,0);
  if ((*(long *)(param_1 + 0x28) != 0) &&
     (lVar1 = native_UnityEngine_Component__get_gameObject_8da66c(*(long *)(param_1 + 0x28),0),
     lVar1 != 0)) {
    if (pcRam0000000001340bf8 == (code *)0x0) {
      pcRam0000000001340bf8 = (code *)native_sub_4326f0(&UNK_00e2da67);
    }
                    /* WARNING: Could not recover jumptable at 0x008de6e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*pcRam0000000001340bf8)(lVar1,0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* DynamicJoystick$$OnPointerDown @ 0xdece74
 * void DynamicJoystick__OnPointerDown (DynamicJoystick_o* __this, UnityEngine_EventSystems_PointerEventData_o* eventData, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DynamicJoystick$$OnPointerDown
   void DynamicJoystick__OnPointerDown (DynamicJoystick_o* __this,
   UnityEngine_EventSystems_PointerEventData_o* eventData, const MethodInfo* method); */

void native_DynamicJoystick__OnPointerDown_dece74
               (undefined1 param_1 [16],undefined1 param_2 [16],undefined8 param_3,long *param_4,
               long param_5)

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
  ulong uVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fStack_28;
  float fStack_24;
  
  if (param_5 != 0) {
    uVar10 = (ulong)*(uint *)(param_5 + 0x104);
    lVar3 = param_4[5];
    native_Joystick__ScreenPointToAnchoredPosition_7f77bc
              (*(undefined4 *)(param_5 + 0x100),param_4,0);
    if (lVar3 != 0) {
      native_UnityEngine_RectTransform__set_anchoredPosition_764ec0(lVar3,0);
      if ((param_4[5] != 0) &&
         (lVar3 = native_UnityEngine_Component__get_gameObject_8da66c(param_4[5],0), lVar3 != 0)) {
        native_UnityEngine_GameObject__SetActive_8de698(lVar3,1,0);
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
            if (((*(byte *)(_UnityEngine_RectTransformUtility_TypeInfo_12d58f8 + 0x133) >> 2 & 1) !=
                 0) && (*(int *)(_UnityEngine_RectTransformUtility_TypeInfo_12d58f8 + 0xe0) == 0)) {
              native_sub_4327ec();
            }
            fVar4 = (float)native_UnityEngine_RectTransformUtility__WorldToScreenPoint_db818c
                                     (uVar7,uVar10,param_3,lVar3,0);
            if (((param_4[5] != 0) &&
                (fVar13 = (float)uVar10,
                fVar5 = (float)native_UnityEngine_RectTransform__get_sizeDelta_764f64(param_4[5],0),
                param_5 != 0)) && (param_4[8] != 0)) {
              fVar11 = *(float *)(param_5 + 0x100);
              fVar12 = *(float *)(param_5 + 0x104);
              fVar5 = fVar5 * 0.5;
              fVar13 = fVar13 * 0.5;
              fVar6 = (float)native_UnityEngine_Canvas__get_scaleFactor_db6128(param_4[8],0);
              fVar4 = (fVar11 - fVar4) / (fVar5 * fVar6);
              uVar9 = (ulong)(uint)fVar4;
              *(float *)(param_4 + 10) = fVar4;
              *(float *)((long)param_4 + 0x54) = (fVar12 - (float)uVar10) / (fVar13 * fVar6);
              if ((int)param_4[4] == 2) {
                *(undefined4 *)(param_4 + 10) = 0;
              }
              else if ((int)param_4[4] == 1) {
                *(undefined4 *)((long)param_4 + 0x54) = 0;
              }
              uVar7 = native_UnityEngine_Vector2__get_magnitude_7752bc(param_4 + 10,0);
              uVar8 = native_UnityEngine_Vector2__get_normalized_775350(param_4 + 10,0);
              (**(code **)(*param_4 + 0x1c8))
                        (uVar7,uVar8,uVar9,fVar5,fVar13,param_4,param_4[9],
                         *(undefined8 *)(*param_4 + 0x1d0));
              lVar3 = param_4[6];
              if (lVar3 != 0) {
                fStack_28 = *(float *)(param_4 + 3) * fVar5 * *(float *)(param_4 + 10);
                fStack_24 = *(float *)(param_4 + 3) * fVar13 * *(float *)((long)param_4 + 0x54);
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
    }
  }
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* DynamicJoystick$$OnPointerUp @ 0xdecef4
 * void DynamicJoystick__OnPointerUp (DynamicJoystick_o* __this, UnityEngine_EventSystems_PointerEventData_o* eventData, const MethodInfo* method); */

/* DynamicJoystick$$OnPointerUp
   void DynamicJoystick__OnPointerUp (DynamicJoystick_o* __this,
   UnityEngine_EventSystems_PointerEventData_o* eventData, const MethodInfo* method); */

void native_DynamicJoystick__OnPointerUp_decef4
               (undefined1 param_1 [16],undefined4 param_2,long param_3,undefined8 param_4)

{
  long lVar1;
  undefined4 uVar2;
  undefined4 uStack_28;
  undefined4 uStack_24;
  
  if ((*(long *)(param_3 + 0x28) != 0) &&
     (lVar1 = native_UnityEngine_Component__get_gameObject_8da66c(*(long *)(param_3 + 0x28),0),
     lVar1 != 0)) {
    native_UnityEngine_GameObject__SetActive_8de698(lVar1,0,0);
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
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* DynamicJoystick$$HandleInput @ 0xdecf44
 * void DynamicJoystick__HandleInput (DynamicJoystick_o* __this, float magnitude, UnityEngine_Vector2_o normalised, UnityEngine_Vector2_o radius, UnityEngine_Camera_o* cam, const MethodInfo* method); */

/* DynamicJoystick$$HandleInput
   void DynamicJoystick__HandleInput (DynamicJoystick_o* __this, float magnitude,
   UnityEngine_Vector2_o normalised, UnityEngine_Vector2_o radius, UnityEngine_Camera_o* cam, const
   MethodInfo* method); */

void native_DynamicJoystick__HandleInput_decf44
               (float param_1,float param_2,float param_3,float param_4,float param_5,long param_6,
               undefined8 param_7)

{
  long lVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  if (*(float *)(param_6 + 0x58) < param_1) {
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



/* DynamicJoystick$$.ctor @ 0xded00c
 * void DynamicJoystick___ctor (DynamicJoystick_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DynamicJoystick$$.ctor
   void DynamicJoystick___ctor (DynamicJoystick_o* __this, const MethodInfo* method); */

undefined1  [16]
native_DynamicJoystick___ctor_ded00c(undefined1 param_1 [16],undefined4 param_2,ulong param_3)

{
  undefined4 uVar1;
  undefined1 auVar2 [16];
  
  *(undefined4 *)(param_3 + 0x58) = 0x3f800000;
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


