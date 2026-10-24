/* ARM64 IL2CPP native pseudocode from Ghidra.
 * Recovered implementation, not original C# source.
 * Function boundaries follow the IL2CPP method address table. */


/* CarCameraController$$Start @ 0xdd4d40
 * void CarCameraController__Start (CarCameraController_o* __this, const MethodInfo* method); */

/* CarCameraController$$Start
   void CarCameraController__Start (CarCameraController_o* __this, const MethodInfo* method); */

void native_CarCameraController__Start_dd4d40(long param_1)

{
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  return;
}



/* CarCameraController$$Update @ 0xdd4d4c
 * void CarCameraController__Update (CarCameraController_o* __this, const MethodInfo* method); */

/* CarCameraController$$Update
   void CarCameraController__Update (CarCameraController_o* __this, const MethodInfo* method); */

void native_CarCameraController__Update_dd4d4c(void)

{
  return;
}



/* CarCameraController$$FixedUpdate @ 0xdd4d50
 * void CarCameraController__FixedUpdate (CarCameraController_o* __this, const MethodInfo* method); */

/* CarCameraController$$FixedUpdate
   void CarCameraController__FixedUpdate (CarCameraController_o* __this, const MethodInfo* method);
    */

void native_CarCameraController__FixedUpdate_dd4d50(long param_1)

{
  undefined8 uVar1;
  undefined4 uVar2;
  float fVar3;
  
  native_CarCameraController__normal_carmera_follow_dd4d74();
  uVar2 = *(undefined4 *)(param_1 + 0x38);
  fVar3 = *(float *)(param_1 + 0x3c);
  uVar1 = native_UnityEngine_Time__get_deltaTime_77082c(0);
  uVar1 = native_UnityEngine_Mathf__Lerp_8e5224(uVar2,fVar3 * 0.25,uVar1,0);
  *(int *)(param_1 + 0x38) = (int)uVar1;
  uVar2 = native_UnityEngine_Mathf__Clamp_8e51ec(uVar1,0,0x425c0000,0);
  *(undefined4 *)(param_1 + 0x38) = uVar2;
  return;
}



/* CarCameraController$$normal_carmera_follow @ 0xdd4d74
 * void CarCameraController__normal_carmera_follow (CarCameraController_o* __this, const MethodInfo* method); */

/* CarCameraController$$normal_carmera_follow
   void CarCameraController__normal_carmera_follow (CarCameraController_o* __this, const MethodInfo*
   method); */

void native_CarCameraController__normal_carmera_follow_dd4d74(long param_1)

{
  long lVar1;
  long lVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  undefined8 uVar6;
  
  lVar1 = native_UnityEngine_Component__get_transform_8da62c(param_1,0);
  lVar2 = native_UnityEngine_Component__get_transform_8da62c(param_1,0);
  if (lVar2 != 0) {
    fVar3 = (float)native_UnityEngine_Transform__get_position_77169c(lVar2,0);
    if ((*(long *)(param_1 + 0x18) != 0) &&
       (lVar2 = native_UnityEngine_GameObject__get_transform_8de5c8(*(long *)(param_1 + 0x18),0),
       lVar2 != 0)) {
      fVar4 = (float)native_UnityEngine_Transform__get_position_77169c(lVar2,0);
      fVar5 = (float)native_UnityEngine_Time__get_deltaTime_77082c(0);
      fVar5 = (float)native_UnityEngine_Mathf__Clamp01_8d9d9c(fVar5 * *(float *)(param_1 + 0x38),0);
      if (lVar1 != 0) {
        native_UnityEngine_Transform__set_position_77174c(fVar3 + (fVar4 - fVar3) * fVar5,lVar1,0);
        lVar1 = native_UnityEngine_Component__get_transform_8da62c(param_1,0);
        lVar2 = native_UnityEngine_Component__get_transform_8da62c(param_1,0);
        if (lVar2 != 0) {
          uVar6 = native_UnityEngine_Transform__get_rotation_771a30(lVar2,0);
          if ((*(long *)(param_1 + 0x18) != 0) &&
             (lVar2 = native_UnityEngine_GameObject__get_transform_8de5c8
                                (*(long *)(param_1 + 0x18),0), lVar2 != 0)) {
            native_UnityEngine_Transform__get_rotation_771a30(lVar2,0);
            native_UnityEngine_Time__get_deltaTime_77082c(0);
            native_UnityEngine_Quaternion__Lerp_76247c(uVar6,0);
            if (lVar1 != 0) {
              if (pcRam000000000133fef8 == (code *)0x0) {
                pcRam000000000133fef8 = (code *)native_sub_4326f0(&UNK_00e2ae31,0);
              }
              (*pcRam000000000133fef8)(lVar1,&stack0xffffffffffffffd0);
              return;
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* CarCameraController$$CameraAtrribute @ 0xdd4f0c
 * void CarCameraController__CameraAtrribute (CarCameraController_o* __this, const MethodInfo* method); */

/* CarCameraController$$CameraAtrribute
   void CarCameraController__CameraAtrribute (CarCameraController_o* __this, const MethodInfo*
   method); */

void native_CarCameraController__CameraAtrribute_dd4f0c(long param_1)

{
  undefined8 uVar1;
  undefined4 uVar2;
  float fVar3;
  
  uVar2 = *(undefined4 *)(param_1 + 0x38);
  fVar3 = *(float *)(param_1 + 0x3c);
  uVar1 = native_UnityEngine_Time__get_deltaTime_77082c(0);
  uVar1 = native_UnityEngine_Mathf__Lerp_8e5224(uVar2,fVar3 * 0.25,uVar1,0);
  *(int *)(param_1 + 0x38) = (int)uVar1;
  uVar2 = native_UnityEngine_Mathf__Clamp_8e51ec(uVar1,0,0x425c0000,0);
  *(undefined4 *)(param_1 + 0x38) = uVar2;
  return;
}



/* CarCameraController$$.ctor @ 0xdd4f70
 * void CarCameraController___ctor (CarCameraController_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CarCameraController$$.ctor
   void CarCameraController___ctor (CarCameraController_o* __this, const MethodInfo* method); */

undefined1  [16] native_CarCameraController___ctor_dd4f70(ulong param_1)

{
  undefined1 auVar1 [16];
  
  *(undefined4 *)(param_1 + 0x3c) = 0x40800000;
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


