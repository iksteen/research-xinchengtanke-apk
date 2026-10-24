/* ARM64 IL2CPP native pseudocode from Ghidra.
 * Recovered implementation, not original C# source.
 * Function boundaries follow the IL2CPP method address table. */


/* MG_BlocksEngine2.DragDrop.BE2_DragOperation$$get__dragDropManager @ 0x57abcc
 * MG_BlocksEngine2_DragDrop_BE2_DragDropManager_o* MG_BlocksEngine2_DragDrop_BE2_DragOperation__get__dragDropManager (MG_BlocksEngine2_DragDrop_BE2_DragOperation_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MG_BlocksEngine2.DragDrop.BE2_DragOperation$$get__dragDropManager
   MG_BlocksEngine2_DragDrop_BE2_DragDropManager_o*
   MG_BlocksEngine2_DragDrop_BE2_DragOperation__get__dragDropManager
   (MG_BlocksEngine2_DragDrop_BE2_DragOperation_o* __this, const MethodInfo* method); */

undefined8 native_MG_BlocksEngine2_DragDrop_BE2_DragOperation__get__dragDropManager_57abcc(void)

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



/* MG_BlocksEngine2.DragDrop.BE2_DragOperation$$get_Transform @ 0x57abd0
 * UnityEngine_Transform_o* MG_BlocksEngine2_DragDrop_BE2_DragOperation__get_Transform (MG_BlocksEngine2_DragDrop_BE2_DragOperation_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MG_BlocksEngine2.DragDrop.BE2_DragOperation$$get_Transform
   UnityEngine_Transform_o* MG_BlocksEngine2_DragDrop_BE2_DragOperation__get_Transform
   (MG_BlocksEngine2_DragDrop_BE2_DragOperation_o* __this, const MethodInfo* method); */

undefined8 native_MG_BlocksEngine2_DragDrop_BE2_DragOperation__get_Transform_57abd0(long param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  
  if ((bRam000000000133eac1 & 1) == 0) {
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    bRam000000000133eac1 = 1;
  }
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar1 = native_UnityEngine_Object__op_Implicit_8e1b98(uVar2,0);
  if ((uVar1 & 1) != 0) {
    return *(undefined8 *)(param_1 + 0x28);
  }
  if (pcRam0000000001340ab8 == (code *)0x0) {
    pcRam0000000001340ab8 = (code *)native_sub_4326f0(&UNK_00e2d0e1);
  }
                    /* WARNING: Could not recover jumptable at 0x008da668. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar2 = (*pcRam0000000001340ab8)(param_1);
  return uVar2;
}



/* MG_BlocksEngine2.DragDrop.BE2_DragOperation$$get_RayPoint @ 0x57ac58
 * UnityEngine_Vector2_o MG_BlocksEngine2_DragDrop_BE2_DragOperation__get_RayPoint (MG_BlocksEngine2_DragDrop_BE2_DragOperation_o* __this, const MethodInfo* method); */

/* MG_BlocksEngine2.DragDrop.BE2_DragOperation$$get_RayPoint
   UnityEngine_Vector2_o MG_BlocksEngine2_DragDrop_BE2_DragOperation__get_RayPoint
   (MG_BlocksEngine2_DragDrop_BE2_DragOperation_o* __this, const MethodInfo* method); */

undefined4 native_MG_BlocksEngine2_DragDrop_BE2_DragOperation__get_RayPoint_57ac58(long param_1)

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



/* MG_BlocksEngine2.DragDrop.BE2_DragOperation$$get_Block @ 0x57ac74
 * MG_BlocksEngine2_Block_I_BE2_Block_o* MG_BlocksEngine2_DragDrop_BE2_DragOperation__get_Block (MG_BlocksEngine2_DragDrop_BE2_DragOperation_o* __this, const MethodInfo* method); */

/* MG_BlocksEngine2.DragDrop.BE2_DragOperation$$get_Block
   MG_BlocksEngine2_Block_I_BE2_Block_o* MG_BlocksEngine2_DragDrop_BE2_DragOperation__get_Block
   (MG_BlocksEngine2_DragDrop_BE2_DragOperation_o* __this, const MethodInfo* method); */

undefined8 native_MG_BlocksEngine2_DragDrop_BE2_DragOperation__get_Block_57ac74(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* MG_BlocksEngine2.DragDrop.BE2_DragOperation$$set_Block @ 0x57ac7c
 * void MG_BlocksEngine2_DragDrop_BE2_DragOperation__set_Block (MG_BlocksEngine2_DragDrop_BE2_DragOperation_o* __this, MG_BlocksEngine2_Block_I_BE2_Block_o* value, const MethodInfo* method); */

/* MG_BlocksEngine2.DragDrop.BE2_DragOperation$$set_Block
   void MG_BlocksEngine2_DragDrop_BE2_DragOperation__set_Block
   (MG_BlocksEngine2_DragDrop_BE2_DragOperation_o* __this, MG_BlocksEngine2_Block_I_BE2_Block_o*
   value, const MethodInfo* method); */

void native_MG_BlocksEngine2_DragDrop_BE2_DragOperation__set_Block_57ac7c
               (long param_1,undefined8 param_2)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  
  puVar4 = (undefined8 *)(param_1 + 0x30);
  *puVar4 = param_2;
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



/* MG_BlocksEngine2.DragDrop.BE2_DragOperation$$Awake @ 0x57ac84
 * void MG_BlocksEngine2_DragDrop_BE2_DragOperation__Awake (MG_BlocksEngine2_DragDrop_BE2_DragOperation_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MG_BlocksEngine2.DragDrop.BE2_DragOperation$$Awake
   void MG_BlocksEngine2_DragDrop_BE2_DragOperation__Awake
   (MG_BlocksEngine2_DragDrop_BE2_DragOperation_o* __this, const MethodInfo* method); */

void native_MG_BlocksEngine2_DragDrop_BE2_DragOperation__Awake_57ac84(long param_1)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  undefined8 uVar4;
  
  if ((bRam000000000133eac2 & 1) == 0) {
    native_sub_43273c(&Method_UnityEngine_Component_GetComponent_I_BE2_Block____12e2a08);
    native_sub_43273c(&Method_UnityEngine_Component_GetComponent_RectTransform____12e2ad0);
    bRam000000000133eac2 = 1;
  }
  uVar4 = native_UnityEngine_Component__get_transform_8da62c(param_1,0);
  *(undefined8 *)(param_1 + 0x28) = uVar4;
  native_sub_4326e0(param_1 + 0x28);
  uVar4 = native_UnityEngine_Component__GetComponent_ActiveAnimation__49daec
                    (param_1,_Method_UnityEngine_Component_GetComponent_RectTransform____12e2ad0);
  *(undefined8 *)(param_1 + 0x18) = uVar4;
  native_sub_4326e0(param_1 + 0x18);
  uVar4 = native_UnityEngine_Component__GetComponent_ActiveAnimation__49daec
                    (param_1,_Method_UnityEngine_Component_GetComponent_I_BE2_Block____12e2a08);
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



/* MG_BlocksEngine2.DragDrop.BE2_DragOperation$$OnPointerDown @ 0x57ad2c
 * void MG_BlocksEngine2_DragDrop_BE2_DragOperation__OnPointerDown (MG_BlocksEngine2_DragDrop_BE2_DragOperation_o* __this, const MethodInfo* method); */

/* MG_BlocksEngine2.DragDrop.BE2_DragOperation$$OnPointerDown
   void MG_BlocksEngine2_DragDrop_BE2_DragOperation__OnPointerDown
   (MG_BlocksEngine2_DragDrop_BE2_DragOperation_o* __this, const MethodInfo* method); */

void native_MG_BlocksEngine2_DragDrop_BE2_DragOperation__OnPointerDown_57ad2c(void)

{
  return;
}



/* MG_BlocksEngine2.DragDrop.BE2_DragOperation$$OnRightPointerDownOrHold @ 0x57ad30
 * void MG_BlocksEngine2_DragDrop_BE2_DragOperation__OnRightPointerDownOrHold (MG_BlocksEngine2_DragDrop_BE2_DragOperation_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MG_BlocksEngine2.DragDrop.BE2_DragOperation$$OnRightPointerDownOrHold
   void MG_BlocksEngine2_DragDrop_BE2_DragOperation__OnRightPointerDownOrHold
   (MG_BlocksEngine2_DragDrop_BE2_DragOperation_o* __this, const MethodInfo* method); */

void native_MG_BlocksEngine2_DragDrop_BE2_DragOperation__OnRightPointerDownOrHold_57ad30
               (long param_1)

{
  ushort uVar1;
  long lVar2;
  undefined8 uVar3;
  ulong uVar4;
  int *piVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  undefined8 *puVar9;
  long *plVar10;
  
  if ((bRam000000000133eac3 & 1) == 0) {
    native_sub_43273c(&Method_System_Array_Empty_string____12dedf8);
    native_sub_43273c(&
                      Method_MG_BlocksEngine2_UI_BE2_UI_ContextMenuManager_OpenContextMenu_I_BE2_Block____12e22d0
                     );
    bRam000000000133eac3 = 1;
  }
  lVar2 = native_MG_BlocksEngine2_UI_BE2_UI_ContextMenuManager__get_instance_dc6a44(0);
  lVar8 = _Method_System_Array_Empty_string____12dedf8;
  uVar6 = *(undefined8 *)(param_1 + 0x30);
  lVar7 = **(long **)(_Method_System_Array_Empty_string____12dedf8 + 0x30);
  uVar1 = *(ushort *)(lVar7 + 0x132);
  if ((uVar1 & 1) == 0) {
    native_sub_3c9850(lVar7);
    uVar1 = *(ushort *)(lVar7 + 0x132);
  }
  if ((uVar1 >> 10 & 1) != 0) {
    lVar7 = **(long **)(lVar8 + 0x30);
    if ((*(byte *)(lVar7 + 0x132) & 1) == 0) {
      native_sub_3c9850(lVar7);
    }
    if (*(int *)(lVar7 + 0xe0) == 0) {
      lVar7 = **(long **)(lVar8 + 0x30);
      if ((*(byte *)(lVar7 + 0x132) & 1) == 0) {
        native_sub_3c9850(lVar7);
      }
      native_sub_4327ec(lVar7);
    }
  }
  lVar8 = **(long **)(lVar8 + 0x30);
  if ((*(byte *)(lVar8 + 0x132) & 1) == 0) {
    native_sub_3c9850(lVar8);
  }
  lVar7 = 
  _Method_MG_BlocksEngine2_UI_BE2_UI_ContextMenuManager_OpenContextMenu_I_BE2_Block____12e22d0;
  if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    native_sub_432810();
  }
  uVar3 = **(undefined8 **)(lVar8 + 0xb8);
  if (*(char *)(lVar2 + 0x30) != '\0') {
    return;
  }
  lVar8 = *(long *)(lVar2 + 0x18);
  if (lVar8 != 0) {
    if (*(int *)(lVar8 + 0x18) == 0) {
      uVar6 = native_sub_43283c();
                    /* WARNING: Subroutine does not return */
      native_sub_4327dc(uVar6,0);
    }
    puVar9 = (undefined8 *)(lVar2 + 0x20);
    *puVar9 = *(undefined8 *)(lVar8 + 0x20);
    native_sub_4326e0(puVar9);
    plVar10 = (long *)*puVar9;
    if (plVar10 != (long *)0x0) {
      lVar8 = *plVar10;
      lVar7 = **(long **)(lVar7 + 0x30);
      if ((ulong)*(ushort *)(lVar8 + 0x12a) != 0) {
        uVar4 = 0;
        piVar5 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
        do {
          if (*(long *)(piVar5 + -2) == *(long *)(lVar7 + 0x18)) {
            lVar8 = lVar8 + (long)(int)(*piVar5 + (uint)*(ushort *)(lVar7 + 0x48)) * 0x10 + 0x138;
            goto code_r0x0049cb84;
          }
          uVar4 = uVar4 + 1;
          piVar5 = piVar5 + 4;
        } while (uVar4 < *(ushort *)(lVar8 + 0x12a));
      }
      lVar8 = native_sub_3c9b34(plVar10);
code_r0x0049cb84:
      puVar9 = (undefined8 *)native_sub_4327e8(*(undefined8 *)(lVar8 + 8),lVar7);
      (*(code *)*puVar9)(plVar10,uVar6,uVar3,puVar9);
      *(undefined1 *)(lVar2 + 0x30) = 1;
      if (((*(long *)(lVar2 + 0x28) != 0) &&
          (lVar8 = native_UnityEngine_Component__get_transform_8da62c(*(long *)(lVar2 + 0x28),0),
          lVar8 != 0)) &&
         (lVar8 = native_UnityEngine_Component__get_gameObject_8da66c(lVar8,0), lVar8 != 0)) {
        if (pcRam0000000001340bf8 == (code *)0x0) {
          pcRam0000000001340bf8 = (code *)native_sub_4326f0(&UNK_00e2da67);
        }
                    /* WARNING: Could not recover jumptable at 0x008de6e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*pcRam0000000001340bf8)(lVar8,1);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* MG_BlocksEngine2.DragDrop.BE2_DragOperation$$OnDrag @ 0x57ae3c
 * void MG_BlocksEngine2_DragDrop_BE2_DragOperation__OnDrag (MG_BlocksEngine2_DragDrop_BE2_DragOperation_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MG_BlocksEngine2.DragDrop.BE2_DragOperation$$OnDrag
   void MG_BlocksEngine2_DragDrop_BE2_DragOperation__OnDrag
   (MG_BlocksEngine2_DragDrop_BE2_DragOperation_o* __this, const MethodInfo* method); */

void native_MG_BlocksEngine2_DragDrop_BE2_DragOperation__OnDrag_57ae3c(long param_1)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  undefined4 uVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  long lVar8;
  int *piVar9;
  long *plVar10;
  long lVar11;
  long lVar12;
  undefined8 uVar13;
  
  if ((bRam000000000133eac4 & 1) == 0) {
    native_sub_43273c(&MG_BlocksEngine2_Block_BE2_SpotBlockInput_TypeInfo_12d3a58);
    native_sub_43273c(&
                      Method_MG_BlocksEngine2_DragDrop_I_BE2_Raycaster_FindClosestSpotOfType_BE2_SpotBlockInput____12e4f70
                     );
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    bRam000000000133eac4 = 1;
  }
  plVar10 = (long *)(param_1 + 0x20);
  lVar11 = *plVar10;
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar5 = native_UnityEngine_Object__op_Inequality_8d76fc(lVar11,0,0);
  if ((uVar5 & 1) != 0) {
    lVar12 = *(long *)(param_1 + 0x20);
    lVar11 = native_MG_BlocksEngine2_DragDrop_BE2_DragOperation__get_Transform_57abd0(param_1);
    if ((lVar11 == 0) ||
       (uVar4 = native_UnityEngine_Transform__GetSiblingIndex_772b74(lVar11,0), lVar12 == 0))
    goto LAB_0057b1dc;
    native_UnityEngine_Transform__SetSiblingIndex_772b24(lVar12,uVar4,0);
    if ((*plVar10 == 0) ||
       (lVar11 = native_UnityEngine_Component__get_gameObject_8da66c(*plVar10,0), lVar11 == 0))
    goto LAB_0057b1dc;
    native_UnityEngine_GameObject__SetActive_8de698(lVar11,1,0);
    *plVar10 = 0;
    native_sub_4326e0(plVar10,0);
  }
  lVar11 = native_MG_BlocksEngine2_DragDrop_BE2_DragOperation__get_Transform_57abd0(param_1);
  if (lVar11 != 0) {
    uVar6 = native_UnityEngine_Transform__get_parent_765eb0(lVar11,0);
    lVar11 = native_MG_BlocksEngine2_DragDrop_BE2_DragDropManager__get_Instance_576470();
    if (lVar11 != 0) {
      uVar13 = *(undefined8 *)(lVar11 + 0x28);
      if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
        native_sub_4327ec();
      }
      uVar5 = native_UnityEngine_Object__op_Inequality_8d76fc(uVar6,uVar13,0);
      if ((uVar5 & 1) != 0) {
        lVar11 = native_MG_BlocksEngine2_DragDrop_BE2_DragOperation__get_Transform_57abd0(param_1);
        lVar12 = native_MG_BlocksEngine2_DragDrop_BE2_DragDropManager__get_Instance_576470();
        if ((lVar12 == 0) || (lVar11 == 0)) goto LAB_0057b1dc;
        native_UnityEngine_Transform__SetParent_7720e0(lVar11,*(undefined8 *)(lVar12 + 0x28),1,0);
      }
      lVar11 = native_MG_BlocksEngine2_DragDrop_BE2_DragDropManager__get_Instance_576470();
      if (lVar11 != 0) {
        plVar10 = *(long **)(lVar11 + 0x20);
        lVar12 = native_MG_BlocksEngine2_DragDrop_BE2_DragDropManager__get_Instance_576470();
        lVar11 = 
        _Method_MG_BlocksEngine2_DragDrop_I_BE2_Raycaster_FindClosestSpotOfType_BE2_SpotBlockInput____12e4f70
        ;
        if ((lVar12 != 0) && (plVar10 != (long *)0x0)) {
          lVar8 = *plVar10;
          uVar4 = *(undefined4 *)(lVar12 + 0x54);
          if ((ulong)*(ushort *)(lVar8 + 0x12a) != 0) {
            uVar5 = 0;
            piVar9 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
            do {
              if (*(long *)(piVar9 + -2) ==
                  *(long *)(
                           _Method_MG_BlocksEngine2_DragDrop_I_BE2_Raycaster_FindClosestSpotOfType_BE2_SpotBlockInput____12e4f70
                           + 0x18)) {
                lVar12 = lVar8 + (long)(int)(*piVar9 +
                                            (uint)*(ushort *)
                                                   (
                                                  _Method_MG_BlocksEngine2_DragDrop_I_BE2_Raycaster_FindClosestSpotOfType_BE2_SpotBlockInput____12e4f70
                                                  + 0x48)) * 0x10 + 0x138;
                goto LAB_0057b024;
              }
              uVar5 = uVar5 + 1;
              piVar9 = piVar9 + 4;
            } while (uVar5 < *(ushort *)(lVar8 + 0x12a));
          }
          lVar12 = native_sub_3c9b34(plVar10);
LAB_0057b024:
          puVar7 = (undefined8 *)native_sub_4327e8(*(undefined8 *)(lVar12 + 8),lVar11);
          lVar11 = (*(code *)*puVar7)(uVar4,plVar10,param_1,puVar7);
          lVar12 = native_MG_BlocksEngine2_DragDrop_BE2_DragDropManager__get_Instance_576470();
          if (lVar12 != 0) {
            if (lVar11 == 0) {
              if (*(long *)(lVar12 + 0x38) == 0) {
                return;
              }
              lVar11 = native_MG_BlocksEngine2_DragDrop_BE2_DragDropManager__get_Instance_576470();
              if ((lVar11 != 0) && (plVar10 = *(long **)(lVar11 + 0x38), plVar10 != (long *)0x0)) {
                if ((*(byte *)(_MG_BlocksEngine2_Block_BE2_SpotBlockInput_TypeInfo_12d3a58 + 300) <=
                     *(byte *)(*plVar10 + 300)) &&
                   ((*(long *)(*(long *)(*plVar10 + 200) +
                               (ulong)*(byte *)(
                                               _MG_BlocksEngine2_Block_BE2_SpotBlockInput_TypeInfo_12d3a58
                                               + 300) * 8 + -8) ==
                     _MG_BlocksEngine2_Block_BE2_SpotBlockInput_TypeInfo_12d3a58 &&
                    (plVar10[6] != 0)))) {
                  native_UnityEngine_Behaviour__set_enabled_8d7b0c(plVar10[6],0,0);
                  lVar11 = native_MG_BlocksEngine2_DragDrop_BE2_DragDropManager__get_Instance_576470
                                     ();
                  if (lVar11 != 0) {
                    puVar7 = (undefined8 *)(lVar11 + 0x38);
                    *puVar7 = 0;
                    if (iRam0000000001345318 != 0) {
                      puVar1 = (ulong *)(((ulong)puVar7 >> 0x12 & 0x7fff) * 8 + 0x138ecd8);
                      do {
                        cVar2 = '\x01';
                        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
                        if (bVar3) {
                          *puVar1 = *puVar1 | 1L << ((ulong)puVar7 >> 0xc & 0x3f);
                          cVar2 = ExclusiveMonitorsStatus();
                        }
                      } while (cVar2 != '\0');
                    }
                    return;
                  }
                }
              }
            }
            else {
              if (*(long *)(lVar12 + 0x38) != 0) {
                lVar12 = native_MG_BlocksEngine2_DragDrop_BE2_DragDropManager__get_Instance_576470()
                ;
                if (lVar12 == 0) goto LAB_0057b1dc;
                if (*(long *)(lVar12 + 0x38) != lVar11) {
                  lVar12 = native_MG_BlocksEngine2_DragDrop_BE2_DragDropManager__get_Instance_576470
                                     ();
                  if ((lVar12 == 0) || (plVar10 = *(long **)(lVar12 + 0x38), plVar10 == (long *)0x0)
                     ) goto LAB_0057b1dc;
                  if ((*(byte *)(*plVar10 + 300) <
                       *(byte *)(_MG_BlocksEngine2_Block_BE2_SpotBlockInput_TypeInfo_12d3a58 + 300))
                     || ((*(long *)(*(long *)(*plVar10 + 200) +
                                    (ulong)*(byte *)(
                                                  _MG_BlocksEngine2_Block_BE2_SpotBlockInput_TypeInfo_12d3a58
                                                  + 300) * 8 + -8) !=
                          _MG_BlocksEngine2_Block_BE2_SpotBlockInput_TypeInfo_12d3a58 ||
                         (plVar10[6] == 0)))) goto LAB_0057b1dc;
                  native_UnityEngine_Behaviour__set_enabled_8d7b0c(plVar10[6],0,0);
                }
              }
              lVar12 = native_MG_BlocksEngine2_DragDrop_BE2_DragDropManager__get_Instance_576470();
              if (lVar12 != 0) {
                *(long *)(lVar12 + 0x38) = lVar11;
                native_sub_4326e0((long *)(lVar12 + 0x38),lVar11);
                lVar11 = native_MG_BlocksEngine2_DragDrop_BE2_DragDropManager__get_Instance_576470()
                ;
                if ((lVar11 != 0) && (plVar10 = *(long **)(lVar11 + 0x38), plVar10 != (long *)0x0))
                {
                  if ((*(byte *)(_MG_BlocksEngine2_Block_BE2_SpotBlockInput_TypeInfo_12d3a58 + 300)
                       <= *(byte *)(*plVar10 + 300)) &&
                     ((*(long *)(*(long *)(*plVar10 + 200) +
                                 (ulong)*(byte *)(
                                                 _MG_BlocksEngine2_Block_BE2_SpotBlockInput_TypeInfo_12d3a58
                                                 + 300) * 8 + -8) ==
                       _MG_BlocksEngine2_Block_BE2_SpotBlockInput_TypeInfo_12d3a58 &&
                      (lVar11 = plVar10[6], lVar11 != 0)))) {
                    if (pcRam0000000001340948 == (code *)0x0) {
                      pcRam0000000001340948 = (code *)native_sub_4326f0(&UNK_00e2c702);
                    }
                    /* WARNING: Could not recover jumptable at 0x008d7b58. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                    (*pcRam0000000001340948)(lVar11,1);
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
LAB_0057b1dc:
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* MG_BlocksEngine2.DragDrop.BE2_DragOperation$$OnPointerUp @ 0x57b1e0
 * void MG_BlocksEngine2_DragDrop_BE2_DragOperation__OnPointerUp (MG_BlocksEngine2_DragDrop_BE2_DragOperation_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MG_BlocksEngine2.DragDrop.BE2_DragOperation$$OnPointerUp
   void MG_BlocksEngine2_DragDrop_BE2_DragOperation__OnPointerUp
   (MG_BlocksEngine2_DragDrop_BE2_DragOperation_o* __this, const MethodInfo* method); */

void native_MG_BlocksEngine2_DragDrop_BE2_DragOperation__OnPointerUp_57b1e0
               (undefined1 param_1 [16],undefined8 param_2,long param_3)

{
  long lVar1;
  undefined8 *puVar2;
  ulong uVar3;
  int *piVar4;
  long *plVar5;
  long lVar6;
  long *plVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  
  if ((bRam000000000133eac5 & 1) == 0) {
    native_sub_43273c(&
                      Method_UnityEngine_Component_GetComponentInParent_I_BE2_ProgrammingEnv____12e2d60
                     );
    native_sub_43273c(&MG_BlocksEngine2_Block_I_BE2_Block_TypeInfo_12d4dd8);
    native_sub_43273c(&MG_BlocksEngine2_Core_I_BE2_InputManager_TypeInfo_12d4e20);
    native_sub_43273c(&MG_BlocksEngine2_Block_Instruction_I_BE2_InstructionBase_TypeInfo_12d4e30);
    native_sub_43273c(&MG_BlocksEngine2_Block_Instruction_I_BE2_Instruction_TypeInfo_12d4e28);
    native_sub_43273c(&MG_BlocksEngine2_Environment_I_BE2_ProgrammingEnv_TypeInfo_12d4e38);
    native_sub_43273c(&MG_BlocksEngine2_DragDrop_I_BE2_Raycaster_TypeInfo_12d4e40);
    native_sub_43273c(&MG_BlocksEngine2_Block_I_BE2_Spot_TypeInfo_12d4e48);
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    bRam000000000133eac5 = 1;
  }
  lVar1 = native_MG_BlocksEngine2_DragDrop_BE2_DragDropManager__get_Instance_576470();
  if (lVar1 == 0) goto LAB_0057b908;
  lVar6 = *(long *)(lVar1 + 0x38);
  lVar1 = native_MG_BlocksEngine2_DragDrop_BE2_DragDropManager__get_Instance_576470();
  if (lVar1 == 0) goto LAB_0057b908;
  if (lVar6 == 0) {
    plVar5 = *(long **)(lVar1 + 0x20);
    uVar8 = native_MG_BlocksEngine2_DragDrop_BE2_DragOperation__get_RayPoint_57ac58(param_3);
    if (plVar5 == (long *)0x0) goto LAB_0057b908;
    lVar1 = *plVar5;
    if ((ulong)*(ushort *)(lVar1 + 0x12a) != 0) {
      uVar3 = 0;
      piVar4 = (int *)(*(long *)(lVar1 + 0xb0) + 8);
      do {
        if (*(long *)(piVar4 + -2) == _MG_BlocksEngine2_DragDrop_I_BE2_Raycaster_TypeInfo_12d4e40) {
          puVar2 = (undefined8 *)(lVar1 + (long)(*piVar4 + 3) * 0x10 + 0x138);
          goto LAB_0057b334;
        }
        uVar3 = uVar3 + 1;
        piVar4 = piVar4 + 4;
      } while (uVar3 < *(ushort *)(lVar1 + 0x12a));
    }
    puVar2 = (undefined8 *)
             native_sub_3c9b34(plVar5,_MG_BlocksEngine2_DragDrop_I_BE2_Raycaster_TypeInfo_12d4e40,3)
    ;
LAB_0057b334:
    uVar9 = 0;
    plVar5 = (long *)(*(code *)*puVar2)(uVar8,param_2,0,plVar5,puVar2[1]);
    if (plVar5 == (long *)0x0) {
      lVar1 = native_MG_BlocksEngine2_DragDrop_BE2_DragDropManager__get_Instance_576470();
      if (lVar1 == 0) goto LAB_0057b908;
      plVar7 = *(long **)(lVar1 + 0x20);
      plVar5 = (long *)native_MG_BlocksEngine2_Core_BE2_InputManager__get_Instance_602b04(0);
      if (plVar5 == (long *)0x0) goto LAB_0057b908;
      lVar1 = *plVar5;
      if ((ulong)*(ushort *)(lVar1 + 0x12a) != 0) {
        uVar3 = 0;
        piVar4 = (int *)(*(long *)(lVar1 + 0xb0) + 8);
        do {
          if (*(long *)(piVar4 + -2) == _MG_BlocksEngine2_Core_I_BE2_InputManager_TypeInfo_12d4e20)
          {
            puVar2 = (undefined8 *)(lVar1 + (long)(*piVar4 + 2) * 0x10 + 0x138);
            goto LAB_0057b3d0;
          }
          uVar3 = uVar3 + 1;
          piVar4 = piVar4 + 4;
        } while (uVar3 < *(ushort *)(lVar1 + 0x12a));
      }
      puVar2 = (undefined8 *)
               native_sub_3c9b34(plVar5,_MG_BlocksEngine2_Core_I_BE2_InputManager_TypeInfo_12d4e20,2
                                );
LAB_0057b3d0:
      uVar8 = (*(code *)*puVar2)(plVar5,puVar2[1]);
      if (plVar7 == (long *)0x0) goto LAB_0057b908;
      lVar1 = *plVar7;
      if ((ulong)*(ushort *)(lVar1 + 0x12a) != 0) {
        uVar3 = 0;
        piVar4 = (int *)(*(long *)(lVar1 + 0xb0) + 8);
        do {
          if (*(long *)(piVar4 + -2) == _MG_BlocksEngine2_DragDrop_I_BE2_Raycaster_TypeInfo_12d4e40)
          {
            puVar2 = (undefined8 *)(lVar1 + (long)(*piVar4 + 3) * 0x10 + 0x138);
            goto LAB_0057b444;
          }
          uVar3 = uVar3 + 1;
          piVar4 = piVar4 + 4;
        } while (uVar3 < *(ushort *)(lVar1 + 0x12a));
      }
      puVar2 = (undefined8 *)
               native_sub_3c9b34(plVar7,_MG_BlocksEngine2_DragDrop_I_BE2_Raycaster_TypeInfo_12d4e40,
                                 3);
LAB_0057b444:
      plVar5 = (long *)(*(code *)*puVar2)(uVar8,param_2,uVar9,plVar7,puVar2[1]);
      if (plVar5 != (long *)0x0) goto LAB_0057b464;
      lVar1 = native_MG_BlocksEngine2_DragDrop_BE2_DragOperation__get_Transform_57abd0(param_3);
      if (lVar1 == 0) goto LAB_0057b908;
      uVar8 = native_UnityEngine_Component__get_gameObject_8da66c(lVar1,0);
    }
    else {
LAB_0057b464:
      lVar1 = *plVar5;
      if ((ulong)*(ushort *)(lVar1 + 0x12a) != 0) {
        uVar3 = 0;
        piVar4 = (int *)(*(long *)(lVar1 + 0xb0) + 8);
        do {
          if (*(long *)(piVar4 + -2) == _MG_BlocksEngine2_Block_I_BE2_Spot_TypeInfo_12d4e48) {
            puVar2 = (undefined8 *)(lVar1 + (long)*piVar4 * 0x10 + 0x138);
            goto LAB_0057b4c0;
          }
          uVar3 = uVar3 + 1;
          piVar4 = piVar4 + 4;
        } while (uVar3 < *(ushort *)(lVar1 + 0x12a));
      }
      puVar2 = (undefined8 *)
               native_sub_3c9b34(plVar5,_MG_BlocksEngine2_Block_I_BE2_Spot_TypeInfo_12d4e48,0);
LAB_0057b4c0:
      lVar1 = (*(code *)*puVar2)(plVar5,puVar2[1]);
      if (lVar1 == 0) goto LAB_0057b908;
      plVar7 = (long *)native_UnityEngine_Component__GetComponentInParent_BE2_Canvas__49dc70
                                 (lVar1,
                                  _Method_UnityEngine_Component_GetComponentInParent_I_BE2_ProgrammingEnv____12e2d60
                                 );
      if (plVar7 != (long *)0x0) {
        lVar1 = native_MG_BlocksEngine2_DragDrop_BE2_DragOperation__get_Transform_57abd0(param_3);
LAB_0057b4f4:
        lVar6 = *plVar7;
        if ((ulong)*(ushort *)(lVar6 + 0x12a) != 0) {
          uVar3 = 0;
          piVar4 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
          do {
            if (*(long *)(piVar4 + -2) ==
                _MG_BlocksEngine2_Environment_I_BE2_ProgrammingEnv_TypeInfo_12d4e38) {
              puVar2 = (undefined8 *)(lVar6 + (long)*piVar4 * 0x10 + 0x138);
              goto LAB_0057b598;
            }
            uVar3 = uVar3 + 1;
            piVar4 = piVar4 + 4;
          } while (uVar3 < *(ushort *)(lVar6 + 0x12a));
        }
        puVar2 = (undefined8 *)
                 native_sub_3c9b34(plVar7,
                                   _MG_BlocksEngine2_Environment_I_BE2_ProgrammingEnv_TypeInfo_12d4e38
                                   ,0);
LAB_0057b598:
        uVar8 = (*(code *)*puVar2)(plVar7,puVar2[1]);
        if (lVar1 == 0) goto LAB_0057b908;
        native_UnityEngine_Transform__SetParent_77208c(lVar1,uVar8,0);
        goto LAB_0057b724;
      }
      lVar1 = *plVar5;
      if ((ulong)*(ushort *)(lVar1 + 0x12a) != 0) {
        uVar3 = 0;
        piVar4 = (int *)(*(long *)(lVar1 + 0xb0) + 8);
        do {
          if (*(long *)(piVar4 + -2) == _MG_BlocksEngine2_Block_I_BE2_Spot_TypeInfo_12d4e48) {
            puVar2 = (undefined8 *)(lVar1 + (long)*piVar4 * 0x10 + 0x138);
            goto LAB_0057b5ec;
          }
          uVar3 = uVar3 + 1;
          piVar4 = piVar4 + 4;
        } while (uVar3 < *(ushort *)(lVar1 + 0x12a));
      }
      puVar2 = (undefined8 *)
               native_sub_3c9b34(plVar5,_MG_BlocksEngine2_Block_I_BE2_Spot_TypeInfo_12d4e48,0);
LAB_0057b5ec:
      lVar1 = (*(code *)*puVar2)(plVar5,puVar2[1]);
      if (lVar1 == 0) goto LAB_0057b908;
      uVar8 = native_UnityEngine_Transform__GetChild_772ef0(lVar1,0,0);
      if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
        native_sub_4327ec(_UnityEngine_Object_TypeInfo_12d54e0);
      }
      uVar3 = native_UnityEngine_Object__op_Inequality_8d76fc(uVar8,0,0);
      if ((uVar3 & 1) == 0) {
        lVar1 = native_MG_BlocksEngine2_DragDrop_BE2_DragOperation__get_Transform_57abd0(param_3);
      }
      else {
        lVar1 = *plVar5;
        if ((ulong)*(ushort *)(lVar1 + 0x12a) != 0) {
          uVar3 = 0;
          piVar4 = (int *)(*(long *)(lVar1 + 0xb0) + 8);
          do {
            if (*(long *)(piVar4 + -2) == _MG_BlocksEngine2_Block_I_BE2_Spot_TypeInfo_12d4e48) {
              puVar2 = (undefined8 *)(lVar1 + (long)*piVar4 * 0x10 + 0x138);
              goto LAB_0057b6ac;
            }
            uVar3 = uVar3 + 1;
            piVar4 = piVar4 + 4;
          } while (uVar3 < *(ushort *)(lVar1 + 0x12a));
        }
        puVar2 = (undefined8 *)
                 native_sub_3c9b34(plVar5,_MG_BlocksEngine2_Block_I_BE2_Spot_TypeInfo_12d4e48,0);
LAB_0057b6ac:
        lVar1 = (*(code *)*puVar2)(plVar5,puVar2[1]);
        if ((lVar1 == 0) ||
           (lVar1 = native_UnityEngine_Transform__GetChild_772ef0(lVar1,0,0), lVar1 == 0))
        goto LAB_0057b908;
        plVar7 = (long *)native_UnityEngine_Component__GetComponentInParent_BE2_Canvas__49dc70
                                   (lVar1,
                                    _Method_UnityEngine_Component_GetComponentInParent_I_BE2_ProgrammingEnv____12e2d60
                                   );
        lVar1 = native_MG_BlocksEngine2_DragDrop_BE2_DragOperation__get_Transform_57abd0(param_3);
        if (plVar7 != (long *)0x0) goto LAB_0057b4f4;
      }
      if (lVar1 == 0) goto LAB_0057b908;
      uVar8 = native_UnityEngine_Component__get_gameObject_8da66c(lVar1,0);
    }
    if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
      native_sub_4327ec(_UnityEngine_Object_TypeInfo_12d54e0);
    }
    native_UnityEngine_Object__Destroy_8ea574(uVar8,0);
  }
  else {
    native_MG_BlocksEngine2_DragDrop_BE2_DragOperation__DropTo_57b90c
              (param_3,*(undefined8 *)(lVar1 + 0x38));
    lVar1 = native_MG_BlocksEngine2_DragDrop_BE2_DragDropManager__get_Instance_576470();
    if (lVar1 == 0) goto LAB_0057b908;
    *(undefined8 *)(lVar1 + 0x38) = 0;
    native_sub_4326e0((undefined8 *)(lVar1 + 0x38),0);
  }
LAB_0057b724:
  lVar1 = native_MG_BlocksEngine2_DragDrop_BE2_DragOperation__get_Transform_57abd0(param_3);
  lVar6 = native_MG_BlocksEngine2_DragDrop_BE2_DragOperation__get_Transform_57abd0(param_3);
  if (lVar6 != 0) {
    uVar8 = native_UnityEngine_Transform__get_localPosition_7717f4(lVar6,0);
    lVar6 = native_MG_BlocksEngine2_DragDrop_BE2_DragOperation__get_Transform_57abd0(param_3);
    if ((lVar6 != 0) &&
       (native_UnityEngine_Transform__get_localPosition_7717f4(lVar6,0), lVar1 != 0)) {
      native_UnityEngine_Transform__set_localPosition_7718a4(uVar8,lVar1,0);
      lVar1 = native_MG_BlocksEngine2_DragDrop_BE2_DragOperation__get_Transform_57abd0(param_3);
      native_UnityEngine_Vector3__get_zero_776668(0);
      if (lVar1 != 0) {
        native_UnityEngine_Transform__set_localEulerAngles_77194c(lVar1,0);
        plVar5 = *(long **)(param_3 + 0x30);
        if (plVar5 != (long *)0x0) {
          lVar1 = *plVar5;
          if ((ulong)*(ushort *)(lVar1 + 0x12a) != 0) {
            uVar3 = 0;
            piVar4 = (int *)(*(long *)(lVar1 + 0xb0) + 8);
            do {
              if (*(long *)(piVar4 + -2) == _MG_BlocksEngine2_Block_I_BE2_Block_TypeInfo_12d4dd8) {
                puVar2 = (undefined8 *)(lVar1 + (long)(*piVar4 + 4) * 0x10 + 0x138);
                goto LAB_0057b800;
              }
              uVar3 = uVar3 + 1;
              piVar4 = piVar4 + 4;
            } while (uVar3 < *(ushort *)(lVar1 + 0x12a));
          }
          puVar2 = (undefined8 *)
                   native_sub_3c9b34(plVar5,_MG_BlocksEngine2_Block_I_BE2_Block_TypeInfo_12d4dd8,4);
LAB_0057b800:
          plVar5 = (long *)(*(code *)*puVar2)(plVar5,puVar2[1]);
          if (plVar5 != (long *)0x0) {
            lVar1 = *plVar5;
            if ((ulong)*(ushort *)(lVar1 + 0x12a) != 0) {
              uVar3 = 0;
              piVar4 = (int *)(*(long *)(lVar1 + 0xb0) + 8);
              do {
                if (*(long *)(piVar4 + -2) ==
                    _MG_BlocksEngine2_Block_Instruction_I_BE2_Instruction_TypeInfo_12d4e28) {
                  puVar2 = (undefined8 *)(lVar1 + (long)*piVar4 * 0x10 + 0x138);
                  goto LAB_0057b870;
                }
                uVar3 = uVar3 + 1;
                piVar4 = piVar4 + 4;
              } while (uVar3 < *(ushort *)(lVar1 + 0x12a));
            }
            puVar2 = (undefined8 *)
                     native_sub_3c9b34(plVar5,
                                       _MG_BlocksEngine2_Block_Instruction_I_BE2_Instruction_TypeInfo_12d4e28
                                       ,0);
LAB_0057b870:
            plVar5 = (long *)(*(code *)*puVar2)(plVar5,puVar2[1]);
            if (plVar5 != (long *)0x0) {
              lVar1 = *plVar5;
              if ((ulong)*(ushort *)(lVar1 + 0x12a) != 0) {
                uVar3 = 0;
                piVar4 = (int *)(*(long *)(lVar1 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar4 + -2) ==
                      _MG_BlocksEngine2_Block_Instruction_I_BE2_InstructionBase_TypeInfo_12d4e30) {
                    puVar2 = (undefined8 *)(lVar1 + (long)(*piVar4 + 0xe) * 0x10 + 0x138);
                    goto LAB_0057b8e4;
                  }
                  uVar3 = uVar3 + 1;
                  piVar4 = piVar4 + 4;
                } while (uVar3 < *(ushort *)(lVar1 + 0x12a));
              }
              puVar2 = (undefined8 *)
                       native_sub_3c9b34(plVar5,
                                         _MG_BlocksEngine2_Block_Instruction_I_BE2_InstructionBase_TypeInfo_12d4e30
                                         ,0xe);
LAB_0057b8e4:
                    /* WARNING: Could not recover jumptable at 0x0057b904. Too many branches */
                    /* WARNING: Treating indirect jump as call */
              (*(code *)*puVar2)(plVar5,puVar2[1]);
              return;
            }
          }
        }
      }
    }
  }
LAB_0057b908:
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* MG_BlocksEngine2.DragDrop.BE2_DragOperation$$OnDisable @ 0x57bb5c
 * void MG_BlocksEngine2_DragDrop_BE2_DragOperation__OnDisable (MG_BlocksEngine2_DragDrop_BE2_DragOperation_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MG_BlocksEngine2.DragDrop.BE2_DragOperation$$OnDisable
   void MG_BlocksEngine2_DragDrop_BE2_DragOperation__OnDisable
   (MG_BlocksEngine2_DragDrop_BE2_DragOperation_o* __this, const MethodInfo* method); */

void native_MG_BlocksEngine2_DragDrop_BE2_DragOperation__OnDisable_57bb5c(long param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  long *plVar3;
  long lVar4;
  undefined8 uVar5;
  
  if ((bRam000000000133eac6 & 1) == 0) {
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    bRam000000000133eac6 = 1;
  }
  plVar3 = (long *)(param_1 + 0x20);
  lVar4 = *plVar3;
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar1 = native_UnityEngine_Object__op_Inequality_8d76fc(lVar4,0,0);
  if ((uVar1 & 1) != 0) {
    if ((*plVar3 == 0) ||
       (lVar4 = native_UnityEngine_Component__get_gameObject_8da66c(*plVar3,0), lVar4 == 0))
    goto LAB_0057bc90;
    native_UnityEngine_GameObject__SetActive_8de698(lVar4,1,0);
    *plVar3 = 0;
    native_sub_4326e0(plVar3,0);
  }
  lVar4 = native_MG_BlocksEngine2_DragDrop_BE2_DragOperation__get_Transform_57abd0(param_1);
  if (lVar4 != 0) {
    uVar2 = native_UnityEngine_Transform__get_parent_765eb0(lVar4,0);
    lVar4 = native_MG_BlocksEngine2_DragDrop_BE2_DragDropManager__get_Instance_576470();
    if (lVar4 != 0) {
      uVar5 = *(undefined8 *)(lVar4 + 0x28);
      if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
        native_sub_4327ec();
      }
      uVar1 = native_UnityEngine_Object__op_Inequality_8d76fc(uVar2,uVar5,0);
      if ((uVar1 & 1) == 0) {
        return;
      }
      lVar4 = native_MG_BlocksEngine2_DragDrop_BE2_DragOperation__get_Transform_57abd0(param_1);
      if ((lVar4 != 0) &&
         (lVar4 = native_UnityEngine_Component__get_gameObject_8da66c(lVar4,0), lVar4 != 0)) {
        if (pcRam0000000001340bf8 == (code *)0x0) {
          pcRam0000000001340bf8 = (code *)native_sub_4326f0(&UNK_00e2da67);
        }
                    /* WARNING: Could not recover jumptable at 0x008de6e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*pcRam0000000001340bf8)(lVar4,0);
        return;
      }
    }
  }
LAB_0057bc90:
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* MG_BlocksEngine2.DragDrop.BE2_DragOperation$$DropTo @ 0x57b90c
 * void MG_BlocksEngine2_DragDrop_BE2_DragOperation__DropTo (MG_BlocksEngine2_DragDrop_BE2_DragOperation_o* __this, MG_BlocksEngine2_Block_I_BE2_Spot_o* spot, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MG_BlocksEngine2.DragDrop.BE2_DragOperation$$DropTo
   void MG_BlocksEngine2_DragDrop_BE2_DragOperation__DropTo
   (MG_BlocksEngine2_DragDrop_BE2_DragOperation_o* __this, MG_BlocksEngine2_Block_I_BE2_Spot_o*
   spot, const MethodInfo* method); */

void native_MG_BlocksEngine2_DragDrop_BE2_DragOperation__DropTo_57b90c(long param_1,long *param_2)

{
  undefined4 uVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  long lVar5;
  ulong uVar6;
  int *piVar7;
  long *plVar8;
  
  if ((bRam000000000133eac7 & 1) == 0) {
    native_sub_43273c(&MG_BlocksEngine2_Block_BE2_SpotBlockInput_TypeInfo_12d3a58);
    native_sub_43273c(&MG_BlocksEngine2_Block_I_BE2_Spot_TypeInfo_12d4e48);
    bRam000000000133eac7 = 1;
  }
  lVar2 = native_MG_BlocksEngine2_DragDrop_BE2_DragOperation__get_Transform_57abd0(param_1);
  if (param_2 != (long *)0x0) {
    lVar5 = *param_2;
    if ((ulong)*(ushort *)(lVar5 + 0x12a) != 0) {
      uVar6 = 0;
      piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == _MG_BlocksEngine2_Block_I_BE2_Spot_TypeInfo_12d4e48) {
          puVar3 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
          goto LAB_0057b9bc;
        }
        uVar6 = uVar6 + 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 < *(ushort *)(lVar5 + 0x12a));
    }
    puVar3 = (undefined8 *)
             native_sub_3c9b34(param_2,_MG_BlocksEngine2_Block_I_BE2_Spot_TypeInfo_12d4e48,0);
LAB_0057b9bc:
    lVar5 = (*(code *)*puVar3)(param_2,puVar3[1]);
    if ((lVar5 != 0) &&
       (uVar4 = native_UnityEngine_Transform__get_parent_765eb0(lVar5,0), lVar2 != 0)) {
      native_UnityEngine_Transform__SetParent_77208c(lVar2,uVar4,0);
      lVar2 = native_MG_BlocksEngine2_DragDrop_BE2_DragOperation__get_Transform_57abd0(param_1);
      lVar5 = *param_2;
      if ((ulong)*(ushort *)(lVar5 + 0x12a) != 0) {
        uVar6 = 0;
        piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(long *)(piVar7 + -2) == _MG_BlocksEngine2_Block_I_BE2_Spot_TypeInfo_12d4e48) {
            puVar3 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
            goto LAB_0057ba48;
          }
          uVar6 = uVar6 + 1;
          piVar7 = piVar7 + 4;
        } while (uVar6 < *(ushort *)(lVar5 + 0x12a));
      }
      puVar3 = (undefined8 *)
               native_sub_3c9b34(param_2,_MG_BlocksEngine2_Block_I_BE2_Spot_TypeInfo_12d4e48,0);
LAB_0057ba48:
      lVar5 = (*(code *)*puVar3)(param_2,puVar3[1]);
      if ((lVar5 != 0) &&
         (uVar1 = native_UnityEngine_Transform__GetSiblingIndex_772b74(lVar5,0), lVar2 != 0)) {
        native_UnityEngine_Transform__SetSiblingIndex_772b24(lVar2,uVar1,0);
        if ((*(byte *)(_MG_BlocksEngine2_Block_BE2_SpotBlockInput_TypeInfo_12d3a58 + 300) <=
             *(byte *)(*param_2 + 300)) &&
           ((*(long *)(*(long *)(*param_2 + 200) +
                       (ulong)*(byte *)(_MG_BlocksEngine2_Block_BE2_SpotBlockInput_TypeInfo_12d3a58
                                       + 300) * 8 + -8) ==
             _MG_BlocksEngine2_Block_BE2_SpotBlockInput_TypeInfo_12d3a58 && (param_2[6] != 0)))) {
          native_UnityEngine_Behaviour__set_enabled_8d7b0c(param_2[6],0,0);
          lVar2 = *param_2;
          if ((ulong)*(ushort *)(lVar2 + 0x12a) != 0) {
            uVar6 = 0;
            piVar7 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
            do {
              if (*(long *)(piVar7 + -2) == _MG_BlocksEngine2_Block_I_BE2_Spot_TypeInfo_12d4e48) {
                puVar3 = (undefined8 *)(lVar2 + (long)*piVar7 * 0x10 + 0x138);
                goto LAB_0057bb10;
              }
              uVar6 = uVar6 + 1;
              piVar7 = piVar7 + 4;
            } while (uVar6 < *(ushort *)(lVar2 + 0x12a));
          }
          puVar3 = (undefined8 *)
                   native_sub_3c9b34(param_2,_MG_BlocksEngine2_Block_I_BE2_Spot_TypeInfo_12d4e48,0);
LAB_0057bb10:
          lVar2 = (*(code *)*puVar3)(param_2,puVar3[1]);
          plVar8 = (long *)(param_1 + 0x20);
          *plVar8 = lVar2;
          native_sub_4326e0(plVar8,lVar2);
          if ((*plVar8 != 0) &&
             (lVar2 = native_UnityEngine_Component__get_gameObject_8da66c(*plVar8,0), lVar2 != 0)) {
            if (pcRam0000000001340bf8 == (code *)0x0) {
              pcRam0000000001340bf8 = (code *)native_sub_4326f0(&UNK_00e2da67);
            }
                    /* WARNING: Could not recover jumptable at 0x008de6e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (*pcRam0000000001340bf8)(lVar2,0);
            return;
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* MG_BlocksEngine2.DragDrop.BE2_DragOperation$$DropTo @ 0x57bc94
 * void MG_BlocksEngine2_DragDrop_BE2_DragOperation__DropTo (MG_BlocksEngine2_DragDrop_BE2_DragOperation_o* __this, MG_BlocksEngine2_Block_I_BE2_Block_o* parentBlock, int32_t sectionIndex, int32_t inputIndex, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MG_BlocksEngine2.DragDrop.BE2_DragOperation$$DropTo
   void MG_BlocksEngine2_DragDrop_BE2_DragOperation__DropTo
   (MG_BlocksEngine2_DragDrop_BE2_DragOperation_o* __this, MG_BlocksEngine2_Block_I_BE2_Block_o*
   parentBlock, int32_t sectionIndex, int32_t inputIndex, const MethodInfo* method); */

void native_MG_BlocksEngine2_DragDrop_BE2_DragOperation__DropTo_57bc94
               (undefined8 param_1,long *param_2,uint param_3,uint param_4)

{
  undefined8 *puVar1;
  long *plVar2;
  undefined8 uVar3;
  long lVar4;
  ulong uVar5;
  int *piVar6;
  long lVar7;
  
  if ((bRam000000000133eac8 & 1) == 0) {
    native_sub_43273c(&Method_UnityEngine_Component_GetComponent_I_BE2_Spot____12e2a68);
    native_sub_43273c(&MG_BlocksEngine2_Block_I_BE2_BlockLayout_TypeInfo_12d4de0);
    native_sub_43273c(&MG_BlocksEngine2_Block_I_BE2_BlockSectionHeaderInput_TypeInfo_12d4e00);
    native_sub_43273c(&MG_BlocksEngine2_Block_I_BE2_BlockSectionHeader_TypeInfo_12d4df8);
    native_sub_43273c(&MG_BlocksEngine2_Block_I_BE2_BlockSection_TypeInfo_12d4de8);
    native_sub_43273c(&MG_BlocksEngine2_Block_I_BE2_Block_TypeInfo_12d4dd8);
    native_sub_43273c(&MG_BlocksEngine2_Core_I_BE2_BlocksStack_TypeInfo_12d4e10);
    native_sub_43273c(&MG_BlocksEngine2_Block_Instruction_I_BE2_InstructionBase_TypeInfo_12d4e30);
    native_sub_43273c(&MG_BlocksEngine2_Block_Instruction_I_BE2_Instruction_TypeInfo_12d4e28);
    bRam000000000133eac8 = 1;
  }
  if (param_2 != (long *)0x0) {
    lVar4 = *param_2;
    if ((ulong)*(ushort *)(lVar4 + 0x12a) != 0) {
      uVar5 = 0;
      piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == _MG_BlocksEngine2_Block_I_BE2_Block_TypeInfo_12d4dd8) {
          puVar1 = (undefined8 *)(lVar4 + (long)(*piVar6 + 3) * 0x10 + 0x138);
          goto LAB_0057bda4;
        }
        uVar5 = uVar5 + 1;
        piVar6 = piVar6 + 4;
      } while (uVar5 < *(ushort *)(lVar4 + 0x12a));
    }
    puVar1 = (undefined8 *)
             native_sub_3c9b34(param_2,_MG_BlocksEngine2_Block_I_BE2_Block_TypeInfo_12d4dd8,3);
LAB_0057bda4:
    plVar2 = (long *)(*(code *)*puVar1)(param_2,puVar1[1]);
    if (plVar2 != (long *)0x0) {
      lVar4 = *plVar2;
      if ((ulong)*(ushort *)(lVar4 + 0x12a) != 0) {
        uVar5 = 0;
        piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
        do {
          if (*(long *)(piVar6 + -2) == _MG_BlocksEngine2_Block_I_BE2_BlockLayout_TypeInfo_12d4de0)
          {
            puVar1 = (undefined8 *)(lVar4 + (long)(*piVar6 + 2) * 0x10 + 0x138);
            goto LAB_0057be18;
          }
          uVar5 = uVar5 + 1;
          piVar6 = piVar6 + 4;
        } while (uVar5 < *(ushort *)(lVar4 + 0x12a));
      }
      puVar1 = (undefined8 *)
               native_sub_3c9b34(plVar2,_MG_BlocksEngine2_Block_I_BE2_BlockLayout_TypeInfo_12d4de0,2
                                );
LAB_0057be18:
      lVar4 = (*(code *)*puVar1)(plVar2,puVar1[1]);
      if (lVar4 != 0) {
        if (*(int *)(lVar4 + 0x18) <= (int)param_3) {
          return;
        }
        lVar4 = *param_2;
        if ((ulong)*(ushort *)(lVar4 + 0x12a) != 0) {
          uVar5 = 0;
          piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
          do {
            if (*(long *)(piVar6 + -2) == _MG_BlocksEngine2_Block_I_BE2_Block_TypeInfo_12d4dd8) {
              puVar1 = (undefined8 *)(lVar4 + (long)(*piVar6 + 3) * 0x10 + 0x138);
              goto LAB_0057be8c;
            }
            uVar5 = uVar5 + 1;
            piVar6 = piVar6 + 4;
          } while (uVar5 < *(ushort *)(lVar4 + 0x12a));
        }
        puVar1 = (undefined8 *)
                 native_sub_3c9b34(param_2,_MG_BlocksEngine2_Block_I_BE2_Block_TypeInfo_12d4dd8,3);
LAB_0057be8c:
        plVar2 = (long *)(*(code *)*puVar1)(param_2,puVar1[1]);
        if (plVar2 != (long *)0x0) {
          lVar4 = *plVar2;
          if ((ulong)*(ushort *)(lVar4 + 0x12a) != 0) {
            uVar5 = 0;
            piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
            do {
              if (*(long *)(piVar6 + -2) ==
                  _MG_BlocksEngine2_Block_I_BE2_BlockLayout_TypeInfo_12d4de0) {
                puVar1 = (undefined8 *)(lVar4 + (long)(*piVar6 + 2) * 0x10 + 0x138);
                goto LAB_0057bef8;
              }
              uVar5 = uVar5 + 1;
              piVar6 = piVar6 + 4;
            } while (uVar5 < *(ushort *)(lVar4 + 0x12a));
          }
          puVar1 = (undefined8 *)
                   native_sub_3c9b34(plVar2,
                                     _MG_BlocksEngine2_Block_I_BE2_BlockLayout_TypeInfo_12d4de0,2);
LAB_0057bef8:
          lVar4 = (*(code *)*puVar1)(plVar2,puVar1[1]);
          if (lVar4 != 0) {
            if (*(uint *)(lVar4 + 0x18) <= param_3) goto LAB_0057c91c;
            lVar7 = (long)(int)param_3;
            plVar2 = *(long **)(lVar4 + lVar7 * 8 + 0x20);
            if (plVar2 != (long *)0x0) {
              lVar4 = *plVar2;
              if ((ulong)*(ushort *)(lVar4 + 0x12a) != 0) {
                uVar5 = 0;
                piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar6 + -2) ==
                      _MG_BlocksEngine2_Block_I_BE2_BlockSection_TypeInfo_12d4de8) {
                    puVar1 = (undefined8 *)(lVar4 + (long)(*piVar6 + 1) * 0x10 + 0x138);
                    goto LAB_0057bf84;
                  }
                  uVar5 = uVar5 + 1;
                  piVar6 = piVar6 + 4;
                } while (uVar5 < *(ushort *)(lVar4 + 0x12a));
              }
              puVar1 = (undefined8 *)
                       native_sub_3c9b34(plVar2,
                                         _MG_BlocksEngine2_Block_I_BE2_BlockSection_TypeInfo_12d4de8
                                         ,1);
LAB_0057bf84:
              plVar2 = (long *)(*(code *)*puVar1)(plVar2,puVar1[1]);
              if (plVar2 != (long *)0x0) {
                lVar4 = *plVar2;
                if ((ulong)*(ushort *)(lVar4 + 0x12a) != 0) {
                  uVar5 = 0;
                  piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar6 + -2) ==
                        _MG_BlocksEngine2_Block_I_BE2_BlockSectionHeader_TypeInfo_12d4df8) {
                      puVar1 = (undefined8 *)(lVar4 + (long)(*piVar6 + 2) * 0x10 + 0x138);
                      goto LAB_0057bff8;
                    }
                    uVar5 = uVar5 + 1;
                    piVar6 = piVar6 + 4;
                  } while (uVar5 < *(ushort *)(lVar4 + 0x12a));
                }
                puVar1 = (undefined8 *)
                         native_sub_3c9b34(plVar2,
                                           _MG_BlocksEngine2_Block_I_BE2_BlockSectionHeader_TypeInfo_12d4df8
                                           ,2);
LAB_0057bff8:
                lVar4 = (*(code *)*puVar1)(plVar2,puVar1[1]);
                if (lVar4 != 0) {
                  if (*(int *)(lVar4 + 0x18) <= (int)param_4) {
                    return;
                  }
                  lVar4 = *param_2;
                  if ((ulong)*(ushort *)(lVar4 + 0x12a) != 0) {
                    uVar5 = 0;
                    piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
                    do {
                      if (*(long *)(piVar6 + -2) ==
                          _MG_BlocksEngine2_Block_I_BE2_Block_TypeInfo_12d4dd8) {
                        puVar1 = (undefined8 *)(lVar4 + (long)(*piVar6 + 3) * 0x10 + 0x138);
                        goto LAB_0057c06c;
                      }
                      uVar5 = uVar5 + 1;
                      piVar6 = piVar6 + 4;
                    } while (uVar5 < *(ushort *)(lVar4 + 0x12a));
                  }
                  puVar1 = (undefined8 *)
                           native_sub_3c9b34(param_2,
                                             _MG_BlocksEngine2_Block_I_BE2_Block_TypeInfo_12d4dd8,3)
                  ;
LAB_0057c06c:
                  plVar2 = (long *)(*(code *)*puVar1)(param_2,puVar1[1]);
                  if (plVar2 != (long *)0x0) {
                    lVar4 = *plVar2;
                    if ((ulong)*(ushort *)(lVar4 + 0x12a) != 0) {
                      uVar5 = 0;
                      piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
                      do {
                        if (*(long *)(piVar6 + -2) ==
                            _MG_BlocksEngine2_Block_I_BE2_BlockLayout_TypeInfo_12d4de0) {
                          puVar1 = (undefined8 *)(lVar4 + (long)(*piVar6 + 2) * 0x10 + 0x138);
                          goto LAB_0057c0d8;
                        }
                        uVar5 = uVar5 + 1;
                        piVar6 = piVar6 + 4;
                      } while (uVar5 < *(ushort *)(lVar4 + 0x12a));
                    }
                    puVar1 = (undefined8 *)
                             native_sub_3c9b34(plVar2,
                                               _MG_BlocksEngine2_Block_I_BE2_BlockLayout_TypeInfo_12d4de0
                                               ,2);
LAB_0057c0d8:
                    lVar4 = (*(code *)*puVar1)(plVar2,puVar1[1]);
                    if (lVar4 != 0) {
                      if (*(uint *)(lVar4 + 0x18) <= param_3) {
LAB_0057c91c:
                        uVar3 = native_sub_43283c();
                    /* WARNING: Subroutine does not return */
                        native_sub_4327dc(uVar3,0);
                      }
                      plVar2 = *(long **)(lVar4 + lVar7 * 8 + 0x20);
                      if (plVar2 != (long *)0x0) {
                        lVar4 = *plVar2;
                        if ((ulong)*(ushort *)(lVar4 + 0x12a) != 0) {
                          uVar5 = 0;
                          piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
                          do {
                            if (*(long *)(piVar6 + -2) ==
                                _MG_BlocksEngine2_Block_I_BE2_BlockSection_TypeInfo_12d4de8) {
                              puVar1 = (undefined8 *)(lVar4 + (long)(*piVar6 + 1) * 0x10 + 0x138);
                              goto LAB_0057c158;
                            }
                            uVar5 = uVar5 + 1;
                            piVar6 = piVar6 + 4;
                          } while (uVar5 < *(ushort *)(lVar4 + 0x12a));
                        }
                        puVar1 = (undefined8 *)
                                 native_sub_3c9b34(plVar2,
                                                  _MG_BlocksEngine2_Block_I_BE2_BlockSection_TypeInfo_12d4de8
                                                  ,1);
LAB_0057c158:
                        plVar2 = (long *)(*(code *)*puVar1)(plVar2,puVar1[1]);
                        if (plVar2 != (long *)0x0) {
                          lVar4 = *plVar2;
                          if ((ulong)*(ushort *)(lVar4 + 0x12a) != 0) {
                            uVar5 = 0;
                            piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
                            do {
                              if (*(long *)(piVar6 + -2) ==
                                  _MG_BlocksEngine2_Block_I_BE2_BlockSectionHeader_TypeInfo_12d4df8)
                              {
                                puVar1 = (undefined8 *)(lVar4 + (long)(*piVar6 + 2) * 0x10 + 0x138);
                                goto LAB_0057c1c4;
                              }
                              uVar5 = uVar5 + 1;
                              piVar6 = piVar6 + 4;
                            } while (uVar5 < *(ushort *)(lVar4 + 0x12a));
                          }
                          puVar1 = (undefined8 *)
                                   native_sub_3c9b34(plVar2,
                                                  _MG_BlocksEngine2_Block_I_BE2_BlockSectionHeader_TypeInfo_12d4df8
                                                  ,2);
LAB_0057c1c4:
                          lVar4 = (*(code *)*puVar1)(plVar2,puVar1[1]);
                          if (lVar4 != 0) {
                            if (*(uint *)(lVar4 + 0x18) <= param_4) goto LAB_0057c91c;
                            plVar2 = *(long **)(lVar4 + (long)(int)param_4 * 8 + 0x20);
                            if (plVar2 != (long *)0x0) {
                              lVar4 = *plVar2;
                              if ((ulong)*(ushort *)(lVar4 + 0x12a) != 0) {
                                uVar5 = 0;
                                piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
                                do {
                                  if (*(long *)(piVar6 + -2) ==
                                      _MG_BlocksEngine2_Block_I_BE2_BlockSectionHeaderInput_TypeInfo_12d4e00
                                     ) {
                                    puVar1 = (undefined8 *)(lVar4 + (long)*piVar6 * 0x10 + 0x138);
                                    goto LAB_0057c248;
                                  }
                                  uVar5 = uVar5 + 1;
                                  piVar6 = piVar6 + 4;
                                } while (uVar5 < *(ushort *)(lVar4 + 0x12a));
                              }
                              puVar1 = (undefined8 *)
                                       native_sub_3c9b34(plVar2,
                                                  _MG_BlocksEngine2_Block_I_BE2_BlockSectionHeaderInput_TypeInfo_12d4e00
                                                  ,0);
LAB_0057c248:
                              lVar4 = (*(code *)*puVar1)(plVar2,puVar1[1]);
                              if (lVar4 != 0) {
                                lVar4 = native_UnityEngine_Component__GetComponent_ActiveAnimation__49daec
                                                  (lVar4,
                                                  _Method_UnityEngine_Component_GetComponent_I_BE2_Spot____12e2a68
                                                  );
                                if (lVar4 == 0) {
                                  return;
                                }
                                native_MG_BlocksEngine2_DragDrop_BE2_DragOperation__DropTo_57b90c
                                          (param_1,lVar4);
                                lVar4 = *param_2;
                                if ((ulong)*(ushort *)(lVar4 + 0x12a) != 0) {
                                  uVar5 = 0;
                                  piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
                                  do {
                                    if (*(long *)(piVar6 + -2) ==
                                        _MG_BlocksEngine2_Block_I_BE2_Block_TypeInfo_12d4dd8) {
                                      puVar1 = (undefined8 *)
                                               (lVar4 + (long)(*piVar6 + 3) * 0x10 + 0x138);
                                      goto LAB_0057c2ec;
                                    }
                                    uVar5 = uVar5 + 1;
                                    piVar6 = piVar6 + 4;
                                  } while (uVar5 < *(ushort *)(lVar4 + 0x12a));
                                }
                                puVar1 = (undefined8 *)
                                         native_sub_3c9b34(param_2,
                                                  _MG_BlocksEngine2_Block_I_BE2_Block_TypeInfo_12d4dd8
                                                  ,3);
LAB_0057c2ec:
                                plVar2 = (long *)(*(code *)*puVar1)(param_2,puVar1[1]);
                                if (plVar2 != (long *)0x0) {
                                  lVar4 = *plVar2;
                                  if ((ulong)*(ushort *)(lVar4 + 0x12a) != 0) {
                                    uVar5 = 0;
                                    piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
                                    do {
                                      if (*(long *)(piVar6 + -2) ==
                                          _MG_BlocksEngine2_Block_I_BE2_BlockLayout_TypeInfo_12d4de0
                                         ) {
                                        puVar1 = (undefined8 *)
                                                 (lVar4 + (long)(*piVar6 + 2) * 0x10 + 0x138);
                                        goto LAB_0057c358;
                                      }
                                      uVar5 = uVar5 + 1;
                                      piVar6 = piVar6 + 4;
                                    } while (uVar5 < *(ushort *)(lVar4 + 0x12a));
                                  }
                                  puVar1 = (undefined8 *)
                                           native_sub_3c9b34(plVar2,
                                                  _MG_BlocksEngine2_Block_I_BE2_BlockLayout_TypeInfo_12d4de0
                                                  ,2);
LAB_0057c358:
                                  lVar4 = (*(code *)*puVar1)(plVar2,puVar1[1]);
                                  if (lVar4 != 0) {
                                    if (*(uint *)(lVar4 + 0x18) <= param_3) goto LAB_0057c91c;
                                    plVar2 = *(long **)(lVar4 + lVar7 * 8 + 0x20);
                                    if (plVar2 != (long *)0x0) {
                                      lVar4 = *plVar2;
                                      if ((ulong)*(ushort *)(lVar4 + 0x12a) != 0) {
                                        uVar5 = 0;
                                        piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
                                        do {
                                          if (*(long *)(piVar6 + -2) ==
                                              _MG_BlocksEngine2_Block_I_BE2_BlockSection_TypeInfo_12d4de8
                                             ) {
                                            puVar1 = (undefined8 *)
                                                     (lVar4 + (long)(*piVar6 + 1) * 0x10 + 0x138);
                                            goto LAB_0057c3d8;
                                          }
                                          uVar5 = uVar5 + 1;
                                          piVar6 = piVar6 + 4;
                                        } while (uVar5 < *(ushort *)(lVar4 + 0x12a));
                                      }
                                      puVar1 = (undefined8 *)
                                               native_sub_3c9b34(plVar2,
                                                  _MG_BlocksEngine2_Block_I_BE2_BlockSection_TypeInfo_12d4de8
                                                  ,1);
LAB_0057c3d8:
                                      plVar2 = (long *)(*(code *)*puVar1)(plVar2,puVar1[1]);
                                      if (plVar2 != (long *)0x0) {
                                        lVar4 = *plVar2;
                                        if ((ulong)*(ushort *)(lVar4 + 0x12a) != 0) {
                                          uVar5 = 0;
                                          piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
                                          do {
                                            if (*(long *)(piVar6 + -2) ==
                                                _MG_BlocksEngine2_Block_I_BE2_BlockSectionHeader_TypeInfo_12d4df8
                                               ) {
                                              puVar1 = (undefined8 *)
                                                       (lVar4 + (long)(*piVar6 + 7) * 0x10 + 0x138);
                                              goto LAB_0057c444;
                                            }
                                            uVar5 = uVar5 + 1;
                                            piVar6 = piVar6 + 4;
                                          } while (uVar5 < *(ushort *)(lVar4 + 0x12a));
                                        }
                                        puVar1 = (undefined8 *)
                                                 native_sub_3c9b34(plVar2,
                                                  _MG_BlocksEngine2_Block_I_BE2_BlockSectionHeader_TypeInfo_12d4df8
                                                  ,7);
LAB_0057c444:
                                        (*(code *)*puVar1)(plVar2,puVar1[1]);
                                        lVar4 = *param_2;
                                        if ((ulong)*(ushort *)(lVar4 + 0x12a) != 0) {
                                          uVar5 = 0;
                                          piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
                                          do {
                                            if (*(long *)(piVar6 + -2) ==
                                                _MG_BlocksEngine2_Block_I_BE2_Block_TypeInfo_12d4dd8
                                               ) {
                                              puVar1 = (undefined8 *)
                                                       (lVar4 + (long)(*piVar6 + 3) * 0x10 + 0x138);
                                              goto LAB_0057c4a8;
                                            }
                                            uVar5 = uVar5 + 1;
                                            piVar6 = piVar6 + 4;
                                          } while (uVar5 < *(ushort *)(lVar4 + 0x12a));
                                        }
                                        puVar1 = (undefined8 *)
                                                 native_sub_3c9b34(param_2,
                                                  _MG_BlocksEngine2_Block_I_BE2_Block_TypeInfo_12d4dd8
                                                  ,3);
LAB_0057c4a8:
                                        plVar2 = (long *)(*(code *)*puVar1)(param_2,puVar1[1]);
                                        if (plVar2 != (long *)0x0) {
                                          lVar4 = *plVar2;
                                          if ((ulong)*(ushort *)(lVar4 + 0x12a) != 0) {
                                            uVar5 = 0;
                                            piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
                                            do {
                                              if (*(long *)(piVar6 + -2) ==
                                                  _MG_BlocksEngine2_Block_I_BE2_BlockLayout_TypeInfo_12d4de0
                                                 ) {
                                                puVar1 = (undefined8 *)
                                                         (lVar4 + (long)(*piVar6 + 2) * 0x10 + 0x138
                                                         );
                                                goto LAB_0057c514;
                                              }
                                              uVar5 = uVar5 + 1;
                                              piVar6 = piVar6 + 4;
                                            } while (uVar5 < *(ushort *)(lVar4 + 0x12a));
                                          }
                                          puVar1 = (undefined8 *)
                                                   native_sub_3c9b34(plVar2,
                                                  _MG_BlocksEngine2_Block_I_BE2_BlockLayout_TypeInfo_12d4de0
                                                  ,2);
LAB_0057c514:
                                          lVar4 = (*(code *)*puVar1)(plVar2,puVar1[1]);
                                          if (lVar4 != 0) {
                                            if (*(uint *)(lVar4 + 0x18) <= param_3)
                                            goto LAB_0057c91c;
                                            plVar2 = *(long **)(lVar4 + lVar7 * 8 + 0x20);
                                            if (plVar2 != (long *)0x0) {
                                              lVar4 = *plVar2;
                                              if ((ulong)*(ushort *)(lVar4 + 0x12a) != 0) {
                                                uVar5 = 0;
                                                piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
                                                do {
                                                  if (*(long *)(piVar6 + -2) ==
                                                                                                            
                                                  _MG_BlocksEngine2_Block_I_BE2_BlockSection_TypeInfo_12d4de8
                                                  ) {
                                                    puVar1 = (undefined8 *)
                                                             (lVar4 + (long)(*piVar6 + 1) * 0x10 +
                                                             0x138);
                                                    goto LAB_0057c594;
                                                  }
                                                  uVar5 = uVar5 + 1;
                                                  piVar6 = piVar6 + 4;
                                                } while (uVar5 < *(ushort *)(lVar4 + 0x12a));
                                              }
                                              puVar1 = (undefined8 *)
                                                       native_sub_3c9b34(plVar2,
                                                  _MG_BlocksEngine2_Block_I_BE2_BlockSection_TypeInfo_12d4de8
                                                  ,1);
LAB_0057c594:
                                              plVar2 = (long *)(*(code *)*puVar1)(plVar2,puVar1[1]);
                                              if (plVar2 != (long *)0x0) {
                                                lVar4 = *plVar2;
                                                if ((ulong)*(ushort *)(lVar4 + 0x12a) != 0) {
                                                  uVar5 = 0;
                                                  piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
                                                  do {
                                                    if (*(long *)(piVar6 + -2) ==
                                                                                                                
                                                  _MG_BlocksEngine2_Block_I_BE2_BlockSectionHeader_TypeInfo_12d4df8
                                                  ) {
                                                    puVar1 = (undefined8 *)
                                                             (lVar4 + (long)(*piVar6 + 6) * 0x10 +
                                                             0x138);
                                                    goto LAB_0057c600;
                                                  }
                                                  uVar5 = uVar5 + 1;
                                                  piVar6 = piVar6 + 4;
                                                  } while (uVar5 < *(ushort *)(lVar4 + 0x12a));
                                                }
                                                puVar1 = (undefined8 *)
                                                         native_sub_3c9b34(plVar2,
                                                  _MG_BlocksEngine2_Block_I_BE2_BlockSectionHeader_TypeInfo_12d4df8
                                                  ,6);
LAB_0057c600:
                                                (*(code *)*puVar1)(plVar2,puVar1[1]);
                                                lVar4 = *param_2;
                                                if ((ulong)*(ushort *)(lVar4 + 0x12a) != 0) {
                                                  uVar5 = 0;
                                                  piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
                                                  do {
                                                    if (*(long *)(piVar6 + -2) ==
                                                                                                                
                                                  _MG_BlocksEngine2_Block_I_BE2_Block_TypeInfo_12d4dd8
                                                  ) {
                                                    puVar1 = (undefined8 *)
                                                             (lVar4 + (long)(*piVar6 + 4) * 0x10 +
                                                             0x138);
                                                    goto LAB_0057c664;
                                                  }
                                                  uVar5 = uVar5 + 1;
                                                  piVar6 = piVar6 + 4;
                                                  } while (uVar5 < *(ushort *)(lVar4 + 0x12a));
                                                }
                                                puVar1 = (undefined8 *)
                                                         native_sub_3c9b34(param_2,
                                                  _MG_BlocksEngine2_Block_I_BE2_Block_TypeInfo_12d4dd8
                                                  ,4);
LAB_0057c664:
                                                plVar2 = (long *)(*(code *)*puVar1)(param_2,puVar1[1
                                                  ]);
                                                if (plVar2 != (long *)0x0) {
                                                  lVar4 = *plVar2;
                                                  if ((ulong)*(ushort *)(lVar4 + 0x12a) != 0) {
                                                    uVar5 = 0;
                                                    piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
                                                    do {
                                                      if (*(long *)(piVar6 + -2) ==
                                                                                                                    
                                                  _MG_BlocksEngine2_Block_Instruction_I_BE2_Instruction_TypeInfo_12d4e28
                                                  ) {
                                                    puVar1 = (undefined8 *)
                                                             (lVar4 + (long)*piVar6 * 0x10 + 0x138);
                                                    goto LAB_0057c6d4;
                                                  }
                                                  uVar5 = uVar5 + 1;
                                                  piVar6 = piVar6 + 4;
                                                  } while (uVar5 < *(ushort *)(lVar4 + 0x12a));
                                                  }
                                                  puVar1 = (undefined8 *)
                                                           native_sub_3c9b34(plVar2,
                                                  _MG_BlocksEngine2_Block_Instruction_I_BE2_Instruction_TypeInfo_12d4e28
                                                  ,0);
LAB_0057c6d4:
                                                  plVar2 = (long *)(*(code *)*puVar1)(plVar2,puVar1[
                                                  1]);
                                                  if (plVar2 != (long *)0x0) {
                                                    lVar4 = *plVar2;
                                                    if ((ulong)*(ushort *)(lVar4 + 0x12a) != 0) {
                                                      uVar5 = 0;
                                                      piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
                                                      do {
                                                        if (*(long *)(piVar6 + -2) ==
                                                                                                                        
                                                  _MG_BlocksEngine2_Block_Instruction_I_BE2_InstructionBase_TypeInfo_12d4e30
                                                  ) {
                                                    puVar1 = (undefined8 *)
                                                             (lVar4 + (long)(*piVar6 + 4) * 0x10 +
                                                             0x138);
                                                    goto LAB_0057c748;
                                                  }
                                                  uVar5 = uVar5 + 1;
                                                  piVar6 = piVar6 + 4;
                                                  } while (uVar5 < *(ushort *)(lVar4 + 0x12a));
                                                  }
                                                  puVar1 = (undefined8 *)
                                                           native_sub_3c9b34(plVar2,
                                                  _MG_BlocksEngine2_Block_Instruction_I_BE2_InstructionBase_TypeInfo_12d4e30
                                                  ,4);
LAB_0057c748:
                                                  plVar2 = (long *)(*(code *)*puVar1)(plVar2,puVar1[
                                                  1]);
                                                  if (plVar2 != (long *)0x0) {
                                                    lVar4 = *plVar2;
                                                    if ((ulong)*(ushort *)(lVar4 + 0x12a) != 0) {
                                                      uVar5 = 0;
                                                      piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
                                                      do {
                                                        if (*(long *)(piVar6 + -2) ==
                                                                                                                        
                                                  _MG_BlocksEngine2_Core_I_BE2_BlocksStack_TypeInfo_12d4e10
                                                  ) {
                                                    puVar1 = (undefined8 *)
                                                             (lVar4 + (long)(*piVar6 + 0xe) * 0x10 +
                                                             0x138);
                                                    goto LAB_0057c7bc;
                                                  }
                                                  uVar5 = uVar5 + 1;
                                                  piVar6 = piVar6 + 4;
                                                  } while (uVar5 < *(ushort *)(lVar4 + 0x12a));
                                                  }
                                                  puVar1 = (undefined8 *)
                                                           native_sub_3c9b34(plVar2,
                                                  _MG_BlocksEngine2_Core_I_BE2_BlocksStack_TypeInfo_12d4e10
                                                  ,0xe);
LAB_0057c7bc:
                                                  (*(code *)*puVar1)(plVar2,puVar1[1]);
                                                  lVar4 = *param_2;
                                                  if ((ulong)*(ushort *)(lVar4 + 0x12a) != 0) {
                                                    uVar5 = 0;
                                                    piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
                                                    do {
                                                      if (*(long *)(piVar6 + -2) ==
                                                                                                                    
                                                  _MG_BlocksEngine2_Block_I_BE2_Block_TypeInfo_12d4dd8
                                                  ) {
                                                    puVar1 = (undefined8 *)
                                                             (lVar4 + (long)(*piVar6 + 4) * 0x10 +
                                                             0x138);
                                                    goto LAB_0057c820;
                                                  }
                                                  uVar5 = uVar5 + 1;
                                                  piVar6 = piVar6 + 4;
                                                  } while (uVar5 < *(ushort *)(lVar4 + 0x12a));
                                                  }
                                                  puVar1 = (undefined8 *)
                                                           native_sub_3c9b34(param_2,
                                                  _MG_BlocksEngine2_Block_I_BE2_Block_TypeInfo_12d4dd8
                                                  ,4);
LAB_0057c820:
                                                  plVar2 = (long *)(*(code *)*puVar1)(param_2,puVar1
                                                  [1]);
                                                  if (plVar2 != (long *)0x0) {
                                                    lVar4 = *plVar2;
                                                    if ((ulong)*(ushort *)(lVar4 + 0x12a) != 0) {
                                                      uVar5 = 0;
                                                      piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
                                                      do {
                                                        if (*(long *)(piVar6 + -2) ==
                                                                                                                        
                                                  _MG_BlocksEngine2_Block_Instruction_I_BE2_Instruction_TypeInfo_12d4e28
                                                  ) {
                                                    puVar1 = (undefined8 *)
                                                             (lVar4 + (long)*piVar6 * 0x10 + 0x138);
                                                    goto LAB_0057c888;
                                                  }
                                                  uVar5 = uVar5 + 1;
                                                  piVar6 = piVar6 + 4;
                                                  } while (uVar5 < *(ushort *)(lVar4 + 0x12a));
                                                  }
                                                  puVar1 = (undefined8 *)
                                                           native_sub_3c9b34(plVar2,
                                                  _MG_BlocksEngine2_Block_Instruction_I_BE2_Instruction_TypeInfo_12d4e28
                                                  ,0);
LAB_0057c888:
                                                  plVar2 = (long *)(*(code *)*puVar1)(plVar2,puVar1[
                                                  1]);
                                                  if (plVar2 != (long *)0x0) {
                                                    lVar4 = *plVar2;
                                                    if ((ulong)*(ushort *)(lVar4 + 0x12a) != 0) {
                                                      uVar5 = 0;
                                                      piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
                                                      do {
                                                        if (*(long *)(piVar6 + -2) ==
                                                                                                                        
                                                  _MG_BlocksEngine2_Block_Instruction_I_BE2_InstructionBase_TypeInfo_12d4e30
                                                  ) {
                                                    puVar1 = (undefined8 *)
                                                             (lVar4 + (long)(*piVar6 + 0xe) * 0x10 +
                                                             0x138);
                                                    goto LAB_0057c8f4;
                                                  }
                                                  uVar5 = uVar5 + 1;
                                                  piVar6 = piVar6 + 4;
                                                  } while (uVar5 < *(ushort *)(lVar4 + 0x12a));
                                                  }
                                                  puVar1 = (undefined8 *)
                                                           native_sub_3c9b34(plVar2,
                                                  _MG_BlocksEngine2_Block_Instruction_I_BE2_InstructionBase_TypeInfo_12d4e30
                                                  ,0xe);
LAB_0057c8f4:
                    /* WARNING: Could not recover jumptable at 0x0057c914. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                                                  (*(code *)*puVar1)(plVar2,puVar1[1]);
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



/* MG_BlocksEngine2.DragDrop.BE2_DragOperation$$.ctor @ 0x57c928
 * void MG_BlocksEngine2_DragDrop_BE2_DragOperation___ctor (MG_BlocksEngine2_DragDrop_BE2_DragOperation_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MG_BlocksEngine2.DragDrop.BE2_DragOperation$$.ctor
   void MG_BlocksEngine2_DragDrop_BE2_DragOperation___ctor
   (MG_BlocksEngine2_DragDrop_BE2_DragOperation_o* __this, const MethodInfo* method); */

undefined1  [16] native_MG_BlocksEngine2_DragDrop_BE2_DragOperation___ctor_57c928(ulong param_1)

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


