/* ARM64 IL2CPP native pseudocode from Ghidra.
 * Recovered implementation, not original C# source.
 * Function boundaries follow the IL2CPP method address table. */


/* MG_BlocksEngine2.UI.BE2_UI_PanelCancel$$OnPointerDown @ 0xdc9fc8
 * void MG_BlocksEngine2_UI_BE2_UI_PanelCancel__OnPointerDown (MG_BlocksEngine2_UI_BE2_UI_PanelCancel_o* __this, UnityEngine_EventSystems_PointerEventData_o* eventData, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MG_BlocksEngine2.UI.BE2_UI_PanelCancel$$OnPointerDown
   void MG_BlocksEngine2_UI_BE2_UI_PanelCancel__OnPointerDown
   (MG_BlocksEngine2_UI_BE2_UI_PanelCancel_o* __this, UnityEngine_EventSystems_PointerEventData_o*
   eventData, const MethodInfo* method); */

void native_MG_BlocksEngine2_UI_BE2_UI_PanelCancel__OnPointerDown_dc9fc8(void)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  int *piVar5;
  undefined8 *puVar6;
  long *plVar7;
  
  lVar2 = native_MG_BlocksEngine2_UI_BE2_UI_ContextMenuManager__get_instance_dc6a44();
  if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    native_sub_432810();
  }
  if ((bRam0000000001346dcc & 1) == 0) {
    native_sub_43273c(&MG_BlocksEngine2_UI_I_BE2_UI_ContextMenu_TypeInfo_12d4e58);
    bRam0000000001346dcc = 1;
  }
  if (*(char *)(lVar2 + 0x30) == '\0') {
    return;
  }
  puVar6 = (undefined8 *)(lVar2 + 0x20);
  plVar7 = (long *)*puVar6;
  if (plVar7 != (long *)0x0) {
    lVar3 = *plVar7;
    if ((ulong)*(ushort *)(lVar3 + 0x12a) != 0) {
      uVar4 = 0;
      piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
        if (*(long *)(piVar5 + -2) == _MG_BlocksEngine2_UI_I_BE2_UI_ContextMenu_TypeInfo_12d4e58) {
          puVar1 = (undefined8 *)(lVar3 + (long)(*piVar5 + 2) * 0x10 + 0x138);
          goto LAB_00dc6f58;
        }
        uVar4 = uVar4 + 1;
        piVar5 = piVar5 + 4;
      } while (uVar4 < *(ushort *)(lVar3 + 0x12a));
    }
    puVar1 = (undefined8 *)
             native_sub_3c9b34(plVar7,_MG_BlocksEngine2_UI_I_BE2_UI_ContextMenu_TypeInfo_12d4e58,2);
LAB_00dc6f58:
    (*(code *)*puVar1)(plVar7,puVar1[1]);
    *puVar6 = 0;
    native_sub_4326e0(puVar6,0);
  }
  *(undefined1 *)(lVar2 + 0x30) = 0;
  if (((*(long *)(lVar2 + 0x28) != 0) &&
      (lVar2 = native_UnityEngine_Component__get_transform_8da62c(*(long *)(lVar2 + 0x28),0),
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



/* MG_BlocksEngine2.UI.BE2_UI_PanelCancel$$.ctor @ 0xdc9fe4
 * void MG_BlocksEngine2_UI_BE2_UI_PanelCancel___ctor (MG_BlocksEngine2_UI_BE2_UI_PanelCancel_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MG_BlocksEngine2.UI.BE2_UI_PanelCancel$$.ctor
   void MG_BlocksEngine2_UI_BE2_UI_PanelCancel___ctor (MG_BlocksEngine2_UI_BE2_UI_PanelCancel_o*
   __this, const MethodInfo* method); */

undefined1  [16] native_MG_BlocksEngine2_UI_BE2_UI_PanelCancel___ctor_dc9fe4(ulong param_1)

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


