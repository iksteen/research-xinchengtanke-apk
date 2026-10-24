/* ARM64 IL2CPP native pseudocode from Ghidra.
 * Recovered implementation, not original C# source.
 * Function boundaries follow the IL2CPP method address table. */


/* ContainerRemoveCarProgrameUIController$$Start @ 0xde2814
 * void ContainerRemoveCarProgrameUIController__Start (ContainerRemoveCarProgrameUIController_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ContainerRemoveCarProgrameUIController$$Start
   void ContainerRemoveCarProgrameUIController__Start (ContainerRemoveCarProgrameUIController_o*
   __this, const MethodInfo* method); */

void native_ContainerRemoveCarProgrameUIController__Start_de2814(long param_1)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  
  if ((bRam0000000001346e9d & 1) == 0) {
    native_sub_43273c(&EventDelegate_Callback_TypeInfo_12d72e8);
    native_sub_43273c(&Method_UnityEngine_Component_GetComponent_UISprite____12e2c18);
    native_sub_43273c(&
                      Method_ContainerRemoveCarProgrameUIController_OnClickButtonBiancheng___12e3098
                     );
    native_sub_43273c(&
                      Method_ContainerRemoveCarProgrameUIController_OnClickButtonBlesetting___12e30a0
                     );
    native_sub_43273c(&Method_ContainerRemoveCarProgrameUIController_OnClickButtonResult___12e30a8);
    native_sub_43273c(&EventDelegate_TypeInfo_12d4590);
    native_sub_43273c(&Method_UnityEngine_GameObject_GetComponent_UIButton____12e4a88);
    native_sub_43273c(&Method_UnityEngine_GameObject_GetComponent_UILabel____12e4ac0);
    native_sub_43273c(&Method_System_Collections_Generic_List_EventDelegate__Add___12dc740);
    native_sub_43273c(&PanelMainUIController_TypeInfo_12d5600);
    native_sub_43273c(&StringLiteral_Add_Program_12ec220);
    native_sub_43273c(&StringLiteral_ButtonBianchengtext_12ec888);
    native_sub_43273c(&StringLiteral_bg_12f3ba0);
    bRam0000000001346e9d = 1;
  }
  if (((*(byte *)(_PanelMainUIController_TypeInfo_12d5600 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_PanelMainUIController_TypeInfo_12d5600 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  if (*(char *)(*(long *)(_PanelMainUIController_TypeInfo_12d5600 + 0xb8) + 0xbc) != '\0') {
    lVar4 = native_UnityEngine_GameObject__Find_8dead0(_StringLiteral_ButtonBianchengtext_12ec888,0)
    ;
    if (((lVar4 == 0) ||
        (lVar4 = native_UnityEngine_GameObject__get_gameObject_8debb8(lVar4,0), lVar4 == 0)) ||
       (lVar4 = native_UnityEngine_GameObject__GetComponent_BE2_BlockSectionHeader_Custom__4a2214
                          (lVar4,_Method_UnityEngine_GameObject_GetComponent_UILabel____12e4ac0),
       lVar4 == 0)) goto LAB_00de2b30;
    native_UILabel__set_text_ae81a8(lVar4,_StringLiteral_Add_Program_12ec220,0);
  }
  if (*(long *)(param_1 + 0x70) != 0) {
    lVar4 = native_UnityEngine_GameObject__GetComponent_BE2_BlockSectionHeader_Custom__4a2214
                      (*(long *)(param_1 + 0x70),
                       _Method_UnityEngine_GameObject_GetComponent_UIButton____12e4a88);
    if (lVar4 != 0) {
      lVar4 = *(long *)(lVar4 + 0xc0);
      uVar5 = native_sub_432808(_EventDelegate_Callback_TypeInfo_12d72e8);
      native_EventDelegate_Callback___ctor_54bd18
                (uVar5,param_1,
                 _Method_ContainerRemoveCarProgrameUIController_OnClickButtonResult___12e30a8,0);
      uVar6 = native_sub_432808(_EventDelegate_TypeInfo_12d4590);
      native_System_Object___ctor_ad2798(uVar6,0);
      native_EventDelegate__Set_dedf08(uVar6,uVar5);
      if (lVar4 != 0) {
        native_System_Collections_Generic_List_int_____Add_d40c00
                  (lVar4,uVar6,_Method_System_Collections_Generic_List_EventDelegate__Add___12dc740)
        ;
        if ((*(long *)(param_1 + 0x68) != 0) &&
           (lVar4 = native_UnityEngine_GameObject__GetComponent_BE2_BlockSectionHeader_Custom__4a2214
                              (*(long *)(param_1 + 0x68),
                               _Method_UnityEngine_GameObject_GetComponent_UIButton____12e4a88),
           lVar4 != 0)) {
          lVar4 = *(long *)(lVar4 + 0xc0);
          uVar5 = native_sub_432808(_EventDelegate_Callback_TypeInfo_12d72e8);
          native_EventDelegate_Callback___ctor_54bd18
                    (uVar5,param_1,
                     _Method_ContainerRemoveCarProgrameUIController_OnClickButtonBiancheng___12e3098
                     ,0);
          uVar6 = native_sub_432808(_EventDelegate_TypeInfo_12d4590);
          native_System_Object___ctor_ad2798(uVar6,0);
          native_EventDelegate__Set_dedf08(uVar6,uVar5);
          if (lVar4 != 0) {
            native_System_Collections_Generic_List_int_____Add_d40c00
                      (lVar4,uVar6,
                       _Method_System_Collections_Generic_List_EventDelegate__Add___12dc740);
            if ((*(long *)(param_1 + 0x60) != 0) &&
               (lVar4 = native_UnityEngine_GameObject__GetComponent_BE2_BlockSectionHeader_Custom__4a2214
                                  (*(long *)(param_1 + 0x60),
                                   _Method_UnityEngine_GameObject_GetComponent_UIButton____12e4a88),
               lVar4 != 0)) {
              lVar4 = *(long *)(lVar4 + 0xc0);
              uVar5 = native_sub_432808(_EventDelegate_Callback_TypeInfo_12d72e8);
              native_EventDelegate_Callback___ctor_54bd18
                        (uVar5,param_1,
                         _Method_ContainerRemoveCarProgrameUIController_OnClickButtonBlesetting___12e30a0
                         ,0);
              uVar6 = native_sub_432808(_EventDelegate_TypeInfo_12d4590);
              native_System_Object___ctor_ad2798(uVar6,0);
              native_EventDelegate__Set_dedf08(uVar6,uVar5);
              if (lVar4 != 0) {
                native_System_Collections_Generic_List_int_____Add_d40c00
                          (lVar4,uVar6,
                           _Method_System_Collections_Generic_List_EventDelegate__Add___12dc740);
                if (((*(long *)(param_1 + 0x60) != 0) &&
                    (lVar4 = native_UnityEngine_GameObject__get_transform_8de5c8
                                       (*(long *)(param_1 + 0x60),0), lVar4 != 0)) &&
                   (lVar4 = native_UnityEngine_Transform__FindChild_772e3c
                                      (lVar4,_StringLiteral_bg_12f3ba0,0), lVar4 != 0)) {
                  uVar5 = native_UnityEngine_Component__GetComponent_ActiveAnimation__49daec
                                    (lVar4,
                                     _Method_UnityEngine_Component_GetComponent_UISprite____12e2c18)
                  ;
                  puVar7 = (undefined8 *)(param_1 + 0x50);
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
LAB_00de2b30:
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* ContainerRemoveCarProgrameUIController$$InitButtonEvent @ 0xde2818
 * void ContainerRemoveCarProgrameUIController__InitButtonEvent (ContainerRemoveCarProgrameUIController_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ContainerRemoveCarProgrameUIController$$InitButtonEvent
   void ContainerRemoveCarProgrameUIController__InitButtonEvent
   (ContainerRemoveCarProgrameUIController_o* __this, const MethodInfo* method); */

void native_ContainerRemoveCarProgrameUIController__InitButtonEvent_de2818(long param_1)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  
  if ((bRam0000000001346e9d & 1) == 0) {
    native_sub_43273c(&EventDelegate_Callback_TypeInfo_12d72e8);
    native_sub_43273c(&Method_UnityEngine_Component_GetComponent_UISprite____12e2c18);
    native_sub_43273c(&
                      Method_ContainerRemoveCarProgrameUIController_OnClickButtonBiancheng___12e3098
                     );
    native_sub_43273c(&
                      Method_ContainerRemoveCarProgrameUIController_OnClickButtonBlesetting___12e30a0
                     );
    native_sub_43273c(&Method_ContainerRemoveCarProgrameUIController_OnClickButtonResult___12e30a8);
    native_sub_43273c(&EventDelegate_TypeInfo_12d4590);
    native_sub_43273c(&Method_UnityEngine_GameObject_GetComponent_UIButton____12e4a88);
    native_sub_43273c(&Method_UnityEngine_GameObject_GetComponent_UILabel____12e4ac0);
    native_sub_43273c(&Method_System_Collections_Generic_List_EventDelegate__Add___12dc740);
    native_sub_43273c(&PanelMainUIController_TypeInfo_12d5600);
    native_sub_43273c(&StringLiteral_Add_Program_12ec220);
    native_sub_43273c(&StringLiteral_ButtonBianchengtext_12ec888);
    native_sub_43273c(&StringLiteral_bg_12f3ba0);
    bRam0000000001346e9d = 1;
  }
  if (((*(byte *)(_PanelMainUIController_TypeInfo_12d5600 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_PanelMainUIController_TypeInfo_12d5600 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  if (*(char *)(*(long *)(_PanelMainUIController_TypeInfo_12d5600 + 0xb8) + 0xbc) != '\0') {
    lVar4 = native_UnityEngine_GameObject__Find_8dead0(_StringLiteral_ButtonBianchengtext_12ec888,0)
    ;
    if (((lVar4 == 0) ||
        (lVar4 = native_UnityEngine_GameObject__get_gameObject_8debb8(lVar4,0), lVar4 == 0)) ||
       (lVar4 = native_UnityEngine_GameObject__GetComponent_BE2_BlockSectionHeader_Custom__4a2214
                          (lVar4,_Method_UnityEngine_GameObject_GetComponent_UILabel____12e4ac0),
       lVar4 == 0)) goto LAB_00de2b30;
    native_UILabel__set_text_ae81a8(lVar4,_StringLiteral_Add_Program_12ec220,0);
  }
  if (*(long *)(param_1 + 0x70) != 0) {
    lVar4 = native_UnityEngine_GameObject__GetComponent_BE2_BlockSectionHeader_Custom__4a2214
                      (*(long *)(param_1 + 0x70),
                       _Method_UnityEngine_GameObject_GetComponent_UIButton____12e4a88);
    if (lVar4 != 0) {
      lVar4 = *(long *)(lVar4 + 0xc0);
      uVar5 = native_sub_432808(_EventDelegate_Callback_TypeInfo_12d72e8);
      native_EventDelegate_Callback___ctor_54bd18
                (uVar5,param_1,
                 _Method_ContainerRemoveCarProgrameUIController_OnClickButtonResult___12e30a8,0);
      uVar6 = native_sub_432808(_EventDelegate_TypeInfo_12d4590);
      native_System_Object___ctor_ad2798(uVar6,0);
      native_EventDelegate__Set_dedf08(uVar6,uVar5);
      if (lVar4 != 0) {
        native_System_Collections_Generic_List_int_____Add_d40c00
                  (lVar4,uVar6,_Method_System_Collections_Generic_List_EventDelegate__Add___12dc740)
        ;
        if ((*(long *)(param_1 + 0x68) != 0) &&
           (lVar4 = native_UnityEngine_GameObject__GetComponent_BE2_BlockSectionHeader_Custom__4a2214
                              (*(long *)(param_1 + 0x68),
                               _Method_UnityEngine_GameObject_GetComponent_UIButton____12e4a88),
           lVar4 != 0)) {
          lVar4 = *(long *)(lVar4 + 0xc0);
          uVar5 = native_sub_432808(_EventDelegate_Callback_TypeInfo_12d72e8);
          native_EventDelegate_Callback___ctor_54bd18
                    (uVar5,param_1,
                     _Method_ContainerRemoveCarProgrameUIController_OnClickButtonBiancheng___12e3098
                     ,0);
          uVar6 = native_sub_432808(_EventDelegate_TypeInfo_12d4590);
          native_System_Object___ctor_ad2798(uVar6,0);
          native_EventDelegate__Set_dedf08(uVar6,uVar5);
          if (lVar4 != 0) {
            native_System_Collections_Generic_List_int_____Add_d40c00
                      (lVar4,uVar6,
                       _Method_System_Collections_Generic_List_EventDelegate__Add___12dc740);
            if ((*(long *)(param_1 + 0x60) != 0) &&
               (lVar4 = native_UnityEngine_GameObject__GetComponent_BE2_BlockSectionHeader_Custom__4a2214
                                  (*(long *)(param_1 + 0x60),
                                   _Method_UnityEngine_GameObject_GetComponent_UIButton____12e4a88),
               lVar4 != 0)) {
              lVar4 = *(long *)(lVar4 + 0xc0);
              uVar5 = native_sub_432808(_EventDelegate_Callback_TypeInfo_12d72e8);
              native_EventDelegate_Callback___ctor_54bd18
                        (uVar5,param_1,
                         _Method_ContainerRemoveCarProgrameUIController_OnClickButtonBlesetting___12e30a0
                         ,0);
              uVar6 = native_sub_432808(_EventDelegate_TypeInfo_12d4590);
              native_System_Object___ctor_ad2798(uVar6,0);
              native_EventDelegate__Set_dedf08(uVar6,uVar5);
              if (lVar4 != 0) {
                native_System_Collections_Generic_List_int_____Add_d40c00
                          (lVar4,uVar6,
                           _Method_System_Collections_Generic_List_EventDelegate__Add___12dc740);
                if (((*(long *)(param_1 + 0x60) != 0) &&
                    (lVar4 = native_UnityEngine_GameObject__get_transform_8de5c8
                                       (*(long *)(param_1 + 0x60),0), lVar4 != 0)) &&
                   (lVar4 = native_UnityEngine_Transform__FindChild_772e3c
                                      (lVar4,_StringLiteral_bg_12f3ba0,0), lVar4 != 0)) {
                  uVar5 = native_UnityEngine_Component__GetComponent_ActiveAnimation__49daec
                                    (lVar4,
                                     _Method_UnityEngine_Component_GetComponent_UISprite____12e2c18)
                  ;
                  puVar7 = (undefined8 *)(param_1 + 0x50);
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
LAB_00de2b30:
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* ContainerRemoveCarProgrameUIController$$OnClickButtonResult @ 0xde2b34
 * void ContainerRemoveCarProgrameUIController__OnClickButtonResult (ContainerRemoveCarProgrameUIController_o* __this, const MethodInfo* method); */

/* WARNING: Removing unreachable block (ram,0x0072f0b0) */
/* WARNING: Removing unreachable block (ram,0x007394ec) */
/* WARNING: Removing unreachable block (ram,0x0072f0b8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ContainerRemoveCarProgrameUIController$$OnClickButtonResult
   void ContainerRemoveCarProgrameUIController__OnClickButtonResult
   (ContainerRemoveCarProgrameUIController_o* __this, const MethodInfo* method); */

long native_ContainerRemoveCarProgrameUIController__OnClickButtonResult_de2b34(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  
  if ((bRam0000000001346e9e & 1) == 0) {
    native_sub_43273c(&PanelMainUIController_TypeInfo_12d5600);
    bRam0000000001346e9e = 1;
  }
  if (((*(byte *)(_PanelMainUIController_TypeInfo_12d5600 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_PanelMainUIController_TypeInfo_12d5600 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  lVar7 = native_PanelMainUIController__get_Instance_738fb0(0);
  if (lVar7 != 0) {
    if ((bRam000000000133f5ee & 1) == 0) {
      native_sub_43273c(&PanelMainUIController_TypeInfo_12d5600,0);
      native_sub_43273c(&StringLiteral_car_12f3d28);
      bRam000000000133f5ee = 1;
    }
    if (((*(byte *)(_PanelMainUIController_TypeInfo_12d5600 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_PanelMainUIController_TypeInfo_12d5600 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    uVar6 = native_System_String__op_Equality_afc18c
                      (*(undefined8 *)
                        (*(long *)(_PanelMainUIController_TypeInfo_12d5600 + 0xb8) + 0x58),
                       _StringLiteral_car_12f3d28,0);
    if ((uVar6 & 1) == 0) {
      if ((bRam000000000133f5f0 & 1) == 0) {
        native_sub_43273c(&PanelMainUIController_TypeInfo_12d5600);
        native_sub_43273c(&StringLiteral_tank_12f6570);
        native_sub_43273c(&StringLiteral_ContainerSelectTankOper_12ed278);
        bRam000000000133f5f0 = 1;
      }
      if (((*(byte *)(_PanelMainUIController_TypeInfo_12d5600 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_PanelMainUIController_TypeInfo_12d5600 + 0xe0) == 0)) {
        native_sub_4327ec();
      }
      *(undefined8 *)(*(long *)(_PanelMainUIController_TypeInfo_12d5600 + 0xb8) + 0x58) =
           _StringLiteral_tank_12f6570;
      native_sub_4326e0();
      native_PanelMainUIController__CleanAllUI_73954c(lVar7);
      uVar2 = _StringLiteral_ContainerSelectTankOper_12ed278;
    }
    else {
      if ((bRam000000000133f5ef & 1) == 0) {
        native_sub_43273c(&PanelMainUIController_TypeInfo_12d5600);
        native_sub_43273c(&StringLiteral_ContainerSelectCarOper_12ed270);
        native_sub_43273c(&StringLiteral_car_12f3d28);
        bRam000000000133f5ef = 1;
      }
      if (((*(byte *)(_PanelMainUIController_TypeInfo_12d5600 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_PanelMainUIController_TypeInfo_12d5600 + 0xe0) == 0)) {
        native_sub_4327ec();
      }
      *(undefined8 *)(*(long *)(_PanelMainUIController_TypeInfo_12d5600 + 0xb8) + 0x58) =
           _StringLiteral_car_12f3d28;
      native_sub_4326e0();
      native_PanelMainUIController__CleanAllUI_73954c(lVar7);
      uVar2 = _StringLiteral_ContainerSelectCarOper_12ed270;
    }
    if ((bRam000000000133f5e5 & 1) == 0) {
      native_sub_43273c(&GameResourcesManager_TypeInfo_12d47e0);
      native_sub_43273c(&NGUITools_TypeInfo_12d53c8);
      bRam000000000133f5e5 = 1;
    }
    if (((*(byte *)(_GameResourcesManager_TypeInfo_12d47e0 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_GameResourcesManager_TypeInfo_12d47e0 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    lVar5 = native_GameResourcesManager__GetUIPrefab_defa08(uVar2,0);
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
                        (lVar5,uVar2,_Method_UnityEngine_Object_Instantiate_GameObject____12e5a68);
      uVar6 = native_UnityEngine_Object__op_Inequality_8d76fc(lVar3,0,0);
      if ((uVar6 & 1) == 0) {
        return lVar3;
      }
      if ((lVar3 != 0) &&
         (lVar4 = native_UnityEngine_GameObject__get_transform_8de5c8(lVar3,0), lVar5 != 0)) {
        uVar2 = native_UnityEngine_Object__get_name_8e8098(lVar5,0);
        native_UnityEngine_Object__set_name_8e9c08(lVar3,uVar2,0);
        if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
           (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
          native_sub_4327ec();
        }
        uVar6 = native_UnityEngine_Object__op_Inequality_8d76fc(lVar7,0,0);
        if ((uVar6 & 1) != 0) {
          uVar1 = native_UnityEngine_GameObject__get_layer_8de608(lVar7,0);
          native_UnityEngine_GameObject__set_layer_8de648(lVar3,uVar1,0);
        }
        native_UnityEngine_Vector3__get_zero_776668(0);
        if (lVar4 != 0) {
          native_UnityEngine_Transform__set_localPosition_7718a4(lVar4,0);
          native_UnityEngine_Quaternion__get_identity_7628fc(0);
          native_UnityEngine_Transform__set_localRotation_771984(lVar4,0);
          native_UnityEngine_Vector3__get_one_776a20(0);
          native_UnityEngine_Transform__set_localScale_771e30(lVar4,0);
          native_UnityEngine_GameObject__SetActive_8de698(lVar3,1,0);
          return lVar3;
        }
      }
    }
                    /* WARNING: Subroutine does not return */
    native_sub_432810();
  }
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* ContainerRemoveCarProgrameUIController$$OnClickButtonBiancheng @ 0xde2ba0
 * void ContainerRemoveCarProgrameUIController__OnClickButtonBiancheng (ContainerRemoveCarProgrameUIController_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ContainerRemoveCarProgrameUIController$$OnClickButtonBiancheng
   void ContainerRemoveCarProgrameUIController__OnClickButtonBiancheng
   (ContainerRemoveCarProgrameUIController_o* __this, const MethodInfo* method); */

void native_ContainerRemoveCarProgrameUIController__OnClickButtonBiancheng_de2ba0(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uStack_28;
  
  if ((bRam0000000001346e9f & 1) == 0) {
    native_sub_43273c(&UnityEngine_SceneManagement_SceneManager_TypeInfo_12d5bc0);
    native_sub_43273c(&StringLiteral_Biancheng_12ec798);
    bRam0000000001346e9f = 1;
  }
  if (((*(byte *)(_UnityEngine_SceneManagement_SceneManager_TypeInfo_12d5bc0 + 0x133) >> 2 & 1) != 0
      ) && (*(int *)(_UnityEngine_SceneManagement_SceneManager_TypeInfo_12d5bc0 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar1 = _StringLiteral_Biancheng_12ec798;
  if ((bRam000000000133fa5d & 1) == 0) {
    native_sub_43273c(&UnityEngine_SceneManagement_SceneManager_TypeInfo_12d5bc0,0);
    bRam000000000133fa5d = 1;
  }
  uStack_28 = 0;
  native_UnityEngine_SceneManagement_LoadSceneParameters___ctor_8e2120(&uStack_28,0,0);
  uVar2 = uStack_28;
  if (((*(byte *)(_UnityEngine_SceneManagement_SceneManager_TypeInfo_12d5bc0 + 0x133) >> 2 & 1) != 0
      ) && (*(int *)(_UnityEngine_SceneManagement_SceneManager_TypeInfo_12d5bc0 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  native_UnityEngine_SceneManagement_SceneManager__LoadScene_769edc(uVar1,uVar2);
  return;
}



/* ContainerRemoveCarProgrameUIController$$OnClickButtonBlesetting @ 0xde2c14
 * void ContainerRemoveCarProgrameUIController__OnClickButtonBlesetting (ContainerRemoveCarProgrameUIController_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ContainerRemoveCarProgrameUIController$$OnClickButtonBlesetting
   void ContainerRemoveCarProgrameUIController__OnClickButtonBlesetting
   (ContainerRemoveCarProgrameUIController_o* __this, const MethodInfo* method); */

void native_ContainerRemoveCarProgrameUIController__OnClickButtonBlesetting_de2c14(long param_1)

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
  
  if ((bRam0000000001346ea0 & 1) == 0) {
    native_sub_43273c(&Method_System_Action_string___ctor___12d7fe8);
    native_sub_43273c(&System_Action_string__TypeInfo_12d2080);
    native_sub_43273c(&byte___TypeInfo_12d3060);
    native_sub_43273c(&ContainerMatchingCodeUIController_TypeInfo_12d3f38);
    native_sub_43273c(&
                      Method_ContainerRemoveCarProgrameUIController__OnClickButtonBlesetting_b__20_4___12e3090
                     );
    native_sub_43273c(&HjdBluetoothHardwareInterface_TypeInfo_12d4938);
    native_sub_43273c(&PanelMainUIController_TypeInfo_12d5600);
    native_sub_43273c(&
                      Method_ContainerRemoveCarProgrameUIController___c__OnClickButtonBlesetting_b__20_0___12e98a0
                     );
    native_sub_43273c(&
                      Method_ContainerRemoveCarProgrameUIController___c__OnClickButtonBlesetting_b__20_1___12e98a8
                     );
    native_sub_43273c(&
                      Method_ContainerRemoveCarProgrameUIController___c__OnClickButtonBlesetting_b__20_2___12e98b0
                     );
    native_sub_43273c(&
                      Method_ContainerRemoveCarProgrameUIController___c__OnClickButtonBlesetting_b__20_3___12e98b8
                     );
    native_sub_43273c(&ContainerRemoveCarProgrameUIController___c_TypeInfo_12d7180);
    native_sub_43273c(&StringLiteral_ContainerMatchingCode_12ed220);
    bRam0000000001346ea0 = 1;
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
LAB_00de321c:
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
  if (lVar6 == 0) goto LAB_00de321c;
  uVar9 = (uint)*(undefined8 *)(lVar6 + 0x18);
  if ((uVar9 == 0) || (*(undefined1 *)(lVar6 + 0x20) = *(undefined1 *)(param_1 + 0x18), uVar9 == 1))
  {
LAB_00de3210:
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
           uVar9 < 8)) goto LAB_00de3210;
  *(undefined1 *)(lVar6 + 0x27) =
       *(undefined1 *)(*(long *)(_HjdBluetoothHardwareInterface_TypeInfo_12d4938 + 0xb8) + 0x14);
  if (((*(byte *)(_ContainerRemoveCarProgrameUIController___c_TypeInfo_12d7180 + 0x133) >> 2 & 1) !=
       0) && (*(int *)(_ContainerRemoveCarProgrameUIController___c_TypeInfo_12d7180 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  puVar7 = *(undefined8 **)(_ContainerRemoveCarProgrameUIController___c_TypeInfo_12d7180 + 0xb8);
  lVar14 = puVar7[1];
  if (lVar14 == 0) {
    if (((*(byte *)(_ContainerRemoveCarProgrameUIController___c_TypeInfo_12d7180 + 0x133) >> 2 & 1)
         != 0) &&
       (*(int *)(_ContainerRemoveCarProgrameUIController___c_TypeInfo_12d7180 + 0xe0) == 0)) {
      native_sub_4327ec();
      puVar7 = *(undefined8 **)(_ContainerRemoveCarProgrameUIController___c_TypeInfo_12d7180 + 0xb8)
      ;
    }
    uVar12 = *puVar7;
    lVar14 = native_sub_432808(_System_Action_string__TypeInfo_12d2080);
    native_System_Action_Font____ctor_9867a8
              (lVar14,uVar12,
               _Method_ContainerRemoveCarProgrameUIController___c__OnClickButtonBlesetting_b__20_0___12e98a0
               ,_Method_System_Action_string___ctor___12d7fe8);
    plVar8 = (long *)(*(long *)(_ContainerRemoveCarProgrameUIController___c_TypeInfo_12d7180 + 0xb8)
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
  if (((*(byte *)(_ContainerRemoveCarProgrameUIController___c_TypeInfo_12d7180 + 0x133) >> 2 & 1) !=
       0) && (*(int *)(_ContainerRemoveCarProgrameUIController___c_TypeInfo_12d7180 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  puVar7 = *(undefined8 **)(_ContainerRemoveCarProgrameUIController___c_TypeInfo_12d7180 + 0xb8);
  lVar14 = puVar7[2];
  if (lVar14 == 0) {
    if (((*(byte *)(_ContainerRemoveCarProgrameUIController___c_TypeInfo_12d7180 + 0x133) >> 2 & 1)
         != 0) &&
       (*(int *)(_ContainerRemoveCarProgrameUIController___c_TypeInfo_12d7180 + 0xe0) == 0)) {
      native_sub_4327ec();
      puVar7 = *(undefined8 **)(_ContainerRemoveCarProgrameUIController___c_TypeInfo_12d7180 + 0xb8)
      ;
    }
    uVar12 = *puVar7;
    lVar14 = native_sub_432808(_System_Action_string__TypeInfo_12d2080);
    native_System_Action_Font____ctor_9867a8
              (lVar14,uVar12,
               _Method_ContainerRemoveCarProgrameUIController___c__OnClickButtonBlesetting_b__20_1___12e98a8
               ,_Method_System_Action_string___ctor___12d7fe8);
    plVar8 = (long *)(*(long *)(_ContainerRemoveCarProgrameUIController___c_TypeInfo_12d7180 + 0xb8)
                     + 0x10);
    *plVar8 = lVar14;
    native_sub_4326e0(plVar8,lVar14);
  }
  if (((*(byte *)(_HjdBluetoothHardwareInterface_TypeInfo_12d4938 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_HjdBluetoothHardwareInterface_TypeInfo_12d4938 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  native_HjdBluetoothHardwareInterface__StartAdvertising_dc4054(lVar14,lVar6,0);
  if (((*(byte *)(_ContainerRemoveCarProgrameUIController___c_TypeInfo_12d7180 + 0x133) >> 2 & 1) !=
       0) && (*(int *)(_ContainerRemoveCarProgrameUIController___c_TypeInfo_12d7180 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  puVar7 = *(undefined8 **)(_ContainerRemoveCarProgrameUIController___c_TypeInfo_12d7180 + 0xb8);
  lVar6 = puVar7[3];
  if (lVar6 == 0) {
    if (((*(byte *)(_ContainerRemoveCarProgrameUIController___c_TypeInfo_12d7180 + 0x133) >> 2 & 1)
         != 0) &&
       (*(int *)(_ContainerRemoveCarProgrameUIController___c_TypeInfo_12d7180 + 0xe0) == 0)) {
      native_sub_4327ec();
      puVar7 = *(undefined8 **)(_ContainerRemoveCarProgrameUIController___c_TypeInfo_12d7180 + 0xb8)
      ;
    }
    uVar12 = *puVar7;
    lVar6 = native_sub_432808(_System_Action_string__TypeInfo_12d2080);
    native_System_Action_Font____ctor_9867a8
              (lVar6,uVar12,
               _Method_ContainerRemoveCarProgrameUIController___c__OnClickButtonBlesetting_b__20_2___12e98b0
               ,_Method_System_Action_string___ctor___12d7fe8);
    plVar8 = (long *)(*(long *)(_ContainerRemoveCarProgrameUIController___c_TypeInfo_12d7180 + 0xb8)
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
  if (((*(byte *)(_ContainerRemoveCarProgrameUIController___c_TypeInfo_12d7180 + 0x133) >> 2 & 1) !=
       0) && (*(int *)(_ContainerRemoveCarProgrameUIController___c_TypeInfo_12d7180 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  puVar7 = *(undefined8 **)(_ContainerRemoveCarProgrameUIController___c_TypeInfo_12d7180 + 0xb8);
  lVar6 = puVar7[4];
  if (lVar6 == 0) {
    if (((*(byte *)(_ContainerRemoveCarProgrameUIController___c_TypeInfo_12d7180 + 0x133) >> 2 & 1)
         != 0) &&
       (*(int *)(_ContainerRemoveCarProgrameUIController___c_TypeInfo_12d7180 + 0xe0) == 0)) {
      native_sub_4327ec();
      puVar7 = *(undefined8 **)(_ContainerRemoveCarProgrameUIController___c_TypeInfo_12d7180 + 0xb8)
      ;
    }
    uVar12 = *puVar7;
    lVar6 = native_sub_432808(_System_Action_string__TypeInfo_12d2080);
    native_System_Action_Font____ctor_9867a8
              (lVar6,uVar12,
               _Method_ContainerRemoveCarProgrameUIController___c__OnClickButtonBlesetting_b__20_3___12e98b8
               ,_Method_System_Action_string___ctor___12d7fe8);
    plVar8 = (long *)(*(long *)(_ContainerRemoveCarProgrameUIController___c_TypeInfo_12d7180 + 0xb8)
                     + 0x20);
    *plVar8 = lVar6;
    native_sub_4326e0(plVar8,lVar6);
  }
  uVar12 = native_sub_432808(_System_Action_string__TypeInfo_12d2080);
  native_System_Action_Font____ctor_9867a8
            (uVar12,param_1,
             _Method_ContainerRemoveCarProgrameUIController__OnClickButtonBlesetting_b__20_4___12e3090
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



/* ContainerRemoveCarProgrameUIController$$Update @ 0xde3220
 * void ContainerRemoveCarProgrameUIController__Update (ContainerRemoveCarProgrameUIController_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ContainerRemoveCarProgrameUIController$$Update
   void ContainerRemoveCarProgrameUIController__Update (ContainerRemoveCarProgrameUIController_o*
   __this, const MethodInfo* method); */

void native_ContainerRemoveCarProgrameUIController__Update_de3220(long param_1)

{
  long lVar1;
  ulong uVar2;
  uint uVar3;
  undefined8 *puVar4;
  int iVar5;
  long lVar6;
  long *plVar7;
  undefined8 uVar8;
  
  if ((bRam0000000001346ea1 & 1) == 0) {
    native_sub_43273c(&Method_System_Action_string___ctor___12d7fe8);
    native_sub_43273c(&System_Action_string__TypeInfo_12d2080);
    native_sub_43273c(&byte___TypeInfo_12d3060);
    native_sub_43273c(&ContainerRemoveCarProgrameUIController_TypeInfo_12d3f68);
    native_sub_43273c(&HjdBluetoothHardwareInterface_TypeInfo_12d4938);
    native_sub_43273c(&PanelMainUIController_TypeInfo_12d5600);
    native_sub_43273c(&Method_ContainerRemoveCarProgrameUIController___c__Update_b__23_0___12e98c0);
    native_sub_43273c(&Method_ContainerRemoveCarProgrameUIController___c__Update_b__23_1___12e98c8);
    native_sub_43273c(&Method_ContainerRemoveCarProgrameUIController___c__Update_b__23_2___12e98d0);
    native_sub_43273c(&ContainerRemoveCarProgrameUIController___c_TypeInfo_12d7180);
    native_sub_43273c(&StringLiteral_button_ble_12f3c98);
    native_sub_43273c(&StringLiteral_button_ble_noactive_12f3ca0);
    bRam0000000001346ea1 = 1;
  }
  if (((*(byte *)(_PanelMainUIController_TypeInfo_12d5600 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_PanelMainUIController_TypeInfo_12d5600 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  if (*(long *)(param_1 + 0x50) == 0) {
LAB_00de3a3c:
                    /* WARNING: Subroutine does not return */
    native_sub_432810();
  }
  if (*(char *)(*(long *)(_PanelMainUIController_TypeInfo_12d5600 + 0xb8) + 0x20) == '\0') {
    puVar4 = (undefined8 *)&StringLiteral_button_ble_noactive_12f3ca0;
  }
  else {
    puVar4 = (undefined8 *)&StringLiteral_button_ble_12f3c98;
  }
  native_UISprite__set_spriteName_c35c6c(*(long *)(param_1 + 0x50),*puVar4,0);
  if (((*(byte *)(_PanelMainUIController_TypeInfo_12d5600 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_PanelMainUIController_TypeInfo_12d5600 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  if (*(char *)(*(long *)(_PanelMainUIController_TypeInfo_12d5600 + 0xb8) + 0x20) != '\0') {
    lVar1 = native_sub_432750(_byte___TypeInfo_12d3060,10);
    plVar7 = (long *)(param_1 + 0x28);
    *plVar7 = lVar1;
    native_sub_4326e0(plVar7,lVar1);
    if (*(int *)(param_1 + 0x5c) == 0) {
      *(undefined4 *)(param_1 + 0x5c) = 0xc;
      iVar5 = 1;
      if (*(int *)(param_1 + 0x58) + 1 < 0xfb) {
        iVar5 = *(int *)(param_1 + 0x58) + 1;
      }
      *(int *)(param_1 + 0x58) = iVar5;
    }
    else {
      iVar5 = *(int *)(param_1 + 0x58);
    }
    lVar1 = *plVar7;
    if (lVar1 == 0) goto LAB_00de3a3c;
    if (*(int *)(lVar1 + 0x18) == 0) goto LAB_00de3a30;
    *(undefined1 *)(lVar1 + 0x20) = 0;
    lVar1 = *plVar7;
    if (lVar1 == 0) goto LAB_00de3a3c;
    if (*(uint *)(lVar1 + 0x18) < 2) goto LAB_00de3a30;
    *(undefined1 *)(lVar1 + 0x21) = 0;
    lVar1 = *plVar7;
    if (lVar1 == 0) goto LAB_00de3a3c;
    if (*(uint *)(lVar1 + 0x18) < 3) goto LAB_00de3a30;
    *(undefined1 *)(lVar1 + 0x22) = 0;
    lVar1 = *plVar7;
    if (lVar1 == 0) goto LAB_00de3a3c;
    if (*(uint *)(lVar1 + 0x18) < 4) goto LAB_00de3a30;
    *(undefined1 *)(lVar1 + 0x23) = 0;
    lVar1 = *plVar7;
    if (lVar1 == 0) goto LAB_00de3a3c;
    if (*(uint *)(lVar1 + 0x18) < 5) goto LAB_00de3a30;
    *(undefined1 *)(lVar1 + 0x24) = 0;
    lVar1 = *plVar7;
    if (lVar1 == 0) goto LAB_00de3a3c;
    if (*(uint *)(lVar1 + 0x18) < 6) goto LAB_00de3a30;
    *(undefined1 *)(lVar1 + 0x25) = 0;
    lVar1 = *plVar7;
    if (lVar1 == 0) goto LAB_00de3a3c;
    if (*(uint *)(lVar1 + 0x18) < 7) goto LAB_00de3a30;
    *(char *)(lVar1 + 0x26) = (char)iVar5;
    uVar2 = native_Assets_Scripts_Tools_HjdBleTool__data_isalike_7f6e28
                      (*(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x30),0);
    if (((uVar2 & 1) == 0) && (*(int *)(param_1 + 0x48) == 0)) {
      native_Assets_Scripts_Tools_HjdBleTool__data_copy_7f6ea8
                (*(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x30),0);
      lVar1 = native_sub_432750(_byte___TypeInfo_12d3060,0x13);
      if (lVar1 == 0) goto LAB_00de3a3c;
      if ((*(int *)(lVar1 + 0x18) == 0) ||
         (*(undefined1 *)(lVar1 + 0x20) = *(undefined1 *)(param_1 + 0x18),
         *(int *)(lVar1 + 0x18) == 1)) goto LAB_00de3a30;
      *(undefined1 *)(lVar1 + 0x21) = *(undefined1 *)(param_1 + 0x1a);
      if (((*(byte *)(_PanelMainUIController_TypeInfo_12d5600 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_PanelMainUIController_TypeInfo_12d5600 + 0xe0) == 0)) {
        native_sub_4327ec();
      }
      lVar6 = *(long *)(*(long *)(_PanelMainUIController_TypeInfo_12d5600 + 0xb8) + 0x18);
      if (lVar6 == 0) goto LAB_00de3a3c;
      if (*(int *)(lVar6 + 0x18) == 0) {
LAB_00de3a30:
        uVar8 = native_sub_43283c();
                    /* WARNING: Subroutine does not return */
        native_sub_4327dc(uVar8,0);
      }
      uVar3 = (uint)*(undefined8 *)(lVar1 + 0x18);
      if (uVar3 < 3) goto LAB_00de3a30;
      *(undefined1 *)(lVar1 + 0x22) = *(undefined1 *)(lVar6 + 0x20);
      lVar6 = *(long *)(*(long *)(_PanelMainUIController_TypeInfo_12d5600 + 0xb8) + 0x18);
      if (lVar6 == 0) goto LAB_00de3a3c;
      if ((*(uint *)(lVar6 + 0x18) < 2) || (uVar3 < 4)) goto LAB_00de3a30;
      *(undefined1 *)(lVar1 + 0x23) = *(undefined1 *)(lVar6 + 0x21);
      lVar6 = *(long *)(*(long *)(_PanelMainUIController_TypeInfo_12d5600 + 0xb8) + 0x18);
      if (lVar6 == 0) goto LAB_00de3a3c;
      if ((*(uint *)(lVar6 + 0x18) < 3) || (uVar3 < 5)) goto LAB_00de3a30;
      *(undefined1 *)(lVar1 + 0x24) = *(undefined1 *)(lVar6 + 0x22);
      if (((*(byte *)(_HjdBluetoothHardwareInterface_TypeInfo_12d4938 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_HjdBluetoothHardwareInterface_TypeInfo_12d4938 + 0xe0) == 0)) {
        native_sub_4327ec();
        uVar3 = (uint)*(undefined8 *)(lVar1 + 0x18);
      }
      if (((uVar3 < 6) ||
          (*(undefined1 *)(lVar1 + 0x25) =
                *(undefined1 *)
                 (*(long *)(_HjdBluetoothHardwareInterface_TypeInfo_12d4938 + 0xb8) + 0x12),
          uVar3 == 6)) ||
         (*(undefined1 *)(lVar1 + 0x26) =
               *(undefined1 *)
                (*(long *)(_HjdBluetoothHardwareInterface_TypeInfo_12d4938 + 0xb8) + 0x13),
         uVar3 < 8)) goto LAB_00de3a30;
      *(undefined1 *)(lVar1 + 0x27) =
           *(undefined1 *)(*(long *)(_HjdBluetoothHardwareInterface_TypeInfo_12d4938 + 0xb8) + 0x14)
      ;
      lVar6 = *plVar7;
      if (lVar6 == 0) goto LAB_00de3a3c;
      if ((*(int *)(lVar6 + 0x18) == 0) || (uVar3 < 9)) goto LAB_00de3a30;
      *(undefined1 *)(lVar1 + 0x28) = *(undefined1 *)(lVar6 + 0x20);
      lVar6 = *plVar7;
      if (lVar6 == 0) goto LAB_00de3a3c;
      if ((*(uint *)(lVar6 + 0x18) < 2) || (uVar3 < 10)) goto LAB_00de3a30;
      *(undefined1 *)(lVar1 + 0x29) = *(undefined1 *)(lVar6 + 0x21);
      lVar6 = *plVar7;
      if (lVar6 == 0) goto LAB_00de3a3c;
      if ((*(uint *)(lVar6 + 0x18) < 3) || (uVar3 < 0xb)) goto LAB_00de3a30;
      *(undefined1 *)(lVar1 + 0x2a) = *(undefined1 *)(lVar6 + 0x22);
      lVar6 = *plVar7;
      if (lVar6 == 0) goto LAB_00de3a3c;
      if ((*(uint *)(lVar6 + 0x18) < 4) || (uVar3 < 0xc)) goto LAB_00de3a30;
      *(undefined1 *)(lVar1 + 0x2b) = *(undefined1 *)(lVar6 + 0x23);
      lVar6 = *plVar7;
      if (lVar6 == 0) goto LAB_00de3a3c;
      if ((*(uint *)(lVar6 + 0x18) < 5) || (uVar3 < 0xd)) goto LAB_00de3a30;
      *(undefined1 *)(lVar1 + 0x2c) = *(undefined1 *)(lVar6 + 0x24);
      lVar6 = *plVar7;
      if (lVar6 == 0) goto LAB_00de3a3c;
      if ((*(uint *)(lVar6 + 0x18) < 6) || (uVar3 < 0xe)) goto LAB_00de3a30;
      *(undefined1 *)(lVar1 + 0x2d) = *(undefined1 *)(lVar6 + 0x25);
      lVar6 = *plVar7;
      if (lVar6 == 0) goto LAB_00de3a3c;
      if ((*(uint *)(lVar6 + 0x18) < 7) || (uVar3 < 0xf)) goto LAB_00de3a30;
      *(undefined1 *)(lVar1 + 0x2e) = *(undefined1 *)(lVar6 + 0x26);
      lVar6 = *plVar7;
      if (lVar6 == 0) goto LAB_00de3a3c;
      if ((*(uint *)(lVar6 + 0x18) < 8) || (uVar3 < 0x10)) goto LAB_00de3a30;
      *(undefined1 *)(lVar1 + 0x2f) = *(undefined1 *)(lVar6 + 0x27);
      lVar6 = *plVar7;
      if (lVar6 == 0) goto LAB_00de3a3c;
      if ((*(uint *)(lVar6 + 0x18) < 9) || (uVar3 < 0x11)) goto LAB_00de3a30;
      *(undefined1 *)(lVar1 + 0x30) = *(undefined1 *)(lVar6 + 0x28);
      lVar6 = *plVar7;
      if (lVar6 == 0) goto LAB_00de3a3c;
      if ((*(uint *)(lVar6 + 0x18) < 10) || (uVar3 < 0x12)) goto LAB_00de3a30;
      *(undefined1 *)(lVar1 + 0x31) = *(undefined1 *)(lVar6 + 0x29);
      *(long *)(param_1 + 0x20) = lVar1;
      native_sub_4326e0((long *)(param_1 + 0x20),lVar1);
      *(undefined1 *)(param_1 + 0x1d) = 1;
      *(undefined4 *)(param_1 + 0x48) = 3;
    }
    if (*(char *)(param_1 + 0x1d) != '\0') {
      *(undefined1 *)(param_1 + 0x1d) = 0;
      if (((*(byte *)(_ContainerRemoveCarProgrameUIController___c_TypeInfo_12d7180 + 0x133) >> 2 & 1
           ) != 0) &&
         (*(int *)(_ContainerRemoveCarProgrameUIController___c_TypeInfo_12d7180 + 0xe0) == 0)) {
        native_sub_4327ec();
      }
      puVar4 = *(undefined8 **)(_ContainerRemoveCarProgrameUIController___c_TypeInfo_12d7180 + 0xb8)
      ;
      lVar1 = puVar4[5];
      if (lVar1 == 0) {
        if (((*(byte *)(_ContainerRemoveCarProgrameUIController___c_TypeInfo_12d7180 + 0x133) >> 2 &
             1) != 0) &&
           (*(int *)(_ContainerRemoveCarProgrameUIController___c_TypeInfo_12d7180 + 0xe0) == 0)) {
          native_sub_4327ec();
          puVar4 = *(undefined8 **)
                    (_ContainerRemoveCarProgrameUIController___c_TypeInfo_12d7180 + 0xb8);
        }
        uVar8 = *puVar4;
        lVar1 = native_sub_432808(_System_Action_string__TypeInfo_12d2080);
        native_System_Action_Font____ctor_9867a8
                  (lVar1,uVar8,
                   _Method_ContainerRemoveCarProgrameUIController___c__Update_b__23_0___12e98c0,
                   _Method_System_Action_string___ctor___12d7fe8);
        plVar7 = (long *)(*(long *)(_ContainerRemoveCarProgrameUIController___c_TypeInfo_12d7180 +
                                   0xb8) + 0x28);
        *plVar7 = lVar1;
        native_sub_4326e0(plVar7,lVar1);
      }
      if (((*(byte *)(_HjdBluetoothHardwareInterface_TypeInfo_12d4938 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_HjdBluetoothHardwareInterface_TypeInfo_12d4938 + 0xe0) == 0)) {
        native_sub_4327ec();
      }
      native_HjdBluetoothHardwareInterface__StopAdvertising_dc423c(lVar1,0);
      if (((*(byte *)(_ContainerRemoveCarProgrameUIController___c_TypeInfo_12d7180 + 0x133) >> 2 & 1
           ) != 0) &&
         (*(int *)(_ContainerRemoveCarProgrameUIController___c_TypeInfo_12d7180 + 0xe0) == 0)) {
        native_sub_4327ec();
      }
      puVar4 = *(undefined8 **)(_ContainerRemoveCarProgrameUIController___c_TypeInfo_12d7180 + 0xb8)
      ;
      lVar1 = puVar4[6];
      if (lVar1 == 0) {
        if (((*(byte *)(_ContainerRemoveCarProgrameUIController___c_TypeInfo_12d7180 + 0x133) >> 2 &
             1) != 0) &&
           (*(int *)(_ContainerRemoveCarProgrameUIController___c_TypeInfo_12d7180 + 0xe0) == 0)) {
          native_sub_4327ec();
          puVar4 = *(undefined8 **)
                    (_ContainerRemoveCarProgrameUIController___c_TypeInfo_12d7180 + 0xb8);
        }
        uVar8 = *puVar4;
        lVar1 = native_sub_432808(_System_Action_string__TypeInfo_12d2080);
        native_System_Action_Font____ctor_9867a8
                  (lVar1,uVar8,
                   _Method_ContainerRemoveCarProgrameUIController___c__Update_b__23_1___12e98c8,
                   _Method_System_Action_string___ctor___12d7fe8);
        plVar7 = (long *)(*(long *)(_ContainerRemoveCarProgrameUIController___c_TypeInfo_12d7180 +
                                   0xb8) + 0x30);
        *plVar7 = lVar1;
        native_sub_4326e0(plVar7,lVar1);
      }
      uVar8 = *(undefined8 *)(param_1 + 0x20);
      if (((*(byte *)(_HjdBluetoothHardwareInterface_TypeInfo_12d4938 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_HjdBluetoothHardwareInterface_TypeInfo_12d4938 + 0xe0) == 0)) {
        native_sub_4327ec();
      }
      native_HjdBluetoothHardwareInterface__StartAdvertising_dc4054(lVar1,uVar8,0);
      if (((*(byte *)(_ContainerRemoveCarProgrameUIController___c_TypeInfo_12d7180 + 0x133) >> 2 & 1
           ) != 0) &&
         (*(int *)(_ContainerRemoveCarProgrameUIController___c_TypeInfo_12d7180 + 0xe0) == 0)) {
        native_sub_4327ec();
      }
      puVar4 = *(undefined8 **)(_ContainerRemoveCarProgrameUIController___c_TypeInfo_12d7180 + 0xb8)
      ;
      lVar1 = puVar4[7];
      if (lVar1 == 0) {
        if (((*(byte *)(_ContainerRemoveCarProgrameUIController___c_TypeInfo_12d7180 + 0x133) >> 2 &
             1) != 0) &&
           (*(int *)(_ContainerRemoveCarProgrameUIController___c_TypeInfo_12d7180 + 0xe0) == 0)) {
          native_sub_4327ec();
          puVar4 = *(undefined8 **)
                    (_ContainerRemoveCarProgrameUIController___c_TypeInfo_12d7180 + 0xb8);
        }
        uVar8 = *puVar4;
        lVar1 = native_sub_432808(_System_Action_string__TypeInfo_12d2080);
        native_System_Action_Font____ctor_9867a8
                  (lVar1,uVar8,
                   _Method_ContainerRemoveCarProgrameUIController___c__Update_b__23_2___12e98d0,
                   _Method_System_Action_string___ctor___12d7fe8);
        plVar7 = (long *)(*(long *)(_ContainerRemoveCarProgrameUIController___c_TypeInfo_12d7180 +
                                   0xb8) + 0x38);
        *plVar7 = lVar1;
        native_sub_4326e0(plVar7,lVar1);
      }
      uVar8 = *(undefined8 *)(param_1 + 0x20);
      if (((*(byte *)(_HjdBluetoothHardwareInterface_TypeInfo_12d4938 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_HjdBluetoothHardwareInterface_TypeInfo_12d4938 + 0xe0) == 0)) {
        native_sub_4327ec();
      }
      native_HjdBluetoothHardwareInterface__StartAdvertising_dc4054(lVar1,uVar8,0);
    }
    lVar1 = native_ContainerRemoveCarProgrameUIController__gethaomiao_de3a40();
    if (((*(byte *)(_ContainerRemoveCarProgrameUIController_TypeInfo_12d3f68 + 0x133) >> 2 & 1) != 0
        ) && (*(int *)(_ContainerRemoveCarProgrameUIController_TypeInfo_12d3f68 + 0xe0) == 0)) {
      native_sub_4327ec(_ContainerRemoveCarProgrameUIController_TypeInfo_12d3f68);
    }
    if (0x31 < lVar1 - **(long **)(_ContainerRemoveCarProgrameUIController_TypeInfo_12d3f68 + 0xb8))
    {
      uVar8 = native_ContainerRemoveCarProgrameUIController__gethaomiao_de3a40();
      if (((*(byte *)(_ContainerRemoveCarProgrameUIController_TypeInfo_12d3f68 + 0x133) >> 2 & 1) !=
           0) && (*(int *)(_ContainerRemoveCarProgrameUIController_TypeInfo_12d3f68 + 0xe0) == 0)) {
        native_sub_4327ec(_ContainerRemoveCarProgrameUIController_TypeInfo_12d3f68);
      }
      **(undefined8 **)(_ContainerRemoveCarProgrameUIController_TypeInfo_12d3f68 + 0xb8) = uVar8;
      if (0 < *(int *)(param_1 + 0x48)) {
        *(int *)(param_1 + 0x48) = *(int *)(param_1 + 0x48) + -1;
      }
      if (0 < *(int *)(param_1 + 0x5c)) {
        *(int *)(param_1 + 0x5c) = *(int *)(param_1 + 0x5c) + -1;
      }
    }
  }
  return;
}



/* ContainerRemoveCarProgrameUIController$$gethaomiao @ 0xde3a40
 * int64_t ContainerRemoveCarProgrameUIController__gethaomiao (ContainerRemoveCarProgrameUIController_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ContainerRemoveCarProgrameUIController$$gethaomiao
   int64_t ContainerRemoveCarProgrameUIController__gethaomiao
   (ContainerRemoveCarProgrameUIController_o* __this, const MethodInfo* method); */

long native_ContainerRemoveCarProgrameUIController__gethaomiao_de3a40(void)

{
  long lVar1;
  undefined8 uStack_18;
  
  if ((bRam0000000001346ea2 & 1) == 0) {
    native_sub_43273c(&System_DateTime_TypeInfo_12d42f8);
    bRam0000000001346ea2 = 1;
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



/* ContainerRemoveCarProgrameUIController$$Awake @ 0xde3af4
 * void ContainerRemoveCarProgrameUIController__Awake (ContainerRemoveCarProgrameUIController_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ContainerRemoveCarProgrameUIController$$Awake
   void ContainerRemoveCarProgrameUIController__Awake (ContainerRemoveCarProgrameUIController_o*
   __this, const MethodInfo* method); */

void native_ContainerRemoveCarProgrameUIController__Awake_de3af4(long param_1)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  
  if ((bRam0000000001346ea3 & 1) == 0) {
    native_sub_43273c(&StringLiteral_ButtonProgrameResult_12ec900);
    native_sub_43273c(&StringLiteral_ButtonBiancheng_12ec880);
    native_sub_43273c(&StringLiteral_ButtonProgrameToptool_12ec908);
    bRam0000000001346ea3 = 1;
  }
  lVar4 = native_UnityEngine_GameObject__Find_8dead0(_StringLiteral_ButtonProgrameToptool_12ec908,0)
  ;
  if (lVar4 != 0) {
    uVar5 = native_UnityEngine_GameObject__get_gameObject_8debb8(lVar4,0);
    *(undefined8 *)(param_1 + 0x60) = uVar5;
    native_sub_4326e0();
    lVar4 = native_UnityEngine_GameObject__Find_8dead0(_StringLiteral_ButtonBiancheng_12ec880,0);
    if (lVar4 != 0) {
      uVar5 = native_UnityEngine_GameObject__get_gameObject_8debb8(lVar4,0);
      *(undefined8 *)(param_1 + 0x68) = uVar5;
      native_sub_4326e0();
      lVar4 = native_UnityEngine_GameObject__Find_8dead0
                        (_StringLiteral_ButtonProgrameResult_12ec900,0);
      if (lVar4 != 0) {
        uVar5 = native_UnityEngine_GameObject__get_gameObject_8debb8(lVar4,0);
        puVar6 = (undefined8 *)(param_1 + 0x70);
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



/* ContainerRemoveCarProgrameUIController$$.ctor @ 0xde3bd8
 * void ContainerRemoveCarProgrameUIController___ctor (ContainerRemoveCarProgrameUIController_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ContainerRemoveCarProgrameUIController$$.ctor
   void ContainerRemoveCarProgrameUIController___ctor (ContainerRemoveCarProgrameUIController_o*
   __this, const MethodInfo* method); */

long native_ContainerRemoveCarProgrameUIController___ctor_de3bd8(long param_1)

{
  undefined8 uVar1;
  
  if ((bRam0000000001346ea4 & 1) == 0) {
    native_sub_43273c(&byte___TypeInfo_12d3060);
    bRam0000000001346ea4 = 1;
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
  *(undefined8 *)(param_1 + 0x38) = 0x100000001;
  *(undefined4 *)(param_1 + 0x58) = 1;
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



/* ContainerRemoveCarProgrameUIController$$.cctor @ 0xde3c9c
 * void ContainerRemoveCarProgrameUIController___cctor (const MethodInfo* method); */

/* ContainerRemoveCarProgrameUIController$$.cctor
   void ContainerRemoveCarProgrameUIController___cctor (const MethodInfo* method); */

void native_ContainerRemoveCarProgrameUIController___cctor_de3c9c(void)

{
  return;
}



/* ContainerRemoveCarProgrameUIController$$<OnClickButtonBlesetting>b__20_4 @ 0xde3ca0
 * void ContainerRemoveCarProgrameUIController___OnClickButtonBlesetting_b__20_4 (ContainerRemoveCarProgrameUIController_o* __this, System_String_o* data, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ContainerRemoveCarProgrameUIController$$<OnClickButtonBlesetting>b__20_4
   void ContainerRemoveCarProgrameUIController___OnClickButtonBlesetting_b__20_4
   (ContainerRemoveCarProgrameUIController_o* __this, System_String_o* data, const MethodInfo*
   method); */

void native_ContainerRemoveCarProgrameUIController___OnClickButtonBlesetting_b__20_4_de3ca0
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
  
  if ((bRam0000000001346ea5 & 1) == 0) {
    native_sub_43273c(&byte___TypeInfo_12d3060);
    native_sub_43273c(&ContainerMatchingCodeUIController_TypeInfo_12d3f38);
    native_sub_43273c(&System_Convert_TypeInfo_12d3fd0);
    native_sub_43273c(&HjdBluetoothHardwareInterface_TypeInfo_12d4938);
    native_sub_43273c(&PanelMainUIController_TypeInfo_12d5600);
    bRam0000000001346ea5 = 1;
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
      if (lVar11 == 0) goto LAB_00de4220;
      if (*(int *)(lVar11 + 0x18) != 0) {
        *(undefined1 *)(lVar11 + 0x20) = *(undefined1 *)(lVar8 + (int)uVar6 + 0x20);
        if (uVar6 + 1 < *(uint *)(lVar8 + 0x18)) {
          lVar11 = *(long *)(*(long *)(_PanelMainUIController_TypeInfo_12d5600 + 0xb8) + 0x18);
          if (lVar11 == 0) goto LAB_00de4220;
          if (1 < *(uint *)(lVar11 + 0x18)) {
            *(undefined1 *)(lVar11 + 0x21) = *(undefined1 *)(lVar8 + (int)(uVar6 + 1) + 0x20);
            if (uVar6 + 2 < *(uint *)(lVar8 + 0x18)) {
              lVar11 = *(long *)(*(long *)(_PanelMainUIController_TypeInfo_12d5600 + 0xb8) + 0x18);
              if (lVar11 == 0) goto LAB_00de4220;
              if (2 < *(uint *)(lVar11 + 0x18)) {
                *(undefined1 *)(lVar11 + 0x22) = *(undefined1 *)(lVar8 + (int)(uVar6 + 2) + 0x20);
                *(undefined1 *)(*(long *)(_PanelMainUIController_TypeInfo_12d5600 + 0xb8) + 0x20) =
                     1;
                lVar8 = native_sub_432750(_byte___TypeInfo_12d3060,0x13);
                if (lVar8 == 0) goto LAB_00de4220;
                uVar6 = *(uint *)(lVar8 + 0x18);
                if ((uVar6 != 0) &&
                   (*(undefined1 *)(lVar8 + 0x20) = *(undefined1 *)(param_1 + 0x18), uVar6 != 1)) {
                  *(undefined1 *)(lVar8 + 0x21) = *(undefined1 *)(param_1 + 0x1a);
                  lVar11 = *(long *)(*(long *)(_PanelMainUIController_TypeInfo_12d5600 + 0xb8) +
                                    0x18);
                  if (lVar11 == 0) goto LAB_00de4220;
                  if ((*(int *)(lVar11 + 0x18) != 0) && (2 < uVar6)) {
                    *(undefined1 *)(lVar8 + 0x22) = *(undefined1 *)(lVar11 + 0x20);
                    lVar11 = *(long *)(*(long *)(_PanelMainUIController_TypeInfo_12d5600 + 0xb8) +
                                      0x18);
                    if (lVar11 == 0) goto LAB_00de4220;
                    if ((1 < *(uint *)(lVar11 + 0x18)) && (3 < uVar6)) {
                      *(undefined1 *)(lVar8 + 0x23) = *(undefined1 *)(lVar11 + 0x21);
                      lVar11 = *(long *)(*(long *)(_PanelMainUIController_TypeInfo_12d5600 + 0xb8) +
                                        0x18);
                      if (lVar11 == 0) goto LAB_00de4220;
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
                        if (lVar11 == 0) goto LAB_00de4220;
                        if ((*(int *)(lVar11 + 0x18) != 0) && (8 < uVar6)) {
                          *(undefined1 *)(lVar8 + 0x28) = *(undefined1 *)(lVar11 + 0x20);
                          lVar11 = *plVar13;
                          if (lVar11 == 0) goto LAB_00de4220;
                          if ((1 < *(uint *)(lVar11 + 0x18)) && (9 < uVar6)) {
                            *(undefined1 *)(lVar8 + 0x29) = *(undefined1 *)(lVar11 + 0x21);
                            lVar11 = *plVar13;
                            if (lVar11 == 0) goto LAB_00de4220;
                            if ((2 < *(uint *)(lVar11 + 0x18)) && (10 < uVar6)) {
                              *(undefined1 *)(lVar8 + 0x2a) = *(undefined1 *)(lVar11 + 0x22);
                              lVar11 = *plVar13;
                              if (lVar11 == 0) goto LAB_00de4220;
                              if ((3 < *(uint *)(lVar11 + 0x18)) && (0xb < uVar6)) {
                                *(undefined1 *)(lVar8 + 0x2b) = *(undefined1 *)(lVar11 + 0x23);
                                lVar11 = *plVar13;
                                if (lVar11 == 0) goto LAB_00de4220;
                                if ((4 < *(uint *)(lVar11 + 0x18)) && (0xc < uVar6)) {
                                  *(undefined1 *)(lVar8 + 0x2c) = *(undefined1 *)(lVar11 + 0x24);
                                  lVar11 = *plVar13;
                                  if (lVar11 == 0) goto LAB_00de4220;
                                  if ((5 < *(uint *)(lVar11 + 0x18)) && (0xd < uVar6)) {
                                    *(undefined1 *)(lVar8 + 0x2d) = *(undefined1 *)(lVar11 + 0x25);
                                    lVar11 = *plVar13;
                                    if (lVar11 == 0) goto LAB_00de4220;
                                    if ((6 < *(uint *)(lVar11 + 0x18)) && (0xe < uVar6)) {
                                      *(undefined1 *)(lVar8 + 0x2e) = *(undefined1 *)(lVar11 + 0x26)
                                      ;
                                      lVar11 = *plVar13;
                                      if (lVar11 == 0) goto LAB_00de4220;
                                      if ((7 < *(uint *)(lVar11 + 0x18)) && (0xf < uVar6)) {
                                        *(undefined1 *)(lVar8 + 0x2f) =
                                             *(undefined1 *)(lVar11 + 0x27);
                                        lVar11 = *plVar13;
                                        if (lVar11 == 0) goto LAB_00de4220;
                                        if ((8 < *(uint *)(lVar11 + 0x18)) && (0x10 < uVar6)) {
                                          *(undefined1 *)(lVar8 + 0x30) =
                                               *(undefined1 *)(lVar11 + 0x28);
                                          lVar11 = *plVar13;
                                          if (lVar11 == 0) goto LAB_00de4220;
                                          if ((9 < *(uint *)(lVar11 + 0x18)) && (0x11 < uVar6)) {
                                            *(undefined1 *)(lVar8 + 0x31) =
                                                 *(undefined1 *)(lVar11 + 0x29);
                                            *(long *)(param_1 + 0x20) = lVar8;
                                            native_sub_4326e0((long *)(param_1 + 0x20));
                                            *(undefined1 *)(param_1 + 0x1d) = 0;
                                            *(undefined4 *)(param_1 + 0x48) = 5;
                                            *(undefined8 *)(param_1 + 0x38) = 0x100000001;
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
LAB_00de4220:
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}


