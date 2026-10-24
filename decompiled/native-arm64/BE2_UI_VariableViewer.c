/* ARM64 IL2CPP native pseudocode from Ghidra.
 * Recovered implementation, not original C# source.
 * Function boundaries follow the IL2CPP method address table. */


/* MG_BlocksEngine2.UI.BE2_UI_VariableViewer$$Awake @ 0xdccd4c
 * void MG_BlocksEngine2_UI_BE2_UI_VariableViewer__Awake (MG_BlocksEngine2_UI_BE2_UI_VariableViewer_o* __this, const MethodInfo* method); */

/* WARNING: Removing unreachable block (ram,0x00dcd0d4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MG_BlocksEngine2.UI.BE2_UI_VariableViewer$$Awake
   void MG_BlocksEngine2_UI_BE2_UI_VariableViewer__Awake
   (MG_BlocksEngine2_UI_BE2_UI_VariableViewer_o* __this, const MethodInfo* method); */

void native_MG_BlocksEngine2_UI_BE2_UI_VariableViewer__Awake_dccd4c(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  long *plVar3;
  undefined8 *puVar4;
  long *plVar5;
  undefined8 *puVar6;
  ulong uVar7;
  int *piVar8;
  
  if ((bRam0000000001346dff & 1) == 0) {
    native_sub_43273c(&Method_MG_BlocksEngine2_UI_BE2_UI_VariableViewer_RemoveVariable___12e2328);
    native_sub_43273c(&Method_UnityEngine_Component_GetComponent_Button____12e29a0);
    native_sub_43273c(&System_IDisposable_TypeInfo_12d4b00);
    native_sub_43273c(&System_Collections_IEnumerator_TypeInfo_12d4b80);
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    native_sub_43273c(&UnityEngine_Transform_TypeInfo_12d6300);
    native_sub_43273c(&UnityEngine_Events_UnityAction_TypeInfo_12d65d0);
    bRam0000000001346dff = 1;
  }
  uVar1 = native_MG_BlocksEngine2_UI_BE2_UI_VariableViewer__GetVariableName_dcd120(param_1);
  *(undefined8 *)(param_1 + 0x18) = uVar1;
  native_sub_4326e0(param_1 + 0x18);
  lVar2 = native_UnityEngine_Component__get_transform_8da62c(param_1,0);
  if (lVar2 != 0) {
    plVar3 = (long *)native_UnityEngine_Transform__GetEnumerator_772e40(lVar2,0);
    if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      native_sub_432810();
    }
    puVar6 = (undefined8 *)(param_1 + 0x28);
    do {
      lVar2 = *plVar3;
      if ((ulong)*(ushort *)(lVar2 + 0x12a) != 0) {
        uVar7 = 0;
        piVar8 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
        do {
          if (*(long *)(piVar8 + -2) == _System_Collections_IEnumerator_TypeInfo_12d4b80) {
            puVar4 = (undefined8 *)(lVar2 + (long)*piVar8 * 0x10 + 0x138);
            goto LAB_00dcce90;
          }
          uVar7 = uVar7 + 1;
          piVar8 = piVar8 + 4;
        } while (uVar7 < *(ushort *)(lVar2 + 0x12a));
      }
      puVar4 = (undefined8 *)
               native_sub_3c9b34(plVar3,_System_Collections_IEnumerator_TypeInfo_12d4b80,0);
LAB_00dcce90:
      uVar7 = (*(code *)*puVar4)(plVar3,puVar4[1]);
      if ((uVar7 & 1) == 0) {
        plVar3 = (long *)native_sub_4327f8(plVar3,_System_IDisposable_TypeInfo_12d4b00);
        if (plVar3 == (long *)0x0) goto LAB_00dcd034;
        lVar2 = *plVar3;
        if ((ulong)*(ushort *)(lVar2 + 0x12a) == 0) goto LAB_00dcd00c;
        uVar7 = 0;
        piVar8 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
        goto LAB_00dccff0;
      }
      lVar2 = *plVar3;
      if ((ulong)*(ushort *)(lVar2 + 0x12a) != 0) {
        uVar7 = 0;
        piVar8 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
        do {
          if (*(long *)(piVar8 + -2) == _System_Collections_IEnumerator_TypeInfo_12d4b80) {
            puVar4 = (undefined8 *)(lVar2 + (long)(*piVar8 + 1) * 0x10 + 0x138);
            goto LAB_00dccef8;
          }
          uVar7 = uVar7 + 1;
          piVar8 = piVar8 + 4;
        } while (uVar7 < *(ushort *)(lVar2 + 0x12a));
      }
      puVar4 = (undefined8 *)
               native_sub_3c9b34(plVar3,_System_Collections_IEnumerator_TypeInfo_12d4b80,1);
LAB_00dccef8:
      plVar5 = (long *)(*(code *)*puVar4)(plVar3,puVar4[1]);
      if (plVar5 != (long *)0x0) {
        if ((*(byte *)(*plVar5 + 300) < *(byte *)(_UnityEngine_Transform_TypeInfo_12d6300 + 300)) ||
           (*(long *)(*(long *)(*plVar5 + 200) +
                      (ulong)*(byte *)(_UnityEngine_Transform_TypeInfo_12d6300 + 300) * 8 + -8) !=
            _UnityEngine_Transform_TypeInfo_12d6300)) {
          native_sub_432b04(plVar5);
LAB_00dcd0c8:
                    /* WARNING: Subroutine does not return */
          native_sub_432810();
        }
      }
      uVar1 = native_MG_BlocksEngine2_Utils_BE2_InputField__GetBE2Component_601c18(plVar5,0);
      *(undefined8 *)(param_1 + 0x20) = uVar1;
      native_sub_4326e0((undefined8 *)(param_1 + 0x20));
      uVar1 = *puVar6;
      if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
        native_sub_4327ec();
      }
      uVar7 = native_UnityEngine_Object__op_Implicit_8e1b98(uVar1,0);
      if ((uVar7 & 1) == 0) {
        if (plVar5 == (long *)0x0) goto LAB_00dcd0c8;
        uVar1 = native_UnityEngine_Component__GetComponent_ActiveAnimation__49daec
                          (plVar5,_Method_UnityEngine_Component_GetComponent_Button____12e29a0);
        *puVar6 = uVar1;
        native_sub_4326e0(puVar6);
      }
    } while( true );
  }
  goto LAB_00dcd0cc;
  while( true ) {
    uVar7 = uVar7 + 1;
    piVar8 = piVar8 + 4;
    if (*(ushort *)(lVar2 + 0x12a) <= uVar7) break;
LAB_00dccff0:
    if (*(long *)(piVar8 + -2) == _System_IDisposable_TypeInfo_12d4b00) {
      puVar6 = (undefined8 *)(lVar2 + (long)*piVar8 * 0x10 + 0x138);
      goto LAB_00dcd028;
    }
  }
LAB_00dcd00c:
  puVar6 = (undefined8 *)native_sub_3c9b34(plVar3,_System_IDisposable_TypeInfo_12d4b00,0);
LAB_00dcd028:
  (*(code *)*puVar6)(plVar3,puVar6[1]);
LAB_00dcd034:
  if (*(long *)(param_1 + 0x28) != 0) {
    lVar2 = *(long *)(*(long *)(param_1 + 0x28) + 0xf8);
    uVar1 = native_sub_432808(_UnityEngine_Events_UnityAction_TypeInfo_12d65d0);
    native_UnityEngine_Events_UnityAction___ctor_773130
              (uVar1,param_1,
               _Method_MG_BlocksEngine2_UI_BE2_UI_VariableViewer_RemoveVariable___12e2328,0);
    if (lVar2 != 0) {
      native_UnityEngine_Events_UnityEvent__AddListener_7734bc(lVar2,uVar1,0);
      return;
    }
  }
LAB_00dcd0cc:
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* MG_BlocksEngine2.UI.BE2_UI_VariableViewer$$OnEnable @ 0xdcd1cc
 * void MG_BlocksEngine2_UI_BE2_UI_VariableViewer__OnEnable (MG_BlocksEngine2_UI_BE2_UI_VariableViewer_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MG_BlocksEngine2.UI.BE2_UI_VariableViewer$$OnEnable
   void MG_BlocksEngine2_UI_BE2_UI_VariableViewer__OnEnable
   (MG_BlocksEngine2_UI_BE2_UI_VariableViewer_o* __this, const MethodInfo* method); */

void native_MG_BlocksEngine2_UI_BE2_UI_VariableViewer__OnEnable_dcd1cc(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  if ((bRam0000000001346e00 & 1) == 0) {
    native_sub_43273c(&Method_MG_BlocksEngine2_UI_BE2_UI_VariableViewer__OnEnable_b__4_0___12e2320);
    native_sub_43273c(&Method_MG_BlocksEngine2_UI_BE2_UI_VariableViewer_UpdateViewerValue___12e2330)
    ;
    native_sub_43273c(&Method_UnityEngine_Events_UnityAction_string___ctor___12de3e0);
    native_sub_43273c(&UnityEngine_Events_UnityAction_string__TypeInfo_12d2f68);
    native_sub_43273c(&UnityEngine_Events_UnityAction_TypeInfo_12d65d0);
    native_sub_43273c(&Method_UnityEngine_Events_UnityEvent_string__AddListener___12de4e8);
    bRam0000000001346e00 = 1;
  }
  lVar1 = native_MG_BlocksEngine2_Core_BE2_MainEventsManager__get_Instance_6001fc(0);
  uVar2 = native_sub_432808(_UnityEngine_Events_UnityAction_TypeInfo_12d65d0);
  native_UnityEngine_Events_UnityAction___ctor_773130
            (uVar2,param_1,
             _Method_MG_BlocksEngine2_UI_BE2_UI_VariableViewer_UpdateViewerValue___12e2330,0);
  if (lVar1 != 0) {
    native_MG_BlocksEngine2_Core_BE2_EventsManager__StartListening_563268(lVar1,4,uVar2,0);
    if (*(long *)(param_1 + 0x20) != 0) {
      lVar1 = native_MG_BlocksEngine2_Utils_BE2_InputField__get_onEndEdit_60218c
                        (*(long *)(param_1 + 0x20),0);
      uVar2 = native_sub_432808(_UnityEngine_Events_UnityAction_string__TypeInfo_12d2f68);
      native_UnityEngine_Events_UnityAction_List_IEventSystemHandler_____ctor_89b93c
                (uVar2,param_1,
                 _Method_MG_BlocksEngine2_UI_BE2_UI_VariableViewer__OnEnable_b__4_0___12e2320,
                 _Method_UnityEngine_Events_UnityAction_string___ctor___12de3e0);
      if (lVar1 != 0) {
        uVar2 = (**(code **)**(undefined8 **)
                              (*(long *)(
                                        _Method_UnityEngine_Events_UnityEvent_string__AddListener___12de4e8
                                        + 0x18) + 0xc0))(uVar2);
        if (lVar1 == 0) {
                    /* WARNING: Subroutine does not return */
          native_sub_432810();
        }
        lVar1 = *(long *)(lVar1 + 0x10);
        if (lVar1 != 0) {
          if ((bRam0000000001340cbd & 1) == 0) {
            native_sub_43273c(&
                              Method_System_Collections_Generic_List_BaseInvokableCall__Add___12dc5b0
                              ,uVar2,0);
            bRam0000000001340cbd = 1;
          }
          if (*(long *)(lVar1 + 0x18) != 0) {
            native_System_Collections_Generic_List_int_____Add_d40c00
                      (*(long *)(lVar1 + 0x18),uVar2,
                       _Method_System_Collections_Generic_List_BaseInvokableCall__Add___12dc5b0);
            *(undefined1 *)(lVar1 + 0x28) = 1;
            return;
          }
                    /* WARNING: Subroutine does not return */
          native_sub_432810();
        }
                    /* WARNING: Subroutine does not return */
        native_sub_432810(0,uVar2,0);
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* MG_BlocksEngine2.UI.BE2_UI_VariableViewer$$OnDisable @ 0xdcd308
 * void MG_BlocksEngine2_UI_BE2_UI_VariableViewer__OnDisable (MG_BlocksEngine2_UI_BE2_UI_VariableViewer_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MG_BlocksEngine2.UI.BE2_UI_VariableViewer$$OnDisable
   void MG_BlocksEngine2_UI_BE2_UI_VariableViewer__OnDisable
   (MG_BlocksEngine2_UI_BE2_UI_VariableViewer_o* __this, const MethodInfo* method); */

void native_MG_BlocksEngine2_UI_BE2_UI_VariableViewer__OnDisable_dcd308(long param_1)

{
  ulong uVar1;
  long lVar2;
  undefined8 uVar3;
  long lStack_38;
  
  if ((bRam0000000001346e01 & 1) == 0) {
    native_sub_43273c(&Method_MG_BlocksEngine2_UI_BE2_UI_VariableViewer_UpdateViewerValue___12e2330)
    ;
    native_sub_43273c(&UnityEngine_Events_UnityAction_TypeInfo_12d65d0);
    bRam0000000001346e01 = 1;
  }
  if ((*(long *)(param_1 + 0x20) != 0) &&
     (lVar2 = native_MG_BlocksEngine2_Utils_BE2_InputField__get_onEndEdit_60218c
                        (*(long *)(param_1 + 0x20),0), lVar2 != 0)) {
    native_UnityEngine_Events_UnityEventBase__RemoveAllListeners_774038(lVar2,0);
    lVar2 = native_MG_BlocksEngine2_Core_BE2_MainEventsManager__get_Instance_6001fc(0);
    uVar3 = native_sub_432808(_UnityEngine_Events_UnityAction_TypeInfo_12d65d0);
    native_UnityEngine_Events_UnityAction___ctor_773130
              (uVar3,param_1,
               _Method_MG_BlocksEngine2_UI_BE2_UI_VariableViewer_UpdateViewerValue___12e2330,0);
    if (lVar2 != 0) {
      if ((bRam000000000133eaf6 & 1) == 0) {
        native_sub_43273c(&
                          Method_System_Collections_Generic_Dictionary_BE2EventTypes__UnityEvent__TryGetValue___12d8ea8
                          ,4,uVar3,0);
        bRam000000000133eaf6 = 1;
      }
      lStack_38 = 0;
      if (*(long *)(lVar2 + 0x10) != 0) {
        uVar1 = native_System_Collections_Generic_Dictionary_BE2EventTypes__UnityEvent___TryGetValue_c25318
                          (*(long *)(lVar2 + 0x10),4,&lStack_38,
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
  }
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* MG_BlocksEngine2.UI.BE2_UI_VariableViewer$$Start @ 0xdcd3c8
 * void MG_BlocksEngine2_UI_BE2_UI_VariableViewer__Start (MG_BlocksEngine2_UI_BE2_UI_VariableViewer_o* __this, const MethodInfo* method); */

/* WARNING: Removing unreachable block (ram,0x005797fc) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MG_BlocksEngine2.UI.BE2_UI_VariableViewer$$Start
   void MG_BlocksEngine2_UI_BE2_UI_VariableViewer__Start
   (MG_BlocksEngine2_UI_BE2_UI_VariableViewer_o* __this, const MethodInfo* method); */

void native_MG_BlocksEngine2_UI_BE2_UI_VariableViewer__Start_dcd3c8(long param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  
  native_MG_BlocksEngine2_UI_BE2_UI_VariableViewer__UpdateViewerValue_dcd3ec();
  if ((bRam0000000001346e03 & 1) == 0) {
    native_sub_43273c(&MG_BlocksEngine2_Environment_BE2_VariablesManager_TypeInfo_12d3a90);
    bRam0000000001346e03 = 1;
  }
  if (*(long *)(param_1 + 0x20) != 0) {
    uVar3 = *(undefined8 *)(param_1 + 0x18);
    lVar4 = **(long **)(_MG_BlocksEngine2_Environment_BE2_VariablesManager_TypeInfo_12d3a90 + 0xb8);
    uVar2 = native_MG_BlocksEngine2_Utils_BE2_InputField__get_text_60240c
                      (*(long *)(param_1 + 0x20),0);
    if (lVar4 != 0) {
      if ((bRam0000000001346e1c & 1) == 0) {
        native_sub_43273c(&
                          Method_System_Collections_Generic_Dictionary_string__string__Add___12d98e8
                         );
        native_sub_43273c(&
                          Method_System_Collections_Generic_Dictionary_string__string__ContainsKey___12d98f8
                         );
        native_sub_43273c(&
                          Method_System_Collections_Generic_Dictionary_string__string__set_Item___12d9930
                         );
        bRam0000000001346e1c = 1;
      }
      if (*(long *)(lVar4 + 0x20) != 0) {
        uVar1 = native_System_Collections_Generic_Dictionary_Action__LinkedListNode_Action____ContainsKey_cda894
                          (*(long *)(lVar4 + 0x20),uVar3,
                           _Method_System_Collections_Generic_Dictionary_string__string__ContainsKey___12d98f8
                          );
        lVar4 = *(long *)(lVar4 + 0x20);
        if (lVar4 != 0) {
          if ((uVar1 & 1) == 0) {
            native_System_Collections_Generic_Dictionary_Canvas__IndexedSet_Graphic____Add_cda620
                      (lVar4,uVar3,uVar2,
                       _Method_System_Collections_Generic_Dictionary_string__string__Add___12d98e8);
            lVar4 = native_MG_BlocksEngine2_Core_BE2_MainEventsManager__get_Instance_6001fc(0);
            if (lVar4 == 0) goto LAB_00dc9f80;
            native_MG_BlocksEngine2_Core_BE2_EventsManager__TriggerEvent_579794(lVar4,5,0);
          }
          else {
            native_System_Collections_Generic_Dictionary_Action__LinkedListNode_Action____set_Item_cda5f8
                      (lVar4,uVar3,uVar2,
                       _Method_System_Collections_Generic_Dictionary_string__string__set_Item___12d9930
                      );
          }
          lVar4 = native_MG_BlocksEngine2_Core_BE2_MainEventsManager__get_Instance_6001fc(0);
          if (lVar4 != 0) {
            if ((bRam000000000133eaf8 & 1) == 0) {
              native_sub_43273c(&
                                Method_System_Collections_Generic_Dictionary_BE2EventTypes__UnityEvent__TryGetValue___12d8ea8
                                ,4,0);
              bRam000000000133eaf8 = 1;
            }
            if ((*(long *)(lVar4 + 0x10) != 0) &&
               (uVar1 = native_System_Collections_Generic_Dictionary_BE2EventTypes__UnityEvent___TryGetValue_c25318
                                  (*(long *)(lVar4 + 0x10),4,&stack0xffffffffffffffd8,
                                   _Method_System_Collections_Generic_Dictionary_BE2EventTypes__UnityEvent__TryGetValue___12d8ea8
                                  ), (uVar1 & 1) == 0)) {
              return;
            }
                    /* WARNING: Subroutine does not return */
            native_sub_432810();
          }
        }
      }
LAB_00dc9f80:
                    /* WARNING: Subroutine does not return */
      native_sub_432810();
    }
  }
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* MG_BlocksEngine2.UI.BE2_UI_VariableViewer$$RefreshViewer @ 0xdc9f84
 * void MG_BlocksEngine2_UI_BE2_UI_VariableViewer__RefreshViewer (MG_BlocksEngine2_UI_BE2_UI_VariableViewer_o* __this, const MethodInfo* method); */

/* WARNING: Removing unreachable block (ram,0x005797fc) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MG_BlocksEngine2.UI.BE2_UI_VariableViewer$$RefreshViewer
   void MG_BlocksEngine2_UI_BE2_UI_VariableViewer__RefreshViewer
   (MG_BlocksEngine2_UI_BE2_UI_VariableViewer_o* __this, const MethodInfo* method); */

void native_MG_BlocksEngine2_UI_BE2_UI_VariableViewer__RefreshViewer_dc9f84(long param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  
  uVar2 = native_MG_BlocksEngine2_UI_BE2_UI_VariableViewer__GetVariableName_dcd120();
  *(undefined8 *)(param_1 + 0x18) = uVar2;
  native_sub_4326e0(param_1 + 0x18);
  native_MG_BlocksEngine2_UI_BE2_UI_VariableViewer__UpdateViewerValue_dcd3ec(param_1);
  if ((bRam0000000001346e03 & 1) == 0) {
    native_sub_43273c(&MG_BlocksEngine2_Environment_BE2_VariablesManager_TypeInfo_12d3a90);
    bRam0000000001346e03 = 1;
  }
  if (*(long *)(param_1 + 0x20) != 0) {
    uVar3 = *(undefined8 *)(param_1 + 0x18);
    lVar4 = **(long **)(_MG_BlocksEngine2_Environment_BE2_VariablesManager_TypeInfo_12d3a90 + 0xb8);
    uVar2 = native_MG_BlocksEngine2_Utils_BE2_InputField__get_text_60240c
                      (*(long *)(param_1 + 0x20),0);
    if (lVar4 != 0) {
      if ((bRam0000000001346e1c & 1) == 0) {
        native_sub_43273c(&
                          Method_System_Collections_Generic_Dictionary_string__string__Add___12d98e8
                         );
        native_sub_43273c(&
                          Method_System_Collections_Generic_Dictionary_string__string__ContainsKey___12d98f8
                         );
        native_sub_43273c(&
                          Method_System_Collections_Generic_Dictionary_string__string__set_Item___12d9930
                         );
        bRam0000000001346e1c = 1;
      }
      if (*(long *)(lVar4 + 0x20) != 0) {
        uVar1 = native_System_Collections_Generic_Dictionary_Action__LinkedListNode_Action____ContainsKey_cda894
                          (*(long *)(lVar4 + 0x20),uVar3,
                           _Method_System_Collections_Generic_Dictionary_string__string__ContainsKey___12d98f8
                          );
        lVar4 = *(long *)(lVar4 + 0x20);
        if (lVar4 != 0) {
          if ((uVar1 & 1) == 0) {
            native_System_Collections_Generic_Dictionary_Canvas__IndexedSet_Graphic____Add_cda620
                      (lVar4,uVar3,uVar2,
                       _Method_System_Collections_Generic_Dictionary_string__string__Add___12d98e8);
            lVar4 = native_MG_BlocksEngine2_Core_BE2_MainEventsManager__get_Instance_6001fc(0);
            if (lVar4 == 0) goto LAB_00dc9f80;
            native_MG_BlocksEngine2_Core_BE2_EventsManager__TriggerEvent_579794(lVar4,5,0);
          }
          else {
            native_System_Collections_Generic_Dictionary_Action__LinkedListNode_Action____set_Item_cda5f8
                      (lVar4,uVar3,uVar2,
                       _Method_System_Collections_Generic_Dictionary_string__string__set_Item___12d9930
                      );
          }
          lVar4 = native_MG_BlocksEngine2_Core_BE2_MainEventsManager__get_Instance_6001fc(0);
          if (lVar4 != 0) {
            if ((bRam000000000133eaf8 & 1) == 0) {
              native_sub_43273c(&
                                Method_System_Collections_Generic_Dictionary_BE2EventTypes__UnityEvent__TryGetValue___12d8ea8
                                ,4,0);
              bRam000000000133eaf8 = 1;
            }
            if ((*(long *)(lVar4 + 0x10) != 0) &&
               (uVar1 = native_System_Collections_Generic_Dictionary_BE2EventTypes__UnityEvent___TryGetValue_c25318
                                  (*(long *)(lVar4 + 0x10),4,&stack0xffffffffffffffd8,
                                   _Method_System_Collections_Generic_Dictionary_BE2EventTypes__UnityEvent__TryGetValue___12d8ea8
                                  ), (uVar1 & 1) == 0)) {
              return;
            }
                    /* WARNING: Subroutine does not return */
            native_sub_432810();
          }
        }
      }
LAB_00dc9f80:
                    /* WARNING: Subroutine does not return */
      native_sub_432810();
    }
  }
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* MG_BlocksEngine2.UI.BE2_UI_VariableViewer$$UpdateViewerValue @ 0xdcd3ec
 * void MG_BlocksEngine2_UI_BE2_UI_VariableViewer__UpdateViewerValue (MG_BlocksEngine2_UI_BE2_UI_VariableViewer_o* __this, const MethodInfo* method); */

/* WARNING: Removing unreachable block (ram,0x00cbdbd4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MG_BlocksEngine2.UI.BE2_UI_VariableViewer$$UpdateViewerValue
   void MG_BlocksEngine2_UI_BE2_UI_VariableViewer__UpdateViewerValue
   (MG_BlocksEngine2_UI_BE2_UI_VariableViewer_o* __this, const MethodInfo* method); */

void native_MG_BlocksEngine2_UI_BE2_UI_VariableViewer__UpdateViewerValue_dcd3ec(long param_1)

{
  long *plVar1;
  undefined4 uVar2;
  short sVar3;
  int iVar4;
  undefined4 uVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long *plVar10;
  long lVar11;
  code *pcVar12;
  undefined8 uVar13;
  long lVar14;
  long *plVar15;
  int iVar16;
  ulong uVar17;
  
  if ((bRam0000000001346e02 & 1) == 0) {
    native_sub_43273c(&MG_BlocksEngine2_Environment_BE2_VariablesManager_TypeInfo_12d3a90);
    bRam0000000001346e02 = 1;
  }
  if (**(long **)(_MG_BlocksEngine2_Environment_BE2_VariablesManager_TypeInfo_12d3a90 + 0xb8) != 0)
  {
    lVar7 = *(long *)(param_1 + 0x20);
    lVar11 = native_MG_BlocksEngine2_Environment_BE2_VariablesManager__GetVariableStringValue_dcd4d4
                       (**(long **)(
                                   _MG_BlocksEngine2_Environment_BE2_VariablesManager_TypeInfo_12d3a90
                                   + 0xb8),*(undefined8 *)(param_1 + 0x18));
    if (lVar7 != 0) {
      if ((bRam000000000133edec & 1) == 0) {
        native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0,lVar11,0);
        bRam000000000133edec = 1;
      }
      uVar13 = *(undefined8 *)(lVar7 + 0x20);
      if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
        native_sub_4327ec();
      }
      uVar6 = native_UnityEngine_Object__op_Implicit_8e1b98(uVar13,0);
      if ((uVar6 & 1) == 0) {
        uVar13 = *(undefined8 *)(lVar7 + 0x18);
        if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
           (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
          native_sub_4327ec();
        }
        uVar6 = native_UnityEngine_Object__op_Implicit_8e1b98(uVar13,0);
        if ((uVar6 & 1) == 0) {
          return;
        }
        lVar7 = *(long *)(lVar7 + 0x18);
        if (lVar7 != 0) {
          if ((bRam00000000013429be & 1) == 0) {
            native_sub_43273c(&Method_UnityEngine_UI_InputField_Validate___12e5020);
            native_sub_43273c(&System_Math_TypeInfo_12d51c0);
            native_sub_43273c(&UnityEngine_UI_InputField_OnValidateInput_TypeInfo_12d73a8);
            native_sub_43273c(&string_TypeInfo_12d5f28);
            native_sub_43273c(&StringLiteral___12eab80);
            native_sub_43273c(&StringLiteral___12eaac8);
            native_sub_43273c(&StringLiteral___12eab58);
            native_sub_43273c(&StringLiteral__12eaac0);
            bRam00000000013429be = 1;
          }
          uVar6 = native_System_String__op_Equality_afc18c(*(undefined8 *)(lVar7 + 0x170),lVar11,0);
          if ((uVar6 & 1) != 0) {
            return;
          }
          lVar8 = _StringLiteral__12eaac0;
          if (lVar11 != 0) {
            lVar8 = lVar11;
          }
          if (lVar8 != 0) {
            lVar11 = native_System_String__Replace_afd9ac
                               (lVar8,_StringLiteral___12eaac8,
                                **(undefined8 **)(_string_TypeInfo_12d5f28 + 0xb8),0);
            if (*(int *)(lVar7 + 0x120) == 0) {
              if ((lVar11 == 0) ||
                 (lVar11 = native_System_String__Replace_afd9ac
                                     (lVar11,_StringLiteral___12eab80,_StringLiteral__12eaac0,0),
                 lVar11 == 0)) goto code_r0x00cbdc18;
              lVar11 = native_System_String__Replace_afd9ac
                                 (lVar11,_StringLiteral___12eab58,_StringLiteral__12eaac0,0);
            }
            plVar1 = (long *)(lVar7 + 0x170);
            if ((*(long *)(lVar7 + 0x140) == 0) && (*(int *)(lVar7 + 0x128) == 0)) {
              iVar16 = *(int *)(lVar7 + 300);
              if (0 < iVar16) {
                if (lVar11 == 0) goto code_r0x00cbdc18;
                if (iVar16 < *(int *)(lVar11 + 0x10)) {
                  lVar11 = native_System_String__Substring_b09fac(lVar11,0,iVar16,0);
                }
              }
              *plVar1 = lVar11;
              native_sub_4326e0(plVar1,lVar11);
            }
            else {
              *(long *)(lVar7 + 0x170) = _StringLiteral__12eaac0;
              native_sub_4326e0(plVar1);
              lVar8 = *(long *)(lVar7 + 0x140);
              if (lVar8 == 0) {
                lVar8 = native_sub_432808(
                                         _UnityEngine_UI_InputField_OnValidateInput_TypeInfo_12d73a8
                                         );
                native_UnityEngine_UI_InputField_OnValidateInput___ctor_c6cf5c
                          (lVar8,lVar7,_Method_UnityEngine_UI_InputField_Validate___12e5020,0);
              }
              if (lVar11 == 0) goto code_r0x00cbdc18;
              uVar2 = *(undefined4 *)(lVar11 + 0x10);
              iVar16 = *(int *)(lVar7 + 300);
              *(undefined4 *)(lVar7 + 0x188) = uVar2;
              *(undefined4 *)(lVar7 + 0x184) = uVar2;
              iVar4 = *(int *)(lVar11 + 0x10);
              if (0 < iVar16) {
                if (((*(byte *)(_System_Math_TypeInfo_12d51c0 + 0x133) >> 2 & 1) != 0) &&
                   (*(int *)(_System_Math_TypeInfo_12d51c0 + 0xe0) == 0)) {
                  native_sub_4327ec();
                }
                iVar4 = native_System_Math__Min_90f70c(iVar16,iVar4,0);
              }
              if (0 < iVar4) {
                iVar16 = 0;
                do {
                  lVar9 = *plVar1;
                  if (lVar9 == 0) goto code_r0x00cbdc18;
                  uVar2 = *(undefined4 *)(lVar9 + 0x10);
                  uVar5 = native_System_String__get_Chars_b03810(lVar11,iVar16,0);
                  if (lVar8 == 0) goto code_r0x00cbdc18;
                  sVar3 = native_UnityEngine_UI_InputField_OnValidateInput__Invoke_c6cfc8
                                    (lVar8,lVar9,uVar2,uVar5,0);
                  if (sVar3 != 0) {
                    lVar9 = *plVar1;
                    uVar13 = native_System_Char__ToString_793ee0(&stack0xffffffffffffffac,0);
                    lVar9 = native_System_String__Concat_afbd68(lVar9,uVar13,0);
                    *plVar1 = lVar9;
                    native_sub_4326e0(plVar1,lVar9);
                  }
                  iVar16 = iVar16 + 1;
                } while (iVar16 < iVar4);
              }
            }
            if (*(long *)(lVar7 + 0xf8) != 0) {
              native_UnityEngine_TouchScreenKeyboard__set_text_77103c
                        (*(long *)(lVar7 + 0xf8),*plVar1,0);
            }
            if (*(long *)(lVar7 + 0x170) != 0) {
              iVar16 = *(int *)(*(long *)(lVar7 + 0x170) + 0x10);
              if (iVar16 < *(int *)(lVar7 + 0x184)) {
                *(int *)(lVar7 + 0x188) = iVar16;
                *(int *)(lVar7 + 0x184) = iVar16;
              }
              else if (iVar16 < *(int *)(lVar7 + 0x188)) {
                *(int *)(lVar7 + 0x188) = iVar16;
              }
              native_UnityEngine_UI_InputField__SendOnValueChanged_cbdc24(lVar7);
              native_UnityEngine_UI_InputField__UpdateLabel_cbdca8(lVar7);
              return;
            }
          }
code_r0x00cbdc18:
                    /* WARNING: Subroutine does not return */
          native_sub_432810();
        }
      }
      else {
        lVar7 = *(long *)(lVar7 + 0x20);
        if (lVar7 != 0) {
          if ((bRam0000000001340727 & 1) == 0) {
            native_sub_43273c(&string_TypeInfo_12d5f28);
            native_sub_43273c(&StringLiteral___12eaac8);
            native_sub_43273c(&StringLiteral__12eaac0);
            bRam0000000001340727 = 1;
          }
          uVar6 = native_System_String__op_Equality_afc18c(*(undefined8 *)(lVar7 + 0x218),lVar11,0);
          if ((uVar6 & 1) != 0) {
            return;
          }
          lVar8 = _StringLiteral__12eaac0;
          if (lVar11 != 0) {
            lVar8 = lVar11;
          }
          if (lVar8 != 0) {
            uVar13 = native_System_String__Replace_afd9ac
                               (lVar8,_StringLiteral___12eaac8,
                                **(undefined8 **)(_string_TypeInfo_12d5f28 + 0xb8),0);
            *(undefined8 *)(lVar7 + 0x218) = uVar13;
            native_sub_4326e0((undefined8 *)(lVar7 + 0x218),uVar13);
            if (*(long *)(lVar7 + 0xf8) != 0) {
              native_UnityEngine_TouchScreenKeyboard__set_text_77103c
                        (*(long *)(lVar7 + 0xf8),*(undefined8 *)(lVar7 + 0x218),0);
            }
            if (*(long *)(lVar7 + 0x218) != 0) {
              iVar16 = *(int *)(*(long *)(lVar7 + 0x218) + 0x10);
              if (iVar16 < *(int *)(lVar7 + 0x22c)) {
                *(int *)(lVar7 + 0x230) = iVar16;
                *(int *)(lVar7 + 0x22c) = iVar16;
              }
              else if (iVar16 < *(int *)(lVar7 + 0x230)) {
                *(int *)(lVar7 + 0x230) = iVar16;
              }
              *(undefined1 *)(lVar7 + 0x2e3) = 1;
              *(undefined1 *)(lVar7 + 0x2a2) = 1;
              native_TMPro_TMP_InputField__UpdateLabel_88ae40(lVar7);
              if ((bRam0000000001340759 & 1) == 0) {
                native_sub_43273c(&Method_UnityEngine_Events_UnityEvent_string__Invoke___12de4f0);
                bRam0000000001340759 = 1;
              }
              lVar11 = _Method_UnityEngine_Events_UnityEvent_string__Invoke___12de4f0;
              lVar8 = *(long *)(lVar7 + 0x1d8);
              if (lVar8 == 0) {
                return;
              }
              lVar7 = *(long *)(lVar7 + 0x218);
              if ((bRam00000000013407b1 & 1) == 0) {
                native_sub_43273c(&UnityEngine_Events_InvokableCall_TypeInfo_12d4f78);
                native_sub_43273c(&
                                  Method_System_Collections_Generic_List_BaseInvokableCall__get_Count___12dc5d0
                                 );
                native_sub_43273c(&
                                  Method_System_Collections_Generic_List_BaseInvokableCall__get_Item___12dc5d8
                                 );
                native_sub_43273c(&object___TypeInfo_12d32d8);
                bRam00000000013407b1 = 1;
              }
              if ((lVar8 != 0) &&
                 (lVar9 = native_UnityEngine_Events_UnityEventBase__PrepareInvoke_773a28(lVar8,0),
                 lVar9 != 0)) {
                uVar6 = (ulong)*(uint *)(lVar9 + 0x18);
                if (0 < (int)*(uint *)(lVar9 + 0x18)) {
                  plVar1 = (long *)(lVar8 + 0x28);
                  lVar8 = 4;
                  do {
                    uVar17 = lVar8 - 4;
                    if ((uVar6 & 0xffffffff) <= uVar17) {
                      native_System_ThrowHelper__ThrowArgumentOutOfRangeException_9fe0f4(0);
                    }
                    lVar14 = *(long *)(*(long *)(*(long *)(lVar11 + 0x18) + 0xc0) + 0x18);
                    uVar13 = *(undefined8 *)(*(long *)(lVar9 + 0x10) + lVar8 * 8);
                    if ((*(byte *)(lVar14 + 0x132) & 1) == 0) {
                      native_sub_3c9850(lVar14);
                    }
                    plVar10 = (long *)native_sub_4327f8(uVar13,lVar14);
                    if (plVar10 == (long *)0x0) {
                      if (*(uint *)(lVar9 + 0x18) <= uVar17) {
                        native_System_ThrowHelper__ThrowArgumentOutOfRangeException_9fe0f4(0);
                      }
                      lVar14 = native_sub_4327f8(*(undefined8 *)
                                                  (*(long *)(lVar9 + 0x10) + lVar8 * 8),
                                                 _UnityEngine_Events_InvokableCall_TypeInfo_12d4f78)
                      ;
                      if (lVar14 == 0) {
                        if (*(uint *)(lVar9 + 0x18) <= uVar17) {
                          native_System_ThrowHelper__ThrowArgumentOutOfRangeException_9fe0f4(0);
                        }
                        plVar15 = (long *)*plVar1;
                        plVar10 = *(long **)(*(long *)(lVar9 + 0x10) + lVar8 * 8);
                        if (plVar15 == (long *)0x0) {
                          lVar14 = native_sub_432750(_object___TypeInfo_12d32d8,1);
                          *plVar1 = lVar14;
                          native_sub_4326e0(plVar1,lVar14);
                          plVar15 = (long *)*plVar1;
                          if (plVar15 == (long *)0x0) goto code_r0x008a0300;
                        }
                        if ((lVar7 != 0) &&
                           (lVar14 = native_sub_4327f8(lVar7,*(undefined8 *)(*plVar15 + 0x40)),
                           lVar14 == 0)) {
                          uVar13 = native_sub_432830();
                    /* WARNING: Subroutine does not return */
                          native_sub_4327dc(uVar13,0);
                        }
                        if ((int)plVar15[3] == 0) {
                          uVar13 = native_sub_43283c();
                    /* WARNING: Subroutine does not return */
                          native_sub_4327dc(uVar13,0);
                        }
                        plVar15[4] = lVar7;
                        native_sub_4326e0(plVar15 + 4,lVar7);
                        if (plVar10 != (long *)0x0) {
                          lVar14 = *plVar1;
                          pcVar12 = *(code **)(*plVar10 + 0x178);
                          uVar13 = *(undefined8 *)(*plVar10 + 0x180);
                          goto code_r0x008a0298;
                        }
                        goto code_r0x008a0300;
                      }
                      native_UnityEngine_Events_InvokableCall__Invoke_8df658(lVar14,0);
                    }
                    else {
                      pcVar12 = *(code **)(*plVar10 + 0x198);
                      uVar13 = *(undefined8 *)(*plVar10 + 0x1a0);
                      lVar14 = lVar7;
code_r0x008a0298:
                      (*pcVar12)(plVar10,lVar14,uVar13);
                    }
                    uVar6 = (ulong)*(int *)(lVar9 + 0x18);
                    lVar14 = lVar8 + -3;
                    lVar8 = lVar8 + 1;
                  } while (lVar14 < (long)uVar6);
                }
                return;
              }
code_r0x008a0300:
                    /* WARNING: Subroutine does not return */
              native_sub_432810();
            }
          }
                    /* WARNING: Subroutine does not return */
          native_sub_432810();
        }
      }
                    /* WARNING: Subroutine does not return */
      native_sub_432810();
    }
  }
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* MG_BlocksEngine2.UI.BE2_UI_VariableViewer$$UpdateVariableValue @ 0xdcd45c
 * void MG_BlocksEngine2_UI_BE2_UI_VariableViewer__UpdateVariableValue (MG_BlocksEngine2_UI_BE2_UI_VariableViewer_o* __this, const MethodInfo* method); */

/* WARNING: Removing unreachable block (ram,0x005797fc) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MG_BlocksEngine2.UI.BE2_UI_VariableViewer$$UpdateVariableValue
   void MG_BlocksEngine2_UI_BE2_UI_VariableViewer__UpdateVariableValue
   (MG_BlocksEngine2_UI_BE2_UI_VariableViewer_o* __this, const MethodInfo* method); */

void native_MG_BlocksEngine2_UI_BE2_UI_VariableViewer__UpdateVariableValue_dcd45c(long param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  
  if ((bRam0000000001346e03 & 1) == 0) {
    native_sub_43273c(&MG_BlocksEngine2_Environment_BE2_VariablesManager_TypeInfo_12d3a90);
    bRam0000000001346e03 = 1;
  }
  if (*(long *)(param_1 + 0x20) != 0) {
    uVar3 = *(undefined8 *)(param_1 + 0x18);
    lVar4 = **(long **)(_MG_BlocksEngine2_Environment_BE2_VariablesManager_TypeInfo_12d3a90 + 0xb8);
    uVar2 = native_MG_BlocksEngine2_Utils_BE2_InputField__get_text_60240c
                      (*(long *)(param_1 + 0x20),0);
    if (lVar4 != 0) {
      if ((bRam0000000001346e1c & 1) == 0) {
        native_sub_43273c(&
                          Method_System_Collections_Generic_Dictionary_string__string__Add___12d98e8
                         );
        native_sub_43273c(&
                          Method_System_Collections_Generic_Dictionary_string__string__ContainsKey___12d98f8
                         );
        native_sub_43273c(&
                          Method_System_Collections_Generic_Dictionary_string__string__set_Item___12d9930
                         );
        bRam0000000001346e1c = 1;
      }
      if (*(long *)(lVar4 + 0x20) != 0) {
        uVar1 = native_System_Collections_Generic_Dictionary_Action__LinkedListNode_Action____ContainsKey_cda894
                          (*(long *)(lVar4 + 0x20),uVar3,
                           _Method_System_Collections_Generic_Dictionary_string__string__ContainsKey___12d98f8
                          );
        lVar4 = *(long *)(lVar4 + 0x20);
        if (lVar4 != 0) {
          if ((uVar1 & 1) == 0) {
            native_System_Collections_Generic_Dictionary_Canvas__IndexedSet_Graphic____Add_cda620
                      (lVar4,uVar3,uVar2,
                       _Method_System_Collections_Generic_Dictionary_string__string__Add___12d98e8);
            lVar4 = native_MG_BlocksEngine2_Core_BE2_MainEventsManager__get_Instance_6001fc(0);
            if (lVar4 == 0) goto LAB_00dc9f80;
            native_MG_BlocksEngine2_Core_BE2_EventsManager__TriggerEvent_579794(lVar4,5,0);
          }
          else {
            native_System_Collections_Generic_Dictionary_Action__LinkedListNode_Action____set_Item_cda5f8
                      (lVar4,uVar3,uVar2,
                       _Method_System_Collections_Generic_Dictionary_string__string__set_Item___12d9930
                      );
          }
          lVar4 = native_MG_BlocksEngine2_Core_BE2_MainEventsManager__get_Instance_6001fc(0);
          if (lVar4 != 0) {
            if ((bRam000000000133eaf8 & 1) == 0) {
              native_sub_43273c(&
                                Method_System_Collections_Generic_Dictionary_BE2EventTypes__UnityEvent__TryGetValue___12d8ea8
                                ,4,0);
              bRam000000000133eaf8 = 1;
            }
            if ((*(long *)(lVar4 + 0x10) != 0) &&
               (uVar1 = native_System_Collections_Generic_Dictionary_BE2EventTypes__UnityEvent___TryGetValue_c25318
                                  (*(long *)(lVar4 + 0x10),4,&stack0xffffffffffffffd8,
                                   _Method_System_Collections_Generic_Dictionary_BE2EventTypes__UnityEvent__TryGetValue___12d8ea8
                                  ), (uVar1 & 1) == 0)) {
              return;
            }
                    /* WARNING: Subroutine does not return */
            native_sub_432810();
          }
        }
      }
LAB_00dc9f80:
                    /* WARNING: Subroutine does not return */
      native_sub_432810();
    }
  }
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* MG_BlocksEngine2.UI.BE2_UI_VariableViewer$$GetVariableName @ 0xdcd120
 * System_String_o* MG_BlocksEngine2_UI_BE2_UI_VariableViewer__GetVariableName (MG_BlocksEngine2_UI_BE2_UI_VariableViewer_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MG_BlocksEngine2.UI.BE2_UI_VariableViewer$$GetVariableName
   System_String_o* MG_BlocksEngine2_UI_BE2_UI_VariableViewer__GetVariableName
   (MG_BlocksEngine2_UI_BE2_UI_VariableViewer_o* __this, const MethodInfo* method); */

undefined8
native_MG_BlocksEngine2_UI_BE2_UI_VariableViewer__GetVariableName_dcd120(undefined8 param_1)

{
  ulong uVar1;
  long *plVar2;
  long lVar3;
  undefined8 uVar4;
  code *UNRECOVERED_JUMPTABLE;
  
  if ((bRam0000000001346e04 & 1) == 0) {
    native_sub_43273c(&
                      Method_UnityEngine_Component_GetComponentInChildren_BE2_UI_SelectionBlock____12e2c70
                     );
    bRam0000000001346e04 = 1;
  }
  lVar3 = native_UnityEngine_Component__get_transform_8da62c(param_1,0);
  if ((((lVar3 != 0) &&
       (lVar3 = native_UnityEngine_Component__GetComponentInChildren_Animation__49db98
                          (lVar3,
                           _Method_UnityEngine_Component_GetComponentInChildren_BE2_UI_SelectionBlock____12e2c70
                          ), lVar3 != 0)) &&
      (lVar3 = native_UnityEngine_Component__get_transform_8da62c(lVar3,0), lVar3 != 0)) &&
     ((lVar3 = native_UnityEngine_Transform__GetChild_772ef0(lVar3,0,0), lVar3 != 0 &&
      (lVar3 = native_UnityEngine_Transform__GetChild_772ef0(lVar3,0,0), lVar3 != 0)))) {
    uVar4 = native_UnityEngine_Transform__GetChild_772ef0(lVar3,0,0);
    lVar3 = native_MG_BlocksEngine2_Utils_BE2_Text__GetBE2Text_610e74(uVar4,0);
    if (lVar3 != 0) {
      if ((bRam000000000133eebf & 1) == 0) {
        native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0,0);
        native_sub_43273c(&StringLiteral__12eaac0);
        bRam000000000133eebf = 1;
      }
      uVar4 = *(undefined8 *)(lVar3 + 0x20);
      if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
        native_sub_4327ec();
      }
      uVar1 = native_UnityEngine_Object__op_Implicit_8e1b98(uVar4,0);
      if ((uVar1 & 1) == 0) {
        uVar4 = *(undefined8 *)(lVar3 + 0x18);
        if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
           (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
          native_sub_4327ec();
        }
        uVar1 = native_UnityEngine_Object__op_Implicit_8e1b98(uVar4,0);
        if ((uVar1 & 1) == 0) {
          return _StringLiteral__12eaac0;
        }
        plVar2 = *(long **)(lVar3 + 0x18);
        if (plVar2 == (long *)0x0) goto LAB_0061a84c;
        UNRECOVERED_JUMPTABLE = *(code **)(*plVar2 + 0x5d8);
        uVar4 = *(undefined8 *)(*plVar2 + 0x5e0);
      }
      else {
        plVar2 = *(long **)(lVar3 + 0x20);
        if (plVar2 == (long *)0x0) {
LAB_0061a84c:
                    /* WARNING: Subroutine does not return */
          native_sub_432810();
        }
        UNRECOVERED_JUMPTABLE = *(code **)(*plVar2 + 0x548);
        uVar4 = *(undefined8 *)(*plVar2 + 0x550);
      }
                    /* WARNING: Could not recover jumptable at 0x0061a82c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar4 = (*UNRECOVERED_JUMPTABLE)(plVar2,uVar4);
      return uVar4;
    }
  }
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* MG_BlocksEngine2.UI.BE2_UI_VariableViewer$$RemoveVariable @ 0xdcd584
 * void MG_BlocksEngine2_UI_BE2_UI_VariableViewer__RemoveVariable (MG_BlocksEngine2_UI_BE2_UI_VariableViewer_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MG_BlocksEngine2.UI.BE2_UI_VariableViewer$$RemoveVariable
   void MG_BlocksEngine2_UI_BE2_UI_VariableViewer__RemoveVariable
   (MG_BlocksEngine2_UI_BE2_UI_VariableViewer_o* __this, const MethodInfo* method); */

void native_MG_BlocksEngine2_UI_BE2_UI_VariableViewer__RemoveVariable_dcd584(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  if ((bRam0000000001346e05 & 1) == 0) {
    native_sub_43273c(&MG_BlocksEngine2_Environment_BE2_VariablesManager_TypeInfo_12d3a90);
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    bRam0000000001346e05 = 1;
  }
  if (**(long **)(_MG_BlocksEngine2_Environment_BE2_VariablesManager_TypeInfo_12d3a90 + 0xb8) != 0)
  {
    native_MG_BlocksEngine2_Environment_BE2_VariablesManager__RemoveVariable_dcd654
              (**(long **)(_MG_BlocksEngine2_Environment_BE2_VariablesManager_TypeInfo_12d3a90 +
                          0xb8),*(undefined8 *)(param_1 + 0x18));
    lVar1 = native_UnityEngine_Component__get_gameObject_8da66c(param_1,0);
    if (lVar1 != 0) {
      native_UnityEngine_GameObject__SetActive_8de698(lVar1,0,0);
      lVar1 = native_MG_BlocksEngine2_UI_BE2_UI_BlocksSelectionViewer__get_Instance_dc60e0();
      if (lVar1 != 0) {
        native_MG_BlocksEngine2_UI_BE2_UI_BlocksSelectionViewer__ForceRebuildLayout_dc69d0();
        uVar2 = native_UnityEngine_Component__get_gameObject_8da66c(param_1,0);
        if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
           (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
          native_sub_4327ec(_UnityEngine_Object_TypeInfo_12d54e0);
        }
        if ((bRam0000000001341048 & 1) == 0) {
          native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0,0);
          bRam0000000001341048 = 1;
        }
        if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
           (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
          native_sub_4327ec();
        }
        if (pcRam0000000001341040 == (code *)0x0) {
          pcRam0000000001341040 = (code *)native_sub_4326f0(&UNK_00e2f7cf);
        }
                    /* WARNING: Could not recover jumptable at 0x008ea5f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*pcRam0000000001341040)(0,uVar2);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* MG_BlocksEngine2.UI.BE2_UI_VariableViewer$$.ctor @ 0xdcd6fc
 * void MG_BlocksEngine2_UI_BE2_UI_VariableViewer___ctor (MG_BlocksEngine2_UI_BE2_UI_VariableViewer_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MG_BlocksEngine2.UI.BE2_UI_VariableViewer$$.ctor
   void MG_BlocksEngine2_UI_BE2_UI_VariableViewer___ctor
   (MG_BlocksEngine2_UI_BE2_UI_VariableViewer_o* __this, const MethodInfo* method); */

undefined1  [16] native_MG_BlocksEngine2_UI_BE2_UI_VariableViewer___ctor_dcd6fc(ulong param_1)

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



/* MG_BlocksEngine2.UI.BE2_UI_VariableViewer$$<OnEnable>b__4_0 @ 0xdcd704
 * void MG_BlocksEngine2_UI_BE2_UI_VariableViewer___OnEnable_b__4_0 (MG_BlocksEngine2_UI_BE2_UI_VariableViewer_o* __this, System_String_o* _p0_, const MethodInfo* method); */

/* WARNING: Removing unreachable block (ram,0x005797fc) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MG_BlocksEngine2.UI.BE2_UI_VariableViewer$$<OnEnable>b__4_0
   void MG_BlocksEngine2_UI_BE2_UI_VariableViewer___OnEnable_b__4_0
   (MG_BlocksEngine2_UI_BE2_UI_VariableViewer_o* __this, System_String_o* _p0_, const MethodInfo*
   method); */

void native_MG_BlocksEngine2_UI_BE2_UI_VariableViewer___OnEnable_b__4_0_dcd704(long param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  
  if ((bRam0000000001346e03 & 1) == 0) {
    native_sub_43273c(&MG_BlocksEngine2_Environment_BE2_VariablesManager_TypeInfo_12d3a90);
    bRam0000000001346e03 = 1;
  }
  if (*(long *)(param_1 + 0x20) != 0) {
    uVar3 = *(undefined8 *)(param_1 + 0x18);
    lVar4 = **(long **)(_MG_BlocksEngine2_Environment_BE2_VariablesManager_TypeInfo_12d3a90 + 0xb8);
    uVar2 = native_MG_BlocksEngine2_Utils_BE2_InputField__get_text_60240c
                      (*(long *)(param_1 + 0x20),0);
    if (lVar4 != 0) {
      if ((bRam0000000001346e1c & 1) == 0) {
        native_sub_43273c(&
                          Method_System_Collections_Generic_Dictionary_string__string__Add___12d98e8
                         );
        native_sub_43273c(&
                          Method_System_Collections_Generic_Dictionary_string__string__ContainsKey___12d98f8
                         );
        native_sub_43273c(&
                          Method_System_Collections_Generic_Dictionary_string__string__set_Item___12d9930
                         );
        bRam0000000001346e1c = 1;
      }
      if (*(long *)(lVar4 + 0x20) != 0) {
        uVar1 = native_System_Collections_Generic_Dictionary_Action__LinkedListNode_Action____ContainsKey_cda894
                          (*(long *)(lVar4 + 0x20),uVar3,
                           _Method_System_Collections_Generic_Dictionary_string__string__ContainsKey___12d98f8
                          );
        lVar4 = *(long *)(lVar4 + 0x20);
        if (lVar4 != 0) {
          if ((uVar1 & 1) == 0) {
            native_System_Collections_Generic_Dictionary_Canvas__IndexedSet_Graphic____Add_cda620
                      (lVar4,uVar3,uVar2,
                       _Method_System_Collections_Generic_Dictionary_string__string__Add___12d98e8);
            lVar4 = native_MG_BlocksEngine2_Core_BE2_MainEventsManager__get_Instance_6001fc(0);
            if (lVar4 == 0) goto LAB_00dc9f80;
            native_MG_BlocksEngine2_Core_BE2_EventsManager__TriggerEvent_579794(lVar4,5,0);
          }
          else {
            native_System_Collections_Generic_Dictionary_Action__LinkedListNode_Action____set_Item_cda5f8
                      (lVar4,uVar3,uVar2,
                       _Method_System_Collections_Generic_Dictionary_string__string__set_Item___12d9930
                      );
          }
          lVar4 = native_MG_BlocksEngine2_Core_BE2_MainEventsManager__get_Instance_6001fc(0);
          if (lVar4 != 0) {
            if ((bRam000000000133eaf8 & 1) == 0) {
              native_sub_43273c(&
                                Method_System_Collections_Generic_Dictionary_BE2EventTypes__UnityEvent__TryGetValue___12d8ea8
                                ,4,0);
              bRam000000000133eaf8 = 1;
            }
            if ((*(long *)(lVar4 + 0x10) != 0) &&
               (uVar1 = native_System_Collections_Generic_Dictionary_BE2EventTypes__UnityEvent___TryGetValue_c25318
                                  (*(long *)(lVar4 + 0x10),4,&stack0xffffffffffffffd8,
                                   _Method_System_Collections_Generic_Dictionary_BE2EventTypes__UnityEvent__TryGetValue___12d8ea8
                                  ), (uVar1 & 1) == 0)) {
              return;
            }
                    /* WARNING: Subroutine does not return */
            native_sub_432810();
          }
        }
      }
LAB_00dc9f80:
                    /* WARNING: Subroutine does not return */
      native_sub_432810();
    }
  }
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}


