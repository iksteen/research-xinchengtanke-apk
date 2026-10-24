/* ARM64 IL2CPP native pseudocode from Ghidra.
 * Recovered implementation, not original C# source.
 * Function boundaries follow the IL2CPP method address table. */


/* ContainerRemoteHandCarUIController$$Start @ 0xdda020
 * void ContainerRemoteHandCarUIController__Start (ContainerRemoteHandCarUIController_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ContainerRemoteHandCarUIController$$Start
   void ContainerRemoteHandCarUIController__Start (ContainerRemoteHandCarUIController_o* __this,
   const MethodInfo* method); */

void native_ContainerRemoteHandCarUIController__Start_dda020(long param_1)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  uint uVar5;
  long lVar6;
  
  if ((bRam0000000001346e74 & 1) == 0) {
    native_sub_43273c(&EventDelegate_Callback_TypeInfo_12d72e8);
    native_sub_43273c(&Method_ContainerRemoteHandCarUIController_OnClickButtonBlesetting___12e3030);
    native_sub_43273c(&Method_ContainerRemoteHandCarUIController_OnClickButtonHCarBack___12e3038);
    native_sub_43273c(&EventDelegate_TypeInfo_12d4590);
    native_sub_43273c(&Method_UnityEngine_GameObject_GetComponent_UIButton____12e4a88);
    native_sub_43273c(&Method_System_Collections_Generic_List_EventDelegate__Add___12dc740);
    bRam0000000001346e74 = 1;
  }
  if (*(long *)(param_1 + 0x48) != 0) {
    lVar2 = native_UnityEngine_GameObject__GetComponent_BE2_BlockSectionHeader_Custom__4a2214
                      (*(long *)(param_1 + 0x48),
                       _Method_UnityEngine_GameObject_GetComponent_UIButton____12e4a88);
    if (lVar2 != 0) {
      lVar2 = *(long *)(lVar2 + 0xc0);
      uVar3 = native_sub_432808(_EventDelegate_Callback_TypeInfo_12d72e8);
      native_EventDelegate_Callback___ctor_54bd18
                (uVar3,param_1,
                 _Method_ContainerRemoteHandCarUIController_OnClickButtonHCarBack___12e3038,0);
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
                     _Method_ContainerRemoteHandCarUIController_OnClickButtonBlesetting___12e3030,0)
          ;
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



/* ContainerRemoteHandCarUIController$$InitButtonEvent @ 0xdda024
 * void ContainerRemoteHandCarUIController__InitButtonEvent (ContainerRemoteHandCarUIController_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ContainerRemoteHandCarUIController$$InitButtonEvent
   void ContainerRemoteHandCarUIController__InitButtonEvent (ContainerRemoteHandCarUIController_o*
   __this, const MethodInfo* method); */

void native_ContainerRemoteHandCarUIController__InitButtonEvent_dda024(long param_1)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  uint uVar5;
  long lVar6;
  
  if ((bRam0000000001346e74 & 1) == 0) {
    native_sub_43273c(&EventDelegate_Callback_TypeInfo_12d72e8);
    native_sub_43273c(&Method_ContainerRemoteHandCarUIController_OnClickButtonBlesetting___12e3030);
    native_sub_43273c(&Method_ContainerRemoteHandCarUIController_OnClickButtonHCarBack___12e3038);
    native_sub_43273c(&EventDelegate_TypeInfo_12d4590);
    native_sub_43273c(&Method_UnityEngine_GameObject_GetComponent_UIButton____12e4a88);
    native_sub_43273c(&Method_System_Collections_Generic_List_EventDelegate__Add___12dc740);
    bRam0000000001346e74 = 1;
  }
  if (*(long *)(param_1 + 0x48) != 0) {
    lVar2 = native_UnityEngine_GameObject__GetComponent_BE2_BlockSectionHeader_Custom__4a2214
                      (*(long *)(param_1 + 0x48),
                       _Method_UnityEngine_GameObject_GetComponent_UIButton____12e4a88);
    if (lVar2 != 0) {
      lVar2 = *(long *)(lVar2 + 0xc0);
      uVar3 = native_sub_432808(_EventDelegate_Callback_TypeInfo_12d72e8);
      native_EventDelegate_Callback___ctor_54bd18
                (uVar3,param_1,
                 _Method_ContainerRemoteHandCarUIController_OnClickButtonHCarBack___12e3038,0);
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
                     _Method_ContainerRemoteHandCarUIController_OnClickButtonBlesetting___12e3030,0)
          ;
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



/* ContainerRemoteHandCarUIController$$OnClickButtonBlesetting @ 0xdda1a4
 * void ContainerRemoteHandCarUIController__OnClickButtonBlesetting (ContainerRemoteHandCarUIController_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ContainerRemoteHandCarUIController$$OnClickButtonBlesetting
   void ContainerRemoteHandCarUIController__OnClickButtonBlesetting
   (ContainerRemoteHandCarUIController_o* __this, const MethodInfo* method); */

void native_ContainerRemoteHandCarUIController__OnClickButtonBlesetting_dda1a4(long param_1)

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
  
  if ((bRam0000000001346e75 & 1) == 0) {
    native_sub_43273c(&Method_System_Action_string___ctor___12d7fe8);
    native_sub_43273c(&System_Action_string__TypeInfo_12d2080);
    native_sub_43273c(&byte___TypeInfo_12d3060);
    native_sub_43273c(&ContainerMatchingCodeUIController_TypeInfo_12d3f38);
    native_sub_43273c(&
                      Method_ContainerRemoteHandCarUIController__OnClickButtonBlesetting_b__13_4___12e3028
                     );
    native_sub_43273c(&HjdBluetoothHardwareInterface_TypeInfo_12d4938);
    native_sub_43273c(&PanelMainUIController_TypeInfo_12d5600);
    native_sub_43273c(&
                      Method_ContainerRemoteHandCarUIController___c__OnClickButtonBlesetting_b__13_0___12e97c0
                     );
    native_sub_43273c(&
                      Method_ContainerRemoteHandCarUIController___c__OnClickButtonBlesetting_b__13_1___12e97c8
                     );
    native_sub_43273c(&
                      Method_ContainerRemoteHandCarUIController___c__OnClickButtonBlesetting_b__13_2___12e97d0
                     );
    native_sub_43273c(&
                      Method_ContainerRemoteHandCarUIController___c__OnClickButtonBlesetting_b__13_3___12e97d8
                     );
    native_sub_43273c(&ContainerRemoteHandCarUIController___c_TypeInfo_12d7160);
    native_sub_43273c(&StringLiteral_ContainerMatchingCode_12ed220);
    native_sub_43273c(&StringLiteral_MatchingCodeContent_12ef810);
    bRam0000000001346e75 = 1;
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
LAB_00dda7e8:
                    /* WARNING: Subroutine does not return */
    native_sub_432810();
  }
  native_PanelMainUIController__AddUI_73944c(lVar6,4,_StringLiteral_ContainerMatchingCode_12ed220,0)
  ;
  lVar6 = native_UnityEngine_GameObject__Find_8dead0(_StringLiteral_MatchingCodeContent_12ef810,0);
  if ((lVar6 == 0) ||
     (lVar6 = native_UnityEngine_GameObject__get_transform_8de5c8(lVar6,0), lVar6 == 0))
  goto LAB_00dda7e8;
  native_UnityEngine_Transform__set_localPosition_7718a4(0,0x43c80000,0,lVar6,0);
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
  if (lVar6 == 0) goto LAB_00dda7e8;
  uVar9 = (uint)*(undefined8 *)(lVar6 + 0x18);
  if ((uVar9 == 0) || (*(undefined1 *)(lVar6 + 0x20) = *(undefined1 *)(param_1 + 0x18), uVar9 == 1))
  {
LAB_00dda7ec:
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
           uVar9 < 8)) goto LAB_00dda7ec;
  *(undefined1 *)(lVar6 + 0x27) =
       *(undefined1 *)(*(long *)(_HjdBluetoothHardwareInterface_TypeInfo_12d4938 + 0xb8) + 0x14);
  if (((*(byte *)(_ContainerRemoteHandCarUIController___c_TypeInfo_12d7160 + 0x133) >> 2 & 1) != 0)
     && (*(int *)(_ContainerRemoteHandCarUIController___c_TypeInfo_12d7160 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  puVar7 = *(undefined8 **)(_ContainerRemoteHandCarUIController___c_TypeInfo_12d7160 + 0xb8);
  lVar14 = puVar7[1];
  if (lVar14 == 0) {
    if (((*(byte *)(_ContainerRemoteHandCarUIController___c_TypeInfo_12d7160 + 0x133) >> 2 & 1) != 0
        ) && (*(int *)(_ContainerRemoteHandCarUIController___c_TypeInfo_12d7160 + 0xe0) == 0)) {
      native_sub_4327ec();
      puVar7 = *(undefined8 **)(_ContainerRemoteHandCarUIController___c_TypeInfo_12d7160 + 0xb8);
    }
    uVar12 = *puVar7;
    lVar14 = native_sub_432808(_System_Action_string__TypeInfo_12d2080);
    native_System_Action_Font____ctor_9867a8
              (lVar14,uVar12,
               _Method_ContainerRemoteHandCarUIController___c__OnClickButtonBlesetting_b__13_0___12e97c0
               ,_Method_System_Action_string___ctor___12d7fe8);
    plVar8 = (long *)(*(long *)(_ContainerRemoteHandCarUIController___c_TypeInfo_12d7160 + 0xb8) + 8
                     );
    *plVar8 = lVar14;
    native_sub_4326e0(plVar8,lVar14);
  }
  if (((*(byte *)(_HjdBluetoothHardwareInterface_TypeInfo_12d4938 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_HjdBluetoothHardwareInterface_TypeInfo_12d4938 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  native_HjdBluetoothHardwareInterface__StopAdvertising_dc423c(lVar14,0);
  native_System_Threading_Thread__Sleep_9fb5d8(100,0);
  if (((*(byte *)(_ContainerRemoteHandCarUIController___c_TypeInfo_12d7160 + 0x133) >> 2 & 1) != 0)
     && (*(int *)(_ContainerRemoteHandCarUIController___c_TypeInfo_12d7160 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  puVar7 = *(undefined8 **)(_ContainerRemoteHandCarUIController___c_TypeInfo_12d7160 + 0xb8);
  lVar14 = puVar7[2];
  if (lVar14 == 0) {
    if (((*(byte *)(_ContainerRemoteHandCarUIController___c_TypeInfo_12d7160 + 0x133) >> 2 & 1) != 0
        ) && (*(int *)(_ContainerRemoteHandCarUIController___c_TypeInfo_12d7160 + 0xe0) == 0)) {
      native_sub_4327ec();
      puVar7 = *(undefined8 **)(_ContainerRemoteHandCarUIController___c_TypeInfo_12d7160 + 0xb8);
    }
    uVar12 = *puVar7;
    lVar14 = native_sub_432808(_System_Action_string__TypeInfo_12d2080);
    native_System_Action_Font____ctor_9867a8
              (lVar14,uVar12,
               _Method_ContainerRemoteHandCarUIController___c__OnClickButtonBlesetting_b__13_1___12e97c8
               ,_Method_System_Action_string___ctor___12d7fe8);
    plVar8 = (long *)(*(long *)(_ContainerRemoteHandCarUIController___c_TypeInfo_12d7160 + 0xb8) +
                     0x10);
    *plVar8 = lVar14;
    native_sub_4326e0(plVar8,lVar14);
  }
  if (((*(byte *)(_HjdBluetoothHardwareInterface_TypeInfo_12d4938 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_HjdBluetoothHardwareInterface_TypeInfo_12d4938 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  native_HjdBluetoothHardwareInterface__StartAdvertising_dc4054(lVar14,lVar6,0);
  if (((*(byte *)(_ContainerRemoteHandCarUIController___c_TypeInfo_12d7160 + 0x133) >> 2 & 1) != 0)
     && (*(int *)(_ContainerRemoteHandCarUIController___c_TypeInfo_12d7160 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  puVar7 = *(undefined8 **)(_ContainerRemoteHandCarUIController___c_TypeInfo_12d7160 + 0xb8);
  lVar6 = puVar7[3];
  if (lVar6 == 0) {
    if (((*(byte *)(_ContainerRemoteHandCarUIController___c_TypeInfo_12d7160 + 0x133) >> 2 & 1) != 0
        ) && (*(int *)(_ContainerRemoteHandCarUIController___c_TypeInfo_12d7160 + 0xe0) == 0)) {
      native_sub_4327ec();
      puVar7 = *(undefined8 **)(_ContainerRemoteHandCarUIController___c_TypeInfo_12d7160 + 0xb8);
    }
    uVar12 = *puVar7;
    lVar6 = native_sub_432808(_System_Action_string__TypeInfo_12d2080);
    native_System_Action_Font____ctor_9867a8
              (lVar6,uVar12,
               _Method_ContainerRemoteHandCarUIController___c__OnClickButtonBlesetting_b__13_2___12e97d0
               ,_Method_System_Action_string___ctor___12d7fe8);
    plVar8 = (long *)(*(long *)(_ContainerRemoteHandCarUIController___c_TypeInfo_12d7160 + 0xb8) +
                     0x18);
    *plVar8 = lVar6;
    native_sub_4326e0(plVar8,lVar6);
  }
  if (((*(byte *)(_HjdBluetoothHardwareInterface_TypeInfo_12d4938 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_HjdBluetoothHardwareInterface_TypeInfo_12d4938 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  native_HjdBluetoothHardwareInterface__StopScanToGetData_dc465c(lVar6,0);
  native_System_Threading_Thread__Sleep_9fb5d8(100,0);
  if (((*(byte *)(_ContainerRemoteHandCarUIController___c_TypeInfo_12d7160 + 0x133) >> 2 & 1) != 0)
     && (*(int *)(_ContainerRemoteHandCarUIController___c_TypeInfo_12d7160 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  puVar7 = *(undefined8 **)(_ContainerRemoteHandCarUIController___c_TypeInfo_12d7160 + 0xb8);
  lVar6 = puVar7[4];
  if (lVar6 == 0) {
    if (((*(byte *)(_ContainerRemoteHandCarUIController___c_TypeInfo_12d7160 + 0x133) >> 2 & 1) != 0
        ) && (*(int *)(_ContainerRemoteHandCarUIController___c_TypeInfo_12d7160 + 0xe0) == 0)) {
      native_sub_4327ec();
      puVar7 = *(undefined8 **)(_ContainerRemoteHandCarUIController___c_TypeInfo_12d7160 + 0xb8);
    }
    uVar12 = *puVar7;
    lVar6 = native_sub_432808(_System_Action_string__TypeInfo_12d2080);
    native_System_Action_Font____ctor_9867a8
              (lVar6,uVar12,
               _Method_ContainerRemoteHandCarUIController___c__OnClickButtonBlesetting_b__13_3___12e97d8
               ,_Method_System_Action_string___ctor___12d7fe8);
    plVar8 = (long *)(*(long *)(_ContainerRemoteHandCarUIController___c_TypeInfo_12d7160 + 0xb8) +
                     0x20);
    *plVar8 = lVar6;
    native_sub_4326e0(plVar8,lVar6);
  }
  uVar12 = native_sub_432808(_System_Action_string__TypeInfo_12d2080);
  native_System_Action_Font____ctor_9867a8
            (uVar12,param_1,
             _Method_ContainerRemoteHandCarUIController__OnClickButtonBlesetting_b__13_4___12e3028,
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



/* ContainerRemoteHandCarUIController$$OnClickButtonHCarBack @ 0xdda7f8
 * void ContainerRemoteHandCarUIController__OnClickButtonHCarBack (ContainerRemoteHandCarUIController_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ContainerRemoteHandCarUIController$$OnClickButtonHCarBack
   void ContainerRemoteHandCarUIController__OnClickButtonHCarBack
   (ContainerRemoteHandCarUIController_o* __this, const MethodInfo* method); */

void native_ContainerRemoteHandCarUIController__OnClickButtonHCarBack_dda7f8(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uStack_28;
  
  if ((bRam0000000001346e76 & 1) == 0) {
    native_sub_43273c(&PanelMainUIController_TypeInfo_12d5600);
    native_sub_43273c(&StringLiteral_Login_12ef660);
    bRam0000000001346e76 = 1;
  }
  if (((*(byte *)(_PanelMainUIController_TypeInfo_12d5600 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_PanelMainUIController_TypeInfo_12d5600 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  lVar3 = native_PanelMainUIController__get_Instance_738fb0(0);
  if (lVar3 != 0) {
    native_PanelMainUIController__SwitchVerticalscreen_73a3b8(lVar3,0);
    uVar1 = _StringLiteral_Login_12ef660;
    if ((bRam0000000001346e77 & 1) == 0) {
      native_sub_43273c(&PanelMainUIController_TypeInfo_12d5600);
      native_sub_43273c(&UnityEngine_SceneManagement_SceneManager_TypeInfo_12d5bc0);
      bRam0000000001346e77 = 1;
    }
    if (((*(byte *)(_PanelMainUIController_TypeInfo_12d5600 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_PanelMainUIController_TypeInfo_12d5600 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    lVar3 = native_PanelMainUIController__get_Instance_738fb0(0);
    if (lVar3 != 0) {
      native_PanelMainUIController__ClearNowScene_73a498(lVar3,0);
      if (((*(byte *)(_UnityEngine_SceneManagement_SceneManager_TypeInfo_12d5bc0 + 0x133) >> 2 & 1)
           != 0) &&
         (*(int *)(_UnityEngine_SceneManagement_SceneManager_TypeInfo_12d5bc0 + 0xe0) == 0)) {
        native_sub_4327ec();
      }
      if ((bRam000000000133fa5c & 1) == 0) {
        native_sub_43273c(&UnityEngine_SceneManagement_SceneManager_TypeInfo_12d5bc0,0,0);
        bRam000000000133fa5c = 1;
      }
      uStack_28 = 0;
      native_UnityEngine_SceneManagement_LoadSceneParameters___ctor_8e2120(&uStack_28,0,0);
      uVar2 = uStack_28;
      if (((*(byte *)(_UnityEngine_SceneManagement_SceneManager_TypeInfo_12d5bc0 + 0x133) >> 2 & 1)
           != 0) &&
         (*(int *)(_UnityEngine_SceneManagement_SceneManager_TypeInfo_12d5bc0 + 0xe0) == 0)) {
        native_sub_4327ec();
      }
      native_UnityEngine_SceneManagement_SceneManager__LoadScene_769edc(uVar1,uVar2);
      return;
    }
                    /* WARNING: Subroutine does not return */
    native_sub_432810();
  }
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* ContainerRemoteHandCarUIController$$LoadNewScene @ 0xdda880
 * void ContainerRemoteHandCarUIController__LoadNewScene (ContainerRemoteHandCarUIController_o* __this, System_String_o* sceneName, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ContainerRemoteHandCarUIController$$LoadNewScene
   void ContainerRemoteHandCarUIController__LoadNewScene (ContainerRemoteHandCarUIController_o*
   __this, System_String_o* sceneName, const MethodInfo* method); */

void native_ContainerRemoteHandCarUIController__LoadNewScene_dda880
               (undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uStack_28;
  
  if ((bRam0000000001346e77 & 1) == 0) {
    native_sub_43273c(&PanelMainUIController_TypeInfo_12d5600);
    native_sub_43273c(&UnityEngine_SceneManagement_SceneManager_TypeInfo_12d5bc0);
    bRam0000000001346e77 = 1;
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



/* ContainerRemoteHandCarUIController$$Update @ 0xdda92c
 * void ContainerRemoteHandCarUIController__Update (ContainerRemoteHandCarUIController_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ContainerRemoteHandCarUIController$$Update
   void ContainerRemoteHandCarUIController__Update (ContainerRemoteHandCarUIController_o* __this,
   const MethodInfo* method); */

void native_ContainerRemoteHandCarUIController__Update_dda92c(long param_1)

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
  
  if ((bRam0000000001346e78 & 1) == 0) {
    native_sub_43273c(&Method_System_Action_string___ctor___12d7fe8);
    native_sub_43273c(&System_Action_string__TypeInfo_12d2080);
    native_sub_43273c(&byte___TypeInfo_12d3060);
    native_sub_43273c(&ContainerRemoteHandCarUIController_TypeInfo_12d3f48);
    native_sub_43273c(&HjdBluetoothHardwareInterface_TypeInfo_12d4938);
    native_sub_43273c(&PanelMainUIController_TypeInfo_12d5600);
    native_sub_43273c(&Method_ContainerRemoteHandCarUIController___c__Update_b__18_0___12e97e0);
    native_sub_43273c(&Method_ContainerRemoteHandCarUIController___c__Update_b__18_1___12e97e8);
    native_sub_43273c(&Method_ContainerRemoteHandCarUIController___c__Update_b__18_2___12e97f0);
    native_sub_43273c(&ContainerRemoteHandCarUIController___c_TypeInfo_12d7160);
    bRam0000000001346e78 = 1;
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
LAB_00ddaa90:
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
      goto LAB_00ddaa90;
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
LAB_00ddab04:
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
      goto LAB_00ddab04;
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
      if (lVar3 == 0) goto LAB_00ddb234;
      if (1 < *(uint *)(lVar3 + 0x18)) {
        *(undefined1 *)(lVar3 + 0x21) = 0;
        lVar3 = *plVar10;
        if (lVar3 == 0) goto LAB_00ddb234;
        if (2 < *(uint *)(lVar3 + 0x18)) {
          *(char *)(lVar3 + 0x22) = (char)(int)fVar1;
          lVar3 = *plVar10;
          if (lVar3 == 0) goto LAB_00ddb234;
          if (3 < *(uint *)(lVar3 + 0x18)) {
            *(char *)(lVar3 + 0x23) = (char)(int)fVar12;
            lVar3 = *plVar10;
            if (lVar3 == 0) goto LAB_00ddb234;
            if (4 < *(uint *)(lVar3 + 0x18)) {
              *(undefined1 *)(lVar3 + 0x24) = 0;
              lVar3 = *plVar10;
              if (lVar3 == 0) goto LAB_00ddb234;
              if (5 < *(uint *)(lVar3 + 0x18)) {
                *(undefined1 *)(lVar3 + 0x25) = 0;
                lVar3 = *plVar10;
                if (lVar3 == 0) goto LAB_00ddb234;
                if (6 < *(uint *)(lVar3 + 0x18)) {
                  *(char *)(lVar3 + 0x26) = (char)iVar8;
                  uVar4 = native_Assets_Scripts_Tools_HjdBleTool__data_isalike_7f6e28
                                    (*(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x30)
                                     ,0);
                  if (((uVar4 & 1) != 0) || (*(int *)(param_1 + 0x38) != 0)) {
LAB_00ddaf38:
                    if (*(char *)(param_1 + 0x1d) != '\0') {
                      *(undefined1 *)(param_1 + 0x1d) = 0;
                      if (((*(byte *)(_ContainerRemoteHandCarUIController___c_TypeInfo_12d7160 +
                                     0x133) >> 2 & 1) != 0) &&
                         (*(int *)(_ContainerRemoteHandCarUIController___c_TypeInfo_12d7160 + 0xe0)
                          == 0)) {
                        native_sub_4327ec();
                      }
                      puVar7 = *(undefined8 **)
                                (_ContainerRemoteHandCarUIController___c_TypeInfo_12d7160 + 0xb8);
                      lVar3 = puVar7[5];
                      if (lVar3 == 0) {
                        if (((*(byte *)(_ContainerRemoteHandCarUIController___c_TypeInfo_12d7160 +
                                       0x133) >> 2 & 1) != 0) &&
                           (*(int *)(_ContainerRemoteHandCarUIController___c_TypeInfo_12d7160 + 0xe0
                                    ) == 0)) {
                          native_sub_4327ec();
                          puVar7 = *(undefined8 **)
                                    (_ContainerRemoteHandCarUIController___c_TypeInfo_12d7160 + 0xb8
                                    );
                        }
                        uVar5 = *puVar7;
                        lVar3 = native_sub_432808(_System_Action_string__TypeInfo_12d2080);
                        native_System_Action_Font____ctor_9867a8
                                  (lVar3,uVar5,
                                   _Method_ContainerRemoteHandCarUIController___c__Update_b__18_0___12e97e0
                                   ,_Method_System_Action_string___ctor___12d7fe8);
                        plVar10 = (long *)(*(long *)(
                                                  _ContainerRemoteHandCarUIController___c_TypeInfo_12d7160
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
                      if (((*(byte *)(_ContainerRemoteHandCarUIController___c_TypeInfo_12d7160 +
                                     0x133) >> 2 & 1) != 0) &&
                         (*(int *)(_ContainerRemoteHandCarUIController___c_TypeInfo_12d7160 + 0xe0)
                          == 0)) {
                        native_sub_4327ec();
                      }
                      puVar7 = *(undefined8 **)
                                (_ContainerRemoteHandCarUIController___c_TypeInfo_12d7160 + 0xb8);
                      lVar3 = puVar7[6];
                      if (lVar3 == 0) {
                        if (((*(byte *)(_ContainerRemoteHandCarUIController___c_TypeInfo_12d7160 +
                                       0x133) >> 2 & 1) != 0) &&
                           (*(int *)(_ContainerRemoteHandCarUIController___c_TypeInfo_12d7160 + 0xe0
                                    ) == 0)) {
                          native_sub_4327ec();
                          puVar7 = *(undefined8 **)
                                    (_ContainerRemoteHandCarUIController___c_TypeInfo_12d7160 + 0xb8
                                    );
                        }
                        uVar5 = *puVar7;
                        lVar3 = native_sub_432808(_System_Action_string__TypeInfo_12d2080);
                        native_System_Action_Font____ctor_9867a8
                                  (lVar3,uVar5,
                                   _Method_ContainerRemoteHandCarUIController___c__Update_b__18_1___12e97e8
                                   ,_Method_System_Action_string___ctor___12d7fe8);
                        plVar10 = (long *)(*(long *)(
                                                  _ContainerRemoteHandCarUIController___c_TypeInfo_12d7160
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
                      if (((*(byte *)(_ContainerRemoteHandCarUIController___c_TypeInfo_12d7160 +
                                     0x133) >> 2 & 1) != 0) &&
                         (*(int *)(_ContainerRemoteHandCarUIController___c_TypeInfo_12d7160 + 0xe0)
                          == 0)) {
                        native_sub_4327ec();
                      }
                      puVar7 = *(undefined8 **)
                                (_ContainerRemoteHandCarUIController___c_TypeInfo_12d7160 + 0xb8);
                      lVar3 = puVar7[7];
                      if (lVar3 == 0) {
                        if (((*(byte *)(_ContainerRemoteHandCarUIController___c_TypeInfo_12d7160 +
                                       0x133) >> 2 & 1) != 0) &&
                           (*(int *)(_ContainerRemoteHandCarUIController___c_TypeInfo_12d7160 + 0xe0
                                    ) == 0)) {
                          native_sub_4327ec();
                          puVar7 = *(undefined8 **)
                                    (_ContainerRemoteHandCarUIController___c_TypeInfo_12d7160 + 0xb8
                                    );
                        }
                        uVar5 = *puVar7;
                        lVar3 = native_sub_432808(_System_Action_string__TypeInfo_12d2080);
                        native_System_Action_Font____ctor_9867a8
                                  (lVar3,uVar5,
                                   _Method_ContainerRemoteHandCarUIController___c__Update_b__18_2___12e97f0
                                   ,_Method_System_Action_string___ctor___12d7fe8);
                        plVar10 = (long *)(*(long *)(
                                                  _ContainerRemoteHandCarUIController___c_TypeInfo_12d7160
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
                    lVar3 = native_ContainerRemoteHandCarUIController__gethaomiao_ddb238();
                    if (((*(byte *)(_ContainerRemoteHandCarUIController_TypeInfo_12d3f48 + 0x133) >>
                          2 & 1) != 0) &&
                       (*(int *)(_ContainerRemoteHandCarUIController_TypeInfo_12d3f48 + 0xe0) == 0))
                    {
                      native_sub_4327ec(_ContainerRemoteHandCarUIController_TypeInfo_12d3f48);
                    }
                    if (0x13 < lVar3 - **(long **)(
                                                  _ContainerRemoteHandCarUIController_TypeInfo_12d3f48
                                                  + 0xb8)) {
                      uVar5 = native_ContainerRemoteHandCarUIController__gethaomiao_ddb238();
                      if (((*(byte *)(_ContainerRemoteHandCarUIController_TypeInfo_12d3f48 + 0x133)
                            >> 2 & 1) != 0) &&
                         (*(int *)(_ContainerRemoteHandCarUIController_TypeInfo_12d3f48 + 0xe0) == 0
                         )) {
                        native_sub_4327ec(_ContainerRemoteHandCarUIController_TypeInfo_12d3f48);
                      }
                      **(undefined8 **)(_ContainerRemoteHandCarUIController_TypeInfo_12d3f48 + 0xb8)
                           = uVar5;
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
                  if (lVar3 == 0) goto LAB_00ddb234;
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
                    if (lVar9 == 0) goto LAB_00ddb234;
                    if ((*(int *)(lVar9 + 0x18) != 0) &&
                       (uVar6 = (uint)*(undefined8 *)(lVar3 + 0x18), 2 < uVar6)) {
                      *(undefined1 *)(lVar3 + 0x22) = *(undefined1 *)(lVar9 + 0x20);
                      lVar9 = *(long *)(*(long *)(_PanelMainUIController_TypeInfo_12d5600 + 0xb8) +
                                       0x18);
                      if (lVar9 == 0) goto LAB_00ddb234;
                      if ((1 < *(uint *)(lVar9 + 0x18)) && (3 < uVar6)) {
                        *(undefined1 *)(lVar3 + 0x23) = *(undefined1 *)(lVar9 + 0x21);
                        lVar9 = *(long *)(*(long *)(_PanelMainUIController_TypeInfo_12d5600 + 0xb8)
                                         + 0x18);
                        if (lVar9 == 0) goto LAB_00ddb234;
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
                            if (lVar9 == 0) goto LAB_00ddb234;
                            if ((*(int *)(lVar9 + 0x18) != 0) && (8 < uVar6)) {
                              *(undefined1 *)(lVar3 + 0x28) = *(undefined1 *)(lVar9 + 0x20);
                              lVar9 = *plVar10;
                              if (lVar9 == 0) goto LAB_00ddb234;
                              if ((1 < *(uint *)(lVar9 + 0x18)) && (9 < uVar6)) {
                                *(undefined1 *)(lVar3 + 0x29) = *(undefined1 *)(lVar9 + 0x21);
                                lVar9 = *plVar10;
                                if (lVar9 == 0) goto LAB_00ddb234;
                                if ((2 < *(uint *)(lVar9 + 0x18)) && (10 < uVar6)) {
                                  *(undefined1 *)(lVar3 + 0x2a) = *(undefined1 *)(lVar9 + 0x22);
                                  lVar9 = *plVar10;
                                  if (lVar9 == 0) goto LAB_00ddb234;
                                  if ((3 < *(uint *)(lVar9 + 0x18)) && (0xb < uVar6)) {
                                    *(undefined1 *)(lVar3 + 0x2b) = *(undefined1 *)(lVar9 + 0x23);
                                    lVar9 = *plVar10;
                                    if (lVar9 == 0) goto LAB_00ddb234;
                                    if ((4 < *(uint *)(lVar9 + 0x18)) && (0xc < uVar6)) {
                                      *(undefined1 *)(lVar3 + 0x2c) = *(undefined1 *)(lVar9 + 0x24);
                                      lVar9 = *plVar10;
                                      if (lVar9 == 0) goto LAB_00ddb234;
                                      if ((5 < *(uint *)(lVar9 + 0x18)) && (0xd < uVar6)) {
                                        *(undefined1 *)(lVar3 + 0x2d) =
                                             *(undefined1 *)(lVar9 + 0x25);
                                        lVar9 = *plVar10;
                                        if (lVar9 == 0) goto LAB_00ddb234;
                                        if ((6 < *(uint *)(lVar9 + 0x18)) && (0xe < uVar6)) {
                                          *(undefined1 *)(lVar3 + 0x2e) =
                                               *(undefined1 *)(lVar9 + 0x26);
                                          lVar9 = *plVar10;
                                          if (lVar9 == 0) goto LAB_00ddb234;
                                          if ((7 < *(uint *)(lVar9 + 0x18)) && (0xf < uVar6)) {
                                            *(undefined1 *)(lVar3 + 0x2f) =
                                                 *(undefined1 *)(lVar9 + 0x27);
                                            lVar9 = *plVar10;
                                            if (lVar9 == 0) goto LAB_00ddb234;
                                            if ((8 < *(uint *)(lVar9 + 0x18)) && (0x10 < uVar6)) {
                                              *(undefined1 *)(lVar3 + 0x30) =
                                                   *(undefined1 *)(lVar9 + 0x28);
                                              lVar9 = *plVar10;
                                              if (lVar9 == 0) goto LAB_00ddb234;
                                              if ((9 < *(uint *)(lVar9 + 0x18)) && (0x11 < uVar6)) {
                                                *(undefined1 *)(lVar3 + 0x31) =
                                                     *(undefined1 *)(lVar9 + 0x29);
                                                *(long *)(param_1 + 0x20) = lVar3;
                                                native_sub_4326e0((long *)(param_1 + 0x20),lVar3);
                                                *(undefined1 *)(param_1 + 0x1d) = 1;
                                                *(undefined4 *)(param_1 + 0x38) = 3;
                                                goto LAB_00ddaf38;
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
LAB_00ddb234:
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* ContainerRemoteHandCarUIController$$gethaomiao @ 0xddb238
 * int64_t ContainerRemoteHandCarUIController__gethaomiao (ContainerRemoteHandCarUIController_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ContainerRemoteHandCarUIController$$gethaomiao
   int64_t ContainerRemoteHandCarUIController__gethaomiao (ContainerRemoteHandCarUIController_o*
   __this, const MethodInfo* method); */

long native_ContainerRemoteHandCarUIController__gethaomiao_ddb238(void)

{
  long lVar1;
  undefined8 uStack_18;
  
  if ((bRam0000000001346e79 & 1) == 0) {
    native_sub_43273c(&System_DateTime_TypeInfo_12d42f8);
    bRam0000000001346e79 = 1;
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



/* ContainerRemoteHandCarUIController$$Awake @ 0xddb2ec
 * void ContainerRemoteHandCarUIController__Awake (ContainerRemoteHandCarUIController_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ContainerRemoteHandCarUIController$$Awake
   void ContainerRemoteHandCarUIController__Awake (ContainerRemoteHandCarUIController_o* __this,
   const MethodInfo* method); */

void native_ContainerRemoteHandCarUIController__Awake_ddb2ec(long param_1)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  
  if ((bRam0000000001346e7a & 1) == 0) {
    native_sub_43273c(&StringLiteral_ButtonHCarBack_12ec8d8);
    native_sub_43273c(&StringLiteral_ButtonHCarOpenclose_12ec8e0);
    bRam0000000001346e7a = 1;
  }
  lVar4 = native_UnityEngine_GameObject__Find_8dead0(_StringLiteral_ButtonHCarBack_12ec8d8,0);
  if (lVar4 != 0) {
    uVar5 = native_UnityEngine_GameObject__get_gameObject_8debb8(lVar4,0);
    *(undefined8 *)(param_1 + 0x48) = uVar5;
    native_sub_4326e0();
    lVar4 = native_UnityEngine_GameObject__Find_8dead0(_StringLiteral_ButtonHCarOpenclose_12ec8e0,0)
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



/* ContainerRemoteHandCarUIController$$.ctor @ 0xddb394
 * void ContainerRemoteHandCarUIController___ctor (ContainerRemoteHandCarUIController_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ContainerRemoteHandCarUIController$$.ctor
   void ContainerRemoteHandCarUIController___ctor (ContainerRemoteHandCarUIController_o* __this,
   const MethodInfo* method); */

undefined1  [16] native_ContainerRemoteHandCarUIController___ctor_ddb394(ulong param_1)

{
  undefined8 uVar1;
  undefined1 auVar2 [16];
  
  if ((bRam0000000001346e7b & 1) == 0) {
    native_sub_43273c(&byte___TypeInfo_12d3060);
    bRam0000000001346e7b = 1;
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



/* ContainerRemoteHandCarUIController$$.cctor @ 0xddb450
 * void ContainerRemoteHandCarUIController___cctor (const MethodInfo* method); */

/* ContainerRemoteHandCarUIController$$.cctor
   void ContainerRemoteHandCarUIController___cctor (const MethodInfo* method); */

void native_ContainerRemoteHandCarUIController___cctor_ddb450(void)

{
  return;
}



/* ContainerRemoteHandCarUIController$$<OnClickButtonBlesetting>b__13_4 @ 0xddb454
 * void ContainerRemoteHandCarUIController___OnClickButtonBlesetting_b__13_4 (ContainerRemoteHandCarUIController_o* __this, System_String_o* data, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ContainerRemoteHandCarUIController$$<OnClickButtonBlesetting>b__13_4
   void ContainerRemoteHandCarUIController___OnClickButtonBlesetting_b__13_4
   (ContainerRemoteHandCarUIController_o* __this, System_String_o* data, const MethodInfo* method);
    */

void native_ContainerRemoteHandCarUIController___OnClickButtonBlesetting_b__13_4_ddb454
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
  
  if ((bRam0000000001346e7c & 1) == 0) {
    native_sub_43273c(&byte___TypeInfo_12d3060);
    native_sub_43273c(&ContainerMatchingCodeUIController_TypeInfo_12d3f38);
    native_sub_43273c(&System_Convert_TypeInfo_12d3fd0);
    native_sub_43273c(&HjdBluetoothHardwareInterface_TypeInfo_12d4938);
    native_sub_43273c(&PanelMainUIController_TypeInfo_12d5600);
    bRam0000000001346e7c = 1;
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
      if (lVar11 == 0) goto LAB_00ddb9cc;
      if (*(int *)(lVar11 + 0x18) != 0) {
        *(undefined1 *)(lVar11 + 0x20) = *(undefined1 *)(lVar8 + (int)uVar6 + 0x20);
        if (uVar6 + 1 < *(uint *)(lVar8 + 0x18)) {
          lVar11 = *(long *)(*(long *)(_PanelMainUIController_TypeInfo_12d5600 + 0xb8) + 0x18);
          if (lVar11 == 0) goto LAB_00ddb9cc;
          if (1 < *(uint *)(lVar11 + 0x18)) {
            *(undefined1 *)(lVar11 + 0x21) = *(undefined1 *)(lVar8 + (int)(uVar6 + 1) + 0x20);
            if (uVar6 + 2 < *(uint *)(lVar8 + 0x18)) {
              lVar11 = *(long *)(*(long *)(_PanelMainUIController_TypeInfo_12d5600 + 0xb8) + 0x18);
              if (lVar11 == 0) goto LAB_00ddb9cc;
              if (2 < *(uint *)(lVar11 + 0x18)) {
                *(undefined1 *)(lVar11 + 0x22) = *(undefined1 *)(lVar8 + (int)(uVar6 + 2) + 0x20);
                *(undefined1 *)(*(long *)(_PanelMainUIController_TypeInfo_12d5600 + 0xb8) + 0x20) =
                     1;
                lVar8 = native_sub_432750(_byte___TypeInfo_12d3060,0x13);
                if (lVar8 == 0) goto LAB_00ddb9cc;
                uVar6 = *(uint *)(lVar8 + 0x18);
                if ((uVar6 != 0) &&
                   (*(undefined1 *)(lVar8 + 0x20) = *(undefined1 *)(param_1 + 0x18), uVar6 != 1)) {
                  *(undefined1 *)(lVar8 + 0x21) = *(undefined1 *)(param_1 + 0x1a);
                  lVar11 = *(long *)(*(long *)(_PanelMainUIController_TypeInfo_12d5600 + 0xb8) +
                                    0x18);
                  if (lVar11 == 0) goto LAB_00ddb9cc;
                  if ((*(int *)(lVar11 + 0x18) != 0) && (2 < uVar6)) {
                    *(undefined1 *)(lVar8 + 0x22) = *(undefined1 *)(lVar11 + 0x20);
                    lVar11 = *(long *)(*(long *)(_PanelMainUIController_TypeInfo_12d5600 + 0xb8) +
                                      0x18);
                    if (lVar11 == 0) goto LAB_00ddb9cc;
                    if ((1 < *(uint *)(lVar11 + 0x18)) && (3 < uVar6)) {
                      *(undefined1 *)(lVar8 + 0x23) = *(undefined1 *)(lVar11 + 0x21);
                      lVar11 = *(long *)(*(long *)(_PanelMainUIController_TypeInfo_12d5600 + 0xb8) +
                                        0x18);
                      if (lVar11 == 0) goto LAB_00ddb9cc;
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
                        if (lVar11 == 0) goto LAB_00ddb9cc;
                        if ((*(int *)(lVar11 + 0x18) != 0) && (8 < uVar6)) {
                          *(undefined1 *)(lVar8 + 0x28) = *(undefined1 *)(lVar11 + 0x20);
                          lVar11 = *plVar13;
                          if (lVar11 == 0) goto LAB_00ddb9cc;
                          if ((1 < *(uint *)(lVar11 + 0x18)) && (9 < uVar6)) {
                            *(undefined1 *)(lVar8 + 0x29) = *(undefined1 *)(lVar11 + 0x21);
                            lVar11 = *plVar13;
                            if (lVar11 == 0) goto LAB_00ddb9cc;
                            if ((2 < *(uint *)(lVar11 + 0x18)) && (10 < uVar6)) {
                              *(undefined1 *)(lVar8 + 0x2a) = *(undefined1 *)(lVar11 + 0x22);
                              lVar11 = *plVar13;
                              if (lVar11 == 0) goto LAB_00ddb9cc;
                              if ((3 < *(uint *)(lVar11 + 0x18)) && (0xb < uVar6)) {
                                *(undefined1 *)(lVar8 + 0x2b) = *(undefined1 *)(lVar11 + 0x23);
                                lVar11 = *plVar13;
                                if (lVar11 == 0) goto LAB_00ddb9cc;
                                if ((4 < *(uint *)(lVar11 + 0x18)) && (0xc < uVar6)) {
                                  *(undefined1 *)(lVar8 + 0x2c) = *(undefined1 *)(lVar11 + 0x24);
                                  lVar11 = *plVar13;
                                  if (lVar11 == 0) goto LAB_00ddb9cc;
                                  if ((5 < *(uint *)(lVar11 + 0x18)) && (0xd < uVar6)) {
                                    *(undefined1 *)(lVar8 + 0x2d) = *(undefined1 *)(lVar11 + 0x25);
                                    lVar11 = *plVar13;
                                    if (lVar11 == 0) goto LAB_00ddb9cc;
                                    if ((6 < *(uint *)(lVar11 + 0x18)) && (0xe < uVar6)) {
                                      *(undefined1 *)(lVar8 + 0x2e) = *(undefined1 *)(lVar11 + 0x26)
                                      ;
                                      lVar11 = *plVar13;
                                      if (lVar11 == 0) goto LAB_00ddb9cc;
                                      if ((7 < *(uint *)(lVar11 + 0x18)) && (0xf < uVar6)) {
                                        *(undefined1 *)(lVar8 + 0x2f) =
                                             *(undefined1 *)(lVar11 + 0x27);
                                        lVar11 = *plVar13;
                                        if (lVar11 == 0) goto LAB_00ddb9cc;
                                        if ((8 < *(uint *)(lVar11 + 0x18)) && (0x10 < uVar6)) {
                                          *(undefined1 *)(lVar8 + 0x30) =
                                               *(undefined1 *)(lVar11 + 0x28);
                                          lVar11 = *plVar13;
                                          if (lVar11 == 0) goto LAB_00ddb9cc;
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
LAB_00ddb9cc:
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}


