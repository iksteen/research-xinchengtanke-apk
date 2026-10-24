/* ARM64 IL2CPP native pseudocode from Ghidra.
 * Recovered implementation, not original C# source.
 * Function boundaries follow the IL2CPP method address table. */


/* UIProgressBar$$get_cachedTransform @ 0xc2b3e8
 * UnityEngine_Transform_o* UIProgressBar__get_cachedTransform (UIProgressBar_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIProgressBar$$get_cachedTransform
   UnityEngine_Transform_o* UIProgressBar__get_cachedTransform (UIProgressBar_o* __this, const
   MethodInfo* method); */

undefined8 native_UIProgressBar__get_cachedTransform_c2b3e8(long param_1)

{
  ulong uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  
  if ((bRam00000000013426f5 & 1) == 0) {
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    bRam00000000013426f5 = 1;
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



/* UIProgressBar$$get_cachedCamera @ 0xc2b488
 * UnityEngine_Camera_o* UIProgressBar__get_cachedCamera (UIProgressBar_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIProgressBar$$get_cachedCamera
   UnityEngine_Camera_o* UIProgressBar__get_cachedCamera (UIProgressBar_o* __this, const MethodInfo*
   method); */

undefined8 native_UIProgressBar__get_cachedCamera_c2b488(long param_1)

{
  undefined4 uVar1;
  ulong uVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  
  if ((bRam00000000013426f6 & 1) == 0) {
    native_sub_43273c(&NGUITools_TypeInfo_12d53c8);
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    bRam00000000013426f6 = 1;
  }
  puVar4 = (undefined8 *)(param_1 + 0x58);
  uVar5 = *puVar4;
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar2 = native_UnityEngine_Object__op_Equality_8e9a3c(uVar5,0,0);
  if ((uVar2 & 1) != 0) {
    lVar3 = native_UnityEngine_Component__get_gameObject_8da66c(param_1,0);
    if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      native_sub_432810();
    }
    uVar1 = native_UnityEngine_GameObject__get_layer_8de608(lVar3,0);
    if (((*(byte *)(_NGUITools_TypeInfo_12d53c8 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_NGUITools_TypeInfo_12d53c8 + 0xe0) == 0)) {
      native_sub_4327ec(_NGUITools_TypeInfo_12d53c8);
    }
    uVar5 = native_NGUITools__FindCameraForLayer_72d2e8(uVar1,0);
    *puVar4 = uVar5;
    native_sub_4326e0(puVar4,uVar5);
  }
  return *puVar4;
}



/* UIProgressBar$$get_foregroundWidget @ 0xc2b578
 * UIWidget_o* UIProgressBar__get_foregroundWidget (UIProgressBar_o* __this, const MethodInfo* method); */

/* UIProgressBar$$get_foregroundWidget
   UIWidget_o* UIProgressBar__get_foregroundWidget (UIProgressBar_o* __this, const MethodInfo*
   method); */

undefined8 native_UIProgressBar__get_foregroundWidget_c2b578(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* UIProgressBar$$set_foregroundWidget @ 0xc2b580
 * void UIProgressBar__set_foregroundWidget (UIProgressBar_o* __this, UIWidget_o* value, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIProgressBar$$set_foregroundWidget
   void UIProgressBar__set_foregroundWidget (UIProgressBar_o* __this, UIWidget_o* value, const
   MethodInfo* method); */

void native_UIProgressBar__set_foregroundWidget_c2b580(long param_1,undefined8 param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  
  if ((bRam00000000013426f7 & 1) == 0) {
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    bRam00000000013426f7 = 1;
  }
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar1 = native_UnityEngine_Object__op_Inequality_8d76fc(uVar2,param_2,0);
  if ((uVar1 & 1) != 0) {
    *(undefined8 *)(param_1 + 0x30) = param_2;
    native_sub_4326e0((undefined8 *)(param_1 + 0x30),param_2);
    *(undefined1 *)(param_1 + 0x50) = 1;
  }
  return;
}



/* UIProgressBar$$get_backgroundWidget @ 0xc2b61c
 * UIWidget_o* UIProgressBar__get_backgroundWidget (UIProgressBar_o* __this, const MethodInfo* method); */

/* UIProgressBar$$get_backgroundWidget
   UIWidget_o* UIProgressBar__get_backgroundWidget (UIProgressBar_o* __this, const MethodInfo*
   method); */

undefined8 native_UIProgressBar__get_backgroundWidget_c2b61c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* UIProgressBar$$set_backgroundWidget @ 0xc2b624
 * void UIProgressBar__set_backgroundWidget (UIProgressBar_o* __this, UIWidget_o* value, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIProgressBar$$set_backgroundWidget
   void UIProgressBar__set_backgroundWidget (UIProgressBar_o* __this, UIWidget_o* value, const
   MethodInfo* method); */

void native_UIProgressBar__set_backgroundWidget_c2b624(long param_1,undefined8 param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  
  if ((bRam00000000013426f8 & 1) == 0) {
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    bRam00000000013426f8 = 1;
  }
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar1 = native_UnityEngine_Object__op_Inequality_8d76fc(uVar2,param_2,0);
  if ((uVar1 & 1) != 0) {
    *(undefined8 *)(param_1 + 0x28) = param_2;
    native_sub_4326e0((undefined8 *)(param_1 + 0x28),param_2);
    *(undefined1 *)(param_1 + 0x50) = 1;
  }
  return;
}



/* UIProgressBar$$get_fillDirection @ 0xc2b6c0
 * int32_t UIProgressBar__get_fillDirection (UIProgressBar_o* __this, const MethodInfo* method); */

/* UIProgressBar$$get_fillDirection
   int32_t UIProgressBar__get_fillDirection (UIProgressBar_o* __this, const MethodInfo* method); */

undefined4 native_UIProgressBar__get_fillDirection_c2b6c0(long param_1)

{
  return *(undefined4 *)(param_1 + 0x3c);
}



/* UIProgressBar$$set_fillDirection @ 0xc2b6c8
 * void UIProgressBar__set_fillDirection (UIProgressBar_o* __this, int32_t value, const MethodInfo* method); */

/* UIProgressBar$$set_fillDirection
   void UIProgressBar__set_fillDirection (UIProgressBar_o* __this, int32_t value, const MethodInfo*
   method); */

void native_UIProgressBar__set_fillDirection_c2b6c8(long *param_1,int param_2)

{
  if ((*(int *)((long)param_1 + 0x3c) != param_2) &&
     (*(int *)((long)param_1 + 0x3c) = param_2, (char)param_1[8] != '\0')) {
                    /* WARNING: Could not recover jumptable at 0x00c2b6e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x1a8))(param_1,*(undefined8 *)(*param_1 + 0x1b0));
    return;
  }
  return;
}



/* UIProgressBar$$get_value @ 0xc2b6f0
 * float UIProgressBar__get_value (UIProgressBar_o* __this, const MethodInfo* method); */

/* UIProgressBar$$get_value
   float UIProgressBar__get_value (UIProgressBar_o* __this, const MethodInfo* method); */

float native_UIProgressBar__get_value_c2b6f0(long param_1)

{
  float fVar1;
  double dVar2;
  float fVar3;
  double dStack_28;
  
  if (*(int *)(param_1 + 100) < 2) {
    return *(float *)(param_1 + 0x38);
  }
  fVar3 = *(float *)(param_1 + 0x38) * (float)(*(int *)(param_1 + 100) + -1);
  dVar2 = (double)func_0x002c9600((double)fVar3,&dStack_28);
  if (0.0 <= fVar3) {
    if (dVar2 != 0.5) {
      fVar1 = (float)(int)(fVar3 + 0.5);
      goto LAB_00c2b798;
    }
    fVar3 = 1.0;
  }
  else {
    if (dVar2 != -0.5) {
      fVar1 = (float)(int)(fVar3 + -0.5);
      goto LAB_00c2b798;
    }
    fVar3 = -1.0;
  }
  fVar1 = (float)dStack_28;
  if (((long)dStack_28 & 1U) != 0) {
    fVar1 = (float)dStack_28 + fVar3;
  }
LAB_00c2b798:
  return fVar1 / (float)(*(int *)(param_1 + 100) + -1);
}



/* UIProgressBar$$set_value @ 0xc2b7bc
 * void UIProgressBar__set_value (UIProgressBar_o* __this, float value, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIProgressBar$$set_value
   void UIProgressBar__set_value (UIProgressBar_o* __this, float value, const MethodInfo* method);
    */

undefined8 native_UIProgressBar__set_value_c2b7bc(undefined8 param_1,long *param_2)

{
  ulong uVar1;
  long *plVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  long lVar5;
  float fVar6;
  float fVar7;
  
  if ((bRam00000000013426fb & 1) == 0) {
    native_sub_43273c(&EventDelegate_TypeInfo_12d4590);
    native_sub_43273c(&NGUITools_TypeInfo_12d53c8);
    native_sub_43273c(&UIProgressBar_TypeInfo_12d6498);
    bRam00000000013426fb = 1;
  }
  fVar6 = (float)native_UnityEngine_Mathf__Clamp01_8d9d9c(param_1,0);
  if (*(float *)(param_2 + 7) == fVar6) {
    uVar4 = 0;
  }
  else {
    fVar7 = (float)native_UIProgressBar__get_value_c2b6f0(param_2);
    *(float *)(param_2 + 7) = fVar6;
    if (((char)param_2[8] != '\0') &&
       (fVar6 = (float)native_UIProgressBar__get_value_c2b6f0(param_2), fVar7 != fVar6)) {
      if (((*(byte *)(_NGUITools_TypeInfo_12d53c8 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_NGUITools_TypeInfo_12d53c8 + 0xe0) == 0)) {
        native_sub_4327ec();
      }
      uVar1 = native_NGUITools__GetActive_72d02c(param_2,0);
      if ((uVar1 & 1) != 0) {
        lVar5 = param_2[0xd];
        if (((*(byte *)(_EventDelegate_TypeInfo_12d4590 + 0x133) >> 2 & 1) != 0) &&
           (*(int *)(_EventDelegate_TypeInfo_12d4590 + 0xe0) == 0)) {
          native_sub_4327ec();
        }
        uVar1 = native_EventDelegate__IsValid_deef08(lVar5,0);
        if ((uVar1 & 1) != 0) {
          plVar2 = *(long **)(_UIProgressBar_TypeInfo_12d6498 + 0xb8);
          *plVar2 = (long)param_2;
          native_sub_4326e0(plVar2,param_2);
          lVar5 = param_2[0xd];
          if (((*(byte *)(_EventDelegate_TypeInfo_12d4590 + 0x133) >> 2 & 1) != 0) &&
             (*(int *)(_EventDelegate_TypeInfo_12d4590 + 0xe0) == 0)) {
            native_sub_4327ec();
          }
          native_EventDelegate__Execute_deecbc(lVar5,0);
          puVar3 = *(undefined8 **)(_UIProgressBar_TypeInfo_12d6498 + 0xb8);
          *puVar3 = 0;
          native_sub_4326e0(puVar3,0);
        }
      }
      (**(code **)(*param_2 + 0x1a8))(param_2,*(undefined8 *)(*param_2 + 0x1b0));
    }
    uVar4 = 1;
  }
  return uVar4;
}



/* UIProgressBar$$get_alpha @ 0xc2b950
 * float UIProgressBar__get_alpha (UIProgressBar_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIProgressBar$$get_alpha
   float UIProgressBar__get_alpha (UIProgressBar_o* __this, const MethodInfo* method); */

undefined1  [16] native_UIProgressBar__get_alpha_c2b950(long param_1)

{
  ulong uVar1;
  long *plVar2;
  undefined8 uVar3;
  undefined4 extraout_s0;
  undefined4 extraout_var;
  undefined8 extraout_var_00;
  undefined1 auVar4 [16];
  
  if ((bRam00000000013426f9 & 1) == 0) {
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    bRam00000000013426f9 = 1;
  }
  uVar3 = *(undefined8 *)(param_1 + 0x30);
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar1 = native_UnityEngine_Object__op_Inequality_8d76fc(uVar3,0,0);
  if ((uVar1 & 1) == 0) {
    uVar3 = *(undefined8 *)(param_1 + 0x28);
    if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    uVar1 = native_UnityEngine_Object__op_Inequality_8d76fc(uVar3,0,0);
    if ((uVar1 & 1) == 0) {
      return ZEXT816(0x3f800000);
    }
    plVar2 = *(long **)(param_1 + 0x28);
  }
  else {
    plVar2 = *(long **)(param_1 + 0x30);
  }
  if (plVar2 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00c2b9d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar2 + 0x1a8))(plVar2,*(undefined8 *)(*plVar2 + 0x1b0));
    auVar4._4_4_ = extraout_var;
    auVar4._0_4_ = extraout_s0;
    auVar4._8_8_ = extraout_var_00;
    return auVar4;
  }
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* UIProgressBar$$set_alpha @ 0xc2ba2c
 * void UIProgressBar__set_alpha (UIProgressBar_o* __this, float value, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIProgressBar$$set_alpha
   void UIProgressBar__set_alpha (UIProgressBar_o* __this, float value, const MethodInfo* method);
    */

void native_UIProgressBar__set_alpha_c2ba2c(undefined8 param_1,long param_2)

{
  ulong uVar1;
  long *plVar2;
  long lVar3;
  undefined8 uVar4;
  float fVar5;
  
  if ((bRam00000000013426fa & 1) == 0) {
    native_sub_43273c(&Method_UnityEngine_Component_GetComponent_Collider2D____12e29c8);
    native_sub_43273c(&Method_UnityEngine_Component_GetComponent_Collider____12e29c0);
    native_sub_43273c(&Method_UnityEngine_Component_GetComponent_UIWidget____12e2c30);
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    bRam00000000013426fa = 1;
  }
  uVar4 = *(undefined8 *)(param_2 + 0x30);
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar1 = native_UnityEngine_Object__op_Inequality_8d76fc(uVar4,0,0);
  if ((uVar1 & 1) != 0) {
    plVar2 = *(long **)(param_2 + 0x30);
    if (plVar2 == (long *)0x0) goto LAB_00c2bf64;
    (**(code **)(*plVar2 + 0x1b8))(param_1,plVar2,*(undefined8 *)(*plVar2 + 0x1c0));
    if (*(long *)(param_2 + 0x30) == 0) goto LAB_00c2bf64;
    uVar4 = native_UnityEngine_Component__GetComponent_ActiveAnimation__49daec
                      (*(long *)(param_2 + 0x30),
                       _Method_UnityEngine_Component_GetComponent_Collider____12e29c0);
    if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
      native_sub_4327ec(_UnityEngine_Object_TypeInfo_12d54e0);
    }
    uVar1 = native_UnityEngine_Object__op_Inequality_8d76fc(uVar4,0,0);
    lVar3 = *(long *)(param_2 + 0x30);
    if (lVar3 == 0) goto LAB_00c2bf64;
    if ((uVar1 & 1) == 0) {
      uVar4 = native_UnityEngine_Component__GetComponent_ActiveAnimation__49daec
                        (lVar3,_Method_UnityEngine_Component_GetComponent_Collider2D____12e29c8);
      if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
        native_sub_4327ec(_UnityEngine_Object_TypeInfo_12d54e0);
      }
      uVar1 = native_UnityEngine_Object__op_Inequality_8d76fc(uVar4,0,0);
      if ((uVar1 & 1) != 0) {
        if (*(long *)(param_2 + 0x30) == 0) goto LAB_00c2bf64;
        lVar3 = native_UnityEngine_Component__GetComponent_ActiveAnimation__49daec
                          (*(long *)(param_2 + 0x30),
                           _Method_UnityEngine_Component_GetComponent_Collider2D____12e29c8);
        plVar2 = *(long **)(param_2 + 0x30);
        if ((plVar2 == (long *)0x0) ||
           (fVar5 = (float)(**(code **)(*plVar2 + 0x1a8))(plVar2,*(undefined8 *)(*plVar2 + 0x1b0)),
           lVar3 == 0)) goto LAB_00c2bf64;
        native_UnityEngine_Behaviour__set_enabled_8d7b0c(lVar3,0.001 < fVar5,0);
      }
    }
    else {
      lVar3 = native_UnityEngine_Component__GetComponent_ActiveAnimation__49daec
                        (lVar3,_Method_UnityEngine_Component_GetComponent_Collider____12e29c0);
      plVar2 = *(long **)(param_2 + 0x30);
      if ((plVar2 == (long *)0x0) ||
         (fVar5 = (float)(**(code **)(*plVar2 + 0x1a8))(plVar2,*(undefined8 *)(*plVar2 + 0x1b0)),
         lVar3 == 0)) goto LAB_00c2bf64;
      native_UnityEngine_Collider__set_enabled_dbac4c(lVar3,0.001 < fVar5,0);
    }
  }
  uVar4 = *(undefined8 *)(param_2 + 0x28);
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar1 = native_UnityEngine_Object__op_Inequality_8d76fc(uVar4,0,0);
  if ((uVar1 & 1) != 0) {
    plVar2 = *(long **)(param_2 + 0x28);
    if (plVar2 == (long *)0x0) goto LAB_00c2bf64;
    (**(code **)(*plVar2 + 0x1b8))(param_1,plVar2,*(undefined8 *)(*plVar2 + 0x1c0));
    if (*(long *)(param_2 + 0x28) == 0) goto LAB_00c2bf64;
    uVar4 = native_UnityEngine_Component__GetComponent_ActiveAnimation__49daec
                      (*(long *)(param_2 + 0x28),
                       _Method_UnityEngine_Component_GetComponent_Collider____12e29c0);
    if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
      native_sub_4327ec(_UnityEngine_Object_TypeInfo_12d54e0);
    }
    uVar1 = native_UnityEngine_Object__op_Inequality_8d76fc(uVar4,0,0);
    lVar3 = *(long *)(param_2 + 0x28);
    if (lVar3 == 0) goto LAB_00c2bf64;
    if ((uVar1 & 1) == 0) {
      uVar4 = native_UnityEngine_Component__GetComponent_ActiveAnimation__49daec
                        (lVar3,_Method_UnityEngine_Component_GetComponent_Collider2D____12e29c8);
      if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
        native_sub_4327ec(_UnityEngine_Object_TypeInfo_12d54e0);
      }
      uVar1 = native_UnityEngine_Object__op_Inequality_8d76fc(uVar4,0,0);
      if ((uVar1 & 1) != 0) {
        if (*(long *)(param_2 + 0x28) == 0) goto LAB_00c2bf64;
        lVar3 = native_UnityEngine_Component__GetComponent_ActiveAnimation__49daec
                          (*(long *)(param_2 + 0x28),
                           _Method_UnityEngine_Component_GetComponent_Collider2D____12e29c8);
        plVar2 = *(long **)(param_2 + 0x28);
        if ((plVar2 == (long *)0x0) ||
           (fVar5 = (float)(**(code **)(*plVar2 + 0x1a8))(plVar2,*(undefined8 *)(*plVar2 + 0x1b0)),
           lVar3 == 0)) goto LAB_00c2bf64;
        native_UnityEngine_Behaviour__set_enabled_8d7b0c(lVar3,0.001 < fVar5,0);
      }
    }
    else {
      lVar3 = native_UnityEngine_Component__GetComponent_ActiveAnimation__49daec
                        (lVar3,_Method_UnityEngine_Component_GetComponent_Collider____12e29c0);
      plVar2 = *(long **)(param_2 + 0x28);
      if ((plVar2 == (long *)0x0) ||
         (fVar5 = (float)(**(code **)(*plVar2 + 0x1a8))(plVar2,*(undefined8 *)(*plVar2 + 0x1b0)),
         lVar3 == 0)) goto LAB_00c2bf64;
      native_UnityEngine_Collider__set_enabled_dbac4c(lVar3,0.001 < fVar5,0);
    }
  }
  uVar4 = *(undefined8 *)(param_2 + 0x20);
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar1 = native_UnityEngine_Object__op_Inequality_8d76fc(uVar4,0,0);
  if ((uVar1 & 1) == 0) {
    return;
  }
  if (*(long *)(param_2 + 0x20) != 0) {
    plVar2 = (long *)native_UnityEngine_Component__GetComponent_ActiveAnimation__49daec
                               (*(long *)(param_2 + 0x20),
                                _Method_UnityEngine_Component_GetComponent_UIWidget____12e2c30);
    if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
      native_sub_4327ec(_UnityEngine_Object_TypeInfo_12d54e0);
    }
    uVar1 = native_UnityEngine_Object__op_Inequality_8d76fc(plVar2,0,0);
    if ((uVar1 & 1) == 0) {
      return;
    }
    if (plVar2 != (long *)0x0) {
      (**(code **)(*plVar2 + 0x1b8))(param_1,plVar2,*(undefined8 *)(*plVar2 + 0x1c0));
      uVar4 = native_UnityEngine_Component__GetComponent_ActiveAnimation__49daec
                        (plVar2,_Method_UnityEngine_Component_GetComponent_Collider____12e29c0);
      if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
        native_sub_4327ec(_UnityEngine_Object_TypeInfo_12d54e0);
      }
      uVar1 = native_UnityEngine_Object__op_Inequality_8d76fc(uVar4,0,0);
      if ((uVar1 & 1) == 0) {
        uVar4 = native_UnityEngine_Component__GetComponent_ActiveAnimation__49daec
                          (plVar2,_Method_UnityEngine_Component_GetComponent_Collider2D____12e29c8);
        if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
           (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
          native_sub_4327ec(_UnityEngine_Object_TypeInfo_12d54e0);
        }
        uVar1 = native_UnityEngine_Object__op_Inequality_8d76fc(uVar4,0,0);
        if ((uVar1 & 1) == 0) {
          return;
        }
        lVar3 = native_UnityEngine_Component__GetComponent_ActiveAnimation__49daec
                          (plVar2,_Method_UnityEngine_Component_GetComponent_Collider2D____12e29c8);
        fVar5 = (float)(**(code **)(*plVar2 + 0x1a8))(plVar2,*(undefined8 *)(*plVar2 + 0x1b0));
        if (lVar3 != 0) {
          if (pcRam0000000001340948 == (code *)0x0) {
            pcRam0000000001340948 = (code *)native_sub_4326f0(&UNK_00e2c702);
          }
                    /* WARNING: Could not recover jumptable at 0x008d7b58. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*pcRam0000000001340948)(lVar3,0.001 < fVar5);
          return;
        }
      }
      else {
        lVar3 = native_UnityEngine_Component__GetComponent_ActiveAnimation__49daec
                          (plVar2,_Method_UnityEngine_Component_GetComponent_Collider____12e29c0);
        fVar5 = (float)(**(code **)(*plVar2 + 0x1a8))(plVar2,*(undefined8 *)(*plVar2 + 0x1b0));
        if (lVar3 != 0) {
          if (pcRam0000000001343a70 == (code *)0x0) {
            pcRam0000000001343a70 = (code *)native_sub_4326f0(&UNK_00ecb664);
          }
                    /* WARNING: Could not recover jumptable at 0x00dbac98. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*pcRam0000000001343a70)(lVar3,0.001 < fVar5);
          return;
        }
      }
    }
  }
LAB_00c2bf64:
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* UIProgressBar$$get_isHorizontal @ 0xc2bf68
 * bool UIProgressBar__get_isHorizontal (UIProgressBar_o* __this, const MethodInfo* method); */

/* UIProgressBar$$get_isHorizontal
   bool UIProgressBar__get_isHorizontal (UIProgressBar_o* __this, const MethodInfo* method); */

bool native_UIProgressBar__get_isHorizontal_c2bf68(long param_1)

{
  return *(uint *)(param_1 + 0x3c) < 2;
}



/* UIProgressBar$$get_isInverted @ 0xc2bf78
 * bool UIProgressBar__get_isInverted (UIProgressBar_o* __this, const MethodInfo* method); */

/* UIProgressBar$$get_isInverted
   bool UIProgressBar__get_isInverted (UIProgressBar_o* __this, const MethodInfo* method); */

bool native_UIProgressBar__get_isInverted_c2bf78(long param_1)

{
  return (*(uint *)(param_1 + 0x3c) | 2) == 3;
}



/* UIProgressBar$$Set @ 0xc2b7c4
 * bool UIProgressBar__Set (UIProgressBar_o* __this, float val, bool notify, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIProgressBar$$Set
   bool UIProgressBar__Set (UIProgressBar_o* __this, float val, bool notify, const MethodInfo*
   method); */

undefined8 native_UIProgressBar__Set_c2b7c4(undefined8 param_1,long *param_2,ulong param_3)

{
  ulong uVar1;
  long *plVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  long lVar5;
  float fVar6;
  float fVar7;
  
  if ((bRam00000000013426fb & 1) == 0) {
    native_sub_43273c(&EventDelegate_TypeInfo_12d4590);
    native_sub_43273c(&NGUITools_TypeInfo_12d53c8);
    native_sub_43273c(&UIProgressBar_TypeInfo_12d6498);
    bRam00000000013426fb = 1;
  }
  fVar6 = (float)native_UnityEngine_Mathf__Clamp01_8d9d9c(param_1,0);
  if (*(float *)(param_2 + 7) == fVar6) {
    uVar4 = 0;
  }
  else {
    fVar7 = (float)native_UIProgressBar__get_value_c2b6f0(param_2);
    *(float *)(param_2 + 7) = fVar6;
    if (((char)param_2[8] != '\0') &&
       (fVar6 = (float)native_UIProgressBar__get_value_c2b6f0(param_2), fVar7 != fVar6)) {
      if ((param_3 & 1) != 0) {
        if (((*(byte *)(_NGUITools_TypeInfo_12d53c8 + 0x133) >> 2 & 1) != 0) &&
           (*(int *)(_NGUITools_TypeInfo_12d53c8 + 0xe0) == 0)) {
          native_sub_4327ec();
        }
        uVar1 = native_NGUITools__GetActive_72d02c(param_2,0);
        if ((uVar1 & 1) != 0) {
          lVar5 = param_2[0xd];
          if (((*(byte *)(_EventDelegate_TypeInfo_12d4590 + 0x133) >> 2 & 1) != 0) &&
             (*(int *)(_EventDelegate_TypeInfo_12d4590 + 0xe0) == 0)) {
            native_sub_4327ec();
          }
          uVar1 = native_EventDelegate__IsValid_deef08(lVar5,0);
          if ((uVar1 & 1) != 0) {
            plVar2 = *(long **)(_UIProgressBar_TypeInfo_12d6498 + 0xb8);
            *plVar2 = (long)param_2;
            native_sub_4326e0(plVar2,param_2);
            lVar5 = param_2[0xd];
            if (((*(byte *)(_EventDelegate_TypeInfo_12d4590 + 0x133) >> 2 & 1) != 0) &&
               (*(int *)(_EventDelegate_TypeInfo_12d4590 + 0xe0) == 0)) {
              native_sub_4327ec();
            }
            native_EventDelegate__Execute_deecbc(lVar5,0);
            puVar3 = *(undefined8 **)(_UIProgressBar_TypeInfo_12d6498 + 0xb8);
            *puVar3 = 0;
            native_sub_4326e0(puVar3,0);
          }
        }
      }
      (**(code **)(*param_2 + 0x1a8))(param_2,*(undefined8 *)(*param_2 + 0x1b0));
    }
    uVar4 = 1;
  }
  return uVar4;
}



/* UIProgressBar$$OnEnable @ 0xc2bf8c
 * void UIProgressBar__OnEnable (UIProgressBar_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIProgressBar$$OnEnable
   void UIProgressBar__OnEnable (UIProgressBar_o* __this, const MethodInfo* method); */

void native_UIProgressBar__OnEnable_c2bf8c(long param_1)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  ulong uVar4;
  long *plVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  
  if ((bRam00000000013426fc & 1) == 0) {
    native_sub_43273c(&EventDelegate_TypeInfo_12d4590);
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    native_sub_43273c(&UIProgressBar_TypeInfo_12d6498);
    bRam00000000013426fc = 1;
  }
  if (*(char *)(param_1 + 0x40) != '\0') {
    uVar7 = **(undefined8 **)(_UIProgressBar_TypeInfo_12d6498 + 0xb8);
    if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    uVar4 = native_UnityEngine_Object__op_Equality_8e9a3c(uVar7,0,0);
    if ((uVar4 & 1) != 0) {
      uVar7 = *(undefined8 *)(param_1 + 0x68);
      if (((*(byte *)(_EventDelegate_TypeInfo_12d4590 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_EventDelegate_TypeInfo_12d4590 + 0xe0) == 0)) {
        native_sub_4327ec();
      }
      uVar4 = native_EventDelegate__IsValid_deef08(uVar7,0);
      if ((uVar4 & 1) != 0) {
        plVar5 = *(long **)(_UIProgressBar_TypeInfo_12d6498 + 0xb8);
        *plVar5 = param_1;
        native_sub_4326e0(plVar5,param_1);
        uVar7 = *(undefined8 *)(param_1 + 0x68);
        if (((*(byte *)(_EventDelegate_TypeInfo_12d4590 + 0x133) >> 2 & 1) != 0) &&
           (*(int *)(_EventDelegate_TypeInfo_12d4590 + 0xe0) == 0)) {
          native_sub_4327ec();
        }
        native_EventDelegate__Execute_deecbc(uVar7,0);
        puVar6 = *(undefined8 **)(_UIProgressBar_TypeInfo_12d6498 + 0xb8);
        *puVar6 = 0;
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
    }
  }
  return;
}



/* UIProgressBar$$Start @ 0xc2c0c8
 * void UIProgressBar__Start (UIProgressBar_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIProgressBar$$Start
   void UIProgressBar__Start (UIProgressBar_o* __this, const MethodInfo* method); */

void native_UIProgressBar__Start_c2c0c8(long *param_1)

{
  ulong uVar1;
  long *plVar2;
  undefined8 *puVar3;
  long lVar4;
  undefined8 uVar5;
  
  if ((bRam00000000013426fd & 1) == 0) {
    native_sub_43273c(&EventDelegate_TypeInfo_12d4590);
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    native_sub_43273c(&UIProgressBar_TypeInfo_12d6498);
    bRam00000000013426fd = 1;
  }
  if ((char)param_1[8] != '\0') {
    return;
  }
  *(undefined1 *)(param_1 + 8) = 1;
  (**(code **)(*param_1 + 0x178))(param_1,*(undefined8 *)(*param_1 + 0x180));
  uVar1 = native_UnityEngine_Application__get_isPlaying_8d60cc(0);
  if ((uVar1 & 1) != 0) {
    lVar4 = param_1[5];
    if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    uVar1 = native_UnityEngine_Object__op_Inequality_8d76fc(lVar4,0,0);
    if ((uVar1 & 1) != 0) {
      if (param_1[5] == 0) {
                    /* WARNING: Subroutine does not return */
        native_sub_432810();
      }
      *(undefined1 *)(param_1[5] + 0xd8) = 1;
    }
    (**(code **)(*param_1 + 0x188))(param_1,*(undefined8 *)(*param_1 + 400));
    uVar5 = **(undefined8 **)(_UIProgressBar_TypeInfo_12d6498 + 0xb8);
    if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    uVar1 = native_UnityEngine_Object__op_Equality_8e9a3c(uVar5,0,0);
    if ((uVar1 & 1) != 0) {
      lVar4 = param_1[0xd];
      if (((*(byte *)(_EventDelegate_TypeInfo_12d4590 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_EventDelegate_TypeInfo_12d4590 + 0xe0) == 0)) {
        native_sub_4327ec();
      }
      uVar1 = native_EventDelegate__IsValid_deef08(lVar4,0);
      if ((uVar1 & 1) != 0) {
        plVar2 = *(long **)(_UIProgressBar_TypeInfo_12d6498 + 0xb8);
        *plVar2 = (long)param_1;
        native_sub_4326e0(plVar2,param_1);
        lVar4 = param_1[0xd];
        if (((*(byte *)(_EventDelegate_TypeInfo_12d4590 + 0x133) >> 2 & 1) != 0) &&
           (*(int *)(_EventDelegate_TypeInfo_12d4590 + 0xe0) == 0)) {
          native_sub_4327ec();
        }
        native_EventDelegate__Execute_deecbc(lVar4,0);
        puVar3 = *(undefined8 **)(_UIProgressBar_TypeInfo_12d6498 + 0xb8);
        *puVar3 = 0;
        native_sub_4326e0(puVar3,0);
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00c2c284. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x1a8))(param_1,*(undefined8 *)(*param_1 + 0x1b0));
  return;
}



/* UIProgressBar$$Upgrade @ 0xc2c28c
 * void UIProgressBar__Upgrade (UIProgressBar_o* __this, const MethodInfo* method); */

/* UIProgressBar$$Upgrade
   void UIProgressBar__Upgrade (UIProgressBar_o* __this, const MethodInfo* method); */

void native_UIProgressBar__Upgrade_c2c28c(void)

{
  return;
}



/* UIProgressBar$$OnStart @ 0xc2c290
 * void UIProgressBar__OnStart (UIProgressBar_o* __this, const MethodInfo* method); */

/* UIProgressBar$$OnStart
   void UIProgressBar__OnStart (UIProgressBar_o* __this, const MethodInfo* method); */

void native_UIProgressBar__OnStart_c2c290(void)

{
  return;
}



/* UIProgressBar$$Update @ 0xc2c294
 * void UIProgressBar__Update (UIProgressBar_o* __this, const MethodInfo* method); */

/* UIProgressBar$$Update
   void UIProgressBar__Update (UIProgressBar_o* __this, const MethodInfo* method); */

void native_UIProgressBar__Update_c2c294(long *param_1)

{
  if ((char)param_1[10] != '\0') {
                    /* WARNING: Could not recover jumptable at 0x00c2c2a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x1a8))(param_1,*(undefined8 *)(*param_1 + 0x1b0));
    return;
  }
  return;
}



/* UIProgressBar$$OnValidate @ 0xc2c2ac
 * void UIProgressBar__OnValidate (UIProgressBar_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIProgressBar$$OnValidate
   void UIProgressBar__OnValidate (UIProgressBar_o* __this, const MethodInfo* method); */

void native_UIProgressBar__OnValidate_c2c2ac(long *param_1)

{
  ulong uVar1;
  undefined4 uVar2;
  float fVar3;
  
  if ((bRam00000000013426fe & 1) == 0) {
    native_sub_43273c(&NGUITools_TypeInfo_12d53c8);
    bRam00000000013426fe = 1;
  }
  if (((*(byte *)(_NGUITools_TypeInfo_12d53c8 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_NGUITools_TypeInfo_12d53c8 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar1 = native_NGUITools__GetActive_72d02c(param_1,0);
  if ((uVar1 & 1) == 0) {
    fVar3 = (float)native_UnityEngine_Mathf__Clamp01_8d9d9c((int)param_1[7],0);
    if (*(float *)(param_1 + 7) != fVar3) {
      *(float *)(param_1 + 7) = fVar3;
    }
    if (*(int *)((long)param_1 + 100) < 0) {
      *(undefined4 *)((long)param_1 + 100) = 0;
    }
    else if (0x15 < *(int *)((long)param_1 + 100)) {
      *(undefined4 *)((long)param_1 + 100) = 0x15;
    }
    return;
  }
  (**(code **)(*param_1 + 0x178))(param_1,*(undefined8 *)(*param_1 + 0x180));
  *(undefined1 *)(param_1 + 10) = 1;
  fVar3 = (float)native_UnityEngine_Mathf__Clamp01_8d9d9c((int)param_1[7],0);
  if (*(float *)(param_1 + 7) != fVar3) {
    *(float *)(param_1 + 7) = fVar3;
  }
  if (*(int *)((long)param_1 + 100) < 0) {
    uVar2 = 0;
  }
  else {
    if (*(int *)((long)param_1 + 100) < 0x16) goto LAB_00c2c398;
    uVar2 = 0x15;
  }
  *(undefined4 *)((long)param_1 + 100) = uVar2;
LAB_00c2c398:
                    /* WARNING: Could not recover jumptable at 0x00c2c3ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x1a8))(param_1,*(undefined8 *)(*param_1 + 0x1b0));
  return;
}



/* UIProgressBar$$ScreenToValue @ 0xc2c3c0
 * float UIProgressBar__ScreenToValue (UIProgressBar_o* __this, UnityEngine_Vector2_o screenPos, const MethodInfo* method); */

/* UIProgressBar$$ScreenToValue
   float UIProgressBar__ScreenToValue (UIProgressBar_o* __this, UnityEngine_Vector2_o screenPos,
   const MethodInfo* method); */

void native_UIProgressBar__ScreenToValue_c2c3c0
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               long *param_5)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined4 uStack_64;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  uStack_60 = 0;
  uStack_58 = 0;
  uStack_64 = 0;
  uStack_80 = 0;
  uStack_78 = 0;
  uStack_70 = 0;
  uVar6 = param_2;
  lVar1 = native_UIProgressBar__get_cachedTransform_c2b3e8();
  if (lVar1 != 0) {
    uVar4 = native_UnityEngine_Transform__get_rotation_771a30(lVar1,0);
    uVar7 = uVar6;
    uVar8 = param_3;
    uVar5 = native_UnityEngine_Vector3__get_back_776a70(0);
    uVar4 = native_UnityEngine_Quaternion__op_Multiply_7629c0
                      (uVar4,uVar6,param_3,param_4,uVar5,uVar7,uVar8,0);
    uVar7 = uVar6;
    uVar8 = param_3;
    uVar5 = native_UnityEngine_Transform__get_position_77169c(lVar1,0);
    native_UnityEngine_Plane___ctor_8eb884(uVar4,uVar6,param_3,uVar5,uVar7,uVar8,&uStack_60,0);
    lVar2 = native_UIProgressBar__get_cachedCamera_c2b488(param_5);
    if (lVar2 != 0) {
      native_UnityEngine_Camera__ScreenPointToRay_8d9368(&uStack_98,param_1,param_2,0,lVar2,0);
      uStack_78 = uStack_90;
      uStack_80 = uStack_98;
      uStack_70 = uStack_88;
      uStack_a0 = uStack_88;
      uStack_a8 = uStack_90;
      uStack_b0 = uStack_98;
      uVar3 = native_UnityEngine_Plane__Raycast_8eb9a4(&uStack_60,&uStack_b0,&uStack_64,0);
      if ((uVar3 & 1) == 0) {
        native_UIProgressBar__get_value_c2b6f0(param_5);
      }
      else {
        native_UnityEngine_Ray__GetPoint_7631f4(uStack_64,&uStack_80,0);
        native_UnityEngine_Transform__InverseTransformPoint_7729a0(lVar1,0);
        (**(code **)(*param_5 + 0x198))(param_5,*(undefined8 *)(*param_5 + 0x1a0));
      }
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* UIProgressBar$$LocalToValue @ 0xc2c534
 * float UIProgressBar__LocalToValue (UIProgressBar_o* __this, UnityEngine_Vector2_o localPos, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIProgressBar$$LocalToValue
   float UIProgressBar__LocalToValue (UIProgressBar_o* __this, UnityEngine_Vector2_o localPos, const
   MethodInfo* method); */

float native_UIProgressBar__LocalToValue_c2c534(float param_1,float param_2,long param_3)

{
  ulong uVar1;
  long *plVar2;
  long lVar3;
  undefined8 uVar4;
  float fVar5;
  float fVar6;
  double dVar7;
  double unaff_d8;
  
  if ((bRam00000000013426ff & 1) == 0) {
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    bRam00000000013426ff = 1;
  }
  uVar4 = *(undefined8 *)(param_3 + 0x30);
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar1 = native_UnityEngine_Object__op_Inequality_8d76fc(uVar4,0,0);
  if ((uVar1 & 1) != 0) {
    plVar2 = *(long **)(param_3 + 0x30);
    if ((plVar2 != (long *)0x0) &&
       (lVar3 = (**(code **)(*plVar2 + 0x1d8))(plVar2,*(undefined8 *)(*plVar2 + 0x1e0)), lVar3 != 0)
       ) {
      if (*(uint *)(lVar3 + 0x18) < 3) {
        uVar4 = native_sub_43283c();
                    /* WARNING: Subroutine does not return */
        native_sub_4327dc(uVar4,0);
      }
      if (*(uint *)(param_3 + 0x3c) < 2) {
        fVar6 = *(float *)(lVar3 + 0x38) - *(float *)(lVar3 + 0x20);
        param_1 = param_1 - *(float *)(lVar3 + 0x20);
      }
      else {
        fVar6 = *(float *)(lVar3 + 0x3c) - *(float *)(lVar3 + 0x24);
        param_1 = param_2 - *(float *)(lVar3 + 0x24);
      }
      fVar5 = 1.0 - param_1 / fVar6;
      if ((*(uint *)(param_3 + 0x3c) | 2) != 3) {
        fVar5 = param_1 / fVar6;
      }
      return fVar5;
    }
                    /* WARNING: Subroutine does not return */
    native_sub_432810();
  }
  if (*(int *)(param_3 + 100) < 2) {
    return *(float *)(param_3 + 0x38);
  }
  fVar6 = *(float *)(param_3 + 0x38) * (float)(*(int *)(param_3 + 100) + -1);
  dVar7 = (double)func_0x002c9600((double)fVar6,&stack0xffffffffffffffd8);
  if (0.0 <= fVar6) {
    if (dVar7 != 0.5) {
      fVar5 = (float)(int)(fVar6 + 0.5);
      goto LAB_00c2b798;
    }
    fVar6 = 1.0;
  }
  else {
    if (dVar7 != -0.5) {
      fVar5 = (float)(int)(fVar6 + -0.5);
      goto LAB_00c2b798;
    }
    fVar6 = -1.0;
  }
  fVar5 = (float)unaff_d8;
  if (((long)unaff_d8 & 1U) != 0) {
    fVar5 = (float)unaff_d8 + fVar6;
  }
LAB_00c2b798:
  return fVar5 / (float)(*(int *)(param_3 + 100) + -1);
}



/* UIProgressBar$$ForceUpdate @ 0xc2c650
 * void UIProgressBar__ForceUpdate (UIProgressBar_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIProgressBar$$ForceUpdate
   void UIProgressBar__ForceUpdate (UIProgressBar_o* __this, const MethodInfo* method); */

void native_UIProgressBar__ForceUpdate_c2c650
               (undefined1 param_1 [16],float param_2,float param_3,float param_4,long param_5)

{
  uint uVar1;
  bool bVar2;
  int iVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  ulong uVar8;
  long *plVar9;
  long *plVar10;
  undefined4 *puVar11;
  float fVar12;
  undefined4 uVar13;
  float fVar14;
  float fVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  undefined8 uVar23;
  float fVar24;
  undefined8 uStack_90;
  undefined8 uStack_88;
  
  if ((bRam0000000001342700 & 1) == 0) {
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    native_sub_43273c(&UIBasicSprite_TypeInfo_12d6400);
    bRam0000000001342700 = 1;
  }
  *(undefined1 *)(param_5 + 0x50) = 0;
  plVar10 = *(long **)(param_5 + 0x30);
  if (plVar10 == (long *)0x0) {
LAB_00c2c6d4:
    plVar9 = (long *)0x0;
  }
  else {
    if (*(byte *)(*plVar10 + 300) < *(byte *)(_UIBasicSprite_TypeInfo_12d6400 + 300))
    goto LAB_00c2c6d4;
    plVar9 = plVar10;
    if (*(long *)(*(long *)(*plVar10 + 200) +
                  (ulong)*(byte *)(_UIBasicSprite_TypeInfo_12d6400 + 300) * 8 + -8) !=
        _UIBasicSprite_TypeInfo_12d6400) {
      plVar9 = (long *)0x0;
    }
  }
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar4 = native_UnityEngine_Object__op_Inequality_8d76fc(plVar10,0,0);
  if ((uVar4 & 1) == 0) {
LAB_00c2c824:
    bVar2 = false;
  }
  else {
    if (*(uint *)(param_5 + 0x3c) < 2) {
      if (((*(ushort *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
        native_sub_4327ec();
      }
      uVar4 = native_UnityEngine_Object__op_Inequality_8d76fc(plVar9,0,0);
      if ((uVar4 & 1) != 0) {
        if (plVar9 == (long *)0x0) goto LAB_00c2ce1c;
        iVar3 = (**(code **)(*plVar9 + 0x428))(plVar9,*(undefined8 *)(*plVar9 + 0x430));
        if (iVar3 == 3) {
          if (*(uint *)((long)plVar9 + 0x194) < 2) {
            uVar7 = 0;
LAB_00c2c7ec:
            native_UIBasicSprite__set_fillDirection_c8becc(plVar9,uVar7,0);
            native_UIBasicSprite__set_invert_c8c164(plVar9,(*(uint *)(param_5 + 0x3c) | 2) == 3,0);
          }
LAB_00c2c810:
          native_UIProgressBar__get_value_c2b6f0(param_5);
          native_UIBasicSprite__set_fillAmount_c8bef0(plVar9,0);
          goto LAB_00c2c824;
        }
      }
      uVar1 = *(uint *)(param_5 + 0x3c);
      lVar5 = *(long *)(param_5 + 0x30);
      uVar23 = native_UIProgressBar__get_value_c2b6f0(param_5);
      fVar12 = (float)uVar23;
      if ((uVar1 | 2) == 3) {
        uVar23 = 0x3f800000;
        fVar12 = 1.0 - fVar12;
        fVar18 = 0.0;
        uVar7 = uVar23;
      }
      else {
        uVar7 = 0x3f800000;
LAB_00c2c8b8:
        fVar12 = 0.0;
        fVar18 = 0.0;
      }
    }
    else {
      if (((*(ushort *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
        native_sub_4327ec();
      }
      uVar4 = native_UnityEngine_Object__op_Inequality_8d76fc(plVar9,0,0);
      if ((uVar4 & 1) != 0) {
        if (plVar9 == (long *)0x0) goto LAB_00c2ce1c;
        iVar3 = (**(code **)(*plVar9 + 0x428))(plVar9,*(undefined8 *)(*plVar9 + 0x430));
        if (iVar3 == 3) {
          if (*(uint *)((long)plVar9 + 0x194) < 2) {
            uVar7 = 1;
            goto LAB_00c2c7ec;
          }
          goto LAB_00c2c810;
        }
      }
      uVar1 = *(uint *)(param_5 + 0x3c);
      lVar5 = *(long *)(param_5 + 0x30);
      uVar7 = native_UIProgressBar__get_value_c2b6f0(param_5);
      if ((uVar1 | 2) != 3) {
        uVar23 = 0x3f800000;
        goto LAB_00c2c8b8;
      }
      uVar23 = 0x3f800000;
      fVar18 = 1.0 - (float)uVar7;
      fVar12 = 0.0;
      uVar7 = uVar23;
    }
    uStack_88 = 0;
    uStack_90 = 0;
    native_UnityEngine_Vector4___ctor_776f24(fVar12,fVar18,uVar23,uVar7,&uStack_90,0);
    param_3 = (float)uStack_88;
    param_4 = (float)((ulong)uStack_88 >> 0x20);
    if (lVar5 == 0) goto LAB_00c2ce1c;
    native_UIWidget__set_drawRegion_94561c((undefined4)uStack_90,uStack_90._4_4_,lVar5,0);
    if (*(long *)(param_5 + 0x30) == 0) goto LAB_00c2ce1c;
    native_UnityEngine_Behaviour__set_enabled_8d7b0c(*(long *)(param_5 + 0x30),1,0);
    fVar12 = (float)native_UIProgressBar__get_value_c2b6f0(param_5);
    param_2 = 0.001;
    bVar2 = fVar12 < 0.001;
  }
  uVar7 = *(undefined8 *)(param_5 + 0x28);
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar4 = native_UnityEngine_Object__op_Inequality_8d76fc(uVar7,0,0);
  if ((uVar4 & 1) != 0) {
    plVar10 = *(long **)(param_5 + 0x28);
    if (plVar10 == (long *)0x0) {
LAB_00c2c960:
      plVar10 = (long *)0x0;
    }
    else {
      if (*(byte *)(*plVar10 + 300) < *(byte *)(_UIBasicSprite_TypeInfo_12d6400 + 300))
      goto LAB_00c2c960;
      if (*(long *)(*(long *)(*plVar10 + 200) +
                    (ulong)*(byte *)(_UIBasicSprite_TypeInfo_12d6400 + 300) * 8 + -8) !=
          _UIBasicSprite_TypeInfo_12d6400) {
        plVar10 = (long *)0x0;
      }
    }
    if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    uVar4 = native_UnityEngine_Object__op_Inequality_8d76fc(plVar10,0,0);
    if ((uVar4 & 1) != 0) {
      if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
        native_sub_4327ec();
      }
      uVar4 = native_UnityEngine_Object__op_Inequality_8d76fc(plVar9,0,0);
      if ((uVar4 & 1) != 0) {
        if ((plVar10 == (long *)0x0) || (plVar9 == (long *)0x0)) goto LAB_00c2ce1c;
        if (((*(char *)((long)plVar10 + 0x19c) != '\0') != (*(char *)((long)plVar9 + 0x19c) != '\0')
            ) && ((iVar3 = (**(code **)(*plVar10 + 0x428))
                                     (plVar10,*(undefined8 *)(*plVar10 + 0x430)), iVar3 == 3 &&
                  (iVar3 = (**(code **)(*plVar9 + 0x428))(plVar9,*(undefined8 *)(*plVar9 + 0x430)),
                  iVar3 == 3)))) {
          param_2 = 1.0;
          native_UIBasicSprite__set_fillAmount_c8bef0(1.0 - *(float *)(plVar9 + 0x33),plVar10,0);
        }
      }
    }
  }
  uVar7 = *(undefined8 *)(param_5 + 0x20);
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar4 = native_UnityEngine_Object__op_Inequality_8d76fc(uVar7,0,0);
  if ((uVar4 & 1) != 0) {
    uVar7 = *(undefined8 *)(param_5 + 0x30);
    if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    uVar4 = native_UnityEngine_Object__op_Inequality_8d76fc(uVar7,0,0);
    if ((uVar4 & 1) == 0) {
      uVar7 = *(undefined8 *)(param_5 + 0x28);
      if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
        native_sub_4327ec();
      }
      uVar4 = native_UnityEngine_Object__op_Inequality_8d76fc(uVar7,0,0);
      if ((uVar4 & 1) == 0) goto LAB_00c2cdd0;
    }
    uVar7 = *(undefined8 *)(param_5 + 0x30);
    if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    uVar4 = native_UnityEngine_Object__op_Inequality_8d76fc(uVar7,0,0);
    if ((uVar4 & 1) == 0) {
      plVar10 = *(long **)(param_5 + 0x28);
    }
    else {
      plVar10 = *(long **)(param_5 + 0x30);
    }
    if (plVar10 == (long *)0x0) goto LAB_00c2ce1c;
    lVar5 = (**(code **)(*plVar10 + 0x1d8))(plVar10,*(undefined8 *)(*plVar10 + 0x1e0));
    uVar7 = *(undefined8 *)(param_5 + 0x30);
    if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    uVar4 = native_UnityEngine_Object__op_Inequality_8d76fc(uVar7,0,0);
    if ((uVar4 & 1) == 0) {
      plVar10 = *(long **)(param_5 + 0x28);
    }
    else {
      plVar10 = *(long **)(param_5 + 0x30);
    }
    if ((plVar10 == (long *)0x0) ||
       (fVar12 = (float)(**(code **)(*plVar10 + 0x3d8))(plVar10,*(undefined8 *)(*plVar10 + 0x3e0)),
       lVar5 == 0)) goto LAB_00c2ce1c;
    uVar1 = *(uint *)(lVar5 + 0x18);
    if ((uVar1 == 0) ||
       (((*(float *)(lVar5 + 0x20) = fVar12 + *(float *)(lVar5 + 0x20), uVar1 == 1 ||
         (*(float *)(lVar5 + 0x2c) = fVar12 + *(float *)(lVar5 + 0x2c), uVar1 < 3)) ||
        (*(float *)(lVar5 + 0x38) = *(float *)(lVar5 + 0x38) - param_3, uVar1 == 3))))
    goto LAB_00c2ce10;
    *(float *)(lVar5 + 0x44) = *(float *)(lVar5 + 0x44) - param_3;
    *(float *)(lVar5 + 0x48) = param_2 + *(float *)(lVar5 + 0x48);
    *(float *)(lVar5 + 0x24) = param_2 + *(float *)(lVar5 + 0x24);
    *(float *)(lVar5 + 0x30) = *(float *)(lVar5 + 0x30) - param_4;
    *(float *)(lVar5 + 0x3c) = *(float *)(lVar5 + 0x3c) - param_4;
    uVar7 = *(undefined8 *)(param_5 + 0x30);
    if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    uVar4 = native_UnityEngine_Object__op_Inequality_8d76fc(uVar7,0,0);
    if ((uVar4 & 1) == 0) {
      lVar6 = *(long *)(param_5 + 0x28);
    }
    else {
      lVar6 = *(long *)(param_5 + 0x30);
    }
    if (lVar6 == 0) goto LAB_00c2ce1c;
    lVar6 = native_UIRect__get_cachedTransform_c27c58();
    uVar8 = (ulong)*(uint *)(lVar5 + 0x18);
    uVar4 = 0xffffffffffffffff;
    puVar11 = (undefined4 *)(lVar5 + 0x28);
    do {
      if (uVar8 <= uVar4 + 1) goto LAB_00c2ce10;
      if (lVar6 == 0) goto LAB_00c2ce1c;
      uVar16 = puVar11[-1];
      uVar17 = *puVar11;
      uVar13 = native_UnityEngine_Transform__TransformPoint_7728d8(puVar11[-2],lVar6,0);
      uVar1 = *(uint *)(lVar5 + 0x18);
      uVar8 = (ulong)uVar1;
      if (uVar8 <= uVar4 + 1) goto LAB_00c2ce10;
      uVar4 = uVar4 + 1;
      puVar11[-2] = uVar13;
      puVar11[-1] = uVar16;
      *puVar11 = uVar17;
      puVar11 = puVar11 + 3;
    } while (uVar4 < 3);
    if (uVar1 == 0) goto LAB_00c2ce10;
    fVar12 = *(float *)(lVar5 + 0x28);
    fVar18 = (float)*(undefined8 *)(lVar5 + 0x20);
    fVar19 = (float)((ulong)*(undefined8 *)(lVar5 + 0x20) >> 0x20);
    if (*(uint *)(param_5 + 0x3c) < 2) {
      if (uVar1 < 2) {
LAB_00c2ce10:
        uVar7 = native_sub_43283c();
                    /* WARNING: Subroutine does not return */
        native_sub_4327dc(uVar7,0);
      }
      uVar7 = *(undefined8 *)(lVar5 + 0x2c);
      fVar20 = *(float *)(lVar5 + 0x34);
      fVar14 = (float)native_UnityEngine_Mathf__Clamp01_8d9d9c(0x3f000000,0);
      if ((*(uint *)(lVar5 + 0x18) < 3) || (*(uint *)(lVar5 + 0x18) == 3)) goto LAB_00c2ce10;
      fVar15 = (float)uVar7;
      fVar22 = (float)((ulong)uVar7 >> 0x20);
      uVar7 = *(undefined8 *)(lVar5 + 0x38);
      fVar21 = *(float *)(lVar5 + 0x40);
      uVar23 = *(undefined8 *)(lVar5 + 0x44);
      fVar24 = *(float *)(lVar5 + 0x4c);
    }
    else {
      if (uVar1 < 4) goto LAB_00c2ce10;
      uVar7 = *(undefined8 *)(lVar5 + 0x44);
      fVar20 = *(float *)(lVar5 + 0x4c);
      fVar14 = (float)native_UnityEngine_Mathf__Clamp01_8d9d9c(0x3f000000,0);
      if ((*(uint *)(lVar5 + 0x18) < 2) || (*(uint *)(lVar5 + 0x18) == 2)) goto LAB_00c2ce10;
      fVar15 = (float)uVar7;
      fVar22 = (float)((ulong)uVar7 >> 0x20);
      uVar7 = *(undefined8 *)(lVar5 + 0x2c);
      fVar21 = *(float *)(lVar5 + 0x34);
      uVar23 = *(undefined8 *)(lVar5 + 0x38);
      fVar24 = *(float *)(lVar5 + 0x40);
    }
    fVar12 = fVar12 + (fVar20 - fVar12) * fVar14;
    fVar18 = fVar18 + (fVar15 - fVar18) * fVar14;
    fVar19 = fVar19 + (fVar22 - fVar19) * fVar14;
    fVar20 = (float)native_UnityEngine_Mathf__Clamp01_8d9d9c(0x3f000000,0);
    uVar1 = *(uint *)(param_5 + 0x3c);
    fVar15 = (float)native_UIProgressBar__get_value_c2b6f0(param_5);
    fVar14 = 1.0 - fVar15;
    if ((uVar1 | 2) != 3) {
      fVar14 = fVar15;
    }
    fVar14 = (float)native_UnityEngine_Mathf__Clamp01_8d9d9c(fVar14,0);
    fVar15 = (float)((ulong)uVar7 >> 0x20);
    native_UIProgressBar__SetThumbPosition_c2ce20
              (fVar18 + (((float)uVar7 + ((float)uVar23 - (float)uVar7) * fVar20) - fVar18) * fVar14
               ,fVar19 + ((fVar15 + ((float)((ulong)uVar23 >> 0x20) - fVar15) * fVar20) - fVar19) *
                         fVar14,fVar12 + ((fVar21 + (fVar24 - fVar21) * fVar20) - fVar12) * fVar14,
               param_5);
  }
LAB_00c2cdd0:
  if (bVar2) {
    if (*(long *)(param_5 + 0x30) == 0) {
LAB_00c2ce1c:
                    /* WARNING: Subroutine does not return */
      native_sub_432810();
    }
    native_UnityEngine_Behaviour__set_enabled_8d7b0c(*(long *)(param_5 + 0x30),0,0);
  }
  return;
}



/* UIProgressBar$$SetThumbPosition @ 0xc2ce20
 * void UIProgressBar__SetThumbPosition (UIProgressBar_o* __this, UnityEngine_Vector3_o worldPos, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIProgressBar$$SetThumbPosition
   void UIProgressBar__SetThumbPosition (UIProgressBar_o* __this, UnityEngine_Vector3_o worldPos,
   const MethodInfo* method); */

void native_UIProgressBar__SetThumbPosition_c2ce20
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  ulong uVar2;
  float fVar3;
  undefined8 uStack_38;
  
  if ((bRam0000000001342701 & 1) == 0) {
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    bRam0000000001342701 = 1;
  }
  if (*(long *)(param_4 + 0x20) != 0) {
    lVar1 = native_UnityEngine_Transform__get_parent_765eb0(*(long *)(param_4 + 0x20),0);
    if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
      native_sub_4327ec(_UnityEngine_Object_TypeInfo_12d54e0);
    }
    uVar2 = native_UnityEngine_Object__op_Inequality_8d76fc(lVar1,0,0);
    if ((uVar2 & 1) == 0) {
      if (*(long *)(param_4 + 0x20) != 0) {
        native_UnityEngine_Transform__get_position_77169c(*(long *)(param_4 + 0x20),0);
        fVar3 = (float)native_UnityEngine_Vector3__Distance_7766d0(0);
        if (fVar3 <= 1e-05) {
          return;
        }
        lVar1 = *(long *)(param_4 + 0x20);
        if (lVar1 != 0) {
          if (pcRam000000000133fed8 == (code *)0x0) {
            pcRam000000000133fed8 = (code *)native_sub_4326f0(&UNK_00e2ad18,0);
          }
          (*pcRam000000000133fed8)(lVar1,&stack0xffffffffffffffd0);
          return;
        }
      }
    }
    else if (lVar1 != 0) {
      fVar3 = (float)native_UnityEngine_Transform__InverseTransformPoint_7729a0
                               (param_1,param_2,param_3,lVar1,0);
      func_0x002c9600((double)fVar3,&uStack_38);
      func_0x002c9600((double)(float)param_2,&uStack_38);
      if (*(long *)(param_4 + 0x20) != 0) {
        native_UnityEngine_Transform__get_localPosition_7717f4(*(long *)(param_4 + 0x20),0);
        fVar3 = (float)native_UnityEngine_Vector3__Distance_7766d0(0);
        if (fVar3 <= 0.001) {
          return;
        }
        lVar1 = *(long *)(param_4 + 0x20);
        if (lVar1 != 0) {
          if (pcRam000000000133fee8 == (code *)0x0) {
            pcRam000000000133fee8 = (code *)native_sub_4326f0(&UNK_00e2ada3,0);
          }
          (*pcRam000000000133fee8)(lVar1,&stack0xffffffffffffffd0);
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* UIProgressBar$$OnPan @ 0xc2d094
 * void UIProgressBar__OnPan (UIProgressBar_o* __this, UnityEngine_Vector2_o delta, const MethodInfo* method); */

/* UIProgressBar$$OnPan
   void UIProgressBar__OnPan (UIProgressBar_o* __this, UnityEngine_Vector2_o delta, const
   MethodInfo* method); */

void native_UIProgressBar__OnPan_c2d094(float param_1,float param_2,long param_3)

{
  ulong uVar1;
  undefined4 uVar2;
  
  uVar1 = native_UnityEngine_Behaviour__get_enabled_8d7acc(param_3,0);
  if ((uVar1 & 1) != 0) {
    switch(*(undefined4 *)(param_3 + 0x3c)) {
    case 0:
      param_2 = param_1 + *(float *)(param_3 + 0x38);
      break;
    case 1:
      param_2 = *(float *)(param_3 + 0x38) - param_1;
      break;
    case 2:
      param_2 = param_2 + *(float *)(param_3 + 0x38);
      break;
    case 3:
      param_2 = *(float *)(param_3 + 0x38) - param_2;
      break;
    default:
      goto LAB_00c2d124;
    }
    uVar2 = native_UnityEngine_Mathf__Clamp01_8d9d9c(param_2,0);
    native_UIProgressBar__Set_c2b7c4(param_3,1);
    *(undefined4 *)(param_3 + 0x38) = uVar2;
  }
LAB_00c2d124:
  return;
}



/* UIProgressBar$$.ctor @ 0xc2d134
 * void UIProgressBar___ctor (UIProgressBar_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIProgressBar$$.ctor
   void UIProgressBar___ctor (UIProgressBar_o* __this, const MethodInfo* method); */

undefined1  [16] native_UIProgressBar___ctor_c2d134(ulong param_1)

{
  undefined8 uVar1;
  undefined1 auVar2 [16];
  
  if ((bRam0000000001342702 & 1) == 0) {
    native_sub_43273c(&Method_System_Collections_Generic_List_EventDelegate___ctor___12dc738);
    native_sub_43273c(&System_Collections_Generic_List_EventDelegate__TypeInfo_12d2a08);
    bRam0000000001342702 = 1;
  }
  *(undefined4 *)(param_1 + 0x38) = 0x3f800000;
  uVar1 = native_sub_432808(_System_Collections_Generic_List_EventDelegate__TypeInfo_12d2a08);
  native_System_Collections_Generic_List_XmlEventCache_XmlEvent______ctor_d3ff44
            (uVar1,_Method_System_Collections_Generic_List_EventDelegate___ctor___12dc738);
  *(undefined8 *)(param_1 + 0x68) = uVar1;
  native_sub_4326e0(param_1 + 0x68,uVar1);
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


