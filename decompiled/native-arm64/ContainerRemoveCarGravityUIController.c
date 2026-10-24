/* ARM64 IL2CPP native pseudocode from Ghidra.
 * Recovered implementation, not original C# source.
 * Function boundaries follow the IL2CPP method address table. */


/* ContainerRemoveCarGravityUIController$$Start @ 0xde07c4
 * void ContainerRemoveCarGravityUIController__Start (ContainerRemoveCarGravityUIController_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ContainerRemoveCarGravityUIController$$Start
   void ContainerRemoveCarGravityUIController__Start (ContainerRemoveCarGravityUIController_o*
   __this, const MethodInfo* method); */

void native_ContainerRemoveCarGravityUIController__Start_de07c4(long param_1)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  byte bVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  
  if ((bRam0000000001346e92 & 1) == 0) {
    native_sub_43273c(&StringLiteral_ButtonGravityStart_12ec8c0);
    native_sub_43273c(&StringLiteral_gyrohandle_12f49e8);
    bRam0000000001346e92 = 1;
  }
  uVar5 = native_UnityEngine_GameObject__Find_8dead0(_StringLiteral_ButtonGravityStart_12ec8c0,0);
  *(undefined8 *)(param_1 + 0x48) = uVar5;
  native_sub_4326e0((undefined8 *)(param_1 + 0x48),uVar5);
  native_UnityEngine_Screen__set_sleepTimeout_76a768(0xffffffff,0);
  uVar5 = native_UnityEngine_GameObject__Find_8dead0(_StringLiteral_gyrohandle_12f49e8,0);
  *(undefined8 *)(param_1 + 0x58) = uVar5;
  native_sub_4326e0(param_1 + 0x58);
  bVar4 = native_UnityEngine_SystemInfo__get_supportsGyroscope_76df70(0);
  *(byte *)(param_1 + 0x68) = bVar4 & 1;
  uVar5 = native_UnityEngine_Input__get_gyro_dbe130(0);
  *(undefined8 *)(param_1 + 0x60) = uVar5;
  native_sub_4326e0(param_1 + 0x60);
  lVar6 = native_UnityEngine_Input__get_gyro_dbe130(0);
  if (lVar6 != 0) {
    native_UnityEngine_Gyroscope__set_enabled_dbd7f8(lVar6,1,0);
    lVar6 = native_UnityEngine_Input__get_gyro_dbe130(0);
    if (lVar6 != 0) {
      native_UnityEngine_Gyroscope__get_gravity_dbd7e8(lVar6,0);
      lVar6 = native_UnityEngine_Input__get_gyro_dbe130(0);
      if (lVar6 != 0) {
        native_UnityEngine_Gyroscope__get_rotationRate_dbd7d8(lVar6,0);
        lVar6 = native_UnityEngine_Input__get_gyro_dbe130(0);
        if (lVar6 != 0) {
          native_UnityEngine_Gyroscope__get_rotationRateUnbiased_dbd7e0(lVar6,0);
          lVar6 = native_UnityEngine_Input__get_gyro_dbe130(0);
          if (lVar6 != 0) {
            native_UnityEngine_Gyroscope__set_updateInterval_dbd848(0x3dcccccd,lVar6,0);
            lVar6 = native_UnityEngine_Input__get_gyro_dbe130(0);
            if (lVar6 != 0) {
              native_UnityEngine_Gyroscope__get_userAcceleration_dbd7f0(lVar6,0);
              if ((bRam0000000001346e93 & 1) == 0) {
                native_sub_43273c(&EventDelegate_Callback_TypeInfo_12d72e8);
                native_sub_43273c(&Method_UnityEngine_Component_GetComponent_UISprite____12e2c18);
                native_sub_43273c(&
                                  Method_ContainerRemoveCarGravityUIController_OnClickButtonBlesetting___12e3078
                                 );
                native_sub_43273c(&
                                  Method_ContainerRemoveCarGravityUIController_OnClickButtonGravityStart___12e3080
                                 );
                native_sub_43273c(&
                                  Method_ContainerRemoveCarGravityUIController_OnClickButtonResult___12e3088
                                 );
                native_sub_43273c(&EventDelegate_TypeInfo_12d4590);
                native_sub_43273c(&Method_UnityEngine_GameObject_GetComponent_UIButton____12e4a88);
                native_sub_43273c(&
                                  Method_System_Collections_Generic_List_EventDelegate__Add___12dc740
                                 );
                native_sub_43273c(&StringLiteral_bg_12f3ba0);
                bRam0000000001346e93 = 1;
              }
              if (*(long *)(param_1 + 0x48) != 0) {
                lVar6 = native_UnityEngine_GameObject__GetComponent_BE2_BlockSectionHeader_Custom__4a2214
                                  (*(long *)(param_1 + 0x48),
                                   _Method_UnityEngine_GameObject_GetComponent_UIButton____12e4a88);
                if (lVar6 != 0) {
                  lVar6 = *(long *)(lVar6 + 0xc0);
                  uVar5 = native_sub_432808(_EventDelegate_Callback_TypeInfo_12d72e8);
                  native_EventDelegate_Callback___ctor_54bd18
                            (uVar5,param_1,
                             _Method_ContainerRemoveCarGravityUIController_OnClickButtonGravityStart___12e3080
                             ,0);
                  uVar7 = native_sub_432808(_EventDelegate_TypeInfo_12d4590);
                  native_System_Object___ctor_ad2798(uVar7,0);
                  native_EventDelegate__Set_dedf08(uVar7,uVar5);
                  if (lVar6 != 0) {
                    native_System_Collections_Generic_List_int_____Add_d40c00
                              (lVar6,uVar7,
                               _Method_System_Collections_Generic_List_EventDelegate__Add___12dc740)
                    ;
                    if ((*(long *)(param_1 + 0x48) != 0) &&
                       (lVar6 = native_UnityEngine_GameObject__get_transform_8de5c8
                                          (*(long *)(param_1 + 0x48),0), lVar6 != 0)) {
                      lVar6 = native_UnityEngine_Transform__FindChild_772e3c
                                        (lVar6,_StringLiteral_bg_12f3ba0,0);
                      if (lVar6 != 0) {
                        uVar5 = native_UnityEngine_Component__get_gameObject_8da66c(lVar6,0);
                        *(undefined8 *)(param_1 + 0x50) = uVar5;
                        native_sub_4326e0((undefined8 *)(param_1 + 0x50),uVar5);
                        if ((*(long *)(param_1 + 0x80) != 0) &&
                           (lVar6 = native_UnityEngine_GameObject__GetComponent_BE2_BlockSectionHeader_Custom__4a2214
                                              (*(long *)(param_1 + 0x80),
                                               _Method_UnityEngine_GameObject_GetComponent_UIButton____12e4a88
                                              ), lVar6 != 0)) {
                          lVar6 = *(long *)(lVar6 + 0xc0);
                          uVar5 = native_sub_432808(_EventDelegate_Callback_TypeInfo_12d72e8);
                          native_EventDelegate_Callback___ctor_54bd18
                                    (uVar5,param_1,
                                     _Method_ContainerRemoveCarGravityUIController_OnClickButtonResult___12e3088
                                     ,0);
                          uVar7 = native_sub_432808(_EventDelegate_TypeInfo_12d4590);
                          native_System_Object___ctor_ad2798(uVar7,0);
                          native_EventDelegate__Set_dedf08(uVar7,uVar5);
                          if (lVar6 != 0) {
                            native_System_Collections_Generic_List_int_____Add_d40c00
                                      (lVar6,uVar7,
                                       _Method_System_Collections_Generic_List_EventDelegate__Add___12dc740
                                      );
                            if ((*(long *)(param_1 + 0x78) != 0) &&
                               (lVar6 = native_UnityEngine_GameObject__GetComponent_BE2_BlockSectionHeader_Custom__4a2214
                                                  (*(long *)(param_1 + 0x78),
                                                                                                      
                                                  _Method_UnityEngine_GameObject_GetComponent_UIButton____12e4a88
                                                  ), lVar6 != 0)) {
                              lVar6 = *(long *)(lVar6 + 0xc0);
                              uVar5 = native_sub_432808(_EventDelegate_Callback_TypeInfo_12d72e8);
                              native_EventDelegate_Callback___ctor_54bd18
                                        (uVar5,param_1,
                                         _Method_ContainerRemoveCarGravityUIController_OnClickButtonBlesetting___12e3078
                                         ,0);
                              uVar7 = native_sub_432808(_EventDelegate_TypeInfo_12d4590);
                              native_System_Object___ctor_ad2798(uVar7,0);
                              native_EventDelegate__Set_dedf08(uVar7,uVar5);
                              if (lVar6 != 0) {
                                native_System_Collections_Generic_List_int_____Add_d40c00
                                          (lVar6,uVar7,
                                           _Method_System_Collections_Generic_List_EventDelegate__Add___12dc740
                                          );
                                if (((*(long *)(param_1 + 0x78) != 0) &&
                                    (lVar6 = native_UnityEngine_GameObject__get_transform_8de5c8
                                                       (*(long *)(param_1 + 0x78),0), lVar6 != 0))
                                   && (lVar6 = native_UnityEngine_Transform__FindChild_772e3c
                                                         (lVar6,_StringLiteral_bg_12f3ba0,0),
                                      lVar6 != 0)) {
                                  uVar5 = native_UnityEngine_Component__GetComponent_ActiveAnimation__49daec
                                                    (lVar6,
                                                  _Method_UnityEngine_Component_GetComponent_UISprite____12e2c18
                                                  );
                                  puVar8 = (undefined8 *)(param_1 + 0x40);
                                  *puVar8 = uVar5;
                                  if (iRam0000000001345318 != 0) {
                                    puVar1 = (ulong *)(((ulong)puVar8 >> 0x12 & 0x7fff) * 8 +
                                                      0x138ecd8);
                                    do {
                                      cVar2 = '\x01';
                                      bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
                                      if (bVar3) {
                                        *puVar1 = *puVar1 | 1L << ((ulong)puVar8 >> 0xc & 0x3f);
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
                    /* WARNING: Subroutine does not return */
              native_sub_432810();
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* ContainerRemoveCarGravityUIController$$InitButtonEvent @ 0xde0918
 * void ContainerRemoveCarGravityUIController__InitButtonEvent (ContainerRemoveCarGravityUIController_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ContainerRemoveCarGravityUIController$$InitButtonEvent
   void ContainerRemoveCarGravityUIController__InitButtonEvent
   (ContainerRemoveCarGravityUIController_o* __this, const MethodInfo* method); */

void native_ContainerRemoveCarGravityUIController__InitButtonEvent_de0918(long param_1)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  
  if ((bRam0000000001346e93 & 1) == 0) {
    native_sub_43273c(&EventDelegate_Callback_TypeInfo_12d72e8);
    native_sub_43273c(&Method_UnityEngine_Component_GetComponent_UISprite____12e2c18);
    native_sub_43273c(&
                      Method_ContainerRemoveCarGravityUIController_OnClickButtonBlesetting___12e3078
                     );
    native_sub_43273c(&
                      Method_ContainerRemoveCarGravityUIController_OnClickButtonGravityStart___12e3080
                     );
    native_sub_43273c(&Method_ContainerRemoveCarGravityUIController_OnClickButtonResult___12e3088);
    native_sub_43273c(&EventDelegate_TypeInfo_12d4590);
    native_sub_43273c(&Method_UnityEngine_GameObject_GetComponent_UIButton____12e4a88);
    native_sub_43273c(&Method_System_Collections_Generic_List_EventDelegate__Add___12dc740);
    native_sub_43273c(&StringLiteral_bg_12f3ba0);
    bRam0000000001346e93 = 1;
  }
  if (*(long *)(param_1 + 0x48) != 0) {
    lVar4 = native_UnityEngine_GameObject__GetComponent_BE2_BlockSectionHeader_Custom__4a2214
                      (*(long *)(param_1 + 0x48),
                       _Method_UnityEngine_GameObject_GetComponent_UIButton____12e4a88);
    if (lVar4 != 0) {
      lVar4 = *(long *)(lVar4 + 0xc0);
      uVar5 = native_sub_432808(_EventDelegate_Callback_TypeInfo_12d72e8);
      native_EventDelegate_Callback___ctor_54bd18
                (uVar5,param_1,
                 _Method_ContainerRemoveCarGravityUIController_OnClickButtonGravityStart___12e3080,0
                );
      uVar6 = native_sub_432808(_EventDelegate_TypeInfo_12d4590);
      native_System_Object___ctor_ad2798(uVar6,0);
      native_EventDelegate__Set_dedf08(uVar6,uVar5);
      if (lVar4 != 0) {
        native_System_Collections_Generic_List_int_____Add_d40c00
                  (lVar4,uVar6,_Method_System_Collections_Generic_List_EventDelegate__Add___12dc740)
        ;
        if ((*(long *)(param_1 + 0x48) != 0) &&
           (lVar4 = native_UnityEngine_GameObject__get_transform_8de5c8(*(long *)(param_1 + 0x48),0)
           , lVar4 != 0)) {
          lVar4 = native_UnityEngine_Transform__FindChild_772e3c(lVar4,_StringLiteral_bg_12f3ba0,0);
          if (lVar4 != 0) {
            uVar5 = native_UnityEngine_Component__get_gameObject_8da66c(lVar4,0);
            *(undefined8 *)(param_1 + 0x50) = uVar5;
            native_sub_4326e0((undefined8 *)(param_1 + 0x50),uVar5);
            if ((*(long *)(param_1 + 0x80) != 0) &&
               (lVar4 = native_UnityEngine_GameObject__GetComponent_BE2_BlockSectionHeader_Custom__4a2214
                                  (*(long *)(param_1 + 0x80),
                                   _Method_UnityEngine_GameObject_GetComponent_UIButton____12e4a88),
               lVar4 != 0)) {
              lVar4 = *(long *)(lVar4 + 0xc0);
              uVar5 = native_sub_432808(_EventDelegate_Callback_TypeInfo_12d72e8);
              native_EventDelegate_Callback___ctor_54bd18
                        (uVar5,param_1,
                         _Method_ContainerRemoveCarGravityUIController_OnClickButtonResult___12e3088
                         ,0);
              uVar6 = native_sub_432808(_EventDelegate_TypeInfo_12d4590);
              native_System_Object___ctor_ad2798(uVar6,0);
              native_EventDelegate__Set_dedf08(uVar6,uVar5);
              if (lVar4 != 0) {
                native_System_Collections_Generic_List_int_____Add_d40c00
                          (lVar4,uVar6,
                           _Method_System_Collections_Generic_List_EventDelegate__Add___12dc740);
                if ((*(long *)(param_1 + 0x78) != 0) &&
                   (lVar4 = native_UnityEngine_GameObject__GetComponent_BE2_BlockSectionHeader_Custom__4a2214
                                      (*(long *)(param_1 + 0x78),
                                       _Method_UnityEngine_GameObject_GetComponent_UIButton____12e4a88
                                      ), lVar4 != 0)) {
                  lVar4 = *(long *)(lVar4 + 0xc0);
                  uVar5 = native_sub_432808(_EventDelegate_Callback_TypeInfo_12d72e8);
                  native_EventDelegate_Callback___ctor_54bd18
                            (uVar5,param_1,
                             _Method_ContainerRemoveCarGravityUIController_OnClickButtonBlesetting___12e3078
                             ,0);
                  uVar6 = native_sub_432808(_EventDelegate_TypeInfo_12d4590);
                  native_System_Object___ctor_ad2798(uVar6,0);
                  native_EventDelegate__Set_dedf08(uVar6,uVar5);
                  if (lVar4 != 0) {
                    native_System_Collections_Generic_List_int_____Add_d40c00
                              (lVar4,uVar6,
                               _Method_System_Collections_Generic_List_EventDelegate__Add___12dc740)
                    ;
                    if (((*(long *)(param_1 + 0x78) != 0) &&
                        (lVar4 = native_UnityEngine_GameObject__get_transform_8de5c8
                                           (*(long *)(param_1 + 0x78),0), lVar4 != 0)) &&
                       (lVar4 = native_UnityEngine_Transform__FindChild_772e3c
                                          (lVar4,_StringLiteral_bg_12f3ba0,0), lVar4 != 0)) {
                      uVar5 = native_UnityEngine_Component__GetComponent_ActiveAnimation__49daec
                                        (lVar4,
                                         _Method_UnityEngine_Component_GetComponent_UISprite____12e2c18
                                        );
                      puVar7 = (undefined8 *)(param_1 + 0x40);
                      *puVar7 = uVar5;
                      if (iRam0000000001345318 != 0) {
                        puVar1 = (ulong *)(((ulong)puVar7 >> 0x12 & 0x7fff) * 8 + 0x138ecd8);
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
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* ContainerRemoveCarGravityUIController$$OnClickButtonGravityStart @ 0xde0c00
 * void ContainerRemoveCarGravityUIController__OnClickButtonGravityStart (ContainerRemoveCarGravityUIController_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ContainerRemoveCarGravityUIController$$OnClickButtonGravityStart
   void ContainerRemoveCarGravityUIController__OnClickButtonGravityStart
   (ContainerRemoveCarGravityUIController_o* __this, const MethodInfo* method); */

void native_ContainerRemoveCarGravityUIController__OnClickButtonGravityStart_de0c00(long param_1)

{
  ulong uVar1;
  long lVar2;
  long *plVar3;
  undefined8 uVar4;
  code *UNRECOVERED_JUMPTABLE;
  long *plVar5;
  
  if ((bRam0000000001346e94 & 1) == 0) {
    native_sub_43273c(&Method_UnityEngine_GameObject_GetComponent_UISprite____12e4ae0);
    native_sub_43273c(&StringLiteral_icon_stop_12f4cb8);
    native_sub_43273c(&StringLiteral_icon_start_12f4cb0);
    bRam0000000001346e94 = 1;
  }
  if (*(char *)(param_1 + 0x3c) == '\0') {
    *(undefined1 *)(param_1 + 0x3c) = 1;
    if ((*(long *)(param_1 + 0x50) == 0) ||
       (plVar3 = (long *)native_UnityEngine_GameObject__GetComponent_BE2_BlockSectionHeader_Custom__4a2214
                                   (*(long *)(param_1 + 0x50),
                                    _Method_UnityEngine_GameObject_GetComponent_UISprite____12e4ae0)
       , plVar3 == (long *)0x0)) goto LAB_00de0ce4;
    plVar5 = (long *)&StringLiteral_icon_stop_12f4cb8;
  }
  else {
    if ((*(long *)(param_1 + 0x58) == 0) ||
       (lVar2 = native_UnityEngine_GameObject__get_transform_8de5c8(*(long *)(param_1 + 0x58),0),
       lVar2 == 0)) {
LAB_00de0ce4:
                    /* WARNING: Subroutine does not return */
      native_sub_432810();
    }
    native_UnityEngine_Transform__set_localPosition_7718a4(0,0,0,lVar2,0);
    *(undefined1 *)(param_1 + 0x3c) = 0;
    if ((*(long *)(param_1 + 0x50) == 0) ||
       (plVar3 = (long *)native_UnityEngine_GameObject__GetComponent_BE2_BlockSectionHeader_Custom__4a2214
                                   (*(long *)(param_1 + 0x50),
                                    _Method_UnityEngine_GameObject_GetComponent_UISprite____12e4ae0)
       , plVar3 == (long *)0x0)) goto LAB_00de0ce4;
    plVar5 = (long *)&StringLiteral_icon_start_12f4cb0;
  }
  lVar2 = *plVar5;
  if ((bRam0000000001342758 & 1) == 0) {
    native_sub_43273c(&StringLiteral__12eaac0,lVar2,0);
    bRam0000000001342758 = 1;
  }
  uVar1 = native_System_String__IsNullOrEmpty_b09430(lVar2,0);
  if ((uVar1 & 1) == 0) {
    uVar1 = native_System_String__op_Inequality_afbbb4(plVar3[0x41],lVar2,0);
    if ((uVar1 & 1) != 0) {
      plVar3[0x41] = lVar2;
      native_sub_4326e0(plVar3 + 0x41,lVar2);
      plVar3[0x43] = 0;
      native_sub_4326e0(plVar3 + 0x43,0);
      *(undefined1 *)(plVar3 + 0x44) = 0;
      *(undefined1 *)(plVar3 + 0xb) = 1;
      (**(code **)(*plVar3 + 0x378))(plVar3,*(undefined8 *)(*plVar3 + 0x380));
      if (*(char *)((long)plVar3 + 0x221) != '\0') {
        UNRECOVERED_JUMPTABLE = *(code **)(*plVar3 + 0x3a8);
        uVar4 = *(undefined8 *)(*plVar3 + 0x3b0);
        goto LAB_00c35d74;
      }
    }
  }
  else {
    uVar1 = native_System_String__IsNullOrEmpty_b09430(plVar3[0x41],0);
    if ((uVar1 & 1) == 0) {
      plVar3[0x41] = _StringLiteral__12eaac0;
      native_sub_4326e0(plVar3 + 0x41);
      plVar3[0x43] = 0;
      native_sub_4326e0(plVar3 + 0x43,0);
      *(undefined1 *)(plVar3 + 0x44) = 0;
      *(undefined1 *)(plVar3 + 0xb) = 1;
      UNRECOVERED_JUMPTABLE = *(code **)(*plVar3 + 0x378);
      uVar4 = *(undefined8 *)(*plVar3 + 0x380);
LAB_00c35d74:
                    /* WARNING: Could not recover jumptable at 0x00c35d84. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE)(plVar3,uVar4);
      return;
    }
  }
  return;
}



/* ContainerRemoveCarGravityUIController$$OnClickButtonResult @ 0xde0ce8
 * void ContainerRemoveCarGravityUIController__OnClickButtonResult (ContainerRemoveCarGravityUIController_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ContainerRemoveCarGravityUIController$$OnClickButtonResult
   void ContainerRemoveCarGravityUIController__OnClickButtonResult
   (ContainerRemoveCarGravityUIController_o* __this, const MethodInfo* method); */

void native_ContainerRemoveCarGravityUIController__OnClickButtonResult_de0ce8(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uStack_28;
  
  if ((bRam0000000001346e95 & 1) == 0) {
    native_sub_43273c(&StringLiteral_Login_12ef660);
    bRam0000000001346e95 = 1;
  }
  uVar1 = _StringLiteral_Login_12ef660;
  if ((bRam0000000001346e96 & 1) == 0) {
    native_sub_43273c(&PanelMainUIController_TypeInfo_12d5600);
    native_sub_43273c(&UnityEngine_SceneManagement_SceneManager_TypeInfo_12d5bc0);
    bRam0000000001346e96 = 1;
  }
  if (((*(byte *)(_PanelMainUIController_TypeInfo_12d5600 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_PanelMainUIController_TypeInfo_12d5600 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  lVar3 = native_PanelMainUIController__get_Instance_738fb0(0);
  if (lVar3 != 0) {
    native_PanelMainUIController__ClearNowScene_73a498(lVar3,0);
    if (((*(byte *)(_UnityEngine_SceneManagement_SceneManager_TypeInfo_12d5bc0 + 0x133) >> 2 & 1) !=
         0) && (*(int *)(_UnityEngine_SceneManagement_SceneManager_TypeInfo_12d5bc0 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    if ((bRam000000000133fa5c & 1) == 0) {
      native_sub_43273c(&UnityEngine_SceneManagement_SceneManager_TypeInfo_12d5bc0,0,0);
      bRam000000000133fa5c = 1;
    }
    uStack_28 = 0;
    native_UnityEngine_SceneManagement_LoadSceneParameters___ctor_8e2120(&uStack_28,0,0);
    uVar2 = uStack_28;
    if (((*(byte *)(_UnityEngine_SceneManagement_SceneManager_TypeInfo_12d5bc0 + 0x133) >> 2 & 1) !=
         0) && (*(int *)(_UnityEngine_SceneManagement_SceneManager_TypeInfo_12d5bc0 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    native_UnityEngine_SceneManagement_SceneManager__LoadScene_769edc(uVar1,uVar2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* ContainerRemoveCarGravityUIController$$LoadNewScene @ 0xde0d2c
 * void ContainerRemoveCarGravityUIController__LoadNewScene (ContainerRemoveCarGravityUIController_o* __this, System_String_o* sceneName, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ContainerRemoveCarGravityUIController$$LoadNewScene
   void ContainerRemoveCarGravityUIController__LoadNewScene
   (ContainerRemoveCarGravityUIController_o* __this, System_String_o* sceneName, const MethodInfo*
   method); */

void native_ContainerRemoveCarGravityUIController__LoadNewScene_de0d2c
               (undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uStack_28;
  
  if ((bRam0000000001346e96 & 1) == 0) {
    native_sub_43273c(&PanelMainUIController_TypeInfo_12d5600);
    native_sub_43273c(&UnityEngine_SceneManagement_SceneManager_TypeInfo_12d5bc0);
    bRam0000000001346e96 = 1;
  }
  if (((*(byte *)(_PanelMainUIController_TypeInfo_12d5600 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_PanelMainUIController_TypeInfo_12d5600 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  lVar2 = native_PanelMainUIController__get_Instance_738fb0(0);
  if (lVar2 != 0) {
    native_PanelMainUIController__ClearNowScene_73a498(lVar2,0);
    if (((*(byte *)(_UnityEngine_SceneManagement_SceneManager_TypeInfo_12d5bc0 + 0x133) >> 2 & 1) !=
         0) && (*(int *)(_UnityEngine_SceneManagement_SceneManager_TypeInfo_12d5bc0 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    if ((bRam000000000133fa5c & 1) == 0) {
      native_sub_43273c(&UnityEngine_SceneManagement_SceneManager_TypeInfo_12d5bc0,0,0);
      bRam000000000133fa5c = 1;
    }
    uStack_28 = 0;
    native_UnityEngine_SceneManagement_LoadSceneParameters___ctor_8e2120(&uStack_28,0,0);
    uVar1 = uStack_28;
    if (((*(byte *)(_UnityEngine_SceneManagement_SceneManager_TypeInfo_12d5bc0 + 0x133) >> 2 & 1) !=
         0) && (*(int *)(_UnityEngine_SceneManagement_SceneManager_TypeInfo_12d5bc0 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    native_UnityEngine_SceneManagement_SceneManager__LoadScene_769edc(param_2,uVar1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* ContainerRemoveCarGravityUIController$$OnClickButtonBlesetting @ 0xde0dd8
 * void ContainerRemoveCarGravityUIController__OnClickButtonBlesetting (ContainerRemoveCarGravityUIController_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ContainerRemoveCarGravityUIController$$OnClickButtonBlesetting
   void ContainerRemoveCarGravityUIController__OnClickButtonBlesetting
   (ContainerRemoveCarGravityUIController_o* __this, const MethodInfo* method); */

void native_ContainerRemoveCarGravityUIController__OnClickButtonBlesetting_de0dd8(long param_1)

{
  ulong *puVar1;
  ushort uVar2;
  char cVar3;
  bool bVar4;
  ulong uVar5;
  long lVar6;
  undefined8 *puVar7;
  long *plVar8;
  uint uVar9;
  ulong uVar10;
  long lVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  long lVar14;
  undefined8 uVar15;
  
  if ((bRam0000000001346e97 & 1) == 0) {
    native_sub_43273c(&Method_System_Action_string___ctor___12d7fe8);
    native_sub_43273c(&System_Action_string__TypeInfo_12d2080);
    native_sub_43273c(&byte___TypeInfo_12d3060);
    native_sub_43273c(&ContainerMatchingCodeUIController_TypeInfo_12d3f38);
    native_sub_43273c(&
                      Method_ContainerRemoveCarGravityUIController__OnClickButtonBlesetting_b__24_4___12e3070
                     );
    native_sub_43273c(&HjdBluetoothHardwareInterface_TypeInfo_12d4938);
    native_sub_43273c(&PanelMainUIController_TypeInfo_12d5600);
    native_sub_43273c(&
                      Method_ContainerRemoveCarGravityUIController___c__OnClickButtonBlesetting_b__24_0___12e9868
                     );
    native_sub_43273c(&
                      Method_ContainerRemoveCarGravityUIController___c__OnClickButtonBlesetting_b__24_1___12e9870
                     );
    native_sub_43273c(&
                      Method_ContainerRemoveCarGravityUIController___c__OnClickButtonBlesetting_b__24_2___12e9878
                     );
    native_sub_43273c(&
                      Method_ContainerRemoveCarGravityUIController___c__OnClickButtonBlesetting_b__24_3___12e9880
                     );
    native_sub_43273c(&ContainerRemoveCarGravityUIController___c_TypeInfo_12d7178);
    native_sub_43273c(&StringLiteral_ContainerMatchingCode_12ed220);
    bRam0000000001346e97 = 1;
  }
  if (((*(byte *)(_ContainerMatchingCodeUIController_TypeInfo_12d3f38 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_ContainerMatchingCodeUIController_TypeInfo_12d3f38 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  *(undefined1 *)(*(long *)(_ContainerMatchingCodeUIController_TypeInfo_12d3f38 + 0xb8) + 9) = 0;
  if (((*(byte *)(_PanelMainUIController_TypeInfo_12d5600 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_PanelMainUIController_TypeInfo_12d5600 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  lVar6 = native_PanelMainUIController__get_Instance_738fb0(0);
  if (lVar6 == 0) {
LAB_00de13e0:
                    /* WARNING: Subroutine does not return */
    native_sub_432810();
  }
  native_PanelMainUIController__AddUI_73944c(lVar6,4,_StringLiteral_ContainerMatchingCode_12ed220,0)
  ;
  if (((*(byte *)(_HjdBluetoothHardwareInterface_TypeInfo_12d4938 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_HjdBluetoothHardwareInterface_TypeInfo_12d4938 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  if (*(char *)(*(long *)(_HjdBluetoothHardwareInterface_TypeInfo_12d4938 + 0xb8) + 0x11) == '\0') {
    if (((*(ushort *)(_PanelMainUIController_TypeInfo_12d5600 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(_PanelMainUIController_TypeInfo_12d5600 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    uVar12 = *(undefined8 *)(*(long *)(_PanelMainUIController_TypeInfo_12d5600 + 0xb8) + 0xf8);
    if (((*(byte *)(_ContainerMatchingCodeUIController_TypeInfo_12d3f38 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_ContainerMatchingCodeUIController_TypeInfo_12d3f38 + 0xe0) == 0)) {
      native_sub_4327ec(_ContainerMatchingCodeUIController_TypeInfo_12d3f38);
    }
    puVar7 = *(undefined8 **)(_ContainerMatchingCodeUIController_TypeInfo_12d3f38 + 0xb8);
    *puVar7 = uVar12;
    if (iRam0000000001345318 != 0) {
      puVar1 = (ulong *)(((ulong)puVar7 >> 0x12 & 0x7fff) * 8 + 0x138ecd8);
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar4) {
          *puVar1 = *puVar1 | 1L << ((ulong)puVar7 >> 0xc & 0x3f);
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    return;
  }
  if (((*(ushort *)(_PanelMainUIController_TypeInfo_12d5600 + 0x132) >> 10 & 1) != 0) &&
     (*(int *)(_PanelMainUIController_TypeInfo_12d5600 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  lVar6 = _PanelMainUIController_TypeInfo_12d5600;
  *(undefined1 *)(*(long *)(_PanelMainUIController_TypeInfo_12d5600 + 0xb8) + 0x20) = 0;
  uVar12 = *(undefined8 *)(*(long *)(lVar6 + 0xb8) + 0xc0);
  if (((*(byte *)(_ContainerMatchingCodeUIController_TypeInfo_12d3f38 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_ContainerMatchingCodeUIController_TypeInfo_12d3f38 + 0xe0) == 0)) {
    native_sub_4327ec(_ContainerMatchingCodeUIController_TypeInfo_12d3f38);
  }
  puVar7 = *(undefined8 **)(_ContainerMatchingCodeUIController_TypeInfo_12d3f38 + 0xb8);
  *puVar7 = uVar12;
  native_sub_4326e0(puVar7,uVar12);
  lVar6 = native_sub_432750(_byte___TypeInfo_12d3060,0x13);
  if (lVar6 == 0) goto LAB_00de13e0;
  uVar9 = (uint)*(undefined8 *)(lVar6 + 0x18);
  if ((uVar9 == 0) || (*(undefined1 *)(lVar6 + 0x20) = *(undefined1 *)(param_1 + 0x18), uVar9 == 1))
  {
LAB_00de13d4:
    uVar12 = native_sub_43283c();
                    /* WARNING: Subroutine does not return */
    native_sub_4327dc(uVar12,0);
  }
  *(undefined1 *)(lVar6 + 0x21) = *(undefined1 *)(param_1 + 0x19);
  if (((*(byte *)(_HjdBluetoothHardwareInterface_TypeInfo_12d4938 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_HjdBluetoothHardwareInterface_TypeInfo_12d4938 + 0xe0) == 0)) {
    native_sub_4327ec();
    uVar9 = (uint)*(undefined8 *)(lVar6 + 0x18);
  }
  if (((uVar9 < 6) ||
      (*(undefined1 *)(lVar6 + 0x25) =
            *(undefined1 *)
             (*(long *)(_HjdBluetoothHardwareInterface_TypeInfo_12d4938 + 0xb8) + 0x12), uVar9 == 6)
      ) || (*(undefined1 *)(lVar6 + 0x26) =
                 *(undefined1 *)
                  (*(long *)(_HjdBluetoothHardwareInterface_TypeInfo_12d4938 + 0xb8) + 0x13),
           uVar9 < 8)) goto LAB_00de13d4;
  *(undefined1 *)(lVar6 + 0x27) =
       *(undefined1 *)(*(long *)(_HjdBluetoothHardwareInterface_TypeInfo_12d4938 + 0xb8) + 0x14);
  if (((*(byte *)(_ContainerRemoveCarGravityUIController___c_TypeInfo_12d7178 + 0x133) >> 2 & 1) !=
       0) && (*(int *)(_ContainerRemoveCarGravityUIController___c_TypeInfo_12d7178 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  puVar7 = *(undefined8 **)(_ContainerRemoveCarGravityUIController___c_TypeInfo_12d7178 + 0xb8);
  lVar14 = puVar7[1];
  if (lVar14 == 0) {
    if (((*(byte *)(_ContainerRemoveCarGravityUIController___c_TypeInfo_12d7178 + 0x133) >> 2 & 1)
         != 0) &&
       (*(int *)(_ContainerRemoveCarGravityUIController___c_TypeInfo_12d7178 + 0xe0) == 0)) {
      native_sub_4327ec();
      puVar7 = *(undefined8 **)(_ContainerRemoveCarGravityUIController___c_TypeInfo_12d7178 + 0xb8);
    }
    uVar12 = *puVar7;
    lVar14 = native_sub_432808(_System_Action_string__TypeInfo_12d2080);
    native_System_Action_Font____ctor_9867a8
              (lVar14,uVar12,
               _Method_ContainerRemoveCarGravityUIController___c__OnClickButtonBlesetting_b__24_0___12e9868
               ,_Method_System_Action_string___ctor___12d7fe8);
    plVar8 = (long *)(*(long *)(_ContainerRemoveCarGravityUIController___c_TypeInfo_12d7178 + 0xb8)
                     + 8);
    *plVar8 = lVar14;
    native_sub_4326e0(plVar8,lVar14);
  }
  if (((*(byte *)(_HjdBluetoothHardwareInterface_TypeInfo_12d4938 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_HjdBluetoothHardwareInterface_TypeInfo_12d4938 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  native_HjdBluetoothHardwareInterface__StopAdvertising_dc423c(lVar14,0);
  native_System_Threading_Thread__Sleep_9fb5d8(100,0);
  if (((*(byte *)(_ContainerRemoveCarGravityUIController___c_TypeInfo_12d7178 + 0x133) >> 2 & 1) !=
       0) && (*(int *)(_ContainerRemoveCarGravityUIController___c_TypeInfo_12d7178 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  puVar7 = *(undefined8 **)(_ContainerRemoveCarGravityUIController___c_TypeInfo_12d7178 + 0xb8);
  lVar14 = puVar7[2];
  if (lVar14 == 0) {
    if (((*(byte *)(_ContainerRemoveCarGravityUIController___c_TypeInfo_12d7178 + 0x133) >> 2 & 1)
         != 0) &&
       (*(int *)(_ContainerRemoveCarGravityUIController___c_TypeInfo_12d7178 + 0xe0) == 0)) {
      native_sub_4327ec();
      puVar7 = *(undefined8 **)(_ContainerRemoveCarGravityUIController___c_TypeInfo_12d7178 + 0xb8);
    }
    uVar12 = *puVar7;
    lVar14 = native_sub_432808(_System_Action_string__TypeInfo_12d2080);
    native_System_Action_Font____ctor_9867a8
              (lVar14,uVar12,
               _Method_ContainerRemoveCarGravityUIController___c__OnClickButtonBlesetting_b__24_1___12e9870
               ,_Method_System_Action_string___ctor___12d7fe8);
    plVar8 = (long *)(*(long *)(_ContainerRemoveCarGravityUIController___c_TypeInfo_12d7178 + 0xb8)
                     + 0x10);
    *plVar8 = lVar14;
    native_sub_4326e0(plVar8,lVar14);
  }
  if (((*(byte *)(_HjdBluetoothHardwareInterface_TypeInfo_12d4938 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_HjdBluetoothHardwareInterface_TypeInfo_12d4938 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  native_HjdBluetoothHardwareInterface__StartAdvertising_dc4054(lVar14,lVar6,0);
  if (((*(byte *)(_ContainerRemoveCarGravityUIController___c_TypeInfo_12d7178 + 0x133) >> 2 & 1) !=
       0) && (*(int *)(_ContainerRemoveCarGravityUIController___c_TypeInfo_12d7178 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  puVar7 = *(undefined8 **)(_ContainerRemoveCarGravityUIController___c_TypeInfo_12d7178 + 0xb8);
  lVar6 = puVar7[3];
  if (lVar6 == 0) {
    if (((*(byte *)(_ContainerRemoveCarGravityUIController___c_TypeInfo_12d7178 + 0x133) >> 2 & 1)
         != 0) &&
       (*(int *)(_ContainerRemoveCarGravityUIController___c_TypeInfo_12d7178 + 0xe0) == 0)) {
      native_sub_4327ec();
      puVar7 = *(undefined8 **)(_ContainerRemoveCarGravityUIController___c_TypeInfo_12d7178 + 0xb8);
    }
    uVar12 = *puVar7;
    lVar6 = native_sub_432808(_System_Action_string__TypeInfo_12d2080);
    native_System_Action_Font____ctor_9867a8
              (lVar6,uVar12,
               _Method_ContainerRemoveCarGravityUIController___c__OnClickButtonBlesetting_b__24_2___12e9878
               ,_Method_System_Action_string___ctor___12d7fe8);
    plVar8 = (long *)(*(long *)(_ContainerRemoveCarGravityUIController___c_TypeInfo_12d7178 + 0xb8)
                     + 0x18);
    *plVar8 = lVar6;
    native_sub_4326e0(plVar8,lVar6);
  }
  if (((*(byte *)(_HjdBluetoothHardwareInterface_TypeInfo_12d4938 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_HjdBluetoothHardwareInterface_TypeInfo_12d4938 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  native_HjdBluetoothHardwareInterface__StopScanToGetData_dc465c(lVar6,0);
  native_System_Threading_Thread__Sleep_9fb5d8(100,0);
  if (((*(byte *)(_ContainerRemoveCarGravityUIController___c_TypeInfo_12d7178 + 0x133) >> 2 & 1) !=
       0) && (*(int *)(_ContainerRemoveCarGravityUIController___c_TypeInfo_12d7178 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  puVar7 = *(undefined8 **)(_ContainerRemoveCarGravityUIController___c_TypeInfo_12d7178 + 0xb8);
  lVar6 = puVar7[4];
  if (lVar6 == 0) {
    if (((*(byte *)(_ContainerRemoveCarGravityUIController___c_TypeInfo_12d7178 + 0x133) >> 2 & 1)
         != 0) &&
       (*(int *)(_ContainerRemoveCarGravityUIController___c_TypeInfo_12d7178 + 0xe0) == 0)) {
      native_sub_4327ec();
      puVar7 = *(undefined8 **)(_ContainerRemoveCarGravityUIController___c_TypeInfo_12d7178 + 0xb8);
    }
    uVar12 = *puVar7;
    lVar6 = native_sub_432808(_System_Action_string__TypeInfo_12d2080);
    native_System_Action_Font____ctor_9867a8
              (lVar6,uVar12,
               _Method_ContainerRemoveCarGravityUIController___c__OnClickButtonBlesetting_b__24_3___12e9880
               ,_Method_System_Action_string___ctor___12d7fe8);
    plVar8 = (long *)(*(long *)(_ContainerRemoveCarGravityUIController___c_TypeInfo_12d7178 + 0xb8)
                     + 0x20);
    *plVar8 = lVar6;
    native_sub_4326e0(plVar8,lVar6);
  }
  uVar12 = native_sub_432808(_System_Action_string__TypeInfo_12d2080);
  native_System_Action_Font____ctor_9867a8
            (uVar12,param_1,
             _Method_ContainerRemoveCarGravityUIController__OnClickButtonBlesetting_b__24_4___12e3070
             ,_Method_System_Action_string___ctor___12d7fe8);
  if (((*(byte *)(_HjdBluetoothHardwareInterface_TypeInfo_12d4938 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_HjdBluetoothHardwareInterface_TypeInfo_12d4938 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  if ((bRam0000000001343d2e & 1) == 0) {
    native_sub_43273c(&Method_System_Array_Empty_object____12dedf0,uVar12,0);
    native_sub_43273c(&HjdBluetoothHardwareInterface_TypeInfo_12d4938);
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    native_sub_43273c(&StringLiteral_androidBluetoothStartingScan_12f3980);
    bRam0000000001343d2e = 1;
  }
  if (((*(byte *)(_HjdBluetoothHardwareInterface_TypeInfo_12d4938 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_HjdBluetoothHardwareInterface_TypeInfo_12d4938 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar13 = *(undefined8 *)(*(long *)(_HjdBluetoothHardwareInterface_TypeInfo_12d4938 + 0xb8) + 8);
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec(_UnityEngine_Object_TypeInfo_12d54e0);
  }
  uVar5 = native_UnityEngine_Object__op_Inequality_8d76fc(uVar13,0,0);
  if ((uVar5 & 1) != 0) {
    if (((*(byte *)(_HjdBluetoothHardwareInterface_TypeInfo_12d4938 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_HjdBluetoothHardwareInterface_TypeInfo_12d4938 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    lVar14 = *(long *)(*(long *)(_HjdBluetoothHardwareInterface_TypeInfo_12d4938 + 0xb8) + 8);
    if (lVar14 == 0) goto LAB_00dc4658;
    plVar8 = (long *)(lVar14 + 0x38);
    *plVar8 = lVar6;
    native_sub_4326e0(plVar8,lVar6);
    lVar6 = *(long *)(*(long *)(_HjdBluetoothHardwareInterface_TypeInfo_12d4938 + 0xb8) + 8);
    if (lVar6 == 0) goto LAB_00dc4658;
    puVar7 = (undefined8 *)(lVar6 + 0x48);
    *puVar7 = uVar12;
    native_sub_4326e0(puVar7,uVar12);
  }
  if (((*(byte *)(_HjdBluetoothHardwareInterface_TypeInfo_12d4938 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_HjdBluetoothHardwareInterface_TypeInfo_12d4938 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  lVar6 = **(long **)(_HjdBluetoothHardwareInterface_TypeInfo_12d4938 + 0xb8);
  if (lVar6 == 0) {
    return;
  }
  if (((*(byte *)(_HjdBluetoothHardwareInterface_TypeInfo_12d4938 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_HjdBluetoothHardwareInterface_TypeInfo_12d4938 + 0xe0) == 0)) {
    native_sub_4327ec();
    lVar6 = **(long **)(_HjdBluetoothHardwareInterface_TypeInfo_12d4938 + 0xb8);
  }
  lVar14 = _Method_System_Array_Empty_object____12dedf0;
  lVar11 = **(long **)(_Method_System_Array_Empty_object____12dedf0 + 0x30);
  uVar2 = *(ushort *)(lVar11 + 0x132);
  if ((uVar2 & 1) == 0) {
    native_sub_3c9850(lVar11);
    uVar2 = *(ushort *)(lVar11 + 0x132);
  }
  if ((uVar2 >> 10 & 1) != 0) {
    lVar11 = **(long **)(lVar14 + 0x30);
    if ((*(byte *)(lVar11 + 0x132) & 1) == 0) {
      native_sub_3c9850(lVar11);
    }
    if (*(int *)(lVar11 + 0xe0) == 0) {
      lVar11 = **(long **)(lVar14 + 0x30);
      if ((*(byte *)(lVar11 + 0x132) & 1) == 0) {
        native_sub_3c9850(lVar11);
      }
      native_sub_4327ec(lVar11);
    }
  }
  lVar14 = **(long **)(lVar14 + 0x30);
  if ((*(byte *)(lVar14 + 0x132) & 1) == 0) {
    native_sub_3c9850(lVar14);
  }
  uVar12 = _StringLiteral_androidBluetoothStartingScan_12f3980;
  if (lVar6 != 0) {
    lVar14 = **(long **)(lVar14 + 0xb8);
    if ((bRam0000000001343116 & 1) == 0) {
      native_sub_43273c(&object___TypeInfo_12d32d8,
                        _StringLiteral_androidBluetoothStartingScan_12f3980,lVar14,0);
      bRam0000000001343116 = 1;
    }
    if (lVar14 == 0) {
      lVar14 = native_sub_432750(_object___TypeInfo_12d32d8,1);
    }
    if (*(long *)(lVar6 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
      native_sub_432810();
    }
    uVar15 = *(undefined8 *)(*(long *)(lVar6 + 0x18) + 0x18);
    uVar13 = native_UnityEngine__AndroidJNIHelper__GetSignature_d719ec(lVar14);
    uVar12 = native_UnityEngine__AndroidJNIHelper__GetMethodID_d6efec(uVar15,uVar12,uVar13,0);
    lVar11 = native_UnityEngine__AndroidJNIHelper__CreateJNIArgArray_d70340(lVar14);
    if (*(long *)(lVar6 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
      native_sub_432810();
    }
    native_UnityEngine_AndroidJNISafe__CallVoidMethod_d74300
              (*(undefined8 *)(*(long *)(lVar6 + 0x10) + 0x18),uVar12,lVar11);
    if ((bRam000000000134313b & 1) == 0) {
      native_sub_43273c(&UnityEngine_AndroidJavaProxy_TypeInfo_12d3748);
      native_sub_43273c(&UnityEngine_AndroidJavaRunnable_TypeInfo_12d3750);
      native_sub_43273c(&System_Array_TypeInfo_12d3820);
      native_sub_43273c(&string_TypeInfo_12d5f28);
      bRam000000000134313b = 1;
    }
    if (lVar14 != 0) {
      if (0 < (int)*(ulong *)(lVar14 + 0x18)) {
        uVar5 = 0;
        uVar10 = *(ulong *)(lVar14 + 0x18) & 0xffffffff;
        do {
          if (uVar10 <= uVar5) goto code_r0x00d70a8c;
          plVar8 = *(long **)(lVar14 + 0x20 + uVar5 * 8);
          if (plVar8 != (long *)0x0) {
            lVar6 = *plVar8;
            if ((lVar6 != _string_TypeInfo_12d5f28) &&
               (lVar6 != _UnityEngine_AndroidJavaRunnable_TypeInfo_12d3750)) {
              if ((*(byte *)(lVar6 + 300) <
                   *(byte *)(_UnityEngine_AndroidJavaProxy_TypeInfo_12d3748 + 300)) ||
                 (*(long *)(*(long *)(lVar6 + 200) +
                            (ulong)*(byte *)(_UnityEngine_AndroidJavaProxy_TypeInfo_12d3748 + 300) *
                            8 + -8) != _UnityEngine_AndroidJavaProxy_TypeInfo_12d3748)) {
                if ((*(byte *)(lVar6 + 300) < *(byte *)(_System_Array_TypeInfo_12d3820 + 300)) ||
                   (*(long *)(*(long *)(lVar6 + 200) +
                              (ulong)*(byte *)(_System_Array_TypeInfo_12d3820 + 300) * 8 + -8) !=
                    _System_Array_TypeInfo_12d3820)) goto code_r0x00d70a60;
              }
            }
            if (lVar11 == 0) goto code_r0x00d70a98;
            if (*(uint *)(lVar11 + 0x18) <= uVar5) {
code_r0x00d70a8c:
              uVar12 = native_sub_43283c();
                    /* WARNING: Subroutine does not return */
              native_sub_4327dc(uVar12,0);
            }
            native_UnityEngine_AndroidJNISafe__DeleteLocalRef_d71e88
                      (*(undefined8 *)(lVar11 + 0x20 + uVar5 * 8));
          }
code_r0x00d70a60:
          uVar10 = (ulong)*(uint *)(lVar14 + 0x18);
          uVar5 = uVar5 + 1;
        } while ((long)uVar5 < (long)(int)*(uint *)(lVar14 + 0x18));
      }
      return;
    }
code_r0x00d70a98:
                    /* WARNING: Subroutine does not return */
    native_sub_432810();
  }
LAB_00dc4658:
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* ContainerRemoveCarGravityUIController$$Update @ 0xde13e4
 * void ContainerRemoveCarGravityUIController__Update (ContainerRemoveCarGravityUIController_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ContainerRemoveCarGravityUIController$$Update
   void ContainerRemoveCarGravityUIController__Update (ContainerRemoveCarGravityUIController_o*
   __this, const MethodInfo* method); */

void native_ContainerRemoveCarGravityUIController__Update_de13e4
               (undefined1 param_1 [16],float param_2,long param_3)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined1 uVar7;
  long lVar8;
  int iVar9;
  long *plVar10;
  undefined1 uVar11;
  undefined4 uVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  undefined8 uVar16;
  float fVar17;
  float fVar18;
  
  if ((bRam0000000001346e98 & 1) == 0) {
    native_sub_43273c(&Method_System_Action_string___ctor___12d7fe8);
    native_sub_43273c(&System_Action_string__TypeInfo_12d2080);
    native_sub_43273c(&byte___TypeInfo_12d3060);
    native_sub_43273c(&Method_UnityEngine_Component_GetComponent_UISprite____12e2c18);
    native_sub_43273c(&ContainerRemoveCarGravityUIController_TypeInfo_12d3f60);
    native_sub_43273c(&HjdBluetoothHardwareInterface_TypeInfo_12d4938);
    native_sub_43273c(&PanelMainUIController_TypeInfo_12d5600);
    native_sub_43273c(&Method_ContainerRemoveCarGravityUIController___c__Update_b__28_0___12e9888);
    native_sub_43273c(&Method_ContainerRemoveCarGravityUIController___c__Update_b__28_1___12e9890);
    native_sub_43273c(&Method_ContainerRemoveCarGravityUIController___c__Update_b__28_2___12e9898);
    native_sub_43273c(&ContainerRemoveCarGravityUIController___c_TypeInfo_12d7178);
    native_sub_43273c(&StringLiteral_icon_gyro_active_12f4c98);
    native_sub_43273c(&StringLiteral_icon_gyro_12f4c90);
    native_sub_43273c(&StringLiteral_button_ble_12f3c98);
    native_sub_43273c(&StringLiteral_bg_12f3ba0);
    native_sub_43273c(&StringLiteral_button_ble_noactive_12f3ca0);
    bRam0000000001346e98 = 1;
  }
  lVar3 = *(long *)(param_3 + 0x88);
  if (lVar3 == 0) goto LAB_00de201c;
  if (*(int *)(lVar3 + 0x80) == 2) {
    *(undefined4 *)(param_3 + 0x74) = 1;
    lVar3 = native_UnityEngine_Component__get_transform_8da62c(lVar3,0);
    if (((lVar3 == 0) ||
        (lVar3 = native_UnityEngine_Transform__FindChild_772e3c(lVar3,_StringLiteral_bg_12f3ba0,0),
        lVar3 == 0)) ||
       (lVar3 = native_UnityEngine_Component__GetComponent_ActiveAnimation__49daec
                          (lVar3,_Method_UnityEngine_Component_GetComponent_UISprite____12e2c18),
       lVar3 == 0)) goto LAB_00de201c;
    puVar6 = (undefined8 *)&StringLiteral_icon_gyro_active_12f4c98;
  }
  else {
    if (0 < *(int *)(param_3 + 0x74)) {
      *(undefined4 *)(param_3 + 0x74) = 0;
      fVar13 = param_2;
      lVar3 = native_UnityEngine_Input__get_gyro_dbe130(0);
      if (lVar3 == 0) goto LAB_00de201c;
      uVar12 = native_UnityEngine_Gyroscope__get_gravity_dbd7e8(lVar3,0);
      param_2 = fVar13;
      if (((*(byte *)(_PanelMainUIController_TypeInfo_12d5600 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_PanelMainUIController_TypeInfo_12d5600 + 0xe0) == 0)) {
        native_sub_4327ec();
      }
      lVar3 = _PanelMainUIController_TypeInfo_12d5600;
      *(undefined4 *)(*(long *)(_PanelMainUIController_TypeInfo_12d5600 + 0xb8) + 0x3c) = uVar12;
      *(float *)(*(long *)(lVar3 + 0xb8) + 0x40) = fVar13;
      lVar3 = *(long *)(param_3 + 0x88);
      if (lVar3 == 0) goto LAB_00de201c;
    }
    lVar3 = native_UnityEngine_Component__get_transform_8da62c(lVar3,0);
    if (((lVar3 == 0) ||
        (lVar3 = native_UnityEngine_Transform__FindChild_772e3c(lVar3,_StringLiteral_bg_12f3ba0,0),
        lVar3 == 0)) ||
       (lVar3 = native_UnityEngine_Component__GetComponent_ActiveAnimation__49daec
                          (lVar3,_Method_UnityEngine_Component_GetComponent_UISprite____12e2c18),
       lVar3 == 0)) goto LAB_00de201c;
    puVar6 = (undefined8 *)&StringLiteral_icon_gyro_12f4c90;
  }
  native_UISprite__set_spriteName_c35c6c(lVar3,*puVar6,0);
  if (((*(byte *)(_PanelMainUIController_TypeInfo_12d5600 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_PanelMainUIController_TypeInfo_12d5600 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  if (*(long *)(param_3 + 0x40) == 0) goto LAB_00de201c;
  if (*(char *)(*(long *)(_PanelMainUIController_TypeInfo_12d5600 + 0xb8) + 0x20) == '\0') {
    puVar6 = (undefined8 *)&StringLiteral_button_ble_noactive_12f3ca0;
  }
  else {
    puVar6 = (undefined8 *)&StringLiteral_button_ble_12f3c98;
  }
  native_UISprite__set_spriteName_c35c6c(*(long *)(param_3 + 0x40),*puVar6,0);
  lVar3 = native_UnityEngine_Input__get_gyro_dbe130(0);
  if (lVar3 == 0) goto LAB_00de201c;
  fVar13 = (float)native_UnityEngine_Gyroscope__get_gravity_dbd7e8(lVar3,0);
  if (((*(byte *)(_PanelMainUIController_TypeInfo_12d5600 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_PanelMainUIController_TypeInfo_12d5600 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  fVar13 = fVar13 - *(float *)(*(long *)(_PanelMainUIController_TypeInfo_12d5600 + 0xb8) + 0x3c);
  param_2 = param_2 - *(float *)(*(long *)(_PanelMainUIController_TypeInfo_12d5600 + 0xb8) + 0x40);
  if (*(char *)(param_3 + 0x3c) != '\0') {
    uVar5 = 0xc3480000;
    fVar15 = fVar13 * 400.0;
    if (200.0 < fVar13 * 400.0) {
      fVar15 = 200.0;
    }
    uVar4 = (ulong)(uint)fVar15;
    fVar17 = param_2 * 400.0;
    if (200.0 < param_2 * 400.0) {
      fVar17 = 200.0;
    }
    if (fVar15 <= -200.0) {
      fVar15 = -200.0;
    }
    if (fVar17 <= -200.0) {
      fVar17 = -200.0;
    }
    uVar16 = native_UnityEngine_Vector3__get_zero_776668(0);
    fVar18 = 0.0;
    fVar14 = (float)native_UnityEngine_Vector3__Distance_7766d0
                              (fVar15,fVar17,0,uVar16,uVar5,uVar4,0);
    if (200.0 <= fVar14) {
      fVar18 = 0.0;
      fVar15 = (float)native_UnityEngine_Vector3__Normalize_7765a8(fVar15,fVar17,0,0);
      fVar15 = fVar15 * 200.0;
      fVar17 = fVar17 * 200.0;
      fVar18 = fVar18 * 200.0;
    }
    if ((*(long *)(param_3 + 0x58) == 0) ||
       (lVar3 = native_UnityEngine_GameObject__get_transform_8de5c8(*(long *)(param_3 + 0x58),0),
       lVar3 == 0)) goto LAB_00de201c;
    native_UnityEngine_Transform__set_localPosition_7718a4(fVar15,fVar17,fVar18,lVar3,0);
  }
  if (((*(byte *)(_PanelMainUIController_TypeInfo_12d5600 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_PanelMainUIController_TypeInfo_12d5600 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  if (*(char *)(*(long *)(_PanelMainUIController_TypeInfo_12d5600 + 0xb8) + 0x20) == '\0') {
    return;
  }
  lVar3 = native_sub_432750(_byte___TypeInfo_12d3060,10);
  plVar10 = (long *)(param_3 + 0x28);
  *plVar10 = lVar3;
  native_sub_4326e0(plVar10,lVar3);
  if (*(char *)(param_3 + 0x3c) == '\0') {
    uVar11 = 0;
LAB_00de1938:
    uVar7 = 0;
  }
  else {
    fVar15 = 0.0;
    if (0.15 < ABS(fVar13)) {
      fVar15 = (ABS(fVar13) + -0.15) / 0.85;
      fVar17 = -(fVar15 * 200.0);
      if (0.0 <= fVar13) {
        fVar17 = fVar15 * 200.0;
      }
      fVar15 = 100.0;
      if ((fVar17 <= 100.0) && (fVar15 = fVar17, fVar17 < -100.0)) {
        fVar15 = -100.0;
      }
    }
    fVar13 = 0.0;
    if (0.15 < ABS(param_2)) {
      fVar13 = (ABS(param_2) + -0.15) / 0.85;
      fVar17 = -(fVar13 * 200.0);
      if (0.0 <= param_2) {
        fVar17 = fVar13 * 200.0;
      }
      fVar13 = 100.0;
      if ((fVar17 <= 100.0) && (fVar13 = fVar17, fVar17 < -100.0)) {
        fVar13 = -100.0;
      }
    }
    if (fVar15 <= 0.0) {
      if (fVar15 < 0.0) {
        uVar5 = 2;
        goto LAB_00de18a0;
      }
      uVar2 = 0;
    }
    else {
      uVar5 = 3;
LAB_00de18a0:
      uVar2 = native_Assets_Scripts_Tools_HjdBleTool__setIntegerSomeBit_7f7068(0,uVar5,1,0);
    }
    if (fVar13 <= 0.0) {
      if (fVar13 < 0.0) {
        uVar5 = 1;
        goto LAB_00de18d4;
      }
    }
    else {
      uVar5 = 0;
LAB_00de18d4:
      uVar2 = native_Assets_Scripts_Tools_HjdBleTool__setIntegerSomeBit_7f7068(uVar2,uVar5,1,0);
    }
    uVar11 = (undefined1)uVar2;
    uVar1 = uVar2 & 0xff;
    if (uVar1 < 0xb) {
      if ((1 << (ulong)(uVar2 & 0x1f) & 0x666U) == 0) {
        if (uVar1 == 4) {
          uVar11 = 5;
        }
        else {
          if (uVar1 != 8) goto LAB_00de2014;
          uVar11 = 9;
        }
      }
    }
    else {
LAB_00de2014:
      uVar11 = 0;
    }
    if (*(char *)(param_3 + 0x3c) == '\0') goto LAB_00de1938;
    if (((*(byte *)(_PanelMainUIController_TypeInfo_12d5600 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_PanelMainUIController_TypeInfo_12d5600 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    uVar7 = (undefined1)
            *(undefined4 *)(*(long *)(_PanelMainUIController_TypeInfo_12d5600 + 0xb8) + 0x44);
  }
  if (*(int *)(param_3 + 0x70) == 0) {
    *(undefined4 *)(param_3 + 0x70) = 0xc;
    iVar9 = 1;
    if (*(int *)(param_3 + 0x6c) + 1 < 0xfb) {
      iVar9 = *(int *)(param_3 + 0x6c) + 1;
    }
    *(int *)(param_3 + 0x6c) = iVar9;
  }
  else {
    iVar9 = *(int *)(param_3 + 0x6c);
  }
  lVar3 = *plVar10;
  if (lVar3 != 0) {
    if (*(int *)(lVar3 + 0x18) != 0) {
      *(undefined1 *)(lVar3 + 0x20) = uVar11;
      lVar3 = *plVar10;
      if (lVar3 == 0) goto LAB_00de201c;
      if (1 < *(uint *)(lVar3 + 0x18)) {
        *(undefined1 *)(lVar3 + 0x21) = 0;
        lVar3 = *plVar10;
        if (lVar3 == 0) goto LAB_00de201c;
        if (2 < *(uint *)(lVar3 + 0x18)) {
          *(undefined1 *)(lVar3 + 0x22) = uVar7;
          lVar3 = *plVar10;
          if (lVar3 == 0) goto LAB_00de201c;
          if (3 < *(uint *)(lVar3 + 0x18)) {
            *(undefined1 *)(lVar3 + 0x23) = uVar7;
            lVar3 = *plVar10;
            if (lVar3 == 0) goto LAB_00de201c;
            if (4 < *(uint *)(lVar3 + 0x18)) {
              *(undefined1 *)(lVar3 + 0x24) = 0;
              lVar3 = *plVar10;
              if (lVar3 == 0) goto LAB_00de201c;
              if (5 < *(uint *)(lVar3 + 0x18)) {
                *(undefined1 *)(lVar3 + 0x25) = 0;
                lVar3 = *plVar10;
                if (lVar3 == 0) goto LAB_00de201c;
                if (6 < *(uint *)(lVar3 + 0x18)) {
                  *(char *)(lVar3 + 0x26) = (char)iVar9;
                  uVar4 = native_Assets_Scripts_Tools_HjdBleTool__data_isalike_7f6e28
                                    (*(undefined8 *)(param_3 + 0x28),*(undefined8 *)(param_3 + 0x30)
                                     ,0);
                  if (((uVar4 & 1) != 0) || (*(int *)(param_3 + 0x38) != 0)) {
LAB_00de1cf8:
                    if (*(char *)(param_3 + 0x1d) != '\0') {
                      *(undefined1 *)(param_3 + 0x1d) = 0;
                      if (((*(byte *)(_ContainerRemoveCarGravityUIController___c_TypeInfo_12d7178 +
                                     0x133) >> 2 & 1) != 0) &&
                         (*(int *)(_ContainerRemoveCarGravityUIController___c_TypeInfo_12d7178 +
                                  0xe0) == 0)) {
                        native_sub_4327ec();
                      }
                      puVar6 = *(undefined8 **)
                                (_ContainerRemoveCarGravityUIController___c_TypeInfo_12d7178 + 0xb8)
                      ;
                      lVar3 = puVar6[5];
                      if (lVar3 == 0) {
                        if (((*(byte *)(_ContainerRemoveCarGravityUIController___c_TypeInfo_12d7178
                                       + 0x133) >> 2 & 1) != 0) &&
                           (*(int *)(_ContainerRemoveCarGravityUIController___c_TypeInfo_12d7178 +
                                    0xe0) == 0)) {
                          native_sub_4327ec();
                          puVar6 = *(undefined8 **)
                                    (_ContainerRemoveCarGravityUIController___c_TypeInfo_12d7178 +
                                    0xb8);
                        }
                        uVar5 = *puVar6;
                        lVar3 = native_sub_432808(_System_Action_string__TypeInfo_12d2080);
                        native_System_Action_Font____ctor_9867a8
                                  (lVar3,uVar5,
                                   _Method_ContainerRemoveCarGravityUIController___c__Update_b__28_0___12e9888
                                   ,_Method_System_Action_string___ctor___12d7fe8);
                        plVar10 = (long *)(*(long *)(
                                                  _ContainerRemoveCarGravityUIController___c_TypeInfo_12d7178
                                                  + 0xb8) + 0x28);
                        *plVar10 = lVar3;
                        native_sub_4326e0(plVar10,lVar3);
                      }
                      if (((*(byte *)(_HjdBluetoothHardwareInterface_TypeInfo_12d4938 + 0x133) >> 2
                           & 1) != 0) &&
                         (*(int *)(_HjdBluetoothHardwareInterface_TypeInfo_12d4938 + 0xe0) == 0)) {
                        native_sub_4327ec();
                      }
                      native_HjdBluetoothHardwareInterface__StopAdvertising_dc423c(lVar3,0);
                      if (((*(byte *)(_ContainerRemoveCarGravityUIController___c_TypeInfo_12d7178 +
                                     0x133) >> 2 & 1) != 0) &&
                         (*(int *)(_ContainerRemoveCarGravityUIController___c_TypeInfo_12d7178 +
                                  0xe0) == 0)) {
                        native_sub_4327ec();
                      }
                      puVar6 = *(undefined8 **)
                                (_ContainerRemoveCarGravityUIController___c_TypeInfo_12d7178 + 0xb8)
                      ;
                      lVar3 = puVar6[6];
                      if (lVar3 == 0) {
                        if (((*(byte *)(_ContainerRemoveCarGravityUIController___c_TypeInfo_12d7178
                                       + 0x133) >> 2 & 1) != 0) &&
                           (*(int *)(_ContainerRemoveCarGravityUIController___c_TypeInfo_12d7178 +
                                    0xe0) == 0)) {
                          native_sub_4327ec();
                          puVar6 = *(undefined8 **)
                                    (_ContainerRemoveCarGravityUIController___c_TypeInfo_12d7178 +
                                    0xb8);
                        }
                        uVar5 = *puVar6;
                        lVar3 = native_sub_432808(_System_Action_string__TypeInfo_12d2080);
                        native_System_Action_Font____ctor_9867a8
                                  (lVar3,uVar5,
                                   _Method_ContainerRemoveCarGravityUIController___c__Update_b__28_1___12e9890
                                   ,_Method_System_Action_string___ctor___12d7fe8);
                        plVar10 = (long *)(*(long *)(
                                                  _ContainerRemoveCarGravityUIController___c_TypeInfo_12d7178
                                                  + 0xb8) + 0x30);
                        *plVar10 = lVar3;
                        native_sub_4326e0(plVar10,lVar3);
                      }
                      uVar5 = *(undefined8 *)(param_3 + 0x20);
                      if (((*(byte *)(_HjdBluetoothHardwareInterface_TypeInfo_12d4938 + 0x133) >> 2
                           & 1) != 0) &&
                         (*(int *)(_HjdBluetoothHardwareInterface_TypeInfo_12d4938 + 0xe0) == 0)) {
                        native_sub_4327ec();
                      }
                      native_HjdBluetoothHardwareInterface__StartAdvertising_dc4054(lVar3,uVar5,0);
                      if (((*(byte *)(_ContainerRemoveCarGravityUIController___c_TypeInfo_12d7178 +
                                     0x133) >> 2 & 1) != 0) &&
                         (*(int *)(_ContainerRemoveCarGravityUIController___c_TypeInfo_12d7178 +
                                  0xe0) == 0)) {
                        native_sub_4327ec();
                      }
                      puVar6 = *(undefined8 **)
                                (_ContainerRemoveCarGravityUIController___c_TypeInfo_12d7178 + 0xb8)
                      ;
                      lVar3 = puVar6[7];
                      if (lVar3 == 0) {
                        if (((*(byte *)(_ContainerRemoveCarGravityUIController___c_TypeInfo_12d7178
                                       + 0x133) >> 2 & 1) != 0) &&
                           (*(int *)(_ContainerRemoveCarGravityUIController___c_TypeInfo_12d7178 +
                                    0xe0) == 0)) {
                          native_sub_4327ec();
                          puVar6 = *(undefined8 **)
                                    (_ContainerRemoveCarGravityUIController___c_TypeInfo_12d7178 +
                                    0xb8);
                        }
                        uVar5 = *puVar6;
                        lVar3 = native_sub_432808(_System_Action_string__TypeInfo_12d2080);
                        native_System_Action_Font____ctor_9867a8
                                  (lVar3,uVar5,
                                   _Method_ContainerRemoveCarGravityUIController___c__Update_b__28_2___12e9898
                                   ,_Method_System_Action_string___ctor___12d7fe8);
                        plVar10 = (long *)(*(long *)(
                                                  _ContainerRemoveCarGravityUIController___c_TypeInfo_12d7178
                                                  + 0xb8) + 0x38);
                        *plVar10 = lVar3;
                        native_sub_4326e0(plVar10,lVar3);
                      }
                      uVar5 = *(undefined8 *)(param_3 + 0x20);
                      if (((*(byte *)(_HjdBluetoothHardwareInterface_TypeInfo_12d4938 + 0x133) >> 2
                           & 1) != 0) &&
                         (*(int *)(_HjdBluetoothHardwareInterface_TypeInfo_12d4938 + 0xe0) == 0)) {
                        native_sub_4327ec();
                      }
                      native_HjdBluetoothHardwareInterface__StartAdvertising_dc4054(lVar3,uVar5,0);
                    }
                    lVar3 = native_ContainerRemoveCarGravityUIController__gethaomiao_de202c();
                    if (((*(byte *)(_ContainerRemoveCarGravityUIController_TypeInfo_12d3f60 + 0x133)
                          >> 2 & 1) != 0) &&
                       (*(int *)(_ContainerRemoveCarGravityUIController_TypeInfo_12d3f60 + 0xe0) ==
                        0)) {
                      native_sub_4327ec(_ContainerRemoveCarGravityUIController_TypeInfo_12d3f60);
                    }
                    if (0x13 < lVar3 - **(long **)(
                                                  _ContainerRemoveCarGravityUIController_TypeInfo_12d3f60
                                                  + 0xb8)) {
                      uVar5 = native_ContainerRemoveCarGravityUIController__gethaomiao_de202c();
                      if (((*(byte *)(_ContainerRemoveCarGravityUIController_TypeInfo_12d3f60 +
                                     0x133) >> 2 & 1) != 0) &&
                         (*(int *)(_ContainerRemoveCarGravityUIController_TypeInfo_12d3f60 + 0xe0)
                          == 0)) {
                        native_sub_4327ec(_ContainerRemoveCarGravityUIController_TypeInfo_12d3f60);
                      }
                      **(undefined8 **)
                        (_ContainerRemoveCarGravityUIController_TypeInfo_12d3f60 + 0xb8) = uVar5;
                      if (0 < *(int *)(param_3 + 0x38)) {
                        *(int *)(param_3 + 0x38) = *(int *)(param_3 + 0x38) + -1;
                      }
                      if (0 < *(int *)(param_3 + 0x70)) {
                        *(int *)(param_3 + 0x70) = *(int *)(param_3 + 0x70) + -1;
                      }
                    }
                    return;
                  }
                  native_Assets_Scripts_Tools_HjdBleTool__data_copy_7f6ea8
                            (*(undefined8 *)(param_3 + 0x28),*(undefined8 *)(param_3 + 0x30),0);
                  lVar3 = native_sub_432750(_byte___TypeInfo_12d3060,0x13);
                  if (lVar3 == 0) goto LAB_00de201c;
                  if ((*(int *)(lVar3 + 0x18) != 0) &&
                     (*(undefined1 *)(lVar3 + 0x20) = *(undefined1 *)(param_3 + 0x18),
                     *(int *)(lVar3 + 0x18) != 1)) {
                    *(undefined1 *)(lVar3 + 0x21) = *(undefined1 *)(param_3 + 0x1a);
                    if (((*(byte *)(_PanelMainUIController_TypeInfo_12d5600 + 0x133) >> 2 & 1) != 0)
                       && (*(int *)(_PanelMainUIController_TypeInfo_12d5600 + 0xe0) == 0)) {
                      native_sub_4327ec();
                    }
                    lVar8 = *(long *)(*(long *)(_PanelMainUIController_TypeInfo_12d5600 + 0xb8) +
                                     0x18);
                    if (lVar8 == 0) goto LAB_00de201c;
                    if ((*(int *)(lVar8 + 0x18) != 0) &&
                       (uVar2 = (uint)*(undefined8 *)(lVar3 + 0x18), 2 < uVar2)) {
                      *(undefined1 *)(lVar3 + 0x22) = *(undefined1 *)(lVar8 + 0x20);
                      lVar8 = *(long *)(*(long *)(_PanelMainUIController_TypeInfo_12d5600 + 0xb8) +
                                       0x18);
                      if (lVar8 == 0) goto LAB_00de201c;
                      if ((1 < *(uint *)(lVar8 + 0x18)) && (3 < uVar2)) {
                        *(undefined1 *)(lVar3 + 0x23) = *(undefined1 *)(lVar8 + 0x21);
                        lVar8 = *(long *)(*(long *)(_PanelMainUIController_TypeInfo_12d5600 + 0xb8)
                                         + 0x18);
                        if (lVar8 == 0) goto LAB_00de201c;
                        if ((2 < *(uint *)(lVar8 + 0x18)) && (4 < uVar2)) {
                          *(undefined1 *)(lVar3 + 0x24) = *(undefined1 *)(lVar8 + 0x22);
                          if (((*(byte *)(_HjdBluetoothHardwareInterface_TypeInfo_12d4938 + 0x133)
                                >> 2 & 1) != 0) &&
                             (*(int *)(_HjdBluetoothHardwareInterface_TypeInfo_12d4938 + 0xe0) == 0)
                             ) {
                            native_sub_4327ec();
                            uVar2 = (uint)*(undefined8 *)(lVar3 + 0x18);
                          }
                          if (((5 < uVar2) &&
                              (*(undefined1 *)(lVar3 + 0x25) =
                                    *(undefined1 *)
                                     (*(long *)(_HjdBluetoothHardwareInterface_TypeInfo_12d4938 +
                                               0xb8) + 0x12), uVar2 != 6)) &&
                             (*(undefined1 *)(lVar3 + 0x26) =
                                   *(undefined1 *)
                                    (*(long *)(_HjdBluetoothHardwareInterface_TypeInfo_12d4938 +
                                              0xb8) + 0x13), 7 < uVar2)) {
                            *(undefined1 *)(lVar3 + 0x27) =
                                 *(undefined1 *)
                                  (*(long *)(_HjdBluetoothHardwareInterface_TypeInfo_12d4938 + 0xb8)
                                  + 0x14);
                            lVar8 = *plVar10;
                            if (lVar8 == 0) goto LAB_00de201c;
                            if ((*(int *)(lVar8 + 0x18) != 0) && (8 < uVar2)) {
                              *(undefined1 *)(lVar3 + 0x28) = *(undefined1 *)(lVar8 + 0x20);
                              lVar8 = *plVar10;
                              if (lVar8 == 0) goto LAB_00de201c;
                              if ((1 < *(uint *)(lVar8 + 0x18)) && (9 < uVar2)) {
                                *(undefined1 *)(lVar3 + 0x29) = *(undefined1 *)(lVar8 + 0x21);
                                lVar8 = *plVar10;
                                if (lVar8 == 0) goto LAB_00de201c;
                                if ((2 < *(uint *)(lVar8 + 0x18)) && (10 < uVar2)) {
                                  *(undefined1 *)(lVar3 + 0x2a) = *(undefined1 *)(lVar8 + 0x22);
                                  lVar8 = *plVar10;
                                  if (lVar8 == 0) goto LAB_00de201c;
                                  if ((3 < *(uint *)(lVar8 + 0x18)) && (0xb < uVar2)) {
                                    *(undefined1 *)(lVar3 + 0x2b) = *(undefined1 *)(lVar8 + 0x23);
                                    lVar8 = *plVar10;
                                    if (lVar8 == 0) goto LAB_00de201c;
                                    if ((4 < *(uint *)(lVar8 + 0x18)) && (0xc < uVar2)) {
                                      *(undefined1 *)(lVar3 + 0x2c) = *(undefined1 *)(lVar8 + 0x24);
                                      lVar8 = *plVar10;
                                      if (lVar8 == 0) goto LAB_00de201c;
                                      if ((5 < *(uint *)(lVar8 + 0x18)) && (0xd < uVar2)) {
                                        *(undefined1 *)(lVar3 + 0x2d) =
                                             *(undefined1 *)(lVar8 + 0x25);
                                        lVar8 = *plVar10;
                                        if (lVar8 == 0) goto LAB_00de201c;
                                        if ((6 < *(uint *)(lVar8 + 0x18)) && (0xe < uVar2)) {
                                          *(undefined1 *)(lVar3 + 0x2e) =
                                               *(undefined1 *)(lVar8 + 0x26);
                                          lVar8 = *plVar10;
                                          if (lVar8 == 0) goto LAB_00de201c;
                                          if ((7 < *(uint *)(lVar8 + 0x18)) && (0xf < uVar2)) {
                                            *(undefined1 *)(lVar3 + 0x2f) =
                                                 *(undefined1 *)(lVar8 + 0x27);
                                            lVar8 = *plVar10;
                                            if (lVar8 == 0) goto LAB_00de201c;
                                            if ((8 < *(uint *)(lVar8 + 0x18)) && (0x10 < uVar2)) {
                                              *(undefined1 *)(lVar3 + 0x30) =
                                                   *(undefined1 *)(lVar8 + 0x28);
                                              lVar8 = *plVar10;
                                              if (lVar8 == 0) goto LAB_00de201c;
                                              if ((9 < *(uint *)(lVar8 + 0x18)) && (0x11 < uVar2)) {
                                                *(undefined1 *)(lVar3 + 0x31) =
                                                     *(undefined1 *)(lVar8 + 0x29);
                                                *(long *)(param_3 + 0x20) = lVar3;
                                                native_sub_4326e0((long *)(param_3 + 0x20),lVar3);
                                                *(undefined1 *)(param_3 + 0x1d) = 1;
                                                *(undefined4 *)(param_3 + 0x38) = 3;
                                                goto LAB_00de1cf8;
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
                }
              }
            }
          }
        }
      }
    }
    uVar5 = native_sub_43283c();
                    /* WARNING: Subroutine does not return */
    native_sub_4327dc(uVar5,0);
  }
LAB_00de201c:
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* ContainerRemoveCarGravityUIController$$gethaomiao @ 0xde202c
 * int64_t ContainerRemoveCarGravityUIController__gethaomiao (ContainerRemoveCarGravityUIController_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ContainerRemoveCarGravityUIController$$gethaomiao
   int64_t ContainerRemoveCarGravityUIController__gethaomiao
   (ContainerRemoveCarGravityUIController_o* __this, const MethodInfo* method); */

long native_ContainerRemoveCarGravityUIController__gethaomiao_de202c(void)

{
  long lVar1;
  undefined8 uStack_18;
  
  if ((bRam0000000001346e99 & 1) == 0) {
    native_sub_43273c(&System_DateTime_TypeInfo_12d42f8);
    bRam0000000001346e99 = 1;
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



/* ContainerRemoveCarGravityUIController$$Awake @ 0xde20e0
 * void ContainerRemoveCarGravityUIController__Awake (ContainerRemoveCarGravityUIController_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ContainerRemoveCarGravityUIController$$Awake
   void ContainerRemoveCarGravityUIController__Awake (ContainerRemoveCarGravityUIController_o*
   __this, const MethodInfo* method); */

void native_ContainerRemoveCarGravityUIController__Awake_de20e0(long param_1)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  
  if ((bRam0000000001346e9a & 1) == 0) {
    native_sub_43273c(&Method_UnityEngine_GameObject_GetComponent_UIButton____12e4a88);
    native_sub_43273c(&StringLiteral_ButtonGravityResult_12ec8b8);
    native_sub_43273c(&StringLiteral_ButtonGravityCorrect_12ec8a8);
    native_sub_43273c(&StringLiteral_ButtonGravityToptool_12ec8c8);
    bRam0000000001346e9a = 1;
  }
  lVar4 = native_UnityEngine_GameObject__Find_8dead0(_StringLiteral_ButtonGravityToptool_12ec8c8,0);
  if (lVar4 != 0) {
    uVar5 = native_UnityEngine_GameObject__get_gameObject_8debb8(lVar4,0);
    *(undefined8 *)(param_1 + 0x78) = uVar5;
    native_sub_4326e0();
    lVar4 = native_UnityEngine_GameObject__Find_8dead0(_StringLiteral_ButtonGravityResult_12ec8b8,0)
    ;
    if (lVar4 != 0) {
      uVar5 = native_UnityEngine_GameObject__get_gameObject_8debb8(lVar4,0);
      *(undefined8 *)(param_1 + 0x80) = uVar5;
      native_sub_4326e0();
      lVar4 = native_UnityEngine_GameObject__Find_8dead0
                        (_StringLiteral_ButtonGravityCorrect_12ec8a8,0);
      if (lVar4 != 0) {
        uVar5 = native_UnityEngine_GameObject__GetComponent_BE2_BlockSectionHeader_Custom__4a2214
                          (lVar4,_Method_UnityEngine_GameObject_GetComponent_UIButton____12e4a88);
        puVar6 = (undefined8 *)(param_1 + 0x88);
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
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* ContainerRemoveCarGravityUIController$$.ctor @ 0xde21d8
 * void ContainerRemoveCarGravityUIController___ctor (ContainerRemoveCarGravityUIController_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ContainerRemoveCarGravityUIController$$.ctor
   void ContainerRemoveCarGravityUIController___ctor (ContainerRemoveCarGravityUIController_o*
   __this, const MethodInfo* method); */

undefined1  [16] native_ContainerRemoveCarGravityUIController___ctor_de21d8(ulong param_1)

{
  undefined8 uVar1;
  undefined1 auVar2 [16];
  
  if ((bRam0000000001346e9b & 1) == 0) {
    native_sub_43273c(&byte___TypeInfo_12d3060);
    bRam0000000001346e9b = 1;
  }
  *(undefined4 *)(param_1 + 0x18) = 0xa070605;
  *(undefined1 *)(param_1 + 0x1c) = 9;
  uVar1 = native_sub_432750(_byte___TypeInfo_12d3060,0x13);
  *(undefined8 *)(param_1 + 0x20) = uVar1;
  native_sub_4326e0(param_1 + 0x20);
  uVar1 = native_sub_432750(_byte___TypeInfo_12d3060,10);
  *(undefined8 *)(param_1 + 0x28) = uVar1;
  native_sub_4326e0(param_1 + 0x28);
  uVar1 = native_sub_432750(_byte___TypeInfo_12d3060,10);
  *(undefined8 *)(param_1 + 0x30) = uVar1;
  native_sub_4326e0(param_1 + 0x30);
  *(undefined4 *)(param_1 + 0x6c) = 1;
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



/* ContainerRemoveCarGravityUIController$$.cctor @ 0xde2294
 * void ContainerRemoveCarGravityUIController___cctor (const MethodInfo* method); */

/* ContainerRemoveCarGravityUIController$$.cctor
   void ContainerRemoveCarGravityUIController___cctor (const MethodInfo* method); */

void native_ContainerRemoveCarGravityUIController___cctor_de2294(void)

{
  return;
}



/* ContainerRemoveCarGravityUIController$$<OnClickButtonBlesetting>b__24_4 @ 0xde2298
 * void ContainerRemoveCarGravityUIController___OnClickButtonBlesetting_b__24_4 (ContainerRemoveCarGravityUIController_o* __this, System_String_o* data, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ContainerRemoveCarGravityUIController$$<OnClickButtonBlesetting>b__24_4
   void ContainerRemoveCarGravityUIController___OnClickButtonBlesetting_b__24_4
   (ContainerRemoveCarGravityUIController_o* __this, System_String_o* data, const MethodInfo*
   method); */

void native_ContainerRemoveCarGravityUIController___OnClickButtonBlesetting_b__24_4_de2298
               (long param_1,undefined8 param_2)

{
  ulong *puVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  char cVar4;
  bool bVar5;
  uint uVar6;
  undefined8 uVar7;
  long lVar8;
  ulong uVar9;
  undefined8 *puVar10;
  long lVar11;
  char *pcVar12;
  long *plVar13;
  
  if ((bRam0000000001346e9c & 1) == 0) {
    native_sub_43273c(&byte___TypeInfo_12d3060);
    native_sub_43273c(&ContainerMatchingCodeUIController_TypeInfo_12d3f38);
    native_sub_43273c(&System_Convert_TypeInfo_12d3fd0);
    native_sub_43273c(&HjdBluetoothHardwareInterface_TypeInfo_12d4938);
    native_sub_43273c(&PanelMainUIController_TypeInfo_12d5600);
    bRam0000000001346e9c = 1;
  }
  uVar7 = native_sub_432750(_byte___TypeInfo_12d3060,2);
  if (((*(byte *)(_System_Convert_TypeInfo_12d3fd0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_System_Convert_TypeInfo_12d3fd0 + 0xe0) == 0)) {
    native_sub_4327ec(_System_Convert_TypeInfo_12d3fd0);
  }
  lVar8 = native_System_Convert__FromBase64String_79aff4(param_2,0);
  uVar2 = *(undefined1 *)(param_1 + 0x18);
  uVar3 = *(undefined1 *)(param_1 + 0x1b);
  if (((*(byte *)(_HjdBluetoothHardwareInterface_TypeInfo_12d4938 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_HjdBluetoothHardwareInterface_TypeInfo_12d4938 + 0xe0) == 0)) {
    native_sub_4327ec(_HjdBluetoothHardwareInterface_TypeInfo_12d4938);
  }
  lVar11 = *(long *)(_HjdBluetoothHardwareInterface_TypeInfo_12d4938 + 0xb8);
  uVar9 = native_HjdBluetoothHardwareInterface__calDataIsTrue_dc485c
                    (lVar8,uVar2,uVar3,*(undefined1 *)(lVar11 + 0x12),*(undefined1 *)(lVar11 + 0x13)
                     ,*(undefined1 *)(lVar11 + 0x14),uVar7,0);
  if ((uVar9 & 1) == 0) {
    return;
  }
  if (((*(byte *)(_PanelMainUIController_TypeInfo_12d5600 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_PanelMainUIController_TypeInfo_12d5600 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar7 = *(undefined8 *)(*(long *)(_PanelMainUIController_TypeInfo_12d5600 + 0xb8) + 0xe8);
  if (((*(byte *)(_ContainerMatchingCodeUIController_TypeInfo_12d3f38 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_ContainerMatchingCodeUIController_TypeInfo_12d3f38 + 0xe0) == 0)) {
    native_sub_4327ec(_ContainerMatchingCodeUIController_TypeInfo_12d3f38);
  }
  puVar10 = *(undefined8 **)(_ContainerMatchingCodeUIController_TypeInfo_12d3f38 + 0xb8);
  *puVar10 = uVar7;
  native_sub_4326e0(puVar10,uVar7);
  pcVar12 = (char *)(*(long *)(_ContainerMatchingCodeUIController_TypeInfo_12d3f38 + 0xb8) + 9);
  if (*pcVar12 == '\0') {
    if (((*(byte *)(_ContainerMatchingCodeUIController_TypeInfo_12d3f38 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_ContainerMatchingCodeUIController_TypeInfo_12d3f38 + 0xe0) == 0)) {
      native_sub_4327ec();
      pcVar12 = (char *)(*(long *)(_ContainerMatchingCodeUIController_TypeInfo_12d3f38 + 0xb8) + 9);
    }
    *pcVar12 = '\x01';
  }
  if (((*(byte *)(_HjdBluetoothHardwareInterface_TypeInfo_12d4938 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_HjdBluetoothHardwareInterface_TypeInfo_12d4938 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar6 = native_HjdBluetoothHardwareInterface__bleuseNumber_dc4940(0);
  if (((*(byte *)(_PanelMainUIController_TypeInfo_12d5600 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_PanelMainUIController_TypeInfo_12d5600 + 0xe0) == 0)) {
    native_sub_4327ec(_PanelMainUIController_TypeInfo_12d5600);
  }
  if (lVar8 != 0) {
    if (uVar6 < *(uint *)(lVar8 + 0x18)) {
      lVar11 = *(long *)(*(long *)(_PanelMainUIController_TypeInfo_12d5600 + 0xb8) + 0x18);
      if (lVar11 == 0) goto LAB_00de2810;
      if (*(int *)(lVar11 + 0x18) != 0) {
        *(undefined1 *)(lVar11 + 0x20) = *(undefined1 *)(lVar8 + (int)uVar6 + 0x20);
        if (uVar6 + 1 < *(uint *)(lVar8 + 0x18)) {
          lVar11 = *(long *)(*(long *)(_PanelMainUIController_TypeInfo_12d5600 + 0xb8) + 0x18);
          if (lVar11 == 0) goto LAB_00de2810;
          if (1 < *(uint *)(lVar11 + 0x18)) {
            *(undefined1 *)(lVar11 + 0x21) = *(undefined1 *)(lVar8 + (int)(uVar6 + 1) + 0x20);
            if (uVar6 + 2 < *(uint *)(lVar8 + 0x18)) {
              lVar11 = *(long *)(*(long *)(_PanelMainUIController_TypeInfo_12d5600 + 0xb8) + 0x18);
              if (lVar11 == 0) goto LAB_00de2810;
              if (2 < *(uint *)(lVar11 + 0x18)) {
                *(undefined1 *)(lVar11 + 0x22) = *(undefined1 *)(lVar8 + (int)(uVar6 + 2) + 0x20);
                *(undefined1 *)(*(long *)(_PanelMainUIController_TypeInfo_12d5600 + 0xb8) + 0x20) =
                     1;
                lVar8 = native_sub_432750(_byte___TypeInfo_12d3060,0x13);
                if (lVar8 == 0) goto LAB_00de2810;
                uVar6 = *(uint *)(lVar8 + 0x18);
                if ((uVar6 != 0) &&
                   (*(undefined1 *)(lVar8 + 0x20) = *(undefined1 *)(param_1 + 0x18), uVar6 != 1)) {
                  *(undefined1 *)(lVar8 + 0x21) = *(undefined1 *)(param_1 + 0x1a);
                  lVar11 = *(long *)(*(long *)(_PanelMainUIController_TypeInfo_12d5600 + 0xb8) +
                                    0x18);
                  if (lVar11 == 0) goto LAB_00de2810;
                  if ((*(int *)(lVar11 + 0x18) != 0) && (2 < uVar6)) {
                    *(undefined1 *)(lVar8 + 0x22) = *(undefined1 *)(lVar11 + 0x20);
                    lVar11 = *(long *)(*(long *)(_PanelMainUIController_TypeInfo_12d5600 + 0xb8) +
                                      0x18);
                    if (lVar11 == 0) goto LAB_00de2810;
                    if ((1 < *(uint *)(lVar11 + 0x18)) && (3 < uVar6)) {
                      *(undefined1 *)(lVar8 + 0x23) = *(undefined1 *)(lVar11 + 0x21);
                      lVar11 = *(long *)(*(long *)(_PanelMainUIController_TypeInfo_12d5600 + 0xb8) +
                                        0x18);
                      if (lVar11 == 0) goto LAB_00de2810;
                      if ((((2 < *(uint *)(lVar11 + 0x18)) && (4 < uVar6)) &&
                          (*(undefined1 *)(lVar8 + 0x24) = *(undefined1 *)(lVar11 + 0x22),
                          uVar6 != 5)) &&
                         ((*(undefined1 *)(lVar8 + 0x25) =
                                *(undefined1 *)
                                 (*(long *)(_HjdBluetoothHardwareInterface_TypeInfo_12d4938 + 0xb8)
                                 + 0x12), 6 < uVar6 &&
                          (*(undefined1 *)(lVar8 + 0x26) =
                                *(undefined1 *)
                                 (*(long *)(_HjdBluetoothHardwareInterface_TypeInfo_12d4938 + 0xb8)
                                 + 0x13), uVar6 != 7)))) {
                        *(undefined1 *)(lVar8 + 0x27) =
                             *(undefined1 *)
                              (*(long *)(_HjdBluetoothHardwareInterface_TypeInfo_12d4938 + 0xb8) +
                              0x14);
                        plVar13 = (long *)(param_1 + 0x28);
                        lVar11 = *plVar13;
                        if (lVar11 == 0) goto LAB_00de2810;
                        if ((*(int *)(lVar11 + 0x18) != 0) && (8 < uVar6)) {
                          *(undefined1 *)(lVar8 + 0x28) = *(undefined1 *)(lVar11 + 0x20);
                          lVar11 = *plVar13;
                          if (lVar11 == 0) goto LAB_00de2810;
                          if ((1 < *(uint *)(lVar11 + 0x18)) && (9 < uVar6)) {
                            *(undefined1 *)(lVar8 + 0x29) = *(undefined1 *)(lVar11 + 0x21);
                            lVar11 = *plVar13;
                            if (lVar11 == 0) goto LAB_00de2810;
                            if ((2 < *(uint *)(lVar11 + 0x18)) && (10 < uVar6)) {
                              *(undefined1 *)(lVar8 + 0x2a) = *(undefined1 *)(lVar11 + 0x22);
                              lVar11 = *plVar13;
                              if (lVar11 == 0) goto LAB_00de2810;
                              if ((3 < *(uint *)(lVar11 + 0x18)) && (0xb < uVar6)) {
                                *(undefined1 *)(lVar8 + 0x2b) = *(undefined1 *)(lVar11 + 0x23);
                                lVar11 = *plVar13;
                                if (lVar11 == 0) goto LAB_00de2810;
                                if ((4 < *(uint *)(lVar11 + 0x18)) && (0xc < uVar6)) {
                                  *(undefined1 *)(lVar8 + 0x2c) = *(undefined1 *)(lVar11 + 0x24);
                                  lVar11 = *plVar13;
                                  if (lVar11 == 0) goto LAB_00de2810;
                                  if ((5 < *(uint *)(lVar11 + 0x18)) && (0xd < uVar6)) {
                                    *(undefined1 *)(lVar8 + 0x2d) = *(undefined1 *)(lVar11 + 0x25);
                                    lVar11 = *plVar13;
                                    if (lVar11 == 0) goto LAB_00de2810;
                                    if ((6 < *(uint *)(lVar11 + 0x18)) && (0xe < uVar6)) {
                                      *(undefined1 *)(lVar8 + 0x2e) = *(undefined1 *)(lVar11 + 0x26)
                                      ;
                                      lVar11 = *plVar13;
                                      if (lVar11 == 0) goto LAB_00de2810;
                                      if ((7 < *(uint *)(lVar11 + 0x18)) && (0xf < uVar6)) {
                                        *(undefined1 *)(lVar8 + 0x2f) =
                                             *(undefined1 *)(lVar11 + 0x27);
                                        lVar11 = *plVar13;
                                        if (lVar11 == 0) goto LAB_00de2810;
                                        if ((8 < *(uint *)(lVar11 + 0x18)) && (0x10 < uVar6)) {
                                          *(undefined1 *)(lVar8 + 0x30) =
                                               *(undefined1 *)(lVar11 + 0x28);
                                          lVar11 = *plVar13;
                                          if (lVar11 == 0) goto LAB_00de2810;
                                          if ((9 < *(uint *)(lVar11 + 0x18)) && (0x11 < uVar6)) {
                                            *(undefined1 *)(lVar8 + 0x31) =
                                                 *(undefined1 *)(lVar11 + 0x29);
                                            *(long *)(param_1 + 0x20) = lVar8;
                                            native_sub_4326e0((long *)(param_1 + 0x20));
                                            *(undefined1 *)(param_1 + 0x1d) = 0;
                                            *(undefined4 *)(param_1 + 0x38) = 5;
                                            uVar7 = native_sub_432750(_byte___TypeInfo_12d3060,10);
                                            *(undefined8 *)(param_1 + 0x28) = uVar7;
                                            if (iRam0000000001345318 != 0) {
                                              puVar1 = (ulong *)(((ulong)plVar13 >> 0x12 & 0x7fff) *
                                                                 8 + 0x138ecd8);
                                              do {
                                                cVar4 = '\x01';
                                                bVar5 = (bool)ExclusiveMonitorPass(puVar1,0x10);
                                                if (bVar5) {
                                                  *puVar1 = *puVar1 | 1L << ((ulong)plVar13 >> 0xc &
                                                                            0x3f);
                                                  cVar4 = ExclusiveMonitorsStatus();
                                                }
                                              } while (cVar4 != '\0');
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
            }
          }
        }
      }
    }
    uVar7 = native_sub_43283c();
                    /* WARNING: Subroutine does not return */
    native_sub_4327dc(uVar7,0);
  }
LAB_00de2810:
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}


