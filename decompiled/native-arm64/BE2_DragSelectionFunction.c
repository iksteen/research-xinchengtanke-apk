/* ARM64 IL2CPP native pseudocode from Ghidra.
 * Recovered implementation, not original C# source.
 * Function boundaries follow the IL2CPP method address table. */


/* MG_BlocksEngine2.DragDrop.BE2_DragSelectionFunction$$get__dragDropManager @ 0x57d214
 * MG_BlocksEngine2_DragDrop_BE2_DragDropManager_o* MG_BlocksEngine2_DragDrop_BE2_DragSelectionFunction__get__dragDropManager (MG_BlocksEngine2_DragDrop_BE2_DragSelectionFunction_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MG_BlocksEngine2.DragDrop.BE2_DragSelectionFunction$$get__dragDropManager
   MG_BlocksEngine2_DragDrop_BE2_DragDropManager_o*
   MG_BlocksEngine2_DragDrop_BE2_DragSelectionFunction__get__dragDropManager
   (MG_BlocksEngine2_DragDrop_BE2_DragSelectionFunction_o* __this, const MethodInfo* method); */

undefined8
native_MG_BlocksEngine2_DragDrop_BE2_DragSelectionFunction__get__dragDropManager_57d214(void)

{
  ulong uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  
  if ((bRam000000000133eaac & 1) == 0) {
    native_sub_43273c(&MG_BlocksEngine2_DragDrop_BE2_DragDropManager_TypeInfo_12d39a0);
    native_sub_43273c(&Method_UnityEngine_Object_FindObjectOfType_BE2_DragDropManager____12e59e8);
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    bRam000000000133eaac = 1;
  }
  uVar3 = **(undefined8 **)(_MG_BlocksEngine2_DragDrop_BE2_DragDropManager_TypeInfo_12d39a0 + 0xb8);
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
                      (_Method_UnityEngine_Object_FindObjectOfType_BE2_DragDropManager____12e59e8);
    puVar2 = *(undefined8 **)
              (_MG_BlocksEngine2_DragDrop_BE2_DragDropManager_TypeInfo_12d39a0 + 0xb8);
    *puVar2 = uVar3;
    native_sub_4326e0(puVar2,uVar3);
  }
  return **(undefined8 **)(_MG_BlocksEngine2_DragDrop_BE2_DragDropManager_TypeInfo_12d39a0 + 0xb8);
}



/* MG_BlocksEngine2.DragDrop.BE2_DragSelectionFunction$$get_Transform @ 0x57d218
 * UnityEngine_Transform_o* MG_BlocksEngine2_DragDrop_BE2_DragSelectionFunction__get_Transform (MG_BlocksEngine2_DragDrop_BE2_DragSelectionFunction_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MG_BlocksEngine2.DragDrop.BE2_DragSelectionFunction$$get_Transform
   UnityEngine_Transform_o* MG_BlocksEngine2_DragDrop_BE2_DragSelectionFunction__get_Transform
   (MG_BlocksEngine2_DragDrop_BE2_DragSelectionFunction_o* __this, const MethodInfo* method); */

undefined8
native_MG_BlocksEngine2_DragDrop_BE2_DragSelectionFunction__get_Transform_57d218(long param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  
  if ((bRam000000000133eacd & 1) == 0) {
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    bRam000000000133eacd = 1;
  }
  uVar2 = *(undefined8 *)(param_1 + 0x38);
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar1 = native_UnityEngine_Object__op_Implicit_8e1b98(uVar2,0);
  if ((uVar1 & 1) != 0) {
    return *(undefined8 *)(param_1 + 0x38);
  }
  if (pcRam0000000001340ab8 == (code *)0x0) {
    pcRam0000000001340ab8 = (code *)native_sub_4326f0(&UNK_00e2d0e1);
  }
                    /* WARNING: Could not recover jumptable at 0x008da668. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar2 = (*pcRam0000000001340ab8)(param_1);
  return uVar2;
}



/* MG_BlocksEngine2.DragDrop.BE2_DragSelectionFunction$$get_RayPoint @ 0x57d2a0
 * UnityEngine_Vector2_o MG_BlocksEngine2_DragDrop_BE2_DragSelectionFunction__get_RayPoint (MG_BlocksEngine2_DragDrop_BE2_DragSelectionFunction_o* __this, const MethodInfo* method); */

/* MG_BlocksEngine2.DragDrop.BE2_DragSelectionFunction$$get_RayPoint
   UnityEngine_Vector2_o MG_BlocksEngine2_DragDrop_BE2_DragSelectionFunction__get_RayPoint
   (MG_BlocksEngine2_DragDrop_BE2_DragSelectionFunction_o* __this, const MethodInfo* method); */

undefined4
native_MG_BlocksEngine2_DragDrop_BE2_DragSelectionFunction__get_RayPoint_57d2a0(long param_1)

{
  long lVar1;
  undefined8 uStack_30;
  undefined4 uStack_28;
  
  lVar1 = *(long *)(param_1 + 0x18);
  if (lVar1 != 0) {
    uStack_28 = 0;
    uStack_30 = 0;
    if (pcRam000000000133fed0 == (code *)0x0) {
      pcRam000000000133fed0 = (code *)native_sub_4326f0(&UNK_00e2acd5,0);
    }
    (*pcRam000000000133fed0)(lVar1,&uStack_30);
    return (undefined4)uStack_30;
  }
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* MG_BlocksEngine2.DragDrop.BE2_DragSelectionFunction$$get_Block @ 0x57d2bc
 * MG_BlocksEngine2_Block_I_BE2_Block_o* MG_BlocksEngine2_DragDrop_BE2_DragSelectionFunction__get_Block (MG_BlocksEngine2_DragDrop_BE2_DragSelectionFunction_o* __this, const MethodInfo* method); */

/* MG_BlocksEngine2.DragDrop.BE2_DragSelectionFunction$$get_Block
   MG_BlocksEngine2_Block_I_BE2_Block_o*
   MG_BlocksEngine2_DragDrop_BE2_DragSelectionFunction__get_Block
   (MG_BlocksEngine2_DragDrop_BE2_DragSelectionFunction_o* __this, const MethodInfo* method); */

undefined8 native_MG_BlocksEngine2_DragDrop_BE2_DragSelectionFunction__get_Block_57d2bc(void)

{
  return 0;
}



/* MG_BlocksEngine2.DragDrop.BE2_DragSelectionFunction$$Awake @ 0x57d2c4
 * void MG_BlocksEngine2_DragDrop_BE2_DragSelectionFunction__Awake (MG_BlocksEngine2_DragDrop_BE2_DragSelectionFunction_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MG_BlocksEngine2.DragDrop.BE2_DragSelectionFunction$$Awake
   void MG_BlocksEngine2_DragDrop_BE2_DragSelectionFunction__Awake
   (MG_BlocksEngine2_DragDrop_BE2_DragSelectionFunction_o* __this, const MethodInfo* method); */

void native_MG_BlocksEngine2_DragDrop_BE2_DragSelectionFunction__Awake_57d2c4(long param_1)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  undefined8 uVar4;
  
  if ((bRam000000000133eace & 1) == 0) {
    native_sub_43273c(&Method_UnityEngine_Component_GetComponentInParent_ScrollRect____12e2d68);
    native_sub_43273c(&Method_UnityEngine_Component_GetComponent_BE2_UI_SelectionBlock____12e2970);
    native_sub_43273c(&Method_UnityEngine_Component_GetComponent_I_BE2_BlockLayout____12e2a10);
    native_sub_43273c(&Method_UnityEngine_Component_GetComponent_RectTransform____12e2ad0);
    bRam000000000133eace = 1;
  }
  uVar4 = native_UnityEngine_Component__get_transform_8da62c(param_1,0);
  *(undefined8 *)(param_1 + 0x38) = uVar4;
  native_sub_4326e0(param_1 + 0x38);
  uVar4 = native_UnityEngine_Component__GetComponent_ActiveAnimation__49daec
                    (param_1,_Method_UnityEngine_Component_GetComponent_RectTransform____12e2ad0);
  *(undefined8 *)(param_1 + 0x18) = uVar4;
  native_sub_4326e0(param_1 + 0x18);
  uVar4 = native_UnityEngine_Component__GetComponent_ActiveAnimation__49daec
                    (param_1,
                     _Method_UnityEngine_Component_GetComponent_BE2_UI_SelectionBlock____12e2970);
  *(undefined8 *)(param_1 + 0x20) = uVar4;
  native_sub_4326e0(param_1 + 0x20);
  uVar4 = native_UnityEngine_Component__GetComponentInParent_BE2_Canvas__49dc70
                    (param_1,
                     _Method_UnityEngine_Component_GetComponentInParent_ScrollRect____12e2d68);
  *(undefined8 *)(param_1 + 0x28) = uVar4;
  native_sub_4326e0(param_1 + 0x28);
  uVar4 = native_UnityEngine_Component__GetComponent_ActiveAnimation__49daec
                    (param_1,_Method_UnityEngine_Component_GetComponent_I_BE2_BlockLayout____12e2a10
                    );
  *(undefined8 *)(param_1 + 0x30) = uVar4;
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



/* MG_BlocksEngine2.DragDrop.BE2_DragSelectionFunction$$OnEnable @ 0x57d3cc
 * void MG_BlocksEngine2_DragDrop_BE2_DragSelectionFunction__OnEnable (MG_BlocksEngine2_DragDrop_BE2_DragSelectionFunction_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MG_BlocksEngine2.DragDrop.BE2_DragSelectionFunction$$OnEnable
   void MG_BlocksEngine2_DragDrop_BE2_DragSelectionFunction__OnEnable
   (MG_BlocksEngine2_DragDrop_BE2_DragSelectionFunction_o* __this, const MethodInfo* method); */

void native_MG_BlocksEngine2_DragDrop_BE2_DragSelectionFunction__OnEnable_57d3cc(undefined8 param_1)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long lStack_38;
  
  if ((bRam000000000133eacf & 1) == 0) {
    native_sub_43273c(&Method_MG_BlocksEngine2_DragDrop_BE2_DragSelectionFunction_Remove___12e2170);
    native_sub_43273c(&Method_UnityEngine_Events_UnityAction_I_BE2_Block___ctor___12de3a8);
    native_sub_43273c(&UnityEngine_Events_UnityAction_I_BE2_Block__TypeInfo_12d2f40);
    bRam000000000133eacf = 1;
  }
  lVar3 = native_MG_BlocksEngine2_Core_BE2_MainEventsManager__get_Instance_6001fc(0);
  uVar4 = native_sub_432808(_UnityEngine_Events_UnityAction_I_BE2_Block__TypeInfo_12d2f40);
  native_UnityEngine_Events_UnityAction_List_IEventSystemHandler_____ctor_89b93c
            (uVar4,param_1,
             _Method_MG_BlocksEngine2_DragDrop_BE2_DragSelectionFunction_Remove___12e2170,
             _Method_UnityEngine_Events_UnityAction_I_BE2_Block___ctor___12de3a8);
  if (lVar3 != 0) {
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
    if (*(long *)(lVar3 + 0x18) != 0) {
      uVar1 = native_System_Collections_Generic_Dictionary_BE2EventTypes__UnityEvent___TryGetValue_c25318
                        (*(long *)(lVar3 + 0x18),0xd,&lStack_38,
                         _Method_System_Collections_Generic_Dictionary_BE2EventTypesBlock__BE2_Event__TryGetValue___12d8ec0
                        );
      if ((uVar1 & 1) == 0) {
        lVar2 = native_sub_432808(_MG_BlocksEngine2_Core_BE2_Event_TypeInfo_12d39b0);
        native_MG_BlocksEngine2_Core_BE2_Event___ctor_581024();
        lStack_38 = lVar2;
        if (lVar2 != 0) {
          native_UnityEngine_Events_UnityEvent_I_BE2_Block___AddListener_89fe38
                    (lVar2,uVar4,
                     _Method_UnityEngine_Events_UnityEvent_I_BE2_Block__AddListener___12de458);
          if (*(long *)(lVar3 + 0x18) != 0) {
            native_System_Collections_Generic_Dictionary_BE2EventTypes__UnityEvent___Add_c235f4
                      (*(long *)(lVar3 + 0x18),0xd,lStack_38,
                       _Method_System_Collections_Generic_Dictionary_BE2EventTypesBlock__BE2_Event__Add___12d8eb8
                      );
            return;
          }
        }
      }
      else if (lStack_38 != 0) {
        native_UnityEngine_Events_UnityEvent_I_BE2_Block___AddListener_89fe38
                  (lStack_38,uVar4,
                   _Method_UnityEngine_Events_UnityEvent_I_BE2_Block__AddListener___12de458);
        return;
      }
    }
                    /* WARNING: Subroutine does not return */
    native_sub_432810();
  }
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* MG_BlocksEngine2.DragDrop.BE2_DragSelectionFunction$$OnDisable @ 0x57d480
 * void MG_BlocksEngine2_DragDrop_BE2_DragSelectionFunction__OnDisable (MG_BlocksEngine2_DragDrop_BE2_DragSelectionFunction_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MG_BlocksEngine2.DragDrop.BE2_DragSelectionFunction$$OnDisable
   void MG_BlocksEngine2_DragDrop_BE2_DragSelectionFunction__OnDisable
   (MG_BlocksEngine2_DragDrop_BE2_DragSelectionFunction_o* __this, const MethodInfo* method); */

void native_MG_BlocksEngine2_DragDrop_BE2_DragSelectionFunction__OnDisable_57d480
               (undefined8 param_1)

{
  ulong uVar1;
  long lVar2;
  undefined8 uVar3;
  long lStack_38;
  
  if ((bRam000000000133ead0 & 1) == 0) {
    native_sub_43273c(&Method_MG_BlocksEngine2_DragDrop_BE2_DragSelectionFunction_Remove___12e2170);
    native_sub_43273c(&Method_UnityEngine_Events_UnityAction_I_BE2_Block___ctor___12de3a8);
    native_sub_43273c(&UnityEngine_Events_UnityAction_I_BE2_Block__TypeInfo_12d2f40);
    bRam000000000133ead0 = 1;
  }
  lVar2 = native_MG_BlocksEngine2_Core_BE2_MainEventsManager__get_Instance_6001fc(0);
  uVar3 = native_sub_432808(_UnityEngine_Events_UnityAction_I_BE2_Block__TypeInfo_12d2f40);
  native_UnityEngine_Events_UnityAction_List_IEventSystemHandler_____ctor_89b93c
            (uVar3,param_1,
             _Method_MG_BlocksEngine2_DragDrop_BE2_DragSelectionFunction_Remove___12e2170,
             _Method_UnityEngine_Events_UnityAction_I_BE2_Block___ctor___12de3a8);
  if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    native_sub_432810();
  }
  if ((bRam000000000133eaf7 & 1) == 0) {
    native_sub_43273c(&
                      Method_System_Collections_Generic_Dictionary_BE2EventTypesBlock__BE2_Event__TryGetValue___12d8ec0
                     );
    native_sub_43273c(&Method_UnityEngine_Events_UnityEvent_I_BE2_Block__RemoveListener___12de468);
    bRam000000000133eaf7 = 1;
  }
  lStack_38 = 0;
  if (*(long *)(lVar2 + 0x18) != 0) {
    uVar1 = native_System_Collections_Generic_Dictionary_BE2EventTypes__UnityEvent___TryGetValue_c25318
                      (*(long *)(lVar2 + 0x18),0xd,&lStack_38,
                       _Method_System_Collections_Generic_Dictionary_BE2EventTypesBlock__BE2_Event__TryGetValue___12d8ec0
                      );
    if ((uVar1 & 1) != 0) {
      if (lStack_38 == 0) goto LAB_00579e5c;
      native_UnityEngine_Events_UnityEvent_I_BE2_Block___RemoveListener_89fe84
                (lStack_38,uVar3,
                 _Method_UnityEngine_Events_UnityEvent_I_BE2_Block__RemoveListener___12de468);
    }
    return;
  }
LAB_00579e5c:
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* MG_BlocksEngine2.DragDrop.BE2_DragSelectionFunction$$Remove @ 0x57d534
 * void MG_BlocksEngine2_DragDrop_BE2_DragSelectionFunction__Remove (MG_BlocksEngine2_DragDrop_BE2_DragSelectionFunction_o* __this, MG_BlocksEngine2_Block_I_BE2_Block_o* block, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MG_BlocksEngine2.DragDrop.BE2_DragSelectionFunction$$Remove
   void MG_BlocksEngine2_DragDrop_BE2_DragSelectionFunction__Remove
   (MG_BlocksEngine2_DragDrop_BE2_DragSelectionFunction_o* __this,
   MG_BlocksEngine2_Block_I_BE2_Block_o* block, const MethodInfo* method); */

void native_MG_BlocksEngine2_DragDrop_BE2_DragSelectionFunction__Remove_57d534
               (long param_1,long param_2)

{
  undefined8 uVar1;
  
  if ((bRam000000000133ead1 & 1) == 0) {
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    bRam000000000133ead1 = 1;
  }
  if (*(long *)(param_1 + 0x48) != 0) {
    if (*(long *)(*(long *)(param_1 + 0x48) + 0x40) != param_2) {
      return;
    }
    uVar1 = native_UnityEngine_Component__get_gameObject_8da66c(param_1,0);
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
    (*pcRam0000000001341040)(0,uVar1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* MG_BlocksEngine2.DragDrop.BE2_DragSelectionFunction$$OnPointerDown @ 0x57d5e0
 * void MG_BlocksEngine2_DragDrop_BE2_DragSelectionFunction__OnPointerDown (MG_BlocksEngine2_DragDrop_BE2_DragSelectionFunction_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MG_BlocksEngine2.DragDrop.BE2_DragSelectionFunction$$OnPointerDown
   void MG_BlocksEngine2_DragDrop_BE2_DragSelectionFunction__OnPointerDown
   (MG_BlocksEngine2_DragDrop_BE2_DragSelectionFunction_o* __this, const MethodInfo* method); */

void native_MG_BlocksEngine2_DragDrop_BE2_DragSelectionFunction__OnPointerDown_57d5e0
               (undefined1 param_1 [16],undefined4 param_2,undefined4 param_3,long param_4)

{
  long lVar1;
  long *plVar2;
  undefined8 *puVar3;
  ulong uVar4;
  int *piVar5;
  long lVar6;
  undefined8 uVar7;
  undefined4 uVar8;
  
  if ((bRam000000000133ead2 & 1) == 0) {
    native_sub_43273c(&MG_BlocksEngine2_Environment_I_BE2_ProgrammingEnv_TypeInfo_12d4e38);
    native_sub_43273c(&Method_System_Collections_Generic_List_I_BE2_ProgrammingEnv__Find___12dc9f0);
    native_sub_43273c(&Method_System_Predicate_I_BE2_ProgrammingEnv___ctor___12ddaf8);
    native_sub_43273c(&System_Predicate_I_BE2_ProgrammingEnv__TypeInfo_12d2da0);
    native_sub_43273c(&
                      Method_MG_BlocksEngine2_DragDrop_BE2_DragSelectionFunction___c__OnPointerDown_b__20_0___12e9628
                     );
    native_sub_43273c(&MG_BlocksEngine2_DragDrop_BE2_DragSelectionFunction___c_TypeInfo_12d7000);
    bRam000000000133ead2 = 1;
  }
  lVar1 = native_MG_BlocksEngine2_Core_BE2_ExecutionManager__get_Instance_564464();
  if (lVar1 != 0) {
    lVar1 = *(long *)(lVar1 + 0x20);
    if (((*(byte *)(_MG_BlocksEngine2_DragDrop_BE2_DragSelectionFunction___c_TypeInfo_12d7000 +
                   0x133) >> 2 & 1) != 0) &&
       (*(int *)(_MG_BlocksEngine2_DragDrop_BE2_DragSelectionFunction___c_TypeInfo_12d7000 + 0xe0)
        == 0)) {
      native_sub_4327ec();
    }
    puVar3 = *(undefined8 **)
              (_MG_BlocksEngine2_DragDrop_BE2_DragSelectionFunction___c_TypeInfo_12d7000 + 0xb8);
    lVar6 = puVar3[1];
    if (lVar6 == 0) {
      if (((*(byte *)(_MG_BlocksEngine2_DragDrop_BE2_DragSelectionFunction___c_TypeInfo_12d7000 +
                     0x133) >> 2 & 1) != 0) &&
         (*(int *)(_MG_BlocksEngine2_DragDrop_BE2_DragSelectionFunction___c_TypeInfo_12d7000 + 0xe0)
          == 0)) {
        native_sub_4327ec();
        puVar3 = *(undefined8 **)
                  (_MG_BlocksEngine2_DragDrop_BE2_DragSelectionFunction___c_TypeInfo_12d7000 + 0xb8)
        ;
      }
      uVar7 = *puVar3;
      lVar6 = native_sub_432808(_System_Predicate_I_BE2_ProgrammingEnv__TypeInfo_12d2da0);
      native_System_Predicate_BaseInvokableCall____ctor_ac31d4
                (lVar6,uVar7,
                 _Method_MG_BlocksEngine2_DragDrop_BE2_DragSelectionFunction___c__OnPointerDown_b__20_0___12e9628
                 ,_Method_System_Predicate_I_BE2_ProgrammingEnv___ctor___12ddaf8);
      plVar2 = (long *)(*(long *)(
                                 _MG_BlocksEngine2_DragDrop_BE2_DragSelectionFunction___c_TypeInfo_12d7000
                                 + 0xb8) + 8);
      *plVar2 = lVar6;
      native_sub_4326e0(plVar2,lVar6);
    }
    if ((lVar1 != 0) &&
       (plVar2 = (long *)native_System_Collections_Generic_List_I_BE2_ProgrammingEnv___Find_d41304
                                   (lVar1,lVar6,
                                    _Method_System_Collections_Generic_List_I_BE2_ProgrammingEnv__Find___12dc9f0
                                   ), plVar2 != (long *)0x0)) {
      lVar1 = *plVar2;
      if ((ulong)*(ushort *)(lVar1 + 0x12a) != 0) {
        uVar4 = 0;
        piVar5 = (int *)(*(long *)(lVar1 + 0xb0) + 8);
        do {
          if (*(long *)(piVar5 + -2) ==
              _MG_BlocksEngine2_Environment_I_BE2_ProgrammingEnv_TypeInfo_12d4e38) {
            puVar3 = (undefined8 *)(lVar1 + (long)*piVar5 * 0x10 + 0x138);
            goto LAB_0057d77c;
          }
          uVar4 = uVar4 + 1;
          piVar5 = piVar5 + 4;
        } while (uVar4 < *(ushort *)(lVar1 + 0x12a));
      }
      puVar3 = (undefined8 *)
               native_sub_3c9b34(plVar2,
                                 _MG_BlocksEngine2_Environment_I_BE2_ProgrammingEnv_TypeInfo_12d4e38
                                 ,0);
LAB_0057d77c:
      lVar1 = (*(code *)*puVar3)(plVar2,puVar3[1]);
      if ((lVar1 != 0) &&
         (uVar8 = native_UnityEngine_Transform__get_localScale_771d80(lVar1,0), param_4 != 0)) {
        *(undefined4 *)(param_4 + 0x50) = uVar8;
        *(undefined4 *)(param_4 + 0x54) = param_2;
        *(undefined4 *)(param_4 + 0x58) = param_3;
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* MG_BlocksEngine2.DragDrop.BE2_DragSelectionFunction$$OnRightPointerDownOrHold @ 0x57d7b8
 * void MG_BlocksEngine2_DragDrop_BE2_DragSelectionFunction__OnRightPointerDownOrHold (MG_BlocksEngine2_DragDrop_BE2_DragSelectionFunction_o* __this, const MethodInfo* method); */

/* MG_BlocksEngine2.DragDrop.BE2_DragSelectionFunction$$OnRightPointerDownOrHold
   void MG_BlocksEngine2_DragDrop_BE2_DragSelectionFunction__OnRightPointerDownOrHold
   (MG_BlocksEngine2_DragDrop_BE2_DragSelectionFunction_o* __this, const MethodInfo* method); */

void native_MG_BlocksEngine2_DragDrop_BE2_DragSelectionFunction__OnRightPointerDownOrHold_57d7b8
               (void)

{
  return;
}



/* MG_BlocksEngine2.DragDrop.BE2_DragSelectionFunction$$OnDrag @ 0x57d7bc
 * void MG_BlocksEngine2_DragDrop_BE2_DragSelectionFunction__OnDrag (MG_BlocksEngine2_DragDrop_BE2_DragSelectionFunction_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MG_BlocksEngine2.DragDrop.BE2_DragSelectionFunction$$OnDrag
   void MG_BlocksEngine2_DragDrop_BE2_DragSelectionFunction__OnDrag
   (MG_BlocksEngine2_DragDrop_BE2_DragSelectionFunction_o* __this, const MethodInfo* method); */

void native_MG_BlocksEngine2_DragDrop_BE2_DragSelectionFunction__OnDrag_57d7bc
               (undefined1 param_1 [16],undefined8 param_2,undefined8 param_3,undefined8 param_4,
               long param_5)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  ulong uVar7;
  long lVar8;
  ulong uVar9;
  int *piVar10;
  undefined8 uVar11;
  long *plVar12;
  long *plVar13;
  long *plVar14;
  float fVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  
  if ((bRam000000000133ead3 & 1) == 0) {
    native_sub_43273c(&MG_BlocksEngine2_Block_BE2_BlockSectionHeader_Label_TypeInfo_12d3980);
    native_sub_43273c(&MG_BlocksEngine2_Block_BE2_BlockSectionHeader_LocalVariable_TypeInfo_12d3988)
    ;
    native_sub_43273c(&Method_UnityEngine_Component_GetComponent_TMP_Text____12e2b38);
    native_sub_43273c(&Method_UnityEngine_GameObject_GetComponent_BE2_Ins_FunctionBlock____12e4930);
    native_sub_43273c(&Method_UnityEngine_GameObject_GetComponent_I_BE2_BlockLayout____12e49a0);
    native_sub_43273c(&Method_UnityEngine_GameObject_GetComponent_I_BE2_Block____12e4998);
    native_sub_43273c(&Method_UnityEngine_GameObject_GetComponent_I_BE2_BlocksStack____12e49a8);
    native_sub_43273c(&Method_UnityEngine_GameObject_GetComponent_TMP_InputField____12e4a40);
    native_sub_43273c(&Method_UnityEngine_GameObject_GetComponent_TMP_Text____12e4a50);
    native_sub_43273c(&MG_BlocksEngine2_Block_I_BE2_BlockLayout_TypeInfo_12d4de0);
    native_sub_43273c(&MG_BlocksEngine2_Block_I_BE2_BlockSectionHeaderItem_TypeInfo_12d4e08);
    native_sub_43273c(&MG_BlocksEngine2_Block_I_BE2_BlockSectionHeader_TypeInfo_12d4df8);
    native_sub_43273c(&MG_BlocksEngine2_Block_I_BE2_BlockSection_TypeInfo_12d4de8);
    native_sub_43273c(&MG_BlocksEngine2_Block_I_BE2_Block_TypeInfo_12d4dd8);
    native_sub_43273c(&MG_BlocksEngine2_DragDrop_I_BE2_Drag_TypeInfo_12d4e18);
    native_sub_43273c(&Method_UnityEngine_Object_Instantiate_GameObject____12e5a88);
    native_sub_43273c(&Method_UnityEngine_Object_Instantiate_GameObject____12e5a40);
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    native_sub_43273c(&StringLiteral__12eaac0);
    bRam000000000133ead3 = 1;
  }
  plVar1 = *(long **)(param_5 + 0x28);
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 0x3c8))(plVar1,*(undefined8 *)(*plVar1 + 0x3d0));
    if (*(long *)(param_5 + 0x28) != 0) {
      native_UnityEngine_Behaviour__set_enabled_8d7b0c(*(long *)(param_5 + 0x28),0,0);
      if (*(long *)(param_5 + 0x20) != 0) {
        uVar11 = *(undefined8 *)(*(long *)(param_5 + 0x20) + 0x18);
        if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
           (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
          native_sub_4327ec();
        }
        lVar2 = native_UnityEngine_Object__Instantiate_GameObject__4a6428
                          (uVar11,_Method_UnityEngine_Object_Instantiate_GameObject____12e5a40);
        if (((*(long *)(param_5 + 0x20) != 0) &&
            (lVar3 = *(long *)(*(long *)(param_5 + 0x20) + 0x18), lVar3 != 0)) &&
           (uVar11 = native_UnityEngine_Object__get_name_8e8098(lVar3,0), lVar2 != 0)) {
          native_UnityEngine_Object__set_name_8e9c08(lVar2,uVar11,0);
          plVar1 = (long *)native_UnityEngine_GameObject__GetComponent_BE2_BlockSectionHeader_Custom__4a2214
                                     (lVar2,
                                      _Method_UnityEngine_GameObject_GetComponent_I_BE2_Block____12e4998
                                     );
          lVar3 = native_UnityEngine_GameObject__GetComponent_BE2_BlockSectionHeader_Custom__4a2214
                            (lVar2,
                             _Method_UnityEngine_GameObject_GetComponent_BE2_Ins_FunctionBlock____12e4930
                            );
          plVar12 = (long *)(param_5 + 0x40);
          *plVar12 = lVar3;
          native_sub_4326e0(plVar12,lVar3);
          if (*plVar12 != 0) {
            native_BE2_Ins_FunctionBlock__Initialize_60717c
                      (*plVar12,*(undefined8 *)(param_5 + 0x48),0);
            plVar12 = (long *)native_UnityEngine_GameObject__GetComponent_BE2_BlockSectionHeader_Custom__4a2214
                                        (lVar2,
                                         _Method_UnityEngine_GameObject_GetComponent_I_BE2_BlockLayout____12e49a0
                                        );
            if ((*(long *)(param_5 + 0x48) != 0) &&
               (plVar13 = *(long **)(*(long *)(param_5 + 0x48) + 0x40), plVar13 != (long *)0x0)) {
              lVar3 = *plVar13;
              if ((ulong)*(ushort *)(lVar3 + 0x12a) != 0) {
                uVar9 = 0;
                piVar10 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar10 + -2) ==
                      _MG_BlocksEngine2_Block_I_BE2_Block_TypeInfo_12d4dd8) {
                    puVar4 = (undefined8 *)(lVar3 + (long)(*piVar10 + 3) * 0x10 + 0x138);
                    goto LAB_0057da60;
                  }
                  uVar9 = uVar9 + 1;
                  piVar10 = piVar10 + 4;
                } while (uVar9 < *(ushort *)(lVar3 + 0x12a));
              }
              puVar4 = (undefined8 *)
                       native_sub_3c9b34(plVar13,
                                         _MG_BlocksEngine2_Block_I_BE2_Block_TypeInfo_12d4dd8,3);
LAB_0057da60:
              plVar13 = (long *)(*(code *)*puVar4)(plVar13,puVar4[1]);
              if (plVar13 != (long *)0x0) {
                lVar3 = *plVar13;
                if ((ulong)*(ushort *)(lVar3 + 0x12a) != 0) {
                  uVar9 = 0;
                  piVar10 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar10 + -2) ==
                        _MG_BlocksEngine2_Block_I_BE2_BlockLayout_TypeInfo_12d4de0) {
                      puVar4 = (undefined8 *)(lVar3 + (long)(*piVar10 + 2) * 0x10 + 0x138);
                      goto LAB_0057dad4;
                    }
                    uVar9 = uVar9 + 1;
                    piVar10 = piVar10 + 4;
                  } while (uVar9 < *(ushort *)(lVar3 + 0x12a));
                }
                puVar4 = (undefined8 *)
                         native_sub_3c9b34(plVar13,
                                           _MG_BlocksEngine2_Block_I_BE2_BlockLayout_TypeInfo_12d4de0
                                           ,2);
LAB_0057dad4:
                lVar3 = (*(code *)*puVar4)(plVar13,puVar4[1]);
                if (lVar3 != 0) {
                  if (*(int *)(lVar3 + 0x18) == 0) {
LAB_0057e5a8:
                    uVar11 = native_sub_43283c();
                    /* WARNING: Subroutine does not return */
                    native_sub_4327dc(uVar11,0);
                  }
                  plVar13 = *(long **)(lVar3 + 0x20);
                  if (plVar13 != (long *)0x0) {
                    lVar3 = *plVar13;
                    if ((ulong)*(ushort *)(lVar3 + 0x12a) != 0) {
                      uVar9 = 0;
                      piVar10 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
                      do {
                        if (*(long *)(piVar10 + -2) ==
                            _MG_BlocksEngine2_Block_I_BE2_BlockSection_TypeInfo_12d4de8) {
                          puVar4 = (undefined8 *)(lVar3 + (long)(*piVar10 + 1) * 0x10 + 0x138);
                          goto LAB_0057db54;
                        }
                        uVar9 = uVar9 + 1;
                        piVar10 = piVar10 + 4;
                      } while (uVar9 < *(ushort *)(lVar3 + 0x12a));
                    }
                    puVar4 = (undefined8 *)
                             native_sub_3c9b34(plVar13,
                                               _MG_BlocksEngine2_Block_I_BE2_BlockSection_TypeInfo_12d4de8
                                               ,1);
LAB_0057db54:
                    plVar13 = (long *)(*(code *)*puVar4)(plVar13,puVar4[1]);
                    if (plVar13 != (long *)0x0) {
                      lVar3 = *plVar13;
                      if ((ulong)*(ushort *)(lVar3 + 0x12a) != 0) {
                        uVar9 = 0;
                        piVar10 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
                        do {
                          if (*(long *)(piVar10 + -2) ==
                              _MG_BlocksEngine2_Block_I_BE2_BlockSectionHeader_TypeInfo_12d4df8) {
                            puVar4 = (undefined8 *)(lVar3 + (long)(*piVar10 + 1) * 0x10 + 0x138);
                            goto LAB_0057dbcc;
                          }
                          uVar9 = uVar9 + 1;
                          piVar10 = piVar10 + 4;
                        } while (uVar9 < *(ushort *)(lVar3 + 0x12a));
                      }
                      puVar4 = (undefined8 *)
                               native_sub_3c9b34(plVar13,
                                                 _MG_BlocksEngine2_Block_I_BE2_BlockSectionHeader_TypeInfo_12d4df8
                                                 ,1);
LAB_0057dbcc:
                      lVar3 = (*(code *)*puVar4)(plVar13,puVar4[1]);
                      if (lVar3 != 0) {
                        if (0 < (int)*(ulong *)(lVar3 + 0x18)) {
                          uVar9 = 0;
                          uVar7 = *(ulong *)(lVar3 + 0x18) & 0xffffffff;
                          do {
                            if (uVar7 <= uVar9) goto LAB_0057e5a8;
                            if (((int)uVar9 != 0) &&
                               (plVar13 = *(long **)(lVar3 + uVar9 * 8 + 0x20),
                               plVar13 != (long *)0x0)) {
                              lVar8 = *plVar13;
                              if ((*(byte *)(lVar8 + 300) <
                                   *(byte *)(
                                            _MG_BlocksEngine2_Block_BE2_BlockSectionHeader_Label_TypeInfo_12d3980
                                            + 300)) ||
                                 (*(long *)(*(long *)(lVar8 + 200) +
                                            (ulong)*(byte *)(
                                                  _MG_BlocksEngine2_Block_BE2_BlockSectionHeader_Label_TypeInfo_12d3980
                                                  + 300) * 8 + -8) !=
                                  _MG_BlocksEngine2_Block_BE2_BlockSectionHeader_Label_TypeInfo_12d3980
                                 )) {
                                if ((*(byte *)(
                                              _MG_BlocksEngine2_Block_BE2_BlockSectionHeader_LocalVariable_TypeInfo_12d3988
                                              + 300) <= *(byte *)(lVar8 + 300)) &&
                                   (*(long *)(*(long *)(lVar8 + 200) +
                                              (ulong)*(byte *)(
                                                  _MG_BlocksEngine2_Block_BE2_BlockSectionHeader_LocalVariable_TypeInfo_12d3988
                                                  + 300) * 8 + -8) ==
                                    _MG_BlocksEngine2_Block_BE2_BlockSectionHeader_LocalVariable_TypeInfo_12d3988
                                   )) {
                                  lVar8 = native_MG_BlocksEngine2_EditorScript_BE2_Inspector__get_Instance_602da4
                                                    (0);
                                  if (lVar8 == 0) goto LAB_0057e5a4;
                                  uVar11 = *(undefined8 *)(lVar8 + 0x70);
                                  uVar16 = native_UnityEngine_Vector3__get_zero_776668(0);
                                  param_4 = native_UnityEngine_Quaternion__get_identity_7628fc(0);
                                  if (plVar12 == (long *)0x0) goto LAB_0057e5a4;
                                  lVar8 = *plVar12;
                                  if ((ulong)*(ushort *)(lVar8 + 0x12a) != 0) {
                                    uVar7 = 0;
                                    piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
                                    do {
                                      if (*(long *)(piVar10 + -2) ==
                                          _MG_BlocksEngine2_Block_I_BE2_BlockLayout_TypeInfo_12d4de0
                                         ) {
                                        puVar4 = (undefined8 *)
                                                 (lVar8 + (long)(*piVar10 + 2) * 0x10 + 0x138);
                                        goto LAB_0057dfd0;
                                      }
                                      uVar7 = uVar7 + 1;
                                      piVar10 = piVar10 + 4;
                                    } while (uVar7 < *(ushort *)(lVar8 + 0x12a));
                                  }
                                  puVar4 = (undefined8 *)
                                           native_sub_3c9b34(plVar12,
                                                  _MG_BlocksEngine2_Block_I_BE2_BlockLayout_TypeInfo_12d4de0
                                                  ,2);
LAB_0057dfd0:
                                  lVar8 = (*(code *)*puVar4)(plVar12,puVar4[1]);
                                  if (lVar8 == 0) goto LAB_0057e5a4;
                                  if (*(int *)(lVar8 + 0x18) == 0) goto LAB_0057e5a8;
                                  plVar13 = *(long **)(lVar8 + 0x20);
                                  if (plVar13 == (long *)0x0) goto LAB_0057e5a4;
                                  lVar8 = *plVar13;
                                  if ((ulong)*(ushort *)(lVar8 + 0x12a) != 0) {
                                    uVar7 = 0;
                                    piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
                                    do {
                                      if (*(long *)(piVar10 + -2) ==
                                          _MG_BlocksEngine2_Block_I_BE2_BlockSection_TypeInfo_12d4de8
                                         ) {
                                        puVar4 = (undefined8 *)
                                                 (lVar8 + (long)(*piVar10 + 1) * 0x10 + 0x138);
                                        goto LAB_0057e050;
                                      }
                                      uVar7 = uVar7 + 1;
                                      piVar10 = piVar10 + 4;
                                    } while (uVar7 < *(ushort *)(lVar8 + 0x12a));
                                  }
                                  puVar4 = (undefined8 *)
                                           native_sub_3c9b34(plVar13,
                                                  _MG_BlocksEngine2_Block_I_BE2_BlockSection_TypeInfo_12d4de8
                                                  ,1);
LAB_0057e050:
                                  plVar13 = (long *)(*(code *)*puVar4)(plVar13,puVar4[1]);
                                  if (plVar13 == (long *)0x0) goto LAB_0057e5a4;
                                  lVar8 = *plVar13;
                                  if ((ulong)*(ushort *)(lVar8 + 0x12a) != 0) {
                                    uVar7 = 0;
                                    piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
                                    do {
                                      if (*(long *)(piVar10 + -2) ==
                                          _MG_BlocksEngine2_Block_I_BE2_BlockSectionHeader_TypeInfo_12d4df8
                                         ) {
                                        puVar4 = (undefined8 *)
                                                 (lVar8 + (long)*piVar10 * 0x10 + 0x138);
                                        goto LAB_0057e0c0;
                                      }
                                      uVar7 = uVar7 + 1;
                                      piVar10 = piVar10 + 4;
                                    } while (uVar7 < *(ushort *)(lVar8 + 0x12a));
                                  }
                                  puVar4 = (undefined8 *)
                                           native_sub_3c9b34(plVar13,
                                                  _MG_BlocksEngine2_Block_I_BE2_BlockSectionHeader_TypeInfo_12d4df8
                                                  ,0);
LAB_0057e0c0:
                                  uVar6 = (*(code *)*puVar4)(plVar13,puVar4[1]);
                                  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2
                                       & 1) != 0) &&
                                     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
                                    native_sub_4327ec(_UnityEngine_Object_TypeInfo_12d54e0);
                                  }
                                  lVar8 = native_UnityEngine_Object__Instantiate_BE2_Ins_DefineFunction__4a67c0
                                                    (uVar16,uVar11,uVar6,
                                                                                                          
                                                  _Method_UnityEngine_Object_Instantiate_GameObject____12e5a88
                                                  );
                                  if ((lVar8 == 0) ||
                                     (lVar8 = native_UnityEngine_GameObject__GetComponent_BE2_BlockSectionHeader_Custom__4a2214
                                                        (lVar8,
                                                  _Method_UnityEngine_GameObject_GetComponent_TMP_InputField____12e4a40
                                                  ), lVar8 == 0)) goto LAB_0057e5a4;
                                  native_TMPro_TMP_InputField__set_text_88acec
                                            (lVar8,_StringLiteral__12eaac0,0);
                                }
                              }
                              else {
                                lVar8 = native_MG_BlocksEngine2_EditorScript_BE2_Inspector__get_Instance_602da4
                                                  (0);
                                if (lVar8 == 0) goto LAB_0057e5a4;
                                uVar6 = *(undefined8 *)(lVar8 + 0x78);
                                uVar17 = native_UnityEngine_Vector3__get_zero_776668(0);
                                uVar11 = param_2;
                                uVar16 = param_3;
                                uVar18 = native_UnityEngine_Quaternion__get_identity_7628fc(0);
                                if (plVar12 == (long *)0x0) goto LAB_0057e5a4;
                                lVar8 = *plVar12;
                                if ((ulong)*(ushort *)(lVar8 + 0x12a) != 0) {
                                  uVar7 = 0;
                                  piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
                                  do {
                                    if (*(long *)(piVar10 + -2) ==
                                        _MG_BlocksEngine2_Block_I_BE2_BlockLayout_TypeInfo_12d4de0)
                                    {
                                      puVar4 = (undefined8 *)
                                               (lVar8 + (long)(*piVar10 + 2) * 0x10 + 0x138);
                                      goto LAB_0057dd90;
                                    }
                                    uVar7 = uVar7 + 1;
                                    piVar10 = piVar10 + 4;
                                  } while (uVar7 < *(ushort *)(lVar8 + 0x12a));
                                }
                                puVar4 = (undefined8 *)
                                         native_sub_3c9b34(plVar12,
                                                  _MG_BlocksEngine2_Block_I_BE2_BlockLayout_TypeInfo_12d4de0
                                                  ,2);
LAB_0057dd90:
                                lVar8 = (*(code *)*puVar4)(plVar12,puVar4[1]);
                                if (lVar8 == 0) goto LAB_0057e5a4;
                                if (*(int *)(lVar8 + 0x18) == 0) goto LAB_0057e5a8;
                                plVar14 = *(long **)(lVar8 + 0x20);
                                if (plVar14 == (long *)0x0) goto LAB_0057e5a4;
                                lVar8 = *plVar14;
                                if ((ulong)*(ushort *)(lVar8 + 0x12a) != 0) {
                                  uVar7 = 0;
                                  piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
                                  do {
                                    if (*(long *)(piVar10 + -2) ==
                                        _MG_BlocksEngine2_Block_I_BE2_BlockSection_TypeInfo_12d4de8)
                                    {
                                      puVar4 = (undefined8 *)
                                               (lVar8 + (long)(*piVar10 + 1) * 0x10 + 0x138);
                                      goto LAB_0057de18;
                                    }
                                    uVar7 = uVar7 + 1;
                                    piVar10 = piVar10 + 4;
                                  } while (uVar7 < *(ushort *)(lVar8 + 0x12a));
                                }
                                puVar4 = (undefined8 *)
                                         native_sub_3c9b34(plVar14,
                                                  _MG_BlocksEngine2_Block_I_BE2_BlockSection_TypeInfo_12d4de8
                                                  ,1);
LAB_0057de18:
                                plVar14 = (long *)(*(code *)*puVar4)(plVar14,puVar4[1]);
                                if (plVar14 == (long *)0x0) goto LAB_0057e5a4;
                                lVar8 = *plVar14;
                                if ((ulong)*(ushort *)(lVar8 + 0x12a) != 0) {
                                  uVar7 = 0;
                                  piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
                                  do {
                                    if (*(long *)(piVar10 + -2) ==
                                        _MG_BlocksEngine2_Block_I_BE2_BlockSectionHeader_TypeInfo_12d4df8
                                       ) {
                                      puVar4 = (undefined8 *)(lVar8 + (long)*piVar10 * 0x10 + 0x138)
                                      ;
                                      goto LAB_0057de88;
                                    }
                                    uVar7 = uVar7 + 1;
                                    piVar10 = piVar10 + 4;
                                  } while (uVar7 < *(ushort *)(lVar8 + 0x12a));
                                }
                                puVar4 = (undefined8 *)
                                         native_sub_3c9b34(plVar14,
                                                  _MG_BlocksEngine2_Block_I_BE2_BlockSectionHeader_TypeInfo_12d4df8
                                                  ,0);
LAB_0057de88:
                                uVar5 = (*(code *)*puVar4)(plVar14,puVar4[1]);
                                if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 &
                                     1) != 0) &&
                                   (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
                                  native_sub_4327ec(_UnityEngine_Object_TypeInfo_12d54e0);
                                }
                                lVar8 = native_UnityEngine_Object__Instantiate_BE2_Ins_DefineFunction__4a67c0
                                                  (uVar17,param_2,param_3,uVar18,uVar11,uVar16,
                                                   param_4,uVar6,uVar5,
                                                                                                      
                                                  _Method_UnityEngine_Object_Instantiate_GameObject____12e5a88
                                                  );
                                if (lVar8 == 0) goto LAB_0057e5a4;
                                plVar14 = (long *)native_UnityEngine_GameObject__GetComponent_BE2_BlockSectionHeader_Custom__4a2214
                                                            (lVar8,
                                                  _Method_UnityEngine_GameObject_GetComponent_TMP_Text____12e4a50
                                                  );
                                lVar8 = *plVar13;
                                if ((ulong)*(ushort *)(lVar8 + 0x12a) != 0) {
                                  uVar7 = 0;
                                  piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
                                  do {
                                    if (*(long *)(piVar10 + -2) ==
                                        _MG_BlocksEngine2_Block_I_BE2_BlockSectionHeaderItem_TypeInfo_12d4e08
                                       ) {
                                      puVar4 = (undefined8 *)(lVar8 + (long)*piVar10 * 0x10 + 0x138)
                                      ;
                                      param_4 = uVar18;
                                      goto LAB_0057df6c;
                                    }
                                    uVar7 = uVar7 + 1;
                                    piVar10 = piVar10 + 4;
                                  } while (uVar7 < *(ushort *)(lVar8 + 0x12a));
                                }
                                puVar4 = (undefined8 *)
                                         native_sub_3c9b34(plVar13,
                                                  _MG_BlocksEngine2_Block_I_BE2_BlockSectionHeaderItem_TypeInfo_12d4e08
                                                  ,0);
                                param_4 = uVar18;
LAB_0057df6c:
                                lVar8 = (*(code *)*puVar4)(plVar13,puVar4[1]);
                                if ((lVar8 == 0) ||
                                   (plVar13 = (long *)
                                                  native_UnityEngine_Component__GetComponent_ActiveAnimation__49daec
                                                            (lVar8,
                                                  _Method_UnityEngine_Component_GetComponent_TMP_Text____12e2b38
                                                  ), plVar13 == (long *)0x0)) goto LAB_0057e5a4;
                                uVar11 = (**(code **)(*plVar13 + 0x548))
                                                   (plVar13,*(undefined8 *)(*plVar13 + 0x550));
                                if (plVar14 == (long *)0x0) goto LAB_0057e5a4;
                                (**(code **)(*plVar14 + 0x558))
                                          (plVar14,uVar11,*(undefined8 *)(*plVar14 + 0x560));
                              }
                            }
                            uVar7 = (ulong)*(uint *)(lVar3 + 0x18);
                            uVar9 = uVar9 + 1;
                          } while ((long)uVar9 < (long)(int)*(uint *)(lVar3 + 0x18));
                        }
                        if (plVar1 != (long *)0x0) {
                          lVar3 = *plVar1;
                          if ((ulong)*(ushort *)(lVar3 + 0x12a) != 0) {
                            uVar9 = 0;
                            piVar10 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
                            do {
                              if (*(long *)(piVar10 + -2) ==
                                  _MG_BlocksEngine2_Block_I_BE2_Block_TypeInfo_12d4dd8) {
                                puVar4 = (undefined8 *)(lVar3 + (long)(*piVar10 + 8) * 0x10 + 0x138)
                                ;
                                goto LAB_0057e1cc;
                              }
                              uVar9 = uVar9 + 1;
                              piVar10 = piVar10 + 4;
                            } while (uVar9 < *(ushort *)(lVar3 + 0x12a));
                          }
                          puVar4 = (undefined8 *)
                                   native_sub_3c9b34(plVar1,
                                                  _MG_BlocksEngine2_Block_I_BE2_Block_TypeInfo_12d4dd8
                                                  ,8);
LAB_0057e1cc:
                          plVar12 = (long *)(*(code *)*puVar4)(plVar1,puVar4[1]);
                          if (plVar12 != (long *)0x0) {
                            lVar3 = *plVar12;
                            if ((ulong)*(ushort *)(lVar3 + 0x12a) != 0) {
                              uVar9 = 0;
                              piVar10 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
                              do {
                                if (*(long *)(piVar10 + -2) ==
                                    _MG_BlocksEngine2_DragDrop_I_BE2_Drag_TypeInfo_12d4e18) {
                                  puVar4 = (undefined8 *)
                                           (lVar3 + (long)(*piVar10 + 4) * 0x10 + 0x138);
                                  goto LAB_0057e240;
                                }
                                uVar9 = uVar9 + 1;
                                piVar10 = piVar10 + 4;
                              } while (uVar9 < *(ushort *)(lVar3 + 0x12a));
                            }
                            puVar4 = (undefined8 *)
                                     native_sub_3c9b34(plVar12,
                                                  _MG_BlocksEngine2_DragDrop_I_BE2_Drag_TypeInfo_12d4e18
                                                  ,4);
LAB_0057e240:
                            lVar3 = (*(code *)*puVar4)(plVar12,puVar4[1]);
                            lVar8 = native_MG_BlocksEngine2_DragDrop_BE2_DragDropManager__get_Instance_576470
                                              ();
                            if ((lVar8 != 0) && (lVar3 != 0)) {
                              native_UnityEngine_Transform__SetParent_7720e0
                                        (lVar3,*(undefined8 *)(lVar8 + 0x28),1,0);
                              native_UnityEngine_GameObject__GetComponent_BE2_BlockSectionHeader_Custom__4a2214
                                        (lVar2,
                                         _Method_UnityEngine_GameObject_GetComponent_I_BE2_BlocksStack____12e49a8
                                        );
                              lVar3 = native_UnityEngine_GameObject__get_transform_8de5c8(lVar2,0);
                              if (lVar3 != 0) {
                                native_UnityEngine_Transform__set_localScale_771e30
                                          (*(undefined4 *)(param_5 + 0x50),lVar3,0);
                                lVar2 = native_UnityEngine_GameObject__get_transform_8de5c8(lVar2,0)
                                ;
                                lVar3 = native_UnityEngine_Component__get_transform_8da62c
                                                  (param_5,0);
                                if ((lVar3 != 0) &&
                                   (native_UnityEngine_Transform__get_position_77169c(lVar3,0),
                                   lVar2 != 0)) {
                                  native_UnityEngine_Transform__set_position_77174c(lVar2,0);
                                  lVar2 = native_MG_BlocksEngine2_DragDrop_BE2_DragDropManager__get_Instance_576470
                                                    ();
                                  lVar3 = *plVar1;
                                  if ((ulong)*(ushort *)(lVar3 + 0x12a) != 0) {
                                    uVar9 = 0;
                                    piVar10 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
                                    do {
                                      if (*(long *)(piVar10 + -2) ==
                                          _MG_BlocksEngine2_Block_I_BE2_Block_TypeInfo_12d4dd8) {
                                        puVar4 = (undefined8 *)
                                                 (lVar3 + (long)(*piVar10 + 8) * 0x10 + 0x138);
                                        goto LAB_0057e340;
                                      }
                                      uVar9 = uVar9 + 1;
                                      piVar10 = piVar10 + 4;
                                    } while (uVar9 < *(ushort *)(lVar3 + 0x12a));
                                  }
                                  puVar4 = (undefined8 *)
                                           native_sub_3c9b34(plVar1,
                                                  _MG_BlocksEngine2_Block_I_BE2_Block_TypeInfo_12d4dd8
                                                  ,8);
LAB_0057e340:
                                  uVar11 = (*(code *)*puVar4)(plVar1,puVar4[1]);
                                  if (lVar2 != 0) {
                                    *(undefined8 *)(lVar2 + 0x30) = uVar11;
                                    native_sub_4326e0((undefined8 *)(lVar2 + 0x30),uVar11);
                                    lVar2 = *plVar1;
                                    if ((ulong)*(ushort *)(lVar2 + 0x12a) != 0) {
                                      uVar9 = 0;
                                      piVar10 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
                                      do {
                                        if (*(long *)(piVar10 + -2) ==
                                            _MG_BlocksEngine2_Block_I_BE2_Block_TypeInfo_12d4dd8) {
                                          puVar4 = (undefined8 *)
                                                   (lVar2 + (long)(*piVar10 + 8) * 0x10 + 0x138);
                                          goto LAB_0057e3b8;
                                        }
                                        uVar9 = uVar9 + 1;
                                        piVar10 = piVar10 + 4;
                                      } while (uVar9 < *(ushort *)(lVar2 + 0x12a));
                                    }
                                    puVar4 = (undefined8 *)
                                             native_sub_3c9b34(plVar1,
                                                  _MG_BlocksEngine2_Block_I_BE2_Block_TypeInfo_12d4dd8
                                                  ,8);
LAB_0057e3b8:
                                    plVar12 = (long *)(*(code *)*puVar4)(plVar1,puVar4[1]);
                                    if (plVar12 != (long *)0x0) {
                                      lVar2 = *plVar12;
                                      if ((ulong)*(ushort *)(lVar2 + 0x12a) != 0) {
                                        uVar9 = 0;
                                        piVar10 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
                                        do {
                                          if (*(long *)(piVar10 + -2) ==
                                              _MG_BlocksEngine2_DragDrop_I_BE2_Drag_TypeInfo_12d4e18
                                             ) {
                                            puVar4 = (undefined8 *)
                                                     (lVar2 + (long)*piVar10 * 0x10 + 0x138);
                                            goto LAB_0057e420;
                                          }
                                          uVar9 = uVar9 + 1;
                                          piVar10 = piVar10 + 4;
                                        } while (uVar9 < *(ushort *)(lVar2 + 0x12a));
                                      }
                                      puVar4 = (undefined8 *)
                                               native_sub_3c9b34(plVar12,
                                                  _MG_BlocksEngine2_DragDrop_I_BE2_Drag_TypeInfo_12d4e18
                                                  ,0);
LAB_0057e420:
                                      (*(code *)*puVar4)(plVar12,puVar4[1]);
                                      lVar2 = *plVar1;
                                      if ((ulong)*(ushort *)(lVar2 + 0x12a) != 0) {
                                        uVar9 = 0;
                                        piVar10 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
                                        do {
                                          if (*(long *)(piVar10 + -2) ==
                                              _MG_BlocksEngine2_Block_I_BE2_Block_TypeInfo_12d4dd8)
                                          {
                                            puVar4 = (undefined8 *)
                                                     (lVar2 + (long)(*piVar10 + 8) * 0x10 + 0x138);
                                            goto LAB_0057e484;
                                          }
                                          uVar9 = uVar9 + 1;
                                          piVar10 = piVar10 + 4;
                                        } while (uVar9 < *(ushort *)(lVar2 + 0x12a));
                                      }
                                      puVar4 = (undefined8 *)
                                               native_sub_3c9b34(plVar1,
                                                  _MG_BlocksEngine2_Block_I_BE2_Block_TypeInfo_12d4dd8
                                                  ,8);
LAB_0057e484:
                                      plVar12 = (long *)(*(code *)*puVar4)(plVar1,puVar4[1]);
                                      if (plVar12 != (long *)0x0) {
                                        lVar2 = *plVar12;
                                        if ((ulong)*(ushort *)(lVar2 + 0x12a) != 0) {
                                          uVar9 = 0;
                                          piVar10 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
                                          do {
                                            if (*(long *)(piVar10 + -2) ==
                                                _MG_BlocksEngine2_DragDrop_I_BE2_Drag_TypeInfo_12d4e18
                                               ) {
                                              puVar4 = (undefined8 *)
                                                       (lVar2 + (long)(*piVar10 + 2) * 0x10 + 0x138)
                                              ;
                                              goto LAB_0057e4f0;
                                            }
                                            uVar9 = uVar9 + 1;
                                            piVar10 = piVar10 + 4;
                                          } while (uVar9 < *(ushort *)(lVar2 + 0x12a));
                                        }
                                        puVar4 = (undefined8 *)
                                                 native_sub_3c9b34(plVar12,
                                                  _MG_BlocksEngine2_DragDrop_I_BE2_Drag_TypeInfo_12d4e18
                                                  ,2);
LAB_0057e4f0:
                                        (*(code *)*puVar4)(plVar12,puVar4[1]);
                                        lVar2 = *plVar1;
                                        if ((ulong)*(ushort *)(lVar2 + 0x12a) != 0) {
                                          uVar9 = 0;
                                          piVar10 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
                                          do {
                                            if (*(long *)(piVar10 + -2) ==
                                                _MG_BlocksEngine2_Block_I_BE2_Block_TypeInfo_12d4dd8
                                               ) {
                                              puVar4 = (undefined8 *)
                                                       (lVar2 + (long)*piVar10 * 0x10 + 0x138);
                                              goto LAB_0057e550;
                                            }
                                            uVar9 = uVar9 + 1;
                                            piVar10 = piVar10 + 4;
                                          } while (uVar9 < *(ushort *)(lVar2 + 0x12a));
                                        }
                                        puVar4 = (undefined8 *)
                                                 native_sub_3c9b34(plVar1,
                                                  _MG_BlocksEngine2_Block_I_BE2_Block_TypeInfo_12d4dd8
                                                  ,0);
LAB_0057e550:
                                        lVar2 = (*(code *)*puVar4)(plVar1,puVar4[1]);
                                        fVar15 = (float)native_UnityEngine_Vector3__get_zero_776668
                                                                  (0);
                                        if (lVar2 != 0) {
                                          native_UnityEngine_Quaternion__Internal_FromEulerRad_762560
                                                    (fVar15 * 0.017453292,lVar2,0);
                                          if (pcRam000000000133ff08 == (code *)0x0) {
                                            pcRam000000000133ff08 =
                                                 (code *)native_sub_4326f0(&UNK_00e2aec2);
                                          }
                                          (*pcRam000000000133ff08)(lVar2,&stack0xffffffffffffffd0);
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
LAB_0057e5a4:
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* MG_BlocksEngine2.DragDrop.BE2_DragSelectionFunction$$OnPointerUp @ 0x57e5b4
 * void MG_BlocksEngine2_DragDrop_BE2_DragSelectionFunction__OnPointerUp (MG_BlocksEngine2_DragDrop_BE2_DragSelectionFunction_o* __this, const MethodInfo* method); */

/* MG_BlocksEngine2.DragDrop.BE2_DragSelectionFunction$$OnPointerUp
   void MG_BlocksEngine2_DragDrop_BE2_DragSelectionFunction__OnPointerUp
   (MG_BlocksEngine2_DragDrop_BE2_DragSelectionFunction_o* __this, const MethodInfo* method); */

void native_MG_BlocksEngine2_DragDrop_BE2_DragSelectionFunction__OnPointerUp_57e5b4(void)

{
  return;
}



/* MG_BlocksEngine2.DragDrop.BE2_DragSelectionFunction$$.ctor @ 0x57e5b8
 * void MG_BlocksEngine2_DragDrop_BE2_DragSelectionFunction___ctor (MG_BlocksEngine2_DragDrop_BE2_DragSelectionFunction_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MG_BlocksEngine2.DragDrop.BE2_DragSelectionFunction$$.ctor
   void MG_BlocksEngine2_DragDrop_BE2_DragSelectionFunction___ctor
   (MG_BlocksEngine2_DragDrop_BE2_DragSelectionFunction_o* __this, const MethodInfo* method); */

undefined1  [16]
native_MG_BlocksEngine2_DragDrop_BE2_DragSelectionFunction___ctor_57e5b8
          (undefined1 param_1 [16],undefined4 param_2,undefined4 param_3,ulong param_4)

{
  undefined4 uVar1;
  undefined1 auVar2 [16];
  
  uVar1 = native_UnityEngine_Vector3__get_one_776a20(0);
  *(undefined4 *)(param_4 + 0x50) = uVar1;
  *(undefined4 *)(param_4 + 0x54) = param_2;
  *(undefined4 *)(param_4 + 0x58) = param_3;
  if ((bRam0000000001340ae0 & 1) == 0) {
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0,0);
    bRam0000000001340ae0 = 1;
  }
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  auVar2._8_8_ = 0;
  auVar2._0_8_ = param_4;
  return auVar2;
}


