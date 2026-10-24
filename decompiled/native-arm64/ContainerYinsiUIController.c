/* ARM64 IL2CPP native pseudocode from Ghidra.
 * Recovered implementation, not original C# source.
 * Function boundaries follow the IL2CPP method address table. */


/* ContainerYinsiUIController$$Start @ 0xdeb614
 * void ContainerYinsiUIController__Start (ContainerYinsiUIController_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ContainerYinsiUIController$$Start
   void ContainerYinsiUIController__Start (ContainerYinsiUIController_o* __this, const MethodInfo*
   method); */

void native_ContainerYinsiUIController__Start_deb614(long param_1)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  uint uVar5;
  long lVar6;
  
  if ((bRam0000000001346eda & 1) == 0) {
    native_sub_43273c(&EventDelegate_Callback_TypeInfo_12d72e8);
    native_sub_43273c(&Method_ContainerYinsiUIController_OnClickButtonReturn___12e31a8);
    native_sub_43273c(&EventDelegate_TypeInfo_12d4590);
    native_sub_43273c(&Method_UnityEngine_GameObject_GetComponent_UIButton____12e4a88);
    native_sub_43273c(&Method_System_Collections_Generic_List_EventDelegate__Add___12dc740);
    bRam0000000001346eda = 1;
  }
  if ((*(long *)(param_1 + 0x18) != 0) &&
     (lVar2 = native_UnityEngine_GameObject__GetComponent_BE2_BlockSectionHeader_Custom__4a2214
                        (*(long *)(param_1 + 0x18),
                         _Method_UnityEngine_GameObject_GetComponent_UIButton____12e4a88),
     lVar2 != 0)) {
    lVar2 = *(long *)(lVar2 + 0xc0);
    uVar3 = native_sub_432808(_EventDelegate_Callback_TypeInfo_12d72e8);
    native_EventDelegate_Callback___ctor_54bd18
              (uVar3,param_1,_Method_ContainerYinsiUIController_OnClickButtonReturn___12e31a8,0);
    uVar4 = native_sub_432808(_EventDelegate_TypeInfo_12d4590);
    native_System_Object___ctor_ad2798(uVar4,0);
    native_EventDelegate__Set_dedf08(uVar4,uVar3);
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
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* ContainerYinsiUIController$$InitButtonEvent @ 0xdeb618
 * void ContainerYinsiUIController__InitButtonEvent (ContainerYinsiUIController_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ContainerYinsiUIController$$InitButtonEvent
   void ContainerYinsiUIController__InitButtonEvent (ContainerYinsiUIController_o* __this, const
   MethodInfo* method); */

void native_ContainerYinsiUIController__InitButtonEvent_deb618(long param_1)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  uint uVar5;
  long lVar6;
  
  if ((bRam0000000001346eda & 1) == 0) {
    native_sub_43273c(&EventDelegate_Callback_TypeInfo_12d72e8);
    native_sub_43273c(&Method_ContainerYinsiUIController_OnClickButtonReturn___12e31a8);
    native_sub_43273c(&EventDelegate_TypeInfo_12d4590);
    native_sub_43273c(&Method_UnityEngine_GameObject_GetComponent_UIButton____12e4a88);
    native_sub_43273c(&Method_System_Collections_Generic_List_EventDelegate__Add___12dc740);
    bRam0000000001346eda = 1;
  }
  if ((*(long *)(param_1 + 0x18) != 0) &&
     (lVar2 = native_UnityEngine_GameObject__GetComponent_BE2_BlockSectionHeader_Custom__4a2214
                        (*(long *)(param_1 + 0x18),
                         _Method_UnityEngine_GameObject_GetComponent_UIButton____12e4a88),
     lVar2 != 0)) {
    lVar2 = *(long *)(lVar2 + 0xc0);
    uVar3 = native_sub_432808(_EventDelegate_Callback_TypeInfo_12d72e8);
    native_EventDelegate_Callback___ctor_54bd18
              (uVar3,param_1,_Method_ContainerYinsiUIController_OnClickButtonReturn___12e31a8,0);
    uVar4 = native_sub_432808(_EventDelegate_TypeInfo_12d4590);
    native_System_Object___ctor_ad2798(uVar4,0);
    native_EventDelegate__Set_dedf08(uVar4,uVar3);
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
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* ContainerYinsiUIController$$OnClickButtonReturn @ 0xdeb71c
 * void ContainerYinsiUIController__OnClickButtonReturn (ContainerYinsiUIController_o* __this, const MethodInfo* method); */

/* WARNING: Removing unreachable block (ram,0x0072f0b0) */
/* WARNING: Removing unreachable block (ram,0x007394ec) */
/* WARNING: Removing unreachable block (ram,0x0072f0b8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ContainerYinsiUIController$$OnClickButtonReturn
   void ContainerYinsiUIController__OnClickButtonReturn (ContainerYinsiUIController_o* __this, const
   MethodInfo* method); */

long native_ContainerYinsiUIController__OnClickButtonReturn_deb71c(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  
  if ((bRam0000000001346edb & 1) == 0) {
    native_sub_43273c(&PanelMainUIController_TypeInfo_12d5600);
    bRam0000000001346edb = 1;
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



/* ContainerYinsiUIController$$Update @ 0xdeb788
 * void ContainerYinsiUIController__Update (ContainerYinsiUIController_o* __this, const MethodInfo* method); */

/* ContainerYinsiUIController$$Update
   void ContainerYinsiUIController__Update (ContainerYinsiUIController_o* __this, const MethodInfo*
   method); */

void native_ContainerYinsiUIController__Update_deb788(void)

{
  return;
}



/* ContainerYinsiUIController$$Awake @ 0xdeb78c
 * void ContainerYinsiUIController__Awake (ContainerYinsiUIController_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ContainerYinsiUIController$$Awake
   void ContainerYinsiUIController__Awake (ContainerYinsiUIController_o* __this, const MethodInfo*
   method); */

void native_ContainerYinsiUIController__Awake_deb78c(long param_1)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  
  if ((bRam0000000001346edc & 1) == 0) {
    native_sub_43273c(&StringLiteral_ButtonYinsiReturn_12ec990);
    bRam0000000001346edc = 1;
  }
  lVar4 = native_UnityEngine_Component__get_transform_8da62c(param_1,0);
  if ((lVar4 != 0) &&
     (lVar4 = native_UnityEngine_Transform__Find_772c0c
                        (lVar4,_StringLiteral_ButtonYinsiReturn_12ec990,0), lVar4 != 0)) {
    uVar5 = native_UnityEngine_Component__get_gameObject_8da66c(lVar4,0);
    puVar6 = (undefined8 *)(param_1 + 0x18);
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
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* ContainerYinsiUIController$$.ctor @ 0xdeb808
 * void ContainerYinsiUIController___ctor (ContainerYinsiUIController_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ContainerYinsiUIController$$.ctor
   void ContainerYinsiUIController___ctor (ContainerYinsiUIController_o* __this, const MethodInfo*
   method); */

undefined1  [16] native_ContainerYinsiUIController___ctor_deb808(ulong param_1)

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


