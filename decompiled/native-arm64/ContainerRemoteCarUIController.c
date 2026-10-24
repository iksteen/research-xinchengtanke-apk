/* ARM64 IL2CPP native pseudocode from Ghidra.
 * Recovered implementation, not original C# source.
 * Function boundaries follow the IL2CPP method address table. */


/* ContainerRemoteCarUIController$$Start @ 0xdd8558
 * void ContainerRemoteCarUIController__Start (ContainerRemoteCarUIController_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ContainerRemoteCarUIController$$Start
   void ContainerRemoteCarUIController__Start (ContainerRemoteCarUIController_o* __this, const
   MethodInfo* method); */

void native_ContainerRemoteCarUIController__Start_dd8558(long param_1)

{
  undefined8 *puVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  uint uVar6;
  long lVar7;
  
  if ((bRam0000000001346e6a & 1) == 0) {
    native_sub_43273c(&PanelMainUIController_TypeInfo_12d5600);
    native_sub_43273c(&StringLiteral_gyro_12f49e0);
    native_sub_43273c(&StringLiteral_hand_12f4a18);
    native_sub_43273c(&StringLiteral__12eaac0);
    bRam0000000001346e6a = 1;
  }
  if (((*(byte *)(_PanelMainUIController_TypeInfo_12d5600 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_PanelMainUIController_TypeInfo_12d5600 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  lVar2 = *(long *)(*(long *)(_PanelMainUIController_TypeInfo_12d5600 + 0xb8) + 0x88);
  if (lVar2 == 0) goto LAB_00dd86ec;
  uVar3 = native_System_String__Equals_af8bfc(lVar2,_StringLiteral_hand_12f4a18,0);
  if ((uVar3 & 1) == 0) {
    if (((*(ushort *)(_PanelMainUIController_TypeInfo_12d5600 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(_PanelMainUIController_TypeInfo_12d5600 + 0xe0) == 0)) {
      native_sub_4327ec(_PanelMainUIController_TypeInfo_12d5600);
    }
    lVar2 = *(long *)(*(long *)(_PanelMainUIController_TypeInfo_12d5600 + 0xb8) + 0x88);
    if (lVar2 == 0) goto LAB_00dd86ec;
    uVar3 = native_System_String__Equals_af8bfc(lVar2,_StringLiteral_gyro_12f49e0,0);
    if ((uVar3 & 1) != 0) {
      if (((*(byte *)(_PanelMainUIController_TypeInfo_12d5600 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_PanelMainUIController_TypeInfo_12d5600 + 0xe0) == 0)) {
        native_sub_4327ec();
      }
      *(undefined8 *)(*(long *)(_PanelMainUIController_TypeInfo_12d5600 + 0xb8) + 0x88) =
           _StringLiteral__12eaac0;
      native_sub_4326e0();
      lVar2 = native_PanelMainUIController__get_Instance_738fb0(0);
      if (lVar2 == 0) goto LAB_00dd86ec;
      native_PanelMainUIController__EnterRemoveCarGravity_73a7f4(lVar2,0);
    }
  }
  else {
    if (((*(ushort *)(_PanelMainUIController_TypeInfo_12d5600 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(_PanelMainUIController_TypeInfo_12d5600 + 0xe0) == 0)) {
      native_sub_4327ec(_PanelMainUIController_TypeInfo_12d5600);
    }
    *(undefined8 *)(*(long *)(_PanelMainUIController_TypeInfo_12d5600 + 0xb8) + 0x88) =
         _StringLiteral__12eaac0;
    native_sub_4326e0();
    lVar2 = native_PanelMainUIController__get_Instance_738fb0(0);
    if (lVar2 == 0) {
LAB_00dd86ec:
                    /* WARNING: Subroutine does not return */
      native_sub_432810();
    }
    native_PanelMainUIController__SwitchLandscapescreen_73a2d4(lVar2,0);
    lVar2 = native_PanelMainUIController__get_Instance_738fb0(0);
    if (lVar2 == 0) goto LAB_00dd86ec;
    native_PanelMainUIController__EnterRemoteHandCar_73adf8(lVar2,0);
  }
  if ((bRam0000000001346e6b & 1) == 0) {
    native_sub_43273c(&EventDelegate_Callback_TypeInfo_12d72e8);
    native_sub_43273c(&Method_ContainerRemoteCarUIController_OnClickButtonBack___12e3018);
    native_sub_43273c(&Method_ContainerRemoteCarUIController_OnClickButtonBlesetting___12e3020);
    native_sub_43273c(&EventDelegate_TypeInfo_12d4590);
    native_sub_43273c(&Method_UnityEngine_GameObject_GetComponent_UIButton____12e4a88);
    native_sub_43273c(&Method_System_Collections_Generic_List_EventDelegate__Add___12dc740);
    bRam0000000001346e6b = 1;
  }
  if (*(long *)(param_1 + 0x48) != 0) {
    lVar2 = native_UnityEngine_GameObject__GetComponent_BE2_BlockSectionHeader_Custom__4a2214
                      (*(long *)(param_1 + 0x48),
                       _Method_UnityEngine_GameObject_GetComponent_UIButton____12e4a88);
    if (lVar2 != 0) {
      lVar2 = *(long *)(lVar2 + 0xc0);
      uVar4 = native_sub_432808(_EventDelegate_Callback_TypeInfo_12d72e8);
      native_EventDelegate_Callback___ctor_54bd18
                (uVar4,param_1,_Method_ContainerRemoteCarUIController_OnClickButtonBack___12e3018,0)
      ;
      uVar5 = native_sub_432808(_EventDelegate_TypeInfo_12d4590);
      native_EventDelegate___ctor_de0bd0(uVar5,uVar4,0);
      if (lVar2 != 0) {
        native_System_Collections_Generic_List_int_____Add_d40c00
                  (lVar2,uVar5,_Method_System_Collections_Generic_List_EventDelegate__Add___12dc740)
        ;
        if ((*(long *)(param_1 + 0x50) != 0) &&
           (lVar2 = native_UnityEngine_GameObject__GetComponent_BE2_BlockSectionHeader_Custom__4a2214
                              (*(long *)(param_1 + 0x50),
                               _Method_UnityEngine_GameObject_GetComponent_UIButton____12e4a88),
           lVar2 != 0)) {
          lVar2 = *(long *)(lVar2 + 0xc0);
          uVar4 = native_sub_432808(_EventDelegate_Callback_TypeInfo_12d72e8);
          native_EventDelegate_Callback___ctor_54bd18
                    (uVar4,param_1,
                     _Method_ContainerRemoteCarUIController_OnClickButtonBlesetting___12e3020,0);
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
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* ContainerRemoteCarUIController$$InitButtonEvent @ 0xdd86f0
 * void ContainerRemoteCarUIController__InitButtonEvent (ContainerRemoteCarUIController_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ContainerRemoteCarUIController$$InitButtonEvent
   void ContainerRemoteCarUIController__InitButtonEvent (ContainerRemoteCarUIController_o* __this,
   const MethodInfo* method); */

void native_ContainerRemoteCarUIController__InitButtonEvent_dd86f0(long param_1)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  uint uVar5;
  long lVar6;
  
  if ((bRam0000000001346e6b & 1) == 0) {
    native_sub_43273c(&EventDelegate_Callback_TypeInfo_12d72e8);
    native_sub_43273c(&Method_ContainerRemoteCarUIController_OnClickButtonBack___12e3018);
    native_sub_43273c(&Method_ContainerRemoteCarUIController_OnClickButtonBlesetting___12e3020);
    native_sub_43273c(&EventDelegate_TypeInfo_12d4590);
    native_sub_43273c(&Method_UnityEngine_GameObject_GetComponent_UIButton____12e4a88);
    native_sub_43273c(&Method_System_Collections_Generic_List_EventDelegate__Add___12dc740);
    bRam0000000001346e6b = 1;
  }
  if (*(long *)(param_1 + 0x48) != 0) {
    lVar2 = native_UnityEngine_GameObject__GetComponent_BE2_BlockSectionHeader_Custom__4a2214
                      (*(long *)(param_1 + 0x48),
                       _Method_UnityEngine_GameObject_GetComponent_UIButton____12e4a88);
    if (lVar2 != 0) {
      lVar2 = *(long *)(lVar2 + 0xc0);
      uVar3 = native_sub_432808(_EventDelegate_Callback_TypeInfo_12d72e8);
      native_EventDelegate_Callback___ctor_54bd18
                (uVar3,param_1,_Method_ContainerRemoteCarUIController_OnClickButtonBack___12e3018,0)
      ;
      uVar4 = native_sub_432808(_EventDelegate_TypeInfo_12d4590);
      native_EventDelegate___ctor_de0bd0(uVar4,uVar3,0);
      if (lVar2 != 0) {
        native_System_Collections_Generic_List_int_____Add_d40c00
                  (lVar2,uVar4,_Method_System_Collections_Generic_List_EventDelegate__Add___12dc740)
        ;
        if ((*(long *)(param_1 + 0x50) != 0) &&
           (lVar2 = native_UnityEngine_GameObject__GetComponent_BE2_BlockSectionHeader_Custom__4a2214
                              (*(long *)(param_1 + 0x50),
                               _Method_UnityEngine_GameObject_GetComponent_UIButton____12e4a88),
           lVar2 != 0)) {
          lVar2 = *(long *)(lVar2 + 0xc0);
          uVar3 = native_sub_432808(_EventDelegate_Callback_TypeInfo_12d72e8);
          native_EventDelegate_Callback___ctor_54bd18
                    (uVar3,param_1,
                     _Method_ContainerRemoteCarUIController_OnClickButtonBlesetting___12e3020,0);
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
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* ContainerRemoteCarUIController$$OnClickButtonBlesetting @ 0xdd8870
 * void ContainerRemoteCarUIController__OnClickButtonBlesetting (ContainerRemoteCarUIController_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ContainerRemoteCarUIController$$OnClickButtonBlesetting
   void ContainerRemoteCarUIController__OnClickButtonBlesetting (ContainerRemoteCarUIController_o*
   __this, const MethodInfo* method); */

void native_ContainerRemoteCarUIController__OnClickButtonBlesetting_dd8870(long param_1)

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
  
  if ((bRam0000000001346e6c & 1) == 0) {
    native_sub_43273c(&Method_System_Action_string___ctor___12d7fe8);
    native_sub_43273c(&System_Action_string__TypeInfo_12d2080);
    native_sub_43273c(&byte___TypeInfo_12d3060);
    native_sub_43273c(&ContainerMatchingCodeUIController_TypeInfo_12d3f38);
    native_sub_43273c(&
                      Method_ContainerRemoteCarUIController__OnClickButtonBlesetting_b__13_4___12e3010
                     );
    native_sub_43273c(&HjdBluetoothHardwareInterface_TypeInfo_12d4938);
    native_sub_43273c(&PanelMainUIController_TypeInfo_12d5600);
    native_sub_43273c(&
                      Method_ContainerRemoteCarUIController___c__OnClickButtonBlesetting_b__13_0___12e9788
                     );
    native_sub_43273c(&
                      Method_ContainerRemoteCarUIController___c__OnClickButtonBlesetting_b__13_1___12e9790
                     );
    native_sub_43273c(&
                      Method_ContainerRemoteCarUIController___c__OnClickButtonBlesetting_b__13_2___12e9798
                     );
    native_sub_43273c(&
                      Method_ContainerRemoteCarUIController___c__OnClickButtonBlesetting_b__13_3___12e97a0
                     );
    native_sub_43273c(&ContainerRemoteCarUIController___c_TypeInfo_12d7158);
    native_sub_43273c(&StringLiteral_ContainerMatchingCode_12ed220);
    bRam0000000001346e6c = 1;
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
LAB_00dd8e78:
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
  if (lVar6 == 0) goto LAB_00dd8e78;
  uVar9 = (uint)*(undefined8 *)(lVar6 + 0x18);
  if ((uVar9 == 0) || (*(undefined1 *)(lVar6 + 0x20) = *(undefined1 *)(param_1 + 0x18), uVar9 == 1))
  {
LAB_00dd8e6c:
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
           uVar9 < 8)) goto LAB_00dd8e6c;
  *(undefined1 *)(lVar6 + 0x27) =
       *(undefined1 *)(*(long *)(_HjdBluetoothHardwareInterface_TypeInfo_12d4938 + 0xb8) + 0x14);
  if (((*(byte *)(_ContainerRemoteCarUIController___c_TypeInfo_12d7158 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_ContainerRemoteCarUIController___c_TypeInfo_12d7158 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  puVar7 = *(undefined8 **)(_ContainerRemoteCarUIController___c_TypeInfo_12d7158 + 0xb8);
  lVar14 = puVar7[1];
  if (lVar14 == 0) {
    if (((*(byte *)(_ContainerRemoteCarUIController___c_TypeInfo_12d7158 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_ContainerRemoteCarUIController___c_TypeInfo_12d7158 + 0xe0) == 0)) {
      native_sub_4327ec();
      puVar7 = *(undefined8 **)(_ContainerRemoteCarUIController___c_TypeInfo_12d7158 + 0xb8);
    }
    uVar12 = *puVar7;
    lVar14 = native_sub_432808(_System_Action_string__TypeInfo_12d2080);
    native_System_Action_Font____ctor_9867a8
              (lVar14,uVar12,
               _Method_ContainerRemoteCarUIController___c__OnClickButtonBlesetting_b__13_0___12e9788
               ,_Method_System_Action_string___ctor___12d7fe8);
    plVar8 = (long *)(*(long *)(_ContainerRemoteCarUIController___c_TypeInfo_12d7158 + 0xb8) + 8);
    *plVar8 = lVar14;
    native_sub_4326e0(plVar8,lVar14);
  }
  if (((*(byte *)(_HjdBluetoothHardwareInterface_TypeInfo_12d4938 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_HjdBluetoothHardwareInterface_TypeInfo_12d4938 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  native_HjdBluetoothHardwareInterface__StopAdvertising_dc423c(lVar14,0);
  native_System_Threading_Thread__Sleep_9fb5d8(100,0);
  if (((*(byte *)(_ContainerRemoteCarUIController___c_TypeInfo_12d7158 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_ContainerRemoteCarUIController___c_TypeInfo_12d7158 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  puVar7 = *(undefined8 **)(_ContainerRemoteCarUIController___c_TypeInfo_12d7158 + 0xb8);
  lVar14 = puVar7[2];
  if (lVar14 == 0) {
    if (((*(byte *)(_ContainerRemoteCarUIController___c_TypeInfo_12d7158 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_ContainerRemoteCarUIController___c_TypeInfo_12d7158 + 0xe0) == 0)) {
      native_sub_4327ec();
      puVar7 = *(undefined8 **)(_ContainerRemoteCarUIController___c_TypeInfo_12d7158 + 0xb8);
    }
    uVar12 = *puVar7;
    lVar14 = native_sub_432808(_System_Action_string__TypeInfo_12d2080);
    native_System_Action_Font____ctor_9867a8
              (lVar14,uVar12,
               _Method_ContainerRemoteCarUIController___c__OnClickButtonBlesetting_b__13_1___12e9790
               ,_Method_System_Action_string___ctor___12d7fe8);
    plVar8 = (long *)(*(long *)(_ContainerRemoteCarUIController___c_TypeInfo_12d7158 + 0xb8) + 0x10)
    ;
    *plVar8 = lVar14;
    native_sub_4326e0(plVar8,lVar14);
  }
  if (((*(byte *)(_HjdBluetoothHardwareInterface_TypeInfo_12d4938 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_HjdBluetoothHardwareInterface_TypeInfo_12d4938 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  native_HjdBluetoothHardwareInterface__StartAdvertising_dc4054(lVar14,lVar6,0);
  if (((*(byte *)(_ContainerRemoteCarUIController___c_TypeInfo_12d7158 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_ContainerRemoteCarUIController___c_TypeInfo_12d7158 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  puVar7 = *(undefined8 **)(_ContainerRemoteCarUIController___c_TypeInfo_12d7158 + 0xb8);
  lVar6 = puVar7[3];
  if (lVar6 == 0) {
    if (((*(byte *)(_ContainerRemoteCarUIController___c_TypeInfo_12d7158 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_ContainerRemoteCarUIController___c_TypeInfo_12d7158 + 0xe0) == 0)) {
      native_sub_4327ec();
      puVar7 = *(undefined8 **)(_ContainerRemoteCarUIController___c_TypeInfo_12d7158 + 0xb8);
    }
    uVar12 = *puVar7;
    lVar6 = native_sub_432808(_System_Action_string__TypeInfo_12d2080);
    native_System_Action_Font____ctor_9867a8
              (lVar6,uVar12,
               _Method_ContainerRemoteCarUIController___c__OnClickButtonBlesetting_b__13_2___12e9798
               ,_Method_System_Action_string___ctor___12d7fe8);
    plVar8 = (long *)(*(long *)(_ContainerRemoteCarUIController___c_TypeInfo_12d7158 + 0xb8) + 0x18)
    ;
    *plVar8 = lVar6;
    native_sub_4326e0(plVar8,lVar6);
  }
  if (((*(byte *)(_HjdBluetoothHardwareInterface_TypeInfo_12d4938 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_HjdBluetoothHardwareInterface_TypeInfo_12d4938 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  native_HjdBluetoothHardwareInterface__StopScanToGetData_dc465c(lVar6,0);
  native_System_Threading_Thread__Sleep_9fb5d8(100,0);
  if (((*(byte *)(_ContainerRemoteCarUIController___c_TypeInfo_12d7158 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_ContainerRemoteCarUIController___c_TypeInfo_12d7158 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  puVar7 = *(undefined8 **)(_ContainerRemoteCarUIController___c_TypeInfo_12d7158 + 0xb8);
  lVar6 = puVar7[4];
  if (lVar6 == 0) {
    if (((*(byte *)(_ContainerRemoteCarUIController___c_TypeInfo_12d7158 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_ContainerRemoteCarUIController___c_TypeInfo_12d7158 + 0xe0) == 0)) {
      native_sub_4327ec();
      puVar7 = *(undefined8 **)(_ContainerRemoteCarUIController___c_TypeInfo_12d7158 + 0xb8);
    }
    uVar12 = *puVar7;
    lVar6 = native_sub_432808(_System_Action_string__TypeInfo_12d2080);
    native_System_Action_Font____ctor_9867a8
              (lVar6,uVar12,
               _Method_ContainerRemoteCarUIController___c__OnClickButtonBlesetting_b__13_3___12e97a0
               ,_Method_System_Action_string___ctor___12d7fe8);
    plVar8 = (long *)(*(long *)(_ContainerRemoteCarUIController___c_TypeInfo_12d7158 + 0xb8) + 0x20)
    ;
    *plVar8 = lVar6;
    native_sub_4326e0(plVar8,lVar6);
  }
  uVar12 = native_sub_432808(_System_Action_string__TypeInfo_12d2080);
  native_System_Action_Font____ctor_9867a8
            (uVar12,param_1,
             _Method_ContainerRemoteCarUIController__OnClickButtonBlesetting_b__13_4___12e3010,
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



/* ContainerRemoteCarUIController$$OnClickButtonBack @ 0xdd8e7c
 * void ContainerRemoteCarUIController__OnClickButtonBack (ContainerRemoteCarUIController_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ContainerRemoteCarUIController$$OnClickButtonBack
   void ContainerRemoteCarUIController__OnClickButtonBack (ContainerRemoteCarUIController_o* __this,
   const MethodInfo* method); */

void native_ContainerRemoteCarUIController__OnClickButtonBack_dd8e7c(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uStack_28;
  
  if ((bRam0000000001346e6d & 1) == 0) {
    native_sub_43273c(&StringLiteral_Login_12ef660);
    bRam0000000001346e6d = 1;
  }
  uVar1 = _StringLiteral_Login_12ef660;
  if ((bRam0000000001346e6e & 1) == 0) {
    native_sub_43273c(&PanelMainUIController_TypeInfo_12d5600);
    native_sub_43273c(&UnityEngine_SceneManagement_SceneManager_TypeInfo_12d5bc0);
    bRam0000000001346e6e = 1;
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



/* ContainerRemoteCarUIController$$LoadNewScene @ 0xdd8ec0
 * void ContainerRemoteCarUIController__LoadNewScene (ContainerRemoteCarUIController_o* __this, System_String_o* sceneName, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ContainerRemoteCarUIController$$LoadNewScene
   void ContainerRemoteCarUIController__LoadNewScene (ContainerRemoteCarUIController_o* __this,
   System_String_o* sceneName, const MethodInfo* method); */

void native_ContainerRemoteCarUIController__LoadNewScene_dd8ec0
               (undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uStack_28;
  
  if ((bRam0000000001346e6e & 1) == 0) {
    native_sub_43273c(&PanelMainUIController_TypeInfo_12d5600);
    native_sub_43273c(&UnityEngine_SceneManagement_SceneManager_TypeInfo_12d5bc0);
    bRam0000000001346e6e = 1;
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



/* ContainerRemoteCarUIController$$Update @ 0xdd8f6c
 * void ContainerRemoteCarUIController__Update (ContainerRemoteCarUIController_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ContainerRemoteCarUIController$$Update
   void ContainerRemoteCarUIController__Update (ContainerRemoteCarUIController_o* __this, const
   MethodInfo* method); */

void native_ContainerRemoteCarUIController__Update_dd8f6c(long param_1)

{
  float fVar1;
  undefined4 uVar2;
  long lVar3;
  ulong uVar4;
  undefined8 uVar5;
  uint uVar6;
  undefined8 *puVar7;
  int iVar8;
  long lVar9;
  long *plVar10;
  float fVar11;
  float fVar12;
  
  if ((bRam0000000001346e6f & 1) == 0) {
    native_sub_43273c(&Method_System_Action_string___ctor___12d7fe8);
    native_sub_43273c(&System_Action_string__TypeInfo_12d2080);
    native_sub_43273c(&byte___TypeInfo_12d3060);
    native_sub_43273c(&ContainerRemoteCarUIController_TypeInfo_12d3f40);
    native_sub_43273c(&HjdBluetoothHardwareInterface_TypeInfo_12d4938);
    native_sub_43273c(&PanelMainUIController_TypeInfo_12d5600);
    native_sub_43273c(&Method_ContainerRemoteCarUIController___c__Update_b__18_0___12e97a8);
    native_sub_43273c(&Method_ContainerRemoteCarUIController___c__Update_b__18_1___12e97b0);
    native_sub_43273c(&Method_ContainerRemoteCarUIController___c__Update_b__18_2___12e97b8);
    native_sub_43273c(&ContainerRemoteCarUIController___c_TypeInfo_12d7158);
    bRam0000000001346e6f = 1;
  }
  if (((*(byte *)(_PanelMainUIController_TypeInfo_12d5600 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_PanelMainUIController_TypeInfo_12d5600 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  if (*(char *)(*(long *)(_PanelMainUIController_TypeInfo_12d5600 + 0xb8) + 0x20) == '\0') {
    return;
  }
  lVar3 = native_sub_432750(_byte___TypeInfo_12d3060,10);
  plVar10 = (long *)(param_1 + 0x28);
  *plVar10 = lVar3;
  native_sub_4326e0(plVar10,lVar3);
  if (((*(byte *)(_PanelMainUIController_TypeInfo_12d5600 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_PanelMainUIController_TypeInfo_12d5600 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  iVar8 = *(int *)(*(long *)(_PanelMainUIController_TypeInfo_12d5600 + 0xb8) + 0x50);
  if (iVar8 == 1) {
    uVar5 = 0;
LAB_00dd90d0:
    uVar2 = native_Assets_Scripts_Tools_HjdBleTool__setIntegerSomeBit_7f7068(0,uVar5,1,0);
  }
  else {
    if (((*(byte *)(_PanelMainUIController_TypeInfo_12d5600 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_PanelMainUIController_TypeInfo_12d5600 + 0xe0) == 0)) {
      native_sub_4327ec();
      iVar8 = *(int *)(*(long *)(_PanelMainUIController_TypeInfo_12d5600 + 0xb8) + 0x50);
    }
    if (iVar8 == -1) {
      uVar5 = 1;
      goto LAB_00dd90d0;
    }
    uVar2 = 0;
  }
  if (((*(byte *)(_PanelMainUIController_TypeInfo_12d5600 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_PanelMainUIController_TypeInfo_12d5600 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  iVar8 = *(int *)(*(long *)(_PanelMainUIController_TypeInfo_12d5600 + 0xb8) + 0x4c);
  if (iVar8 == 1) {
    uVar5 = 2;
LAB_00dd9144:
    uVar2 = native_Assets_Scripts_Tools_HjdBleTool__setIntegerSomeBit_7f7068(uVar2,uVar5,1,0);
  }
  else {
    if (((*(byte *)(_PanelMainUIController_TypeInfo_12d5600 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_PanelMainUIController_TypeInfo_12d5600 + 0xe0) == 0)) {
      native_sub_4327ec();
      iVar8 = *(int *)(*(long *)(_PanelMainUIController_TypeInfo_12d5600 + 0xb8) + 0x4c);
    }
    if (iVar8 == -1) {
      uVar5 = 3;
      goto LAB_00dd9144;
    }
  }
  if (((*(byte *)(_PanelMainUIController_TypeInfo_12d5600 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_PanelMainUIController_TypeInfo_12d5600 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  fVar12 = *(float *)(*(long *)(_PanelMainUIController_TypeInfo_12d5600 + 0xb8) + 0x9c) * 100.0;
  fVar11 = *(float *)(*(long *)(_PanelMainUIController_TypeInfo_12d5600 + 0xb8) + 0xa0) * 100.0;
  fVar1 = -fVar12;
  if (fVar12 != INFINITY) {
    fVar1 = fVar12;
  }
  fVar12 = -fVar11;
  if (fVar11 != INFINITY) {
    fVar12 = fVar11;
  }
  if (*(int *)(param_1 + 0x40) == 0) {
    *(undefined4 *)(param_1 + 0x40) = 0xc;
    iVar8 = 1;
    if (*(int *)(param_1 + 0x3c) + 1 < 0xfb) {
      iVar8 = *(int *)(param_1 + 0x3c) + 1;
    }
    *(int *)(param_1 + 0x3c) = iVar8;
  }
  else {
    iVar8 = *(int *)(param_1 + 0x3c);
  }
  lVar3 = *plVar10;
  if (lVar3 != 0) {
    if (*(int *)(lVar3 + 0x18) != 0) {
      *(char *)(lVar3 + 0x20) = (char)uVar2;
      lVar3 = *plVar10;
      if (lVar3 == 0) goto LAB_00dd9874;
      if (1 < *(uint *)(lVar3 + 0x18)) {
        *(undefined1 *)(lVar3 + 0x21) = 0;
        lVar3 = *plVar10;
        if (lVar3 == 0) goto LAB_00dd9874;
        if (2 < *(uint *)(lVar3 + 0x18)) {
          *(char *)(lVar3 + 0x22) = (char)(int)fVar1;
          lVar3 = *plVar10;
          if (lVar3 == 0) goto LAB_00dd9874;
          if (3 < *(uint *)(lVar3 + 0x18)) {
            *(char *)(lVar3 + 0x23) = (char)(int)fVar12;
            lVar3 = *plVar10;
            if (lVar3 == 0) goto LAB_00dd9874;
            if (4 < *(uint *)(lVar3 + 0x18)) {
              *(undefined1 *)(lVar3 + 0x24) = 0;
              lVar3 = *plVar10;
              if (lVar3 == 0) goto LAB_00dd9874;
              if (5 < *(uint *)(lVar3 + 0x18)) {
                *(undefined1 *)(lVar3 + 0x25) = 0;
                lVar3 = *plVar10;
                if (lVar3 == 0) goto LAB_00dd9874;
                if (6 < *(uint *)(lVar3 + 0x18)) {
                  *(char *)(lVar3 + 0x26) = (char)iVar8;
                  uVar4 = native_Assets_Scripts_Tools_HjdBleTool__data_isalike_7f6e28
                                    (*(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x30)
                                     ,0);
                  if (((uVar4 & 1) != 0) || (*(int *)(param_1 + 0x38) != 0)) {
LAB_00dd9578:
                    if (*(char *)(param_1 + 0x1d) != '\0') {
                      *(undefined1 *)(param_1 + 0x1d) = 0;
                      if (((*(byte *)(_ContainerRemoteCarUIController___c_TypeInfo_12d7158 + 0x133)
                            >> 2 & 1) != 0) &&
                         (*(int *)(_ContainerRemoteCarUIController___c_TypeInfo_12d7158 + 0xe0) == 0
                         )) {
                        native_sub_4327ec();
                      }
                      puVar7 = *(undefined8 **)
                                (_ContainerRemoteCarUIController___c_TypeInfo_12d7158 + 0xb8);
                      lVar3 = puVar7[5];
                      if (lVar3 == 0) {
                        if (((*(byte *)(_ContainerRemoteCarUIController___c_TypeInfo_12d7158 + 0x133
                                       ) >> 2 & 1) != 0) &&
                           (*(int *)(_ContainerRemoteCarUIController___c_TypeInfo_12d7158 + 0xe0) ==
                            0)) {
                          native_sub_4327ec();
                          puVar7 = *(undefined8 **)
                                    (_ContainerRemoteCarUIController___c_TypeInfo_12d7158 + 0xb8);
                        }
                        uVar5 = *puVar7;
                        lVar3 = native_sub_432808(_System_Action_string__TypeInfo_12d2080);
                        native_System_Action_Font____ctor_9867a8
                                  (lVar3,uVar5,
                                   _Method_ContainerRemoteCarUIController___c__Update_b__18_0___12e97a8
                                   ,_Method_System_Action_string___ctor___12d7fe8);
                        plVar10 = (long *)(*(long *)(
                                                  _ContainerRemoteCarUIController___c_TypeInfo_12d7158
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
                      if (((*(byte *)(_ContainerRemoteCarUIController___c_TypeInfo_12d7158 + 0x133)
                            >> 2 & 1) != 0) &&
                         (*(int *)(_ContainerRemoteCarUIController___c_TypeInfo_12d7158 + 0xe0) == 0
                         )) {
                        native_sub_4327ec();
                      }
                      puVar7 = *(undefined8 **)
                                (_ContainerRemoteCarUIController___c_TypeInfo_12d7158 + 0xb8);
                      lVar3 = puVar7[6];
                      if (lVar3 == 0) {
                        if (((*(byte *)(_ContainerRemoteCarUIController___c_TypeInfo_12d7158 + 0x133
                                       ) >> 2 & 1) != 0) &&
                           (*(int *)(_ContainerRemoteCarUIController___c_TypeInfo_12d7158 + 0xe0) ==
                            0)) {
                          native_sub_4327ec();
                          puVar7 = *(undefined8 **)
                                    (_ContainerRemoteCarUIController___c_TypeInfo_12d7158 + 0xb8);
                        }
                        uVar5 = *puVar7;
                        lVar3 = native_sub_432808(_System_Action_string__TypeInfo_12d2080);
                        native_System_Action_Font____ctor_9867a8
                                  (lVar3,uVar5,
                                   _Method_ContainerRemoteCarUIController___c__Update_b__18_1___12e97b0
                                   ,_Method_System_Action_string___ctor___12d7fe8);
                        plVar10 = (long *)(*(long *)(
                                                  _ContainerRemoteCarUIController___c_TypeInfo_12d7158
                                                  + 0xb8) + 0x30);
                        *plVar10 = lVar3;
                        native_sub_4326e0(plVar10,lVar3);
                      }
                      uVar5 = *(undefined8 *)(param_1 + 0x20);
                      if (((*(byte *)(_HjdBluetoothHardwareInterface_TypeInfo_12d4938 + 0x133) >> 2
                           & 1) != 0) &&
                         (*(int *)(_HjdBluetoothHardwareInterface_TypeInfo_12d4938 + 0xe0) == 0)) {
                        native_sub_4327ec();
                      }
                      native_HjdBluetoothHardwareInterface__StartAdvertising_dc4054(lVar3,uVar5,0);
                      if (((*(byte *)(_ContainerRemoteCarUIController___c_TypeInfo_12d7158 + 0x133)
                            >> 2 & 1) != 0) &&
                         (*(int *)(_ContainerRemoteCarUIController___c_TypeInfo_12d7158 + 0xe0) == 0
                         )) {
                        native_sub_4327ec();
                      }
                      puVar7 = *(undefined8 **)
                                (_ContainerRemoteCarUIController___c_TypeInfo_12d7158 + 0xb8);
                      lVar3 = puVar7[7];
                      if (lVar3 == 0) {
                        if (((*(byte *)(_ContainerRemoteCarUIController___c_TypeInfo_12d7158 + 0x133
                                       ) >> 2 & 1) != 0) &&
                           (*(int *)(_ContainerRemoteCarUIController___c_TypeInfo_12d7158 + 0xe0) ==
                            0)) {
                          native_sub_4327ec();
                          puVar7 = *(undefined8 **)
                                    (_ContainerRemoteCarUIController___c_TypeInfo_12d7158 + 0xb8);
                        }
                        uVar5 = *puVar7;
                        lVar3 = native_sub_432808(_System_Action_string__TypeInfo_12d2080);
                        native_System_Action_Font____ctor_9867a8
                                  (lVar3,uVar5,
                                   _Method_ContainerRemoteCarUIController___c__Update_b__18_2___12e97b8
                                   ,_Method_System_Action_string___ctor___12d7fe8);
                        plVar10 = (long *)(*(long *)(
                                                  _ContainerRemoteCarUIController___c_TypeInfo_12d7158
                                                  + 0xb8) + 0x38);
                        *plVar10 = lVar3;
                        native_sub_4326e0(plVar10,lVar3);
                      }
                      uVar5 = *(undefined8 *)(param_1 + 0x20);
                      if (((*(byte *)(_HjdBluetoothHardwareInterface_TypeInfo_12d4938 + 0x133) >> 2
                           & 1) != 0) &&
                         (*(int *)(_HjdBluetoothHardwareInterface_TypeInfo_12d4938 + 0xe0) == 0)) {
                        native_sub_4327ec();
                      }
                      native_HjdBluetoothHardwareInterface__StartAdvertising_dc4054(lVar3,uVar5,0);
                    }
                    lVar3 = native_ContainerRemoteCarUIController__gethaomiao_dd9878();
                    if (((*(byte *)(_ContainerRemoteCarUIController_TypeInfo_12d3f40 + 0x133) >> 2 &
                         1) != 0) &&
                       (*(int *)(_ContainerRemoteCarUIController_TypeInfo_12d3f40 + 0xe0) == 0)) {
                      native_sub_4327ec(_ContainerRemoteCarUIController_TypeInfo_12d3f40);
                    }
                    if (0x13 < lVar3 - **(long **)(_ContainerRemoteCarUIController_TypeInfo_12d3f40
                                                  + 0xb8)) {
                      uVar5 = native_ContainerRemoteCarUIController__gethaomiao_dd9878();
                      if (((*(byte *)(_ContainerRemoteCarUIController_TypeInfo_12d3f40 + 0x133) >> 2
                           & 1) != 0) &&
                         (*(int *)(_ContainerRemoteCarUIController_TypeInfo_12d3f40 + 0xe0) == 0)) {
                        native_sub_4327ec(_ContainerRemoteCarUIController_TypeInfo_12d3f40);
                      }
                      **(undefined8 **)(_ContainerRemoteCarUIController_TypeInfo_12d3f40 + 0xb8) =
                           uVar5;
                      if (0 < *(int *)(param_1 + 0x38)) {
                        *(int *)(param_1 + 0x38) = *(int *)(param_1 + 0x38) + -1;
                      }
                      if (0 < *(int *)(param_1 + 0x40)) {
                        *(int *)(param_1 + 0x40) = *(int *)(param_1 + 0x40) + -1;
                      }
                    }
                    return;
                  }
                  native_Assets_Scripts_Tools_HjdBleTool__data_copy_7f6ea8
                            (*(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x30),0);
                  lVar3 = native_sub_432750(_byte___TypeInfo_12d3060,0x13);
                  if (lVar3 == 0) goto LAB_00dd9874;
                  if ((*(int *)(lVar3 + 0x18) != 0) &&
                     (*(undefined1 *)(lVar3 + 0x20) = *(undefined1 *)(param_1 + 0x18),
                     *(int *)(lVar3 + 0x18) != 1)) {
                    *(undefined1 *)(lVar3 + 0x21) = *(undefined1 *)(param_1 + 0x1a);
                    if (((*(byte *)(_PanelMainUIController_TypeInfo_12d5600 + 0x133) >> 2 & 1) != 0)
                       && (*(int *)(_PanelMainUIController_TypeInfo_12d5600 + 0xe0) == 0)) {
                      native_sub_4327ec();
                    }
                    lVar9 = *(long *)(*(long *)(_PanelMainUIController_TypeInfo_12d5600 + 0xb8) +
                                     0x18);
                    if (lVar9 == 0) goto LAB_00dd9874;
                    if ((*(int *)(lVar9 + 0x18) != 0) &&
                       (uVar6 = (uint)*(undefined8 *)(lVar3 + 0x18), 2 < uVar6)) {
                      *(undefined1 *)(lVar3 + 0x22) = *(undefined1 *)(lVar9 + 0x20);
                      lVar9 = *(long *)(*(long *)(_PanelMainUIController_TypeInfo_12d5600 + 0xb8) +
                                       0x18);
                      if (lVar9 == 0) goto LAB_00dd9874;
                      if ((1 < *(uint *)(lVar9 + 0x18)) && (3 < uVar6)) {
                        *(undefined1 *)(lVar3 + 0x23) = *(undefined1 *)(lVar9 + 0x21);
                        lVar9 = *(long *)(*(long *)(_PanelMainUIController_TypeInfo_12d5600 + 0xb8)
                                         + 0x18);
                        if (lVar9 == 0) goto LAB_00dd9874;
                        if ((2 < *(uint *)(lVar9 + 0x18)) && (4 < uVar6)) {
                          *(undefined1 *)(lVar3 + 0x24) = *(undefined1 *)(lVar9 + 0x22);
                          if (((*(byte *)(_HjdBluetoothHardwareInterface_TypeInfo_12d4938 + 0x133)
                                >> 2 & 1) != 0) &&
                             (*(int *)(_HjdBluetoothHardwareInterface_TypeInfo_12d4938 + 0xe0) == 0)
                             ) {
                            native_sub_4327ec();
                            uVar6 = (uint)*(undefined8 *)(lVar3 + 0x18);
                          }
                          if (((5 < uVar6) &&
                              (*(undefined1 *)(lVar3 + 0x25) =
                                    *(undefined1 *)
                                     (*(long *)(_HjdBluetoothHardwareInterface_TypeInfo_12d4938 +
                                               0xb8) + 0x12), uVar6 != 6)) &&
                             (*(undefined1 *)(lVar3 + 0x26) =
                                   *(undefined1 *)
                                    (*(long *)(_HjdBluetoothHardwareInterface_TypeInfo_12d4938 +
                                              0xb8) + 0x13), 7 < uVar6)) {
                            *(undefined1 *)(lVar3 + 0x27) =
                                 *(undefined1 *)
                                  (*(long *)(_HjdBluetoothHardwareInterface_TypeInfo_12d4938 + 0xb8)
                                  + 0x14);
                            lVar9 = *plVar10;
                            if (lVar9 == 0) goto LAB_00dd9874;
                            if ((*(int *)(lVar9 + 0x18) != 0) && (8 < uVar6)) {
                              *(undefined1 *)(lVar3 + 0x28) = *(undefined1 *)(lVar9 + 0x20);
                              lVar9 = *plVar10;
                              if (lVar9 == 0) goto LAB_00dd9874;
                              if ((1 < *(uint *)(lVar9 + 0x18)) && (9 < uVar6)) {
                                *(undefined1 *)(lVar3 + 0x29) = *(undefined1 *)(lVar9 + 0x21);
                                lVar9 = *plVar10;
                                if (lVar9 == 0) goto LAB_00dd9874;
                                if ((2 < *(uint *)(lVar9 + 0x18)) && (10 < uVar6)) {
                                  *(undefined1 *)(lVar3 + 0x2a) = *(undefined1 *)(lVar9 + 0x22);
                                  lVar9 = *plVar10;
                                  if (lVar9 == 0) goto LAB_00dd9874;
                                  if ((3 < *(uint *)(lVar9 + 0x18)) && (0xb < uVar6)) {
                                    *(undefined1 *)(lVar3 + 0x2b) = *(undefined1 *)(lVar9 + 0x23);
                                    lVar9 = *plVar10;
                                    if (lVar9 == 0) goto LAB_00dd9874;
                                    if ((4 < *(uint *)(lVar9 + 0x18)) && (0xc < uVar6)) {
                                      *(undefined1 *)(lVar3 + 0x2c) = *(undefined1 *)(lVar9 + 0x24);
                                      lVar9 = *plVar10;
                                      if (lVar9 == 0) goto LAB_00dd9874;
                                      if ((5 < *(uint *)(lVar9 + 0x18)) && (0xd < uVar6)) {
                                        *(undefined1 *)(lVar3 + 0x2d) =
                                             *(undefined1 *)(lVar9 + 0x25);
                                        lVar9 = *plVar10;
                                        if (lVar9 == 0) goto LAB_00dd9874;
                                        if ((6 < *(uint *)(lVar9 + 0x18)) && (0xe < uVar6)) {
                                          *(undefined1 *)(lVar3 + 0x2e) =
                                               *(undefined1 *)(lVar9 + 0x26);
                                          lVar9 = *plVar10;
                                          if (lVar9 == 0) goto LAB_00dd9874;
                                          if ((7 < *(uint *)(lVar9 + 0x18)) && (0xf < uVar6)) {
                                            *(undefined1 *)(lVar3 + 0x2f) =
                                                 *(undefined1 *)(lVar9 + 0x27);
                                            lVar9 = *plVar10;
                                            if (lVar9 == 0) goto LAB_00dd9874;
                                            if ((8 < *(uint *)(lVar9 + 0x18)) && (0x10 < uVar6)) {
                                              *(undefined1 *)(lVar3 + 0x30) =
                                                   *(undefined1 *)(lVar9 + 0x28);
                                              lVar9 = *plVar10;
                                              if (lVar9 == 0) goto LAB_00dd9874;
                                              if ((9 < *(uint *)(lVar9 + 0x18)) && (0x11 < uVar6)) {
                                                *(undefined1 *)(lVar3 + 0x31) =
                                                     *(undefined1 *)(lVar9 + 0x29);
                                                *(long *)(param_1 + 0x20) = lVar3;
                                                native_sub_4326e0((long *)(param_1 + 0x20),lVar3);
                                                *(undefined1 *)(param_1 + 0x1d) = 1;
                                                *(undefined4 *)(param_1 + 0x38) = 3;
                                                goto LAB_00dd9578;
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
LAB_00dd9874:
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* ContainerRemoteCarUIController$$gethaomiao @ 0xdd9878
 * int64_t ContainerRemoteCarUIController__gethaomiao (ContainerRemoteCarUIController_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ContainerRemoteCarUIController$$gethaomiao
   int64_t ContainerRemoteCarUIController__gethaomiao (ContainerRemoteCarUIController_o* __this,
   const MethodInfo* method); */

long native_ContainerRemoteCarUIController__gethaomiao_dd9878(void)

{
  long lVar1;
  undefined8 uStack_18;
  
  if ((bRam0000000001346e70 & 1) == 0) {
    native_sub_43273c(&System_DateTime_TypeInfo_12d42f8);
    bRam0000000001346e70 = 1;
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



/* ContainerRemoteCarUIController$$Awake @ 0xdd992c
 * void ContainerRemoteCarUIController__Awake (ContainerRemoteCarUIController_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ContainerRemoteCarUIController$$Awake
   void ContainerRemoteCarUIController__Awake (ContainerRemoteCarUIController_o* __this, const
   MethodInfo* method); */

void native_ContainerRemoteCarUIController__Awake_dd992c(long param_1)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  
  if ((bRam0000000001346e71 & 1) == 0) {
    native_sub_43273c(&StringLiteral_ButtonRCarOpenclose_12ec910);
    native_sub_43273c(&StringLiteral_ButtonRCarResult_12ec918);
    bRam0000000001346e71 = 1;
  }
  lVar4 = native_UnityEngine_Component__get_transform_8da62c(param_1,0);
  if ((lVar4 != 0) &&
     (lVar4 = native_UnityEngine_Transform__FindChild_772e3c
                        (lVar4,_StringLiteral_ButtonRCarResult_12ec918,0), lVar4 != 0)) {
    uVar5 = native_UnityEngine_Component__get_gameObject_8da66c(lVar4,0);
    *(undefined8 *)(param_1 + 0x48) = uVar5;
    native_sub_4326e0();
    lVar4 = native_UnityEngine_GameObject__Find_8dead0(_StringLiteral_ButtonRCarOpenclose_12ec910,0)
    ;
    if (lVar4 != 0) {
      uVar5 = native_UnityEngine_GameObject__get_gameObject_8debb8(lVar4,0);
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
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* ContainerRemoteCarUIController$$.ctor @ 0xdd99e4
 * void ContainerRemoteCarUIController___ctor (ContainerRemoteCarUIController_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ContainerRemoteCarUIController$$.ctor
   void ContainerRemoteCarUIController___ctor (ContainerRemoteCarUIController_o* __this, const
   MethodInfo* method); */

undefined1  [16] native_ContainerRemoteCarUIController___ctor_dd99e4(ulong param_1)

{
  undefined8 uVar1;
  undefined1 auVar2 [16];
  
  if ((bRam0000000001346e72 & 1) == 0) {
    native_sub_43273c(&byte___TypeInfo_12d3060);
    bRam0000000001346e72 = 1;
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
  *(undefined4 *)(param_1 + 0x3c) = 1;
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



/* ContainerRemoteCarUIController$$.cctor @ 0xdd9aa0
 * void ContainerRemoteCarUIController___cctor (const MethodInfo* method); */

/* ContainerRemoteCarUIController$$.cctor
   void ContainerRemoteCarUIController___cctor (const MethodInfo* method); */

void native_ContainerRemoteCarUIController___cctor_dd9aa0(void)

{
  return;
}



/* ContainerRemoteCarUIController$$<OnClickButtonBlesetting>b__13_4 @ 0xdd9aa4
 * void ContainerRemoteCarUIController___OnClickButtonBlesetting_b__13_4 (ContainerRemoteCarUIController_o* __this, System_String_o* data, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ContainerRemoteCarUIController$$<OnClickButtonBlesetting>b__13_4
   void ContainerRemoteCarUIController___OnClickButtonBlesetting_b__13_4
   (ContainerRemoteCarUIController_o* __this, System_String_o* data, const MethodInfo* method); */

void native_ContainerRemoteCarUIController___OnClickButtonBlesetting_b__13_4_dd9aa4
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
  
  if ((bRam0000000001346e73 & 1) == 0) {
    native_sub_43273c(&byte___TypeInfo_12d3060);
    native_sub_43273c(&ContainerMatchingCodeUIController_TypeInfo_12d3f38);
    native_sub_43273c(&System_Convert_TypeInfo_12d3fd0);
    native_sub_43273c(&HjdBluetoothHardwareInterface_TypeInfo_12d4938);
    native_sub_43273c(&PanelMainUIController_TypeInfo_12d5600);
    bRam0000000001346e73 = 1;
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
      if (lVar11 == 0) goto LAB_00dda01c;
      if (*(int *)(lVar11 + 0x18) != 0) {
        *(undefined1 *)(lVar11 + 0x20) = *(undefined1 *)(lVar8 + (int)uVar6 + 0x20);
        if (uVar6 + 1 < *(uint *)(lVar8 + 0x18)) {
          lVar11 = *(long *)(*(long *)(_PanelMainUIController_TypeInfo_12d5600 + 0xb8) + 0x18);
          if (lVar11 == 0) goto LAB_00dda01c;
          if (1 < *(uint *)(lVar11 + 0x18)) {
            *(undefined1 *)(lVar11 + 0x21) = *(undefined1 *)(lVar8 + (int)(uVar6 + 1) + 0x20);
            if (uVar6 + 2 < *(uint *)(lVar8 + 0x18)) {
              lVar11 = *(long *)(*(long *)(_PanelMainUIController_TypeInfo_12d5600 + 0xb8) + 0x18);
              if (lVar11 == 0) goto LAB_00dda01c;
              if (2 < *(uint *)(lVar11 + 0x18)) {
                *(undefined1 *)(lVar11 + 0x22) = *(undefined1 *)(lVar8 + (int)(uVar6 + 2) + 0x20);
                *(undefined1 *)(*(long *)(_PanelMainUIController_TypeInfo_12d5600 + 0xb8) + 0x20) =
                     1;
                lVar8 = native_sub_432750(_byte___TypeInfo_12d3060,0x13);
                if (lVar8 == 0) goto LAB_00dda01c;
                uVar6 = *(uint *)(lVar8 + 0x18);
                if ((uVar6 != 0) &&
                   (*(undefined1 *)(lVar8 + 0x20) = *(undefined1 *)(param_1 + 0x18), uVar6 != 1)) {
                  *(undefined1 *)(lVar8 + 0x21) = *(undefined1 *)(param_1 + 0x1a);
                  lVar11 = *(long *)(*(long *)(_PanelMainUIController_TypeInfo_12d5600 + 0xb8) +
                                    0x18);
                  if (lVar11 == 0) goto LAB_00dda01c;
                  if ((*(int *)(lVar11 + 0x18) != 0) && (2 < uVar6)) {
                    *(undefined1 *)(lVar8 + 0x22) = *(undefined1 *)(lVar11 + 0x20);
                    lVar11 = *(long *)(*(long *)(_PanelMainUIController_TypeInfo_12d5600 + 0xb8) +
                                      0x18);
                    if (lVar11 == 0) goto LAB_00dda01c;
                    if ((1 < *(uint *)(lVar11 + 0x18)) && (3 < uVar6)) {
                      *(undefined1 *)(lVar8 + 0x23) = *(undefined1 *)(lVar11 + 0x21);
                      lVar11 = *(long *)(*(long *)(_PanelMainUIController_TypeInfo_12d5600 + 0xb8) +
                                        0x18);
                      if (lVar11 == 0) goto LAB_00dda01c;
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
                        if (lVar11 == 0) goto LAB_00dda01c;
                        if ((*(int *)(lVar11 + 0x18) != 0) && (8 < uVar6)) {
                          *(undefined1 *)(lVar8 + 0x28) = *(undefined1 *)(lVar11 + 0x20);
                          lVar11 = *plVar13;
                          if (lVar11 == 0) goto LAB_00dda01c;
                          if ((1 < *(uint *)(lVar11 + 0x18)) && (9 < uVar6)) {
                            *(undefined1 *)(lVar8 + 0x29) = *(undefined1 *)(lVar11 + 0x21);
                            lVar11 = *plVar13;
                            if (lVar11 == 0) goto LAB_00dda01c;
                            if ((2 < *(uint *)(lVar11 + 0x18)) && (10 < uVar6)) {
                              *(undefined1 *)(lVar8 + 0x2a) = *(undefined1 *)(lVar11 + 0x22);
                              lVar11 = *plVar13;
                              if (lVar11 == 0) goto LAB_00dda01c;
                              if ((3 < *(uint *)(lVar11 + 0x18)) && (0xb < uVar6)) {
                                *(undefined1 *)(lVar8 + 0x2b) = *(undefined1 *)(lVar11 + 0x23);
                                lVar11 = *plVar13;
                                if (lVar11 == 0) goto LAB_00dda01c;
                                if ((4 < *(uint *)(lVar11 + 0x18)) && (0xc < uVar6)) {
                                  *(undefined1 *)(lVar8 + 0x2c) = *(undefined1 *)(lVar11 + 0x24);
                                  lVar11 = *plVar13;
                                  if (lVar11 == 0) goto LAB_00dda01c;
                                  if ((5 < *(uint *)(lVar11 + 0x18)) && (0xd < uVar6)) {
                                    *(undefined1 *)(lVar8 + 0x2d) = *(undefined1 *)(lVar11 + 0x25);
                                    lVar11 = *plVar13;
                                    if (lVar11 == 0) goto LAB_00dda01c;
                                    if ((6 < *(uint *)(lVar11 + 0x18)) && (0xe < uVar6)) {
                                      *(undefined1 *)(lVar8 + 0x2e) = *(undefined1 *)(lVar11 + 0x26)
                                      ;
                                      lVar11 = *plVar13;
                                      if (lVar11 == 0) goto LAB_00dda01c;
                                      if ((7 < *(uint *)(lVar11 + 0x18)) && (0xf < uVar6)) {
                                        *(undefined1 *)(lVar8 + 0x2f) =
                                             *(undefined1 *)(lVar11 + 0x27);
                                        lVar11 = *plVar13;
                                        if (lVar11 == 0) goto LAB_00dda01c;
                                        if ((8 < *(uint *)(lVar11 + 0x18)) && (0x10 < uVar6)) {
                                          *(undefined1 *)(lVar8 + 0x30) =
                                               *(undefined1 *)(lVar11 + 0x28);
                                          lVar11 = *plVar13;
                                          if (lVar11 == 0) goto LAB_00dda01c;
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
LAB_00dda01c:
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}


