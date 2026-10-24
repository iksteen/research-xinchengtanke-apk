/* ARM64 IL2CPP native pseudocode from Ghidra.
 * Recovered implementation, not original C# source.
 * Function boundaries follow the IL2CPP method address table. */


/* HandTankEngineController$$Start @ 0xdf1fa4
 * void HandTankEngineController__Start (HandTankEngineController_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* HandTankEngineController$$Start
   void HandTankEngineController__Start (HandTankEngineController_o* __this, const MethodInfo*
   method); */

void native_HandTankEngineController__Start_df1fa4(long param_1)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined8 uVar5;
  
  if ((bRam0000000001346f07 & 1) == 0) {
    native_sub_43273c(&Method_UnityEngine_GameObject_GetComponent_WheelCollider____12e4af8);
    native_sub_43273c(&StringLiteral_HTank_Joystick_12ee310);
    native_sub_43273c(&StringLiteral_WheelFL1_12f2fb0);
    native_sub_43273c(&StringLiteral_WheelFL_12f2fa8);
    native_sub_43273c(&StringLiteral_WheelFR1_12f2fc8);
    native_sub_43273c(&StringLiteral_WheelBL_12f2f98);
    native_sub_43273c(&StringLiteral_Tank_12f1490);
    native_sub_43273c(&StringLiteral_WheelFL2_12f2fb8);
    native_sub_43273c(&StringLiteral_WheelFR2_12f2fd0);
    native_sub_43273c(&StringLiteral_WheelFR_12f2fc0);
    native_sub_43273c(&StringLiteral_WheelBR_12f2fa0);
    bRam0000000001346f07 = 1;
  }
  lVar4 = native_UnityEngine_GameObject__Find_8dead0(_StringLiteral_Tank_12f1490,0);
  if (lVar4 != 0) {
    uVar5 = native_UnityEngine_GameObject__get_gameObject_8debb8(lVar4,0);
    *(undefined8 *)(param_1 + 0x58) = uVar5;
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
        lVar4 = native_UnityEngine_GameObject__Find_8dead0(_StringLiteral_WheelFL1_12f2fb0,0);
        if ((lVar4 != 0) &&
           (lVar4 = native_UnityEngine_GameObject__get_gameObject_8debb8(lVar4,0), lVar4 != 0)) {
          uVar5 = native_UnityEngine_GameObject__GetComponent_BE2_BlockSectionHeader_Custom__4a2214
                            (lVar4,
                             _Method_UnityEngine_GameObject_GetComponent_WheelCollider____12e4af8);
          *(undefined8 *)(param_1 + 0x28) = uVar5;
          native_sub_4326e0();
          lVar4 = native_UnityEngine_GameObject__Find_8dead0(_StringLiteral_WheelFR1_12f2fc8,0);
          if ((lVar4 != 0) &&
             (lVar4 = native_UnityEngine_GameObject__get_gameObject_8debb8(lVar4,0), lVar4 != 0)) {
            uVar5 = native_UnityEngine_GameObject__GetComponent_BE2_BlockSectionHeader_Custom__4a2214
                              (lVar4,
                               _Method_UnityEngine_GameObject_GetComponent_WheelCollider____12e4af8)
            ;
            *(undefined8 *)(param_1 + 0x30) = uVar5;
            native_sub_4326e0();
            lVar4 = native_UnityEngine_GameObject__Find_8dead0(_StringLiteral_WheelFL2_12f2fb8,0);
            if ((lVar4 != 0) &&
               (lVar4 = native_UnityEngine_GameObject__get_gameObject_8debb8(lVar4,0), lVar4 != 0))
            {
              uVar5 = native_UnityEngine_GameObject__GetComponent_BE2_BlockSectionHeader_Custom__4a2214
                                (lVar4,
                                 _Method_UnityEngine_GameObject_GetComponent_WheelCollider____12e4af8
                                );
              *(undefined8 *)(param_1 + 0x38) = uVar5;
              native_sub_4326e0();
              lVar4 = native_UnityEngine_GameObject__Find_8dead0(_StringLiteral_WheelFR2_12f2fd0,0);
              if ((lVar4 != 0) &&
                 (lVar4 = native_UnityEngine_GameObject__get_gameObject_8debb8(lVar4,0), lVar4 != 0)
                 ) {
                uVar5 = native_UnityEngine_GameObject__GetComponent_BE2_BlockSectionHeader_Custom__4a2214
                                  (lVar4,
                                   _Method_UnityEngine_GameObject_GetComponent_WheelCollider____12e4af8
                                  );
                *(undefined8 *)(param_1 + 0x40) = uVar5;
                native_sub_4326e0();
                lVar4 = native_UnityEngine_GameObject__Find_8dead0(_StringLiteral_WheelBL_12f2f98,0)
                ;
                if ((lVar4 != 0) &&
                   (lVar4 = native_UnityEngine_GameObject__get_gameObject_8debb8(lVar4,0),
                   lVar4 != 0)) {
                  uVar5 = native_UnityEngine_GameObject__GetComponent_BE2_BlockSectionHeader_Custom__4a2214
                                    (lVar4,
                                     _Method_UnityEngine_GameObject_GetComponent_WheelCollider____12e4af8
                                    );
                  *(undefined8 *)(param_1 + 0x48) = uVar5;
                  native_sub_4326e0();
                  lVar4 = native_UnityEngine_GameObject__Find_8dead0
                                    (_StringLiteral_WheelBR_12f2fa0,0);
                  if ((lVar4 != 0) &&
                     (lVar4 = native_UnityEngine_GameObject__get_gameObject_8debb8(lVar4,0),
                     lVar4 != 0)) {
                    uVar5 = native_UnityEngine_GameObject__GetComponent_BE2_BlockSectionHeader_Custom__4a2214
                                      (lVar4,
                                       _Method_UnityEngine_GameObject_GetComponent_WheelCollider____12e4af8
                                      );
                    *(undefined8 *)(param_1 + 0x50) = uVar5;
                    native_sub_4326e0((undefined8 *)(param_1 + 0x50),uVar5);
                    uVar5 = native_UnityEngine_GameObject__Find_8dead0
                                      (_StringLiteral_HTank_Joystick_12ee310,0);
                    *(undefined8 *)(param_1 + 0x68) = uVar5;
                    if (iRam0000000001345318 != 0) {
                      puVar1 = (ulong *)((param_1 + 0x68U >> 0x12 & 0x7fff) * 8 + 0x138ecd8);
                      do {
                        cVar2 = '\x01';
                        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
                        if (bVar3) {
                          *puVar1 = *puVar1 | 1L << (param_1 + 0x68U >> 0xc & 0x3f);
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
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* HandTankEngineController$$Update @ 0xdf2294
 * void HandTankEngineController__Update (HandTankEngineController_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* HandTankEngineController$$Update
   void HandTankEngineController__Update (HandTankEngineController_o* __this, const MethodInfo*
   method); */

void native_HandTankEngineController__Update_df2294
               (undefined1 param_1 [16],float param_2,float param_3,long param_4)

{
  uint uVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  undefined4 uVar5;
  float fVar6;
  float fVar7;
  double dVar8;
  float fVar9;
  
  if ((bRam0000000001346f08 & 1) == 0) {
    native_sub_43273c(&Method_UnityEngine_GameObject_GetComponent_VariableJoystick____12e4af0);
    native_sub_43273c(&HandTankEngineController_TypeInfo_12d48e0);
    native_sub_43273c(&System_Math_TypeInfo_12d51c0);
    native_sub_43273c(&PanelMainUIController_TypeInfo_12d5600);
    bRam0000000001346f08 = 1;
  }
  if ((*(long *)(param_4 + 0x68) == 0) ||
     (lVar2 = native_UnityEngine_GameObject__GetComponent_BE2_BlockSectionHeader_Custom__4a2214
                        (*(long *)(param_4 + 0x68),
                         _Method_UnityEngine_GameObject_GetComponent_VariableJoystick____12e4af0),
     lVar2 == 0)) goto LAB_00df2cc0;
  native_Joystick__get_Direction_7f72a4(lVar2,0);
  if (-0.3 <= param_2) {
    native_Joystick__get_Direction_7f72a4(lVar2,0);
    dVar8 = (double)param_2;
    if (0.3 < dVar8) {
      if (((*(ushort *)(_PanelMainUIController_TypeInfo_12d5600 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(_PanelMainUIController_TypeInfo_12d5600 + 0xe0) == 0)) {
        native_sub_4327ec();
      }
      param_2 = SUB84(dVar8,0);
      *(undefined4 *)(*(long *)(_PanelMainUIController_TypeInfo_12d5600 + 0xb8) + 0x50) = 1;
      uVar3 = 0;
      goto LAB_00df23c8;
    }
    if (((*(ushort *)(_PanelMainUIController_TypeInfo_12d5600 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(_PanelMainUIController_TypeInfo_12d5600 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    fVar7 = SUB84(dVar8,0);
    uVar1 = 0;
    param_2 = 0.0;
    *(undefined4 *)(*(long *)(_PanelMainUIController_TypeInfo_12d5600 + 0xb8) + 0x50) = 0;
  }
  else {
    if (((*(byte *)(_PanelMainUIController_TypeInfo_12d5600 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_PanelMainUIController_TypeInfo_12d5600 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    uVar3 = 1;
    *(undefined4 *)(*(long *)(_PanelMainUIController_TypeInfo_12d5600 + 0xb8) + 0x50) = 0xffffffff;
LAB_00df23c8:
    uVar1 = native_Assets_Scripts_Tools_HjdBleTool__setIntegerSomeBit_7f7068(0,uVar3,1,0);
    native_Joystick__get_Direction_7f72a4(lVar2,0);
    fVar7 = param_2;
  }
  fVar6 = (float)native_Joystick__get_Direction_7f72a4(lVar2,0);
  if (-0.3 <= fVar6) {
    fVar6 = (float)native_Joystick__get_Direction_7f72a4(lVar2,0);
    fVar7 = 4.172325e-08;
    if (0.3 < fVar6) {
      if (((*(ushort *)(_PanelMainUIController_TypeInfo_12d5600 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(_PanelMainUIController_TypeInfo_12d5600 + 0xe0) == 0)) {
        fVar7 = 4.172325e-08;
        native_sub_4327ec();
      }
      lVar4 = *(long *)(_PanelMainUIController_TypeInfo_12d5600 + 0xb8);
      uVar5 = 0xffffffff;
      uVar3 = 3;
      goto LAB_00df24a8;
    }
    if (((*(ushort *)(_PanelMainUIController_TypeInfo_12d5600 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(_PanelMainUIController_TypeInfo_12d5600 + 0xe0) == 0)) {
      fVar7 = 4.172325e-08;
      native_sub_4327ec();
    }
    fVar6 = 0.0;
    *(undefined4 *)(*(long *)(_PanelMainUIController_TypeInfo_12d5600 + 0xb8) + 0x4c) = 0;
  }
  else {
    if (((*(byte *)(_PanelMainUIController_TypeInfo_12d5600 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_PanelMainUIController_TypeInfo_12d5600 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    lVar4 = *(long *)(_PanelMainUIController_TypeInfo_12d5600 + 0xb8);
    uVar5 = 1;
    uVar3 = 2;
LAB_00df24a8:
    *(undefined4 *)(lVar4 + 0x4c) = uVar5;
    uVar1 = native_Assets_Scripts_Tools_HjdBleTool__setIntegerSomeBit_7f7068(uVar1,uVar3,1,0);
    fVar6 = (float)native_Joystick__get_Direction_7f72a4(lVar2,0);
  }
  switch(uVar1 & 0xff) {
  case 1:
  case 3:
    if (((*(byte *)(_System_Math_TypeInfo_12d51c0 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_System_Math_TypeInfo_12d51c0 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    if (((*(byte *)(_PanelMainUIController_TypeInfo_12d5600 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_PanelMainUIController_TypeInfo_12d5600 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    lVar2 = _PanelMainUIController_TypeInfo_12d5600;
    *(float *)(*(long *)(_PanelMainUIController_TypeInfo_12d5600 + 0xb8) + 0x94) = ABS(param_2);
    *(float *)(*(long *)(lVar2 + 0xb8) + 0x98) = ABS(param_2);
    native_HandTankEngineController__CarbrakeActive_df2cc4(param_4,0);
    lVar2 = *(long *)(param_4 + 0x18);
    if (lVar2 == 0) goto LAB_00df2cc0;
    fVar6 = *(float *)(param_4 + 0x60);
    fVar7 = 1.5;
    break;
  case 2:
    if (((*(byte *)(_System_Math_TypeInfo_12d51c0 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_System_Math_TypeInfo_12d51c0 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    if (((*(byte *)(_PanelMainUIController_TypeInfo_12d5600 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_PanelMainUIController_TypeInfo_12d5600 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    lVar2 = _PanelMainUIController_TypeInfo_12d5600;
    *(float *)(*(long *)(_PanelMainUIController_TypeInfo_12d5600 + 0xb8) + 0x94) = ABS(param_2);
    *(float *)(*(long *)(lVar2 + 0xb8) + 0x98) = ABS(param_2);
    native_HandTankEngineController__CarbrakeActive_df2cc4(param_4,0);
    lVar2 = *(long *)(param_4 + 0x18);
    if (lVar2 == 0) goto LAB_00df2cc0;
    fVar6 = *(float *)(param_4 + 0x60);
    fVar7 = -1.5;
    break;
  case 4:
  case 0xc:
    if (((*(byte *)(_System_Math_TypeInfo_12d51c0 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_System_Math_TypeInfo_12d51c0 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    fVar6 = ABS(fVar6);
    if (((*(byte *)(_PanelMainUIController_TypeInfo_12d5600 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_PanelMainUIController_TypeInfo_12d5600 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    lVar2 = _PanelMainUIController_TypeInfo_12d5600;
    *(float *)(*(long *)(_PanelMainUIController_TypeInfo_12d5600 + 0xb8) + 0x94) = fVar6;
    *(float *)(*(long *)(lVar2 + 0xb8) + 0x98) = fVar6;
    if (*(long *)(param_4 + 0x58) == 0) goto LAB_00df2cc0;
    lVar2 = native_UnityEngine_GameObject__get_transform_8de5c8(*(long *)(param_4 + 0x58),0);
    fVar9 = (float)native_UnityEngine_Vector3__get_up_7628a0(0);
    if (lVar2 == 0) goto LAB_00df2cc0;
    fVar6 = -fVar6;
    fVar9 = fVar9 * fVar6;
    fVar7 = fVar7 * fVar6;
    param_3 = param_3 * fVar6;
    goto code_r0x00df28ec;
  case 5:
  case 7:
  case 0xd:
  case 0xf:
    if (((*(byte *)(_System_Math_TypeInfo_12d51c0 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_System_Math_TypeInfo_12d51c0 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    if (((*(byte *)(_PanelMainUIController_TypeInfo_12d5600 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_PanelMainUIController_TypeInfo_12d5600 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    lVar2 = _PanelMainUIController_TypeInfo_12d5600;
    *(undefined4 *)(*(long *)(_PanelMainUIController_TypeInfo_12d5600 + 0xb8) + 0x94) = 0x3f800000;
    *(undefined4 *)(*(long *)(lVar2 + 0xb8) + 0x98) = 0x3f800000;
    native_HandTankEngineController__CarbrakeActive_df2cc4(param_4,0);
    if (*(long *)(param_4 + 0x18) == 0) goto LAB_00df2cc0;
    native_UnityEngine_WheelCollider__set_motorTorque_dc5f70(0,*(long *)(param_4 + 0x18),0);
    if (*(long *)(param_4 + 0x28) == 0) goto LAB_00df2cc0;
    native_UnityEngine_WheelCollider__set_motorTorque_dc5f70(0,*(long *)(param_4 + 0x28),0);
    if (*(long *)(param_4 + 0x38) == 0) goto LAB_00df2cc0;
    native_UnityEngine_WheelCollider__set_motorTorque_dc5f70(0,*(long *)(param_4 + 0x38),0);
    if (*(long *)(param_4 + 0x48) == 0) goto LAB_00df2cc0;
    native_UnityEngine_WheelCollider__set_motorTorque_dc5f70(0,*(long *)(param_4 + 0x48),0);
    lVar2 = *(long *)(param_4 + 0x20);
    if (lVar2 == 0) goto LAB_00df2cc0;
    fVar9 = *(float *)(param_4 + 0x60);
    fVar7 = ABS(param_2) * 0.5 + ABS(fVar6);
    fVar6 = 6.0;
    goto code_r0x00df285c;
  case 6:
    if (((*(byte *)(_System_Math_TypeInfo_12d51c0 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_System_Math_TypeInfo_12d51c0 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    if (((*(byte *)(_PanelMainUIController_TypeInfo_12d5600 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_PanelMainUIController_TypeInfo_12d5600 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    lVar2 = _PanelMainUIController_TypeInfo_12d5600;
    *(undefined4 *)(*(long *)(_PanelMainUIController_TypeInfo_12d5600 + 0xb8) + 0x94) = 0x3f800000;
    *(undefined4 *)(*(long *)(lVar2 + 0xb8) + 0x98) = 0x3f800000;
    native_HandTankEngineController__CarbrakeActive_df2cc4(param_4,0);
    if (*(long *)(param_4 + 0x18) == 0) goto LAB_00df2cc0;
    native_UnityEngine_WheelCollider__set_motorTorque_dc5f70(0,*(long *)(param_4 + 0x18),0);
    if (*(long *)(param_4 + 0x28) == 0) goto LAB_00df2cc0;
    native_UnityEngine_WheelCollider__set_motorTorque_dc5f70(0,*(long *)(param_4 + 0x28),0);
    if (*(long *)(param_4 + 0x38) == 0) goto LAB_00df2cc0;
    native_UnityEngine_WheelCollider__set_motorTorque_dc5f70(0,*(long *)(param_4 + 0x38),0);
    if (*(long *)(param_4 + 0x48) == 0) goto LAB_00df2cc0;
    native_UnityEngine_WheelCollider__set_motorTorque_dc5f70(0,*(long *)(param_4 + 0x48),0);
    lVar2 = *(long *)(param_4 + 0x20);
    if (lVar2 == 0) goto LAB_00df2cc0;
    fVar9 = *(float *)(param_4 + 0x60);
    fVar7 = ABS(param_2) * 0.5 + ABS(fVar6);
    fVar6 = -6.0;
code_r0x00df285c:
    fVar7 = fVar7 * fVar6;
    fVar9 = fVar7 * fVar9;
    goto code_r0x00df2b04;
  case 8:
    if (((*(byte *)(_System_Math_TypeInfo_12d51c0 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_System_Math_TypeInfo_12d51c0 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    fVar6 = ABS(fVar6);
    if (((*(byte *)(_PanelMainUIController_TypeInfo_12d5600 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_PanelMainUIController_TypeInfo_12d5600 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    lVar2 = _PanelMainUIController_TypeInfo_12d5600;
    *(float *)(*(long *)(_PanelMainUIController_TypeInfo_12d5600 + 0xb8) + 0x94) = fVar6;
    *(float *)(*(long *)(lVar2 + 0xb8) + 0x98) = fVar6;
    if (*(long *)(param_4 + 0x58) == 0) goto LAB_00df2cc0;
    lVar2 = native_UnityEngine_GameObject__get_transform_8de5c8(*(long *)(param_4 + 0x58),0);
    fVar9 = (float)native_UnityEngine_Vector3__get_up_7628a0(0);
    if (lVar2 == 0) goto LAB_00df2cc0;
    fVar9 = fVar6 * fVar9;
    fVar7 = fVar6 * fVar7;
    param_3 = fVar6 * param_3;
code_r0x00df28ec:
    native_UnityEngine_Transform__Rotate_7724a0(fVar9,fVar7,param_3,lVar2,0);
    goto LAB_00df2b54;
  case 9:
  case 0xb:
    if (((*(byte *)(_System_Math_TypeInfo_12d51c0 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_System_Math_TypeInfo_12d51c0 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    if (((*(byte *)(_PanelMainUIController_TypeInfo_12d5600 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_PanelMainUIController_TypeInfo_12d5600 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    lVar2 = _PanelMainUIController_TypeInfo_12d5600;
    *(undefined4 *)(*(long *)(_PanelMainUIController_TypeInfo_12d5600 + 0xb8) + 0x94) = 0x3f800000;
    *(undefined4 *)(*(long *)(lVar2 + 0xb8) + 0x98) = 0x3f800000;
    native_HandTankEngineController__CarbrakeActive_df2cc4(param_4,0);
    lVar2 = *(long *)(param_4 + 0x18);
    if (lVar2 == 0) goto LAB_00df2cc0;
    fVar9 = *(float *)(param_4 + 0x60);
    fVar7 = ABS(param_2) * 0.5 + ABS(fVar6);
    fVar6 = 6.0;
    goto code_r0x00df2984;
  case 10:
    if (((*(byte *)(_System_Math_TypeInfo_12d51c0 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_System_Math_TypeInfo_12d51c0 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    if (((*(byte *)(_PanelMainUIController_TypeInfo_12d5600 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_PanelMainUIController_TypeInfo_12d5600 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    lVar2 = _PanelMainUIController_TypeInfo_12d5600;
    *(undefined4 *)(*(long *)(_PanelMainUIController_TypeInfo_12d5600 + 0xb8) + 0x94) = 0x3f800000;
    *(undefined4 *)(*(long *)(lVar2 + 0xb8) + 0x98) = 0x3f800000;
    native_HandTankEngineController__CarbrakeActive_df2cc4(param_4,0);
    lVar2 = *(long *)(param_4 + 0x18);
    if (lVar2 == 0) goto LAB_00df2cc0;
    fVar9 = *(float *)(param_4 + 0x60);
    fVar7 = ABS(param_2) * 0.5 + ABS(fVar6);
    fVar6 = -6.0;
code_r0x00df2984:
    fVar7 = fVar7 * fVar6;
    native_UnityEngine_WheelCollider__set_motorTorque_dc5f70(fVar7 * fVar9,lVar2,0);
    if (*(long *)(param_4 + 0x28) == 0) goto LAB_00df2cc0;
    native_UnityEngine_WheelCollider__set_motorTorque_dc5f70
              (fVar7 * *(float *)(param_4 + 0x60),*(long *)(param_4 + 0x28),0);
    if (*(long *)(param_4 + 0x38) == 0) goto LAB_00df2cc0;
    native_UnityEngine_WheelCollider__set_motorTorque_dc5f70
              (fVar7 * *(float *)(param_4 + 0x60),*(long *)(param_4 + 0x38),0);
    if (*(long *)(param_4 + 0x48) == 0) goto LAB_00df2cc0;
    native_UnityEngine_WheelCollider__set_motorTorque_dc5f70
              (fVar7 * *(float *)(param_4 + 0x60),*(long *)(param_4 + 0x48),0);
    if (*(long *)(param_4 + 0x20) == 0) goto LAB_00df2cc0;
    native_UnityEngine_WheelCollider__set_motorTorque_dc5f70(0,*(long *)(param_4 + 0x20),0);
    if (*(long *)(param_4 + 0x30) == 0) goto LAB_00df2cc0;
    native_UnityEngine_WheelCollider__set_motorTorque_dc5f70(0,*(long *)(param_4 + 0x30),0);
    if (*(long *)(param_4 + 0x40) == 0) goto LAB_00df2cc0;
    native_UnityEngine_WheelCollider__set_motorTorque_dc5f70(0,*(long *)(param_4 + 0x40),0);
    lVar2 = *(long *)(param_4 + 0x50);
    if (lVar2 == 0) goto LAB_00df2cc0;
    fVar7 = 0.0;
    goto code_r0x00df2b4c;
  default:
    if (((*(byte *)(_PanelMainUIController_TypeInfo_12d5600 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_PanelMainUIController_TypeInfo_12d5600 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    lVar2 = _PanelMainUIController_TypeInfo_12d5600;
    *(undefined4 *)(*(long *)(_PanelMainUIController_TypeInfo_12d5600 + 0xb8) + 0x94) = 0;
    *(undefined4 *)(*(long *)(lVar2 + 0xb8) + 0x98) = 0;
    if (*(long *)(param_4 + 0x18) == 0) goto LAB_00df2cc0;
    native_UnityEngine_WheelCollider__set_motorTorque_dc5f70(0,*(long *)(param_4 + 0x18),0);
    if (*(long *)(param_4 + 0x28) == 0) goto LAB_00df2cc0;
    native_UnityEngine_WheelCollider__set_motorTorque_dc5f70(0,*(long *)(param_4 + 0x28),0);
    if (*(long *)(param_4 + 0x38) == 0) goto LAB_00df2cc0;
    native_UnityEngine_WheelCollider__set_motorTorque_dc5f70(0,*(long *)(param_4 + 0x38),0);
    if (*(long *)(param_4 + 0x20) == 0) goto LAB_00df2cc0;
    native_UnityEngine_WheelCollider__set_motorTorque_dc5f70(0,*(long *)(param_4 + 0x20),0);
    if (*(long *)(param_4 + 0x30) == 0) goto LAB_00df2cc0;
    native_UnityEngine_WheelCollider__set_motorTorque_dc5f70(0,*(long *)(param_4 + 0x30),0);
    if (*(long *)(param_4 + 0x40) == 0) goto LAB_00df2cc0;
    native_UnityEngine_WheelCollider__set_motorTorque_dc5f70(0,*(long *)(param_4 + 0x40),0);
    if (*(long *)(param_4 + 0x48) == 0) goto LAB_00df2cc0;
    native_UnityEngine_WheelCollider__set_motorTorque_dc5f70(0,*(long *)(param_4 + 0x48),0);
    if (*(long *)(param_4 + 0x50) == 0) goto LAB_00df2cc0;
    native_UnityEngine_WheelCollider__set_motorTorque_dc5f70(0,*(long *)(param_4 + 0x50),0);
    native_HandTankEngineController__CarbrakeActive_df2cc4(param_4,1);
    goto LAB_00df2b54;
  }
  fVar7 = ABS(param_2) * fVar7;
  native_UnityEngine_WheelCollider__set_motorTorque_dc5f70(fVar7 * fVar6,lVar2,0);
  if (*(long *)(param_4 + 0x28) != 0) {
    native_UnityEngine_WheelCollider__set_motorTorque_dc5f70
              (fVar7 * *(float *)(param_4 + 0x60),*(long *)(param_4 + 0x28),0);
    if (*(long *)(param_4 + 0x38) != 0) {
      native_UnityEngine_WheelCollider__set_motorTorque_dc5f70
                (fVar7 * *(float *)(param_4 + 0x60),*(long *)(param_4 + 0x38),0);
      if (*(long *)(param_4 + 0x48) != 0) {
        native_UnityEngine_WheelCollider__set_motorTorque_dc5f70
                  (fVar7 * *(float *)(param_4 + 0x60),*(long *)(param_4 + 0x48),0);
        lVar2 = *(long *)(param_4 + 0x20);
        if (lVar2 != 0) {
          fVar9 = fVar7 * *(float *)(param_4 + 0x60);
code_r0x00df2b04:
          native_UnityEngine_WheelCollider__set_motorTorque_dc5f70(fVar9,lVar2,0);
          if (*(long *)(param_4 + 0x30) != 0) {
            native_UnityEngine_WheelCollider__set_motorTorque_dc5f70
                      (fVar7 * *(float *)(param_4 + 0x60),*(long *)(param_4 + 0x30),0);
            if (*(long *)(param_4 + 0x40) != 0) {
              native_UnityEngine_WheelCollider__set_motorTorque_dc5f70
                        (fVar7 * *(float *)(param_4 + 0x60),*(long *)(param_4 + 0x40),0);
              lVar2 = *(long *)(param_4 + 0x50);
              if (lVar2 != 0) {
                fVar7 = fVar7 * *(float *)(param_4 + 0x60);
code_r0x00df2b4c:
                native_UnityEngine_WheelCollider__set_motorTorque_dc5f70(fVar7,lVar2,0);
LAB_00df2b54:
                lVar2 = native_HandTankEngineController__gethaomiao_df2e04();
                if (((*(byte *)(_HandTankEngineController_TypeInfo_12d48e0 + 0x133) >> 2 & 1) != 0)
                   && (*(int *)(_HandTankEngineController_TypeInfo_12d48e0 + 0xe0) == 0)) {
                  native_sub_4327ec(_HandTankEngineController_TypeInfo_12d48e0);
                }
                if (99 < lVar2 - **(long **)(_HandTankEngineController_TypeInfo_12d48e0 + 0xb8)) {
                  uVar3 = native_HandTankEngineController__gethaomiao_df2e04();
                  if (((*(byte *)(_HandTankEngineController_TypeInfo_12d48e0 + 0x133) >> 2 & 1) != 0
                      ) && (*(int *)(_HandTankEngineController_TypeInfo_12d48e0 + 0xe0) == 0)) {
                    native_sub_4327ec(_HandTankEngineController_TypeInfo_12d48e0);
                  }
                  **(undefined8 **)(_HandTankEngineController_TypeInfo_12d48e0 + 0xb8) = uVar3;
                }
                return;
              }
            }
          }
        }
      }
    }
  }
LAB_00df2cc0:
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* HandTankEngineController$$gethaomiao @ 0xdf2e04
 * int64_t HandTankEngineController__gethaomiao (HandTankEngineController_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* HandTankEngineController$$gethaomiao
   int64_t HandTankEngineController__gethaomiao (HandTankEngineController_o* __this, const
   MethodInfo* method); */

long native_HandTankEngineController__gethaomiao_df2e04(void)

{
  long lVar1;
  undefined8 uStack_18;
  
  if ((bRam0000000001346f09 & 1) == 0) {
    native_sub_43273c(&System_DateTime_TypeInfo_12d42f8);
    bRam0000000001346f09 = 1;
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



/* HandTankEngineController$$doSomething @ 0xdf2eb8
 * void HandTankEngineController__doSomething (HandTankEngineController_o* __this, const MethodInfo* method); */

/* HandTankEngineController$$doSomething
   void HandTankEngineController__doSomething (HandTankEngineController_o* __this, const MethodInfo*
   method); */

void native_HandTankEngineController__doSomething_df2eb8(void)

{
  return;
}



/* HandTankEngineController$$CarbrakeActive @ 0xdf2cc4
 * void HandTankEngineController__CarbrakeActive (HandTankEngineController_o* __this, bool isBraking, const MethodInfo* method); */

/* HandTankEngineController$$CarbrakeActive
   void HandTankEngineController__CarbrakeActive (HandTankEngineController_o* __this, bool
   isBraking, const MethodInfo* method); */

void native_HandTankEngineController__CarbrakeActive_df2cc4(long param_1,ulong param_2)

{
  long lVar1;
  float fVar2;
  
  fVar2 = 0.0;
  if ((param_2 & 1) != 0) {
    fVar2 = *(float *)(param_1 + 0x60) * 10.0;
  }
  if (*(long *)(param_1 + 0x18) != 0) {
    native_UnityEngine_WheelCollider__set_brakeTorque_dc5fc0(fVar2,*(long *)(param_1 + 0x18),0);
    fVar2 = 0.0;
    if ((param_2 & 1) != 0) {
      fVar2 = *(float *)(param_1 + 0x60) * 10.0;
    }
    if (*(long *)(param_1 + 0x28) != 0) {
      native_UnityEngine_WheelCollider__set_brakeTorque_dc5fc0(fVar2,*(long *)(param_1 + 0x28),0);
      fVar2 = 0.0;
      if ((param_2 & 1) != 0) {
        fVar2 = *(float *)(param_1 + 0x60) * 10.0;
      }
      if (*(long *)(param_1 + 0x38) != 0) {
        native_UnityEngine_WheelCollider__set_brakeTorque_dc5fc0(fVar2,*(long *)(param_1 + 0x38),0);
        fVar2 = 0.0;
        if ((param_2 & 1) != 0) {
          fVar2 = *(float *)(param_1 + 0x60) * 10.0;
        }
        if (*(long *)(param_1 + 0x48) != 0) {
          native_UnityEngine_WheelCollider__set_brakeTorque_dc5fc0
                    (fVar2,*(long *)(param_1 + 0x48),0);
          fVar2 = 0.0;
          if ((param_2 & 1) != 0) {
            fVar2 = *(float *)(param_1 + 0x60) * 10.0;
          }
          if (*(long *)(param_1 + 0x20) != 0) {
            native_UnityEngine_WheelCollider__set_brakeTorque_dc5fc0
                      (fVar2,*(long *)(param_1 + 0x20),0);
            fVar2 = 0.0;
            if ((param_2 & 1) != 0) {
              fVar2 = *(float *)(param_1 + 0x60) * 10.0;
            }
            if (*(long *)(param_1 + 0x30) != 0) {
              native_UnityEngine_WheelCollider__set_brakeTorque_dc5fc0
                        (fVar2,*(long *)(param_1 + 0x30),0);
              fVar2 = 0.0;
              if ((param_2 & 1) != 0) {
                fVar2 = *(float *)(param_1 + 0x60) * 10.0;
              }
              if (*(long *)(param_1 + 0x40) != 0) {
                native_UnityEngine_WheelCollider__set_brakeTorque_dc5fc0
                          (fVar2,*(long *)(param_1 + 0x40),0);
                lVar1 = *(long *)(param_1 + 0x50);
                fVar2 = 0.0;
                if ((param_2 & 1) != 0) {
                  fVar2 = *(float *)(param_1 + 0x60) * 10.0;
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
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* HandTankEngineController$$.ctor @ 0xdf2ebc
 * void HandTankEngineController___ctor (HandTankEngineController_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* HandTankEngineController$$.ctor
   void HandTankEngineController___ctor (HandTankEngineController_o* __this, const MethodInfo*
   method); */

undefined1  [16] native_HandTankEngineController___ctor_df2ebc(ulong param_1)

{
  undefined1 auVar1 [16];
  
  *(undefined4 *)(param_1 + 0x60) = 0x42c80000;
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



/* HandTankEngineController$$.cctor @ 0xdf2ecc
 * void HandTankEngineController___cctor (const MethodInfo* method); */

/* HandTankEngineController$$.cctor
   void HandTankEngineController___cctor (const MethodInfo* method); */

void native_HandTankEngineController___cctor_df2ecc(void)

{
  return;
}


