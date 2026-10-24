/* ARM64 IL2CPP native pseudocode from Ghidra.
 * Recovered implementation, not original C# source.
 * Function boundaries follow the IL2CPP method address table. */


/* MG_BlocksEngine2.UI.BE2_UI_ListItem$$Awake @ 0xdc8a74
 * void MG_BlocksEngine2_UI_BE2_UI_ListItem__Awake (MG_BlocksEngine2_UI_BE2_UI_ListItem_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MG_BlocksEngine2.UI.BE2_UI_ListItem$$Awake
   void MG_BlocksEngine2_UI_BE2_UI_ListItem__Awake (MG_BlocksEngine2_UI_BE2_UI_ListItem_o* __this,
   const MethodInfo* method); */

void native_MG_BlocksEngine2_UI_BE2_UI_ListItem__Awake_dc8a74(long param_1)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 *puVar6;
  
  if ((bRam0000000001346dd9 & 1) == 0) {
    native_sub_43273c(&
                      Method_UnityEngine_Component_GetComponentInParent_BE2_UI_VariableListViewer____12e2d20
                     );
    native_sub_43273c(&Method_UnityEngine_Component_GetComponent_Button____12e29a0);
    native_sub_43273c(&Method_UnityEngine_Component_GetComponent_TMP_InputField____12e2b28);
    bRam0000000001346dd9 = 1;
  }
  uVar4 = native_UnityEngine_Component__GetComponentInParent_BE2_Canvas__49dc70
                    (param_1,
                     _Method_UnityEngine_Component_GetComponentInParent_BE2_UI_VariableListViewer____12e2d20
                    );
  *(undefined8 *)(param_1 + 0x18) = uVar4;
  native_sub_4326e0(param_1 + 0x18);
  lVar5 = native_UnityEngine_Component__get_transform_8da62c(param_1,0);
  if ((lVar5 != 0) && (lVar5 = native_UnityEngine_Transform__GetChild_772ef0(lVar5,0,0), lVar5 != 0)
     ) {
    uVar4 = native_UnityEngine_Component__GetComponent_ActiveAnimation__49daec
                      (lVar5,_Method_UnityEngine_Component_GetComponent_TMP_InputField____12e2b28);
    *(undefined8 *)(param_1 + 0x20) = uVar4;
    native_sub_4326e0();
    lVar5 = native_UnityEngine_Component__get_transform_8da62c(param_1,0);
    if ((lVar5 != 0) &&
       (lVar5 = native_UnityEngine_Transform__GetChild_772ef0(lVar5,1,0), lVar5 != 0)) {
      uVar4 = native_UnityEngine_Component__GetComponent_ActiveAnimation__49daec
                        (lVar5,_Method_UnityEngine_Component_GetComponent_Button____12e29a0);
      puVar6 = (undefined8 *)(param_1 + 0x28);
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
  }
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* MG_BlocksEngine2.UI.BE2_UI_ListItem$$OnEnable @ 0xdc8b6c
 * void MG_BlocksEngine2_UI_BE2_UI_ListItem__OnEnable (MG_BlocksEngine2_UI_BE2_UI_ListItem_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MG_BlocksEngine2.UI.BE2_UI_ListItem$$OnEnable
   void MG_BlocksEngine2_UI_BE2_UI_ListItem__OnEnable (MG_BlocksEngine2_UI_BE2_UI_ListItem_o*
   __this, const MethodInfo* method); */

void native_MG_BlocksEngine2_UI_BE2_UI_ListItem__OnEnable_dc8b6c(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  
  if ((bRam0000000001346dda & 1) == 0) {
    native_sub_43273c(&Method_MG_BlocksEngine2_UI_BE2_UI_ListItem_RemoveItem___12e22e0);
    native_sub_43273c(&Method_MG_BlocksEngine2_UI_BE2_UI_ListItem__OnEnable_b__4_0___12e22d8);
    native_sub_43273c(&Method_UnityEngine_Events_UnityAction_string___ctor___12de3e0);
    native_sub_43273c(&UnityEngine_Events_UnityAction_string__TypeInfo_12d2f68);
    native_sub_43273c(&UnityEngine_Events_UnityAction_TypeInfo_12d65d0);
    native_sub_43273c(&Method_UnityEngine_Events_UnityEvent_string__AddListener___12de4e8);
    bRam0000000001346dda = 1;
  }
  if (*(long *)(param_1 + 0x20) != 0) {
    lVar2 = *(long *)(*(long *)(param_1 + 0x20) + 0x1a8);
    uVar1 = native_sub_432808(_UnityEngine_Events_UnityAction_string__TypeInfo_12d2f68);
    native_UnityEngine_Events_UnityAction_List_IEventSystemHandler_____ctor_89b93c
              (uVar1,param_1,_Method_MG_BlocksEngine2_UI_BE2_UI_ListItem__OnEnable_b__4_0___12e22d8,
               _Method_UnityEngine_Events_UnityAction_string___ctor___12de3e0);
    if (lVar2 != 0) {
      native_UnityEngine_Events_UnityEvent_I_BE2_Block___AddListener_89fe38
                (lVar2,uVar1,_Method_UnityEngine_Events_UnityEvent_string__AddListener___12de4e8);
      if (*(long *)(param_1 + 0x28) != 0) {
        lVar2 = *(long *)(*(long *)(param_1 + 0x28) + 0xf8);
        uVar1 = native_sub_432808(_UnityEngine_Events_UnityAction_TypeInfo_12d65d0);
        native_UnityEngine_Events_UnityAction___ctor_773130
                  (uVar1,param_1,_Method_MG_BlocksEngine2_UI_BE2_UI_ListItem_RemoveItem___12e22e0,0)
        ;
        if (lVar2 != 0) {
          uVar1 = native_UnityEngine_Events_UnityEvent__GetDelegate_7734f8(uVar1,uVar1,0);
          lVar2 = *(long *)(lVar2 + 0x10);
          if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
            native_sub_432810();
          }
          if ((bRam0000000001340cbd & 1) == 0) {
            native_sub_43273c(&
                              Method_System_Collections_Generic_List_BaseInvokableCall__Add___12dc5b0
                              ,uVar1,0);
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
    }
  }
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* MG_BlocksEngine2.UI.BE2_UI_ListItem$$OnDisable @ 0xdc8c94
 * void MG_BlocksEngine2_UI_BE2_UI_ListItem__OnDisable (MG_BlocksEngine2_UI_BE2_UI_ListItem_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MG_BlocksEngine2.UI.BE2_UI_ListItem$$OnDisable
   void MG_BlocksEngine2_UI_BE2_UI_ListItem__OnDisable (MG_BlocksEngine2_UI_BE2_UI_ListItem_o*
   __this, const MethodInfo* method); */

void native_MG_BlocksEngine2_UI_BE2_UI_ListItem__OnDisable_dc8c94(long param_1)

{
  long lVar1;
  
  if ((*(long *)(param_1 + 0x20) != 0) &&
     (lVar1 = *(long *)(*(long *)(param_1 + 0x20) + 0x1a8), lVar1 != 0)) {
    native_UnityEngine_Events_UnityEventBase__RemoveAllListeners_774038(lVar1,0);
    if ((*(long *)(param_1 + 0x28) != 0) &&
       (lVar1 = *(long *)(*(long *)(param_1 + 0x28) + 0xf8), lVar1 != 0)) {
      lVar1 = *(long *)(lVar1 + 0x10);
      if (lVar1 == 0) {
                    /* WARNING: Subroutine does not return */
        native_sub_432810(0,0);
      }
      if ((bRam0000000001340cbf & 1) == 0) {
        native_sub_43273c(&Method_System_Collections_Generic_List_BaseInvokableCall__Clear___12dc5c0
                          ,0);
        bRam0000000001340cbf = 1;
      }
      if (*(long *)(lVar1 + 0x18) != 0) {
        native_System_Collections_Generic_List_Action___Clear_d40e80
                  (*(long *)(lVar1 + 0x18),
                   _Method_System_Collections_Generic_List_BaseInvokableCall__Clear___12dc5c0);
        *(undefined1 *)(lVar1 + 0x28) = 1;
        return;
      }
                    /* WARNING: Subroutine does not return */
      native_sub_432810();
    }
  }
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* MG_BlocksEngine2.UI.BE2_UI_ListItem$$Start @ 0xdc8ce0
 * void MG_BlocksEngine2_UI_BE2_UI_ListItem__Start (MG_BlocksEngine2_UI_BE2_UI_ListItem_o* __this, const MethodInfo* method); */

/* MG_BlocksEngine2.UI.BE2_UI_ListItem$$Start
   void MG_BlocksEngine2_UI_BE2_UI_ListItem__Start (MG_BlocksEngine2_UI_BE2_UI_ListItem_o* __this,
   const MethodInfo* method); */

void native_MG_BlocksEngine2_UI_BE2_UI_ListItem__Start_dc8ce0(void)

{
  return;
}



/* MG_BlocksEngine2.UI.BE2_UI_ListItem$$Update @ 0xdc8ce4
 * void MG_BlocksEngine2_UI_BE2_UI_ListItem__Update (MG_BlocksEngine2_UI_BE2_UI_ListItem_o* __this, const MethodInfo* method); */

/* MG_BlocksEngine2.UI.BE2_UI_ListItem$$Update
   void MG_BlocksEngine2_UI_BE2_UI_ListItem__Update (MG_BlocksEngine2_UI_BE2_UI_ListItem_o* __this,
   const MethodInfo* method); */

void native_MG_BlocksEngine2_UI_BE2_UI_ListItem__Update_dc8ce4(void)

{
  return;
}



/* MG_BlocksEngine2.UI.BE2_UI_ListItem$$RemoveItem @ 0xdc8ce8
 * void MG_BlocksEngine2_UI_BE2_UI_ListItem__RemoveItem (MG_BlocksEngine2_UI_BE2_UI_ListItem_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MG_BlocksEngine2.UI.BE2_UI_ListItem$$RemoveItem
   void MG_BlocksEngine2_UI_BE2_UI_ListItem__RemoveItem (MG_BlocksEngine2_UI_BE2_UI_ListItem_o*
   __this, const MethodInfo* method); */

void native_MG_BlocksEngine2_UI_BE2_UI_ListItem__RemoveItem_dc8ce8(long param_1)

{
  undefined4 uVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  
  if ((bRam0000000001346ddb & 1) == 0) {
    native_sub_43273c(&MG_BlocksEngine2_Environment_BE2_VariablesListManager_TypeInfo_12d3a88);
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    bRam0000000001346ddb = 1;
  }
  if (*(long *)(param_1 + 0x18) != 0) {
    uVar4 = *(undefined8 *)(*(long *)(param_1 + 0x18) + 0x18);
    lVar3 = **(long **)(_MG_BlocksEngine2_Environment_BE2_VariablesListManager_TypeInfo_12d3a88 +
                       0xb8);
    lVar2 = native_UnityEngine_Component__get_transform_8da62c(param_1,0);
    if ((lVar2 != 0) &&
       (uVar1 = native_UnityEngine_Transform__GetSiblingIndex_772b74(lVar2,0), lVar3 != 0)) {
      native_MG_BlocksEngine2_Environment_BE2_VariablesListManager__RemoveListItem_dc8dec
                (lVar3,uVar4,uVar1);
      lVar2 = native_UnityEngine_Component__get_gameObject_8da66c(param_1,0);
      if (lVar2 != 0) {
        native_UnityEngine_GameObject__SetActive_8de698(lVar2,0,0);
        lVar2 = native_MG_BlocksEngine2_UI_BE2_UI_BlocksSelectionViewer__get_Instance_dc60e0();
        if (lVar2 != 0) {
          native_MG_BlocksEngine2_UI_BE2_UI_BlocksSelectionViewer__ForceRebuildLayout_dc69d0();
          uVar4 = native_UnityEngine_Component__get_gameObject_8da66c(param_1,0);
          if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
             (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
            native_sub_4327ec(_UnityEngine_Object_TypeInfo_12d54e0);
          }
          if ((bRam0000000001341048 & 1) == 0) {
            native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0,0);
            bRam0000000001341048 = 1;
          }
          if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
             (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
            native_sub_4327ec();
          }
          if (pcRam0000000001341040 == (code *)0x0) {
            pcRam0000000001341040 = (code *)native_sub_4326f0(&UNK_00e2f7cf);
          }
                    /* WARNING: Could not recover jumptable at 0x008ea5f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*pcRam0000000001341040)(0,uVar4);
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* MG_BlocksEngine2.UI.BE2_UI_ListItem$$.ctor @ 0xdc8f18
 * void MG_BlocksEngine2_UI_BE2_UI_ListItem___ctor (MG_BlocksEngine2_UI_BE2_UI_ListItem_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MG_BlocksEngine2.UI.BE2_UI_ListItem$$.ctor
   void MG_BlocksEngine2_UI_BE2_UI_ListItem___ctor (MG_BlocksEngine2_UI_BE2_UI_ListItem_o* __this,
   const MethodInfo* method); */

undefined1  [16] native_MG_BlocksEngine2_UI_BE2_UI_ListItem___ctor_dc8f18(ulong param_1)

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



/* MG_BlocksEngine2.UI.BE2_UI_ListItem$$<OnEnable>b__4_0 @ 0xdc8f20
 * void MG_BlocksEngine2_UI_BE2_UI_ListItem___OnEnable_b__4_0 (MG_BlocksEngine2_UI_BE2_UI_ListItem_o* __this, System_String_o* _p0_, const MethodInfo* method); */

/* WARNING: Removing unreachable block (ram,0x00dc929c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MG_BlocksEngine2.UI.BE2_UI_ListItem$$<OnEnable>b__4_0
   void MG_BlocksEngine2_UI_BE2_UI_ListItem___OnEnable_b__4_0
   (MG_BlocksEngine2_UI_BE2_UI_ListItem_o* __this, System_String_o* _p0_, const MethodInfo* method);
    */

void native_MG_BlocksEngine2_UI_BE2_UI_ListItem___OnEnable_b__4_0_dc8f20(long param_1)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  undefined8 *puVar4;
  long *plVar5;
  long lVar6;
  ulong uVar7;
  int *piVar8;
  
  lVar1 = *(long *)(param_1 + 0x18);
  if (lVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    native_sub_432810();
  }
  if ((bRam0000000001346dfa & 1) == 0) {
    native_sub_43273c(&MG_BlocksEngine2_Environment_BE2_VariablesListManager_TypeInfo_12d3a88);
    native_sub_43273c(&Method_UnityEngine_Component_GetComponent_BE2_UI_ListItem____12e2968);
    native_sub_43273c(&System_IDisposable_TypeInfo_12d4b00);
    native_sub_43273c(&System_Collections_IEnumerator_TypeInfo_12d4b80);
    native_sub_43273c(&Method_System_Collections_Generic_List_string__Add___12dcea0);
    native_sub_43273c(&Method_System_Collections_Generic_List_string___ctor___12dce88);
    native_sub_43273c(&System_Collections_Generic_List_string__TypeInfo_12d2b60);
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    native_sub_43273c(&UnityEngine_Transform_TypeInfo_12d6300);
    bRam0000000001346dfa = 1;
  }
  lVar2 = native_sub_432808(_System_Collections_Generic_List_string__TypeInfo_12d2b60);
  native_System_Collections_Generic_List_XmlEventCache_XmlEvent______ctor_d3ff44
            (lVar2,_Method_System_Collections_Generic_List_string___ctor___12dce88);
  if (*(long *)(lVar1 + 0x28) != 0) {
    plVar3 = (long *)native_UnityEngine_Transform__GetEnumerator_772e40(*(long *)(lVar1 + 0x28),0);
    if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      native_sub_432810();
    }
    do {
      lVar6 = *plVar3;
      if ((ulong)*(ushort *)(lVar6 + 0x12a) != 0) {
        uVar7 = 0;
        piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        do {
          if (*(long *)(piVar8 + -2) == _System_Collections_IEnumerator_TypeInfo_12d4b80) {
            puVar4 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
            goto LAB_00dc9094;
          }
          uVar7 = uVar7 + 1;
          piVar8 = piVar8 + 4;
        } while (uVar7 < *(ushort *)(lVar6 + 0x12a));
      }
      puVar4 = (undefined8 *)
               native_sub_3c9b34(plVar3,_System_Collections_IEnumerator_TypeInfo_12d4b80,0);
LAB_00dc9094:
      uVar7 = (*(code *)*puVar4)(plVar3,puVar4[1]);
      if ((uVar7 & 1) == 0) {
        plVar3 = (long *)native_sub_4327f8(plVar3,_System_IDisposable_TypeInfo_12d4b00);
        if (plVar3 == (long *)0x0) goto LAB_00dc9220;
        lVar6 = *plVar3;
        if ((ulong)*(ushort *)(lVar6 + 0x12a) == 0) goto LAB_00dc91f8;
        uVar7 = 0;
        piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        goto LAB_00dc91dc;
      }
      lVar6 = *plVar3;
      if ((ulong)*(ushort *)(lVar6 + 0x12a) != 0) {
        uVar7 = 0;
        piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        do {
          if (*(long *)(piVar8 + -2) == _System_Collections_IEnumerator_TypeInfo_12d4b80) {
            puVar4 = (undefined8 *)(lVar6 + (long)(*piVar8 + 1) * 0x10 + 0x138);
            goto LAB_00dc90fc;
          }
          uVar7 = uVar7 + 1;
          piVar8 = piVar8 + 4;
        } while (uVar7 < *(ushort *)(lVar6 + 0x12a));
      }
      puVar4 = (undefined8 *)
               native_sub_3c9b34(plVar3,_System_Collections_IEnumerator_TypeInfo_12d4b80,1);
LAB_00dc90fc:
      plVar5 = (long *)(*(code *)*puVar4)(plVar3,puVar4[1]);
      if (plVar5 == (long *)0x0) {
LAB_00dc9284:
                    /* WARNING: Subroutine does not return */
        native_sub_432810();
      }
      if ((*(byte *)(*plVar5 + 300) < *(byte *)(_UnityEngine_Transform_TypeInfo_12d6300 + 300)) ||
         (*(long *)(*(long *)(*plVar5 + 200) +
                    (ulong)*(byte *)(_UnityEngine_Transform_TypeInfo_12d6300 + 300) * 8 + -8) !=
          _UnityEngine_Transform_TypeInfo_12d6300)) {
        native_sub_432b04();
        goto LAB_00dc9284;
      }
      lVar6 = native_UnityEngine_Component__GetComponent_ActiveAnimation__49daec
                        (plVar5,
                         _Method_UnityEngine_Component_GetComponent_BE2_UI_ListItem____12e2968);
      if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
        native_sub_4327ec();
      }
      uVar7 = native_UnityEngine_Object__op_Implicit_8e1b98(lVar6,0);
      if ((uVar7 & 1) != 0) {
        if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
          native_sub_432810();
        }
        if (*(long *)(lVar6 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
          native_sub_432810();
        }
        if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
          native_sub_432810();
        }
        native_System_Collections_Generic_List_int_____Add_d40c00
                  (lVar2,*(undefined8 *)(*(long *)(lVar6 + 0x20) + 0x218),
                   _Method_System_Collections_Generic_List_string__Add___12dcea0);
      }
    } while( true );
  }
  goto LAB_00dc9294;
  while( true ) {
    uVar7 = uVar7 + 1;
    piVar8 = piVar8 + 4;
    if (*(ushort *)(lVar6 + 0x12a) <= uVar7) break;
LAB_00dc91dc:
    if (*(long *)(piVar8 + -2) == _System_IDisposable_TypeInfo_12d4b00) {
      puVar4 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
      goto LAB_00dc9214;
    }
  }
LAB_00dc91f8:
  puVar4 = (undefined8 *)native_sub_3c9b34(plVar3,_System_IDisposable_TypeInfo_12d4b00,0);
LAB_00dc9214:
  (*(code *)*puVar4)(plVar3,puVar4[1]);
LAB_00dc9220:
  if (**(long **)(_MG_BlocksEngine2_Environment_BE2_VariablesListManager_TypeInfo_12d3a88 + 0xb8) !=
      0) {
    native_MG_BlocksEngine2_Environment_BE2_VariablesListManager__AddOrUpdateList_dcc8cc
              (**(long **)(_MG_BlocksEngine2_Environment_BE2_VariablesListManager_TypeInfo_12d3a88 +
                          0xb8),*(undefined8 *)(lVar1 + 0x18),lVar2);
    return;
  }
LAB_00dc9294:
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}


