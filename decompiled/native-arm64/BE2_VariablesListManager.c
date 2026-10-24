/* ARM64 IL2CPP native pseudocode from Ghidra.
 * Recovered implementation, not original C# source.
 * Function boundaries follow the IL2CPP method address table. */


/* MG_BlocksEngine2.Environment.BE2_VariablesListManager$$Awake @ 0xdcd708
 * void MG_BlocksEngine2_Environment_BE2_VariablesListManager__Awake (MG_BlocksEngine2_Environment_BE2_VariablesListManager_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MG_BlocksEngine2.Environment.BE2_VariablesListManager$$Awake
   void MG_BlocksEngine2_Environment_BE2_VariablesListManager__Awake
   (MG_BlocksEngine2_Environment_BE2_VariablesListManager_o* __this, const MethodInfo* method); */

void native_MG_BlocksEngine2_Environment_BE2_VariablesListManager__Awake_dcd708(undefined8 param_1)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  
  if ((bRam0000000001346e06 & 1) == 0) {
    native_sub_43273c(&MG_BlocksEngine2_Environment_BE2_VariablesListManager_TypeInfo_12d3a88);
    bRam0000000001346e06 = 1;
  }
  puVar4 = *(undefined8 **)
            (_MG_BlocksEngine2_Environment_BE2_VariablesListManager_TypeInfo_12d3a88 + 0xb8);
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



/* MG_BlocksEngine2.Environment.BE2_VariablesListManager$$ContainsList @ 0xdc9818
 * bool MG_BlocksEngine2_Environment_BE2_VariablesListManager__ContainsList (MG_BlocksEngine2_Environment_BE2_VariablesListManager_o* __this, System_String_o* listName, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MG_BlocksEngine2.Environment.BE2_VariablesListManager$$ContainsList
   bool MG_BlocksEngine2_Environment_BE2_VariablesListManager__ContainsList
   (MG_BlocksEngine2_Environment_BE2_VariablesListManager_o* __this, System_String_o* listName,
   const MethodInfo* method); */

uint native_MG_BlocksEngine2_Environment_BE2_VariablesListManager__ContainsList_dc9818
               (long param_1,undefined8 param_2)

{
  ulong uVar1;
  
  if ((bRam0000000001346e07 & 1) == 0) {
    native_sub_43273c(&
                      Method_System_Collections_Generic_Dictionary_string__List_string___ContainsKey___12d96e8
                     );
    bRam0000000001346e07 = 1;
  }
  if (*(long *)(param_1 + 0x20) != 0) {
    if (*(long *)(param_1 + 0x20) != 0) {
      uVar1 = (*(code *)**(undefined8 **)
                          (*(long *)(*(long *)(
                                              _Method_System_Collections_Generic_Dictionary_string__List_string___ContainsKey___12d96e8
                                              + 0x18) + 0xc0) + 0x40))();
      return (uint)(uVar1 >> 0x1f) & 1 ^ 1;
    }
                    /* WARNING: Subroutine does not return */
    native_sub_432810(0,param_2);
  }
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* MG_BlocksEngine2.Environment.BE2_VariablesListManager$$ListContainsValue @ 0xdcd75c
 * bool MG_BlocksEngine2_Environment_BE2_VariablesListManager__ListContainsValue (MG_BlocksEngine2_Environment_BE2_VariablesListManager_o* __this, System_String_o* listName, System_String_o* value, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MG_BlocksEngine2.Environment.BE2_VariablesListManager$$ListContainsValue
   bool MG_BlocksEngine2_Environment_BE2_VariablesListManager__ListContainsValue
   (MG_BlocksEngine2_Environment_BE2_VariablesListManager_o* __this, System_String_o* listName,
   System_String_o* value, const MethodInfo* method); */

undefined8
native_MG_BlocksEngine2_Environment_BE2_VariablesListManager__ListContainsValue_dcd75c
          (long param_1,undefined8 param_2,long param_3)

{
  long *plVar1;
  ulong uVar2;
  undefined8 uVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  
  if ((bRam0000000001346e08 & 1) == 0) {
    native_sub_43273c(&
                      Method_System_Collections_Generic_Dictionary_string__List_string___ContainsKey___12d96e8
                     );
    native_sub_43273c(&
                      Method_System_Collections_Generic_Dictionary_string__List_string___get_Item___12d9700
                     );
    native_sub_43273c(&Method_System_Collections_Generic_List_string__Contains___12dceb0);
    bRam0000000001346e08 = 1;
  }
  if (*(long *)(param_1 + 0x20) != 0) {
    uVar4 = native_System_Collections_Generic_Dictionary_Action__LinkedListNode_Action____ContainsKey_cda894
                      (*(long *)(param_1 + 0x20),param_2,
                       _Method_System_Collections_Generic_Dictionary_string__List_string___ContainsKey___12d96e8
                      );
    if ((uVar4 & 1) == 0) {
      return 0;
    }
    if ((*(long *)(param_1 + 0x20) != 0) &&
       (lVar5 = native_System_Collections_Generic_Dictionary_object__object___get_Item_cda55c
                          (*(long *)(param_1 + 0x20),param_2,
                           _Method_System_Collections_Generic_Dictionary_string__List_string___get_Item___12d9700
                          ), lVar5 != 0)) {
      if (param_3 == 0) {
        if (0 < *(int *)(lVar5 + 0x18)) {
          lVar6 = *(long *)(lVar5 + 0x10);
          if (lVar6 == 0) {
code_r0x00d40fb0:
                    /* WARNING: Subroutine does not return */
            native_sub_432810();
          }
          lVar7 = 0;
          do {
            if (*(uint *)(lVar6 + 0x18) <= (uint)lVar7) goto code_r0x00d40fb4;
            if (*(long *)(lVar6 + 0x20 + lVar7 * 8) == 0) {
              return 1;
            }
            lVar7 = lVar7 + 1;
          } while ((int)lVar7 < *(int *)(lVar5 + 0x18));
        }
      }
      else {
        plVar1 = (long *)(*(code *)**(undefined8 **)
                                     (*(long *)(*(long *)(
                                                  _Method_System_Collections_Generic_List_string__Contains___12dceb0
                                                  + 0x18) + 0xc0) + 0x78))();
        if (0 < *(int *)(lVar5 + 0x18)) {
          uVar4 = 0;
          do {
            lVar6 = *(long *)(lVar5 + 0x10);
            if (lVar6 == 0) goto code_r0x00d40fb0;
            if (*(uint *)(lVar6 + 0x18) <= uVar4) {
code_r0x00d40fb4:
              uVar3 = native_sub_43283c();
                    /* WARNING: Subroutine does not return */
              native_sub_4327dc(uVar3,0);
            }
            if (plVar1 == (long *)0x0) goto code_r0x00d40fb0;
            uVar2 = (**(code **)(*plVar1 + 0x1b8))
                              (plVar1,*(undefined8 *)(lVar6 + uVar4 * 8 + 0x20),param_3,
                               *(undefined8 *)(*plVar1 + 0x1c0));
            if ((uVar2 & 1) != 0) {
              return 1;
            }
            uVar4 = uVar4 + 1;
          } while ((long)uVar4 < (long)*(int *)(lVar5 + 0x18));
        }
      }
      return 0;
    }
  }
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* MG_BlocksEngine2.Environment.BE2_VariablesListManager$$AddOrUpdateList @ 0xdcc8cc
 * void MG_BlocksEngine2_Environment_BE2_VariablesListManager__AddOrUpdateList (MG_BlocksEngine2_Environment_BE2_VariablesListManager_o* __this, System_String_o* listName, System_Collections_Generic_List_string__o* value, const MethodInfo* method); */

/* WARNING: Removing unreachable block (ram,0x005797fc) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MG_BlocksEngine2.Environment.BE2_VariablesListManager$$AddOrUpdateList
   void MG_BlocksEngine2_Environment_BE2_VariablesListManager__AddOrUpdateList
   (MG_BlocksEngine2_Environment_BE2_VariablesListManager_o* __this, System_String_o* listName,
   System_Collections_Generic_List_string__o* value, const MethodInfo* method); */

void native_MG_BlocksEngine2_Environment_BE2_VariablesListManager__AddOrUpdateList_dcc8cc
               (long param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  long lVar2;
  
  if ((bRam0000000001346e09 & 1) == 0) {
    native_sub_43273c(&
                      Method_System_Collections_Generic_Dictionary_string__List_string___Add___12d96e0
                     );
    native_sub_43273c(&
                      Method_System_Collections_Generic_Dictionary_string__List_string___ContainsKey___12d96e8
                     );
    native_sub_43273c(&
                      Method_System_Collections_Generic_Dictionary_string__List_string___set_Item___12d9708
                     );
    bRam0000000001346e09 = 1;
  }
  if (*(long *)(param_1 + 0x20) != 0) {
    uVar1 = native_System_Collections_Generic_Dictionary_Action__LinkedListNode_Action____ContainsKey_cda894
                      (*(long *)(param_1 + 0x20),param_2,
                       _Method_System_Collections_Generic_Dictionary_string__List_string___ContainsKey___12d96e8
                      );
    lVar2 = *(long *)(param_1 + 0x20);
    if (lVar2 != 0) {
      if ((uVar1 & 1) == 0) {
        native_System_Collections_Generic_Dictionary_Canvas__IndexedSet_Graphic____Add_cda620
                  (lVar2,param_2,param_3,
                   _Method_System_Collections_Generic_Dictionary_string__List_string___Add___12d96e0
                  );
        lVar2 = native_MG_BlocksEngine2_Core_BE2_MainEventsManager__get_Instance_6001fc(0);
        if (lVar2 == 0) goto LAB_00dcc9c0;
        native_MG_BlocksEngine2_Core_BE2_EventsManager__TriggerEvent_579794(lVar2,5,0);
      }
      else {
        native_System_Collections_Generic_Dictionary_Action__LinkedListNode_Action____set_Item_cda5f8
                  (lVar2,param_2,param_3,
                   _Method_System_Collections_Generic_Dictionary_string__List_string___set_Item___12d9708
                  );
      }
      lVar2 = native_MG_BlocksEngine2_Core_BE2_MainEventsManager__get_Instance_6001fc(0);
      if (lVar2 != 0) {
        if ((bRam000000000133eaf8 & 1) == 0) {
          native_sub_43273c(&
                            Method_System_Collections_Generic_Dictionary_BE2EventTypes__UnityEvent__TryGetValue___12d8ea8
                            ,4,0);
          bRam000000000133eaf8 = 1;
        }
        if ((*(long *)(lVar2 + 0x10) != 0) &&
           (uVar1 = native_System_Collections_Generic_Dictionary_BE2EventTypes__UnityEvent___TryGetValue_c25318
                              (*(long *)(lVar2 + 0x10),4,&stack0xffffffffffffffd8,
                               _Method_System_Collections_Generic_Dictionary_BE2EventTypes__UnityEvent__TryGetValue___12d8ea8
                              ), (uVar1 & 1) == 0)) {
          return;
        }
                    /* WARNING: Subroutine does not return */
        native_sub_432810();
      }
    }
  }
LAB_00dcc9c0:
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* MG_BlocksEngine2.Environment.BE2_VariablesListManager$$AddValueInList @ 0xdcd828
 * void MG_BlocksEngine2_Environment_BE2_VariablesListManager__AddValueInList (MG_BlocksEngine2_Environment_BE2_VariablesListManager_o* __this, System_String_o* listName, System_String_o* value, const MethodInfo* method); */

/* WARNING: Removing unreachable block (ram,0x005797fc) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MG_BlocksEngine2.Environment.BE2_VariablesListManager$$AddValueInList
   void MG_BlocksEngine2_Environment_BE2_VariablesListManager__AddValueInList
   (MG_BlocksEngine2_Environment_BE2_VariablesListManager_o* __this, System_String_o* listName,
   System_String_o* value, const MethodInfo* method); */

void native_MG_BlocksEngine2_Environment_BE2_VariablesListManager__AddValueInList_dcd828
               (long param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  
  if ((bRam0000000001346e0a & 1) == 0) {
    native_sub_43273c(&
                      Method_System_Collections_Generic_Dictionary_string__List_string___Add___12d96e0
                     );
    native_sub_43273c(&
                      Method_System_Collections_Generic_Dictionary_string__List_string___ContainsKey___12d96e8
                     );
    native_sub_43273c(&
                      Method_System_Collections_Generic_Dictionary_string__List_string___get_Item___12d9700
                     );
    native_sub_43273c(&Method_System_Collections_Generic_List_string__Add___12dcea0);
    native_sub_43273c(&Method_System_Collections_Generic_List_string___ctor___12dce88);
    native_sub_43273c(&System_Collections_Generic_List_string__TypeInfo_12d2b60);
    bRam0000000001346e0a = 1;
  }
  if (*(long *)(param_1 + 0x20) == 0) goto LAB_00dcd998;
  uVar1 = native_System_Collections_Generic_Dictionary_Action__LinkedListNode_Action____ContainsKey_cda894
                    (*(long *)(param_1 + 0x20),param_2,
                     _Method_System_Collections_Generic_Dictionary_string__List_string___ContainsKey___12d96e8
                    );
  lVar3 = *(long *)(param_1 + 0x20);
  if ((uVar1 & 1) == 0) {
    lVar2 = native_sub_432808(_System_Collections_Generic_List_string__TypeInfo_12d2b60);
    native_System_Collections_Generic_List_XmlEventCache_XmlEvent______ctor_d3ff44
              (lVar2,_Method_System_Collections_Generic_List_string___ctor___12dce88);
    if ((lVar2 == 0) ||
       (native_System_Collections_Generic_List_int_____Add_d40c00
                  (lVar2,param_3,_Method_System_Collections_Generic_List_string__Add___12dcea0),
       lVar3 == 0)) goto LAB_00dcd998;
    native_System_Collections_Generic_Dictionary_Canvas__IndexedSet_Graphic____Add_cda620
              (lVar3,param_2,lVar2,
               _Method_System_Collections_Generic_Dictionary_string__List_string___Add___12d96e0);
    lVar3 = native_MG_BlocksEngine2_Core_BE2_MainEventsManager__get_Instance_6001fc(0);
    if (lVar3 == 0) goto LAB_00dcd998;
    native_MG_BlocksEngine2_Core_BE2_EventsManager__TriggerEvent_579794(lVar3,5,0);
  }
  else {
    if ((lVar3 == 0) ||
       (lVar3 = native_System_Collections_Generic_Dictionary_object__object___get_Item_cda55c
                          (lVar3,param_2,
                           _Method_System_Collections_Generic_Dictionary_string__List_string___get_Item___12d9700
                          ), lVar3 == 0)) goto LAB_00dcd998;
    native_System_Collections_Generic_List_int_____Add_d40c00
              (lVar3,param_3,_Method_System_Collections_Generic_List_string__Add___12dcea0);
  }
  lVar3 = native_MG_BlocksEngine2_Core_BE2_MainEventsManager__get_Instance_6001fc(0);
  if (lVar3 != 0) {
    if ((bRam000000000133eaf8 & 1) == 0) {
      native_sub_43273c(&
                        Method_System_Collections_Generic_Dictionary_BE2EventTypes__UnityEvent__TryGetValue___12d8ea8
                        ,4,0);
      bRam000000000133eaf8 = 1;
    }
    if ((*(long *)(lVar3 + 0x10) != 0) &&
       (uVar1 = native_System_Collections_Generic_Dictionary_BE2EventTypes__UnityEvent___TryGetValue_c25318
                          (*(long *)(lVar3 + 0x10),4,&stack0xffffffffffffffd8,
                           _Method_System_Collections_Generic_Dictionary_BE2EventTypes__UnityEvent__TryGetValue___12d8ea8
                          ), (uVar1 & 1) == 0)) {
      return;
    }
                    /* WARNING: Subroutine does not return */
    native_sub_432810();
  }
LAB_00dcd998:
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* MG_BlocksEngine2.Environment.BE2_VariablesListManager$$InsertValueInList @ 0xdcd99c
 * void MG_BlocksEngine2_Environment_BE2_VariablesListManager__InsertValueInList (MG_BlocksEngine2_Environment_BE2_VariablesListManager_o* __this, System_String_o* listName, System_String_o* value, int32_t index, const MethodInfo* method); */

/* WARNING: Removing unreachable block (ram,0x005797fc) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MG_BlocksEngine2.Environment.BE2_VariablesListManager$$InsertValueInList
   void MG_BlocksEngine2_Environment_BE2_VariablesListManager__InsertValueInList
   (MG_BlocksEngine2_Environment_BE2_VariablesListManager_o* __this, System_String_o* listName,
   System_String_o* value, int32_t index, const MethodInfo* method); */

void native_MG_BlocksEngine2_Environment_BE2_VariablesListManager__InsertValueInList_dcd99c
               (long param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  ulong uVar1;
  long lVar2;
  
  if ((bRam0000000001346e0b & 1) == 0) {
    native_sub_43273c(&
                      Method_System_Collections_Generic_Dictionary_string__List_string___ContainsKey___12d96e8
                     );
    native_sub_43273c(&
                      Method_System_Collections_Generic_Dictionary_string__List_string___get_Item___12d9700
                     );
    native_sub_43273c(&Method_System_Collections_Generic_List_string__Insert___12dced0);
    native_sub_43273c(&Method_System_Collections_Generic_List_string__get_Count___12dcef8);
    bRam0000000001346e0b = 1;
  }
  if (*(long *)(param_1 + 0x20) != 0) {
    uVar1 = native_System_Collections_Generic_Dictionary_Action__LinkedListNode_Action____ContainsKey_cda894
                      (*(long *)(param_1 + 0x20),param_2,
                       _Method_System_Collections_Generic_Dictionary_string__List_string___ContainsKey___12d96e8
                      );
    if ((param_4 < 0) || ((uVar1 & 1) == 0)) {
      return;
    }
    if ((*(long *)(param_1 + 0x20) != 0) &&
       (lVar2 = native_System_Collections_Generic_Dictionary_object__object___get_Item_cda55c
                          (*(long *)(param_1 + 0x20),param_2,
                           _Method_System_Collections_Generic_Dictionary_string__List_string___get_Item___12d9700
                          ), lVar2 != 0)) {
      if (*(int *)(lVar2 + 0x18) < param_4) {
        return;
      }
      if ((*(long *)(param_1 + 0x20) != 0) &&
         (lVar2 = native_System_Collections_Generic_Dictionary_object__object___get_Item_cda55c
                            (*(long *)(param_1 + 0x20),param_2,
                             _Method_System_Collections_Generic_Dictionary_string__List_string___get_Item___12d9700
                            ), lVar2 != 0)) {
        native_System_Collections_Generic_List_EventSystem___Insert_d417a4
                  (lVar2,param_4,param_3,
                   _Method_System_Collections_Generic_List_string__Insert___12dced0);
        lVar2 = native_MG_BlocksEngine2_Core_BE2_MainEventsManager__get_Instance_6001fc(0);
        if (lVar2 != 0) {
          if ((bRam000000000133eaf8 & 1) == 0) {
            native_sub_43273c(&
                              Method_System_Collections_Generic_Dictionary_BE2EventTypes__UnityEvent__TryGetValue___12d8ea8
                              ,4,0);
            bRam000000000133eaf8 = 1;
          }
          if ((*(long *)(lVar2 + 0x10) != 0) &&
             (uVar1 = native_System_Collections_Generic_Dictionary_BE2EventTypes__UnityEvent___TryGetValue_c25318
                                (*(long *)(lVar2 + 0x10),4,&stack0xffffffffffffffd8,
                                 _Method_System_Collections_Generic_Dictionary_BE2EventTypes__UnityEvent__TryGetValue___12d8ea8
                                ), (uVar1 & 1) == 0)) {
            return;
          }
                    /* WARNING: Subroutine does not return */
          native_sub_432810();
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* MG_BlocksEngine2.Environment.BE2_VariablesListManager$$ReplaceValueInList @ 0xdcdac4
 * void MG_BlocksEngine2_Environment_BE2_VariablesListManager__ReplaceValueInList (MG_BlocksEngine2_Environment_BE2_VariablesListManager_o* __this, System_String_o* listName, System_String_o* value, int32_t index, const MethodInfo* method); */

/* WARNING: Removing unreachable block (ram,0x005797fc) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MG_BlocksEngine2.Environment.BE2_VariablesListManager$$ReplaceValueInList
   void MG_BlocksEngine2_Environment_BE2_VariablesListManager__ReplaceValueInList
   (MG_BlocksEngine2_Environment_BE2_VariablesListManager_o* __this, System_String_o* listName,
   System_String_o* value, int32_t index, const MethodInfo* method); */

void native_MG_BlocksEngine2_Environment_BE2_VariablesListManager__ReplaceValueInList_dcdac4
               (long param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  ulong uVar1;
  long lVar2;
  
  if ((bRam0000000001346e0c & 1) == 0) {
    native_sub_43273c(&
                      Method_System_Collections_Generic_Dictionary_string__List_string___ContainsKey___12d96e8
                     );
    native_sub_43273c(&
                      Method_System_Collections_Generic_Dictionary_string__List_string___get_Item___12d9700
                     );
    native_sub_43273c(&Method_System_Collections_Generic_List_string__get_Count___12dcef8);
    native_sub_43273c(&Method_System_Collections_Generic_List_string__set_Item___12dcf08);
    bRam0000000001346e0c = 1;
  }
  if (*(long *)(param_1 + 0x20) != 0) {
    uVar1 = native_System_Collections_Generic_Dictionary_Action__LinkedListNode_Action____ContainsKey_cda894
                      (*(long *)(param_1 + 0x20),param_2,
                       _Method_System_Collections_Generic_Dictionary_string__List_string___ContainsKey___12d96e8
                      );
    if ((param_4 < 0) || ((uVar1 & 1) == 0)) {
      return;
    }
    if ((*(long *)(param_1 + 0x20) != 0) &&
       (lVar2 = native_System_Collections_Generic_Dictionary_object__object___get_Item_cda55c
                          (*(long *)(param_1 + 0x20),param_2,
                           _Method_System_Collections_Generic_Dictionary_string__List_string___get_Item___12d9700
                          ), lVar2 != 0)) {
      if (*(int *)(lVar2 + 0x18) <= param_4) {
        return;
      }
      if ((*(long *)(param_1 + 0x20) != 0) &&
         (lVar2 = native_System_Collections_Generic_Dictionary_object__object___get_Item_cda55c
                            (*(long *)(param_1 + 0x20),param_2,
                             _Method_System_Collections_Generic_Dictionary_string__List_string___get_Item___12d9700
                            ), lVar2 != 0)) {
        native_System_Collections_Generic_List_object___set_Item_d40958
                  (lVar2,param_4,param_3,
                   _Method_System_Collections_Generic_List_string__set_Item___12dcf08);
        lVar2 = native_MG_BlocksEngine2_Core_BE2_MainEventsManager__get_Instance_6001fc(0);
        if (lVar2 != 0) {
          if ((bRam000000000133eaf8 & 1) == 0) {
            native_sub_43273c(&
                              Method_System_Collections_Generic_Dictionary_BE2EventTypes__UnityEvent__TryGetValue___12d8ea8
                              ,4,0);
            bRam000000000133eaf8 = 1;
          }
          if ((*(long *)(lVar2 + 0x10) != 0) &&
             (uVar1 = native_System_Collections_Generic_Dictionary_BE2EventTypes__UnityEvent___TryGetValue_c25318
                                (*(long *)(lVar2 + 0x10),4,&stack0xffffffffffffffd8,
                                 _Method_System_Collections_Generic_Dictionary_BE2EventTypes__UnityEvent__TryGetValue___12d8ea8
                                ), (uVar1 & 1) == 0)) {
            return;
          }
                    /* WARNING: Subroutine does not return */
          native_sub_432810();
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* MG_BlocksEngine2.Environment.BE2_VariablesListManager$$RemoveList @ 0xdcca94
 * void MG_BlocksEngine2_Environment_BE2_VariablesListManager__RemoveList (MG_BlocksEngine2_Environment_BE2_VariablesListManager_o* __this, System_String_o* listName, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MG_BlocksEngine2.Environment.BE2_VariablesListManager$$RemoveList
   void MG_BlocksEngine2_Environment_BE2_VariablesListManager__RemoveList
   (MG_BlocksEngine2_Environment_BE2_VariablesListManager_o* __this, System_String_o* listName,
   const MethodInfo* method); */

void native_MG_BlocksEngine2_Environment_BE2_VariablesListManager__RemoveList_dcca94
               (long param_1,undefined8 param_2)

{
  ulong uVar1;
  long lVar2;
  long lStack_28;
  
  if ((bRam0000000001346e0d & 1) == 0) {
    native_sub_43273c(&
                      Method_System_Collections_Generic_Dictionary_string__List_string___ContainsKey___12d96e8
                     );
    native_sub_43273c(&
                      Method_System_Collections_Generic_Dictionary_string__List_string___Remove___12d96f8
                     );
    bRam0000000001346e0d = 1;
  }
  if (*(long *)(param_1 + 0x20) != 0) {
    uVar1 = native_System_Collections_Generic_Dictionary_Action__LinkedListNode_Action____ContainsKey_cda894
                      (*(long *)(param_1 + 0x20),param_2,
                       _Method_System_Collections_Generic_Dictionary_string__List_string___ContainsKey___12d96e8
                      );
    if ((uVar1 & 1) == 0) {
      return;
    }
    if (*(long *)(param_1 + 0x20) != 0) {
      native_System_Collections_Generic_Dictionary_Action__LinkedListNode_Action____Remove_cdc08c
                (*(long *)(param_1 + 0x20),param_2,
                 _Method_System_Collections_Generic_Dictionary_string__List_string___Remove___12d96f8
                );
      lVar2 = native_MG_BlocksEngine2_Core_BE2_MainEventsManager__get_Instance_6001fc(0);
      if (lVar2 != 0) {
        native_MG_BlocksEngine2_Core_BE2_EventsManager__TriggerEvent_579794(lVar2,5,0);
        lVar2 = native_MG_BlocksEngine2_Core_BE2_MainEventsManager__get_Instance_6001fc(0);
        if (lVar2 != 0) {
          if ((bRam000000000133eaf8 & 1) == 0) {
            native_sub_43273c(&
                              Method_System_Collections_Generic_Dictionary_BE2EventTypes__UnityEvent__TryGetValue___12d8ea8
                              ,4,0);
            bRam000000000133eaf8 = 1;
          }
          lStack_28 = 0;
          if (*(long *)(lVar2 + 0x10) != 0) {
            uVar1 = native_System_Collections_Generic_Dictionary_BE2EventTypes__UnityEvent___TryGetValue_c25318
                              (*(long *)(lVar2 + 0x10),4,&lStack_28,
                               _Method_System_Collections_Generic_Dictionary_BE2EventTypes__UnityEvent__TryGetValue___12d8ea8
                              );
            if ((uVar1 & 1) != 0) {
              if (lStack_28 == 0) goto LAB_00579814;
              native_UnityEngine_Events_UnityEvent__Invoke_773864(lStack_28,0);
            }
            return;
          }
LAB_00579814:
                    /* WARNING: Subroutine does not return */
          native_sub_432810();
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* MG_BlocksEngine2.Environment.BE2_VariablesListManager$$ClearList @ 0xdcdbec
 * void MG_BlocksEngine2_Environment_BE2_VariablesListManager__ClearList (MG_BlocksEngine2_Environment_BE2_VariablesListManager_o* __this, System_String_o* listName, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MG_BlocksEngine2.Environment.BE2_VariablesListManager$$ClearList
   void MG_BlocksEngine2_Environment_BE2_VariablesListManager__ClearList
   (MG_BlocksEngine2_Environment_BE2_VariablesListManager_o* __this, System_String_o* listName,
   const MethodInfo* method); */

void native_MG_BlocksEngine2_Environment_BE2_VariablesListManager__ClearList_dcdbec
               (long param_1,undefined8 param_2)

{
  ulong uVar1;
  long lVar2;
  long lStack_28;
  
  if ((bRam0000000001346e0e & 1) == 0) {
    native_sub_43273c(&
                      Method_System_Collections_Generic_Dictionary_string__List_string___ContainsKey___12d96e8
                     );
    native_sub_43273c(&
                      Method_System_Collections_Generic_Dictionary_string__List_string___get_Item___12d9700
                     );
    native_sub_43273c(&Method_System_Collections_Generic_List_string__Clear___12dcea8);
    bRam0000000001346e0e = 1;
  }
  if (*(long *)(param_1 + 0x20) != 0) {
    uVar1 = native_System_Collections_Generic_Dictionary_Action__LinkedListNode_Action____ContainsKey_cda894
                      (*(long *)(param_1 + 0x20),param_2,
                       _Method_System_Collections_Generic_Dictionary_string__List_string___ContainsKey___12d96e8
                      );
    if ((uVar1 & 1) == 0) {
      return;
    }
    if ((*(long *)(param_1 + 0x20) != 0) &&
       (lVar2 = native_System_Collections_Generic_Dictionary_object__object___get_Item_cda55c
                          (*(long *)(param_1 + 0x20),param_2,
                           _Method_System_Collections_Generic_Dictionary_string__List_string___get_Item___12d9700
                          ), lVar2 != 0)) {
      native_System_Collections_Generic_List_Action___Clear_d40e80
                (lVar2,_Method_System_Collections_Generic_List_string__Clear___12dcea8);
      lVar2 = native_MG_BlocksEngine2_Core_BE2_MainEventsManager__get_Instance_6001fc(0);
      if (lVar2 != 0) {
        native_MG_BlocksEngine2_Core_BE2_EventsManager__TriggerEvent_579794(lVar2,5,0);
        lVar2 = native_MG_BlocksEngine2_Core_BE2_MainEventsManager__get_Instance_6001fc(0);
        if (lVar2 != 0) {
          if ((bRam000000000133eaf8 & 1) == 0) {
            native_sub_43273c(&
                              Method_System_Collections_Generic_Dictionary_BE2EventTypes__UnityEvent__TryGetValue___12d8ea8
                              ,4,0);
            bRam000000000133eaf8 = 1;
          }
          lStack_28 = 0;
          if (*(long *)(lVar2 + 0x10) != 0) {
            uVar1 = native_System_Collections_Generic_Dictionary_BE2EventTypes__UnityEvent___TryGetValue_c25318
                              (*(long *)(lVar2 + 0x10),4,&lStack_28,
                               _Method_System_Collections_Generic_Dictionary_BE2EventTypes__UnityEvent__TryGetValue___12d8ea8
                              );
            if ((uVar1 & 1) != 0) {
              if (lStack_28 == 0) goto LAB_00579814;
              native_UnityEngine_Events_UnityEvent__Invoke_773864(lStack_28,0);
            }
            return;
          }
LAB_00579814:
                    /* WARNING: Subroutine does not return */
          native_sub_432810();
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* MG_BlocksEngine2.Environment.BE2_VariablesListManager$$RemoveListItem @ 0xdc8dec
 * void MG_BlocksEngine2_Environment_BE2_VariablesListManager__RemoveListItem (MG_BlocksEngine2_Environment_BE2_VariablesListManager_o* __this, System_String_o* listName, int32_t index, const MethodInfo* method); */

/* WARNING: Removing unreachable block (ram,0x005797fc) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MG_BlocksEngine2.Environment.BE2_VariablesListManager$$RemoveListItem
   void MG_BlocksEngine2_Environment_BE2_VariablesListManager__RemoveListItem
   (MG_BlocksEngine2_Environment_BE2_VariablesListManager_o* __this, System_String_o* listName,
   int32_t index, const MethodInfo* method); */

void native_MG_BlocksEngine2_Environment_BE2_VariablesListManager__RemoveListItem_dc8dec
               (long param_1,undefined8 param_2,int param_3)

{
  ulong uVar1;
  long lVar2;
  
  if ((bRam0000000001346e0f & 1) == 0) {
    native_sub_43273c(&
                      Method_System_Collections_Generic_Dictionary_string__List_string___ContainsKey___12d96e8
                     );
    native_sub_43273c(&
                      Method_System_Collections_Generic_Dictionary_string__List_string___get_Item___12d9700
                     );
    native_sub_43273c(&Method_System_Collections_Generic_List_string__RemoveAt___12dcee0);
    native_sub_43273c(&Method_System_Collections_Generic_List_string__get_Count___12dcef8);
    bRam0000000001346e0f = 1;
  }
  if (*(long *)(param_1 + 0x20) != 0) {
    uVar1 = native_System_Collections_Generic_Dictionary_Action__LinkedListNode_Action____ContainsKey_cda894
                      (*(long *)(param_1 + 0x20),param_2,
                       _Method_System_Collections_Generic_Dictionary_string__List_string___ContainsKey___12d96e8
                      );
    if ((param_3 < 0) || ((uVar1 & 1) == 0)) {
      return;
    }
    if ((*(long *)(param_1 + 0x20) != 0) &&
       (lVar2 = native_System_Collections_Generic_Dictionary_object__object___get_Item_cda55c
                          (*(long *)(param_1 + 0x20),param_2,
                           _Method_System_Collections_Generic_Dictionary_string__List_string___get_Item___12d9700
                          ), lVar2 != 0)) {
      if (*(int *)(lVar2 + 0x18) <= param_3) {
        return;
      }
      if ((*(long *)(param_1 + 0x20) != 0) &&
         (lVar2 = native_System_Collections_Generic_Dictionary_object__object___get_Item_cda55c
                            (*(long *)(param_1 + 0x20),param_2,
                             _Method_System_Collections_Generic_Dictionary_string__List_string___get_Item___12d9700
                            ), lVar2 != 0)) {
        native_System_Collections_Generic_List_int_____RemoveAt_d42280
                  (lVar2,param_3,_Method_System_Collections_Generic_List_string__RemoveAt___12dcee0)
        ;
        lVar2 = native_MG_BlocksEngine2_Core_BE2_MainEventsManager__get_Instance_6001fc(0);
        if (lVar2 != 0) {
          native_MG_BlocksEngine2_Core_BE2_EventsManager__TriggerEvent_579794(lVar2,5,0);
          lVar2 = native_MG_BlocksEngine2_Core_BE2_MainEventsManager__get_Instance_6001fc(0);
          if (lVar2 != 0) {
            if ((bRam000000000133eaf8 & 1) == 0) {
              native_sub_43273c(&
                                Method_System_Collections_Generic_Dictionary_BE2EventTypes__UnityEvent__TryGetValue___12d8ea8
                                ,4,0);
              bRam000000000133eaf8 = 1;
            }
            if ((*(long *)(lVar2 + 0x10) != 0) &&
               (uVar1 = native_System_Collections_Generic_Dictionary_BE2EventTypes__UnityEvent___TryGetValue_c25318
                                  (*(long *)(lVar2 + 0x10),4,&stack0xffffffffffffffd8,
                                   _Method_System_Collections_Generic_Dictionary_BE2EventTypes__UnityEvent__TryGetValue___12d8ea8
                                  ), (uVar1 & 1) == 0)) {
              return;
            }
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



/* MG_BlocksEngine2.Environment.BE2_VariablesListManager$$RemoveListItem @ 0xdcdcdc
 * void MG_BlocksEngine2_Environment_BE2_VariablesListManager__RemoveListItem (MG_BlocksEngine2_Environment_BE2_VariablesListManager_o* __this, System_String_o* listName, System_String_o* value, const MethodInfo* method); */

/* WARNING: Removing unreachable block (ram,0x005797fc) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MG_BlocksEngine2.Environment.BE2_VariablesListManager$$RemoveListItem
   void MG_BlocksEngine2_Environment_BE2_VariablesListManager__RemoveListItem
   (MG_BlocksEngine2_Environment_BE2_VariablesListManager_o* __this, System_String_o* listName,
   System_String_o* value, const MethodInfo* method); */

void native_MG_BlocksEngine2_Environment_BE2_VariablesListManager__RemoveListItem_dcdcdc
               (long param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  long lVar2;
  
  if ((bRam0000000001346e10 & 1) == 0) {
    native_sub_43273c(&
                      Method_System_Collections_Generic_Dictionary_string__List_string___ContainsKey___12d96e8
                     );
    native_sub_43273c(&
                      Method_System_Collections_Generic_Dictionary_string__List_string___get_Item___12d9700
                     );
    native_sub_43273c(&Method_System_Collections_Generic_List_string__Contains___12dceb0);
    native_sub_43273c(&Method_System_Collections_Generic_List_string__Remove___12dced8);
    bRam0000000001346e10 = 1;
  }
  if (*(long *)(param_1 + 0x20) != 0) {
    uVar1 = native_System_Collections_Generic_Dictionary_Action__LinkedListNode_Action____ContainsKey_cda894
                      (*(long *)(param_1 + 0x20),param_2,
                       _Method_System_Collections_Generic_Dictionary_string__List_string___ContainsKey___12d96e8
                      );
    if ((uVar1 & 1) == 0) {
      return;
    }
    if ((*(long *)(param_1 + 0x20) != 0) &&
       (lVar2 = native_System_Collections_Generic_Dictionary_object__object___get_Item_cda55c
                          (*(long *)(param_1 + 0x20),param_2,
                           _Method_System_Collections_Generic_Dictionary_string__List_string___get_Item___12d9700
                          ), lVar2 != 0)) {
      uVar1 = native_System_Collections_Generic_List_BE2_UI_SelectionPanel___Contains_d40ec8
                        (lVar2,param_3,
                         _Method_System_Collections_Generic_List_string__Contains___12dceb0);
      if ((uVar1 & 1) == 0) {
        return;
      }
      if ((*(long *)(param_1 + 0x20) != 0) &&
         (lVar2 = native_System_Collections_Generic_Dictionary_object__object___get_Item_cda55c
                            (*(long *)(param_1 + 0x20),param_2,
                             _Method_System_Collections_Generic_Dictionary_string__List_string___get_Item___12d9700
                            ), lVar2 != 0)) {
        native_System_Collections_Generic_List_BMSymbol___Remove_d41f3c
                  (lVar2,param_3,_Method_System_Collections_Generic_List_string__Remove___12dced8);
        lVar2 = native_MG_BlocksEngine2_Core_BE2_MainEventsManager__get_Instance_6001fc(0);
        if (lVar2 != 0) {
          native_MG_BlocksEngine2_Core_BE2_EventsManager__TriggerEvent_579794(lVar2,5,0);
          lVar2 = native_MG_BlocksEngine2_Core_BE2_MainEventsManager__get_Instance_6001fc(0);
          if (lVar2 != 0) {
            if ((bRam000000000133eaf8 & 1) == 0) {
              native_sub_43273c(&
                                Method_System_Collections_Generic_Dictionary_BE2EventTypes__UnityEvent__TryGetValue___12d8ea8
                                ,4,0);
              bRam000000000133eaf8 = 1;
            }
            if ((*(long *)(lVar2 + 0x10) != 0) &&
               (uVar1 = native_System_Collections_Generic_Dictionary_BE2EventTypes__UnityEvent___TryGetValue_c25318
                                  (*(long *)(lVar2 + 0x10),4,&stack0xffffffffffffffd8,
                                   _Method_System_Collections_Generic_Dictionary_BE2EventTypes__UnityEvent__TryGetValue___12d8ea8
                                  ), (uVar1 & 1) == 0)) {
              return;
            }
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



/* MG_BlocksEngine2.Environment.BE2_VariablesListManager$$GetValueIndexAtList @ 0xdcde10
 * int32_t MG_BlocksEngine2_Environment_BE2_VariablesListManager__GetValueIndexAtList (MG_BlocksEngine2_Environment_BE2_VariablesListManager_o* __this, System_String_o* listName, System_String_o* value, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MG_BlocksEngine2.Environment.BE2_VariablesListManager$$GetValueIndexAtList
   int32_t MG_BlocksEngine2_Environment_BE2_VariablesListManager__GetValueIndexAtList
   (MG_BlocksEngine2_Environment_BE2_VariablesListManager_o* __this, System_String_o* listName,
   System_String_o* value, const MethodInfo* method); */

undefined8
native_MG_BlocksEngine2_Environment_BE2_VariablesListManager__GetValueIndexAtList_dcde10
          (long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  ulong uVar2;
  long lVar3;
  
  if ((bRam0000000001346e11 & 1) == 0) {
    native_sub_43273c(&
                      Method_System_Collections_Generic_Dictionary_string__List_string___ContainsKey___12d96e8
                     );
    native_sub_43273c(&
                      Method_System_Collections_Generic_Dictionary_string__List_string___get_Item___12d9700
                     );
    native_sub_43273c(&Method_System_Collections_Generic_List_string__Contains___12dceb0);
    native_sub_43273c(&Method_System_Collections_Generic_List_string__IndexOf___12dcec8);
    bRam0000000001346e11 = 1;
  }
  if (*(long *)(param_1 + 0x20) != 0) {
    uVar2 = native_System_Collections_Generic_Dictionary_Action__LinkedListNode_Action____ContainsKey_cda894
                      (*(long *)(param_1 + 0x20),param_2,
                       _Method_System_Collections_Generic_Dictionary_string__List_string___ContainsKey___12d96e8
                      );
    if ((uVar2 & 1) == 0) {
      return 0xffffffff;
    }
    if ((*(long *)(param_1 + 0x20) != 0) &&
       (lVar3 = native_System_Collections_Generic_Dictionary_object__object___get_Item_cda55c
                          (*(long *)(param_1 + 0x20),param_2,
                           _Method_System_Collections_Generic_Dictionary_string__List_string___get_Item___12d9700
                          ), lVar3 != 0)) {
      uVar2 = native_System_Collections_Generic_List_BE2_UI_SelectionPanel___Contains_d40ec8
                        (lVar3,param_3,
                         _Method_System_Collections_Generic_List_string__Contains___12dceb0);
      if ((uVar2 & 1) == 0) {
        return 0xffffffff;
      }
      if ((*(long *)(param_1 + 0x20) != 0) &&
         (lVar3 = native_System_Collections_Generic_Dictionary_object__object___get_Item_cda55c
                            (*(long *)(param_1 + 0x20),param_2,
                             _Method_System_Collections_Generic_Dictionary_string__List_string___get_Item___12d9700
                            ), lVar3 != 0)) {
                    /* WARNING: Could not recover jumptable at 0x00d41660. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar1 = (*(code *)**(undefined8 **)
                            (*(long *)(*(long *)(
                                                _Method_System_Collections_Generic_List_string__IndexOf___12dcec8
                                                + 0x18) + 0xc0) + 0xd0))
                          (*(undefined8 *)(lVar3 + 0x10),param_3,0,*(undefined4 *)(lVar3 + 0x18));
        return uVar1;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* MG_BlocksEngine2.Environment.BE2_VariablesListManager$$GetListStringValues @ 0xdcdf18
 * System_Collections_Generic_List_string__o* MG_BlocksEngine2_Environment_BE2_VariablesListManager__GetListStringValues (MG_BlocksEngine2_Environment_BE2_VariablesListManager_o* __this, System_String_o* listName, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MG_BlocksEngine2.Environment.BE2_VariablesListManager$$GetListStringValues
   System_Collections_Generic_List_string__o*
   MG_BlocksEngine2_Environment_BE2_VariablesListManager__GetListStringValues
   (MG_BlocksEngine2_Environment_BE2_VariablesListManager_o* __this, System_String_o* listName,
   const MethodInfo* method); */

long native_MG_BlocksEngine2_Environment_BE2_VariablesListManager__GetListStringValues_dcdf18
               (long param_1,undefined8 param_2)

{
  uint uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  ulong uVar4;
  long lVar5;
  
  if ((bRam0000000001346e12 & 1) == 0) {
    native_sub_43273c(&
                      Method_System_Collections_Generic_Dictionary_string__List_string___ContainsKey___12d96e8
                     );
    native_sub_43273c(&
                      Method_System_Collections_Generic_Dictionary_string__List_string___get_Item___12d9700
                     );
    native_sub_43273c(&Method_System_Collections_Generic_List_string__Add___12dcea0);
    native_sub_43273c(&Method_System_Collections_Generic_List_string___ctor___12dce88);
    native_sub_43273c(&System_Collections_Generic_List_string__TypeInfo_12d2b60);
    native_sub_43273c(&StringLiteral__12eaac0);
    bRam0000000001346e12 = 1;
  }
  if (*(long *)(param_1 + 0x20) != 0) {
    uVar4 = native_System_Collections_Generic_Dictionary_Action__LinkedListNode_Action____ContainsKey_cda894
                      (*(long *)(param_1 + 0x20),param_2,
                       _Method_System_Collections_Generic_Dictionary_string__List_string___ContainsKey___12d96e8
                      );
    if ((uVar4 & 1) == 0) {
      lVar5 = native_sub_432808(_System_Collections_Generic_List_string__TypeInfo_12d2b60);
      native_System_Collections_Generic_List_XmlEventCache_XmlEvent______ctor_d3ff44
                (lVar5,_Method_System_Collections_Generic_List_string___ctor___12dce88);
      if (lVar5 != 0) {
        native_System_Collections_Generic_List_int_____Add_d40c00
                  (lVar5,_StringLiteral__12eaac0,
                   _Method_System_Collections_Generic_List_string__Add___12dcea0);
        return lVar5;
      }
    }
    else {
      lVar5 = *(long *)(param_1 + 0x20);
      if (lVar5 != 0) {
        if (lVar5 != 0) {
          uVar1 = (*(code *)**(undefined8 **)
                              (*(long *)(*(long *)(
                                                  _Method_System_Collections_Generic_Dictionary_string__List_string___get_Item___12d9700
                                                  + 0x18) + 0xc0) + 0x40))(lVar5,param_2);
          if ((int)uVar1 < 0) {
            native_sub_432740(&System_Collections_Generic_KeyNotFoundException_TypeInfo_12d4fc8);
            uVar3 = native_sub_432808();
            native_System_Collections_Generic_KeyNotFoundException___ctor_845840(uVar3,0);
            uVar2 = native_sub_432740(&
                                      Method_System_Collections_Generic_Dictionary_object__object__get_Item___12d9568
                                     );
                    /* WARNING: Subroutine does not return */
            native_sub_4327dc(uVar3,uVar2);
          }
          lVar5 = *(long *)(lVar5 + 0x18);
          if (lVar5 != 0) {
            if (uVar1 < *(uint *)(lVar5 + 0x18)) {
              return *(long *)(lVar5 + (long)(int)uVar1 * 0x18 + 0x30);
            }
            uVar3 = native_sub_43283c();
                    /* WARNING: Subroutine does not return */
            native_sub_4327dc(uVar3,0);
          }
        }
                    /* WARNING: Subroutine does not return */
        native_sub_432810();
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* MG_BlocksEngine2.Environment.BE2_VariablesListManager$$GetListStringValue @ 0xdce034
 * System_String_o* MG_BlocksEngine2_Environment_BE2_VariablesListManager__GetListStringValue (MG_BlocksEngine2_Environment_BE2_VariablesListManager_o* __this, System_String_o* listName, int32_t index, const MethodInfo* method); */

/* MG_BlocksEngine2.Environment.BE2_VariablesListManager$$GetListStringValue
   System_String_o* MG_BlocksEngine2_Environment_BE2_VariablesListManager__GetListStringValue
   (MG_BlocksEngine2_Environment_BE2_VariablesListManager_o* __this, System_String_o* listName,
   int32_t index, const MethodInfo* method); */

undefined8
native_MG_BlocksEngine2_Environment_BE2_VariablesListManager__GetListStringValue_dce034
          (undefined8 param_1,undefined8 param_2,uint param_3)

{
  long lVar1;
  undefined8 *puVar2;
  
  if ((bRam0000000001346e13 & 1) == 0) {
    native_sub_43273c(&Method_System_Collections_Generic_List_string__get_Count___12dcef8);
    native_sub_43273c(&Method_System_Collections_Generic_List_string__get_Item___12dcf00);
    native_sub_43273c(&StringLiteral__12eaac0);
    bRam0000000001346e13 = 1;
  }
  lVar1 = native_MG_BlocksEngine2_Environment_BE2_VariablesListManager__GetListStringValues_dcdf18
                    (param_1,param_2);
  if (lVar1 != 0) {
    puVar2 = (undefined8 *)&StringLiteral__12eaac0;
    if ((-1 < (int)param_3) && ((int)param_3 < (int)*(uint *)(lVar1 + 0x18))) {
      if (*(uint *)(lVar1 + 0x18) <= param_3) {
        native_System_ThrowHelper__ThrowArgumentOutOfRangeException_9fe0f4(0);
      }
      puVar2 = (undefined8 *)(*(long *)(lVar1 + 0x10) + (long)(int)param_3 * 8 + 0x20);
    }
    return *puVar2;
  }
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* MG_BlocksEngine2.Environment.BE2_VariablesListManager$$GetListFloatValues @ 0xdce0e4
 * System_Collections_Generic_List_float__o* MG_BlocksEngine2_Environment_BE2_VariablesListManager__GetListFloatValues (MG_BlocksEngine2_Environment_BE2_VariablesListManager_o* __this, System_String_o* listName, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MG_BlocksEngine2.Environment.BE2_VariablesListManager$$GetListFloatValues
   System_Collections_Generic_List_float__o*
   MG_BlocksEngine2_Environment_BE2_VariablesListManager__GetListFloatValues
   (MG_BlocksEngine2_Environment_BE2_VariablesListManager_o* __this, System_String_o* listName,
   const MethodInfo* method); */

long native_MG_BlocksEngine2_Environment_BE2_VariablesListManager__GetListFloatValues_dce0e4
               (long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined4 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  
  if ((bRam0000000001346e14 & 1) == 0) {
    native_sub_43273c(&System_Globalization_CultureInfo_TypeInfo_12d4068);
    native_sub_43273c(&
                      Method_System_Collections_Generic_Dictionary_string__List_string___ContainsKey___12d96e8
                     );
    native_sub_43273c(&
                      Method_System_Collections_Generic_Dictionary_string__List_string___get_Item___12d9700
                     );
    native_sub_43273c(&Method_System_Collections_Generic_List_Enumerator_string__Dispose___12da630);
    native_sub_43273c(&Method_System_Collections_Generic_List_Enumerator_string__MoveNext___12da638)
    ;
    native_sub_43273c(&
                      Method_System_Collections_Generic_List_Enumerator_string__get_Current___12da640
                     );
    native_sub_43273c(&Method_System_Collections_Generic_List_float__Add___12dce08);
    native_sub_43273c(&Method_System_Collections_Generic_List_string__GetEnumerator___12dcec0);
    native_sub_43273c(&Method_System_Collections_Generic_List_float___ctor___12dce00);
    native_sub_43273c(&System_Collections_Generic_List_float__TypeInfo_12d2b40);
    bRam0000000001346e14 = 1;
  }
  uStack_70 = 0;
  uStack_68 = 0;
  uStack_60 = 0;
  uStack_78 = 0;
  if (*(long *)(param_1 + 0x20) != 0) {
    uVar2 = native_System_Collections_Generic_Dictionary_Action__LinkedListNode_Action____ContainsKey_cda894
                      (*(long *)(param_1 + 0x20),param_2,
                       _Method_System_Collections_Generic_Dictionary_string__List_string___ContainsKey___12d96e8
                      );
    lVar3 = native_sub_432808(_System_Collections_Generic_List_float__TypeInfo_12d2b40);
    native_System_Collections_Generic_List_float____ctor_d4d760
              (lVar3,_Method_System_Collections_Generic_List_float___ctor___12dce00);
    if ((uVar2 & 1) == 0) {
      if (lVar3 == 0) goto LAB_00dce3ac;
      native_System_Collections_Generic_List_float___Add_d4e4b0
                (0,lVar3,_Method_System_Collections_Generic_List_float__Add___12dce08);
    }
    else {
      if ((*(long *)(param_1 + 0x20) == 0) ||
         (lVar4 = native_System_Collections_Generic_Dictionary_object__object___get_Item_cda55c
                            (*(long *)(param_1 + 0x20),param_2,
                             _Method_System_Collections_Generic_Dictionary_string__List_string___get_Item___12d9700
                            ), lVar4 == 0)) goto LAB_00dce3ac;
      native_System_Collections_Generic_List_BE2_Op_FunctionLocalVariable___GetEnumerator_d414fc
                (&uStack_98,lVar4,
                 _Method_System_Collections_Generic_List_string__GetEnumerator___12dcec0);
      uStack_60 = uStack_88;
      uStack_68 = uStack_90;
      uStack_70 = uStack_98;
      while (uVar2 = native_System_Collections_Generic_List_Enumerator_BE2_Op_FunctionLocalVariable___MoveNext_7e8f30
                               (&uStack_70,
                                _Method_System_Collections_Generic_List_Enumerator_string__MoveNext___12da638
                               ), uVar1 = uStack_60, (uVar2 & 1) != 0) {
        if (((*(byte *)(_System_Globalization_CultureInfo_TypeInfo_12d4068 + 0x133) >> 2 & 1) != 0)
           && (*(int *)(_System_Globalization_CultureInfo_TypeInfo_12d4068 + 0xe0) == 0)) {
          native_sub_4327ec();
        }
        uVar5 = native_System_Globalization_CultureInfo__get_InvariantCulture_b2d3e8(0);
        native_System_Single__Parse_af8a18(uVar1,uVar5,0);
        if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
          native_sub_432810();
        }
        native_System_Collections_Generic_List_float___Add_d4e4b0
                  (lVar3,_Method_System_Collections_Generic_List_float__Add___12dce08);
      }
      native_System_Collections_Generic_List_Enumerator_BE2_Op_FunctionLocalVariable___Dispose_7e8f2c
                (&uStack_70,
                 _Method_System_Collections_Generic_List_Enumerator_string__Dispose___12da630);
    }
    return lVar3;
  }
LAB_00dce3ac:
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* MG_BlocksEngine2.Environment.BE2_VariablesListManager$$GetListFloatValue @ 0xdce44c
 * float MG_BlocksEngine2_Environment_BE2_VariablesListManager__GetListFloatValue (MG_BlocksEngine2_Environment_BE2_VariablesListManager_o* __this, System_String_o* listName, int32_t index, const MethodInfo* method); */

/* MG_BlocksEngine2.Environment.BE2_VariablesListManager$$GetListFloatValue
   float MG_BlocksEngine2_Environment_BE2_VariablesListManager__GetListFloatValue
   (MG_BlocksEngine2_Environment_BE2_VariablesListManager_o* __this, System_String_o* listName,
   int32_t index, const MethodInfo* method); */

undefined4
native_MG_BlocksEngine2_Environment_BE2_VariablesListManager__GetListFloatValue_dce44c
          (undefined8 param_1,undefined8 param_2,uint param_3)

{
  long lVar1;
  undefined4 uVar2;
  
  if ((bRam0000000001346e15 & 1) == 0) {
    native_sub_43273c(&Method_System_Collections_Generic_List_float__get_Count___12dce18);
    native_sub_43273c(&Method_System_Collections_Generic_List_float__get_Item___12dce20);
    bRam0000000001346e15 = 1;
  }
  lVar1 = native_MG_BlocksEngine2_Environment_BE2_VariablesListManager__GetListFloatValues_dce0e4
                    (param_1,param_2);
  if (lVar1 != 0) {
    uVar2 = 0;
    if ((int)param_3 < (int)*(uint *)(lVar1 + 0x18)) {
      if (*(uint *)(lVar1 + 0x18) <= param_3) {
        native_System_ThrowHelper__ThrowArgumentOutOfRangeException_9fe0f4(0,0);
      }
      uVar2 = *(undefined4 *)(*(long *)(lVar1 + 0x10) + (long)(int)param_3 * 4 + 0x20);
    }
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* MG_BlocksEngine2.Environment.BE2_VariablesListManager$$GetListValues @ 0xdce4e4
 * System_Collections_Generic_List_BE2_InputValues__o* MG_BlocksEngine2_Environment_BE2_VariablesListManager__GetListValues (MG_BlocksEngine2_Environment_BE2_VariablesListManager_o* __this, System_String_o* listName, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MG_BlocksEngine2.Environment.BE2_VariablesListManager$$GetListValues
   System_Collections_Generic_List_BE2_InputValues__o*
   MG_BlocksEngine2_Environment_BE2_VariablesListManager__GetListValues
   (MG_BlocksEngine2_Environment_BE2_VariablesListManager_o* __this, System_String_o* listName,
   const MethodInfo* method); */

long native_MG_BlocksEngine2_Environment_BE2_VariablesListManager__GetListValues_dce4e4
               (long param_1,undefined8 param_2)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined4 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  
  if ((bRam0000000001346e16 & 1) == 0) {
    native_sub_43273c(&MG_BlocksEngine2_Block_BE2_InputValues_TypeInfo_12d39f0);
    native_sub_43273c(&System_Globalization_CultureInfo_TypeInfo_12d4068);
    native_sub_43273c(&
                      Method_System_Collections_Generic_Dictionary_string__List_string___ContainsKey___12d96e8
                     );
    native_sub_43273c(&
                      Method_System_Collections_Generic_Dictionary_string__List_string___get_Item___12d9700
                     );
    native_sub_43273c(&Method_System_Collections_Generic_List_Enumerator_string__Dispose___12da630);
    native_sub_43273c(&Method_System_Collections_Generic_List_Enumerator_string__MoveNext___12da638)
    ;
    native_sub_43273c(&
                      Method_System_Collections_Generic_List_Enumerator_string__get_Current___12da640
                     );
    native_sub_43273c(&Method_System_Collections_Generic_List_BE2_InputValues__Add___12dc458);
    native_sub_43273c(&Method_System_Collections_Generic_List_string__GetEnumerator___12dcec0);
    native_sub_43273c(&Method_System_Collections_Generic_List_BE2_InputValues___ctor___12dc450);
    native_sub_43273c(&System_Collections_Generic_List_BE2_InputValues__TypeInfo_12d2978);
    native_sub_43273c(&StringLiteral__12eaac0);
    bRam0000000001346e16 = 1;
  }
  uStack_88 = 0;
  uStack_90 = 0;
  uStack_80 = 0;
  uStack_98 = 0;
  lVar1 = native_sub_432808(_System_Collections_Generic_List_BE2_InputValues__TypeInfo_12d2978);
  native_System_Collections_Generic_List_XmlEventCache_XmlEvent______ctor_d3ff44
            (lVar1,_Method_System_Collections_Generic_List_BE2_InputValues___ctor___12dc450);
  if (*(long *)(param_1 + 0x20) != 0) {
    uVar2 = native_System_Collections_Generic_Dictionary_Action__LinkedListNode_Action____ContainsKey_cda894
                      (*(long *)(param_1 + 0x20),param_2,
                       _Method_System_Collections_Generic_Dictionary_string__List_string___ContainsKey___12d96e8
                      );
    if ((uVar2 & 1) == 0) {
      lVar1 = native_sub_432808(_System_Collections_Generic_List_BE2_InputValues__TypeInfo_12d2978);
      native_System_Collections_Generic_List_XmlEventCache_XmlEvent______ctor_d3ff44
                (lVar1,_Method_System_Collections_Generic_List_BE2_InputValues___ctor___12dc450);
      uVar5 = native_sub_432808(_MG_BlocksEngine2_Block_BE2_InputValues_TypeInfo_12d39f0);
      native_MG_BlocksEngine2_Block_BE2_InputValues___ctor_6033d4
                (0,uVar5,_StringLiteral__12eaac0,0,0);
      if (lVar1 == 0) goto LAB_00dce808;
      native_System_Collections_Generic_List_int_____Add_d40c00
                (lVar1,uVar5,_Method_System_Collections_Generic_List_BE2_InputValues__Add___12dc458)
      ;
    }
    else {
      if ((*(long *)(param_1 + 0x20) == 0) ||
         (lVar3 = native_System_Collections_Generic_Dictionary_object__object___get_Item_cda55c
                            (*(long *)(param_1 + 0x20),param_2,
                             _Method_System_Collections_Generic_Dictionary_string__List_string___get_Item___12d9700
                            ), lVar3 == 0)) goto LAB_00dce808;
      native_System_Collections_Generic_List_BE2_Op_FunctionLocalVariable___GetEnumerator_d414fc
                (&uStack_b8,lVar3,
                 _Method_System_Collections_Generic_List_string__GetEnumerator___12dcec0);
      uStack_80 = uStack_a8;
      uStack_88 = uStack_b0;
      uStack_90 = uStack_b8;
      while (uVar2 = native_System_Collections_Generic_List_Enumerator_BE2_Op_FunctionLocalVariable___MoveNext_7e8f30
                               (&uStack_90,
                                _Method_System_Collections_Generic_List_Enumerator_string__MoveNext___12da638
                               ), uVar5 = uStack_80, (uVar2 & 1) != 0) {
        if (((*(byte *)(_System_Globalization_CultureInfo_TypeInfo_12d4068 + 0x133) >> 2 & 1) != 0)
           && (*(int *)(_System_Globalization_CultureInfo_TypeInfo_12d4068 + 0xe0) == 0)) {
          native_sub_4327ec();
        }
        uVar4 = native_System_Globalization_CultureInfo__get_InvariantCulture_b2d3e8(0);
        uVar6 = native_System_Single__Parse_af8a18(uVar5,uVar4,0);
        uVar4 = native_sub_432808(_MG_BlocksEngine2_Block_BE2_InputValues_TypeInfo_12d39f0);
        native_MG_BlocksEngine2_Block_BE2_InputValues___ctor_6033d4(uVar6,uVar4,uVar5,0,0);
        if (lVar1 == 0) {
                    /* WARNING: Subroutine does not return */
          native_sub_432810();
        }
        native_System_Collections_Generic_List_int_____Add_d40c00
                  (lVar1,uVar4,
                   _Method_System_Collections_Generic_List_BE2_InputValues__Add___12dc458);
      }
      native_System_Collections_Generic_List_Enumerator_BE2_Op_FunctionLocalVariable___Dispose_7e8f2c
                (&uStack_90,
                 _Method_System_Collections_Generic_List_Enumerator_string__Dispose___12da630);
    }
    return lVar1;
  }
LAB_00dce808:
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* MG_BlocksEngine2.Environment.BE2_VariablesListManager$$GetListValue @ 0xdce898
 * MG_BlocksEngine2_Block_BE2_InputValues_o* MG_BlocksEngine2_Environment_BE2_VariablesListManager__GetListValue (MG_BlocksEngine2_Environment_BE2_VariablesListManager_o* __this, System_String_o* listName, int32_t index, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MG_BlocksEngine2.Environment.BE2_VariablesListManager$$GetListValue
   MG_BlocksEngine2_Block_BE2_InputValues_o*
   MG_BlocksEngine2_Environment_BE2_VariablesListManager__GetListValue
   (MG_BlocksEngine2_Environment_BE2_VariablesListManager_o* __this, System_String_o* listName,
   int32_t index, const MethodInfo* method); */

undefined8
native_MG_BlocksEngine2_Environment_BE2_VariablesListManager__GetListValue_dce898
          (undefined8 param_1,undefined8 param_2,uint param_3)

{
  long lVar1;
  undefined8 uVar2;
  
  if ((bRam0000000001346e17 & 1) == 0) {
    native_sub_43273c(&MG_BlocksEngine2_Block_BE2_InputValues_TypeInfo_12d39f0);
    native_sub_43273c(&Method_System_Collections_Generic_List_BE2_InputValues__get_Count___12dc460);
    native_sub_43273c(&Method_System_Collections_Generic_List_BE2_InputValues__get_Item___12dc468);
    native_sub_43273c(&StringLiteral__12eaac0);
    bRam0000000001346e17 = 1;
  }
  lVar1 = native_MG_BlocksEngine2_Environment_BE2_VariablesListManager__GetListValues_dce4e4
                    (param_1,param_2);
  if (lVar1 != 0) {
    if ((int)param_3 < (int)*(uint *)(lVar1 + 0x18)) {
      if (*(uint *)(lVar1 + 0x18) <= param_3) {
        native_System_ThrowHelper__ThrowArgumentOutOfRangeException_9fe0f4(0);
      }
      uVar2 = *(undefined8 *)(*(long *)(lVar1 + 0x10) + (long)(int)param_3 * 8 + 0x20);
    }
    else {
      uVar2 = native_sub_432808(_MG_BlocksEngine2_Block_BE2_InputValues_TypeInfo_12d39f0);
      native_MG_BlocksEngine2_Block_BE2_InputValues___ctor_6033d4
                (0,uVar2,_StringLiteral__12eaac0,0,0);
    }
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* MG_BlocksEngine2.Environment.BE2_VariablesListManager$$CreateAndAddVarToPanel @ 0xdce97c
 * void MG_BlocksEngine2_Environment_BE2_VariablesListManager__CreateAndAddVarToPanel (MG_BlocksEngine2_Environment_BE2_VariablesListManager_o* __this, System_String_o* listName, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MG_BlocksEngine2.Environment.BE2_VariablesListManager$$CreateAndAddVarToPanel
   void MG_BlocksEngine2_Environment_BE2_VariablesListManager__CreateAndAddVarToPanel
   (MG_BlocksEngine2_Environment_BE2_VariablesListManager_o* __this, System_String_o* listName,
   const MethodInfo* method); */

void native_MG_BlocksEngine2_Environment_BE2_VariablesListManager__CreateAndAddVarToPanel_dce97c
               (undefined1 param_1 [16],undefined8 param_2,undefined8 param_3,undefined8 param_4,
               long param_5,undefined8 param_6)

{
  uint uVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  
  if ((bRam0000000001346e18 & 1) == 0) {
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    bRam0000000001346e18 = 1;
  }
  uVar8 = *(undefined8 *)(param_5 + 0x18);
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar6 = native_UnityEngine_Object__op_Implicit_8e1b98(uVar8,0);
  if ((uVar6 & 1) != 0) {
    lVar7 = *(long *)(param_5 + 0x18);
    if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
      native_sub_432810();
    }
    if ((bRam0000000001346ddf & 1) == 0) {
      native_sub_43273c(&MG_BlocksEngine2_Environment_BE2_VariablesListManager_TypeInfo_12d3a88);
      native_sub_43273c(&
                        Method_UnityEngine_Component_GetComponentInChildren_BE2_UI_SelectionBlock____12e2c70
                       );
      native_sub_43273c(&
                        Method_UnityEngine_Component_GetComponent_BE2_UI_VariableListViewer____12e2978
                       );
      native_sub_43273c(&Method_UnityEngine_Component_GetComponent_I_BE2_Block____12e2a08);
      native_sub_43273c(&Method_UnityEngine_Object_Instantiate_Transform____12e5a90);
      native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
      bRam0000000001346ddf = 1;
    }
    if (**(long **)(_MG_BlocksEngine2_Environment_BE2_VariablesListManager_TypeInfo_12d3a88 + 0xb8)
        != 0) {
      uVar6 = native_MG_BlocksEngine2_Environment_BE2_VariablesListManager__ContainsList_dc9818
                        (**(long **)(
                                    _MG_BlocksEngine2_Environment_BE2_VariablesListManager_TypeInfo_12d3a88
                                    + 0xb8),param_6);
      if ((uVar6 & 1) != 0) {
        return;
      }
      lVar3 = native_UnityEngine_Component__get_transform_8da62c(lVar7,0);
      if (((lVar3 != 0) &&
          (lVar3 = native_UnityEngine_Transform__get_parent_765eb0(lVar3,0), lVar3 != 0)) &&
         (lVar3 = native_UnityEngine_Component__get_gameObject_8da66c(lVar3,0), lVar3 != 0)) {
        uVar1 = native_UnityEngine_GameObject__get_activeSelf_8de6e8(lVar3,0);
        lVar3 = native_UnityEngine_Component__get_transform_8da62c(lVar7,0);
        if (((lVar3 != 0) &&
            (lVar3 = native_UnityEngine_Transform__get_parent_765eb0(lVar3,0), lVar3 != 0)) &&
           (lVar3 = native_UnityEngine_Component__get_gameObject_8da66c(lVar3,0), lVar3 != 0)) {
          native_UnityEngine_GameObject__SetActive_8de698(lVar3,1,0);
          uVar9 = *(undefined8 *)(lVar7 + 0x28);
          uVar10 = native_UnityEngine_Vector3__get_zero_776668(0);
          uVar8 = param_2;
          uVar12 = param_3;
          uVar11 = native_UnityEngine_Quaternion__get_identity_7628fc(0);
          lVar3 = native_UnityEngine_Component__get_transform_8da62c(lVar7,0);
          if (lVar3 != 0) {
            uVar4 = native_UnityEngine_Transform__get_parent_765eb0(lVar3,0);
            if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
               (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
              native_sub_4327ec(_UnityEngine_Object_TypeInfo_12d54e0);
            }
            lVar3 = native_UnityEngine_Object__Instantiate_BE2_Ins_DefineFunction__4a67c0
                              (uVar10,param_2,param_3,uVar11,uVar8,uVar12,param_4,uVar9,uVar4,
                               _Method_UnityEngine_Object_Instantiate_Transform____12e5a90);
            lVar5 = native_UnityEngine_Component__get_transform_8da62c(lVar7,0);
            if ((lVar5 != 0) &&
               (iVar2 = native_UnityEngine_Transform__GetSiblingIndex_772b74(lVar5,0), lVar3 != 0))
            {
              native_UnityEngine_Transform__SetSiblingIndex_772b24(lVar3,iVar2 + 1,0);
              uVar8 = native_UnityEngine_Transform__get_localPosition_7717f4(lVar3,0);
              native_UnityEngine_Transform__get_localPosition_7717f4(lVar3,0);
              native_UnityEngine_Transform__set_localPosition_7718a4(uVar8,lVar3,0);
              native_UnityEngine_Vector3__get_zero_776668(0);
              native_UnityEngine_Transform__set_localEulerAngles_77194c(lVar3,0);
              lVar5 = native_UnityEngine_Transform__GetChild_772ef0(lVar3,0,0);
              if (lVar5 != 0) {
                native_UnityEngine_Component__GetComponent_ActiveAnimation__49daec
                          (lVar5,_Method_UnityEngine_Component_GetComponent_I_BE2_Block____12e2a08);
                lVar5 = native_UnityEngine_Component__GetComponentInChildren_Animation__49db98
                                  (lVar3,
                                   _Method_UnityEngine_Component_GetComponentInChildren_BE2_UI_SelectionBlock____12e2c70
                                  );
                if ((((lVar5 != 0) &&
                     (lVar5 = native_UnityEngine_Component__get_transform_8da62c(lVar5,0),
                     lVar5 != 0)) &&
                    (lVar5 = native_UnityEngine_Transform__GetChild_772ef0(lVar5,0,0), lVar5 != 0))
                   && (lVar5 = native_UnityEngine_Transform__GetChild_772ef0(lVar5,0,0), lVar5 != 0)
                   ) {
                  uVar8 = native_UnityEngine_Transform__GetChild_772ef0(lVar5,0,0);
                  lVar5 = native_MG_BlocksEngine2_Utils_BE2_Text__GetBE2Text_610e74(uVar8,0);
                  if (lVar5 != 0) {
                    native_MG_BlocksEngine2_Utils_BE2_Text__set_text_610ef8(lVar5,param_6,0);
                    lVar3 = native_UnityEngine_Component__GetComponent_ActiveAnimation__49daec
                                      (lVar3,
                                       _Method_UnityEngine_Component_GetComponent_BE2_UI_VariableListViewer____12e2978
                                      );
                    if (lVar3 != 0) {
                      native_MG_BlocksEngine2_UI_BE2_UI_VariableListViewer__RefreshViewer_dc987c();
                      lVar3 = native_MG_BlocksEngine2_UI_BE2_UI_BlocksSelectionViewer__get_Instance_dc60e0
                                        ();
                      if (lVar3 != 0) {
                        native_MG_BlocksEngine2_UI_BE2_UI_BlocksSelectionViewer__ForceRebuildLayout_dc69d0
                                  ();
                        lVar7 = native_UnityEngine_Component__get_transform_8da62c(lVar7,0);
                        if (((lVar7 != 0) &&
                            (lVar7 = native_UnityEngine_Transform__get_parent_765eb0(lVar7,0),
                            lVar7 != 0)) &&
                           (lVar7 = native_UnityEngine_Component__get_gameObject_8da66c(lVar7,0),
                           lVar7 != 0)) {
                          if (pcRam0000000001340bf8 == (code *)0x0) {
                            pcRam0000000001340bf8 = (code *)native_sub_4326f0(&UNK_00e2da67);
                          }
                    /* WARNING: Could not recover jumptable at 0x008de6e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                          (*pcRam0000000001340bf8)(lVar7,uVar1 & 1);
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
                    /* WARNING: Subroutine does not return */
    native_sub_432810();
  }
  return;
}



/* MG_BlocksEngine2.Environment.BE2_VariablesListManager$$.ctor @ 0xdcea18
 * void MG_BlocksEngine2_Environment_BE2_VariablesListManager___ctor (MG_BlocksEngine2_Environment_BE2_VariablesListManager_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MG_BlocksEngine2.Environment.BE2_VariablesListManager$$.ctor
   void MG_BlocksEngine2_Environment_BE2_VariablesListManager___ctor
   (MG_BlocksEngine2_Environment_BE2_VariablesListManager_o* __this, const MethodInfo* method); */

undefined1  [16]
native_MG_BlocksEngine2_Environment_BE2_VariablesListManager___ctor_dcea18(ulong param_1)

{
  undefined8 uVar1;
  undefined1 auVar2 [16];
  
  if ((bRam0000000001346e19 & 1) == 0) {
    native_sub_43273c(&
                      Method_System_Collections_Generic_Dictionary_string__List_string____ctor___12d96d8
                     );
    native_sub_43273c(&System_Collections_Generic_Dictionary_string__List_string___TypeInfo_12d2358)
    ;
    bRam0000000001346e19 = 1;
  }
  uVar1 = native_sub_432808(
                           _System_Collections_Generic_Dictionary_string__List_string___TypeInfo_12d2358
                           );
  native_System_Collections_Generic_Dictionary_Action__LinkedListNode_Action_____ctor_cda13c
            (uVar1,
             _Method_System_Collections_Generic_Dictionary_string__List_string____ctor___12d96d8);
  *(undefined8 *)(param_1 + 0x20) = uVar1;
  native_sub_4326e0((undefined8 *)(param_1 + 0x20),uVar1);
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


