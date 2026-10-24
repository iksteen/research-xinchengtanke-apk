/* ARM64 IL2CPP native pseudocode from Ghidra.
 * Recovered implementation, not original C# source.
 * Function boundaries follow the IL2CPP method address table. */


/* MG_BlocksEngine2.DragDrop.BE2_DragBlock$$get__dragDropManager @ 0x57646c
 * MG_BlocksEngine2_DragDrop_BE2_DragDropManager_o* MG_BlocksEngine2_DragDrop_BE2_DragBlock__get__dragDropManager (MG_BlocksEngine2_DragDrop_BE2_DragBlock_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MG_BlocksEngine2.DragDrop.BE2_DragBlock$$get__dragDropManager
   MG_BlocksEngine2_DragDrop_BE2_DragDropManager_o*
   MG_BlocksEngine2_DragDrop_BE2_DragBlock__get__dragDropManager
   (MG_BlocksEngine2_DragDrop_BE2_DragBlock_o* __this, const MethodInfo* method); */

undefined8 native_MG_BlocksEngine2_DragDrop_BE2_DragBlock__get__dragDropManager_57646c(void)

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



/* MG_BlocksEngine2.DragDrop.BE2_DragBlock$$get_Transform @ 0x576558
 * UnityEngine_Transform_o* MG_BlocksEngine2_DragDrop_BE2_DragBlock__get_Transform (MG_BlocksEngine2_DragDrop_BE2_DragBlock_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MG_BlocksEngine2.DragDrop.BE2_DragBlock$$get_Transform
   UnityEngine_Transform_o* MG_BlocksEngine2_DragDrop_BE2_DragBlock__get_Transform
   (MG_BlocksEngine2_DragDrop_BE2_DragBlock_o* __this, const MethodInfo* method); */

undefined8 native_MG_BlocksEngine2_DragDrop_BE2_DragBlock__get_Transform_576558(long param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  
  if ((bRam000000000133eaa0 & 1) == 0) {
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    bRam000000000133eaa0 = 1;
  }
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar1 = native_UnityEngine_Object__op_Implicit_8e1b98(uVar2,0);
  if ((uVar1 & 1) != 0) {
    return *(undefined8 *)(param_1 + 0x20);
  }
  if (pcRam0000000001340ab8 == (code *)0x0) {
    pcRam0000000001340ab8 = (code *)native_sub_4326f0(&UNK_00e2d0e1);
  }
                    /* WARNING: Could not recover jumptable at 0x008da668. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar2 = (*pcRam0000000001340ab8)(param_1);
  return uVar2;
}



/* MG_BlocksEngine2.DragDrop.BE2_DragBlock$$get_RayPoint @ 0x5765e0
 * UnityEngine_Vector2_o MG_BlocksEngine2_DragDrop_BE2_DragBlock__get_RayPoint (MG_BlocksEngine2_DragDrop_BE2_DragBlock_o* __this, const MethodInfo* method); */

/* MG_BlocksEngine2.DragDrop.BE2_DragBlock$$get_RayPoint
   UnityEngine_Vector2_o MG_BlocksEngine2_DragDrop_BE2_DragBlock__get_RayPoint
   (MG_BlocksEngine2_DragDrop_BE2_DragBlock_o* __this, const MethodInfo* method); */

undefined4 native_MG_BlocksEngine2_DragDrop_BE2_DragBlock__get_RayPoint_5765e0(long param_1)

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



/* MG_BlocksEngine2.DragDrop.BE2_DragBlock$$get_Block @ 0x5765fc
 * MG_BlocksEngine2_Block_I_BE2_Block_o* MG_BlocksEngine2_DragDrop_BE2_DragBlock__get_Block (MG_BlocksEngine2_DragDrop_BE2_DragBlock_o* __this, const MethodInfo* method); */

/* MG_BlocksEngine2.DragDrop.BE2_DragBlock$$get_Block
   MG_BlocksEngine2_Block_I_BE2_Block_o* MG_BlocksEngine2_DragDrop_BE2_DragBlock__get_Block
   (MG_BlocksEngine2_DragDrop_BE2_DragBlock_o* __this, const MethodInfo* method); */

undefined8 native_MG_BlocksEngine2_DragDrop_BE2_DragBlock__get_Block_5765fc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* MG_BlocksEngine2.DragDrop.BE2_DragBlock$$set_Block @ 0x576604
 * void MG_BlocksEngine2_DragDrop_BE2_DragBlock__set_Block (MG_BlocksEngine2_DragDrop_BE2_DragBlock_o* __this, MG_BlocksEngine2_Block_I_BE2_Block_o* value, const MethodInfo* method); */

/* MG_BlocksEngine2.DragDrop.BE2_DragBlock$$set_Block
   void MG_BlocksEngine2_DragDrop_BE2_DragBlock__set_Block
   (MG_BlocksEngine2_DragDrop_BE2_DragBlock_o* __this, MG_BlocksEngine2_Block_I_BE2_Block_o* value,
   const MethodInfo* method); */

void native_MG_BlocksEngine2_DragDrop_BE2_DragBlock__set_Block_576604
               (long param_1,undefined8 param_2)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  
  puVar4 = (undefined8 *)(param_1 + 0x28);
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



/* MG_BlocksEngine2.DragDrop.BE2_DragBlock$$Awake @ 0x57660c
 * void MG_BlocksEngine2_DragDrop_BE2_DragBlock__Awake (MG_BlocksEngine2_DragDrop_BE2_DragBlock_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MG_BlocksEngine2.DragDrop.BE2_DragBlock$$Awake
   void MG_BlocksEngine2_DragDrop_BE2_DragBlock__Awake (MG_BlocksEngine2_DragDrop_BE2_DragBlock_o*
   __this, const MethodInfo* method); */

void native_MG_BlocksEngine2_DragDrop_BE2_DragBlock__Awake_57660c(long param_1)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  undefined8 uVar4;
  
  if ((bRam000000000133eaa1 & 1) == 0) {
    native_sub_43273c(&Method_UnityEngine_Component_GetComponent_I_BE2_Block____12e2a08);
    native_sub_43273c(&Method_UnityEngine_Component_GetComponent_RectTransform____12e2ad0);
    bRam000000000133eaa1 = 1;
  }
  uVar4 = native_UnityEngine_Component__get_transform_8da62c(param_1,0);
  *(undefined8 *)(param_1 + 0x20) = uVar4;
  native_sub_4326e0(param_1 + 0x20);
  uVar4 = native_UnityEngine_Component__GetComponent_ActiveAnimation__49daec
                    (param_1,_Method_UnityEngine_Component_GetComponent_RectTransform____12e2ad0);
  *(undefined8 *)(param_1 + 0x18) = uVar4;
  native_sub_4326e0(param_1 + 0x18);
  uVar4 = native_UnityEngine_Component__GetComponent_ActiveAnimation__49daec
                    (param_1,_Method_UnityEngine_Component_GetComponent_I_BE2_Block____12e2a08);
  *(undefined8 *)(param_1 + 0x28) = uVar4;
  if (iRam0000000001345318 != 0) {
    puVar1 = (ulong *)((param_1 + 0x28U >> 0x12 & 0x7fff) * 8 + 0x138ecd8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar3) {
        *puVar1 = *puVar1 | 1L << (param_1 + 0x28U >> 0xc & 0x3f);
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  return;
}



/* MG_BlocksEngine2.DragDrop.BE2_DragBlock$$OnPointerDown @ 0x5766b4
 * void MG_BlocksEngine2_DragDrop_BE2_DragBlock__OnPointerDown (MG_BlocksEngine2_DragDrop_BE2_DragBlock_o* __this, const MethodInfo* method); */

/* MG_BlocksEngine2.DragDrop.BE2_DragBlock$$OnPointerDown
   void MG_BlocksEngine2_DragDrop_BE2_DragBlock__OnPointerDown
   (MG_BlocksEngine2_DragDrop_BE2_DragBlock_o* __this, const MethodInfo* method); */

void native_MG_BlocksEngine2_DragDrop_BE2_DragBlock__OnPointerDown_5766b4(void)

{
  return;
}



/* MG_BlocksEngine2.DragDrop.BE2_DragBlock$$OnRightPointerDownOrHold @ 0x5766b8
 * void MG_BlocksEngine2_DragDrop_BE2_DragBlock__OnRightPointerDownOrHold (MG_BlocksEngine2_DragDrop_BE2_DragBlock_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MG_BlocksEngine2.DragDrop.BE2_DragBlock$$OnRightPointerDownOrHold
   void MG_BlocksEngine2_DragDrop_BE2_DragBlock__OnRightPointerDownOrHold
   (MG_BlocksEngine2_DragDrop_BE2_DragBlock_o* __this, const MethodInfo* method); */

void native_MG_BlocksEngine2_DragDrop_BE2_DragBlock__OnRightPointerDownOrHold_5766b8(long param_1)

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
  
  if ((bRam000000000133eaa2 & 1) == 0) {
    native_sub_43273c(&Method_System_Array_Empty_string____12dedf8);
    native_sub_43273c(&
                      Method_MG_BlocksEngine2_UI_BE2_UI_ContextMenuManager_OpenContextMenu_I_BE2_Block____12e22d0
                     );
    bRam000000000133eaa2 = 1;
  }
  lVar2 = native_MG_BlocksEngine2_UI_BE2_UI_ContextMenuManager__get_instance_dc6a44(0);
  lVar8 = _Method_System_Array_Empty_string____12dedf8;
  uVar6 = *(undefined8 *)(param_1 + 0x28);
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



/* MG_BlocksEngine2.DragDrop.BE2_DragBlock$$OnDrag @ 0x5767c4
 * void MG_BlocksEngine2_DragDrop_BE2_DragBlock__OnDrag (MG_BlocksEngine2_DragDrop_BE2_DragBlock_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MG_BlocksEngine2.DragDrop.BE2_DragBlock$$OnDrag
   void MG_BlocksEngine2_DragDrop_BE2_DragBlock__OnDrag (MG_BlocksEngine2_DragDrop_BE2_DragBlock_o*
   __this, const MethodInfo* method); */

void native_MG_BlocksEngine2_DragDrop_BE2_DragBlock__OnDrag_5767c4(long param_1)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  ulong uVar4;
  long lVar5;
  undefined8 *puVar6;
  long *plVar7;
  byte bVar8;
  int *piVar9;
  long *plVar10;
  undefined8 uVar11;
  float fVar12;
  undefined4 uVar13;
  
  if (*(char *)(param_1 + 0x30) != '\0') {
    return;
  }
  if ((bRam000000000133eaa3 & 1) == 0) {
    native_sub_43273c(&MG_BlocksEngine2_Block_BE2_SpotBlockBody_TypeInfo_12d3a50);
    native_sub_43273c(&MG_BlocksEngine2_Block_BE2_SpotOuterArea_TypeInfo_12d3a60);
    native_sub_43273c(&MG_BlocksEngine2_Block_I_BE2_BlockSection_TypeInfo_12d4de8);
    native_sub_43273c(&MG_BlocksEngine2_Block_I_BE2_Block_TypeInfo_12d4dd8);
    native_sub_43273c(&MG_BlocksEngine2_DragDrop_I_BE2_Raycaster_TypeInfo_12d4e40);
    native_sub_43273c(&MG_BlocksEngine2_Block_I_BE2_Spot_TypeInfo_12d4e48);
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    bRam000000000133eaa3 = 1;
  }
  *(undefined1 *)(param_1 + 0x30) = 1;
  lVar2 = native_MG_BlocksEngine2_DragDrop_BE2_DragBlock__get_Transform_576558(param_1);
  if (lVar2 == 0) goto LAB_00576f1c;
  uVar3 = native_UnityEngine_Transform__get_parent_765eb0(lVar2,0);
  lVar2 = native_MG_BlocksEngine2_DragDrop_BE2_DragDropManager__get_Instance_576470();
  if (lVar2 == 0) goto LAB_00576f1c;
  uVar11 = *(undefined8 *)(lVar2 + 0x28);
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar4 = native_UnityEngine_Object__op_Inequality_8d76fc(uVar3,uVar11,0);
  if ((uVar4 & 1) != 0) {
    lVar2 = native_MG_BlocksEngine2_DragDrop_BE2_DragBlock__get_Transform_576558(param_1);
    lVar5 = native_MG_BlocksEngine2_DragDrop_BE2_DragDropManager__get_Instance_576470();
    if ((lVar5 == 0) || (lVar2 == 0)) goto LAB_00576f1c;
    native_UnityEngine_Transform__SetParent_7720e0(lVar2,*(undefined8 *)(lVar5 + 0x28),1,0);
  }
  lVar2 = native_MG_BlocksEngine2_DragDrop_BE2_DragDropManager__get_Instance_576470();
  if (lVar2 == 0) goto LAB_00576f1c;
  plVar10 = *(long **)(lVar2 + 0x20);
  lVar2 = native_MG_BlocksEngine2_DragDrop_BE2_DragDropManager__get_Instance_576470();
  if ((lVar2 == 0) || (plVar10 == (long *)0x0)) goto LAB_00576f1c;
  lVar5 = *plVar10;
  uVar13 = *(undefined4 *)(lVar2 + 0x54);
  if ((ulong)*(ushort *)(lVar5 + 0x12a) != 0) {
    uVar4 = 0;
    piVar9 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
    do {
      if (*(long *)(piVar9 + -2) == _MG_BlocksEngine2_DragDrop_I_BE2_Raycaster_TypeInfo_12d4e40) {
        puVar6 = (undefined8 *)(lVar5 + (long)(*piVar9 + 5) * 0x10 + 0x138);
        goto LAB_00576964;
      }
      uVar4 = uVar4 + 1;
      piVar9 = piVar9 + 4;
    } while (uVar4 < *(ushort *)(lVar5 + 0x12a));
  }
  puVar6 = (undefined8 *)
           native_sub_3c9b34(plVar10,_MG_BlocksEngine2_DragDrop_I_BE2_Raycaster_TypeInfo_12d4e40,5);
LAB_00576964:
  plVar10 = (long *)(*(code *)*puVar6)(uVar13,plVar10,param_1,puVar6[1]);
  lVar2 = native_MG_BlocksEngine2_DragDrop_BE2_DragDropManager__get_Instance_576470();
  if (lVar2 == 0) goto LAB_00576f1c;
  lVar2 = *(long *)(lVar2 + 0x48);
  if (plVar10 == (long *)0x0) {
LAB_005769ec:
    if ((lVar2 != 0) &&
       (lVar5 = native_UnityEngine_Component__get_gameObject_8da66c(lVar2,0), lVar5 != 0)) {
      native_UnityEngine_GameObject__SetActive_8de698(lVar5,0,0);
      lVar5 = native_MG_BlocksEngine2_DragDrop_BE2_DragDropManager__get_Instance_576470();
      if (lVar5 != 0) {
        plVar7 = (long *)(lVar5 + 0x38);
        *plVar7 = 0;
        plVar10 = (long *)0x0;
        goto LAB_00576a1c;
      }
    }
  }
  else {
    lVar5 = *plVar10;
    bVar8 = *(byte *)(lVar5 + 300);
    if ((bVar8 < *(byte *)(_MG_BlocksEngine2_Block_BE2_SpotBlockBody_TypeInfo_12d3a50 + 300)) ||
       (*(long *)(*(long *)(lVar5 + 200) +
                  (ulong)*(byte *)(_MG_BlocksEngine2_Block_BE2_SpotBlockBody_TypeInfo_12d3a50 + 300)
                  * 8 + -8) != _MG_BlocksEngine2_Block_BE2_SpotBlockBody_TypeInfo_12d3a50)) {
LAB_005769c0:
      if ((bVar8 < *(byte *)(_MG_BlocksEngine2_Block_BE2_SpotOuterArea_TypeInfo_12d3a60 + 300)) ||
         (*(long *)(*(long *)(lVar5 + 200) +
                    (ulong)*(byte *)(_MG_BlocksEngine2_Block_BE2_SpotOuterArea_TypeInfo_12d3a60 +
                                    300) * 8 + -8) !=
          _MG_BlocksEngine2_Block_BE2_SpotOuterArea_TypeInfo_12d3a60)) goto LAB_005769ec;
      if ((ulong)*(ushort *)(lVar5 + 0x12a) != 0) {
        uVar4 = 0;
        piVar9 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(long *)(piVar9 + -2) == _MG_BlocksEngine2_Block_I_BE2_Spot_TypeInfo_12d4e48) {
            puVar6 = (undefined8 *)(lVar5 + (long)(*piVar9 + 2) * 0x10 + 0x138);
            goto LAB_00576ba0;
          }
          uVar4 = uVar4 + 1;
          piVar9 = piVar9 + 4;
        } while (uVar4 < *(ushort *)(lVar5 + 0x12a));
      }
      puVar6 = (undefined8 *)
               native_sub_3c9b34(plVar10,_MG_BlocksEngine2_Block_I_BE2_Spot_TypeInfo_12d4e48,2);
LAB_00576ba0:
      plVar7 = (long *)(*(code *)*puVar6)(plVar10,puVar6[1]);
      if (plVar7 == (long *)0x0) goto LAB_00576f1c;
      lVar5 = *plVar7;
      if ((ulong)*(ushort *)(lVar5 + 0x12a) != 0) {
        uVar4 = 0;
        piVar9 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(long *)(piVar9 + -2) == _MG_BlocksEngine2_Block_I_BE2_Block_TypeInfo_12d4dd8) {
            puVar6 = (undefined8 *)(lVar5 + (long)*piVar9 * 0x10 + 0x138);
            goto LAB_00576c10;
          }
          uVar4 = uVar4 + 1;
          piVar9 = piVar9 + 4;
        } while (uVar4 < *(ushort *)(lVar5 + 0x12a));
      }
      puVar6 = (undefined8 *)
               native_sub_3c9b34(plVar7,_MG_BlocksEngine2_Block_I_BE2_Block_TypeInfo_12d4dd8,0);
LAB_00576c10:
      lVar5 = (*(code *)*puVar6)(plVar7,puVar6[1]);
      if ((lVar5 == 0) ||
         (uVar3 = native_UnityEngine_Transform__get_parent_765eb0(lVar5,0), lVar2 == 0))
      goto LAB_00576f1c;
      native_UnityEngine_Transform__SetParent_77208c(lVar2,uVar3,0);
      native_UnityEngine_Vector3__get_one_776a20(0);
      native_UnityEngine_Transform__set_localScale_771e30(lVar2,0);
      lVar5 = native_UnityEngine_Component__get_gameObject_8da66c(lVar2,0);
      if (lVar5 == 0) goto LAB_00576f1c;
      native_UnityEngine_GameObject__SetActive_8de698(lVar5,1,0);
      lVar5 = *plVar10;
      if ((ulong)*(ushort *)(lVar5 + 0x12a) != 0) {
        uVar4 = 0;
        piVar9 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(long *)(piVar9 + -2) == _MG_BlocksEngine2_Block_I_BE2_Spot_TypeInfo_12d4e48) {
            puVar6 = (undefined8 *)(lVar5 + (long)(*piVar9 + 2) * 0x10 + 0x138);
            goto LAB_00576cc4;
          }
          uVar4 = uVar4 + 1;
          piVar9 = piVar9 + 4;
        } while (uVar4 < *(ushort *)(lVar5 + 0x12a));
      }
      puVar6 = (undefined8 *)
               native_sub_3c9b34(plVar10,_MG_BlocksEngine2_Block_I_BE2_Spot_TypeInfo_12d4e48,2);
LAB_00576cc4:
      plVar7 = (long *)(*(code *)*puVar6)(plVar10,puVar6[1]);
      if (plVar7 == (long *)0x0) goto LAB_00576f1c;
      lVar5 = *plVar7;
      if ((ulong)*(ushort *)(lVar5 + 0x12a) != 0) {
        uVar4 = 0;
        piVar9 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(long *)(piVar9 + -2) == _MG_BlocksEngine2_Block_I_BE2_Block_TypeInfo_12d4dd8) {
            puVar6 = (undefined8 *)(lVar5 + (long)*piVar9 * 0x10 + 0x138);
            goto LAB_00576d2c;
          }
          uVar4 = uVar4 + 1;
          piVar9 = piVar9 + 4;
        } while (uVar4 < *(ushort *)(lVar5 + 0x12a));
      }
      puVar6 = (undefined8 *)
               native_sub_3c9b34(plVar7,_MG_BlocksEngine2_Block_I_BE2_Block_TypeInfo_12d4dd8,0);
LAB_00576d2c:
      lVar5 = (*(code *)*puVar6)(plVar7,puVar6[1]);
      if (lVar5 == 0) goto LAB_00576f1c;
      iVar1 = native_UnityEngine_Transform__GetSiblingIndex_772b74(lVar5,0);
      native_UnityEngine_Transform__SetSiblingIndex_772b24(lVar2,iVar1 + 1,0);
      lVar5 = *plVar10;
      if ((ulong)*(ushort *)(lVar5 + 0x12a) != 0) {
        uVar4 = 0;
        piVar9 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(long *)(piVar9 + -2) == _MG_BlocksEngine2_Block_I_BE2_Spot_TypeInfo_12d4e48) {
            puVar6 = (undefined8 *)(lVar5 + (long)(*piVar9 + 2) * 0x10 + 0x138);
            goto LAB_00576dac;
          }
          uVar4 = uVar4 + 1;
          piVar9 = piVar9 + 4;
        } while (uVar4 < *(ushort *)(lVar5 + 0x12a));
      }
      puVar6 = (undefined8 *)
               native_sub_3c9b34(plVar10,_MG_BlocksEngine2_Block_I_BE2_Spot_TypeInfo_12d4e48,2);
LAB_00576dac:
      plVar7 = (long *)(*(code *)*puVar6)(plVar10,puVar6[1]);
      if (plVar7 == (long *)0x0) goto LAB_00576f1c;
      lVar5 = *plVar7;
      if ((ulong)*(ushort *)(lVar5 + 0x12a) != 0) {
        uVar4 = 0;
        piVar9 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(long *)(piVar9 + -2) == _MG_BlocksEngine2_Block_I_BE2_Block_TypeInfo_12d4dd8) {
            puVar6 = (undefined8 *)(lVar5 + (long)(*piVar9 + 6) * 0x10 + 0x138);
            goto LAB_00576e18;
          }
          uVar4 = uVar4 + 1;
          piVar9 = piVar9 + 4;
        } while (uVar4 < *(ushort *)(lVar5 + 0x12a));
      }
      puVar6 = (undefined8 *)
               native_sub_3c9b34(plVar7,_MG_BlocksEngine2_Block_I_BE2_Block_TypeInfo_12d4dd8,6);
LAB_00576e18:
      plVar7 = (long *)(*(code *)*puVar6)(plVar7,puVar6[1]);
      if (plVar7 == (long *)0x0) goto LAB_00576f1c;
      lVar5 = *plVar7;
      if ((ulong)*(ushort *)(lVar5 + 0x12a) != 0) {
        uVar4 = 0;
        piVar9 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(long *)(piVar9 + -2) == _MG_BlocksEngine2_Block_I_BE2_BlockSection_TypeInfo_12d4de8)
          {
            puVar6 = (undefined8 *)(lVar5 + (long)(*piVar9 + 6) * 0x10 + 0x138);
            goto LAB_00576e8c;
          }
          uVar4 = uVar4 + 1;
          piVar9 = piVar9 + 4;
        } while (uVar4 < *(ushort *)(lVar5 + 0x12a));
      }
      puVar6 = (undefined8 *)
               native_sub_3c9b34(plVar7,_MG_BlocksEngine2_Block_I_BE2_BlockSection_TypeInfo_12d4de8,
                                 6);
LAB_00576e8c:
      (*(code *)*puVar6)(plVar7,puVar6[1]);
    }
    else {
      if ((ulong)*(ushort *)(lVar5 + 0x12a) != 0) {
        uVar4 = 0;
        piVar9 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(long *)(piVar9 + -2) == _MG_BlocksEngine2_Block_I_BE2_Spot_TypeInfo_12d4e48) {
            puVar6 = (undefined8 *)(lVar5 + (long)(*piVar9 + 2) * 0x10 + 0x138);
            goto LAB_00576b24;
          }
          uVar4 = uVar4 + 1;
          piVar9 = piVar9 + 4;
        } while (uVar4 < *(ushort *)(lVar5 + 0x12a));
      }
      puVar6 = (undefined8 *)
               native_sub_3c9b34(plVar10,_MG_BlocksEngine2_Block_I_BE2_Spot_TypeInfo_12d4e48,2);
LAB_00576b24:
      lVar5 = (*(code *)*puVar6)(plVar10,puVar6[1]);
      if (lVar5 == *(long *)(param_1 + 0x28)) {
        lVar5 = *plVar10;
        bVar8 = *(byte *)(lVar5 + 300);
        goto LAB_005769c0;
      }
      lVar5 = *plVar10;
      if ((ulong)*(ushort *)(lVar5 + 0x12a) != 0) {
        uVar4 = 0;
        piVar9 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(long *)(piVar9 + -2) == _MG_BlocksEngine2_Block_I_BE2_Spot_TypeInfo_12d4e48) {
            puVar6 = (undefined8 *)(lVar5 + (long)*piVar9 * 0x10 + 0x138);
            goto LAB_00576ea8;
          }
          uVar4 = uVar4 + 1;
          piVar9 = piVar9 + 4;
        } while (uVar4 < *(ushort *)(lVar5 + 0x12a));
      }
      puVar6 = (undefined8 *)
               native_sub_3c9b34(plVar10,_MG_BlocksEngine2_Block_I_BE2_Spot_TypeInfo_12d4e48,0);
LAB_00576ea8:
      uVar3 = (*(code *)*puVar6)(plVar10,puVar6[1]);
      if (lVar2 == 0) goto LAB_00576f1c;
      native_UnityEngine_Transform__SetParent_77208c(lVar2,uVar3,0);
      native_UnityEngine_Vector3__get_one_776a20(0);
      native_UnityEngine_Transform__set_localScale_771e30(lVar2,0);
      lVar5 = native_UnityEngine_Component__get_gameObject_8da66c(lVar2,0);
      if (lVar5 == 0) goto LAB_00576f1c;
      native_UnityEngine_GameObject__SetActive_8de698(lVar5,1,0);
      native_UnityEngine_Transform__SetSiblingIndex_772b24(lVar2,0,0);
    }
    lVar5 = native_MG_BlocksEngine2_DragDrop_BE2_DragDropManager__get_Instance_576470();
    if (lVar5 != 0) {
      plVar7 = (long *)(lVar5 + 0x38);
      *plVar7 = (long)plVar10;
LAB_00576a1c:
      native_sub_4326e0(plVar7,plVar10);
      *(undefined1 *)(param_1 + 0x30) = 0;
      uVar3 = native_UnityEngine_Transform__get_localPosition_7717f4(lVar2,0);
      native_UnityEngine_Transform__get_localPosition_7717f4(lVar2,0);
      native_UnityEngine_Transform__set_localPosition_7718a4(uVar3,lVar2,0);
      fVar12 = (float)native_UnityEngine_Vector3__get_zero_776668(0);
      native_UnityEngine_Quaternion__Internal_FromEulerRad_762560(fVar12 * 0.017453292,lVar2,0);
      if (pcRam000000000133ff08 == (code *)0x0) {
        pcRam000000000133ff08 = (code *)native_sub_4326f0(&UNK_00e2aec2);
      }
      (*pcRam000000000133ff08)(lVar2,&stack0xffffffffffffffd0);
      return;
    }
  }
LAB_00576f1c:
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* MG_BlocksEngine2.DragDrop.BE2_DragBlock$$DetectSpotOnEndOfFrame @ 0x5767d4
 * void MG_BlocksEngine2_DragDrop_BE2_DragBlock__DetectSpotOnEndOfFrame (MG_BlocksEngine2_DragDrop_BE2_DragBlock_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MG_BlocksEngine2.DragDrop.BE2_DragBlock$$DetectSpotOnEndOfFrame
   void MG_BlocksEngine2_DragDrop_BE2_DragBlock__DetectSpotOnEndOfFrame
   (MG_BlocksEngine2_DragDrop_BE2_DragBlock_o* __this, const MethodInfo* method); */

void native_MG_BlocksEngine2_DragDrop_BE2_DragBlock__DetectSpotOnEndOfFrame_5767d4(long param_1)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  ulong uVar4;
  long lVar5;
  undefined8 *puVar6;
  long *plVar7;
  byte bVar8;
  int *piVar9;
  long *plVar10;
  undefined8 uVar11;
  float fVar12;
  undefined4 uVar13;
  
  if ((bRam000000000133eaa3 & 1) == 0) {
    native_sub_43273c(&MG_BlocksEngine2_Block_BE2_SpotBlockBody_TypeInfo_12d3a50);
    native_sub_43273c(&MG_BlocksEngine2_Block_BE2_SpotOuterArea_TypeInfo_12d3a60);
    native_sub_43273c(&MG_BlocksEngine2_Block_I_BE2_BlockSection_TypeInfo_12d4de8);
    native_sub_43273c(&MG_BlocksEngine2_Block_I_BE2_Block_TypeInfo_12d4dd8);
    native_sub_43273c(&MG_BlocksEngine2_DragDrop_I_BE2_Raycaster_TypeInfo_12d4e40);
    native_sub_43273c(&MG_BlocksEngine2_Block_I_BE2_Spot_TypeInfo_12d4e48);
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    bRam000000000133eaa3 = 1;
  }
  *(undefined1 *)(param_1 + 0x30) = 1;
  lVar2 = native_MG_BlocksEngine2_DragDrop_BE2_DragBlock__get_Transform_576558(param_1);
  if (lVar2 == 0) goto LAB_00576f1c;
  uVar3 = native_UnityEngine_Transform__get_parent_765eb0(lVar2,0);
  lVar2 = native_MG_BlocksEngine2_DragDrop_BE2_DragDropManager__get_Instance_576470();
  if (lVar2 == 0) goto LAB_00576f1c;
  uVar11 = *(undefined8 *)(lVar2 + 0x28);
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar4 = native_UnityEngine_Object__op_Inequality_8d76fc(uVar3,uVar11,0);
  if ((uVar4 & 1) != 0) {
    lVar2 = native_MG_BlocksEngine2_DragDrop_BE2_DragBlock__get_Transform_576558(param_1);
    lVar5 = native_MG_BlocksEngine2_DragDrop_BE2_DragDropManager__get_Instance_576470();
    if ((lVar5 == 0) || (lVar2 == 0)) goto LAB_00576f1c;
    native_UnityEngine_Transform__SetParent_7720e0(lVar2,*(undefined8 *)(lVar5 + 0x28),1,0);
  }
  lVar2 = native_MG_BlocksEngine2_DragDrop_BE2_DragDropManager__get_Instance_576470();
  if (lVar2 == 0) goto LAB_00576f1c;
  plVar10 = *(long **)(lVar2 + 0x20);
  lVar2 = native_MG_BlocksEngine2_DragDrop_BE2_DragDropManager__get_Instance_576470();
  if ((lVar2 == 0) || (plVar10 == (long *)0x0)) goto LAB_00576f1c;
  lVar5 = *plVar10;
  uVar13 = *(undefined4 *)(lVar2 + 0x54);
  if ((ulong)*(ushort *)(lVar5 + 0x12a) != 0) {
    uVar4 = 0;
    piVar9 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
    do {
      if (*(long *)(piVar9 + -2) == _MG_BlocksEngine2_DragDrop_I_BE2_Raycaster_TypeInfo_12d4e40) {
        puVar6 = (undefined8 *)(lVar5 + (long)(*piVar9 + 5) * 0x10 + 0x138);
        goto LAB_00576964;
      }
      uVar4 = uVar4 + 1;
      piVar9 = piVar9 + 4;
    } while (uVar4 < *(ushort *)(lVar5 + 0x12a));
  }
  puVar6 = (undefined8 *)
           native_sub_3c9b34(plVar10,_MG_BlocksEngine2_DragDrop_I_BE2_Raycaster_TypeInfo_12d4e40,5);
LAB_00576964:
  plVar10 = (long *)(*(code *)*puVar6)(uVar13,plVar10,param_1,puVar6[1]);
  lVar2 = native_MG_BlocksEngine2_DragDrop_BE2_DragDropManager__get_Instance_576470();
  if (lVar2 == 0) goto LAB_00576f1c;
  lVar2 = *(long *)(lVar2 + 0x48);
  if (plVar10 == (long *)0x0) {
LAB_005769ec:
    if ((lVar2 != 0) &&
       (lVar5 = native_UnityEngine_Component__get_gameObject_8da66c(lVar2,0), lVar5 != 0)) {
      native_UnityEngine_GameObject__SetActive_8de698(lVar5,0,0);
      lVar5 = native_MG_BlocksEngine2_DragDrop_BE2_DragDropManager__get_Instance_576470();
      if (lVar5 != 0) {
        plVar7 = (long *)(lVar5 + 0x38);
        *plVar7 = 0;
        plVar10 = (long *)0x0;
        goto LAB_00576a1c;
      }
    }
  }
  else {
    lVar5 = *plVar10;
    bVar8 = *(byte *)(lVar5 + 300);
    if ((bVar8 < *(byte *)(_MG_BlocksEngine2_Block_BE2_SpotBlockBody_TypeInfo_12d3a50 + 300)) ||
       (*(long *)(*(long *)(lVar5 + 200) +
                  (ulong)*(byte *)(_MG_BlocksEngine2_Block_BE2_SpotBlockBody_TypeInfo_12d3a50 + 300)
                  * 8 + -8) != _MG_BlocksEngine2_Block_BE2_SpotBlockBody_TypeInfo_12d3a50)) {
LAB_005769c0:
      if ((bVar8 < *(byte *)(_MG_BlocksEngine2_Block_BE2_SpotOuterArea_TypeInfo_12d3a60 + 300)) ||
         (*(long *)(*(long *)(lVar5 + 200) +
                    (ulong)*(byte *)(_MG_BlocksEngine2_Block_BE2_SpotOuterArea_TypeInfo_12d3a60 +
                                    300) * 8 + -8) !=
          _MG_BlocksEngine2_Block_BE2_SpotOuterArea_TypeInfo_12d3a60)) goto LAB_005769ec;
      if ((ulong)*(ushort *)(lVar5 + 0x12a) != 0) {
        uVar4 = 0;
        piVar9 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(long *)(piVar9 + -2) == _MG_BlocksEngine2_Block_I_BE2_Spot_TypeInfo_12d4e48) {
            puVar6 = (undefined8 *)(lVar5 + (long)(*piVar9 + 2) * 0x10 + 0x138);
            goto LAB_00576ba0;
          }
          uVar4 = uVar4 + 1;
          piVar9 = piVar9 + 4;
        } while (uVar4 < *(ushort *)(lVar5 + 0x12a));
      }
      puVar6 = (undefined8 *)
               native_sub_3c9b34(plVar10,_MG_BlocksEngine2_Block_I_BE2_Spot_TypeInfo_12d4e48,2);
LAB_00576ba0:
      plVar7 = (long *)(*(code *)*puVar6)(plVar10,puVar6[1]);
      if (plVar7 == (long *)0x0) goto LAB_00576f1c;
      lVar5 = *plVar7;
      if ((ulong)*(ushort *)(lVar5 + 0x12a) != 0) {
        uVar4 = 0;
        piVar9 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(long *)(piVar9 + -2) == _MG_BlocksEngine2_Block_I_BE2_Block_TypeInfo_12d4dd8) {
            puVar6 = (undefined8 *)(lVar5 + (long)*piVar9 * 0x10 + 0x138);
            goto LAB_00576c10;
          }
          uVar4 = uVar4 + 1;
          piVar9 = piVar9 + 4;
        } while (uVar4 < *(ushort *)(lVar5 + 0x12a));
      }
      puVar6 = (undefined8 *)
               native_sub_3c9b34(plVar7,_MG_BlocksEngine2_Block_I_BE2_Block_TypeInfo_12d4dd8,0);
LAB_00576c10:
      lVar5 = (*(code *)*puVar6)(plVar7,puVar6[1]);
      if ((lVar5 == 0) ||
         (uVar3 = native_UnityEngine_Transform__get_parent_765eb0(lVar5,0), lVar2 == 0))
      goto LAB_00576f1c;
      native_UnityEngine_Transform__SetParent_77208c(lVar2,uVar3,0);
      native_UnityEngine_Vector3__get_one_776a20(0);
      native_UnityEngine_Transform__set_localScale_771e30(lVar2,0);
      lVar5 = native_UnityEngine_Component__get_gameObject_8da66c(lVar2,0);
      if (lVar5 == 0) goto LAB_00576f1c;
      native_UnityEngine_GameObject__SetActive_8de698(lVar5,1,0);
      lVar5 = *plVar10;
      if ((ulong)*(ushort *)(lVar5 + 0x12a) != 0) {
        uVar4 = 0;
        piVar9 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(long *)(piVar9 + -2) == _MG_BlocksEngine2_Block_I_BE2_Spot_TypeInfo_12d4e48) {
            puVar6 = (undefined8 *)(lVar5 + (long)(*piVar9 + 2) * 0x10 + 0x138);
            goto LAB_00576cc4;
          }
          uVar4 = uVar4 + 1;
          piVar9 = piVar9 + 4;
        } while (uVar4 < *(ushort *)(lVar5 + 0x12a));
      }
      puVar6 = (undefined8 *)
               native_sub_3c9b34(plVar10,_MG_BlocksEngine2_Block_I_BE2_Spot_TypeInfo_12d4e48,2);
LAB_00576cc4:
      plVar7 = (long *)(*(code *)*puVar6)(plVar10,puVar6[1]);
      if (plVar7 == (long *)0x0) goto LAB_00576f1c;
      lVar5 = *plVar7;
      if ((ulong)*(ushort *)(lVar5 + 0x12a) != 0) {
        uVar4 = 0;
        piVar9 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(long *)(piVar9 + -2) == _MG_BlocksEngine2_Block_I_BE2_Block_TypeInfo_12d4dd8) {
            puVar6 = (undefined8 *)(lVar5 + (long)*piVar9 * 0x10 + 0x138);
            goto LAB_00576d2c;
          }
          uVar4 = uVar4 + 1;
          piVar9 = piVar9 + 4;
        } while (uVar4 < *(ushort *)(lVar5 + 0x12a));
      }
      puVar6 = (undefined8 *)
               native_sub_3c9b34(plVar7,_MG_BlocksEngine2_Block_I_BE2_Block_TypeInfo_12d4dd8,0);
LAB_00576d2c:
      lVar5 = (*(code *)*puVar6)(plVar7,puVar6[1]);
      if (lVar5 == 0) goto LAB_00576f1c;
      iVar1 = native_UnityEngine_Transform__GetSiblingIndex_772b74(lVar5,0);
      native_UnityEngine_Transform__SetSiblingIndex_772b24(lVar2,iVar1 + 1,0);
      lVar5 = *plVar10;
      if ((ulong)*(ushort *)(lVar5 + 0x12a) != 0) {
        uVar4 = 0;
        piVar9 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(long *)(piVar9 + -2) == _MG_BlocksEngine2_Block_I_BE2_Spot_TypeInfo_12d4e48) {
            puVar6 = (undefined8 *)(lVar5 + (long)(*piVar9 + 2) * 0x10 + 0x138);
            goto LAB_00576dac;
          }
          uVar4 = uVar4 + 1;
          piVar9 = piVar9 + 4;
        } while (uVar4 < *(ushort *)(lVar5 + 0x12a));
      }
      puVar6 = (undefined8 *)
               native_sub_3c9b34(plVar10,_MG_BlocksEngine2_Block_I_BE2_Spot_TypeInfo_12d4e48,2);
LAB_00576dac:
      plVar7 = (long *)(*(code *)*puVar6)(plVar10,puVar6[1]);
      if (plVar7 == (long *)0x0) goto LAB_00576f1c;
      lVar5 = *plVar7;
      if ((ulong)*(ushort *)(lVar5 + 0x12a) != 0) {
        uVar4 = 0;
        piVar9 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(long *)(piVar9 + -2) == _MG_BlocksEngine2_Block_I_BE2_Block_TypeInfo_12d4dd8) {
            puVar6 = (undefined8 *)(lVar5 + (long)(*piVar9 + 6) * 0x10 + 0x138);
            goto LAB_00576e18;
          }
          uVar4 = uVar4 + 1;
          piVar9 = piVar9 + 4;
        } while (uVar4 < *(ushort *)(lVar5 + 0x12a));
      }
      puVar6 = (undefined8 *)
               native_sub_3c9b34(plVar7,_MG_BlocksEngine2_Block_I_BE2_Block_TypeInfo_12d4dd8,6);
LAB_00576e18:
      plVar7 = (long *)(*(code *)*puVar6)(plVar7,puVar6[1]);
      if (plVar7 == (long *)0x0) goto LAB_00576f1c;
      lVar5 = *plVar7;
      if ((ulong)*(ushort *)(lVar5 + 0x12a) != 0) {
        uVar4 = 0;
        piVar9 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(long *)(piVar9 + -2) == _MG_BlocksEngine2_Block_I_BE2_BlockSection_TypeInfo_12d4de8)
          {
            puVar6 = (undefined8 *)(lVar5 + (long)(*piVar9 + 6) * 0x10 + 0x138);
            goto LAB_00576e8c;
          }
          uVar4 = uVar4 + 1;
          piVar9 = piVar9 + 4;
        } while (uVar4 < *(ushort *)(lVar5 + 0x12a));
      }
      puVar6 = (undefined8 *)
               native_sub_3c9b34(plVar7,_MG_BlocksEngine2_Block_I_BE2_BlockSection_TypeInfo_12d4de8,
                                 6);
LAB_00576e8c:
      (*(code *)*puVar6)(plVar7,puVar6[1]);
    }
    else {
      if ((ulong)*(ushort *)(lVar5 + 0x12a) != 0) {
        uVar4 = 0;
        piVar9 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(long *)(piVar9 + -2) == _MG_BlocksEngine2_Block_I_BE2_Spot_TypeInfo_12d4e48) {
            puVar6 = (undefined8 *)(lVar5 + (long)(*piVar9 + 2) * 0x10 + 0x138);
            goto LAB_00576b24;
          }
          uVar4 = uVar4 + 1;
          piVar9 = piVar9 + 4;
        } while (uVar4 < *(ushort *)(lVar5 + 0x12a));
      }
      puVar6 = (undefined8 *)
               native_sub_3c9b34(plVar10,_MG_BlocksEngine2_Block_I_BE2_Spot_TypeInfo_12d4e48,2);
LAB_00576b24:
      lVar5 = (*(code *)*puVar6)(plVar10,puVar6[1]);
      if (lVar5 == *(long *)(param_1 + 0x28)) {
        lVar5 = *plVar10;
        bVar8 = *(byte *)(lVar5 + 300);
        goto LAB_005769c0;
      }
      lVar5 = *plVar10;
      if ((ulong)*(ushort *)(lVar5 + 0x12a) != 0) {
        uVar4 = 0;
        piVar9 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(long *)(piVar9 + -2) == _MG_BlocksEngine2_Block_I_BE2_Spot_TypeInfo_12d4e48) {
            puVar6 = (undefined8 *)(lVar5 + (long)*piVar9 * 0x10 + 0x138);
            goto LAB_00576ea8;
          }
          uVar4 = uVar4 + 1;
          piVar9 = piVar9 + 4;
        } while (uVar4 < *(ushort *)(lVar5 + 0x12a));
      }
      puVar6 = (undefined8 *)
               native_sub_3c9b34(plVar10,_MG_BlocksEngine2_Block_I_BE2_Spot_TypeInfo_12d4e48,0);
LAB_00576ea8:
      uVar3 = (*(code *)*puVar6)(plVar10,puVar6[1]);
      if (lVar2 == 0) goto LAB_00576f1c;
      native_UnityEngine_Transform__SetParent_77208c(lVar2,uVar3,0);
      native_UnityEngine_Vector3__get_one_776a20(0);
      native_UnityEngine_Transform__set_localScale_771e30(lVar2,0);
      lVar5 = native_UnityEngine_Component__get_gameObject_8da66c(lVar2,0);
      if (lVar5 == 0) goto LAB_00576f1c;
      native_UnityEngine_GameObject__SetActive_8de698(lVar5,1,0);
      native_UnityEngine_Transform__SetSiblingIndex_772b24(lVar2,0,0);
    }
    lVar5 = native_MG_BlocksEngine2_DragDrop_BE2_DragDropManager__get_Instance_576470();
    if (lVar5 != 0) {
      plVar7 = (long *)(lVar5 + 0x38);
      *plVar7 = (long)plVar10;
LAB_00576a1c:
      native_sub_4326e0(plVar7,plVar10);
      *(undefined1 *)(param_1 + 0x30) = 0;
      uVar3 = native_UnityEngine_Transform__get_localPosition_7717f4(lVar2,0);
      native_UnityEngine_Transform__get_localPosition_7717f4(lVar2,0);
      native_UnityEngine_Transform__set_localPosition_7718a4(uVar3,lVar2,0);
      fVar12 = (float)native_UnityEngine_Vector3__get_zero_776668(0);
      native_UnityEngine_Quaternion__Internal_FromEulerRad_762560(fVar12 * 0.017453292,lVar2,0);
      if (pcRam000000000133ff08 == (code *)0x0) {
        pcRam000000000133ff08 = (code *)native_sub_4326f0(&UNK_00e2aec2);
      }
      (*pcRam000000000133ff08)(lVar2,&stack0xffffffffffffffd0);
      return;
    }
  }
LAB_00576f1c:
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* MG_BlocksEngine2.DragDrop.BE2_DragBlock$$OnPointerUp @ 0x576f20
 * void MG_BlocksEngine2_DragDrop_BE2_DragBlock__OnPointerUp (MG_BlocksEngine2_DragDrop_BE2_DragBlock_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MG_BlocksEngine2.DragDrop.BE2_DragBlock$$OnPointerUp
   void MG_BlocksEngine2_DragDrop_BE2_DragBlock__OnPointerUp
   (MG_BlocksEngine2_DragDrop_BE2_DragBlock_o* __this, const MethodInfo* method); */

void native_MG_BlocksEngine2_DragDrop_BE2_DragBlock__OnPointerUp_576f20
               (undefined1 param_1 [16],undefined8 param_2,long param_3)

{
  int iVar1;
  long lVar2;
  undefined8 *puVar3;
  long *plVar4;
  ulong uVar5;
  int *piVar6;
  long lVar7;
  long *plVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  
  if ((bRam000000000133eaa4 & 1) == 0) {
    native_sub_43273c(&MG_BlocksEngine2_Block_BE2_SpotBlockBody_TypeInfo_12d3a50);
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
    bRam000000000133eaa4 = 1;
  }
  lVar2 = native_MG_BlocksEngine2_DragDrop_BE2_DragDropManager__get_Instance_576470();
  if (lVar2 == 0) goto LAB_00577898;
  lVar7 = *(long *)(lVar2 + 0x38);
  lVar2 = native_MG_BlocksEngine2_DragDrop_BE2_DragDropManager__get_Instance_576470();
  if (lVar2 == 0) goto LAB_00577898;
  if (lVar7 == 0) {
    plVar4 = *(long **)(lVar2 + 0x20);
    uVar9 = native_MG_BlocksEngine2_DragDrop_BE2_DragBlock__get_RayPoint_5765e0(param_3);
    if (plVar4 == (long *)0x0) goto LAB_00577898;
    lVar2 = *plVar4;
    if ((ulong)*(ushort *)(lVar2 + 0x12a) != 0) {
      uVar5 = 0;
      piVar6 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == _MG_BlocksEngine2_DragDrop_I_BE2_Raycaster_TypeInfo_12d4e40) {
          puVar3 = (undefined8 *)(lVar2 + (long)(*piVar6 + 3) * 0x10 + 0x138);
          goto LAB_00577118;
        }
        uVar5 = uVar5 + 1;
        piVar6 = piVar6 + 4;
      } while (uVar5 < *(ushort *)(lVar2 + 0x12a));
    }
    puVar3 = (undefined8 *)
             native_sub_3c9b34(plVar4,_MG_BlocksEngine2_DragDrop_I_BE2_Raycaster_TypeInfo_12d4e40,3)
    ;
LAB_00577118:
    uVar10 = 0;
    plVar4 = (long *)(*(code *)*puVar3)(uVar9,param_2,0,plVar4,puVar3[1]);
    if (plVar4 == (long *)0x0) {
      lVar2 = native_MG_BlocksEngine2_DragDrop_BE2_DragDropManager__get_Instance_576470();
      if (lVar2 == 0) goto LAB_00577898;
      plVar8 = *(long **)(lVar2 + 0x20);
      plVar4 = (long *)native_MG_BlocksEngine2_Core_BE2_InputManager__get_Instance_602b04(0);
      if (plVar4 == (long *)0x0) goto LAB_00577898;
      lVar2 = *plVar4;
      if ((ulong)*(ushort *)(lVar2 + 0x12a) != 0) {
        uVar5 = 0;
        piVar6 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
        do {
          if (*(long *)(piVar6 + -2) == _MG_BlocksEngine2_Core_I_BE2_InputManager_TypeInfo_12d4e20)
          {
            puVar3 = (undefined8 *)(lVar2 + (long)(*piVar6 + 2) * 0x10 + 0x138);
            goto LAB_00577360;
          }
          uVar5 = uVar5 + 1;
          piVar6 = piVar6 + 4;
        } while (uVar5 < *(ushort *)(lVar2 + 0x12a));
      }
      puVar3 = (undefined8 *)
               native_sub_3c9b34(plVar4,_MG_BlocksEngine2_Core_I_BE2_InputManager_TypeInfo_12d4e20,2
                                );
LAB_00577360:
      uVar9 = (*(code *)*puVar3)(plVar4,puVar3[1]);
      if (plVar8 == (long *)0x0) goto LAB_00577898;
      lVar2 = *plVar8;
      if ((ulong)*(ushort *)(lVar2 + 0x12a) != 0) {
        uVar5 = 0;
        piVar6 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
        do {
          if (*(long *)(piVar6 + -2) == _MG_BlocksEngine2_DragDrop_I_BE2_Raycaster_TypeInfo_12d4e40)
          {
            puVar3 = (undefined8 *)(lVar2 + (long)(*piVar6 + 3) * 0x10 + 0x138);
            goto LAB_005773d4;
          }
          uVar5 = uVar5 + 1;
          piVar6 = piVar6 + 4;
        } while (uVar5 < *(ushort *)(lVar2 + 0x12a));
      }
      puVar3 = (undefined8 *)
               native_sub_3c9b34(plVar8,_MG_BlocksEngine2_DragDrop_I_BE2_Raycaster_TypeInfo_12d4e40,
                                 3);
LAB_005773d4:
      plVar4 = (long *)(*(code *)*puVar3)(uVar9,param_2,uVar10,plVar8,puVar3[1]);
      if (plVar4 != (long *)0x0) goto LAB_005773f4;
      lVar2 = native_MG_BlocksEngine2_DragDrop_BE2_DragBlock__get_Transform_576558(param_3);
      if (lVar2 == 0) goto LAB_00577898;
      uVar9 = native_UnityEngine_Component__get_gameObject_8da66c(lVar2,0);
LAB_0057768c:
      if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
        native_sub_4327ec(_UnityEngine_Object_TypeInfo_12d54e0);
      }
      native_UnityEngine_Object__Destroy_8ea574(uVar9,0);
    }
    else {
LAB_005773f4:
      lVar2 = *plVar4;
      if ((ulong)*(ushort *)(lVar2 + 0x12a) != 0) {
        uVar5 = 0;
        piVar6 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
        do {
          if (*(long *)(piVar6 + -2) == _MG_BlocksEngine2_Block_I_BE2_Spot_TypeInfo_12d4e48) {
            puVar3 = (undefined8 *)(lVar2 + (long)*piVar6 * 0x10 + 0x138);
            goto LAB_00577450;
          }
          uVar5 = uVar5 + 1;
          piVar6 = piVar6 + 4;
        } while (uVar5 < *(ushort *)(lVar2 + 0x12a));
      }
      puVar3 = (undefined8 *)
               native_sub_3c9b34(plVar4,_MG_BlocksEngine2_Block_I_BE2_Spot_TypeInfo_12d4e48,0);
LAB_00577450:
      lVar2 = (*(code *)*puVar3)(plVar4,puVar3[1]);
      if (lVar2 == 0) goto LAB_00577898;
      plVar8 = (long *)native_UnityEngine_Component__GetComponentInParent_BE2_Canvas__49dc70
                                 (lVar2,
                                  _Method_UnityEngine_Component_GetComponentInParent_I_BE2_ProgrammingEnv____12e2d60
                                 );
      if (plVar8 == (long *)0x0) {
        lVar2 = *plVar4;
        if ((ulong)*(ushort *)(lVar2 + 0x12a) != 0) {
          uVar5 = 0;
          piVar6 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
          do {
            if (*(long *)(piVar6 + -2) == _MG_BlocksEngine2_Block_I_BE2_Spot_TypeInfo_12d4e48) {
              puVar3 = (undefined8 *)(lVar2 + (long)*piVar6 * 0x10 + 0x138);
              goto LAB_0057757c;
            }
            uVar5 = uVar5 + 1;
            piVar6 = piVar6 + 4;
          } while (uVar5 < *(ushort *)(lVar2 + 0x12a));
        }
        puVar3 = (undefined8 *)
                 native_sub_3c9b34(plVar4,_MG_BlocksEngine2_Block_I_BE2_Spot_TypeInfo_12d4e48,0);
LAB_0057757c:
        lVar2 = (*(code *)*puVar3)(plVar4,puVar3[1]);
        if (lVar2 == 0) goto LAB_00577898;
        uVar9 = native_UnityEngine_Transform__GetChild_772ef0(lVar2,0,0);
        if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
           (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
          native_sub_4327ec(_UnityEngine_Object_TypeInfo_12d54e0);
        }
        uVar5 = native_UnityEngine_Object__op_Inequality_8d76fc(uVar9,0,0);
        if ((uVar5 & 1) == 0) {
          lVar2 = native_MG_BlocksEngine2_DragDrop_BE2_DragBlock__get_Transform_576558(param_3);
        }
        else {
          lVar2 = *plVar4;
          if ((ulong)*(ushort *)(lVar2 + 0x12a) != 0) {
            uVar5 = 0;
            piVar6 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
            do {
              if (*(long *)(piVar6 + -2) == _MG_BlocksEngine2_Block_I_BE2_Spot_TypeInfo_12d4e48) {
                puVar3 = (undefined8 *)(lVar2 + (long)*piVar6 * 0x10 + 0x138);
                goto LAB_0057763c;
              }
              uVar5 = uVar5 + 1;
              piVar6 = piVar6 + 4;
            } while (uVar5 < *(ushort *)(lVar2 + 0x12a));
          }
          puVar3 = (undefined8 *)
                   native_sub_3c9b34(plVar4,_MG_BlocksEngine2_Block_I_BE2_Spot_TypeInfo_12d4e48,0);
LAB_0057763c:
          lVar2 = (*(code *)*puVar3)(plVar4,puVar3[1]);
          if ((lVar2 == 0) ||
             (lVar2 = native_UnityEngine_Transform__GetChild_772ef0(lVar2,0,0), lVar2 == 0))
          goto LAB_00577898;
          plVar8 = (long *)native_UnityEngine_Component__GetComponentInParent_BE2_Canvas__49dc70
                                     (lVar2,
                                      _Method_UnityEngine_Component_GetComponentInParent_I_BE2_ProgrammingEnv____12e2d60
                                     );
          lVar2 = native_MG_BlocksEngine2_DragDrop_BE2_DragBlock__get_Transform_576558(param_3);
          if (plVar8 != (long *)0x0) goto LAB_00577484;
        }
        if (lVar2 == 0) goto LAB_00577898;
        uVar9 = native_UnityEngine_Component__get_gameObject_8da66c(lVar2,0);
        goto LAB_0057768c;
      }
      lVar2 = native_MG_BlocksEngine2_DragDrop_BE2_DragBlock__get_Transform_576558(param_3);
LAB_00577484:
      lVar7 = *plVar8;
      if ((ulong)*(ushort *)(lVar7 + 0x12a) != 0) {
        uVar5 = 0;
        piVar6 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
        do {
          if (*(long *)(piVar6 + -2) ==
              _MG_BlocksEngine2_Environment_I_BE2_ProgrammingEnv_TypeInfo_12d4e38) {
            puVar3 = (undefined8 *)(lVar7 + (long)*piVar6 * 0x10 + 0x138);
            goto LAB_00577528;
          }
          uVar5 = uVar5 + 1;
          piVar6 = piVar6 + 4;
        } while (uVar5 < *(ushort *)(lVar7 + 0x12a));
      }
      puVar3 = (undefined8 *)
               native_sub_3c9b34(plVar8,
                                 _MG_BlocksEngine2_Environment_I_BE2_ProgrammingEnv_TypeInfo_12d4e38
                                 ,0);
LAB_00577528:
      uVar9 = (*(code *)*puVar3)(plVar8,puVar3[1]);
      if (lVar2 == 0) goto LAB_00577898;
      native_UnityEngine_Transform__SetParent_77208c(lVar2,uVar9,0);
    }
  }
  else {
    plVar4 = *(long **)(lVar2 + 0x38);
    if (plVar4 == (long *)0x0) {
LAB_0057700c:
      plVar4 = (long *)0x0;
    }
    else {
      if (*(byte *)(*plVar4 + 300) <
          *(byte *)(_MG_BlocksEngine2_Block_BE2_SpotBlockBody_TypeInfo_12d3a50 + 300))
      goto LAB_0057700c;
      if (*(long *)(*(long *)(*plVar4 + 200) +
                    (ulong)*(byte *)(_MG_BlocksEngine2_Block_BE2_SpotBlockBody_TypeInfo_12d3a50 +
                                    300) * 8 + -8) !=
          _MG_BlocksEngine2_Block_BE2_SpotBlockBody_TypeInfo_12d3a50) {
        plVar4 = (long *)0x0;
      }
    }
    lVar2 = native_MG_BlocksEngine2_DragDrop_BE2_DragDropManager__get_Instance_576470();
    if (lVar2 == 0) goto LAB_00577898;
    plVar8 = *(long **)(lVar2 + 0x38);
    if (plVar4 == (long *)0x0) {
      if (plVar8 == (long *)0x0) goto LAB_00577898;
      lVar2 = *plVar8;
      if ((ulong)*(ushort *)(lVar2 + 0x12a) != 0) {
        uVar5 = 0;
        piVar6 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
        do {
          if (*(long *)(piVar6 + -2) == _MG_BlocksEngine2_Block_I_BE2_Spot_TypeInfo_12d4e48) {
            puVar3 = (undefined8 *)(lVar2 + (long)(*piVar6 + 2) * 0x10 + 0x138);
            goto LAB_005771b4;
          }
          uVar5 = uVar5 + 1;
          piVar6 = piVar6 + 4;
        } while (uVar5 < *(ushort *)(lVar2 + 0x12a));
      }
      puVar3 = (undefined8 *)
               native_sub_3c9b34(plVar8,_MG_BlocksEngine2_Block_I_BE2_Spot_TypeInfo_12d4e48,2);
LAB_005771b4:
      plVar4 = (long *)(*(code *)*puVar3)(plVar8,puVar3[1]);
      if (plVar4 == (long *)0x0) goto LAB_00577898;
      lVar2 = *plVar4;
      if ((ulong)*(ushort *)(lVar2 + 0x12a) != 0) {
        uVar5 = 0;
        piVar6 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
        do {
          if (*(long *)(piVar6 + -2) == _MG_BlocksEngine2_Block_I_BE2_Block_TypeInfo_12d4dd8) {
            puVar3 = (undefined8 *)(lVar2 + (long)*piVar6 * 0x10 + 0x138);
            goto LAB_00577224;
          }
          uVar5 = uVar5 + 1;
          piVar6 = piVar6 + 4;
        } while (uVar5 < *(ushort *)(lVar2 + 0x12a));
      }
      puVar3 = (undefined8 *)
               native_sub_3c9b34(plVar4,_MG_BlocksEngine2_Block_I_BE2_Block_TypeInfo_12d4dd8,0);
LAB_00577224:
      lVar2 = (*(code *)*puVar3)(plVar4,puVar3[1]);
      if (lVar2 == 0) goto LAB_00577898;
      uVar9 = native_UnityEngine_Transform__get_parent_765eb0(lVar2,0);
      lVar2 = native_MG_BlocksEngine2_DragDrop_BE2_DragDropManager__get_Instance_576470();
      if ((lVar2 == 0) || (plVar4 = *(long **)(lVar2 + 0x38), plVar4 == (long *)0x0))
      goto LAB_00577898;
      lVar2 = *plVar4;
      if ((ulong)*(ushort *)(lVar2 + 0x12a) != 0) {
        uVar5 = 0;
        piVar6 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
        do {
          if (*(long *)(piVar6 + -2) == _MG_BlocksEngine2_Block_I_BE2_Spot_TypeInfo_12d4e48) {
            puVar3 = (undefined8 *)(lVar2 + (long)(*piVar6 + 2) * 0x10 + 0x138);
            goto LAB_005772a8;
          }
          uVar5 = uVar5 + 1;
          piVar6 = piVar6 + 4;
        } while (uVar5 < *(ushort *)(lVar2 + 0x12a));
      }
      puVar3 = (undefined8 *)
               native_sub_3c9b34(plVar4,_MG_BlocksEngine2_Block_I_BE2_Spot_TypeInfo_12d4e48,2);
LAB_005772a8:
      plVar4 = (long *)(*(code *)*puVar3)(plVar4,puVar3[1]);
      if (plVar4 == (long *)0x0) goto LAB_00577898;
      lVar2 = *plVar4;
      if ((ulong)*(ushort *)(lVar2 + 0x12a) != 0) {
        uVar5 = 0;
        piVar6 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
        do {
          if (*(long *)(piVar6 + -2) == _MG_BlocksEngine2_Block_I_BE2_Block_TypeInfo_12d4dd8) {
            puVar3 = (undefined8 *)(lVar2 + (long)*piVar6 * 0x10 + 0x138);
            goto LAB_00577310;
          }
          uVar5 = uVar5 + 1;
          piVar6 = piVar6 + 4;
        } while (uVar5 < *(ushort *)(lVar2 + 0x12a));
      }
      puVar3 = (undefined8 *)
               native_sub_3c9b34(plVar4,_MG_BlocksEngine2_Block_I_BE2_Block_TypeInfo_12d4dd8,0);
LAB_00577310:
      lVar2 = (*(code *)*puVar3)(plVar4,puVar3[1]);
      if (lVar2 == 0) goto LAB_00577898;
      iVar1 = native_UnityEngine_Transform__GetSiblingIndex_772b74(lVar2,0);
      native_MG_BlocksEngine2_DragDrop_BE2_DragBlock__DropTo_577964(param_3,uVar9,iVar1 + 1);
    }
    else {
      native_MG_BlocksEngine2_DragDrop_BE2_DragBlock__DropTo_57789c(param_3,plVar8,0);
    }
    lVar2 = native_MG_BlocksEngine2_DragDrop_BE2_DragDropManager__get_Instance_576470();
    if (lVar2 == 0) goto LAB_00577898;
    *(undefined8 *)(lVar2 + 0x38) = 0;
    native_sub_4326e0((undefined8 *)(lVar2 + 0x38),0);
  }
  lVar2 = native_MG_BlocksEngine2_DragDrop_BE2_DragBlock__get_Transform_576558(param_3);
  lVar7 = native_MG_BlocksEngine2_DragDrop_BE2_DragBlock__get_Transform_576558(param_3);
  if (lVar7 != 0) {
    uVar9 = native_UnityEngine_Transform__get_localPosition_7717f4(lVar7,0);
    lVar7 = native_MG_BlocksEngine2_DragDrop_BE2_DragBlock__get_Transform_576558(param_3);
    if ((lVar7 != 0) &&
       (native_UnityEngine_Transform__get_localPosition_7717f4(lVar7,0), lVar2 != 0)) {
      native_UnityEngine_Transform__set_localPosition_7718a4(uVar9,lVar2,0);
      lVar2 = native_MG_BlocksEngine2_DragDrop_BE2_DragBlock__get_Transform_576558(param_3);
      native_UnityEngine_Vector3__get_zero_776668(0);
      if (lVar2 != 0) {
        native_UnityEngine_Transform__set_localEulerAngles_77194c(lVar2,0);
        plVar4 = *(long **)(param_3 + 0x28);
        if (plVar4 != (long *)0x0) {
          lVar2 = *plVar4;
          if ((ulong)*(ushort *)(lVar2 + 0x12a) != 0) {
            uVar5 = 0;
            piVar6 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
            do {
              if (*(long *)(piVar6 + -2) == _MG_BlocksEngine2_Block_I_BE2_Block_TypeInfo_12d4dd8) {
                puVar3 = (undefined8 *)(lVar2 + (long)(*piVar6 + 4) * 0x10 + 0x138);
                goto LAB_00577790;
              }
              uVar5 = uVar5 + 1;
              piVar6 = piVar6 + 4;
            } while (uVar5 < *(ushort *)(lVar2 + 0x12a));
          }
          puVar3 = (undefined8 *)
                   native_sub_3c9b34(plVar4,_MG_BlocksEngine2_Block_I_BE2_Block_TypeInfo_12d4dd8,4);
LAB_00577790:
          plVar4 = (long *)(*(code *)*puVar3)(plVar4,puVar3[1]);
          if (plVar4 != (long *)0x0) {
            lVar2 = *plVar4;
            if ((ulong)*(ushort *)(lVar2 + 0x12a) != 0) {
              uVar5 = 0;
              piVar6 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
              do {
                if (*(long *)(piVar6 + -2) ==
                    _MG_BlocksEngine2_Block_Instruction_I_BE2_Instruction_TypeInfo_12d4e28) {
                  puVar3 = (undefined8 *)(lVar2 + (long)*piVar6 * 0x10 + 0x138);
                  goto LAB_00577800;
                }
                uVar5 = uVar5 + 1;
                piVar6 = piVar6 + 4;
              } while (uVar5 < *(ushort *)(lVar2 + 0x12a));
            }
            puVar3 = (undefined8 *)
                     native_sub_3c9b34(plVar4,
                                       _MG_BlocksEngine2_Block_Instruction_I_BE2_Instruction_TypeInfo_12d4e28
                                       ,0);
LAB_00577800:
            plVar4 = (long *)(*(code *)*puVar3)(plVar4,puVar3[1]);
            if (plVar4 != (long *)0x0) {
              lVar2 = *plVar4;
              if ((ulong)*(ushort *)(lVar2 + 0x12a) != 0) {
                uVar5 = 0;
                piVar6 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar6 + -2) ==
                      _MG_BlocksEngine2_Block_Instruction_I_BE2_InstructionBase_TypeInfo_12d4e30) {
                    puVar3 = (undefined8 *)(lVar2 + (long)(*piVar6 + 0xe) * 0x10 + 0x138);
                    goto LAB_00577874;
                  }
                  uVar5 = uVar5 + 1;
                  piVar6 = piVar6 + 4;
                } while (uVar5 < *(ushort *)(lVar2 + 0x12a));
              }
              puVar3 = (undefined8 *)
                       native_sub_3c9b34(plVar4,
                                         _MG_BlocksEngine2_Block_Instruction_I_BE2_InstructionBase_TypeInfo_12d4e30
                                         ,0xe);
LAB_00577874:
                    /* WARNING: Could not recover jumptable at 0x00577894. Too many branches */
                    /* WARNING: Treating indirect jump as call */
              (*(code *)*puVar3)(plVar4,puVar3[1]);
              return;
            }
          }
        }
      }
    }
  }
LAB_00577898:
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* MG_BlocksEngine2.DragDrop.BE2_DragBlock$$DropTo @ 0x577964
 * void MG_BlocksEngine2_DragDrop_BE2_DragBlock__DropTo (MG_BlocksEngine2_DragDrop_BE2_DragBlock_o* __this, UnityEngine_Transform_o* spot, int32_t siblinIndex, const MethodInfo* method); */

/* MG_BlocksEngine2.DragDrop.BE2_DragBlock$$DropTo
   void MG_BlocksEngine2_DragDrop_BE2_DragBlock__DropTo (MG_BlocksEngine2_DragDrop_BE2_DragBlock_o*
   __this, UnityEngine_Transform_o* spot, int32_t siblinIndex, const MethodInfo* method); */

void native_MG_BlocksEngine2_DragDrop_BE2_DragBlock__DropTo_577964
               (undefined8 param_1,undefined8 param_2,undefined4 param_3)

{
  long lVar1;
  
  lVar1 = native_MG_BlocksEngine2_DragDrop_BE2_DragBlock__get_Transform_576558();
  if (lVar1 != 0) {
    native_UnityEngine_Transform__SetParent_77208c(lVar1,param_2,0);
    lVar1 = native_MG_BlocksEngine2_DragDrop_BE2_DragBlock__get_Transform_576558(param_1);
    if (lVar1 != 0) {
      if (pcRam000000000133fe90 == (code *)0x0) {
        pcRam000000000133fe90 = (code *)native_sub_4326f0(&UNK_00e2ab4a);
      }
                    /* WARNING: Could not recover jumptable at 0x00772b70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*pcRam000000000133fe90)(lVar1,param_3);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* MG_BlocksEngine2.DragDrop.BE2_DragBlock$$DropTo @ 0x57789c
 * void MG_BlocksEngine2_DragDrop_BE2_DragBlock__DropTo (MG_BlocksEngine2_DragDrop_BE2_DragBlock_o* __this, MG_BlocksEngine2_Block_I_BE2_Spot_o* spot, int32_t siblinIndex, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MG_BlocksEngine2.DragDrop.BE2_DragBlock$$DropTo
   void MG_BlocksEngine2_DragDrop_BE2_DragBlock__DropTo (MG_BlocksEngine2_DragDrop_BE2_DragBlock_o*
   __this, MG_BlocksEngine2_Block_I_BE2_Spot_o* spot, int32_t siblinIndex, const MethodInfo*
   method); */

void native_MG_BlocksEngine2_DragDrop_BE2_DragBlock__DropTo_57789c
               (undefined8 param_1,long *param_2,undefined4 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  ulong uVar4;
  int *piVar5;
  
  if ((bRam000000000133eaa5 & 1) == 0) {
    native_sub_43273c(&MG_BlocksEngine2_Block_I_BE2_Spot_TypeInfo_12d4e48);
    bRam000000000133eaa5 = 1;
  }
  if (param_2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    native_sub_432810();
  }
  lVar3 = *param_2;
  if ((ulong)*(ushort *)(lVar3 + 0x12a) != 0) {
    uVar4 = 0;
    piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
    do {
      if (*(long *)(piVar5 + -2) == _MG_BlocksEngine2_Block_I_BE2_Spot_TypeInfo_12d4e48) {
        puVar1 = (undefined8 *)(lVar3 + (long)*piVar5 * 0x10 + 0x138);
        goto LAB_00577938;
      }
      uVar4 = uVar4 + 1;
      piVar5 = piVar5 + 4;
    } while (uVar4 < *(ushort *)(lVar3 + 0x12a));
  }
  puVar1 = (undefined8 *)
           native_sub_3c9b34(param_2,_MG_BlocksEngine2_Block_I_BE2_Spot_TypeInfo_12d4e48,0);
LAB_00577938:
  uVar2 = (*(code *)*puVar1)(param_2,puVar1[1]);
  lVar3 = native_MG_BlocksEngine2_DragDrop_BE2_DragBlock__get_Transform_576558(param_1);
  if (lVar3 != 0) {
    native_UnityEngine_Transform__SetParent_77208c(lVar3,uVar2,0);
    lVar3 = native_MG_BlocksEngine2_DragDrop_BE2_DragBlock__get_Transform_576558(param_1);
    if (lVar3 != 0) {
      if (pcRam000000000133fe90 == (code *)0x0) {
        pcRam000000000133fe90 = (code *)native_sub_4326f0(&UNK_00e2ab4a);
      }
                    /* WARNING: Could not recover jumptable at 0x00772b70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*pcRam000000000133fe90)(lVar3,param_3);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* MG_BlocksEngine2.DragDrop.BE2_DragBlock$$DropTo @ 0x5779bc
 * void MG_BlocksEngine2_DragDrop_BE2_DragBlock__DropTo (MG_BlocksEngine2_DragDrop_BE2_DragBlock_o* __this, MG_BlocksEngine2_Block_I_BE2_Block_o* parentBlock, int32_t sectionIndex, int32_t siblinIndex, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MG_BlocksEngine2.DragDrop.BE2_DragBlock$$DropTo
   void MG_BlocksEngine2_DragDrop_BE2_DragBlock__DropTo (MG_BlocksEngine2_DragDrop_BE2_DragBlock_o*
   __this, MG_BlocksEngine2_Block_I_BE2_Block_o* parentBlock, int32_t sectionIndex, int32_t
   siblinIndex, const MethodInfo* method); */

void native_MG_BlocksEngine2_DragDrop_BE2_DragBlock__DropTo_5779bc
               (undefined8 param_1,long *param_2,uint param_3,undefined4 param_4)

{
  undefined8 *puVar1;
  long *plVar2;
  undefined8 uVar3;
  long lVar4;
  ulong uVar5;
  int *piVar6;
  
  if ((bRam000000000133eaa6 & 1) == 0) {
    native_sub_43273c(&MG_BlocksEngine2_Block_I_BE2_BlockLayout_TypeInfo_12d4de0);
    native_sub_43273c(&MG_BlocksEngine2_Block_I_BE2_BlockSectionBody_TypeInfo_12d4df0);
    native_sub_43273c(&MG_BlocksEngine2_Block_I_BE2_BlockSection_TypeInfo_12d4de8);
    native_sub_43273c(&MG_BlocksEngine2_Block_I_BE2_Block_TypeInfo_12d4dd8);
    native_sub_43273c(&MG_BlocksEngine2_Core_I_BE2_BlocksStack_TypeInfo_12d4e10);
    native_sub_43273c(&MG_BlocksEngine2_Block_Instruction_I_BE2_InstructionBase_TypeInfo_12d4e30);
    native_sub_43273c(&MG_BlocksEngine2_Block_Instruction_I_BE2_Instruction_TypeInfo_12d4e28);
    bRam000000000133eaa6 = 1;
  }
  if (param_2 != (long *)0x0) {
    lVar4 = *param_2;
    if ((ulong)*(ushort *)(lVar4 + 0x12a) != 0) {
      uVar5 = 0;
      piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == _MG_BlocksEngine2_Block_I_BE2_Block_TypeInfo_12d4dd8) {
          puVar1 = (undefined8 *)(lVar4 + (long)(*piVar6 + 3) * 0x10 + 0x138);
          goto LAB_00577ab4;
        }
        uVar5 = uVar5 + 1;
        piVar6 = piVar6 + 4;
      } while (uVar5 < *(ushort *)(lVar4 + 0x12a));
    }
    puVar1 = (undefined8 *)
             native_sub_3c9b34(param_2,_MG_BlocksEngine2_Block_I_BE2_Block_TypeInfo_12d4dd8,3);
LAB_00577ab4:
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
            goto LAB_00577b28;
          }
          uVar5 = uVar5 + 1;
          piVar6 = piVar6 + 4;
        } while (uVar5 < *(ushort *)(lVar4 + 0x12a));
      }
      puVar1 = (undefined8 *)
               native_sub_3c9b34(plVar2,_MG_BlocksEngine2_Block_I_BE2_BlockLayout_TypeInfo_12d4de0,2
                                );
LAB_00577b28:
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
              goto LAB_00577b9c;
            }
            uVar5 = uVar5 + 1;
            piVar6 = piVar6 + 4;
          } while (uVar5 < *(ushort *)(lVar4 + 0x12a));
        }
        puVar1 = (undefined8 *)
                 native_sub_3c9b34(param_2,_MG_BlocksEngine2_Block_I_BE2_Block_TypeInfo_12d4dd8,3);
LAB_00577b9c:
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
                goto LAB_00577c08;
              }
              uVar5 = uVar5 + 1;
              piVar6 = piVar6 + 4;
            } while (uVar5 < *(ushort *)(lVar4 + 0x12a));
          }
          puVar1 = (undefined8 *)
                   native_sub_3c9b34(plVar2,
                                     _MG_BlocksEngine2_Block_I_BE2_BlockLayout_TypeInfo_12d4de0,2);
LAB_00577c08:
          lVar4 = (*(code *)*puVar1)(plVar2,puVar1[1]);
          if (lVar4 != 0) {
            if (*(uint *)(lVar4 + 0x18) <= param_3) {
LAB_0057806c:
              uVar3 = native_sub_43283c();
                    /* WARNING: Subroutine does not return */
              native_sub_4327dc(uVar3,0);
            }
            plVar2 = *(long **)(lVar4 + (long)(int)param_3 * 8 + 0x20);
            if (plVar2 != (long *)0x0) {
              lVar4 = *plVar2;
              if ((ulong)*(ushort *)(lVar4 + 0x12a) != 0) {
                uVar5 = 0;
                piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar6 + -2) ==
                      _MG_BlocksEngine2_Block_I_BE2_BlockSection_TypeInfo_12d4de8) {
                    puVar1 = (undefined8 *)(lVar4 + (long)(*piVar6 + 2) * 0x10 + 0x138);
                    goto LAB_00577c94;
                  }
                  uVar5 = uVar5 + 1;
                  piVar6 = piVar6 + 4;
                } while (uVar5 < *(ushort *)(lVar4 + 0x12a));
              }
              puVar1 = (undefined8 *)
                       native_sub_3c9b34(plVar2,
                                         _MG_BlocksEngine2_Block_I_BE2_BlockSection_TypeInfo_12d4de8
                                         ,2);
LAB_00577c94:
              lVar4 = (*(code *)*puVar1)(plVar2,puVar1[1]);
              if (lVar4 == 0) {
                return;
              }
              lVar4 = *param_2;
              if ((ulong)*(ushort *)(lVar4 + 0x12a) != 0) {
                uVar5 = 0;
                piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar6 + -2) == _MG_BlocksEngine2_Block_I_BE2_Block_TypeInfo_12d4dd8
                     ) {
                    puVar1 = (undefined8 *)(lVar4 + (long)(*piVar6 + 3) * 0x10 + 0x138);
                    goto LAB_00577d18;
                  }
                  uVar5 = uVar5 + 1;
                  piVar6 = piVar6 + 4;
                } while (uVar5 < *(ushort *)(lVar4 + 0x12a));
              }
              puVar1 = (undefined8 *)
                       native_sub_3c9b34(param_2,
                                         _MG_BlocksEngine2_Block_I_BE2_Block_TypeInfo_12d4dd8,3);
LAB_00577d18:
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
                      goto LAB_00577d84;
                    }
                    uVar5 = uVar5 + 1;
                    piVar6 = piVar6 + 4;
                  } while (uVar5 < *(ushort *)(lVar4 + 0x12a));
                }
                puVar1 = (undefined8 *)
                         native_sub_3c9b34(plVar2,
                                           _MG_BlocksEngine2_Block_I_BE2_BlockLayout_TypeInfo_12d4de0
                                           ,2);
LAB_00577d84:
                lVar4 = (*(code *)*puVar1)(plVar2,puVar1[1]);
                if (lVar4 != 0) {
                  if (*(uint *)(lVar4 + 0x18) <= param_3) goto LAB_0057806c;
                  plVar2 = *(long **)(lVar4 + (long)(int)param_3 * 8 + 0x20);
                  if (plVar2 != (long *)0x0) {
                    lVar4 = *plVar2;
                    if ((ulong)*(ushort *)(lVar4 + 0x12a) != 0) {
                      uVar5 = 0;
                      piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
                      do {
                        if (*(long *)(piVar6 + -2) ==
                            _MG_BlocksEngine2_Block_I_BE2_BlockSection_TypeInfo_12d4de8) {
                          puVar1 = (undefined8 *)(lVar4 + (long)(*piVar6 + 2) * 0x10 + 0x138);
                          goto LAB_00577e04;
                        }
                        uVar5 = uVar5 + 1;
                        piVar6 = piVar6 + 4;
                      } while (uVar5 < *(ushort *)(lVar4 + 0x12a));
                    }
                    puVar1 = (undefined8 *)
                             native_sub_3c9b34(plVar2,
                                               _MG_BlocksEngine2_Block_I_BE2_BlockSection_TypeInfo_12d4de8
                                               ,2);
LAB_00577e04:
                    plVar2 = (long *)(*(code *)*puVar1)(plVar2,puVar1[1]);
                    if (plVar2 != (long *)0x0) {
                      lVar4 = *plVar2;
                      if ((ulong)*(ushort *)(lVar4 + 0x12a) != 0) {
                        uVar5 = 0;
                        piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
                        do {
                          if (*(long *)(piVar6 + -2) ==
                              _MG_BlocksEngine2_Block_I_BE2_BlockSectionBody_TypeInfo_12d4df0) {
                            puVar1 = (undefined8 *)(lVar4 + (long)(*piVar6 + 3) * 0x10 + 0x138);
                            goto LAB_00577e78;
                          }
                          uVar5 = uVar5 + 1;
                          piVar6 = piVar6 + 4;
                        } while (uVar5 < *(ushort *)(lVar4 + 0x12a));
                      }
                      puVar1 = (undefined8 *)
                               native_sub_3c9b34(plVar2,
                                                 _MG_BlocksEngine2_Block_I_BE2_BlockSectionBody_TypeInfo_12d4df0
                                                 ,3);
LAB_00577e78:
                      uVar3 = (*(code *)*puVar1)(plVar2,puVar1[1]);
                      native_MG_BlocksEngine2_DragDrop_BE2_DragBlock__DropTo_57789c
                                (param_1,uVar3,param_4);
                      lVar4 = *param_2;
                      if ((ulong)*(ushort *)(lVar4 + 0x12a) != 0) {
                        uVar5 = 0;
                        piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
                        do {
                          if (*(long *)(piVar6 + -2) ==
                              _MG_BlocksEngine2_Block_I_BE2_Block_TypeInfo_12d4dd8) {
                            puVar1 = (undefined8 *)(lVar4 + (long)(*piVar6 + 4) * 0x10 + 0x138);
                            goto LAB_00577eec;
                          }
                          uVar5 = uVar5 + 1;
                          piVar6 = piVar6 + 4;
                        } while (uVar5 < *(ushort *)(lVar4 + 0x12a));
                      }
                      puVar1 = (undefined8 *)
                               native_sub_3c9b34(param_2,
                                                 _MG_BlocksEngine2_Block_I_BE2_Block_TypeInfo_12d4dd8
                                                 ,4);
LAB_00577eec:
                      plVar2 = (long *)(*(code *)*puVar1)(param_2,puVar1[1]);
                      if (plVar2 != (long *)0x0) {
                        lVar4 = *plVar2;
                        if ((ulong)*(ushort *)(lVar4 + 0x12a) != 0) {
                          uVar5 = 0;
                          piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
                          do {
                            if (*(long *)(piVar6 + -2) ==
                                _MG_BlocksEngine2_Block_Instruction_I_BE2_Instruction_TypeInfo_12d4e28
                               ) {
                              puVar1 = (undefined8 *)(lVar4 + (long)*piVar6 * 0x10 + 0x138);
                              goto LAB_00577f5c;
                            }
                            uVar5 = uVar5 + 1;
                            piVar6 = piVar6 + 4;
                          } while (uVar5 < *(ushort *)(lVar4 + 0x12a));
                        }
                        puVar1 = (undefined8 *)
                                 native_sub_3c9b34(plVar2,
                                                  _MG_BlocksEngine2_Block_Instruction_I_BE2_Instruction_TypeInfo_12d4e28
                                                  ,0);
LAB_00577f5c:
                        plVar2 = (long *)(*(code *)*puVar1)(plVar2,puVar1[1]);
                        if (plVar2 != (long *)0x0) {
                          lVar4 = *plVar2;
                          if ((ulong)*(ushort *)(lVar4 + 0x12a) != 0) {
                            uVar5 = 0;
                            piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
                            do {
                              if (*(long *)(piVar6 + -2) ==
                                  _MG_BlocksEngine2_Block_Instruction_I_BE2_InstructionBase_TypeInfo_12d4e30
                                 ) {
                                puVar1 = (undefined8 *)(lVar4 + (long)(*piVar6 + 4) * 0x10 + 0x138);
                                goto LAB_00577fd0;
                              }
                              uVar5 = uVar5 + 1;
                              piVar6 = piVar6 + 4;
                            } while (uVar5 < *(ushort *)(lVar4 + 0x12a));
                          }
                          puVar1 = (undefined8 *)
                                   native_sub_3c9b34(plVar2,
                                                  _MG_BlocksEngine2_Block_Instruction_I_BE2_InstructionBase_TypeInfo_12d4e30
                                                  ,4);
LAB_00577fd0:
                          plVar2 = (long *)(*(code *)*puVar1)(plVar2,puVar1[1]);
                          if (plVar2 != (long *)0x0) {
                            lVar4 = *plVar2;
                            if ((ulong)*(ushort *)(lVar4 + 0x12a) != 0) {
                              uVar5 = 0;
                              piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
                              do {
                                if (*(long *)(piVar6 + -2) ==
                                    _MG_BlocksEngine2_Core_I_BE2_BlocksStack_TypeInfo_12d4e10) {
                                  puVar1 = (undefined8 *)
                                           (lVar4 + (long)(*piVar6 + 0xe) * 0x10 + 0x138);
                                  goto LAB_00578044;
                                }
                                uVar5 = uVar5 + 1;
                                piVar6 = piVar6 + 4;
                              } while (uVar5 < *(ushort *)(lVar4 + 0x12a));
                            }
                            puVar1 = (undefined8 *)
                                     native_sub_3c9b34(plVar2,
                                                  _MG_BlocksEngine2_Core_I_BE2_BlocksStack_TypeInfo_12d4e10
                                                  ,0xe);
LAB_00578044:
                    /* WARNING: Could not recover jumptable at 0x00578064. Too many branches */
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
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* MG_BlocksEngine2.DragDrop.BE2_DragBlock$$.ctor @ 0x578078
 * void MG_BlocksEngine2_DragDrop_BE2_DragBlock___ctor (MG_BlocksEngine2_DragDrop_BE2_DragBlock_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MG_BlocksEngine2.DragDrop.BE2_DragBlock$$.ctor
   void MG_BlocksEngine2_DragDrop_BE2_DragBlock___ctor (MG_BlocksEngine2_DragDrop_BE2_DragBlock_o*
   __this, const MethodInfo* method); */

undefined1  [16] native_MG_BlocksEngine2_DragDrop_BE2_DragBlock___ctor_578078(ulong param_1)

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


