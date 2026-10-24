/* ARM64 IL2CPP native pseudocode from Ghidra.
 * Recovered implementation, not original C# source.
 * Function boundaries follow the IL2CPP method address table. */


/* MG_BlocksEngine2.Core.BE2_EventsManager$$.ctor @ 0x581070
 * void MG_BlocksEngine2_Core_BE2_EventsManager___ctor (MG_BlocksEngine2_Core_BE2_EventsManager_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MG_BlocksEngine2.Core.BE2_EventsManager$$.ctor
   void MG_BlocksEngine2_Core_BE2_EventsManager___ctor (MG_BlocksEngine2_Core_BE2_EventsManager_o*
   __this, const MethodInfo* method); */

void native_MG_BlocksEngine2_Core_BE2_EventsManager___ctor_581070(long param_1)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  
  if ((bRam000000000133eaf3 & 1) == 0) {
    native_sub_43273c(&
                      Method_System_Collections_Generic_Dictionary_BE2EventTypes__UnityEvent___ctor___12d8e98
                     );
    native_sub_43273c(&
                      Method_System_Collections_Generic_Dictionary_BE2EventTypesBlock__BE2_Event___ctor___12d8eb0
                     );
    native_sub_43273c(&
                      System_Collections_Generic_Dictionary_BE2EventTypesBlock__BE2_Event__TypeInfo_12d2268
                     );
    native_sub_43273c(&
                      System_Collections_Generic_Dictionary_BE2EventTypes__UnityEvent__TypeInfo_12d2260
                     );
    bRam000000000133eaf3 = 1;
  }
  native_System_Object___ctor_ad2798(param_1,0);
  plVar5 = (long *)(param_1 + 0x10);
  if (*plVar5 == 0) {
    lVar4 = native_sub_432808(
                             _System_Collections_Generic_Dictionary_BE2EventTypes__UnityEvent__TypeInfo_12d2260
                             );
    native_System_Collections_Generic_Dictionary_BE2EventTypes__UnityEvent____ctor_c23110
              (lVar4,
               _Method_System_Collections_Generic_Dictionary_BE2EventTypes__UnityEvent___ctor___12d8e98
              );
    *plVar5 = lVar4;
    native_sub_4326e0(plVar5,lVar4);
  }
  plVar5 = (long *)(param_1 + 0x18);
  if (*plVar5 != 0) {
    return;
  }
  lVar4 = native_sub_432808(
                           _System_Collections_Generic_Dictionary_BE2EventTypesBlock__BE2_Event__TypeInfo_12d2268
                           );
  native_System_Collections_Generic_Dictionary_BE2EventTypes__UnityEvent____ctor_c23110
            (lVar4,
             _Method_System_Collections_Generic_Dictionary_BE2EventTypesBlock__BE2_Event___ctor___12d8eb0
            );
  *plVar5 = lVar4;
  if (iRam0000000001345318 != 0) {
    puVar1 = (ulong *)(((ulong)plVar5 >> 0x12 & 0x7fff) * 8 + 0x138ecd8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar3) {
        *puVar1 = *puVar1 | 1L << ((ulong)plVar5 >> 0xc & 0x3f);
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  return;
}



/* MG_BlocksEngine2.Core.BE2_EventsManager$$StartListening @ 0x563268
 * void MG_BlocksEngine2_Core_BE2_EventsManager__StartListening (MG_BlocksEngine2_Core_BE2_EventsManager_o* __this, int32_t eventName, UnityEngine_Events_UnityAction_o* listener, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MG_BlocksEngine2.Core.BE2_EventsManager$$StartListening
   void MG_BlocksEngine2_Core_BE2_EventsManager__StartListening
   (MG_BlocksEngine2_Core_BE2_EventsManager_o* __this, int32_t eventName,
   UnityEngine_Events_UnityAction_o* listener, const MethodInfo* method); */

void native_MG_BlocksEngine2_Core_BE2_EventsManager__StartListening_563268
               (long param_1,undefined4 param_2,undefined8 param_3)

{
  ulong uVar1;
  long lVar2;
  long lStack_38;
  
  if ((bRam000000000133eaf4 & 1) == 0) {
    native_sub_43273c(&
                      Method_System_Collections_Generic_Dictionary_BE2EventTypes__UnityEvent__Add___12d8ea0
                     );
    native_sub_43273c(&
                      Method_System_Collections_Generic_Dictionary_BE2EventTypes__UnityEvent__TryGetValue___12d8ea8
                     );
    native_sub_43273c(&UnityEngine_Events_UnityEvent_TypeInfo_12d65d8);
    bRam000000000133eaf4 = 1;
  }
  lStack_38 = 0;
  if (*(long *)(param_1 + 0x10) != 0) {
    uVar1 = native_System_Collections_Generic_Dictionary_BE2EventTypes__UnityEvent___TryGetValue_c25318
                      (*(long *)(param_1 + 0x10),param_2,&lStack_38,
                       _Method_System_Collections_Generic_Dictionary_BE2EventTypes__UnityEvent__TryGetValue___12d8ea8
                      );
    if ((uVar1 & 1) == 0) {
      lVar2 = native_sub_432808(_UnityEngine_Events_UnityEvent_TypeInfo_12d65d8);
      native_UnityEngine_Events_UnityEvent___ctor_7733e0(lVar2,0);
      lStack_38 = lVar2;
      if (lVar2 != 0) {
        native_UnityEngine_Events_UnityEvent__AddListener_7734bc(lVar2,param_3,0);
        if (*(long *)(param_1 + 0x10) != 0) {
          native_System_Collections_Generic_Dictionary_BE2EventTypes__UnityEvent___Add_c235f4
                    (*(long *)(param_1 + 0x10),param_2,lStack_38,
                     _Method_System_Collections_Generic_Dictionary_BE2EventTypes__UnityEvent__Add___12d8ea0
                    );
          return;
        }
      }
    }
    else if (lStack_38 != 0) {
      native_UnityEngine_Events_UnityEvent__AddListener_7734bc(lStack_38,param_3,0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* MG_BlocksEngine2.Core.BE2_EventsManager$$StartListening @ 0x579be8
 * void MG_BlocksEngine2_Core_BE2_EventsManager__StartListening (MG_BlocksEngine2_Core_BE2_EventsManager_o* __this, int32_t eventName, UnityEngine_Events_UnityAction_I_BE2_Block__o* listener, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MG_BlocksEngine2.Core.BE2_EventsManager$$StartListening
   void MG_BlocksEngine2_Core_BE2_EventsManager__StartListening
   (MG_BlocksEngine2_Core_BE2_EventsManager_o* __this, int32_t eventName,
   UnityEngine_Events_UnityAction_I_BE2_Block__o* listener, const MethodInfo* method); */

void native_MG_BlocksEngine2_Core_BE2_EventsManager__StartListening_579be8
               (long param_1,undefined4 param_2,undefined8 param_3)

{
  ulong uVar1;
  long lVar2;
  long lStack_38;
  
  if ((bRam000000000133eaf5 & 1) == 0) {
    native_sub_43273c(&MG_BlocksEngine2_Core_BE2_Event_TypeInfo_12d39b0);
    native_sub_43273c(&
                      Method_System_Collections_Generic_Dictionary_BE2EventTypesBlock__BE2_Event__Add___12d8eb8
                     );
    native_sub_43273c(&
                      Method_System_Collections_Generic_Dictionary_BE2EventTypesBlock__BE2_Event__TryGetValue___12d8ec0
                     );
    native_sub_43273c(&Method_UnityEngine_Events_UnityEvent_I_BE2_Block__AddListener___12de458);
    bRam000000000133eaf5 = 1;
  }
  lStack_38 = 0;
  if (*(long *)(param_1 + 0x18) != 0) {
    uVar1 = native_System_Collections_Generic_Dictionary_BE2EventTypes__UnityEvent___TryGetValue_c25318
                      (*(long *)(param_1 + 0x18),param_2,&lStack_38,
                       _Method_System_Collections_Generic_Dictionary_BE2EventTypesBlock__BE2_Event__TryGetValue___12d8ec0
                      );
    if ((uVar1 & 1) == 0) {
      lVar2 = native_sub_432808(_MG_BlocksEngine2_Core_BE2_Event_TypeInfo_12d39b0);
      native_MG_BlocksEngine2_Core_BE2_Event___ctor_581024();
      lStack_38 = lVar2;
      if (lVar2 != 0) {
        native_UnityEngine_Events_UnityEvent_I_BE2_Block___AddListener_89fe38
                  (lVar2,param_3,
                   _Method_UnityEngine_Events_UnityEvent_I_BE2_Block__AddListener___12de458);
        if (*(long *)(param_1 + 0x18) != 0) {
          native_System_Collections_Generic_Dictionary_BE2EventTypes__UnityEvent___Add_c235f4
                    (*(long *)(param_1 + 0x18),param_2,lStack_38,
                     _Method_System_Collections_Generic_Dictionary_BE2EventTypesBlock__BE2_Event__Add___12d8eb8
                    );
          return;
        }
      }
    }
    else if (lStack_38 != 0) {
      native_UnityEngine_Events_UnityEvent_I_BE2_Block___AddListener_89fe38
                (lStack_38,param_3,
                 _Method_UnityEngine_Events_UnityEvent_I_BE2_Block__AddListener___12de458);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* MG_BlocksEngine2.Core.BE2_EventsManager$$StopListening @ 0x56340c
 * void MG_BlocksEngine2_Core_BE2_EventsManager__StopListening (MG_BlocksEngine2_Core_BE2_EventsManager_o* __this, int32_t eventName, UnityEngine_Events_UnityAction_o* listener, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MG_BlocksEngine2.Core.BE2_EventsManager$$StopListening
   void MG_BlocksEngine2_Core_BE2_EventsManager__StopListening
   (MG_BlocksEngine2_Core_BE2_EventsManager_o* __this, int32_t eventName,
   UnityEngine_Events_UnityAction_o* listener, const MethodInfo* method); */

void native_MG_BlocksEngine2_Core_BE2_EventsManager__StopListening_56340c
               (long param_1,undefined4 param_2,undefined8 param_3)

{
  ulong uVar1;
  long lStack_38;
  
  if ((bRam000000000133eaf6 & 1) == 0) {
    native_sub_43273c(&
                      Method_System_Collections_Generic_Dictionary_BE2EventTypes__UnityEvent__TryGetValue___12d8ea8
                     );
    bRam000000000133eaf6 = 1;
  }
  lStack_38 = 0;
  if (*(long *)(param_1 + 0x10) != 0) {
    uVar1 = native_System_Collections_Generic_Dictionary_BE2EventTypes__UnityEvent___TryGetValue_c25318
                      (*(long *)(param_1 + 0x10),param_2,&lStack_38,
                       _Method_System_Collections_Generic_Dictionary_BE2EventTypes__UnityEvent__TryGetValue___12d8ea8
                      );
    if ((uVar1 & 1) != 0) {
      if (lStack_38 == 0) goto LAB_0056349c;
      native_UnityEngine_Events_UnityEvent__RemoveListener_773574(lStack_38,param_3,0);
    }
    return;
  }
LAB_0056349c:
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* MG_BlocksEngine2.Core.BE2_EventsManager$$StopListening @ 0x579db8
 * void MG_BlocksEngine2_Core_BE2_EventsManager__StopListening (MG_BlocksEngine2_Core_BE2_EventsManager_o* __this, int32_t eventName, UnityEngine_Events_UnityAction_I_BE2_Block__o* listener, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MG_BlocksEngine2.Core.BE2_EventsManager$$StopListening
   void MG_BlocksEngine2_Core_BE2_EventsManager__StopListening
   (MG_BlocksEngine2_Core_BE2_EventsManager_o* __this, int32_t eventName,
   UnityEngine_Events_UnityAction_I_BE2_Block__o* listener, const MethodInfo* method); */

void native_MG_BlocksEngine2_Core_BE2_EventsManager__StopListening_579db8
               (long param_1,undefined4 param_2,undefined8 param_3)

{
  ulong uVar1;
  long lStack_38;
  
  if ((bRam000000000133eaf7 & 1) == 0) {
    native_sub_43273c(&
                      Method_System_Collections_Generic_Dictionary_BE2EventTypesBlock__BE2_Event__TryGetValue___12d8ec0
                     );
    native_sub_43273c(&Method_UnityEngine_Events_UnityEvent_I_BE2_Block__RemoveListener___12de468);
    bRam000000000133eaf7 = 1;
  }
  lStack_38 = 0;
  if (*(long *)(param_1 + 0x18) != 0) {
    uVar1 = native_System_Collections_Generic_Dictionary_BE2EventTypes__UnityEvent___TryGetValue_c25318
                      (*(long *)(param_1 + 0x18),param_2,&lStack_38,
                       _Method_System_Collections_Generic_Dictionary_BE2EventTypesBlock__BE2_Event__TryGetValue___12d8ec0
                      );
    if ((uVar1 & 1) != 0) {
      if (lStack_38 == 0) goto LAB_00579e5c;
      native_UnityEngine_Events_UnityEvent_I_BE2_Block___RemoveListener_89fe84
                (lStack_38,param_3,
                 _Method_UnityEngine_Events_UnityEvent_I_BE2_Block__RemoveListener___12de468);
    }
    return;
  }
LAB_00579e5c:
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* MG_BlocksEngine2.Core.BE2_EventsManager$$TriggerEvent @ 0x579794
 * void MG_BlocksEngine2_Core_BE2_EventsManager__TriggerEvent (MG_BlocksEngine2_Core_BE2_EventsManager_o* __this, int32_t eventName, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MG_BlocksEngine2.Core.BE2_EventsManager$$TriggerEvent
   void MG_BlocksEngine2_Core_BE2_EventsManager__TriggerEvent
   (MG_BlocksEngine2_Core_BE2_EventsManager_o* __this, int32_t eventName, const MethodInfo* method);
    */

void native_MG_BlocksEngine2_Core_BE2_EventsManager__TriggerEvent_579794
               (long param_1,undefined4 param_2)

{
  ulong uVar1;
  long lStack_28;
  
  if ((bRam000000000133eaf8 & 1) == 0) {
    native_sub_43273c(&
                      Method_System_Collections_Generic_Dictionary_BE2EventTypes__UnityEvent__TryGetValue___12d8ea8
                     );
    bRam000000000133eaf8 = 1;
  }
  lStack_28 = 0;
  if (*(long *)(param_1 + 0x10) != 0) {
    uVar1 = native_System_Collections_Generic_Dictionary_BE2EventTypes__UnityEvent___TryGetValue_c25318
                      (*(long *)(param_1 + 0x10),param_2,&lStack_28,
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



/* MG_BlocksEngine2.Core.BE2_EventsManager$$TriggerEvent @ 0x57415c
 * void MG_BlocksEngine2_Core_BE2_EventsManager__TriggerEvent (MG_BlocksEngine2_Core_BE2_EventsManager_o* __this, int32_t eventName, MG_BlocksEngine2_Block_I_BE2_Block_o* block, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MG_BlocksEngine2.Core.BE2_EventsManager$$TriggerEvent
   void MG_BlocksEngine2_Core_BE2_EventsManager__TriggerEvent
   (MG_BlocksEngine2_Core_BE2_EventsManager_o* __this, int32_t eventName,
   MG_BlocksEngine2_Block_I_BE2_Block_o* block, const MethodInfo* method); */

void native_MG_BlocksEngine2_Core_BE2_EventsManager__TriggerEvent_57415c
               (long param_1,undefined4 param_2,undefined8 param_3)

{
  ulong uVar1;
  long lStack_38;
  
  if ((bRam000000000133eaf9 & 1) == 0) {
    native_sub_43273c(&
                      Method_System_Collections_Generic_Dictionary_BE2EventTypesBlock__BE2_Event__TryGetValue___12d8ec0
                     );
    native_sub_43273c(&Method_UnityEngine_Events_UnityEvent_I_BE2_Block__Invoke___12de460);
    bRam000000000133eaf9 = 1;
  }
  lStack_38 = 0;
  if (*(long *)(param_1 + 0x18) != 0) {
    uVar1 = native_System_Collections_Generic_Dictionary_BE2EventTypes__UnityEvent___TryGetValue_c25318
                      (*(long *)(param_1 + 0x18),param_2,&lStack_38,
                       _Method_System_Collections_Generic_Dictionary_BE2EventTypesBlock__BE2_Event__TryGetValue___12d8ec0
                      );
    if ((uVar1 & 1) != 0) {
      if (lStack_38 == 0) goto LAB_00574200;
      native_UnityEngine_Events_UnityEvent_BaseEventData___Invoke_8a0108
                (lStack_38,param_3,
                 _Method_UnityEngine_Events_UnityEvent_I_BE2_Block__Invoke___12de460);
    }
    return;
  }
LAB_00574200:
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}


