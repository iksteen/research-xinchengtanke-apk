/* ARM64 IL2CPP native pseudocode from Ghidra.
 * Recovered implementation, not original C# source.
 * Function boundaries follow the IL2CPP method address table. */


/* MG_BlocksEngine2.DragDrop.BE2_DragTrigger$$get__dragDropManager @ 0x57f210
 * MG_BlocksEngine2_DragDrop_BE2_DragDropManager_o* MG_BlocksEngine2_DragDrop_BE2_DragTrigger__get__dragDropManager (MG_BlocksEngine2_DragDrop_BE2_DragTrigger_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MG_BlocksEngine2.DragDrop.BE2_DragTrigger$$get__dragDropManager
   MG_BlocksEngine2_DragDrop_BE2_DragDropManager_o*
   MG_BlocksEngine2_DragDrop_BE2_DragTrigger__get__dragDropManager
   (MG_BlocksEngine2_DragDrop_BE2_DragTrigger_o* __this, const MethodInfo* method); */

undefined8 native_MG_BlocksEngine2_DragDrop_BE2_DragTrigger__get__dragDropManager_57f210(void)

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



/* MG_BlocksEngine2.DragDrop.BE2_DragTrigger$$get__executionManager @ 0x57f214
 * MG_BlocksEngine2_Core_BE2_ExecutionManager_o* MG_BlocksEngine2_DragDrop_BE2_DragTrigger__get__executionManager (MG_BlocksEngine2_DragDrop_BE2_DragTrigger_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MG_BlocksEngine2.DragDrop.BE2_DragTrigger$$get__executionManager
   MG_BlocksEngine2_Core_BE2_ExecutionManager_o*
   MG_BlocksEngine2_DragDrop_BE2_DragTrigger__get__executionManager
   (MG_BlocksEngine2_DragDrop_BE2_DragTrigger_o* __this, const MethodInfo* method); */

undefined8 native_MG_BlocksEngine2_DragDrop_BE2_DragTrigger__get__executionManager_57f214(void)

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



/* MG_BlocksEngine2.DragDrop.BE2_DragTrigger$$get_Transform @ 0x57f218
 * UnityEngine_Transform_o* MG_BlocksEngine2_DragDrop_BE2_DragTrigger__get_Transform (MG_BlocksEngine2_DragDrop_BE2_DragTrigger_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MG_BlocksEngine2.DragDrop.BE2_DragTrigger$$get_Transform
   UnityEngine_Transform_o* MG_BlocksEngine2_DragDrop_BE2_DragTrigger__get_Transform
   (MG_BlocksEngine2_DragDrop_BE2_DragTrigger_o* __this, const MethodInfo* method); */

undefined8 native_MG_BlocksEngine2_DragDrop_BE2_DragTrigger__get_Transform_57f218(long param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  
  if ((bRam000000000133ead8 & 1) == 0) {
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    bRam000000000133ead8 = 1;
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



/* MG_BlocksEngine2.DragDrop.BE2_DragTrigger$$get_RayPoint @ 0x57f2a0
 * UnityEngine_Vector2_o MG_BlocksEngine2_DragDrop_BE2_DragTrigger__get_RayPoint (MG_BlocksEngine2_DragDrop_BE2_DragTrigger_o* __this, const MethodInfo* method); */

/* MG_BlocksEngine2.DragDrop.BE2_DragTrigger$$get_RayPoint
   UnityEngine_Vector2_o MG_BlocksEngine2_DragDrop_BE2_DragTrigger__get_RayPoint
   (MG_BlocksEngine2_DragDrop_BE2_DragTrigger_o* __this, const MethodInfo* method); */

undefined4 native_MG_BlocksEngine2_DragDrop_BE2_DragTrigger__get_RayPoint_57f2a0(long param_1)

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



/* MG_BlocksEngine2.DragDrop.BE2_DragTrigger$$get_Block @ 0x57f2bc
 * MG_BlocksEngine2_Block_I_BE2_Block_o* MG_BlocksEngine2_DragDrop_BE2_DragTrigger__get_Block (MG_BlocksEngine2_DragDrop_BE2_DragTrigger_o* __this, const MethodInfo* method); */

/* MG_BlocksEngine2.DragDrop.BE2_DragTrigger$$get_Block
   MG_BlocksEngine2_Block_I_BE2_Block_o* MG_BlocksEngine2_DragDrop_BE2_DragTrigger__get_Block
   (MG_BlocksEngine2_DragDrop_BE2_DragTrigger_o* __this, const MethodInfo* method); */

undefined8 native_MG_BlocksEngine2_DragDrop_BE2_DragTrigger__get_Block_57f2bc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* MG_BlocksEngine2.DragDrop.BE2_DragTrigger$$set_Block @ 0x57f2c4
 * void MG_BlocksEngine2_DragDrop_BE2_DragTrigger__set_Block (MG_BlocksEngine2_DragDrop_BE2_DragTrigger_o* __this, MG_BlocksEngine2_Block_I_BE2_Block_o* value, const MethodInfo* method); */

/* MG_BlocksEngine2.DragDrop.BE2_DragTrigger$$set_Block
   void MG_BlocksEngine2_DragDrop_BE2_DragTrigger__set_Block
   (MG_BlocksEngine2_DragDrop_BE2_DragTrigger_o* __this, MG_BlocksEngine2_Block_I_BE2_Block_o*
   value, const MethodInfo* method); */

void native_MG_BlocksEngine2_DragDrop_BE2_DragTrigger__set_Block_57f2c4
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



/* MG_BlocksEngine2.DragDrop.BE2_DragTrigger$$Awake @ 0x57f2cc
 * void MG_BlocksEngine2_DragDrop_BE2_DragTrigger__Awake (MG_BlocksEngine2_DragDrop_BE2_DragTrigger_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MG_BlocksEngine2.DragDrop.BE2_DragTrigger$$Awake
   void MG_BlocksEngine2_DragDrop_BE2_DragTrigger__Awake
   (MG_BlocksEngine2_DragDrop_BE2_DragTrigger_o* __this, const MethodInfo* method); */

void native_MG_BlocksEngine2_DragDrop_BE2_DragTrigger__Awake_57f2cc(long param_1)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  undefined8 uVar4;
  
  if ((bRam000000000133ead9 & 1) == 0) {
    native_sub_43273c(&Method_UnityEngine_Component_GetComponent_I_BE2_Block____12e2a08);
    native_sub_43273c(&Method_UnityEngine_Component_GetComponent_RectTransform____12e2ad0);
    bRam000000000133ead9 = 1;
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



/* MG_BlocksEngine2.DragDrop.BE2_DragTrigger$$OnPointerDown @ 0x57f374
 * void MG_BlocksEngine2_DragDrop_BE2_DragTrigger__OnPointerDown (MG_BlocksEngine2_DragDrop_BE2_DragTrigger_o* __this, const MethodInfo* method); */

/* MG_BlocksEngine2.DragDrop.BE2_DragTrigger$$OnPointerDown
   void MG_BlocksEngine2_DragDrop_BE2_DragTrigger__OnPointerDown
   (MG_BlocksEngine2_DragDrop_BE2_DragTrigger_o* __this, const MethodInfo* method); */

void native_MG_BlocksEngine2_DragDrop_BE2_DragTrigger__OnPointerDown_57f374(void)

{
  return;
}



/* MG_BlocksEngine2.DragDrop.BE2_DragTrigger$$OnRightPointerDownOrHold @ 0x57f378
 * void MG_BlocksEngine2_DragDrop_BE2_DragTrigger__OnRightPointerDownOrHold (MG_BlocksEngine2_DragDrop_BE2_DragTrigger_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MG_BlocksEngine2.DragDrop.BE2_DragTrigger$$OnRightPointerDownOrHold
   void MG_BlocksEngine2_DragDrop_BE2_DragTrigger__OnRightPointerDownOrHold
   (MG_BlocksEngine2_DragDrop_BE2_DragTrigger_o* __this, const MethodInfo* method); */

void native_MG_BlocksEngine2_DragDrop_BE2_DragTrigger__OnRightPointerDownOrHold_57f378(long param_1)

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
  
  if ((bRam000000000133eada & 1) == 0) {
    native_sub_43273c(&Method_System_Array_Empty_string____12dedf8);
    native_sub_43273c(&
                      Method_MG_BlocksEngine2_UI_BE2_UI_ContextMenuManager_OpenContextMenu_I_BE2_Block____12e22d0
                     );
    bRam000000000133eada = 1;
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



/* MG_BlocksEngine2.DragDrop.BE2_DragTrigger$$OnDrag @ 0x57f484
 * void MG_BlocksEngine2_DragDrop_BE2_DragTrigger__OnDrag (MG_BlocksEngine2_DragDrop_BE2_DragTrigger_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MG_BlocksEngine2.DragDrop.BE2_DragTrigger$$OnDrag
   void MG_BlocksEngine2_DragDrop_BE2_DragTrigger__OnDrag
   (MG_BlocksEngine2_DragDrop_BE2_DragTrigger_o* __this, const MethodInfo* method); */

void native_MG_BlocksEngine2_DragDrop_BE2_DragTrigger__OnDrag_57f484(undefined8 param_1)

{
  long lVar1;
  undefined8 uVar2;
  ulong uVar3;
  long lVar4;
  undefined8 uVar5;
  
  if ((bRam000000000133eadb & 1) == 0) {
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    bRam000000000133eadb = 1;
  }
  lVar1 = native_MG_BlocksEngine2_DragDrop_BE2_DragTrigger__get_Transform_57f218(param_1);
  if (lVar1 != 0) {
    uVar2 = native_UnityEngine_Transform__get_parent_765eb0(lVar1,0);
    lVar1 = native_MG_BlocksEngine2_DragDrop_BE2_DragDropManager__get_Instance_576470();
    if (lVar1 != 0) {
      uVar5 = *(undefined8 *)(lVar1 + 0x28);
      if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
        native_sub_4327ec();
      }
      uVar3 = native_UnityEngine_Object__op_Inequality_8d76fc(uVar2,uVar5,0);
      if ((uVar3 & 1) == 0) {
        return;
      }
      lVar1 = native_MG_BlocksEngine2_DragDrop_BE2_DragTrigger__get_Transform_57f218(param_1);
      lVar4 = native_MG_BlocksEngine2_DragDrop_BE2_DragDropManager__get_Instance_576470();
      if ((lVar4 != 0) && (lVar1 != 0)) {
        uVar2 = *(undefined8 *)(lVar4 + 0x28);
        if (pcRam000000000133fe68 == (code *)0x0) {
          pcRam000000000133fe68 = (code *)native_sub_4326f0(&UNK_00e2aa86);
        }
                    /* WARNING: Could not recover jumptable at 0x00772134. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*pcRam000000000133fe68)(lVar1,uVar2,1);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* MG_BlocksEngine2.DragDrop.BE2_DragTrigger$$OnPointerUp @ 0x57f560
 * void MG_BlocksEngine2_DragDrop_BE2_DragTrigger__OnPointerUp (MG_BlocksEngine2_DragDrop_BE2_DragTrigger_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MG_BlocksEngine2.DragDrop.BE2_DragTrigger$$OnPointerUp
   void MG_BlocksEngine2_DragDrop_BE2_DragTrigger__OnPointerUp
   (MG_BlocksEngine2_DragDrop_BE2_DragTrigger_o* __this, const MethodInfo* method); */

void native_MG_BlocksEngine2_DragDrop_BE2_DragTrigger__OnPointerUp_57f560
               (undefined1 param_1 [16],undefined8 param_2,long param_3)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  long lVar4;
  ulong uVar5;
  int *piVar6;
  long *plVar7;
  long *plVar8;
  undefined8 uVar9;
  
  if ((bRam000000000133eadc & 1) == 0) {
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
    bRam000000000133eadc = 1;
  }
  lVar1 = native_MG_BlocksEngine2_DragDrop_BE2_DragDropManager__get_Instance_576470();
  if (lVar1 == 0) goto LAB_0057fe30;
  plVar7 = *(long **)(lVar1 + 0x20);
  uVar9 = native_MG_BlocksEngine2_DragDrop_BE2_DragTrigger__get_RayPoint_57f2a0(param_3);
  if (plVar7 == (long *)0x0) goto LAB_0057fe30;
  lVar1 = *plVar7;
  if ((ulong)*(ushort *)(lVar1 + 0x12a) != 0) {
    uVar5 = 0;
    piVar6 = (int *)(*(long *)(lVar1 + 0xb0) + 8);
    do {
      if (*(long *)(piVar6 + -2) == _MG_BlocksEngine2_DragDrop_I_BE2_Raycaster_TypeInfo_12d4e40) {
        puVar2 = (undefined8 *)(lVar1 + (long)(*piVar6 + 3) * 0x10 + 0x138);
        goto LAB_0057f680;
      }
      uVar5 = uVar5 + 1;
      piVar6 = piVar6 + 4;
    } while (uVar5 < *(ushort *)(lVar1 + 0x12a));
  }
  puVar2 = (undefined8 *)
           native_sub_3c9b34(plVar7,_MG_BlocksEngine2_DragDrop_I_BE2_Raycaster_TypeInfo_12d4e40,3);
LAB_0057f680:
  uVar3 = 0;
  plVar7 = (long *)(*(code *)*puVar2)(uVar9,param_2,0,plVar7,puVar2[1]);
  if (plVar7 == (long *)0x0) {
    lVar1 = native_MG_BlocksEngine2_DragDrop_BE2_DragDropManager__get_Instance_576470();
    if (lVar1 == 0) goto LAB_0057fe30;
    plVar8 = *(long **)(lVar1 + 0x20);
    plVar7 = (long *)native_MG_BlocksEngine2_Core_BE2_InputManager__get_Instance_602b04(0);
    if (plVar7 == (long *)0x0) goto LAB_0057fe30;
    lVar1 = *plVar7;
    if ((ulong)*(ushort *)(lVar1 + 0x12a) != 0) {
      uVar5 = 0;
      piVar6 = (int *)(*(long *)(lVar1 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == _MG_BlocksEngine2_Core_I_BE2_InputManager_TypeInfo_12d4e20) {
          puVar2 = (undefined8 *)(lVar1 + (long)(*piVar6 + 2) * 0x10 + 0x138);
          goto LAB_0057f71c;
        }
        uVar5 = uVar5 + 1;
        piVar6 = piVar6 + 4;
      } while (uVar5 < *(ushort *)(lVar1 + 0x12a));
    }
    puVar2 = (undefined8 *)
             native_sub_3c9b34(plVar7,_MG_BlocksEngine2_Core_I_BE2_InputManager_TypeInfo_12d4e20,2);
LAB_0057f71c:
    uVar9 = (*(code *)*puVar2)(plVar7,puVar2[1]);
    if (plVar8 == (long *)0x0) goto LAB_0057fe30;
    lVar1 = *plVar8;
    if ((ulong)*(ushort *)(lVar1 + 0x12a) != 0) {
      uVar5 = 0;
      piVar6 = (int *)(*(long *)(lVar1 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == _MG_BlocksEngine2_DragDrop_I_BE2_Raycaster_TypeInfo_12d4e40) {
          puVar2 = (undefined8 *)(lVar1 + (long)(*piVar6 + 3) * 0x10 + 0x138);
          goto LAB_0057f790;
        }
        uVar5 = uVar5 + 1;
        piVar6 = piVar6 + 4;
      } while (uVar5 < *(ushort *)(lVar1 + 0x12a));
    }
    puVar2 = (undefined8 *)
             native_sub_3c9b34(plVar8,_MG_BlocksEngine2_DragDrop_I_BE2_Raycaster_TypeInfo_12d4e40,3)
    ;
LAB_0057f790:
    plVar7 = (long *)(*(code *)*puVar2)(uVar9,param_2,uVar3,plVar8,puVar2[1]);
    if (plVar7 != (long *)0x0) goto LAB_0057f7b0;
    lVar1 = native_MG_BlocksEngine2_DragDrop_BE2_DragTrigger__get_Transform_57f218(param_3);
    if (lVar1 == 0) goto LAB_0057fe30;
    uVar9 = native_UnityEngine_Component__get_gameObject_8da66c(lVar1,0);
LAB_0057fc24:
    if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
      native_sub_4327ec(_UnityEngine_Object_TypeInfo_12d54e0);
    }
    native_UnityEngine_Object__Destroy_8ea574(uVar9,0);
  }
  else {
LAB_0057f7b0:
    lVar1 = *plVar7;
    if ((ulong)*(ushort *)(lVar1 + 0x12a) != 0) {
      uVar5 = 0;
      piVar6 = (int *)(*(long *)(lVar1 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == _MG_BlocksEngine2_Block_I_BE2_Spot_TypeInfo_12d4e48) {
          puVar2 = (undefined8 *)(lVar1 + (long)*piVar6 * 0x10 + 0x138);
          goto LAB_0057f80c;
        }
        uVar5 = uVar5 + 1;
        piVar6 = piVar6 + 4;
      } while (uVar5 < *(ushort *)(lVar1 + 0x12a));
    }
    puVar2 = (undefined8 *)
             native_sub_3c9b34(plVar7,_MG_BlocksEngine2_Block_I_BE2_Spot_TypeInfo_12d4e48,0);
LAB_0057f80c:
    lVar1 = (*(code *)*puVar2)(plVar7,puVar2[1]);
    if (lVar1 == 0) goto LAB_0057fe30;
    plVar8 = (long *)native_UnityEngine_Component__GetComponentInParent_BE2_Canvas__49dc70
                               (lVar1,
                                _Method_UnityEngine_Component_GetComponentInParent_I_BE2_ProgrammingEnv____12e2d60
                               );
    if (plVar8 == (long *)0x0) {
      lVar1 = *plVar7;
      if ((ulong)*(ushort *)(lVar1 + 0x12a) != 0) {
        uVar5 = 0;
        piVar6 = (int *)(*(long *)(lVar1 + 0xb0) + 8);
        do {
          if (*(long *)(piVar6 + -2) == _MG_BlocksEngine2_Block_I_BE2_Spot_TypeInfo_12d4e48) {
            puVar2 = (undefined8 *)(lVar1 + (long)*piVar6 * 0x10 + 0x138);
            goto LAB_0057fb14;
          }
          uVar5 = uVar5 + 1;
          piVar6 = piVar6 + 4;
        } while (uVar5 < *(ushort *)(lVar1 + 0x12a));
      }
      puVar2 = (undefined8 *)
               native_sub_3c9b34(plVar7,_MG_BlocksEngine2_Block_I_BE2_Spot_TypeInfo_12d4e48,0);
LAB_0057fb14:
      lVar1 = (*(code *)*puVar2)(plVar7,puVar2[1]);
      if (lVar1 == 0) goto LAB_0057fe30;
      uVar9 = native_UnityEngine_Transform__GetChild_772ef0(lVar1,0,0);
      if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
        native_sub_4327ec(_UnityEngine_Object_TypeInfo_12d54e0);
      }
      uVar5 = native_UnityEngine_Object__op_Inequality_8d76fc(uVar9,0,0);
      if ((uVar5 & 1) == 0) {
        lVar1 = native_MG_BlocksEngine2_DragDrop_BE2_DragTrigger__get_Transform_57f218(param_3);
      }
      else {
        lVar1 = *plVar7;
        if ((ulong)*(ushort *)(lVar1 + 0x12a) != 0) {
          uVar5 = 0;
          piVar6 = (int *)(*(long *)(lVar1 + 0xb0) + 8);
          do {
            if (*(long *)(piVar6 + -2) == _MG_BlocksEngine2_Block_I_BE2_Spot_TypeInfo_12d4e48) {
              puVar2 = (undefined8 *)(lVar1 + (long)*piVar6 * 0x10 + 0x138);
              goto LAB_0057fbd4;
            }
            uVar5 = uVar5 + 1;
            piVar6 = piVar6 + 4;
          } while (uVar5 < *(ushort *)(lVar1 + 0x12a));
        }
        puVar2 = (undefined8 *)
                 native_sub_3c9b34(plVar7,_MG_BlocksEngine2_Block_I_BE2_Spot_TypeInfo_12d4e48,0);
LAB_0057fbd4:
        lVar1 = (*(code *)*puVar2)(plVar7,puVar2[1]);
        if ((lVar1 == 0) ||
           (lVar1 = native_UnityEngine_Transform__GetChild_772ef0(lVar1,0,0), lVar1 == 0))
        goto LAB_0057fe30;
        plVar8 = (long *)native_UnityEngine_Component__GetComponentInParent_BE2_Canvas__49dc70
                                   (lVar1,
                                    _Method_UnityEngine_Component_GetComponentInParent_I_BE2_ProgrammingEnv____12e2d60
                                   );
        lVar1 = native_MG_BlocksEngine2_DragDrop_BE2_DragTrigger__get_Transform_57f218(param_3);
        if (plVar8 != (long *)0x0) goto LAB_0057f840;
      }
      if (lVar1 == 0) goto LAB_0057fe30;
      uVar9 = native_UnityEngine_Component__get_gameObject_8da66c(lVar1,0);
      goto LAB_0057fc24;
    }
    lVar1 = native_MG_BlocksEngine2_DragDrop_BE2_DragTrigger__get_Transform_57f218(param_3);
LAB_0057f840:
    lVar4 = *plVar8;
    if ((ulong)*(ushort *)(lVar4 + 0x12a) != 0) {
      uVar5 = 0;
      piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) ==
            _MG_BlocksEngine2_Environment_I_BE2_ProgrammingEnv_TypeInfo_12d4e38) {
          puVar2 = (undefined8 *)(lVar4 + (long)*piVar6 * 0x10 + 0x138);
          goto LAB_0057f8e4;
        }
        uVar5 = uVar5 + 1;
        piVar6 = piVar6 + 4;
      } while (uVar5 < *(ushort *)(lVar4 + 0x12a));
    }
    puVar2 = (undefined8 *)
             native_sub_3c9b34(plVar8,
                               _MG_BlocksEngine2_Environment_I_BE2_ProgrammingEnv_TypeInfo_12d4e38,0
                              );
LAB_0057f8e4:
    uVar9 = (*(code *)*puVar2)(plVar8,puVar2[1]);
    if (lVar1 == 0) goto LAB_0057fe30;
    native_UnityEngine_Transform__SetParent_77208c(lVar1,uVar9,0);
    lVar1 = native_MG_BlocksEngine2_Core_BE2_ExecutionManager__get_Instance_564464();
    plVar7 = *(long **)(param_3 + 0x28);
    if (plVar7 == (long *)0x0) goto LAB_0057fe30;
    lVar4 = *plVar7;
    if ((ulong)*(ushort *)(lVar4 + 0x12a) != 0) {
      uVar5 = 0;
      piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == _MG_BlocksEngine2_Block_I_BE2_Block_TypeInfo_12d4dd8) {
          puVar2 = (undefined8 *)(lVar4 + (long)(*piVar6 + 4) * 0x10 + 0x138);
          goto LAB_0057f974;
        }
        uVar5 = uVar5 + 1;
        piVar6 = piVar6 + 4;
      } while (uVar5 < *(ushort *)(lVar4 + 0x12a));
    }
    puVar2 = (undefined8 *)
             native_sub_3c9b34(plVar7,_MG_BlocksEngine2_Block_I_BE2_Block_TypeInfo_12d4dd8,4);
LAB_0057f974:
    plVar7 = (long *)(*(code *)*puVar2)(plVar7,puVar2[1]);
    if (plVar7 == (long *)0x0) goto LAB_0057fe30;
    lVar4 = *plVar7;
    if ((ulong)*(ushort *)(lVar4 + 0x12a) != 0) {
      uVar5 = 0;
      piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) ==
            _MG_BlocksEngine2_Block_Instruction_I_BE2_Instruction_TypeInfo_12d4e28) {
          puVar2 = (undefined8 *)(lVar4 + (long)*piVar6 * 0x10 + 0x138);
          goto LAB_0057f9e4;
        }
        uVar5 = uVar5 + 1;
        piVar6 = piVar6 + 4;
      } while (uVar5 < *(ushort *)(lVar4 + 0x12a));
    }
    puVar2 = (undefined8 *)
             native_sub_3c9b34(plVar7,
                               _MG_BlocksEngine2_Block_Instruction_I_BE2_Instruction_TypeInfo_12d4e28
                               ,0);
LAB_0057f9e4:
    plVar7 = (long *)(*(code *)*puVar2)(plVar7,puVar2[1]);
    if (plVar7 == (long *)0x0) goto LAB_0057fe30;
    lVar4 = *plVar7;
    if ((ulong)*(ushort *)(lVar4 + 0x12a) != 0) {
      uVar5 = 0;
      piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) ==
            _MG_BlocksEngine2_Block_Instruction_I_BE2_InstructionBase_TypeInfo_12d4e30) {
          puVar2 = (undefined8 *)(lVar4 + (long)(*piVar6 + 4) * 0x10 + 0x138);
          goto LAB_0057fa58;
        }
        uVar5 = uVar5 + 1;
        piVar6 = piVar6 + 4;
      } while (uVar5 < *(ushort *)(lVar4 + 0x12a));
    }
    puVar2 = (undefined8 *)
             native_sub_3c9b34(plVar7,
                               _MG_BlocksEngine2_Block_Instruction_I_BE2_InstructionBase_TypeInfo_12d4e30
                               ,4);
LAB_0057fa58:
    uVar9 = (*(code *)*puVar2)(plVar7,puVar2[1]);
    lVar4 = *plVar8;
    if ((ulong)*(ushort *)(lVar4 + 0x12a) != 0) {
      uVar5 = 0;
      piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) ==
            _MG_BlocksEngine2_Environment_I_BE2_ProgrammingEnv_TypeInfo_12d4e38) {
          puVar2 = (undefined8 *)(lVar4 + (long)(*piVar6 + 2) * 0x10 + 0x138);
          goto LAB_0057fac0;
        }
        uVar5 = uVar5 + 1;
        piVar6 = piVar6 + 4;
      } while (uVar5 < *(ushort *)(lVar4 + 0x12a));
    }
    puVar2 = (undefined8 *)
             native_sub_3c9b34(plVar8,
                               _MG_BlocksEngine2_Environment_I_BE2_ProgrammingEnv_TypeInfo_12d4e38,2
                              );
LAB_0057fac0:
    uVar3 = (*(code *)*puVar2)(plVar8,puVar2[1]);
    if (lVar1 == 0) goto LAB_0057fe30;
    native_MG_BlocksEngine2_Core_BE2_ExecutionManager__AddToBlocksStackArray_56dd98
              (lVar1,uVar9,uVar3);
  }
  lVar1 = native_MG_BlocksEngine2_DragDrop_BE2_DragTrigger__get_Transform_57f218(param_3);
  lVar4 = native_MG_BlocksEngine2_DragDrop_BE2_DragTrigger__get_Transform_57f218(param_3);
  if (lVar4 != 0) {
    uVar9 = native_UnityEngine_Transform__get_localPosition_7717f4(lVar4,0);
    lVar4 = native_MG_BlocksEngine2_DragDrop_BE2_DragTrigger__get_Transform_57f218(param_3);
    if ((lVar4 != 0) &&
       (native_UnityEngine_Transform__get_localPosition_7717f4(lVar4,0), lVar1 != 0)) {
      native_UnityEngine_Transform__set_localPosition_7718a4(uVar9,lVar1,0);
      lVar1 = native_MG_BlocksEngine2_DragDrop_BE2_DragTrigger__get_Transform_57f218(param_3);
      native_UnityEngine_Vector3__get_zero_776668(0);
      if (lVar1 != 0) {
        native_UnityEngine_Transform__set_localEulerAngles_77194c(lVar1,0);
        plVar7 = *(long **)(param_3 + 0x28);
        if (plVar7 != (long *)0x0) {
          lVar1 = *plVar7;
          if ((ulong)*(ushort *)(lVar1 + 0x12a) != 0) {
            uVar5 = 0;
            piVar6 = (int *)(*(long *)(lVar1 + 0xb0) + 8);
            do {
              if (*(long *)(piVar6 + -2) == _MG_BlocksEngine2_Block_I_BE2_Block_TypeInfo_12d4dd8) {
                puVar2 = (undefined8 *)(lVar1 + (long)(*piVar6 + 4) * 0x10 + 0x138);
                goto LAB_0057fd28;
              }
              uVar5 = uVar5 + 1;
              piVar6 = piVar6 + 4;
            } while (uVar5 < *(ushort *)(lVar1 + 0x12a));
          }
          puVar2 = (undefined8 *)
                   native_sub_3c9b34(plVar7,_MG_BlocksEngine2_Block_I_BE2_Block_TypeInfo_12d4dd8,4);
LAB_0057fd28:
          plVar7 = (long *)(*(code *)*puVar2)(plVar7,puVar2[1]);
          if (plVar7 != (long *)0x0) {
            lVar1 = *plVar7;
            if ((ulong)*(ushort *)(lVar1 + 0x12a) != 0) {
              uVar5 = 0;
              piVar6 = (int *)(*(long *)(lVar1 + 0xb0) + 8);
              do {
                if (*(long *)(piVar6 + -2) ==
                    _MG_BlocksEngine2_Block_Instruction_I_BE2_Instruction_TypeInfo_12d4e28) {
                  puVar2 = (undefined8 *)(lVar1 + (long)*piVar6 * 0x10 + 0x138);
                  goto LAB_0057fd98;
                }
                uVar5 = uVar5 + 1;
                piVar6 = piVar6 + 4;
              } while (uVar5 < *(ushort *)(lVar1 + 0x12a));
            }
            puVar2 = (undefined8 *)
                     native_sub_3c9b34(plVar7,
                                       _MG_BlocksEngine2_Block_Instruction_I_BE2_Instruction_TypeInfo_12d4e28
                                       ,0);
LAB_0057fd98:
            plVar7 = (long *)(*(code *)*puVar2)(plVar7,puVar2[1]);
            if (plVar7 != (long *)0x0) {
              lVar1 = *plVar7;
              if ((ulong)*(ushort *)(lVar1 + 0x12a) != 0) {
                uVar5 = 0;
                piVar6 = (int *)(*(long *)(lVar1 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar6 + -2) ==
                      _MG_BlocksEngine2_Block_Instruction_I_BE2_InstructionBase_TypeInfo_12d4e30) {
                    puVar2 = (undefined8 *)(lVar1 + (long)(*piVar6 + 0xe) * 0x10 + 0x138);
                    goto LAB_0057fe0c;
                  }
                  uVar5 = uVar5 + 1;
                  piVar6 = piVar6 + 4;
                } while (uVar5 < *(ushort *)(lVar1 + 0x12a));
              }
              puVar2 = (undefined8 *)
                       native_sub_3c9b34(plVar7,
                                         _MG_BlocksEngine2_Block_Instruction_I_BE2_InstructionBase_TypeInfo_12d4e30
                                         ,0xe);
LAB_0057fe0c:
                    /* WARNING: Could not recover jumptable at 0x0057fe2c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
              (*(code *)*puVar2)(plVar7,puVar2[1]);
              return;
            }
          }
        }
      }
    }
  }
LAB_0057fe30:
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* MG_BlocksEngine2.DragDrop.BE2_DragTrigger$$.ctor @ 0x57fe34
 * void MG_BlocksEngine2_DragDrop_BE2_DragTrigger___ctor (MG_BlocksEngine2_DragDrop_BE2_DragTrigger_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MG_BlocksEngine2.DragDrop.BE2_DragTrigger$$.ctor
   void MG_BlocksEngine2_DragDrop_BE2_DragTrigger___ctor
   (MG_BlocksEngine2_DragDrop_BE2_DragTrigger_o* __this, const MethodInfo* method); */

undefined1  [16] native_MG_BlocksEngine2_DragDrop_BE2_DragTrigger___ctor_57fe34(ulong param_1)

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


