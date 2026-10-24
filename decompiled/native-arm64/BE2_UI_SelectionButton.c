/* ARM64 IL2CPP native pseudocode from Ghidra.
 * Recovered implementation, not original C# source.
 * Function boundaries follow the IL2CPP method address table. */


/* MG_BlocksEngine2.UI.BE2_UI_SelectionButton$$OnValidate @ 0xdcb9a0
 * void MG_BlocksEngine2_UI_BE2_UI_SelectionButton__OnValidate (MG_BlocksEngine2_UI_BE2_UI_SelectionButton_o* __this, const MethodInfo* method); */

/* WARNING: Removing unreachable block (ram,0x00dcbd34) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MG_BlocksEngine2.UI.BE2_UI_SelectionButton$$OnValidate
   void MG_BlocksEngine2_UI_BE2_UI_SelectionButton__OnValidate
   (MG_BlocksEngine2_UI_BE2_UI_SelectionButton_o* __this, const MethodInfo* method); */

void native_MG_BlocksEngine2_UI_BE2_UI_SelectionButton__OnValidate_dcb9a0(undefined8 param_1)

{
  uint uVar1;
  long lVar2;
  long *plVar3;
  undefined8 *puVar4;
  long *plVar5;
  undefined8 uVar6;
  long lVar7;
  ulong uVar8;
  int *piVar9;
  uint uVar10;
  
  if ((bRam0000000001346def & 1) == 0) {
    native_sub_43273c(&Method_UnityEngine_Component_GetComponent_Image____12e2a78);
    native_sub_43273c(&System_IDisposable_TypeInfo_12d4b00);
    native_sub_43273c(&System_Collections_IEnumerator_TypeInfo_12d4b80);
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    native_sub_43273c(&UnityEngine_Transform_TypeInfo_12d6300);
    bRam0000000001346def = 1;
  }
  lVar2 = native_UnityEngine_Component__get_transform_8da62c(param_1,0);
  if (lVar2 != 0) {
    plVar3 = (long *)native_UnityEngine_Transform__GetEnumerator_772e40(lVar2,0);
    if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      native_sub_432810();
    }
    do {
      lVar2 = *plVar3;
      if ((ulong)*(ushort *)(lVar2 + 0x12a) != 0) {
        uVar8 = 0;
        piVar9 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
        do {
          if (*(long *)(piVar9 + -2) == _System_Collections_IEnumerator_TypeInfo_12d4b80) {
            puVar4 = (undefined8 *)(lVar2 + (long)*piVar9 * 0x10 + 0x138);
            goto LAB_00dcbaa8;
          }
          uVar8 = uVar8 + 1;
          piVar9 = piVar9 + 4;
        } while (uVar8 < *(ushort *)(lVar2 + 0x12a));
      }
      puVar4 = (undefined8 *)
               native_sub_3c9b34(plVar3,_System_Collections_IEnumerator_TypeInfo_12d4b80,0);
LAB_00dcbaa8:
      uVar8 = (*(code *)*puVar4)(plVar3,puVar4[1]);
      if ((uVar8 & 1) == 0) {
        plVar3 = (long *)native_sub_4327f8(plVar3,_System_IDisposable_TypeInfo_12d4b00);
        if (plVar3 == (long *)0x0) goto LAB_00dcbc40;
        lVar2 = *plVar3;
        if ((ulong)*(ushort *)(lVar2 + 0x12a) == 0) goto LAB_00dcbc18;
        uVar8 = 0;
        piVar9 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
        goto LAB_00dcbbfc;
      }
      lVar2 = *plVar3;
      if ((ulong)*(ushort *)(lVar2 + 0x12a) != 0) {
        uVar8 = 0;
        piVar9 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
        do {
          if (*(long *)(piVar9 + -2) == _System_Collections_IEnumerator_TypeInfo_12d4b80) {
            puVar4 = (undefined8 *)(lVar2 + (long)(*piVar9 + 1) * 0x10 + 0x138);
            goto LAB_00dcbb10;
          }
          uVar8 = uVar8 + 1;
          piVar9 = piVar9 + 4;
        } while (uVar8 < *(ushort *)(lVar2 + 0x12a));
      }
      puVar4 = (undefined8 *)
               native_sub_3c9b34(plVar3,_System_Collections_IEnumerator_TypeInfo_12d4b80,1);
LAB_00dcbb10:
      plVar5 = (long *)(*(code *)*puVar4)(plVar3,puVar4[1]);
      if (plVar5 == (long *)0x0) {
LAB_00dcbd18:
                    /* WARNING: Subroutine does not return */
        native_sub_432810();
      }
      if ((*(byte *)(*plVar5 + 300) < *(byte *)(_UnityEngine_Transform_TypeInfo_12d6300 + 300)) ||
         (*(long *)(*(long *)(*plVar5 + 200) +
                    (ulong)*(byte *)(_UnityEngine_Transform_TypeInfo_12d6300 + 300) * 8 + -8) !=
          _UnityEngine_Transform_TypeInfo_12d6300)) {
        native_sub_432b04(plVar5);
        goto LAB_00dcbd18;
      }
      uVar6 = native_UnityEngine_Component__GetComponent_ActiveAnimation__49daec
                        (plVar5,_Method_UnityEngine_Component_GetComponent_Image____12e2a78);
      if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
        native_sub_4327ec();
      }
      uVar8 = native_UnityEngine_Object__op_Implicit_8e1b98(uVar6,0);
      if ((uVar8 & 1) != 0) {
        plVar5 = (long *)native_UnityEngine_Component__GetComponent_ActiveAnimation__49daec
                                   (plVar5,
                                    _Method_UnityEngine_Component_GetComponent_Image____12e2a78);
        if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          native_sub_432810();
        }
        (**(code **)(*plVar5 + 0x2c8))(plVar5,0,*(undefined8 *)(*plVar5 + 0x2d0));
      }
    } while( true );
  }
  goto LAB_00dcbd1c;
  while( true ) {
    uVar8 = uVar8 + 1;
    piVar9 = piVar9 + 4;
    if (*(ushort *)(lVar2 + 0x12a) <= uVar8) break;
LAB_00dcbbfc:
    if (*(long *)(piVar9 + -2) == _System_IDisposable_TypeInfo_12d4b00) {
      puVar4 = (undefined8 *)(lVar2 + (long)*piVar9 * 0x10 + 0x138);
      goto LAB_00dcbc34;
    }
  }
LAB_00dcbc18:
  puVar4 = (undefined8 *)native_sub_3c9b34(plVar3,_System_IDisposable_TypeInfo_12d4b00,0);
LAB_00dcbc34:
  (*(code *)*puVar4)(plVar3,puVar4[1]);
LAB_00dcbc40:
  lVar2 = native_UnityEngine_Component__get_transform_8da62c(param_1,0);
  if ((lVar2 != 0) &&
     (plVar3 = (long *)native_UnityEngine_Component__GetComponent_ActiveAnimation__49daec
                                 (lVar2,_Method_UnityEngine_Component_GetComponent_Image____12e2a78)
     , plVar3 != (long *)0x0)) {
    (**(code **)(*plVar3 + 0x2c8))(plVar3,1,*(undefined8 *)(*plVar3 + 0x2d0));
    uVar6 = native_UnityEngine_Component__get_transform_8da62c(param_1,0);
    lVar2 = native_MG_BlocksEngine2_Utils_BE2_Text__GetBE2TextsInChildren_61a388(uVar6,0);
    if (lVar2 != 0) {
      uVar1 = *(uint *)(lVar2 + 0x18);
      if (0 < (int)uVar1) {
        uVar10 = 0;
        do {
          if (uVar1 <= uVar10) {
            uVar6 = native_sub_43283c();
                    /* WARNING: Subroutine does not return */
            native_sub_4327dc(uVar6,0);
          }
          lVar7 = *(long *)(lVar2 + (long)(int)uVar10 * 8 + 0x20);
          if (lVar7 == 0) goto LAB_00dcbd1c;
          native_MG_BlocksEngine2_Utils_BE2_Text__set_raycastTarget_61a928(lVar7,0,0);
          uVar1 = *(uint *)(lVar2 + 0x18);
          uVar10 = uVar10 + 1;
        } while ((int)uVar10 < (int)uVar1);
      }
      return;
    }
  }
LAB_00dcbd1c:
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* MG_BlocksEngine2.UI.BE2_UI_SelectionButton$$Awake @ 0xdcbd80
 * void MG_BlocksEngine2_UI_BE2_UI_SelectionButton__Awake (MG_BlocksEngine2_UI_BE2_UI_SelectionButton_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MG_BlocksEngine2.UI.BE2_UI_SelectionButton$$Awake
   void MG_BlocksEngine2_UI_BE2_UI_SelectionButton__Awake
   (MG_BlocksEngine2_UI_BE2_UI_SelectionButton_o* __this, const MethodInfo* method); */

void native_MG_BlocksEngine2_UI_BE2_UI_SelectionButton__Awake_dcbd80(long param_1)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  undefined8 uVar4;
  
  if ((bRam0000000001346df0 & 1) == 0) {
    native_sub_43273c(&Method_UnityEngine_Component_GetComponent_Button____12e29a0);
    bRam0000000001346df0 = 1;
  }
  uVar4 = native_UnityEngine_Component__GetComponent_ActiveAnimation__49daec
                    (param_1,_Method_UnityEngine_Component_GetComponent_Button____12e29a0);
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



/* MG_BlocksEngine2.UI.BE2_UI_SelectionButton$$Start @ 0xdcbddc
 * void MG_BlocksEngine2_UI_BE2_UI_SelectionButton__Start (MG_BlocksEngine2_UI_BE2_UI_SelectionButton_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MG_BlocksEngine2.UI.BE2_UI_SelectionButton$$Start
   void MG_BlocksEngine2_UI_BE2_UI_SelectionButton__Start
   (MG_BlocksEngine2_UI_BE2_UI_SelectionButton_o* __this, const MethodInfo* method); */

void native_MG_BlocksEngine2_UI_BE2_UI_SelectionButton__Start_dcbddc(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  
  if ((bRam0000000001346df1 & 1) == 0) {
    native_sub_43273c(&Method_MG_BlocksEngine2_UI_BE2_UI_SelectionButton_ToggleSection___12e22f8);
    native_sub_43273c(&UnityEngine_Events_UnityAction_TypeInfo_12d65d0);
    bRam0000000001346df1 = 1;
  }
  uVar1 = native_MG_BlocksEngine2_UI_BE2_UI_BlocksSelectionViewer__get_Instance_dc60e0();
  *(undefined8 *)(param_1 + 0x20) = uVar1;
  native_sub_4326e0((undefined8 *)(param_1 + 0x20),uVar1);
  if (*(long *)(param_1 + 0x18) != 0) {
    lVar2 = *(long *)(*(long *)(param_1 + 0x18) + 0xf8);
    uVar1 = native_sub_432808(_UnityEngine_Events_UnityAction_TypeInfo_12d65d0);
    native_UnityEngine_Events_UnityAction___ctor_773130
              (uVar1,param_1,
               _Method_MG_BlocksEngine2_UI_BE2_UI_SelectionButton_ToggleSection___12e22f8,0);
    if (lVar2 != 0) {
      uVar1 = native_UnityEngine_Events_UnityEvent__GetDelegate_7734f8(uVar1,uVar1,0);
      lVar2 = *(long *)(lVar2 + 0x10);
      if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
        native_sub_432810();
      }
      if ((bRam0000000001340cbd & 1) == 0) {
        native_sub_43273c(&Method_System_Collections_Generic_List_BaseInvokableCall__Add___12dc5b0,
                          uVar1,0);
        bRam0000000001340cbd = 1;
      }
      if (*(long *)(lVar2 + 0x18) != 0) {
        native_System_Collections_Generic_List_int_____Add_d40c00
                  (*(long *)(lVar2 + 0x18),uVar1,
                   _Method_System_Collections_Generic_List_BaseInvokableCall__Add___12dc5b0);
        *(undefined1 *)(lVar2 + 0x28) = 1;
        return;
      }
                    /* WARNING: Subroutine does not return */
      native_sub_432810();
    }
  }
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* MG_BlocksEngine2.UI.BE2_UI_SelectionButton$$ToggleSection @ 0xdcbe90
 * void MG_BlocksEngine2_UI_BE2_UI_SelectionButton__ToggleSection (MG_BlocksEngine2_UI_BE2_UI_SelectionButton_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MG_BlocksEngine2.UI.BE2_UI_SelectionButton$$ToggleSection
   void MG_BlocksEngine2_UI_BE2_UI_SelectionButton__ToggleSection
   (MG_BlocksEngine2_UI_BE2_UI_SelectionButton_o* __this, const MethodInfo* method); */

void native_MG_BlocksEngine2_UI_BE2_UI_SelectionButton__ToggleSection_dcbe90(long param_1)

{
  long lVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uStack_78;
  undefined8 uStack_70;
  long lStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  long lStack_50;
  
  if ((bRam0000000001346df2 & 1) == 0) {
    native_sub_43273c(&
                      Method_System_Collections_Generic_List_Enumerator_BE2_UI_SelectionPanel__Dispose___12da3f0
                     );
    native_sub_43273c(&
                      Method_System_Collections_Generic_List_Enumerator_BE2_UI_SelectionPanel__MoveNext___12da3f8
                     );
    native_sub_43273c(&
                      Method_System_Collections_Generic_List_Enumerator_BE2_UI_SelectionPanel__get_Current___12da400
                     );
    native_sub_43273c(&
                      Method_System_Collections_Generic_List_BE2_UI_SelectionPanel__GetEnumerator___12dc518
                     );
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    bRam0000000001346df2 = 1;
  }
  uStack_58 = 0;
  lStack_50 = 0;
  uStack_60 = 0;
  if ((*(long *)(param_1 + 0x20) == 0) ||
     (lVar1 = *(long *)(*(long *)(param_1 + 0x20) + 0x18), lVar1 == 0)) {
                    /* WARNING: Subroutine does not return */
    native_sub_432810();
  }
  native_System_Collections_Generic_List_BE2_Op_FunctionLocalVariable___GetEnumerator_d414fc
            (&uStack_78,lVar1,
             _Method_System_Collections_Generic_List_BE2_UI_SelectionPanel__GetEnumerator___12dc518)
  ;
  lStack_50 = lStack_68;
  uStack_58 = uStack_70;
  uStack_60 = uStack_78;
  while( true ) {
    while( true ) {
      while( true ) {
        uVar2 = native_System_Collections_Generic_List_Enumerator_BE2_Op_FunctionLocalVariable___MoveNext_7e8f30
                          (&uStack_60,
                           _Method_System_Collections_Generic_List_Enumerator_BE2_UI_SelectionPanel__MoveNext___12da3f8
                          );
        lVar1 = lStack_50;
        if ((uVar2 & 1) == 0) {
          native_System_Collections_Generic_List_Enumerator_BE2_Op_FunctionLocalVariable___Dispose_7e8f2c
                    (&uStack_60,
                     _Method_System_Collections_Generic_List_Enumerator_BE2_UI_SelectionPanel__Dispose___12da3f0
                    );
          return;
        }
        uVar3 = *(undefined8 *)(param_1 + 0x28);
        if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
           (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
          native_sub_4327ec();
        }
        uVar2 = native_UnityEngine_Object__op_Implicit_8e1b98(uVar3,0);
        if ((uVar2 & 1) != 0) break;
        if (lVar1 == 0) {
                    /* WARNING: Subroutine does not return */
          native_sub_432810();
        }
        lVar1 = native_UnityEngine_Component__get_gameObject_8da66c(lVar1,0);
        if (lVar1 == 0) {
                    /* WARNING: Subroutine does not return */
          native_sub_432810();
        }
        native_UnityEngine_GameObject__SetActive_8de698(lVar1,1,0);
      }
      uVar3 = *(undefined8 *)(param_1 + 0x28);
      if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
        native_sub_4327ec();
      }
      uVar2 = native_UnityEngine_Object__op_Equality_8e9a3c(lVar1,uVar3,0);
      if ((uVar2 & 1) != 0) break;
      if (lVar1 == 0) {
                    /* WARNING: Subroutine does not return */
        native_sub_432810();
      }
      lVar1 = native_UnityEngine_Component__get_gameObject_8da66c(lVar1,0);
      if (lVar1 == 0) {
                    /* WARNING: Subroutine does not return */
        native_sub_432810();
      }
      native_UnityEngine_GameObject__SetActive_8de698(lVar1,0,0);
    }
    if (lVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      native_sub_432810();
    }
    lVar1 = native_UnityEngine_Component__get_gameObject_8da66c(lVar1,0);
    if (lVar1 == 0) break;
    native_UnityEngine_GameObject__SetActive_8de698(lVar1,1,0);
  }
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* MG_BlocksEngine2.UI.BE2_UI_SelectionButton$$.ctor @ 0xdcc0dc
 * void MG_BlocksEngine2_UI_BE2_UI_SelectionButton___ctor (MG_BlocksEngine2_UI_BE2_UI_SelectionButton_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MG_BlocksEngine2.UI.BE2_UI_SelectionButton$$.ctor
   void MG_BlocksEngine2_UI_BE2_UI_SelectionButton___ctor
   (MG_BlocksEngine2_UI_BE2_UI_SelectionButton_o* __this, const MethodInfo* method); */

undefined1  [16] native_MG_BlocksEngine2_UI_BE2_UI_SelectionButton___ctor_dcc0dc(ulong param_1)

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


