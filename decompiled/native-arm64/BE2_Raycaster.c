/* ARM64 IL2CPP native pseudocode from Ghidra.
 * Recovered implementation, not original C# source.
 * Function boundaries follow the IL2CPP method address table. */


/* MG_BlocksEngine2.DragDrop.BE2_Raycaster$$Awake @ 0x61814c
 * void MG_BlocksEngine2_DragDrop_BE2_Raycaster__Awake (MG_BlocksEngine2_DragDrop_BE2_Raycaster_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MG_BlocksEngine2.DragDrop.BE2_Raycaster$$Awake
   void MG_BlocksEngine2_DragDrop_BE2_Raycaster__Awake (MG_BlocksEngine2_DragDrop_BE2_Raycaster_o*
   __this, const MethodInfo* method); */

void native_MG_BlocksEngine2_DragDrop_BE2_Raycaster__Awake_61814c(long param_1)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  undefined8 uVar4;
  
  if ((bRam000000000133eea2 & 1) == 0) {
    native_sub_43273c(&Method_UnityEngine_Component_GetComponent_BE2_DragDropManager____12e2948);
    bRam000000000133eea2 = 1;
  }
  uVar4 = native_UnityEngine_Component__GetComponent_ActiveAnimation__49daec
                    (param_1,
                     _Method_UnityEngine_Component_GetComponent_BE2_DragDropManager____12e2948);
  *(undefined8 *)(param_1 + 0x18) = uVar4;
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



/* MG_BlocksEngine2.DragDrop.BE2_Raycaster$$AddRaycaster @ 0x6181a8
 * UnityEngine_UI_GraphicRaycaster_array* MG_BlocksEngine2_DragDrop_BE2_Raycaster__AddRaycaster (MG_BlocksEngine2_DragDrop_BE2_Raycaster_o* __this, UnityEngine_UI_GraphicRaycaster_o* raycaster, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MG_BlocksEngine2.DragDrop.BE2_Raycaster$$AddRaycaster
   UnityEngine_UI_GraphicRaycaster_array* MG_BlocksEngine2_DragDrop_BE2_Raycaster__AddRaycaster
   (MG_BlocksEngine2_DragDrop_BE2_Raycaster_o* __this, UnityEngine_UI_GraphicRaycaster_o* raycaster,
   const MethodInfo* method); */

undefined8
native_MG_BlocksEngine2_DragDrop_BE2_Raycaster__AddRaycaster_6181a8(long param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  long lVar2;
  ulong uVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  
  if ((bRam000000000133eea3 & 1) == 0) {
    native_sub_43273c(&Method_MG_BlocksEngine2_Utils_BE2_ArrayUtils_Add_GraphicRaycaster____12e2098)
    ;
    native_sub_43273c(&Method_MG_BlocksEngine2_Utils_BE2_ArrayUtils_Find_GraphicRaycaster____12e20d8
                     );
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    native_sub_43273c(&Method_System_Predicate_GraphicRaycaster___ctor___12ddae0);
    native_sub_43273c(&System_Predicate_GraphicRaycaster__TypeInfo_12d2d88);
    native_sub_43273c(&
                      Method_MG_BlocksEngine2_DragDrop_BE2_Raycaster___c__DisplayClass5_0__AddRaycaster_b__0___12e9680
                     );
    native_sub_43273c(&MG_BlocksEngine2_DragDrop_BE2_Raycaster___c__DisplayClass5_0_TypeInfo_12d7050
                     );
    bRam000000000133eea3 = 1;
  }
  lVar2 = native_sub_432808(
                           _MG_BlocksEngine2_DragDrop_BE2_Raycaster___c__DisplayClass5_0_TypeInfo_12d7050
                           );
  native_MG_BlocksEngine2_DragDrop_BE2_Raycaster___c__DisplayClass5_0___ctor_548a84(lVar2,0);
  if (lVar2 != 0) {
    puVar4 = (undefined8 *)(lVar2 + 0x10);
    *puVar4 = param_2;
    native_sub_4326e0(puVar4,param_2);
    uVar5 = *puVar4;
    if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    uVar3 = native_UnityEngine_Object__op_Inequality_8d76fc(uVar5,0,0);
    puVar1 = (undefined8 *)(param_1 + 0x28);
    if ((uVar3 & 1) != 0) {
      uVar5 = native_sub_432808(_System_Predicate_GraphicRaycaster__TypeInfo_12d2d88);
      native_System_Predicate_BaseInvokableCall____ctor_ac31d4
                (uVar5,lVar2,
                 _Method_MG_BlocksEngine2_DragDrop_BE2_Raycaster___c__DisplayClass5_0__AddRaycaster_b__0___12e9680
                 ,_Method_System_Predicate_GraphicRaycaster___ctor___12ddae0);
      uVar5 = native_MG_BlocksEngine2_Utils_BE2_ArrayUtils__Find_GraphicRaycaster__49b52c
                        (puVar1,uVar5,
                         _Method_MG_BlocksEngine2_Utils_BE2_ArrayUtils_Find_GraphicRaycaster____12e20d8
                        );
      if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
        native_sub_4327ec(_UnityEngine_Object_TypeInfo_12d54e0);
      }
      uVar3 = native_UnityEngine_Object__op_Equality_8e9a3c(uVar5,0,0);
      if ((uVar3 & 1) != 0) {
        native_MG_BlocksEngine2_Utils_BE2_ArrayUtils__Add_GraphicRaycaster__49b428
                  (puVar1,*puVar4,
                   _Method_MG_BlocksEngine2_Utils_BE2_ArrayUtils_Add_GraphicRaycaster____12e2098);
      }
    }
    return *puVar1;
  }
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* MG_BlocksEngine2.DragDrop.BE2_Raycaster$$RemoveRaycaster @ 0x618350
 * UnityEngine_UI_GraphicRaycaster_array* MG_BlocksEngine2_DragDrop_BE2_Raycaster__RemoveRaycaster (MG_BlocksEngine2_DragDrop_BE2_Raycaster_o* __this, UnityEngine_UI_GraphicRaycaster_o* raycaster, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MG_BlocksEngine2.DragDrop.BE2_Raycaster$$RemoveRaycaster
   UnityEngine_UI_GraphicRaycaster_array* MG_BlocksEngine2_DragDrop_BE2_Raycaster__RemoveRaycaster
   (MG_BlocksEngine2_DragDrop_BE2_Raycaster_o* __this, UnityEngine_UI_GraphicRaycaster_o* raycaster,
   const MethodInfo* method); */

undefined8
native_MG_BlocksEngine2_DragDrop_BE2_Raycaster__RemoveRaycaster_618350
          (long param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 uVar3;
  ulong uVar4;
  undefined8 *puVar5;
  
  if ((bRam000000000133eea4 & 1) == 0) {
    native_sub_43273c(&Method_MG_BlocksEngine2_Utils_BE2_ArrayUtils_Find_GraphicRaycaster____12e20d8
                     );
    native_sub_43273c(&
                      Method_MG_BlocksEngine2_Utils_BE2_ArrayUtils_Remove_GraphicRaycaster____12e20f0
                     );
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    native_sub_43273c(&Method_System_Predicate_GraphicRaycaster___ctor___12ddae0);
    native_sub_43273c(&System_Predicate_GraphicRaycaster__TypeInfo_12d2d88);
    native_sub_43273c(&
                      Method_MG_BlocksEngine2_DragDrop_BE2_Raycaster___c__DisplayClass6_0__RemoveRaycaster_b__0___12e9688
                     );
    native_sub_43273c(&MG_BlocksEngine2_DragDrop_BE2_Raycaster___c__DisplayClass6_0_TypeInfo_12d7058
                     );
    bRam000000000133eea4 = 1;
  }
  lVar2 = native_sub_432808(
                           _MG_BlocksEngine2_DragDrop_BE2_Raycaster___c__DisplayClass6_0_TypeInfo_12d7058
                           );
  native_MG_BlocksEngine2_DragDrop_BE2_Raycaster___c__DisplayClass6_0___ctor_548b04(lVar2,0);
  if (lVar2 != 0) {
    puVar5 = (undefined8 *)(lVar2 + 0x10);
    *puVar5 = param_2;
    native_sub_4326e0(puVar5,param_2);
    puVar1 = (undefined8 *)(param_1 + 0x28);
    uVar3 = native_sub_432808(_System_Predicate_GraphicRaycaster__TypeInfo_12d2d88);
    native_System_Predicate_BaseInvokableCall____ctor_ac31d4
              (uVar3,lVar2,
               _Method_MG_BlocksEngine2_DragDrop_BE2_Raycaster___c__DisplayClass6_0__RemoveRaycaster_b__0___12e9688
               ,_Method_System_Predicate_GraphicRaycaster___ctor___12ddae0);
    uVar3 = native_MG_BlocksEngine2_Utils_BE2_ArrayUtils__Find_GraphicRaycaster__49b52c
                      (puVar1,uVar3,
                       _Method_MG_BlocksEngine2_Utils_BE2_ArrayUtils_Find_GraphicRaycaster____12e20d8
                      );
    if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
      native_sub_4327ec(_UnityEngine_Object_TypeInfo_12d54e0);
    }
    uVar4 = native_UnityEngine_Object__op_Inequality_8d76fc(uVar3,0,0);
    if ((uVar4 & 1) != 0) {
      native_MG_BlocksEngine2_Utils_BE2_ArrayUtils__Remove_GraphicRaycaster__49b554
                (puVar1,*puVar5,
                 _Method_MG_BlocksEngine2_Utils_BE2_ArrayUtils_Remove_GraphicRaycaster____12e20f0);
    }
    return *puVar1;
  }
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* MG_BlocksEngine2.DragDrop.BE2_Raycaster$$GetDragAtPosition @ 0x6184c0
 * MG_BlocksEngine2_DragDrop_I_BE2_Drag_o* MG_BlocksEngine2_DragDrop_BE2_Raycaster__GetDragAtPosition (MG_BlocksEngine2_DragDrop_BE2_Raycaster_o* __this, UnityEngine_Vector2_o position, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MG_BlocksEngine2.DragDrop.BE2_Raycaster$$GetDragAtPosition
   MG_BlocksEngine2_DragDrop_I_BE2_Drag_o*
   MG_BlocksEngine2_DragDrop_BE2_Raycaster__GetDragAtPosition
   (MG_BlocksEngine2_DragDrop_BE2_Raycaster_o* __this, UnityEngine_Vector2_o position, const
   MethodInfo* method); */

long native_MG_BlocksEngine2_DragDrop_BE2_Raycaster__GetDragAtPosition_6184c0
               (undefined4 param_1,undefined4 param_2,long param_3)

{
  long *plVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  long *plVar8;
  uint uVar9;
  undefined8 uVar10;
  long lVar11;
  undefined4 uVar12;
  
  uVar12 = param_2;
  if ((bRam000000000133eea5 & 1) == 0) {
    native_sub_43273c(&Method_UnityEngine_GameObject_GetComponentInParent_I_BE2_Drag____12e4b30);
    native_sub_43273c(&Method_System_Collections_Generic_List_RaycastResult__AddRange___12dccf0);
    native_sub_43273c(&Method_System_Collections_Generic_List_RaycastResult___ctor___12dcce0);
    native_sub_43273c(&Method_System_Collections_Generic_List_RaycastResult__get_Count___12dcd08);
    native_sub_43273c(&Method_System_Collections_Generic_List_RaycastResult__get_Item___12dcd10);
    native_sub_43273c(&System_Collections_Generic_List_RaycastResult__TypeInfo_12d2b00);
    native_sub_43273c(&UnityEngine_EventSystems_PointerEventData_TypeInfo_12d5718);
    bRam000000000133eea5 = 1;
  }
  uVar10 = *(undefined8 *)(param_3 + 0x30);
  uVar5 = native_sub_432808(_UnityEngine_EventSystems_PointerEventData_TypeInfo_12d5718);
  native_UnityEngine_EventSystems_PointerEventData___ctor_a83414(uVar5,uVar10,0);
  plVar1 = (long *)(param_3 + 0x20);
  *(undefined8 *)(param_3 + 0x20) = uVar5;
  native_sub_4326e0(plVar1,uVar5);
  lVar6 = native_MG_BlocksEngine2_EditorScript_BE2_Inspector__get_Instance_602da4();
  if (lVar6 == 0) goto LAB_00618738;
  lVar11 = *plVar1;
  if (*(int *)(lVar6 + 0xd8) != 0) {
    lVar6 = native_MG_BlocksEngine2_EditorScript_BE2_Inspector__get_Instance_602da4();
    if (lVar6 == 0) goto LAB_00618738;
    lVar6 = native_MG_BlocksEngine2_EditorScript_BE2_Inspector__get_Camera_603238();
    lVar7 = native_MG_BlocksEngine2_DragDrop_BE2_Pointer__get_Instance_6171d4();
    if (((lVar7 == 0) ||
        (lVar7 = native_UnityEngine_Component__get_transform_8da62c(lVar7,0), lVar7 == 0)) ||
       (native_UnityEngine_Transform__get_position_77169c(lVar7,0), lVar6 == 0)) goto LAB_00618738;
    param_1 = native_UnityEngine_Camera__WorldToScreenPoint_8d9158(lVar6,0);
    param_2 = uVar12;
  }
  if (lVar11 != 0) {
    *(undefined4 *)(lVar11 + 0x100) = param_1;
    *(undefined4 *)(lVar11 + 0x104) = param_2;
    lVar6 = native_sub_432808(_System_Collections_Generic_List_RaycastResult__TypeInfo_12d2b00);
    native_System_Collections_Generic_List_RaycastResult____ctor_d47ff0
              (lVar6,_Method_System_Collections_Generic_List_RaycastResult___ctor___12dcce0);
    if (*(long *)(param_3 + 0x28) != 0) {
      iVar2 = *(int *)(*(long *)(param_3 + 0x28) + 0x18);
      if (iVar2 < 1) {
        if (lVar6 == 0) goto LAB_00618738;
      }
      else {
        lVar11 = 0;
        do {
          uVar5 = native_sub_432808(_System_Collections_Generic_List_RaycastResult__TypeInfo_12d2b00
                                   );
          native_System_Collections_Generic_List_RaycastResult____ctor_d47ff0
                    (uVar5,_Method_System_Collections_Generic_List_RaycastResult___ctor___12dcce0);
          lVar7 = *(long *)(param_3 + 0x28);
          if (lVar7 == 0) goto LAB_00618738;
          if (*(uint *)(lVar7 + 0x18) <= (uint)lVar11) {
            uVar5 = native_sub_43283c();
                    /* WARNING: Subroutine does not return */
            native_sub_4327dc(uVar5,0);
          }
          plVar8 = *(long **)(lVar7 + lVar11 * 8 + 0x20);
          if ((plVar8 == (long *)0x0) ||
             ((**(code **)(*plVar8 + 0x248))(plVar8,*plVar1,uVar5,*(undefined8 *)(*plVar8 + 0x250)),
             lVar6 == 0)) goto LAB_00618738;
          native_System_Collections_Generic_List_RaycastResult___AddRange_d490e0
                    (lVar6,uVar5,
                     _Method_System_Collections_Generic_List_RaycastResult__AddRange___12dccf0);
          lVar11 = lVar11 + 1;
        } while ((int)lVar11 < iVar2);
      }
      uVar3 = *(uint *)(lVar6 + 0x18);
      if (0 < (int)uVar3) {
        uVar9 = 0;
        lVar11 = 0x20;
        uVar4 = uVar3;
        while( true ) {
          if (uVar4 <= uVar9) {
            native_System_ThrowHelper__ThrowArgumentOutOfRangeException_9fe0f4(0);
          }
          lVar7 = *(long *)(*(long *)(lVar6 + 0x10) + lVar11);
          if (lVar7 == 0) goto LAB_00618738;
          lVar7 = native_UnityEngine_GameObject__GetComponentInParent_Canvas__4a23c0
                            (lVar7,
                             _Method_UnityEngine_GameObject_GetComponentInParent_I_BE2_Drag____12e4b30
                            );
          if (lVar7 != 0) {
            return lVar7;
          }
          uVar9 = uVar9 + 1;
          if ((int)uVar3 <= (int)uVar9) break;
          uVar4 = *(uint *)(lVar6 + 0x18);
          lVar11 = lVar11 + 0x50;
        }
      }
      return 0;
    }
  }
LAB_00618738:
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* MG_BlocksEngine2.DragDrop.BE2_Raycaster$$GetSpotAtPosition @ 0x618748
 * MG_BlocksEngine2_Block_I_BE2_Spot_o* MG_BlocksEngine2_DragDrop_BE2_Raycaster__GetSpotAtPosition (MG_BlocksEngine2_DragDrop_BE2_Raycaster_o* __this, UnityEngine_Vector3_o position, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MG_BlocksEngine2.DragDrop.BE2_Raycaster$$GetSpotAtPosition
   MG_BlocksEngine2_Block_I_BE2_Spot_o* MG_BlocksEngine2_DragDrop_BE2_Raycaster__GetSpotAtPosition
   (MG_BlocksEngine2_DragDrop_BE2_Raycaster_o* __this, UnityEngine_Vector3_o position, const
   MethodInfo* method); */

long native_MG_BlocksEngine2_DragDrop_BE2_Raycaster__GetSpotAtPosition_618748
               (undefined4 param_1,undefined4 param_2,long param_3)

{
  long *plVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  long *plVar8;
  ulong uVar9;
  undefined8 uVar10;
  uint uVar11;
  long lVar12;
  undefined4 uVar13;
  
  uVar13 = param_2;
  if ((bRam000000000133eea6 & 1) == 0) {
    native_sub_43273c(&Method_UnityEngine_GameObject_GetComponent_I_BE2_Spot____12e49c0);
    native_sub_43273c(&Method_System_Collections_Generic_List_RaycastResult__AddRange___12dccf0);
    native_sub_43273c(&Method_System_Collections_Generic_List_RaycastResult___ctor___12dcce0);
    native_sub_43273c(&Method_System_Collections_Generic_List_RaycastResult__get_Count___12dcd08);
    native_sub_43273c(&Method_System_Collections_Generic_List_RaycastResult__get_Item___12dcd10);
    native_sub_43273c(&System_Collections_Generic_List_RaycastResult__TypeInfo_12d2b00);
    native_sub_43273c(&UnityEngine_EventSystems_PointerEventData_TypeInfo_12d5718);
    bRam000000000133eea6 = 1;
  }
  uVar10 = *(undefined8 *)(param_3 + 0x30);
  uVar5 = native_sub_432808(_UnityEngine_EventSystems_PointerEventData_TypeInfo_12d5718);
  native_UnityEngine_EventSystems_PointerEventData___ctor_a83414(uVar5,uVar10,0);
  plVar1 = (long *)(param_3 + 0x20);
  *(undefined8 *)(param_3 + 0x20) = uVar5;
  native_sub_4326e0(plVar1,uVar5);
  lVar6 = native_MG_BlocksEngine2_EditorScript_BE2_Inspector__get_Instance_602da4();
  if (lVar6 == 0) goto LAB_006189d0;
  lVar12 = *plVar1;
  if (*(int *)(lVar6 + 0xd8) != 0) {
    lVar6 = native_MG_BlocksEngine2_EditorScript_BE2_Inspector__get_Instance_602da4();
    if (lVar6 == 0) goto LAB_006189d0;
    lVar6 = native_MG_BlocksEngine2_EditorScript_BE2_Inspector__get_Camera_603238();
    lVar7 = native_MG_BlocksEngine2_DragDrop_BE2_Pointer__get_Instance_6171d4();
    if (((lVar7 == 0) ||
        (lVar7 = native_UnityEngine_Component__get_transform_8da62c(lVar7,0), lVar7 == 0)) ||
       (native_UnityEngine_Transform__get_position_77169c(lVar7,0), lVar6 == 0)) goto LAB_006189d0;
    param_1 = native_UnityEngine_Camera__WorldToScreenPoint_8d9158(lVar6,0);
    param_2 = uVar13;
  }
  if (lVar12 != 0) {
    *(undefined4 *)(lVar12 + 0x100) = param_1;
    *(undefined4 *)(lVar12 + 0x104) = param_2;
    lVar6 = native_sub_432808(_System_Collections_Generic_List_RaycastResult__TypeInfo_12d2b00);
    native_System_Collections_Generic_List_RaycastResult____ctor_d47ff0
              (lVar6,_Method_System_Collections_Generic_List_RaycastResult___ctor___12dcce0);
    if (*(long *)(param_3 + 0x28) != 0) {
      iVar2 = *(int *)(*(long *)(param_3 + 0x28) + 0x18);
      if (iVar2 < 1) {
        if (lVar6 == 0) goto LAB_006189d0;
      }
      else {
        lVar12 = 0;
        do {
          uVar5 = native_sub_432808(_System_Collections_Generic_List_RaycastResult__TypeInfo_12d2b00
                                   );
          native_System_Collections_Generic_List_RaycastResult____ctor_d47ff0
                    (uVar5,_Method_System_Collections_Generic_List_RaycastResult___ctor___12dcce0);
          lVar7 = *(long *)(param_3 + 0x28);
          if (lVar7 == 0) goto LAB_006189d0;
          if (*(uint *)(lVar7 + 0x18) <= (uint)lVar12) {
            uVar5 = native_sub_43283c();
                    /* WARNING: Subroutine does not return */
            native_sub_4327dc(uVar5,0);
          }
          plVar8 = *(long **)(lVar7 + lVar12 * 8 + 0x20);
          if ((plVar8 == (long *)0x0) ||
             ((**(code **)(*plVar8 + 0x248))(plVar8,*plVar1,uVar5,*(undefined8 *)(*plVar8 + 0x250)),
             lVar6 == 0)) goto LAB_006189d0;
          native_System_Collections_Generic_List_RaycastResult___AddRange_d490e0
                    (lVar6,uVar5,
                     _Method_System_Collections_Generic_List_RaycastResult__AddRange___12dccf0);
          lVar12 = lVar12 + 1;
        } while ((int)lVar12 < iVar2);
      }
      uVar3 = *(uint *)(lVar6 + 0x18);
      if (0 < (int)uVar3) {
        uVar11 = 0;
        lVar12 = 0x20;
        uVar4 = uVar3;
        while( true ) {
          if (uVar4 <= uVar11) {
            native_System_ThrowHelper__ThrowArgumentOutOfRangeException_9fe0f4(0);
          }
          lVar7 = *(long *)(*(long *)(lVar6 + 0x10) + lVar12);
          if (lVar7 == 0) goto LAB_006189d0;
          uVar9 = native_UnityEngine_GameObject__get_activeSelf_8de6e8(lVar7,0);
          if (((uVar9 & 1) != 0) &&
             (lVar7 = native_UnityEngine_GameObject__GetComponent_BE2_BlockSectionHeader_Custom__4a2214
                                (lVar7,
                                 _Method_UnityEngine_GameObject_GetComponent_I_BE2_Spot____12e49c0),
             lVar7 != 0)) {
            return lVar7;
          }
          uVar11 = uVar11 + 1;
          if ((int)uVar3 <= (int)uVar11) break;
          uVar4 = *(uint *)(lVar6 + 0x18);
          lVar12 = lVar12 + 0x50;
        }
      }
      return 0;
    }
  }
LAB_006189d0:
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* MG_BlocksEngine2.DragDrop.BE2_Raycaster$$FindClosestSpotForBlock @ 0x6189e0
 * MG_BlocksEngine2_Block_I_BE2_Spot_o* MG_BlocksEngine2_DragDrop_BE2_Raycaster__FindClosestSpotForBlock (MG_BlocksEngine2_DragDrop_BE2_Raycaster_o* __this, MG_BlocksEngine2_DragDrop_I_BE2_Drag_o* drag, float maxDistance, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MG_BlocksEngine2.DragDrop.BE2_Raycaster$$FindClosestSpotForBlock
   MG_BlocksEngine2_Block_I_BE2_Spot_o*
   MG_BlocksEngine2_DragDrop_BE2_Raycaster__FindClosestSpotForBlock
   (MG_BlocksEngine2_DragDrop_BE2_Raycaster_o* __this, MG_BlocksEngine2_DragDrop_I_BE2_Drag_o* drag,
   float maxDistance, const MethodInfo* method); */

long * native_MG_BlocksEngine2_DragDrop_BE2_Raycaster__FindClosestSpotForBlock_6189e0
                 (float param_1,undefined8 param_2,long param_3,long *param_4)

{
  int iVar1;
  long lVar2;
  undefined8 *puVar3;
  long *plVar4;
  long *plVar5;
  ulong uVar6;
  int *piVar7;
  long *plVar8;
  long *plVar9;
  ulong uVar10;
  float fVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  float fVar15;
  
  if ((bRam000000000133eea7 & 1) == 0) {
    native_sub_43273c(&MG_BlocksEngine2_Block_BE2_SpotBlockBody_TypeInfo_12d3a50);
    native_sub_43273c(&MG_BlocksEngine2_Block_BE2_SpotOuterArea_TypeInfo_12d3a60);
    native_sub_43273c(&
                      Method_UnityEngine_Component_GetComponentInParent_BE2_ProgrammingEnv____12e2d08
                     );
    native_sub_43273c(&Method_UnityEngine_Component_GetComponentInParent_I_BE2_Drag____12e2d58);
    native_sub_43273c(&MG_BlocksEngine2_Block_I_BE2_Block_TypeInfo_12d4dd8);
    native_sub_43273c(&MG_BlocksEngine2_DragDrop_I_BE2_Drag_TypeInfo_12d4e18);
    native_sub_43273c(&MG_BlocksEngine2_Environment_I_BE2_ProgrammingEnv_TypeInfo_12d4e38);
    native_sub_43273c(&MG_BlocksEngine2_Block_I_BE2_Spot_TypeInfo_12d4e48);
    native_sub_43273c(&Method_System_Collections_Generic_List_I_BE2_Spot__get_Count___12dca30);
    native_sub_43273c(&Method_System_Collections_Generic_List_I_BE2_Spot__get_Item___12dca38);
    bRam000000000133eea7 = 1;
  }
  if ((*(long *)(param_3 + 0x18) != 0) &&
     (lVar2 = native_MG_BlocksEngine2_DragDrop_BE2_DragDropManager__get_SpotsList_578b58
                        (*(long *)(param_3 + 0x18),0), lVar2 != 0)) {
    iVar1 = *(int *)(lVar2 + 0x18);
    if (iVar1 < 1) {
      plVar8 = (long *)0x0;
    }
    else {
      fVar15 = INFINITY;
      uVar10 = 0;
      plVar8 = (long *)0x0;
      do {
        if ((*(long *)(param_3 + 0x18) == 0) ||
           (lVar2 = native_MG_BlocksEngine2_DragDrop_BE2_DragDropManager__get_SpotsList_578b58
                              (*(long *)(param_3 + 0x18),0), lVar2 == 0)) goto LAB_00618f90;
        if (*(uint *)(lVar2 + 0x18) <= uVar10) {
          native_System_ThrowHelper__ThrowArgumentOutOfRangeException_9fe0f4(0);
        }
        plVar9 = *(long **)(*(long *)(lVar2 + 0x10) + uVar10 * 8 + 0x20);
        if (plVar9 != (long *)0x0) {
          lVar2 = *plVar9;
          if ((*(byte *)(lVar2 + 300) <
               *(byte *)(_MG_BlocksEngine2_Block_BE2_SpotBlockBody_TypeInfo_12d3a50 + 300)) ||
             (*(long *)(*(long *)(lVar2 + 200) +
                        (ulong)*(byte *)(_MG_BlocksEngine2_Block_BE2_SpotBlockBody_TypeInfo_12d3a50
                                        + 300) * 8 + -8) !=
              _MG_BlocksEngine2_Block_BE2_SpotBlockBody_TypeInfo_12d3a50)) {
            if ((*(byte *)(_MG_BlocksEngine2_Block_BE2_SpotOuterArea_TypeInfo_12d3a60 + 300) <=
                 *(byte *)(lVar2 + 300)) &&
               (*(long *)(*(long *)(lVar2 + 200) +
                          (ulong)*(byte *)(
                                          _MG_BlocksEngine2_Block_BE2_SpotOuterArea_TypeInfo_12d3a60
                                          + 300) * 8 + -8) ==
                _MG_BlocksEngine2_Block_BE2_SpotOuterArea_TypeInfo_12d3a60)) {
              if ((ulong)*(ushort *)(lVar2 + 0x12a) != 0) {
                uVar6 = 0;
                piVar7 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar7 + -2) == _MG_BlocksEngine2_Block_I_BE2_Spot_TypeInfo_12d4e48)
                  {
                    puVar3 = (undefined8 *)(lVar2 + (long)(*piVar7 + 2) * 0x10 + 0x138);
                    goto LAB_00618bc4;
                  }
                  uVar6 = uVar6 + 1;
                  piVar7 = piVar7 + 4;
                } while (uVar6 < *(ushort *)(lVar2 + 0x12a));
              }
              puVar3 = (undefined8 *)
                       native_sub_3c9b34(plVar9,_MG_BlocksEngine2_Block_I_BE2_Spot_TypeInfo_12d4e48,
                                         2);
LAB_00618bc4:
              plVar4 = (long *)(*(code *)*puVar3)(plVar9,puVar3[1]);
              if (plVar4 == (long *)0x0) goto LAB_00618f90;
              lVar2 = *plVar4;
              if ((ulong)*(ushort *)(lVar2 + 0x12a) != 0) {
                uVar6 = 0;
                piVar7 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar7 + -2) == _MG_BlocksEngine2_Block_I_BE2_Block_TypeInfo_12d4dd8
                     ) {
                    puVar3 = (undefined8 *)(lVar2 + (long)(*piVar7 + 6) * 0x10 + 0x138);
                    goto LAB_00618c38;
                  }
                  uVar6 = uVar6 + 1;
                  piVar7 = piVar7 + 4;
                } while (uVar6 < *(ushort *)(lVar2 + 0x12a));
              }
              puVar3 = (undefined8 *)
                       native_sub_3c9b34(plVar4,_MG_BlocksEngine2_Block_I_BE2_Block_TypeInfo_12d4dd8
                                         ,6);
LAB_00618c38:
              lVar2 = (*(code *)*puVar3)(plVar4,puVar3[1]);
              if (lVar2 != 0) {
                lVar2 = *plVar9;
                goto LAB_00618c4c;
              }
            }
          }
          else {
LAB_00618c4c:
            if ((ulong)*(ushort *)(lVar2 + 0x12a) != 0) {
              uVar6 = 0;
              piVar7 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
              do {
                if (*(long *)(piVar7 + -2) == _MG_BlocksEngine2_Block_I_BE2_Spot_TypeInfo_12d4e48) {
                  puVar3 = (undefined8 *)(lVar2 + (long)*piVar7 * 0x10 + 0x138);
                  goto LAB_00618c9c;
                }
                uVar6 = uVar6 + 1;
                piVar7 = piVar7 + 4;
              } while (uVar6 < *(ushort *)(lVar2 + 0x12a));
            }
            puVar3 = (undefined8 *)
                     native_sub_3c9b34(plVar9,_MG_BlocksEngine2_Block_I_BE2_Spot_TypeInfo_12d4e48,0)
            ;
LAB_00618c9c:
            lVar2 = (*(code *)*puVar3)(plVar9,puVar3[1]);
            if ((lVar2 == 0) ||
               (lVar2 = native_UnityEngine_Component__get_gameObject_8da66c(lVar2,0), lVar2 == 0))
            goto LAB_00618f90;
            uVar6 = native_UnityEngine_GameObject__get_activeSelf_8de6e8(lVar2,0);
            if ((uVar6 & 1) != 0) {
              lVar2 = *plVar9;
              if ((ulong)*(ushort *)(lVar2 + 0x12a) != 0) {
                uVar6 = 0;
                piVar7 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar7 + -2) == _MG_BlocksEngine2_Block_I_BE2_Spot_TypeInfo_12d4e48)
                  {
                    puVar3 = (undefined8 *)(lVar2 + (long)*piVar7 * 0x10 + 0x138);
                    goto LAB_00618d18;
                  }
                  uVar6 = uVar6 + 1;
                  piVar7 = piVar7 + 4;
                } while (uVar6 < *(ushort *)(lVar2 + 0x12a));
              }
              puVar3 = (undefined8 *)
                       native_sub_3c9b34(plVar9,_MG_BlocksEngine2_Block_I_BE2_Spot_TypeInfo_12d4e48,
                                         0);
LAB_00618d18:
              lVar2 = (*(code *)*puVar3)(plVar9,puVar3[1]);
              if ((lVar2 == 0) ||
                 (plVar4 = (long *)native_UnityEngine_Component__GetComponentInParent_BE2_Canvas__49dc70
                                             (lVar2,
                                              _Method_UnityEngine_Component_GetComponentInParent_I_BE2_Drag____12e2d58
                                             ), plVar4 == (long *)0x0)) goto LAB_00618f90;
              lVar2 = *plVar4;
              if ((ulong)*(ushort *)(lVar2 + 0x12a) != 0) {
                uVar6 = 0;
                piVar7 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar7 + -2) ==
                      _MG_BlocksEngine2_DragDrop_I_BE2_Drag_TypeInfo_12d4e18) {
                    puVar3 = (undefined8 *)(lVar2 + (long)(*piVar7 + 4) * 0x10 + 0x138);
                    goto LAB_00618da0;
                  }
                  uVar6 = uVar6 + 1;
                  piVar7 = piVar7 + 4;
                } while (uVar6 < *(ushort *)(lVar2 + 0x12a));
              }
              puVar3 = (undefined8 *)
                       native_sub_3c9b34(plVar4,
                                         _MG_BlocksEngine2_DragDrop_I_BE2_Drag_TypeInfo_12d4e18,4);
LAB_00618da0:
              lVar2 = (*(code *)*puVar3)(plVar4,puVar3[1]);
              if (lVar2 == 0) goto LAB_00618f90;
              plVar5 = (long *)native_UnityEngine_Component__GetComponentInParent_BE2_Canvas__49dc70
                                         (lVar2,
                                          _Method_UnityEngine_Component_GetComponentInParent_BE2_ProgrammingEnv____12e2d08
                                         );
              if ((plVar4 != param_4) && (plVar5 != (long *)0x0)) {
                lVar2 = *plVar5;
                if ((ulong)*(ushort *)(lVar2 + 0x12a) != 0) {
                  uVar6 = 0;
                  piVar7 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar7 + -2) ==
                        _MG_BlocksEngine2_Environment_I_BE2_ProgrammingEnv_TypeInfo_12d4e38) {
                      puVar3 = (undefined8 *)(lVar2 + (long)(*piVar7 + 3) * 0x10 + 0x138);
                      goto LAB_00618e30;
                    }
                    uVar6 = uVar6 + 1;
                    piVar7 = piVar7 + 4;
                  } while (uVar6 < *(ushort *)(lVar2 + 0x12a));
                }
                puVar3 = (undefined8 *)
                         native_sub_3c9b34(plVar5,
                                           _MG_BlocksEngine2_Environment_I_BE2_ProgrammingEnv_TypeInfo_12d4e38
                                           ,3);
LAB_00618e30:
                uVar6 = (*(code *)*puVar3)(plVar5,puVar3[1]);
                if ((uVar6 & 1) != 0) {
                  if (param_4 == (long *)0x0) goto LAB_00618f90;
                  lVar2 = *param_4;
                  if ((ulong)*(ushort *)(lVar2 + 0x12a) != 0) {
                    uVar6 = 0;
                    piVar7 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
                    do {
                      if (*(long *)(piVar7 + -2) ==
                          _MG_BlocksEngine2_DragDrop_I_BE2_Drag_TypeInfo_12d4e18) {
                        puVar3 = (undefined8 *)(lVar2 + (long)(*piVar7 + 5) * 0x10 + 0x138);
                        goto LAB_00618ea4;
                      }
                      uVar6 = uVar6 + 1;
                      piVar7 = piVar7 + 4;
                    } while (uVar6 < *(ushort *)(lVar2 + 0x12a));
                  }
                  puVar3 = (undefined8 *)
                           native_sub_3c9b34(param_4,
                                             _MG_BlocksEngine2_DragDrop_I_BE2_Drag_TypeInfo_12d4e18,
                                             5);
LAB_00618ea4:
                  uVar12 = (*(code *)*puVar3)(param_4,puVar3[1]);
                  lVar2 = *plVar9;
                  uVar14 = param_2;
                  if ((ulong)*(ushort *)(lVar2 + 0x12a) != 0) {
                    uVar6 = 0;
                    piVar7 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
                    do {
                      if (*(long *)(piVar7 + -2) ==
                          _MG_BlocksEngine2_Block_I_BE2_Spot_TypeInfo_12d4e48) {
                        puVar3 = (undefined8 *)(lVar2 + (long)(*piVar7 + 1) * 0x10 + 0x138);
                        goto LAB_00618f10;
                      }
                      uVar6 = uVar6 + 1;
                      piVar7 = piVar7 + 4;
                    } while (uVar6 < *(ushort *)(lVar2 + 0x12a));
                  }
                  puVar3 = (undefined8 *)
                           native_sub_3c9b34(plVar9,
                                             _MG_BlocksEngine2_Block_I_BE2_Spot_TypeInfo_12d4e48,1);
LAB_00618f10:
                  uVar13 = (*(code *)*puVar3)(plVar9,puVar3[1]);
                  fVar11 = (float)native_UnityEngine_Vector2__Distance_7757a4
                                            (uVar12,param_2,uVar13,uVar14,0);
                  if (fVar11 < fVar15 && fVar11 <= param_1) {
                    plVar8 = plVar9;
                    fVar15 = fVar11;
                  }
                }
              }
            }
          }
        }
        uVar10 = uVar10 + 1;
      } while ((long)uVar10 < (long)iVar1);
    }
    return plVar8;
  }
LAB_00618f90:
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* MG_BlocksEngine2.DragDrop.BE2_Raycaster$$.ctor @ 0x618f94
 * void MG_BlocksEngine2_DragDrop_BE2_Raycaster___ctor (MG_BlocksEngine2_DragDrop_BE2_Raycaster_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MG_BlocksEngine2.DragDrop.BE2_Raycaster$$.ctor
   void MG_BlocksEngine2_DragDrop_BE2_Raycaster___ctor (MG_BlocksEngine2_DragDrop_BE2_Raycaster_o*
   __this, const MethodInfo* method); */

undefined1  [16] native_MG_BlocksEngine2_DragDrop_BE2_Raycaster___ctor_618f94(ulong param_1)

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


