/* ARM64 IL2CPP native pseudocode from Ghidra.
 * Recovered implementation, not original C# source.
 * Function boundaries follow the IL2CPP method address table. */


/* MG_BlocksEngine2.UI.BE2_UI_BlockContextMenu$$get_Title @ 0x61aac0
 * MG_BlocksEngine2_Utils_BE2_Text_o* MG_BlocksEngine2_UI_BE2_UI_BlockContextMenu__get_Title (MG_BlocksEngine2_UI_BE2_UI_BlockContextMenu_o* __this, const MethodInfo* method); */

/* MG_BlocksEngine2.UI.BE2_UI_BlockContextMenu$$get_Title
   MG_BlocksEngine2_Utils_BE2_Text_o* MG_BlocksEngine2_UI_BE2_UI_BlockContextMenu__get_Title
   (MG_BlocksEngine2_UI_BE2_UI_BlockContextMenu_o* __this, const MethodInfo* method); */

undefined8 native_MG_BlocksEngine2_UI_BE2_UI_BlockContextMenu__get_Title_61aac0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* MG_BlocksEngine2.UI.BE2_UI_BlockContextMenu$$set_Title @ 0x61aac8
 * void MG_BlocksEngine2_UI_BE2_UI_BlockContextMenu__set_Title (MG_BlocksEngine2_UI_BE2_UI_BlockContextMenu_o* __this, MG_BlocksEngine2_Utils_BE2_Text_o* value, const MethodInfo* method); */

/* MG_BlocksEngine2.UI.BE2_UI_BlockContextMenu$$set_Title
   void MG_BlocksEngine2_UI_BE2_UI_BlockContextMenu__set_Title
   (MG_BlocksEngine2_UI_BE2_UI_BlockContextMenu_o* __this, MG_BlocksEngine2_Utils_BE2_Text_o* value,
   const MethodInfo* method); */

void native_MG_BlocksEngine2_UI_BE2_UI_BlockContextMenu__set_Title_61aac8
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



/* MG_BlocksEngine2.UI.BE2_UI_BlockContextMenu$$Awake @ 0x61aad0
 * void MG_BlocksEngine2_UI_BE2_UI_BlockContextMenu__Awake (MG_BlocksEngine2_UI_BE2_UI_BlockContextMenu_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MG_BlocksEngine2.UI.BE2_UI_BlockContextMenu$$Awake
   void MG_BlocksEngine2_UI_BE2_UI_BlockContextMenu__Awake
   (MG_BlocksEngine2_UI_BE2_UI_BlockContextMenu_o* __this, const MethodInfo* method); */

void native_MG_BlocksEngine2_UI_BE2_UI_BlockContextMenu__Awake_61aad0(long param_1)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 *puVar6;
  
  if ((bRam000000000133eec4 & 1) == 0) {
    native_sub_43273c(&
                      Method_UnityEngine_Component_GetComponentInParent_BE2_UI_ContextMenuManager____12e2d18
                     );
    bRam000000000133eec4 = 1;
  }
  uVar4 = native_UnityEngine_Component__GetComponentInParent_BE2_Canvas__49dc70
                    (param_1,
                     _Method_UnityEngine_Component_GetComponentInParent_BE2_UI_ContextMenuManager____12e2d18
                    );
  *(undefined8 *)(param_1 + 0x18) = uVar4;
  native_sub_4326e0(param_1 + 0x18);
  lVar5 = native_UnityEngine_Component__get_transform_8da62c(param_1,0);
  if (lVar5 != 0) {
    native_UnityEngine_Transform__GetChild_772ef0(lVar5,0,0);
    uVar4 = native_MG_BlocksEngine2_Utils_BE2_Text__GetBE2Text_610e74();
    puVar6 = (undefined8 *)(param_1 + 0x30);
    *puVar6 = uVar4;
    if (iRam0000000001345318 != 0) {
      puVar1 = (ulong *)(((ulong)puVar6 >> 0x12 & 0x7fff) * 8 + 0x138ecd8);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = *puVar1 | 1L << ((ulong)puVar6 >> 0xc & 0x3f);
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* MG_BlocksEngine2.UI.BE2_UI_BlockContextMenu$$Start @ 0x61ab60
 * void MG_BlocksEngine2_UI_BE2_UI_BlockContextMenu__Start (MG_BlocksEngine2_UI_BE2_UI_BlockContextMenu_o* __this, const MethodInfo* method); */

/* MG_BlocksEngine2.UI.BE2_UI_BlockContextMenu$$Start
   void MG_BlocksEngine2_UI_BE2_UI_BlockContextMenu__Start
   (MG_BlocksEngine2_UI_BE2_UI_BlockContextMenu_o* __this, const MethodInfo* method); */

void native_MG_BlocksEngine2_UI_BE2_UI_BlockContextMenu__Start_61ab60(long param_1)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  
  uVar4 = native_MG_BlocksEngine2_DragDrop_BE2_DragDropManager__get_Instance_576470(0);
  puVar5 = (undefined8 *)(param_1 + 0x28);
  *puVar5 = uVar4;
  if (iRam0000000001345318 != 0) {
    puVar1 = (ulong *)(((ulong)puVar5 >> 0x12 & 0x7fff) * 8 + 0x138ecd8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar3) {
        *puVar1 = *puVar1 | 1L << ((ulong)puVar5 >> 0xc & 0x3f);
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  return;
}



/* MG_BlocksEngine2.UI.BE2_UI_BlockContextMenu$$Close @ 0x61ab90
 * void MG_BlocksEngine2_UI_BE2_UI_BlockContextMenu__Close (MG_BlocksEngine2_UI_BE2_UI_BlockContextMenu_o* __this, const MethodInfo* method); */

/* MG_BlocksEngine2.UI.BE2_UI_BlockContextMenu$$Close
   void MG_BlocksEngine2_UI_BE2_UI_BlockContextMenu__Close
   (MG_BlocksEngine2_UI_BE2_UI_BlockContextMenu_o* __this, const MethodInfo* method); */

void native_MG_BlocksEngine2_UI_BE2_UI_BlockContextMenu__Close_61ab90(long param_1)

{
  long lVar1;
  
  *(undefined8 *)(param_1 + 0x20) = 0;
  native_sub_4326e0((undefined8 *)(param_1 + 0x20),0);
  lVar1 = native_UnityEngine_Component__get_gameObject_8da66c(param_1,0);
  if (lVar1 != 0) {
    if (pcRam0000000001340bf8 == (code *)0x0) {
      pcRam0000000001340bf8 = (code *)native_sub_4326f0(&UNK_00e2da67);
    }
                    /* WARNING: Could not recover jumptable at 0x008de6e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*pcRam0000000001340bf8)(lVar1,0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* MG_BlocksEngine2.UI.BE2_UI_BlockContextMenu$$Duplicate @ 0x61abd4
 * void MG_BlocksEngine2_UI_BE2_UI_BlockContextMenu__Duplicate (MG_BlocksEngine2_UI_BE2_UI_BlockContextMenu_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MG_BlocksEngine2.UI.BE2_UI_BlockContextMenu$$Duplicate
   void MG_BlocksEngine2_UI_BE2_UI_BlockContextMenu__Duplicate
   (MG_BlocksEngine2_UI_BE2_UI_BlockContextMenu_o* __this, const MethodInfo* method); */

void native_MG_BlocksEngine2_UI_BE2_UI_BlockContextMenu__Duplicate_61abd4(long param_1)

{
  long lVar1;
  undefined8 *puVar2;
  long lVar3;
  ulong uVar4;
  int *piVar5;
  undefined8 *puVar6;
  long *plVar7;
  
  native_MG_BlocksEngine2_Utils_BE2_BlockUtils__DuplicateBlock_5696ac
            (*(undefined8 *)(param_1 + 0x20),0);
  lVar1 = *(long *)(param_1 + 0x18);
  if (lVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    native_sub_432810();
  }
  if ((bRam0000000001346dcc & 1) == 0) {
    native_sub_43273c(&MG_BlocksEngine2_UI_I_BE2_UI_ContextMenu_TypeInfo_12d4e58,0);
    bRam0000000001346dcc = 1;
  }
  if (*(char *)(lVar1 + 0x30) == '\0') {
    return;
  }
  puVar6 = (undefined8 *)(lVar1 + 0x20);
  plVar7 = (long *)*puVar6;
  if (plVar7 != (long *)0x0) {
    lVar3 = *plVar7;
    if ((ulong)*(ushort *)(lVar3 + 0x12a) != 0) {
      uVar4 = 0;
      piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
        if (*(long *)(piVar5 + -2) == _MG_BlocksEngine2_UI_I_BE2_UI_ContextMenu_TypeInfo_12d4e58) {
          puVar2 = (undefined8 *)(lVar3 + (long)(*piVar5 + 2) * 0x10 + 0x138);
          goto LAB_00dc6f58;
        }
        uVar4 = uVar4 + 1;
        piVar5 = piVar5 + 4;
      } while (uVar4 < *(ushort *)(lVar3 + 0x12a));
    }
    puVar2 = (undefined8 *)
             native_sub_3c9b34(plVar7,_MG_BlocksEngine2_UI_I_BE2_UI_ContextMenu_TypeInfo_12d4e58,2);
LAB_00dc6f58:
    (*(code *)*puVar2)(plVar7,puVar2[1]);
    *puVar6 = 0;
    native_sub_4326e0(puVar6,0);
  }
  *(undefined1 *)(lVar1 + 0x30) = 0;
  if (((*(long *)(lVar1 + 0x28) != 0) &&
      (lVar1 = native_UnityEngine_Component__get_transform_8da62c(*(long *)(lVar1 + 0x28),0),
      lVar1 != 0)) &&
     (lVar1 = native_UnityEngine_Component__get_gameObject_8da66c(lVar1,0), lVar1 != 0)) {
    if (pcRam0000000001340bf8 == (code *)0x0) {
      pcRam0000000001340bf8 = (code *)native_sub_4326f0(&UNK_00e2da67);
    }
                    /* WARNING: Could not recover jumptable at 0x008de6e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*pcRam0000000001340bf8)(lVar1,0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* MG_BlocksEngine2.UI.BE2_UI_BlockContextMenu$$Delete @ 0x61ac0c
 * void MG_BlocksEngine2_UI_BE2_UI_BlockContextMenu__Delete (MG_BlocksEngine2_UI_BE2_UI_BlockContextMenu_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MG_BlocksEngine2.UI.BE2_UI_BlockContextMenu$$Delete
   void MG_BlocksEngine2_UI_BE2_UI_BlockContextMenu__Delete
   (MG_BlocksEngine2_UI_BE2_UI_BlockContextMenu_o* __this, const MethodInfo* method); */

void native_MG_BlocksEngine2_UI_BE2_UI_BlockContextMenu__Delete_61ac0c(long param_1)

{
  long lVar1;
  undefined8 *puVar2;
  long lVar3;
  ulong uVar4;
  int *piVar5;
  undefined8 *puVar6;
  long *plVar7;
  
  native_MG_BlocksEngine2_Utils_BE2_BlockUtils__RemoveBlock_56e15c
            (*(undefined8 *)(param_1 + 0x20),0);
  lVar1 = *(long *)(param_1 + 0x18);
  if (lVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    native_sub_432810();
  }
  if ((bRam0000000001346dcc & 1) == 0) {
    native_sub_43273c(&MG_BlocksEngine2_UI_I_BE2_UI_ContextMenu_TypeInfo_12d4e58,0);
    bRam0000000001346dcc = 1;
  }
  if (*(char *)(lVar1 + 0x30) == '\0') {
    return;
  }
  puVar6 = (undefined8 *)(lVar1 + 0x20);
  plVar7 = (long *)*puVar6;
  if (plVar7 != (long *)0x0) {
    lVar3 = *plVar7;
    if ((ulong)*(ushort *)(lVar3 + 0x12a) != 0) {
      uVar4 = 0;
      piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
        if (*(long *)(piVar5 + -2) == _MG_BlocksEngine2_UI_I_BE2_UI_ContextMenu_TypeInfo_12d4e58) {
          puVar2 = (undefined8 *)(lVar3 + (long)(*piVar5 + 2) * 0x10 + 0x138);
          goto LAB_00dc6f58;
        }
        uVar4 = uVar4 + 1;
        piVar5 = piVar5 + 4;
      } while (uVar4 < *(ushort *)(lVar3 + 0x12a));
    }
    puVar2 = (undefined8 *)
             native_sub_3c9b34(plVar7,_MG_BlocksEngine2_UI_I_BE2_UI_ContextMenu_TypeInfo_12d4e58,2);
LAB_00dc6f58:
    (*(code *)*puVar2)(plVar7,puVar2[1]);
    *puVar6 = 0;
    native_sub_4326e0(puVar6,0);
  }
  *(undefined1 *)(lVar1 + 0x30) = 0;
  if (((*(long *)(lVar1 + 0x28) != 0) &&
      (lVar1 = native_UnityEngine_Component__get_transform_8da62c(*(long *)(lVar1 + 0x28),0),
      lVar1 != 0)) &&
     (lVar1 = native_UnityEngine_Component__get_gameObject_8da66c(lVar1,0), lVar1 != 0)) {
    if (pcRam0000000001340bf8 == (code *)0x0) {
      pcRam0000000001340bf8 = (code *)native_sub_4326f0(&UNK_00e2da67);
    }
                    /* WARNING: Could not recover jumptable at 0x008de6e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*pcRam0000000001340bf8)(lVar1,0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* MG_BlocksEngine2.UI.BE2_UI_BlockContextMenu$$Cancel @ 0x61ac44
 * void MG_BlocksEngine2_UI_BE2_UI_BlockContextMenu__Cancel (MG_BlocksEngine2_UI_BE2_UI_BlockContextMenu_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MG_BlocksEngine2.UI.BE2_UI_BlockContextMenu$$Cancel
   void MG_BlocksEngine2_UI_BE2_UI_BlockContextMenu__Cancel
   (MG_BlocksEngine2_UI_BE2_UI_BlockContextMenu_o* __this, const MethodInfo* method); */

void native_MG_BlocksEngine2_UI_BE2_UI_BlockContextMenu__Cancel_61ac44(long param_1)

{
  long lVar1;
  undefined8 *puVar2;
  long lVar3;
  ulong uVar4;
  int *piVar5;
  undefined8 *puVar6;
  long *plVar7;
  
  lVar1 = *(long *)(param_1 + 0x18);
  if (lVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    native_sub_432810();
  }
  if ((bRam0000000001346dcc & 1) == 0) {
    native_sub_43273c(&MG_BlocksEngine2_UI_I_BE2_UI_ContextMenu_TypeInfo_12d4e58,0);
    bRam0000000001346dcc = 1;
  }
  if (*(char *)(lVar1 + 0x30) == '\0') {
    return;
  }
  puVar6 = (undefined8 *)(lVar1 + 0x20);
  plVar7 = (long *)*puVar6;
  if (plVar7 != (long *)0x0) {
    lVar3 = *plVar7;
    if ((ulong)*(ushort *)(lVar3 + 0x12a) != 0) {
      uVar4 = 0;
      piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
        if (*(long *)(piVar5 + -2) == _MG_BlocksEngine2_UI_I_BE2_UI_ContextMenu_TypeInfo_12d4e58) {
          puVar2 = (undefined8 *)(lVar3 + (long)(*piVar5 + 2) * 0x10 + 0x138);
          goto LAB_00dc6f58;
        }
        uVar4 = uVar4 + 1;
        piVar5 = piVar5 + 4;
      } while (uVar4 < *(ushort *)(lVar3 + 0x12a));
    }
    puVar2 = (undefined8 *)
             native_sub_3c9b34(plVar7,_MG_BlocksEngine2_UI_I_BE2_UI_ContextMenu_TypeInfo_12d4e58,2);
LAB_00dc6f58:
    (*(code *)*puVar2)(plVar7,puVar2[1]);
    *puVar6 = 0;
    native_sub_4326e0(puVar6,0);
  }
  *(undefined1 *)(lVar1 + 0x30) = 0;
  if (((*(long *)(lVar1 + 0x28) != 0) &&
      (lVar1 = native_UnityEngine_Component__get_transform_8da62c(*(long *)(lVar1 + 0x28),0),
      lVar1 != 0)) &&
     (lVar1 = native_UnityEngine_Component__get_gameObject_8da66c(lVar1,0), lVar1 != 0)) {
    if (pcRam0000000001340bf8 == (code *)0x0) {
      pcRam0000000001340bf8 = (code *)native_sub_4326f0(&UNK_00e2da67);
    }
                    /* WARNING: Could not recover jumptable at 0x008de6e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*pcRam0000000001340bf8)(lVar1,0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* MG_BlocksEngine2.UI.BE2_UI_BlockContextMenu$$.ctor @ 0x61ac60
 * void MG_BlocksEngine2_UI_BE2_UI_BlockContextMenu___ctor (MG_BlocksEngine2_UI_BE2_UI_BlockContextMenu_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MG_BlocksEngine2.UI.BE2_UI_BlockContextMenu$$.ctor
   void MG_BlocksEngine2_UI_BE2_UI_BlockContextMenu___ctor
   (MG_BlocksEngine2_UI_BE2_UI_BlockContextMenu_o* __this, const MethodInfo* method); */

undefined1  [16] native_MG_BlocksEngine2_UI_BE2_UI_BlockContextMenu___ctor_61ac60(ulong param_1)

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


