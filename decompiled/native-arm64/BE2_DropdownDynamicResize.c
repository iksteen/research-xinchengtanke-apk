/* ARM64 IL2CPP native pseudocode from Ghidra.
 * Recovered implementation, not original C# source.
 * Function boundaries follow the IL2CPP method address table. */


/* MG_BlocksEngine2.Block.BE2_DropdownDynamicResize$$Awake @ 0x580db8
 * void MG_BlocksEngine2_Block_BE2_DropdownDynamicResize__Awake (MG_BlocksEngine2_Block_BE2_DropdownDynamicResize_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MG_BlocksEngine2.Block.BE2_DropdownDynamicResize$$Awake
   void MG_BlocksEngine2_Block_BE2_DropdownDynamicResize__Awake
   (MG_BlocksEngine2_Block_BE2_DropdownDynamicResize_o* __this, const MethodInfo* method); */

void native_MG_BlocksEngine2_Block_BE2_DropdownDynamicResize__Awake_580db8(long param_1)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  undefined8 uVar4;
  
  if ((bRam000000000133eaee & 1) == 0) {
    native_sub_43273c(&Method_UnityEngine_Component_GetComponent_RectTransform____12e2ad0);
    native_sub_43273c(&Method_UnityEngine_Component_GetComponent_TMP_Dropdown____12e2b20);
    bRam000000000133eaee = 1;
  }
  uVar4 = native_UnityEngine_Component__GetComponent_ActiveAnimation__49daec
                    (param_1,_Method_UnityEngine_Component_GetComponent_RectTransform____12e2ad0);
  *(undefined8 *)(param_1 + 0x18) = uVar4;
  native_sub_4326e0(param_1 + 0x18);
  uVar4 = native_UnityEngine_Component__GetComponent_ActiveAnimation__49daec
                    (param_1,_Method_UnityEngine_Component_GetComponent_TMP_Dropdown____12e2b20);
  *(undefined8 *)(param_1 + 0x20) = uVar4;
  if (iRam0000000001345318 != 0) {
    puVar1 = (ulong *)((param_1 + 0x20U >> 0x12 & 0x7fff) * 8 + 0x138ecd8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar3) {
        *puVar1 = *puVar1 | 1L << (param_1 + 0x20U >> 0xc & 0x3f);
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  return;
}



/* MG_BlocksEngine2.Block.BE2_DropdownDynamicResize$$Start @ 0x580e44
 * void MG_BlocksEngine2_Block_BE2_DropdownDynamicResize__Start (MG_BlocksEngine2_Block_BE2_DropdownDynamicResize_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MG_BlocksEngine2.Block.BE2_DropdownDynamicResize$$Start
   void MG_BlocksEngine2_Block_BE2_DropdownDynamicResize__Start
   (MG_BlocksEngine2_Block_BE2_DropdownDynamicResize_o* __this, const MethodInfo* method); */

void native_MG_BlocksEngine2_Block_BE2_DropdownDynamicResize__Start_580e44(long param_1)

{
  uint uVar1;
  ulong uVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  
  if (*(long *)(param_1 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
    native_sub_432810();
  }
  uVar1 = *(uint *)(*(long *)(param_1 + 0x20) + 0x128);
  if ((bRam000000000133eaf1 & 1) == 0) {
    native_sub_43273c(&
                      Method_System_Collections_Generic_List_TMP_Dropdown_OptionData__get_Item___12dd880
                     );
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    bRam000000000133eaf1 = 1;
  }
  uVar4 = *(undefined8 *)(param_1 + 0x20);
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar2 = native_UnityEngine_Object__op_Inequality_8d76fc(uVar4,0,0);
  if ((uVar2 & 1) == 0) {
    return;
  }
  lVar3 = *(long *)(param_1 + 0x20);
  if (lVar3 != 0) {
    lVar5 = *(long *)(lVar3 + 0x100);
    lVar3 = native_TMPro_TMP_Dropdown__get_options_661e9c(lVar3,0);
    if (lVar3 != 0) {
      if (*(uint *)(lVar3 + 0x18) <= uVar1) {
        native_System_ThrowHelper__ThrowArgumentOutOfRangeException_9fe0f4(0);
      }
      lVar3 = *(long *)(*(long *)(lVar3 + 0x10) + (long)(int)uVar1 * 8 + 0x20);
      if ((lVar3 != 0) && (lVar5 != 0)) {
        native_TMPro_TMP_Text__GetPreferredValues_4c1074(lVar5,*(undefined8 *)(lVar3 + 0x10),0);
        lVar3 = *(long *)(param_1 + 0x18);
        if (lVar3 != 0) {
          native_UnityEngine_RectTransform__get_sizeDelta_764f64(lVar3,0);
          if (pcRam000000000133f8e8 == (code *)0x0) {
            pcRam000000000133f8e8 = (code *)native_sub_4326f0(&UNK_00e28502,0);
          }
          (*pcRam000000000133f8e8)(lVar3,&stack0xffffffffffffffd8);
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* MG_BlocksEngine2.Block.BE2_DropdownDynamicResize$$OnEnable @ 0x580e60
 * void MG_BlocksEngine2_Block_BE2_DropdownDynamicResize__OnEnable (MG_BlocksEngine2_Block_BE2_DropdownDynamicResize_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MG_BlocksEngine2.Block.BE2_DropdownDynamicResize$$OnEnable
   void MG_BlocksEngine2_Block_BE2_DropdownDynamicResize__OnEnable
   (MG_BlocksEngine2_Block_BE2_DropdownDynamicResize_o* __this, const MethodInfo* method); */

void native_MG_BlocksEngine2_Block_BE2_DropdownDynamicResize__OnEnable_580e60(long param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  long lVar3;
  
  if ((bRam000000000133eaef & 1) == 0) {
    native_sub_43273c(&Method_MG_BlocksEngine2_Block_BE2_DropdownDynamicResize_Resize___12e2178);
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    native_sub_43273c(&Method_UnityEngine_Events_UnityAction_int___ctor___12de3b0);
    native_sub_43273c(&UnityEngine_Events_UnityAction_int__TypeInfo_12d2f48);
    native_sub_43273c(&Method_UnityEngine_Events_UnityEvent_int__AddListener___12de488);
    bRam000000000133eaef = 1;
  }
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar1 = native_UnityEngine_Object__op_Inequality_8d76fc(uVar2,0,0);
  if ((uVar1 & 1) == 0) {
    return;
  }
  if (*(long *)(param_1 + 0x20) != 0) {
    lVar3 = *(long *)(*(long *)(param_1 + 0x20) + 0x138);
    uVar2 = native_sub_432808(_UnityEngine_Events_UnityAction_int__TypeInfo_12d2f48);
    native_UnityEngine_Events_UnityAction_int____ctor_89b2bc
              (uVar2,param_1,
               _Method_MG_BlocksEngine2_Block_BE2_DropdownDynamicResize_Resize___12e2178,
               _Method_UnityEngine_Events_UnityAction_int___ctor___12de3b0);
    if (lVar3 != 0) {
      uVar2 = (**(code **)**(undefined8 **)
                            (*(long *)(
                                      _Method_UnityEngine_Events_UnityEvent_int__AddListener___12de488
                                      + 0x18) + 0xc0))(uVar2);
      if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
        native_sub_432810();
      }
      lVar3 = *(long *)(lVar3 + 0x10);
      if (lVar3 != 0) {
        if ((bRam0000000001340cbd & 1) == 0) {
          native_sub_43273c(&Method_System_Collections_Generic_List_BaseInvokableCall__Add___12dc5b0
                            ,uVar2,0);
          bRam0000000001340cbd = 1;
        }
        if (*(long *)(lVar3 + 0x18) != 0) {
          native_System_Collections_Generic_List_int_____Add_d40c00
                    (*(long *)(lVar3 + 0x18),uVar2,
                     _Method_System_Collections_Generic_List_BaseInvokableCall__Add___12dc5b0);
          *(undefined1 *)(lVar3 + 0x28) = 1;
          return;
        }
                    /* WARNING: Subroutine does not return */
        native_sub_432810();
      }
                    /* WARNING: Subroutine does not return */
      native_sub_432810(0,uVar2,0);
    }
  }
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* MG_BlocksEngine2.Block.BE2_DropdownDynamicResize$$OnDisable @ 0x580f78
 * void MG_BlocksEngine2_Block_BE2_DropdownDynamicResize__OnDisable (MG_BlocksEngine2_Block_BE2_DropdownDynamicResize_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MG_BlocksEngine2.Block.BE2_DropdownDynamicResize$$OnDisable
   void MG_BlocksEngine2_Block_BE2_DropdownDynamicResize__OnDisable
   (MG_BlocksEngine2_Block_BE2_DropdownDynamicResize_o* __this, const MethodInfo* method); */

void native_MG_BlocksEngine2_Block_BE2_DropdownDynamicResize__OnDisable_580f78(long param_1)

{
  ulong uVar1;
  long lVar2;
  undefined8 uVar3;
  
  if ((bRam000000000133eaf0 & 1) == 0) {
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    bRam000000000133eaf0 = 1;
  }
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar1 = native_UnityEngine_Object__op_Inequality_8d76fc(uVar3,0,0);
  if ((uVar1 & 1) == 0) {
    return;
  }
  if ((*(long *)(param_1 + 0x20) == 0) ||
     (lVar2 = *(long *)(*(long *)(param_1 + 0x20) + 0x138), lVar2 == 0)) {
                    /* WARNING: Subroutine does not return */
    native_sub_432810();
  }
  lVar2 = *(long *)(lVar2 + 0x10);
  if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    native_sub_432810(0,0);
  }
  if ((bRam0000000001340cbf & 1) == 0) {
    native_sub_43273c(&Method_System_Collections_Generic_List_BaseInvokableCall__Clear___12dc5c0,0);
    bRam0000000001340cbf = 1;
  }
  if (*(long *)(lVar2 + 0x18) != 0) {
    native_System_Collections_Generic_List_Action___Clear_d40e80
              (*(long *)(lVar2 + 0x18),
               _Method_System_Collections_Generic_List_BaseInvokableCall__Clear___12dc5c0);
    *(undefined1 *)(lVar2 + 0x28) = 1;
    return;
  }
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* MG_BlocksEngine2.Block.BE2_DropdownDynamicResize$$Resize @ 0x5672e4
 * void MG_BlocksEngine2_Block_BE2_DropdownDynamicResize__Resize (MG_BlocksEngine2_Block_BE2_DropdownDynamicResize_o* __this, int32_t value, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MG_BlocksEngine2.Block.BE2_DropdownDynamicResize$$Resize
   void MG_BlocksEngine2_Block_BE2_DropdownDynamicResize__Resize
   (MG_BlocksEngine2_Block_BE2_DropdownDynamicResize_o* __this, int32_t value, const MethodInfo*
   method); */

void native_MG_BlocksEngine2_Block_BE2_DropdownDynamicResize__Resize_5672e4
               (long param_1,uint param_2)

{
  ulong uVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  
  if ((bRam000000000133eaf1 & 1) == 0) {
    native_sub_43273c(&
                      Method_System_Collections_Generic_List_TMP_Dropdown_OptionData__get_Item___12dd880
                     );
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    bRam000000000133eaf1 = 1;
  }
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar1 = native_UnityEngine_Object__op_Inequality_8d76fc(uVar3,0,0);
  if ((uVar1 & 1) == 0) {
    return;
  }
  lVar2 = *(long *)(param_1 + 0x20);
  if (lVar2 != 0) {
    lVar4 = *(long *)(lVar2 + 0x100);
    lVar2 = native_TMPro_TMP_Dropdown__get_options_661e9c(lVar2,0);
    if (lVar2 != 0) {
      if (*(uint *)(lVar2 + 0x18) <= param_2) {
        native_System_ThrowHelper__ThrowArgumentOutOfRangeException_9fe0f4(0);
      }
      lVar2 = *(long *)(*(long *)(lVar2 + 0x10) + (long)(int)param_2 * 8 + 0x20);
      if ((lVar2 != 0) && (lVar4 != 0)) {
        native_TMPro_TMP_Text__GetPreferredValues_4c1074(lVar4,*(undefined8 *)(lVar2 + 0x10),0);
        lVar2 = *(long *)(param_1 + 0x18);
        if (lVar2 != 0) {
          native_UnityEngine_RectTransform__get_sizeDelta_764f64(lVar2,0);
          if (pcRam000000000133f8e8 == (code *)0x0) {
            pcRam000000000133f8e8 = (code *)native_sub_4326f0(&UNK_00e28502,0);
          }
          (*pcRam000000000133f8e8)(lVar2,&stack0xffffffffffffffd8);
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* MG_BlocksEngine2.Block.BE2_DropdownDynamicResize$$.ctor @ 0x581010
 * void MG_BlocksEngine2_Block_BE2_DropdownDynamicResize___ctor (MG_BlocksEngine2_Block_BE2_DropdownDynamicResize_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MG_BlocksEngine2.Block.BE2_DropdownDynamicResize$$.ctor
   void MG_BlocksEngine2_Block_BE2_DropdownDynamicResize___ctor
   (MG_BlocksEngine2_Block_BE2_DropdownDynamicResize_o* __this, const MethodInfo* method); */

long native_MG_BlocksEngine2_Block_BE2_DropdownDynamicResize___ctor_581010(long param_1)

{
  *(undefined8 *)(param_1 + 0x28) = 0x42340000428c0000;
  if ((bRam0000000001340ae0 & 1) == 0) {
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0,0);
    bRam0000000001340ae0 = 1;
  }
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  return param_1;
}


