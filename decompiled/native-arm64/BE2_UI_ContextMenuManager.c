/* ARM64 IL2CPP native pseudocode from Ghidra.
 * Recovered implementation, not original C# source.
 * Function boundaries follow the IL2CPP method address table. */


/* MG_BlocksEngine2.UI.BE2_UI_ContextMenuManager$$get_instance @ 0xdc6a44
 * MG_BlocksEngine2_UI_BE2_UI_ContextMenuManager_o* MG_BlocksEngine2_UI_BE2_UI_ContextMenuManager__get_instance (const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MG_BlocksEngine2.UI.BE2_UI_ContextMenuManager$$get_instance
   MG_BlocksEngine2_UI_BE2_UI_ContextMenuManager_o*
   MG_BlocksEngine2_UI_BE2_UI_ContextMenuManager__get_instance (const MethodInfo* method); */

undefined8 native_MG_BlocksEngine2_UI_BE2_UI_ContextMenuManager__get_instance_dc6a44(void)

{
  ulong uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  
  if ((bRam0000000001346dc9 & 1) == 0) {
    native_sub_43273c(&MG_BlocksEngine2_UI_BE2_UI_ContextMenuManager_TypeInfo_12d3a80);
    native_sub_43273c(&
                      Method_UnityEngine_Object_FindObjectOfType_BE2_UI_ContextMenuManager____12e5a20
                     );
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    bRam0000000001346dc9 = 1;
  }
  uVar3 = **(undefined8 **)(_MG_BlocksEngine2_UI_BE2_UI_ContextMenuManager_TypeInfo_12d3a80 + 0xb8);
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
                      (
                      _Method_UnityEngine_Object_FindObjectOfType_BE2_UI_ContextMenuManager____12e5a20
                      );
    puVar2 = *(undefined8 **)
              (_MG_BlocksEngine2_UI_BE2_UI_ContextMenuManager_TypeInfo_12d3a80 + 0xb8);
    *puVar2 = uVar3;
    native_sub_4326e0(puVar2,uVar3);
  }
  return **(undefined8 **)(_MG_BlocksEngine2_UI_BE2_UI_ContextMenuManager_TypeInfo_12d3a80 + 0xb8);
}



/* MG_BlocksEngine2.UI.BE2_UI_ContextMenuManager$$set_instance @ 0xdc6b30
 * void MG_BlocksEngine2_UI_BE2_UI_ContextMenuManager__set_instance (MG_BlocksEngine2_UI_BE2_UI_ContextMenuManager_o* value, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MG_BlocksEngine2.UI.BE2_UI_ContextMenuManager$$set_instance
   void MG_BlocksEngine2_UI_BE2_UI_ContextMenuManager__set_instance
   (MG_BlocksEngine2_UI_BE2_UI_ContextMenuManager_o* value, const MethodInfo* method); */

void native_MG_BlocksEngine2_UI_BE2_UI_ContextMenuManager__set_instance_dc6b30(undefined8 param_1)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  
  if ((bRam0000000001346dca & 1) == 0) {
    native_sub_43273c(&MG_BlocksEngine2_UI_BE2_UI_ContextMenuManager_TypeInfo_12d3a80);
    bRam0000000001346dca = 1;
  }
  puVar4 = *(undefined8 **)(_MG_BlocksEngine2_UI_BE2_UI_ContextMenuManager_TypeInfo_12d3a80 + 0xb8);
  *puVar4 = param_1;
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



/* MG_BlocksEngine2.UI.BE2_UI_ContextMenuManager$$Start @ 0xdc6b84
 * void MG_BlocksEngine2_UI_BE2_UI_ContextMenuManager__Start (MG_BlocksEngine2_UI_BE2_UI_ContextMenuManager_o* __this, const MethodInfo* method); */

/* WARNING: Removing unreachable block (ram,0x00dc6e60) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MG_BlocksEngine2.UI.BE2_UI_ContextMenuManager$$Start
   void MG_BlocksEngine2_UI_BE2_UI_ContextMenuManager__Start
   (MG_BlocksEngine2_UI_BE2_UI_ContextMenuManager_o* __this, const MethodInfo* method); */

void native_MG_BlocksEngine2_UI_BE2_UI_ContextMenuManager__Start_dc6b84(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  long *plVar3;
  undefined8 *puVar4;
  long *plVar5;
  ulong uVar6;
  int *piVar7;
  undefined8 *puVar8;
  
  if ((bRam0000000001346dcb & 1) == 0) {
    native_sub_43273c(&
                      Method_MG_BlocksEngine2_Utils_BE2_ArrayUtils_Add_I_BE2_UI_ContextMenu____12e20c0
                     );
    native_sub_43273c(&Method_UnityEngine_Component_GetComponent_I_BE2_UI_ContextMenu____12e2a70);
    native_sub_43273c(&System_IDisposable_TypeInfo_12d4b00);
    native_sub_43273c(&System_Collections_IEnumerator_TypeInfo_12d4b80);
    native_sub_43273c(&MG_BlocksEngine2_UI_I_BE2_UI_ContextMenu___TypeInfo_12d3248);
    native_sub_43273c(&UnityEngine_Transform_TypeInfo_12d6300);
    bRam0000000001346dcb = 1;
  }
  uVar1 = native_sub_432750(_MG_BlocksEngine2_UI_I_BE2_UI_ContextMenu___TypeInfo_12d3248,0);
  puVar8 = (undefined8 *)(param_1 + 0x18);
  *puVar8 = uVar1;
  native_sub_4326e0(puVar8,uVar1);
  lVar2 = native_UnityEngine_Component__get_transform_8da62c(param_1,0);
  if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    native_sub_432810();
  }
  plVar3 = (long *)native_UnityEngine_Transform__GetEnumerator_772e40(lVar2,0);
  if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    native_sub_432810();
  }
  do {
    lVar2 = *plVar3;
    if ((ulong)*(ushort *)(lVar2 + 0x12a) != 0) {
      uVar6 = 0;
      piVar7 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == _System_Collections_IEnumerator_TypeInfo_12d4b80) {
          puVar4 = (undefined8 *)(lVar2 + (long)*piVar7 * 0x10 + 0x138);
          goto LAB_00dc6cbc;
        }
        uVar6 = uVar6 + 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 < *(ushort *)(lVar2 + 0x12a));
    }
    puVar4 = (undefined8 *)
             native_sub_3c9b34(plVar3,_System_Collections_IEnumerator_TypeInfo_12d4b80,0);
LAB_00dc6cbc:
    uVar6 = (*(code *)*puVar4)(plVar3,puVar4[1]);
    if ((uVar6 & 1) == 0) {
      plVar3 = (long *)native_sub_4327f8(plVar3,_System_IDisposable_TypeInfo_12d4b00);
      if (plVar3 == (long *)0x0) goto LAB_00dc6e10;
      lVar2 = *plVar3;
      if ((ulong)*(ushort *)(lVar2 + 0x12a) == 0) goto LAB_00dc6de8;
      uVar6 = 0;
      piVar7 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
      break;
    }
    lVar2 = *plVar3;
    if ((ulong)*(ushort *)(lVar2 + 0x12a) != 0) {
      uVar6 = 0;
      piVar7 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == _System_Collections_IEnumerator_TypeInfo_12d4b80) {
          puVar4 = (undefined8 *)(lVar2 + (long)(*piVar7 + 1) * 0x10 + 0x138);
          goto LAB_00dc6d24;
        }
        uVar6 = uVar6 + 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 < *(ushort *)(lVar2 + 0x12a));
    }
    puVar4 = (undefined8 *)
             native_sub_3c9b34(plVar3,_System_Collections_IEnumerator_TypeInfo_12d4b80,1);
LAB_00dc6d24:
    plVar5 = (long *)(*(code *)*puVar4)(plVar3,puVar4[1]);
    if (plVar5 == (long *)0x0) goto LAB_00dc6e54;
    if ((*(byte *)(*plVar5 + 300) < *(byte *)(_UnityEngine_Transform_TypeInfo_12d6300 + 300)) ||
       (*(long *)(*(long *)(*plVar5 + 200) +
                  (ulong)*(byte *)(_UnityEngine_Transform_TypeInfo_12d6300 + 300) * 8 + -8) !=
        _UnityEngine_Transform_TypeInfo_12d6300)) {
      native_sub_432b04();
LAB_00dc6e54:
                    /* WARNING: Subroutine does not return */
      native_sub_432810();
    }
    lVar2 = native_UnityEngine_Component__GetComponent_ActiveAnimation__49daec
                      (plVar5,
                       _Method_UnityEngine_Component_GetComponent_I_BE2_UI_ContextMenu____12e2a70);
    if (lVar2 != 0) {
      native_MG_BlocksEngine2_Utils_BE2_ArrayUtils__Add_GraphicRaycaster__49b428
                (puVar8,lVar2,
                 _Method_MG_BlocksEngine2_Utils_BE2_ArrayUtils_Add_I_BE2_UI_ContextMenu____12e20c0);
    }
  } while( true );
  while( true ) {
    uVar6 = uVar6 + 1;
    piVar7 = piVar7 + 4;
    if (*(ushort *)(lVar2 + 0x12a) <= uVar6) break;
    if (*(long *)(piVar7 + -2) == _System_IDisposable_TypeInfo_12d4b00) {
      puVar8 = (undefined8 *)(lVar2 + (long)*piVar7 * 0x10 + 0x138);
      goto LAB_00dc6e04;
    }
  }
LAB_00dc6de8:
  puVar8 = (undefined8 *)native_sub_3c9b34(plVar3,_System_IDisposable_TypeInfo_12d4b00,0);
LAB_00dc6e04:
  (*(code *)*puVar8)(plVar3,puVar8[1]);
LAB_00dc6e10:
  native_MG_BlocksEngine2_UI_BE2_UI_ContextMenuManager__CloseContextMenu_dc6ea0(param_1);
  return;
}



/* MG_BlocksEngine2.UI.BE2_UI_ContextMenuManager$$CloseContextMenu @ 0xdc6ea0
 * void MG_BlocksEngine2_UI_BE2_UI_ContextMenuManager__CloseContextMenu (MG_BlocksEngine2_UI_BE2_UI_ContextMenuManager_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MG_BlocksEngine2.UI.BE2_UI_ContextMenuManager$$CloseContextMenu
   void MG_BlocksEngine2_UI_BE2_UI_ContextMenuManager__CloseContextMenu
   (MG_BlocksEngine2_UI_BE2_UI_ContextMenuManager_o* __this, const MethodInfo* method); */

void native_MG_BlocksEngine2_UI_BE2_UI_ContextMenuManager__CloseContextMenu_dc6ea0(long param_1)

{
  undefined8 *puVar1;
  long lVar2;
  ulong uVar3;
  int *piVar4;
  undefined8 *puVar5;
  long *plVar6;
  
  if ((bRam0000000001346dcc & 1) == 0) {
    native_sub_43273c(&MG_BlocksEngine2_UI_I_BE2_UI_ContextMenu_TypeInfo_12d4e58);
    bRam0000000001346dcc = 1;
  }
  if (*(char *)(param_1 + 0x30) == '\0') {
    return;
  }
  puVar5 = (undefined8 *)(param_1 + 0x20);
  plVar6 = (long *)*puVar5;
  if (plVar6 != (long *)0x0) {
    lVar2 = *plVar6;
    if ((ulong)*(ushort *)(lVar2 + 0x12a) != 0) {
      uVar3 = 0;
      piVar4 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
      do {
        if (*(long *)(piVar4 + -2) == _MG_BlocksEngine2_UI_I_BE2_UI_ContextMenu_TypeInfo_12d4e58) {
          puVar1 = (undefined8 *)(lVar2 + (long)(*piVar4 + 2) * 0x10 + 0x138);
          goto LAB_00dc6f58;
        }
        uVar3 = uVar3 + 1;
        piVar4 = piVar4 + 4;
      } while (uVar3 < *(ushort *)(lVar2 + 0x12a));
    }
    puVar1 = (undefined8 *)
             native_sub_3c9b34(plVar6,_MG_BlocksEngine2_UI_I_BE2_UI_ContextMenu_TypeInfo_12d4e58,2);
LAB_00dc6f58:
    (*(code *)*puVar1)(plVar6,puVar1[1]);
    *puVar5 = 0;
    native_sub_4326e0(puVar5,0);
  }
  *(undefined1 *)(param_1 + 0x30) = 0;
  if (((*(long *)(param_1 + 0x28) != 0) &&
      (lVar2 = native_UnityEngine_Component__get_transform_8da62c(*(long *)(param_1 + 0x28),0),
      lVar2 != 0)) &&
     (lVar2 = native_UnityEngine_Component__get_gameObject_8da66c(lVar2,0), lVar2 != 0)) {
    if (pcRam0000000001340bf8 == (code *)0x0) {
      pcRam0000000001340bf8 = (code *)native_sub_4326f0(&UNK_00e2da67);
    }
                    /* WARNING: Could not recover jumptable at 0x008de6e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*pcRam0000000001340bf8)(lVar2,0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* MG_BlocksEngine2.UI.BE2_UI_ContextMenuManager$$.ctor @ 0xdc6fb4
 * void MG_BlocksEngine2_UI_BE2_UI_ContextMenuManager___ctor (MG_BlocksEngine2_UI_BE2_UI_ContextMenuManager_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MG_BlocksEngine2.UI.BE2_UI_ContextMenuManager$$.ctor
   void MG_BlocksEngine2_UI_BE2_UI_ContextMenuManager___ctor
   (MG_BlocksEngine2_UI_BE2_UI_ContextMenuManager_o* __this, const MethodInfo* method); */

undefined1  [16] native_MG_BlocksEngine2_UI_BE2_UI_ContextMenuManager___ctor_dc6fb4(ulong param_1)

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


