/* ARM64 IL2CPP native pseudocode from Ghidra.
 * Recovered implementation, not original C# source.
 * Function boundaries follow the IL2CPP method address table. */


/* HandCarEngineController$$Start @ 0xdf161c
 * void HandCarEngineController__Start (HandCarEngineController_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* HandCarEngineController$$Start
   void HandCarEngineController__Start (HandCarEngineController_o* __this, const MethodInfo*
   method); */

void native_HandCarEngineController__Start_df161c(long param_1)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined8 uVar5;
  
  if ((bRam0000000001346f04 & 1) == 0) {
    native_sub_43273c(&Method_UnityEngine_GameObject_GetComponent_WheelCollider____12e4af8);
    native_sub_43273c(&StringLiteral_WheelFL_12f2fa8);
    native_sub_43273c(&StringLiteral_WheelBL_12f2f98);
    native_sub_43273c(&StringLiteral_Car_12ecf38);
    native_sub_43273c(&StringLiteral_WheelFR_12f2fc0);
    native_sub_43273c(&StringLiteral_WheelBR_12f2fa0);
    native_sub_43273c(&StringLiteral_HCar_Joystick_12ee280);
    bRam0000000001346f04 = 1;
  }
  lVar4 = native_UnityEngine_GameObject__Find_8dead0(_StringLiteral_Car_12ecf38,0);
  if (lVar4 != 0) {
    uVar5 = native_UnityEngine_GameObject__get_gameObject_8debb8(lVar4,0);
    *(undefined8 *)(param_1 + 0x38) = uVar5;
    native_sub_4326e0();
    lVar4 = native_UnityEngine_GameObject__Find_8dead0(_StringLiteral_WheelFL_12f2fa8,0);
    if ((lVar4 != 0) &&
       (lVar4 = native_UnityEngine_GameObject__get_gameObject_8debb8(lVar4,0), lVar4 != 0)) {
      uVar5 = native_UnityEngine_GameObject__GetComponent_BE2_BlockSectionHeader_Custom__4a2214
                        (lVar4,_Method_UnityEngine_GameObject_GetComponent_WheelCollider____12e4af8)
      ;
      *(undefined8 *)(param_1 + 0x18) = uVar5;
      native_sub_4326e0();
      lVar4 = native_UnityEngine_GameObject__Find_8dead0(_StringLiteral_WheelFR_12f2fc0,0);
      if ((lVar4 != 0) &&
         (lVar4 = native_UnityEngine_GameObject__get_gameObject_8debb8(lVar4,0), lVar4 != 0)) {
        uVar5 = native_UnityEngine_GameObject__GetComponent_BE2_BlockSectionHeader_Custom__4a2214
                          (lVar4,
                           _Method_UnityEngine_GameObject_GetComponent_WheelCollider____12e4af8);
        *(undefined8 *)(param_1 + 0x20) = uVar5;
        native_sub_4326e0();
        lVar4 = native_UnityEngine_GameObject__Find_8dead0(_StringLiteral_WheelBL_12f2f98,0);
        if ((lVar4 != 0) &&
           (lVar4 = native_UnityEngine_GameObject__get_gameObject_8debb8(lVar4,0), lVar4 != 0)) {
          uVar5 = native_UnityEngine_GameObject__GetComponent_BE2_BlockSectionHeader_Custom__4a2214
                            (lVar4,
                             _Method_UnityEngine_GameObject_GetComponent_WheelCollider____12e4af8);
          *(undefined8 *)(param_1 + 0x28) = uVar5;
          native_sub_4326e0();
          lVar4 = native_UnityEngine_GameObject__Find_8dead0(_StringLiteral_WheelBR_12f2fa0,0);
          if ((lVar4 != 0) &&
             (lVar4 = native_UnityEngine_GameObject__get_gameObject_8debb8(lVar4,0), lVar4 != 0)) {
            uVar5 = native_UnityEngine_GameObject__GetComponent_BE2_BlockSectionHeader_Custom__4a2214
                              (lVar4,
                               _Method_UnityEngine_GameObject_GetComponent_WheelCollider____12e4af8)
            ;
            *(undefined8 *)(param_1 + 0x30) = uVar5;
            native_sub_4326e0((undefined8 *)(param_1 + 0x30),uVar5);
            uVar5 = native_UnityEngine_GameObject__Find_8dead0
                              (_StringLiteral_HCar_Joystick_12ee280,0);
            *(undefined8 *)(param_1 + 0x58) = uVar5;
            if (iRam0000000001345318 != 0) {
              puVar1 = (ulong *)((param_1 + 0x58U >> 0x12 & 0x7fff) * 8 + 0x138ecd8);
              do {
                cVar2 = '\x01';
                bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
                if (bVar3) {
                  *puVar1 = *puVar1 | 1L << (param_1 + 0x58U >> 0xc & 0x3f);
                  cVar2 = ExclusiveMonitorsStatus();
                }
              } while (cVar2 != '\0');
            }
            return;
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* HandCarEngineController$$Update @ 0xdf17ec
 * void HandCarEngineController__Update (HandCarEngineController_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* HandCarEngineController$$Update
   void HandCarEngineController__Update (HandCarEngineController_o* __this, const MethodInfo*
   method); */

void native_HandCarEngineController__Update_df17ec
               (undefined1 param_1 [16],float param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined4 uVar5;
  int iVar6;
  float fVar7;
  float fVar8;
  double dVar9;
  
  if ((bRam0000000001346f05 & 1) == 0) {
    native_sub_43273c(&Method_UnityEngine_GameObject_GetComponent_Rigidbody____12e4a10);
    native_sub_43273c(&Method_UnityEngine_GameObject_GetComponent_VariableJoystick____12e4af0);
    native_sub_43273c(&HandCarEngineController_TypeInfo_12d48d8);
    native_sub_43273c(&System_Math_TypeInfo_12d51c0);
    native_sub_43273c(&PanelMainUIController_TypeInfo_12d5600);
    bRam0000000001346f05 = 1;
  }
  if (*(long *)(param_3 + 0x58) == 0) goto LAB_00df1e10;
  lVar2 = native_UnityEngine_GameObject__GetComponent_BE2_BlockSectionHeader_Custom__4a2214
                    (*(long *)(param_3 + 0x58),
                     _Method_UnityEngine_GameObject_GetComponent_VariableJoystick____12e4af0);
  if ((*(long *)(param_3 + 0x38) == 0) ||
     (lVar3 = native_UnityEngine_GameObject__GetComponent_BE2_BlockSectionHeader_Custom__4a2214
                        (*(long *)(param_3 + 0x38),
                         _Method_UnityEngine_GameObject_GetComponent_Rigidbody____12e4a10),
     lVar2 == 0)) goto LAB_00df1e10;
  native_Joystick__get_Direction_7f72a4(lVar2,0);
  fVar7 = param_2;
  native_Joystick__get_Direction_7f72a4(lVar2,0);
  if (-0.3 <= param_2) {
    dVar9 = (double)fVar7;
    if (0.3 < dVar9) {
      native_Joystick__get_Direction_7f72a4(lVar2,0);
      fVar7 = SUB84(dVar9,0);
      fVar8 = fVar7;
      if (((*(byte *)(_System_Math_TypeInfo_12d51c0 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_System_Math_TypeInfo_12d51c0 + 0xe0) == 0)) {
        native_sub_4327ec();
      }
      if (((*(byte *)(_PanelMainUIController_TypeInfo_12d5600 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_PanelMainUIController_TypeInfo_12d5600 + 0xe0) == 0)) {
        native_sub_4327ec();
      }
      lVar1 = _PanelMainUIController_TypeInfo_12d5600;
      *(float *)(*(long *)(_PanelMainUIController_TypeInfo_12d5600 + 0xb8) + 0x9c) = ABS(fVar7);
      *(undefined4 *)(*(long *)(lVar1 + 0xb8) + 0x50) = 1;
      if (*(int *)(param_3 + 0x50) == 1) {
        uVar5 = 2;
        goto LAB_00df19c4;
      }
      iVar6 = *(int *)(param_3 + 0x4c);
      uVar5 = 2;
      goto LAB_00df1a34;
    }
    if (((*(byte *)(_PanelMainUIController_TypeInfo_12d5600 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_PanelMainUIController_TypeInfo_12d5600 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    lVar1 = _PanelMainUIController_TypeInfo_12d5600;
    *(undefined4 *)(*(long *)(_PanelMainUIController_TypeInfo_12d5600 + 0xb8) + 0x9c) = 0;
    *(undefined4 *)(*(long *)(lVar1 + 0xb8) + 0x50) = 0;
    if (*(int *)(param_3 + 0x48) < 1) {
      *(undefined4 *)(param_3 + 0x50) = 0;
    }
    else {
      *(int *)(param_3 + 0x48) = *(int *)(param_3 + 0x48) + -1;
    }
    *(undefined4 *)(param_3 + 0x4c) = 0;
joined_r0x00df1b4c:
    if (lVar3 == 0) goto LAB_00df1e10;
    native_UnityEngine_Rigidbody__set_mass_dbd044(0x43fa0000,lVar3,0);
    native_UnityEngine_Rigidbody__set_drag_dbcfa4(0x41200000,lVar3,0);
    native_UnityEngine_Rigidbody__set_angularDrag_dbcff4(0x41200000,lVar3,0);
    if (*(long *)(param_3 + 0x18) == 0) goto LAB_00df1e10;
    native_UnityEngine_WheelCollider__set_motorTorque_dc5f70(0,*(long *)(param_3 + 0x18),0);
    if (*(long *)(param_3 + 0x20) == 0) goto LAB_00df1e10;
    native_UnityEngine_WheelCollider__set_motorTorque_dc5f70(0,*(long *)(param_3 + 0x20),0);
    if (*(long *)(param_3 + 0x28) == 0) goto LAB_00df1e10;
    native_UnityEngine_WheelCollider__set_motorTorque_dc5f70(0,*(long *)(param_3 + 0x28),0);
    if (*(long *)(param_3 + 0x30) == 0) goto LAB_00df1e10;
    native_UnityEngine_WheelCollider__set_motorTorque_dc5f70(0,*(long *)(param_3 + 0x30),0);
    uVar4 = 1;
  }
  else {
    fVar8 = fVar7;
    if (((*(byte *)(_System_Math_TypeInfo_12d51c0 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_System_Math_TypeInfo_12d51c0 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    if (((*(byte *)(_PanelMainUIController_TypeInfo_12d5600 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_PanelMainUIController_TypeInfo_12d5600 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    lVar1 = _PanelMainUIController_TypeInfo_12d5600;
    *(float *)(*(long *)(_PanelMainUIController_TypeInfo_12d5600 + 0xb8) + 0x9c) = ABS(fVar7);
    *(undefined4 *)(*(long *)(lVar1 + 0xb8) + 0x50) = 0xffffffff;
    if (*(int *)(param_3 + 0x50) == 2) {
      uVar5 = 1;
LAB_00df19c4:
      *(undefined4 *)(param_3 + 0x50) = uVar5;
      *(undefined8 *)(param_3 + 0x48) = 0xa0000000a;
      iVar6 = 10;
LAB_00df1a48:
      *(int *)(param_3 + 0x4c) = iVar6 + -1;
      goto joined_r0x00df1b4c;
    }
    iVar6 = *(int *)(param_3 + 0x4c);
    uVar5 = 1;
LAB_00df1a34:
    *(undefined4 *)(param_3 + 0x50) = uVar5;
    *(undefined4 *)(param_3 + 0x48) = 10;
    if (0 < iVar6) goto LAB_00df1a48;
    if (lVar3 == 0) goto LAB_00df1e10;
    native_UnityEngine_Rigidbody__set_mass_dbd044(0x42480000,lVar3,0);
    native_UnityEngine_Rigidbody__set_drag_dbcfa4(0x3e99999a,lVar3,0);
    native_UnityEngine_Rigidbody__set_angularDrag_dbcff4(0x3dcccccd,lVar3,0);
    lVar3 = *(long *)(param_3 + 0x18);
    fVar7 = *(float *)(param_3 + 0x40);
    native_Joystick__get_Direction_7f72a4(lVar2,0);
    if (lVar3 == 0) goto LAB_00df1e10;
    native_UnityEngine_WheelCollider__set_motorTorque_dc5f70(fVar7 * fVar8,lVar3,0);
    lVar3 = *(long *)(param_3 + 0x20);
    fVar7 = *(float *)(param_3 + 0x40);
    native_Joystick__get_Direction_7f72a4(lVar2,0);
    if (lVar3 == 0) goto LAB_00df1e10;
    native_UnityEngine_WheelCollider__set_motorTorque_dc5f70(fVar7 * fVar8,lVar3,0);
    lVar3 = *(long *)(param_3 + 0x28);
    fVar7 = *(float *)(param_3 + 0x40);
    native_Joystick__get_Direction_7f72a4(lVar2,0);
    if (lVar3 == 0) goto LAB_00df1e10;
    native_UnityEngine_WheelCollider__set_motorTorque_dc5f70(fVar7 * fVar8,lVar3,0);
    lVar3 = *(long *)(param_3 + 0x30);
    fVar7 = *(float *)(param_3 + 0x40);
    native_Joystick__get_Direction_7f72a4(lVar2,0);
    if (lVar3 == 0) goto LAB_00df1e10;
    native_UnityEngine_WheelCollider__set_motorTorque_dc5f70(fVar7 * fVar8,lVar3,0);
    uVar4 = 0;
  }
  native_HandCarEngineController__CarbrakeActive_df1e14(param_3,uVar4);
  fVar7 = (float)native_Joystick__get_Direction_7f72a4(lVar2,0);
  fVar8 = (float)native_Joystick__get_Direction_7f72a4(lVar2,0);
  if (-0.3 <= fVar7) {
    if (fVar8 <= 0.3) {
      if (((*(byte *)(_PanelMainUIController_TypeInfo_12d5600 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_PanelMainUIController_TypeInfo_12d5600 + 0xe0) == 0)) {
        native_sub_4327ec();
      }
      lVar2 = _PanelMainUIController_TypeInfo_12d5600;
      *(undefined4 *)(*(long *)(_PanelMainUIController_TypeInfo_12d5600 + 0xb8) + 0xa0) = 0;
      *(undefined4 *)(*(long *)(lVar2 + 0xb8) + 0x4c) = 0;
      if (*(long *)(param_3 + 0x18) != 0) {
        native_UnityEngine_WheelCollider__set_steerAngle_dc6050(0,*(long *)(param_3 + 0x18),0);
        lVar3 = *(long *)(param_3 + 0x20);
        if (lVar3 == 0) goto LAB_00df1e10;
        fVar7 = 0.0;
        goto LAB_00df1d80;
      }
      goto LAB_00df1e10;
    }
    fVar8 = (float)native_Joystick__get_Direction_7f72a4(lVar2,0);
    if (((*(byte *)(_System_Math_TypeInfo_12d51c0 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_System_Math_TypeInfo_12d51c0 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    if (((*(byte *)(_PanelMainUIController_TypeInfo_12d5600 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_PanelMainUIController_TypeInfo_12d5600 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    lVar3 = *(long *)(_PanelMainUIController_TypeInfo_12d5600 + 0xb8);
    uVar5 = 0xffffffff;
  }
  else {
    if (((*(byte *)(_System_Math_TypeInfo_12d51c0 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_System_Math_TypeInfo_12d51c0 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    if (((*(byte *)(_PanelMainUIController_TypeInfo_12d5600 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_PanelMainUIController_TypeInfo_12d5600 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    lVar3 = *(long *)(_PanelMainUIController_TypeInfo_12d5600 + 0xb8);
    uVar5 = 1;
  }
  lVar1 = _PanelMainUIController_TypeInfo_12d5600;
  *(float *)(lVar3 + 0xa0) = ABS(fVar8);
  *(undefined4 *)(*(long *)(lVar1 + 0xb8) + 0x4c) = uVar5;
  lVar3 = *(long *)(param_3 + 0x18);
  fVar8 = *(float *)(param_3 + 0x44);
  fVar7 = (float)native_Joystick__get_Direction_7f72a4(lVar2,0);
  if (lVar3 != 0) {
    native_UnityEngine_WheelCollider__set_steerAngle_dc6050(fVar8 * fVar7,lVar3,0);
    lVar3 = *(long *)(param_3 + 0x20);
    fVar7 = *(float *)(param_3 + 0x44);
    fVar8 = (float)native_Joystick__get_Direction_7f72a4(lVar2,0);
    if (lVar3 != 0) {
      fVar7 = fVar7 * fVar8;
LAB_00df1d80:
      native_UnityEngine_WheelCollider__set_steerAngle_dc6050(fVar7,lVar3,0);
      lVar2 = native_HandCarEngineController__gethaomiao_df1ed4();
      if (((*(byte *)(_HandCarEngineController_TypeInfo_12d48d8 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_HandCarEngineController_TypeInfo_12d48d8 + 0xe0) == 0)) {
        native_sub_4327ec(_HandCarEngineController_TypeInfo_12d48d8);
      }
      if (99 < lVar2 - **(long **)(_HandCarEngineController_TypeInfo_12d48d8 + 0xb8)) {
        uVar4 = native_HandCarEngineController__gethaomiao_df1ed4();
        if (((*(byte *)(_HandCarEngineController_TypeInfo_12d48d8 + 0x133) >> 2 & 1) != 0) &&
           (*(int *)(_HandCarEngineController_TypeInfo_12d48d8 + 0xe0) == 0)) {
          native_sub_4327ec(_HandCarEngineController_TypeInfo_12d48d8);
        }
        **(undefined8 **)(_HandCarEngineController_TypeInfo_12d48d8 + 0xb8) = uVar4;
      }
      return;
    }
  }
LAB_00df1e10:
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* HandCarEngineController$$gethaomiao @ 0xdf1ed4
 * int64_t HandCarEngineController__gethaomiao (HandCarEngineController_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* HandCarEngineController$$gethaomiao
   int64_t HandCarEngineController__gethaomiao (HandCarEngineController_o* __this, const MethodInfo*
   method); */

long native_HandCarEngineController__gethaomiao_df1ed4(void)

{
  long lVar1;
  undefined8 uStack_18;
  
  if ((bRam0000000001346f06 & 1) == 0) {
    native_sub_43273c(&System_DateTime_TypeInfo_12d42f8);
    bRam0000000001346f06 = 1;
  }
  uStack_18 = 0;
  if (((*(byte *)(_System_DateTime_TypeInfo_12d42f8 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_System_DateTime_TypeInfo_12d42f8 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uStack_18 = native_System_DateTime__get_Now_9c70d8(0);
  uStack_18 = native_System_DateTime__ToUniversalTime_9c7e74(&uStack_18,0);
  lVar1 = native_System_DateTime__get_Ticks_9c721c(&uStack_18,0);
  return (lVar1 + -0x89f7ff5f7b58000) / 10000;
}



/* HandCarEngineController$$doSomething @ 0xdf1f88
 * void HandCarEngineController__doSomething (HandCarEngineController_o* __this, const MethodInfo* method); */

/* HandCarEngineController$$doSomething
   void HandCarEngineController__doSomething (HandCarEngineController_o* __this, const MethodInfo*
   method); */

void native_HandCarEngineController__doSomething_df1f88(void)

{
  return;
}



/* HandCarEngineController$$CarbrakeActive @ 0xdf1e14
 * void HandCarEngineController__CarbrakeActive (HandCarEngineController_o* __this, bool isBraking, const MethodInfo* method); */

/* HandCarEngineController$$CarbrakeActive
   void HandCarEngineController__CarbrakeActive (HandCarEngineController_o* __this, bool isBraking,
   const MethodInfo* method); */

void native_HandCarEngineController__CarbrakeActive_df1e14(long param_1,ulong param_2)

{
  long lVar1;
  float fVar2;
  
  fVar2 = 0.0;
  if ((param_2 & 1) != 0) {
    fVar2 = *(float *)(param_1 + 0x40) * 1000.0;
  }
  if (*(long *)(param_1 + 0x18) != 0) {
    native_UnityEngine_WheelCollider__set_brakeTorque_dc5fc0(fVar2,*(long *)(param_1 + 0x18),0);
    fVar2 = 0.0;
    if ((param_2 & 1) != 0) {
      fVar2 = *(float *)(param_1 + 0x40) * 1000.0;
    }
    if (*(long *)(param_1 + 0x20) != 0) {
      native_UnityEngine_WheelCollider__set_brakeTorque_dc5fc0(fVar2,*(long *)(param_1 + 0x20),0);
      fVar2 = 0.0;
      if ((param_2 & 1) != 0) {
        fVar2 = *(float *)(param_1 + 0x40) * 1000.0;
      }
      if (*(long *)(param_1 + 0x28) != 0) {
        native_UnityEngine_WheelCollider__set_brakeTorque_dc5fc0(fVar2,*(long *)(param_1 + 0x28),0);
        lVar1 = *(long *)(param_1 + 0x30);
        fVar2 = 0.0;
        if ((param_2 & 1) != 0) {
          fVar2 = *(float *)(param_1 + 0x40) * 1000.0;
        }
        if (lVar1 != 0) {
          if (pcRam00000000013443b8 == (code *)0x0) {
            pcRam00000000013443b8 = (code *)native_sub_4326f0(&UNK_00f3612a);
          }
                    /* WARNING: Could not recover jumptable at 0x00dc600c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*pcRam00000000013443b8)(fVar2,lVar1);
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* HandCarEngineController$$.ctor @ 0xdf1f8c
 * void HandCarEngineController___ctor (HandCarEngineController_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* HandCarEngineController$$.ctor
   void HandCarEngineController___ctor (HandCarEngineController_o* __this, const MethodInfo*
   method); */

long native_HandCarEngineController___ctor_df1f8c(long param_1)

{
  *(undefined8 *)(param_1 + 0x40) = 0x42480000459c4000;
  if ((bRam0000000001340ae0 & 1) == 0) {
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0,0);
    bRam0000000001340ae0 = 1;
  }
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  return param_1;
}



/* HandCarEngineController$$.cctor @ 0xdf1fa0
 * void HandCarEngineController___cctor (const MethodInfo* method); */

/* HandCarEngineController$$.cctor
   void HandCarEngineController___cctor (const MethodInfo* method); */

void native_HandCarEngineController___cctor_df1fa0(void)

{
  return;
}


