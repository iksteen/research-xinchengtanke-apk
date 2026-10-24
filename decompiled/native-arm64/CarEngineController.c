/* ARM64 IL2CPP native pseudocode from Ghidra.
 * Recovered implementation, not original C# source.
 * Function boundaries follow the IL2CPP method address table. */


/* CarEngineController$$Start @ 0xdd4f80
 * void CarEngineController__Start (CarEngineController_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CarEngineController$$Start
   void CarEngineController__Start (CarEngineController_o* __this, const MethodInfo* method); */

void native_CarEngineController__Start_dd4f80(long param_1)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined8 uVar5;
  
  if ((bRam0000000001346e45 & 1) == 0) {
    native_sub_43273c(&Method_UnityEngine_GameObject_GetComponent_WheelCollider____12e4af8);
    native_sub_43273c(&StringLiteral_leftJoystick_12f5410);
    native_sub_43273c(&StringLiteral_WheelFL_12f2fa8);
    native_sub_43273c(&StringLiteral_rightJoystick_12f5e80);
    native_sub_43273c(&StringLiteral_WheelBL_12f2f98);
    native_sub_43273c(&StringLiteral_Car_12ecf38);
    native_sub_43273c(&StringLiteral_WheelFR_12f2fc0);
    native_sub_43273c(&StringLiteral_WheelBR_12f2fa0);
    bRam0000000001346e45 = 1;
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
                              (_StringLiteral_leftJoystick_12f5410,0);
            *(undefined8 *)(param_1 + 0x48) = uVar5;
            native_sub_4326e0(param_1 + 0x48);
            uVar5 = native_UnityEngine_GameObject__Find_8dead0
                              (_StringLiteral_rightJoystick_12f5e80,0);
            *(undefined8 *)(param_1 + 0x50) = uVar5;
            if (iRam0000000001345318 != 0) {
              puVar1 = (ulong *)((param_1 + 0x50U >> 0x12 & 0x7fff) * 8 + 0x138ecd8);
              do {
                cVar2 = '\x01';
                bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
                if (bVar3) {
                  *puVar1 = *puVar1 | 1L << (param_1 + 0x50U >> 0xc & 0x3f);
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



/* CarEngineController$$Update @ 0xdd5180
 * void CarEngineController__Update (CarEngineController_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CarEngineController$$Update
   void CarEngineController__Update (CarEngineController_o* __this, const MethodInfo* method); */

void native_CarEngineController__Update_dd5180(undefined1 param_1 [16],float param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined4 uVar6;
  int iVar7;
  float fVar8;
  float fVar9;
  double dVar10;
  
  if ((bRam0000000001346e46 & 1) == 0) {
    native_sub_43273c(&CarEngineController_TypeInfo_12d3d38);
    native_sub_43273c(&Method_UnityEngine_GameObject_GetComponent_Rigidbody____12e4a10);
    native_sub_43273c(&Method_UnityEngine_GameObject_GetComponent_VariableJoystick____12e4af0);
    native_sub_43273c(&System_Math_TypeInfo_12d51c0);
    native_sub_43273c(&PanelMainUIController_TypeInfo_12d5600);
    bRam0000000001346e46 = 1;
  }
  if (*(long *)(param_3 + 0x48) == 0) goto LAB_00dd57c8;
  lVar2 = native_UnityEngine_GameObject__GetComponent_BE2_BlockSectionHeader_Custom__4a2214
                    (*(long *)(param_3 + 0x48),
                     _Method_UnityEngine_GameObject_GetComponent_VariableJoystick____12e4af0);
  if (*(long *)(param_3 + 0x50) == 0) goto LAB_00dd57c8;
  lVar3 = native_UnityEngine_GameObject__GetComponent_BE2_BlockSectionHeader_Custom__4a2214
                    (*(long *)(param_3 + 0x50),
                     _Method_UnityEngine_GameObject_GetComponent_VariableJoystick____12e4af0);
  if ((*(long *)(param_3 + 0x38) == 0) ||
     (lVar4 = native_UnityEngine_GameObject__GetComponent_BE2_BlockSectionHeader_Custom__4a2214
                        (*(long *)(param_3 + 0x38),
                         _Method_UnityEngine_GameObject_GetComponent_Rigidbody____12e4a10),
     lVar2 == 0)) goto LAB_00dd57c8;
  native_Joystick__get_Direction_7f72a4(lVar2,0);
  fVar8 = param_2;
  native_Joystick__get_Direction_7f72a4(lVar2,0);
  if (-0.3 <= param_2) {
    dVar10 = (double)fVar8;
    if (0.3 < dVar10) {
      native_Joystick__get_Direction_7f72a4(lVar2,0);
      fVar8 = SUB84(dVar10,0);
      fVar9 = fVar8;
      if (((*(byte *)(_System_Math_TypeInfo_12d51c0 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_System_Math_TypeInfo_12d51c0 + 0xe0) == 0)) {
        native_sub_4327ec();
      }
      if (((*(byte *)(_PanelMainUIController_TypeInfo_12d5600 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_PanelMainUIController_TypeInfo_12d5600 + 0xe0) == 0)) {
        native_sub_4327ec();
      }
      lVar1 = _PanelMainUIController_TypeInfo_12d5600;
      *(float *)(*(long *)(_PanelMainUIController_TypeInfo_12d5600 + 0xb8) + 0x9c) = ABS(fVar8);
      *(undefined4 *)(*(long *)(lVar1 + 0xb8) + 0x50) = 1;
      if (*(int *)(param_3 + 0x60) == 1) {
        uVar6 = 2;
        goto LAB_00dd5374;
      }
      iVar7 = *(int *)(param_3 + 0x5c);
      uVar6 = 2;
      goto LAB_00dd53e4;
    }
    if (((*(byte *)(_PanelMainUIController_TypeInfo_12d5600 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_PanelMainUIController_TypeInfo_12d5600 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    lVar2 = _PanelMainUIController_TypeInfo_12d5600;
    *(undefined4 *)(*(long *)(_PanelMainUIController_TypeInfo_12d5600 + 0xb8) + 0x9c) = 0;
    *(undefined4 *)(*(long *)(lVar2 + 0xb8) + 0x50) = 0;
    if (*(int *)(param_3 + 0x58) < 1) {
      *(undefined4 *)(param_3 + 0x60) = 0;
    }
    else {
      *(int *)(param_3 + 0x58) = *(int *)(param_3 + 0x58) + -1;
    }
    *(undefined4 *)(param_3 + 0x5c) = 0;
joined_r0x00dd54fc:
    if (lVar4 == 0) goto LAB_00dd57c8;
    native_UnityEngine_Rigidbody__set_mass_dbd044(0x43fa0000,lVar4,0);
    native_UnityEngine_Rigidbody__set_drag_dbcfa4(0x41200000,lVar4,0);
    native_UnityEngine_Rigidbody__set_angularDrag_dbcff4(0x41200000,lVar4,0);
    if (*(long *)(param_3 + 0x18) == 0) goto LAB_00dd57c8;
    native_UnityEngine_WheelCollider__set_motorTorque_dc5f70(0,*(long *)(param_3 + 0x18),0);
    if (*(long *)(param_3 + 0x20) == 0) goto LAB_00dd57c8;
    native_UnityEngine_WheelCollider__set_motorTorque_dc5f70(0,*(long *)(param_3 + 0x20),0);
    if (*(long *)(param_3 + 0x28) == 0) goto LAB_00dd57c8;
    native_UnityEngine_WheelCollider__set_motorTorque_dc5f70(0,*(long *)(param_3 + 0x28),0);
    if (*(long *)(param_3 + 0x30) == 0) goto LAB_00dd57c8;
    native_UnityEngine_WheelCollider__set_motorTorque_dc5f70(0,*(long *)(param_3 + 0x30),0);
    uVar5 = 1;
  }
  else {
    fVar9 = fVar8;
    if (((*(byte *)(_System_Math_TypeInfo_12d51c0 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_System_Math_TypeInfo_12d51c0 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    if (((*(byte *)(_PanelMainUIController_TypeInfo_12d5600 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_PanelMainUIController_TypeInfo_12d5600 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    lVar1 = _PanelMainUIController_TypeInfo_12d5600;
    *(float *)(*(long *)(_PanelMainUIController_TypeInfo_12d5600 + 0xb8) + 0x9c) = ABS(fVar8);
    *(undefined4 *)(*(long *)(lVar1 + 0xb8) + 0x50) = 0xffffffff;
    if (*(int *)(param_3 + 0x60) == 2) {
      uVar6 = 1;
LAB_00dd5374:
      *(undefined4 *)(param_3 + 0x60) = uVar6;
      *(undefined8 *)(param_3 + 0x58) = 0xa0000000a;
      iVar7 = 10;
LAB_00dd53f8:
      *(int *)(param_3 + 0x5c) = iVar7 + -1;
      goto joined_r0x00dd54fc;
    }
    iVar7 = *(int *)(param_3 + 0x5c);
    uVar6 = 1;
LAB_00dd53e4:
    *(undefined4 *)(param_3 + 0x60) = uVar6;
    *(undefined4 *)(param_3 + 0x58) = 10;
    if (0 < iVar7) goto LAB_00dd53f8;
    if (lVar4 == 0) goto LAB_00dd57c8;
    native_UnityEngine_Rigidbody__set_mass_dbd044(0x42480000,lVar4,0);
    native_UnityEngine_Rigidbody__set_drag_dbcfa4(0x3e99999a,lVar4,0);
    native_UnityEngine_Rigidbody__set_angularDrag_dbcff4(0x3dcccccd,lVar4,0);
    lVar4 = *(long *)(param_3 + 0x18);
    fVar8 = *(float *)(param_3 + 0x40);
    native_Joystick__get_Direction_7f72a4(lVar2,0);
    if (lVar4 == 0) goto LAB_00dd57c8;
    native_UnityEngine_WheelCollider__set_motorTorque_dc5f70(fVar8 * fVar9,lVar4,0);
    lVar4 = *(long *)(param_3 + 0x20);
    fVar8 = *(float *)(param_3 + 0x40);
    native_Joystick__get_Direction_7f72a4(lVar2,0);
    if (lVar4 == 0) goto LAB_00dd57c8;
    native_UnityEngine_WheelCollider__set_motorTorque_dc5f70(fVar8 * fVar9,lVar4,0);
    lVar4 = *(long *)(param_3 + 0x28);
    fVar8 = *(float *)(param_3 + 0x40);
    native_Joystick__get_Direction_7f72a4(lVar2,0);
    if (lVar4 == 0) goto LAB_00dd57c8;
    native_UnityEngine_WheelCollider__set_motorTorque_dc5f70(fVar8 * fVar9,lVar4,0);
    lVar4 = *(long *)(param_3 + 0x30);
    fVar8 = *(float *)(param_3 + 0x40);
    native_Joystick__get_Direction_7f72a4(lVar2,0);
    if (lVar4 == 0) goto LAB_00dd57c8;
    native_UnityEngine_WheelCollider__set_motorTorque_dc5f70(fVar8 * fVar9,lVar4,0);
    uVar5 = 0;
  }
  native_CarEngineController__CarbrakeActive_dd57cc(param_3,uVar5);
  if (lVar3 == 0) goto LAB_00dd57c8;
  fVar8 = (float)native_Joystick__get_Direction_7f72a4(lVar3,0);
  fVar9 = (float)native_Joystick__get_Direction_7f72a4(lVar3,0);
  if (-0.3 <= fVar8) {
    if (fVar9 <= 0.3) {
      if (((*(byte *)(_PanelMainUIController_TypeInfo_12d5600 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_PanelMainUIController_TypeInfo_12d5600 + 0xe0) == 0)) {
        native_sub_4327ec();
      }
      lVar2 = _PanelMainUIController_TypeInfo_12d5600;
      *(undefined4 *)(*(long *)(_PanelMainUIController_TypeInfo_12d5600 + 0xb8) + 0xa0) = 0;
      *(undefined4 *)(*(long *)(lVar2 + 0xb8) + 0x4c) = 0;
      if (*(long *)(param_3 + 0x18) != 0) {
        native_UnityEngine_WheelCollider__set_steerAngle_dc6050(0,*(long *)(param_3 + 0x18),0);
        lVar2 = *(long *)(param_3 + 0x20);
        if (lVar2 == 0) goto LAB_00dd57c8;
        fVar8 = 0.0;
        goto LAB_00dd5734;
      }
      goto LAB_00dd57c8;
    }
    fVar9 = (float)native_Joystick__get_Direction_7f72a4(lVar3,0);
    if (((*(byte *)(_System_Math_TypeInfo_12d51c0 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_System_Math_TypeInfo_12d51c0 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    if (((*(byte *)(_PanelMainUIController_TypeInfo_12d5600 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_PanelMainUIController_TypeInfo_12d5600 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    lVar2 = *(long *)(_PanelMainUIController_TypeInfo_12d5600 + 0xb8);
    uVar6 = 0xffffffff;
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
    lVar2 = *(long *)(_PanelMainUIController_TypeInfo_12d5600 + 0xb8);
    uVar6 = 1;
  }
  lVar4 = _PanelMainUIController_TypeInfo_12d5600;
  *(float *)(lVar2 + 0xa0) = ABS(fVar9);
  *(undefined4 *)(*(long *)(lVar4 + 0xb8) + 0x4c) = uVar6;
  lVar2 = *(long *)(param_3 + 0x18);
  fVar9 = *(float *)(param_3 + 0x44);
  fVar8 = (float)native_Joystick__get_Direction_7f72a4(lVar3,0);
  if (lVar2 != 0) {
    native_UnityEngine_WheelCollider__set_steerAngle_dc6050(fVar9 * fVar8,lVar2,0);
    lVar2 = *(long *)(param_3 + 0x20);
    fVar8 = *(float *)(param_3 + 0x44);
    fVar9 = (float)native_Joystick__get_Direction_7f72a4(lVar3,0);
    if (lVar2 != 0) {
      fVar8 = fVar8 * fVar9;
LAB_00dd5734:
      native_UnityEngine_WheelCollider__set_steerAngle_dc6050(fVar8,lVar2,0);
      lVar2 = native_CarEngineController__gethaomiao_dd588c();
      if (((*(byte *)(_CarEngineController_TypeInfo_12d3d38 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_CarEngineController_TypeInfo_12d3d38 + 0xe0) == 0)) {
        native_sub_4327ec(_CarEngineController_TypeInfo_12d3d38);
      }
      if (99 < lVar2 - **(long **)(_CarEngineController_TypeInfo_12d3d38 + 0xb8)) {
        uVar5 = native_CarEngineController__gethaomiao_dd588c();
        if (((*(byte *)(_CarEngineController_TypeInfo_12d3d38 + 0x133) >> 2 & 1) != 0) &&
           (*(int *)(_CarEngineController_TypeInfo_12d3d38 + 0xe0) == 0)) {
          native_sub_4327ec(_CarEngineController_TypeInfo_12d3d38);
        }
        **(undefined8 **)(_CarEngineController_TypeInfo_12d3d38 + 0xb8) = uVar5;
      }
      return;
    }
  }
LAB_00dd57c8:
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* CarEngineController$$gethaomiao @ 0xdd588c
 * int64_t CarEngineController__gethaomiao (CarEngineController_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CarEngineController$$gethaomiao
   int64_t CarEngineController__gethaomiao (CarEngineController_o* __this, const MethodInfo*
   method); */

long native_CarEngineController__gethaomiao_dd588c(void)

{
  long lVar1;
  undefined8 uStack_18;
  
  if ((bRam0000000001346e47 & 1) == 0) {
    native_sub_43273c(&System_DateTime_TypeInfo_12d42f8);
    bRam0000000001346e47 = 1;
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



/* CarEngineController$$doSomething @ 0xdd5940
 * void CarEngineController__doSomething (CarEngineController_o* __this, const MethodInfo* method); */

/* CarEngineController$$doSomething
   void CarEngineController__doSomething (CarEngineController_o* __this, const MethodInfo* method);
    */

void native_CarEngineController__doSomething_dd5940(void)

{
  return;
}



/* CarEngineController$$CarbrakeActive @ 0xdd57cc
 * void CarEngineController__CarbrakeActive (CarEngineController_o* __this, bool isBraking, const MethodInfo* method); */

/* CarEngineController$$CarbrakeActive
   void CarEngineController__CarbrakeActive (CarEngineController_o* __this, bool isBraking, const
   MethodInfo* method); */

void native_CarEngineController__CarbrakeActive_dd57cc(long param_1,ulong param_2)

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



/* CarEngineController$$.ctor @ 0xdd5944
 * void CarEngineController___ctor (CarEngineController_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CarEngineController$$.ctor
   void CarEngineController___ctor (CarEngineController_o* __this, const MethodInfo* method); */

long native_CarEngineController___ctor_dd5944(long param_1)

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



/* CarEngineController$$.cctor @ 0xdd5958
 * void CarEngineController___cctor (const MethodInfo* method); */

/* CarEngineController$$.cctor
   void CarEngineController___cctor (const MethodInfo* method); */

void native_CarEngineController___cctor_dd5958(void)

{
  return;
}


