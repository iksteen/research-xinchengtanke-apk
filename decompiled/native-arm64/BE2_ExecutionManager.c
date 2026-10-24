/* ARM64 IL2CPP native pseudocode from Ghidra.
 * Recovered implementation, not original C# source.
 * Function boundaries follow the IL2CPP method address table. */


/* MG_BlocksEngine2.Core.BE2_ExecutionManager$$get_ProgrammingEnvsList @ 0x58116c
 * System_Collections_Generic_List_I_BE2_ProgrammingEnv__o* MG_BlocksEngine2_Core_BE2_ExecutionManager__get_ProgrammingEnvsList (MG_BlocksEngine2_Core_BE2_ExecutionManager_o* __this, const MethodInfo* method); */

/* MG_BlocksEngine2.Core.BE2_ExecutionManager$$get_ProgrammingEnvsList
   System_Collections_Generic_List_I_BE2_ProgrammingEnv__o*
   MG_BlocksEngine2_Core_BE2_ExecutionManager__get_ProgrammingEnvsList
   (MG_BlocksEngine2_Core_BE2_ExecutionManager_o* __this, const MethodInfo* method); */

undefined8
native_MG_BlocksEngine2_Core_BE2_ExecutionManager__get_ProgrammingEnvsList_58116c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* MG_BlocksEngine2.Core.BE2_ExecutionManager$$get_Instance @ 0x564464
 * MG_BlocksEngine2_Core_BE2_ExecutionManager_o* MG_BlocksEngine2_Core_BE2_ExecutionManager__get_Instance (const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MG_BlocksEngine2.Core.BE2_ExecutionManager$$get_Instance
   MG_BlocksEngine2_Core_BE2_ExecutionManager_o*
   MG_BlocksEngine2_Core_BE2_ExecutionManager__get_Instance (const MethodInfo* method); */

undefined8 native_MG_BlocksEngine2_Core_BE2_ExecutionManager__get_Instance_564464(void)

{
  ulong uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  
  if ((bRam000000000133eafa & 1) == 0) {
    native_sub_43273c(&MG_BlocksEngine2_Core_BE2_ExecutionManager_TypeInfo_12d39c0);
    native_sub_43273c(&Method_UnityEngine_Object_FindObjectOfType_BE2_ExecutionManager____12e59f0);
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    bRam000000000133eafa = 1;
  }
  uVar3 = **(undefined8 **)(_MG_BlocksEngine2_Core_BE2_ExecutionManager_TypeInfo_12d39c0 + 0xb8);
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar1 = native_UnityEngine_Object__op_Equality_8e9a3c(uVar3,0,0);
  if ((uVar1 & 1) != 0) {
    if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    uVar3 = native_UnityEngine_Object__FindObjectOfType_BE2_DragDropManager__4a6274
                      (_Method_UnityEngine_Object_FindObjectOfType_BE2_ExecutionManager____12e59f0);
    puVar2 = *(undefined8 **)(_MG_BlocksEngine2_Core_BE2_ExecutionManager_TypeInfo_12d39c0 + 0xb8);
    *puVar2 = uVar3;
    native_sub_4326e0(puVar2,uVar3);
  }
  return **(undefined8 **)(_MG_BlocksEngine2_Core_BE2_ExecutionManager_TypeInfo_12d39c0 + 0xb8);
}



/* MG_BlocksEngine2.Core.BE2_ExecutionManager$$set_Instance @ 0x581174
 * void MG_BlocksEngine2_Core_BE2_ExecutionManager__set_Instance (MG_BlocksEngine2_Core_BE2_ExecutionManager_o* value, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MG_BlocksEngine2.Core.BE2_ExecutionManager$$set_Instance
   void MG_BlocksEngine2_Core_BE2_ExecutionManager__set_Instance
   (MG_BlocksEngine2_Core_BE2_ExecutionManager_o* value, const MethodInfo* method); */

void native_MG_BlocksEngine2_Core_BE2_ExecutionManager__set_Instance_581174(undefined8 param_1)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  
  if ((bRam000000000133eafb & 1) == 0) {
    native_sub_43273c(&MG_BlocksEngine2_Core_BE2_ExecutionManager_TypeInfo_12d39c0);
    bRam000000000133eafb = 1;
  }
  puVar4 = *(undefined8 **)(_MG_BlocksEngine2_Core_BE2_ExecutionManager_TypeInfo_12d39c0 + 0xb8);
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



/* MG_BlocksEngine2.Core.BE2_ExecutionManager$$AddToUpdate @ 0x5811c8
 * void MG_BlocksEngine2_Core_BE2_ExecutionManager__AddToUpdate (MG_BlocksEngine2_Core_BE2_ExecutionManager_o* __this, UnityEngine_Events_UnityAction_o* action, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MG_BlocksEngine2.Core.BE2_ExecutionManager$$AddToUpdate
   void MG_BlocksEngine2_Core_BE2_ExecutionManager__AddToUpdate
   (MG_BlocksEngine2_Core_BE2_ExecutionManager_o* __this, UnityEngine_Events_UnityAction_o* action,
   const MethodInfo* method); */

void native_MG_BlocksEngine2_Core_BE2_ExecutionManager__AddToUpdate_5811c8
               (long param_1,undefined8 param_2)

{
  ulong uVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  uint uVar5;
  long lVar6;
  
  if ((bRam000000000133eafc & 1) == 0) {
    native_sub_43273c(&Method_System_Collections_Generic_List_UnityAction__Add___12dd490);
    native_sub_43273c(&Method_System_Collections_Generic_List_UnityAction__Contains___12dd498);
    bRam000000000133eafc = 1;
  }
  if (*(long *)(param_1 + 0x40) != 0) {
    uVar1 = native_System_Collections_Generic_List_BE2_UI_SelectionPanel___Contains_d40ec8
                      (*(long *)(param_1 + 0x40),param_2,
                       _Method_System_Collections_Generic_List_UnityAction__Contains___12dd498);
    if ((uVar1 & 1) != 0) {
      return;
    }
    if (*(long *)(param_1 + 0x48) != 0) {
      native_UnityEngine_Events_UnityEvent__AddListener_7734bc(*(long *)(param_1 + 0x48),param_2,0);
      lVar2 = *(long *)(param_1 + 0x40);
      if (lVar2 != 0) {
        lVar6 = *(long *)(lVar2 + 0x10);
        if (lVar6 != 0) {
          uVar5 = *(uint *)(lVar2 + 0x18);
          if (uVar5 == *(uint *)(lVar6 + 0x18)) {
            (*(code *)**(undefined8 **)
                        (*(long *)(*(long *)(
                                            _Method_System_Collections_Generic_List_UnityAction__Add___12dd490
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
            puVar3 = (undefined8 *)(lVar6 + (long)(int)uVar5 * 8 + 0x20);
            *puVar3 = param_2;
            native_sub_4326e0(puVar3,param_2);
            *(int *)(lVar2 + 0x1c) = *(int *)(lVar2 + 0x1c) + 1;
            return;
          }
          uVar4 = native_sub_43283c();
                    /* WARNING: Subroutine does not return */
          native_sub_4327dc(uVar4,0);
        }
code_r0x00d40c5c:
                    /* WARNING: Subroutine does not return */
        native_sub_432810();
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* MG_BlocksEngine2.Core.BE2_ExecutionManager$$RemoveFromUpdate @ 0x58127c
 * void MG_BlocksEngine2_Core_BE2_ExecutionManager__RemoveFromUpdate (MG_BlocksEngine2_Core_BE2_ExecutionManager_o* __this, UnityEngine_Events_UnityAction_o* action, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MG_BlocksEngine2.Core.BE2_ExecutionManager$$RemoveFromUpdate
   void MG_BlocksEngine2_Core_BE2_ExecutionManager__RemoveFromUpdate
   (MG_BlocksEngine2_Core_BE2_ExecutionManager_o* __this, UnityEngine_Events_UnityAction_o* action,
   const MethodInfo* method); */

ulong native_MG_BlocksEngine2_Core_BE2_ExecutionManager__RemoveFromUpdate_58127c
                (long param_1,undefined8 param_2)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  long lVar4;
  
  if ((bRam000000000133eafd & 1) == 0) {
    native_sub_43273c(&Method_System_Collections_Generic_List_UnityAction__Contains___12dd498);
    native_sub_43273c(&Method_System_Collections_Generic_List_UnityAction__Remove___12dd4a0);
    bRam000000000133eafd = 1;
  }
  if (*(long *)(param_1 + 0x40) != 0) {
    uVar3 = native_System_Collections_Generic_List_BE2_UI_SelectionPanel___Contains_d40ec8
                      (*(long *)(param_1 + 0x40),param_2,
                       _Method_System_Collections_Generic_List_UnityAction__Contains___12dd498);
    if ((uVar3 & 1) == 0) {
      return uVar3;
    }
    if (*(long *)(param_1 + 0x48) != 0) {
      native_UnityEngine_Events_UnityEvent__RemoveListener_773574
                (*(long *)(param_1 + 0x48),param_2,0);
      lVar1 = _Method_System_Collections_Generic_List_UnityAction__Remove___12dd4a0;
      lVar4 = *(long *)(param_1 + 0x40);
      if (lVar4 != 0) {
        if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
          native_sub_432810(0,param_2);
        }
        iVar2 = (*(code *)**(undefined8 **)
                            (*(long *)(*(long *)(
                                                _Method_System_Collections_Generic_List_UnityAction__Remove___12dd4a0
                                                + 0x18) + 0xc0) + 0xd8))();
        if (-1 < iVar2) {
          (*(code *)**(undefined8 **)(*(long *)(*(long *)(lVar1 + 0x18) + 0xc0) + 0xe8))
                    (lVar4,iVar2);
        }
        return (ulong)(-1 < iVar2);
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* MG_BlocksEngine2.Core.BE2_ExecutionManager$$AddToLateUpdate @ 0x564550
 * void MG_BlocksEngine2_Core_BE2_ExecutionManager__AddToLateUpdate (MG_BlocksEngine2_Core_BE2_ExecutionManager_o* __this, UnityEngine_Events_UnityAction_o* action, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MG_BlocksEngine2.Core.BE2_ExecutionManager$$AddToLateUpdate
   void MG_BlocksEngine2_Core_BE2_ExecutionManager__AddToLateUpdate
   (MG_BlocksEngine2_Core_BE2_ExecutionManager_o* __this, UnityEngine_Events_UnityAction_o* action,
   const MethodInfo* method); */

void native_MG_BlocksEngine2_Core_BE2_ExecutionManager__AddToLateUpdate_564550
               (long param_1,undefined8 param_2)

{
  ulong uVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  uint uVar5;
  long lVar6;
  
  if ((bRam000000000133eafe & 1) == 0) {
    native_sub_43273c(&Method_System_Collections_Generic_List_UnityAction__Add___12dd490);
    native_sub_43273c(&Method_System_Collections_Generic_List_UnityAction__Contains___12dd498);
    bRam000000000133eafe = 1;
  }
  if (*(long *)(param_1 + 0x40) != 0) {
    uVar1 = native_System_Collections_Generic_List_BE2_UI_SelectionPanel___Contains_d40ec8
                      (*(long *)(param_1 + 0x40),param_2,
                       _Method_System_Collections_Generic_List_UnityAction__Contains___12dd498);
    if ((uVar1 & 1) != 0) {
      return;
    }
    if (*(long *)(param_1 + 0x50) != 0) {
      native_UnityEngine_Events_UnityEvent__AddListener_7734bc(*(long *)(param_1 + 0x50),param_2,0);
      lVar2 = *(long *)(param_1 + 0x40);
      if (lVar2 != 0) {
        lVar6 = *(long *)(lVar2 + 0x10);
        if (lVar6 != 0) {
          uVar5 = *(uint *)(lVar2 + 0x18);
          if (uVar5 == *(uint *)(lVar6 + 0x18)) {
            (*(code *)**(undefined8 **)
                        (*(long *)(*(long *)(
                                            _Method_System_Collections_Generic_List_UnityAction__Add___12dd490
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
            puVar3 = (undefined8 *)(lVar6 + (long)(int)uVar5 * 8 + 0x20);
            *puVar3 = param_2;
            native_sub_4326e0(puVar3,param_2);
            *(int *)(lVar2 + 0x1c) = *(int *)(lVar2 + 0x1c) + 1;
            return;
          }
          uVar4 = native_sub_43283c();
                    /* WARNING: Subroutine does not return */
          native_sub_4327dc(uVar4,0);
        }
code_r0x00d40c5c:
                    /* WARNING: Subroutine does not return */
        native_sub_432810();
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* MG_BlocksEngine2.Core.BE2_ExecutionManager$$RemoveFromLateUpdate @ 0x56469c
 * void MG_BlocksEngine2_Core_BE2_ExecutionManager__RemoveFromLateUpdate (MG_BlocksEngine2_Core_BE2_ExecutionManager_o* __this, UnityEngine_Events_UnityAction_o* action, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MG_BlocksEngine2.Core.BE2_ExecutionManager$$RemoveFromLateUpdate
   void MG_BlocksEngine2_Core_BE2_ExecutionManager__RemoveFromLateUpdate
   (MG_BlocksEngine2_Core_BE2_ExecutionManager_o* __this, UnityEngine_Events_UnityAction_o* action,
   const MethodInfo* method); */

ulong native_MG_BlocksEngine2_Core_BE2_ExecutionManager__RemoveFromLateUpdate_56469c
                (long param_1,undefined8 param_2)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  long lVar4;
  
  if ((bRam000000000133eaff & 1) == 0) {
    native_sub_43273c(&Method_System_Collections_Generic_List_UnityAction__Contains___12dd498);
    native_sub_43273c(&Method_System_Collections_Generic_List_UnityAction__Remove___12dd4a0);
    bRam000000000133eaff = 1;
  }
  if (*(long *)(param_1 + 0x40) != 0) {
    uVar3 = native_System_Collections_Generic_List_BE2_UI_SelectionPanel___Contains_d40ec8
                      (*(long *)(param_1 + 0x40),param_2,
                       _Method_System_Collections_Generic_List_UnityAction__Contains___12dd498);
    if ((uVar3 & 1) == 0) {
      return uVar3;
    }
    if (*(long *)(param_1 + 0x50) != 0) {
      native_UnityEngine_Events_UnityEvent__RemoveListener_773574
                (*(long *)(param_1 + 0x50),param_2,0);
      lVar1 = _Method_System_Collections_Generic_List_UnityAction__Remove___12dd4a0;
      lVar4 = *(long *)(param_1 + 0x40);
      if (lVar4 != 0) {
        if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
          native_sub_432810(0,param_2);
        }
        iVar2 = (*(code *)**(undefined8 **)
                            (*(long *)(*(long *)(
                                                _Method_System_Collections_Generic_List_UnityAction__Remove___12dd4a0
                                                + 0x18) + 0xc0) + 0xd8))();
        if (-1 < iVar2) {
          (*(code *)**(undefined8 **)(*(long *)(*(long *)(lVar1 + 0x18) + 0xc0) + 0xe8))
                    (lVar4,iVar2);
        }
        return (ulong)(-1 < iVar2);
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* MG_BlocksEngine2.Core.BE2_ExecutionManager$$Awake @ 0x581330
 * void MG_BlocksEngine2_Core_BE2_ExecutionManager__Awake (MG_BlocksEngine2_Core_BE2_ExecutionManager_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MG_BlocksEngine2.Core.BE2_ExecutionManager$$Awake
   void MG_BlocksEngine2_Core_BE2_ExecutionManager__Awake
   (MG_BlocksEngine2_Core_BE2_ExecutionManager_o* __this, const MethodInfo* method); */

void native_MG_BlocksEngine2_Core_BE2_ExecutionManager__Awake_581330(long param_1)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  undefined8 uVar4;
  long *plVar5;
  
  uVar4 = native_MG_BlocksEngine2_DragDrop_BE2_Pointer__get_Instance_6171d4(0);
  *(undefined8 *)(param_1 + 0x30) = uVar4;
  native_sub_4326e0();
  uVar4 = native_MG_BlocksEngine2_Core_BE2_InputManager__get_Instance_602b04(0);
  *(undefined8 *)(param_1 + 0x38) = uVar4;
  native_sub_4326e0(param_1 + 0x38);
  native_MG_BlocksEngine2_Core_BE2_ExecutionManager__UpdateTargetObjects_5813c4(param_1);
  native_MG_BlocksEngine2_Core_BE2_ExecutionManager__UpdateProgrammingEnvsList_581530(param_1);
  if (cRam000000000133eb0a == '\0') {
    native_sub_43273c(&MG_BlocksEngine2_Core_BE2_ExecutionManager_TypeInfo_12d39c0);
    cRam000000000133eb0a = '\x01';
  }
  plVar5 = *(long **)(_MG_BlocksEngine2_Core_BE2_ExecutionManager_TypeInfo_12d39c0 + 0xb8);
  *plVar5 = param_1;
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



/* MG_BlocksEngine2.Core.BE2_ExecutionManager$$Start @ 0x58169c
 * void MG_BlocksEngine2_Core_BE2_ExecutionManager__Start (MG_BlocksEngine2_Core_BE2_ExecutionManager_o* __this, const MethodInfo* method); */

/* WARNING: Removing unreachable block (ram,0x005797fc) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MG_BlocksEngine2.Core.BE2_ExecutionManager$$Start
   void MG_BlocksEngine2_Core_BE2_ExecutionManager__Start
   (MG_BlocksEngine2_Core_BE2_ExecutionManager_o* __this, const MethodInfo* method); */

void native_MG_BlocksEngine2_Core_BE2_ExecutionManager__Start_58169c(long param_1)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  long *plVar5;
  ulong uVar6;
  int *piVar7;
  undefined8 *puVar8;
  long lVar9;
  long *plVar10;
  uint uVar11;
  int iVar12;
  
  if ((bRam000000000133eb03 & 1) == 0) {
    native_sub_43273c(&Method_MG_BlocksEngine2_Utils_BE2_ArrayUtils_Add_I_BE2_BlocksStack____12e20b8
                     );
    native_sub_43273c(&Method_UnityEngine_Component_GetComponent_I_BE2_BlocksStack____12e2a40);
    native_sub_43273c(&MG_BlocksEngine2_Core_I_BE2_BlocksStack___TypeInfo_12d3238);
    native_sub_43273c(&MG_BlocksEngine2_Core_I_BE2_BlocksStack_TypeInfo_12d4e10);
    native_sub_43273c(&MG_BlocksEngine2_Environment_I_BE2_ProgrammingEnv_TypeInfo_12d4e38);
    native_sub_43273c(&
                      Method_System_Collections_Generic_List_I_BE2_ProgrammingEnv__get_Count___12dca00
                     );
    native_sub_43273c(&
                      Method_System_Collections_Generic_List_I_BE2_ProgrammingEnv__get_Item___12dca08
                     );
    native_sub_43273c(&UnityEngine_Events_UnityAction_TypeInfo_12d65d0);
    bRam000000000133eb03 = 1;
  }
  uVar3 = native_sub_432750(_MG_BlocksEngine2_Core_I_BE2_BlocksStack___TypeInfo_12d3238,0);
  puVar8 = (undefined8 *)(param_1 + 0x28);
  *puVar8 = uVar3;
  native_sub_4326e0(puVar8,uVar3);
  lVar9 = *(long *)(param_1 + 0x20);
  if (lVar9 != 0) {
    iVar1 = *(int *)(lVar9 + 0x18);
    if (iVar1 < 1) {
LAB_00581a58:
      lVar9 = native_MG_BlocksEngine2_Core_BE2_MainEventsManager__get_Instance_6001fc(0);
      if (lVar9 != 0) {
        if ((bRam000000000133eaf8 & 1) == 0) {
          native_sub_43273c(&
                            Method_System_Collections_Generic_Dictionary_BE2EventTypes__UnityEvent__TryGetValue___12d8ea8
                           );
          bRam000000000133eaf8 = 1;
        }
        if ((*(long *)(lVar9 + 0x10) != 0) &&
           (uVar6 = native_System_Collections_Generic_Dictionary_BE2EventTypes__UnityEvent___TryGetValue_c25318
                              (*(long *)(lVar9 + 0x10),6,&stack0xffffffffffffffd8,
                               _Method_System_Collections_Generic_Dictionary_BE2EventTypes__UnityEvent__TryGetValue___12d8ea8
                              ), (uVar6 & 1) == 0)) {
          return;
        }
                    /* WARNING: Subroutine does not return */
        native_sub_432810();
      }
    }
    else {
      uVar11 = 0;
      do {
        if (*(uint *)(lVar9 + 0x18) <= uVar11) {
          native_System_ThrowHelper__ThrowArgumentOutOfRangeException_9fe0f4(0);
        }
        plVar10 = *(long **)(*(long *)(lVar9 + 0x10) + (long)(int)uVar11 * 8 + 0x20);
        if (plVar10 == (long *)0x0) break;
        lVar9 = *plVar10;
        if ((ulong)*(ushort *)(lVar9 + 0x12a) != 0) {
          uVar6 = 0;
          piVar7 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
          do {
            if (*(long *)(piVar7 + -2) ==
                _MG_BlocksEngine2_Environment_I_BE2_ProgrammingEnv_TypeInfo_12d4e38) {
              puVar4 = (undefined8 *)(lVar9 + (long)*piVar7 * 0x10 + 0x138);
              goto LAB_00581810;
            }
            uVar6 = uVar6 + 1;
            piVar7 = piVar7 + 4;
          } while (uVar6 < *(ushort *)(lVar9 + 0x12a));
        }
        puVar4 = (undefined8 *)
                 native_sub_3c9b34(plVar10,
                                   _MG_BlocksEngine2_Environment_I_BE2_ProgrammingEnv_TypeInfo_12d4e38
                                   ,0);
LAB_00581810:
        lVar9 = (*(code *)*puVar4)(plVar10,puVar4[1]);
        if (lVar9 == 0) break;
        iVar2 = native_UnityEngine_Transform__get_childCount_772a64(lVar9,0);
        if (0 < iVar2) {
          iVar12 = 0;
          do {
            lVar9 = *plVar10;
            if ((ulong)*(ushort *)(lVar9 + 0x12a) != 0) {
              uVar6 = 0;
              piVar7 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
              do {
                if (*(long *)(piVar7 + -2) ==
                    _MG_BlocksEngine2_Environment_I_BE2_ProgrammingEnv_TypeInfo_12d4e38) {
                  puVar4 = (undefined8 *)(lVar9 + (long)*piVar7 * 0x10 + 0x138);
                  goto LAB_0058188c;
                }
                uVar6 = uVar6 + 1;
                piVar7 = piVar7 + 4;
              } while (uVar6 < *(ushort *)(lVar9 + 0x12a));
            }
            puVar4 = (undefined8 *)
                     native_sub_3c9b34(plVar10,
                                       _MG_BlocksEngine2_Environment_I_BE2_ProgrammingEnv_TypeInfo_12d4e38
                                       ,0);
LAB_0058188c:
            lVar9 = (*(code *)*puVar4)(plVar10,puVar4[1]);
            if ((lVar9 == 0) ||
               (lVar9 = native_UnityEngine_Transform__GetChild_772ef0(lVar9,iVar12,0), lVar9 == 0))
            goto LAB_00581a88;
            plVar5 = (long *)native_UnityEngine_Component__GetComponent_ActiveAnimation__49daec
                                       (lVar9,
                                        _Method_UnityEngine_Component_GetComponent_I_BE2_BlocksStack____12e2a40
                                       );
            if (plVar5 != (long *)0x0) {
              native_MG_BlocksEngine2_Utils_BE2_ArrayUtils__Add_GraphicRaycaster__49b428
                        (puVar8,plVar5,
                         _Method_MG_BlocksEngine2_Utils_BE2_ArrayUtils_Add_I_BE2_BlocksStack____12e20b8
                        );
              lVar9 = *plVar10;
              if ((ulong)*(ushort *)(lVar9 + 0x12a) != 0) {
                uVar6 = 0;
                piVar7 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar7 + -2) ==
                      _MG_BlocksEngine2_Environment_I_BE2_ProgrammingEnv_TypeInfo_12d4e38) {
                    puVar4 = (undefined8 *)(lVar9 + (long)(*piVar7 + 2) * 0x10 + 0x138);
                    goto LAB_0058192c;
                  }
                  uVar6 = uVar6 + 1;
                  piVar7 = piVar7 + 4;
                } while (uVar6 < *(ushort *)(lVar9 + 0x12a));
              }
              puVar4 = (undefined8 *)
                       native_sub_3c9b34(plVar10,
                                         _MG_BlocksEngine2_Environment_I_BE2_ProgrammingEnv_TypeInfo_12d4e38
                                         ,2);
LAB_0058192c:
              uVar3 = (*(code *)*puVar4)(plVar10,puVar4[1]);
              lVar9 = *plVar5;
              if ((ulong)*(ushort *)(lVar9 + 0x12a) != 0) {
                uVar6 = 0;
                piVar7 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar7 + -2) ==
                      _MG_BlocksEngine2_Core_I_BE2_BlocksStack_TypeInfo_12d4e10) {
                    puVar4 = (undefined8 *)(lVar9 + (long)(*piVar7 + 1) * 0x10 + 0x138);
                    goto LAB_00581994;
                  }
                  uVar6 = uVar6 + 1;
                  piVar7 = piVar7 + 4;
                } while (uVar6 < *(ushort *)(lVar9 + 0x12a));
              }
              puVar4 = (undefined8 *)
                       native_sub_3c9b34(plVar5,
                                         _MG_BlocksEngine2_Core_I_BE2_BlocksStack_TypeInfo_12d4e10,1
                                        );
LAB_00581994:
              (*(code *)*puVar4)(plVar5,uVar3,puVar4[1]);
              uVar3 = native_sub_432808(_UnityEngine_Events_UnityAction_TypeInfo_12d65d0);
              lVar9 = *plVar5;
              if ((ulong)*(ushort *)(lVar9 + 0x12a) != 0) {
                uVar6 = 0;
                piVar7 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar7 + -2) ==
                      _MG_BlocksEngine2_Core_I_BE2_BlocksStack_TypeInfo_12d4e10) {
                    lVar9 = lVar9 + (long)(*piVar7 + 0xd) * 0x10 + 0x138;
                    goto LAB_00581a10;
                  }
                  uVar6 = uVar6 + 1;
                  piVar7 = piVar7 + 4;
                } while (uVar6 < *(ushort *)(lVar9 + 0x12a));
              }
              lVar9 = native_sub_3c9b34(plVar5,
                                        _MG_BlocksEngine2_Core_I_BE2_BlocksStack_TypeInfo_12d4e10,
                                        0xd);
LAB_00581a10:
              native_UnityEngine_Events_UnityAction___ctor_773130
                        (uVar3,plVar5,*(undefined8 *)(lVar9 + 8),0);
              native_MG_BlocksEngine2_Core_BE2_ExecutionManager__AddToUpdate_5811c8(param_1,uVar3);
            }
            iVar12 = iVar12 + 1;
          } while (iVar12 < iVar2);
        }
        uVar11 = uVar11 + 1;
        if (iVar1 <= (int)uVar11) goto LAB_00581a58;
        lVar9 = *(long *)(param_1 + 0x20);
      } while (lVar9 != 0);
    }
  }
LAB_00581a88:
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* MG_BlocksEngine2.Core.BE2_ExecutionManager$$Update @ 0x581a8c
 * void MG_BlocksEngine2_Core_BE2_ExecutionManager__Update (MG_BlocksEngine2_Core_BE2_ExecutionManager_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MG_BlocksEngine2.Core.BE2_ExecutionManager$$Update
   void MG_BlocksEngine2_Core_BE2_ExecutionManager__Update
   (MG_BlocksEngine2_Core_BE2_ExecutionManager_o* __this, const MethodInfo* method); */

void native_MG_BlocksEngine2_Core_BE2_ExecutionManager__Update_581a8c(long param_1)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  int *piVar6;
  long *plVar7;
  long *plVar8;
  ulong uVar9;
  
  if ((bRam000000000133eb00 & 1) == 0) {
    native_sub_43273c(&MG_BlocksEngine2_Core_I_BE2_InputManager_TypeInfo_12d4e20);
    bRam000000000133eb00 = 1;
  }
  if (*(long *)(param_1 + 0x30) != 0) {
    native_MG_BlocksEngine2_DragDrop_BE2_Pointer__OnUpdate_617340(*(long *)(param_1 + 0x30),0);
    plVar7 = *(long **)(param_1 + 0x38);
    if (plVar7 != (long *)0x0) {
      lVar4 = *plVar7;
      if ((ulong)*(ushort *)(lVar4 + 0x12a) != 0) {
        uVar5 = 0;
        piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
        do {
          if (*(long *)(piVar6 + -2) == _MG_BlocksEngine2_Core_I_BE2_InputManager_TypeInfo_12d4e20)
          {
            puVar1 = (undefined8 *)(lVar4 + (long)*piVar6 * 0x10 + 0x138);
            goto LAB_00581b30;
          }
          uVar5 = uVar5 + 1;
          piVar6 = piVar6 + 4;
        } while (uVar5 < *(ushort *)(lVar4 + 0x12a));
      }
      puVar1 = (undefined8 *)
               native_sub_3c9b34(plVar7,_MG_BlocksEngine2_Core_I_BE2_InputManager_TypeInfo_12d4e20,0
                                );
LAB_00581b30:
      (*(code *)*puVar1)(plVar7,puVar1[1]);
      lVar4 = *(long *)(param_1 + 0x48);
      if (lVar4 != 0) {
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
        lVar2 = native_UnityEngine_Events_UnityEventBase__PrepareInvoke_773a28(lVar4);
        if (lVar2 != 0) {
          uVar5 = (ulong)*(uint *)(lVar2 + 0x18);
          if (0 < (int)*(uint *)(lVar2 + 0x18)) {
            plVar7 = (long *)(lVar4 + 0x28);
            lVar4 = 4;
            do {
              uVar9 = lVar4 - 4;
              if ((uVar5 & 0xffffffff) <= uVar9) {
                native_System_ThrowHelper__ThrowArgumentOutOfRangeException_9fe0f4(0);
              }
              plVar8 = *(long **)(*(long *)(lVar2 + 0x10) + lVar4 * 8);
              if (plVar8 == (long *)0x0) {
code_r0x00773944:
                if (*(uint *)(lVar2 + 0x18) <= uVar9) {
                  native_System_ThrowHelper__ThrowArgumentOutOfRangeException_9fe0f4(0);
                  plVar8 = *(long **)(*(long *)(lVar2 + 0x10) + lVar4 * 8);
                }
                if (plVar8 != (long *)0x0) {
                  if ((*(byte *)(_UnityEngine_Events_InvokableCall_TypeInfo_12d4f78 + 300) <=
                       *(byte *)(*plVar8 + 300)) &&
                     (*(long *)(*(long *)(*plVar8 + 200) +
                                (ulong)*(byte *)(_UnityEngine_Events_InvokableCall_TypeInfo_12d4f78
                                                + 300) * 8 + -8) ==
                      _UnityEngine_Events_InvokableCall_TypeInfo_12d4f78)) goto code_r0x007739ec;
                }
                if (*(uint *)(lVar2 + 0x18) <= uVar9) {
                  native_System_ThrowHelper__ThrowArgumentOutOfRangeException_9fe0f4(0);
                  plVar8 = *(long **)(*(long *)(lVar2 + 0x10) + lVar4 * 8);
                }
                if (*plVar7 == 0) {
                  lVar3 = native_sub_432750(_object___TypeInfo_12d32d8,0);
                  *plVar7 = lVar3;
                  native_sub_4326e0(plVar7,lVar3);
                }
                if (plVar8 == (long *)0x0) goto code_r0x00773a24;
                (**(code **)(*plVar8 + 0x178))(plVar8,*plVar7,*(undefined8 *)(*plVar8 + 0x180));
              }
              else {
                if ((*(byte *)(*plVar8 + 300) <
                     *(byte *)(_UnityEngine_Events_InvokableCall_TypeInfo_12d4f78 + 300)) ||
                   (*(long *)(*(long *)(*plVar8 + 200) +
                              (ulong)*(byte *)(_UnityEngine_Events_InvokableCall_TypeInfo_12d4f78 +
                                              300) * 8 + -8) !=
                    _UnityEngine_Events_InvokableCall_TypeInfo_12d4f78)) goto code_r0x00773944;
code_r0x007739ec:
                native_UnityEngine_Events_InvokableCall__Invoke_8df658(plVar8,0);
              }
              uVar5 = (ulong)*(int *)(lVar2 + 0x18);
              lVar3 = lVar4 + -3;
              lVar4 = lVar4 + 1;
            } while (lVar3 < (long)uVar5);
          }
          return;
        }
code_r0x00773a24:
                    /* WARNING: Subroutine does not return */
        native_sub_432810();
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* MG_BlocksEngine2.Core.BE2_ExecutionManager$$LateUpdate @ 0x581b58
 * void MG_BlocksEngine2_Core_BE2_ExecutionManager__LateUpdate (MG_BlocksEngine2_Core_BE2_ExecutionManager_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MG_BlocksEngine2.Core.BE2_ExecutionManager$$LateUpdate
   void MG_BlocksEngine2_Core_BE2_ExecutionManager__LateUpdate
   (MG_BlocksEngine2_Core_BE2_ExecutionManager_o* __this, const MethodInfo* method); */

void native_MG_BlocksEngine2_Core_BE2_ExecutionManager__LateUpdate_581b58(long param_1)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  long *plVar6;
  ulong uVar7;
  
  lVar2 = *(long *)(param_1 + 0x50);
  if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    native_sub_432810();
  }
  if ((bRam000000000133ff6d & 1) == 0) {
    native_sub_43273c(&UnityEngine_Events_InvokableCall_TypeInfo_12d4f78,0);
    native_sub_43273c(&Method_System_Collections_Generic_List_BaseInvokableCall__get_Count___12dc5d0
                     );
    native_sub_43273c(&Method_System_Collections_Generic_List_BaseInvokableCall__get_Item___12dc5d8)
    ;
    native_sub_43273c(&object___TypeInfo_12d32d8);
    bRam000000000133ff6d = 1;
  }
  lVar3 = native_UnityEngine_Events_UnityEventBase__PrepareInvoke_773a28(lVar2);
  if (lVar3 != 0) {
    uVar5 = (ulong)*(uint *)(lVar3 + 0x18);
    if (0 < (int)*(uint *)(lVar3 + 0x18)) {
      plVar1 = (long *)(lVar2 + 0x28);
      lVar2 = 4;
      do {
        uVar7 = lVar2 - 4;
        if ((uVar5 & 0xffffffff) <= uVar7) {
          native_System_ThrowHelper__ThrowArgumentOutOfRangeException_9fe0f4(0);
        }
        plVar6 = *(long **)(*(long *)(lVar3 + 0x10) + lVar2 * 8);
        if (plVar6 == (long *)0x0) {
code_r0x00773944:
          if (*(uint *)(lVar3 + 0x18) <= uVar7) {
            native_System_ThrowHelper__ThrowArgumentOutOfRangeException_9fe0f4(0);
            plVar6 = *(long **)(*(long *)(lVar3 + 0x10) + lVar2 * 8);
          }
          if (plVar6 != (long *)0x0) {
            if ((*(byte *)(_UnityEngine_Events_InvokableCall_TypeInfo_12d4f78 + 300) <=
                 *(byte *)(*plVar6 + 300)) &&
               (*(long *)(*(long *)(*plVar6 + 200) +
                          (ulong)*(byte *)(_UnityEngine_Events_InvokableCall_TypeInfo_12d4f78 + 300)
                          * 8 + -8) == _UnityEngine_Events_InvokableCall_TypeInfo_12d4f78))
            goto code_r0x007739ec;
          }
          if (*(uint *)(lVar3 + 0x18) <= uVar7) {
            native_System_ThrowHelper__ThrowArgumentOutOfRangeException_9fe0f4(0);
            plVar6 = *(long **)(*(long *)(lVar3 + 0x10) + lVar2 * 8);
          }
          if (*plVar1 == 0) {
            lVar4 = native_sub_432750(_object___TypeInfo_12d32d8,0);
            *plVar1 = lVar4;
            native_sub_4326e0(plVar1,lVar4);
          }
          if (plVar6 == (long *)0x0) goto code_r0x00773a24;
          (**(code **)(*plVar6 + 0x178))(plVar6,*plVar1,*(undefined8 *)(*plVar6 + 0x180));
        }
        else {
          if ((*(byte *)(*plVar6 + 300) <
               *(byte *)(_UnityEngine_Events_InvokableCall_TypeInfo_12d4f78 + 300)) ||
             (*(long *)(*(long *)(*plVar6 + 200) +
                        (ulong)*(byte *)(_UnityEngine_Events_InvokableCall_TypeInfo_12d4f78 + 300) *
                        8 + -8) != _UnityEngine_Events_InvokableCall_TypeInfo_12d4f78))
          goto code_r0x00773944;
code_r0x007739ec:
          native_UnityEngine_Events_InvokableCall__Invoke_8df658(plVar6,0);
        }
        uVar5 = (ulong)*(int *)(lVar3 + 0x18);
        lVar4 = lVar2 + -3;
        lVar2 = lVar2 + 1;
      } while (lVar4 < (long)uVar5);
    }
    return;
  }
code_r0x00773a24:
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* MG_BlocksEngine2.Core.BE2_ExecutionManager$$Play @ 0x581b74
 * void MG_BlocksEngine2_Core_BE2_ExecutionManager__Play (MG_BlocksEngine2_Core_BE2_ExecutionManager_o* __this, const MethodInfo* method); */

/* WARNING: Removing unreachable block (ram,0x007d0294) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MG_BlocksEngine2.Core.BE2_ExecutionManager$$Play
   void MG_BlocksEngine2_Core_BE2_ExecutionManager__Play
   (MG_BlocksEngine2_Core_BE2_ExecutionManager_o* __this, const MethodInfo* method); */

void native_MG_BlocksEngine2_Core_BE2_ExecutionManager__Play_581b74(void)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  ulong uVar5;
  int *piVar6;
  long *plVar7;
  
  if ((bRam000000000133eb01 & 1) == 0) {
    native_sub_43273c(&UnityEngine_EventSystems_EventSystem_TypeInfo_12d45c8);
    bRam000000000133eb01 = 1;
  }
  lVar1 = native_MG_BlocksEngine2_Core_BE2_MainEventsManager__get_Instance_6001fc(0);
  if (lVar1 != 0) {
    native_MG_BlocksEngine2_Core_BE2_EventsManager__TriggerEvent_579794(lVar1,0);
    if (((*(byte *)(_UnityEngine_EventSystems_EventSystem_TypeInfo_12d45c8 + 0x133) >> 2 & 1) != 0)
       && (*(int *)(_UnityEngine_EventSystems_EventSystem_TypeInfo_12d45c8 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    lVar1 = native_UnityEngine_EventSystems_EventSystem__get_current_7dca28(0);
    if (lVar1 != 0) {
      uVar2 = native_UnityEngine_EventSystems_EventSystem__get_baseEventDataCache_7dcdb0(lVar1,0,0);
      if ((bRam0000000001340358 & 1) == 0) {
        native_sub_43273c(&UnityEngine_Debug_TypeInfo_12d4338);
        native_sub_43273c(&
                          Method_UnityEngine_EventSystems_ExecuteEvents_Execute_IDeselectHandler____12e41b8
                         );
        native_sub_43273c(&
                          Method_UnityEngine_EventSystems_ExecuteEvents_Execute_ISelectHandler____12e4200
                         );
        native_sub_43273c(&UnityEngine_EventSystems_ExecuteEvents_TypeInfo_12d4600);
        native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
        native_sub_43273c(&StringLiteral_Attempting_to_select__12ec680);
        native_sub_43273c(&StringLiteral_while_already_selecting_an_object__12f6b18);
        bRam0000000001340358 = 1;
      }
      if (*(char *)(lVar1 + 0x41) == '\0') {
        puVar3 = (undefined8 *)(lVar1 + 0x38);
        uVar4 = *puVar3;
        *(undefined1 *)(lVar1 + 0x41) = 1;
        if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
           (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
          native_sub_4327ec();
        }
        uVar5 = native_UnityEngine_Object__op_Equality_8e9a3c(0,uVar4,0);
        if ((uVar5 & 1) == 0) {
          uVar4 = *puVar3;
          if (((*(byte *)(_UnityEngine_EventSystems_ExecuteEvents_TypeInfo_12d4600 + 0x133) >> 2 & 1
               ) != 0) &&
             (*(int *)(_UnityEngine_EventSystems_ExecuteEvents_TypeInfo_12d4600 + 0xe0) == 0)) {
            native_sub_4327ec();
          }
          if (cRam00000000013403d7 == '\0') {
            native_sub_43273c(&UnityEngine_EventSystems_ExecuteEvents_TypeInfo_12d4600);
            cRam00000000013403d7 = '\x01';
          }
          if (((*(byte *)(_UnityEngine_EventSystems_ExecuteEvents_TypeInfo_12d4600 + 0x133) >> 2 & 1
               ) != 0) &&
             (*(int *)(_UnityEngine_EventSystems_ExecuteEvents_TypeInfo_12d4600 + 0xe0) == 0)) {
            native_sub_4327ec();
          }
          native_UnityEngine_EventSystems_ExecuteEvents__Execute_IBeginDragHandler__4a0f98
                    (uVar4,uVar2,
                     *(undefined8 *)
                      (*(long *)(_UnityEngine_EventSystems_ExecuteEvents_TypeInfo_12d4600 + 0xb8) +
                      0x68),
                     _Method_UnityEngine_EventSystems_ExecuteEvents_Execute_IDeselectHandler____12e41b8
                    );
          *puVar3 = 0;
          native_sub_4326e0(puVar3,0);
          uVar4 = *puVar3;
          if (cRam00000000013403d8 == '\0') {
            native_sub_43273c(&UnityEngine_EventSystems_ExecuteEvents_TypeInfo_12d4600);
            cRam00000000013403d8 = '\x01';
          }
          if (((*(byte *)(_UnityEngine_EventSystems_ExecuteEvents_TypeInfo_12d4600 + 0x133) >> 2 & 1
               ) != 0) &&
             (*(int *)(_UnityEngine_EventSystems_ExecuteEvents_TypeInfo_12d4600 + 0xe0) == 0)) {
            native_sub_4327ec();
          }
          native_UnityEngine_EventSystems_ExecuteEvents__Execute_IBeginDragHandler__4a0f98
                    (uVar4,uVar2,
                     *(undefined8 *)
                      (*(long *)(_UnityEngine_EventSystems_ExecuteEvents_TypeInfo_12d4600 + 0xb8) +
                      0x60),
                     _Method_UnityEngine_EventSystems_ExecuteEvents_Execute_ISelectHandler____12e4200
                    );
        }
        *(undefined1 *)(lVar1 + 0x41) = 0;
        return;
      }
      uVar2 = native_System_String__Concat_afc654
                        (_StringLiteral_Attempting_to_select__12ec680,0,
                         _StringLiteral_while_already_selecting_an_object__12f6b18,0);
      if (((*(byte *)(_UnityEngine_Debug_TypeInfo_12d4338 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_UnityEngine_Debug_TypeInfo_12d4338 + 0xe0) == 0)) {
        native_sub_4327ec(_UnityEngine_Debug_TypeInfo_12d4338);
      }
      uVar4 = 0;
      if ((bRam0000000001340b52 & 1) == 0) {
        native_sub_43273c(&UnityEngine_Debug_TypeInfo_12d4338,0);
        native_sub_43273c(&UnityEngine_ILogger_TypeInfo_12d4c10);
        bRam0000000001340b52 = 1;
        uVar4 = extraout_x1;
      }
      if (((*(byte *)(_UnityEngine_Debug_TypeInfo_12d4338 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_UnityEngine_Debug_TypeInfo_12d4338 + 0xe0) == 0)) {
        native_sub_4327ec();
        uVar4 = extraout_x1_00;
      }
      if (cRam000000000134112a == '\0') {
        native_sub_43273c(&UnityEngine_Debug_TypeInfo_12d4338,uVar4);
        cRam000000000134112a = '\x01';
      }
      if (((*(byte *)(_UnityEngine_Debug_TypeInfo_12d4338 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_UnityEngine_Debug_TypeInfo_12d4338 + 0xe0) == 0)) {
        native_sub_4327ec();
      }
      plVar7 = *(long **)(*(long *)(_UnityEngine_Debug_TypeInfo_12d4338 + 0xb8) + 8);
      if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        native_sub_432810();
      }
      lVar1 = *plVar7;
      if ((ulong)*(ushort *)(lVar1 + 0x12a) != 0) {
        uVar5 = 0;
        piVar6 = (int *)(*(long *)(lVar1 + 0xb0) + 8);
        do {
          if (*(long *)(piVar6 + -2) == _UnityEngine_ILogger_TypeInfo_12d4c10) {
            puVar3 = (undefined8 *)(lVar1 + (long)(*piVar6 + 2) * 0x10 + 0x138);
            goto code_r0x008dc6d4;
          }
          uVar5 = uVar5 + 1;
          piVar6 = piVar6 + 4;
        } while (uVar5 < *(ushort *)(lVar1 + 0x12a));
      }
      puVar3 = (undefined8 *)native_sub_3c9b34(plVar7,_UnityEngine_ILogger_TypeInfo_12d4c10,2);
code_r0x008dc6d4:
                    /* WARNING: Could not recover jumptable at 0x008dc6f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)*puVar3)(plVar7,0,uVar2,puVar3[1]);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* MG_BlocksEngine2.Core.BE2_ExecutionManager$$Stop @ 0x581bf8
 * void MG_BlocksEngine2_Core_BE2_ExecutionManager__Stop (MG_BlocksEngine2_Core_BE2_ExecutionManager_o* __this, const MethodInfo* method); */

/* WARNING: Removing unreachable block (ram,0x007d0294) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MG_BlocksEngine2.Core.BE2_ExecutionManager$$Stop
   void MG_BlocksEngine2_Core_BE2_ExecutionManager__Stop
   (MG_BlocksEngine2_Core_BE2_ExecutionManager_o* __this, const MethodInfo* method); */

void native_MG_BlocksEngine2_Core_BE2_ExecutionManager__Stop_581bf8(void)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  ulong uVar5;
  int *piVar6;
  long *plVar7;
  
  if ((bRam000000000133eb02 & 1) == 0) {
    native_sub_43273c(&UnityEngine_EventSystems_EventSystem_TypeInfo_12d45c8);
    bRam000000000133eb02 = 1;
  }
  lVar1 = native_MG_BlocksEngine2_Core_BE2_MainEventsManager__get_Instance_6001fc(0);
  if (lVar1 != 0) {
    native_MG_BlocksEngine2_Core_BE2_EventsManager__TriggerEvent_579794(lVar1,1);
    if (((*(byte *)(_UnityEngine_EventSystems_EventSystem_TypeInfo_12d45c8 + 0x133) >> 2 & 1) != 0)
       && (*(int *)(_UnityEngine_EventSystems_EventSystem_TypeInfo_12d45c8 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    lVar1 = native_UnityEngine_EventSystems_EventSystem__get_current_7dca28(0);
    if (lVar1 != 0) {
      uVar2 = native_UnityEngine_EventSystems_EventSystem__get_baseEventDataCache_7dcdb0(lVar1,0,0);
      if ((bRam0000000001340358 & 1) == 0) {
        native_sub_43273c(&UnityEngine_Debug_TypeInfo_12d4338);
        native_sub_43273c(&
                          Method_UnityEngine_EventSystems_ExecuteEvents_Execute_IDeselectHandler____12e41b8
                         );
        native_sub_43273c(&
                          Method_UnityEngine_EventSystems_ExecuteEvents_Execute_ISelectHandler____12e4200
                         );
        native_sub_43273c(&UnityEngine_EventSystems_ExecuteEvents_TypeInfo_12d4600);
        native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
        native_sub_43273c(&StringLiteral_Attempting_to_select__12ec680);
        native_sub_43273c(&StringLiteral_while_already_selecting_an_object__12f6b18);
        bRam0000000001340358 = 1;
      }
      if (*(char *)(lVar1 + 0x41) == '\0') {
        puVar3 = (undefined8 *)(lVar1 + 0x38);
        uVar4 = *puVar3;
        *(undefined1 *)(lVar1 + 0x41) = 1;
        if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
           (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
          native_sub_4327ec();
        }
        uVar5 = native_UnityEngine_Object__op_Equality_8e9a3c(0,uVar4,0);
        if ((uVar5 & 1) == 0) {
          uVar4 = *puVar3;
          if (((*(byte *)(_UnityEngine_EventSystems_ExecuteEvents_TypeInfo_12d4600 + 0x133) >> 2 & 1
               ) != 0) &&
             (*(int *)(_UnityEngine_EventSystems_ExecuteEvents_TypeInfo_12d4600 + 0xe0) == 0)) {
            native_sub_4327ec();
          }
          if (cRam00000000013403d7 == '\0') {
            native_sub_43273c(&UnityEngine_EventSystems_ExecuteEvents_TypeInfo_12d4600);
            cRam00000000013403d7 = '\x01';
          }
          if (((*(byte *)(_UnityEngine_EventSystems_ExecuteEvents_TypeInfo_12d4600 + 0x133) >> 2 & 1
               ) != 0) &&
             (*(int *)(_UnityEngine_EventSystems_ExecuteEvents_TypeInfo_12d4600 + 0xe0) == 0)) {
            native_sub_4327ec();
          }
          native_UnityEngine_EventSystems_ExecuteEvents__Execute_IBeginDragHandler__4a0f98
                    (uVar4,uVar2,
                     *(undefined8 *)
                      (*(long *)(_UnityEngine_EventSystems_ExecuteEvents_TypeInfo_12d4600 + 0xb8) +
                      0x68),
                     _Method_UnityEngine_EventSystems_ExecuteEvents_Execute_IDeselectHandler____12e41b8
                    );
          *puVar3 = 0;
          native_sub_4326e0(puVar3,0);
          uVar4 = *puVar3;
          if (cRam00000000013403d8 == '\0') {
            native_sub_43273c(&UnityEngine_EventSystems_ExecuteEvents_TypeInfo_12d4600);
            cRam00000000013403d8 = '\x01';
          }
          if (((*(byte *)(_UnityEngine_EventSystems_ExecuteEvents_TypeInfo_12d4600 + 0x133) >> 2 & 1
               ) != 0) &&
             (*(int *)(_UnityEngine_EventSystems_ExecuteEvents_TypeInfo_12d4600 + 0xe0) == 0)) {
            native_sub_4327ec();
          }
          native_UnityEngine_EventSystems_ExecuteEvents__Execute_IBeginDragHandler__4a0f98
                    (uVar4,uVar2,
                     *(undefined8 *)
                      (*(long *)(_UnityEngine_EventSystems_ExecuteEvents_TypeInfo_12d4600 + 0xb8) +
                      0x60),
                     _Method_UnityEngine_EventSystems_ExecuteEvents_Execute_ISelectHandler____12e4200
                    );
        }
        *(undefined1 *)(lVar1 + 0x41) = 0;
        return;
      }
      uVar2 = native_System_String__Concat_afc654
                        (_StringLiteral_Attempting_to_select__12ec680,0,
                         _StringLiteral_while_already_selecting_an_object__12f6b18,0);
      if (((*(byte *)(_UnityEngine_Debug_TypeInfo_12d4338 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_UnityEngine_Debug_TypeInfo_12d4338 + 0xe0) == 0)) {
        native_sub_4327ec(_UnityEngine_Debug_TypeInfo_12d4338);
      }
      uVar4 = 0;
      if ((bRam0000000001340b52 & 1) == 0) {
        native_sub_43273c(&UnityEngine_Debug_TypeInfo_12d4338,0);
        native_sub_43273c(&UnityEngine_ILogger_TypeInfo_12d4c10);
        bRam0000000001340b52 = 1;
        uVar4 = extraout_x1;
      }
      if (((*(byte *)(_UnityEngine_Debug_TypeInfo_12d4338 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_UnityEngine_Debug_TypeInfo_12d4338 + 0xe0) == 0)) {
        native_sub_4327ec();
        uVar4 = extraout_x1_00;
      }
      if (cRam000000000134112a == '\0') {
        native_sub_43273c(&UnityEngine_Debug_TypeInfo_12d4338,uVar4);
        cRam000000000134112a = '\x01';
      }
      if (((*(byte *)(_UnityEngine_Debug_TypeInfo_12d4338 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_UnityEngine_Debug_TypeInfo_12d4338 + 0xe0) == 0)) {
        native_sub_4327ec();
      }
      plVar7 = *(long **)(*(long *)(_UnityEngine_Debug_TypeInfo_12d4338 + 0xb8) + 8);
      if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        native_sub_432810();
      }
      lVar1 = *plVar7;
      if ((ulong)*(ushort *)(lVar1 + 0x12a) != 0) {
        uVar5 = 0;
        piVar6 = (int *)(*(long *)(lVar1 + 0xb0) + 8);
        do {
          if (*(long *)(piVar6 + -2) == _UnityEngine_ILogger_TypeInfo_12d4c10) {
            puVar3 = (undefined8 *)(lVar1 + (long)(*piVar6 + 2) * 0x10 + 0x138);
            goto code_r0x008dc6d4;
          }
          uVar5 = uVar5 + 1;
          piVar6 = piVar6 + 4;
        } while (uVar5 < *(ushort *)(lVar1 + 0x12a));
      }
      puVar3 = (undefined8 *)native_sub_3c9b34(plVar7,_UnityEngine_ILogger_TypeInfo_12d4c10,2);
code_r0x008dc6d4:
                    /* WARNING: Could not recover jumptable at 0x008dc6f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)*puVar3)(plVar7,0,uVar2,puVar3[1]);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* MG_BlocksEngine2.Core.BE2_ExecutionManager$$UpdateBlocksStackList @ 0x5816a0
 * void MG_BlocksEngine2_Core_BE2_ExecutionManager__UpdateBlocksStackList (MG_BlocksEngine2_Core_BE2_ExecutionManager_o* __this, const MethodInfo* method); */

/* WARNING: Removing unreachable block (ram,0x005797fc) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MG_BlocksEngine2.Core.BE2_ExecutionManager$$UpdateBlocksStackList
   void MG_BlocksEngine2_Core_BE2_ExecutionManager__UpdateBlocksStackList
   (MG_BlocksEngine2_Core_BE2_ExecutionManager_o* __this, const MethodInfo* method); */

void native_MG_BlocksEngine2_Core_BE2_ExecutionManager__UpdateBlocksStackList_5816a0(long param_1)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  long *plVar5;
  ulong uVar6;
  int *piVar7;
  undefined8 *puVar8;
  long lVar9;
  long *plVar10;
  uint uVar11;
  int iVar12;
  
  if ((bRam000000000133eb03 & 1) == 0) {
    native_sub_43273c(&Method_MG_BlocksEngine2_Utils_BE2_ArrayUtils_Add_I_BE2_BlocksStack____12e20b8
                     );
    native_sub_43273c(&Method_UnityEngine_Component_GetComponent_I_BE2_BlocksStack____12e2a40);
    native_sub_43273c(&MG_BlocksEngine2_Core_I_BE2_BlocksStack___TypeInfo_12d3238);
    native_sub_43273c(&MG_BlocksEngine2_Core_I_BE2_BlocksStack_TypeInfo_12d4e10);
    native_sub_43273c(&MG_BlocksEngine2_Environment_I_BE2_ProgrammingEnv_TypeInfo_12d4e38);
    native_sub_43273c(&
                      Method_System_Collections_Generic_List_I_BE2_ProgrammingEnv__get_Count___12dca00
                     );
    native_sub_43273c(&
                      Method_System_Collections_Generic_List_I_BE2_ProgrammingEnv__get_Item___12dca08
                     );
    native_sub_43273c(&UnityEngine_Events_UnityAction_TypeInfo_12d65d0);
    bRam000000000133eb03 = 1;
  }
  uVar3 = native_sub_432750(_MG_BlocksEngine2_Core_I_BE2_BlocksStack___TypeInfo_12d3238,0);
  puVar8 = (undefined8 *)(param_1 + 0x28);
  *puVar8 = uVar3;
  native_sub_4326e0(puVar8,uVar3);
  lVar9 = *(long *)(param_1 + 0x20);
  if (lVar9 != 0) {
    iVar1 = *(int *)(lVar9 + 0x18);
    if (iVar1 < 1) {
LAB_00581a58:
      lVar9 = native_MG_BlocksEngine2_Core_BE2_MainEventsManager__get_Instance_6001fc(0);
      if (lVar9 != 0) {
        if ((bRam000000000133eaf8 & 1) == 0) {
          native_sub_43273c(&
                            Method_System_Collections_Generic_Dictionary_BE2EventTypes__UnityEvent__TryGetValue___12d8ea8
                           );
          bRam000000000133eaf8 = 1;
        }
        if ((*(long *)(lVar9 + 0x10) != 0) &&
           (uVar6 = native_System_Collections_Generic_Dictionary_BE2EventTypes__UnityEvent___TryGetValue_c25318
                              (*(long *)(lVar9 + 0x10),6,&stack0xffffffffffffffd8,
                               _Method_System_Collections_Generic_Dictionary_BE2EventTypes__UnityEvent__TryGetValue___12d8ea8
                              ), (uVar6 & 1) == 0)) {
          return;
        }
                    /* WARNING: Subroutine does not return */
        native_sub_432810();
      }
    }
    else {
      uVar11 = 0;
      do {
        if (*(uint *)(lVar9 + 0x18) <= uVar11) {
          native_System_ThrowHelper__ThrowArgumentOutOfRangeException_9fe0f4(0);
        }
        plVar10 = *(long **)(*(long *)(lVar9 + 0x10) + (long)(int)uVar11 * 8 + 0x20);
        if (plVar10 == (long *)0x0) break;
        lVar9 = *plVar10;
        if ((ulong)*(ushort *)(lVar9 + 0x12a) != 0) {
          uVar6 = 0;
          piVar7 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
          do {
            if (*(long *)(piVar7 + -2) ==
                _MG_BlocksEngine2_Environment_I_BE2_ProgrammingEnv_TypeInfo_12d4e38) {
              puVar4 = (undefined8 *)(lVar9 + (long)*piVar7 * 0x10 + 0x138);
              goto LAB_00581810;
            }
            uVar6 = uVar6 + 1;
            piVar7 = piVar7 + 4;
          } while (uVar6 < *(ushort *)(lVar9 + 0x12a));
        }
        puVar4 = (undefined8 *)
                 native_sub_3c9b34(plVar10,
                                   _MG_BlocksEngine2_Environment_I_BE2_ProgrammingEnv_TypeInfo_12d4e38
                                   ,0);
LAB_00581810:
        lVar9 = (*(code *)*puVar4)(plVar10,puVar4[1]);
        if (lVar9 == 0) break;
        iVar2 = native_UnityEngine_Transform__get_childCount_772a64(lVar9,0);
        if (0 < iVar2) {
          iVar12 = 0;
          do {
            lVar9 = *plVar10;
            if ((ulong)*(ushort *)(lVar9 + 0x12a) != 0) {
              uVar6 = 0;
              piVar7 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
              do {
                if (*(long *)(piVar7 + -2) ==
                    _MG_BlocksEngine2_Environment_I_BE2_ProgrammingEnv_TypeInfo_12d4e38) {
                  puVar4 = (undefined8 *)(lVar9 + (long)*piVar7 * 0x10 + 0x138);
                  goto LAB_0058188c;
                }
                uVar6 = uVar6 + 1;
                piVar7 = piVar7 + 4;
              } while (uVar6 < *(ushort *)(lVar9 + 0x12a));
            }
            puVar4 = (undefined8 *)
                     native_sub_3c9b34(plVar10,
                                       _MG_BlocksEngine2_Environment_I_BE2_ProgrammingEnv_TypeInfo_12d4e38
                                       ,0);
LAB_0058188c:
            lVar9 = (*(code *)*puVar4)(plVar10,puVar4[1]);
            if ((lVar9 == 0) ||
               (lVar9 = native_UnityEngine_Transform__GetChild_772ef0(lVar9,iVar12,0), lVar9 == 0))
            goto LAB_00581a88;
            plVar5 = (long *)native_UnityEngine_Component__GetComponent_ActiveAnimation__49daec
                                       (lVar9,
                                        _Method_UnityEngine_Component_GetComponent_I_BE2_BlocksStack____12e2a40
                                       );
            if (plVar5 != (long *)0x0) {
              native_MG_BlocksEngine2_Utils_BE2_ArrayUtils__Add_GraphicRaycaster__49b428
                        (puVar8,plVar5,
                         _Method_MG_BlocksEngine2_Utils_BE2_ArrayUtils_Add_I_BE2_BlocksStack____12e20b8
                        );
              lVar9 = *plVar10;
              if ((ulong)*(ushort *)(lVar9 + 0x12a) != 0) {
                uVar6 = 0;
                piVar7 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar7 + -2) ==
                      _MG_BlocksEngine2_Environment_I_BE2_ProgrammingEnv_TypeInfo_12d4e38) {
                    puVar4 = (undefined8 *)(lVar9 + (long)(*piVar7 + 2) * 0x10 + 0x138);
                    goto LAB_0058192c;
                  }
                  uVar6 = uVar6 + 1;
                  piVar7 = piVar7 + 4;
                } while (uVar6 < *(ushort *)(lVar9 + 0x12a));
              }
              puVar4 = (undefined8 *)
                       native_sub_3c9b34(plVar10,
                                         _MG_BlocksEngine2_Environment_I_BE2_ProgrammingEnv_TypeInfo_12d4e38
                                         ,2);
LAB_0058192c:
              uVar3 = (*(code *)*puVar4)(plVar10,puVar4[1]);
              lVar9 = *plVar5;
              if ((ulong)*(ushort *)(lVar9 + 0x12a) != 0) {
                uVar6 = 0;
                piVar7 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar7 + -2) ==
                      _MG_BlocksEngine2_Core_I_BE2_BlocksStack_TypeInfo_12d4e10) {
                    puVar4 = (undefined8 *)(lVar9 + (long)(*piVar7 + 1) * 0x10 + 0x138);
                    goto LAB_00581994;
                  }
                  uVar6 = uVar6 + 1;
                  piVar7 = piVar7 + 4;
                } while (uVar6 < *(ushort *)(lVar9 + 0x12a));
              }
              puVar4 = (undefined8 *)
                       native_sub_3c9b34(plVar5,
                                         _MG_BlocksEngine2_Core_I_BE2_BlocksStack_TypeInfo_12d4e10,1
                                        );
LAB_00581994:
              (*(code *)*puVar4)(plVar5,uVar3,puVar4[1]);
              uVar3 = native_sub_432808(_UnityEngine_Events_UnityAction_TypeInfo_12d65d0);
              lVar9 = *plVar5;
              if ((ulong)*(ushort *)(lVar9 + 0x12a) != 0) {
                uVar6 = 0;
                piVar7 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar7 + -2) ==
                      _MG_BlocksEngine2_Core_I_BE2_BlocksStack_TypeInfo_12d4e10) {
                    lVar9 = lVar9 + (long)(*piVar7 + 0xd) * 0x10 + 0x138;
                    goto LAB_00581a10;
                  }
                  uVar6 = uVar6 + 1;
                  piVar7 = piVar7 + 4;
                } while (uVar6 < *(ushort *)(lVar9 + 0x12a));
              }
              lVar9 = native_sub_3c9b34(plVar5,
                                        _MG_BlocksEngine2_Core_I_BE2_BlocksStack_TypeInfo_12d4e10,
                                        0xd);
LAB_00581a10:
              native_UnityEngine_Events_UnityAction___ctor_773130
                        (uVar3,plVar5,*(undefined8 *)(lVar9 + 8),0);
              native_MG_BlocksEngine2_Core_BE2_ExecutionManager__AddToUpdate_5811c8(param_1,uVar3);
            }
            iVar12 = iVar12 + 1;
          } while (iVar12 < iVar2);
        }
        uVar11 = uVar11 + 1;
        if (iVar1 <= (int)uVar11) goto LAB_00581a58;
        lVar9 = *(long *)(param_1 + 0x20);
      } while (lVar9 != 0);
    }
  }
LAB_00581a88:
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* MG_BlocksEngine2.Core.BE2_ExecutionManager$$AddToBlocksStackArray @ 0x56dd98
 * void MG_BlocksEngine2_Core_BE2_ExecutionManager__AddToBlocksStackArray (MG_BlocksEngine2_Core_BE2_ExecutionManager_o* __this, MG_BlocksEngine2_Core_I_BE2_BlocksStack_o* blocksStack, MG_BlocksEngine2_Environment_I_BE2_TargetObject_o* targetObject, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MG_BlocksEngine2.Core.BE2_ExecutionManager$$AddToBlocksStackArray
   void MG_BlocksEngine2_Core_BE2_ExecutionManager__AddToBlocksStackArray
   (MG_BlocksEngine2_Core_BE2_ExecutionManager_o* __this, MG_BlocksEngine2_Core_I_BE2_BlocksStack_o*
   blocksStack, MG_BlocksEngine2_Environment_I_BE2_TargetObject_o* targetObject, const MethodInfo*
   method); */

void native_MG_BlocksEngine2_Core_BE2_ExecutionManager__AddToBlocksStackArray_56dd98
               (long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  uint uVar4;
  long lVar5;
  ulong uVar6;
  int *piVar7;
  undefined8 *puVar8;
  long *plVar9;
  
  if ((bRam000000000133eb04 & 1) == 0) {
    native_sub_43273c(&Method_MG_BlocksEngine2_Utils_BE2_ArrayUtils_Add_I_BE2_BlocksStack____12e20b8
                     );
    native_sub_43273c(&
                      Method_MG_BlocksEngine2_Utils_BE2_ArrayUtils_FindAll_I_BE2_BlocksStack____12e20e8
                     );
    native_sub_43273c(&MG_BlocksEngine2_Core_I_BE2_BlocksStack_TypeInfo_12d4e10);
    native_sub_43273c(&Method_System_Predicate_I_BE2_BlocksStack___ctor___12ddaf0);
    native_sub_43273c(&System_Predicate_I_BE2_BlocksStack__TypeInfo_12d2d98);
    native_sub_43273c(&
                      Method_MG_BlocksEngine2_Core_BE2_ExecutionManager___c__DisplayClass25_0__AddToBlocksStackArray_b__0___12e9648
                     );
    native_sub_43273c(&
                      MG_BlocksEngine2_Core_BE2_ExecutionManager___c__DisplayClass25_0_TypeInfo_12d7018
                     );
    native_sub_43273c(&UnityEngine_Events_UnityAction_TypeInfo_12d65d0);
    bRam000000000133eb04 = 1;
  }
  lVar1 = native_sub_432808(
                           _MG_BlocksEngine2_Core_BE2_ExecutionManager___c__DisplayClass25_0_TypeInfo_12d7018
                           );
  native_MG_BlocksEngine2_Core_BE2_ExecutionManager___c__DisplayClass25_0___ctor_5479e4(lVar1,0);
  if (lVar1 != 0) {
    puVar8 = (undefined8 *)(lVar1 + 0x10);
    *puVar8 = param_2;
    native_sub_4326e0(puVar8,param_2);
    uVar2 = native_sub_432808(_System_Predicate_I_BE2_BlocksStack__TypeInfo_12d2d98);
    native_System_Predicate_BaseInvokableCall____ctor_ac31d4
              (uVar2,lVar1,
               _Method_MG_BlocksEngine2_Core_BE2_ExecutionManager___c__DisplayClass25_0__AddToBlocksStackArray_b__0___12e9648
               ,_Method_System_Predicate_I_BE2_BlocksStack___ctor___12ddaf0);
    lVar1 = native_MG_BlocksEngine2_Utils_BE2_ArrayUtils__FindAll_I_BE2_BlockSection__49b540
                      (param_1 + 0x28,uVar2,
                       _Method_MG_BlocksEngine2_Utils_BE2_ArrayUtils_FindAll_I_BE2_BlocksStack____12e20e8
                      );
    if (lVar1 != 0) {
      if (*(long *)(lVar1 + 0x18) != 0) {
        return;
      }
      native_MG_BlocksEngine2_Utils_BE2_ArrayUtils__Add_GraphicRaycaster__49b428
                (param_1 + 0x28,*puVar8,
                 _Method_MG_BlocksEngine2_Utils_BE2_ArrayUtils_Add_I_BE2_BlocksStack____12e20b8);
      plVar9 = (long *)*puVar8;
      if (plVar9 != (long *)0x0) {
        lVar1 = *plVar9;
        if ((ulong)*(ushort *)(lVar1 + 0x12a) != 0) {
          uVar6 = 0;
          piVar7 = (int *)(*(long *)(lVar1 + 0xb0) + 8);
          do {
            if (*(long *)(piVar7 + -2) == _MG_BlocksEngine2_Core_I_BE2_BlocksStack_TypeInfo_12d4e10)
            {
              puVar3 = (undefined8 *)(lVar1 + (long)(*piVar7 + 1) * 0x10 + 0x138);
              goto LAB_0056df50;
            }
            uVar6 = uVar6 + 1;
            piVar7 = piVar7 + 4;
          } while (uVar6 < *(ushort *)(lVar1 + 0x12a));
        }
        puVar3 = (undefined8 *)
                 native_sub_3c9b34(plVar9,_MG_BlocksEngine2_Core_I_BE2_BlocksStack_TypeInfo_12d4e10,
                                   1);
LAB_0056df50:
        (*(code *)*puVar3)(plVar9,param_3,puVar3[1]);
        lVar1 = native_MG_BlocksEngine2_Core_BE2_MainEventsManager__get_Instance_6001fc(0);
        if (lVar1 != 0) {
          native_MG_BlocksEngine2_Core_BE2_EventsManager__TriggerEvent_579794(lVar1,6);
          plVar9 = (long *)*puVar8;
          uVar2 = native_sub_432808(_UnityEngine_Events_UnityAction_TypeInfo_12d65d0);
          if (plVar9 != (long *)0x0) {
            lVar1 = *plVar9;
            if ((ulong)*(ushort *)(lVar1 + 0x12a) != 0) {
              uVar6 = 0;
              piVar7 = (int *)(*(long *)(lVar1 + 0xb0) + 8);
              do {
                if (*(long *)(piVar7 + -2) ==
                    _MG_BlocksEngine2_Core_I_BE2_BlocksStack_TypeInfo_12d4e10) {
                  lVar1 = lVar1 + (long)(*piVar7 + 0xd) * 0x10 + 0x138;
                  goto LAB_0056dfe8;
                }
                uVar6 = uVar6 + 1;
                piVar7 = piVar7 + 4;
              } while (uVar6 < *(ushort *)(lVar1 + 0x12a));
            }
            lVar1 = native_sub_3c9b34(plVar9,
                                      _MG_BlocksEngine2_Core_I_BE2_BlocksStack_TypeInfo_12d4e10,0xd)
            ;
LAB_0056dfe8:
            native_UnityEngine_Events_UnityAction___ctor_773130
                      (uVar2,plVar9,*(undefined8 *)(lVar1 + 8),0);
            if ((bRam000000000133eafc & 1) == 0) {
              native_sub_43273c(&Method_System_Collections_Generic_List_UnityAction__Add___12dd490);
              native_sub_43273c(&
                                Method_System_Collections_Generic_List_UnityAction__Contains___12dd498
                               );
              bRam000000000133eafc = 1;
            }
            if (*(long *)(param_1 + 0x40) != 0) {
              uVar6 = native_System_Collections_Generic_List_BE2_UI_SelectionPanel___Contains_d40ec8
                                (*(long *)(param_1 + 0x40),uVar2,
                                 _Method_System_Collections_Generic_List_UnityAction__Contains___12dd498
                                );
              if ((uVar6 & 1) != 0) {
                return;
              }
              if (*(long *)(param_1 + 0x48) != 0) {
                native_UnityEngine_Events_UnityEvent__AddListener_7734bc
                          (*(long *)(param_1 + 0x48),uVar2,0);
                lVar1 = *(long *)(param_1 + 0x40);
                if (lVar1 != 0) {
                  lVar5 = *(long *)(lVar1 + 0x10);
                  if (lVar5 != 0) {
                    uVar4 = *(uint *)(lVar1 + 0x18);
                    if (uVar4 == *(uint *)(lVar5 + 0x18)) {
                      (*(code *)**(undefined8 **)
                                  (*(long *)(*(long *)(
                                                  _Method_System_Collections_Generic_List_UnityAction__Add___12dd490
                                                  + 0x18) + 0xc0) + 0x60))(lVar1,uVar4 + 1);
                      uVar4 = *(uint *)(lVar1 + 0x18);
                      lVar5 = *(long *)(lVar1 + 0x10);
                      *(uint *)(lVar1 + 0x18) = uVar4 + 1;
                      if (lVar5 == 0) goto code_r0x00d40c5c;
                    }
                    else {
                      *(uint *)(lVar1 + 0x18) = uVar4 + 1;
                    }
                    if (uVar4 < *(uint *)(lVar5 + 0x18)) {
                      puVar8 = (undefined8 *)(lVar5 + (long)(int)uVar4 * 8 + 0x20);
                      *puVar8 = uVar2;
                      native_sub_4326e0(puVar8,uVar2);
                      *(int *)(lVar1 + 0x1c) = *(int *)(lVar1 + 0x1c) + 1;
                      return;
                    }
                    uVar2 = native_sub_43283c();
                    /* WARNING: Subroutine does not return */
                    native_sub_4327dc(uVar2,0);
                  }
code_r0x00d40c5c:
                    /* WARNING: Subroutine does not return */
                  native_sub_432810();
                }
              }
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



/* MG_BlocksEngine2.Core.BE2_ExecutionManager$$RemoveFromBlocksStackList @ 0x56e43c
 * void MG_BlocksEngine2_Core_BE2_ExecutionManager__RemoveFromBlocksStackList (MG_BlocksEngine2_Core_BE2_ExecutionManager_o* __this, MG_BlocksEngine2_Core_I_BE2_BlocksStack_o* blocksStack, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MG_BlocksEngine2.Core.BE2_ExecutionManager$$RemoveFromBlocksStackList
   void MG_BlocksEngine2_Core_BE2_ExecutionManager__RemoveFromBlocksStackList
   (MG_BlocksEngine2_Core_BE2_ExecutionManager_o* __this, MG_BlocksEngine2_Core_I_BE2_BlocksStack_o*
   blocksStack, const MethodInfo* method); */

ulong native_MG_BlocksEngine2_Core_BE2_ExecutionManager__RemoveFromBlocksStackList_56e43c
                (long param_1,undefined8 param_2)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  ulong uVar4;
  long lVar5;
  int *piVar6;
  long *plVar7;
  undefined8 *puVar8;
  
  if ((bRam000000000133eb05 & 1) == 0) {
    native_sub_43273c(&
                      Method_MG_BlocksEngine2_Utils_BE2_ArrayUtils_FindAll_I_BE2_BlocksStack____12e20e8
                     );
    native_sub_43273c(&
                      Method_MG_BlocksEngine2_Utils_BE2_ArrayUtils_Remove_I_BE2_BlocksStack____12e20f8
                     );
    native_sub_43273c(&MG_BlocksEngine2_Core_I_BE2_BlocksStack_TypeInfo_12d4e10);
    native_sub_43273c(&Method_System_Predicate_I_BE2_BlocksStack___ctor___12ddaf0);
    native_sub_43273c(&System_Predicate_I_BE2_BlocksStack__TypeInfo_12d2d98);
    native_sub_43273c(&
                      Method_MG_BlocksEngine2_Core_BE2_ExecutionManager___c__DisplayClass26_0__RemoveFromBlocksStackList_b__0___12e9650
                     );
    native_sub_43273c(&
                      MG_BlocksEngine2_Core_BE2_ExecutionManager___c__DisplayClass26_0_TypeInfo_12d7020
                     );
    native_sub_43273c(&UnityEngine_Events_UnityAction_TypeInfo_12d65d0);
    bRam000000000133eb05 = 1;
  }
  lVar2 = native_sub_432808(
                           _MG_BlocksEngine2_Core_BE2_ExecutionManager___c__DisplayClass26_0_TypeInfo_12d7020
                           );
  native_MG_BlocksEngine2_Core_BE2_ExecutionManager___c__DisplayClass26_0___ctor_5479fc(lVar2,0);
  if (lVar2 != 0) {
    puVar8 = (undefined8 *)(lVar2 + 0x10);
    *puVar8 = param_2;
    native_sub_4326e0(puVar8,param_2);
    uVar3 = native_sub_432808(_System_Predicate_I_BE2_BlocksStack__TypeInfo_12d2d98);
    native_System_Predicate_BaseInvokableCall____ctor_ac31d4
              (uVar3,lVar2,
               _Method_MG_BlocksEngine2_Core_BE2_ExecutionManager___c__DisplayClass26_0__RemoveFromBlocksStackList_b__0___12e9650
               ,_Method_System_Predicate_I_BE2_BlocksStack___ctor___12ddaf0);
    uVar4 = native_MG_BlocksEngine2_Utils_BE2_ArrayUtils__FindAll_I_BE2_BlockSection__49b540
                      (param_1 + 0x28,uVar3,
                       _Method_MG_BlocksEngine2_Utils_BE2_ArrayUtils_FindAll_I_BE2_BlocksStack____12e20e8
                      );
    if (uVar4 != 0) {
      if (*(long *)(uVar4 + 0x18) == 0) {
        return uVar4;
      }
      native_MG_BlocksEngine2_Utils_BE2_ArrayUtils__Remove_GraphicRaycaster__49b554
                (param_1 + 0x28,*puVar8,
                 _Method_MG_BlocksEngine2_Utils_BE2_ArrayUtils_Remove_I_BE2_BlocksStack____12e20f8);
      lVar2 = native_MG_BlocksEngine2_Core_BE2_MainEventsManager__get_Instance_6001fc(0);
      if (lVar2 != 0) {
        native_MG_BlocksEngine2_Core_BE2_EventsManager__TriggerEvent_579794(lVar2,6);
        plVar7 = (long *)*puVar8;
        uVar3 = native_sub_432808(_UnityEngine_Events_UnityAction_TypeInfo_12d65d0);
        if (plVar7 != (long *)0x0) {
          lVar2 = *plVar7;
          if ((ulong)*(ushort *)(lVar2 + 0x12a) != 0) {
            uVar4 = 0;
            piVar6 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
            do {
              if (*(long *)(piVar6 + -2) ==
                  _MG_BlocksEngine2_Core_I_BE2_BlocksStack_TypeInfo_12d4e10) {
                lVar2 = lVar2 + (long)(*piVar6 + 0xd) * 0x10 + 0x138;
                goto LAB_0056e618;
              }
              uVar4 = uVar4 + 1;
              piVar6 = piVar6 + 4;
            } while (uVar4 < *(ushort *)(lVar2 + 0x12a));
          }
          lVar2 = native_sub_3c9b34(plVar7,_MG_BlocksEngine2_Core_I_BE2_BlocksStack_TypeInfo_12d4e10
                                    ,0xd);
LAB_0056e618:
          native_UnityEngine_Events_UnityAction___ctor_773130
                    (uVar3,plVar7,*(undefined8 *)(lVar2 + 8),0);
          if ((bRam000000000133eafd & 1) == 0) {
            native_sub_43273c(&
                              Method_System_Collections_Generic_List_UnityAction__Contains___12dd498
                             );
            native_sub_43273c(&Method_System_Collections_Generic_List_UnityAction__Remove___12dd4a0)
            ;
            bRam000000000133eafd = 1;
          }
          if (*(long *)(param_1 + 0x40) != 0) {
            uVar4 = native_System_Collections_Generic_List_BE2_UI_SelectionPanel___Contains_d40ec8
                              (*(long *)(param_1 + 0x40),uVar3,
                               _Method_System_Collections_Generic_List_UnityAction__Contains___12dd498
                              );
            if ((uVar4 & 1) == 0) {
              return uVar4;
            }
            if (*(long *)(param_1 + 0x48) != 0) {
              native_UnityEngine_Events_UnityEvent__RemoveListener_773574
                        (*(long *)(param_1 + 0x48),uVar3,0);
              lVar2 = _Method_System_Collections_Generic_List_UnityAction__Remove___12dd4a0;
              lVar5 = *(long *)(param_1 + 0x40);
              if (lVar5 != 0) {
                if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
                  native_sub_432810(0,uVar3);
                }
                iVar1 = (*(code *)**(undefined8 **)
                                    (*(long *)(*(long *)(
                                                  _Method_System_Collections_Generic_List_UnityAction__Remove___12dd4a0
                                                  + 0x18) + 0xc0) + 0xd8))();
                if (-1 < iVar1) {
                  (*(code *)**(undefined8 **)(*(long *)(*(long *)(lVar2 + 0x18) + 0xc0) + 0xe8))
                            (lVar5,iVar1);
                }
                return (ulong)(-1 < iVar1);
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



/* MG_BlocksEngine2.Core.BE2_ExecutionManager$$UpdateTargetObjects @ 0x5813c4
 * void MG_BlocksEngine2_Core_BE2_ExecutionManager__UpdateTargetObjects (MG_BlocksEngine2_Core_BE2_ExecutionManager_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MG_BlocksEngine2.Core.BE2_ExecutionManager$$UpdateTargetObjects
   void MG_BlocksEngine2_Core_BE2_ExecutionManager__UpdateTargetObjects
   (MG_BlocksEngine2_Core_BE2_ExecutionManager_o* __this, const MethodInfo* method); */

void native_MG_BlocksEngine2_Core_BE2_ExecutionManager__UpdateTargetObjects_5813c4(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long extraout_x1;
  long lVar5;
  long *plVar6;
  int iVar7;
  uint uVar8;
  undefined1 auVar9 [16];
  
  if ((bRam000000000133eb06 & 1) == 0) {
    native_sub_43273c(&Method_UnityEngine_GameObject_GetComponent_I_BE2_TargetObject____12e49c8);
    native_sub_43273c(&Method_System_Collections_Generic_List_I_BE2_TargetObject__Add___12dca48);
    native_sub_43273c(&Method_System_Collections_Generic_List_I_BE2_TargetObject___ctor___12dca40);
    native_sub_43273c(&System_Collections_Generic_List_I_BE2_TargetObject__TypeInfo_12d2a90);
    native_sub_43273c(&Method_UnityEngine_Object_FindObjectsOfType_GameObject____12e5a38);
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    bRam000000000133eb06 = 1;
  }
  lVar1 = native_sub_432808(_System_Collections_Generic_List_I_BE2_TargetObject__TypeInfo_12d2a90);
  native_System_Collections_Generic_List_XmlEventCache_XmlEvent______ctor_d3ff44
            (lVar1,_Method_System_Collections_Generic_List_I_BE2_TargetObject___ctor___12dca40);
  plVar6 = (long *)(param_1 + 0x18);
  *plVar6 = lVar1;
  native_sub_4326e0(plVar6,lVar1);
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  auVar9 = native_UnityEngine_Object__FindObjectsOfType_BE2_Canvas__4a6368
                     (_Method_UnityEngine_Object_FindObjectsOfType_GameObject____12e5a38);
  lVar1 = auVar9._8_8_;
  lVar2 = auVar9._0_8_;
  lVar5 = lVar1;
  if (lVar2 == 0) {
LAB_0058152c:
                    /* WARNING: Subroutine does not return */
    native_sub_432810(0,lVar5);
  }
  iVar7 = (int)*(undefined8 *)(lVar2 + 0x18);
  if (iVar7 < 1) {
    return;
  }
  if (iVar7 != 0) {
    uVar8 = 0;
    do {
      lVar3 = *(long *)(lVar2 + (long)(int)uVar8 * 8 + 0x20);
      lVar5 = lVar1;
      if (lVar3 == 0) goto LAB_0058152c;
      auVar9 = native_UnityEngine_GameObject__GetComponent_BE2_BlockSectionHeader_Custom__4a2214
                         (lVar3,
                          _Method_UnityEngine_GameObject_GetComponent_I_BE2_TargetObject____12e49c8)
      ;
      lVar1 = auVar9._8_8_;
      lVar5 = auVar9._0_8_;
      if (lVar5 != 0) {
        if (*plVar6 == 0) goto LAB_0058152c;
        native_System_Collections_Generic_List_int_____Add_d40c00
                  (*plVar6,lVar5,
                   _Method_System_Collections_Generic_List_I_BE2_TargetObject__Add___12dca48);
        lVar1 = extraout_x1;
      }
      uVar8 = uVar8 + 1;
      if (iVar7 <= (int)uVar8) {
        return;
      }
    } while (uVar8 < *(uint *)(lVar2 + 0x18));
  }
  uVar4 = native_sub_43283c();
                    /* WARNING: Subroutine does not return */
  native_sub_4327dc(uVar4,0);
}



/* MG_BlocksEngine2.Core.BE2_ExecutionManager$$UpdateProgrammingEnvsList @ 0x581530
 * void MG_BlocksEngine2_Core_BE2_ExecutionManager__UpdateProgrammingEnvsList (MG_BlocksEngine2_Core_BE2_ExecutionManager_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MG_BlocksEngine2.Core.BE2_ExecutionManager$$UpdateProgrammingEnvsList
   void MG_BlocksEngine2_Core_BE2_ExecutionManager__UpdateProgrammingEnvsList
   (MG_BlocksEngine2_Core_BE2_ExecutionManager_o* __this, const MethodInfo* method); */

void native_MG_BlocksEngine2_Core_BE2_ExecutionManager__UpdateProgrammingEnvsList_581530
               (long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long extraout_x1;
  long lVar5;
  long *plVar6;
  int iVar7;
  uint uVar8;
  undefined1 auVar9 [16];
  
  if ((bRam000000000133eb07 & 1) == 0) {
    native_sub_43273c(&Method_UnityEngine_GameObject_GetComponent_I_BE2_ProgrammingEnv____12e49b8);
    native_sub_43273c(&Method_System_Collections_Generic_List_I_BE2_ProgrammingEnv__Add___12dc9e8);
    native_sub_43273c(&Method_System_Collections_Generic_List_I_BE2_ProgrammingEnv___ctor___12dc9e0)
    ;
    native_sub_43273c(&System_Collections_Generic_List_I_BE2_ProgrammingEnv__TypeInfo_12d2a80);
    native_sub_43273c(&Method_UnityEngine_Object_FindObjectsOfType_GameObject____12e5a38);
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    bRam000000000133eb07 = 1;
  }
  lVar1 = native_sub_432808(_System_Collections_Generic_List_I_BE2_ProgrammingEnv__TypeInfo_12d2a80)
  ;
  native_System_Collections_Generic_List_XmlEventCache_XmlEvent______ctor_d3ff44
            (lVar1,_Method_System_Collections_Generic_List_I_BE2_ProgrammingEnv___ctor___12dc9e0);
  plVar6 = (long *)(param_1 + 0x20);
  *plVar6 = lVar1;
  native_sub_4326e0(plVar6,lVar1);
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  auVar9 = native_UnityEngine_Object__FindObjectsOfType_BE2_Canvas__4a6368
                     (_Method_UnityEngine_Object_FindObjectsOfType_GameObject____12e5a38);
  lVar1 = auVar9._8_8_;
  lVar2 = auVar9._0_8_;
  lVar5 = lVar1;
  if (lVar2 == 0) {
LAB_00581698:
                    /* WARNING: Subroutine does not return */
    native_sub_432810(0,lVar5);
  }
  iVar7 = (int)*(undefined8 *)(lVar2 + 0x18);
  if (iVar7 < 1) {
    return;
  }
  if (iVar7 != 0) {
    uVar8 = 0;
    do {
      lVar3 = *(long *)(lVar2 + (long)(int)uVar8 * 8 + 0x20);
      lVar5 = lVar1;
      if (lVar3 == 0) goto LAB_00581698;
      auVar9 = native_UnityEngine_GameObject__GetComponent_BE2_BlockSectionHeader_Custom__4a2214
                         (lVar3,
                          _Method_UnityEngine_GameObject_GetComponent_I_BE2_ProgrammingEnv____12e49b8
                         );
      lVar1 = auVar9._8_8_;
      lVar5 = auVar9._0_8_;
      if (lVar5 != 0) {
        if (*plVar6 == 0) goto LAB_00581698;
        native_System_Collections_Generic_List_int_____Add_d40c00
                  (*plVar6,lVar5,
                   _Method_System_Collections_Generic_List_I_BE2_ProgrammingEnv__Add___12dc9e8);
        lVar1 = extraout_x1;
      }
      uVar8 = uVar8 + 1;
      if (iVar7 <= (int)uVar8) {
        return;
      }
    } while (uVar8 < *(uint *)(lVar2 + 0x18));
  }
  uVar4 = native_sub_43283c();
                    /* WARNING: Subroutine does not return */
  native_sub_4327dc(uVar4,0);
}



/* MG_BlocksEngine2.Core.BE2_ExecutionManager$$.ctor @ 0x581c7c
 * void MG_BlocksEngine2_Core_BE2_ExecutionManager___ctor (MG_BlocksEngine2_Core_BE2_ExecutionManager_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MG_BlocksEngine2.Core.BE2_ExecutionManager$$.ctor
   void MG_BlocksEngine2_Core_BE2_ExecutionManager___ctor
   (MG_BlocksEngine2_Core_BE2_ExecutionManager_o* __this, const MethodInfo* method); */

undefined1  [16] native_MG_BlocksEngine2_Core_BE2_ExecutionManager___ctor_581c7c(ulong param_1)

{
  undefined8 uVar1;
  undefined1 auVar2 [16];
  
  if ((bRam000000000133eb08 & 1) == 0) {
    native_sub_43273c(&Method_System_Collections_Generic_List_UnityAction___ctor___12dd488);
    native_sub_43273c(&System_Collections_Generic_List_UnityAction__TypeInfo_12d2c58);
    native_sub_43273c(&UnityEngine_Events_UnityEvent_TypeInfo_12d65d8);
    bRam000000000133eb08 = 1;
  }
  uVar1 = native_sub_432808(_System_Collections_Generic_List_UnityAction__TypeInfo_12d2c58);
  native_System_Collections_Generic_List_XmlEventCache_XmlEvent______ctor_d3ff44
            (uVar1,_Method_System_Collections_Generic_List_UnityAction___ctor___12dd488);
  *(undefined8 *)(param_1 + 0x40) = uVar1;
  native_sub_4326e0((undefined8 *)(param_1 + 0x40),uVar1);
  uVar1 = native_sub_432808(_UnityEngine_Events_UnityEvent_TypeInfo_12d65d8);
  native_UnityEngine_Events_UnityEvent___ctor_7733e0(uVar1,0);
  *(undefined8 *)(param_1 + 0x48) = uVar1;
  native_sub_4326e0(param_1 + 0x48,uVar1);
  uVar1 = native_sub_432808(_UnityEngine_Events_UnityEvent_TypeInfo_12d65d8);
  native_UnityEngine_Events_UnityEvent___ctor_7733e0(uVar1,0);
  *(undefined8 *)(param_1 + 0x50) = uVar1;
  native_sub_4326e0(param_1 + 0x50,uVar1);
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


