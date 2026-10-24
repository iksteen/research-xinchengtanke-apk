/* ARM64 IL2CPP native pseudocode from Ghidra.
 * Recovered implementation, not original C# source.
 * Function boundaries follow the IL2CPP method address table. */


/* BE2_Ins_DefineFunction$$OnAwake @ 0x605f1c
 * void BE2_Ins_DefineFunction__OnAwake (BE2_Ins_DefineFunction_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* BE2_Ins_DefineFunction$$OnAwake
   void BE2_Ins_DefineFunction__OnAwake (BE2_Ins_DefineFunction_o* __this, const MethodInfo*
   method); */

void native_BE2_Ins_DefineFunction__OnAwake_605f1c(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_30 [16];
  
  if ((bRam000000000133ee06 & 1) == 0) {
    native_sub_43273c(&System_Guid_TypeInfo_12d4880);
    bRam000000000133ee06 = 1;
  }
  auStack_30._0_8_ = 0;
  auStack_30._8_8_ = 0;
  lVar1 = native_MG_BlocksEngine2_Core_BE2_MainEventsManager__get_Instance_6001fc();
  if (lVar1 != 0) {
    native_MG_BlocksEngine2_Core_BE2_EventsManager__TriggerEvent_57415c
              (lVar1,0xc,*(undefined8 *)(param_1 + 0x40),0);
    if (((*(byte *)(_System_Guid_TypeInfo_12d4880 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_System_Guid_TypeInfo_12d4880 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    auStack_30 = native_System_Guid__NewGuid_bd771c(0);
    uVar2 = native_System_Guid__ToString_bd6a14(auStack_30,0);
    *(undefined8 *)(param_1 + 0x78) = uVar2;
    native_sub_4326e0((undefined8 *)(param_1 + 0x78),uVar2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* BE2_Ins_DefineFunction$$OnStart @ 0x605fc8
 * void BE2_Ins_DefineFunction__OnStart (BE2_Ins_DefineFunction_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* BE2_Ins_DefineFunction$$OnStart
   void BE2_Ins_DefineFunction__OnStart (BE2_Ins_DefineFunction_o* __this, const MethodInfo*
   method); */

void native_BE2_Ins_DefineFunction__OnStart_605fc8(long param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  ulong uVar4;
  int *piVar5;
  long *plVar6;
  
  if ((bRam000000000133ee07 & 1) == 0) {
    native_sub_43273c(&MG_BlocksEngine2_Block_I_BE2_BlockLayout_TypeInfo_12d4de0);
    native_sub_43273c(&MG_BlocksEngine2_Block_I_BE2_BlockSectionHeader_TypeInfo_12d4df8);
    native_sub_43273c(&MG_BlocksEngine2_Block_I_BE2_BlockSection_TypeInfo_12d4de8);
    native_sub_43273c(&MG_BlocksEngine2_Block_I_BE2_Block_TypeInfo_12d4dd8);
    bRam000000000133ee07 = 1;
  }
  plVar6 = *(long **)(param_1 + 0x40);
  if (plVar6 != (long *)0x0) {
    lVar3 = *plVar6;
    if ((ulong)*(ushort *)(lVar3 + 0x12a) != 0) {
      uVar4 = 0;
      piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
        if (*(long *)(piVar5 + -2) == _MG_BlocksEngine2_Block_I_BE2_Block_TypeInfo_12d4dd8) {
          puVar1 = (undefined8 *)(lVar3 + (long)(*piVar5 + 3) * 0x10 + 0x138);
          goto LAB_00606084;
        }
        uVar4 = uVar4 + 1;
        piVar5 = piVar5 + 4;
      } while (uVar4 < *(ushort *)(lVar3 + 0x12a));
    }
    puVar1 = (undefined8 *)
             native_sub_3c9b34(plVar6,_MG_BlocksEngine2_Block_I_BE2_Block_TypeInfo_12d4dd8,3);
LAB_00606084:
    plVar6 = (long *)(*(code *)*puVar1)(plVar6,puVar1[1]);
    if (plVar6 != (long *)0x0) {
      lVar3 = *plVar6;
      if ((ulong)*(ushort *)(lVar3 + 0x12a) != 0) {
        uVar4 = 0;
        piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
        do {
          if (*(long *)(piVar5 + -2) == _MG_BlocksEngine2_Block_I_BE2_BlockLayout_TypeInfo_12d4de0)
          {
            puVar1 = (undefined8 *)(lVar3 + (long)(*piVar5 + 2) * 0x10 + 0x138);
            goto LAB_006060f8;
          }
          uVar4 = uVar4 + 1;
          piVar5 = piVar5 + 4;
        } while (uVar4 < *(ushort *)(lVar3 + 0x12a));
      }
      puVar1 = (undefined8 *)
               native_sub_3c9b34(plVar6,_MG_BlocksEngine2_Block_I_BE2_BlockLayout_TypeInfo_12d4de0,2
                                );
LAB_006060f8:
      lVar3 = (*(code *)*puVar1)(plVar6,puVar1[1]);
      if (lVar3 != 0) {
        if (*(int *)(lVar3 + 0x18) == 0) {
          uVar2 = native_sub_43283c();
                    /* WARNING: Subroutine does not return */
          native_sub_4327dc(uVar2,0);
        }
        plVar6 = *(long **)(lVar3 + 0x20);
        if (plVar6 != (long *)0x0) {
          lVar3 = *plVar6;
          if ((ulong)*(ushort *)(lVar3 + 0x12a) != 0) {
            uVar4 = 0;
            piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
            do {
              if (*(long *)(piVar5 + -2) ==
                  _MG_BlocksEngine2_Block_I_BE2_BlockSection_TypeInfo_12d4de8) {
                puVar1 = (undefined8 *)(lVar3 + (long)(*piVar5 + 1) * 0x10 + 0x138);
                goto LAB_00606178;
              }
              uVar4 = uVar4 + 1;
              piVar5 = piVar5 + 4;
            } while (uVar4 < *(ushort *)(lVar3 + 0x12a));
          }
          puVar1 = (undefined8 *)
                   native_sub_3c9b34(plVar6,
                                     _MG_BlocksEngine2_Block_I_BE2_BlockSection_TypeInfo_12d4de8,1);
LAB_00606178:
          plVar6 = (long *)(*(code *)*puVar1)(plVar6,puVar1[1]);
          if (plVar6 != (long *)0x0) {
            lVar3 = *plVar6;
            if ((ulong)*(ushort *)(lVar3 + 0x12a) != 0) {
              uVar4 = 0;
              piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
              do {
                if (*(long *)(piVar5 + -2) ==
                    _MG_BlocksEngine2_Block_I_BE2_BlockSectionHeader_TypeInfo_12d4df8) {
                  puVar1 = (undefined8 *)(lVar3 + (long)(*piVar5 + 7) * 0x10 + 0x138);
                  goto LAB_006061ec;
                }
                uVar4 = uVar4 + 1;
                piVar5 = piVar5 + 4;
              } while (uVar4 < *(ushort *)(lVar3 + 0x12a));
            }
            puVar1 = (undefined8 *)
                     native_sub_3c9b34(plVar6,
                                       _MG_BlocksEngine2_Block_I_BE2_BlockSectionHeader_TypeInfo_12d4df8
                                       ,7);
LAB_006061ec:
                    /* WARNING: Could not recover jumptable at 0x006061fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (*(code *)*puVar1)(plVar6,puVar1[1]);
            return;
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* BE2_Ins_DefineFunction$$OnEnableInstruction @ 0x606210
 * void BE2_Ins_DefineFunction__OnEnableInstruction (BE2_Ins_DefineFunction_o* __this, const MethodInfo* method); */

/* WARNING: Removing unreachable block (ram,0x00579c7c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* BE2_Ins_DefineFunction$$OnEnableInstruction
   void BE2_Ins_DefineFunction__OnEnableInstruction (BE2_Ins_DefineFunction_o* __this, const
   MethodInfo* method); */

void native_BE2_Ins_DefineFunction__OnEnableInstruction_606210(undefined8 param_1)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  
  if ((bRam000000000133ee08 & 1) == 0) {
    native_sub_43273c(&Method_BE2_Ins_DefineFunction_HandleDefineChange___12e21d0);
    native_sub_43273c(&Method_UnityEngine_Events_UnityAction_I_BE2_Block___ctor___12de3a8);
    native_sub_43273c(&UnityEngine_Events_UnityAction_I_BE2_Block__TypeInfo_12d2f40);
    bRam000000000133ee08 = 1;
  }
  lVar3 = native_MG_BlocksEngine2_Core_BE2_MainEventsManager__get_Instance_6001fc();
  uVar4 = native_sub_432808(_UnityEngine_Events_UnityAction_I_BE2_Block__TypeInfo_12d2f40);
  native_UnityEngine_Events_UnityAction_List_IEventSystemHandler_____ctor_89b93c
            (uVar4,param_1,_Method_BE2_Ins_DefineFunction_HandleDefineChange___12e21d0,
             _Method_UnityEngine_Events_UnityAction_I_BE2_Block___ctor___12de3a8);
  if (lVar3 != 0) {
    native_MG_BlocksEngine2_Core_BE2_EventsManager__StartListening_579be8(lVar3,3,uVar4,0);
    lVar3 = native_MG_BlocksEngine2_Core_BE2_MainEventsManager__get_Instance_6001fc();
    uVar4 = native_sub_432808(_UnityEngine_Events_UnityAction_I_BE2_Block__TypeInfo_12d2f40);
    native_UnityEngine_Events_UnityAction_List_IEventSystemHandler_____ctor_89b93c
              (uVar4,param_1,_Method_BE2_Ins_DefineFunction_HandleDefineChange___12e21d0,
               _Method_UnityEngine_Events_UnityAction_I_BE2_Block___ctor___12de3a8);
    if (lVar3 != 0) {
      native_MG_BlocksEngine2_Core_BE2_EventsManager__StartListening_579be8(lVar3,4,uVar4,0);
      lVar3 = native_MG_BlocksEngine2_Core_BE2_MainEventsManager__get_Instance_6001fc();
      uVar4 = native_sub_432808(_UnityEngine_Events_UnityAction_I_BE2_Block__TypeInfo_12d2f40);
      native_UnityEngine_Events_UnityAction_List_IEventSystemHandler_____ctor_89b93c
                (uVar4,param_1,_Method_BE2_Ins_DefineFunction_HandleDefineChange___12e21d0,
                 _Method_UnityEngine_Events_UnityAction_I_BE2_Block___ctor___12de3a8);
      if (lVar3 != 0) {
        native_MG_BlocksEngine2_Core_BE2_EventsManager__StartListening_579be8(lVar3,8,uVar4,0);
        lVar3 = native_MG_BlocksEngine2_Core_BE2_MainEventsManager__get_Instance_6001fc();
        uVar4 = native_sub_432808(_UnityEngine_Events_UnityAction_I_BE2_Block__TypeInfo_12d2f40);
        native_UnityEngine_Events_UnityAction_List_IEventSystemHandler_____ctor_89b93c
                  (uVar4,param_1,_Method_BE2_Ins_DefineFunction_HandleDefineChange___12e21d0,
                   _Method_UnityEngine_Events_UnityAction_I_BE2_Block___ctor___12de3a8);
        if (lVar3 != 0) {
          if ((bRam000000000133eaf5 & 1) == 0) {
            native_sub_43273c(&MG_BlocksEngine2_Core_BE2_Event_TypeInfo_12d39b0,9,uVar4,0);
            native_sub_43273c(&
                              Method_System_Collections_Generic_Dictionary_BE2EventTypesBlock__BE2_Event__Add___12d8eb8
                             );
            native_sub_43273c(&
                              Method_System_Collections_Generic_Dictionary_BE2EventTypesBlock__BE2_Event__TryGetValue___12d8ec0
                             );
            native_sub_43273c(&
                              Method_UnityEngine_Events_UnityEvent_I_BE2_Block__AddListener___12de458
                             );
            bRam000000000133eaf5 = 1;
          }
          if ((*(long *)(lVar3 + 0x18) != 0) &&
             (uVar1 = native_System_Collections_Generic_Dictionary_BE2EventTypes__UnityEvent___TryGetValue_c25318
                                (*(long *)(lVar3 + 0x18),9,&stack0xffffffffffffffc8,
                                 _Method_System_Collections_Generic_Dictionary_BE2EventTypesBlock__BE2_Event__TryGetValue___12d8ec0
                                ), (uVar1 & 1) == 0)) {
            lVar2 = native_sub_432808(_MG_BlocksEngine2_Core_BE2_Event_TypeInfo_12d39b0);
            native_MG_BlocksEngine2_Core_BE2_Event___ctor_581024();
            if (lVar2 != 0) {
              native_UnityEngine_Events_UnityEvent_I_BE2_Block___AddListener_89fe38
                        (lVar2,uVar4,
                         _Method_UnityEngine_Events_UnityEvent_I_BE2_Block__AddListener___12de458);
              if (*(long *)(lVar3 + 0x18) != 0) {
                native_System_Collections_Generic_Dictionary_BE2EventTypes__UnityEvent___Add_c235f4
                          (*(long *)(lVar3 + 0x18),9,lVar2,
                           _Method_System_Collections_Generic_Dictionary_BE2EventTypesBlock__BE2_Event__Add___12d8eb8
                          );
                return;
              }
            }
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



/* BE2_Ins_DefineFunction$$OnDisableInstruction @ 0x60638c
 * void BE2_Ins_DefineFunction__OnDisableInstruction (BE2_Ins_DefineFunction_o* __this, const MethodInfo* method); */

/* WARNING: Removing unreachable block (ram,0x00579e34) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* BE2_Ins_DefineFunction$$OnDisableInstruction
   void BE2_Ins_DefineFunction__OnDisableInstruction (BE2_Ins_DefineFunction_o* __this, const
   MethodInfo* method); */

void native_BE2_Ins_DefineFunction__OnDisableInstruction_60638c(undefined8 param_1)

{
  ulong uVar1;
  long lVar2;
  undefined8 uVar3;
  
  if ((bRam000000000133ee09 & 1) == 0) {
    native_sub_43273c(&Method_BE2_Ins_DefineFunction_HandleDefineChange___12e21d0);
    native_sub_43273c(&Method_UnityEngine_Events_UnityAction_I_BE2_Block___ctor___12de3a8);
    native_sub_43273c(&UnityEngine_Events_UnityAction_I_BE2_Block__TypeInfo_12d2f40);
    bRam000000000133ee09 = 1;
  }
  lVar2 = native_MG_BlocksEngine2_Core_BE2_MainEventsManager__get_Instance_6001fc();
  uVar3 = native_sub_432808(_UnityEngine_Events_UnityAction_I_BE2_Block__TypeInfo_12d2f40);
  native_UnityEngine_Events_UnityAction_List_IEventSystemHandler_____ctor_89b93c
            (uVar3,param_1,_Method_BE2_Ins_DefineFunction_HandleDefineChange___12e21d0,
             _Method_UnityEngine_Events_UnityAction_I_BE2_Block___ctor___12de3a8);
  if (lVar2 != 0) {
    native_MG_BlocksEngine2_Core_BE2_EventsManager__StopListening_579db8(lVar2,3,uVar3,0);
    lVar2 = native_MG_BlocksEngine2_Core_BE2_MainEventsManager__get_Instance_6001fc();
    uVar3 = native_sub_432808(_UnityEngine_Events_UnityAction_I_BE2_Block__TypeInfo_12d2f40);
    native_UnityEngine_Events_UnityAction_List_IEventSystemHandler_____ctor_89b93c
              (uVar3,param_1,_Method_BE2_Ins_DefineFunction_HandleDefineChange___12e21d0,
               _Method_UnityEngine_Events_UnityAction_I_BE2_Block___ctor___12de3a8);
    if (lVar2 != 0) {
      native_MG_BlocksEngine2_Core_BE2_EventsManager__StopListening_579db8(lVar2,4,uVar3,0);
      lVar2 = native_MG_BlocksEngine2_Core_BE2_MainEventsManager__get_Instance_6001fc();
      uVar3 = native_sub_432808(_UnityEngine_Events_UnityAction_I_BE2_Block__TypeInfo_12d2f40);
      native_UnityEngine_Events_UnityAction_List_IEventSystemHandler_____ctor_89b93c
                (uVar3,param_1,_Method_BE2_Ins_DefineFunction_HandleDefineChange___12e21d0,
                 _Method_UnityEngine_Events_UnityAction_I_BE2_Block___ctor___12de3a8);
      if (lVar2 != 0) {
        native_MG_BlocksEngine2_Core_BE2_EventsManager__StopListening_579db8(lVar2,8,uVar3,0);
        lVar2 = native_MG_BlocksEngine2_Core_BE2_MainEventsManager__get_Instance_6001fc();
        uVar3 = native_sub_432808(_UnityEngine_Events_UnityAction_I_BE2_Block__TypeInfo_12d2f40);
        native_UnityEngine_Events_UnityAction_List_IEventSystemHandler_____ctor_89b93c
                  (uVar3,param_1,_Method_BE2_Ins_DefineFunction_HandleDefineChange___12e21d0,
                   _Method_UnityEngine_Events_UnityAction_I_BE2_Block___ctor___12de3a8);
        if (lVar2 != 0) {
          if ((bRam000000000133eaf7 & 1) == 0) {
            native_sub_43273c(&
                              Method_System_Collections_Generic_Dictionary_BE2EventTypesBlock__BE2_Event__TryGetValue___12d8ec0
                              ,9,uVar3,0);
            native_sub_43273c(&
                              Method_UnityEngine_Events_UnityEvent_I_BE2_Block__RemoveListener___12de468
                             );
            bRam000000000133eaf7 = 1;
          }
          if ((*(long *)(lVar2 + 0x18) != 0) &&
             (uVar1 = native_System_Collections_Generic_Dictionary_BE2EventTypes__UnityEvent___TryGetValue_c25318
                                (*(long *)(lVar2 + 0x18),9,&stack0xffffffffffffffc8,
                                 _Method_System_Collections_Generic_Dictionary_BE2EventTypesBlock__BE2_Event__TryGetValue___12d8ec0
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



/* BE2_Ins_DefineFunction$$HandleDefineChange @ 0x606508
 * void BE2_Ins_DefineFunction__HandleDefineChange (BE2_Ins_DefineFunction_o* __this, MG_BlocksEngine2_Block_I_BE2_Block_o* block, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* BE2_Ins_DefineFunction$$HandleDefineChange
   void BE2_Ins_DefineFunction__HandleDefineChange (BE2_Ins_DefineFunction_o* __this,
   MG_BlocksEngine2_Block_I_BE2_Block_o* block, const MethodInfo* method); */

void native_BE2_Ins_DefineFunction__HandleDefineChange_606508(long param_1,long *param_2)

{
  undefined8 *puVar1;
  long *plVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  int *piVar8;
  long *plVar9;
  ulong uVar10;
  
  if ((bRam000000000133ee0a & 1) == 0) {
    native_sub_43273c(&
                      Method_UnityEngine_Component_GetComponentInParent_BE2_Ins_DefineFunction____12e2d00
                     );
    native_sub_43273c(&MG_BlocksEngine2_Block_I_BE2_BlockSection_TypeInfo_12d4de8);
    native_sub_43273c(&MG_BlocksEngine2_Block_I_BE2_Block_TypeInfo_12d4dd8);
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    bRam000000000133ee0a = 1;
  }
  if (param_2 != (long *)0x0) {
    lVar6 = *param_2;
    if ((ulong)*(ushort *)(lVar6 + 0x12a) != 0) {
      uVar7 = 0;
      piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == _MG_BlocksEngine2_Block_I_BE2_Block_TypeInfo_12d4dd8) {
          puVar1 = (undefined8 *)(lVar6 + (long)(*piVar8 + 6) * 0x10 + 0x138);
          goto LAB_006065c8;
        }
        uVar7 = uVar7 + 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 < *(ushort *)(lVar6 + 0x12a));
    }
    puVar1 = (undefined8 *)
             native_sub_3c9b34(param_2,_MG_BlocksEngine2_Block_I_BE2_Block_TypeInfo_12d4dd8,6);
LAB_006065c8:
    plVar2 = (long *)(*(code *)*puVar1)(param_2,puVar1[1]);
    if (plVar2 != (long *)0x0) {
      lVar6 = *plVar2;
      if ((ulong)*(ushort *)(lVar6 + 0x12a) != 0) {
        uVar7 = 0;
        piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        do {
          if (*(long *)(piVar8 + -2) == _MG_BlocksEngine2_Block_I_BE2_BlockSection_TypeInfo_12d4de8)
          {
            puVar1 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
            goto LAB_00606638;
          }
          uVar7 = uVar7 + 1;
          piVar8 = piVar8 + 4;
        } while (uVar7 < *(ushort *)(lVar6 + 0x12a));
      }
      puVar1 = (undefined8 *)
               native_sub_3c9b34(plVar2,_MG_BlocksEngine2_Block_I_BE2_BlockSection_TypeInfo_12d4de8,
                                 0);
LAB_00606638:
      lVar6 = (*(code *)*puVar1)(plVar2,puVar1[1]);
      if (lVar6 != 0) {
        uVar3 = native_UnityEngine_Component__GetComponentInParent_BE2_Canvas__49dc70
                          (lVar6,
                           _Method_UnityEngine_Component_GetComponentInParent_BE2_Ins_DefineFunction____12e2d00
                          );
        if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
           (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
          native_sub_4327ec(_UnityEngine_Object_TypeInfo_12d54e0);
        }
        uVar7 = native_UnityEngine_Object__op_Equality_8e9a3c(uVar3,param_1,0);
        if ((uVar7 & 1) == 0) {
          return;
        }
        lVar6 = *(long *)(param_1 + 0x80);
        if (lVar6 != 0) {
          if ((bRam000000000133ff6d & 1) == 0) {
            native_sub_43273c(&UnityEngine_Events_InvokableCall_TypeInfo_12d4f78,0);
            native_sub_43273c(&
                              Method_System_Collections_Generic_List_BaseInvokableCall__get_Count___12dc5d0
                             );
            native_sub_43273c(&
                              Method_System_Collections_Generic_List_BaseInvokableCall__get_Item___12dc5d8
                             );
            native_sub_43273c(&object___TypeInfo_12d32d8);
            bRam000000000133ff6d = 1;
          }
          lVar4 = native_UnityEngine_Events_UnityEventBase__PrepareInvoke_773a28(lVar6);
          if (lVar4 != 0) {
            uVar7 = (ulong)*(uint *)(lVar4 + 0x18);
            if (0 < (int)*(uint *)(lVar4 + 0x18)) {
              plVar2 = (long *)(lVar6 + 0x28);
              lVar6 = 4;
              do {
                uVar10 = lVar6 - 4;
                if ((uVar7 & 0xffffffff) <= uVar10) {
                  native_System_ThrowHelper__ThrowArgumentOutOfRangeException_9fe0f4(0);
                }
                plVar9 = *(long **)(*(long *)(lVar4 + 0x10) + lVar6 * 8);
                if (plVar9 == (long *)0x0) {
code_r0x00773944:
                  if (*(uint *)(lVar4 + 0x18) <= uVar10) {
                    native_System_ThrowHelper__ThrowArgumentOutOfRangeException_9fe0f4(0);
                    plVar9 = *(long **)(*(long *)(lVar4 + 0x10) + lVar6 * 8);
                  }
                  if (plVar9 != (long *)0x0) {
                    if ((*(byte *)(_UnityEngine_Events_InvokableCall_TypeInfo_12d4f78 + 300) <=
                         *(byte *)(*plVar9 + 300)) &&
                       (*(long *)(*(long *)(*plVar9 + 200) +
                                  (ulong)*(byte *)(
                                                  _UnityEngine_Events_InvokableCall_TypeInfo_12d4f78
                                                  + 300) * 8 + -8) ==
                        _UnityEngine_Events_InvokableCall_TypeInfo_12d4f78)) goto code_r0x007739ec;
                  }
                  if (*(uint *)(lVar4 + 0x18) <= uVar10) {
                    native_System_ThrowHelper__ThrowArgumentOutOfRangeException_9fe0f4(0);
                    plVar9 = *(long **)(*(long *)(lVar4 + 0x10) + lVar6 * 8);
                  }
                  if (*plVar2 == 0) {
                    lVar5 = native_sub_432750(_object___TypeInfo_12d32d8,0);
                    *plVar2 = lVar5;
                    native_sub_4326e0(plVar2,lVar5);
                  }
                  if (plVar9 == (long *)0x0) goto code_r0x00773a24;
                  (**(code **)(*plVar9 + 0x178))(plVar9,*plVar2,*(undefined8 *)(*plVar9 + 0x180));
                }
                else {
                  if ((*(byte *)(*plVar9 + 300) <
                       *(byte *)(_UnityEngine_Events_InvokableCall_TypeInfo_12d4f78 + 300)) ||
                     (*(long *)(*(long *)(*plVar9 + 200) +
                                (ulong)*(byte *)(_UnityEngine_Events_InvokableCall_TypeInfo_12d4f78
                                                + 300) * 8 + -8) !=
                      _UnityEngine_Events_InvokableCall_TypeInfo_12d4f78)) goto code_r0x00773944;
code_r0x007739ec:
                  native_UnityEngine_Events_InvokableCall__Invoke_8df658(plVar9,0);
                }
                uVar7 = (ulong)*(int *)(lVar4 + 0x18);
                lVar5 = lVar6 + -3;
                lVar6 = lVar6 + 1;
              } while (lVar5 < (long)uVar7);
            }
            return;
          }
code_r0x00773a24:
                    /* WARNING: Subroutine does not return */
          native_sub_432810();
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* BE2_Ins_DefineFunction$$GetLocalVariableIndex @ 0x6066c4
 * int32_t BE2_Ins_DefineFunction__GetLocalVariableIndex (BE2_Ins_DefineFunction_o* __this, System_String_o* varName, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* BE2_Ins_DefineFunction$$GetLocalVariableIndex
   int32_t BE2_Ins_DefineFunction__GetLocalVariableIndex (BE2_Ins_DefineFunction_o* __this,
   System_String_o* varName, const MethodInfo* method); */

uint native_BE2_Ins_DefineFunction__GetLocalVariableIndex_6066c4(long param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  int *piVar6;
  long *plVar7;
  uint uVar8;
  int iVar9;
  
  if ((bRam000000000133ee0b & 1) == 0) {
    native_sub_43273c(&Method_UnityEngine_Component_GetComponentInChildren_TMP_Text____12e2c98);
    native_sub_43273c(&MG_BlocksEngine2_Block_I_BE2_BlockLayout_TypeInfo_12d4de0);
    native_sub_43273c(&MG_BlocksEngine2_Block_I_BE2_BlockSectionHeaderInput_TypeInfo_12d4e00);
    native_sub_43273c(&MG_BlocksEngine2_Block_I_BE2_BlockSectionHeader_TypeInfo_12d4df8);
    native_sub_43273c(&MG_BlocksEngine2_Block_I_BE2_BlockSection_TypeInfo_12d4de8);
    native_sub_43273c(&MG_BlocksEngine2_Block_I_BE2_Block_TypeInfo_12d4dd8);
    bRam000000000133ee0b = 1;
  }
  plVar7 = *(long **)(param_1 + 0x40);
  if (plVar7 != (long *)0x0) {
    lVar3 = *plVar7;
    if ((ulong)*(ushort *)(lVar3 + 0x12a) != 0) {
      uVar5 = 0;
      piVar6 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == _MG_BlocksEngine2_Block_I_BE2_Block_TypeInfo_12d4dd8) {
          puVar1 = (undefined8 *)(lVar3 + (long)(*piVar6 + 3) * 0x10 + 0x138);
          goto LAB_006067a8;
        }
        uVar5 = uVar5 + 1;
        piVar6 = piVar6 + 4;
      } while (uVar5 < *(ushort *)(lVar3 + 0x12a));
    }
    puVar1 = (undefined8 *)
             native_sub_3c9b34(plVar7,_MG_BlocksEngine2_Block_I_BE2_Block_TypeInfo_12d4dd8,3);
LAB_006067a8:
    plVar7 = (long *)(*(code *)*puVar1)(plVar7,puVar1[1]);
    if (plVar7 != (long *)0x0) {
      lVar3 = *plVar7;
      if ((ulong)*(ushort *)(lVar3 + 0x12a) != 0) {
        uVar5 = 0;
        piVar6 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
        do {
          if (*(long *)(piVar6 + -2) == _MG_BlocksEngine2_Block_I_BE2_BlockLayout_TypeInfo_12d4de0)
          {
            puVar1 = (undefined8 *)(lVar3 + (long)(*piVar6 + 2) * 0x10 + 0x138);
            goto LAB_0060681c;
          }
          uVar5 = uVar5 + 1;
          piVar6 = piVar6 + 4;
        } while (uVar5 < *(ushort *)(lVar3 + 0x12a));
      }
      puVar1 = (undefined8 *)
               native_sub_3c9b34(plVar7,_MG_BlocksEngine2_Block_I_BE2_BlockLayout_TypeInfo_12d4de0,2
                                );
LAB_0060681c:
      lVar3 = (*(code *)*puVar1)(plVar7,puVar1[1]);
      if (lVar3 != 0) {
        if (*(int *)(lVar3 + 0x18) == 0) {
LAB_006069fc:
          uVar2 = native_sub_43283c();
                    /* WARNING: Subroutine does not return */
          native_sub_4327dc(uVar2,0);
        }
        plVar7 = *(long **)(lVar3 + 0x20);
        if (plVar7 != (long *)0x0) {
          lVar3 = *plVar7;
          if ((ulong)*(ushort *)(lVar3 + 0x12a) != 0) {
            uVar5 = 0;
            piVar6 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
            do {
              if (*(long *)(piVar6 + -2) ==
                  _MG_BlocksEngine2_Block_I_BE2_BlockSection_TypeInfo_12d4de8) {
                puVar1 = (undefined8 *)(lVar3 + (long)(*piVar6 + 1) * 0x10 + 0x138);
                goto LAB_0060689c;
              }
              uVar5 = uVar5 + 1;
              piVar6 = piVar6 + 4;
            } while (uVar5 < *(ushort *)(lVar3 + 0x12a));
          }
          puVar1 = (undefined8 *)
                   native_sub_3c9b34(plVar7,
                                     _MG_BlocksEngine2_Block_I_BE2_BlockSection_TypeInfo_12d4de8,1);
LAB_0060689c:
          plVar7 = (long *)(*(code *)*puVar1)(plVar7,puVar1[1]);
          if (plVar7 != (long *)0x0) {
            lVar3 = *plVar7;
            if ((ulong)*(ushort *)(lVar3 + 0x12a) != 0) {
              uVar5 = 0;
              piVar6 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
              do {
                if (*(long *)(piVar6 + -2) ==
                    _MG_BlocksEngine2_Block_I_BE2_BlockSectionHeader_TypeInfo_12d4df8) {
                  puVar1 = (undefined8 *)(lVar3 + (long)(*piVar6 + 2) * 0x10 + 0x138);
                  goto LAB_00606910;
                }
                uVar5 = uVar5 + 1;
                piVar6 = piVar6 + 4;
              } while (uVar5 < *(ushort *)(lVar3 + 0x12a));
            }
            puVar1 = (undefined8 *)
                     native_sub_3c9b34(plVar7,
                                       _MG_BlocksEngine2_Block_I_BE2_BlockSectionHeader_TypeInfo_12d4df8
                                       ,2);
LAB_00606910:
            lVar3 = (*(code *)*puVar1)(plVar7,puVar1[1]);
            if (lVar3 != 0) {
              iVar9 = (int)*(undefined8 *)(lVar3 + 0x18);
              if (iVar9 < 1) {
                return 0xffffffff;
              }
              if (iVar9 != 0) {
                uVar8 = 0;
                do {
                  plVar7 = *(long **)(lVar3 + (long)(int)uVar8 * 8 + 0x20);
                  if (plVar7 == (long *)0x0) goto LAB_00606a28;
                  lVar4 = *plVar7;
                  if ((ulong)*(ushort *)(lVar4 + 0x12a) != 0) {
                    uVar5 = 0;
                    piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
                    do {
                      if (*(long *)(piVar6 + -2) ==
                          _MG_BlocksEngine2_Block_I_BE2_BlockSectionHeaderInput_TypeInfo_12d4e00) {
                        puVar1 = (undefined8 *)(lVar4 + (long)*piVar6 * 0x10 + 0x138);
                        goto LAB_006069a8;
                      }
                      uVar5 = uVar5 + 1;
                      piVar6 = piVar6 + 4;
                    } while (uVar5 < *(ushort *)(lVar4 + 0x12a));
                  }
                  puVar1 = (undefined8 *)
                           native_sub_3c9b34(plVar7,
                                             _MG_BlocksEngine2_Block_I_BE2_BlockSectionHeaderInput_TypeInfo_12d4e00
                                             ,0);
LAB_006069a8:
                  lVar4 = (*(code *)*puVar1)(plVar7,puVar1[1]);
                  if ((lVar4 == 0) ||
                     (plVar7 = (long *)native_UnityEngine_Component__GetComponentInChildren_Animation__49db98
                                                 (lVar4,
                                                  _Method_UnityEngine_Component_GetComponentInChildren_TMP_Text____12e2c98
                                                 ), plVar7 == (long *)0x0)) goto LAB_00606a28;
                  uVar2 = (**(code **)(*plVar7 + 0x548))(plVar7,*(undefined8 *)(*plVar7 + 0x550));
                  uVar5 = native_System_String__op_Equality_afc18c(uVar2,param_2,0);
                  if ((uVar5 & 1) != 0) {
                    return uVar8;
                  }
                  uVar8 = uVar8 + 1;
                  if (iVar9 <= (int)uVar8) {
                    return 0xffffffff;
                  }
                } while (uVar8 < *(uint *)(lVar3 + 0x18));
              }
              goto LAB_006069fc;
            }
          }
        }
      }
    }
  }
LAB_00606a28:
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* BE2_Ins_DefineFunction$$OnDestroy @ 0x606a2c
 * void BE2_Ins_DefineFunction__OnDestroy (BE2_Ins_DefineFunction_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* BE2_Ins_DefineFunction$$OnDestroy
   void BE2_Ins_DefineFunction__OnDestroy (BE2_Ins_DefineFunction_o* __this, const MethodInfo*
   method); */

void native_BE2_Ins_DefineFunction__OnDestroy_606a2c(long param_1)

{
  int iVar1;
  undefined8 *puVar2;
  long *plVar3;
  undefined8 uVar4;
  long lVar5;
  long *plVar6;
  long lVar7;
  ulong uVar8;
  int *piVar9;
  
  lVar5 = native_MG_BlocksEngine2_Core_BE2_MainEventsManager__get_Instance_6001fc();
  if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
    native_sub_432810();
  }
  native_MG_BlocksEngine2_Core_BE2_EventsManager__TriggerEvent_57415c
            (lVar5,0xd,*(undefined8 *)(param_1 + 0x40),0);
  plVar6 = *(long **)(param_1 + 0x40);
  if ((bRam000000000133ea70 & 1) == 0) {
    native_sub_43273c(&MG_BlocksEngine2_Block_I_BE2_Block_TypeInfo_12d4dd8,0);
    native_sub_43273c(&MG_BlocksEngine2_Block_Instruction_I_BE2_InstructionBase_TypeInfo_12d4e30);
    native_sub_43273c(&MG_BlocksEngine2_Block_Instruction_I_BE2_Instruction_TypeInfo_12d4e28);
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    bRam000000000133ea70 = 1;
  }
  if (plVar6 == (long *)0x0) goto LAB_0056e438;
  lVar5 = *plVar6;
  if ((ulong)*(ushort *)(lVar5 + 0x12a) != 0) {
    uVar8 = 0;
    piVar9 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
    do {
      if (*(long *)(piVar9 + -2) == _MG_BlocksEngine2_Block_I_BE2_Block_TypeInfo_12d4dd8) {
        puVar2 = (undefined8 *)(lVar5 + (long)(*piVar9 + 1) * 0x10 + 0x138);
        goto LAB_0056e218;
      }
      uVar8 = uVar8 + 1;
      piVar9 = piVar9 + 4;
    } while (uVar8 < *(ushort *)(lVar5 + 0x12a));
  }
  puVar2 = (undefined8 *)
           native_sub_3c9b34(plVar6,_MG_BlocksEngine2_Block_I_BE2_Block_TypeInfo_12d4dd8,1);
LAB_0056e218:
  iVar1 = (*(code *)*puVar2)(plVar6,puVar2[1]);
  if (iVar1 == 4) {
    lVar5 = native_MG_BlocksEngine2_Core_BE2_ExecutionManager__get_Instance_564464();
    lVar7 = *plVar6;
    if ((ulong)*(ushort *)(lVar7 + 0x12a) != 0) {
      uVar8 = 0;
      piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == _MG_BlocksEngine2_Block_I_BE2_Block_TypeInfo_12d4dd8) {
          puVar2 = (undefined8 *)(lVar7 + (long)(*piVar9 + 4) * 0x10 + 0x138);
          goto LAB_0056e28c;
        }
        uVar8 = uVar8 + 1;
        piVar9 = piVar9 + 4;
      } while (uVar8 < *(ushort *)(lVar7 + 0x12a));
    }
    puVar2 = (undefined8 *)
             native_sub_3c9b34(plVar6,_MG_BlocksEngine2_Block_I_BE2_Block_TypeInfo_12d4dd8,4);
LAB_0056e28c:
    plVar3 = (long *)(*(code *)*puVar2)(plVar6,puVar2[1]);
    if (plVar3 == (long *)0x0) goto LAB_0056e438;
    lVar7 = *plVar3;
    if ((ulong)*(ushort *)(lVar7 + 0x12a) != 0) {
      uVar8 = 0;
      piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) ==
            _MG_BlocksEngine2_Block_Instruction_I_BE2_Instruction_TypeInfo_12d4e28) {
          puVar2 = (undefined8 *)(lVar7 + (long)*piVar9 * 0x10 + 0x138);
          goto LAB_0056e2fc;
        }
        uVar8 = uVar8 + 1;
        piVar9 = piVar9 + 4;
      } while (uVar8 < *(ushort *)(lVar7 + 0x12a));
    }
    puVar2 = (undefined8 *)
             native_sub_3c9b34(plVar3,
                               _MG_BlocksEngine2_Block_Instruction_I_BE2_Instruction_TypeInfo_12d4e28
                               ,0);
LAB_0056e2fc:
    plVar3 = (long *)(*(code *)*puVar2)(plVar3,puVar2[1]);
    if (plVar3 == (long *)0x0) goto LAB_0056e438;
    lVar7 = *plVar3;
    if ((ulong)*(ushort *)(lVar7 + 0x12a) != 0) {
      uVar8 = 0;
      piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) ==
            _MG_BlocksEngine2_Block_Instruction_I_BE2_InstructionBase_TypeInfo_12d4e30) {
          puVar2 = (undefined8 *)(lVar7 + (long)(*piVar9 + 4) * 0x10 + 0x138);
          goto LAB_0056e370;
        }
        uVar8 = uVar8 + 1;
        piVar9 = piVar9 + 4;
      } while (uVar8 < *(ushort *)(lVar7 + 0x12a));
    }
    puVar2 = (undefined8 *)
             native_sub_3c9b34(plVar3,
                               _MG_BlocksEngine2_Block_Instruction_I_BE2_InstructionBase_TypeInfo_12d4e30
                               ,4);
LAB_0056e370:
    uVar4 = (*(code *)*puVar2)(plVar3,puVar2[1]);
    if (lVar5 == 0) goto LAB_0056e438;
    native_MG_BlocksEngine2_Core_BE2_ExecutionManager__RemoveFromBlocksStackList_56e43c(lVar5,uVar4)
    ;
  }
  lVar5 = *plVar6;
  if ((ulong)*(ushort *)(lVar5 + 0x12a) != 0) {
    uVar8 = 0;
    piVar9 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
    do {
      if (*(long *)(piVar9 + -2) == _MG_BlocksEngine2_Block_I_BE2_Block_TypeInfo_12d4dd8) {
        puVar2 = (undefined8 *)(lVar5 + (long)*piVar9 * 0x10 + 0x138);
        goto LAB_0056e3e0;
      }
      uVar8 = uVar8 + 1;
      piVar9 = piVar9 + 4;
    } while (uVar8 < *(ushort *)(lVar5 + 0x12a));
  }
  puVar2 = (undefined8 *)
           native_sub_3c9b34(plVar6,_MG_BlocksEngine2_Block_I_BE2_Block_TypeInfo_12d4dd8,0);
LAB_0056e3e0:
  lVar5 = (*(code *)*puVar2)(plVar6,puVar2[1]);
  if (lVar5 != 0) {
    uVar4 = native_UnityEngine_Component__get_gameObject_8da66c(lVar5,0);
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
    (*pcRam0000000001341040)(0,uVar4);
    return;
  }
LAB_0056e438:
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* BE2_Ins_DefineFunction$$.ctor @ 0x606a6c
 * void BE2_Ins_DefineFunction___ctor (BE2_Ins_DefineFunction_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* BE2_Ins_DefineFunction$$.ctor
   void BE2_Ins_DefineFunction___ctor (BE2_Ins_DefineFunction_o* __this, const MethodInfo* method);
    */

undefined1  [16] native_BE2_Ins_DefineFunction___ctor_606a6c(ulong param_1)

{
  undefined8 uVar1;
  undefined1 auVar2 [16];
  
  if ((bRam000000000133ee0c & 1) == 0) {
    native_sub_43273c(&UnityEngine_Events_UnityEvent_TypeInfo_12d65d8);
    bRam000000000133ee0c = 1;
  }
  uVar1 = native_sub_432808(_UnityEngine_Events_UnityEvent_TypeInfo_12d65d8);
  native_UnityEngine_Events_UnityEvent___ctor_7733e0(uVar1,0);
  *(undefined8 *)(param_1 + 0x80) = uVar1;
  native_sub_4326e0((undefined8 *)(param_1 + 0x80),uVar1);
  *(undefined4 *)(param_1 + 0x60) = 100;
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


