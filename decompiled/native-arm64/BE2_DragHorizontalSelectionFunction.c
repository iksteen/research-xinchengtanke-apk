/* ARM64 IL2CPP native pseudocode from Ghidra.
 * Recovered implementation, not original C# source.
 * Function boundaries follow the IL2CPP method address table. */


/* MG_BlocksEngine2.Horizontal.DragDrop.BE2_DragHorizontalSelectionFunction$$get__dragDropManager @ 0x57997c
 * MG_BlocksEngine2_DragDrop_BE2_DragDropManager_o* MG_BlocksEngine2_Horizontal_DragDrop_BE2_DragHorizontalSelectionFunction__get__dragDropManager (MG_BlocksEngine2_Horizontal_DragDrop_BE2_DragHorizontalSelectionFunction_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MG_BlocksEngine2.Horizontal.DragDrop.BE2_DragHorizontalSelectionFunction$$get__dragDropManager
   MG_BlocksEngine2_DragDrop_BE2_DragDropManager_o*
   MG_BlocksEngine2_Horizontal_DragDrop_BE2_DragHorizontalSelectionFunction__get__dragDropManager
   (MG_BlocksEngine2_Horizontal_DragDrop_BE2_DragHorizontalSelectionFunction_o* __this, const
   MethodInfo* method); */

undefined8
native_MG_BlocksEngine2_Horizontal_DragDrop_BE2_DragHorizontalSelectionFunction__get__dragDropManager_57997c
          (void)

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



/* MG_BlocksEngine2.Horizontal.DragDrop.BE2_DragHorizontalSelectionFunction$$get_Transform @ 0x579980
 * UnityEngine_Transform_o* MG_BlocksEngine2_Horizontal_DragDrop_BE2_DragHorizontalSelectionFunction__get_Transform (MG_BlocksEngine2_Horizontal_DragDrop_BE2_DragHorizontalSelectionFunction_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MG_BlocksEngine2.Horizontal.DragDrop.BE2_DragHorizontalSelectionFunction$$get_Transform
   UnityEngine_Transform_o*
   MG_BlocksEngine2_Horizontal_DragDrop_BE2_DragHorizontalSelectionFunction__get_Transform
   (MG_BlocksEngine2_Horizontal_DragDrop_BE2_DragHorizontalSelectionFunction_o* __this, const
   MethodInfo* method); */

undefined8
native_MG_BlocksEngine2_Horizontal_DragDrop_BE2_DragHorizontalSelectionFunction__get_Transform_579980
          (long param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  
  if ((bRam000000000133eaba & 1) == 0) {
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    bRam000000000133eaba = 1;
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



/* MG_BlocksEngine2.Horizontal.DragDrop.BE2_DragHorizontalSelectionFunction$$get_RayPoint @ 0x579a08
 * UnityEngine_Vector2_o MG_BlocksEngine2_Horizontal_DragDrop_BE2_DragHorizontalSelectionFunction__get_RayPoint (MG_BlocksEngine2_Horizontal_DragDrop_BE2_DragHorizontalSelectionFunction_o* __this, const MethodInfo* method); */

/* MG_BlocksEngine2.Horizontal.DragDrop.BE2_DragHorizontalSelectionFunction$$get_RayPoint
   UnityEngine_Vector2_o
   MG_BlocksEngine2_Horizontal_DragDrop_BE2_DragHorizontalSelectionFunction__get_RayPoint
   (MG_BlocksEngine2_Horizontal_DragDrop_BE2_DragHorizontalSelectionFunction_o* __this, const
   MethodInfo* method); */

undefined4
native_MG_BlocksEngine2_Horizontal_DragDrop_BE2_DragHorizontalSelectionFunction__get_RayPoint_579a08
          (long param_1)

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



/* MG_BlocksEngine2.Horizontal.DragDrop.BE2_DragHorizontalSelectionFunction$$get_Block @ 0x579a24
 * MG_BlocksEngine2_Block_I_BE2_Block_o* MG_BlocksEngine2_Horizontal_DragDrop_BE2_DragHorizontalSelectionFunction__get_Block (MG_BlocksEngine2_Horizontal_DragDrop_BE2_DragHorizontalSelectionFunction_o* __this, const MethodInfo* method); */

/* MG_BlocksEngine2.Horizontal.DragDrop.BE2_DragHorizontalSelectionFunction$$get_Block
   MG_BlocksEngine2_Block_I_BE2_Block_o*
   MG_BlocksEngine2_Horizontal_DragDrop_BE2_DragHorizontalSelectionFunction__get_Block
   (MG_BlocksEngine2_Horizontal_DragDrop_BE2_DragHorizontalSelectionFunction_o* __this, const
   MethodInfo* method); */

undefined8
native_MG_BlocksEngine2_Horizontal_DragDrop_BE2_DragHorizontalSelectionFunction__get_Block_579a24
          (void)

{
  return 0;
}



/* MG_BlocksEngine2.Horizontal.DragDrop.BE2_DragHorizontalSelectionFunction$$Awake @ 0x579a2c
 * void MG_BlocksEngine2_Horizontal_DragDrop_BE2_DragHorizontalSelectionFunction__Awake (MG_BlocksEngine2_Horizontal_DragDrop_BE2_DragHorizontalSelectionFunction_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MG_BlocksEngine2.Horizontal.DragDrop.BE2_DragHorizontalSelectionFunction$$Awake
   void MG_BlocksEngine2_Horizontal_DragDrop_BE2_DragHorizontalSelectionFunction__Awake
   (MG_BlocksEngine2_Horizontal_DragDrop_BE2_DragHorizontalSelectionFunction_o* __this, const
   MethodInfo* method); */

void native_MG_BlocksEngine2_Horizontal_DragDrop_BE2_DragHorizontalSelectionFunction__Awake_579a2c
               (long param_1)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  undefined8 uVar4;
  
  if ((bRam000000000133eabb & 1) == 0) {
    native_sub_43273c(&Method_UnityEngine_Component_GetComponentInParent_ScrollRect____12e2d68);
    native_sub_43273c(&Method_UnityEngine_Component_GetComponent_BE2_UI_SelectionBlock____12e2970);
    native_sub_43273c(&Method_UnityEngine_Component_GetComponent_I_BE2_BlockLayout____12e2a10);
    native_sub_43273c(&Method_UnityEngine_Component_GetComponent_RectTransform____12e2ad0);
    bRam000000000133eabb = 1;
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



/* MG_BlocksEngine2.Horizontal.DragDrop.BE2_DragHorizontalSelectionFunction$$OnEnable @ 0x579b34
 * void MG_BlocksEngine2_Horizontal_DragDrop_BE2_DragHorizontalSelectionFunction__OnEnable (MG_BlocksEngine2_Horizontal_DragDrop_BE2_DragHorizontalSelectionFunction_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MG_BlocksEngine2.Horizontal.DragDrop.BE2_DragHorizontalSelectionFunction$$OnEnable
   void MG_BlocksEngine2_Horizontal_DragDrop_BE2_DragHorizontalSelectionFunction__OnEnable
   (MG_BlocksEngine2_Horizontal_DragDrop_BE2_DragHorizontalSelectionFunction_o* __this, const
   MethodInfo* method); */

void native_MG_BlocksEngine2_Horizontal_DragDrop_BE2_DragHorizontalSelectionFunction__OnEnable_579b34
               (undefined8 param_1)

{
  long lVar1;
  undefined8 uVar2;
  ulong uVar3;
  long lVar4;
  long lStack_38;
  
  if ((bRam000000000133eabc & 1) == 0) {
    native_sub_43273c(&
                      Method_MG_BlocksEngine2_Horizontal_DragDrop_BE2_DragHorizontalSelectionFunction_Remove___12e2168
                     );
    native_sub_43273c(&Method_UnityEngine_Events_UnityAction_I_BE2_Block___ctor___12de3a8);
    native_sub_43273c(&UnityEngine_Events_UnityAction_I_BE2_Block__TypeInfo_12d2f40);
    bRam000000000133eabc = 1;
  }
  lVar1 = native_MG_BlocksEngine2_Core_BE2_MainEventsManager__get_Instance_6001fc(0);
  uVar2 = native_sub_432808(_UnityEngine_Events_UnityAction_I_BE2_Block__TypeInfo_12d2f40);
  native_UnityEngine_Events_UnityAction_List_IEventSystemHandler_____ctor_89b93c
            (uVar2,param_1,
             _Method_MG_BlocksEngine2_Horizontal_DragDrop_BE2_DragHorizontalSelectionFunction_Remove___12e2168
             ,_Method_UnityEngine_Events_UnityAction_I_BE2_Block___ctor___12de3a8);
  if (lVar1 != 0) {
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
    if (*(long *)(lVar1 + 0x18) != 0) {
      uVar3 = native_System_Collections_Generic_Dictionary_BE2EventTypes__UnityEvent___TryGetValue_c25318
                        (*(long *)(lVar1 + 0x18),0xd,&lStack_38,
                         _Method_System_Collections_Generic_Dictionary_BE2EventTypesBlock__BE2_Event__TryGetValue___12d8ec0
                        );
      if ((uVar3 & 1) == 0) {
        lVar4 = native_sub_432808(_MG_BlocksEngine2_Core_BE2_Event_TypeInfo_12d39b0);
        native_MG_BlocksEngine2_Core_BE2_Event___ctor_581024();
        lStack_38 = lVar4;
        if (lVar4 != 0) {
          native_UnityEngine_Events_UnityEvent_I_BE2_Block___AddListener_89fe38
                    (lVar4,uVar2,
                     _Method_UnityEngine_Events_UnityEvent_I_BE2_Block__AddListener___12de458);
          if (*(long *)(lVar1 + 0x18) != 0) {
            native_System_Collections_Generic_Dictionary_BE2EventTypes__UnityEvent___Add_c235f4
                      (*(long *)(lVar1 + 0x18),0xd,lStack_38,
                       _Method_System_Collections_Generic_Dictionary_BE2EventTypesBlock__BE2_Event__Add___12d8eb8
                      );
            return;
          }
        }
      }
      else if (lStack_38 != 0) {
        native_UnityEngine_Events_UnityEvent_I_BE2_Block___AddListener_89fe38
                  (lStack_38,uVar2,
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



/* MG_BlocksEngine2.Horizontal.DragDrop.BE2_DragHorizontalSelectionFunction$$OnDisable @ 0x579d04
 * void MG_BlocksEngine2_Horizontal_DragDrop_BE2_DragHorizontalSelectionFunction__OnDisable (MG_BlocksEngine2_Horizontal_DragDrop_BE2_DragHorizontalSelectionFunction_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MG_BlocksEngine2.Horizontal.DragDrop.BE2_DragHorizontalSelectionFunction$$OnDisable
   void MG_BlocksEngine2_Horizontal_DragDrop_BE2_DragHorizontalSelectionFunction__OnDisable
   (MG_BlocksEngine2_Horizontal_DragDrop_BE2_DragHorizontalSelectionFunction_o* __this, const
   MethodInfo* method); */

void native_MG_BlocksEngine2_Horizontal_DragDrop_BE2_DragHorizontalSelectionFunction__OnDisable_579d04
               (undefined8 param_1)

{
  long lVar1;
  undefined8 uVar2;
  ulong uVar3;
  long lStack_38;
  
  if ((bRam000000000133eabd & 1) == 0) {
    native_sub_43273c(&
                      Method_MG_BlocksEngine2_Horizontal_DragDrop_BE2_DragHorizontalSelectionFunction_Remove___12e2168
                     );
    native_sub_43273c(&Method_UnityEngine_Events_UnityAction_I_BE2_Block___ctor___12de3a8);
    native_sub_43273c(&UnityEngine_Events_UnityAction_I_BE2_Block__TypeInfo_12d2f40);
    bRam000000000133eabd = 1;
  }
  lVar1 = native_MG_BlocksEngine2_Core_BE2_MainEventsManager__get_Instance_6001fc(0);
  uVar2 = native_sub_432808(_UnityEngine_Events_UnityAction_I_BE2_Block__TypeInfo_12d2f40);
  native_UnityEngine_Events_UnityAction_List_IEventSystemHandler_____ctor_89b93c
            (uVar2,param_1,
             _Method_MG_BlocksEngine2_Horizontal_DragDrop_BE2_DragHorizontalSelectionFunction_Remove___12e2168
             ,_Method_UnityEngine_Events_UnityAction_I_BE2_Block___ctor___12de3a8);
  if (lVar1 == 0) {
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
  if (*(long *)(lVar1 + 0x18) != 0) {
    uVar3 = native_System_Collections_Generic_Dictionary_BE2EventTypes__UnityEvent___TryGetValue_c25318
                      (*(long *)(lVar1 + 0x18),0xd,&lStack_38,
                       _Method_System_Collections_Generic_Dictionary_BE2EventTypesBlock__BE2_Event__TryGetValue___12d8ec0
                      );
    if ((uVar3 & 1) != 0) {
      if (lStack_38 == 0) goto LAB_00579e5c;
      native_UnityEngine_Events_UnityEvent_I_BE2_Block___RemoveListener_89fe84
                (lStack_38,uVar2,
                 _Method_UnityEngine_Events_UnityEvent_I_BE2_Block__RemoveListener___12de468);
    }
    return;
  }
LAB_00579e5c:
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* MG_BlocksEngine2.Horizontal.DragDrop.BE2_DragHorizontalSelectionFunction$$Remove @ 0x579e60
 * void MG_BlocksEngine2_Horizontal_DragDrop_BE2_DragHorizontalSelectionFunction__Remove (MG_BlocksEngine2_Horizontal_DragDrop_BE2_DragHorizontalSelectionFunction_o* __this, MG_BlocksEngine2_Block_I_BE2_Block_o* block, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MG_BlocksEngine2.Horizontal.DragDrop.BE2_DragHorizontalSelectionFunction$$Remove
   void MG_BlocksEngine2_Horizontal_DragDrop_BE2_DragHorizontalSelectionFunction__Remove
   (MG_BlocksEngine2_Horizontal_DragDrop_BE2_DragHorizontalSelectionFunction_o* __this,
   MG_BlocksEngine2_Block_I_BE2_Block_o* block, const MethodInfo* method); */

void native_MG_BlocksEngine2_Horizontal_DragDrop_BE2_DragHorizontalSelectionFunction__Remove_579e60
               (long param_1,long param_2)

{
  undefined8 uVar1;
  
  if ((bRam000000000133eabe & 1) == 0) {
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    bRam000000000133eabe = 1;
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



/* MG_BlocksEngine2.Horizontal.DragDrop.BE2_DragHorizontalSelectionFunction$$OnPointerDown @ 0x579f0c
 * void MG_BlocksEngine2_Horizontal_DragDrop_BE2_DragHorizontalSelectionFunction__OnPointerDown (MG_BlocksEngine2_Horizontal_DragDrop_BE2_DragHorizontalSelectionFunction_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MG_BlocksEngine2.Horizontal.DragDrop.BE2_DragHorizontalSelectionFunction$$OnPointerDown
   void MG_BlocksEngine2_Horizontal_DragDrop_BE2_DragHorizontalSelectionFunction__OnPointerDown
   (MG_BlocksEngine2_Horizontal_DragDrop_BE2_DragHorizontalSelectionFunction_o* __this, const
   MethodInfo* method); */

void native_MG_BlocksEngine2_Horizontal_DragDrop_BE2_DragHorizontalSelectionFunction__OnPointerDown_579f0c
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
  
  if ((bRam000000000133eabf & 1) == 0) {
    native_sub_43273c(&MG_BlocksEngine2_Environment_I_BE2_ProgrammingEnv_TypeInfo_12d4e38);
    native_sub_43273c(&Method_System_Collections_Generic_List_I_BE2_ProgrammingEnv__Find___12dc9f0);
    native_sub_43273c(&Method_System_Predicate_I_BE2_ProgrammingEnv___ctor___12ddaf8);
    native_sub_43273c(&System_Predicate_I_BE2_ProgrammingEnv__TypeInfo_12d2da0);
    native_sub_43273c(&
                      Method_MG_BlocksEngine2_Horizontal_DragDrop_BE2_DragHorizontalSelectionFunction___c__OnPointerDown_b__20_0___12e9618
                     );
    native_sub_43273c(&
                      MG_BlocksEngine2_Horizontal_DragDrop_BE2_DragHorizontalSelectionFunction___c_TypeInfo_12d6ff0
                     );
    bRam000000000133eabf = 1;
  }
  lVar1 = native_MG_BlocksEngine2_Core_BE2_ExecutionManager__get_Instance_564464();
  if (lVar1 != 0) {
    lVar1 = *(long *)(lVar1 + 0x20);
    if (((*(byte *)(
                   _MG_BlocksEngine2_Horizontal_DragDrop_BE2_DragHorizontalSelectionFunction___c_TypeInfo_12d6ff0
                   + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(
                _MG_BlocksEngine2_Horizontal_DragDrop_BE2_DragHorizontalSelectionFunction___c_TypeInfo_12d6ff0
                + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    puVar3 = *(undefined8 **)
              (
              _MG_BlocksEngine2_Horizontal_DragDrop_BE2_DragHorizontalSelectionFunction___c_TypeInfo_12d6ff0
              + 0xb8);
    lVar6 = puVar3[1];
    if (lVar6 == 0) {
      if (((*(byte *)(
                     _MG_BlocksEngine2_Horizontal_DragDrop_BE2_DragHorizontalSelectionFunction___c_TypeInfo_12d6ff0
                     + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(
                  _MG_BlocksEngine2_Horizontal_DragDrop_BE2_DragHorizontalSelectionFunction___c_TypeInfo_12d6ff0
                  + 0xe0) == 0)) {
        native_sub_4327ec();
        puVar3 = *(undefined8 **)
                  (
                  _MG_BlocksEngine2_Horizontal_DragDrop_BE2_DragHorizontalSelectionFunction___c_TypeInfo_12d6ff0
                  + 0xb8);
      }
      uVar7 = *puVar3;
      lVar6 = native_sub_432808(_System_Predicate_I_BE2_ProgrammingEnv__TypeInfo_12d2da0);
      native_System_Predicate_BaseInvokableCall____ctor_ac31d4
                (lVar6,uVar7,
                 _Method_MG_BlocksEngine2_Horizontal_DragDrop_BE2_DragHorizontalSelectionFunction___c__OnPointerDown_b__20_0___12e9618
                 ,_Method_System_Predicate_I_BE2_ProgrammingEnv___ctor___12ddaf8);
      plVar2 = (long *)(*(long *)(
                                 _MG_BlocksEngine2_Horizontal_DragDrop_BE2_DragHorizontalSelectionFunction___c_TypeInfo_12d6ff0
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
            goto LAB_0057a0a8;
          }
          uVar4 = uVar4 + 1;
          piVar5 = piVar5 + 4;
        } while (uVar4 < *(ushort *)(lVar1 + 0x12a));
      }
      puVar3 = (undefined8 *)
               native_sub_3c9b34(plVar2,
                                 _MG_BlocksEngine2_Environment_I_BE2_ProgrammingEnv_TypeInfo_12d4e38
                                 ,0);
LAB_0057a0a8:
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



/* MG_BlocksEngine2.Horizontal.DragDrop.BE2_DragHorizontalSelectionFunction$$OnRightPointerDownOrHold @ 0x57a0e4
 * void MG_BlocksEngine2_Horizontal_DragDrop_BE2_DragHorizontalSelectionFunction__OnRightPointerDownOrHold (MG_BlocksEngine2_Horizontal_DragDrop_BE2_DragHorizontalSelectionFunction_o* __this, const MethodInfo* method); */

/* MG_BlocksEngine2.Horizontal.DragDrop.BE2_DragHorizontalSelectionFunction$$OnRightPointerDownOrHold
   void 
   MG_BlocksEngine2_Horizontal_DragDrop_BE2_DragHorizontalSelectionFunction__OnRightPointerDownOrHold
   (MG_BlocksEngine2_Horizontal_DragDrop_BE2_DragHorizontalSelectionFunction_o* __this, const
   MethodInfo* method); */

void native_MG_BlocksEngine2_Horizontal_DragDrop_BE2_DragHorizontalSelectionFunction__OnRightPointerDownOrHold_57a0e4
               (void)

{
  return;
}



/* MG_BlocksEngine2.Horizontal.DragDrop.BE2_DragHorizontalSelectionFunction$$OnDrag @ 0x57a0e8
 * void MG_BlocksEngine2_Horizontal_DragDrop_BE2_DragHorizontalSelectionFunction__OnDrag (MG_BlocksEngine2_Horizontal_DragDrop_BE2_DragHorizontalSelectionFunction_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MG_BlocksEngine2.Horizontal.DragDrop.BE2_DragHorizontalSelectionFunction$$OnDrag
   void MG_BlocksEngine2_Horizontal_DragDrop_BE2_DragHorizontalSelectionFunction__OnDrag
   (MG_BlocksEngine2_Horizontal_DragDrop_BE2_DragHorizontalSelectionFunction_o* __this, const
   MethodInfo* method); */

void native_MG_BlocksEngine2_Horizontal_DragDrop_BE2_DragHorizontalSelectionFunction__OnDrag_57a0e8
               (undefined1 param_1 [16],undefined8 param_2,undefined8 param_3,undefined8 param_4,
               long param_5)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 uVar6;
  ulong uVar7;
  ulong uVar8;
  int *piVar9;
  undefined8 uVar10;
  long *plVar11;
  long *plVar12;
  undefined8 uVar13;
  long *plVar14;
  float fVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  
  if ((bRam000000000133eac0 & 1) == 0) {
    native_sub_43273c(&MG_BlocksEngine2_Block_BE2_BlockSectionHeader_Custom_TypeInfo_12d3978);
    native_sub_43273c(&
                      Method_UnityEngine_GameObject_GetComponent_BE2_BlockSectionHeader_Custom____12e4910
                     );
    native_sub_43273c(&Method_UnityEngine_GameObject_GetComponent_BE2_Ins_FunctionBlock____12e4930);
    native_sub_43273c(&Method_UnityEngine_GameObject_GetComponent_I_BE2_BlockLayout____12e49a0);
    native_sub_43273c(&Method_UnityEngine_GameObject_GetComponent_I_BE2_Block____12e4998);
    native_sub_43273c(&Method_UnityEngine_GameObject_GetComponent_I_BE2_BlocksStack____12e49a8);
    native_sub_43273c(&MG_BlocksEngine2_Block_I_BE2_BlockLayout_TypeInfo_12d4de0);
    native_sub_43273c(&MG_BlocksEngine2_Block_I_BE2_BlockSectionHeader_TypeInfo_12d4df8);
    native_sub_43273c(&MG_BlocksEngine2_Block_I_BE2_BlockSection_TypeInfo_12d4de8);
    native_sub_43273c(&MG_BlocksEngine2_Block_I_BE2_Block_TypeInfo_12d4dd8);
    native_sub_43273c(&MG_BlocksEngine2_DragDrop_I_BE2_Drag_TypeInfo_12d4e18);
    native_sub_43273c(&Method_UnityEngine_Object_Instantiate_GameObject____12e5a88);
    native_sub_43273c(&Method_UnityEngine_Object_Instantiate_GameObject____12e5a40);
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    bRam000000000133eac0 = 1;
  }
  plVar1 = *(long **)(param_5 + 0x28);
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 0x3c8))(plVar1,*(undefined8 *)(*plVar1 + 0x3d0));
    if (*(long *)(param_5 + 0x28) != 0) {
      native_UnityEngine_Behaviour__set_enabled_8d7b0c(*(long *)(param_5 + 0x28),0,0);
      if (*(long *)(param_5 + 0x20) != 0) {
        uVar10 = *(undefined8 *)(*(long *)(param_5 + 0x20) + 0x18);
        if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
           (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
          native_sub_4327ec();
        }
        lVar2 = native_UnityEngine_Object__Instantiate_GameObject__4a6428
                          (uVar10,_Method_UnityEngine_Object_Instantiate_GameObject____12e5a40);
        if (((*(long *)(param_5 + 0x20) != 0) &&
            (lVar3 = *(long *)(*(long *)(param_5 + 0x20) + 0x18), lVar3 != 0)) &&
           (uVar10 = native_UnityEngine_Object__get_name_8e8098(lVar3,0), lVar2 != 0)) {
          native_UnityEngine_Object__set_name_8e9c08(lVar2,uVar10,0);
          plVar1 = (long *)native_UnityEngine_GameObject__GetComponent_BE2_BlockSectionHeader_Custom__4a2214
                                     (lVar2,
                                      _Method_UnityEngine_GameObject_GetComponent_I_BE2_Block____12e4998
                                     );
          lVar3 = native_UnityEngine_GameObject__GetComponent_BE2_BlockSectionHeader_Custom__4a2214
                            (lVar2,
                             _Method_UnityEngine_GameObject_GetComponent_BE2_Ins_FunctionBlock____12e4930
                            );
          plVar11 = (long *)(param_5 + 0x40);
          *plVar11 = lVar3;
          native_sub_4326e0(plVar11,lVar3);
          if (*plVar11 != 0) {
            native_BE2_Ins_FunctionBlock__Initialize_60717c
                      (*plVar11,*(undefined8 *)(param_5 + 0x48),0);
            plVar11 = (long *)native_UnityEngine_GameObject__GetComponent_BE2_BlockSectionHeader_Custom__4a2214
                                        (lVar2,
                                         _Method_UnityEngine_GameObject_GetComponent_I_BE2_BlockLayout____12e49a0
                                        );
            if ((*(long *)(param_5 + 0x48) != 0) &&
               (plVar12 = *(long **)(*(long *)(param_5 + 0x48) + 0x40), plVar12 != (long *)0x0)) {
              lVar3 = *plVar12;
              if ((ulong)*(ushort *)(lVar3 + 0x12a) != 0) {
                uVar8 = 0;
                piVar9 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar9 + -2) == _MG_BlocksEngine2_Block_I_BE2_Block_TypeInfo_12d4dd8
                     ) {
                    puVar4 = (undefined8 *)(lVar3 + (long)(*piVar9 + 3) * 0x10 + 0x138);
                    goto LAB_0057a34c;
                  }
                  uVar8 = uVar8 + 1;
                  piVar9 = piVar9 + 4;
                } while (uVar8 < *(ushort *)(lVar3 + 0x12a));
              }
              puVar4 = (undefined8 *)
                       native_sub_3c9b34(plVar12,
                                         _MG_BlocksEngine2_Block_I_BE2_Block_TypeInfo_12d4dd8,3);
LAB_0057a34c:
              plVar12 = (long *)(*(code *)*puVar4)(plVar12,puVar4[1]);
              if (plVar12 != (long *)0x0) {
                lVar3 = *plVar12;
                if ((ulong)*(ushort *)(lVar3 + 0x12a) != 0) {
                  uVar8 = 0;
                  piVar9 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar9 + -2) ==
                        _MG_BlocksEngine2_Block_I_BE2_BlockLayout_TypeInfo_12d4de0) {
                      puVar4 = (undefined8 *)(lVar3 + (long)(*piVar9 + 2) * 0x10 + 0x138);
                      goto LAB_0057a3c0;
                    }
                    uVar8 = uVar8 + 1;
                    piVar9 = piVar9 + 4;
                  } while (uVar8 < *(ushort *)(lVar3 + 0x12a));
                }
                puVar4 = (undefined8 *)
                         native_sub_3c9b34(plVar12,
                                           _MG_BlocksEngine2_Block_I_BE2_BlockLayout_TypeInfo_12d4de0
                                           ,2);
LAB_0057a3c0:
                lVar3 = (*(code *)*puVar4)(plVar12,puVar4[1]);
                if (lVar3 != 0) {
                  if (*(int *)(lVar3 + 0x18) == 0) {
LAB_0057ab88:
                    uVar10 = native_sub_43283c();
                    /* WARNING: Subroutine does not return */
                    native_sub_4327dc(uVar10,0);
                  }
                  plVar12 = *(long **)(lVar3 + 0x20);
                  if (plVar12 != (long *)0x0) {
                    lVar3 = *plVar12;
                    if ((ulong)*(ushort *)(lVar3 + 0x12a) != 0) {
                      uVar8 = 0;
                      piVar9 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
                      do {
                        if (*(long *)(piVar9 + -2) ==
                            _MG_BlocksEngine2_Block_I_BE2_BlockSection_TypeInfo_12d4de8) {
                          puVar4 = (undefined8 *)(lVar3 + (long)(*piVar9 + 1) * 0x10 + 0x138);
                          goto LAB_0057a440;
                        }
                        uVar8 = uVar8 + 1;
                        piVar9 = piVar9 + 4;
                      } while (uVar8 < *(ushort *)(lVar3 + 0x12a));
                    }
                    puVar4 = (undefined8 *)
                             native_sub_3c9b34(plVar12,
                                               _MG_BlocksEngine2_Block_I_BE2_BlockSection_TypeInfo_12d4de8
                                               ,1);
LAB_0057a440:
                    plVar12 = (long *)(*(code *)*puVar4)(plVar12,puVar4[1]);
                    if (plVar12 != (long *)0x0) {
                      lVar3 = *plVar12;
                      if ((ulong)*(ushort *)(lVar3 + 0x12a) != 0) {
                        uVar8 = 0;
                        piVar9 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
                        do {
                          if (*(long *)(piVar9 + -2) ==
                              _MG_BlocksEngine2_Block_I_BE2_BlockSectionHeader_TypeInfo_12d4df8) {
                            puVar4 = (undefined8 *)(lVar3 + (long)(*piVar9 + 1) * 0x10 + 0x138);
                            goto LAB_0057a4b4;
                          }
                          uVar8 = uVar8 + 1;
                          piVar9 = piVar9 + 4;
                        } while (uVar8 < *(ushort *)(lVar3 + 0x12a));
                      }
                      puVar4 = (undefined8 *)
                               native_sub_3c9b34(plVar12,
                                                 _MG_BlocksEngine2_Block_I_BE2_BlockSectionHeader_TypeInfo_12d4df8
                                                 ,1);
LAB_0057a4b4:
                      lVar3 = (*(code *)*puVar4)(plVar12,puVar4[1]);
                      if (lVar3 != 0) {
                        if (0 < (int)*(ulong *)(lVar3 + 0x18)) {
                          uVar8 = 0;
                          uVar7 = *(ulong *)(lVar3 + 0x18) & 0xffffffff;
                          do {
                            if (uVar7 <= uVar8) goto LAB_0057ab88;
                            plVar12 = *(long **)(lVar3 + uVar8 * 8 + 0x20);
                            uVar10 = param_4;
                            if (plVar12 != (long *)0x0) {
                              if ((*(byte *)(
                                            _MG_BlocksEngine2_Block_BE2_BlockSectionHeader_Custom_TypeInfo_12d3978
                                            + 300) <= *(byte *)(*plVar12 + 300)) &&
                                 (*(long *)(*(long *)(*plVar12 + 200) +
                                            (ulong)*(byte *)(
                                                  _MG_BlocksEngine2_Block_BE2_BlockSectionHeader_Custom_TypeInfo_12d3978
                                                  + 300) * 8 + -8) ==
                                  _MG_BlocksEngine2_Block_BE2_BlockSectionHeader_Custom_TypeInfo_12d3978
                                 )) {
                                lVar5 = native_MG_BlocksEngine2_Environment_BE2_FunctionBlocksManager__get_Instance_5fd2f8
                                                  (0);
                                if (lVar5 == 0) goto LAB_0057ab84;
                                uVar13 = *(undefined8 *)(lVar5 + 0x30);
                                uVar16 = native_UnityEngine_Vector3__get_zero_776668(0);
                                uVar17 = param_2;
                                uVar18 = param_3;
                                uVar10 = native_UnityEngine_Quaternion__get_identity_7628fc(0);
                                if (plVar11 == (long *)0x0) goto LAB_0057ab84;
                                lVar5 = *plVar11;
                                if ((ulong)*(ushort *)(lVar5 + 0x12a) != 0) {
                                  uVar7 = 0;
                                  piVar9 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
                                  do {
                                    if (*(long *)(piVar9 + -2) ==
                                        _MG_BlocksEngine2_Block_I_BE2_BlockLayout_TypeInfo_12d4de0)
                                    {
                                      puVar4 = (undefined8 *)
                                               (lVar5 + (long)(*piVar9 + 2) * 0x10 + 0x138);
                                      goto LAB_0057a5c4;
                                    }
                                    uVar7 = uVar7 + 1;
                                    piVar9 = piVar9 + 4;
                                  } while (uVar7 < *(ushort *)(lVar5 + 0x12a));
                                }
                                puVar4 = (undefined8 *)
                                         native_sub_3c9b34(plVar11,
                                                  _MG_BlocksEngine2_Block_I_BE2_BlockLayout_TypeInfo_12d4de0
                                                  ,2);
LAB_0057a5c4:
                                lVar5 = (*(code *)*puVar4)(plVar11,puVar4[1]);
                                if (lVar5 == 0) goto LAB_0057ab84;
                                if (*(int *)(lVar5 + 0x18) == 0) goto LAB_0057ab88;
                                plVar14 = *(long **)(lVar5 + 0x20);
                                if (plVar14 == (long *)0x0) goto LAB_0057ab84;
                                lVar5 = *plVar14;
                                if ((ulong)*(ushort *)(lVar5 + 0x12a) != 0) {
                                  uVar7 = 0;
                                  piVar9 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
                                  do {
                                    if (*(long *)(piVar9 + -2) ==
                                        _MG_BlocksEngine2_Block_I_BE2_BlockSection_TypeInfo_12d4de8)
                                    {
                                      puVar4 = (undefined8 *)
                                               (lVar5 + (long)(*piVar9 + 1) * 0x10 + 0x138);
                                      goto LAB_0057a644;
                                    }
                                    uVar7 = uVar7 + 1;
                                    piVar9 = piVar9 + 4;
                                  } while (uVar7 < *(ushort *)(lVar5 + 0x12a));
                                }
                                puVar4 = (undefined8 *)
                                         native_sub_3c9b34(plVar14,
                                                  _MG_BlocksEngine2_Block_I_BE2_BlockSection_TypeInfo_12d4de8
                                                  ,1);
LAB_0057a644:
                                plVar14 = (long *)(*(code *)*puVar4)(plVar14,puVar4[1]);
                                if (plVar14 == (long *)0x0) goto LAB_0057ab84;
                                lVar5 = *plVar14;
                                if ((ulong)*(ushort *)(lVar5 + 0x12a) != 0) {
                                  uVar7 = 0;
                                  piVar9 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
                                  do {
                                    if (*(long *)(piVar9 + -2) ==
                                        _MG_BlocksEngine2_Block_I_BE2_BlockSectionHeader_TypeInfo_12d4df8
                                       ) {
                                      puVar4 = (undefined8 *)(lVar5 + (long)*piVar9 * 0x10 + 0x138);
                                      goto LAB_0057a6b4;
                                    }
                                    uVar7 = uVar7 + 1;
                                    piVar9 = piVar9 + 4;
                                  } while (uVar7 < *(ushort *)(lVar5 + 0x12a));
                                }
                                puVar4 = (undefined8 *)
                                         native_sub_3c9b34(plVar14,
                                                  _MG_BlocksEngine2_Block_I_BE2_BlockSectionHeader_TypeInfo_12d4df8
                                                  ,0);
LAB_0057a6b4:
                                uVar6 = (*(code *)*puVar4)(plVar14,puVar4[1]);
                                if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 &
                                     1) != 0) &&
                                   (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
                                  native_sub_4327ec(_UnityEngine_Object_TypeInfo_12d54e0);
                                }
                                lVar5 = native_UnityEngine_Object__Instantiate_BE2_Ins_DefineFunction__4a67c0
                                                  (uVar16,param_2,param_3,uVar10,uVar17,uVar18,
                                                   param_4,uVar13,uVar6,
                                                                                                      
                                                  _Method_UnityEngine_Object_Instantiate_GameObject____12e5a88
                                                  );
                                if ((lVar5 == 0) ||
                                   (lVar5 = native_UnityEngine_GameObject__GetComponent_BE2_BlockSectionHeader_Custom__4a2214
                                                      (lVar5,
                                                  _Method_UnityEngine_GameObject_GetComponent_BE2_BlockSectionHeader_Custom____12e4910
                                                  ), lVar5 == 0)) goto LAB_0057ab84;
                                *(long *)(lVar5 + 0x20) = plVar12[4];
                                native_sub_4326e0();
                              }
                            }
                            uVar7 = (ulong)*(uint *)(lVar3 + 0x18);
                            uVar8 = uVar8 + 1;
                            param_4 = uVar10;
                          } while ((long)uVar8 < (long)(int)*(uint *)(lVar3 + 0x18));
                        }
                        if (plVar1 != (long *)0x0) {
                          lVar3 = *plVar1;
                          if ((ulong)*(ushort *)(lVar3 + 0x12a) != 0) {
                            uVar8 = 0;
                            piVar9 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
                            do {
                              if (*(long *)(piVar9 + -2) ==
                                  _MG_BlocksEngine2_Block_I_BE2_Block_TypeInfo_12d4dd8) {
                                puVar4 = (undefined8 *)(lVar3 + (long)(*piVar9 + 8) * 0x10 + 0x138);
                                goto LAB_0057a7b4;
                              }
                              uVar8 = uVar8 + 1;
                              piVar9 = piVar9 + 4;
                            } while (uVar8 < *(ushort *)(lVar3 + 0x12a));
                          }
                          puVar4 = (undefined8 *)
                                   native_sub_3c9b34(plVar1,
                                                  _MG_BlocksEngine2_Block_I_BE2_Block_TypeInfo_12d4dd8
                                                  ,8);
LAB_0057a7b4:
                          plVar11 = (long *)(*(code *)*puVar4)(plVar1,puVar4[1]);
                          if (plVar11 != (long *)0x0) {
                            lVar3 = *plVar11;
                            if ((ulong)*(ushort *)(lVar3 + 0x12a) != 0) {
                              uVar8 = 0;
                              piVar9 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
                              do {
                                if (*(long *)(piVar9 + -2) ==
                                    _MG_BlocksEngine2_DragDrop_I_BE2_Drag_TypeInfo_12d4e18) {
                                  puVar4 = (undefined8 *)
                                           (lVar3 + (long)(*piVar9 + 4) * 0x10 + 0x138);
                                  goto LAB_0057a828;
                                }
                                uVar8 = uVar8 + 1;
                                piVar9 = piVar9 + 4;
                              } while (uVar8 < *(ushort *)(lVar3 + 0x12a));
                            }
                            puVar4 = (undefined8 *)
                                     native_sub_3c9b34(plVar11,
                                                  _MG_BlocksEngine2_DragDrop_I_BE2_Drag_TypeInfo_12d4e18
                                                  ,4);
LAB_0057a828:
                            lVar3 = (*(code *)*puVar4)(plVar11,puVar4[1]);
                            lVar5 = native_MG_BlocksEngine2_DragDrop_BE2_DragDropManager__get_Instance_576470
                                              ();
                            if ((lVar5 != 0) && (lVar3 != 0)) {
                              native_UnityEngine_Transform__SetParent_7720e0
                                        (lVar3,*(undefined8 *)(lVar5 + 0x28),1,0);
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
                                    uVar8 = 0;
                                    piVar9 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
                                    do {
                                      if (*(long *)(piVar9 + -2) ==
                                          _MG_BlocksEngine2_Block_I_BE2_Block_TypeInfo_12d4dd8) {
                                        puVar4 = (undefined8 *)
                                                 (lVar3 + (long)(*piVar9 + 8) * 0x10 + 0x138);
                                        goto LAB_0057a924;
                                      }
                                      uVar8 = uVar8 + 1;
                                      piVar9 = piVar9 + 4;
                                    } while (uVar8 < *(ushort *)(lVar3 + 0x12a));
                                  }
                                  puVar4 = (undefined8 *)
                                           native_sub_3c9b34(plVar1,
                                                  _MG_BlocksEngine2_Block_I_BE2_Block_TypeInfo_12d4dd8
                                                  ,8);
LAB_0057a924:
                                  uVar10 = (*(code *)*puVar4)(plVar1,puVar4[1]);
                                  if (lVar2 != 0) {
                                    *(undefined8 *)(lVar2 + 0x30) = uVar10;
                                    native_sub_4326e0((undefined8 *)(lVar2 + 0x30),uVar10);
                                    lVar2 = *plVar1;
                                    if ((ulong)*(ushort *)(lVar2 + 0x12a) != 0) {
                                      uVar8 = 0;
                                      piVar9 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
                                      do {
                                        if (*(long *)(piVar9 + -2) ==
                                            _MG_BlocksEngine2_Block_I_BE2_Block_TypeInfo_12d4dd8) {
                                          puVar4 = (undefined8 *)
                                                   (lVar2 + (long)(*piVar9 + 8) * 0x10 + 0x138);
                                          goto LAB_0057a99c;
                                        }
                                        uVar8 = uVar8 + 1;
                                        piVar9 = piVar9 + 4;
                                      } while (uVar8 < *(ushort *)(lVar2 + 0x12a));
                                    }
                                    puVar4 = (undefined8 *)
                                             native_sub_3c9b34(plVar1,
                                                  _MG_BlocksEngine2_Block_I_BE2_Block_TypeInfo_12d4dd8
                                                  ,8);
LAB_0057a99c:
                                    plVar11 = (long *)(*(code *)*puVar4)(plVar1,puVar4[1]);
                                    if (plVar11 != (long *)0x0) {
                                      lVar2 = *plVar11;
                                      if ((ulong)*(ushort *)(lVar2 + 0x12a) != 0) {
                                        uVar8 = 0;
                                        piVar9 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
                                        do {
                                          if (*(long *)(piVar9 + -2) ==
                                              _MG_BlocksEngine2_DragDrop_I_BE2_Drag_TypeInfo_12d4e18
                                             ) {
                                            puVar4 = (undefined8 *)
                                                     (lVar2 + (long)*piVar9 * 0x10 + 0x138);
                                            goto LAB_0057aa04;
                                          }
                                          uVar8 = uVar8 + 1;
                                          piVar9 = piVar9 + 4;
                                        } while (uVar8 < *(ushort *)(lVar2 + 0x12a));
                                      }
                                      puVar4 = (undefined8 *)
                                               native_sub_3c9b34(plVar11,
                                                  _MG_BlocksEngine2_DragDrop_I_BE2_Drag_TypeInfo_12d4e18
                                                  ,0);
LAB_0057aa04:
                                      (*(code *)*puVar4)(plVar11,puVar4[1]);
                                      lVar2 = *plVar1;
                                      if ((ulong)*(ushort *)(lVar2 + 0x12a) != 0) {
                                        uVar8 = 0;
                                        piVar9 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
                                        do {
                                          if (*(long *)(piVar9 + -2) ==
                                              _MG_BlocksEngine2_Block_I_BE2_Block_TypeInfo_12d4dd8)
                                          {
                                            puVar4 = (undefined8 *)
                                                     (lVar2 + (long)(*piVar9 + 8) * 0x10 + 0x138);
                                            goto LAB_0057aa68;
                                          }
                                          uVar8 = uVar8 + 1;
                                          piVar9 = piVar9 + 4;
                                        } while (uVar8 < *(ushort *)(lVar2 + 0x12a));
                                      }
                                      puVar4 = (undefined8 *)
                                               native_sub_3c9b34(plVar1,
                                                  _MG_BlocksEngine2_Block_I_BE2_Block_TypeInfo_12d4dd8
                                                  ,8);
LAB_0057aa68:
                                      plVar11 = (long *)(*(code *)*puVar4)(plVar1,puVar4[1]);
                                      if (plVar11 != (long *)0x0) {
                                        lVar2 = *plVar11;
                                        if ((ulong)*(ushort *)(lVar2 + 0x12a) != 0) {
                                          uVar8 = 0;
                                          piVar9 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
                                          do {
                                            if (*(long *)(piVar9 + -2) ==
                                                _MG_BlocksEngine2_DragDrop_I_BE2_Drag_TypeInfo_12d4e18
                                               ) {
                                              puVar4 = (undefined8 *)
                                                       (lVar2 + (long)(*piVar9 + 2) * 0x10 + 0x138);
                                              goto LAB_0057aad4;
                                            }
                                            uVar8 = uVar8 + 1;
                                            piVar9 = piVar9 + 4;
                                          } while (uVar8 < *(ushort *)(lVar2 + 0x12a));
                                        }
                                        puVar4 = (undefined8 *)
                                                 native_sub_3c9b34(plVar11,
                                                  _MG_BlocksEngine2_DragDrop_I_BE2_Drag_TypeInfo_12d4e18
                                                  ,2);
LAB_0057aad4:
                                        (*(code *)*puVar4)(plVar11,puVar4[1]);
                                        lVar2 = *plVar1;
                                        if ((ulong)*(ushort *)(lVar2 + 0x12a) != 0) {
                                          uVar8 = 0;
                                          piVar9 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
                                          do {
                                            if (*(long *)(piVar9 + -2) ==
                                                _MG_BlocksEngine2_Block_I_BE2_Block_TypeInfo_12d4dd8
                                               ) {
                                              puVar4 = (undefined8 *)
                                                       (lVar2 + (long)*piVar9 * 0x10 + 0x138);
                                              goto LAB_0057ab34;
                                            }
                                            uVar8 = uVar8 + 1;
                                            piVar9 = piVar9 + 4;
                                          } while (uVar8 < *(ushort *)(lVar2 + 0x12a));
                                        }
                                        puVar4 = (undefined8 *)
                                                 native_sub_3c9b34(plVar1,
                                                  _MG_BlocksEngine2_Block_I_BE2_Block_TypeInfo_12d4dd8
                                                  ,0);
LAB_0057ab34:
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
LAB_0057ab84:
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* MG_BlocksEngine2.Horizontal.DragDrop.BE2_DragHorizontalSelectionFunction$$OnPointerUp @ 0x57ab94
 * void MG_BlocksEngine2_Horizontal_DragDrop_BE2_DragHorizontalSelectionFunction__OnPointerUp (MG_BlocksEngine2_Horizontal_DragDrop_BE2_DragHorizontalSelectionFunction_o* __this, const MethodInfo* method); */

/* MG_BlocksEngine2.Horizontal.DragDrop.BE2_DragHorizontalSelectionFunction$$OnPointerUp
   void MG_BlocksEngine2_Horizontal_DragDrop_BE2_DragHorizontalSelectionFunction__OnPointerUp
   (MG_BlocksEngine2_Horizontal_DragDrop_BE2_DragHorizontalSelectionFunction_o* __this, const
   MethodInfo* method); */

void native_MG_BlocksEngine2_Horizontal_DragDrop_BE2_DragHorizontalSelectionFunction__OnPointerUp_57ab94
               (void)

{
  return;
}



/* MG_BlocksEngine2.Horizontal.DragDrop.BE2_DragHorizontalSelectionFunction$$.ctor @ 0x57ab98
 * void MG_BlocksEngine2_Horizontal_DragDrop_BE2_DragHorizontalSelectionFunction___ctor (MG_BlocksEngine2_Horizontal_DragDrop_BE2_DragHorizontalSelectionFunction_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MG_BlocksEngine2.Horizontal.DragDrop.BE2_DragHorizontalSelectionFunction$$.ctor
   void MG_BlocksEngine2_Horizontal_DragDrop_BE2_DragHorizontalSelectionFunction___ctor
   (MG_BlocksEngine2_Horizontal_DragDrop_BE2_DragHorizontalSelectionFunction_o* __this, const
   MethodInfo* method); */

undefined1  [16]
native_MG_BlocksEngine2_Horizontal_DragDrop_BE2_DragHorizontalSelectionFunction___ctor_57ab98
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


