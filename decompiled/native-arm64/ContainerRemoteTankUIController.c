/* ARM64 IL2CPP native pseudocode from Ghidra.
 * Recovered implementation, not original C# source.
 * Function boundaries follow the IL2CPP method address table. */


/* ContainerRemoteTankUIController$$Start @ 0xddd380
 * void ContainerRemoteTankUIController__Start (ContainerRemoteTankUIController_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ContainerRemoteTankUIController$$Start
   void ContainerRemoteTankUIController__Start (ContainerRemoteTankUIController_o* __this, const
   MethodInfo* method); */

void native_ContainerRemoteTankUIController__Start_ddd380(long param_1)

{
  undefined8 *puVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  uint uVar6;
  long lVar7;
  long *plVar8;
  
  if ((bRam0000000001346e86 & 1) == 0) {
    native_sub_43273c(&PanelMainUIController_TypeInfo_12d5600);
    native_sub_43273c(&StringLiteral_gyro_12f49e0);
    native_sub_43273c(&StringLiteral_hand_12f4a18);
    native_sub_43273c(&StringLiteral__12eaac0);
    bRam0000000001346e86 = 1;
  }
  if (((*(byte *)(_PanelMainUIController_TypeInfo_12d5600 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_PanelMainUIController_TypeInfo_12d5600 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  lVar2 = *(long *)(*(long *)(_PanelMainUIController_TypeInfo_12d5600 + 0xb8) + 0x80);
  if (lVar2 == 0) goto LAB_00ddd514;
  uVar3 = native_System_String__Equals_af8bfc(lVar2,_StringLiteral_hand_12f4a18,0);
  if ((uVar3 & 1) == 0) {
    if (((*(ushort *)(_PanelMainUIController_TypeInfo_12d5600 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(_PanelMainUIController_TypeInfo_12d5600 + 0xe0) == 0)) {
      native_sub_4327ec(_PanelMainUIController_TypeInfo_12d5600);
    }
    lVar2 = *(long *)(*(long *)(_PanelMainUIController_TypeInfo_12d5600 + 0xb8) + 0x80);
    if (lVar2 == 0) goto LAB_00ddd514;
    uVar3 = native_System_String__Equals_af8bfc(lVar2,_StringLiteral_gyro_12f49e0,0);
    if ((uVar3 & 1) != 0) {
      if (((*(byte *)(_PanelMainUIController_TypeInfo_12d5600 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_PanelMainUIController_TypeInfo_12d5600 + 0xe0) == 0)) {
        native_sub_4327ec();
      }
      *(undefined8 *)(*(long *)(_PanelMainUIController_TypeInfo_12d5600 + 0xb8) + 0x80) =
           _StringLiteral__12eaac0;
      native_sub_4326e0();
      lVar2 = native_PanelMainUIController__get_Instance_738fb0(0);
      if (lVar2 == 0) goto LAB_00ddd514;
      native_PanelMainUIController__EnterRemoveTankGravity_73a84c(lVar2,0);
    }
  }
  else {
    if (((*(ushort *)(_PanelMainUIController_TypeInfo_12d5600 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(_PanelMainUIController_TypeInfo_12d5600 + 0xe0) == 0)) {
      native_sub_4327ec(_PanelMainUIController_TypeInfo_12d5600);
    }
    *(undefined8 *)(*(long *)(_PanelMainUIController_TypeInfo_12d5600 + 0xb8) + 0x80) =
         _StringLiteral__12eaac0;
    native_sub_4326e0();
    lVar2 = native_PanelMainUIController__get_Instance_738fb0(0);
    if (lVar2 == 0) {
LAB_00ddd514:
                    /* WARNING: Subroutine does not return */
      native_sub_432810();
    }
    native_PanelMainUIController__SwitchLandscapescreen_73a2d4(lVar2,0);
    lVar2 = native_PanelMainUIController__get_Instance_738fb0(0);
    if (lVar2 == 0) goto LAB_00ddd514;
    native_PanelMainUIController__EnterRemoteHandTank_73ada0(lVar2,0);
  }
  if ((bRam0000000001346e87 & 1) == 0) {
    native_sub_43273c(&EventDelegate_Callback_TypeInfo_12d72e8);
    native_sub_43273c(&Method_ContainerRemoteTankUIController_OnClickButtonBack___12e3060);
    native_sub_43273c(&Method_ContainerRemoteTankUIController_OnClickButtonBlesetting___12e3068);
    native_sub_43273c(&EventDelegate_TypeInfo_12d4590);
    native_sub_43273c(&Method_UnityEngine_GameObject_GetComponent_UIButton____12e4a88);
    native_sub_43273c(&Method_System_Collections_Generic_List_EventDelegate__Add___12dc740);
    native_sub_43273c(&StringLiteral_TankBloodbar_12f1498);
    native_sub_43273c(&StringLiteral_xue1_12f6de8);
    native_sub_43273c(&StringLiteral_xue2_12f6df0);
    native_sub_43273c(&StringLiteral_xue4_12f6e00);
    native_sub_43273c(&StringLiteral_xue5_12f6e08);
    native_sub_43273c(&StringLiteral_xue3_12f6df8);
    bRam0000000001346e87 = 1;
  }
  lVar2 = native_UnityEngine_Component__get_transform_8da62c(param_1,0);
  if ((lVar2 != 0) &&
     (lVar2 = native_UnityEngine_Transform__FindChild_772e3c
                        (lVar2,_StringLiteral_TankBloodbar_12f1498,0), lVar2 != 0)) {
    lVar2 = native_UnityEngine_Component__get_gameObject_8da66c(lVar2,0);
    plVar8 = (long *)(param_1 + 0x40);
    *plVar8 = lVar2;
    native_sub_4326e0(plVar8,lVar2);
    if ((*plVar8 != 0) &&
       ((lVar2 = native_UnityEngine_GameObject__get_transform_8de5c8(*plVar8,0), lVar2 != 0 &&
        (lVar2 = native_UnityEngine_Transform__FindChild_772e3c(lVar2,_StringLiteral_xue1_12f6de8,0)
        , lVar2 != 0)))) {
      uVar4 = native_UnityEngine_Component__get_gameObject_8da66c(lVar2,0);
      *(undefined8 *)(param_1 + 0x48) = uVar4;
      native_sub_4326e0((undefined8 *)(param_1 + 0x48),uVar4);
      if ((*(long *)(param_1 + 0x40) != 0) &&
         ((lVar2 = native_UnityEngine_GameObject__get_transform_8de5c8(*(long *)(param_1 + 0x40),0),
          lVar2 != 0 &&
          (lVar2 = native_UnityEngine_Transform__FindChild_772e3c
                             (lVar2,_StringLiteral_xue2_12f6df0,0), lVar2 != 0)))) {
        uVar4 = native_UnityEngine_Component__get_gameObject_8da66c(lVar2,0);
        *(undefined8 *)(param_1 + 0x50) = uVar4;
        native_sub_4326e0((undefined8 *)(param_1 + 0x50),uVar4);
        if ((*(long *)(param_1 + 0x40) != 0) &&
           ((lVar2 = native_UnityEngine_GameObject__get_transform_8de5c8
                               (*(long *)(param_1 + 0x40),0), lVar2 != 0 &&
            (lVar2 = native_UnityEngine_Transform__FindChild_772e3c
                               (lVar2,_StringLiteral_xue3_12f6df8,0), lVar2 != 0)))) {
          uVar4 = native_UnityEngine_Component__get_gameObject_8da66c(lVar2,0);
          *(undefined8 *)(param_1 + 0x58) = uVar4;
          native_sub_4326e0((undefined8 *)(param_1 + 0x58),uVar4);
          if ((*(long *)(param_1 + 0x40) != 0) &&
             ((lVar2 = native_UnityEngine_GameObject__get_transform_8de5c8
                                 (*(long *)(param_1 + 0x40),0), lVar2 != 0 &&
              (lVar2 = native_UnityEngine_Transform__FindChild_772e3c
                                 (lVar2,_StringLiteral_xue4_12f6e00,0), lVar2 != 0)))) {
            uVar4 = native_UnityEngine_Component__get_gameObject_8da66c(lVar2,0);
            *(undefined8 *)(param_1 + 0x60) = uVar4;
            native_sub_4326e0((undefined8 *)(param_1 + 0x60),uVar4);
            if ((*(long *)(param_1 + 0x40) != 0) &&
               ((lVar2 = native_UnityEngine_GameObject__get_transform_8de5c8
                                   (*(long *)(param_1 + 0x40),0), lVar2 != 0 &&
                (lVar2 = native_UnityEngine_Transform__FindChild_772e3c
                                   (lVar2,_StringLiteral_xue5_12f6e08,0), lVar2 != 0)))) {
              uVar4 = native_UnityEngine_Component__get_gameObject_8da66c(lVar2,0);
              *(undefined8 *)(param_1 + 0x68) = uVar4;
              native_sub_4326e0();
              native_ContainerRemoteTankUIController__LoadTankBloodbar_data_ddd890(param_1);
              if (*(long *)(param_1 + 0x88) != 0) {
                lVar2 = native_UnityEngine_GameObject__GetComponent_BE2_BlockSectionHeader_Custom__4a2214
                                  (*(long *)(param_1 + 0x88),
                                   _Method_UnityEngine_GameObject_GetComponent_UIButton____12e4a88);
                if (lVar2 != 0) {
                  lVar2 = *(long *)(lVar2 + 0xc0);
                  uVar4 = native_sub_432808(_EventDelegate_Callback_TypeInfo_12d72e8);
                  native_EventDelegate_Callback___ctor_54bd18
                            (uVar4,param_1,
                             _Method_ContainerRemoteTankUIController_OnClickButtonBack___12e3060,0);
                  uVar5 = native_sub_432808(_EventDelegate_TypeInfo_12d4590);
                  native_EventDelegate___ctor_de0bd0(uVar5,uVar4,0);
                  if (lVar2 != 0) {
                    native_System_Collections_Generic_List_int_____Add_d40c00
                              (lVar2,uVar5,
                               _Method_System_Collections_Generic_List_EventDelegate__Add___12dc740)
                    ;
                    if ((*(long *)(param_1 + 200) != 0) &&
                       (lVar2 = native_UnityEngine_GameObject__GetComponent_BE2_BlockSectionHeader_Custom__4a2214
                                          (*(long *)(param_1 + 200),
                                           _Method_UnityEngine_GameObject_GetComponent_UIButton____12e4a88
                                          ), lVar2 != 0)) {
                      lVar2 = *(long *)(lVar2 + 0xc0);
                      uVar4 = native_sub_432808(_EventDelegate_Callback_TypeInfo_12d72e8);
                      native_EventDelegate_Callback___ctor_54bd18
                                (uVar4,param_1,
                                 _Method_ContainerRemoteTankUIController_OnClickButtonBlesetting___12e3068
                                 ,0);
                      uVar5 = native_sub_432808(_EventDelegate_TypeInfo_12d4590);
                      native_EventDelegate___ctor_de0bd0(uVar5,uVar4,0);
                      if (lVar2 != 0) {
                        lVar7 = *(long *)(lVar2 + 0x10);
                        if (lVar7 != 0) {
                          uVar6 = *(uint *)(lVar2 + 0x18);
                          if (uVar6 == *(uint *)(lVar7 + 0x18)) {
                            (*(code *)**(undefined8 **)
                                        (*(long *)(*(long *)(
                                                  _Method_System_Collections_Generic_List_EventDelegate__Add___12dc740
                                                  + 0x18) + 0xc0) + 0x60))(lVar2,uVar6 + 1);
                            uVar6 = *(uint *)(lVar2 + 0x18);
                            lVar7 = *(long *)(lVar2 + 0x10);
                            *(uint *)(lVar2 + 0x18) = uVar6 + 1;
                            if (lVar7 == 0) goto code_r0x00d40c5c;
                          }
                          else {
                            *(uint *)(lVar2 + 0x18) = uVar6 + 1;
                          }
                          if (uVar6 < *(uint *)(lVar7 + 0x18)) {
                            puVar1 = (undefined8 *)(lVar7 + (long)(int)uVar6 * 8 + 0x20);
                            *puVar1 = uVar5;
                            native_sub_4326e0(puVar1,uVar5);
                            *(int *)(lVar2 + 0x1c) = *(int *)(lVar2 + 0x1c) + 1;
                            return;
                          }
                          uVar4 = native_sub_43283c();
                    /* WARNING: Subroutine does not return */
                          native_sub_4327dc(uVar4,0);
                        }
code_r0x00d40c5c:
                    /* WARNING: Subroutine does not return */
                        native_sub_432810();
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



/* ContainerRemoteTankUIController$$InitButtonEvent @ 0xddd518
 * void ContainerRemoteTankUIController__InitButtonEvent (ContainerRemoteTankUIController_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ContainerRemoteTankUIController$$InitButtonEvent
   void ContainerRemoteTankUIController__InitButtonEvent (ContainerRemoteTankUIController_o* __this,
   const MethodInfo* method); */

void native_ContainerRemoteTankUIController__InitButtonEvent_ddd518(long param_1)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  uint uVar5;
  long lVar6;
  long *plVar7;
  
  if ((bRam0000000001346e87 & 1) == 0) {
    native_sub_43273c(&EventDelegate_Callback_TypeInfo_12d72e8);
    native_sub_43273c(&Method_ContainerRemoteTankUIController_OnClickButtonBack___12e3060);
    native_sub_43273c(&Method_ContainerRemoteTankUIController_OnClickButtonBlesetting___12e3068);
    native_sub_43273c(&EventDelegate_TypeInfo_12d4590);
    native_sub_43273c(&Method_UnityEngine_GameObject_GetComponent_UIButton____12e4a88);
    native_sub_43273c(&Method_System_Collections_Generic_List_EventDelegate__Add___12dc740);
    native_sub_43273c(&StringLiteral_TankBloodbar_12f1498);
    native_sub_43273c(&StringLiteral_xue1_12f6de8);
    native_sub_43273c(&StringLiteral_xue2_12f6df0);
    native_sub_43273c(&StringLiteral_xue4_12f6e00);
    native_sub_43273c(&StringLiteral_xue5_12f6e08);
    native_sub_43273c(&StringLiteral_xue3_12f6df8);
    bRam0000000001346e87 = 1;
  }
  lVar2 = native_UnityEngine_Component__get_transform_8da62c(param_1,0);
  if ((lVar2 != 0) &&
     (lVar2 = native_UnityEngine_Transform__FindChild_772e3c
                        (lVar2,_StringLiteral_TankBloodbar_12f1498,0), lVar2 != 0)) {
    lVar2 = native_UnityEngine_Component__get_gameObject_8da66c(lVar2,0);
    plVar7 = (long *)(param_1 + 0x40);
    *plVar7 = lVar2;
    native_sub_4326e0(plVar7,lVar2);
    if ((*plVar7 != 0) &&
       ((lVar2 = native_UnityEngine_GameObject__get_transform_8de5c8(*plVar7,0), lVar2 != 0 &&
        (lVar2 = native_UnityEngine_Transform__FindChild_772e3c(lVar2,_StringLiteral_xue1_12f6de8,0)
        , lVar2 != 0)))) {
      uVar3 = native_UnityEngine_Component__get_gameObject_8da66c(lVar2,0);
      *(undefined8 *)(param_1 + 0x48) = uVar3;
      native_sub_4326e0((undefined8 *)(param_1 + 0x48),uVar3);
      if ((*(long *)(param_1 + 0x40) != 0) &&
         ((lVar2 = native_UnityEngine_GameObject__get_transform_8de5c8(*(long *)(param_1 + 0x40),0),
          lVar2 != 0 &&
          (lVar2 = native_UnityEngine_Transform__FindChild_772e3c
                             (lVar2,_StringLiteral_xue2_12f6df0,0), lVar2 != 0)))) {
        uVar3 = native_UnityEngine_Component__get_gameObject_8da66c(lVar2,0);
        *(undefined8 *)(param_1 + 0x50) = uVar3;
        native_sub_4326e0((undefined8 *)(param_1 + 0x50),uVar3);
        if ((*(long *)(param_1 + 0x40) != 0) &&
           ((lVar2 = native_UnityEngine_GameObject__get_transform_8de5c8
                               (*(long *)(param_1 + 0x40),0), lVar2 != 0 &&
            (lVar2 = native_UnityEngine_Transform__FindChild_772e3c
                               (lVar2,_StringLiteral_xue3_12f6df8,0), lVar2 != 0)))) {
          uVar3 = native_UnityEngine_Component__get_gameObject_8da66c(lVar2,0);
          *(undefined8 *)(param_1 + 0x58) = uVar3;
          native_sub_4326e0((undefined8 *)(param_1 + 0x58),uVar3);
          if ((*(long *)(param_1 + 0x40) != 0) &&
             ((lVar2 = native_UnityEngine_GameObject__get_transform_8de5c8
                                 (*(long *)(param_1 + 0x40),0), lVar2 != 0 &&
              (lVar2 = native_UnityEngine_Transform__FindChild_772e3c
                                 (lVar2,_StringLiteral_xue4_12f6e00,0), lVar2 != 0)))) {
            uVar3 = native_UnityEngine_Component__get_gameObject_8da66c(lVar2,0);
            *(undefined8 *)(param_1 + 0x60) = uVar3;
            native_sub_4326e0((undefined8 *)(param_1 + 0x60),uVar3);
            if ((*(long *)(param_1 + 0x40) != 0) &&
               ((lVar2 = native_UnityEngine_GameObject__get_transform_8de5c8
                                   (*(long *)(param_1 + 0x40),0), lVar2 != 0 &&
                (lVar2 = native_UnityEngine_Transform__FindChild_772e3c
                                   (lVar2,_StringLiteral_xue5_12f6e08,0), lVar2 != 0)))) {
              uVar3 = native_UnityEngine_Component__get_gameObject_8da66c(lVar2,0);
              *(undefined8 *)(param_1 + 0x68) = uVar3;
              native_sub_4326e0();
              native_ContainerRemoteTankUIController__LoadTankBloodbar_data_ddd890(param_1);
              if (*(long *)(param_1 + 0x88) != 0) {
                lVar2 = native_UnityEngine_GameObject__GetComponent_BE2_BlockSectionHeader_Custom__4a2214
                                  (*(long *)(param_1 + 0x88),
                                   _Method_UnityEngine_GameObject_GetComponent_UIButton____12e4a88);
                if (lVar2 != 0) {
                  lVar2 = *(long *)(lVar2 + 0xc0);
                  uVar3 = native_sub_432808(_EventDelegate_Callback_TypeInfo_12d72e8);
                  native_EventDelegate_Callback___ctor_54bd18
                            (uVar3,param_1,
                             _Method_ContainerRemoteTankUIController_OnClickButtonBack___12e3060,0);
                  uVar4 = native_sub_432808(_EventDelegate_TypeInfo_12d4590);
                  native_EventDelegate___ctor_de0bd0(uVar4,uVar3,0);
                  if (lVar2 != 0) {
                    native_System_Collections_Generic_List_int_____Add_d40c00
                              (lVar2,uVar4,
                               _Method_System_Collections_Generic_List_EventDelegate__Add___12dc740)
                    ;
                    if ((*(long *)(param_1 + 200) != 0) &&
                       (lVar2 = native_UnityEngine_GameObject__GetComponent_BE2_BlockSectionHeader_Custom__4a2214
                                          (*(long *)(param_1 + 200),
                                           _Method_UnityEngine_GameObject_GetComponent_UIButton____12e4a88
                                          ), lVar2 != 0)) {
                      lVar2 = *(long *)(lVar2 + 0xc0);
                      uVar3 = native_sub_432808(_EventDelegate_Callback_TypeInfo_12d72e8);
                      native_EventDelegate_Callback___ctor_54bd18
                                (uVar3,param_1,
                                 _Method_ContainerRemoteTankUIController_OnClickButtonBlesetting___12e3068
                                 ,0);
                      uVar4 = native_sub_432808(_EventDelegate_TypeInfo_12d4590);
                      native_EventDelegate___ctor_de0bd0(uVar4,uVar3,0);
                      if (lVar2 != 0) {
                        lVar6 = *(long *)(lVar2 + 0x10);
                        if (lVar6 != 0) {
                          uVar5 = *(uint *)(lVar2 + 0x18);
                          if (uVar5 == *(uint *)(lVar6 + 0x18)) {
                            (*(code *)**(undefined8 **)
                                        (*(long *)(*(long *)(
                                                  _Method_System_Collections_Generic_List_EventDelegate__Add___12dc740
                                                  + 0x18) + 0xc0) + 0x60))(lVar2,uVar5 + 1);
                            uVar5 = *(uint *)(lVar2 + 0x18);
                            lVar6 = *(long *)(lVar2 + 0x10);
                            *(uint *)(lVar2 + 0x18) = uVar5 + 1;
                            if (lVar6 == 0) goto code_r0x00d40c5c;
                          }
                          else {
                            *(uint *)(lVar2 + 0x18) = uVar5 + 1;
                          }
                          if (uVar5 < *(uint *)(lVar6 + 0x18)) {
                            puVar1 = (undefined8 *)(lVar6 + (long)(int)uVar5 * 8 + 0x20);
                            *puVar1 = uVar4;
                            native_sub_4326e0(puVar1,uVar4);
                            *(int *)(lVar2 + 0x1c) = *(int *)(lVar2 + 0x1c) + 1;
                            return;
                          }
                          uVar3 = native_sub_43283c();
                    /* WARNING: Subroutine does not return */
                          native_sub_4327dc(uVar3,0);
                        }
code_r0x00d40c5c:
                    /* WARNING: Subroutine does not return */
                        native_sub_432810();
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



/* ContainerRemoteTankUIController$$LoadTankBloodbar_data @ 0xddd890
 * void ContainerRemoteTankUIController__LoadTankBloodbar_data (ContainerRemoteTankUIController_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ContainerRemoteTankUIController$$LoadTankBloodbar_data
   void ContainerRemoteTankUIController__LoadTankBloodbar_data (ContainerRemoteTankUIController_o*
   __this, const MethodInfo* method); */

void native_ContainerRemoteTankUIController__LoadTankBloodbar_data_ddd890(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  int iVar3;
  
  if ((bRam0000000001346e88 & 1) == 0) {
    native_sub_43273c(&PanelMainUIController_TypeInfo_12d5600);
    bRam0000000001346e88 = 1;
  }
  if (((*(byte *)(_PanelMainUIController_TypeInfo_12d5600 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_PanelMainUIController_TypeInfo_12d5600 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  iVar3 = *(int *)(*(long *)(_PanelMainUIController_TypeInfo_12d5600 + 0xb8) + 0xa8);
  if (iVar3 == 5) {
    if (*(long *)(param_1 + 0x48) != 0) {
      native_UnityEngine_GameObject__SetActive_8de698(*(long *)(param_1 + 0x48),1,0);
      if (*(long *)(param_1 + 0x50) != 0) {
        native_UnityEngine_GameObject__SetActive_8de698(*(long *)(param_1 + 0x50),1,0);
        if (*(long *)(param_1 + 0x58) != 0) {
          native_UnityEngine_GameObject__SetActive_8de698(*(long *)(param_1 + 0x58),1,0);
          if (*(long *)(param_1 + 0x60) == 0) goto LAB_00dddb48;
          native_UnityEngine_GameObject__SetActive_8de698(*(long *)(param_1 + 0x60),1,0);
          lVar1 = *(long *)(param_1 + 0x68);
          if (lVar1 == 0) goto LAB_00dddb48;
          uVar2 = 1;
          goto code_r0x008de698;
        }
      }
    }
  }
  else {
    if (((*(byte *)(_PanelMainUIController_TypeInfo_12d5600 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_PanelMainUIController_TypeInfo_12d5600 + 0xe0) == 0)) {
      native_sub_4327ec();
      iVar3 = *(int *)(*(long *)(_PanelMainUIController_TypeInfo_12d5600 + 0xb8) + 0xa8);
    }
    if (iVar3 == 4) {
      if (*(long *)(param_1 + 0x48) == 0) goto LAB_00dddb48;
      native_UnityEngine_GameObject__SetActive_8de698(*(long *)(param_1 + 0x48),1,0);
      if (*(long *)(param_1 + 0x50) == 0) goto LAB_00dddb48;
      native_UnityEngine_GameObject__SetActive_8de698(*(long *)(param_1 + 0x50),1,0);
      if (*(long *)(param_1 + 0x58) == 0) goto LAB_00dddb48;
      native_UnityEngine_GameObject__SetActive_8de698(*(long *)(param_1 + 0x58),1,0);
      lVar1 = *(long *)(param_1 + 0x60);
      if (lVar1 == 0) goto LAB_00dddb48;
      uVar2 = 1;
    }
    else {
      if (((*(byte *)(_PanelMainUIController_TypeInfo_12d5600 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_PanelMainUIController_TypeInfo_12d5600 + 0xe0) == 0)) {
        native_sub_4327ec();
        iVar3 = *(int *)(*(long *)(_PanelMainUIController_TypeInfo_12d5600 + 0xb8) + 0xa8);
      }
      if (iVar3 == 3) {
        if (*(long *)(param_1 + 0x48) == 0) goto LAB_00dddb48;
        native_UnityEngine_GameObject__SetActive_8de698(*(long *)(param_1 + 0x48),1,0);
        if (*(long *)(param_1 + 0x50) == 0) goto LAB_00dddb48;
        native_UnityEngine_GameObject__SetActive_8de698(*(long *)(param_1 + 0x50),1,0);
        lVar1 = *(long *)(param_1 + 0x58);
        if (lVar1 == 0) goto LAB_00dddb48;
        uVar2 = 1;
      }
      else {
        if (((*(byte *)(_PanelMainUIController_TypeInfo_12d5600 + 0x133) >> 2 & 1) != 0) &&
           (*(int *)(_PanelMainUIController_TypeInfo_12d5600 + 0xe0) == 0)) {
          native_sub_4327ec();
          iVar3 = *(int *)(*(long *)(_PanelMainUIController_TypeInfo_12d5600 + 0xb8) + 0xa8);
        }
        if (iVar3 == 2) {
          if (*(long *)(param_1 + 0x48) == 0) goto LAB_00dddb48;
          native_UnityEngine_GameObject__SetActive_8de698(*(long *)(param_1 + 0x48),1,0);
          lVar1 = *(long *)(param_1 + 0x50);
          if (lVar1 == 0) goto LAB_00dddb48;
          uVar2 = 1;
        }
        else {
          if (((*(byte *)(_PanelMainUIController_TypeInfo_12d5600 + 0x133) >> 2 & 1) != 0) &&
             (*(int *)(_PanelMainUIController_TypeInfo_12d5600 + 0xe0) == 0)) {
            native_sub_4327ec();
            iVar3 = *(int *)(*(long *)(_PanelMainUIController_TypeInfo_12d5600 + 0xb8) + 0xa8);
          }
          if (iVar3 == 1) {
            lVar1 = *(long *)(param_1 + 0x48);
            if (lVar1 == 0) goto LAB_00dddb48;
            uVar2 = 1;
          }
          else {
            if (((*(byte *)(_PanelMainUIController_TypeInfo_12d5600 + 0x133) >> 2 & 1) != 0) &&
               (*(int *)(_PanelMainUIController_TypeInfo_12d5600 + 0xe0) == 0)) {
              native_sub_4327ec();
              iVar3 = *(int *)(*(long *)(_PanelMainUIController_TypeInfo_12d5600 + 0xb8) + 0xa8);
            }
            if (iVar3 != 0) {
              return;
            }
            lVar1 = *(long *)(param_1 + 0x48);
            if (lVar1 == 0) goto LAB_00dddb48;
            uVar2 = 0;
          }
          native_UnityEngine_GameObject__SetActive_8de698(lVar1,uVar2,0);
          lVar1 = *(long *)(param_1 + 0x50);
          if (lVar1 == 0) goto LAB_00dddb48;
          uVar2 = 0;
        }
        native_UnityEngine_GameObject__SetActive_8de698(lVar1,uVar2,0);
        lVar1 = *(long *)(param_1 + 0x58);
        if (lVar1 == 0) goto LAB_00dddb48;
        uVar2 = 0;
      }
      native_UnityEngine_GameObject__SetActive_8de698(lVar1,uVar2,0);
      lVar1 = *(long *)(param_1 + 0x60);
      if (lVar1 == 0) goto LAB_00dddb48;
      uVar2 = 0;
    }
    native_UnityEngine_GameObject__SetActive_8de698(lVar1,uVar2,0);
    lVar1 = *(long *)(param_1 + 0x68);
    if (lVar1 != 0) {
      uVar2 = 0;
code_r0x008de698:
      if (pcRam0000000001340bf8 == (code *)0x0) {
        pcRam0000000001340bf8 = (code *)native_sub_4326f0(&UNK_00e2da67);
      }
                    /* WARNING: Could not recover jumptable at 0x008de6e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*pcRam0000000001340bf8)(lVar1,uVar2);
      return;
    }
  }
LAB_00dddb48:
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* ContainerRemoteTankUIController$$OnClickButtonBack @ 0xdddb4c
 * void ContainerRemoteTankUIController__OnClickButtonBack (ContainerRemoteTankUIController_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ContainerRemoteTankUIController$$OnClickButtonBack
   void ContainerRemoteTankUIController__OnClickButtonBack (ContainerRemoteTankUIController_o*
   __this, const MethodInfo* method); */

void native_ContainerRemoteTankUIController__OnClickButtonBack_dddb4c(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uStack_28;
  
  if ((bRam0000000001346e89 & 1) == 0) {
    native_sub_43273c(&StringLiteral_Login_12ef660);
    bRam0000000001346e89 = 1;
  }
  uVar1 = _StringLiteral_Login_12ef660;
  if ((bRam0000000001346e8b & 1) == 0) {
    native_sub_43273c(&PanelMainUIController_TypeInfo_12d5600);
    native_sub_43273c(&UnityEngine_SceneManagement_SceneManager_TypeInfo_12d5bc0);
    bRam0000000001346e8b = 1;
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



/* ContainerRemoteTankUIController$$OnClickButtonBlesetting @ 0xdddc3c
 * void ContainerRemoteTankUIController__OnClickButtonBlesetting (ContainerRemoteTankUIController_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ContainerRemoteTankUIController$$OnClickButtonBlesetting
   void ContainerRemoteTankUIController__OnClickButtonBlesetting (ContainerRemoteTankUIController_o*
   __this, const MethodInfo* method); */

void native_ContainerRemoteTankUIController__OnClickButtonBlesetting_dddc3c(long param_1)

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
  
  if ((bRam0000000001346e8a & 1) == 0) {
    native_sub_43273c(&Method_System_Action_string___ctor___12d7fe8);
    native_sub_43273c(&System_Action_string__TypeInfo_12d2080);
    native_sub_43273c(&byte___TypeInfo_12d3060);
    native_sub_43273c(&ContainerMatchingCodeUIController_TypeInfo_12d3f38);
    native_sub_43273c(&
                      Method_ContainerRemoteTankUIController__OnClickButtonBlesetting_b__21_4___12e3058
                     );
    native_sub_43273c(&HjdBluetoothHardwareInterface_TypeInfo_12d4938);
    native_sub_43273c(&PanelMainUIController_TypeInfo_12d5600);
    native_sub_43273c(&
                      Method_ContainerRemoteTankUIController___c__OnClickButtonBlesetting_b__21_0___12e9830
                     );
    native_sub_43273c(&
                      Method_ContainerRemoteTankUIController___c__OnClickButtonBlesetting_b__21_1___12e9838
                     );
    native_sub_43273c(&
                      Method_ContainerRemoteTankUIController___c__OnClickButtonBlesetting_b__21_2___12e9840
                     );
    native_sub_43273c(&
                      Method_ContainerRemoteTankUIController___c__OnClickButtonBlesetting_b__21_3___12e9848
                     );
    native_sub_43273c(&ContainerRemoteTankUIController___c_TypeInfo_12d7170);
    native_sub_43273c(&StringLiteral_ContainerMatchingCode_12ed220);
    bRam0000000001346e8a = 1;
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
LAB_00dde244:
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
  if (lVar6 == 0) goto LAB_00dde244;
  uVar9 = (uint)*(undefined8 *)(lVar6 + 0x18);
  if ((uVar9 == 0) || (*(undefined1 *)(lVar6 + 0x20) = *(undefined1 *)(param_1 + 0x18), uVar9 == 1))
  {
LAB_00dde238:
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
           uVar9 < 8)) goto LAB_00dde238;
  *(undefined1 *)(lVar6 + 0x27) =
       *(undefined1 *)(*(long *)(_HjdBluetoothHardwareInterface_TypeInfo_12d4938 + 0xb8) + 0x14);
  if (((*(byte *)(_ContainerRemoteTankUIController___c_TypeInfo_12d7170 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_ContainerRemoteTankUIController___c_TypeInfo_12d7170 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  puVar7 = *(undefined8 **)(_ContainerRemoteTankUIController___c_TypeInfo_12d7170 + 0xb8);
  lVar14 = puVar7[1];
  if (lVar14 == 0) {
    if (((*(byte *)(_ContainerRemoteTankUIController___c_TypeInfo_12d7170 + 0x133) >> 2 & 1) != 0)
       && (*(int *)(_ContainerRemoteTankUIController___c_TypeInfo_12d7170 + 0xe0) == 0)) {
      native_sub_4327ec();
      puVar7 = *(undefined8 **)(_ContainerRemoteTankUIController___c_TypeInfo_12d7170 + 0xb8);
    }
    uVar12 = *puVar7;
    lVar14 = native_sub_432808(_System_Action_string__TypeInfo_12d2080);
    native_System_Action_Font____ctor_9867a8
              (lVar14,uVar12,
               _Method_ContainerRemoteTankUIController___c__OnClickButtonBlesetting_b__21_0___12e9830
               ,_Method_System_Action_string___ctor___12d7fe8);
    plVar8 = (long *)(*(long *)(_ContainerRemoteTankUIController___c_TypeInfo_12d7170 + 0xb8) + 8);
    *plVar8 = lVar14;
    native_sub_4326e0(plVar8,lVar14);
  }
  if (((*(byte *)(_HjdBluetoothHardwareInterface_TypeInfo_12d4938 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_HjdBluetoothHardwareInterface_TypeInfo_12d4938 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  native_HjdBluetoothHardwareInterface__StopAdvertising_dc423c(lVar14,0);
  native_System_Threading_Thread__Sleep_9fb5d8(100,0);
  if (((*(byte *)(_ContainerRemoteTankUIController___c_TypeInfo_12d7170 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_ContainerRemoteTankUIController___c_TypeInfo_12d7170 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  puVar7 = *(undefined8 **)(_ContainerRemoteTankUIController___c_TypeInfo_12d7170 + 0xb8);
  lVar14 = puVar7[2];
  if (lVar14 == 0) {
    if (((*(byte *)(_ContainerRemoteTankUIController___c_TypeInfo_12d7170 + 0x133) >> 2 & 1) != 0)
       && (*(int *)(_ContainerRemoteTankUIController___c_TypeInfo_12d7170 + 0xe0) == 0)) {
      native_sub_4327ec();
      puVar7 = *(undefined8 **)(_ContainerRemoteTankUIController___c_TypeInfo_12d7170 + 0xb8);
    }
    uVar12 = *puVar7;
    lVar14 = native_sub_432808(_System_Action_string__TypeInfo_12d2080);
    native_System_Action_Font____ctor_9867a8
              (lVar14,uVar12,
               _Method_ContainerRemoteTankUIController___c__OnClickButtonBlesetting_b__21_1___12e9838
               ,_Method_System_Action_string___ctor___12d7fe8);
    plVar8 = (long *)(*(long *)(_ContainerRemoteTankUIController___c_TypeInfo_12d7170 + 0xb8) + 0x10
                     );
    *plVar8 = lVar14;
    native_sub_4326e0(plVar8,lVar14);
  }
  if (((*(byte *)(_HjdBluetoothHardwareInterface_TypeInfo_12d4938 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_HjdBluetoothHardwareInterface_TypeInfo_12d4938 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  native_HjdBluetoothHardwareInterface__StartAdvertising_dc4054(lVar14,lVar6,0);
  if (((*(byte *)(_ContainerRemoteTankUIController___c_TypeInfo_12d7170 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_ContainerRemoteTankUIController___c_TypeInfo_12d7170 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  puVar7 = *(undefined8 **)(_ContainerRemoteTankUIController___c_TypeInfo_12d7170 + 0xb8);
  lVar6 = puVar7[3];
  if (lVar6 == 0) {
    if (((*(byte *)(_ContainerRemoteTankUIController___c_TypeInfo_12d7170 + 0x133) >> 2 & 1) != 0)
       && (*(int *)(_ContainerRemoteTankUIController___c_TypeInfo_12d7170 + 0xe0) == 0)) {
      native_sub_4327ec();
      puVar7 = *(undefined8 **)(_ContainerRemoteTankUIController___c_TypeInfo_12d7170 + 0xb8);
    }
    uVar12 = *puVar7;
    lVar6 = native_sub_432808(_System_Action_string__TypeInfo_12d2080);
    native_System_Action_Font____ctor_9867a8
              (lVar6,uVar12,
               _Method_ContainerRemoteTankUIController___c__OnClickButtonBlesetting_b__21_2___12e9840
               ,_Method_System_Action_string___ctor___12d7fe8);
    plVar8 = (long *)(*(long *)(_ContainerRemoteTankUIController___c_TypeInfo_12d7170 + 0xb8) + 0x18
                     );
    *plVar8 = lVar6;
    native_sub_4326e0(plVar8,lVar6);
  }
  if (((*(byte *)(_HjdBluetoothHardwareInterface_TypeInfo_12d4938 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_HjdBluetoothHardwareInterface_TypeInfo_12d4938 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  native_HjdBluetoothHardwareInterface__StopScanToGetData_dc465c(lVar6,0);
  native_System_Threading_Thread__Sleep_9fb5d8(100,0);
  if (((*(byte *)(_ContainerRemoteTankUIController___c_TypeInfo_12d7170 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_ContainerRemoteTankUIController___c_TypeInfo_12d7170 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  puVar7 = *(undefined8 **)(_ContainerRemoteTankUIController___c_TypeInfo_12d7170 + 0xb8);
  lVar6 = puVar7[4];
  if (lVar6 == 0) {
    if (((*(byte *)(_ContainerRemoteTankUIController___c_TypeInfo_12d7170 + 0x133) >> 2 & 1) != 0)
       && (*(int *)(_ContainerRemoteTankUIController___c_TypeInfo_12d7170 + 0xe0) == 0)) {
      native_sub_4327ec();
      puVar7 = *(undefined8 **)(_ContainerRemoteTankUIController___c_TypeInfo_12d7170 + 0xb8);
    }
    uVar12 = *puVar7;
    lVar6 = native_sub_432808(_System_Action_string__TypeInfo_12d2080);
    native_System_Action_Font____ctor_9867a8
              (lVar6,uVar12,
               _Method_ContainerRemoteTankUIController___c__OnClickButtonBlesetting_b__21_3___12e9848
               ,_Method_System_Action_string___ctor___12d7fe8);
    plVar8 = (long *)(*(long *)(_ContainerRemoteTankUIController___c_TypeInfo_12d7170 + 0xb8) + 0x20
                     );
    *plVar8 = lVar6;
    native_sub_4326e0(plVar8,lVar6);
  }
  uVar12 = native_sub_432808(_System_Action_string__TypeInfo_12d2080);
  native_System_Action_Font____ctor_9867a8
            (uVar12,param_1,
             _Method_ContainerRemoteTankUIController__OnClickButtonBlesetting_b__21_4___12e3058,
             _Method_System_Action_string___ctor___12d7fe8);
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



/* ContainerRemoteTankUIController$$LoadNewScene @ 0xdddb90
 * void ContainerRemoteTankUIController__LoadNewScene (ContainerRemoteTankUIController_o* __this, System_String_o* sceneName, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ContainerRemoteTankUIController$$LoadNewScene
   void ContainerRemoteTankUIController__LoadNewScene (ContainerRemoteTankUIController_o* __this,
   System_String_o* sceneName, const MethodInfo* method); */

void native_ContainerRemoteTankUIController__LoadNewScene_dddb90
               (undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uStack_28;
  
  if ((bRam0000000001346e8b & 1) == 0) {
    native_sub_43273c(&PanelMainUIController_TypeInfo_12d5600);
    native_sub_43273c(&UnityEngine_SceneManagement_SceneManager_TypeInfo_12d5bc0);
    bRam0000000001346e8b = 1;
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



/* ContainerRemoteTankUIController$$Update @ 0xdde248
 * void ContainerRemoteTankUIController__Update (ContainerRemoteTankUIController_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ContainerRemoteTankUIController$$Update
   void ContainerRemoteTankUIController__Update (ContainerRemoteTankUIController_o* __this, const
   MethodInfo* method); */

void native_ContainerRemoteTankUIController__Update_dde248(long param_1)

{
  int iVar1;
  float fVar2;
  undefined4 uVar3;
  long lVar4;
  ulong uVar5;
  undefined8 uVar6;
  int iVar7;
  uint uVar8;
  undefined8 *puVar9;
  int iVar10;
  long lVar11;
  long *plVar12;
  float fVar13;
  float fVar14;
  
  if ((bRam0000000001346e8c & 1) == 0) {
    native_sub_43273c(&Method_System_Action_string___ctor___12d7fe8);
    native_sub_43273c(&System_Action_string__TypeInfo_12d2080);
    native_sub_43273c(&byte___TypeInfo_12d3060);
    native_sub_43273c(&ContainerRemoteTankUIController_TypeInfo_12d3f58);
    native_sub_43273c(&Method_UnityEngine_GameObject_GetComponent_UIButton____12e4a88);
    native_sub_43273c(&HjdBluetoothHardwareInterface_TypeInfo_12d4938);
    native_sub_43273c(&PanelMainUIController_TypeInfo_12d5600);
    native_sub_43273c(&Method_ContainerRemoteTankUIController___c__Update_b__29_0___12e9850);
    native_sub_43273c(&Method_ContainerRemoteTankUIController___c__Update_b__29_1___12e9858);
    native_sub_43273c(&Method_ContainerRemoteTankUIController___c__Update_b__29_2___12e9860);
    native_sub_43273c(&ContainerRemoteTankUIController___c_TypeInfo_12d7170);
    bRam0000000001346e8c = 1;
  }
  if (((*(byte *)(_PanelMainUIController_TypeInfo_12d5600 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_PanelMainUIController_TypeInfo_12d5600 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  if (*(char *)(*(long *)(_PanelMainUIController_TypeInfo_12d5600 + 0xb8) + 0x20) == '\0') {
    return;
  }
  if (((*(long *)(param_1 + 0x98) == 0) ||
      (lVar4 = native_UnityEngine_GameObject__GetComponent_BE2_BlockSectionHeader_Custom__4a2214
                         (*(long *)(param_1 + 0x98),
                          _Method_UnityEngine_GameObject_GetComponent_UIButton____12e4a88),
      lVar4 == 0)) || (*(long *)(param_1 + 0x90) == 0)) goto LAB_00ddec74;
  iVar10 = *(int *)(lVar4 + 0x80);
  lVar4 = native_UnityEngine_GameObject__GetComponent_BE2_BlockSectionHeader_Custom__4a2214
                    (*(long *)(param_1 + 0x90),
                     _Method_UnityEngine_GameObject_GetComponent_UIButton____12e4a88);
  if (lVar4 == 0) goto LAB_00ddec74;
  iVar1 = *(int *)(lVar4 + 0x80);
  lVar4 = native_sub_432750(_byte___TypeInfo_12d3060,10);
  plVar12 = (long *)(param_1 + 0x28);
  *plVar12 = lVar4;
  native_sub_4326e0(plVar12,lVar4);
  if (((*(byte *)(_PanelMainUIController_TypeInfo_12d5600 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_PanelMainUIController_TypeInfo_12d5600 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  iVar7 = *(int *)(*(long *)(_PanelMainUIController_TypeInfo_12d5600 + 0xb8) + 0x50);
  if (iVar7 == 1) {
    uVar6 = 0;
LAB_00dde3f8:
    uVar3 = native_Assets_Scripts_Tools_HjdBleTool__setIntegerSomeBit_7f7068(0,uVar6,1,0);
  }
  else {
    if (((*(byte *)(_PanelMainUIController_TypeInfo_12d5600 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_PanelMainUIController_TypeInfo_12d5600 + 0xe0) == 0)) {
      native_sub_4327ec();
      iVar7 = *(int *)(*(long *)(_PanelMainUIController_TypeInfo_12d5600 + 0xb8) + 0x50);
    }
    if (iVar7 == -1) {
      uVar6 = 1;
      goto LAB_00dde3f8;
    }
    uVar3 = 0;
  }
  if (((*(byte *)(_PanelMainUIController_TypeInfo_12d5600 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_PanelMainUIController_TypeInfo_12d5600 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  iVar7 = *(int *)(*(long *)(_PanelMainUIController_TypeInfo_12d5600 + 0xb8) + 0x4c);
  if (iVar7 == 1) {
    uVar6 = 2;
LAB_00dde46c:
    uVar3 = native_Assets_Scripts_Tools_HjdBleTool__setIntegerSomeBit_7f7068(uVar3,uVar6,1,0);
  }
  else {
    if (((*(byte *)(_PanelMainUIController_TypeInfo_12d5600 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_PanelMainUIController_TypeInfo_12d5600 + 0xe0) == 0)) {
      native_sub_4327ec();
      iVar7 = *(int *)(*(long *)(_PanelMainUIController_TypeInfo_12d5600 + 0xb8) + 0x4c);
    }
    if (iVar7 == -1) {
      uVar6 = 3;
      goto LAB_00dde46c;
    }
  }
  if (iVar10 == 2) {
    uVar3 = native_Assets_Scripts_Tools_HjdBleTool__setIntegerSomeBit_7f7068(uVar3,4,1,0);
  }
  if (iVar1 == 2) {
    if ((*(int *)(param_1 + 0x7c) == 0) && (0x3c < *(int *)(param_1 + 0x78))) {
      *(undefined4 *)(param_1 + 0x7c) = 1;
      *(undefined4 *)(param_1 + 0x84) = 0x14;
    }
  }
  else {
    if ((*(int *)(param_1 + 0x7c) == 0) && (2 < *(int *)(param_1 + 0x78))) {
      *(undefined4 *)(param_1 + 0x80) = 0x14;
    }
    *(undefined8 *)(param_1 + 0x78) = 0;
  }
  if (0 < *(int *)(param_1 + 0x80)) {
    uVar3 = native_Assets_Scripts_Tools_HjdBleTool__setIntegerSomeBit_7f7068(uVar3,5,1,0);
  }
  if (0 < *(int *)(param_1 + 0x84)) {
    uVar3 = native_Assets_Scripts_Tools_HjdBleTool__setIntegerSomeBit_7f7068(uVar3,6,1,0);
  }
  if (((*(byte *)(_PanelMainUIController_TypeInfo_12d5600 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_PanelMainUIController_TypeInfo_12d5600 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  fVar14 = *(float *)(*(long *)(_PanelMainUIController_TypeInfo_12d5600 + 0xb8) + 0x94) * 100.0;
  fVar13 = *(float *)(*(long *)(_PanelMainUIController_TypeInfo_12d5600 + 0xb8) + 0x98) * 100.0;
  fVar2 = -fVar14;
  if (fVar14 != INFINITY) {
    fVar2 = fVar14;
  }
  fVar14 = -fVar13;
  if (fVar13 != INFINITY) {
    fVar14 = fVar13;
  }
  if (*(int *)(param_1 + 0x74) == 0) {
    *(undefined4 *)(param_1 + 0x74) = 0xc;
    iVar10 = 1;
    if (*(int *)(param_1 + 0x70) + 1 < 0xfb) {
      iVar10 = *(int *)(param_1 + 0x70) + 1;
    }
    *(int *)(param_1 + 0x70) = iVar10;
  }
  else {
    iVar10 = *(int *)(param_1 + 0x70);
  }
  lVar4 = *plVar12;
  if (lVar4 != 0) {
    if (*(int *)(lVar4 + 0x18) != 0) {
      *(char *)(lVar4 + 0x20) = (char)uVar3;
      lVar4 = *plVar12;
      if (lVar4 == 0) goto LAB_00ddec74;
      if (1 < *(uint *)(lVar4 + 0x18)) {
        *(undefined1 *)(lVar4 + 0x21) = 0;
        lVar4 = *plVar12;
        if (lVar4 == 0) goto LAB_00ddec74;
        if (2 < *(uint *)(lVar4 + 0x18)) {
          *(char *)(lVar4 + 0x22) = (char)(int)fVar2;
          lVar4 = *plVar12;
          if (lVar4 == 0) goto LAB_00ddec74;
          if (3 < *(uint *)(lVar4 + 0x18)) {
            *(char *)(lVar4 + 0x23) = (char)(int)fVar14;
            lVar4 = *plVar12;
            if (lVar4 == 0) goto LAB_00ddec74;
            if (4 < *(uint *)(lVar4 + 0x18)) {
              *(undefined1 *)(lVar4 + 0x24) = 0;
              lVar4 = *plVar12;
              if (lVar4 == 0) goto LAB_00ddec74;
              if (5 < *(uint *)(lVar4 + 0x18)) {
                *(undefined1 *)(lVar4 + 0x25) = 0;
                lVar4 = *plVar12;
                if (lVar4 == 0) goto LAB_00ddec74;
                if (6 < *(uint *)(lVar4 + 0x18)) {
                  *(char *)(lVar4 + 0x26) = (char)iVar10;
                  uVar5 = native_Assets_Scripts_Tools_HjdBleTool__data_isalike_7f6e28
                                    (*(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x30)
                                     ,0);
                  if (((uVar5 & 1) != 0) || (*(int *)(param_1 + 0x38) != 0)) {
LAB_00dde954:
                    if (*(char *)(param_1 + 0x1d) != '\0') {
                      *(undefined1 *)(param_1 + 0x1d) = 0;
                      if (((*(byte *)(_ContainerRemoteTankUIController___c_TypeInfo_12d7170 + 0x133)
                            >> 2 & 1) != 0) &&
                         (*(int *)(_ContainerRemoteTankUIController___c_TypeInfo_12d7170 + 0xe0) ==
                          0)) {
                        native_sub_4327ec();
                      }
                      puVar9 = *(undefined8 **)
                                (_ContainerRemoteTankUIController___c_TypeInfo_12d7170 + 0xb8);
                      lVar4 = puVar9[5];
                      if (lVar4 == 0) {
                        if (((*(byte *)(_ContainerRemoteTankUIController___c_TypeInfo_12d7170 +
                                       0x133) >> 2 & 1) != 0) &&
                           (*(int *)(_ContainerRemoteTankUIController___c_TypeInfo_12d7170 + 0xe0)
                            == 0)) {
                          native_sub_4327ec();
                          puVar9 = *(undefined8 **)
                                    (_ContainerRemoteTankUIController___c_TypeInfo_12d7170 + 0xb8);
                        }
                        uVar6 = *puVar9;
                        lVar4 = native_sub_432808(_System_Action_string__TypeInfo_12d2080);
                        native_System_Action_Font____ctor_9867a8
                                  (lVar4,uVar6,
                                   _Method_ContainerRemoteTankUIController___c__Update_b__29_0___12e9850
                                   ,_Method_System_Action_string___ctor___12d7fe8);
                        plVar12 = (long *)(*(long *)(
                                                  _ContainerRemoteTankUIController___c_TypeInfo_12d7170
                                                  + 0xb8) + 0x28);
                        *plVar12 = lVar4;
                        native_sub_4326e0(plVar12,lVar4);
                      }
                      if (((*(byte *)(_HjdBluetoothHardwareInterface_TypeInfo_12d4938 + 0x133) >> 2
                           & 1) != 0) &&
                         (*(int *)(_HjdBluetoothHardwareInterface_TypeInfo_12d4938 + 0xe0) == 0)) {
                        native_sub_4327ec();
                      }
                      native_HjdBluetoothHardwareInterface__StopAdvertising_dc423c(lVar4,0);
                      if (((*(byte *)(_ContainerRemoteTankUIController___c_TypeInfo_12d7170 + 0x133)
                            >> 2 & 1) != 0) &&
                         (*(int *)(_ContainerRemoteTankUIController___c_TypeInfo_12d7170 + 0xe0) ==
                          0)) {
                        native_sub_4327ec();
                      }
                      puVar9 = *(undefined8 **)
                                (_ContainerRemoteTankUIController___c_TypeInfo_12d7170 + 0xb8);
                      lVar4 = puVar9[6];
                      if (lVar4 == 0) {
                        if (((*(byte *)(_ContainerRemoteTankUIController___c_TypeInfo_12d7170 +
                                       0x133) >> 2 & 1) != 0) &&
                           (*(int *)(_ContainerRemoteTankUIController___c_TypeInfo_12d7170 + 0xe0)
                            == 0)) {
                          native_sub_4327ec();
                          puVar9 = *(undefined8 **)
                                    (_ContainerRemoteTankUIController___c_TypeInfo_12d7170 + 0xb8);
                        }
                        uVar6 = *puVar9;
                        lVar4 = native_sub_432808(_System_Action_string__TypeInfo_12d2080);
                        native_System_Action_Font____ctor_9867a8
                                  (lVar4,uVar6,
                                   _Method_ContainerRemoteTankUIController___c__Update_b__29_1___12e9858
                                   ,_Method_System_Action_string___ctor___12d7fe8);
                        plVar12 = (long *)(*(long *)(
                                                  _ContainerRemoteTankUIController___c_TypeInfo_12d7170
                                                  + 0xb8) + 0x30);
                        *plVar12 = lVar4;
                        native_sub_4326e0(plVar12,lVar4);
                      }
                      uVar6 = *(undefined8 *)(param_1 + 0x20);
                      if (((*(byte *)(_HjdBluetoothHardwareInterface_TypeInfo_12d4938 + 0x133) >> 2
                           & 1) != 0) &&
                         (*(int *)(_HjdBluetoothHardwareInterface_TypeInfo_12d4938 + 0xe0) == 0)) {
                        native_sub_4327ec();
                      }
                      native_HjdBluetoothHardwareInterface__StartAdvertising_dc4054(lVar4,uVar6,0);
                      if (((*(byte *)(_ContainerRemoteTankUIController___c_TypeInfo_12d7170 + 0x133)
                            >> 2 & 1) != 0) &&
                         (*(int *)(_ContainerRemoteTankUIController___c_TypeInfo_12d7170 + 0xe0) ==
                          0)) {
                        native_sub_4327ec();
                      }
                      puVar9 = *(undefined8 **)
                                (_ContainerRemoteTankUIController___c_TypeInfo_12d7170 + 0xb8);
                      lVar4 = puVar9[7];
                      if (lVar4 == 0) {
                        if (((*(byte *)(_ContainerRemoteTankUIController___c_TypeInfo_12d7170 +
                                       0x133) >> 2 & 1) != 0) &&
                           (*(int *)(_ContainerRemoteTankUIController___c_TypeInfo_12d7170 + 0xe0)
                            == 0)) {
                          native_sub_4327ec();
                          puVar9 = *(undefined8 **)
                                    (_ContainerRemoteTankUIController___c_TypeInfo_12d7170 + 0xb8);
                        }
                        uVar6 = *puVar9;
                        lVar4 = native_sub_432808(_System_Action_string__TypeInfo_12d2080);
                        native_System_Action_Font____ctor_9867a8
                                  (lVar4,uVar6,
                                   _Method_ContainerRemoteTankUIController___c__Update_b__29_2___12e9860
                                   ,_Method_System_Action_string___ctor___12d7fe8);
                        plVar12 = (long *)(*(long *)(
                                                  _ContainerRemoteTankUIController___c_TypeInfo_12d7170
                                                  + 0xb8) + 0x38);
                        *plVar12 = lVar4;
                        native_sub_4326e0(plVar12,lVar4);
                      }
                      uVar6 = *(undefined8 *)(param_1 + 0x20);
                      if (((*(byte *)(_HjdBluetoothHardwareInterface_TypeInfo_12d4938 + 0x133) >> 2
                           & 1) != 0) &&
                         (*(int *)(_HjdBluetoothHardwareInterface_TypeInfo_12d4938 + 0xe0) == 0)) {
                        native_sub_4327ec();
                      }
                      native_HjdBluetoothHardwareInterface__StartAdvertising_dc4054(lVar4,uVar6,0);
                    }
                    lVar4 = native_ContainerRemoteTankUIController__gethaomiao_ddec84();
                    if (((*(byte *)(_ContainerRemoteTankUIController_TypeInfo_12d3f58 + 0x133) >> 2
                         & 1) != 0) &&
                       (*(int *)(_ContainerRemoteTankUIController_TypeInfo_12d3f58 + 0xe0) == 0)) {
                      native_sub_4327ec(_ContainerRemoteTankUIController_TypeInfo_12d3f58);
                    }
                    if (0x13 < lVar4 - **(long **)(_ContainerRemoteTankUIController_TypeInfo_12d3f58
                                                  + 0xb8)) {
                      uVar6 = native_ContainerRemoteTankUIController__gethaomiao_ddec84();
                      if (((*(byte *)(_ContainerRemoteTankUIController_TypeInfo_12d3f58 + 0x133) >>
                            2 & 1) != 0) &&
                         (*(int *)(_ContainerRemoteTankUIController_TypeInfo_12d3f58 + 0xe0) == 0))
                      {
                        native_sub_4327ec(_ContainerRemoteTankUIController_TypeInfo_12d3f58);
                      }
                      **(undefined8 **)(_ContainerRemoteTankUIController_TypeInfo_12d3f58 + 0xb8) =
                           uVar6;
                      *(int *)(param_1 + 0x78) = *(int *)(param_1 + 0x78) + 1;
                      if (0 < *(int *)(param_1 + 0x84)) {
                        *(int *)(param_1 + 0x84) = *(int *)(param_1 + 0x84) + -1;
                      }
                      if (0 < *(int *)(param_1 + 0x80)) {
                        *(int *)(param_1 + 0x80) = *(int *)(param_1 + 0x80) + -1;
                      }
                      if (0 < *(int *)(param_1 + 0x38)) {
                        *(int *)(param_1 + 0x38) = *(int *)(param_1 + 0x38) + -1;
                      }
                      if (0 < *(int *)(param_1 + 0x74)) {
                        *(int *)(param_1 + 0x74) = *(int *)(param_1 + 0x74) + -1;
                      }
                    }
                    return;
                  }
                  native_Assets_Scripts_Tools_HjdBleTool__data_copy_7f6ea8
                            (*(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x30),0);
                  lVar4 = native_sub_432750(_byte___TypeInfo_12d3060,0x13);
                  if (lVar4 == 0) goto LAB_00ddec74;
                  if ((*(int *)(lVar4 + 0x18) != 0) &&
                     (*(undefined1 *)(lVar4 + 0x20) = *(undefined1 *)(param_1 + 0x18),
                     *(int *)(lVar4 + 0x18) != 1)) {
                    *(undefined1 *)(lVar4 + 0x21) = *(undefined1 *)(param_1 + 0x1a);
                    if (((*(byte *)(_PanelMainUIController_TypeInfo_12d5600 + 0x133) >> 2 & 1) != 0)
                       && (*(int *)(_PanelMainUIController_TypeInfo_12d5600 + 0xe0) == 0)) {
                      native_sub_4327ec();
                    }
                    lVar11 = *(long *)(*(long *)(_PanelMainUIController_TypeInfo_12d5600 + 0xb8) +
                                      0x18);
                    if (lVar11 == 0) goto LAB_00ddec74;
                    if ((*(int *)(lVar11 + 0x18) != 0) &&
                       (uVar8 = (uint)*(undefined8 *)(lVar4 + 0x18), 2 < uVar8)) {
                      *(undefined1 *)(lVar4 + 0x22) = *(undefined1 *)(lVar11 + 0x20);
                      lVar11 = *(long *)(*(long *)(_PanelMainUIController_TypeInfo_12d5600 + 0xb8) +
                                        0x18);
                      if (lVar11 == 0) goto LAB_00ddec74;
                      if ((1 < *(uint *)(lVar11 + 0x18)) && (3 < uVar8)) {
                        *(undefined1 *)(lVar4 + 0x23) = *(undefined1 *)(lVar11 + 0x21);
                        lVar11 = *(long *)(*(long *)(_PanelMainUIController_TypeInfo_12d5600 + 0xb8)
                                          + 0x18);
                        if (lVar11 == 0) goto LAB_00ddec74;
                        if ((2 < *(uint *)(lVar11 + 0x18)) && (4 < uVar8)) {
                          *(undefined1 *)(lVar4 + 0x24) = *(undefined1 *)(lVar11 + 0x22);
                          if (((*(byte *)(_HjdBluetoothHardwareInterface_TypeInfo_12d4938 + 0x133)
                                >> 2 & 1) != 0) &&
                             (*(int *)(_HjdBluetoothHardwareInterface_TypeInfo_12d4938 + 0xe0) == 0)
                             ) {
                            native_sub_4327ec();
                            uVar8 = (uint)*(undefined8 *)(lVar4 + 0x18);
                          }
                          if (((5 < uVar8) &&
                              (*(undefined1 *)(lVar4 + 0x25) =
                                    *(undefined1 *)
                                     (*(long *)(_HjdBluetoothHardwareInterface_TypeInfo_12d4938 +
                                               0xb8) + 0x12), uVar8 != 6)) &&
                             (*(undefined1 *)(lVar4 + 0x26) =
                                   *(undefined1 *)
                                    (*(long *)(_HjdBluetoothHardwareInterface_TypeInfo_12d4938 +
                                              0xb8) + 0x13), 7 < uVar8)) {
                            *(undefined1 *)(lVar4 + 0x27) =
                                 *(undefined1 *)
                                  (*(long *)(_HjdBluetoothHardwareInterface_TypeInfo_12d4938 + 0xb8)
                                  + 0x14);
                            lVar11 = *plVar12;
                            if (lVar11 == 0) goto LAB_00ddec74;
                            if ((*(int *)(lVar11 + 0x18) != 0) && (8 < uVar8)) {
                              *(undefined1 *)(lVar4 + 0x28) = *(undefined1 *)(lVar11 + 0x20);
                              lVar11 = *plVar12;
                              if (lVar11 == 0) goto LAB_00ddec74;
                              if ((1 < *(uint *)(lVar11 + 0x18)) && (9 < uVar8)) {
                                *(undefined1 *)(lVar4 + 0x29) = *(undefined1 *)(lVar11 + 0x21);
                                lVar11 = *plVar12;
                                if (lVar11 == 0) goto LAB_00ddec74;
                                if ((2 < *(uint *)(lVar11 + 0x18)) && (10 < uVar8)) {
                                  *(undefined1 *)(lVar4 + 0x2a) = *(undefined1 *)(lVar11 + 0x22);
                                  lVar11 = *plVar12;
                                  if (lVar11 == 0) goto LAB_00ddec74;
                                  if ((3 < *(uint *)(lVar11 + 0x18)) && (0xb < uVar8)) {
                                    *(undefined1 *)(lVar4 + 0x2b) = *(undefined1 *)(lVar11 + 0x23);
                                    lVar11 = *plVar12;
                                    if (lVar11 == 0) goto LAB_00ddec74;
                                    if ((4 < *(uint *)(lVar11 + 0x18)) && (0xc < uVar8)) {
                                      *(undefined1 *)(lVar4 + 0x2c) = *(undefined1 *)(lVar11 + 0x24)
                                      ;
                                      lVar11 = *plVar12;
                                      if (lVar11 == 0) goto LAB_00ddec74;
                                      if ((5 < *(uint *)(lVar11 + 0x18)) && (0xd < uVar8)) {
                                        *(undefined1 *)(lVar4 + 0x2d) =
                                             *(undefined1 *)(lVar11 + 0x25);
                                        lVar11 = *plVar12;
                                        if (lVar11 == 0) goto LAB_00ddec74;
                                        if ((6 < *(uint *)(lVar11 + 0x18)) && (0xe < uVar8)) {
                                          *(undefined1 *)(lVar4 + 0x2e) =
                                               *(undefined1 *)(lVar11 + 0x26);
                                          lVar11 = *plVar12;
                                          if (lVar11 == 0) goto LAB_00ddec74;
                                          if ((7 < *(uint *)(lVar11 + 0x18)) && (0xf < uVar8)) {
                                            *(undefined1 *)(lVar4 + 0x2f) =
                                                 *(undefined1 *)(lVar11 + 0x27);
                                            lVar11 = *plVar12;
                                            if (lVar11 == 0) goto LAB_00ddec74;
                                            if ((8 < *(uint *)(lVar11 + 0x18)) && (0x10 < uVar8)) {
                                              *(undefined1 *)(lVar4 + 0x30) =
                                                   *(undefined1 *)(lVar11 + 0x28);
                                              lVar11 = *plVar12;
                                              if (lVar11 == 0) goto LAB_00ddec74;
                                              if ((9 < *(uint *)(lVar11 + 0x18)) && (0x11 < uVar8))
                                              {
                                                *(undefined1 *)(lVar4 + 0x31) =
                                                     *(undefined1 *)(lVar11 + 0x29);
                                                *(long *)(param_1 + 0x20) = lVar4;
                                                native_sub_4326e0((long *)(param_1 + 0x20),lVar4);
                                                *(undefined1 *)(param_1 + 0x1d) = 1;
                                                *(undefined4 *)(param_1 + 0x38) = 3;
                                                goto LAB_00dde954;
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
    uVar6 = native_sub_43283c();
                    /* WARNING: Subroutine does not return */
    native_sub_4327dc(uVar6,0);
  }
LAB_00ddec74:
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* ContainerRemoteTankUIController$$gethaomiao @ 0xddec84
 * int64_t ContainerRemoteTankUIController__gethaomiao (ContainerRemoteTankUIController_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ContainerRemoteTankUIController$$gethaomiao
   int64_t ContainerRemoteTankUIController__gethaomiao (ContainerRemoteTankUIController_o* __this,
   const MethodInfo* method); */

long native_ContainerRemoteTankUIController__gethaomiao_ddec84(void)

{
  long lVar1;
  undefined8 uStack_18;
  
  if ((bRam0000000001346e8d & 1) == 0) {
    native_sub_43273c(&System_DateTime_TypeInfo_12d42f8);
    bRam0000000001346e8d = 1;
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



/* ContainerRemoteTankUIController$$Awake @ 0xdded38
 * void ContainerRemoteTankUIController__Awake (ContainerRemoteTankUIController_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ContainerRemoteTankUIController$$Awake
   void ContainerRemoteTankUIController__Awake (ContainerRemoteTankUIController_o* __this, const
   MethodInfo* method); */

void native_ContainerRemoteTankUIController__Awake_dded38(long param_1)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  
  if ((bRam0000000001346e8e & 1) == 0) {
    native_sub_43273c(&StringLiteral_TankBloodbar_12f1498);
    native_sub_43273c(&StringLiteral_ButtonRTankroate_12ec938);
    native_sub_43273c(&StringLiteral_ButtonRTankOpenclose_12ec920);
    native_sub_43273c(&StringLiteral_xue1_12f6de8);
    native_sub_43273c(&StringLiteral_xue2_12f6df0);
    native_sub_43273c(&StringLiteral_ButtonRTankPao_12ec928);
    native_sub_43273c(&StringLiteral_xue4_12f6e00);
    native_sub_43273c(&StringLiteral_xue5_12f6e08);
    native_sub_43273c(&StringLiteral_xue3_12f6df8);
    native_sub_43273c(&StringLiteral_ButtonRTankResult_12ec930);
    bRam0000000001346e8e = 1;
  }
  lVar4 = native_UnityEngine_Component__get_transform_8da62c(param_1,0);
  if ((lVar4 != 0) &&
     (lVar4 = native_UnityEngine_Transform__FindChild_772e3c
                        (lVar4,_StringLiteral_ButtonRTankResult_12ec930,0), lVar4 != 0)) {
    uVar5 = native_UnityEngine_Component__get_gameObject_8da66c(lVar4,0);
    *(undefined8 *)(param_1 + 0x88) = uVar5;
    native_sub_4326e0();
    lVar4 = native_UnityEngine_Component__get_transform_8da62c(param_1,0);
    if ((lVar4 != 0) &&
       (lVar4 = native_UnityEngine_Transform__FindChild_772e3c
                          (lVar4,_StringLiteral_ButtonRTankPao_12ec928,0), lVar4 != 0)) {
      uVar5 = native_UnityEngine_Component__get_gameObject_8da66c(lVar4,0);
      *(undefined8 *)(param_1 + 0x90) = uVar5;
      native_sub_4326e0();
      lVar4 = native_UnityEngine_Component__get_transform_8da62c(param_1,0);
      if ((lVar4 != 0) &&
         (lVar4 = native_UnityEngine_Transform__FindChild_772e3c
                            (lVar4,_StringLiteral_ButtonRTankroate_12ec938,0), lVar4 != 0)) {
        uVar5 = native_UnityEngine_Component__get_gameObject_8da66c(lVar4,0);
        *(undefined8 *)(param_1 + 0x98) = uVar5;
        native_sub_4326e0();
        lVar4 = native_UnityEngine_Component__get_transform_8da62c(param_1,0);
        if (lVar4 != 0) {
          lVar4 = native_UnityEngine_Transform__FindChild_772e3c
                            (lVar4,_StringLiteral_TankBloodbar_12f1498,0);
          if ((lVar4 != 0) &&
             (lVar4 = native_UnityEngine_Transform__FindChild_772e3c
                                (lVar4,_StringLiteral_xue1_12f6de8,0), lVar4 != 0)) {
            uVar5 = native_UnityEngine_Component__get_gameObject_8da66c(lVar4,0);
            *(undefined8 *)(param_1 + 0xa0) = uVar5;
            native_sub_4326e0();
            lVar4 = native_UnityEngine_Component__get_transform_8da62c(param_1,0);
            if ((lVar4 != 0) &&
               ((lVar4 = native_UnityEngine_Transform__FindChild_772e3c
                                   (lVar4,_StringLiteral_TankBloodbar_12f1498,0), lVar4 != 0 &&
                (lVar4 = native_UnityEngine_Transform__FindChild_772e3c
                                   (lVar4,_StringLiteral_xue2_12f6df0,0), lVar4 != 0)))) {
              uVar5 = native_UnityEngine_Component__get_gameObject_8da66c(lVar4,0);
              *(undefined8 *)(param_1 + 0xa8) = uVar5;
              native_sub_4326e0();
              lVar4 = native_UnityEngine_Component__get_transform_8da62c(param_1,0);
              if ((lVar4 != 0) &&
                 ((lVar4 = native_UnityEngine_Transform__FindChild_772e3c
                                     (lVar4,_StringLiteral_TankBloodbar_12f1498,0), lVar4 != 0 &&
                  (lVar4 = native_UnityEngine_Transform__FindChild_772e3c
                                     (lVar4,_StringLiteral_xue3_12f6df8,0), lVar4 != 0)))) {
                uVar5 = native_UnityEngine_Component__get_gameObject_8da66c(lVar4,0);
                *(undefined8 *)(param_1 + 0xb0) = uVar5;
                native_sub_4326e0();
                lVar4 = native_UnityEngine_Component__get_transform_8da62c(param_1,0);
                if ((lVar4 != 0) &&
                   ((lVar4 = native_UnityEngine_Transform__FindChild_772e3c
                                       (lVar4,_StringLiteral_TankBloodbar_12f1498,0), lVar4 != 0 &&
                    (lVar4 = native_UnityEngine_Transform__FindChild_772e3c
                                       (lVar4,_StringLiteral_xue4_12f6e00,0), lVar4 != 0)))) {
                  uVar5 = native_UnityEngine_Component__get_gameObject_8da66c(lVar4,0);
                  *(undefined8 *)(param_1 + 0xb8) = uVar5;
                  native_sub_4326e0();
                  lVar4 = native_UnityEngine_Component__get_transform_8da62c(param_1,0);
                  if ((lVar4 != 0) &&
                     ((lVar4 = native_UnityEngine_Transform__FindChild_772e3c
                                         (lVar4,_StringLiteral_TankBloodbar_12f1498,0), lVar4 != 0
                      && (lVar4 = native_UnityEngine_Transform__FindChild_772e3c
                                            (lVar4,_StringLiteral_xue5_12f6e08,0), lVar4 != 0)))) {
                    uVar5 = native_UnityEngine_Component__get_gameObject_8da66c(lVar4,0);
                    *(undefined8 *)(param_1 + 0xc0) = uVar5;
                    native_sub_4326e0();
                    lVar4 = native_UnityEngine_GameObject__Find_8dead0
                                      (_StringLiteral_ButtonRTankOpenclose_12ec920,0);
                    if (lVar4 != 0) {
                      uVar5 = native_UnityEngine_GameObject__get_gameObject_8debb8(lVar4,0);
                      puVar6 = (undefined8 *)(param_1 + 200);
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
  }
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* ContainerRemoteTankUIController$$.ctor @ 0xddf068
 * void ContainerRemoteTankUIController___ctor (ContainerRemoteTankUIController_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ContainerRemoteTankUIController$$.ctor
   void ContainerRemoteTankUIController___ctor (ContainerRemoteTankUIController_o* __this, const
   MethodInfo* method); */

undefined1  [16] native_ContainerRemoteTankUIController___ctor_ddf068(ulong param_1)

{
  undefined8 uVar1;
  undefined1 auVar2 [16];
  
  if ((bRam0000000001346e8f & 1) == 0) {
    native_sub_43273c(&byte___TypeInfo_12d3060);
    bRam0000000001346e8f = 1;
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
  *(undefined4 *)(param_1 + 0x70) = 1;
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



/* ContainerRemoteTankUIController$$.cctor @ 0xddf124
 * void ContainerRemoteTankUIController___cctor (const MethodInfo* method); */

/* ContainerRemoteTankUIController$$.cctor
   void ContainerRemoteTankUIController___cctor (const MethodInfo* method); */

void native_ContainerRemoteTankUIController___cctor_ddf124(void)

{
  return;
}



/* ContainerRemoteTankUIController$$<OnClickButtonBlesetting>b__21_4 @ 0xddf128
 * void ContainerRemoteTankUIController___OnClickButtonBlesetting_b__21_4 (ContainerRemoteTankUIController_o* __this, System_String_o* data, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ContainerRemoteTankUIController$$<OnClickButtonBlesetting>b__21_4
   void ContainerRemoteTankUIController___OnClickButtonBlesetting_b__21_4
   (ContainerRemoteTankUIController_o* __this, System_String_o* data, const MethodInfo* method); */

void native_ContainerRemoteTankUIController___OnClickButtonBlesetting_b__21_4_ddf128
               (long param_1,undefined8 param_2)

{
  undefined1 uVar1;
  undefined1 uVar2;
  byte bVar3;
  uint uVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  undefined8 *puVar8;
  long lVar9;
  char *pcVar10;
  uint *puVar11;
  int *piVar12;
  int iVar13;
  long lVar14;
  undefined8 uVar15;
  long *plVar16;
  
  if ((bRam0000000001346e90 & 1) == 0) {
    native_sub_43273c(&byte___TypeInfo_12d3060);
    native_sub_43273c(&ContainerMatchingCodeUIController_TypeInfo_12d3f38);
    native_sub_43273c(&System_Convert_TypeInfo_12d3fd0);
    native_sub_43273c(&HjdBluetoothHardwareInterface_TypeInfo_12d4938);
    native_sub_43273c(&PanelMainUIController_TypeInfo_12d5600);
    bRam0000000001346e90 = 1;
  }
  lVar5 = native_sub_432750(_byte___TypeInfo_12d3060,2);
  if (((*(byte *)(_System_Convert_TypeInfo_12d3fd0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_System_Convert_TypeInfo_12d3fd0 + 0xe0) == 0)) {
    native_sub_4327ec(_System_Convert_TypeInfo_12d3fd0);
  }
  lVar6 = native_System_Convert__FromBase64String_79aff4(param_2,0);
  uVar1 = *(undefined1 *)(param_1 + 0x18);
  uVar2 = *(undefined1 *)(param_1 + 0x1b);
  if (((*(byte *)(_HjdBluetoothHardwareInterface_TypeInfo_12d4938 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_HjdBluetoothHardwareInterface_TypeInfo_12d4938 + 0xe0) == 0)) {
    native_sub_4327ec(_HjdBluetoothHardwareInterface_TypeInfo_12d4938);
  }
  lVar9 = *(long *)(_HjdBluetoothHardwareInterface_TypeInfo_12d4938 + 0xb8);
  uVar7 = native_HjdBluetoothHardwareInterface__calDataIsTrue_dc485c
                    (lVar6,uVar1,uVar2,*(undefined1 *)(lVar9 + 0x12),*(undefined1 *)(lVar9 + 0x13),
                     *(undefined1 *)(lVar9 + 0x14),lVar5,0);
  if ((uVar7 & 1) != 0) {
    if (((*(byte *)(_PanelMainUIController_TypeInfo_12d5600 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_PanelMainUIController_TypeInfo_12d5600 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    uVar15 = *(undefined8 *)(*(long *)(_PanelMainUIController_TypeInfo_12d5600 + 0xb8) + 0xf0);
    if (((*(byte *)(_ContainerMatchingCodeUIController_TypeInfo_12d3f38 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_ContainerMatchingCodeUIController_TypeInfo_12d3f38 + 0xe0) == 0)) {
      native_sub_4327ec(_ContainerMatchingCodeUIController_TypeInfo_12d3f38);
    }
    puVar8 = *(undefined8 **)(_ContainerMatchingCodeUIController_TypeInfo_12d3f38 + 0xb8);
    *puVar8 = uVar15;
    native_sub_4326e0(puVar8,uVar15);
    pcVar10 = (char *)(*(long *)(_ContainerMatchingCodeUIController_TypeInfo_12d3f38 + 0xb8) + 9);
    if (*pcVar10 == '\0') {
      if (((*(byte *)(_ContainerMatchingCodeUIController_TypeInfo_12d3f38 + 0x133) >> 2 & 1) != 0)
         && (*(int *)(_ContainerMatchingCodeUIController_TypeInfo_12d3f38 + 0xe0) == 0)) {
        native_sub_4327ec();
        pcVar10 = (char *)(*(long *)(_ContainerMatchingCodeUIController_TypeInfo_12d3f38 + 0xb8) + 9
                          );
      }
      *pcVar10 = '\x01';
    }
    if (((*(byte *)(_HjdBluetoothHardwareInterface_TypeInfo_12d4938 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_HjdBluetoothHardwareInterface_TypeInfo_12d4938 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    uVar4 = native_HjdBluetoothHardwareInterface__bleuseNumber_dc4940(0);
    if (((*(byte *)(_PanelMainUIController_TypeInfo_12d5600 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_PanelMainUIController_TypeInfo_12d5600 + 0xe0) == 0)) {
      native_sub_4327ec(_PanelMainUIController_TypeInfo_12d5600);
    }
    if (lVar6 == 0) goto LAB_00ddf7c0;
    if (*(uint *)(lVar6 + 0x18) <= uVar4) goto LAB_00ddf7b4;
    lVar9 = *(long *)(*(long *)(_PanelMainUIController_TypeInfo_12d5600 + 0xb8) + 0x18);
    if (lVar9 == 0) goto LAB_00ddf7c0;
    if (*(int *)(lVar9 + 0x18) == 0) goto LAB_00ddf7b4;
    *(undefined1 *)(lVar9 + 0x20) = *(undefined1 *)(lVar6 + (int)uVar4 + 0x20);
    if (*(uint *)(lVar6 + 0x18) <= uVar4 + 1) goto LAB_00ddf7b4;
    lVar9 = *(long *)(*(long *)(_PanelMainUIController_TypeInfo_12d5600 + 0xb8) + 0x18);
    if (lVar9 == 0) goto LAB_00ddf7c0;
    if (*(uint *)(lVar9 + 0x18) < 2) goto LAB_00ddf7b4;
    *(undefined1 *)(lVar9 + 0x21) = *(undefined1 *)(lVar6 + (int)(uVar4 + 1) + 0x20);
    if (*(uint *)(lVar6 + 0x18) <= uVar4 + 2) goto LAB_00ddf7b4;
    lVar9 = *(long *)(*(long *)(_PanelMainUIController_TypeInfo_12d5600 + 0xb8) + 0x18);
    if (lVar9 == 0) goto LAB_00ddf7c0;
    if (*(uint *)(lVar9 + 0x18) < 3) goto LAB_00ddf7b4;
    *(undefined1 *)(lVar9 + 0x22) = *(undefined1 *)(lVar6 + (int)(uVar4 + 2) + 0x20);
    *(undefined1 *)(*(long *)(_PanelMainUIController_TypeInfo_12d5600 + 0xb8) + 0x20) = 1;
    lVar9 = native_sub_432750(_byte___TypeInfo_12d3060,0x13);
    if (lVar9 == 0) goto LAB_00ddf7c0;
    uVar4 = *(uint *)(lVar9 + 0x18);
    if ((uVar4 == 0) ||
       (*(undefined1 *)(lVar9 + 0x20) = *(undefined1 *)(param_1 + 0x18), uVar4 == 1))
    goto LAB_00ddf7b4;
    *(undefined1 *)(lVar9 + 0x21) = *(undefined1 *)(param_1 + 0x1a);
    lVar14 = *(long *)(*(long *)(_PanelMainUIController_TypeInfo_12d5600 + 0xb8) + 0x18);
    if (lVar14 == 0) goto LAB_00ddf7c0;
    if ((*(int *)(lVar14 + 0x18) == 0) || (uVar4 < 3)) goto LAB_00ddf7b4;
    *(undefined1 *)(lVar9 + 0x22) = *(undefined1 *)(lVar14 + 0x20);
    lVar14 = *(long *)(*(long *)(_PanelMainUIController_TypeInfo_12d5600 + 0xb8) + 0x18);
    if (lVar14 == 0) goto LAB_00ddf7c0;
    if ((*(uint *)(lVar14 + 0x18) < 2) || (uVar4 < 4)) goto LAB_00ddf7b4;
    *(undefined1 *)(lVar9 + 0x23) = *(undefined1 *)(lVar14 + 0x21);
    lVar14 = *(long *)(*(long *)(_PanelMainUIController_TypeInfo_12d5600 + 0xb8) + 0x18);
    if (lVar14 == 0) goto LAB_00ddf7c0;
    if ((((*(uint *)(lVar14 + 0x18) < 3) || (uVar4 < 5)) ||
        (*(undefined1 *)(lVar9 + 0x24) = *(undefined1 *)(lVar14 + 0x22), uVar4 == 5)) ||
       ((*(undefined1 *)(lVar9 + 0x25) =
              *(undefined1 *)
               (*(long *)(_HjdBluetoothHardwareInterface_TypeInfo_12d4938 + 0xb8) + 0x12), uVar4 < 7
        || (*(undefined1 *)(lVar9 + 0x26) =
                 *(undefined1 *)
                  (*(long *)(_HjdBluetoothHardwareInterface_TypeInfo_12d4938 + 0xb8) + 0x13),
           uVar4 == 7)))) goto LAB_00ddf7b4;
    *(undefined1 *)(lVar9 + 0x27) =
         *(undefined1 *)(*(long *)(_HjdBluetoothHardwareInterface_TypeInfo_12d4938 + 0xb8) + 0x14);
    plVar16 = (long *)(param_1 + 0x28);
    lVar14 = *plVar16;
    if (lVar14 == 0) goto LAB_00ddf7c0;
    if ((*(int *)(lVar14 + 0x18) == 0) || (uVar4 < 9)) goto LAB_00ddf7b4;
    *(undefined1 *)(lVar9 + 0x28) = *(undefined1 *)(lVar14 + 0x20);
    lVar14 = *plVar16;
    if (lVar14 == 0) goto LAB_00ddf7c0;
    if ((*(uint *)(lVar14 + 0x18) < 2) || (uVar4 < 10)) goto LAB_00ddf7b4;
    *(undefined1 *)(lVar9 + 0x29) = *(undefined1 *)(lVar14 + 0x21);
    lVar14 = *plVar16;
    if (lVar14 == 0) goto LAB_00ddf7c0;
    if ((*(uint *)(lVar14 + 0x18) < 3) || (uVar4 < 0xb)) goto LAB_00ddf7b4;
    *(undefined1 *)(lVar9 + 0x2a) = *(undefined1 *)(lVar14 + 0x22);
    lVar14 = *plVar16;
    if (lVar14 == 0) goto LAB_00ddf7c0;
    if ((*(uint *)(lVar14 + 0x18) < 4) || (uVar4 < 0xc)) goto LAB_00ddf7b4;
    *(undefined1 *)(lVar9 + 0x2b) = *(undefined1 *)(lVar14 + 0x23);
    lVar14 = *plVar16;
    if (lVar14 == 0) goto LAB_00ddf7c0;
    if ((*(uint *)(lVar14 + 0x18) < 5) || (uVar4 < 0xd)) goto LAB_00ddf7b4;
    *(undefined1 *)(lVar9 + 0x2c) = *(undefined1 *)(lVar14 + 0x24);
    lVar14 = *plVar16;
    if (lVar14 == 0) goto LAB_00ddf7c0;
    if ((*(uint *)(lVar14 + 0x18) < 6) || (uVar4 < 0xe)) goto LAB_00ddf7b4;
    *(undefined1 *)(lVar9 + 0x2d) = *(undefined1 *)(lVar14 + 0x25);
    lVar14 = *plVar16;
    if (lVar14 == 0) goto LAB_00ddf7c0;
    if ((*(uint *)(lVar14 + 0x18) < 7) || (uVar4 < 0xf)) goto LAB_00ddf7b4;
    *(undefined1 *)(lVar9 + 0x2e) = *(undefined1 *)(lVar14 + 0x26);
    lVar14 = *plVar16;
    if (lVar14 == 0) goto LAB_00ddf7c0;
    if ((*(uint *)(lVar14 + 0x18) < 8) || (uVar4 < 0x10)) goto LAB_00ddf7b4;
    *(undefined1 *)(lVar9 + 0x2f) = *(undefined1 *)(lVar14 + 0x27);
    lVar14 = *plVar16;
    if (lVar14 == 0) goto LAB_00ddf7c0;
    if ((*(uint *)(lVar14 + 0x18) < 9) || (uVar4 < 0x11)) goto LAB_00ddf7b4;
    *(undefined1 *)(lVar9 + 0x30) = *(undefined1 *)(lVar14 + 0x28);
    lVar14 = *plVar16;
    if (lVar14 == 0) goto LAB_00ddf7c0;
    if ((*(uint *)(lVar14 + 0x18) < 10) || (uVar4 < 0x12)) goto LAB_00ddf7b4;
    *(undefined1 *)(lVar9 + 0x31) = *(undefined1 *)(lVar14 + 0x29);
    *(long *)(param_1 + 0x20) = lVar9;
    native_sub_4326e0((long *)(param_1 + 0x20));
    *(undefined1 *)(param_1 + 0x1d) = 0;
    *(undefined4 *)(param_1 + 0x38) = 5;
    uVar15 = native_sub_432750(_byte___TypeInfo_12d3060,10);
    *(undefined8 *)(param_1 + 0x28) = uVar15;
    native_sub_4326e0(plVar16,uVar15);
  }
  uVar1 = *(undefined1 *)(param_1 + 0x18);
  uVar2 = *(undefined1 *)(param_1 + 0x1c);
  if (((*(byte *)(_HjdBluetoothHardwareInterface_TypeInfo_12d4938 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_HjdBluetoothHardwareInterface_TypeInfo_12d4938 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  lVar9 = *(long *)(_HjdBluetoothHardwareInterface_TypeInfo_12d4938 + 0xb8);
  uVar7 = native_HjdBluetoothHardwareInterface__calDataIsTrue_dc485c
                    (lVar6,uVar1,uVar2,*(undefined1 *)(lVar9 + 0x12),*(undefined1 *)(lVar9 + 0x13),
                     *(undefined1 *)(lVar9 + 0x14),lVar5,0);
  if ((uVar7 & 1) == 0) {
    return;
  }
  if (lVar5 == 0) {
LAB_00ddf7c0:
                    /* WARNING: Subroutine does not return */
    native_sub_432810();
  }
  if (*(uint *)(lVar5 + 0x18) != 0) {
    if (*(char *)(lVar5 + 0x20) != '\x02') {
      return;
    }
    if (1 < *(uint *)(lVar5 + 0x18)) {
      bVar3 = *(byte *)(lVar5 + 0x21);
      if (((*(byte *)(_PanelMainUIController_TypeInfo_12d5600 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_PanelMainUIController_TypeInfo_12d5600 + 0xe0) == 0)) {
        native_sub_4327ec();
      }
      puVar11 = (uint *)(*(long *)(_PanelMainUIController_TypeInfo_12d5600 + 0xb8) + 0xa4);
      if (*puVar11 == (uint)bVar3) {
        return;
      }
      if (1 < *(uint *)(lVar5 + 0x18)) {
        bVar3 = *(byte *)(lVar5 + 0x21);
        if (((*(byte *)(_PanelMainUIController_TypeInfo_12d5600 + 0x133) >> 2 & 1) != 0) &&
           (*(int *)(_PanelMainUIController_TypeInfo_12d5600 + 0xe0) == 0)) {
          native_sub_4327ec();
          puVar11 = (uint *)(*(long *)(_PanelMainUIController_TypeInfo_12d5600 + 0xb8) + 0xa4);
        }
        lVar5 = _PanelMainUIController_TypeInfo_12d5600;
        *puVar11 = (uint)bVar3;
        piVar12 = (int *)(*(long *)(lVar5 + 0xb8) + 0xa8);
        iVar13 = *piVar12;
        if (iVar13 < 1) {
          return;
        }
        if (((*(byte *)(lVar5 + 0x133) >> 2 & 1) != 0) && (*(int *)(lVar5 + 0xe0) == 0)) {
          native_sub_4327ec();
          piVar12 = (int *)(*(long *)(_PanelMainUIController_TypeInfo_12d5600 + 0xb8) + 0xa8);
          iVar13 = *piVar12;
        }
        *piVar12 = iVar13 + -1;
        if ((bRam0000000001346e88 & 1) == 0) {
          native_sub_43273c(&PanelMainUIController_TypeInfo_12d5600);
          bRam0000000001346e88 = 1;
        }
        if (((*(byte *)(_PanelMainUIController_TypeInfo_12d5600 + 0x133) >> 2 & 1) != 0) &&
           (*(int *)(_PanelMainUIController_TypeInfo_12d5600 + 0xe0) == 0)) {
          native_sub_4327ec();
        }
        iVar13 = *(int *)(*(long *)(_PanelMainUIController_TypeInfo_12d5600 + 0xb8) + 0xa8);
        if (iVar13 == 5) {
          if (*(long *)(param_1 + 0x48) != 0) {
            native_UnityEngine_GameObject__SetActive_8de698(*(long *)(param_1 + 0x48),1,0);
            if (*(long *)(param_1 + 0x50) != 0) {
              native_UnityEngine_GameObject__SetActive_8de698(*(long *)(param_1 + 0x50),1,0);
              if (*(long *)(param_1 + 0x58) != 0) {
                native_UnityEngine_GameObject__SetActive_8de698(*(long *)(param_1 + 0x58),1,0);
                if (*(long *)(param_1 + 0x60) == 0) goto LAB_00dddb48;
                native_UnityEngine_GameObject__SetActive_8de698(*(long *)(param_1 + 0x60),1,0);
                lVar5 = *(long *)(param_1 + 0x68);
                if (lVar5 == 0) goto LAB_00dddb48;
                uVar15 = 1;
                goto code_r0x008de698;
              }
            }
          }
        }
        else {
          if (((*(byte *)(_PanelMainUIController_TypeInfo_12d5600 + 0x133) >> 2 & 1) != 0) &&
             (*(int *)(_PanelMainUIController_TypeInfo_12d5600 + 0xe0) == 0)) {
            native_sub_4327ec();
            iVar13 = *(int *)(*(long *)(_PanelMainUIController_TypeInfo_12d5600 + 0xb8) + 0xa8);
          }
          if (iVar13 == 4) {
            if (*(long *)(param_1 + 0x48) == 0) goto LAB_00dddb48;
            native_UnityEngine_GameObject__SetActive_8de698(*(long *)(param_1 + 0x48),1,0);
            if (*(long *)(param_1 + 0x50) == 0) goto LAB_00dddb48;
            native_UnityEngine_GameObject__SetActive_8de698(*(long *)(param_1 + 0x50),1,0);
            if (*(long *)(param_1 + 0x58) == 0) goto LAB_00dddb48;
            native_UnityEngine_GameObject__SetActive_8de698(*(long *)(param_1 + 0x58),1,0);
            lVar5 = *(long *)(param_1 + 0x60);
            if (lVar5 == 0) goto LAB_00dddb48;
            uVar15 = 1;
          }
          else {
            if (((*(byte *)(_PanelMainUIController_TypeInfo_12d5600 + 0x133) >> 2 & 1) != 0) &&
               (*(int *)(_PanelMainUIController_TypeInfo_12d5600 + 0xe0) == 0)) {
              native_sub_4327ec();
              iVar13 = *(int *)(*(long *)(_PanelMainUIController_TypeInfo_12d5600 + 0xb8) + 0xa8);
            }
            if (iVar13 == 3) {
              if (*(long *)(param_1 + 0x48) == 0) goto LAB_00dddb48;
              native_UnityEngine_GameObject__SetActive_8de698(*(long *)(param_1 + 0x48),1,0);
              if (*(long *)(param_1 + 0x50) == 0) goto LAB_00dddb48;
              native_UnityEngine_GameObject__SetActive_8de698(*(long *)(param_1 + 0x50),1,0);
              lVar5 = *(long *)(param_1 + 0x58);
              if (lVar5 == 0) goto LAB_00dddb48;
              uVar15 = 1;
            }
            else {
              if (((*(byte *)(_PanelMainUIController_TypeInfo_12d5600 + 0x133) >> 2 & 1) != 0) &&
                 (*(int *)(_PanelMainUIController_TypeInfo_12d5600 + 0xe0) == 0)) {
                native_sub_4327ec();
                iVar13 = *(int *)(*(long *)(_PanelMainUIController_TypeInfo_12d5600 + 0xb8) + 0xa8);
              }
              if (iVar13 == 2) {
                if (*(long *)(param_1 + 0x48) == 0) goto LAB_00dddb48;
                native_UnityEngine_GameObject__SetActive_8de698(*(long *)(param_1 + 0x48),1,0);
                lVar5 = *(long *)(param_1 + 0x50);
                if (lVar5 == 0) goto LAB_00dddb48;
                uVar15 = 1;
              }
              else {
                if (((*(byte *)(_PanelMainUIController_TypeInfo_12d5600 + 0x133) >> 2 & 1) != 0) &&
                   (*(int *)(_PanelMainUIController_TypeInfo_12d5600 + 0xe0) == 0)) {
                  native_sub_4327ec();
                  iVar13 = *(int *)(*(long *)(_PanelMainUIController_TypeInfo_12d5600 + 0xb8) + 0xa8
                                   );
                }
                if (iVar13 == 1) {
                  lVar5 = *(long *)(param_1 + 0x48);
                  if (lVar5 == 0) goto LAB_00dddb48;
                  uVar15 = 1;
                }
                else {
                  if (((*(byte *)(_PanelMainUIController_TypeInfo_12d5600 + 0x133) >> 2 & 1) != 0)
                     && (*(int *)(_PanelMainUIController_TypeInfo_12d5600 + 0xe0) == 0)) {
                    native_sub_4327ec();
                    iVar13 = *(int *)(*(long *)(_PanelMainUIController_TypeInfo_12d5600 + 0xb8) +
                                     0xa8);
                  }
                  if (iVar13 != 0) {
                    return;
                  }
                  lVar5 = *(long *)(param_1 + 0x48);
                  if (lVar5 == 0) goto LAB_00dddb48;
                  uVar15 = 0;
                }
                native_UnityEngine_GameObject__SetActive_8de698(lVar5,uVar15,0);
                lVar5 = *(long *)(param_1 + 0x50);
                if (lVar5 == 0) goto LAB_00dddb48;
                uVar15 = 0;
              }
              native_UnityEngine_GameObject__SetActive_8de698(lVar5,uVar15,0);
              lVar5 = *(long *)(param_1 + 0x58);
              if (lVar5 == 0) goto LAB_00dddb48;
              uVar15 = 0;
            }
            native_UnityEngine_GameObject__SetActive_8de698(lVar5,uVar15,0);
            lVar5 = *(long *)(param_1 + 0x60);
            if (lVar5 == 0) goto LAB_00dddb48;
            uVar15 = 0;
          }
          native_UnityEngine_GameObject__SetActive_8de698(lVar5,uVar15,0);
          lVar5 = *(long *)(param_1 + 0x68);
          if (lVar5 != 0) {
            uVar15 = 0;
code_r0x008de698:
            if (pcRam0000000001340bf8 == (code *)0x0) {
              pcRam0000000001340bf8 = (code *)native_sub_4326f0(&UNK_00e2da67);
            }
                    /* WARNING: Could not recover jumptable at 0x008de6e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (*pcRam0000000001340bf8)(lVar5,uVar15);
            return;
          }
        }
LAB_00dddb48:
                    /* WARNING: Subroutine does not return */
        native_sub_432810();
      }
    }
  }
LAB_00ddf7b4:
  uVar15 = native_sub_43283c();
                    /* WARNING: Subroutine does not return */
  native_sub_4327dc(uVar15,0);
}


