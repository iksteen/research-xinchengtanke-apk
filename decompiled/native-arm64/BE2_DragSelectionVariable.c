/* ARM64 IL2CPP native pseudocode from Ghidra.
 * Recovered implementation, not original C# source.
 * Function boundaries follow the IL2CPP method address table. */


/* MG_BlocksEngine2.DragDrop.BE2_DragSelectionVariable$$get__dragDropManager @ 0x57e5ec
 * MG_BlocksEngine2_DragDrop_BE2_DragDropManager_o* MG_BlocksEngine2_DragDrop_BE2_DragSelectionVariable__get__dragDropManager (MG_BlocksEngine2_DragDrop_BE2_DragSelectionVariable_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MG_BlocksEngine2.DragDrop.BE2_DragSelectionVariable$$get__dragDropManager
   MG_BlocksEngine2_DragDrop_BE2_DragDropManager_o*
   MG_BlocksEngine2_DragDrop_BE2_DragSelectionVariable__get__dragDropManager
   (MG_BlocksEngine2_DragDrop_BE2_DragSelectionVariable_o* __this, const MethodInfo* method); */

undefined8
native_MG_BlocksEngine2_DragDrop_BE2_DragSelectionVariable__get__dragDropManager_57e5ec(void)

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



/* MG_BlocksEngine2.DragDrop.BE2_DragSelectionVariable$$get_Transform @ 0x57e5f0
 * UnityEngine_Transform_o* MG_BlocksEngine2_DragDrop_BE2_DragSelectionVariable__get_Transform (MG_BlocksEngine2_DragDrop_BE2_DragSelectionVariable_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MG_BlocksEngine2.DragDrop.BE2_DragSelectionVariable$$get_Transform
   UnityEngine_Transform_o* MG_BlocksEngine2_DragDrop_BE2_DragSelectionVariable__get_Transform
   (MG_BlocksEngine2_DragDrop_BE2_DragSelectionVariable_o* __this, const MethodInfo* method); */

undefined8
native_MG_BlocksEngine2_DragDrop_BE2_DragSelectionVariable__get_Transform_57e5f0(long param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  
  if ((bRam000000000133ead4 & 1) == 0) {
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    bRam000000000133ead4 = 1;
  }
  uVar2 = *(undefined8 *)(param_1 + 0x40);
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar1 = native_UnityEngine_Object__op_Implicit_8e1b98(uVar2,0);
  if ((uVar1 & 1) != 0) {
    return *(undefined8 *)(param_1 + 0x40);
  }
  if (pcRam0000000001340ab8 == (code *)0x0) {
    pcRam0000000001340ab8 = (code *)native_sub_4326f0(&UNK_00e2d0e1);
  }
                    /* WARNING: Could not recover jumptable at 0x008da668. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar2 = (*pcRam0000000001340ab8)(param_1);
  return uVar2;
}



/* MG_BlocksEngine2.DragDrop.BE2_DragSelectionVariable$$get_RayPoint @ 0x57e678
 * UnityEngine_Vector2_o MG_BlocksEngine2_DragDrop_BE2_DragSelectionVariable__get_RayPoint (MG_BlocksEngine2_DragDrop_BE2_DragSelectionVariable_o* __this, const MethodInfo* method); */

/* MG_BlocksEngine2.DragDrop.BE2_DragSelectionVariable$$get_RayPoint
   UnityEngine_Vector2_o MG_BlocksEngine2_DragDrop_BE2_DragSelectionVariable__get_RayPoint
   (MG_BlocksEngine2_DragDrop_BE2_DragSelectionVariable_o* __this, const MethodInfo* method); */

undefined4
native_MG_BlocksEngine2_DragDrop_BE2_DragSelectionVariable__get_RayPoint_57e678(long param_1)

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



/* MG_BlocksEngine2.DragDrop.BE2_DragSelectionVariable$$get_Block @ 0x57e694
 * MG_BlocksEngine2_Block_I_BE2_Block_o* MG_BlocksEngine2_DragDrop_BE2_DragSelectionVariable__get_Block (MG_BlocksEngine2_DragDrop_BE2_DragSelectionVariable_o* __this, const MethodInfo* method); */

/* MG_BlocksEngine2.DragDrop.BE2_DragSelectionVariable$$get_Block
   MG_BlocksEngine2_Block_I_BE2_Block_o*
   MG_BlocksEngine2_DragDrop_BE2_DragSelectionVariable__get_Block
   (MG_BlocksEngine2_DragDrop_BE2_DragSelectionVariable_o* __this, const MethodInfo* method); */

undefined8 native_MG_BlocksEngine2_DragDrop_BE2_DragSelectionVariable__get_Block_57e694(void)

{
  return 0;
}



/* MG_BlocksEngine2.DragDrop.BE2_DragSelectionVariable$$Awake @ 0x57e69c
 * void MG_BlocksEngine2_DragDrop_BE2_DragSelectionVariable__Awake (MG_BlocksEngine2_DragDrop_BE2_DragSelectionVariable_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MG_BlocksEngine2.DragDrop.BE2_DragSelectionVariable$$Awake
   void MG_BlocksEngine2_DragDrop_BE2_DragSelectionVariable__Awake
   (MG_BlocksEngine2_DragDrop_BE2_DragSelectionVariable_o* __this, const MethodInfo* method); */

void native_MG_BlocksEngine2_DragDrop_BE2_DragSelectionVariable__Awake_57e69c(long param_1)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  undefined8 uVar4;
  
  if ((bRam000000000133ead5 & 1) == 0) {
    native_sub_43273c(&
                      Method_UnityEngine_Component_GetComponentInParent_BE2_UI_BlocksSelectionViewer____12e2d10
                     );
    native_sub_43273c(&Method_UnityEngine_Component_GetComponentInParent_ScrollRect____12e2d68);
    native_sub_43273c(&Method_UnityEngine_Component_GetComponent_BE2_UI_SelectionBlock____12e2970);
    native_sub_43273c(&Method_UnityEngine_Component_GetComponent_RectTransform____12e2ad0);
    bRam000000000133ead5 = 1;
  }
  uVar4 = native_UnityEngine_Component__get_transform_8da62c(param_1,0);
  *(undefined8 *)(param_1 + 0x40) = uVar4;
  native_sub_4326e0(param_1 + 0x40);
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
  uVar4 = native_UnityEngine_Component__get_transform_8da62c(param_1,0);
  uVar4 = native_MG_BlocksEngine2_Utils_BE2_Text__GetBE2TextInChildren_61a254(uVar4,0);
  *(undefined8 *)(param_1 + 0x38) = uVar4;
  native_sub_4326e0(param_1 + 0x38);
  uVar4 = native_UnityEngine_Component__GetComponentInParent_BE2_Canvas__49dc70
                    (param_1,
                     _Method_UnityEngine_Component_GetComponentInParent_BE2_UI_BlocksSelectionViewer____12e2d10
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



/* MG_BlocksEngine2.DragDrop.BE2_DragSelectionVariable$$OnPointerDown @ 0x57e7c8
 * void MG_BlocksEngine2_DragDrop_BE2_DragSelectionVariable__OnPointerDown (MG_BlocksEngine2_DragDrop_BE2_DragSelectionVariable_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MG_BlocksEngine2.DragDrop.BE2_DragSelectionVariable$$OnPointerDown
   void MG_BlocksEngine2_DragDrop_BE2_DragSelectionVariable__OnPointerDown
   (MG_BlocksEngine2_DragDrop_BE2_DragSelectionVariable_o* __this, const MethodInfo* method); */

void native_MG_BlocksEngine2_DragDrop_BE2_DragSelectionVariable__OnPointerDown_57e7c8
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
  
  if ((bRam000000000133ead6 & 1) == 0) {
    native_sub_43273c(&MG_BlocksEngine2_Environment_I_BE2_ProgrammingEnv_TypeInfo_12d4e38);
    native_sub_43273c(&Method_System_Collections_Generic_List_I_BE2_ProgrammingEnv__Find___12dc9f0);
    native_sub_43273c(&Method_System_Predicate_I_BE2_ProgrammingEnv___ctor___12ddaf8);
    native_sub_43273c(&System_Predicate_I_BE2_ProgrammingEnv__TypeInfo_12d2da0);
    native_sub_43273c(&
                      Method_MG_BlocksEngine2_DragDrop_BE2_DragSelectionVariable___c__OnPointerDown_b__16_0___12e9630
                     );
    native_sub_43273c(&MG_BlocksEngine2_DragDrop_BE2_DragSelectionVariable___c_TypeInfo_12d7008);
    bRam000000000133ead6 = 1;
  }
  lVar1 = native_MG_BlocksEngine2_Core_BE2_ExecutionManager__get_Instance_564464();
  if (lVar1 != 0) {
    lVar1 = *(long *)(lVar1 + 0x20);
    if (((*(byte *)(_MG_BlocksEngine2_DragDrop_BE2_DragSelectionVariable___c_TypeInfo_12d7008 +
                   0x133) >> 2 & 1) != 0) &&
       (*(int *)(_MG_BlocksEngine2_DragDrop_BE2_DragSelectionVariable___c_TypeInfo_12d7008 + 0xe0)
        == 0)) {
      native_sub_4327ec();
    }
    puVar3 = *(undefined8 **)
              (_MG_BlocksEngine2_DragDrop_BE2_DragSelectionVariable___c_TypeInfo_12d7008 + 0xb8);
    lVar6 = puVar3[1];
    if (lVar6 == 0) {
      if (((*(byte *)(_MG_BlocksEngine2_DragDrop_BE2_DragSelectionVariable___c_TypeInfo_12d7008 +
                     0x133) >> 2 & 1) != 0) &&
         (*(int *)(_MG_BlocksEngine2_DragDrop_BE2_DragSelectionVariable___c_TypeInfo_12d7008 + 0xe0)
          == 0)) {
        native_sub_4327ec();
        puVar3 = *(undefined8 **)
                  (_MG_BlocksEngine2_DragDrop_BE2_DragSelectionVariable___c_TypeInfo_12d7008 + 0xb8)
        ;
      }
      uVar7 = *puVar3;
      lVar6 = native_sub_432808(_System_Predicate_I_BE2_ProgrammingEnv__TypeInfo_12d2da0);
      native_System_Predicate_BaseInvokableCall____ctor_ac31d4
                (lVar6,uVar7,
                 _Method_MG_BlocksEngine2_DragDrop_BE2_DragSelectionVariable___c__OnPointerDown_b__16_0___12e9630
                 ,_Method_System_Predicate_I_BE2_ProgrammingEnv___ctor___12ddaf8);
      plVar2 = (long *)(*(long *)(
                                 _MG_BlocksEngine2_DragDrop_BE2_DragSelectionVariable___c_TypeInfo_12d7008
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
            goto LAB_0057e964;
          }
          uVar4 = uVar4 + 1;
          piVar5 = piVar5 + 4;
        } while (uVar4 < *(ushort *)(lVar1 + 0x12a));
      }
      puVar3 = (undefined8 *)
               native_sub_3c9b34(plVar2,
                                 _MG_BlocksEngine2_Environment_I_BE2_ProgrammingEnv_TypeInfo_12d4e38
                                 ,0);
LAB_0057e964:
      lVar1 = (*(code *)*puVar3)(plVar2,puVar3[1]);
      if ((lVar1 != 0) &&
         (uVar8 = native_UnityEngine_Transform__get_localScale_771d80(lVar1,0), param_4 != 0)) {
        *(undefined4 *)(param_4 + 0x48) = uVar8;
        *(undefined4 *)(param_4 + 0x4c) = param_2;
        *(undefined4 *)(param_4 + 0x50) = param_3;
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* MG_BlocksEngine2.DragDrop.BE2_DragSelectionVariable$$OnRightPointerDownOrHold @ 0x57e9a0
 * void MG_BlocksEngine2_DragDrop_BE2_DragSelectionVariable__OnRightPointerDownOrHold (MG_BlocksEngine2_DragDrop_BE2_DragSelectionVariable_o* __this, const MethodInfo* method); */

/* MG_BlocksEngine2.DragDrop.BE2_DragSelectionVariable$$OnRightPointerDownOrHold
   void MG_BlocksEngine2_DragDrop_BE2_DragSelectionVariable__OnRightPointerDownOrHold
   (MG_BlocksEngine2_DragDrop_BE2_DragSelectionVariable_o* __this, const MethodInfo* method); */

void native_MG_BlocksEngine2_DragDrop_BE2_DragSelectionVariable__OnRightPointerDownOrHold_57e9a0
               (void)

{
  return;
}



/* MG_BlocksEngine2.DragDrop.BE2_DragSelectionVariable$$OnDrag @ 0x57e9a4
 * void MG_BlocksEngine2_DragDrop_BE2_DragSelectionVariable__OnDrag (MG_BlocksEngine2_DragDrop_BE2_DragSelectionVariable_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MG_BlocksEngine2.DragDrop.BE2_DragSelectionVariable$$OnDrag
   void MG_BlocksEngine2_DragDrop_BE2_DragSelectionVariable__OnDrag
   (MG_BlocksEngine2_DragDrop_BE2_DragSelectionVariable_o* __this, const MethodInfo* method); */

void native_MG_BlocksEngine2_DragDrop_BE2_DragSelectionVariable__OnDrag_57e9a4(long param_1)

{
  ulong uVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  undefined8 *puVar5;
  long *plVar6;
  long lVar7;
  int *piVar8;
  undefined8 uVar9;
  float fVar10;
  
  if ((bRam000000000133ead7 & 1) == 0) {
    native_sub_43273c(&
                      Method_MG_BlocksEngine2_Utils_BE2_Text_GetComponent_BE2_BlockSectionHeader_VariableLabel____12e22b8
                     );
    native_sub_43273c(&Method_UnityEngine_GameObject_GetComponent_I_BE2_Block____12e4998);
    native_sub_43273c(&MG_BlocksEngine2_Block_I_BE2_BlockLayout_TypeInfo_12d4de0);
    native_sub_43273c(&MG_BlocksEngine2_Block_I_BE2_BlockSectionHeaderItem_TypeInfo_12d4e08);
    native_sub_43273c(&MG_BlocksEngine2_Block_I_BE2_BlockSectionHeader_TypeInfo_12d4df8);
    native_sub_43273c(&MG_BlocksEngine2_Block_I_BE2_BlockSection_TypeInfo_12d4de8);
    native_sub_43273c(&MG_BlocksEngine2_Block_I_BE2_Block_TypeInfo_12d4dd8);
    native_sub_43273c(&MG_BlocksEngine2_DragDrop_I_BE2_Drag_TypeInfo_12d4e18);
    native_sub_43273c(&Method_UnityEngine_Object_Instantiate_GameObject____12e5a40);
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    bRam000000000133ead7 = 1;
  }
  uVar9 = *(undefined8 *)(param_1 + 0x30);
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar1 = native_UnityEngine_Object__op_Implicit_8e1b98(uVar9,0);
  if ((uVar1 & 1) != 0) {
    plVar2 = *(long **)(param_1 + 0x28);
    if (plVar2 == (long *)0x0) goto LAB_0057f1c8;
    (**(code **)(*plVar2 + 0x3c8))(plVar2,*(undefined8 *)(*plVar2 + 0x3d0));
    if (*(long *)(param_1 + 0x28) == 0) goto LAB_0057f1c8;
    native_UnityEngine_Behaviour__set_enabled_8d7b0c(*(long *)(param_1 + 0x28),0,0);
  }
  if (*(long *)(param_1 + 0x20) != 0) {
    uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x18);
    if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    lVar3 = native_UnityEngine_Object__Instantiate_GameObject__4a6428
                      (uVar9,_Method_UnityEngine_Object_Instantiate_GameObject____12e5a40);
    if (((*(long *)(param_1 + 0x20) != 0) &&
        (lVar4 = *(long *)(*(long *)(param_1 + 0x20) + 0x18), lVar4 != 0)) &&
       (uVar9 = native_UnityEngine_Object__get_name_8e8098(lVar4,0), lVar3 != 0)) {
      native_UnityEngine_Object__set_name_8e9c08(lVar3,uVar9,0);
      plVar2 = (long *)native_UnityEngine_GameObject__GetComponent_BE2_BlockSectionHeader_Custom__4a2214
                                 (lVar3,
                                  _Method_UnityEngine_GameObject_GetComponent_I_BE2_Block____12e4998
                                 );
      if (plVar2 != (long *)0x0) {
        lVar4 = *plVar2;
        if ((ulong)*(ushort *)(lVar4 + 0x12a) != 0) {
          uVar1 = 0;
          piVar8 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
          do {
            if (*(long *)(piVar8 + -2) == _MG_BlocksEngine2_Block_I_BE2_Block_TypeInfo_12d4dd8) {
              puVar5 = (undefined8 *)(lVar4 + (long)(*piVar8 + 8) * 0x10 + 0x138);
              goto LAB_0057eb8c;
            }
            uVar1 = uVar1 + 1;
            piVar8 = piVar8 + 4;
          } while (uVar1 < *(ushort *)(lVar4 + 0x12a));
        }
        puVar5 = (undefined8 *)
                 native_sub_3c9b34(plVar2,_MG_BlocksEngine2_Block_I_BE2_Block_TypeInfo_12d4dd8,8);
LAB_0057eb8c:
        plVar6 = (long *)(*(code *)*puVar5)(plVar2,puVar5[1]);
        if (plVar6 != (long *)0x0) {
          lVar4 = *plVar6;
          if ((ulong)*(ushort *)(lVar4 + 0x12a) != 0) {
            uVar1 = 0;
            piVar8 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
            do {
              if (*(long *)(piVar8 + -2) == _MG_BlocksEngine2_DragDrop_I_BE2_Drag_TypeInfo_12d4e18)
              {
                puVar5 = (undefined8 *)(lVar4 + (long)(*piVar8 + 4) * 0x10 + 0x138);
                goto LAB_0057ec00;
              }
              uVar1 = uVar1 + 1;
              piVar8 = piVar8 + 4;
            } while (uVar1 < *(ushort *)(lVar4 + 0x12a));
          }
          puVar5 = (undefined8 *)
                   native_sub_3c9b34(plVar6,_MG_BlocksEngine2_DragDrop_I_BE2_Drag_TypeInfo_12d4e18,4
                                    );
LAB_0057ec00:
          lVar4 = (*(code *)*puVar5)(plVar6,puVar5[1]);
          lVar7 = native_MG_BlocksEngine2_DragDrop_BE2_DragDropManager__get_Instance_576470();
          if ((lVar7 != 0) && (lVar4 != 0)) {
            native_UnityEngine_Transform__SetParent_7720e0(lVar4,*(undefined8 *)(lVar7 + 0x28),1,0);
            lVar4 = *plVar2;
            if ((ulong)*(ushort *)(lVar4 + 0x12a) != 0) {
              uVar1 = 0;
              piVar8 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
              do {
                if (*(long *)(piVar8 + -2) == _MG_BlocksEngine2_Block_I_BE2_Block_TypeInfo_12d4dd8)
                {
                  puVar5 = (undefined8 *)(lVar4 + (long)(*piVar8 + 3) * 0x10 + 0x138);
                  goto LAB_0057ec88;
                }
                uVar1 = uVar1 + 1;
                piVar8 = piVar8 + 4;
              } while (uVar1 < *(ushort *)(lVar4 + 0x12a));
            }
            puVar5 = (undefined8 *)
                     native_sub_3c9b34(plVar2,_MG_BlocksEngine2_Block_I_BE2_Block_TypeInfo_12d4dd8,3
                                      );
LAB_0057ec88:
            plVar6 = (long *)(*(code *)*puVar5)(plVar2,puVar5[1]);
            if (plVar6 != (long *)0x0) {
              lVar4 = *plVar6;
              if ((ulong)*(ushort *)(lVar4 + 0x12a) != 0) {
                uVar1 = 0;
                piVar8 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar8 + -2) ==
                      _MG_BlocksEngine2_Block_I_BE2_BlockLayout_TypeInfo_12d4de0) {
                    puVar5 = (undefined8 *)(lVar4 + (long)(*piVar8 + 2) * 0x10 + 0x138);
                    goto LAB_0057ecfc;
                  }
                  uVar1 = uVar1 + 1;
                  piVar8 = piVar8 + 4;
                } while (uVar1 < *(ushort *)(lVar4 + 0x12a));
              }
              puVar5 = (undefined8 *)
                       native_sub_3c9b34(plVar6,
                                         _MG_BlocksEngine2_Block_I_BE2_BlockLayout_TypeInfo_12d4de0,
                                         2);
LAB_0057ecfc:
              lVar4 = (*(code *)*puVar5)(plVar6,puVar5[1]);
              if (lVar4 != 0) {
                if (*(int *)(lVar4 + 0x18) == 0) {
LAB_0057f1cc:
                  uVar9 = native_sub_43283c();
                    /* WARNING: Subroutine does not return */
                  native_sub_4327dc(uVar9,0);
                }
                plVar6 = *(long **)(lVar4 + 0x20);
                if (plVar6 != (long *)0x0) {
                  lVar4 = *plVar6;
                  if ((ulong)*(ushort *)(lVar4 + 0x12a) != 0) {
                    uVar1 = 0;
                    piVar8 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
                    do {
                      if (*(long *)(piVar8 + -2) ==
                          _MG_BlocksEngine2_Block_I_BE2_BlockSection_TypeInfo_12d4de8) {
                        puVar5 = (undefined8 *)(lVar4 + (long)(*piVar8 + 1) * 0x10 + 0x138);
                        goto LAB_0057ed7c;
                      }
                      uVar1 = uVar1 + 1;
                      piVar8 = piVar8 + 4;
                    } while (uVar1 < *(ushort *)(lVar4 + 0x12a));
                  }
                  puVar5 = (undefined8 *)
                           native_sub_3c9b34(plVar6,
                                             _MG_BlocksEngine2_Block_I_BE2_BlockSection_TypeInfo_12d4de8
                                             ,1);
LAB_0057ed7c:
                  plVar6 = (long *)(*(code *)*puVar5)(plVar6,puVar5[1]);
                  if (plVar6 != (long *)0x0) {
                    lVar4 = *plVar6;
                    if ((ulong)*(ushort *)(lVar4 + 0x12a) != 0) {
                      uVar1 = 0;
                      piVar8 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
                      do {
                        if (*(long *)(piVar8 + -2) ==
                            _MG_BlocksEngine2_Block_I_BE2_BlockSectionHeader_TypeInfo_12d4df8) {
                          puVar5 = (undefined8 *)(lVar4 + (long)(*piVar8 + 1) * 0x10 + 0x138);
                          goto LAB_0057edf0;
                        }
                        uVar1 = uVar1 + 1;
                        piVar8 = piVar8 + 4;
                      } while (uVar1 < *(ushort *)(lVar4 + 0x12a));
                    }
                    puVar5 = (undefined8 *)
                             native_sub_3c9b34(plVar6,
                                               _MG_BlocksEngine2_Block_I_BE2_BlockSectionHeader_TypeInfo_12d4df8
                                               ,1);
LAB_0057edf0:
                    lVar4 = (*(code *)*puVar5)(plVar6,puVar5[1]);
                    if (lVar4 != 0) {
                      if (*(int *)(lVar4 + 0x18) == 0) goto LAB_0057f1cc;
                      plVar6 = *(long **)(lVar4 + 0x20);
                      if (plVar6 != (long *)0x0) {
                        lVar4 = *plVar6;
                        if ((ulong)*(ushort *)(lVar4 + 0x12a) != 0) {
                          uVar1 = 0;
                          piVar8 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
                          do {
                            if (*(long *)(piVar8 + -2) ==
                                _MG_BlocksEngine2_Block_I_BE2_BlockSectionHeaderItem_TypeInfo_12d4e08
                               ) {
                              puVar5 = (undefined8 *)(lVar4 + (long)*piVar8 * 0x10 + 0x138);
                              goto LAB_0057ee6c;
                            }
                            uVar1 = uVar1 + 1;
                            piVar8 = piVar8 + 4;
                          } while (uVar1 < *(ushort *)(lVar4 + 0x12a));
                        }
                        puVar5 = (undefined8 *)
                                 native_sub_3c9b34(plVar6,
                                                  _MG_BlocksEngine2_Block_I_BE2_BlockSectionHeaderItem_TypeInfo_12d4e08
                                                  ,0);
LAB_0057ee6c:
                        uVar9 = (*(code *)*puVar5)(plVar6,puVar5[1]);
                        lVar4 = native_MG_BlocksEngine2_Utils_BE2_Text__GetBE2Text_610e74(uVar9,0);
                        if ((*(long *)(param_1 + 0x38) != 0) &&
                           (uVar9 = native_MG_BlocksEngine2_Utils_BE2_Text__get_text_61a754
                                              (*(long *)(param_1 + 0x38),0), lVar4 != 0)) {
                          native_MG_BlocksEngine2_Utils_BE2_Text__set_text_610ef8(lVar4,uVar9,0);
                          lVar4 = native_MG_BlocksEngine2_Utils_BE2_Text__GetComponent_BE2_BlockSectionHeader_VariableLabel__49c794
                                            (lVar4,
                                             _Method_MG_BlocksEngine2_Utils_BE2_Text_GetComponent_BE2_BlockSectionHeader_VariableLabel____12e22b8
                                            );
                          if (lVar4 != 0) {
                            native_MG_BlocksEngine2_Block_BE2_BlockSectionHeader_VariableLabel__UpdateValues_568d4c
                                      ();
                            lVar4 = native_UnityEngine_GameObject__get_transform_8de5c8(lVar3,0);
                            if (lVar4 != 0) {
                              native_UnityEngine_Transform__set_localScale_771e30
                                        (*(undefined4 *)(param_1 + 0x48),lVar4,0);
                              lVar3 = native_UnityEngine_GameObject__get_transform_8de5c8(lVar3,0);
                              lVar4 = native_UnityEngine_Component__get_transform_8da62c(param_1,0);
                              if ((lVar4 != 0) &&
                                 (native_UnityEngine_Transform__get_position_77169c(lVar4,0),
                                 lVar3 != 0)) {
                                native_UnityEngine_Transform__set_position_77174c(lVar3,0);
                                lVar3 = native_MG_BlocksEngine2_DragDrop_BE2_DragDropManager__get_Instance_576470
                                                  ();
                                lVar4 = *plVar2;
                                if ((ulong)*(ushort *)(lVar4 + 0x12a) != 0) {
                                  uVar1 = 0;
                                  piVar8 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
                                  do {
                                    if (*(long *)(piVar8 + -2) ==
                                        _MG_BlocksEngine2_Block_I_BE2_Block_TypeInfo_12d4dd8) {
                                      puVar5 = (undefined8 *)
                                               (lVar4 + (long)(*piVar8 + 8) * 0x10 + 0x138);
                                      goto LAB_0057ef80;
                                    }
                                    uVar1 = uVar1 + 1;
                                    piVar8 = piVar8 + 4;
                                  } while (uVar1 < *(ushort *)(lVar4 + 0x12a));
                                }
                                puVar5 = (undefined8 *)
                                         native_sub_3c9b34(plVar2,
                                                  _MG_BlocksEngine2_Block_I_BE2_Block_TypeInfo_12d4dd8
                                                  ,8);
LAB_0057ef80:
                                uVar9 = (*(code *)*puVar5)(plVar2,puVar5[1]);
                                if (lVar3 != 0) {
                                  *(undefined8 *)(lVar3 + 0x30) = uVar9;
                                  native_sub_4326e0((undefined8 *)(lVar3 + 0x30),uVar9);
                                  lVar3 = *plVar2;
                                  if ((ulong)*(ushort *)(lVar3 + 0x12a) != 0) {
                                    uVar1 = 0;
                                    piVar8 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
                                    do {
                                      if (*(long *)(piVar8 + -2) ==
                                          _MG_BlocksEngine2_Block_I_BE2_Block_TypeInfo_12d4dd8) {
                                        puVar5 = (undefined8 *)
                                                 (lVar3 + (long)(*piVar8 + 8) * 0x10 + 0x138);
                                        goto LAB_0057eff8;
                                      }
                                      uVar1 = uVar1 + 1;
                                      piVar8 = piVar8 + 4;
                                    } while (uVar1 < *(ushort *)(lVar3 + 0x12a));
                                  }
                                  puVar5 = (undefined8 *)
                                           native_sub_3c9b34(plVar2,
                                                  _MG_BlocksEngine2_Block_I_BE2_Block_TypeInfo_12d4dd8
                                                  ,8);
LAB_0057eff8:
                                  plVar6 = (long *)(*(code *)*puVar5)(plVar2,puVar5[1]);
                                  if (plVar6 != (long *)0x0) {
                                    lVar3 = *plVar6;
                                    if ((ulong)*(ushort *)(lVar3 + 0x12a) != 0) {
                                      uVar1 = 0;
                                      piVar8 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
                                      do {
                                        if (*(long *)(piVar8 + -2) ==
                                            _MG_BlocksEngine2_DragDrop_I_BE2_Drag_TypeInfo_12d4e18)
                                        {
                                          puVar5 = (undefined8 *)
                                                   (lVar3 + (long)*piVar8 * 0x10 + 0x138);
                                          goto LAB_0057f060;
                                        }
                                        uVar1 = uVar1 + 1;
                                        piVar8 = piVar8 + 4;
                                      } while (uVar1 < *(ushort *)(lVar3 + 0x12a));
                                    }
                                    puVar5 = (undefined8 *)
                                             native_sub_3c9b34(plVar6,
                                                  _MG_BlocksEngine2_DragDrop_I_BE2_Drag_TypeInfo_12d4e18
                                                  ,0);
LAB_0057f060:
                                    (*(code *)*puVar5)(plVar6,puVar5[1]);
                                    lVar3 = *plVar2;
                                    if ((ulong)*(ushort *)(lVar3 + 0x12a) != 0) {
                                      uVar1 = 0;
                                      piVar8 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
                                      do {
                                        if (*(long *)(piVar8 + -2) ==
                                            _MG_BlocksEngine2_Block_I_BE2_Block_TypeInfo_12d4dd8) {
                                          puVar5 = (undefined8 *)
                                                   (lVar3 + (long)(*piVar8 + 8) * 0x10 + 0x138);
                                          goto LAB_0057f0c4;
                                        }
                                        uVar1 = uVar1 + 1;
                                        piVar8 = piVar8 + 4;
                                      } while (uVar1 < *(ushort *)(lVar3 + 0x12a));
                                    }
                                    puVar5 = (undefined8 *)
                                             native_sub_3c9b34(plVar2,
                                                  _MG_BlocksEngine2_Block_I_BE2_Block_TypeInfo_12d4dd8
                                                  ,8);
LAB_0057f0c4:
                                    plVar6 = (long *)(*(code *)*puVar5)(plVar2,puVar5[1]);
                                    if (plVar6 != (long *)0x0) {
                                      lVar3 = *plVar6;
                                      if ((ulong)*(ushort *)(lVar3 + 0x12a) != 0) {
                                        uVar1 = 0;
                                        piVar8 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
                                        do {
                                          if (*(long *)(piVar8 + -2) ==
                                              _MG_BlocksEngine2_DragDrop_I_BE2_Drag_TypeInfo_12d4e18
                                             ) {
                                            puVar5 = (undefined8 *)
                                                     (lVar3 + (long)(*piVar8 + 2) * 0x10 + 0x138);
                                            goto LAB_0057f130;
                                          }
                                          uVar1 = uVar1 + 1;
                                          piVar8 = piVar8 + 4;
                                        } while (uVar1 < *(ushort *)(lVar3 + 0x12a));
                                      }
                                      puVar5 = (undefined8 *)
                                               native_sub_3c9b34(plVar6,
                                                  _MG_BlocksEngine2_DragDrop_I_BE2_Drag_TypeInfo_12d4e18
                                                  ,2);
LAB_0057f130:
                                      (*(code *)*puVar5)(plVar6,puVar5[1]);
                                      lVar3 = *plVar2;
                                      if ((ulong)*(ushort *)(lVar3 + 0x12a) != 0) {
                                        uVar1 = 0;
                                        piVar8 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
                                        do {
                                          if (*(long *)(piVar8 + -2) ==
                                              _MG_BlocksEngine2_Block_I_BE2_Block_TypeInfo_12d4dd8)
                                          {
                                            puVar5 = (undefined8 *)
                                                     (lVar3 + (long)*piVar8 * 0x10 + 0x138);
                                            goto LAB_0057f190;
                                          }
                                          uVar1 = uVar1 + 1;
                                          piVar8 = piVar8 + 4;
                                        } while (uVar1 < *(ushort *)(lVar3 + 0x12a));
                                      }
                                      puVar5 = (undefined8 *)
                                               native_sub_3c9b34(plVar2,
                                                  _MG_BlocksEngine2_Block_I_BE2_Block_TypeInfo_12d4dd8
                                                  ,0);
LAB_0057f190:
                                      lVar3 = (*(code *)*puVar5)(plVar2,puVar5[1]);
                                      fVar10 = (float)native_UnityEngine_Vector3__get_zero_776668(0)
                                      ;
                                      if (lVar3 != 0) {
                                        native_UnityEngine_Quaternion__Internal_FromEulerRad_762560
                                                  (fVar10 * 0.017453292,lVar3,0);
                                        if (pcRam000000000133ff08 == (code *)0x0) {
                                          pcRam000000000133ff08 =
                                               (code *)native_sub_4326f0(&UNK_00e2aec2);
                                        }
                                        (*pcRam000000000133ff08)(lVar3,&stack0xffffffffffffffd0);
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
LAB_0057f1c8:
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* MG_BlocksEngine2.DragDrop.BE2_DragSelectionVariable$$OnPointerUp @ 0x57f1d8
 * void MG_BlocksEngine2_DragDrop_BE2_DragSelectionVariable__OnPointerUp (MG_BlocksEngine2_DragDrop_BE2_DragSelectionVariable_o* __this, const MethodInfo* method); */

/* MG_BlocksEngine2.DragDrop.BE2_DragSelectionVariable$$OnPointerUp
   void MG_BlocksEngine2_DragDrop_BE2_DragSelectionVariable__OnPointerUp
   (MG_BlocksEngine2_DragDrop_BE2_DragSelectionVariable_o* __this, const MethodInfo* method); */

void native_MG_BlocksEngine2_DragDrop_BE2_DragSelectionVariable__OnPointerUp_57f1d8(void)

{
  return;
}



/* MG_BlocksEngine2.DragDrop.BE2_DragSelectionVariable$$.ctor @ 0x57f1dc
 * void MG_BlocksEngine2_DragDrop_BE2_DragSelectionVariable___ctor (MG_BlocksEngine2_DragDrop_BE2_DragSelectionVariable_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MG_BlocksEngine2.DragDrop.BE2_DragSelectionVariable$$.ctor
   void MG_BlocksEngine2_DragDrop_BE2_DragSelectionVariable___ctor
   (MG_BlocksEngine2_DragDrop_BE2_DragSelectionVariable_o* __this, const MethodInfo* method); */

undefined1  [16]
native_MG_BlocksEngine2_DragDrop_BE2_DragSelectionVariable___ctor_57f1dc
          (undefined1 param_1 [16],undefined4 param_2,undefined4 param_3,ulong param_4)

{
  undefined4 uVar1;
  undefined1 auVar2 [16];
  
  uVar1 = native_UnityEngine_Vector3__get_one_776a20(0);
  *(undefined4 *)(param_4 + 0x48) = uVar1;
  *(undefined4 *)(param_4 + 0x4c) = param_2;
  *(undefined4 *)(param_4 + 0x50) = param_3;
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


