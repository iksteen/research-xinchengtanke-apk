/* ARM64 IL2CPP native pseudocode from Ghidra.
 * Recovered implementation, not original C# source.
 * Function boundaries follow the IL2CPP method address table. */


/* ContainerBeforeSelectUIController$$Start @ 0xdd6db8
 * void ContainerBeforeSelectUIController__Start (ContainerBeforeSelectUIController_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ContainerBeforeSelectUIController$$Start
   void ContainerBeforeSelectUIController__Start (ContainerBeforeSelectUIController_o* __this, const
   MethodInfo* method); */

void native_ContainerBeforeSelectUIController__Start_dd6db8(long param_1)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  long lVar5;
  ulong uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  uint uVar9;
  long lVar10;
  
  if ((bRam0000000001346e55 & 1) == 0) {
    native_sub_43273c(&PanelMainUIController_TypeInfo_12d5600);
    native_sub_43273c(&StringLiteral__12eaac0);
    bRam0000000001346e55 = 1;
  }
  native_ContainerBeforeSelectUIController__InitBluethood_dd6e94();
  if (((*(byte *)(_PanelMainUIController_TypeInfo_12d5600 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_PanelMainUIController_TypeInfo_12d5600 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  lVar5 = *(long *)(*(long *)(_PanelMainUIController_TypeInfo_12d5600 + 0xb8) + 0x10);
  if (lVar5 != 0) {
    uVar6 = native_System_String__Equals_af8bfc(lVar5,_StringLiteral__12eaac0,0);
    if ((uVar6 & 1) != 0) {
      if ((bRam0000000001346e56 & 1) == 0) {
        native_sub_43273c(&EventDelegate_Callback_TypeInfo_12d72e8);
        native_sub_43273c(&Method_ContainerBeforeSelectUIController_OnClickButtonBeforeCN___12e2fd0)
        ;
        native_sub_43273c(&Method_ContainerBeforeSelectUIController_OnClickButtonBeforeEN___12e2fd8)
        ;
        native_sub_43273c(&
                          Method_ContainerBeforeSelectUIController_OnClickButtonBeforeSysout___12e2fe0
                         );
        native_sub_43273c(&EventDelegate_TypeInfo_12d4590);
        native_sub_43273c(&Method_UnityEngine_GameObject_GetComponent_UIButton____12e4a88);
        native_sub_43273c(&Method_System_Collections_Generic_List_EventDelegate__Add___12dc740);
        bRam0000000001346e56 = 1;
      }
      if (*(long *)(param_1 + 0x18) != 0) {
        lVar5 = native_UnityEngine_GameObject__GetComponent_BE2_BlockSectionHeader_Custom__4a2214
                          (*(long *)(param_1 + 0x18),
                           _Method_UnityEngine_GameObject_GetComponent_UIButton____12e4a88);
        if (lVar5 != 0) {
          lVar5 = *(long *)(lVar5 + 0xc0);
          uVar7 = native_sub_432808(_EventDelegate_Callback_TypeInfo_12d72e8);
          native_EventDelegate_Callback___ctor_54bd18
                    (uVar7,param_1,
                     _Method_ContainerBeforeSelectUIController_OnClickButtonBeforeCN___12e2fd0,0);
          uVar8 = native_sub_432808(_EventDelegate_TypeInfo_12d4590);
          native_EventDelegate___ctor_de0bd0(uVar8,uVar7,0);
          if (lVar5 != 0) {
            native_System_Collections_Generic_List_int_____Add_d40c00
                      (lVar5,uVar8,
                       _Method_System_Collections_Generic_List_EventDelegate__Add___12dc740);
            if ((*(long *)(param_1 + 0x20) != 0) &&
               (lVar5 = native_UnityEngine_GameObject__GetComponent_BE2_BlockSectionHeader_Custom__4a2214
                                  (*(long *)(param_1 + 0x20),
                                   _Method_UnityEngine_GameObject_GetComponent_UIButton____12e4a88),
               lVar5 != 0)) {
              lVar5 = *(long *)(lVar5 + 0xc0);
              uVar7 = native_sub_432808(_EventDelegate_Callback_TypeInfo_12d72e8);
              native_EventDelegate_Callback___ctor_54bd18
                        (uVar7,param_1,
                         _Method_ContainerBeforeSelectUIController_OnClickButtonBeforeEN___12e2fd8,0
                        );
              uVar8 = native_sub_432808(_EventDelegate_TypeInfo_12d4590);
              native_EventDelegate___ctor_de0bd0(uVar8,uVar7,0);
              if (lVar5 != 0) {
                native_System_Collections_Generic_List_int_____Add_d40c00
                          (lVar5,uVar8,
                           _Method_System_Collections_Generic_List_EventDelegate__Add___12dc740);
                if ((*(long *)(param_1 + 0x28) != 0) &&
                   (lVar5 = native_UnityEngine_GameObject__GetComponent_BE2_BlockSectionHeader_Custom__4a2214
                                      (*(long *)(param_1 + 0x28),
                                       _Method_UnityEngine_GameObject_GetComponent_UIButton____12e4a88
                                      ), lVar5 != 0)) {
                  lVar5 = *(long *)(lVar5 + 0xc0);
                  uVar7 = native_sub_432808(_EventDelegate_Callback_TypeInfo_12d72e8);
                  native_EventDelegate_Callback___ctor_54bd18
                            (uVar7,param_1,
                             _Method_ContainerBeforeSelectUIController_OnClickButtonBeforeSysout___12e2fe0
                             ,0);
                  uVar8 = native_sub_432808(_EventDelegate_TypeInfo_12d4590);
                  native_EventDelegate___ctor_de0bd0(uVar8,uVar7,0);
                  if (lVar5 != 0) {
                    lVar10 = *(long *)(lVar5 + 0x10);
                    if (lVar10 != 0) {
                      uVar9 = *(uint *)(lVar5 + 0x18);
                      if (uVar9 == *(uint *)(lVar10 + 0x18)) {
                        (*(code *)**(undefined8 **)
                                    (*(long *)(*(long *)(
                                                  _Method_System_Collections_Generic_List_EventDelegate__Add___12dc740
                                                  + 0x18) + 0xc0) + 0x60))(lVar5,uVar9 + 1);
                        uVar9 = *(uint *)(lVar5 + 0x18);
                        lVar10 = *(long *)(lVar5 + 0x10);
                        *(uint *)(lVar5 + 0x18) = uVar9 + 1;
                        if (lVar10 == 0) goto code_r0x00d40c5c;
                      }
                      else {
                        *(uint *)(lVar5 + 0x18) = uVar9 + 1;
                      }
                      if (uVar9 < *(uint *)(lVar10 + 0x18)) {
                        puVar4 = (undefined8 *)(lVar10 + (long)(int)uVar9 * 8 + 0x20);
                        *puVar4 = uVar8;
                        native_sub_4326e0(puVar4,uVar8);
                        *(int *)(lVar5 + 0x1c) = *(int *)(lVar5 + 0x1c) + 1;
                        return;
                      }
                      uVar7 = native_sub_43283c();
                    /* WARNING: Subroutine does not return */
                      native_sub_4327dc(uVar7,0);
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
                    /* WARNING: Subroutine does not return */
      native_sub_432810();
    }
    if (((*(byte *)(_PanelMainUIController_TypeInfo_12d5600 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_PanelMainUIController_TypeInfo_12d5600 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    lVar5 = native_PanelMainUIController__get_Instance_738fb0(0);
    if (lVar5 != 0) {
      uVar7 = *(undefined8 *)(*(long *)(_PanelMainUIController_TypeInfo_12d5600 + 0xb8) + 0x10);
      if ((bRam000000000133f5f5 & 1) == 0) {
        native_sub_43273c(&PanelMainUIController_TypeInfo_12d5600,uVar7,0);
        native_sub_43273c(&StringLiteral__12eaac0);
        bRam000000000133f5f5 = 1;
      }
      native_PanelMainUIController__CleanAllUI_73954c(lVar5);
      native_PanelMainUIController__AddUI_73944c(lVar5,2,uVar7);
      if (((*(byte *)(_PanelMainUIController_TypeInfo_12d5600 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_PanelMainUIController_TypeInfo_12d5600 + 0xe0) == 0)) {
        native_sub_4327ec();
      }
      puVar4 = (undefined8 *)(*(long *)(_PanelMainUIController_TypeInfo_12d5600 + 0xb8) + 0x10);
      *puVar4 = _StringLiteral__12eaac0;
      if (iRam0000000001345318 != 0) {
        puVar1 = (ulong *)(((ulong)puVar4 >> 0x12 & 0x7fff) * 8 + 0x138ecd8);
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar3) {
            *puVar1 = *puVar1 | 1L << ((ulong)puVar4 >> 0xc & 0x3f);
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



/* ContainerBeforeSelectUIController$$InitButtonEvent @ 0xdd70b8
 * void ContainerBeforeSelectUIController__InitButtonEvent (ContainerBeforeSelectUIController_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ContainerBeforeSelectUIController$$InitButtonEvent
   void ContainerBeforeSelectUIController__InitButtonEvent (ContainerBeforeSelectUIController_o*
   __this, const MethodInfo* method); */

void native_ContainerBeforeSelectUIController__InitButtonEvent_dd70b8(long param_1)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  uint uVar5;
  long lVar6;
  
  if ((bRam0000000001346e56 & 1) == 0) {
    native_sub_43273c(&EventDelegate_Callback_TypeInfo_12d72e8);
    native_sub_43273c(&Method_ContainerBeforeSelectUIController_OnClickButtonBeforeCN___12e2fd0);
    native_sub_43273c(&Method_ContainerBeforeSelectUIController_OnClickButtonBeforeEN___12e2fd8);
    native_sub_43273c(&Method_ContainerBeforeSelectUIController_OnClickButtonBeforeSysout___12e2fe0)
    ;
    native_sub_43273c(&EventDelegate_TypeInfo_12d4590);
    native_sub_43273c(&Method_UnityEngine_GameObject_GetComponent_UIButton____12e4a88);
    native_sub_43273c(&Method_System_Collections_Generic_List_EventDelegate__Add___12dc740);
    bRam0000000001346e56 = 1;
  }
  if (*(long *)(param_1 + 0x18) != 0) {
    lVar2 = native_UnityEngine_GameObject__GetComponent_BE2_BlockSectionHeader_Custom__4a2214
                      (*(long *)(param_1 + 0x18),
                       _Method_UnityEngine_GameObject_GetComponent_UIButton____12e4a88);
    if (lVar2 != 0) {
      lVar2 = *(long *)(lVar2 + 0xc0);
      uVar3 = native_sub_432808(_EventDelegate_Callback_TypeInfo_12d72e8);
      native_EventDelegate_Callback___ctor_54bd18
                (uVar3,param_1,
                 _Method_ContainerBeforeSelectUIController_OnClickButtonBeforeCN___12e2fd0,0);
      uVar4 = native_sub_432808(_EventDelegate_TypeInfo_12d4590);
      native_EventDelegate___ctor_de0bd0(uVar4,uVar3,0);
      if (lVar2 != 0) {
        native_System_Collections_Generic_List_int_____Add_d40c00
                  (lVar2,uVar4,_Method_System_Collections_Generic_List_EventDelegate__Add___12dc740)
        ;
        if ((*(long *)(param_1 + 0x20) != 0) &&
           (lVar2 = native_UnityEngine_GameObject__GetComponent_BE2_BlockSectionHeader_Custom__4a2214
                              (*(long *)(param_1 + 0x20),
                               _Method_UnityEngine_GameObject_GetComponent_UIButton____12e4a88),
           lVar2 != 0)) {
          lVar2 = *(long *)(lVar2 + 0xc0);
          uVar3 = native_sub_432808(_EventDelegate_Callback_TypeInfo_12d72e8);
          native_EventDelegate_Callback___ctor_54bd18
                    (uVar3,param_1,
                     _Method_ContainerBeforeSelectUIController_OnClickButtonBeforeEN___12e2fd8,0);
          uVar4 = native_sub_432808(_EventDelegate_TypeInfo_12d4590);
          native_EventDelegate___ctor_de0bd0(uVar4,uVar3,0);
          if (lVar2 != 0) {
            native_System_Collections_Generic_List_int_____Add_d40c00
                      (lVar2,uVar4,
                       _Method_System_Collections_Generic_List_EventDelegate__Add___12dc740);
            if ((*(long *)(param_1 + 0x28) != 0) &&
               (lVar2 = native_UnityEngine_GameObject__GetComponent_BE2_BlockSectionHeader_Custom__4a2214
                                  (*(long *)(param_1 + 0x28),
                                   _Method_UnityEngine_GameObject_GetComponent_UIButton____12e4a88),
               lVar2 != 0)) {
              lVar2 = *(long *)(lVar2 + 0xc0);
              uVar3 = native_sub_432808(_EventDelegate_Callback_TypeInfo_12d72e8);
              native_EventDelegate_Callback___ctor_54bd18
                        (uVar3,param_1,
                         _Method_ContainerBeforeSelectUIController_OnClickButtonBeforeSysout___12e2fe0
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
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* ContainerBeforeSelectUIController$$OnClickButtonBeforeCN @ 0xdd72ac
 * void ContainerBeforeSelectUIController__OnClickButtonBeforeCN (ContainerBeforeSelectUIController_o* __this, const MethodInfo* method); */

/* WARNING: Removing unreachable block (ram,0x0072f0b0) */
/* WARNING: Removing unreachable block (ram,0x007394ec) */
/* WARNING: Removing unreachable block (ram,0x0072f0b8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ContainerBeforeSelectUIController$$OnClickButtonBeforeCN
   void ContainerBeforeSelectUIController__OnClickButtonBeforeCN
   (ContainerBeforeSelectUIController_o* __this, const MethodInfo* method); */

long native_ContainerBeforeSelectUIController__OnClickButtonBeforeCN_dd72ac(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  
  if ((bRam0000000001346e57 & 1) == 0) {
    native_sub_43273c(&PanelMainUIController_TypeInfo_12d5600);
    native_sub_43273c(&StringLiteral__________12f74a8);
    native_sub_43273c(&StringLiteral___________12f74f8);
    native_sub_43273c(&StringLiteral______________12f7470);
    native_sub_43273c(&StringLiteral______________App_12f7518);
    native_sub_43273c(&StringLiteral__________12f7460);
    native_sub_43273c(&StringLiteral___________12f74f0);
    native_sub_43273c(&StringLiteral______________12f7468);
    native_sub_43273c(&StringLiteral__________12f74a0);
    bRam0000000001346e57 = 1;
  }
  if (((*(byte *)(_PanelMainUIController_TypeInfo_12d5600 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_PanelMainUIController_TypeInfo_12d5600 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  lVar7 = _PanelMainUIController_TypeInfo_12d5600;
  *(undefined1 *)(*(long *)(_PanelMainUIController_TypeInfo_12d5600 + 0xb8) + 0xbc) = 0;
  *(undefined8 *)(*(long *)(lVar7 + 0xb8) + 0xc0) = _StringLiteral__________12f7460;
  native_sub_4326e0();
  *(undefined8 *)(*(long *)(_PanelMainUIController_TypeInfo_12d5600 + 0xb8) + 200) =
       _StringLiteral___________12f74f8;
  native_sub_4326e0();
  *(undefined8 *)(*(long *)(_PanelMainUIController_TypeInfo_12d5600 + 0xb8) + 0xd0) =
       _StringLiteral___________12f74f0;
  native_sub_4326e0();
  *(undefined8 *)(*(long *)(_PanelMainUIController_TypeInfo_12d5600 + 0xb8) + 0xd8) =
       _StringLiteral______________12f7468;
  native_sub_4326e0();
  *(undefined8 *)(*(long *)(_PanelMainUIController_TypeInfo_12d5600 + 0xb8) + 0xe0) =
       _StringLiteral______________12f7470;
  native_sub_4326e0();
  *(undefined8 *)(*(long *)(_PanelMainUIController_TypeInfo_12d5600 + 0xb8) + 0xe8) =
       _StringLiteral__________12f74a8;
  native_sub_4326e0();
  *(undefined8 *)(*(long *)(_PanelMainUIController_TypeInfo_12d5600 + 0xb8) + 0xf0) =
       _StringLiteral__________12f74a0;
  native_sub_4326e0();
  *(undefined8 *)(*(long *)(_PanelMainUIController_TypeInfo_12d5600 + 0xb8) + 0xf8) =
       _StringLiteral______________App_12f7518;
  native_sub_4326e0();
  lVar7 = native_PanelMainUIController__get_Instance_738fb0(0);
  if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
    native_sub_432810();
  }
  if ((bRam000000000133f5ec & 1) == 0) {
    native_sub_43273c(&StringLiteral_ContainerBeforeLogin_12ed200,0);
    bRam000000000133f5ec = 1;
  }
  native_PanelMainUIController__CleanAllUI_73954c(lVar7);
  uVar2 = _StringLiteral_ContainerBeforeLogin_12ed200;
  if ((bRam000000000133f5e5 & 1) == 0) {
    native_sub_43273c(&GameResourcesManager_TypeInfo_12d47e0);
    native_sub_43273c(&NGUITools_TypeInfo_12d53c8);
    bRam000000000133f5e5 = 1;
  }
  if (((*(byte *)(_GameResourcesManager_TypeInfo_12d47e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_GameResourcesManager_TypeInfo_12d47e0 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  lVar6 = native_GameResourcesManager__GetUIPrefab_defa08(uVar2,0);
  lVar7 = *(long *)(lVar7 + 0x30);
  if (((*(byte *)(_NGUITools_TypeInfo_12d53c8 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_NGUITools_TypeInfo_12d53c8 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  if ((bRam000000000133f596 & 1) == 0) {
    native_sub_43273c(&NGUITools_TypeInfo_12d53c8);
    bRam000000000133f596 = 1;
  }
  if (((*(byte *)(_NGUITools_TypeInfo_12d53c8 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_NGUITools_TypeInfo_12d53c8 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  if ((bRam000000000133f597 & 1) == 0) {
    native_sub_43273c(&Method_UnityEngine_Object_Instantiate_GameObject____12e5a68);
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    bRam000000000133f597 = 1;
  }
  if (lVar7 != 0) {
    uVar2 = native_UnityEngine_GameObject__get_transform_8de5c8(lVar7,0);
    if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
      native_sub_4327ec(_UnityEngine_Object_TypeInfo_12d54e0);
    }
    lVar3 = native_UnityEngine_Object__Instantiate_GameObject__4a6564
                      (lVar6,uVar2,_Method_UnityEngine_Object_Instantiate_GameObject____12e5a68);
    uVar4 = native_UnityEngine_Object__op_Inequality_8d76fc(lVar3,0,0);
    if ((uVar4 & 1) == 0) {
      return lVar3;
    }
    if ((lVar3 != 0) &&
       (lVar5 = native_UnityEngine_GameObject__get_transform_8de5c8(lVar3,0), lVar6 != 0)) {
      uVar2 = native_UnityEngine_Object__get_name_8e8098(lVar6,0);
      native_UnityEngine_Object__set_name_8e9c08(lVar3,uVar2,0);
      if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
        native_sub_4327ec();
      }
      uVar4 = native_UnityEngine_Object__op_Inequality_8d76fc(lVar7,0,0);
      if ((uVar4 & 1) != 0) {
        uVar1 = native_UnityEngine_GameObject__get_layer_8de608(lVar7,0);
        native_UnityEngine_GameObject__set_layer_8de648(lVar3,uVar1,0);
      }
      native_UnityEngine_Vector3__get_zero_776668(0);
      if (lVar5 != 0) {
        native_UnityEngine_Transform__set_localPosition_7718a4(lVar5,0);
        native_UnityEngine_Quaternion__get_identity_7628fc(0);
        native_UnityEngine_Transform__set_localRotation_771984(lVar5,0);
        native_UnityEngine_Vector3__get_one_776a20(0);
        native_UnityEngine_Transform__set_localScale_771e30(lVar5,0);
        native_UnityEngine_GameObject__SetActive_8de698(lVar3,1,0);
        return lVar3;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* ContainerBeforeSelectUIController$$OnClickButtonBeforeEN @ 0xdd7460
 * void ContainerBeforeSelectUIController__OnClickButtonBeforeEN (ContainerBeforeSelectUIController_o* __this, const MethodInfo* method); */

/* WARNING: Removing unreachable block (ram,0x0072f0b0) */
/* WARNING: Removing unreachable block (ram,0x007394ec) */
/* WARNING: Removing unreachable block (ram,0x0072f0b8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ContainerBeforeSelectUIController$$OnClickButtonBeforeEN
   void ContainerBeforeSelectUIController__OnClickButtonBeforeEN
   (ContainerBeforeSelectUIController_o* __this, const MethodInfo* method); */

long native_ContainerBeforeSelectUIController__OnClickButtonBeforeEN_dd7460(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  
  if ((bRam0000000001346e58 & 1) == 0) {
    native_sub_43273c(&PanelMainUIController_TypeInfo_12d5600);
    native_sub_43273c(&StringLiteral_Initialize_Bluetooth____12ee870);
    native_sub_43273c(&StringLiteral_Initialization_Of_Bluetooth_Broadcast_Failed____12ee860);
    native_sub_43273c(&StringLiteral_Looking_For_A_Racing_Car____12ef670);
    native_sub_43273c(&StringLiteral_Found_The_Racing_Tank____12ee0a0);
    native_sub_43273c(&StringLiteral_Found_The_Racing_Car____12ee098);
    native_sub_43273c(&
                      StringLiteral_Bluetooth_Initialization_Failed_Please_Reopen_The_App____12ec810
                     );
    native_sub_43273c(&StringLiteral_Failed_To_Initialize_Bluetooth_Scan____12ede78);
    native_sub_43273c(&StringLiteral_Looking_For_A_Racing_Tank____12ef678);
    bRam0000000001346e58 = 1;
  }
  if (((*(byte *)(_PanelMainUIController_TypeInfo_12d5600 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_PanelMainUIController_TypeInfo_12d5600 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  lVar7 = _PanelMainUIController_TypeInfo_12d5600;
  *(undefined1 *)(*(long *)(_PanelMainUIController_TypeInfo_12d5600 + 0xb8) + 0xbc) = 1;
  *(undefined8 *)(*(long *)(lVar7 + 0xb8) + 0xc0) = _StringLiteral_Initialize_Bluetooth____12ee870;
  native_sub_4326e0();
  *(undefined8 *)(*(long *)(_PanelMainUIController_TypeInfo_12d5600 + 0xb8) + 200) =
       _StringLiteral_Looking_For_A_Racing_Car____12ef670;
  native_sub_4326e0();
  *(undefined8 *)(*(long *)(_PanelMainUIController_TypeInfo_12d5600 + 0xb8) + 0xd0) =
       _StringLiteral_Looking_For_A_Racing_Tank____12ef678;
  native_sub_4326e0();
  *(undefined8 *)(*(long *)(_PanelMainUIController_TypeInfo_12d5600 + 0xb8) + 0xd8) =
       _StringLiteral_Initialization_Of_Bluetooth_Broadcast_Failed____12ee860;
  native_sub_4326e0();
  *(undefined8 *)(*(long *)(_PanelMainUIController_TypeInfo_12d5600 + 0xb8) + 0xe0) =
       _StringLiteral_Failed_To_Initialize_Bluetooth_Scan____12ede78;
  native_sub_4326e0();
  *(undefined8 *)(*(long *)(_PanelMainUIController_TypeInfo_12d5600 + 0xb8) + 0xe8) =
       _StringLiteral_Found_The_Racing_Car____12ee098;
  native_sub_4326e0();
  *(undefined8 *)(*(long *)(_PanelMainUIController_TypeInfo_12d5600 + 0xb8) + 0xf0) =
       _StringLiteral_Found_The_Racing_Tank____12ee0a0;
  native_sub_4326e0();
  *(undefined8 *)(*(long *)(_PanelMainUIController_TypeInfo_12d5600 + 0xb8) + 0xf8) =
       _StringLiteral_Bluetooth_Initialization_Failed_Please_Reopen_The_App____12ec810;
  native_sub_4326e0();
  lVar7 = native_PanelMainUIController__get_Instance_738fb0(0);
  if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
    native_sub_432810();
  }
  if ((bRam000000000133f5ec & 1) == 0) {
    native_sub_43273c(&StringLiteral_ContainerBeforeLogin_12ed200,0);
    bRam000000000133f5ec = 1;
  }
  native_PanelMainUIController__CleanAllUI_73954c(lVar7);
  uVar2 = _StringLiteral_ContainerBeforeLogin_12ed200;
  if ((bRam000000000133f5e5 & 1) == 0) {
    native_sub_43273c(&GameResourcesManager_TypeInfo_12d47e0);
    native_sub_43273c(&NGUITools_TypeInfo_12d53c8);
    bRam000000000133f5e5 = 1;
  }
  if (((*(byte *)(_GameResourcesManager_TypeInfo_12d47e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_GameResourcesManager_TypeInfo_12d47e0 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  lVar6 = native_GameResourcesManager__GetUIPrefab_defa08(uVar2,0);
  lVar7 = *(long *)(lVar7 + 0x30);
  if (((*(byte *)(_NGUITools_TypeInfo_12d53c8 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_NGUITools_TypeInfo_12d53c8 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  if ((bRam000000000133f596 & 1) == 0) {
    native_sub_43273c(&NGUITools_TypeInfo_12d53c8);
    bRam000000000133f596 = 1;
  }
  if (((*(byte *)(_NGUITools_TypeInfo_12d53c8 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_NGUITools_TypeInfo_12d53c8 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  if ((bRam000000000133f597 & 1) == 0) {
    native_sub_43273c(&Method_UnityEngine_Object_Instantiate_GameObject____12e5a68);
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    bRam000000000133f597 = 1;
  }
  if (lVar7 != 0) {
    uVar2 = native_UnityEngine_GameObject__get_transform_8de5c8(lVar7,0);
    if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
      native_sub_4327ec(_UnityEngine_Object_TypeInfo_12d54e0);
    }
    lVar3 = native_UnityEngine_Object__Instantiate_GameObject__4a6564
                      (lVar6,uVar2,_Method_UnityEngine_Object_Instantiate_GameObject____12e5a68);
    uVar4 = native_UnityEngine_Object__op_Inequality_8d76fc(lVar3,0,0);
    if ((uVar4 & 1) == 0) {
      return lVar3;
    }
    if ((lVar3 != 0) &&
       (lVar5 = native_UnityEngine_GameObject__get_transform_8de5c8(lVar3,0), lVar6 != 0)) {
      uVar2 = native_UnityEngine_Object__get_name_8e8098(lVar6,0);
      native_UnityEngine_Object__set_name_8e9c08(lVar3,uVar2,0);
      if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
        native_sub_4327ec();
      }
      uVar4 = native_UnityEngine_Object__op_Inequality_8d76fc(lVar7,0,0);
      if ((uVar4 & 1) != 0) {
        uVar1 = native_UnityEngine_GameObject__get_layer_8de608(lVar7,0);
        native_UnityEngine_GameObject__set_layer_8de648(lVar3,uVar1,0);
      }
      native_UnityEngine_Vector3__get_zero_776668(0);
      if (lVar5 != 0) {
        native_UnityEngine_Transform__set_localPosition_7718a4(lVar5,0);
        native_UnityEngine_Quaternion__get_identity_7628fc(0);
        native_UnityEngine_Transform__set_localRotation_771984(lVar5,0);
        native_UnityEngine_Vector3__get_one_776a20(0);
        native_UnityEngine_Transform__set_localScale_771e30(lVar5,0);
        native_UnityEngine_GameObject__SetActive_8de698(lVar3,1,0);
        return lVar3;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* ContainerBeforeSelectUIController$$OnClickButtonBeforeSysout @ 0xdd7618
 * void ContainerBeforeSelectUIController__OnClickButtonBeforeSysout (ContainerBeforeSelectUIController_o* __this, const MethodInfo* method); */

/* ContainerBeforeSelectUIController$$OnClickButtonBeforeSysout
   void ContainerBeforeSelectUIController__OnClickButtonBeforeSysout
   (ContainerBeforeSelectUIController_o* __this, const MethodInfo* method); */

void native_ContainerBeforeSelectUIController__OnClickButtonBeforeSysout_dd7618(void)

{
  if (pcRam00000000013408c0 == (code *)0x0) {
    pcRam00000000013408c0 = (code *)native_sub_4326f0(&UNK_00e2c422);
  }
                    /* WARNING: Could not recover jumptable at 0x008d60c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pcRam00000000013408c0)(0);
  return;
}



/* ContainerBeforeSelectUIController$$InitBluethood @ 0xdd6e94
 * void ContainerBeforeSelectUIController__InitBluethood (ContainerBeforeSelectUIController_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ContainerBeforeSelectUIController$$InitBluethood
   void ContainerBeforeSelectUIController__InitBluethood (ContainerBeforeSelectUIController_o*
   __this, const MethodInfo* method); */

void native_ContainerBeforeSelectUIController__InitBluethood_dd6e94(void)

{
  ushort uVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  long *plVar8;
  ulong uVar9;
  undefined8 *puVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  
  if ((bRam0000000001346e59 & 1) == 0) {
    native_sub_43273c(&Method_System_Action_string___ctor___12d7fe8);
    native_sub_43273c(&System_Action_string__TypeInfo_12d2080);
    native_sub_43273c(&HjdBluetoothHardwareInterface_TypeInfo_12d4938);
    native_sub_43273c(&PanelMainUIController_TypeInfo_12d5600);
    native_sub_43273c(&Method_ContainerBeforeSelectUIController___c__InitBluethood_b__5_0___12e9780)
    ;
    native_sub_43273c(&ContainerBeforeSelectUIController___c_TypeInfo_12d7150);
    bRam0000000001346e59 = 1;
  }
  if (((*(byte *)(_HjdBluetoothHardwareInterface_TypeInfo_12d4938 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_HjdBluetoothHardwareInterface_TypeInfo_12d4938 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  if (*(char *)(*(long *)(_HjdBluetoothHardwareInterface_TypeInfo_12d4938 + 0xb8) + 0x11) != '\0') {
    return;
  }
  if (((*(byte *)(_PanelMainUIController_TypeInfo_12d5600 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_PanelMainUIController_TypeInfo_12d5600 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  lVar7 = native_PanelMainUIController__get_Instance_738fb0(0);
  if ((lVar7 == 0) ||
     (lVar7 = native_PanelMainUIController__GetDeviceUniqueIdentifier_739380(lVar7,0), lVar7 == 0))
  {
                    /* WARNING: Subroutine does not return */
    native_sub_432810();
  }
  uVar2 = native_System_String__get_Chars_b03810(lVar7,0,0);
  if (((*(byte *)(_HjdBluetoothHardwareInterface_TypeInfo_12d4938 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_HjdBluetoothHardwareInterface_TypeInfo_12d4938 + 0xe0) == 0)) {
    native_sub_4327ec(_HjdBluetoothHardwareInterface_TypeInfo_12d4938);
  }
  *(undefined1 *)(*(long *)(_HjdBluetoothHardwareInterface_TypeInfo_12d4938 + 0xb8) + 0x12) = uVar2;
  uVar2 = native_System_String__get_Chars_b03810(lVar7,1,0);
  *(undefined1 *)(*(long *)(_HjdBluetoothHardwareInterface_TypeInfo_12d4938 + 0xb8) + 0x13) = uVar2;
  uVar2 = native_System_String__get_Chars_b03810(lVar7,2,0);
  *(undefined1 *)(*(long *)(_HjdBluetoothHardwareInterface_TypeInfo_12d4938 + 0xb8) + 0x14) = uVar2;
  if (((*(byte *)(_ContainerBeforeSelectUIController___c_TypeInfo_12d7150 + 0x133) >> 2 & 1) != 0)
     && (*(int *)(_ContainerBeforeSelectUIController___c_TypeInfo_12d7150 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  puVar10 = *(undefined8 **)(_ContainerBeforeSelectUIController___c_TypeInfo_12d7150 + 0xb8);
  lVar7 = puVar10[1];
  if (lVar7 == 0) {
    if (((*(byte *)(_ContainerBeforeSelectUIController___c_TypeInfo_12d7150 + 0x133) >> 2 & 1) != 0)
       && (*(int *)(_ContainerBeforeSelectUIController___c_TypeInfo_12d7150 + 0xe0) == 0)) {
      native_sub_4327ec();
      puVar10 = *(undefined8 **)(_ContainerBeforeSelectUIController___c_TypeInfo_12d7150 + 0xb8);
    }
    uVar11 = *puVar10;
    lVar7 = native_sub_432808(_System_Action_string__TypeInfo_12d2080);
    native_System_Action_Font____ctor_9867a8
              (lVar7,uVar11,
               _Method_ContainerBeforeSelectUIController___c__InitBluethood_b__5_0___12e9780,
               _Method_System_Action_string___ctor___12d7fe8);
    plVar8 = (long *)(*(long *)(_ContainerBeforeSelectUIController___c_TypeInfo_12d7150 + 0xb8) + 8)
    ;
    *plVar8 = lVar7;
    native_sub_4326e0(plVar8,lVar7);
  }
  if (((*(byte *)(_HjdBluetoothHardwareInterface_TypeInfo_12d4938 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_HjdBluetoothHardwareInterface_TypeInfo_12d4938 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  if ((bRam0000000001343d2a & 1) == 0) {
    native_sub_43273c(&UnityEngine_AndroidJavaClass_TypeInfo_12d3730,0);
    native_sub_43273c(&Method_UnityEngine_AndroidJavaObject_CallStatic_AndroidJavaObject____12dec78)
    ;
    native_sub_43273c(&Method_System_Array_Empty_object____12dedf0);
    native_sub_43273c(&
                      Method_UnityEngine_GameObject_AddComponent_HjdBluetoothDeviceScript____12e47f0
                     );
    native_sub_43273c(&UnityEngine_GameObject_TypeInfo_12d47d8);
    native_sub_43273c(&HjdBluetoothHardwareInterface_TypeInfo_12d4938);
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    native_sub_43273c(&StringLiteral_com_sthjd_mylibrary_HjdUnityBluetoothLE_12f3f28);
    native_sub_43273c(&StringLiteral_getInstance_12f4968);
    native_sub_43273c(&StringLiteral_androidBluetoothInitialize_12f3978);
    native_sub_43273c(&StringLiteral_HjdBluetoothLEReceiver_12ee3c0);
    bRam0000000001343d2a = 1;
  }
  if (((*(byte *)(_HjdBluetoothHardwareInterface_TypeInfo_12d4938 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_HjdBluetoothHardwareInterface_TypeInfo_12d4938 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  puVar10 = (undefined8 *)(*(long *)(_HjdBluetoothHardwareInterface_TypeInfo_12d4938 + 0xb8) + 8);
  *puVar10 = 0;
  native_sub_4326e0(puVar10,0);
  lVar4 = native_UnityEngine_GameObject__Find_8dead0
                    (_StringLiteral_HjdBluetoothLEReceiver_12ee3c0,0);
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec(_UnityEngine_Object_TypeInfo_12d54e0);
  }
  uVar5 = native_UnityEngine_Object__op_Equality_8e9a3c(lVar4,0,0);
  if ((uVar5 & 1) != 0) {
    lVar4 = native_sub_432808(_UnityEngine_GameObject_TypeInfo_12d47d8);
    native_UnityEngine_GameObject___ctor_8de828
              (lVar4,_StringLiteral_HjdBluetoothLEReceiver_12ee3c0,0);
    if (lVar4 == 0) goto LAB_00dc3e50;
    uVar11 = native_UnityEngine_GameObject__AddComponent_ActiveAnimation__4a2118
                       (lVar4,
                        _Method_UnityEngine_GameObject_AddComponent_HjdBluetoothDeviceScript____12e47f0
                       );
    if (((*(byte *)(_HjdBluetoothHardwareInterface_TypeInfo_12d4938 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_HjdBluetoothHardwareInterface_TypeInfo_12d4938 + 0xe0) == 0)) {
      native_sub_4327ec(_HjdBluetoothHardwareInterface_TypeInfo_12d4938);
    }
    puVar10 = (undefined8 *)(*(long *)(_HjdBluetoothHardwareInterface_TypeInfo_12d4938 + 0xb8) + 8);
    *puVar10 = uVar11;
    native_sub_4326e0(puVar10,uVar11);
    uVar11 = *(undefined8 *)(*(long *)(_HjdBluetoothHardwareInterface_TypeInfo_12d4938 + 0xb8) + 8);
    if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    uVar5 = native_UnityEngine_Object__op_Inequality_8d76fc(uVar11,0,0);
    if ((uVar5 & 1) != 0) {
      if (((*(byte *)(_HjdBluetoothHardwareInterface_TypeInfo_12d4938 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_HjdBluetoothHardwareInterface_TypeInfo_12d4938 + 0xe0) == 0)) {
        native_sub_4327ec();
      }
      lVar6 = *(long *)(*(long *)(_HjdBluetoothHardwareInterface_TypeInfo_12d4938 + 0xb8) + 8);
      if (lVar6 == 0) goto LAB_00dc3e50;
      plVar8 = (long *)(lVar6 + 0x18);
      *plVar8 = lVar7;
      native_sub_4326e0(plVar8,lVar7);
    }
  }
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  native_UnityEngine_Object__DontDestroyOnLoad_8ea7a0(lVar4,0);
  if (((*(byte *)(_HjdBluetoothHardwareInterface_TypeInfo_12d4938 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_HjdBluetoothHardwareInterface_TypeInfo_12d4938 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  if (**(long **)(_HjdBluetoothHardwareInterface_TypeInfo_12d4938 + 0xb8) == 0) {
    lVar4 = native_sub_432808(_UnityEngine_AndroidJavaClass_TypeInfo_12d3730);
    native_UnityEngine_AndroidJavaClass___ctor_d6bb40
              (lVar4,_StringLiteral_com_sthjd_mylibrary_HjdUnityBluetoothLE_12f3f28,0);
    lVar7 = _Method_System_Array_Empty_object____12dedf0;
    lVar6 = **(long **)(_Method_System_Array_Empty_object____12dedf0 + 0x30);
    uVar1 = *(ushort *)(lVar6 + 0x132);
    if ((uVar1 & 1) == 0) {
      native_sub_3c9850(lVar6);
      uVar1 = *(ushort *)(lVar6 + 0x132);
    }
    if ((uVar1 >> 10 & 1) != 0) {
      lVar6 = **(long **)(lVar7 + 0x30);
      if ((*(byte *)(lVar6 + 0x132) & 1) == 0) {
        native_sub_3c9850(lVar6);
      }
      if (*(int *)(lVar6 + 0xe0) == 0) {
        lVar6 = **(long **)(lVar7 + 0x30);
        if ((*(byte *)(lVar6 + 0x132) & 1) == 0) {
          native_sub_3c9850(lVar6);
        }
        native_sub_4327ec(lVar6);
      }
    }
    lVar7 = **(long **)(lVar7 + 0x30);
    if ((*(byte *)(lVar7 + 0x132) & 1) == 0) {
      native_sub_3c9850(lVar7);
    }
    if (lVar4 == 0) goto LAB_00dc3e50;
    uVar11 = native_UnityEngine_AndroidJavaObject__CallStatic_AndroidJavaObject__8c4d20
                       (lVar4,_StringLiteral_getInstance_12f4968,**(undefined8 **)(lVar7 + 0xb8),
                        _Method_UnityEngine_AndroidJavaObject_CallStatic_AndroidJavaObject____12dec78
                       );
    if (((*(byte *)(_HjdBluetoothHardwareInterface_TypeInfo_12d4938 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_HjdBluetoothHardwareInterface_TypeInfo_12d4938 + 0xe0) == 0)) {
      native_sub_4327ec(_HjdBluetoothHardwareInterface_TypeInfo_12d4938);
    }
    puVar10 = *(undefined8 **)(_HjdBluetoothHardwareInterface_TypeInfo_12d4938 + 0xb8);
    *puVar10 = uVar11;
    native_sub_4326e0(puVar10,uVar11);
  }
  if (((*(byte *)(_HjdBluetoothHardwareInterface_TypeInfo_12d4938 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_HjdBluetoothHardwareInterface_TypeInfo_12d4938 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  lVar7 = **(long **)(_HjdBluetoothHardwareInterface_TypeInfo_12d4938 + 0xb8);
  if (lVar7 == 0) {
    return;
  }
  if (((*(byte *)(_HjdBluetoothHardwareInterface_TypeInfo_12d4938 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_HjdBluetoothHardwareInterface_TypeInfo_12d4938 + 0xe0) == 0)) {
    native_sub_4327ec();
    lVar7 = **(long **)(_HjdBluetoothHardwareInterface_TypeInfo_12d4938 + 0xb8);
  }
  lVar4 = _Method_System_Array_Empty_object____12dedf0;
  lVar6 = **(long **)(_Method_System_Array_Empty_object____12dedf0 + 0x30);
  uVar1 = *(ushort *)(lVar6 + 0x132);
  if ((uVar1 & 1) == 0) {
    native_sub_3c9850(lVar6);
    uVar1 = *(ushort *)(lVar6 + 0x132);
  }
  if ((uVar1 >> 10 & 1) != 0) {
    lVar6 = **(long **)(lVar4 + 0x30);
    if ((*(byte *)(lVar6 + 0x132) & 1) == 0) {
      native_sub_3c9850(lVar6);
    }
    if (*(int *)(lVar6 + 0xe0) == 0) {
      lVar6 = **(long **)(lVar4 + 0x30);
      if ((*(byte *)(lVar6 + 0x132) & 1) == 0) {
        native_sub_3c9850(lVar6);
      }
      native_sub_4327ec(lVar6);
    }
  }
  lVar4 = **(long **)(lVar4 + 0x30);
  if ((*(byte *)(lVar4 + 0x132) & 1) == 0) {
    native_sub_3c9850(lVar4);
  }
  uVar11 = _StringLiteral_androidBluetoothInitialize_12f3978;
  if (lVar7 != 0) {
    lVar4 = **(long **)(lVar4 + 0xb8);
    if ((bRam0000000001343116 & 1) == 0) {
      native_sub_43273c(&object___TypeInfo_12d32d8,_StringLiteral_androidBluetoothInitialize_12f3978
                        ,lVar4,0);
      bRam0000000001343116 = 1;
    }
    if (lVar4 == 0) {
      lVar4 = native_sub_432750(_object___TypeInfo_12d32d8,1);
    }
    if (*(long *)(lVar7 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
      native_sub_432810();
    }
    uVar12 = *(undefined8 *)(*(long *)(lVar7 + 0x18) + 0x18);
    uVar3 = native_UnityEngine__AndroidJNIHelper__GetSignature_d719ec(lVar4);
    uVar11 = native_UnityEngine__AndroidJNIHelper__GetMethodID_d6efec(uVar12,uVar11,uVar3,0);
    lVar6 = native_UnityEngine__AndroidJNIHelper__CreateJNIArgArray_d70340(lVar4);
    if (*(long *)(lVar7 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
      native_sub_432810();
    }
    native_UnityEngine_AndroidJNISafe__CallVoidMethod_d74300
              (*(undefined8 *)(*(long *)(lVar7 + 0x10) + 0x18),uVar11,lVar6);
    if ((bRam000000000134313b & 1) == 0) {
      native_sub_43273c(&UnityEngine_AndroidJavaProxy_TypeInfo_12d3748);
      native_sub_43273c(&UnityEngine_AndroidJavaRunnable_TypeInfo_12d3750);
      native_sub_43273c(&System_Array_TypeInfo_12d3820);
      native_sub_43273c(&string_TypeInfo_12d5f28);
      bRam000000000134313b = 1;
    }
    if (lVar4 != 0) {
      if (0 < (int)*(ulong *)(lVar4 + 0x18)) {
        uVar5 = 0;
        uVar9 = *(ulong *)(lVar4 + 0x18) & 0xffffffff;
        do {
          if (uVar9 <= uVar5) goto code_r0x00d70a8c;
          plVar8 = *(long **)(lVar4 + 0x20 + uVar5 * 8);
          if (plVar8 != (long *)0x0) {
            lVar7 = *plVar8;
            if ((lVar7 != _string_TypeInfo_12d5f28) &&
               (lVar7 != _UnityEngine_AndroidJavaRunnable_TypeInfo_12d3750)) {
              if ((*(byte *)(lVar7 + 300) <
                   *(byte *)(_UnityEngine_AndroidJavaProxy_TypeInfo_12d3748 + 300)) ||
                 (*(long *)(*(long *)(lVar7 + 200) +
                            (ulong)*(byte *)(_UnityEngine_AndroidJavaProxy_TypeInfo_12d3748 + 300) *
                            8 + -8) != _UnityEngine_AndroidJavaProxy_TypeInfo_12d3748)) {
                if ((*(byte *)(lVar7 + 300) < *(byte *)(_System_Array_TypeInfo_12d3820 + 300)) ||
                   (*(long *)(*(long *)(lVar7 + 200) +
                              (ulong)*(byte *)(_System_Array_TypeInfo_12d3820 + 300) * 8 + -8) !=
                    _System_Array_TypeInfo_12d3820)) goto code_r0x00d70a60;
              }
            }
            if (lVar6 == 0) goto code_r0x00d70a98;
            if (*(uint *)(lVar6 + 0x18) <= uVar5) {
code_r0x00d70a8c:
              uVar11 = native_sub_43283c();
                    /* WARNING: Subroutine does not return */
              native_sub_4327dc(uVar11,0);
            }
            native_UnityEngine_AndroidJNISafe__DeleteLocalRef_d71e88
                      (*(undefined8 *)(lVar6 + 0x20 + uVar5 * 8));
          }
code_r0x00d70a60:
          uVar9 = (ulong)*(uint *)(lVar4 + 0x18);
          uVar5 = uVar5 + 1;
        } while ((long)uVar5 < (long)(int)*(uint *)(lVar4 + 0x18));
      }
      return;
    }
code_r0x00d70a98:
                    /* WARNING: Subroutine does not return */
    native_sub_432810();
  }
LAB_00dc3e50:
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* ContainerBeforeSelectUIController$$Update @ 0xdd7620
 * void ContainerBeforeSelectUIController__Update (ContainerBeforeSelectUIController_o* __this, const MethodInfo* method); */

/* ContainerBeforeSelectUIController$$Update
   void ContainerBeforeSelectUIController__Update (ContainerBeforeSelectUIController_o* __this,
   const MethodInfo* method); */

void native_ContainerBeforeSelectUIController__Update_dd7620(void)

{
  return;
}



/* ContainerBeforeSelectUIController$$Awake @ 0xdd7624
 * void ContainerBeforeSelectUIController__Awake (ContainerBeforeSelectUIController_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ContainerBeforeSelectUIController$$Awake
   void ContainerBeforeSelectUIController__Awake (ContainerBeforeSelectUIController_o* __this, const
   MethodInfo* method); */

void native_ContainerBeforeSelectUIController__Awake_dd7624(long param_1)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  
  if ((bRam0000000001346e5a & 1) == 0) {
    native_sub_43273c(&StringLiteral_ButtonBeforeCN_12ec868);
    native_sub_43273c(&StringLiteral_ButtonBeforeEN_12ec870);
    native_sub_43273c(&StringLiteral_ButtonBeforeSysout_12ec878);
    bRam0000000001346e5a = 1;
  }
  lVar4 = native_UnityEngine_Component__get_transform_8da62c(param_1,0);
  if ((lVar4 != 0) &&
     (lVar4 = native_UnityEngine_Transform__Find_772c0c
                        (lVar4,_StringLiteral_ButtonBeforeCN_12ec868,0), lVar4 != 0)) {
    uVar5 = native_UnityEngine_Component__get_gameObject_8da66c(lVar4,0);
    *(undefined8 *)(param_1 + 0x18) = uVar5;
    native_sub_4326e0();
    lVar4 = native_UnityEngine_Component__get_transform_8da62c(param_1,0);
    if ((lVar4 != 0) &&
       (lVar4 = native_UnityEngine_Transform__Find_772c0c
                          (lVar4,_StringLiteral_ButtonBeforeEN_12ec870,0), lVar4 != 0)) {
      uVar5 = native_UnityEngine_Component__get_gameObject_8da66c(lVar4,0);
      *(undefined8 *)(param_1 + 0x20) = uVar5;
      native_sub_4326e0();
      lVar4 = native_UnityEngine_Component__get_transform_8da62c(param_1,0);
      if ((lVar4 != 0) &&
         (lVar4 = native_UnityEngine_Transform__Find_772c0c
                            (lVar4,_StringLiteral_ButtonBeforeSysout_12ec878,0), lVar4 != 0)) {
        uVar5 = native_UnityEngine_Component__get_gameObject_8da66c(lVar4,0);
        puVar6 = (undefined8 *)(param_1 + 0x28);
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



/* ContainerBeforeSelectUIController$$.ctor @ 0xdd7738
 * void ContainerBeforeSelectUIController___ctor (ContainerBeforeSelectUIController_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ContainerBeforeSelectUIController$$.ctor
   void ContainerBeforeSelectUIController___ctor (ContainerBeforeSelectUIController_o* __this, const
   MethodInfo* method); */

undefined1  [16] native_ContainerBeforeSelectUIController___ctor_dd7738(ulong param_1)

{
  undefined1 auVar1 [16];
  
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


