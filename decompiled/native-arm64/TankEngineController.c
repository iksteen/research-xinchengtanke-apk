/* ARM64 IL2CPP native pseudocode from Ghidra.
 * Recovered implementation, not original C# source.
 * Function boundaries follow the IL2CPP method address table. */


/* TankEngineController$$Start @ 0x6dfc74
 * void TankEngineController__Start (TankEngineController_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TankEngineController$$Start
   void TankEngineController__Start (TankEngineController_o* __this, const MethodInfo* method); */

void native_TankEngineController__Start_6dfc74(long param_1)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  long *plVar8;
  
  if ((bRam000000000133f378 & 1) == 0) {
    native_sub_43273c(&EventDelegate_Callback_TypeInfo_12d72e8);
    native_sub_43273c(&EventDelegate_TypeInfo_12d4590);
    native_sub_43273c(&Method_UnityEngine_GameObject_GetComponent_UIButton____12e4a88);
    native_sub_43273c(&Method_UnityEngine_GameObject_GetComponent_WheelCollider____12e4af8);
    native_sub_43273c(&Method_System_Collections_Generic_List_EventDelegate__Add___12dc740);
    native_sub_43273c(&Method_TankEngineController_OnClickButtonRTankPao___12e7058);
    native_sub_43273c(&StringLiteral_ButtonRTankroate_12ec938);
    native_sub_43273c(&StringLiteral_leftJoystick_12f5410);
    native_sub_43273c(&StringLiteral_WheelFL1_12f2fb0);
    native_sub_43273c(&StringLiteral_WheelFL_12f2fa8);
    native_sub_43273c(&StringLiteral_ButtonRTankPao_12ec928);
    native_sub_43273c(&StringLiteral_tankpaoshell_12f65c8);
    native_sub_43273c(&StringLiteral_rightJoystick_12f5e80);
    native_sub_43273c(&StringLiteral_WheelFR1_12f2fc8);
    native_sub_43273c(&StringLiteral_WheelBL_12f2f98);
    native_sub_43273c(&StringLiteral_Tank_12f1490);
    native_sub_43273c(&StringLiteral_WheelFL2_12f2fb8);
    native_sub_43273c(&StringLiteral_WheelFR2_12f2fd0);
    native_sub_43273c(&StringLiteral_WheelFR_12f2fc0);
    native_sub_43273c(&StringLiteral_WheelBR_12f2fa0);
    native_sub_43273c(&StringLiteral_TankPaotai_12f1548);
    bRam000000000133f378 = 1;
  }
  lVar4 = native_UnityEngine_GameObject__Find_8dead0(_StringLiteral_Tank_12f1490,0);
  if (lVar4 != 0) {
    uVar5 = native_UnityEngine_GameObject__get_gameObject_8debb8(lVar4,0);
    *(undefined8 *)(param_1 + 0x60) = uVar5;
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
                    native_sub_4326e0();
                    lVar4 = native_UnityEngine_GameObject__Find_8dead0
                                      (_StringLiteral_TankPaotai_12f1548,0);
                    if (lVar4 != 0) {
                      uVar5 = native_UnityEngine_GameObject__get_gameObject_8debb8(lVar4,0);
                      *(undefined8 *)(param_1 + 0x68) = uVar5;
                      native_sub_4326e0();
                      lVar4 = native_UnityEngine_Component__get_transform_8da62c(param_1,0);
                      if ((lVar4 != 0) &&
                         (lVar4 = native_UnityEngine_Transform__FindChild_772e3c
                                            (lVar4,_StringLiteral_ButtonRTankroate_12ec938,0),
                         lVar4 != 0)) {
                        uVar5 = native_UnityEngine_Component__get_gameObject_8da66c(lVar4,0);
                        *(undefined8 *)(param_1 + 0x58) = uVar5;
                        native_sub_4326e0();
                        uVar5 = native_UnityEngine_GameObject__Find_8dead0
                                          (_StringLiteral_leftJoystick_12f5410,0);
                        *(undefined8 *)(param_1 + 0x78) = uVar5;
                        native_sub_4326e0(param_1 + 0x78);
                        uVar5 = native_UnityEngine_GameObject__Find_8dead0
                                          (_StringLiteral_rightJoystick_12f5e80,0);
                        *(undefined8 *)(param_1 + 0x80) = uVar5;
                        native_sub_4326e0(param_1 + 0x80);
                        lVar4 = native_UnityEngine_Component__get_transform_8da62c(param_1,0);
                        if ((lVar4 != 0) &&
                           (lVar4 = native_UnityEngine_Transform__FindChild_772e3c
                                              (lVar4,_StringLiteral_ButtonRTankPao_12ec928,0),
                           lVar4 != 0)) {
                          lVar4 = native_UnityEngine_Component__get_gameObject_8da66c(lVar4,0);
                          plVar8 = (long *)(param_1 + 0x90);
                          *plVar8 = lVar4;
                          native_sub_4326e0(plVar8,lVar4);
                          if ((*plVar8 != 0) &&
                             (lVar4 = native_UnityEngine_GameObject__GetComponent_BE2_BlockSectionHeader_Custom__4a2214
                                                (*plVar8,
                                                 _Method_UnityEngine_GameObject_GetComponent_UIButton____12e4a88
                                                ), lVar4 != 0)) {
                            lVar4 = *(long *)(lVar4 + 0xc0);
                            uVar5 = native_sub_432808(_EventDelegate_Callback_TypeInfo_12d72e8);
                            native_EventDelegate_Callback___ctor_54bd18
                                      (uVar5,param_1,
                                       _Method_TankEngineController_OnClickButtonRTankPao___12e7058,
                                       0);
                            uVar6 = native_sub_432808(_EventDelegate_TypeInfo_12d4590);
                            native_EventDelegate___ctor_de0bd0(uVar6,uVar5,0);
                            if (lVar4 != 0) {
                              native_System_Collections_Generic_List_int_____Add_d40c00
                                        (lVar4,uVar6,
                                         _Method_System_Collections_Generic_List_EventDelegate__Add___12dc740
                                        );
                              lVar4 = native_UnityEngine_GameObject__Find_8dead0
                                                (_StringLiteral_tankpaoshell_12f65c8,0);
                              if (lVar4 != 0) {
                                uVar5 = native_UnityEngine_GameObject__get_gameObject_8debb8
                                                  (lVar4,0);
                                puVar7 = (undefined8 *)(param_1 + 0x98);
                                *puVar7 = uVar5;
                                if (iRam0000000001345318 != 0) {
                                  puVar1 = (ulong *)(((ulong)puVar7 >> 0x12 & 0x7fff) * 8 +
                                                    0x138ecd8);
                                  do {
                                    cVar2 = '\x01';
                                    bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
                                    if (bVar3) {
                                      *puVar1 = *puVar1 | 1L << ((ulong)puVar7 >> 0xc & 0x3f);
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
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* TankEngineController$$OnClickButtonRTankPao @ 0x6e0174
 * void TankEngineController__OnClickButtonRTankPao (TankEngineController_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TankEngineController$$OnClickButtonRTankPao
   void TankEngineController__OnClickButtonRTankPao (TankEngineController_o* __this, const
   MethodInfo* method); */

void native_TankEngineController__OnClickButtonRTankPao_6e0174(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  float fVar5;
  
  if ((bRam000000000133f379 & 1) == 0) {
    native_sub_43273c(&Method_UnityEngine_Object_Instantiate_GameObject____12e5a68);
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    bRam000000000133f379 = 1;
  }
  if (*(long *)(param_1 + 0x98) != 0) {
    uVar4 = *(undefined8 *)(param_1 + 0xa0);
    uVar1 = native_UnityEngine_GameObject__get_transform_8de5c8(*(long *)(param_1 + 0x98),0);
    if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
      native_sub_4327ec(_UnityEngine_Object_TypeInfo_12d54e0);
    }
    lVar2 = native_UnityEngine_Object__Instantiate_GameObject__4a6564
                      (uVar4,uVar1,_Method_UnityEngine_Object_Instantiate_GameObject____12e5a68);
    if ((lVar2 != 0) &&
       (lVar3 = native_UnityEngine_GameObject__get_transform_8de5c8(lVar2,0), lVar3 != 0)) {
      native_UnityEngine_Transform__set_localPosition_7718a4(0,0,0,lVar3,0);
      native_UnityEngine_GameObject__SetActive_8de698(lVar2,1,0);
      if ((*(int *)(param_1 + 0xa8) != 0) || (*(int *)(param_1 + 0xb0) != 0)) {
        return;
      }
      *(undefined8 *)(param_1 + 0xa8) = 0x200000001;
      native_TankEngineController__CarbrakeActive_6e02e8(param_1,0);
      if (*(long *)(param_1 + 0x18) != 0) {
        native_UnityEngine_WheelCollider__set_motorTorque_dc5f70
                  (-*(float *)(param_1 + 0x70),*(long *)(param_1 + 0x18),0);
        if (*(long *)(param_1 + 0x20) != 0) {
          native_UnityEngine_WheelCollider__set_motorTorque_dc5f70
                    (-*(float *)(param_1 + 0x70),*(long *)(param_1 + 0x20),0);
          if (*(long *)(param_1 + 0x48) != 0) {
            native_UnityEngine_WheelCollider__set_motorTorque_dc5f70
                      (-*(float *)(param_1 + 0x70),*(long *)(param_1 + 0x48),0);
            lVar2 = *(long *)(param_1 + 0x50);
            if (lVar2 != 0) {
              fVar5 = *(float *)(param_1 + 0x70);
              if (pcRam00000000013443b0 == (code *)0x0) {
                pcRam00000000013443b0 = (code *)native_sub_4326f0(&UNK_00f360f0);
              }
                    /* WARNING: Could not recover jumptable at 0x00dc5fbc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
              (*pcRam00000000013443b0)(-fVar5,lVar2);
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



/* TankEngineController$$Update @ 0x6e0428
 * void TankEngineController__Update (TankEngineController_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TankEngineController$$Update
   void TankEngineController__Update (TankEngineController_o* __this, const MethodInfo* method); */

void native_TankEngineController__Update_6e0428
               (undefined1 param_1 [16],float param_2,float param_3,long param_4)

{
  char cVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  int iVar6;
  undefined4 uVar7;
  float fVar8;
  float fVar9;
  double dVar10;
  float fVar11;
  
  if ((bRam000000000133f37a & 1) == 0) {
    native_sub_43273c(&Method_UnityEngine_GameObject_GetComponent_UIButton____12e4a88);
    native_sub_43273c(&Method_UnityEngine_GameObject_GetComponent_VariableJoystick____12e4af0);
    native_sub_43273c(&System_Math_TypeInfo_12d51c0);
    native_sub_43273c(&PanelMainUIController_TypeInfo_12d5600);
    native_sub_43273c(&TankEngineController_TypeInfo_12d60f0);
    bRam000000000133f37a = 1;
  }
  if ((*(long *)(param_4 + 0x58) == 0) ||
     (lVar3 = native_UnityEngine_GameObject__GetComponent_BE2_BlockSectionHeader_Custom__4a2214
                        (*(long *)(param_4 + 0x58),
                         _Method_UnityEngine_GameObject_GetComponent_UIButton____12e4a88),
     lVar3 == 0)) goto LAB_006e1000;
  if (*(int *)(lVar3 + 0x80) == 2) {
    *(undefined4 *)(param_4 + 0x8c) = 1;
    if (*(long *)(param_4 + 0x68) == 0) goto LAB_006e1000;
    cVar1 = *(char *)(param_4 + 0x88);
    lVar3 = native_UnityEngine_GameObject__get_transform_8de5c8(*(long *)(param_4 + 0x68),0);
    if (cVar1 == '\0') {
      if (lVar3 == 0) goto LAB_006e1000;
      param_2 = 0.3;
    }
    else {
      if (lVar3 == 0) goto LAB_006e1000;
      param_2 = -0.3;
    }
    param_3 = 0.0;
    native_UnityEngine_Transform__Rotate_77235c(0,param_2,0,lVar3,1,0);
  }
  else if (*(int *)(param_4 + 0x8c) == 1) {
    *(undefined4 *)(param_4 + 0x8c) = 0;
    if (*(char *)(param_4 + 0x88) == '\0') {
      *(undefined1 *)(param_4 + 0x88) = 1;
    }
    else {
      *(undefined1 *)(param_4 + 0x88) = 0;
    }
  }
  iVar6 = *(int *)(param_4 + 0xa8);
  if (iVar6 != 0) goto LAB_006e0d74;
  if (*(long *)(param_4 + 0x78) == 0) goto LAB_006e1000;
  lVar3 = native_UnityEngine_GameObject__GetComponent_BE2_BlockSectionHeader_Custom__4a2214
                    (*(long *)(param_4 + 0x78),
                     _Method_UnityEngine_GameObject_GetComponent_VariableJoystick____12e4af0);
  if ((*(long *)(param_4 + 0x80) == 0) ||
     (lVar4 = native_UnityEngine_GameObject__GetComponent_BE2_BlockSectionHeader_Custom__4a2214
                        (*(long *)(param_4 + 0x80),
                         _Method_UnityEngine_GameObject_GetComponent_VariableJoystick____12e4af0),
     lVar3 == 0)) goto LAB_006e1000;
  native_Joystick__get_Direction_7f72a4(lVar3,0);
  if (-0.3 <= param_2) {
    native_Joystick__get_Direction_7f72a4(lVar3,0);
    dVar10 = (double)param_2;
    if (0.3 < dVar10) {
      if (((*(ushort *)(_PanelMainUIController_TypeInfo_12d5600 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(_PanelMainUIController_TypeInfo_12d5600 + 0xe0) == 0)) {
        native_sub_4327ec();
      }
      param_2 = SUB84(dVar10,0);
      *(undefined4 *)(*(long *)(_PanelMainUIController_TypeInfo_12d5600 + 0xb8) + 0x50) = 1;
      uVar5 = 0;
      goto LAB_006e0624;
    }
    if (((*(ushort *)(_PanelMainUIController_TypeInfo_12d5600 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(_PanelMainUIController_TypeInfo_12d5600 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    uVar2 = 0;
    param_2 = 0.0;
    *(undefined4 *)(*(long *)(_PanelMainUIController_TypeInfo_12d5600 + 0xb8) + 0x50) = 0;
    fVar11 = SUB84(dVar10,0);
  }
  else {
    if (((*(byte *)(_PanelMainUIController_TypeInfo_12d5600 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_PanelMainUIController_TypeInfo_12d5600 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    uVar5 = 1;
    *(undefined4 *)(*(long *)(_PanelMainUIController_TypeInfo_12d5600 + 0xb8) + 0x50) = 0xffffffff;
LAB_006e0624:
    uVar2 = native_Assets_Scripts_Tools_HjdBleTool__setIntegerSomeBit_7f7068(0,uVar5,1,0);
    native_Joystick__get_Direction_7f72a4(lVar3,0);
    fVar11 = param_2;
  }
  if (lVar4 == 0) goto LAB_006e1000;
  fVar8 = (float)native_Joystick__get_Direction_7f72a4(lVar4,0);
  if (-0.3 <= fVar8) {
    fVar8 = (float)native_Joystick__get_Direction_7f72a4(lVar4,0);
    fVar11 = 4.172325e-08;
    if (0.3 < fVar8) {
      if (((*(ushort *)(_PanelMainUIController_TypeInfo_12d5600 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(_PanelMainUIController_TypeInfo_12d5600 + 0xe0) == 0)) {
        fVar11 = 4.172325e-08;
        native_sub_4327ec();
      }
      lVar3 = *(long *)(_PanelMainUIController_TypeInfo_12d5600 + 0xb8);
      uVar7 = 0xffffffff;
      uVar5 = 3;
      goto LAB_006e0718;
    }
    if (((*(ushort *)(_PanelMainUIController_TypeInfo_12d5600 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(_PanelMainUIController_TypeInfo_12d5600 + 0xe0) == 0)) {
      fVar11 = 4.172325e-08;
      native_sub_4327ec();
    }
    fVar8 = 0.0;
    *(undefined4 *)(*(long *)(_PanelMainUIController_TypeInfo_12d5600 + 0xb8) + 0x4c) = 0;
  }
  else {
    if (((*(byte *)(_PanelMainUIController_TypeInfo_12d5600 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_PanelMainUIController_TypeInfo_12d5600 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    lVar3 = *(long *)(_PanelMainUIController_TypeInfo_12d5600 + 0xb8);
    uVar7 = 1;
    uVar5 = 2;
LAB_006e0718:
    *(undefined4 *)(lVar3 + 0x4c) = uVar7;
    uVar2 = native_Assets_Scripts_Tools_HjdBleTool__setIntegerSomeBit_7f7068(uVar2,uVar5,1,0);
    fVar8 = (float)native_Joystick__get_Direction_7f72a4(lVar4,0);
  }
  switch(uVar2 & 0xff) {
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
    lVar3 = _PanelMainUIController_TypeInfo_12d5600;
    *(float *)(*(long *)(_PanelMainUIController_TypeInfo_12d5600 + 0xb8) + 0x94) = ABS(param_2);
    *(float *)(*(long *)(lVar3 + 0xb8) + 0x98) = ABS(param_2);
    native_TankEngineController__CarbrakeActive_6e02e8(param_4,0);
    lVar3 = *(long *)(param_4 + 0x18);
    if (lVar3 == 0) goto LAB_006e1000;
    fVar8 = *(float *)(param_4 + 0x70);
    fVar11 = 1.5;
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
    lVar3 = _PanelMainUIController_TypeInfo_12d5600;
    *(float *)(*(long *)(_PanelMainUIController_TypeInfo_12d5600 + 0xb8) + 0x94) = ABS(param_2);
    *(float *)(*(long *)(lVar3 + 0xb8) + 0x98) = ABS(param_2);
    native_TankEngineController__CarbrakeActive_6e02e8(param_4,0);
    lVar3 = *(long *)(param_4 + 0x18);
    if (lVar3 == 0) goto LAB_006e1000;
    fVar8 = *(float *)(param_4 + 0x70);
    fVar11 = -1.5;
    break;
  case 4:
  case 0xc:
    if (((*(byte *)(_System_Math_TypeInfo_12d51c0 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_System_Math_TypeInfo_12d51c0 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    fVar8 = ABS(fVar8);
    if (((*(byte *)(_PanelMainUIController_TypeInfo_12d5600 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_PanelMainUIController_TypeInfo_12d5600 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    lVar3 = _PanelMainUIController_TypeInfo_12d5600;
    *(float *)(*(long *)(_PanelMainUIController_TypeInfo_12d5600 + 0xb8) + 0x94) = fVar8;
    *(float *)(*(long *)(lVar3 + 0xb8) + 0x98) = fVar8;
    if (*(long *)(param_4 + 0x60) == 0) goto LAB_006e1000;
    lVar3 = native_UnityEngine_GameObject__get_transform_8de5c8(*(long *)(param_4 + 0x60),0);
    fVar9 = (float)native_UnityEngine_Vector3__get_up_7628a0(0);
    if (lVar3 == 0) goto LAB_006e1000;
    fVar8 = -fVar8;
    fVar9 = fVar9 * fVar8;
    fVar11 = fVar11 * fVar8;
    param_3 = param_3 * fVar8;
    goto code_r0x006e0c44;
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
    lVar3 = _PanelMainUIController_TypeInfo_12d5600;
    *(float *)(*(long *)(_PanelMainUIController_TypeInfo_12d5600 + 0xb8) + 0x94) = ABS(fVar8);
    *(float *)(*(long *)(lVar3 + 0xb8) + 0x98) = ABS(fVar8);
    native_TankEngineController__CarbrakeActive_6e02e8(param_4,0);
    if (*(long *)(param_4 + 0x18) == 0) goto LAB_006e1000;
    native_UnityEngine_WheelCollider__set_motorTorque_dc5f70(0,*(long *)(param_4 + 0x18),0);
    if (*(long *)(param_4 + 0x28) == 0) goto LAB_006e1000;
    native_UnityEngine_WheelCollider__set_motorTorque_dc5f70(0,*(long *)(param_4 + 0x28),0);
    if (*(long *)(param_4 + 0x38) == 0) goto LAB_006e1000;
    native_UnityEngine_WheelCollider__set_motorTorque_dc5f70(0,*(long *)(param_4 + 0x38),0);
    if (*(long *)(param_4 + 0x48) == 0) goto LAB_006e1000;
    native_UnityEngine_WheelCollider__set_motorTorque_dc5f70(0,*(long *)(param_4 + 0x48),0);
    lVar3 = *(long *)(param_4 + 0x20);
    if (lVar3 == 0) goto LAB_006e1000;
    fVar9 = *(float *)(param_4 + 0x70);
    fVar11 = 6.0;
    goto code_r0x006e0b6c;
  case 6:
    if (((*(byte *)(_System_Math_TypeInfo_12d51c0 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_System_Math_TypeInfo_12d51c0 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    if (((*(byte *)(_PanelMainUIController_TypeInfo_12d5600 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_PanelMainUIController_TypeInfo_12d5600 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    lVar3 = _PanelMainUIController_TypeInfo_12d5600;
    *(float *)(*(long *)(_PanelMainUIController_TypeInfo_12d5600 + 0xb8) + 0x94) = ABS(fVar8);
    *(float *)(*(long *)(lVar3 + 0xb8) + 0x98) = ABS(fVar8);
    native_TankEngineController__CarbrakeActive_6e02e8(param_4,0);
    if (*(long *)(param_4 + 0x18) == 0) goto LAB_006e1000;
    native_UnityEngine_WheelCollider__set_motorTorque_dc5f70(0,*(long *)(param_4 + 0x18),0);
    if (*(long *)(param_4 + 0x28) == 0) goto LAB_006e1000;
    native_UnityEngine_WheelCollider__set_motorTorque_dc5f70(0,*(long *)(param_4 + 0x28),0);
    if (*(long *)(param_4 + 0x38) == 0) goto LAB_006e1000;
    native_UnityEngine_WheelCollider__set_motorTorque_dc5f70(0,*(long *)(param_4 + 0x38),0);
    if (*(long *)(param_4 + 0x48) == 0) goto LAB_006e1000;
    native_UnityEngine_WheelCollider__set_motorTorque_dc5f70(0,*(long *)(param_4 + 0x48),0);
    lVar3 = *(long *)(param_4 + 0x20);
    if (lVar3 == 0) goto LAB_006e1000;
    fVar9 = *(float *)(param_4 + 0x70);
    fVar11 = -6.0;
code_r0x006e0b6c:
    fVar11 = ABS(fVar8) * fVar11;
    goto code_r0x006e0b70;
  case 8:
    if (((*(byte *)(_System_Math_TypeInfo_12d51c0 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_System_Math_TypeInfo_12d51c0 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    fVar8 = ABS(fVar8);
    if (((*(byte *)(_PanelMainUIController_TypeInfo_12d5600 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_PanelMainUIController_TypeInfo_12d5600 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    lVar3 = _PanelMainUIController_TypeInfo_12d5600;
    *(float *)(*(long *)(_PanelMainUIController_TypeInfo_12d5600 + 0xb8) + 0x94) = fVar8;
    *(float *)(*(long *)(lVar3 + 0xb8) + 0x98) = fVar8;
    if (*(long *)(param_4 + 0x60) == 0) goto LAB_006e1000;
    lVar3 = native_UnityEngine_GameObject__get_transform_8de5c8(*(long *)(param_4 + 0x60),0);
    fVar9 = (float)native_UnityEngine_Vector3__get_up_7628a0(0);
    if (lVar3 == 0) goto LAB_006e1000;
    fVar9 = fVar8 * fVar9;
    fVar11 = fVar8 * fVar11;
    param_3 = fVar8 * param_3;
code_r0x006e0c44:
    native_UnityEngine_Transform__Rotate_7724a0(fVar9,fVar11,param_3,lVar3,0);
    goto LAB_006e0d70;
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
    lVar3 = _PanelMainUIController_TypeInfo_12d5600;
    *(float *)(*(long *)(_PanelMainUIController_TypeInfo_12d5600 + 0xb8) + 0x94) = ABS(fVar8);
    *(float *)(*(long *)(lVar3 + 0xb8) + 0x98) = ABS(fVar8);
    native_TankEngineController__CarbrakeActive_6e02e8(param_4,0);
    lVar3 = *(long *)(param_4 + 0x18);
    if (lVar3 == 0) goto LAB_006e1000;
    fVar11 = *(float *)(param_4 + 0x70);
    fVar9 = 6.0;
    goto code_r0x006e0cc8;
  case 10:
    if (((*(byte *)(_System_Math_TypeInfo_12d51c0 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_System_Math_TypeInfo_12d51c0 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    if (((*(byte *)(_PanelMainUIController_TypeInfo_12d5600 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_PanelMainUIController_TypeInfo_12d5600 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    lVar3 = _PanelMainUIController_TypeInfo_12d5600;
    *(float *)(*(long *)(_PanelMainUIController_TypeInfo_12d5600 + 0xb8) + 0x94) = ABS(fVar8);
    *(float *)(*(long *)(lVar3 + 0xb8) + 0x98) = ABS(fVar8);
    native_TankEngineController__CarbrakeActive_6e02e8(param_4,0);
    lVar3 = *(long *)(param_4 + 0x18);
    if (lVar3 == 0) goto LAB_006e1000;
    fVar11 = *(float *)(param_4 + 0x70);
    fVar9 = -6.0;
code_r0x006e0cc8:
    fVar9 = ABS(fVar8) * fVar9;
    native_UnityEngine_WheelCollider__set_motorTorque_dc5f70(fVar9 * fVar11,lVar3,0);
    if (*(long *)(param_4 + 0x28) == 0) goto LAB_006e1000;
    native_UnityEngine_WheelCollider__set_motorTorque_dc5f70
              (fVar9 * *(float *)(param_4 + 0x70),*(long *)(param_4 + 0x28),0);
    if (*(long *)(param_4 + 0x38) == 0) goto LAB_006e1000;
    native_UnityEngine_WheelCollider__set_motorTorque_dc5f70
              (fVar9 * *(float *)(param_4 + 0x70),*(long *)(param_4 + 0x38),0);
    if (*(long *)(param_4 + 0x48) == 0) goto LAB_006e1000;
    native_UnityEngine_WheelCollider__set_motorTorque_dc5f70
              (fVar9 * *(float *)(param_4 + 0x70),*(long *)(param_4 + 0x48),0);
    if (*(long *)(param_4 + 0x20) == 0) goto LAB_006e1000;
    native_UnityEngine_WheelCollider__set_motorTorque_dc5f70(0,*(long *)(param_4 + 0x20),0);
    if (*(long *)(param_4 + 0x30) == 0) goto LAB_006e1000;
    native_UnityEngine_WheelCollider__set_motorTorque_dc5f70(0,*(long *)(param_4 + 0x30),0);
    if (*(long *)(param_4 + 0x40) == 0) goto LAB_006e1000;
    native_UnityEngine_WheelCollider__set_motorTorque_dc5f70(0,*(long *)(param_4 + 0x40),0);
    lVar3 = *(long *)(param_4 + 0x50);
    if (lVar3 == 0) goto LAB_006e1000;
    fVar11 = 0.0;
    goto code_r0x006e0d68;
  default:
    if (((*(byte *)(_PanelMainUIController_TypeInfo_12d5600 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_PanelMainUIController_TypeInfo_12d5600 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    lVar3 = _PanelMainUIController_TypeInfo_12d5600;
    *(undefined4 *)(*(long *)(_PanelMainUIController_TypeInfo_12d5600 + 0xb8) + 0x94) = 0;
    *(undefined4 *)(*(long *)(lVar3 + 0xb8) + 0x98) = 0;
    if (*(long *)(param_4 + 0x18) == 0) goto LAB_006e1000;
    native_UnityEngine_WheelCollider__set_motorTorque_dc5f70(0,*(long *)(param_4 + 0x18),0);
    if (*(long *)(param_4 + 0x28) == 0) goto LAB_006e1000;
    native_UnityEngine_WheelCollider__set_motorTorque_dc5f70(0,*(long *)(param_4 + 0x28),0);
    if (*(long *)(param_4 + 0x38) == 0) goto LAB_006e1000;
    native_UnityEngine_WheelCollider__set_motorTorque_dc5f70(0,*(long *)(param_4 + 0x38),0);
    if (*(long *)(param_4 + 0x20) == 0) goto LAB_006e1000;
    native_UnityEngine_WheelCollider__set_motorTorque_dc5f70(0,*(long *)(param_4 + 0x20),0);
    if (*(long *)(param_4 + 0x30) == 0) goto LAB_006e1000;
    native_UnityEngine_WheelCollider__set_motorTorque_dc5f70(0,*(long *)(param_4 + 0x30),0);
    if (*(long *)(param_4 + 0x40) == 0) goto LAB_006e1000;
    native_UnityEngine_WheelCollider__set_motorTorque_dc5f70(0,*(long *)(param_4 + 0x40),0);
    if (*(long *)(param_4 + 0x48) == 0) goto LAB_006e1000;
    native_UnityEngine_WheelCollider__set_motorTorque_dc5f70(0,*(long *)(param_4 + 0x48),0);
    if (*(long *)(param_4 + 0x50) == 0) goto LAB_006e1000;
    native_UnityEngine_WheelCollider__set_motorTorque_dc5f70(0,*(long *)(param_4 + 0x50),0);
    native_TankEngineController__CarbrakeActive_6e02e8(param_4,1);
    goto LAB_006e0d70;
  }
  fVar11 = ABS(param_2) * fVar11;
  native_UnityEngine_WheelCollider__set_motorTorque_dc5f70(fVar11 * fVar8,lVar3,0);
  if (*(long *)(param_4 + 0x28) != 0) {
    native_UnityEngine_WheelCollider__set_motorTorque_dc5f70
              (fVar11 * *(float *)(param_4 + 0x70),*(long *)(param_4 + 0x28),0);
    if (*(long *)(param_4 + 0x38) != 0) {
      native_UnityEngine_WheelCollider__set_motorTorque_dc5f70
                (fVar11 * *(float *)(param_4 + 0x70),*(long *)(param_4 + 0x38),0);
      if (*(long *)(param_4 + 0x48) != 0) {
        native_UnityEngine_WheelCollider__set_motorTorque_dc5f70
                  (fVar11 * *(float *)(param_4 + 0x70),*(long *)(param_4 + 0x48),0);
        lVar3 = *(long *)(param_4 + 0x20);
        if (lVar3 != 0) {
          fVar9 = *(float *)(param_4 + 0x70);
code_r0x006e0b70:
          native_UnityEngine_WheelCollider__set_motorTorque_dc5f70(fVar11 * fVar9,lVar3,0);
          if (*(long *)(param_4 + 0x30) != 0) {
            native_UnityEngine_WheelCollider__set_motorTorque_dc5f70
                      (fVar11 * *(float *)(param_4 + 0x70),*(long *)(param_4 + 0x30),0);
            if (*(long *)(param_4 + 0x40) != 0) {
              native_UnityEngine_WheelCollider__set_motorTorque_dc5f70
                        (fVar11 * *(float *)(param_4 + 0x70),*(long *)(param_4 + 0x40),0);
              lVar3 = *(long *)(param_4 + 0x50);
              if (lVar3 != 0) {
                fVar11 = fVar11 * *(float *)(param_4 + 0x70);
code_r0x006e0d68:
                native_UnityEngine_WheelCollider__set_motorTorque_dc5f70(fVar11,lVar3,0);
LAB_006e0d70:
                iVar6 = *(int *)(param_4 + 0xa8);
LAB_006e0d74:
                if (iVar6 == 2) {
                  if (*(int *)(param_4 + 0xac) != 0) goto LAB_006e0e74;
                  *(undefined4 *)(param_4 + 0xa8) = 0;
                  if (*(long *)(param_4 + 0x18) != 0) {
                    native_UnityEngine_WheelCollider__set_motorTorque_dc5f70
                              (0,*(long *)(param_4 + 0x18),0);
                    if (*(long *)(param_4 + 0x20) != 0) {
                      native_UnityEngine_WheelCollider__set_motorTorque_dc5f70
                                (0,*(long *)(param_4 + 0x20),0);
                      if (*(long *)(param_4 + 0x48) != 0) {
                        native_UnityEngine_WheelCollider__set_motorTorque_dc5f70
                                  (0,*(long *)(param_4 + 0x48),0);
                        if (*(long *)(param_4 + 0x50) != 0) {
                          native_UnityEngine_WheelCollider__set_motorTorque_dc5f70
                                    (0,*(long *)(param_4 + 0x50),0);
                          native_TankEngineController__CarbrakeActive_6e02e8(param_4,1);
                          *(undefined4 *)(param_4 + 0xb0) = 4;
                          goto LAB_006e0e74;
                        }
                      }
                    }
                  }
                }
                else {
                  if ((iVar6 != 1) || (*(int *)(param_4 + 0xac) != 0)) {
LAB_006e0e74:
                    lVar3 = native_TankEngineController__gethaomiao_6e1004();
                    if (((*(byte *)(_TankEngineController_TypeInfo_12d60f0 + 0x133) >> 2 & 1) != 0)
                       && (*(int *)(_TankEngineController_TypeInfo_12d60f0 + 0xe0) == 0)) {
                      native_sub_4327ec(_TankEngineController_TypeInfo_12d60f0);
                    }
                    if (99 < lVar3 - **(long **)(_TankEngineController_TypeInfo_12d60f0 + 0xb8)) {
                      uVar5 = native_TankEngineController__gethaomiao_6e1004();
                      if (((*(byte *)(_TankEngineController_TypeInfo_12d60f0 + 0x133) >> 2 & 1) != 0
                          ) && (*(int *)(_TankEngineController_TypeInfo_12d60f0 + 0xe0) == 0)) {
                        native_sub_4327ec(_TankEngineController_TypeInfo_12d60f0);
                      }
                      **(undefined8 **)(_TankEngineController_TypeInfo_12d60f0 + 0xb8) = uVar5;
                      if (0 < *(int *)(param_4 + 0xb0)) {
                        *(int *)(param_4 + 0xb0) = *(int *)(param_4 + 0xb0) + -1;
                      }
                      if (0 < *(int *)(param_4 + 0xac)) {
                        *(int *)(param_4 + 0xac) = *(int *)(param_4 + 0xac) + -1;
                      }
                    }
                    return;
                  }
                  *(undefined8 *)(param_4 + 0xa8) = 0x200000002;
                  native_TankEngineController__CarbrakeActive_6e02e8(param_4,0);
                  if (*(long *)(param_4 + 0x18) != 0) {
                    native_UnityEngine_WheelCollider__set_motorTorque_dc5f70
                              (*(float *)(param_4 + 0x70) + *(float *)(param_4 + 0x70),
                               *(long *)(param_4 + 0x18),0);
                    if (*(long *)(param_4 + 0x20) != 0) {
                      native_UnityEngine_WheelCollider__set_motorTorque_dc5f70
                                (*(float *)(param_4 + 0x70) + *(float *)(param_4 + 0x70),
                                 *(long *)(param_4 + 0x20),0);
                      if (*(long *)(param_4 + 0x48) != 0) {
                        native_UnityEngine_WheelCollider__set_motorTorque_dc5f70
                                  (*(float *)(param_4 + 0x70) + *(float *)(param_4 + 0x70),
                                   *(long *)(param_4 + 0x48),0);
                        if (*(long *)(param_4 + 0x50) != 0) {
                          native_UnityEngine_WheelCollider__set_motorTorque_dc5f70
                                    (*(float *)(param_4 + 0x70) + *(float *)(param_4 + 0x70),
                                     *(long *)(param_4 + 0x50),0);
                          goto LAB_006e0e74;
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
LAB_006e1000:
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* TankEngineController$$gethaomiao @ 0x6e1004
 * int64_t TankEngineController__gethaomiao (TankEngineController_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TankEngineController$$gethaomiao
   int64_t TankEngineController__gethaomiao (TankEngineController_o* __this, const MethodInfo*
   method); */

long native_TankEngineController__gethaomiao_6e1004(void)

{
  long lVar1;
  undefined8 uStack_18;
  
  if ((bRam000000000133f37b & 1) == 0) {
    native_sub_43273c(&System_DateTime_TypeInfo_12d42f8);
    bRam000000000133f37b = 1;
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



/* TankEngineController$$doSomething @ 0x6e10b8
 * void TankEngineController__doSomething (TankEngineController_o* __this, const MethodInfo* method); */

/* TankEngineController$$doSomething
   void TankEngineController__doSomething (TankEngineController_o* __this, const MethodInfo*
   method); */

void native_TankEngineController__doSomething_6e10b8(long param_1)

{
  if (0 < *(int *)(param_1 + 0xb0)) {
    *(int *)(param_1 + 0xb0) = *(int *)(param_1 + 0xb0) + -1;
  }
  if (0 < *(int *)(param_1 + 0xac)) {
    *(int *)(param_1 + 0xac) = *(int *)(param_1 + 0xac) + -1;
  }
  return;
}



/* TankEngineController$$CarbrakeActive @ 0x6e02e8
 * void TankEngineController__CarbrakeActive (TankEngineController_o* __this, bool isBraking, const MethodInfo* method); */

/* TankEngineController$$CarbrakeActive
   void TankEngineController__CarbrakeActive (TankEngineController_o* __this, bool isBraking, const
   MethodInfo* method); */

void native_TankEngineController__CarbrakeActive_6e02e8(long param_1,ulong param_2)

{
  long lVar1;
  float fVar2;
  
  fVar2 = 0.0;
  if ((param_2 & 1) != 0) {
    fVar2 = *(float *)(param_1 + 0x70) * 10.0;
  }
  if (*(long *)(param_1 + 0x18) != 0) {
    native_UnityEngine_WheelCollider__set_brakeTorque_dc5fc0(fVar2,*(long *)(param_1 + 0x18),0);
    fVar2 = 0.0;
    if ((param_2 & 1) != 0) {
      fVar2 = *(float *)(param_1 + 0x70) * 10.0;
    }
    if (*(long *)(param_1 + 0x28) != 0) {
      native_UnityEngine_WheelCollider__set_brakeTorque_dc5fc0(fVar2,*(long *)(param_1 + 0x28),0);
      fVar2 = 0.0;
      if ((param_2 & 1) != 0) {
        fVar2 = *(float *)(param_1 + 0x70) * 10.0;
      }
      if (*(long *)(param_1 + 0x38) != 0) {
        native_UnityEngine_WheelCollider__set_brakeTorque_dc5fc0(fVar2,*(long *)(param_1 + 0x38),0);
        fVar2 = 0.0;
        if ((param_2 & 1) != 0) {
          fVar2 = *(float *)(param_1 + 0x70) * 10.0;
        }
        if (*(long *)(param_1 + 0x48) != 0) {
          native_UnityEngine_WheelCollider__set_brakeTorque_dc5fc0
                    (fVar2,*(long *)(param_1 + 0x48),0);
          fVar2 = 0.0;
          if ((param_2 & 1) != 0) {
            fVar2 = *(float *)(param_1 + 0x70) * 10.0;
          }
          if (*(long *)(param_1 + 0x20) != 0) {
            native_UnityEngine_WheelCollider__set_brakeTorque_dc5fc0
                      (fVar2,*(long *)(param_1 + 0x20),0);
            fVar2 = 0.0;
            if ((param_2 & 1) != 0) {
              fVar2 = *(float *)(param_1 + 0x70) * 10.0;
            }
            if (*(long *)(param_1 + 0x30) != 0) {
              native_UnityEngine_WheelCollider__set_brakeTorque_dc5fc0
                        (fVar2,*(long *)(param_1 + 0x30),0);
              fVar2 = 0.0;
              if ((param_2 & 1) != 0) {
                fVar2 = *(float *)(param_1 + 0x70) * 10.0;
              }
              if (*(long *)(param_1 + 0x40) != 0) {
                native_UnityEngine_WheelCollider__set_brakeTorque_dc5fc0
                          (fVar2,*(long *)(param_1 + 0x40),0);
                lVar1 = *(long *)(param_1 + 0x50);
                fVar2 = 0.0;
                if ((param_2 & 1) != 0) {
                  fVar2 = *(float *)(param_1 + 0x70) * 10.0;
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



/* TankEngineController$$.ctor @ 0x6e10dc
 * void TankEngineController___ctor (TankEngineController_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TankEngineController$$.ctor
   void TankEngineController___ctor (TankEngineController_o* __this, const MethodInfo* method); */

undefined1  [16] native_TankEngineController___ctor_6e10dc(ulong param_1)

{
  undefined1 auVar1 [16];
  
  *(undefined4 *)(param_1 + 0x70) = 0x42c80000;
  *(undefined1 *)(param_1 + 0x88) = 1;
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



/* TankEngineController$$.cctor @ 0x6e10f4
 * void TankEngineController___cctor (const MethodInfo* method); */

/* TankEngineController$$.cctor
   void TankEngineController___cctor (const MethodInfo* method); */

void native_TankEngineController___cctor_6e10f4(void)

{
  return;
}


