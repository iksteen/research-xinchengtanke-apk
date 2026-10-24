/* ARM64 IL2CPP native pseudocode from Ghidra.
 * Recovered implementation, not original C# source.
 * Function boundaries follow the IL2CPP method address table. */


/* GyroCarEngineController$$Start @ 0xdefd50
 * void GyroCarEngineController__Start (GyroCarEngineController_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GyroCarEngineController$$Start
   void GyroCarEngineController__Start (GyroCarEngineController_o* __this, const MethodInfo*
   method); */

void native_GyroCarEngineController__Start_defd50(long param_1)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  
  if ((bRam0000000001346efe & 1) == 0) {
    native_sub_43273c(&Method_UnityEngine_GameObject_GetComponent_WheelCollider____12e4af8);
    native_sub_43273c(&StringLiteral_WheelFL_12f2fa8);
    native_sub_43273c(&StringLiteral_WheelBL_12f2f98);
    native_sub_43273c(&StringLiteral_Car_12ecf38);
    native_sub_43273c(&StringLiteral_WheelFR_12f2fc0);
    native_sub_43273c(&StringLiteral_WheelBR_12f2fa0);
    bRam0000000001346efe = 1;
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
            puVar6 = (undefined8 *)(param_1 + 0x30);
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
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* GyroCarEngineController$$Update @ 0xdefef0
 * void GyroCarEngineController__Update (GyroCarEngineController_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GyroCarEngineController$$Update
   void GyroCarEngineController__Update (GyroCarEngineController_o* __this, const MethodInfo*
   method); */

void native_GyroCarEngineController__Update_defef0(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  int iVar4;
  long *plVar5;
  long lVar6;
  ushort uVar7;
  float fVar8;
  
  if ((bRam0000000001346eff & 1) == 0) {
    native_sub_43273c(&Method_UnityEngine_GameObject_GetComponent_Rigidbody____12e4a10);
    native_sub_43273c(&GyroCarEngineController_TypeInfo_12d4888);
    native_sub_43273c(&System_Math_TypeInfo_12d51c0);
    native_sub_43273c(&PanelMainUIController_TypeInfo_12d5600);
    bRam0000000001346eff = 1;
  }
  if (*(long *)(param_1 + 0x38) == 0) goto LAB_00df0548;
  lVar1 = native_UnityEngine_GameObject__GetComponent_BE2_BlockSectionHeader_Custom__4a2214
                    (*(long *)(param_1 + 0x38),
                     _Method_UnityEngine_GameObject_GetComponent_Rigidbody____12e4a10);
  uVar7 = *(ushort *)(_PanelMainUIController_TypeInfo_12d5600 + 0x132);
  if ((uVar7 >> 10 & 1) == 0) {
    uVar7 = 0;
  }
  else {
    if (*(int *)(_PanelMainUIController_TypeInfo_12d5600 + 0xe0) == 0) {
      native_sub_4327ec(_PanelMainUIController_TypeInfo_12d5600);
      uVar7 = *(ushort *)(_PanelMainUIController_TypeInfo_12d5600 + 0x132);
    }
    uVar7 = uVar7 & 0x400;
  }
  plVar5 = (long *)(_PanelMainUIController_TypeInfo_12d5600 + 0xb8);
  lVar6 = *plVar5;
  fVar8 = *(float *)(lVar6 + 0xb8);
  if (-0.2 <= fVar8) {
    if ((uVar7 != 0) && (*(int *)(_PanelMainUIController_TypeInfo_12d5600 + 0xe0) == 0)) {
      native_sub_4327ec(_PanelMainUIController_TypeInfo_12d5600);
      plVar5 = (long *)(_PanelMainUIController_TypeInfo_12d5600 + 0xb8);
      lVar6 = *plVar5;
      fVar8 = *(float *)(lVar6 + 0xb8);
      uVar7 = *(ushort *)(_PanelMainUIController_TypeInfo_12d5600 + 0x132) & 0x400;
    }
    if (0.2 < fVar8) {
      if ((uVar7 != 0) && (*(int *)(_PanelMainUIController_TypeInfo_12d5600 + 0xe0) == 0)) {
        native_sub_4327ec(_PanelMainUIController_TypeInfo_12d5600);
        plVar5 = (long *)(_PanelMainUIController_TypeInfo_12d5600 + 0xb8);
        lVar6 = *plVar5;
        fVar8 = *(float *)(lVar6 + 0xb8);
      }
      if (((*(byte *)(_System_Math_TypeInfo_12d51c0 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_System_Math_TypeInfo_12d51c0 + 0xe0) == 0)) {
        native_sub_4327ec();
        plVar5 = (long *)(_PanelMainUIController_TypeInfo_12d5600 + 0xb8);
        lVar6 = *plVar5;
      }
      *(float *)(lVar6 + 0x9c) = ABS(fVar8);
      *(undefined4 *)(*plVar5 + 0x50) = 1;
      if (*(int *)(param_1 + 0x60) == 1) {
        uVar3 = 2;
        goto LAB_00df00dc;
      }
      iVar4 = *(int *)(param_1 + 0x5c);
      uVar3 = 2;
      goto LAB_00df0140;
    }
    if ((uVar7 != 0) && (*(int *)(_PanelMainUIController_TypeInfo_12d5600 + 0xe0) == 0)) {
      native_sub_4327ec(_PanelMainUIController_TypeInfo_12d5600);
      plVar5 = (long *)(_PanelMainUIController_TypeInfo_12d5600 + 0xb8);
      lVar6 = *plVar5;
    }
    *(undefined4 *)(lVar6 + 0x9c) = 0;
    *(undefined4 *)(*plVar5 + 0x50) = 0;
    if (*(int *)(param_1 + 0x58) < 1) {
      *(undefined4 *)(param_1 + 0x60) = 0;
    }
    else {
      *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + -1;
    }
    *(undefined4 *)(param_1 + 0x5c) = 0;
joined_r0x00df0264:
    if (lVar1 == 0) goto LAB_00df0548;
    native_UnityEngine_Rigidbody__set_mass_dbd044(0x43fa0000,lVar1,0);
    native_UnityEngine_Rigidbody__set_drag_dbcfa4(0x41200000,lVar1,0);
    native_UnityEngine_Rigidbody__set_angularDrag_dbcff4(0x41200000,lVar1,0);
    if (*(long *)(param_1 + 0x18) == 0) goto LAB_00df0548;
    native_UnityEngine_WheelCollider__set_motorTorque_dc5f70(0,*(long *)(param_1 + 0x18),0);
    if (*(long *)(param_1 + 0x20) == 0) goto LAB_00df0548;
    native_UnityEngine_WheelCollider__set_motorTorque_dc5f70(0,*(long *)(param_1 + 0x20),0);
    if (*(long *)(param_1 + 0x28) == 0) goto LAB_00df0548;
    native_UnityEngine_WheelCollider__set_motorTorque_dc5f70(0,*(long *)(param_1 + 0x28),0);
    if (*(long *)(param_1 + 0x30) == 0) goto LAB_00df0548;
    native_UnityEngine_WheelCollider__set_motorTorque_dc5f70(0,*(long *)(param_1 + 0x30),0);
    uVar2 = 1;
  }
  else {
    if ((uVar7 != 0) && (*(int *)(_PanelMainUIController_TypeInfo_12d5600 + 0xe0) == 0)) {
      native_sub_4327ec(_PanelMainUIController_TypeInfo_12d5600);
      plVar5 = (long *)(_PanelMainUIController_TypeInfo_12d5600 + 0xb8);
      lVar6 = *plVar5;
      fVar8 = *(float *)(lVar6 + 0xb8);
    }
    if (((*(byte *)(_System_Math_TypeInfo_12d51c0 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_System_Math_TypeInfo_12d51c0 + 0xe0) == 0)) {
      native_sub_4327ec();
      plVar5 = (long *)(_PanelMainUIController_TypeInfo_12d5600 + 0xb8);
      lVar6 = *plVar5;
    }
    *(float *)(lVar6 + 0x9c) = ABS(fVar8);
    *(undefined4 *)(*plVar5 + 0x50) = 0xffffffff;
    if (*(int *)(param_1 + 0x60) == 2) {
      uVar3 = 1;
LAB_00df00dc:
      *(undefined4 *)(param_1 + 0x60) = uVar3;
      *(undefined8 *)(param_1 + 0x58) = 0xa0000000a;
      iVar4 = 10;
LAB_00df0154:
      *(int *)(param_1 + 0x5c) = iVar4 + -1;
      goto joined_r0x00df0264;
    }
    iVar4 = *(int *)(param_1 + 0x5c);
    uVar3 = 1;
LAB_00df0140:
    *(undefined4 *)(param_1 + 0x60) = uVar3;
    *(undefined4 *)(param_1 + 0x58) = 10;
    if (0 < iVar4) goto LAB_00df0154;
    if (lVar1 == 0) goto LAB_00df0548;
    native_UnityEngine_Rigidbody__set_mass_dbd044(0x42480000,lVar1,0);
    native_UnityEngine_Rigidbody__set_drag_dbcfa4(0x3e99999a,lVar1,0);
    native_UnityEngine_Rigidbody__set_angularDrag_dbcff4(0x3dcccccd,lVar1,0);
    lVar1 = *(long *)(param_1 + 0x18);
    fVar8 = *(float *)(param_1 + 0x40);
    if (((*(byte *)(_PanelMainUIController_TypeInfo_12d5600 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_PanelMainUIController_TypeInfo_12d5600 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    if (lVar1 == 0) goto LAB_00df0548;
    native_UnityEngine_WheelCollider__set_motorTorque_dc5f70
              (fVar8 * *(float *)(*(long *)(_PanelMainUIController_TypeInfo_12d5600 + 0xb8) + 0xb8),
               lVar1,0);
    if (*(long *)(param_1 + 0x20) == 0) goto LAB_00df0548;
    native_UnityEngine_WheelCollider__set_motorTorque_dc5f70
              (*(float *)(*(long *)(_PanelMainUIController_TypeInfo_12d5600 + 0xb8) + 0xb8) *
               *(float *)(param_1 + 0x40),*(long *)(param_1 + 0x20),0);
    if (*(long *)(param_1 + 0x28) == 0) goto LAB_00df0548;
    native_UnityEngine_WheelCollider__set_motorTorque_dc5f70
              (*(float *)(*(long *)(_PanelMainUIController_TypeInfo_12d5600 + 0xb8) + 0xb8) *
               *(float *)(param_1 + 0x40),*(long *)(param_1 + 0x28),0);
    if (*(long *)(param_1 + 0x30) == 0) goto LAB_00df0548;
    native_UnityEngine_WheelCollider__set_motorTorque_dc5f70
              (*(float *)(*(long *)(_PanelMainUIController_TypeInfo_12d5600 + 0xb8) + 0xb8) *
               *(float *)(param_1 + 0x40),*(long *)(param_1 + 0x30),0);
    uVar2 = 0;
  }
  native_GyroCarEngineController__CarbrakeActive_df054c(param_1,uVar2);
  uVar7 = *(ushort *)(_PanelMainUIController_TypeInfo_12d5600 + 0x132);
  if ((uVar7 >> 10 & 1) == 0) {
    uVar7 = 0;
  }
  else {
    if (*(int *)(_PanelMainUIController_TypeInfo_12d5600 + 0xe0) == 0) {
      native_sub_4327ec();
      uVar7 = *(ushort *)(_PanelMainUIController_TypeInfo_12d5600 + 0x132);
    }
    uVar7 = uVar7 & 0x400;
  }
  plVar5 = (long *)(_PanelMainUIController_TypeInfo_12d5600 + 0xb8);
  lVar1 = *plVar5;
  fVar8 = *(float *)(lVar1 + 0xb4);
  if (-0.3 <= fVar8) {
    if ((uVar7 != 0) && (*(int *)(_PanelMainUIController_TypeInfo_12d5600 + 0xe0) == 0)) {
      native_sub_4327ec();
      plVar5 = (long *)(_PanelMainUIController_TypeInfo_12d5600 + 0xb8);
      lVar1 = *plVar5;
      fVar8 = *(float *)(lVar1 + 0xb4);
      uVar7 = *(ushort *)(_PanelMainUIController_TypeInfo_12d5600 + 0x132) & 0x400;
    }
    if (fVar8 <= 0.3) {
      if ((uVar7 != 0) && (*(int *)(_PanelMainUIController_TypeInfo_12d5600 + 0xe0) == 0)) {
        native_sub_4327ec();
        plVar5 = (long *)(_PanelMainUIController_TypeInfo_12d5600 + 0xb8);
        lVar1 = *plVar5;
      }
      *(undefined4 *)(lVar1 + 0xa0) = 0;
      *(undefined4 *)(*plVar5 + 0x4c) = 0;
      if (*(long *)(param_1 + 0x18) != 0) {
        native_UnityEngine_WheelCollider__set_steerAngle_dc6050(0,*(long *)(param_1 + 0x18),0);
        lVar1 = *(long *)(param_1 + 0x20);
        if (lVar1 == 0) goto LAB_00df0548;
        fVar8 = 0.0;
        goto LAB_00df04b8;
      }
      goto LAB_00df0548;
    }
    if ((uVar7 != 0) && (*(int *)(_PanelMainUIController_TypeInfo_12d5600 + 0xe0) == 0)) {
      native_sub_4327ec();
      plVar5 = (long *)(_PanelMainUIController_TypeInfo_12d5600 + 0xb8);
      lVar1 = *plVar5;
      fVar8 = *(float *)(lVar1 + 0xb4);
    }
    if (((*(byte *)(_System_Math_TypeInfo_12d51c0 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_System_Math_TypeInfo_12d51c0 + 0xe0) == 0)) {
      native_sub_4327ec();
      plVar5 = (long *)(_PanelMainUIController_TypeInfo_12d5600 + 0xb8);
      lVar1 = *plVar5;
    }
    *(float *)(lVar1 + 0xa0) = ABS(fVar8);
    lVar1 = *plVar5;
    uVar3 = 0xffffffff;
  }
  else {
    if ((uVar7 != 0) && (*(int *)(_PanelMainUIController_TypeInfo_12d5600 + 0xe0) == 0)) {
      native_sub_4327ec();
      plVar5 = (long *)(_PanelMainUIController_TypeInfo_12d5600 + 0xb8);
      lVar1 = *plVar5;
      fVar8 = *(float *)(lVar1 + 0xb4);
    }
    if (((*(byte *)(_System_Math_TypeInfo_12d51c0 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_System_Math_TypeInfo_12d51c0 + 0xe0) == 0)) {
      native_sub_4327ec();
      plVar5 = (long *)(_PanelMainUIController_TypeInfo_12d5600 + 0xb8);
      lVar1 = *plVar5;
    }
    *(float *)(lVar1 + 0xa0) = ABS(fVar8);
    lVar1 = *plVar5;
    uVar3 = 1;
  }
  *(undefined4 *)(lVar1 + 0x4c) = uVar3;
  if (*(long *)(param_1 + 0x18) != 0) {
    native_UnityEngine_WheelCollider__set_steerAngle_dc6050
              (*(float *)(*plVar5 + 0xb4) * *(float *)(param_1 + 0x44),*(long *)(param_1 + 0x18),0);
    lVar1 = *(long *)(param_1 + 0x20);
    if (lVar1 != 0) {
      fVar8 = *(float *)(*(long *)(_PanelMainUIController_TypeInfo_12d5600 + 0xb8) + 0xb4) *
              *(float *)(param_1 + 0x44);
LAB_00df04b8:
      native_UnityEngine_WheelCollider__set_steerAngle_dc6050(fVar8,lVar1,0);
      lVar1 = native_GyroCarEngineController__gethaomiao_df060c();
      if (((*(byte *)(_GyroCarEngineController_TypeInfo_12d4888 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_GyroCarEngineController_TypeInfo_12d4888 + 0xe0) == 0)) {
        native_sub_4327ec(_GyroCarEngineController_TypeInfo_12d4888);
      }
      if (99 < lVar1 - **(long **)(_GyroCarEngineController_TypeInfo_12d4888 + 0xb8)) {
        uVar2 = native_GyroCarEngineController__gethaomiao_df060c();
        if (((*(byte *)(_GyroCarEngineController_TypeInfo_12d4888 + 0x133) >> 2 & 1) != 0) &&
           (*(int *)(_GyroCarEngineController_TypeInfo_12d4888 + 0xe0) == 0)) {
          native_sub_4327ec(_GyroCarEngineController_TypeInfo_12d4888);
        }
        **(undefined8 **)(_GyroCarEngineController_TypeInfo_12d4888 + 0xb8) = uVar2;
      }
      return;
    }
  }
LAB_00df0548:
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* GyroCarEngineController$$gethaomiao @ 0xdf060c
 * int64_t GyroCarEngineController__gethaomiao (GyroCarEngineController_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GyroCarEngineController$$gethaomiao
   int64_t GyroCarEngineController__gethaomiao (GyroCarEngineController_o* __this, const MethodInfo*
   method); */

long native_GyroCarEngineController__gethaomiao_df060c(void)

{
  long lVar1;
  undefined8 uStack_18;
  
  if ((bRam0000000001346f00 & 1) == 0) {
    native_sub_43273c(&System_DateTime_TypeInfo_12d42f8);
    bRam0000000001346f00 = 1;
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



/* GyroCarEngineController$$doSomething @ 0xdf06c0
 * void GyroCarEngineController__doSomething (GyroCarEngineController_o* __this, const MethodInfo* method); */

/* GyroCarEngineController$$doSomething
   void GyroCarEngineController__doSomething (GyroCarEngineController_o* __this, const MethodInfo*
   method); */

void native_GyroCarEngineController__doSomething_df06c0(void)

{
  return;
}



/* GyroCarEngineController$$CarbrakeActive @ 0xdf054c
 * void GyroCarEngineController__CarbrakeActive (GyroCarEngineController_o* __this, bool isBraking, const MethodInfo* method); */

/* GyroCarEngineController$$CarbrakeActive
   void GyroCarEngineController__CarbrakeActive (GyroCarEngineController_o* __this, bool isBraking,
   const MethodInfo* method); */

void native_GyroCarEngineController__CarbrakeActive_df054c(long param_1,ulong param_2)

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



/* GyroCarEngineController$$.ctor @ 0xdf06c4
 * void GyroCarEngineController___ctor (GyroCarEngineController_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GyroCarEngineController$$.ctor
   void GyroCarEngineController___ctor (GyroCarEngineController_o* __this, const MethodInfo*
   method); */

long native_GyroCarEngineController___ctor_df06c4(long param_1)

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



/* GyroCarEngineController$$.cctor @ 0xdf06d8
 * void GyroCarEngineController___cctor (const MethodInfo* method); */

/* GyroCarEngineController$$.cctor
   void GyroCarEngineController___cctor (const MethodInfo* method); */

void native_GyroCarEngineController___cctor_df06d8(void)

{
  return;
}


