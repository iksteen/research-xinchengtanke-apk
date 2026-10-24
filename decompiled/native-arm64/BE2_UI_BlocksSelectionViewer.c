/* ARM64 IL2CPP native pseudocode from Ghidra.
 * Recovered implementation, not original C# source.
 * Function boundaries follow the IL2CPP method address table. */


/* MG_BlocksEngine2.UI.BE2_UI_BlocksSelectionViewer$$get_Instance @ 0xdc60e0
 * MG_BlocksEngine2_UI_BE2_UI_BlocksSelectionViewer_o* MG_BlocksEngine2_UI_BE2_UI_BlocksSelectionViewer__get_Instance (const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MG_BlocksEngine2.UI.BE2_UI_BlocksSelectionViewer$$get_Instance
   MG_BlocksEngine2_UI_BE2_UI_BlocksSelectionViewer_o*
   MG_BlocksEngine2_UI_BE2_UI_BlocksSelectionViewer__get_Instance (const MethodInfo* method); */

undefined8 native_MG_BlocksEngine2_UI_BE2_UI_BlocksSelectionViewer__get_Instance_dc60e0(void)

{
  ulong uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  
  if ((bRam0000000001346dc0 & 1) == 0) {
    native_sub_43273c(&MG_BlocksEngine2_UI_BE2_UI_BlocksSelectionViewer_TypeInfo_12d3a78);
    native_sub_43273c(&
                      Method_UnityEngine_Object_FindObjectOfType_BE2_UI_BlocksSelectionViewer____12e5a18
                     );
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    bRam0000000001346dc0 = 1;
  }
  uVar3 = **(undefined8 **)
            (_MG_BlocksEngine2_UI_BE2_UI_BlocksSelectionViewer_TypeInfo_12d3a78 + 0xb8);
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar1 = native_UnityEngine_Object__op_Implicit_8e1b98(uVar3,0);
  if ((uVar1 & 1) == 0) {
    if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    uVar3 = native_UnityEngine_Object__FindObjectOfType_BE2_DragDropManager__4a6274
                      (
                      _Method_UnityEngine_Object_FindObjectOfType_BE2_UI_BlocksSelectionViewer____12e5a18
                      );
    puVar2 = *(undefined8 **)
              (_MG_BlocksEngine2_UI_BE2_UI_BlocksSelectionViewer_TypeInfo_12d3a78 + 0xb8);
    *puVar2 = uVar3;
    native_sub_4326e0(puVar2,uVar3);
  }
  return **(undefined8 **)
           (_MG_BlocksEngine2_UI_BE2_UI_BlocksSelectionViewer_TypeInfo_12d3a78 + 0xb8);
}



/* MG_BlocksEngine2.UI.BE2_UI_BlocksSelectionViewer$$set_Instance @ 0xdc61c8
 * void MG_BlocksEngine2_UI_BE2_UI_BlocksSelectionViewer__set_Instance (MG_BlocksEngine2_UI_BE2_UI_BlocksSelectionViewer_o* value, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MG_BlocksEngine2.UI.BE2_UI_BlocksSelectionViewer$$set_Instance
   void MG_BlocksEngine2_UI_BE2_UI_BlocksSelectionViewer__set_Instance
   (MG_BlocksEngine2_UI_BE2_UI_BlocksSelectionViewer_o* value, const MethodInfo* method); */

void native_MG_BlocksEngine2_UI_BE2_UI_BlocksSelectionViewer__set_Instance_dc61c8
               (undefined8 param_1)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  
  if ((bRam0000000001346dc1 & 1) == 0) {
    native_sub_43273c(&MG_BlocksEngine2_UI_BE2_UI_BlocksSelectionViewer_TypeInfo_12d3a78);
    bRam0000000001346dc1 = 1;
  }
  puVar4 = *(undefined8 **)
            (_MG_BlocksEngine2_UI_BE2_UI_BlocksSelectionViewer_TypeInfo_12d3a78 + 0xb8);
  *puVar4 = param_1;
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



/* MG_BlocksEngine2.UI.BE2_UI_BlocksSelectionViewer$$Awake @ 0xdc621c
 * void MG_BlocksEngine2_UI_BE2_UI_BlocksSelectionViewer__Awake (MG_BlocksEngine2_UI_BE2_UI_BlocksSelectionViewer_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MG_BlocksEngine2.UI.BE2_UI_BlocksSelectionViewer$$Awake
   void MG_BlocksEngine2_UI_BE2_UI_BlocksSelectionViewer__Awake
   (MG_BlocksEngine2_UI_BE2_UI_BlocksSelectionViewer_o* __this, const MethodInfo* method); */

void native_MG_BlocksEngine2_UI_BE2_UI_BlocksSelectionViewer__Awake_dc621c(long param_1)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  undefined8 uVar5;
  
  if ((bRam0000000001346dc2 & 1) == 0) {
    native_sub_43273c(&Method_UnityEngine_Component_GetComponent_ScrollRect____12e2af0);
    native_sub_43273c(&Method_System_Collections_Generic_List_BE2_UI_SelectionPanel___ctor___12dc500
                     );
    native_sub_43273c(&System_Collections_Generic_List_BE2_UI_SelectionPanel__TypeInfo_12d29a8);
    bRam0000000001346dc2 = 1;
  }
  if (cRam0000000001346e91 == '\0') {
    native_sub_43273c(&MG_BlocksEngine2_UI_BE2_UI_BlocksSelectionViewer_TypeInfo_12d3a78);
    cRam0000000001346e91 = '\x01';
  }
  plVar4 = *(long **)(_MG_BlocksEngine2_UI_BE2_UI_BlocksSelectionViewer_TypeInfo_12d3a78 + 0xb8);
  *plVar4 = param_1;
  native_sub_4326e0(plVar4,param_1);
  uVar5 = native_sub_432808(_System_Collections_Generic_List_BE2_UI_SelectionPanel__TypeInfo_12d29a8
                           );
  native_System_Collections_Generic_List_XmlEventCache_XmlEvent______ctor_d3ff44
            (uVar5,_Method_System_Collections_Generic_List_BE2_UI_SelectionPanel___ctor___12dc500);
  *(undefined8 *)(param_1 + 0x18) = uVar5;
  native_sub_4326e0(param_1 + 0x18,uVar5);
  uVar5 = native_UnityEngine_Component__GetComponent_ActiveAnimation__49daec
                    (param_1,_Method_UnityEngine_Component_GetComponent_ScrollRect____12e2af0);
  *(undefined8 *)(param_1 + 0x30) = uVar5;
  if (iRam0000000001345318 != 0) {
    puVar1 = (ulong *)((param_1 + 0x30U >> 0x12 & 0x7fff) * 8 + 0x138ecd8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar3) {
        *puVar1 = *puVar1 | 1L << (param_1 + 0x30U >> 0xc & 0x3f);
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  return;
}



/* MG_BlocksEngine2.UI.BE2_UI_BlocksSelectionViewer$$Start @ 0xdc6300
 * void MG_BlocksEngine2_UI_BE2_UI_BlocksSelectionViewer__Start (MG_BlocksEngine2_UI_BE2_UI_BlocksSelectionViewer_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MG_BlocksEngine2.UI.BE2_UI_BlocksSelectionViewer$$Start
   void MG_BlocksEngine2_UI_BE2_UI_BlocksSelectionViewer__Start
   (MG_BlocksEngine2_UI_BE2_UI_BlocksSelectionViewer_o* __this, const MethodInfo* method); */

void native_MG_BlocksEngine2_UI_BE2_UI_BlocksSelectionViewer__Start_dc6300(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  
  if ((bRam0000000001346dc3 & 1) == 0) {
    native_sub_43273c(&
                      Method_UnityEngine_Component_GetComponentsInChildren_BE2_UI_SelectionPanel____12e2de0
                     );
    native_sub_43273c(&
                      Method_System_Collections_Generic_List_BE2_UI_SelectionPanel__AddRange___12dc508
                     );
    native_sub_43273c(&
                      Method_System_Collections_Generic_List_BE2_UI_SelectionPanel__Contains___12dc510
                     );
    bRam0000000001346dc3 = 1;
  }
  lVar1 = native_UnityEngine_Component__GetComponentsInChildren_BE2_UI_SelectionPanel__49de1c
                    (param_1,
                     _Method_UnityEngine_Component_GetComponentsInChildren_BE2_UI_SelectionPanel____12e2de0
                    );
  if (lVar1 != 0) {
    if (0 < (int)*(ulong *)(lVar1 + 0x18)) {
      uVar5 = 0;
      uVar3 = *(ulong *)(lVar1 + 0x18) & 0xffffffff;
      do {
        if (uVar3 <= uVar5) {
          uVar2 = native_sub_43283c();
                    /* WARNING: Subroutine does not return */
          native_sub_4327dc(uVar2,0);
        }
        if (*(long *)(param_1 + 0x18) == 0) goto LAB_00dc6404;
        uVar3 = native_System_Collections_Generic_List_BE2_UI_SelectionPanel___Contains_d40ec8
                          (*(long *)(param_1 + 0x18),*(undefined8 *)(lVar1 + 0x20 + uVar5 * 8),
                           _Method_System_Collections_Generic_List_BE2_UI_SelectionPanel__Contains___12dc510
                          );
        if ((uVar3 & 1) == 0) {
          lVar4 = *(long *)(param_1 + 0x18);
          uVar2 = native_UnityEngine_Component__GetComponentsInChildren_BE2_UI_SelectionPanel__49de1c
                            (param_1,
                             _Method_UnityEngine_Component_GetComponentsInChildren_BE2_UI_SelectionPanel____12e2de0
                            );
          if (lVar4 == 0) goto LAB_00dc6404;
          native_System_Collections_Generic_List_BE2_Dropdown___AddRange_d40e50
                    (lVar4,uVar2,
                     _Method_System_Collections_Generic_List_BE2_UI_SelectionPanel__AddRange___12dc508
                    );
        }
        uVar3 = (ulong)*(uint *)(lVar1 + 0x18);
        uVar5 = uVar5 + 1;
      } while ((long)uVar5 < (long)(int)*(uint *)(lVar1 + 0x18));
    }
    return;
  }
LAB_00dc6404:
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* MG_BlocksEngine2.UI.BE2_UI_BlocksSelectionViewer$$UpdateSelectionPanels @ 0xdc6414
 * void MG_BlocksEngine2_UI_BE2_UI_BlocksSelectionViewer__UpdateSelectionPanels (MG_BlocksEngine2_UI_BE2_UI_BlocksSelectionViewer_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MG_BlocksEngine2.UI.BE2_UI_BlocksSelectionViewer$$UpdateSelectionPanels
   void MG_BlocksEngine2_UI_BE2_UI_BlocksSelectionViewer__UpdateSelectionPanels
   (MG_BlocksEngine2_UI_BE2_UI_BlocksSelectionViewer_o* __this, const MethodInfo* method); */

void native_MG_BlocksEngine2_UI_BE2_UI_BlocksSelectionViewer__UpdateSelectionPanels_dc6414
               (long param_1)

{
  long lVar1;
  undefined8 uVar2;
  ulong uVar3;
  long *plVar4;
  long lVar5;
  ulong uVar6;
  
  if ((bRam0000000001346dc4 & 1) == 0) {
    native_sub_43273c(&
                      Method_UnityEngine_Component_GetComponentsInChildren_BE2_UI_SelectionPanel____12e2de0
                     );
    native_sub_43273c(&
                      Method_System_Collections_Generic_List_BE2_UI_SelectionPanel__AddRange___12dc508
                     );
    native_sub_43273c(&
                      Method_System_Collections_Generic_List_BE2_UI_SelectionPanel__Contains___12dc510
                     );
    native_sub_43273c(&Method_System_Collections_Generic_List_BE2_UI_SelectionPanel___ctor___12dc500
                     );
    native_sub_43273c(&System_Collections_Generic_List_BE2_UI_SelectionPanel__TypeInfo_12d29a8);
    bRam0000000001346dc4 = 1;
  }
  lVar1 = native_sub_432808(_System_Collections_Generic_List_BE2_UI_SelectionPanel__TypeInfo_12d29a8
                           );
  native_System_Collections_Generic_List_XmlEventCache_XmlEvent______ctor_d3ff44
            (lVar1,_Method_System_Collections_Generic_List_BE2_UI_SelectionPanel___ctor___12dc500);
  plVar4 = (long *)(param_1 + 0x18);
  *plVar4 = lVar1;
  native_sub_4326e0(plVar4,lVar1);
  lVar1 = native_UnityEngine_Component__GetComponentsInChildren_BE2_UI_SelectionPanel__49de1c
                    (param_1,
                     _Method_UnityEngine_Component_GetComponentsInChildren_BE2_UI_SelectionPanel____12e2de0
                    );
  if (lVar1 != 0) {
    if (0 < (int)*(ulong *)(lVar1 + 0x18)) {
      uVar6 = 0;
      uVar3 = *(ulong *)(lVar1 + 0x18) & 0xffffffff;
      do {
        if (uVar3 <= uVar6) {
          uVar2 = native_sub_43283c();
                    /* WARNING: Subroutine does not return */
          native_sub_4327dc(uVar2,0);
        }
        if (*plVar4 == 0) goto LAB_00dc6570;
        uVar3 = native_System_Collections_Generic_List_BE2_UI_SelectionPanel___Contains_d40ec8
                          (*plVar4,*(undefined8 *)(lVar1 + 0x20 + uVar6 * 8),
                           _Method_System_Collections_Generic_List_BE2_UI_SelectionPanel__Contains___12dc510
                          );
        if ((uVar3 & 1) == 0) {
          lVar5 = *(long *)(param_1 + 0x18);
          uVar2 = native_UnityEngine_Component__GetComponentsInChildren_BE2_UI_SelectionPanel__49de1c
                            (param_1,
                             _Method_UnityEngine_Component_GetComponentsInChildren_BE2_UI_SelectionPanel____12e2de0
                            );
          if (lVar5 == 0) goto LAB_00dc6570;
          native_System_Collections_Generic_List_BE2_Dropdown___AddRange_d40e50
                    (lVar5,uVar2,
                     _Method_System_Collections_Generic_List_BE2_UI_SelectionPanel__AddRange___12dc508
                    );
        }
        uVar3 = (ulong)*(uint *)(lVar1 + 0x18);
        uVar6 = uVar6 + 1;
      } while ((long)uVar6 < (long)(int)*(uint *)(lVar1 + 0x18));
    }
    return;
  }
LAB_00dc6570:
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* MG_BlocksEngine2.UI.BE2_UI_BlocksSelectionViewer$$AddBlockToPanel @ 0xdc6580
 * void MG_BlocksEngine2_UI_BE2_UI_BlocksSelectionViewer__AddBlockToPanel (MG_BlocksEngine2_UI_BE2_UI_BlocksSelectionViewer_o* __this, UnityEngine_Transform_o* blockTransform, MG_BlocksEngine2_UI_BE2_UI_SelectionPanel_o* selectionPanel, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MG_BlocksEngine2.UI.BE2_UI_BlocksSelectionViewer$$AddBlockToPanel
   void MG_BlocksEngine2_UI_BE2_UI_BlocksSelectionViewer__AddBlockToPanel
   (MG_BlocksEngine2_UI_BE2_UI_BlocksSelectionViewer_o* __this, UnityEngine_Transform_o*
   blockTransform, MG_BlocksEngine2_UI_BE2_UI_SelectionPanel_o* selectionPanel, const MethodInfo*
   method); */

void native_MG_BlocksEngine2_UI_BE2_UI_BlocksSelectionViewer__AddBlockToPanel_dc6580
               (undefined1 param_1 [16],undefined8 param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5,long param_6,long param_7)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  undefined8 uVar6;
  ulong uVar7;
  int *piVar8;
  long *plVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  
  if ((bRam0000000001346dc5 & 1) == 0) {
    native_sub_43273c(&Method_UnityEngine_Component_GetComponent_BE2_UI_SelectionBlock____12e2970);
    native_sub_43273c(&Method_UnityEngine_Component_GetComponent_I_BE2_Block____12e2a08);
    native_sub_43273c(&UnityEngine_Debug_TypeInfo_12d4338);
    native_sub_43273c(&Method_UnityEngine_Object_Instantiate_Transform____12e5a90);
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    native_sub_43273c(&StringLiteral___Block_prefab_created_12eb618);
    native_sub_43273c(&StringLiteral__Clone__12eb4b8);
    native_sub_43273c(&StringLiteral__12eaac0);
    native_sub_43273c(&StringLiteral___Block_added_to_selection_menu_12eb608);
    bRam0000000001346dc5 = 1;
  }
  uVar10 = native_UnityEngine_Vector3__get_zero_776668(0);
  uVar5 = param_2;
  uVar6 = param_3;
  uVar11 = native_UnityEngine_Quaternion__get_identity_7628fc(0);
  if (param_7 != 0) {
    uVar2 = native_UnityEngine_Component__get_transform_8da62c(param_7,0);
    if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
      native_sub_4327ec(_UnityEngine_Object_TypeInfo_12d54e0);
    }
    lVar3 = native_UnityEngine_Object__Instantiate_BE2_Ins_DefineFunction__4a67c0
                      (uVar10,param_2,param_3,uVar11,uVar5,uVar6,param_4,param_6,uVar2,
                       _Method_UnityEngine_Object_Instantiate_Transform____12e5a90);
    if ((lVar3 != 0) && (lVar4 = native_UnityEngine_Object__get_name_8e8098(lVar3,0), lVar4 != 0)) {
      uVar5 = native_System_String__Replace_afd9ac
                        (lVar4,_StringLiteral__Clone__12eb4b8,_StringLiteral__12eaac0,0);
      native_UnityEngine_Object__set_name_8e9c08(lVar3,uVar5,0);
      native_MG_BlocksEngine2_Utils_BE2_BlockUtils__RemoveEngineComponents_568e28(lVar3,0);
      native_MG_BlocksEngine2_Utils_BE2_BlockUtils__AddSelectionMenuComponents_569628(lVar3,0);
      if (((*(byte *)(_UnityEngine_Debug_TypeInfo_12d4338 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_UnityEngine_Debug_TypeInfo_12d4338 + 0xe0) == 0)) {
        native_sub_4327ec();
      }
      native_UnityEngine_Debug__Log_8dc36c(_StringLiteral___Block_added_to_selection_menu_12eb608,0)
      ;
      if (param_6 != 0) {
        uVar5 = native_UnityEngine_Component__GetComponent_ActiveAnimation__49daec
                          (param_6,_Method_UnityEngine_Component_GetComponent_I_BE2_Block____12e2a08
                          );
        uVar5 = native_MG_BlocksEngine2_Utils_BE2_BlockUtils__CreatePrefab_56e64c(uVar5,0);
        lVar3 = native_UnityEngine_Component__GetComponent_ActiveAnimation__49daec
                          (lVar3,
                           _Method_UnityEngine_Component_GetComponent_BE2_UI_SelectionBlock____12e2970
                          );
        if (lVar3 != 0) {
          *(undefined8 *)(lVar3 + 0x18) = uVar5;
          native_sub_4326e0((undefined8 *)(lVar3 + 0x18),uVar5);
          native_MG_BlocksEngine2_UI_BE2_UI_SelectionBlock__PerformCleanAndResize_dc67d8(lVar3);
          uVar5 = _StringLiteral___Block_prefab_created_12eb618;
          uVar6 = 0;
          if ((bRam0000000001340b50 & 1) == 0) {
            native_sub_43273c(&UnityEngine_Debug_TypeInfo_12d4338,0);
            native_sub_43273c(&UnityEngine_ILogger_TypeInfo_12d4c10);
            bRam0000000001340b50 = 1;
            uVar6 = extraout_x1;
          }
          if (((*(byte *)(_UnityEngine_Debug_TypeInfo_12d4338 + 0x133) >> 2 & 1) != 0) &&
             (*(int *)(_UnityEngine_Debug_TypeInfo_12d4338 + 0xe0) == 0)) {
            native_sub_4327ec();
            uVar6 = extraout_x1_00;
          }
          if (cRam000000000134112a == '\0') {
            native_sub_43273c(&UnityEngine_Debug_TypeInfo_12d4338,uVar6);
            cRam000000000134112a = '\x01';
          }
          if (((*(byte *)(_UnityEngine_Debug_TypeInfo_12d4338 + 0x133) >> 2 & 1) != 0) &&
             (*(int *)(_UnityEngine_Debug_TypeInfo_12d4338 + 0xe0) == 0)) {
            native_sub_4327ec();
          }
          plVar9 = *(long **)(*(long *)(_UnityEngine_Debug_TypeInfo_12d4338 + 0xb8) + 8);
          if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            native_sub_432810();
          }
          lVar3 = *plVar9;
          if ((ulong)*(ushort *)(lVar3 + 0x12a) != 0) {
            uVar7 = 0;
            piVar8 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
            do {
              if (*(long *)(piVar8 + -2) == _UnityEngine_ILogger_TypeInfo_12d4c10) {
                puVar1 = (undefined8 *)(lVar3 + (long)(*piVar8 + 2) * 0x10 + 0x138);
                goto code_r0x008dc474;
              }
              uVar7 = uVar7 + 1;
              piVar8 = piVar8 + 4;
            } while (uVar7 < *(ushort *)(lVar3 + 0x12a));
          }
          puVar1 = (undefined8 *)native_sub_3c9b34(plVar9,_UnityEngine_ILogger_TypeInfo_12d4c10,2);
code_r0x008dc474:
                    /* WARNING: Could not recover jumptable at 0x008dc490. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*(code *)*puVar1)(plVar9,3,uVar5,puVar1[1]);
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* MG_BlocksEngine2.UI.BE2_UI_BlocksSelectionViewer$$OnEnable @ 0xdc6868
 * void MG_BlocksEngine2_UI_BE2_UI_BlocksSelectionViewer__OnEnable (MG_BlocksEngine2_UI_BE2_UI_BlocksSelectionViewer_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MG_BlocksEngine2.UI.BE2_UI_BlocksSelectionViewer$$OnEnable
   void MG_BlocksEngine2_UI_BE2_UI_BlocksSelectionViewer__OnEnable
   (MG_BlocksEngine2_UI_BE2_UI_BlocksSelectionViewer_o* __this, const MethodInfo* method); */

void native_MG_BlocksEngine2_UI_BE2_UI_BlocksSelectionViewer__OnEnable_dc6868(undefined8 param_1)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long lStack_38;
  
  if ((bRam0000000001346dc6 & 1) == 0) {
    native_sub_43273c(&
                      Method_MG_BlocksEngine2_UI_BE2_UI_BlocksSelectionViewer_EnableScroll___12e22c0
                     );
    native_sub_43273c(&UnityEngine_Events_UnityAction_TypeInfo_12d65d0);
    bRam0000000001346dc6 = 1;
  }
  lVar3 = native_MG_BlocksEngine2_Core_BE2_MainEventsManager__get_Instance_6001fc(0);
  uVar4 = native_sub_432808(_UnityEngine_Events_UnityAction_TypeInfo_12d65d0);
  native_UnityEngine_Events_UnityAction___ctor_773130
            (uVar4,param_1,
             _Method_MG_BlocksEngine2_UI_BE2_UI_BlocksSelectionViewer_EnableScroll___12e22c0,0);
  if (lVar3 != 0) {
    if ((bRam000000000133eaf4 & 1) == 0) {
      native_sub_43273c(&
                        Method_System_Collections_Generic_Dictionary_BE2EventTypes__UnityEvent__Add___12d8ea0
                        ,3,uVar4,0);
      native_sub_43273c(&
                        Method_System_Collections_Generic_Dictionary_BE2EventTypes__UnityEvent__TryGetValue___12d8ea8
                       );
      native_sub_43273c(&UnityEngine_Events_UnityEvent_TypeInfo_12d65d8);
      bRam000000000133eaf4 = 1;
    }
    lStack_38 = 0;
    if (*(long *)(lVar3 + 0x10) != 0) {
      uVar1 = native_System_Collections_Generic_Dictionary_BE2EventTypes__UnityEvent___TryGetValue_c25318
                        (*(long *)(lVar3 + 0x10),3,&lStack_38,
                         _Method_System_Collections_Generic_Dictionary_BE2EventTypes__UnityEvent__TryGetValue___12d8ea8
                        );
      if ((uVar1 & 1) == 0) {
        lVar2 = native_sub_432808(_UnityEngine_Events_UnityEvent_TypeInfo_12d65d8);
        native_UnityEngine_Events_UnityEvent___ctor_7733e0(lVar2,0);
        lStack_38 = lVar2;
        if (lVar2 != 0) {
          native_UnityEngine_Events_UnityEvent__AddListener_7734bc(lVar2,uVar4,0);
          if (*(long *)(lVar3 + 0x10) != 0) {
            native_System_Collections_Generic_Dictionary_BE2EventTypes__UnityEvent___Add_c235f4
                      (*(long *)(lVar3 + 0x10),3,lStack_38,
                       _Method_System_Collections_Generic_Dictionary_BE2EventTypes__UnityEvent__Add___12d8ea0
                      );
            return;
          }
        }
      }
      else if (lStack_38 != 0) {
        native_UnityEngine_Events_UnityEvent__AddListener_7734bc(lStack_38,uVar4,0);
        return;
      }
    }
                    /* WARNING: Subroutine does not return */
    native_sub_432810();
  }
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* MG_BlocksEngine2.UI.BE2_UI_BlocksSelectionViewer$$OnDisable @ 0xdc690c
 * void MG_BlocksEngine2_UI_BE2_UI_BlocksSelectionViewer__OnDisable (MG_BlocksEngine2_UI_BE2_UI_BlocksSelectionViewer_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MG_BlocksEngine2.UI.BE2_UI_BlocksSelectionViewer$$OnDisable
   void MG_BlocksEngine2_UI_BE2_UI_BlocksSelectionViewer__OnDisable
   (MG_BlocksEngine2_UI_BE2_UI_BlocksSelectionViewer_o* __this, const MethodInfo* method); */

void native_MG_BlocksEngine2_UI_BE2_UI_BlocksSelectionViewer__OnDisable_dc690c(undefined8 param_1)

{
  ulong uVar1;
  long lVar2;
  undefined8 uVar3;
  long lStack_38;
  
  if ((bRam0000000001346dc7 & 1) == 0) {
    native_sub_43273c(&
                      Method_MG_BlocksEngine2_UI_BE2_UI_BlocksSelectionViewer_EnableScroll___12e22c0
                     );
    native_sub_43273c(&UnityEngine_Events_UnityAction_TypeInfo_12d65d0);
    bRam0000000001346dc7 = 1;
  }
  lVar2 = native_MG_BlocksEngine2_Core_BE2_MainEventsManager__get_Instance_6001fc(0);
  uVar3 = native_sub_432808(_UnityEngine_Events_UnityAction_TypeInfo_12d65d0);
  native_UnityEngine_Events_UnityAction___ctor_773130
            (uVar3,param_1,
             _Method_MG_BlocksEngine2_UI_BE2_UI_BlocksSelectionViewer_EnableScroll___12e22c0,0);
  if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    native_sub_432810();
  }
  if ((bRam000000000133eaf6 & 1) == 0) {
    native_sub_43273c(&
                      Method_System_Collections_Generic_Dictionary_BE2EventTypes__UnityEvent__TryGetValue___12d8ea8
                      ,3,uVar3,0);
    bRam000000000133eaf6 = 1;
  }
  lStack_38 = 0;
  if (*(long *)(lVar2 + 0x10) != 0) {
    uVar1 = native_System_Collections_Generic_Dictionary_BE2EventTypes__UnityEvent___TryGetValue_c25318
                      (*(long *)(lVar2 + 0x10),3,&lStack_38,
                       _Method_System_Collections_Generic_Dictionary_BE2EventTypes__UnityEvent__TryGetValue___12d8ea8
                      );
    if ((uVar1 & 1) != 0) {
      if (lStack_38 == 0) goto LAB_0056349c;
      native_UnityEngine_Events_UnityEvent__RemoveListener_773574(lStack_38,uVar3,0);
    }
    return;
  }
LAB_0056349c:
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* MG_BlocksEngine2.UI.BE2_UI_BlocksSelectionViewer$$EnableScroll @ 0xdc69b0
 * void MG_BlocksEngine2_UI_BE2_UI_BlocksSelectionViewer__EnableScroll (MG_BlocksEngine2_UI_BE2_UI_BlocksSelectionViewer_o* __this, const MethodInfo* method); */

/* MG_BlocksEngine2.UI.BE2_UI_BlocksSelectionViewer$$EnableScroll
   void MG_BlocksEngine2_UI_BE2_UI_BlocksSelectionViewer__EnableScroll
   (MG_BlocksEngine2_UI_BE2_UI_BlocksSelectionViewer_o* __this, const MethodInfo* method); */

void native_MG_BlocksEngine2_UI_BE2_UI_BlocksSelectionViewer__EnableScroll_dc69b0(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x30);
  if (lVar1 != 0) {
    if (pcRam0000000001340948 == (code *)0x0) {
      pcRam0000000001340948 = (code *)native_sub_4326f0(&UNK_00e2c702);
    }
                    /* WARNING: Could not recover jumptable at 0x008d7b58. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*pcRam0000000001340948)(lVar1,1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* MG_BlocksEngine2.UI.BE2_UI_BlocksSelectionViewer$$ForceRebuildLayout @ 0xdc69d0
 * void MG_BlocksEngine2_UI_BE2_UI_BlocksSelectionViewer__ForceRebuildLayout (MG_BlocksEngine2_UI_BE2_UI_BlocksSelectionViewer_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MG_BlocksEngine2.UI.BE2_UI_BlocksSelectionViewer$$ForceRebuildLayout
   void MG_BlocksEngine2_UI_BE2_UI_BlocksSelectionViewer__ForceRebuildLayout
   (MG_BlocksEngine2_UI_BE2_UI_BlocksSelectionViewer_o* __this, const MethodInfo* method); */

undefined1  [16]
native_MG_BlocksEngine2_UI_BE2_UI_BlocksSelectionViewer__ForceRebuildLayout_dc69d0
          (undefined8 param_1)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long *plVar6;
  undefined1 auVar7 [16];
  
  if ((bRam0000000001346dc8 & 1) == 0) {
    native_sub_43273c(&UnityEngine_RectTransform_TypeInfo_12d58f0);
    bRam0000000001346dc8 = 1;
  }
  plVar6 = (long *)native_UnityEngine_Component__get_transform_8da62c(param_1,0);
  if (plVar6 != (long *)0x0) {
    if (*plVar6 != _UnityEngine_RectTransform_TypeInfo_12d58f0) {
      auVar7._0_8_ = native_sub_432b04();
      if ((bRam0000000001340ae0 & 1) == 0) {
        native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0,0);
        bRam0000000001340ae0 = 1;
      }
      if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
        native_sub_4327ec();
      }
      auVar7._8_8_ = 0;
      return auVar7;
    }
  }
  lVar1 = native_MG_BlocksEngine2_Core_BE2_ExecutionManager__get_Instance_564464(0,0);
  lVar2 = native_MG_BlocksEngine2_UI_BE2_UIUtils__C_RebuildLayout_61aa48(plVar6);
  if (lVar1 != 0) {
    if (lVar2 == 0) {
      native_sub_432740(&System_NullReferenceException_TypeInfo_12d5498,0,0);
      uVar4 = native_sub_432808();
      uVar5 = native_sub_432740(&StringLiteral_routine_is_null_12f5ec0);
      native_System_NullReferenceException___ctor_ad2894(uVar4,uVar5,0);
    }
    else {
      if (pcRam0000000001340fe8 == (code *)0x0) {
        pcRam0000000001340fe8 = (code *)native_sub_4326f0(&UNK_00e2f589);
      }
      uVar3 = (*pcRam0000000001340fe8)(lVar1);
      if ((uVar3 & 1) != 0) {
        if (pcRam0000000001340ff8 == (code *)0x0) {
          pcRam0000000001340ff8 = (code *)native_sub_4326f0(&UNK_00e2f61c);
        }
                    /* WARNING: Could not recover jumptable at 0x008e91f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        auVar7 = (*pcRam0000000001340ff8)(lVar1,lVar2);
        return auVar7;
      }
      native_sub_432740(&System_ArgumentException_TypeInfo_12d3800);
      uVar4 = native_sub_432808();
      uVar5 = native_sub_432740(&
                                StringLiteral_Coroutines_can_only_be_stopped_on_a_MonoBehaviour_12ed328
                               );
      native_System_ArgumentException___ctor_953858(uVar4,uVar5,0);
    }
    uVar5 = native_sub_432740(&Method_UnityEngine_MonoBehaviour_StartCoroutine___12e55d8);
                    /* WARNING: Subroutine does not return */
    native_sub_4327dc(uVar4,uVar5);
  }
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* MG_BlocksEngine2.UI.BE2_UI_BlocksSelectionViewer$$.ctor @ 0xdc6a3c
 * void MG_BlocksEngine2_UI_BE2_UI_BlocksSelectionViewer___ctor (MG_BlocksEngine2_UI_BE2_UI_BlocksSelectionViewer_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MG_BlocksEngine2.UI.BE2_UI_BlocksSelectionViewer$$.ctor
   void MG_BlocksEngine2_UI_BE2_UI_BlocksSelectionViewer___ctor
   (MG_BlocksEngine2_UI_BE2_UI_BlocksSelectionViewer_o* __this, const MethodInfo* method); */

undefined1  [16]
native_MG_BlocksEngine2_UI_BE2_UI_BlocksSelectionViewer___ctor_dc6a3c(ulong param_1)

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


