/* ARM64 IL2CPP native pseudocode from Ghidra.
 * Recovered implementation, not original C# source.
 * Function boundaries follow the IL2CPP method address table. */


/* GyroTankEngineController$$Start @ 0xdf06dc
 * void GyroTankEngineController__Start (GyroTankEngineController_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GyroTankEngineController$$Start
   void GyroTankEngineController__Start (GyroTankEngineController_o* __this, const MethodInfo*
   method); */

void native_GyroTankEngineController__Start_df06dc(long param_1)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  
  if ((bRam0000000001346f01 & 1) == 0) {
    native_sub_43273c(&Method_UnityEngine_GameObject_GetComponent_WheelCollider____12e4af8);
    native_sub_43273c(&PanelMainUIController_TypeInfo_12d5600);
    native_sub_43273c(&StringLiteral_WheelFL1_12f2fb0);
    native_sub_43273c(&StringLiteral_WheelFL_12f2fa8);
    native_sub_43273c(&StringLiteral_WheelFR1_12f2fc8);
    native_sub_43273c(&StringLiteral_WheelBL_12f2f98);
    native_sub_43273c(&StringLiteral_Tank_12f1490);
    native_sub_43273c(&StringLiteral_WheelFL2_12f2fb8);
    native_sub_43273c(&StringLiteral_WheelFR2_12f2fd0);
    native_sub_43273c(&StringLiteral_WheelFR_12f2fc0);
    native_sub_43273c(&StringLiteral_WheelBR_12f2fa0);
    bRam0000000001346f01 = 1;
  }
  if (((*(byte *)(_PanelMainUIController_TypeInfo_12d5600 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_PanelMainUIController_TypeInfo_12d5600 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  lVar4 = _PanelMainUIController_TypeInfo_12d5600;
  *(undefined4 *)(*(long *)(_PanelMainUIController_TypeInfo_12d5600 + 0xb8) + 0xac) = 0;
  *(undefined4 *)(*(long *)(lVar4 + 0xb8) + 0xb0) = 0;
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
                    puVar6 = (undefined8 *)(param_1 + 0x50);
                    *puVar6 = uVar5;
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
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* GyroTankEngineController$$Update @ 0xdf09dc
 * void GyroTankEngineController__Update (GyroTankEngineController_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GyroTankEngineController$$Update
   void GyroTankEngineController__Update (GyroTankEngineController_o* __this, const MethodInfo*
   method); */

void native_GyroTankEngineController__Update_df09dc
               (undefined1 param_1 [16],float param_2,float param_3,long param_4)

{
  uint uVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  ushort uVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  
  if ((bRam0000000001346f02 & 1) == 0) {
    native_sub_43273c(&GyroTankEngineController_TypeInfo_12d4890);
    native_sub_43273c(&System_Math_TypeInfo_12d51c0);
    native_sub_43273c(&PanelMainUIController_TypeInfo_12d5600);
    bRam0000000001346f02 = 1;
  }
  uVar5 = *(ushort *)(_PanelMainUIController_TypeInfo_12d5600 + 0x132);
  if ((uVar5 >> 10 & 1) == 0) {
    uVar5 = 0;
  }
  else {
    if (*(int *)(_PanelMainUIController_TypeInfo_12d5600 + 0xe0) == 0) {
      native_sub_4327ec(_PanelMainUIController_TypeInfo_12d5600);
      uVar5 = *(ushort *)(_PanelMainUIController_TypeInfo_12d5600 + 0x132);
    }
    uVar5 = uVar5 & 0x400;
  }
  lVar4 = *(long *)(_PanelMainUIController_TypeInfo_12d5600 + 0xb8);
  fVar6 = *(float *)(lVar4 + 0xb0);
  if (-0.3 <= fVar6) {
    if ((uVar5 != 0) && (*(int *)(_PanelMainUIController_TypeInfo_12d5600 + 0xe0) == 0)) {
      native_sub_4327ec(_PanelMainUIController_TypeInfo_12d5600);
      lVar4 = *(long *)(_PanelMainUIController_TypeInfo_12d5600 + 0xb8);
      fVar6 = *(float *)(lVar4 + 0xb0);
      uVar5 = *(ushort *)(_PanelMainUIController_TypeInfo_12d5600 + 0x132) & 0x400;
    }
    param_2 = 4.172325e-08;
    if (0.3 < fVar6) {
      if ((uVar5 != 0) && (*(int *)(_PanelMainUIController_TypeInfo_12d5600 + 0xe0) == 0)) {
        param_2 = 4.172325e-08;
        native_sub_4327ec(_PanelMainUIController_TypeInfo_12d5600);
        lVar4 = *(long *)(_PanelMainUIController_TypeInfo_12d5600 + 0xb8);
      }
      *(undefined4 *)(lVar4 + 0x50) = 1;
      uVar2 = 0;
      goto LAB_00df0b20;
    }
    if ((uVar5 != 0) && (*(int *)(_PanelMainUIController_TypeInfo_12d5600 + 0xe0) == 0)) {
      param_2 = 4.172325e-08;
      native_sub_4327ec(_PanelMainUIController_TypeInfo_12d5600);
      lVar4 = *(long *)(_PanelMainUIController_TypeInfo_12d5600 + 0xb8);
    }
    lVar3 = _PanelMainUIController_TypeInfo_12d5600;
    uVar1 = 0;
    fVar6 = 0.0;
    *(undefined4 *)(lVar4 + 0x50) = 0;
  }
  else {
    if ((uVar5 != 0) && (*(int *)(_PanelMainUIController_TypeInfo_12d5600 + 0xe0) == 0)) {
      native_sub_4327ec(_PanelMainUIController_TypeInfo_12d5600);
      lVar4 = *(long *)(_PanelMainUIController_TypeInfo_12d5600 + 0xb8);
    }
    uVar2 = 1;
    *(undefined4 *)(lVar4 + 0x50) = 0xffffffff;
LAB_00df0b20:
    uVar1 = native_Assets_Scripts_Tools_HjdBleTool__setIntegerSomeBit_7f7068(0,uVar2,1,0);
    fVar6 = *(float *)(*(long *)(_PanelMainUIController_TypeInfo_12d5600 + 0xb8) + 0xb0);
    lVar3 = _PanelMainUIController_TypeInfo_12d5600;
  }
  uVar5 = *(ushort *)(lVar3 + 0x132);
  if ((uVar5 >> 10 & 1) == 0) {
    uVar5 = 0;
  }
  else {
    if (*(int *)(lVar3 + 0xe0) == 0) {
      native_sub_4327ec(lVar3);
      uVar5 = *(ushort *)(_PanelMainUIController_TypeInfo_12d5600 + 0x132);
      lVar3 = _PanelMainUIController_TypeInfo_12d5600;
    }
    uVar5 = uVar5 & 0x400;
  }
  lVar4 = *(long *)(lVar3 + 0xb8);
  fVar7 = *(float *)(lVar4 + 0xac);
  if (-0.3 <= fVar7) {
    if ((uVar5 != 0) && (*(int *)(lVar3 + 0xe0) == 0)) {
      native_sub_4327ec(lVar3);
      lVar4 = *(long *)(_PanelMainUIController_TypeInfo_12d5600 + 0xb8);
      fVar7 = *(float *)(lVar4 + 0xac);
      uVar5 = *(ushort *)(_PanelMainUIController_TypeInfo_12d5600 + 0x132) & 0x400;
      lVar3 = _PanelMainUIController_TypeInfo_12d5600;
    }
    param_2 = 4.172325e-08;
    if (0.3 < fVar7) {
      if ((uVar5 != 0) && (*(int *)(lVar3 + 0xe0) == 0)) {
        param_2 = 4.172325e-08;
        native_sub_4327ec(lVar3);
        lVar4 = *(long *)(_PanelMainUIController_TypeInfo_12d5600 + 0xb8);
      }
      *(undefined4 *)(lVar4 + 0x4c) = 0xffffffff;
      uVar2 = 3;
      goto LAB_00df0c34;
    }
    if ((uVar5 != 0) && (*(int *)(lVar3 + 0xe0) == 0)) {
      param_2 = 4.172325e-08;
      native_sub_4327ec(lVar3);
      lVar4 = *(long *)(_PanelMainUIController_TypeInfo_12d5600 + 0xb8);
      lVar3 = _PanelMainUIController_TypeInfo_12d5600;
    }
    fVar7 = 0.0;
    *(undefined4 *)(lVar4 + 0x4c) = 0;
  }
  else {
    if ((uVar5 != 0) && (*(int *)(lVar3 + 0xe0) == 0)) {
      native_sub_4327ec(lVar3);
      lVar4 = *(long *)(_PanelMainUIController_TypeInfo_12d5600 + 0xb8);
    }
    uVar2 = 2;
    *(undefined4 *)(lVar4 + 0x4c) = 1;
LAB_00df0c34:
    uVar1 = native_Assets_Scripts_Tools_HjdBleTool__setIntegerSomeBit_7f7068(uVar1,uVar2,1,0);
    fVar7 = *(float *)(*(long *)(_PanelMainUIController_TypeInfo_12d5600 + 0xb8) + 0xac);
    lVar3 = _PanelMainUIController_TypeInfo_12d5600;
  }
  switch(uVar1 & 0xff) {
  case 1:
  case 3:
    if (((*(byte *)(_System_Math_TypeInfo_12d51c0 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_System_Math_TypeInfo_12d51c0 + 0xe0) == 0)) {
      native_sub_4327ec();
      lVar3 = _PanelMainUIController_TypeInfo_12d5600;
    }
    if (((*(byte *)(lVar3 + 0x133) >> 2 & 1) != 0) && (*(int *)(lVar3 + 0xe0) == 0)) {
      native_sub_4327ec(lVar3);
      lVar3 = _PanelMainUIController_TypeInfo_12d5600;
    }
    *(float *)(*(long *)(lVar3 + 0xb8) + 0x94) = ABS(fVar6);
    *(float *)(*(long *)(lVar3 + 0xb8) + 0x98) = ABS(fVar6);
    native_GyroTankEngineController__CarbrakeActive_df1410(param_4,0);
    lVar4 = *(long *)(param_4 + 0x18);
    if (lVar4 == 0) goto LAB_00df140c;
    fVar8 = *(float *)(param_4 + 0x60);
    fVar7 = 1.5;
    break;
  case 2:
    if (((*(byte *)(_System_Math_TypeInfo_12d51c0 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_System_Math_TypeInfo_12d51c0 + 0xe0) == 0)) {
      native_sub_4327ec();
      lVar3 = _PanelMainUIController_TypeInfo_12d5600;
    }
    if (((*(byte *)(lVar3 + 0x133) >> 2 & 1) != 0) && (*(int *)(lVar3 + 0xe0) == 0)) {
      native_sub_4327ec(lVar3);
      lVar3 = _PanelMainUIController_TypeInfo_12d5600;
    }
    *(float *)(*(long *)(lVar3 + 0xb8) + 0x94) = ABS(fVar6);
    *(float *)(*(long *)(lVar3 + 0xb8) + 0x98) = ABS(fVar6);
    native_GyroTankEngineController__CarbrakeActive_df1410(param_4,0);
    lVar4 = *(long *)(param_4 + 0x18);
    if (lVar4 == 0) goto LAB_00df140c;
    fVar8 = *(float *)(param_4 + 0x60);
    fVar7 = -1.5;
    break;
  case 4:
  case 0xc:
    if (((*(byte *)(_System_Math_TypeInfo_12d51c0 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_System_Math_TypeInfo_12d51c0 + 0xe0) == 0)) {
      native_sub_4327ec();
      lVar3 = _PanelMainUIController_TypeInfo_12d5600;
    }
    fVar7 = ABS(fVar7);
    if (((*(byte *)(lVar3 + 0x133) >> 2 & 1) != 0) && (*(int *)(lVar3 + 0xe0) == 0)) {
      native_sub_4327ec(lVar3);
      lVar3 = _PanelMainUIController_TypeInfo_12d5600;
    }
    *(float *)(*(long *)(lVar3 + 0xb8) + 0x94) = fVar7;
    *(float *)(*(long *)(lVar3 + 0xb8) + 0x98) = fVar7;
    if (*(long *)(param_4 + 0x58) == 0) goto LAB_00df140c;
    lVar4 = native_UnityEngine_GameObject__get_transform_8de5c8(*(long *)(param_4 + 0x58),0);
    fVar6 = (float)native_UnityEngine_Vector3__get_up_7628a0(0);
    if (lVar4 == 0) goto LAB_00df140c;
    fVar7 = -fVar7;
    fVar6 = fVar6 * fVar7;
    param_2 = param_2 * fVar7;
    param_3 = param_3 * fVar7;
    goto code_r0x00df1170;
  case 5:
  case 7:
  case 0xd:
  case 0xf:
    if (((*(byte *)(_System_Math_TypeInfo_12d51c0 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_System_Math_TypeInfo_12d51c0 + 0xe0) == 0)) {
      native_sub_4327ec();
      lVar3 = _PanelMainUIController_TypeInfo_12d5600;
    }
    fVar7 = ABS(fVar6) * 0.5 + ABS(fVar7);
    if (((*(byte *)(lVar3 + 0x133) >> 2 & 1) != 0) && (*(int *)(lVar3 + 0xe0) == 0)) {
      native_sub_4327ec(lVar3);
      lVar3 = _PanelMainUIController_TypeInfo_12d5600;
    }
    *(float *)(*(long *)(lVar3 + 0xb8) + 0x94) = fVar7;
    *(float *)(*(long *)(lVar3 + 0xb8) + 0x98) = fVar7;
    native_GyroTankEngineController__CarbrakeActive_df1410(param_4,0);
    if (*(long *)(param_4 + 0x18) == 0) goto LAB_00df140c;
    native_UnityEngine_WheelCollider__set_motorTorque_dc5f70(0,*(long *)(param_4 + 0x18),0);
    if (*(long *)(param_4 + 0x28) == 0) goto LAB_00df140c;
    native_UnityEngine_WheelCollider__set_motorTorque_dc5f70(0,*(long *)(param_4 + 0x28),0);
    if (*(long *)(param_4 + 0x38) == 0) goto LAB_00df140c;
    native_UnityEngine_WheelCollider__set_motorTorque_dc5f70(0,*(long *)(param_4 + 0x38),0);
    if (*(long *)(param_4 + 0x48) == 0) goto LAB_00df140c;
    native_UnityEngine_WheelCollider__set_motorTorque_dc5f70(0,*(long *)(param_4 + 0x48),0);
    lVar4 = *(long *)(param_4 + 0x20);
    if (lVar4 == 0) goto LAB_00df140c;
    fVar6 = *(float *)(param_4 + 0x60);
    fVar8 = 6.0;
    goto code_r0x00df109c;
  case 6:
    if (((*(byte *)(_System_Math_TypeInfo_12d51c0 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_System_Math_TypeInfo_12d51c0 + 0xe0) == 0)) {
      native_sub_4327ec();
      lVar3 = _PanelMainUIController_TypeInfo_12d5600;
    }
    fVar7 = ABS(fVar6) * 0.5 + ABS(fVar7);
    if (((*(byte *)(lVar3 + 0x133) >> 2 & 1) != 0) && (*(int *)(lVar3 + 0xe0) == 0)) {
      native_sub_4327ec(lVar3);
      lVar3 = _PanelMainUIController_TypeInfo_12d5600;
    }
    *(float *)(*(long *)(lVar3 + 0xb8) + 0x94) = fVar7;
    *(float *)(*(long *)(lVar3 + 0xb8) + 0x98) = fVar7;
    native_GyroTankEngineController__CarbrakeActive_df1410(param_4,0);
    if (*(long *)(param_4 + 0x18) == 0) goto LAB_00df140c;
    native_UnityEngine_WheelCollider__set_motorTorque_dc5f70(0,*(long *)(param_4 + 0x18),0);
    if (*(long *)(param_4 + 0x28) == 0) goto LAB_00df140c;
    native_UnityEngine_WheelCollider__set_motorTorque_dc5f70(0,*(long *)(param_4 + 0x28),0);
    if (*(long *)(param_4 + 0x38) == 0) goto LAB_00df140c;
    native_UnityEngine_WheelCollider__set_motorTorque_dc5f70(0,*(long *)(param_4 + 0x38),0);
    if (*(long *)(param_4 + 0x48) == 0) goto LAB_00df140c;
    native_UnityEngine_WheelCollider__set_motorTorque_dc5f70(0,*(long *)(param_4 + 0x48),0);
    lVar4 = *(long *)(param_4 + 0x20);
    if (lVar4 == 0) goto LAB_00df140c;
    fVar6 = *(float *)(param_4 + 0x60);
    fVar8 = -6.0;
code_r0x00df109c:
    fVar7 = fVar7 * fVar8;
    goto code_r0x00df10a0;
  case 8:
    if (((*(byte *)(_System_Math_TypeInfo_12d51c0 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_System_Math_TypeInfo_12d51c0 + 0xe0) == 0)) {
      native_sub_4327ec();
      lVar3 = _PanelMainUIController_TypeInfo_12d5600;
    }
    fVar7 = ABS(fVar7);
    if (((*(byte *)(lVar3 + 0x133) >> 2 & 1) != 0) && (*(int *)(lVar3 + 0xe0) == 0)) {
      native_sub_4327ec(lVar3);
      lVar3 = _PanelMainUIController_TypeInfo_12d5600;
    }
    *(float *)(*(long *)(lVar3 + 0xb8) + 0x94) = fVar7;
    *(float *)(*(long *)(lVar3 + 0xb8) + 0x98) = fVar7;
    if (*(long *)(param_4 + 0x58) == 0) goto LAB_00df140c;
    lVar4 = native_UnityEngine_GameObject__get_transform_8de5c8(*(long *)(param_4 + 0x58),0);
    fVar6 = (float)native_UnityEngine_Vector3__get_up_7628a0(0);
    if (lVar4 == 0) goto LAB_00df140c;
    fVar6 = fVar7 * fVar6;
    param_2 = fVar7 * param_2;
    param_3 = fVar7 * param_3;
code_r0x00df1170:
    native_UnityEngine_Transform__Rotate_7724a0(fVar6,param_2,param_3,lVar4,0);
    goto LAB_00df12a8;
  case 9:
  case 0xb:
    if (((*(byte *)(_System_Math_TypeInfo_12d51c0 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_System_Math_TypeInfo_12d51c0 + 0xe0) == 0)) {
      native_sub_4327ec();
      lVar3 = _PanelMainUIController_TypeInfo_12d5600;
    }
    fVar6 = ABS(fVar6) * 0.5 + ABS(fVar7);
    if (((*(byte *)(lVar3 + 0x133) >> 2 & 1) != 0) && (*(int *)(lVar3 + 0xe0) == 0)) {
      native_sub_4327ec(lVar3);
      lVar3 = _PanelMainUIController_TypeInfo_12d5600;
    }
    *(float *)(*(long *)(lVar3 + 0xb8) + 0x94) = fVar6;
    *(float *)(*(long *)(lVar3 + 0xb8) + 0x98) = fVar6;
    native_GyroTankEngineController__CarbrakeActive_df1410(param_4,0);
    lVar4 = *(long *)(param_4 + 0x18);
    if (lVar4 == 0) goto LAB_00df140c;
    fVar7 = *(float *)(param_4 + 0x60);
    fVar8 = 6.0;
    goto code_r0x00df1200;
  case 10:
    if (((*(byte *)(_System_Math_TypeInfo_12d51c0 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_System_Math_TypeInfo_12d51c0 + 0xe0) == 0)) {
      native_sub_4327ec();
      lVar3 = _PanelMainUIController_TypeInfo_12d5600;
    }
    fVar6 = ABS(fVar6) * 0.5 + ABS(fVar7);
    if (((*(byte *)(lVar3 + 0x133) >> 2 & 1) != 0) && (*(int *)(lVar3 + 0xe0) == 0)) {
      native_sub_4327ec(lVar3);
      lVar3 = _PanelMainUIController_TypeInfo_12d5600;
    }
    *(float *)(*(long *)(lVar3 + 0xb8) + 0x94) = fVar6;
    *(float *)(*(long *)(lVar3 + 0xb8) + 0x98) = fVar6;
    native_GyroTankEngineController__CarbrakeActive_df1410(param_4,0);
    lVar4 = *(long *)(param_4 + 0x18);
    if (lVar4 == 0) goto LAB_00df140c;
    fVar7 = *(float *)(param_4 + 0x60);
    fVar8 = -6.0;
code_r0x00df1200:
    fVar6 = fVar6 * fVar8;
    native_UnityEngine_WheelCollider__set_motorTorque_dc5f70(fVar6 * fVar7,lVar4,0);
    if (*(long *)(param_4 + 0x28) == 0) goto LAB_00df140c;
    native_UnityEngine_WheelCollider__set_motorTorque_dc5f70
              (fVar6 * *(float *)(param_4 + 0x60),*(long *)(param_4 + 0x28),0);
    if (*(long *)(param_4 + 0x38) == 0) goto LAB_00df140c;
    native_UnityEngine_WheelCollider__set_motorTorque_dc5f70
              (fVar6 * *(float *)(param_4 + 0x60),*(long *)(param_4 + 0x38),0);
    if (*(long *)(param_4 + 0x48) == 0) goto LAB_00df140c;
    native_UnityEngine_WheelCollider__set_motorTorque_dc5f70
              (fVar6 * *(float *)(param_4 + 0x60),*(long *)(param_4 + 0x48),0);
    if (*(long *)(param_4 + 0x20) == 0) goto LAB_00df140c;
    native_UnityEngine_WheelCollider__set_motorTorque_dc5f70(0,*(long *)(param_4 + 0x20),0);
    if (*(long *)(param_4 + 0x30) == 0) goto LAB_00df140c;
    native_UnityEngine_WheelCollider__set_motorTorque_dc5f70(0,*(long *)(param_4 + 0x30),0);
    if (*(long *)(param_4 + 0x40) == 0) goto LAB_00df140c;
    native_UnityEngine_WheelCollider__set_motorTorque_dc5f70(0,*(long *)(param_4 + 0x40),0);
    lVar4 = *(long *)(param_4 + 0x50);
    if (lVar4 == 0) goto LAB_00df140c;
    fVar7 = 0.0;
    goto code_r0x00df12a0;
  default:
    if (((*(byte *)(lVar3 + 0x133) >> 2 & 1) != 0) && (*(int *)(lVar3 + 0xe0) == 0)) {
      native_sub_4327ec(lVar3);
      lVar3 = _PanelMainUIController_TypeInfo_12d5600;
    }
    *(undefined4 *)(*(long *)(lVar3 + 0xb8) + 0x94) = 0;
    *(undefined4 *)(*(long *)(lVar3 + 0xb8) + 0x98) = 0;
    if (*(long *)(param_4 + 0x18) == 0) goto LAB_00df140c;
    native_UnityEngine_WheelCollider__set_motorTorque_dc5f70(0,*(long *)(param_4 + 0x18),0);
    if (*(long *)(param_4 + 0x28) == 0) goto LAB_00df140c;
    native_UnityEngine_WheelCollider__set_motorTorque_dc5f70(0,*(long *)(param_4 + 0x28),0);
    if (*(long *)(param_4 + 0x38) == 0) goto LAB_00df140c;
    native_UnityEngine_WheelCollider__set_motorTorque_dc5f70(0,*(long *)(param_4 + 0x38),0);
    if (*(long *)(param_4 + 0x20) == 0) goto LAB_00df140c;
    native_UnityEngine_WheelCollider__set_motorTorque_dc5f70(0,*(long *)(param_4 + 0x20),0);
    if (*(long *)(param_4 + 0x30) == 0) goto LAB_00df140c;
    native_UnityEngine_WheelCollider__set_motorTorque_dc5f70(0,*(long *)(param_4 + 0x30),0);
    if (*(long *)(param_4 + 0x40) == 0) goto LAB_00df140c;
    native_UnityEngine_WheelCollider__set_motorTorque_dc5f70(0,*(long *)(param_4 + 0x40),0);
    if (*(long *)(param_4 + 0x48) == 0) goto LAB_00df140c;
    native_UnityEngine_WheelCollider__set_motorTorque_dc5f70(0,*(long *)(param_4 + 0x48),0);
    if (*(long *)(param_4 + 0x50) == 0) goto LAB_00df140c;
    native_UnityEngine_WheelCollider__set_motorTorque_dc5f70(0,*(long *)(param_4 + 0x50),0);
    native_GyroTankEngineController__CarbrakeActive_df1410(param_4,1);
    goto LAB_00df12a8;
  }
  fVar7 = ABS(fVar6) * fVar7;
  native_UnityEngine_WheelCollider__set_motorTorque_dc5f70(fVar7 * fVar8,lVar4,0);
  if (*(long *)(param_4 + 0x28) != 0) {
    native_UnityEngine_WheelCollider__set_motorTorque_dc5f70
              (fVar7 * *(float *)(param_4 + 0x60),*(long *)(param_4 + 0x28),0);
    if (*(long *)(param_4 + 0x38) != 0) {
      native_UnityEngine_WheelCollider__set_motorTorque_dc5f70
                (fVar7 * *(float *)(param_4 + 0x60),*(long *)(param_4 + 0x38),0);
      if (*(long *)(param_4 + 0x48) != 0) {
        native_UnityEngine_WheelCollider__set_motorTorque_dc5f70
                  (fVar7 * *(float *)(param_4 + 0x60),*(long *)(param_4 + 0x48),0);
        lVar4 = *(long *)(param_4 + 0x20);
        if (lVar4 != 0) {
          fVar6 = *(float *)(param_4 + 0x60);
code_r0x00df10a0:
          native_UnityEngine_WheelCollider__set_motorTorque_dc5f70(fVar7 * fVar6,lVar4,0);
          if (*(long *)(param_4 + 0x30) != 0) {
            native_UnityEngine_WheelCollider__set_motorTorque_dc5f70
                      (fVar7 * *(float *)(param_4 + 0x60),*(long *)(param_4 + 0x30),0);
            if (*(long *)(param_4 + 0x40) != 0) {
              native_UnityEngine_WheelCollider__set_motorTorque_dc5f70
                        (fVar7 * *(float *)(param_4 + 0x60),*(long *)(param_4 + 0x40),0);
              lVar4 = *(long *)(param_4 + 0x50);
              if (lVar4 != 0) {
                fVar7 = fVar7 * *(float *)(param_4 + 0x60);
code_r0x00df12a0:
                native_UnityEngine_WheelCollider__set_motorTorque_dc5f70(fVar7,lVar4,0);
LAB_00df12a8:
                lVar4 = native_GyroTankEngineController__gethaomiao_df1550();
                if (((*(byte *)(_GyroTankEngineController_TypeInfo_12d4890 + 0x133) >> 2 & 1) != 0)
                   && (*(int *)(_GyroTankEngineController_TypeInfo_12d4890 + 0xe0) == 0)) {
                  native_sub_4327ec(_GyroTankEngineController_TypeInfo_12d4890);
                }
                if (99 < lVar4 - **(long **)(_GyroTankEngineController_TypeInfo_12d4890 + 0xb8)) {
                  uVar2 = native_GyroTankEngineController__gethaomiao_df1550();
                  if (((*(byte *)(_GyroTankEngineController_TypeInfo_12d4890 + 0x133) >> 2 & 1) != 0
                      ) && (*(int *)(_GyroTankEngineController_TypeInfo_12d4890 + 0xe0) == 0)) {
                    native_sub_4327ec(_GyroTankEngineController_TypeInfo_12d4890);
                  }
                  **(undefined8 **)(_GyroTankEngineController_TypeInfo_12d4890 + 0xb8) = uVar2;
                }
                return;
              }
            }
          }
        }
      }
    }
  }
LAB_00df140c:
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* GyroTankEngineController$$gethaomiao @ 0xdf1550
 * int64_t GyroTankEngineController__gethaomiao (GyroTankEngineController_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GyroTankEngineController$$gethaomiao
   int64_t GyroTankEngineController__gethaomiao (GyroTankEngineController_o* __this, const
   MethodInfo* method); */

long native_GyroTankEngineController__gethaomiao_df1550(void)

{
  long lVar1;
  undefined8 uStack_18;
  
  if ((bRam0000000001346f03 & 1) == 0) {
    native_sub_43273c(&System_DateTime_TypeInfo_12d42f8);
    bRam0000000001346f03 = 1;
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



/* GyroTankEngineController$$doSomething @ 0xdf1604
 * void GyroTankEngineController__doSomething (GyroTankEngineController_o* __this, const MethodInfo* method); */

/* GyroTankEngineController$$doSomething
   void GyroTankEngineController__doSomething (GyroTankEngineController_o* __this, const MethodInfo*
   method); */

void native_GyroTankEngineController__doSomething_df1604(void)

{
  return;
}



/* GyroTankEngineController$$CarbrakeActive @ 0xdf1410
 * void GyroTankEngineController__CarbrakeActive (GyroTankEngineController_o* __this, bool isBraking, const MethodInfo* method); */

/* GyroTankEngineController$$CarbrakeActive
   void GyroTankEngineController__CarbrakeActive (GyroTankEngineController_o* __this, bool
   isBraking, const MethodInfo* method); */

void native_GyroTankEngineController__CarbrakeActive_df1410(long param_1,ulong param_2)

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



/* GyroTankEngineController$$.ctor @ 0xdf1608
 * void GyroTankEngineController___ctor (GyroTankEngineController_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GyroTankEngineController$$.ctor
   void GyroTankEngineController___ctor (GyroTankEngineController_o* __this, const MethodInfo*
   method); */

undefined1  [16] native_GyroTankEngineController___ctor_df1608(ulong param_1)

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



/* GyroTankEngineController$$.cctor @ 0xdf1618
 * void GyroTankEngineController___cctor (const MethodInfo* method); */

/* GyroTankEngineController$$.cctor
   void GyroTankEngineController___cctor (const MethodInfo* method); */

void native_GyroTankEngineController___cctor_df1618(void)

{
  return;
}


