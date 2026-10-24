/* ARM64 IL2CPP native pseudocode from Ghidra.
 * Recovered implementation, not original C# source.
 * Function boundaries follow the IL2CPP method address table. */


/* MG_BlocksEngine2.Block.BE2_SpotProgrammingEnv$$get_Type @ 0x619af8
 * System_String_o* MG_BlocksEngine2_Block_BE2_SpotProgrammingEnv__get_Type (MG_BlocksEngine2_Block_BE2_SpotProgrammingEnv_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MG_BlocksEngine2.Block.BE2_SpotProgrammingEnv$$get_Type
   System_String_o* MG_BlocksEngine2_Block_BE2_SpotProgrammingEnv__get_Type
   (MG_BlocksEngine2_Block_BE2_SpotProgrammingEnv_o* __this, const MethodInfo* method); */

undefined8 native_MG_BlocksEngine2_Block_BE2_SpotProgrammingEnv__get_Type_619af8(void)

{
  if ((bRam000000000133eeb5 & 1) == 0) {
    native_sub_43273c(&StringLiteral_programmingEnv_12f5c60);
    bRam000000000133eeb5 = 1;
  }
  return _StringLiteral_programmingEnv_12f5c60;
}



/* MG_BlocksEngine2.Block.BE2_SpotProgrammingEnv$$get_Transform @ 0x619b3c
 * UnityEngine_Transform_o* MG_BlocksEngine2_Block_BE2_SpotProgrammingEnv__get_Transform (MG_BlocksEngine2_Block_BE2_SpotProgrammingEnv_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MG_BlocksEngine2.Block.BE2_SpotProgrammingEnv$$get_Transform
   UnityEngine_Transform_o* MG_BlocksEngine2_Block_BE2_SpotProgrammingEnv__get_Transform
   (MG_BlocksEngine2_Block_BE2_SpotProgrammingEnv_o* __this, const MethodInfo* method); */

undefined8 native_MG_BlocksEngine2_Block_BE2_SpotProgrammingEnv__get_Transform_619b3c(long param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  
  if ((bRam000000000133eeb6 & 1) == 0) {
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    bRam000000000133eeb6 = 1;
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



/* MG_BlocksEngine2.Block.BE2_SpotProgrammingEnv$$get_DropPosition @ 0x619bc4
 * UnityEngine_Vector2_o MG_BlocksEngine2_Block_BE2_SpotProgrammingEnv__get_DropPosition (MG_BlocksEngine2_Block_BE2_SpotProgrammingEnv_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MG_BlocksEngine2.Block.BE2_SpotProgrammingEnv$$get_DropPosition
   UnityEngine_Vector2_o MG_BlocksEngine2_Block_BE2_SpotProgrammingEnv__get_DropPosition
   (MG_BlocksEngine2_Block_BE2_SpotProgrammingEnv_o* __this, const MethodInfo* method); */

undefined8 native_MG_BlocksEngine2_Block_BE2_SpotProgrammingEnv__get_DropPosition_619bc4(void)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  if ((bRam000000000133ff9e & 1) == 0) {
    uVar1 = native_sub_43273c(&UnityEngine_Vector2_TypeInfo_12d66e0);
    bRam000000000133ff9e = 1;
  }
  return uVar1;
}



/* MG_BlocksEngine2.Block.BE2_SpotProgrammingEnv$$get_Block @ 0x619bcc
 * MG_BlocksEngine2_Block_I_BE2_Block_o* MG_BlocksEngine2_Block_BE2_SpotProgrammingEnv__get_Block (MG_BlocksEngine2_Block_BE2_SpotProgrammingEnv_o* __this, const MethodInfo* method); */

/* MG_BlocksEngine2.Block.BE2_SpotProgrammingEnv$$get_Block
   MG_BlocksEngine2_Block_I_BE2_Block_o* MG_BlocksEngine2_Block_BE2_SpotProgrammingEnv__get_Block
   (MG_BlocksEngine2_Block_BE2_SpotProgrammingEnv_o* __this, const MethodInfo* method); */

undefined8 native_MG_BlocksEngine2_Block_BE2_SpotProgrammingEnv__get_Block_619bcc(void)

{
  return 0;
}



/* MG_BlocksEngine2.Block.BE2_SpotProgrammingEnv$$Awake @ 0x619bd4
 * void MG_BlocksEngine2_Block_BE2_SpotProgrammingEnv__Awake (MG_BlocksEngine2_Block_BE2_SpotProgrammingEnv_o* __this, const MethodInfo* method); */

/* MG_BlocksEngine2.Block.BE2_SpotProgrammingEnv$$Awake
   void MG_BlocksEngine2_Block_BE2_SpotProgrammingEnv__Awake
   (MG_BlocksEngine2_Block_BE2_SpotProgrammingEnv_o* __this, const MethodInfo* method); */

void native_MG_BlocksEngine2_Block_BE2_SpotProgrammingEnv__Awake_619bd4(long param_1)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  undefined8 uVar4;
  
  uVar4 = native_UnityEngine_Component__get_transform_8da62c(param_1,0);
  *(undefined8 *)(param_1 + 0x20) = uVar4;
  native_sub_4326e0(param_1 + 0x20);
  uVar4 = native_MG_BlocksEngine2_DragDrop_BE2_DragDropManager__get_Instance_576470(0);
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



/* MG_BlocksEngine2.Block.BE2_SpotProgrammingEnv$$OnPointerUp @ 0x619c1c
 * void MG_BlocksEngine2_Block_BE2_SpotProgrammingEnv__OnPointerUp (MG_BlocksEngine2_Block_BE2_SpotProgrammingEnv_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MG_BlocksEngine2.Block.BE2_SpotProgrammingEnv$$OnPointerUp
   void MG_BlocksEngine2_Block_BE2_SpotProgrammingEnv__OnPointerUp
   (MG_BlocksEngine2_Block_BE2_SpotProgrammingEnv_o* __this, const MethodInfo* method); */

void native_MG_BlocksEngine2_Block_BE2_SpotProgrammingEnv__OnPointerUp_619c1c(long param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  ulong uVar4;
  int *piVar5;
  long *plVar6;
  
  if ((bRam000000000133eeb7 & 1) == 0) {
    native_sub_43273c(&MG_BlocksEngine2_DragDrop_I_BE2_Drag_TypeInfo_12d4e18);
    bRam000000000133eeb7 = 1;
  }
  if (*(long *)(param_1 + 0x18) != 0) {
    plVar6 = *(long **)(*(long *)(param_1 + 0x18) + 0x30);
    if (plVar6 == (long *)0x0) {
      return;
    }
    lVar3 = *plVar6;
    if ((ulong)*(ushort *)(lVar3 + 0x12a) != 0) {
      uVar4 = 0;
      piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
        if (*(long *)(piVar5 + -2) == _MG_BlocksEngine2_DragDrop_I_BE2_Drag_TypeInfo_12d4e18) {
          puVar1 = (undefined8 *)(lVar3 + (long)(*piVar5 + 4) * 0x10 + 0x138);
          goto LAB_00619cc8;
        }
        uVar4 = uVar4 + 1;
        piVar5 = piVar5 + 4;
      } while (uVar4 < *(ushort *)(lVar3 + 0x12a));
    }
    puVar1 = (undefined8 *)
             native_sub_3c9b34(plVar6,_MG_BlocksEngine2_DragDrop_I_BE2_Drag_TypeInfo_12d4e18,4);
LAB_00619cc8:
    lVar3 = (*(code *)*puVar1)(plVar6,puVar1[1]);
    uVar2 = native_UnityEngine_Component__get_transform_8da62c(param_1,0);
    if (lVar3 != 0) {
      if (pcRam000000000133fe68 == (code *)0x0) {
        pcRam000000000133fe68 = (code *)native_sub_4326f0(&UNK_00e2aa86,uVar2,0);
      }
                    /* WARNING: Could not recover jumptable at 0x007720dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*pcRam000000000133fe68)(lVar3,uVar2,1);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* MG_BlocksEngine2.Block.BE2_SpotProgrammingEnv$$OnEnable @ 0x619d04
 * void MG_BlocksEngine2_Block_BE2_SpotProgrammingEnv__OnEnable (MG_BlocksEngine2_Block_BE2_SpotProgrammingEnv_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MG_BlocksEngine2.Block.BE2_SpotProgrammingEnv$$OnEnable
   void MG_BlocksEngine2_Block_BE2_SpotProgrammingEnv__OnEnable
   (MG_BlocksEngine2_Block_BE2_SpotProgrammingEnv_o* __this, const MethodInfo* method); */

void native_MG_BlocksEngine2_Block_BE2_SpotProgrammingEnv__OnEnable_619d04(long param_1)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  long *plVar4;
  undefined8 uVar5;
  uint uVar6;
  
  lVar3 = *(long *)(param_1 + 0x18);
  if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
    native_sub_432810();
  }
  if ((bRam000000000133eab8 & 1) == 0) {
    native_sub_43273c(&Method_System_Collections_Generic_List_I_BE2_Spot__Add___12dca18,param_1,0);
    native_sub_43273c(&Method_System_Collections_Generic_List_I_BE2_Spot__Contains___12dca20);
    bRam000000000133eab8 = 1;
  }
  lVar1 = native_MG_BlocksEngine2_DragDrop_BE2_DragDropManager__get_SpotsList_578b58(lVar3);
  if (lVar1 != 0) {
    uVar2 = native_System_Collections_Generic_List_BE2_UI_SelectionPanel___Contains_d40ec8
                      (lVar1,param_1,
                       _Method_System_Collections_Generic_List_I_BE2_Spot__Contains___12dca20);
    if ((param_1 == 0) || ((uVar2 & 1) != 0)) {
      return;
    }
    lVar3 = native_MG_BlocksEngine2_DragDrop_BE2_DragDropManager__get_SpotsList_578b58(lVar3);
    if (lVar3 != 0) {
      lVar1 = *(long *)(lVar3 + 0x10);
      if (lVar1 != 0) {
        uVar6 = *(uint *)(lVar3 + 0x18);
        if (uVar6 == *(uint *)(lVar1 + 0x18)) {
          (*(code *)**(undefined8 **)
                      (*(long *)(*(long *)(
                                          _Method_System_Collections_Generic_List_I_BE2_Spot__Add___12dca18
                                          + 0x18) + 0xc0) + 0x60))(lVar3,uVar6 + 1);
          uVar6 = *(uint *)(lVar3 + 0x18);
          lVar1 = *(long *)(lVar3 + 0x10);
          *(uint *)(lVar3 + 0x18) = uVar6 + 1;
          if (lVar1 == 0) goto code_r0x00d40c5c;
        }
        else {
          *(uint *)(lVar3 + 0x18) = uVar6 + 1;
        }
        if (uVar6 < *(uint *)(lVar1 + 0x18)) {
          plVar4 = (long *)(lVar1 + (long)(int)uVar6 * 8 + 0x20);
          *plVar4 = param_1;
          native_sub_4326e0(plVar4,param_1);
          *(int *)(lVar3 + 0x1c) = *(int *)(lVar3 + 0x1c) + 1;
          return;
        }
        uVar5 = native_sub_43283c();
                    /* WARNING: Subroutine does not return */
        native_sub_4327dc(uVar5,0);
      }
code_r0x00d40c5c:
                    /* WARNING: Subroutine does not return */
      native_sub_432810();
    }
  }
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* MG_BlocksEngine2.Block.BE2_SpotProgrammingEnv$$OnDisable @ 0x619d24
 * void MG_BlocksEngine2_Block_BE2_SpotProgrammingEnv__OnDisable (MG_BlocksEngine2_Block_BE2_SpotProgrammingEnv_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MG_BlocksEngine2.Block.BE2_SpotProgrammingEnv$$OnDisable
   void MG_BlocksEngine2_Block_BE2_SpotProgrammingEnv__OnDisable
   (MG_BlocksEngine2_Block_BE2_SpotProgrammingEnv_o* __this, const MethodInfo* method); */

ulong native_MG_BlocksEngine2_Block_BE2_SpotProgrammingEnv__OnDisable_619d24(long param_1)

{
  int iVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  
  lVar4 = *(long *)(param_1 + 0x18);
  if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
    native_sub_432810();
  }
  if ((bRam000000000133eab9 & 1) == 0) {
    native_sub_43273c(&Method_System_Collections_Generic_List_I_BE2_Spot__Contains___12dca20,param_1
                      ,0);
    native_sub_43273c(&Method_System_Collections_Generic_List_I_BE2_Spot__Remove___12dca28);
    bRam000000000133eab9 = 1;
  }
  lVar2 = native_MG_BlocksEngine2_DragDrop_BE2_DragDropManager__get_SpotsList_578b58(lVar4);
  if (lVar2 != 0) {
    uVar3 = native_System_Collections_Generic_List_BE2_UI_SelectionPanel___Contains_d40ec8
                      (lVar2,param_1,
                       _Method_System_Collections_Generic_List_I_BE2_Spot__Contains___12dca20);
    if ((uVar3 & 1) == 0) {
      return uVar3;
    }
    lVar2 = native_MG_BlocksEngine2_DragDrop_BE2_DragDropManager__get_SpotsList_578b58(lVar4);
    lVar4 = _Method_System_Collections_Generic_List_I_BE2_Spot__Remove___12dca28;
    if (lVar2 != 0) {
      if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
        native_sub_432810(0,param_1);
      }
      iVar1 = (*(code *)**(undefined8 **)
                          (*(long *)(*(long *)(
                                              _Method_System_Collections_Generic_List_I_BE2_Spot__Remove___12dca28
                                              + 0x18) + 0xc0) + 0xd8))();
      if (-1 < iVar1) {
        (*(code *)**(undefined8 **)(*(long *)(*(long *)(lVar4 + 0x18) + 0xc0) + 0xe8))(lVar2,iVar1);
      }
      return (ulong)(-1 < iVar1);
    }
  }
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* MG_BlocksEngine2.Block.BE2_SpotProgrammingEnv$$.ctor @ 0x619d44
 * void MG_BlocksEngine2_Block_BE2_SpotProgrammingEnv___ctor (MG_BlocksEngine2_Block_BE2_SpotProgrammingEnv_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MG_BlocksEngine2.Block.BE2_SpotProgrammingEnv$$.ctor
   void MG_BlocksEngine2_Block_BE2_SpotProgrammingEnv___ctor
   (MG_BlocksEngine2_Block_BE2_SpotProgrammingEnv_o* __this, const MethodInfo* method); */

undefined1  [16] native_MG_BlocksEngine2_Block_BE2_SpotProgrammingEnv___ctor_619d44(ulong param_1)

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


