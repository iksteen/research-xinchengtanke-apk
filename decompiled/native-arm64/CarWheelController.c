/* ARM64 IL2CPP native pseudocode from Ghidra.
 * Recovered implementation, not original C# source.
 * Function boundaries follow the IL2CPP method address table. */


/* CarWheelController$$Start @ 0xdd6104
 * void CarWheelController__Start (CarWheelController_o* __this, const MethodInfo* method); */

/* CarWheelController$$Start
   void CarWheelController__Start (CarWheelController_o* __this, const MethodInfo* method); */

void native_CarWheelController__Start_dd6104(void)

{
  return;
}



/* CarWheelController$$Update @ 0xdd6108
 * void CarWheelController__Update (CarWheelController_o* __this, const MethodInfo* method); */

/* CarWheelController$$Update
   void CarWheelController__Update (CarWheelController_o* __this, const MethodInfo* method); */

void native_CarWheelController__Update_dd6108(long param_1)

{
  long lVar1;
  long lVar2;
  float fVar3;
  float fVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  float fVar7;
  undefined4 uVar8;
  
  if (*(long *)(param_1 + 0x18) != 0) {
    fVar7 = *(float *)(param_1 + 0x20);
    fVar3 = (float)native_UnityEngine_WheelCollider__get_rpm_dc60a0(*(long *)(param_1 + 0x18),0);
    fVar4 = (float)native_UnityEngine_Time__get_deltaTime_77082c(0);
    *(float *)(param_1 + 0x20) = fVar7 + fVar4 * ((fVar3 * 360.0) / 60.0);
    lVar1 = native_UnityEngine_Component__get_transform_8da62c(param_1,0);
    if ((*(long *)(param_1 + 0x18) != 0) &&
       (lVar2 = native_UnityEngine_Component__get_transform_8da62c(*(long *)(param_1 + 0x18),0),
       lVar2 != 0)) {
      uVar5 = native_UnityEngine_Transform__get_rotation_771a30(lVar2,0);
      if (*(long *)(param_1 + 0x18) != 0) {
        uVar8 = *(undefined4 *)(param_1 + 0x20);
        uVar6 = native_UnityEngine_WheelCollider__get_steerAngle_dc6010(*(long *)(param_1 + 0x18),0)
        ;
        native_UnityEngine_Quaternion__Euler_762bc4(uVar8,uVar6,0,0);
        native_UnityEngine_Quaternion__op_Multiply_76294c(uVar5,0);
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
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* CarWheelController$$.ctor @ 0xdd6220
 * void CarWheelController___ctor (CarWheelController_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CarWheelController$$.ctor
   void CarWheelController___ctor (CarWheelController_o* __this, const MethodInfo* method); */

undefined1  [16] native_CarWheelController___ctor_dd6220(ulong param_1)

{
  undefined1 auVar1 [16];
  
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


