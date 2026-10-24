/* ARM64 IL2CPP native pseudocode from Ghidra.
 * Recovered implementation, not original C# source.
 * Function boundaries follow the IL2CPP method address table. */


/* ControllerCarPrograme$$Start @ 0xdebc90
 * void ControllerCarPrograme__Start (ControllerCarPrograme_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ControllerCarPrograme$$Start
   void ControllerCarPrograme__Start (ControllerCarPrograme_o* __this, const MethodInfo* method); */

void native_ControllerCarPrograme__Start_debc90(void)

{
  long lVar1;
  long *plVar2;
  
  if ((bRam0000000001346edf & 1) == 0) {
    native_sub_43273c(&Method_UnityEngine_GameObject_GetComponent_Text____12e4a58);
    native_sub_43273c(&PanelMainUIController_TypeInfo_12d5600);
    native_sub_43273c(&StringLiteral_ProgameControlText_12f06e0);
    native_sub_43273c(&StringLiteral_ProgameExitText_12f06f0);
    native_sub_43273c(&StringLiteral_ALL_12ec150);
    native_sub_43273c(&StringLiteral_ProgameAllText_12f06d8);
    native_sub_43273c(&StringLiteral_Motion_12efae0);
    native_sub_43273c(&StringLiteral_ProgameEventText_12f06e8);
    native_sub_43273c(&StringLiteral_Exit_12edcf0);
    native_sub_43273c(&StringLiteral_Control_12ed2f0);
    native_sub_43273c(&StringLiteral_Event_12edc80);
    native_sub_43273c(&StringLiteral_ProgameMotionText_12f06f8);
    bRam0000000001346edf = 1;
  }
  if (((*(byte *)(_PanelMainUIController_TypeInfo_12d5600 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_PanelMainUIController_TypeInfo_12d5600 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  if (*(char *)(*(long *)(_PanelMainUIController_TypeInfo_12d5600 + 0xb8) + 0xbc) != '\0') {
    lVar1 = native_UnityEngine_GameObject__Find_8dead0(_StringLiteral_ProgameAllText_12f06d8,0);
    if ((lVar1 != 0) &&
       (lVar1 = native_UnityEngine_GameObject__get_gameObject_8debb8(lVar1,0), lVar1 != 0)) {
      plVar2 = (long *)native_UnityEngine_GameObject__GetComponent_BE2_BlockSectionHeader_Custom__4a2214
                                 (lVar1,_Method_UnityEngine_GameObject_GetComponent_Text____12e4a58)
      ;
      if (plVar2 != (long *)0x0) {
        (**(code **)(*plVar2 + 0x5e8))
                  (plVar2,_StringLiteral_ALL_12ec150,*(undefined8 *)(*plVar2 + 0x5f0));
        lVar1 = native_UnityEngine_GameObject__Find_8dead0
                          (_StringLiteral_ProgameEventText_12f06e8,0);
        if (((lVar1 != 0) &&
            (lVar1 = native_UnityEngine_GameObject__get_gameObject_8debb8(lVar1,0), lVar1 != 0)) &&
           (plVar2 = (long *)native_UnityEngine_GameObject__GetComponent_BE2_BlockSectionHeader_Custom__4a2214
                                       (lVar1,
                                        _Method_UnityEngine_GameObject_GetComponent_Text____12e4a58)
           , plVar2 != (long *)0x0)) {
          (**(code **)(*plVar2 + 0x5e8))
                    (plVar2,_StringLiteral_Event_12edc80,*(undefined8 *)(*plVar2 + 0x5f0));
          lVar1 = native_UnityEngine_GameObject__Find_8dead0
                            (_StringLiteral_ProgameMotionText_12f06f8,0);
          if (((lVar1 != 0) &&
              (lVar1 = native_UnityEngine_GameObject__get_gameObject_8debb8(lVar1,0), lVar1 != 0))
             && (plVar2 = (long *)native_UnityEngine_GameObject__GetComponent_BE2_BlockSectionHeader_Custom__4a2214
                                            (lVar1,
                                             _Method_UnityEngine_GameObject_GetComponent_Text____12e4a58
                                            ), plVar2 != (long *)0x0)) {
            (**(code **)(*plVar2 + 0x5e8))
                      (plVar2,_StringLiteral_Motion_12efae0,*(undefined8 *)(*plVar2 + 0x5f0));
            lVar1 = native_UnityEngine_GameObject__Find_8dead0
                              (_StringLiteral_ProgameControlText_12f06e0,0);
            if (((lVar1 != 0) &&
                (lVar1 = native_UnityEngine_GameObject__get_gameObject_8debb8(lVar1,0), lVar1 != 0))
               && (plVar2 = (long *)native_UnityEngine_GameObject__GetComponent_BE2_BlockSectionHeader_Custom__4a2214
                                              (lVar1,
                                               _Method_UnityEngine_GameObject_GetComponent_Text____12e4a58
                                              ), plVar2 != (long *)0x0)) {
              (**(code **)(*plVar2 + 0x5e8))
                        (plVar2,_StringLiteral_Control_12ed2f0,*(undefined8 *)(*plVar2 + 0x5f0));
              lVar1 = native_UnityEngine_GameObject__Find_8dead0
                                (_StringLiteral_ProgameExitText_12f06f0,0);
              if (((lVar1 != 0) &&
                  (lVar1 = native_UnityEngine_GameObject__get_gameObject_8debb8(lVar1,0), lVar1 != 0
                  )) && (plVar2 = (long *)native_UnityEngine_GameObject__GetComponent_BE2_BlockSectionHeader_Custom__4a2214
                                                    (lVar1,
                                                  _Method_UnityEngine_GameObject_GetComponent_Text____12e4a58
                                                  ), plVar2 != (long *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x00debef8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                (**(code **)(*plVar2 + 0x5e8))
                          (plVar2,_StringLiteral_Exit_12edcf0,*(undefined8 *)(*plVar2 + 0x5f0));
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
  return;
}



/* ControllerCarPrograme$$Update @ 0xdebf0c
 * void ControllerCarPrograme__Update (ControllerCarPrograme_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ControllerCarPrograme$$Update
   void ControllerCarPrograme__Update (ControllerCarPrograme_o* __this, const MethodInfo* method);
    */

void native_ControllerCarPrograme__Update_debf0c(long param_1)

{
  undefined1 uVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  uint uVar5;
  undefined8 *puVar6;
  int iVar7;
  long lVar8;
  long *plVar9;
  undefined8 uVar10;
  
  if ((bRam0000000001346ee0 & 1) == 0) {
    native_sub_43273c(&Method_System_Action_string___ctor___12d7fe8);
    native_sub_43273c(&System_Action_string__TypeInfo_12d2080);
    native_sub_43273c(&byte___TypeInfo_12d3060);
    native_sub_43273c(&ControllerCarPrograme_TypeInfo_12d3fc8);
    native_sub_43273c(&HjdBluetoothHardwareInterface_TypeInfo_12d4938);
    native_sub_43273c(&PanelMainUIController_TypeInfo_12d5600);
    native_sub_43273c(&Method_ControllerCarPrograme___c__Update_b__14_0___12e9950);
    native_sub_43273c(&Method_ControllerCarPrograme___c__Update_b__14_1___12e9958);
    native_sub_43273c(&Method_ControllerCarPrograme___c__Update_b__14_2___12e9960);
    native_sub_43273c(&ControllerCarPrograme___c_TypeInfo_12d71a0);
    native_sub_43273c(&StringLiteral_back_12f3b50);
    native_sub_43273c(&StringLiteral_left_12f5408);
    native_sub_43273c(&StringLiteral_right_12f5e78);
    native_sub_43273c(&StringLiteral_forward_12f4898);
    native_sub_43273c(&StringLiteral__12eaac0);
    bRam0000000001346ee0 = 1;
  }
  if (((*(byte *)(_PanelMainUIController_TypeInfo_12d5600 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_PanelMainUIController_TypeInfo_12d5600 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  if (*(char *)(*(long *)(_PanelMainUIController_TypeInfo_12d5600 + 0xb8) + 0x20) == '\0') {
    return;
  }
  lVar2 = native_sub_432750(_byte___TypeInfo_12d3060,10);
  plVar9 = (long *)(param_1 + 0x28);
  *plVar9 = lVar2;
  native_sub_4326e0(plVar9,lVar2);
  if (((*(byte *)(_PanelMainUIController_TypeInfo_12d5600 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_PanelMainUIController_TypeInfo_12d5600 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  lVar2 = *(long *)(*(long *)(_PanelMainUIController_TypeInfo_12d5600 + 0xb8) + 0x28);
  if (lVar2 == 0) goto LAB_00dec8a0;
  uVar3 = native_System_String__Equals_af8bfc(lVar2,_StringLiteral__12eaac0,0);
  if ((uVar3 & 1) == 0) {
    if (((*(byte *)(_PanelMainUIController_TypeInfo_12d5600 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_PanelMainUIController_TypeInfo_12d5600 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    lVar2 = *(long *)(*(long *)(_PanelMainUIController_TypeInfo_12d5600 + 0xb8) + 0x28);
    if (lVar2 == 0) goto LAB_00dec8a0;
    uVar3 = native_System_String__Equals_af8bfc(lVar2,_StringLiteral_forward_12f4898,0);
    if ((uVar3 & 1) == 0) {
      if (((*(byte *)(_PanelMainUIController_TypeInfo_12d5600 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_PanelMainUIController_TypeInfo_12d5600 + 0xe0) == 0)) {
        native_sub_4327ec();
      }
      lVar2 = *(long *)(*(long *)(_PanelMainUIController_TypeInfo_12d5600 + 0xb8) + 0x28);
      if (lVar2 == 0) goto LAB_00dec8a0;
      uVar3 = native_System_String__Equals_af8bfc(lVar2,_StringLiteral_back_12f3b50,0);
      if ((uVar3 & 1) == 0) {
        if (((*(byte *)(_PanelMainUIController_TypeInfo_12d5600 + 0x133) >> 2 & 1) != 0) &&
           (*(int *)(_PanelMainUIController_TypeInfo_12d5600 + 0xe0) == 0)) {
          native_sub_4327ec();
        }
        lVar2 = *(long *)(*(long *)(_PanelMainUIController_TypeInfo_12d5600 + 0xb8) + 0x28);
        if (lVar2 == 0) goto LAB_00dec8a0;
        uVar3 = native_System_String__Equals_af8bfc(lVar2,_StringLiteral_left_12f5408,0);
        if ((uVar3 & 1) == 0) {
          if (((*(byte *)(_PanelMainUIController_TypeInfo_12d5600 + 0x133) >> 2 & 1) != 0) &&
             (*(int *)(_PanelMainUIController_TypeInfo_12d5600 + 0xe0) == 0)) {
            native_sub_4327ec();
          }
          lVar2 = *(long *)(*(long *)(_PanelMainUIController_TypeInfo_12d5600 + 0xb8) + 0x28);
          if (lVar2 == 0) goto LAB_00dec8a0;
          uVar3 = native_System_String__Equals_af8bfc(lVar2,_StringLiteral_right_12f5e78,0);
          if ((uVar3 & 1) == 0) goto LAB_00dec084;
          uVar10 = native_Assets_Scripts_Tools_HjdBleTool__setIntegerSomeBit_7f7068(0,0,1,0);
          uVar4 = 3;
        }
        else {
          uVar10 = native_Assets_Scripts_Tools_HjdBleTool__setIntegerSomeBit_7f7068(0,0,1,0);
          uVar4 = 2;
        }
      }
      else {
        uVar4 = 1;
        uVar10 = 0;
      }
    }
    else {
      uVar10 = 0;
      uVar4 = 0;
    }
    uVar1 = native_Assets_Scripts_Tools_HjdBleTool__setIntegerSomeBit_7f7068(uVar10,uVar4,1,0);
  }
  else {
LAB_00dec084:
    uVar1 = 0;
  }
  if (*(int *)(param_1 + 0x40) == 0) {
    *(undefined4 *)(param_1 + 0x40) = 0xc;
    iVar7 = 1;
    if (*(int *)(param_1 + 0x3c) + 1 < 0xfb) {
      iVar7 = *(int *)(param_1 + 0x3c) + 1;
    }
    *(int *)(param_1 + 0x3c) = iVar7;
  }
  else {
    iVar7 = *(int *)(param_1 + 0x3c);
  }
  lVar2 = *plVar9;
  if (lVar2 != 0) {
    if (*(int *)(lVar2 + 0x18) != 0) {
      *(undefined1 *)(lVar2 + 0x20) = uVar1;
      lVar2 = *plVar9;
      if (lVar2 == 0) goto LAB_00dec8a0;
      if (1 < *(uint *)(lVar2 + 0x18)) {
        *(undefined1 *)(lVar2 + 0x21) = 0;
        lVar2 = *plVar9;
        if (lVar2 == 0) goto LAB_00dec8a0;
        if (2 < *(uint *)(lVar2 + 0x18)) {
          *(undefined1 *)(lVar2 + 0x22) = 100;
          lVar2 = *plVar9;
          if (lVar2 == 0) goto LAB_00dec8a0;
          if (3 < *(uint *)(lVar2 + 0x18)) {
            *(undefined1 *)(lVar2 + 0x23) = 100;
            lVar2 = *plVar9;
            if (lVar2 == 0) goto LAB_00dec8a0;
            if (4 < *(uint *)(lVar2 + 0x18)) {
              *(undefined1 *)(lVar2 + 0x24) = 0;
              lVar2 = *plVar9;
              if (lVar2 == 0) goto LAB_00dec8a0;
              if (5 < *(uint *)(lVar2 + 0x18)) {
                *(undefined1 *)(lVar2 + 0x25) = 0;
                lVar2 = *plVar9;
                if (lVar2 == 0) goto LAB_00dec8a0;
                if (6 < *(uint *)(lVar2 + 0x18)) {
                  *(char *)(lVar2 + 0x26) = (char)iVar7;
                  uVar3 = native_Assets_Scripts_Tools_HjdBleTool__data_isalike_7f6e28
                                    (*(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x30)
                                     ,0);
                  if (((uVar3 & 1) != 0) || (*(int *)(param_1 + 0x38) != 0)) {
LAB_00dec5b0:
                    if (*(char *)(param_1 + 0x1d) != '\0') {
                      *(undefined1 *)(param_1 + 0x1d) = 0;
                      if (((*(byte *)(_ControllerCarPrograme___c_TypeInfo_12d71a0 + 0x133) >> 2 & 1)
                           != 0) &&
                         (*(int *)(_ControllerCarPrograme___c_TypeInfo_12d71a0 + 0xe0) == 0)) {
                        native_sub_4327ec();
                      }
                      puVar6 = *(undefined8 **)(_ControllerCarPrograme___c_TypeInfo_12d71a0 + 0xb8);
                      lVar2 = puVar6[1];
                      if (lVar2 == 0) {
                        if (((*(byte *)(_ControllerCarPrograme___c_TypeInfo_12d71a0 + 0x133) >> 2 &
                             1) != 0) &&
                           (*(int *)(_ControllerCarPrograme___c_TypeInfo_12d71a0 + 0xe0) == 0)) {
                          native_sub_4327ec();
                          puVar6 = *(undefined8 **)
                                    (_ControllerCarPrograme___c_TypeInfo_12d71a0 + 0xb8);
                        }
                        uVar10 = *puVar6;
                        lVar2 = native_sub_432808(_System_Action_string__TypeInfo_12d2080);
                        native_System_Action_Font____ctor_9867a8
                                  (lVar2,uVar10,
                                   _Method_ControllerCarPrograme___c__Update_b__14_0___12e9950,
                                   _Method_System_Action_string___ctor___12d7fe8);
                        plVar9 = (long *)(*(long *)(_ControllerCarPrograme___c_TypeInfo_12d71a0 +
                                                   0xb8) + 8);
                        *plVar9 = lVar2;
                        native_sub_4326e0(plVar9,lVar2);
                      }
                      if (((*(byte *)(_HjdBluetoothHardwareInterface_TypeInfo_12d4938 + 0x133) >> 2
                           & 1) != 0) &&
                         (*(int *)(_HjdBluetoothHardwareInterface_TypeInfo_12d4938 + 0xe0) == 0)) {
                        native_sub_4327ec();
                      }
                      native_HjdBluetoothHardwareInterface__StopAdvertising_dc423c(lVar2,0);
                      if (((*(byte *)(_ControllerCarPrograme___c_TypeInfo_12d71a0 + 0x133) >> 2 & 1)
                           != 0) &&
                         (*(int *)(_ControllerCarPrograme___c_TypeInfo_12d71a0 + 0xe0) == 0)) {
                        native_sub_4327ec();
                      }
                      puVar6 = *(undefined8 **)(_ControllerCarPrograme___c_TypeInfo_12d71a0 + 0xb8);
                      lVar2 = puVar6[2];
                      if (lVar2 == 0) {
                        if (((*(byte *)(_ControllerCarPrograme___c_TypeInfo_12d71a0 + 0x133) >> 2 &
                             1) != 0) &&
                           (*(int *)(_ControllerCarPrograme___c_TypeInfo_12d71a0 + 0xe0) == 0)) {
                          native_sub_4327ec();
                          puVar6 = *(undefined8 **)
                                    (_ControllerCarPrograme___c_TypeInfo_12d71a0 + 0xb8);
                        }
                        uVar10 = *puVar6;
                        lVar2 = native_sub_432808(_System_Action_string__TypeInfo_12d2080);
                        native_System_Action_Font____ctor_9867a8
                                  (lVar2,uVar10,
                                   _Method_ControllerCarPrograme___c__Update_b__14_1___12e9958,
                                   _Method_System_Action_string___ctor___12d7fe8);
                        plVar9 = (long *)(*(long *)(_ControllerCarPrograme___c_TypeInfo_12d71a0 +
                                                   0xb8) + 0x10);
                        *plVar9 = lVar2;
                        native_sub_4326e0(plVar9,lVar2);
                      }
                      uVar10 = *(undefined8 *)(param_1 + 0x20);
                      if (((*(byte *)(_HjdBluetoothHardwareInterface_TypeInfo_12d4938 + 0x133) >> 2
                           & 1) != 0) &&
                         (*(int *)(_HjdBluetoothHardwareInterface_TypeInfo_12d4938 + 0xe0) == 0)) {
                        native_sub_4327ec();
                      }
                      native_HjdBluetoothHardwareInterface__StartAdvertising_dc4054(lVar2,uVar10,0);
                      if (((*(byte *)(_ControllerCarPrograme___c_TypeInfo_12d71a0 + 0x133) >> 2 & 1)
                           != 0) &&
                         (*(int *)(_ControllerCarPrograme___c_TypeInfo_12d71a0 + 0xe0) == 0)) {
                        native_sub_4327ec();
                      }
                      puVar6 = *(undefined8 **)(_ControllerCarPrograme___c_TypeInfo_12d71a0 + 0xb8);
                      lVar2 = puVar6[3];
                      if (lVar2 == 0) {
                        if (((*(byte *)(_ControllerCarPrograme___c_TypeInfo_12d71a0 + 0x133) >> 2 &
                             1) != 0) &&
                           (*(int *)(_ControllerCarPrograme___c_TypeInfo_12d71a0 + 0xe0) == 0)) {
                          native_sub_4327ec();
                          puVar6 = *(undefined8 **)
                                    (_ControllerCarPrograme___c_TypeInfo_12d71a0 + 0xb8);
                        }
                        uVar10 = *puVar6;
                        lVar2 = native_sub_432808(_System_Action_string__TypeInfo_12d2080);
                        native_System_Action_Font____ctor_9867a8
                                  (lVar2,uVar10,
                                   _Method_ControllerCarPrograme___c__Update_b__14_2___12e9960,
                                   _Method_System_Action_string___ctor___12d7fe8);
                        plVar9 = (long *)(*(long *)(_ControllerCarPrograme___c_TypeInfo_12d71a0 +
                                                   0xb8) + 0x18);
                        *plVar9 = lVar2;
                        native_sub_4326e0(plVar9,lVar2);
                      }
                      uVar10 = *(undefined8 *)(param_1 + 0x20);
                      if (((*(byte *)(_HjdBluetoothHardwareInterface_TypeInfo_12d4938 + 0x133) >> 2
                           & 1) != 0) &&
                         (*(int *)(_HjdBluetoothHardwareInterface_TypeInfo_12d4938 + 0xe0) == 0)) {
                        native_sub_4327ec();
                      }
                      native_HjdBluetoothHardwareInterface__StartAdvertising_dc4054(lVar2,uVar10,0);
                    }
                    lVar2 = native_ControllerCarPrograme__gethaomiao_dec8b0();
                    if (((*(byte *)(_ControllerCarPrograme_TypeInfo_12d3fc8 + 0x133) >> 2 & 1) != 0)
                       && (*(int *)(_ControllerCarPrograme_TypeInfo_12d3fc8 + 0xe0) == 0)) {
                      native_sub_4327ec(_ControllerCarPrograme_TypeInfo_12d3fc8);
                    }
                    if (0x31 < lVar2 - **(long **)(_ControllerCarPrograme_TypeInfo_12d3fc8 + 0xb8))
                    {
                      uVar10 = native_ControllerCarPrograme__gethaomiao_dec8b0();
                      if (((*(byte *)(_ControllerCarPrograme_TypeInfo_12d3fc8 + 0x133) >> 2 & 1) !=
                           0) && (*(int *)(_ControllerCarPrograme_TypeInfo_12d3fc8 + 0xe0) == 0)) {
                        native_sub_4327ec(_ControllerCarPrograme_TypeInfo_12d3fc8);
                      }
                      **(undefined8 **)(_ControllerCarPrograme_TypeInfo_12d3fc8 + 0xb8) = uVar10;
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
                  lVar2 = native_sub_432750(_byte___TypeInfo_12d3060,0x13);
                  if (lVar2 == 0) goto LAB_00dec8a0;
                  if ((*(int *)(lVar2 + 0x18) != 0) &&
                     (*(undefined1 *)(lVar2 + 0x20) = *(undefined1 *)(param_1 + 0x18),
                     *(int *)(lVar2 + 0x18) != 1)) {
                    *(undefined1 *)(lVar2 + 0x21) = *(undefined1 *)(param_1 + 0x1a);
                    if (((*(byte *)(_PanelMainUIController_TypeInfo_12d5600 + 0x133) >> 2 & 1) != 0)
                       && (*(int *)(_PanelMainUIController_TypeInfo_12d5600 + 0xe0) == 0)) {
                      native_sub_4327ec();
                    }
                    lVar8 = *(long *)(*(long *)(_PanelMainUIController_TypeInfo_12d5600 + 0xb8) +
                                     0x18);
                    if (lVar8 == 0) goto LAB_00dec8a0;
                    if ((*(int *)(lVar8 + 0x18) != 0) &&
                       (uVar5 = (uint)*(undefined8 *)(lVar2 + 0x18), 2 < uVar5)) {
                      *(undefined1 *)(lVar2 + 0x22) = *(undefined1 *)(lVar8 + 0x20);
                      lVar8 = *(long *)(*(long *)(_PanelMainUIController_TypeInfo_12d5600 + 0xb8) +
                                       0x18);
                      if (lVar8 == 0) goto LAB_00dec8a0;
                      if ((1 < *(uint *)(lVar8 + 0x18)) && (3 < uVar5)) {
                        *(undefined1 *)(lVar2 + 0x23) = *(undefined1 *)(lVar8 + 0x21);
                        lVar8 = *(long *)(*(long *)(_PanelMainUIController_TypeInfo_12d5600 + 0xb8)
                                         + 0x18);
                        if (lVar8 == 0) goto LAB_00dec8a0;
                        if ((2 < *(uint *)(lVar8 + 0x18)) && (4 < uVar5)) {
                          *(undefined1 *)(lVar2 + 0x24) = *(undefined1 *)(lVar8 + 0x22);
                          if (((*(byte *)(_HjdBluetoothHardwareInterface_TypeInfo_12d4938 + 0x133)
                                >> 2 & 1) != 0) &&
                             (*(int *)(_HjdBluetoothHardwareInterface_TypeInfo_12d4938 + 0xe0) == 0)
                             ) {
                            native_sub_4327ec();
                            uVar5 = (uint)*(undefined8 *)(lVar2 + 0x18);
                          }
                          if (((5 < uVar5) &&
                              (*(undefined1 *)(lVar2 + 0x25) =
                                    *(undefined1 *)
                                     (*(long *)(_HjdBluetoothHardwareInterface_TypeInfo_12d4938 +
                                               0xb8) + 0x12), uVar5 != 6)) &&
                             (*(undefined1 *)(lVar2 + 0x26) =
                                   *(undefined1 *)
                                    (*(long *)(_HjdBluetoothHardwareInterface_TypeInfo_12d4938 +
                                              0xb8) + 0x13), 7 < uVar5)) {
                            *(undefined1 *)(lVar2 + 0x27) =
                                 *(undefined1 *)
                                  (*(long *)(_HjdBluetoothHardwareInterface_TypeInfo_12d4938 + 0xb8)
                                  + 0x14);
                            lVar8 = *plVar9;
                            if (lVar8 == 0) goto LAB_00dec8a0;
                            if ((*(int *)(lVar8 + 0x18) != 0) && (8 < uVar5)) {
                              *(undefined1 *)(lVar2 + 0x28) = *(undefined1 *)(lVar8 + 0x20);
                              lVar8 = *plVar9;
                              if (lVar8 == 0) goto LAB_00dec8a0;
                              if ((1 < *(uint *)(lVar8 + 0x18)) && (9 < uVar5)) {
                                *(undefined1 *)(lVar2 + 0x29) = *(undefined1 *)(lVar8 + 0x21);
                                lVar8 = *plVar9;
                                if (lVar8 == 0) goto LAB_00dec8a0;
                                if ((2 < *(uint *)(lVar8 + 0x18)) && (10 < uVar5)) {
                                  *(undefined1 *)(lVar2 + 0x2a) = *(undefined1 *)(lVar8 + 0x22);
                                  lVar8 = *plVar9;
                                  if (lVar8 == 0) goto LAB_00dec8a0;
                                  if ((3 < *(uint *)(lVar8 + 0x18)) && (0xb < uVar5)) {
                                    *(undefined1 *)(lVar2 + 0x2b) = *(undefined1 *)(lVar8 + 0x23);
                                    lVar8 = *plVar9;
                                    if (lVar8 == 0) goto LAB_00dec8a0;
                                    if ((4 < *(uint *)(lVar8 + 0x18)) && (0xc < uVar5)) {
                                      *(undefined1 *)(lVar2 + 0x2c) = *(undefined1 *)(lVar8 + 0x24);
                                      lVar8 = *plVar9;
                                      if (lVar8 == 0) goto LAB_00dec8a0;
                                      if ((5 < *(uint *)(lVar8 + 0x18)) && (0xd < uVar5)) {
                                        *(undefined1 *)(lVar2 + 0x2d) =
                                             *(undefined1 *)(lVar8 + 0x25);
                                        lVar8 = *plVar9;
                                        if (lVar8 == 0) goto LAB_00dec8a0;
                                        if ((6 < *(uint *)(lVar8 + 0x18)) && (0xe < uVar5)) {
                                          *(undefined1 *)(lVar2 + 0x2e) =
                                               *(undefined1 *)(lVar8 + 0x26);
                                          lVar8 = *plVar9;
                                          if (lVar8 == 0) goto LAB_00dec8a0;
                                          if ((7 < *(uint *)(lVar8 + 0x18)) && (0xf < uVar5)) {
                                            *(undefined1 *)(lVar2 + 0x2f) =
                                                 *(undefined1 *)(lVar8 + 0x27);
                                            lVar8 = *plVar9;
                                            if (lVar8 == 0) goto LAB_00dec8a0;
                                            if ((8 < *(uint *)(lVar8 + 0x18)) && (0x10 < uVar5)) {
                                              *(undefined1 *)(lVar2 + 0x30) =
                                                   *(undefined1 *)(lVar8 + 0x28);
                                              lVar8 = *plVar9;
                                              if (lVar8 == 0) goto LAB_00dec8a0;
                                              if ((9 < *(uint *)(lVar8 + 0x18)) && (0x11 < uVar5)) {
                                                *(undefined1 *)(lVar2 + 0x31) =
                                                     *(undefined1 *)(lVar8 + 0x29);
                                                *(long *)(param_1 + 0x20) = lVar2;
                                                native_sub_4326e0((long *)(param_1 + 0x20),lVar2);
                                                *(undefined1 *)(param_1 + 0x1d) = 1;
                                                *(undefined4 *)(param_1 + 0x38) = 3;
                                                goto LAB_00dec5b0;
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
    uVar10 = native_sub_43283c();
                    /* WARNING: Subroutine does not return */
    native_sub_4327dc(uVar10,0);
  }
LAB_00dec8a0:
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* ControllerCarPrograme$$gethaomiao @ 0xdec8b0
 * int64_t ControllerCarPrograme__gethaomiao (ControllerCarPrograme_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ControllerCarPrograme$$gethaomiao
   int64_t ControllerCarPrograme__gethaomiao (ControllerCarPrograme_o* __this, const MethodInfo*
   method); */

long native_ControllerCarPrograme__gethaomiao_dec8b0(void)

{
  long lVar1;
  undefined8 uStack_18;
  
  if ((bRam0000000001346ee1 & 1) == 0) {
    native_sub_43273c(&System_DateTime_TypeInfo_12d42f8);
    bRam0000000001346ee1 = 1;
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



/* ControllerCarPrograme$$.ctor @ 0xdec964
 * void ControllerCarPrograme___ctor (ControllerCarPrograme_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ControllerCarPrograme$$.ctor
   void ControllerCarPrograme___ctor (ControllerCarPrograme_o* __this, const MethodInfo* method); */

undefined1  [16] native_ControllerCarPrograme___ctor_dec964(ulong param_1)

{
  undefined8 uVar1;
  undefined1 auVar2 [16];
  
  if ((bRam0000000001346ee2 & 1) == 0) {
    native_sub_43273c(&byte___TypeInfo_12d3060);
    bRam0000000001346ee2 = 1;
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



/* ControllerCarPrograme$$.cctor @ 0xdeca20
 * void ControllerCarPrograme___cctor (const MethodInfo* method); */

/* ControllerCarPrograme$$.cctor
   void ControllerCarPrograme___cctor (const MethodInfo* method); */

void native_ControllerCarPrograme___cctor_deca20(void)

{
  return;
}


