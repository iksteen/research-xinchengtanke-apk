/* ARM64 IL2CPP native pseudocode from Ghidra.
 * Recovered implementation, not original C# source.
 * Function boundaries follow the IL2CPP method address table. */


/* MG_BlocksEngine2.DragDrop.BE2_DragDefineFunctionBlock$$get__dragDropManager @ 0x578080
 * MG_BlocksEngine2_DragDrop_BE2_DragDropManager_o* MG_BlocksEngine2_DragDrop_BE2_DragDefineFunctionBlock__get__dragDropManager (MG_BlocksEngine2_DragDrop_BE2_DragDefineFunctionBlock_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MG_BlocksEngine2.DragDrop.BE2_DragDefineFunctionBlock$$get__dragDropManager
   MG_BlocksEngine2_DragDrop_BE2_DragDropManager_o*
   MG_BlocksEngine2_DragDrop_BE2_DragDefineFunctionBlock__get__dragDropManager
   (MG_BlocksEngine2_DragDrop_BE2_DragDefineFunctionBlock_o* __this, const MethodInfo* method); */

undefined8
native_MG_BlocksEngine2_DragDrop_BE2_DragDefineFunctionBlock__get__dragDropManager_578080(void)

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



/* MG_BlocksEngine2.DragDrop.BE2_DragDefineFunctionBlock$$get__executionManager @ 0x578084
 * MG_BlocksEngine2_Core_BE2_ExecutionManager_o* MG_BlocksEngine2_DragDrop_BE2_DragDefineFunctionBlock__get__executionManager (MG_BlocksEngine2_DragDrop_BE2_DragDefineFunctionBlock_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MG_BlocksEngine2.DragDrop.BE2_DragDefineFunctionBlock$$get__executionManager
   MG_BlocksEngine2_Core_BE2_ExecutionManager_o*
   MG_BlocksEngine2_DragDrop_BE2_DragDefineFunctionBlock__get__executionManager
   (MG_BlocksEngine2_DragDrop_BE2_DragDefineFunctionBlock_o* __this, const MethodInfo* method); */

undefined8
native_MG_BlocksEngine2_DragDrop_BE2_DragDefineFunctionBlock__get__executionManager_578084(void)

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



/* MG_BlocksEngine2.DragDrop.BE2_DragDefineFunctionBlock$$get_Transform @ 0x578088
 * UnityEngine_Transform_o* MG_BlocksEngine2_DragDrop_BE2_DragDefineFunctionBlock__get_Transform (MG_BlocksEngine2_DragDrop_BE2_DragDefineFunctionBlock_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MG_BlocksEngine2.DragDrop.BE2_DragDefineFunctionBlock$$get_Transform
   UnityEngine_Transform_o* MG_BlocksEngine2_DragDrop_BE2_DragDefineFunctionBlock__get_Transform
   (MG_BlocksEngine2_DragDrop_BE2_DragDefineFunctionBlock_o* __this, const MethodInfo* method); */

undefined8
native_MG_BlocksEngine2_DragDrop_BE2_DragDefineFunctionBlock__get_Transform_578088(long param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  
  if ((bRam000000000133eaa7 & 1) == 0) {
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    bRam000000000133eaa7 = 1;
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



/* MG_BlocksEngine2.DragDrop.BE2_DragDefineFunctionBlock$$get_RayPoint @ 0x578110
 * UnityEngine_Vector2_o MG_BlocksEngine2_DragDrop_BE2_DragDefineFunctionBlock__get_RayPoint (MG_BlocksEngine2_DragDrop_BE2_DragDefineFunctionBlock_o* __this, const MethodInfo* method); */

/* MG_BlocksEngine2.DragDrop.BE2_DragDefineFunctionBlock$$get_RayPoint
   UnityEngine_Vector2_o MG_BlocksEngine2_DragDrop_BE2_DragDefineFunctionBlock__get_RayPoint
   (MG_BlocksEngine2_DragDrop_BE2_DragDefineFunctionBlock_o* __this, const MethodInfo* method); */

undefined4
native_MG_BlocksEngine2_DragDrop_BE2_DragDefineFunctionBlock__get_RayPoint_578110(long param_1)

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



/* MG_BlocksEngine2.DragDrop.BE2_DragDefineFunctionBlock$$get_Block @ 0x57812c
 * MG_BlocksEngine2_Block_I_BE2_Block_o* MG_BlocksEngine2_DragDrop_BE2_DragDefineFunctionBlock__get_Block (MG_BlocksEngine2_DragDrop_BE2_DragDefineFunctionBlock_o* __this, const MethodInfo* method); */

/* MG_BlocksEngine2.DragDrop.BE2_DragDefineFunctionBlock$$get_Block
   MG_BlocksEngine2_Block_I_BE2_Block_o*
   MG_BlocksEngine2_DragDrop_BE2_DragDefineFunctionBlock__get_Block
   (MG_BlocksEngine2_DragDrop_BE2_DragDefineFunctionBlock_o* __this, const MethodInfo* method); */

undefined8
native_MG_BlocksEngine2_DragDrop_BE2_DragDefineFunctionBlock__get_Block_57812c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* MG_BlocksEngine2.DragDrop.BE2_DragDefineFunctionBlock$$set_Block @ 0x578134
 * void MG_BlocksEngine2_DragDrop_BE2_DragDefineFunctionBlock__set_Block (MG_BlocksEngine2_DragDrop_BE2_DragDefineFunctionBlock_o* __this, MG_BlocksEngine2_Block_I_BE2_Block_o* value, const MethodInfo* method); */

/* MG_BlocksEngine2.DragDrop.BE2_DragDefineFunctionBlock$$set_Block
   void MG_BlocksEngine2_DragDrop_BE2_DragDefineFunctionBlock__set_Block
   (MG_BlocksEngine2_DragDrop_BE2_DragDefineFunctionBlock_o* __this,
   MG_BlocksEngine2_Block_I_BE2_Block_o* value, const MethodInfo* method); */

void native_MG_BlocksEngine2_DragDrop_BE2_DragDefineFunctionBlock__set_Block_578134
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



/* MG_BlocksEngine2.DragDrop.BE2_DragDefineFunctionBlock$$Awake @ 0x57813c
 * void MG_BlocksEngine2_DragDrop_BE2_DragDefineFunctionBlock__Awake (MG_BlocksEngine2_DragDrop_BE2_DragDefineFunctionBlock_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MG_BlocksEngine2.DragDrop.BE2_DragDefineFunctionBlock$$Awake
   void MG_BlocksEngine2_DragDrop_BE2_DragDefineFunctionBlock__Awake
   (MG_BlocksEngine2_DragDrop_BE2_DragDefineFunctionBlock_o* __this, const MethodInfo* method); */

void native_MG_BlocksEngine2_DragDrop_BE2_DragDefineFunctionBlock__Awake_57813c(long param_1)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  undefined8 uVar4;
  
  if ((bRam000000000133eaa8 & 1) == 0) {
    native_sub_43273c(&Method_UnityEngine_Component_GetComponent_I_BE2_Block____12e2a08);
    native_sub_43273c(&Method_UnityEngine_Component_GetComponent_RectTransform____12e2ad0);
    bRam000000000133eaa8 = 1;
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



/* MG_BlocksEngine2.DragDrop.BE2_DragDefineFunctionBlock$$OnPointerDown @ 0x5781e4
 * void MG_BlocksEngine2_DragDrop_BE2_DragDefineFunctionBlock__OnPointerDown (MG_BlocksEngine2_DragDrop_BE2_DragDefineFunctionBlock_o* __this, const MethodInfo* method); */

/* MG_BlocksEngine2.DragDrop.BE2_DragDefineFunctionBlock$$OnPointerDown
   void MG_BlocksEngine2_DragDrop_BE2_DragDefineFunctionBlock__OnPointerDown
   (MG_BlocksEngine2_DragDrop_BE2_DragDefineFunctionBlock_o* __this, const MethodInfo* method); */

void native_MG_BlocksEngine2_DragDrop_BE2_DragDefineFunctionBlock__OnPointerDown_5781e4(void)

{
  return;
}



/* MG_BlocksEngine2.DragDrop.BE2_DragDefineFunctionBlock$$OnRightPointerDownOrHold @ 0x5781e8
 * void MG_BlocksEngine2_DragDrop_BE2_DragDefineFunctionBlock__OnRightPointerDownOrHold (MG_BlocksEngine2_DragDrop_BE2_DragDefineFunctionBlock_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MG_BlocksEngine2.DragDrop.BE2_DragDefineFunctionBlock$$OnRightPointerDownOrHold
   void MG_BlocksEngine2_DragDrop_BE2_DragDefineFunctionBlock__OnRightPointerDownOrHold
   (MG_BlocksEngine2_DragDrop_BE2_DragDefineFunctionBlock_o* __this, const MethodInfo* method); */

void native_MG_BlocksEngine2_DragDrop_BE2_DragDefineFunctionBlock__OnRightPointerDownOrHold_5781e8
               (long param_1)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  ulong uVar4;
  int *piVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  long *plVar8;
  long lVar9;
  
  if ((bRam000000000133eaa9 & 1) == 0) {
    native_sub_43273c(&
                      Method_MG_BlocksEngine2_UI_BE2_UI_ContextMenuManager_OpenContextMenu_I_BE2_Block____12e22d0
                     );
    native_sub_43273c(&string___TypeInfo_12d3398);
    native_sub_43273c(&StringLiteral_noDuplicate_12f5958);
    bRam000000000133eaa9 = 1;
  }
  lVar1 = native_MG_BlocksEngine2_UI_BE2_UI_ContextMenuManager__get_instance_dc6a44(0);
  uVar6 = *(undefined8 *)(param_1 + 0x28);
  plVar2 = (long *)native_sub_432750(_string___TypeInfo_12d3398,1);
  if (plVar2 != (long *)0x0) {
    if (_StringLiteral_noDuplicate_12f5958 == 0) {
      lVar9 = 0;
    }
    else {
      lVar3 = native_sub_4327f8(_StringLiteral_noDuplicate_12f5958,*(undefined8 *)(*plVar2 + 0x40));
      lVar9 = _StringLiteral_noDuplicate_12f5958;
      if (lVar3 == 0) {
        uVar6 = native_sub_432830();
                    /* WARNING: Subroutine does not return */
        native_sub_4327dc(uVar6,0);
      }
    }
    if ((int)plVar2[3] == 0) {
      uVar6 = native_sub_43283c();
                    /* WARNING: Subroutine does not return */
      native_sub_4327dc(uVar6,0);
    }
    plVar2[4] = lVar9;
    native_sub_4326e0();
    lVar9 = 
    _Method_MG_BlocksEngine2_UI_BE2_UI_ContextMenuManager_OpenContextMenu_I_BE2_Block____12e22d0;
    if (lVar1 != 0) {
      if (*(char *)(lVar1 + 0x30) != '\0') {
        return;
      }
      lVar3 = *(long *)(lVar1 + 0x18);
      if (lVar3 != 0) {
        if (*(int *)(lVar3 + 0x18) == 0) {
          uVar6 = native_sub_43283c();
                    /* WARNING: Subroutine does not return */
          native_sub_4327dc(uVar6,0);
        }
        puVar7 = (undefined8 *)(lVar1 + 0x20);
        *puVar7 = *(undefined8 *)(lVar3 + 0x20);
        native_sub_4326e0(puVar7);
        plVar8 = (long *)*puVar7;
        if (plVar8 != (long *)0x0) {
          lVar3 = *plVar8;
          lVar9 = **(long **)(lVar9 + 0x30);
          if ((ulong)*(ushort *)(lVar3 + 0x12a) != 0) {
            uVar4 = 0;
            piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
            do {
              if (*(long *)(piVar5 + -2) == *(long *)(lVar9 + 0x18)) {
                lVar3 = lVar3 + (long)(int)(*piVar5 + (uint)*(ushort *)(lVar9 + 0x48)) * 0x10 +
                        0x138;
                goto code_r0x0049cb84;
              }
              uVar4 = uVar4 + 1;
              piVar5 = piVar5 + 4;
            } while (uVar4 < *(ushort *)(lVar3 + 0x12a));
          }
          lVar3 = native_sub_3c9b34(plVar8);
code_r0x0049cb84:
          puVar7 = (undefined8 *)native_sub_4327e8(*(undefined8 *)(lVar3 + 8),lVar9);
          (*(code *)*puVar7)(plVar8,uVar6,plVar2,puVar7);
          *(undefined1 *)(lVar1 + 0x30) = 1;
          if (((*(long *)(lVar1 + 0x28) != 0) &&
              (lVar1 = native_UnityEngine_Component__get_transform_8da62c(*(long *)(lVar1 + 0x28),0)
              , lVar1 != 0)) &&
             (lVar1 = native_UnityEngine_Component__get_gameObject_8da66c(lVar1,0), lVar1 != 0)) {
            if (pcRam0000000001340bf8 == (code *)0x0) {
              pcRam0000000001340bf8 = (code *)native_sub_4326f0(&UNK_00e2da67);
            }
                    /* WARNING: Could not recover jumptable at 0x008de6e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (*pcRam0000000001340bf8)(lVar1,1);
            return;
          }
        }
      }
                    /* WARNING: Subroutine does not return */
      native_sub_432810();
    }
  }
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* MG_BlocksEngine2.DragDrop.BE2_DragDefineFunctionBlock$$OnDrag @ 0x5782f0
 * void MG_BlocksEngine2_DragDrop_BE2_DragDefineFunctionBlock__OnDrag (MG_BlocksEngine2_DragDrop_BE2_DragDefineFunctionBlock_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MG_BlocksEngine2.DragDrop.BE2_DragDefineFunctionBlock$$OnDrag
   void MG_BlocksEngine2_DragDrop_BE2_DragDefineFunctionBlock__OnDrag
   (MG_BlocksEngine2_DragDrop_BE2_DragDefineFunctionBlock_o* __this, const MethodInfo* method); */

void native_MG_BlocksEngine2_DragDrop_BE2_DragDefineFunctionBlock__OnDrag_5782f0(undefined8 param_1)

{
  long lVar1;
  undefined8 uVar2;
  ulong uVar3;
  long lVar4;
  undefined8 uVar5;
  
  if ((bRam000000000133eaaa & 1) == 0) {
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    bRam000000000133eaaa = 1;
  }
  lVar1 = native_MG_BlocksEngine2_DragDrop_BE2_DragDefineFunctionBlock__get_Transform_578088
                    (param_1);
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
      lVar1 = native_MG_BlocksEngine2_DragDrop_BE2_DragDefineFunctionBlock__get_Transform_578088
                        (param_1);
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



/* MG_BlocksEngine2.DragDrop.BE2_DragDefineFunctionBlock$$OnPointerUp @ 0x5783cc
 * void MG_BlocksEngine2_DragDrop_BE2_DragDefineFunctionBlock__OnPointerUp (MG_BlocksEngine2_DragDrop_BE2_DragDefineFunctionBlock_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MG_BlocksEngine2.DragDrop.BE2_DragDefineFunctionBlock$$OnPointerUp
   void MG_BlocksEngine2_DragDrop_BE2_DragDefineFunctionBlock__OnPointerUp
   (MG_BlocksEngine2_DragDrop_BE2_DragDefineFunctionBlock_o* __this, const MethodInfo* method); */

void native_MG_BlocksEngine2_DragDrop_BE2_DragDefineFunctionBlock__OnPointerUp_5783cc
               (undefined1 param_1 [16],undefined8 param_2,long param_3)

{
  long lVar1;
  undefined8 *puVar2;
  long lVar3;
  ulong uVar4;
  int *piVar5;
  long *plVar6;
  long *plVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  
  if ((bRam000000000133eaab & 1) == 0) {
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
    bRam000000000133eaab = 1;
  }
  lVar1 = native_MG_BlocksEngine2_DragDrop_BE2_DragDropManager__get_Instance_576470();
  if (lVar1 == 0) goto LAB_00578ac0;
  plVar6 = *(long **)(lVar1 + 0x20);
  uVar8 = native_MG_BlocksEngine2_DragDrop_BE2_DragDefineFunctionBlock__get_RayPoint_578110(param_3)
  ;
  if (plVar6 == (long *)0x0) goto LAB_00578ac0;
  lVar1 = *plVar6;
  if ((ulong)*(ushort *)(lVar1 + 0x12a) != 0) {
    uVar4 = 0;
    piVar5 = (int *)(*(long *)(lVar1 + 0xb0) + 8);
    do {
      if (*(long *)(piVar5 + -2) == _MG_BlocksEngine2_DragDrop_I_BE2_Raycaster_TypeInfo_12d4e40) {
        puVar2 = (undefined8 *)(lVar1 + (long)(*piVar5 + 3) * 0x10 + 0x138);
        goto LAB_005784ec;
      }
      uVar4 = uVar4 + 1;
      piVar5 = piVar5 + 4;
    } while (uVar4 < *(ushort *)(lVar1 + 0x12a));
  }
  puVar2 = (undefined8 *)
           native_sub_3c9b34(plVar6,_MG_BlocksEngine2_DragDrop_I_BE2_Raycaster_TypeInfo_12d4e40,3);
LAB_005784ec:
  uVar9 = 0;
  plVar6 = (long *)(*(code *)*puVar2)(uVar8,param_2,0,plVar6,puVar2[1]);
  if (plVar6 == (long *)0x0) {
    lVar1 = native_MG_BlocksEngine2_DragDrop_BE2_DragDropManager__get_Instance_576470();
    if (lVar1 == 0) goto LAB_00578ac0;
    plVar7 = *(long **)(lVar1 + 0x20);
    plVar6 = (long *)native_MG_BlocksEngine2_Core_BE2_InputManager__get_Instance_602b04(0);
    if (plVar6 == (long *)0x0) goto LAB_00578ac0;
    lVar1 = *plVar6;
    if ((ulong)*(ushort *)(lVar1 + 0x12a) != 0) {
      uVar4 = 0;
      piVar5 = (int *)(*(long *)(lVar1 + 0xb0) + 8);
      do {
        if (*(long *)(piVar5 + -2) == _MG_BlocksEngine2_Core_I_BE2_InputManager_TypeInfo_12d4e20) {
          puVar2 = (undefined8 *)(lVar1 + (long)(*piVar5 + 2) * 0x10 + 0x138);
          goto LAB_00578588;
        }
        uVar4 = uVar4 + 1;
        piVar5 = piVar5 + 4;
      } while (uVar4 < *(ushort *)(lVar1 + 0x12a));
    }
    puVar2 = (undefined8 *)
             native_sub_3c9b34(plVar6,_MG_BlocksEngine2_Core_I_BE2_InputManager_TypeInfo_12d4e20,2);
LAB_00578588:
    uVar8 = (*(code *)*puVar2)(plVar6,puVar2[1]);
    if (plVar7 == (long *)0x0) goto LAB_00578ac0;
    lVar1 = *plVar7;
    if ((ulong)*(ushort *)(lVar1 + 0x12a) != 0) {
      uVar4 = 0;
      piVar5 = (int *)(*(long *)(lVar1 + 0xb0) + 8);
      do {
        if (*(long *)(piVar5 + -2) == _MG_BlocksEngine2_DragDrop_I_BE2_Raycaster_TypeInfo_12d4e40) {
          puVar2 = (undefined8 *)(lVar1 + (long)(*piVar5 + 3) * 0x10 + 0x138);
          goto LAB_005785fc;
        }
        uVar4 = uVar4 + 1;
        piVar5 = piVar5 + 4;
      } while (uVar4 < *(ushort *)(lVar1 + 0x12a));
    }
    puVar2 = (undefined8 *)
             native_sub_3c9b34(plVar7,_MG_BlocksEngine2_DragDrop_I_BE2_Raycaster_TypeInfo_12d4e40,3)
    ;
LAB_005785fc:
    plVar6 = (long *)(*(code *)*puVar2)(uVar8,param_2,uVar9,plVar7,puVar2[1]);
    if (plVar6 != (long *)0x0) goto LAB_0057861c;
    lVar1 = native_MG_BlocksEngine2_DragDrop_BE2_DragDefineFunctionBlock__get_Transform_578088
                      (param_3);
    if (lVar1 == 0) goto LAB_00578ac0;
    uVar8 = native_UnityEngine_Component__get_gameObject_8da66c(lVar1,0);
LAB_005788b4:
    if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
      native_sub_4327ec(_UnityEngine_Object_TypeInfo_12d54e0);
    }
    native_UnityEngine_Object__Destroy_8ea574(uVar8,0);
  }
  else {
LAB_0057861c:
    lVar1 = *plVar6;
    if ((ulong)*(ushort *)(lVar1 + 0x12a) != 0) {
      uVar4 = 0;
      piVar5 = (int *)(*(long *)(lVar1 + 0xb0) + 8);
      do {
        if (*(long *)(piVar5 + -2) == _MG_BlocksEngine2_Block_I_BE2_Spot_TypeInfo_12d4e48) {
          puVar2 = (undefined8 *)(lVar1 + (long)*piVar5 * 0x10 + 0x138);
          goto LAB_00578678;
        }
        uVar4 = uVar4 + 1;
        piVar5 = piVar5 + 4;
      } while (uVar4 < *(ushort *)(lVar1 + 0x12a));
    }
    puVar2 = (undefined8 *)
             native_sub_3c9b34(plVar6,_MG_BlocksEngine2_Block_I_BE2_Spot_TypeInfo_12d4e48,0);
LAB_00578678:
    lVar1 = (*(code *)*puVar2)(plVar6,puVar2[1]);
    if (lVar1 == 0) goto LAB_00578ac0;
    plVar7 = (long *)native_UnityEngine_Component__GetComponentInParent_BE2_Canvas__49dc70
                               (lVar1,
                                _Method_UnityEngine_Component_GetComponentInParent_I_BE2_ProgrammingEnv____12e2d60
                               );
    if (plVar7 == (long *)0x0) {
      lVar1 = *plVar6;
      if ((ulong)*(ushort *)(lVar1 + 0x12a) != 0) {
        uVar4 = 0;
        piVar5 = (int *)(*(long *)(lVar1 + 0xb0) + 8);
        do {
          if (*(long *)(piVar5 + -2) == _MG_BlocksEngine2_Block_I_BE2_Spot_TypeInfo_12d4e48) {
            puVar2 = (undefined8 *)(lVar1 + (long)*piVar5 * 0x10 + 0x138);
            goto LAB_005787a4;
          }
          uVar4 = uVar4 + 1;
          piVar5 = piVar5 + 4;
        } while (uVar4 < *(ushort *)(lVar1 + 0x12a));
      }
      puVar2 = (undefined8 *)
               native_sub_3c9b34(plVar6,_MG_BlocksEngine2_Block_I_BE2_Spot_TypeInfo_12d4e48,0);
LAB_005787a4:
      lVar1 = (*(code *)*puVar2)(plVar6,puVar2[1]);
      if (lVar1 == 0) goto LAB_00578ac0;
      uVar8 = native_UnityEngine_Transform__GetChild_772ef0(lVar1,0,0);
      if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
        native_sub_4327ec(_UnityEngine_Object_TypeInfo_12d54e0);
      }
      uVar4 = native_UnityEngine_Object__op_Inequality_8d76fc(uVar8,0,0);
      if ((uVar4 & 1) == 0) {
        lVar1 = native_MG_BlocksEngine2_DragDrop_BE2_DragDefineFunctionBlock__get_Transform_578088
                          (param_3);
      }
      else {
        lVar1 = *plVar6;
        if ((ulong)*(ushort *)(lVar1 + 0x12a) != 0) {
          uVar4 = 0;
          piVar5 = (int *)(*(long *)(lVar1 + 0xb0) + 8);
          do {
            if (*(long *)(piVar5 + -2) == _MG_BlocksEngine2_Block_I_BE2_Spot_TypeInfo_12d4e48) {
              puVar2 = (undefined8 *)(lVar1 + (long)*piVar5 * 0x10 + 0x138);
              goto LAB_00578864;
            }
            uVar4 = uVar4 + 1;
            piVar5 = piVar5 + 4;
          } while (uVar4 < *(ushort *)(lVar1 + 0x12a));
        }
        puVar2 = (undefined8 *)
                 native_sub_3c9b34(plVar6,_MG_BlocksEngine2_Block_I_BE2_Spot_TypeInfo_12d4e48,0);
LAB_00578864:
        lVar1 = (*(code *)*puVar2)(plVar6,puVar2[1]);
        if ((lVar1 == 0) ||
           (lVar1 = native_UnityEngine_Transform__GetChild_772ef0(lVar1,0,0), lVar1 == 0))
        goto LAB_00578ac0;
        plVar7 = (long *)native_UnityEngine_Component__GetComponentInParent_BE2_Canvas__49dc70
                                   (lVar1,
                                    _Method_UnityEngine_Component_GetComponentInParent_I_BE2_ProgrammingEnv____12e2d60
                                   );
        lVar1 = native_MG_BlocksEngine2_DragDrop_BE2_DragDefineFunctionBlock__get_Transform_578088
                          (param_3);
        if (plVar7 != (long *)0x0) goto LAB_005786ac;
      }
      if (lVar1 == 0) goto LAB_00578ac0;
      uVar8 = native_UnityEngine_Component__get_gameObject_8da66c(lVar1,0);
      goto LAB_005788b4;
    }
    lVar1 = native_MG_BlocksEngine2_DragDrop_BE2_DragDefineFunctionBlock__get_Transform_578088
                      (param_3);
LAB_005786ac:
    lVar3 = *plVar7;
    if ((ulong)*(ushort *)(lVar3 + 0x12a) != 0) {
      uVar4 = 0;
      piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
        if (*(long *)(piVar5 + -2) ==
            _MG_BlocksEngine2_Environment_I_BE2_ProgrammingEnv_TypeInfo_12d4e38) {
          puVar2 = (undefined8 *)(lVar3 + (long)*piVar5 * 0x10 + 0x138);
          goto LAB_00578750;
        }
        uVar4 = uVar4 + 1;
        piVar5 = piVar5 + 4;
      } while (uVar4 < *(ushort *)(lVar3 + 0x12a));
    }
    puVar2 = (undefined8 *)
             native_sub_3c9b34(plVar7,
                               _MG_BlocksEngine2_Environment_I_BE2_ProgrammingEnv_TypeInfo_12d4e38,0
                              );
LAB_00578750:
    uVar8 = (*(code *)*puVar2)(plVar7,puVar2[1]);
    if (lVar1 == 0) goto LAB_00578ac0;
    native_UnityEngine_Transform__SetParent_77208c(lVar1,uVar8,0);
  }
  lVar1 = native_MG_BlocksEngine2_DragDrop_BE2_DragDefineFunctionBlock__get_Transform_578088
                    (param_3);
  lVar3 = native_MG_BlocksEngine2_DragDrop_BE2_DragDefineFunctionBlock__get_Transform_578088
                    (param_3);
  if (lVar3 != 0) {
    uVar8 = native_UnityEngine_Transform__get_localPosition_7717f4(lVar3,0);
    lVar3 = native_MG_BlocksEngine2_DragDrop_BE2_DragDefineFunctionBlock__get_Transform_578088
                      (param_3);
    if ((lVar3 != 0) &&
       (native_UnityEngine_Transform__get_localPosition_7717f4(lVar3,0), lVar1 != 0)) {
      native_UnityEngine_Transform__set_localPosition_7718a4(uVar8,lVar1,0);
      lVar1 = native_MG_BlocksEngine2_DragDrop_BE2_DragDefineFunctionBlock__get_Transform_578088
                        (param_3);
      native_UnityEngine_Vector3__get_zero_776668(0);
      if (lVar1 != 0) {
        native_UnityEngine_Transform__set_localEulerAngles_77194c(lVar1,0);
        plVar6 = *(long **)(param_3 + 0x28);
        if (plVar6 != (long *)0x0) {
          lVar1 = *plVar6;
          if ((ulong)*(ushort *)(lVar1 + 0x12a) != 0) {
            uVar4 = 0;
            piVar5 = (int *)(*(long *)(lVar1 + 0xb0) + 8);
            do {
              if (*(long *)(piVar5 + -2) == _MG_BlocksEngine2_Block_I_BE2_Block_TypeInfo_12d4dd8) {
                puVar2 = (undefined8 *)(lVar1 + (long)(*piVar5 + 4) * 0x10 + 0x138);
                goto LAB_005789b8;
              }
              uVar4 = uVar4 + 1;
              piVar5 = piVar5 + 4;
            } while (uVar4 < *(ushort *)(lVar1 + 0x12a));
          }
          puVar2 = (undefined8 *)
                   native_sub_3c9b34(plVar6,_MG_BlocksEngine2_Block_I_BE2_Block_TypeInfo_12d4dd8,4);
LAB_005789b8:
          plVar6 = (long *)(*(code *)*puVar2)(plVar6,puVar2[1]);
          if (plVar6 != (long *)0x0) {
            lVar1 = *plVar6;
            if ((ulong)*(ushort *)(lVar1 + 0x12a) != 0) {
              uVar4 = 0;
              piVar5 = (int *)(*(long *)(lVar1 + 0xb0) + 8);
              do {
                if (*(long *)(piVar5 + -2) ==
                    _MG_BlocksEngine2_Block_Instruction_I_BE2_Instruction_TypeInfo_12d4e28) {
                  puVar2 = (undefined8 *)(lVar1 + (long)*piVar5 * 0x10 + 0x138);
                  goto LAB_00578a28;
                }
                uVar4 = uVar4 + 1;
                piVar5 = piVar5 + 4;
              } while (uVar4 < *(ushort *)(lVar1 + 0x12a));
            }
            puVar2 = (undefined8 *)
                     native_sub_3c9b34(plVar6,
                                       _MG_BlocksEngine2_Block_Instruction_I_BE2_Instruction_TypeInfo_12d4e28
                                       ,0);
LAB_00578a28:
            plVar6 = (long *)(*(code *)*puVar2)(plVar6,puVar2[1]);
            if (plVar6 != (long *)0x0) {
              lVar1 = *plVar6;
              if ((ulong)*(ushort *)(lVar1 + 0x12a) != 0) {
                uVar4 = 0;
                piVar5 = (int *)(*(long *)(lVar1 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar5 + -2) ==
                      _MG_BlocksEngine2_Block_Instruction_I_BE2_InstructionBase_TypeInfo_12d4e30) {
                    puVar2 = (undefined8 *)(lVar1 + (long)(*piVar5 + 0xe) * 0x10 + 0x138);
                    goto LAB_00578a9c;
                  }
                  uVar4 = uVar4 + 1;
                  piVar5 = piVar5 + 4;
                } while (uVar4 < *(ushort *)(lVar1 + 0x12a));
              }
              puVar2 = (undefined8 *)
                       native_sub_3c9b34(plVar6,
                                         _MG_BlocksEngine2_Block_Instruction_I_BE2_InstructionBase_TypeInfo_12d4e30
                                         ,0xe);
LAB_00578a9c:
                    /* WARNING: Could not recover jumptable at 0x00578abc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
              (*(code *)*puVar2)(plVar6,puVar2[1]);
              return;
            }
          }
        }
      }
    }
  }
LAB_00578ac0:
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* MG_BlocksEngine2.DragDrop.BE2_DragDefineFunctionBlock$$.ctor @ 0x578ac4
 * void MG_BlocksEngine2_DragDrop_BE2_DragDefineFunctionBlock___ctor (MG_BlocksEngine2_DragDrop_BE2_DragDefineFunctionBlock_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MG_BlocksEngine2.DragDrop.BE2_DragDefineFunctionBlock$$.ctor
   void MG_BlocksEngine2_DragDrop_BE2_DragDefineFunctionBlock___ctor
   (MG_BlocksEngine2_DragDrop_BE2_DragDefineFunctionBlock_o* __this, const MethodInfo* method); */

undefined1  [16]
native_MG_BlocksEngine2_DragDrop_BE2_DragDefineFunctionBlock___ctor_578ac4(ulong param_1)

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


