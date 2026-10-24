/* ARM64 IL2CPP native pseudocode from Ghidra.
 * Recovered implementation, not original C# source.
 * Function boundaries follow the IL2CPP method address table. */


/* MG_BlocksEngine2.UI.BE2_UI_VariableListViewer$$Awake @ 0xdcc2f8
 * void MG_BlocksEngine2_UI_BE2_UI_VariableListViewer__Awake (MG_BlocksEngine2_UI_BE2_UI_VariableListViewer_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MG_BlocksEngine2.UI.BE2_UI_VariableListViewer$$Awake
   void MG_BlocksEngine2_UI_BE2_UI_VariableListViewer__Awake
   (MG_BlocksEngine2_UI_BE2_UI_VariableListViewer_o* __this, const MethodInfo* method); */

void native_MG_BlocksEngine2_UI_BE2_UI_VariableListViewer__Awake_dcc2f8(long param_1)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  long lVar5;
  undefined8 uVar6;
  
  if ((bRam0000000001346df6 & 1) == 0) {
    native_sub_43273c(&Method_UnityEngine_Component_GetComponent_Button____12e29a0);
    native_sub_43273c(&Method_UnityEngine_Component_GetComponent_Toggle____12e2b58);
    bRam0000000001346df6 = 1;
  }
  lVar5 = native_UnityEngine_Component__get_transform_8da62c(param_1,0);
  if (lVar5 != 0) {
    uVar6 = native_UnityEngine_Transform__GetChild_772ef0(lVar5,0,0);
    *(undefined8 *)(param_1 + 0x20) = uVar6;
    native_sub_4326e0();
    lVar5 = native_UnityEngine_Component__get_transform_8da62c(param_1,0);
    if (lVar5 != 0) {
      uVar6 = native_UnityEngine_Transform__GetChild_772ef0(lVar5,1,0);
      *(undefined8 *)(param_1 + 0x28) = uVar6;
      native_sub_4326e0((undefined8 *)(param_1 + 0x28),uVar6);
      if ((*(long *)(param_1 + 0x20) != 0) &&
         (lVar5 = native_UnityEngine_Transform__GetChild_772ef0(*(long *)(param_1 + 0x20),0,0),
         lVar5 != 0)) {
        uVar6 = native_UnityEngine_Component__GetComponent_ActiveAnimation__49daec
                          (lVar5,_Method_UnityEngine_Component_GetComponent_Button____12e29a0);
        *(undefined8 *)(param_1 + 0x30) = uVar6;
        native_sub_4326e0((undefined8 *)(param_1 + 0x30),uVar6);
        if ((*(long *)(param_1 + 0x20) != 0) &&
           (lVar5 = native_UnityEngine_Transform__GetChild_772ef0(*(long *)(param_1 + 0x20),2,0),
           lVar5 != 0)) {
          uVar6 = native_UnityEngine_Component__GetComponent_ActiveAnimation__49daec
                            (lVar5,_Method_UnityEngine_Component_GetComponent_Toggle____12e2b58);
          *(undefined8 *)(param_1 + 0x38) = uVar6;
          native_sub_4326e0((undefined8 *)(param_1 + 0x38),uVar6);
          lVar5 = *(long *)(param_1 + 0x28);
          if (lVar5 != 0) {
            iVar4 = native_UnityEngine_Transform__get_childCount_772a64(lVar5,0);
            lVar5 = native_UnityEngine_Transform__GetChild_772ef0(lVar5,iVar4 + -1,0);
            if (lVar5 != 0) {
              uVar6 = native_UnityEngine_Component__GetComponent_ActiveAnimation__49daec
                                (lVar5,_Method_UnityEngine_Component_GetComponent_Button____12e29a0)
              ;
              *(undefined8 *)(param_1 + 0x40) = uVar6;
              native_sub_4326e0();
              uVar6 = native_MG_BlocksEngine2_UI_BE2_UI_VariableListViewer__GetVariableName_dcc474
                                (param_1);
              *(undefined8 *)(param_1 + 0x18) = uVar6;
              if (iRam0000000001345318 != 0) {
                puVar1 = (ulong *)((param_1 + 0x18U >> 0x12 & 0x7fff) * 8 + 0x138ecd8);
                do {
                  cVar2 = '\x01';
                  bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
                  if (bVar3) {
                    *puVar1 = *puVar1 | 1L << (param_1 + 0x18U >> 0xc & 0x3f);
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
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* MG_BlocksEngine2.UI.BE2_UI_VariableListViewer$$OnEnable @ 0xdcc520
 * void MG_BlocksEngine2_UI_BE2_UI_VariableListViewer__OnEnable (MG_BlocksEngine2_UI_BE2_UI_VariableListViewer_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MG_BlocksEngine2.UI.BE2_UI_VariableListViewer$$OnEnable
   void MG_BlocksEngine2_UI_BE2_UI_VariableListViewer__OnEnable
   (MG_BlocksEngine2_UI_BE2_UI_VariableListViewer_o* __this, const MethodInfo* method); */

void native_MG_BlocksEngine2_UI_BE2_UI_VariableListViewer__OnEnable_dcc520(long param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  
  if ((bRam0000000001346df7 & 1) == 0) {
    native_sub_43273c(&Method_MG_BlocksEngine2_UI_BE2_UI_VariableListViewer_RemoveList___12e2310);
    native_sub_43273c(&
                      Method_MG_BlocksEngine2_UI_BE2_UI_VariableListViewer__OnEnable_b__8_0___12e2300
                     );
    native_sub_43273c(&
                      Method_MG_BlocksEngine2_UI_BE2_UI_VariableListViewer__OnEnable_b__8_1___12e2308
                     );
    native_sub_43273c(&
                      Method_MG_BlocksEngine2_UI_BE2_UI_VariableListViewer_UpdateViewerValues___12e2318
                     );
    native_sub_43273c(&Method_UnityEngine_Events_UnityAction_bool___ctor___12de388);
    native_sub_43273c(&UnityEngine_Events_UnityAction_bool__TypeInfo_12d2f28);
    native_sub_43273c(&UnityEngine_Events_UnityAction_TypeInfo_12d65d0);
    native_sub_43273c(&Method_UnityEngine_Events_UnityEvent_bool__AddListener___12de428);
    bRam0000000001346df7 = 1;
  }
  if (*(long *)(param_1 + 0x30) != 0) {
    lVar4 = *(long *)(*(long *)(param_1 + 0x30) + 0xf8);
    uVar3 = native_sub_432808(_UnityEngine_Events_UnityAction_TypeInfo_12d65d0);
    native_UnityEngine_Events_UnityAction___ctor_773130
              (uVar3,param_1,
               _Method_MG_BlocksEngine2_UI_BE2_UI_VariableListViewer_RemoveList___12e2310,0);
    if (lVar4 != 0) {
      native_UnityEngine_Events_UnityEvent__AddListener_7734bc(lVar4,uVar3,0);
      if (*(long *)(param_1 + 0x40) != 0) {
        lVar4 = *(long *)(*(long *)(param_1 + 0x40) + 0xf8);
        uVar3 = native_sub_432808(_UnityEngine_Events_UnityAction_TypeInfo_12d65d0);
        native_UnityEngine_Events_UnityAction___ctor_773130
                  (uVar3,param_1,
                   _Method_MG_BlocksEngine2_UI_BE2_UI_VariableListViewer__OnEnable_b__8_0___12e2300,
                   0);
        if (lVar4 != 0) {
          native_UnityEngine_Events_UnityEvent__AddListener_7734bc(lVar4,uVar3,0);
          if (*(long *)(param_1 + 0x38) != 0) {
            lVar4 = *(long *)(*(long *)(param_1 + 0x38) + 0x110);
            uVar3 = native_sub_432808(_UnityEngine_Events_UnityAction_bool__TypeInfo_12d2f28);
            native_UnityEngine_Events_UnityAction_bool____ctor_89abf4
                      (uVar3,param_1,
                       _Method_MG_BlocksEngine2_UI_BE2_UI_VariableListViewer__OnEnable_b__8_1___12e2308
                       ,_Method_UnityEngine_Events_UnityAction_bool___ctor___12de388);
            if (lVar4 != 0) {
              native_UnityEngine_Events_UnityEvent_bool___AddListener_89e8b4
                        (lVar4,uVar3,
                         _Method_UnityEngine_Events_UnityEvent_bool__AddListener___12de428);
              lVar4 = native_MG_BlocksEngine2_Core_BE2_MainEventsManager__get_Instance_6001fc(0);
              uVar3 = native_sub_432808(_UnityEngine_Events_UnityAction_TypeInfo_12d65d0);
              native_UnityEngine_Events_UnityAction___ctor_773130
                        (uVar3,param_1,
                         _Method_MG_BlocksEngine2_UI_BE2_UI_VariableListViewer_UpdateViewerValues___12e2318
                         ,0);
              if (lVar4 != 0) {
                native_MG_BlocksEngine2_Core_BE2_EventsManager__StartListening_563268
                          (lVar4,4,uVar3,0);
                lVar4 = native_MG_BlocksEngine2_UI_BE2_UI_VariableListViewer__C_UpdateViewerValues_dcc854
                                  (param_1);
                if (lVar4 == 0) {
                  native_sub_432740(&System_NullReferenceException_TypeInfo_12d5498,0,0);
                  uVar2 = native_sub_432808();
                  uVar3 = native_sub_432740(&StringLiteral_routine_is_null_12f5ec0);
                  native_System_NullReferenceException___ctor_ad2894(uVar2,uVar3,0);
                }
                else {
                  if (pcRam0000000001340fe8 == (code *)0x0) {
                    pcRam0000000001340fe8 = (code *)native_sub_4326f0(&UNK_00e2f589);
                  }
                  uVar1 = (*pcRam0000000001340fe8)(param_1);
                  if ((uVar1 & 1) != 0) {
                    if (pcRam0000000001340ff8 == (code *)0x0) {
                      pcRam0000000001340ff8 = (code *)native_sub_4326f0(&UNK_00e2f61c);
                    }
                    /* WARNING: Could not recover jumptable at 0x008e91f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                    (*pcRam0000000001340ff8)(param_1,lVar4);
                    return;
                  }
                  native_sub_432740(&System_ArgumentException_TypeInfo_12d3800);
                  uVar2 = native_sub_432808();
                  uVar3 = native_sub_432740(&
                                            StringLiteral_Coroutines_can_only_be_stopped_on_a_MonoBehaviour_12ed328
                                           );
                  native_System_ArgumentException___ctor_953858(uVar2,uVar3,0);
                }
                uVar3 = native_sub_432740(&Method_UnityEngine_MonoBehaviour_StartCoroutine___12e55d8
                                         );
                    /* WARNING: Subroutine does not return */
                native_sub_4327dc(uVar2,uVar3);
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



/* MG_BlocksEngine2.UI.BE2_UI_VariableListViewer$$OnDisable @ 0xdcc734
 * void MG_BlocksEngine2_UI_BE2_UI_VariableListViewer__OnDisable (MG_BlocksEngine2_UI_BE2_UI_VariableListViewer_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MG_BlocksEngine2.UI.BE2_UI_VariableListViewer$$OnDisable
   void MG_BlocksEngine2_UI_BE2_UI_VariableListViewer__OnDisable
   (MG_BlocksEngine2_UI_BE2_UI_VariableListViewer_o* __this, const MethodInfo* method); */

void native_MG_BlocksEngine2_UI_BE2_UI_VariableListViewer__OnDisable_dcc734(long param_1)

{
  ulong uVar1;
  long lVar2;
  undefined8 uVar3;
  long lStack_38;
  
  if ((bRam0000000001346df8 & 1) == 0) {
    native_sub_43273c(&
                      Method_MG_BlocksEngine2_UI_BE2_UI_VariableListViewer_UpdateViewerValues___12e2318
                     );
    native_sub_43273c(&UnityEngine_Events_UnityAction_TypeInfo_12d65d0);
    bRam0000000001346df8 = 1;
  }
  if ((*(long *)(param_1 + 0x30) != 0) &&
     (lVar2 = *(long *)(*(long *)(param_1 + 0x30) + 0xf8), lVar2 != 0)) {
    native_UnityEngine_Events_UnityEventBase__RemoveAllListeners_774038(lVar2,0);
    if ((*(long *)(param_1 + 0x40) != 0) &&
       (lVar2 = *(long *)(*(long *)(param_1 + 0x40) + 0xf8), lVar2 != 0)) {
      native_UnityEngine_Events_UnityEventBase__RemoveAllListeners_774038(lVar2,0);
      if ((*(long *)(param_1 + 0x38) != 0) &&
         (lVar2 = *(long *)(*(long *)(param_1 + 0x38) + 0x110), lVar2 != 0)) {
        native_UnityEngine_Events_UnityEventBase__RemoveAllListeners_774038(lVar2,0);
        lVar2 = native_MG_BlocksEngine2_Core_BE2_MainEventsManager__get_Instance_6001fc(0);
        uVar3 = native_sub_432808(_UnityEngine_Events_UnityAction_TypeInfo_12d65d0);
        native_UnityEngine_Events_UnityAction___ctor_773130
                  (uVar3,param_1,
                   _Method_MG_BlocksEngine2_UI_BE2_UI_VariableListViewer_UpdateViewerValues___12e2318
                   ,0);
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
    }
  }
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* MG_BlocksEngine2.UI.BE2_UI_VariableListViewer$$Start @ 0xdcc820
 * void MG_BlocksEngine2_UI_BE2_UI_VariableListViewer__Start (MG_BlocksEngine2_UI_BE2_UI_VariableListViewer_o* __this, const MethodInfo* method); */

/* WARNING: Removing unreachable block (ram,0x00dc929c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MG_BlocksEngine2.UI.BE2_UI_VariableListViewer$$Start
   void MG_BlocksEngine2_UI_BE2_UI_VariableListViewer__Start
   (MG_BlocksEngine2_UI_BE2_UI_VariableListViewer_o* __this, const MethodInfo* method); */

void native_MG_BlocksEngine2_UI_BE2_UI_VariableListViewer__Start_dcc820(long param_1)

{
  long lVar1;
  long *plVar2;
  undefined8 *puVar3;
  long *plVar4;
  undefined8 uVar5;
  long lVar6;
  ulong uVar7;
  int *piVar8;
  
  uVar5 = native_MG_BlocksEngine2_UI_BE2_UI_VariableListViewer__C_UpdateViewerValues_dcc854();
  native_UnityEngine_MonoBehaviour__StartCoroutine_8e9174(param_1,uVar5,0);
  if ((bRam0000000001346dfa & 1) == 0) {
    native_sub_43273c(&MG_BlocksEngine2_Environment_BE2_VariablesListManager_TypeInfo_12d3a88);
    native_sub_43273c(&Method_UnityEngine_Component_GetComponent_BE2_UI_ListItem____12e2968);
    native_sub_43273c(&System_IDisposable_TypeInfo_12d4b00);
    native_sub_43273c(&System_Collections_IEnumerator_TypeInfo_12d4b80);
    native_sub_43273c(&Method_System_Collections_Generic_List_string__Add___12dcea0);
    native_sub_43273c(&Method_System_Collections_Generic_List_string___ctor___12dce88);
    native_sub_43273c(&System_Collections_Generic_List_string__TypeInfo_12d2b60);
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    native_sub_43273c(&UnityEngine_Transform_TypeInfo_12d6300);
    bRam0000000001346dfa = 1;
  }
  lVar1 = native_sub_432808(_System_Collections_Generic_List_string__TypeInfo_12d2b60);
  native_System_Collections_Generic_List_XmlEventCache_XmlEvent______ctor_d3ff44
            (lVar1,_Method_System_Collections_Generic_List_string___ctor___12dce88);
  if (*(long *)(param_1 + 0x28) != 0) {
    plVar2 = (long *)native_UnityEngine_Transform__GetEnumerator_772e40(*(long *)(param_1 + 0x28),0)
    ;
    if (plVar2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      native_sub_432810();
    }
    do {
      lVar6 = *plVar2;
      if ((ulong)*(ushort *)(lVar6 + 0x12a) != 0) {
        uVar7 = 0;
        piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        do {
          if (*(long *)(piVar8 + -2) == _System_Collections_IEnumerator_TypeInfo_12d4b80) {
            puVar3 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
            goto LAB_00dc9094;
          }
          uVar7 = uVar7 + 1;
          piVar8 = piVar8 + 4;
        } while (uVar7 < *(ushort *)(lVar6 + 0x12a));
      }
      puVar3 = (undefined8 *)
               native_sub_3c9b34(plVar2,_System_Collections_IEnumerator_TypeInfo_12d4b80,0);
LAB_00dc9094:
      uVar7 = (*(code *)*puVar3)(plVar2,puVar3[1]);
      if ((uVar7 & 1) == 0) {
        plVar2 = (long *)native_sub_4327f8(plVar2,_System_IDisposable_TypeInfo_12d4b00);
        if (plVar2 == (long *)0x0) goto LAB_00dc9220;
        lVar6 = *plVar2;
        if ((ulong)*(ushort *)(lVar6 + 0x12a) == 0) goto LAB_00dc91f8;
        uVar7 = 0;
        piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        goto LAB_00dc91dc;
      }
      lVar6 = *plVar2;
      if ((ulong)*(ushort *)(lVar6 + 0x12a) != 0) {
        uVar7 = 0;
        piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        do {
          if (*(long *)(piVar8 + -2) == _System_Collections_IEnumerator_TypeInfo_12d4b80) {
            puVar3 = (undefined8 *)(lVar6 + (long)(*piVar8 + 1) * 0x10 + 0x138);
            goto LAB_00dc90fc;
          }
          uVar7 = uVar7 + 1;
          piVar8 = piVar8 + 4;
        } while (uVar7 < *(ushort *)(lVar6 + 0x12a));
      }
      puVar3 = (undefined8 *)
               native_sub_3c9b34(plVar2,_System_Collections_IEnumerator_TypeInfo_12d4b80,1);
LAB_00dc90fc:
      plVar4 = (long *)(*(code *)*puVar3)(plVar2,puVar3[1]);
      if (plVar4 == (long *)0x0) {
LAB_00dc9284:
                    /* WARNING: Subroutine does not return */
        native_sub_432810();
      }
      if ((*(byte *)(*plVar4 + 300) < *(byte *)(_UnityEngine_Transform_TypeInfo_12d6300 + 300)) ||
         (*(long *)(*(long *)(*plVar4 + 200) +
                    (ulong)*(byte *)(_UnityEngine_Transform_TypeInfo_12d6300 + 300) * 8 + -8) !=
          _UnityEngine_Transform_TypeInfo_12d6300)) {
        native_sub_432b04();
        goto LAB_00dc9284;
      }
      lVar6 = native_UnityEngine_Component__GetComponent_ActiveAnimation__49daec
                        (plVar4,
                         _Method_UnityEngine_Component_GetComponent_BE2_UI_ListItem____12e2968);
      if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
        native_sub_4327ec();
      }
      uVar7 = native_UnityEngine_Object__op_Implicit_8e1b98(lVar6,0);
      if ((uVar7 & 1) != 0) {
        if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
          native_sub_432810();
        }
        if (*(long *)(lVar6 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
          native_sub_432810();
        }
        if (lVar1 == 0) {
                    /* WARNING: Subroutine does not return */
          native_sub_432810();
        }
        native_System_Collections_Generic_List_int_____Add_d40c00
                  (lVar1,*(undefined8 *)(*(long *)(lVar6 + 0x20) + 0x218),
                   _Method_System_Collections_Generic_List_string__Add___12dcea0);
      }
    } while( true );
  }
  goto LAB_00dc9294;
  while( true ) {
    uVar7 = uVar7 + 1;
    piVar8 = piVar8 + 4;
    if (*(ushort *)(lVar6 + 0x12a) <= uVar7) break;
LAB_00dc91dc:
    if (*(long *)(piVar8 + -2) == _System_IDisposable_TypeInfo_12d4b00) {
      puVar3 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
      goto LAB_00dc9214;
    }
  }
LAB_00dc91f8:
  puVar3 = (undefined8 *)native_sub_3c9b34(plVar2,_System_IDisposable_TypeInfo_12d4b00,0);
LAB_00dc9214:
  (*(code *)*puVar3)(plVar2,puVar3[1]);
LAB_00dc9220:
  if (**(long **)(_MG_BlocksEngine2_Environment_BE2_VariablesListManager_TypeInfo_12d3a88 + 0xb8) !=
      0) {
    native_MG_BlocksEngine2_Environment_BE2_VariablesListManager__AddOrUpdateList_dcc8cc
              (**(long **)(_MG_BlocksEngine2_Environment_BE2_VariablesListManager_TypeInfo_12d3a88 +
                          0xb8),*(undefined8 *)(param_1 + 0x18),lVar1);
    return;
  }
LAB_00dc9294:
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* MG_BlocksEngine2.UI.BE2_UI_VariableListViewer$$RefreshViewer @ 0xdc987c
 * void MG_BlocksEngine2_UI_BE2_UI_VariableListViewer__RefreshViewer (MG_BlocksEngine2_UI_BE2_UI_VariableListViewer_o* __this, const MethodInfo* method); */

/* WARNING: Removing unreachable block (ram,0x00dc929c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MG_BlocksEngine2.UI.BE2_UI_VariableListViewer$$RefreshViewer
   void MG_BlocksEngine2_UI_BE2_UI_VariableListViewer__RefreshViewer
   (MG_BlocksEngine2_UI_BE2_UI_VariableListViewer_o* __this, const MethodInfo* method); */

void native_MG_BlocksEngine2_UI_BE2_UI_VariableListViewer__RefreshViewer_dc987c(long param_1)

{
  long lVar1;
  long *plVar2;
  undefined8 *puVar3;
  long *plVar4;
  undefined8 uVar5;
  long lVar6;
  ulong uVar7;
  int *piVar8;
  
  uVar5 = native_MG_BlocksEngine2_UI_BE2_UI_VariableListViewer__GetVariableName_dcc474();
  *(undefined8 *)(param_1 + 0x18) = uVar5;
  native_sub_4326e0(param_1 + 0x18);
  uVar5 = native_MG_BlocksEngine2_UI_BE2_UI_VariableListViewer__C_UpdateViewerValues_dcc854(param_1)
  ;
  native_UnityEngine_MonoBehaviour__StartCoroutine_8e9174(param_1,uVar5,0);
  if ((bRam0000000001346dfa & 1) == 0) {
    native_sub_43273c(&MG_BlocksEngine2_Environment_BE2_VariablesListManager_TypeInfo_12d3a88);
    native_sub_43273c(&Method_UnityEngine_Component_GetComponent_BE2_UI_ListItem____12e2968);
    native_sub_43273c(&System_IDisposable_TypeInfo_12d4b00);
    native_sub_43273c(&System_Collections_IEnumerator_TypeInfo_12d4b80);
    native_sub_43273c(&Method_System_Collections_Generic_List_string__Add___12dcea0);
    native_sub_43273c(&Method_System_Collections_Generic_List_string___ctor___12dce88);
    native_sub_43273c(&System_Collections_Generic_List_string__TypeInfo_12d2b60);
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    native_sub_43273c(&UnityEngine_Transform_TypeInfo_12d6300);
    bRam0000000001346dfa = 1;
  }
  lVar1 = native_sub_432808(_System_Collections_Generic_List_string__TypeInfo_12d2b60);
  native_System_Collections_Generic_List_XmlEventCache_XmlEvent______ctor_d3ff44
            (lVar1,_Method_System_Collections_Generic_List_string___ctor___12dce88);
  if (*(long *)(param_1 + 0x28) != 0) {
    plVar2 = (long *)native_UnityEngine_Transform__GetEnumerator_772e40(*(long *)(param_1 + 0x28),0)
    ;
    if (plVar2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      native_sub_432810();
    }
    do {
      lVar6 = *plVar2;
      if ((ulong)*(ushort *)(lVar6 + 0x12a) != 0) {
        uVar7 = 0;
        piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        do {
          if (*(long *)(piVar8 + -2) == _System_Collections_IEnumerator_TypeInfo_12d4b80) {
            puVar3 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
            goto LAB_00dc9094;
          }
          uVar7 = uVar7 + 1;
          piVar8 = piVar8 + 4;
        } while (uVar7 < *(ushort *)(lVar6 + 0x12a));
      }
      puVar3 = (undefined8 *)
               native_sub_3c9b34(plVar2,_System_Collections_IEnumerator_TypeInfo_12d4b80,0);
LAB_00dc9094:
      uVar7 = (*(code *)*puVar3)(plVar2,puVar3[1]);
      if ((uVar7 & 1) == 0) {
        plVar2 = (long *)native_sub_4327f8(plVar2,_System_IDisposable_TypeInfo_12d4b00);
        if (plVar2 == (long *)0x0) goto LAB_00dc9220;
        lVar6 = *plVar2;
        if ((ulong)*(ushort *)(lVar6 + 0x12a) == 0) goto LAB_00dc91f8;
        uVar7 = 0;
        piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        goto LAB_00dc91dc;
      }
      lVar6 = *plVar2;
      if ((ulong)*(ushort *)(lVar6 + 0x12a) != 0) {
        uVar7 = 0;
        piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        do {
          if (*(long *)(piVar8 + -2) == _System_Collections_IEnumerator_TypeInfo_12d4b80) {
            puVar3 = (undefined8 *)(lVar6 + (long)(*piVar8 + 1) * 0x10 + 0x138);
            goto LAB_00dc90fc;
          }
          uVar7 = uVar7 + 1;
          piVar8 = piVar8 + 4;
        } while (uVar7 < *(ushort *)(lVar6 + 0x12a));
      }
      puVar3 = (undefined8 *)
               native_sub_3c9b34(plVar2,_System_Collections_IEnumerator_TypeInfo_12d4b80,1);
LAB_00dc90fc:
      plVar4 = (long *)(*(code *)*puVar3)(plVar2,puVar3[1]);
      if (plVar4 == (long *)0x0) {
LAB_00dc9284:
                    /* WARNING: Subroutine does not return */
        native_sub_432810();
      }
      if ((*(byte *)(*plVar4 + 300) < *(byte *)(_UnityEngine_Transform_TypeInfo_12d6300 + 300)) ||
         (*(long *)(*(long *)(*plVar4 + 200) +
                    (ulong)*(byte *)(_UnityEngine_Transform_TypeInfo_12d6300 + 300) * 8 + -8) !=
          _UnityEngine_Transform_TypeInfo_12d6300)) {
        native_sub_432b04();
        goto LAB_00dc9284;
      }
      lVar6 = native_UnityEngine_Component__GetComponent_ActiveAnimation__49daec
                        (plVar4,
                         _Method_UnityEngine_Component_GetComponent_BE2_UI_ListItem____12e2968);
      if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
        native_sub_4327ec();
      }
      uVar7 = native_UnityEngine_Object__op_Implicit_8e1b98(lVar6,0);
      if ((uVar7 & 1) != 0) {
        if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
          native_sub_432810();
        }
        if (*(long *)(lVar6 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
          native_sub_432810();
        }
        if (lVar1 == 0) {
                    /* WARNING: Subroutine does not return */
          native_sub_432810();
        }
        native_System_Collections_Generic_List_int_____Add_d40c00
                  (lVar1,*(undefined8 *)(*(long *)(lVar6 + 0x20) + 0x218),
                   _Method_System_Collections_Generic_List_string__Add___12dcea0);
      }
    } while( true );
  }
  goto LAB_00dc9294;
  while( true ) {
    uVar7 = uVar7 + 1;
    piVar8 = piVar8 + 4;
    if (*(ushort *)(lVar6 + 0x12a) <= uVar7) break;
LAB_00dc91dc:
    if (*(long *)(piVar8 + -2) == _System_IDisposable_TypeInfo_12d4b00) {
      puVar3 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
      goto LAB_00dc9214;
    }
  }
LAB_00dc91f8:
  puVar3 = (undefined8 *)native_sub_3c9b34(plVar2,_System_IDisposable_TypeInfo_12d4b00,0);
LAB_00dc9214:
  (*(code *)*puVar3)(plVar2,puVar3[1]);
LAB_00dc9220:
  if (**(long **)(_MG_BlocksEngine2_Environment_BE2_VariablesListManager_TypeInfo_12d3a88 + 0xb8) !=
      0) {
    native_MG_BlocksEngine2_Environment_BE2_VariablesListManager__AddOrUpdateList_dcc8cc
              (**(long **)(_MG_BlocksEngine2_Environment_BE2_VariablesListManager_TypeInfo_12d3a88 +
                          0xb8),*(undefined8 *)(param_1 + 0x18),lVar1);
    return;
  }
LAB_00dc9294:
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* MG_BlocksEngine2.UI.BE2_UI_VariableListViewer$$UpdateViewerValues @ 0xdcc708
 * void MG_BlocksEngine2_UI_BE2_UI_VariableListViewer__UpdateViewerValues (MG_BlocksEngine2_UI_BE2_UI_VariableListViewer_o* __this, const MethodInfo* method); */

/* MG_BlocksEngine2.UI.BE2_UI_VariableListViewer$$UpdateViewerValues
   void MG_BlocksEngine2_UI_BE2_UI_VariableListViewer__UpdateViewerValues
   (MG_BlocksEngine2_UI_BE2_UI_VariableListViewer_o* __this, const MethodInfo* method); */

void native_MG_BlocksEngine2_UI_BE2_UI_VariableListViewer__UpdateViewerValues_dcc708
               (undefined8 param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  
  lVar4 = native_MG_BlocksEngine2_UI_BE2_UI_VariableListViewer__C_UpdateViewerValues_dcc854();
  if (lVar4 == 0) {
    native_sub_432740(&System_NullReferenceException_TypeInfo_12d5498,0,0);
    uVar2 = native_sub_432808();
    uVar3 = native_sub_432740(&StringLiteral_routine_is_null_12f5ec0);
    native_System_NullReferenceException___ctor_ad2894(uVar2,uVar3,0);
  }
  else {
    if (pcRam0000000001340fe8 == (code *)0x0) {
      pcRam0000000001340fe8 = (code *)native_sub_4326f0(&UNK_00e2f589);
    }
    uVar1 = (*pcRam0000000001340fe8)(param_1);
    if ((uVar1 & 1) != 0) {
      if (pcRam0000000001340ff8 == (code *)0x0) {
        pcRam0000000001340ff8 = (code *)native_sub_4326f0(&UNK_00e2f61c);
      }
                    /* WARNING: Could not recover jumptable at 0x008e91f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*pcRam0000000001340ff8)(param_1,lVar4);
      return;
    }
    native_sub_432740(&System_ArgumentException_TypeInfo_12d3800);
    uVar2 = native_sub_432808();
    uVar3 = native_sub_432740(&
                              StringLiteral_Coroutines_can_only_be_stopped_on_a_MonoBehaviour_12ed328
                             );
    native_System_ArgumentException___ctor_953858(uVar2,uVar3,0);
  }
  uVar3 = native_sub_432740(&Method_UnityEngine_MonoBehaviour_StartCoroutine___12e55d8);
                    /* WARNING: Subroutine does not return */
  native_sub_4327dc(uVar2,uVar3);
}



/* MG_BlocksEngine2.UI.BE2_UI_VariableListViewer$$C_UpdateViewerValues @ 0xdcc854
 * System_Collections_IEnumerator_o* MG_BlocksEngine2_UI_BE2_UI_VariableListViewer__C_UpdateViewerValues (MG_BlocksEngine2_UI_BE2_UI_VariableListViewer_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MG_BlocksEngine2.UI.BE2_UI_VariableListViewer$$C_UpdateViewerValues
   System_Collections_IEnumerator_o*
   MG_BlocksEngine2_UI_BE2_UI_VariableListViewer__C_UpdateViewerValues
   (MG_BlocksEngine2_UI_BE2_UI_VariableListViewer_o* __this, const MethodInfo* method); */

long native_MG_BlocksEngine2_UI_BE2_UI_VariableListViewer__C_UpdateViewerValues_dcc854
               (undefined8 param_1)

{
  long lVar1;
  
  if ((bRam0000000001346df9 & 1) == 0) {
    native_sub_43273c(&
                      MG_BlocksEngine2_UI_BE2_UI_VariableListViewer__C_UpdateViewerValues_d__13_TypeInfo_12d7098
                     );
    bRam0000000001346df9 = 1;
  }
  lVar1 = native_sub_432808(
                           _MG_BlocksEngine2_UI_BE2_UI_VariableListViewer__C_UpdateViewerValues_d__13_TypeInfo_12d7098
                           );
  native_MG_BlocksEngine2_UI_BE2_UI_VariableListViewer__C_UpdateViewerValues_d__13___ctor_54921c
            (lVar1,0,0);
  if (lVar1 != 0) {
    *(undefined8 *)(lVar1 + 0x20) = param_1;
    native_sub_4326e0((undefined8 *)(lVar1 + 0x20),param_1);
    return lVar1;
  }
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* MG_BlocksEngine2.UI.BE2_UI_VariableListViewer$$UpdateListValues @ 0xdc8f38
 * void MG_BlocksEngine2_UI_BE2_UI_VariableListViewer__UpdateListValues (MG_BlocksEngine2_UI_BE2_UI_VariableListViewer_o* __this, const MethodInfo* method); */

/* WARNING: Removing unreachable block (ram,0x00dc929c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MG_BlocksEngine2.UI.BE2_UI_VariableListViewer$$UpdateListValues
   void MG_BlocksEngine2_UI_BE2_UI_VariableListViewer__UpdateListValues
   (MG_BlocksEngine2_UI_BE2_UI_VariableListViewer_o* __this, const MethodInfo* method); */

void native_MG_BlocksEngine2_UI_BE2_UI_VariableListViewer__UpdateListValues_dc8f38(long param_1)

{
  long lVar1;
  long *plVar2;
  undefined8 *puVar3;
  long *plVar4;
  long lVar5;
  ulong uVar6;
  int *piVar7;
  
  if ((bRam0000000001346dfa & 1) == 0) {
    native_sub_43273c(&MG_BlocksEngine2_Environment_BE2_VariablesListManager_TypeInfo_12d3a88);
    native_sub_43273c(&Method_UnityEngine_Component_GetComponent_BE2_UI_ListItem____12e2968);
    native_sub_43273c(&System_IDisposable_TypeInfo_12d4b00);
    native_sub_43273c(&System_Collections_IEnumerator_TypeInfo_12d4b80);
    native_sub_43273c(&Method_System_Collections_Generic_List_string__Add___12dcea0);
    native_sub_43273c(&Method_System_Collections_Generic_List_string___ctor___12dce88);
    native_sub_43273c(&System_Collections_Generic_List_string__TypeInfo_12d2b60);
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    native_sub_43273c(&UnityEngine_Transform_TypeInfo_12d6300);
    bRam0000000001346dfa = 1;
  }
  lVar1 = native_sub_432808(_System_Collections_Generic_List_string__TypeInfo_12d2b60);
  native_System_Collections_Generic_List_XmlEventCache_XmlEvent______ctor_d3ff44
            (lVar1,_Method_System_Collections_Generic_List_string___ctor___12dce88);
  if (*(long *)(param_1 + 0x28) != 0) {
    plVar2 = (long *)native_UnityEngine_Transform__GetEnumerator_772e40(*(long *)(param_1 + 0x28),0)
    ;
    if (plVar2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      native_sub_432810();
    }
    do {
      lVar5 = *plVar2;
      if ((ulong)*(ushort *)(lVar5 + 0x12a) != 0) {
        uVar6 = 0;
        piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(long *)(piVar7 + -2) == _System_Collections_IEnumerator_TypeInfo_12d4b80) {
            puVar3 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
            goto LAB_00dc9094;
          }
          uVar6 = uVar6 + 1;
          piVar7 = piVar7 + 4;
        } while (uVar6 < *(ushort *)(lVar5 + 0x12a));
      }
      puVar3 = (undefined8 *)
               native_sub_3c9b34(plVar2,_System_Collections_IEnumerator_TypeInfo_12d4b80,0);
LAB_00dc9094:
      uVar6 = (*(code *)*puVar3)(plVar2,puVar3[1]);
      if ((uVar6 & 1) == 0) {
        plVar2 = (long *)native_sub_4327f8(plVar2,_System_IDisposable_TypeInfo_12d4b00);
        if (plVar2 == (long *)0x0) goto LAB_00dc9220;
        lVar5 = *plVar2;
        if ((ulong)*(ushort *)(lVar5 + 0x12a) == 0) goto LAB_00dc91f8;
        uVar6 = 0;
        piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        goto LAB_00dc91dc;
      }
      lVar5 = *plVar2;
      if ((ulong)*(ushort *)(lVar5 + 0x12a) != 0) {
        uVar6 = 0;
        piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(long *)(piVar7 + -2) == _System_Collections_IEnumerator_TypeInfo_12d4b80) {
            puVar3 = (undefined8 *)(lVar5 + (long)(*piVar7 + 1) * 0x10 + 0x138);
            goto LAB_00dc90fc;
          }
          uVar6 = uVar6 + 1;
          piVar7 = piVar7 + 4;
        } while (uVar6 < *(ushort *)(lVar5 + 0x12a));
      }
      puVar3 = (undefined8 *)
               native_sub_3c9b34(plVar2,_System_Collections_IEnumerator_TypeInfo_12d4b80,1);
LAB_00dc90fc:
      plVar4 = (long *)(*(code *)*puVar3)(plVar2,puVar3[1]);
      if (plVar4 == (long *)0x0) {
LAB_00dc9284:
                    /* WARNING: Subroutine does not return */
        native_sub_432810();
      }
      if ((*(byte *)(*plVar4 + 300) < *(byte *)(_UnityEngine_Transform_TypeInfo_12d6300 + 300)) ||
         (*(long *)(*(long *)(*plVar4 + 200) +
                    (ulong)*(byte *)(_UnityEngine_Transform_TypeInfo_12d6300 + 300) * 8 + -8) !=
          _UnityEngine_Transform_TypeInfo_12d6300)) {
        native_sub_432b04();
        goto LAB_00dc9284;
      }
      lVar5 = native_UnityEngine_Component__GetComponent_ActiveAnimation__49daec
                        (plVar4,
                         _Method_UnityEngine_Component_GetComponent_BE2_UI_ListItem____12e2968);
      if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
        native_sub_4327ec();
      }
      uVar6 = native_UnityEngine_Object__op_Implicit_8e1b98(lVar5,0);
      if ((uVar6 & 1) != 0) {
        if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
          native_sub_432810();
        }
        if (*(long *)(lVar5 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
          native_sub_432810();
        }
        if (lVar1 == 0) {
                    /* WARNING: Subroutine does not return */
          native_sub_432810();
        }
        native_System_Collections_Generic_List_int_____Add_d40c00
                  (lVar1,*(undefined8 *)(*(long *)(lVar5 + 0x20) + 0x218),
                   _Method_System_Collections_Generic_List_string__Add___12dcea0);
      }
    } while( true );
  }
  goto LAB_00dc9294;
  while( true ) {
    uVar6 = uVar6 + 1;
    piVar7 = piVar7 + 4;
    if (*(ushort *)(lVar5 + 0x12a) <= uVar6) break;
LAB_00dc91dc:
    if (*(long *)(piVar7 + -2) == _System_IDisposable_TypeInfo_12d4b00) {
      puVar3 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
      goto LAB_00dc9214;
    }
  }
LAB_00dc91f8:
  puVar3 = (undefined8 *)native_sub_3c9b34(plVar2,_System_IDisposable_TypeInfo_12d4b00,0);
LAB_00dc9214:
  (*(code *)*puVar3)(plVar2,puVar3[1]);
LAB_00dc9220:
  if (**(long **)(_MG_BlocksEngine2_Environment_BE2_VariablesListManager_TypeInfo_12d3a88 + 0xb8) !=
      0) {
    native_MG_BlocksEngine2_Environment_BE2_VariablesListManager__AddOrUpdateList_dcc8cc
              (**(long **)(_MG_BlocksEngine2_Environment_BE2_VariablesListManager_TypeInfo_12d3a88 +
                          0xb8),*(undefined8 *)(param_1 + 0x18),lVar1);
    return;
  }
LAB_00dc9294:
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* MG_BlocksEngine2.UI.BE2_UI_VariableListViewer$$GetVariableName @ 0xdcc474
 * System_String_o* MG_BlocksEngine2_UI_BE2_UI_VariableListViewer__GetVariableName (MG_BlocksEngine2_UI_BE2_UI_VariableListViewer_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MG_BlocksEngine2.UI.BE2_UI_VariableListViewer$$GetVariableName
   System_String_o* MG_BlocksEngine2_UI_BE2_UI_VariableListViewer__GetVariableName
   (MG_BlocksEngine2_UI_BE2_UI_VariableListViewer_o* __this, const MethodInfo* method); */

undefined8
native_MG_BlocksEngine2_UI_BE2_UI_VariableListViewer__GetVariableName_dcc474(undefined8 param_1)

{
  ulong uVar1;
  long *plVar2;
  long lVar3;
  undefined8 uVar4;
  code *UNRECOVERED_JUMPTABLE;
  
  if ((bRam0000000001346dfb & 1) == 0) {
    native_sub_43273c(&
                      Method_UnityEngine_Component_GetComponentInChildren_BE2_UI_SelectionBlock____12e2c70
                     );
    bRam0000000001346dfb = 1;
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



/* MG_BlocksEngine2.UI.BE2_UI_VariableListViewer$$RemoveList @ 0xdcc9c4
 * void MG_BlocksEngine2_UI_BE2_UI_VariableListViewer__RemoveList (MG_BlocksEngine2_UI_BE2_UI_VariableListViewer_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MG_BlocksEngine2.UI.BE2_UI_VariableListViewer$$RemoveList
   void MG_BlocksEngine2_UI_BE2_UI_VariableListViewer__RemoveList
   (MG_BlocksEngine2_UI_BE2_UI_VariableListViewer_o* __this, const MethodInfo* method); */

void native_MG_BlocksEngine2_UI_BE2_UI_VariableListViewer__RemoveList_dcc9c4(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  if ((bRam0000000001346dfc & 1) == 0) {
    native_sub_43273c(&MG_BlocksEngine2_Environment_BE2_VariablesListManager_TypeInfo_12d3a88);
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    bRam0000000001346dfc = 1;
  }
  if (**(long **)(_MG_BlocksEngine2_Environment_BE2_VariablesListManager_TypeInfo_12d3a88 + 0xb8) !=
      0) {
    native_MG_BlocksEngine2_Environment_BE2_VariablesListManager__RemoveList_dcca94
              (**(long **)(_MG_BlocksEngine2_Environment_BE2_VariablesListManager_TypeInfo_12d3a88 +
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



/* MG_BlocksEngine2.UI.BE2_UI_VariableListViewer$$AddListItem @ 0xdccb64
 * void MG_BlocksEngine2_UI_BE2_UI_VariableListViewer__AddListItem (MG_BlocksEngine2_UI_BE2_UI_VariableListViewer_o* __this, System_String_o* value, bool select, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MG_BlocksEngine2.UI.BE2_UI_VariableListViewer$$AddListItem
   void MG_BlocksEngine2_UI_BE2_UI_VariableListViewer__AddListItem
   (MG_BlocksEngine2_UI_BE2_UI_VariableListViewer_o* __this, System_String_o* value, bool select,
   const MethodInfo* method); */

undefined1  [16]
native_MG_BlocksEngine2_UI_BE2_UI_VariableListViewer__AddListItem_dccb64
          (long param_1,undefined8 param_2,ulong param_3)

{
  int iVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  long *plVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined1 auVar8 [16];
  
  if ((bRam0000000001346dfd & 1) == 0) {
    native_sub_43273c(&Method_UnityEngine_Component_GetComponent_BE2_UI_ListItem____12e2968);
    native_sub_43273c(&Method_UnityEngine_Object_Instantiate_Transform____12e5a70);
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    bRam0000000001346dfd = 1;
  }
  uVar6 = *(undefined8 *)(param_1 + 0x48);
  uVar7 = *(undefined8 *)(param_1 + 0x28);
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  lVar4 = native_UnityEngine_Object__Instantiate_GameObject__4a6564
                    (uVar6,uVar7,_Method_UnityEngine_Object_Instantiate_Transform____12e5a70);
  native_UnityEngine_Vector3__get_one_776a20(0);
  if (lVar4 != 0) {
    native_UnityEngine_Transform__set_localScale_771e30(lVar4,0);
    if (*(long *)(param_1 + 0x28) != 0) {
      iVar1 = native_UnityEngine_Transform__get_childCount_772a64(*(long *)(param_1 + 0x28),0);
      native_UnityEngine_Transform__SetSiblingIndex_772b24(lVar4,iVar1 + -2,0);
      lVar4 = native_UnityEngine_Component__GetComponent_ActiveAnimation__49daec
                        (lVar4,_Method_UnityEngine_Component_GetComponent_BE2_UI_ListItem____12e2968
                        );
      if ((lVar4 != 0) && (*(long *)(lVar4 + 0x20) != 0)) {
        native_TMPro_TMP_InputField__set_text_88acec(*(long *)(lVar4 + 0x20),param_2,0);
        if ((param_3 & 1) != 0) {
          plVar5 = *(long **)(lVar4 + 0x20);
          if (plVar5 == (long *)0x0) goto LAB_00dccca0;
          (**(code **)(*plVar5 + 0x398))(plVar5,*(undefined8 *)(*plVar5 + 0x3a0));
        }
        lVar4 = native_MG_BlocksEngine2_UI_BE2_UI_BlocksSelectionViewer__get_Instance_dc60e0();
        if (lVar4 != 0) {
          if ((bRam0000000001346dc8 & 1) == 0) {
            native_sub_43273c(&UnityEngine_RectTransform_TypeInfo_12d58f0);
            bRam0000000001346dc8 = 1;
          }
          plVar5 = (long *)native_UnityEngine_Component__get_transform_8da62c(lVar4,0);
          if (plVar5 != (long *)0x0) {
            if (*plVar5 != _UnityEngine_RectTransform_TypeInfo_12d58f0) {
              auVar8._0_8_ = native_sub_432b04();
              if ((bRam0000000001340ae0 & 1) == 0) {
                native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0,0);
                bRam0000000001340ae0 = 1;
              }
              if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
                 (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
                native_sub_4327ec();
              }
              auVar8._8_8_ = 0;
              return auVar8;
            }
          }
          lVar4 = native_MG_BlocksEngine2_Core_BE2_ExecutionManager__get_Instance_564464(0,0);
          lVar2 = native_MG_BlocksEngine2_UI_BE2_UIUtils__C_RebuildLayout_61aa48(plVar5);
          if (lVar4 != 0) {
            if (lVar2 == 0) {
              native_sub_432740(&System_NullReferenceException_TypeInfo_12d5498,0,0);
              uVar7 = native_sub_432808();
              uVar6 = native_sub_432740(&StringLiteral_routine_is_null_12f5ec0);
              native_System_NullReferenceException___ctor_ad2894(uVar7,uVar6,0);
            }
            else {
              if (pcRam0000000001340fe8 == (code *)0x0) {
                pcRam0000000001340fe8 = (code *)native_sub_4326f0(&UNK_00e2f589);
              }
              uVar3 = (*pcRam0000000001340fe8)(lVar4);
              if ((uVar3 & 1) != 0) {
                if (pcRam0000000001340ff8 == (code *)0x0) {
                  pcRam0000000001340ff8 = (code *)native_sub_4326f0(&UNK_00e2f61c);
                }
                    /* WARNING: Could not recover jumptable at 0x008e91f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                auVar8 = (*pcRam0000000001340ff8)(lVar4,lVar2);
                return auVar8;
              }
              native_sub_432740(&System_ArgumentException_TypeInfo_12d3800);
              uVar7 = native_sub_432808();
              uVar6 = native_sub_432740(&
                                        StringLiteral_Coroutines_can_only_be_stopped_on_a_MonoBehaviour_12ed328
                                       );
              native_System_ArgumentException___ctor_953858(uVar7,uVar6,0);
            }
            uVar6 = native_sub_432740(&Method_UnityEngine_MonoBehaviour_StartCoroutine___12e55d8);
                    /* WARNING: Subroutine does not return */
            native_sub_4327dc(uVar7,uVar6);
          }
                    /* WARNING: Subroutine does not return */
          native_sub_432810();
        }
      }
    }
  }
LAB_00dccca0:
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* MG_BlocksEngine2.UI.BE2_UI_VariableListViewer$$.ctor @ 0xdccca4
 * void MG_BlocksEngine2_UI_BE2_UI_VariableListViewer___ctor (MG_BlocksEngine2_UI_BE2_UI_VariableListViewer_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MG_BlocksEngine2.UI.BE2_UI_VariableListViewer$$.ctor
   void MG_BlocksEngine2_UI_BE2_UI_VariableListViewer___ctor
   (MG_BlocksEngine2_UI_BE2_UI_VariableListViewer_o* __this, const MethodInfo* method); */

undefined1  [16] native_MG_BlocksEngine2_UI_BE2_UI_VariableListViewer___ctor_dccca4(ulong param_1)

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



/* MG_BlocksEngine2.UI.BE2_UI_VariableListViewer$$<OnEnable>b__8_0 @ 0xdcccac
 * void MG_BlocksEngine2_UI_BE2_UI_VariableListViewer___OnEnable_b__8_0 (MG_BlocksEngine2_UI_BE2_UI_VariableListViewer_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MG_BlocksEngine2.UI.BE2_UI_VariableListViewer$$<OnEnable>b__8_0
   void MG_BlocksEngine2_UI_BE2_UI_VariableListViewer___OnEnable_b__8_0
   (MG_BlocksEngine2_UI_BE2_UI_VariableListViewer_o* __this, const MethodInfo* method); */

undefined1  [16]
native_MG_BlocksEngine2_UI_BE2_UI_VariableListViewer___OnEnable_b__8_0_dcccac(long param_1)

{
  int iVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  long lVar5;
  long *plVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined1 auVar9 [16];
  
  if ((bRam0000000001346dfe & 1) == 0) {
    native_sub_43273c(&StringLiteral__12eaac0);
    bRam0000000001346dfe = 1;
  }
  uVar4 = _StringLiteral__12eaac0;
  if ((bRam0000000001346dfd & 1) == 0) {
    native_sub_43273c(&Method_UnityEngine_Component_GetComponent_BE2_UI_ListItem____12e2968);
    native_sub_43273c(&Method_UnityEngine_Object_Instantiate_Transform____12e5a70);
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    bRam0000000001346dfd = 1;
  }
  uVar7 = *(undefined8 *)(param_1 + 0x48);
  uVar8 = *(undefined8 *)(param_1 + 0x28);
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  lVar5 = native_UnityEngine_Object__Instantiate_GameObject__4a6564
                    (uVar7,uVar8,_Method_UnityEngine_Object_Instantiate_Transform____12e5a70);
  native_UnityEngine_Vector3__get_one_776a20(0);
  if (lVar5 != 0) {
    native_UnityEngine_Transform__set_localScale_771e30(lVar5,0);
    if (*(long *)(param_1 + 0x28) != 0) {
      iVar1 = native_UnityEngine_Transform__get_childCount_772a64(*(long *)(param_1 + 0x28),0);
      native_UnityEngine_Transform__SetSiblingIndex_772b24(lVar5,iVar1 + -2,0);
      lVar5 = native_UnityEngine_Component__GetComponent_ActiveAnimation__49daec
                        (lVar5,_Method_UnityEngine_Component_GetComponent_BE2_UI_ListItem____12e2968
                        );
      if ((lVar5 != 0) && (*(long *)(lVar5 + 0x20) != 0)) {
        native_TMPro_TMP_InputField__set_text_88acec(*(long *)(lVar5 + 0x20),uVar4,0);
        plVar6 = *(long **)(lVar5 + 0x20);
        if (plVar6 != (long *)0x0) {
          (**(code **)(*plVar6 + 0x398))(plVar6,*(undefined8 *)(*plVar6 + 0x3a0));
          lVar5 = native_MG_BlocksEngine2_UI_BE2_UI_BlocksSelectionViewer__get_Instance_dc60e0();
          if (lVar5 != 0) {
            if ((bRam0000000001346dc8 & 1) == 0) {
              native_sub_43273c(&UnityEngine_RectTransform_TypeInfo_12d58f0);
              bRam0000000001346dc8 = 1;
            }
            plVar6 = (long *)native_UnityEngine_Component__get_transform_8da62c(lVar5,0);
            if ((plVar6 != (long *)0x0) && (*plVar6 != _UnityEngine_RectTransform_TypeInfo_12d58f0))
            {
              auVar9._0_8_ = native_sub_432b04();
              if ((bRam0000000001340ae0 & 1) == 0) {
                native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0,0);
                bRam0000000001340ae0 = 1;
              }
              if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
                 (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
                native_sub_4327ec();
              }
              auVar9._8_8_ = 0;
              return auVar9;
            }
            lVar5 = native_MG_BlocksEngine2_Core_BE2_ExecutionManager__get_Instance_564464(0,0);
            lVar2 = native_MG_BlocksEngine2_UI_BE2_UIUtils__C_RebuildLayout_61aa48(plVar6);
            if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
              native_sub_432810();
            }
            if (lVar2 == 0) {
              native_sub_432740(&System_NullReferenceException_TypeInfo_12d5498,0,0);
              uVar7 = native_sub_432808();
              uVar4 = native_sub_432740(&StringLiteral_routine_is_null_12f5ec0);
              native_System_NullReferenceException___ctor_ad2894(uVar7,uVar4,0);
            }
            else {
              if (pcRam0000000001340fe8 == (code *)0x0) {
                pcRam0000000001340fe8 = (code *)native_sub_4326f0(&UNK_00e2f589);
              }
              uVar3 = (*pcRam0000000001340fe8)(lVar5);
              if ((uVar3 & 1) != 0) {
                if (pcRam0000000001340ff8 == (code *)0x0) {
                  pcRam0000000001340ff8 = (code *)native_sub_4326f0(&UNK_00e2f61c);
                }
                    /* WARNING: Could not recover jumptable at 0x008e91f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                auVar9 = (*pcRam0000000001340ff8)(lVar5,lVar2);
                return auVar9;
              }
              native_sub_432740(&System_ArgumentException_TypeInfo_12d3800);
              uVar7 = native_sub_432808();
              uVar4 = native_sub_432740(&
                                        StringLiteral_Coroutines_can_only_be_stopped_on_a_MonoBehaviour_12ed328
                                       );
              native_System_ArgumentException___ctor_953858(uVar7,uVar4,0);
            }
            uVar4 = native_sub_432740(&Method_UnityEngine_MonoBehaviour_StartCoroutine___12e55d8);
                    /* WARNING: Subroutine does not return */
            native_sub_4327dc(uVar7,uVar4);
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* MG_BlocksEngine2.UI.BE2_UI_VariableListViewer$$<OnEnable>b__8_1 @ 0xdcccfc
 * void MG_BlocksEngine2_UI_BE2_UI_VariableListViewer___OnEnable_b__8_1 (MG_BlocksEngine2_UI_BE2_UI_VariableListViewer_o* __this, bool _p0_, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MG_BlocksEngine2.UI.BE2_UI_VariableListViewer$$<OnEnable>b__8_1
   void MG_BlocksEngine2_UI_BE2_UI_VariableListViewer___OnEnable_b__8_1
   (MG_BlocksEngine2_UI_BE2_UI_VariableListViewer_o* __this, bool _p0_, const MethodInfo* method);
    */

undefined1  [16]
native_MG_BlocksEngine2_UI_BE2_UI_VariableListViewer___OnEnable_b__8_1_dcccfc(long param_1)

{
  long lVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long *plVar5;
  long lVar6;
  undefined1 auVar7 [16];
  
  if (*(long *)(param_1 + 0x28) != 0) {
    lVar6 = native_UnityEngine_Component__get_gameObject_8da66c(*(long *)(param_1 + 0x28),0);
    if ((*(long *)(param_1 + 0x38) != 0) && (lVar6 != 0)) {
      native_UnityEngine_GameObject__SetActive_8de698
                (lVar6,*(undefined1 *)(*(long *)(param_1 + 0x38) + 0x118),0);
      lVar6 = native_MG_BlocksEngine2_UI_BE2_UI_BlocksSelectionViewer__get_Instance_dc60e0();
      if (lVar6 != 0) {
        if ((bRam0000000001346dc8 & 1) == 0) {
          native_sub_43273c(&UnityEngine_RectTransform_TypeInfo_12d58f0);
          bRam0000000001346dc8 = 1;
        }
        plVar5 = (long *)native_UnityEngine_Component__get_transform_8da62c(lVar6,0);
        if (plVar5 != (long *)0x0) {
          if (*plVar5 != _UnityEngine_RectTransform_TypeInfo_12d58f0) {
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
        lVar6 = native_MG_BlocksEngine2_Core_BE2_ExecutionManager__get_Instance_564464(0,0);
        lVar1 = native_MG_BlocksEngine2_UI_BE2_UIUtils__C_RebuildLayout_61aa48(plVar5);
        if (lVar6 != 0) {
          if (lVar1 == 0) {
            native_sub_432740(&System_NullReferenceException_TypeInfo_12d5498,0,0);
            uVar3 = native_sub_432808();
            uVar4 = native_sub_432740(&StringLiteral_routine_is_null_12f5ec0);
            native_System_NullReferenceException___ctor_ad2894(uVar3,uVar4,0);
          }
          else {
            if (pcRam0000000001340fe8 == (code *)0x0) {
              pcRam0000000001340fe8 = (code *)native_sub_4326f0(&UNK_00e2f589);
            }
            uVar2 = (*pcRam0000000001340fe8)(lVar6);
            if ((uVar2 & 1) != 0) {
              if (pcRam0000000001340ff8 == (code *)0x0) {
                pcRam0000000001340ff8 = (code *)native_sub_4326f0(&UNK_00e2f61c);
              }
                    /* WARNING: Could not recover jumptable at 0x008e91f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
              auVar7 = (*pcRam0000000001340ff8)(lVar6,lVar1);
              return auVar7;
            }
            native_sub_432740(&System_ArgumentException_TypeInfo_12d3800);
            uVar3 = native_sub_432808();
            uVar4 = native_sub_432740(&
                                      StringLiteral_Coroutines_can_only_be_stopped_on_a_MonoBehaviour_12ed328
                                     );
            native_System_ArgumentException___ctor_953858(uVar3,uVar4,0);
          }
          uVar4 = native_sub_432740(&Method_UnityEngine_MonoBehaviour_StartCoroutine___12e55d8);
                    /* WARNING: Subroutine does not return */
          native_sub_4327dc(uVar3,uVar4);
        }
                    /* WARNING: Subroutine does not return */
        native_sub_432810();
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}


