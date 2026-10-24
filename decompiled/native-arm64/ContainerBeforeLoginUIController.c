/* ARM64 IL2CPP native pseudocode from Ghidra.
 * Recovered implementation, not original C# source.
 * Function boundaries follow the IL2CPP method address table. */


/* ContainerBeforeLoginUIController$$Start @ 0xdd6854
 * void ContainerBeforeLoginUIController__Start (ContainerBeforeLoginUIController_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ContainerBeforeLoginUIController$$Start
   void ContainerBeforeLoginUIController__Start (ContainerBeforeLoginUIController_o* __this, const
   MethodInfo* method); */

void native_ContainerBeforeLoginUIController__Start_dd6854(long param_1)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  uint uVar5;
  long lVar6;
  
  if ((bRam0000000001346e50 & 1) == 0) {
    native_sub_43273c(&EventDelegate_Callback_TypeInfo_12d72e8);
    native_sub_43273c(&Method_ContainerBeforeLoginUIController_OnClickButtonSelectCar___12e2fb8);
    native_sub_43273c(&Method_ContainerBeforeLoginUIController_OnClickButtonSelectTank___12e2fc0);
    native_sub_43273c(&Method_ContainerBeforeLoginUIController_OnClickButtonSysout___12e2fc8);
    native_sub_43273c(&EventDelegate_TypeInfo_12d4590);
    native_sub_43273c(&Method_UnityEngine_GameObject_GetComponent_UIButton____12e4a88);
    native_sub_43273c(&Method_UnityEngine_GameObject_GetComponent_UILabel____12e4ac0);
    native_sub_43273c(&Method_System_Collections_Generic_List_EventDelegate__Add___12dc740);
    native_sub_43273c(&PanelMainUIController_TypeInfo_12d5600);
    native_sub_43273c(&StringLiteral_ButtonSelectTanktext_12ec980);
    native_sub_43273c(&StringLiteral_Tank_12f1490);
    native_sub_43273c(&StringLiteral_ButtonSelectCartext_12ec968);
    native_sub_43273c(&StringLiteral_Car_12ecf38);
    bRam0000000001346e50 = 1;
  }
  if (((*(byte *)(_PanelMainUIController_TypeInfo_12d5600 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_PanelMainUIController_TypeInfo_12d5600 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  if (*(char *)(*(long *)(_PanelMainUIController_TypeInfo_12d5600 + 0xb8) + 0xbc) != '\0') {
    lVar2 = native_UnityEngine_GameObject__Find_8dead0
                      (_StringLiteral_ButtonSelectTanktext_12ec980,0);
    if ((lVar2 == 0) ||
       (lVar2 = native_UnityEngine_GameObject__get_gameObject_8debb8(lVar2,0), lVar2 == 0))
    goto LAB_00dd6b50;
    lVar2 = native_UnityEngine_GameObject__GetComponent_BE2_BlockSectionHeader_Custom__4a2214
                      (lVar2,_Method_UnityEngine_GameObject_GetComponent_UILabel____12e4ac0);
    if (lVar2 == 0) goto LAB_00dd6b50;
    native_UILabel__set_text_ae81a8(lVar2,_StringLiteral_Tank_12f1490,0);
    lVar2 = native_UnityEngine_GameObject__Find_8dead0(_StringLiteral_ButtonSelectCartext_12ec968,0)
    ;
    if (((lVar2 == 0) ||
        (lVar2 = native_UnityEngine_GameObject__get_gameObject_8debb8(lVar2,0), lVar2 == 0)) ||
       (lVar2 = native_UnityEngine_GameObject__GetComponent_BE2_BlockSectionHeader_Custom__4a2214
                          (lVar2,_Method_UnityEngine_GameObject_GetComponent_UILabel____12e4ac0),
       lVar2 == 0)) goto LAB_00dd6b50;
    native_UILabel__set_text_ae81a8(lVar2,_StringLiteral_Car_12ecf38,0);
  }
  if (*(long *)(param_1 + 0x28) != 0) {
    lVar2 = native_UnityEngine_GameObject__GetComponent_BE2_BlockSectionHeader_Custom__4a2214
                      (*(long *)(param_1 + 0x28),
                       _Method_UnityEngine_GameObject_GetComponent_UIButton____12e4a88);
    if (lVar2 != 0) {
      lVar2 = *(long *)(lVar2 + 0xc0);
      uVar3 = native_sub_432808(_EventDelegate_Callback_TypeInfo_12d72e8);
      native_EventDelegate_Callback___ctor_54bd18
                (uVar3,param_1,
                 _Method_ContainerBeforeLoginUIController_OnClickButtonSelectTank___12e2fc0,0);
      uVar4 = native_sub_432808(_EventDelegate_TypeInfo_12d4590);
      native_EventDelegate___ctor_de0bd0(uVar4,uVar3,0);
      if (lVar2 != 0) {
        native_System_Collections_Generic_List_int_____Add_d40c00
                  (lVar2,uVar4,_Method_System_Collections_Generic_List_EventDelegate__Add___12dc740)
        ;
        if ((*(long *)(param_1 + 0x30) != 0) &&
           (lVar2 = native_UnityEngine_GameObject__GetComponent_BE2_BlockSectionHeader_Custom__4a2214
                              (*(long *)(param_1 + 0x30),
                               _Method_UnityEngine_GameObject_GetComponent_UIButton____12e4a88),
           lVar2 != 0)) {
          lVar2 = *(long *)(lVar2 + 0xc0);
          uVar3 = native_sub_432808(_EventDelegate_Callback_TypeInfo_12d72e8);
          native_EventDelegate_Callback___ctor_54bd18
                    (uVar3,param_1,
                     _Method_ContainerBeforeLoginUIController_OnClickButtonSelectCar___12e2fb8,0);
          uVar4 = native_sub_432808(_EventDelegate_TypeInfo_12d4590);
          native_EventDelegate___ctor_de0bd0(uVar4,uVar3,0);
          if (lVar2 != 0) {
            native_System_Collections_Generic_List_int_____Add_d40c00
                      (lVar2,uVar4,
                       _Method_System_Collections_Generic_List_EventDelegate__Add___12dc740);
            if ((*(long *)(param_1 + 0x38) != 0) &&
               (lVar2 = native_UnityEngine_GameObject__GetComponent_BE2_BlockSectionHeader_Custom__4a2214
                                  (*(long *)(param_1 + 0x38),
                                   _Method_UnityEngine_GameObject_GetComponent_UIButton____12e4a88),
               lVar2 != 0)) {
              lVar2 = *(long *)(lVar2 + 0xc0);
              uVar3 = native_sub_432808(_EventDelegate_Callback_TypeInfo_12d72e8);
              native_EventDelegate_Callback___ctor_54bd18
                        (uVar3,param_1,
                         _Method_ContainerBeforeLoginUIController_OnClickButtonSysout___12e2fc8,0);
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
LAB_00dd6b50:
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* ContainerBeforeLoginUIController$$InitButtonEvent @ 0xdd6858
 * void ContainerBeforeLoginUIController__InitButtonEvent (ContainerBeforeLoginUIController_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ContainerBeforeLoginUIController$$InitButtonEvent
   void ContainerBeforeLoginUIController__InitButtonEvent (ContainerBeforeLoginUIController_o*
   __this, const MethodInfo* method); */

void native_ContainerBeforeLoginUIController__InitButtonEvent_dd6858(long param_1)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  uint uVar5;
  long lVar6;
  
  if ((bRam0000000001346e50 & 1) == 0) {
    native_sub_43273c(&EventDelegate_Callback_TypeInfo_12d72e8);
    native_sub_43273c(&Method_ContainerBeforeLoginUIController_OnClickButtonSelectCar___12e2fb8);
    native_sub_43273c(&Method_ContainerBeforeLoginUIController_OnClickButtonSelectTank___12e2fc0);
    native_sub_43273c(&Method_ContainerBeforeLoginUIController_OnClickButtonSysout___12e2fc8);
    native_sub_43273c(&EventDelegate_TypeInfo_12d4590);
    native_sub_43273c(&Method_UnityEngine_GameObject_GetComponent_UIButton____12e4a88);
    native_sub_43273c(&Method_UnityEngine_GameObject_GetComponent_UILabel____12e4ac0);
    native_sub_43273c(&Method_System_Collections_Generic_List_EventDelegate__Add___12dc740);
    native_sub_43273c(&PanelMainUIController_TypeInfo_12d5600);
    native_sub_43273c(&StringLiteral_ButtonSelectTanktext_12ec980);
    native_sub_43273c(&StringLiteral_Tank_12f1490);
    native_sub_43273c(&StringLiteral_ButtonSelectCartext_12ec968);
    native_sub_43273c(&StringLiteral_Car_12ecf38);
    bRam0000000001346e50 = 1;
  }
  if (((*(byte *)(_PanelMainUIController_TypeInfo_12d5600 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_PanelMainUIController_TypeInfo_12d5600 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  if (*(char *)(*(long *)(_PanelMainUIController_TypeInfo_12d5600 + 0xb8) + 0xbc) != '\0') {
    lVar2 = native_UnityEngine_GameObject__Find_8dead0
                      (_StringLiteral_ButtonSelectTanktext_12ec980,0);
    if ((lVar2 == 0) ||
       (lVar2 = native_UnityEngine_GameObject__get_gameObject_8debb8(lVar2,0), lVar2 == 0))
    goto LAB_00dd6b50;
    lVar2 = native_UnityEngine_GameObject__GetComponent_BE2_BlockSectionHeader_Custom__4a2214
                      (lVar2,_Method_UnityEngine_GameObject_GetComponent_UILabel____12e4ac0);
    if (lVar2 == 0) goto LAB_00dd6b50;
    native_UILabel__set_text_ae81a8(lVar2,_StringLiteral_Tank_12f1490,0);
    lVar2 = native_UnityEngine_GameObject__Find_8dead0(_StringLiteral_ButtonSelectCartext_12ec968,0)
    ;
    if (((lVar2 == 0) ||
        (lVar2 = native_UnityEngine_GameObject__get_gameObject_8debb8(lVar2,0), lVar2 == 0)) ||
       (lVar2 = native_UnityEngine_GameObject__GetComponent_BE2_BlockSectionHeader_Custom__4a2214
                          (lVar2,_Method_UnityEngine_GameObject_GetComponent_UILabel____12e4ac0),
       lVar2 == 0)) goto LAB_00dd6b50;
    native_UILabel__set_text_ae81a8(lVar2,_StringLiteral_Car_12ecf38,0);
  }
  if (*(long *)(param_1 + 0x28) != 0) {
    lVar2 = native_UnityEngine_GameObject__GetComponent_BE2_BlockSectionHeader_Custom__4a2214
                      (*(long *)(param_1 + 0x28),
                       _Method_UnityEngine_GameObject_GetComponent_UIButton____12e4a88);
    if (lVar2 != 0) {
      lVar2 = *(long *)(lVar2 + 0xc0);
      uVar3 = native_sub_432808(_EventDelegate_Callback_TypeInfo_12d72e8);
      native_EventDelegate_Callback___ctor_54bd18
                (uVar3,param_1,
                 _Method_ContainerBeforeLoginUIController_OnClickButtonSelectTank___12e2fc0,0);
      uVar4 = native_sub_432808(_EventDelegate_TypeInfo_12d4590);
      native_EventDelegate___ctor_de0bd0(uVar4,uVar3,0);
      if (lVar2 != 0) {
        native_System_Collections_Generic_List_int_____Add_d40c00
                  (lVar2,uVar4,_Method_System_Collections_Generic_List_EventDelegate__Add___12dc740)
        ;
        if ((*(long *)(param_1 + 0x30) != 0) &&
           (lVar2 = native_UnityEngine_GameObject__GetComponent_BE2_BlockSectionHeader_Custom__4a2214
                              (*(long *)(param_1 + 0x30),
                               _Method_UnityEngine_GameObject_GetComponent_UIButton____12e4a88),
           lVar2 != 0)) {
          lVar2 = *(long *)(lVar2 + 0xc0);
          uVar3 = native_sub_432808(_EventDelegate_Callback_TypeInfo_12d72e8);
          native_EventDelegate_Callback___ctor_54bd18
                    (uVar3,param_1,
                     _Method_ContainerBeforeLoginUIController_OnClickButtonSelectCar___12e2fb8,0);
          uVar4 = native_sub_432808(_EventDelegate_TypeInfo_12d4590);
          native_EventDelegate___ctor_de0bd0(uVar4,uVar3,0);
          if (lVar2 != 0) {
            native_System_Collections_Generic_List_int_____Add_d40c00
                      (lVar2,uVar4,
                       _Method_System_Collections_Generic_List_EventDelegate__Add___12dc740);
            if ((*(long *)(param_1 + 0x38) != 0) &&
               (lVar2 = native_UnityEngine_GameObject__GetComponent_BE2_BlockSectionHeader_Custom__4a2214
                                  (*(long *)(param_1 + 0x38),
                                   _Method_UnityEngine_GameObject_GetComponent_UIButton____12e4a88),
               lVar2 != 0)) {
              lVar2 = *(long *)(lVar2 + 0xc0);
              uVar3 = native_sub_432808(_EventDelegate_Callback_TypeInfo_12d72e8);
              native_EventDelegate_Callback___ctor_54bd18
                        (uVar3,param_1,
                         _Method_ContainerBeforeLoginUIController_OnClickButtonSysout___12e2fc8,0);
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
LAB_00dd6b50:
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* ContainerBeforeLoginUIController$$OnClickButtonSelectTank @ 0xdd6b54
 * void ContainerBeforeLoginUIController__OnClickButtonSelectTank (ContainerBeforeLoginUIController_o* __this, const MethodInfo* method); */

/* WARNING: Removing unreachable block (ram,0x0072f0b0) */
/* WARNING: Removing unreachable block (ram,0x007394ec) */
/* WARNING: Removing unreachable block (ram,0x0072f0b8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ContainerBeforeLoginUIController$$OnClickButtonSelectTank
   void ContainerBeforeLoginUIController__OnClickButtonSelectTank
   (ContainerBeforeLoginUIController_o* __this, const MethodInfo* method); */

long native_ContainerBeforeLoginUIController__OnClickButtonSelectTank_dd6b54(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  
  if ((bRam0000000001346e51 & 1) == 0) {
    native_sub_43273c(&PanelMainUIController_TypeInfo_12d5600);
    bRam0000000001346e51 = 1;
  }
  if (((*(byte *)(_PanelMainUIController_TypeInfo_12d5600 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_PanelMainUIController_TypeInfo_12d5600 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  lVar7 = native_PanelMainUIController__get_Instance_738fb0(0);
  if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
    native_sub_432810();
  }
  if ((bRam000000000133f5f0 & 1) == 0) {
    native_sub_43273c(&PanelMainUIController_TypeInfo_12d5600,0);
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



/* ContainerBeforeLoginUIController$$OnClickButtonSelectCar @ 0xdd6bc0
 * void ContainerBeforeLoginUIController__OnClickButtonSelectCar (ContainerBeforeLoginUIController_o* __this, const MethodInfo* method); */

/* WARNING: Removing unreachable block (ram,0x0072f0b0) */
/* WARNING: Removing unreachable block (ram,0x007394ec) */
/* WARNING: Removing unreachable block (ram,0x0072f0b8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ContainerBeforeLoginUIController$$OnClickButtonSelectCar
   void ContainerBeforeLoginUIController__OnClickButtonSelectCar
   (ContainerBeforeLoginUIController_o* __this, const MethodInfo* method); */

long native_ContainerBeforeLoginUIController__OnClickButtonSelectCar_dd6bc0(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  
  if ((bRam0000000001346e52 & 1) == 0) {
    native_sub_43273c(&PanelMainUIController_TypeInfo_12d5600);
    bRam0000000001346e52 = 1;
  }
  if (((*(byte *)(_PanelMainUIController_TypeInfo_12d5600 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_PanelMainUIController_TypeInfo_12d5600 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  lVar7 = native_PanelMainUIController__get_Instance_738fb0(0);
  if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
    native_sub_432810();
  }
  if ((bRam000000000133f5ef & 1) == 0) {
    native_sub_43273c(&PanelMainUIController_TypeInfo_12d5600,0);
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



/* ContainerBeforeLoginUIController$$OnClickButtonSysout @ 0xdd6c2c
 * void ContainerBeforeLoginUIController__OnClickButtonSysout (ContainerBeforeLoginUIController_o* __this, const MethodInfo* method); */

/* WARNING: Removing unreachable block (ram,0x0072f0b0) */
/* WARNING: Removing unreachable block (ram,0x007394ec) */
/* WARNING: Removing unreachable block (ram,0x0072f0b8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ContainerBeforeLoginUIController$$OnClickButtonSysout
   void ContainerBeforeLoginUIController__OnClickButtonSysout (ContainerBeforeLoginUIController_o*
   __this, const MethodInfo* method); */

long native_ContainerBeforeLoginUIController__OnClickButtonSysout_dd6c2c(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  
  if ((bRam0000000001346e53 & 1) == 0) {
    native_sub_43273c(&PanelMainUIController_TypeInfo_12d5600);
    bRam0000000001346e53 = 1;
  }
  if (((*(byte *)(_PanelMainUIController_TypeInfo_12d5600 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_PanelMainUIController_TypeInfo_12d5600 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  lVar7 = native_PanelMainUIController__get_Instance_738fb0(0);
  if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
    native_sub_432810();
  }
  if ((bRam000000000133f5ed & 1) == 0) {
    native_sub_43273c(&StringLiteral_ContainerBeforeSelect_12ed208,0);
    bRam000000000133f5ed = 1;
  }
  native_PanelMainUIController__CleanAllUI_73954c(lVar7);
  uVar2 = _StringLiteral_ContainerBeforeSelect_12ed208;
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



/* ContainerBeforeLoginUIController$$Update @ 0xdd6c98
 * void ContainerBeforeLoginUIController__Update (ContainerBeforeLoginUIController_o* __this, const MethodInfo* method); */

/* ContainerBeforeLoginUIController$$Update
   void ContainerBeforeLoginUIController__Update (ContainerBeforeLoginUIController_o* __this, const
   MethodInfo* method); */

void native_ContainerBeforeLoginUIController__Update_dd6c98(void)

{
  return;
}



/* ContainerBeforeLoginUIController$$Awake @ 0xdd6c9c
 * void ContainerBeforeLoginUIController__Awake (ContainerBeforeLoginUIController_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ContainerBeforeLoginUIController$$Awake
   void ContainerBeforeLoginUIController__Awake (ContainerBeforeLoginUIController_o* __this, const
   MethodInfo* method); */

void native_ContainerBeforeLoginUIController__Awake_dd6c9c(long param_1)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  
  if ((bRam0000000001346e54 & 1) == 0) {
    native_sub_43273c(&StringLiteral_ButtonSelectSysout_12ec970);
    native_sub_43273c(&StringLiteral_ButtonSelectCar_12ec960);
    native_sub_43273c(&StringLiteral_ButtonSelectTank_12ec978);
    bRam0000000001346e54 = 1;
  }
  lVar4 = native_UnityEngine_Component__get_transform_8da62c(param_1,0);
  if ((lVar4 != 0) &&
     (lVar4 = native_UnityEngine_Transform__Find_772c0c
                        (lVar4,_StringLiteral_ButtonSelectTank_12ec978,0), lVar4 != 0)) {
    uVar5 = native_UnityEngine_Component__get_gameObject_8da66c(lVar4,0);
    *(undefined8 *)(param_1 + 0x28) = uVar5;
    native_sub_4326e0();
    lVar4 = native_UnityEngine_Component__get_transform_8da62c(param_1,0);
    if ((lVar4 != 0) &&
       (lVar4 = native_UnityEngine_Transform__Find_772c0c
                          (lVar4,_StringLiteral_ButtonSelectCar_12ec960,0), lVar4 != 0)) {
      uVar5 = native_UnityEngine_Component__get_gameObject_8da66c(lVar4,0);
      *(undefined8 *)(param_1 + 0x30) = uVar5;
      native_sub_4326e0();
      lVar4 = native_UnityEngine_Component__get_transform_8da62c(param_1,0);
      if ((lVar4 != 0) &&
         (lVar4 = native_UnityEngine_Transform__Find_772c0c
                            (lVar4,_StringLiteral_ButtonSelectSysout_12ec970,0), lVar4 != 0)) {
        uVar5 = native_UnityEngine_Component__get_gameObject_8da66c(lVar4,0);
        puVar6 = (undefined8 *)(param_1 + 0x38);
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



/* ContainerBeforeLoginUIController$$.ctor @ 0xdd6db0
 * void ContainerBeforeLoginUIController___ctor (ContainerBeforeLoginUIController_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ContainerBeforeLoginUIController$$.ctor
   void ContainerBeforeLoginUIController___ctor (ContainerBeforeLoginUIController_o* __this, const
   MethodInfo* method); */

undefined1  [16] native_ContainerBeforeLoginUIController___ctor_dd6db0(ulong param_1)

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


