/* ARM64 IL2CPP native pseudocode from Ghidra.
 * Recovered implementation, not original C# source.
 * Function boundaries follow the IL2CPP method address table. */


/* MG_BlocksEngine2.Block.BE2_BlockSectionHeader$$get_RectTransform @ 0x565d98
 * UnityEngine_RectTransform_o* MG_BlocksEngine2_Block_BE2_BlockSectionHeader__get_RectTransform (MG_BlocksEngine2_Block_BE2_BlockSectionHeader_o* __this, const MethodInfo* method); */

/* MG_BlocksEngine2.Block.BE2_BlockSectionHeader$$get_RectTransform
   UnityEngine_RectTransform_o* MG_BlocksEngine2_Block_BE2_BlockSectionHeader__get_RectTransform
   (MG_BlocksEngine2_Block_BE2_BlockSectionHeader_o* __this, const MethodInfo* method); */

undefined8
native_MG_BlocksEngine2_Block_BE2_BlockSectionHeader__get_RectTransform_565d98(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* MG_BlocksEngine2.Block.BE2_BlockSectionHeader$$get_Size @ 0x565da0
 * UnityEngine_Vector2_o MG_BlocksEngine2_Block_BE2_BlockSectionHeader__get_Size (MG_BlocksEngine2_Block_BE2_BlockSectionHeader_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MG_BlocksEngine2.Block.BE2_BlockSectionHeader$$get_Size
   UnityEngine_Vector2_o MG_BlocksEngine2_Block_BE2_BlockSectionHeader__get_Size
   (MG_BlocksEngine2_Block_BE2_BlockSectionHeader_o* __this, const MethodInfo* method); */

undefined4 native_MG_BlocksEngine2_Block_BE2_BlockSectionHeader__get_Size_565da0(long param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  long *plVar3;
  long lVar4;
  undefined8 uStack_28;
  
  if ((bRam000000000133ea43 & 1) == 0) {
    native_sub_43273c(&Method_UnityEngine_Component_GetComponent_RectTransform____12e2ad0);
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    bRam000000000133ea43 = 1;
  }
  plVar3 = (long *)(param_1 + 0x18);
  lVar4 = *plVar3;
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar1 = native_UnityEngine_Object__op_Equality_8e9a3c(lVar4,0,0);
  if ((uVar1 & 1) != 0) {
    uVar2 = native_UnityEngine_Component__GetComponent_ActiveAnimation__49daec
                      (param_1,_Method_UnityEngine_Component_GetComponent_RectTransform____12e2ad0);
    *(undefined8 *)(param_1 + 0x18) = uVar2;
    native_sub_4326e0(plVar3,uVar2);
  }
  lVar4 = *plVar3;
  if (lVar4 != 0) {
    uStack_28 = 0;
    if (pcRam000000000133f8e0 == (code *)0x0) {
      pcRam000000000133f8e0 = (code *)native_sub_4326f0(&UNK_00e284ba,0);
    }
    (*pcRam000000000133f8e0)(lVar4,&uStack_28);
    return (undefined4)uStack_28;
  }
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* MG_BlocksEngine2.Block.BE2_BlockSectionHeader$$set_Size @ 0x565e60
 * void MG_BlocksEngine2_Block_BE2_BlockSectionHeader__set_Size (MG_BlocksEngine2_Block_BE2_BlockSectionHeader_o* __this, UnityEngine_Vector2_o value, const MethodInfo* method); */

/* MG_BlocksEngine2.Block.BE2_BlockSectionHeader$$set_Size
   void MG_BlocksEngine2_Block_BE2_BlockSectionHeader__set_Size
   (MG_BlocksEngine2_Block_BE2_BlockSectionHeader_o* __this, UnityEngine_Vector2_o value, const
   MethodInfo* method); */

void native_MG_BlocksEngine2_Block_BE2_BlockSectionHeader__set_Size_565e60
               (undefined4 param_1,undefined4 param_2,long param_3)

{
  long lVar1;
  undefined4 uStack_28;
  undefined4 uStack_24;
  
  lVar1 = *(long *)(param_3 + 0x18);
  if (lVar1 != 0) {
    uStack_28 = param_1;
    uStack_24 = param_2;
    if (pcRam000000000133f8e8 == (code *)0x0) {
      pcRam000000000133f8e8 = (code *)native_sub_4326f0(&UNK_00e28502,0);
    }
    (*pcRam000000000133f8e8)(lVar1,&uStack_28);
    return;
  }
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* MG_BlocksEngine2.Block.BE2_BlockSectionHeader$$get_ItemsArray @ 0x565e7c
 * MG_BlocksEngine2_Block_I_BE2_BlockSectionHeaderItem_array* MG_BlocksEngine2_Block_BE2_BlockSectionHeader__get_ItemsArray (MG_BlocksEngine2_Block_BE2_BlockSectionHeader_o* __this, const MethodInfo* method); */

/* MG_BlocksEngine2.Block.BE2_BlockSectionHeader$$get_ItemsArray
   MG_BlocksEngine2_Block_I_BE2_BlockSectionHeaderItem_array*
   MG_BlocksEngine2_Block_BE2_BlockSectionHeader__get_ItemsArray
   (MG_BlocksEngine2_Block_BE2_BlockSectionHeader_o* __this, const MethodInfo* method); */

undefined8 native_MG_BlocksEngine2_Block_BE2_BlockSectionHeader__get_ItemsArray_565e7c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x48);
}



/* MG_BlocksEngine2.Block.BE2_BlockSectionHeader$$get_InputsArray @ 0x565e84
 * MG_BlocksEngine2_Block_I_BE2_BlockSectionHeaderInput_array* MG_BlocksEngine2_Block_BE2_BlockSectionHeader__get_InputsArray (MG_BlocksEngine2_Block_BE2_BlockSectionHeader_o* __this, const MethodInfo* method); */

/* MG_BlocksEngine2.Block.BE2_BlockSectionHeader$$get_InputsArray
   MG_BlocksEngine2_Block_I_BE2_BlockSectionHeaderInput_array*
   MG_BlocksEngine2_Block_BE2_BlockSectionHeader__get_InputsArray
   (MG_BlocksEngine2_Block_BE2_BlockSectionHeader_o* __this, const MethodInfo* method); */

undefined8
native_MG_BlocksEngine2_Block_BE2_BlockSectionHeader__get_InputsArray_565e84(long param_1)

{
  return *(undefined8 *)(param_1 + 0x50);
}



/* MG_BlocksEngine2.Block.BE2_BlockSectionHeader$$get_Shadow @ 0x565e8c
 * UnityEngine_UI_Shadow_o* MG_BlocksEngine2_Block_BE2_BlockSectionHeader__get_Shadow (MG_BlocksEngine2_Block_BE2_BlockSectionHeader_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MG_BlocksEngine2.Block.BE2_BlockSectionHeader$$get_Shadow
   UnityEngine_UI_Shadow_o* MG_BlocksEngine2_Block_BE2_BlockSectionHeader__get_Shadow
   (MG_BlocksEngine2_Block_BE2_BlockSectionHeader_o* __this, const MethodInfo* method); */

long native_MG_BlocksEngine2_Block_BE2_BlockSectionHeader__get_Shadow_565e8c(long param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  long *plVar3;
  long lVar4;
  
  if ((bRam000000000133ea44 & 1) == 0) {
    native_sub_43273c(&Method_UnityEngine_Component_GetComponent_Shadow____12e2b00);
    native_sub_43273c(&Method_UnityEngine_GameObject_AddComponent_Shadow____12e4860);
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    bRam000000000133ea44 = 1;
  }
  plVar3 = (long *)(param_1 + 0x58);
  lVar4 = *plVar3;
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar1 = native_UnityEngine_Object__op_Implicit_8e1b98(lVar4,0);
  if ((uVar1 & 1) == 0) {
    uVar2 = native_UnityEngine_Component__GetComponent_ActiveAnimation__49daec
                      (param_1,_Method_UnityEngine_Component_GetComponent_Shadow____12e2b00);
    if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
      native_sub_4327ec(_UnityEngine_Object_TypeInfo_12d54e0);
    }
    uVar1 = native_UnityEngine_Object__op_Implicit_8e1b98(uVar2,0);
    if ((uVar1 & 1) == 0) {
      lVar4 = native_UnityEngine_Component__get_gameObject_8da66c(param_1,0);
      if (lVar4 == 0) goto LAB_00565fec;
      lVar4 = native_UnityEngine_GameObject__AddComponent_ActiveAnimation__4a2118
                        (lVar4,_Method_UnityEngine_GameObject_AddComponent_Shadow____12e4860);
      *plVar3 = lVar4;
    }
    else {
      lVar4 = native_UnityEngine_Component__GetComponent_ActiveAnimation__49daec
                        (param_1,_Method_UnityEngine_Component_GetComponent_Shadow____12e2b00);
      *(long *)(param_1 + 0x58) = lVar4;
    }
    native_sub_4326e0(plVar3,lVar4);
    lVar4 = *plVar3;
    native_UnityEngine_Color__get_green_8d9de8(0);
    if (lVar4 != 0) {
      native_UnityEngine_UI_Shadow__set_effectColor_c61700(lVar4,0);
      if (*plVar3 != 0) {
        native_UnityEngine_UI_Shadow__set_effectDistance_c617e8(0xc0c00000,0xc0c00000,*plVar3,0);
        goto LAB_00565fd4;
      }
    }
LAB_00565fec:
                    /* WARNING: Subroutine does not return */
    native_sub_432810();
  }
LAB_00565fd4:
  return *plVar3;
}



/* MG_BlocksEngine2.Block.BE2_BlockSectionHeader$$OnValidate @ 0x565ff0
 * void MG_BlocksEngine2_Block_BE2_BlockSectionHeader__OnValidate (MG_BlocksEngine2_Block_BE2_BlockSectionHeader_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MG_BlocksEngine2.Block.BE2_BlockSectionHeader$$OnValidate
   void MG_BlocksEngine2_Block_BE2_BlockSectionHeader__OnValidate
   (MG_BlocksEngine2_Block_BE2_BlockSectionHeader_o* __this, const MethodInfo* method); */

void native_MG_BlocksEngine2_Block_BE2_BlockSectionHeader__OnValidate_565ff0(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  ulong uVar3;
  long *plVar4;
  undefined4 uVar5;
  
  if ((bRam000000000133ea45 & 1) == 0) {
    native_sub_43273c(&Method_UnityEngine_Component_GetComponent_I_BE2_BlockLayout____12e2a10);
    native_sub_43273c(&Method_UnityEngine_Component_GetComponent_I_BE2_BlockSection____12e2a18);
    native_sub_43273c(&Method_UnityEngine_Component_GetComponent_Image____12e2a78);
    native_sub_43273c(&Method_UnityEngine_Component_GetComponent_RectTransform____12e2ad0);
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    bRam000000000133ea45 = 1;
  }
  native_MG_BlocksEngine2_Block_BE2_BlockSectionHeader__UpdateItemsArray_5661b8(param_1);
  native_MG_BlocksEngine2_Block_BE2_BlockSectionHeader__UpdateInputsArray_566364(param_1);
  uVar1 = native_UnityEngine_Component__GetComponent_ActiveAnimation__49daec
                    (param_1,_Method_UnityEngine_Component_GetComponent_RectTransform____12e2ad0);
  *(undefined8 *)(param_1 + 0x18) = uVar1;
  native_sub_4326e0(param_1 + 0x18);
  lVar2 = native_UnityEngine_Component__get_transform_8da62c(param_1,0);
  if (lVar2 == 0) goto LAB_005661b4;
  uVar1 = native_UnityEngine_Transform__get_parent_765eb0(lVar2,0);
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec(_UnityEngine_Object_TypeInfo_12d54e0);
  }
  uVar3 = native_UnityEngine_Object__op_Implicit_8e1b98(uVar1,0);
  if ((uVar3 & 1) != 0) {
    lVar2 = native_UnityEngine_Component__get_transform_8da62c(param_1,0);
    if ((lVar2 == 0) ||
       (lVar2 = native_UnityEngine_Transform__get_parent_765eb0(lVar2,0), lVar2 == 0))
    goto LAB_005661b4;
    uVar1 = native_UnityEngine_Component__GetComponent_ActiveAnimation__49daec
                      (lVar2,
                       _Method_UnityEngine_Component_GetComponent_I_BE2_BlockSection____12e2a18);
    *(undefined8 *)(param_1 + 0x20) = uVar1;
    native_sub_4326e0();
    lVar2 = native_UnityEngine_Component__get_transform_8da62c(param_1,0);
    if ((lVar2 == 0) ||
       ((lVar2 = native_UnityEngine_Transform__get_parent_765eb0(lVar2,0), lVar2 == 0 ||
        (lVar2 = native_UnityEngine_Transform__get_parent_765eb0(lVar2,0), lVar2 == 0))))
    goto LAB_005661b4;
    uVar1 = native_UnityEngine_Component__GetComponent_ActiveAnimation__49daec
                      (lVar2,_Method_UnityEngine_Component_GetComponent_I_BE2_BlockLayout____12e2a10
                      );
    *(undefined8 *)(param_1 + 0x28) = uVar1;
    native_sub_4326e0();
  }
  uVar1 = native_UnityEngine_Component__GetComponent_ActiveAnimation__49daec
                    (param_1,_Method_UnityEngine_Component_GetComponent_Image____12e2a78);
  *(undefined8 *)(param_1 + 0x30) = uVar1;
  native_sub_4326e0((long *)(param_1 + 0x30),uVar1);
  if (*(long *)(param_1 + 0x30) != 0) {
    native_UnityEngine_UI_Image__set_type_cb7988(*(long *)(param_1 + 0x30),1,0);
    plVar4 = *(long **)(param_1 + 0x30);
    if (plVar4 != (long *)0x0) {
      uVar5 = native_UnityEngine_Mathf__Max_8d9f90(0x3c23d70a,0x40000000,0,0);
      *(undefined4 *)(plVar4 + 0x20) = uVar5;
                    /* WARNING: Could not recover jumptable at 0x00cb821c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar4 + 0x2f8))(plVar4,*(undefined8 *)(*plVar4 + 0x300));
      return;
    }
  }
LAB_005661b4:
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* MG_BlocksEngine2.Block.BE2_BlockSectionHeader$$Awake @ 0x565ff4
 * void MG_BlocksEngine2_Block_BE2_BlockSectionHeader__Awake (MG_BlocksEngine2_Block_BE2_BlockSectionHeader_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MG_BlocksEngine2.Block.BE2_BlockSectionHeader$$Awake
   void MG_BlocksEngine2_Block_BE2_BlockSectionHeader__Awake
   (MG_BlocksEngine2_Block_BE2_BlockSectionHeader_o* __this, const MethodInfo* method); */

void native_MG_BlocksEngine2_Block_BE2_BlockSectionHeader__Awake_565ff4(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  ulong uVar3;
  long *plVar4;
  undefined4 uVar5;
  
  if ((bRam000000000133ea45 & 1) == 0) {
    native_sub_43273c(&Method_UnityEngine_Component_GetComponent_I_BE2_BlockLayout____12e2a10);
    native_sub_43273c(&Method_UnityEngine_Component_GetComponent_I_BE2_BlockSection____12e2a18);
    native_sub_43273c(&Method_UnityEngine_Component_GetComponent_Image____12e2a78);
    native_sub_43273c(&Method_UnityEngine_Component_GetComponent_RectTransform____12e2ad0);
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    bRam000000000133ea45 = 1;
  }
  native_MG_BlocksEngine2_Block_BE2_BlockSectionHeader__UpdateItemsArray_5661b8(param_1);
  native_MG_BlocksEngine2_Block_BE2_BlockSectionHeader__UpdateInputsArray_566364(param_1);
  uVar1 = native_UnityEngine_Component__GetComponent_ActiveAnimation__49daec
                    (param_1,_Method_UnityEngine_Component_GetComponent_RectTransform____12e2ad0);
  *(undefined8 *)(param_1 + 0x18) = uVar1;
  native_sub_4326e0(param_1 + 0x18);
  lVar2 = native_UnityEngine_Component__get_transform_8da62c(param_1,0);
  if (lVar2 == 0) goto LAB_005661b4;
  uVar1 = native_UnityEngine_Transform__get_parent_765eb0(lVar2,0);
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec(_UnityEngine_Object_TypeInfo_12d54e0);
  }
  uVar3 = native_UnityEngine_Object__op_Implicit_8e1b98(uVar1,0);
  if ((uVar3 & 1) != 0) {
    lVar2 = native_UnityEngine_Component__get_transform_8da62c(param_1,0);
    if ((lVar2 == 0) ||
       (lVar2 = native_UnityEngine_Transform__get_parent_765eb0(lVar2,0), lVar2 == 0))
    goto LAB_005661b4;
    uVar1 = native_UnityEngine_Component__GetComponent_ActiveAnimation__49daec
                      (lVar2,
                       _Method_UnityEngine_Component_GetComponent_I_BE2_BlockSection____12e2a18);
    *(undefined8 *)(param_1 + 0x20) = uVar1;
    native_sub_4326e0();
    lVar2 = native_UnityEngine_Component__get_transform_8da62c(param_1,0);
    if ((lVar2 == 0) ||
       ((lVar2 = native_UnityEngine_Transform__get_parent_765eb0(lVar2,0), lVar2 == 0 ||
        (lVar2 = native_UnityEngine_Transform__get_parent_765eb0(lVar2,0), lVar2 == 0))))
    goto LAB_005661b4;
    uVar1 = native_UnityEngine_Component__GetComponent_ActiveAnimation__49daec
                      (lVar2,_Method_UnityEngine_Component_GetComponent_I_BE2_BlockLayout____12e2a10
                      );
    *(undefined8 *)(param_1 + 0x28) = uVar1;
    native_sub_4326e0();
  }
  uVar1 = native_UnityEngine_Component__GetComponent_ActiveAnimation__49daec
                    (param_1,_Method_UnityEngine_Component_GetComponent_Image____12e2a78);
  *(undefined8 *)(param_1 + 0x30) = uVar1;
  native_sub_4326e0((long *)(param_1 + 0x30),uVar1);
  if (*(long *)(param_1 + 0x30) != 0) {
    native_UnityEngine_UI_Image__set_type_cb7988(*(long *)(param_1 + 0x30),1,0);
    plVar4 = *(long **)(param_1 + 0x30);
    if (plVar4 != (long *)0x0) {
      uVar5 = native_UnityEngine_Mathf__Max_8d9f90(0x3c23d70a,0x40000000,0,0);
      *(undefined4 *)(plVar4 + 0x20) = uVar5;
                    /* WARNING: Could not recover jumptable at 0x00cb821c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar4 + 0x2f8))(plVar4,*(undefined8 *)(*plVar4 + 0x300));
      return;
    }
  }
LAB_005661b4:
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* MG_BlocksEngine2.Block.BE2_BlockSectionHeader$$OnEnable @ 0x566510
 * void MG_BlocksEngine2_Block_BE2_BlockSectionHeader__OnEnable (MG_BlocksEngine2_Block_BE2_BlockSectionHeader_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MG_BlocksEngine2.Block.BE2_BlockSectionHeader$$OnEnable
   void MG_BlocksEngine2_Block_BE2_BlockSectionHeader__OnEnable
   (MG_BlocksEngine2_Block_BE2_BlockSectionHeader_o* __this, const MethodInfo* method); */

void native_MG_BlocksEngine2_Block_BE2_BlockSectionHeader__OnEnable_566510(long *param_1)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long lStack_38;
  
  if ((bRam000000000133ea46 & 1) == 0) {
    native_sub_43273c(&UnityEngine_Events_UnityAction_TypeInfo_12d65d0);
    bRam000000000133ea46 = 1;
  }
  lVar3 = native_MG_BlocksEngine2_Core_BE2_MainEventsManager__get_Instance_6001fc(0);
  uVar4 = native_sub_432808(_UnityEngine_Events_UnityAction_TypeInfo_12d65d0);
  if ((param_1 != (long *)0x0) &&
     (native_UnityEngine_Events_UnityAction___ctor_773130
                (uVar4,param_1,*(undefined8 *)(*param_1 + 0x1e0),0), lVar3 != 0)) {
    native_MG_BlocksEngine2_Core_BE2_EventsManager__StartListening_563268(lVar3,2,uVar4);
    lVar3 = native_MG_BlocksEngine2_Core_BE2_MainEventsManager__get_Instance_6001fc(0);
    uVar4 = native_sub_432808(_UnityEngine_Events_UnityAction_TypeInfo_12d65d0);
    native_UnityEngine_Events_UnityAction___ctor_773130
              (uVar4,param_1,*(undefined8 *)(*param_1 + 0x1e0),0);
    if (lVar3 != 0) {
      native_MG_BlocksEngine2_Core_BE2_EventsManager__StartListening_563268(lVar3,3,uVar4);
      lVar3 = native_MG_BlocksEngine2_Core_BE2_MainEventsManager__get_Instance_6001fc(0);
      uVar4 = native_sub_432808(_UnityEngine_Events_UnityAction_TypeInfo_12d65d0);
      native_UnityEngine_Events_UnityAction___ctor_773130
                (uVar4,param_1,*(undefined8 *)(*param_1 + 0x1f0),0);
      if (lVar3 != 0) {
        if ((bRam000000000133eaf4 & 1) == 0) {
          native_sub_43273c(&
                            Method_System_Collections_Generic_Dictionary_BE2EventTypes__UnityEvent__Add___12d8ea0
                           );
          native_sub_43273c(&
                            Method_System_Collections_Generic_Dictionary_BE2EventTypes__UnityEvent__TryGetValue___12d8ea8
                           );
          native_sub_43273c(&UnityEngine_Events_UnityEvent_TypeInfo_12d65d8);
          bRam000000000133eaf4 = 1;
        }
        lStack_38 = 0;
        if (*(long *)(lVar3 + 0x10) != 0) {
          uVar1 = native_System_Collections_Generic_Dictionary_BE2EventTypes__UnityEvent___TryGetValue_c25318
                            (*(long *)(lVar3 + 0x10),3,&lStack_38,
                             _Method_System_Collections_Generic_Dictionary_BE2EventTypes__UnityEvent__TryGetValue___12d8ea8
                            );
          if ((uVar1 & 1) == 0) {
            lVar2 = native_sub_432808(_UnityEngine_Events_UnityEvent_TypeInfo_12d65d8);
            native_UnityEngine_Events_UnityEvent___ctor_7733e0(lVar2,0);
            lStack_38 = lVar2;
            if (lVar2 != 0) {
              native_UnityEngine_Events_UnityEvent__AddListener_7734bc(lVar2,uVar4,0);
              if (*(long *)(lVar3 + 0x10) != 0) {
                native_System_Collections_Generic_Dictionary_BE2EventTypes__UnityEvent___Add_c235f4
                          (*(long *)(lVar3 + 0x10),3,lStack_38,
                           _Method_System_Collections_Generic_Dictionary_BE2EventTypes__UnityEvent__Add___12d8ea0
                          );
                return;
              }
            }
          }
          else if (lStack_38 != 0) {
            native_UnityEngine_Events_UnityEvent__AddListener_7734bc(lStack_38,uVar4,0);
            return;
          }
        }
                    /* WARNING: Subroutine does not return */
        native_sub_432810();
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* MG_BlocksEngine2.Block.BE2_BlockSectionHeader$$OnDisable @ 0x56662c
 * void MG_BlocksEngine2_Block_BE2_BlockSectionHeader__OnDisable (MG_BlocksEngine2_Block_BE2_BlockSectionHeader_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MG_BlocksEngine2.Block.BE2_BlockSectionHeader$$OnDisable
   void MG_BlocksEngine2_Block_BE2_BlockSectionHeader__OnDisable
   (MG_BlocksEngine2_Block_BE2_BlockSectionHeader_o* __this, const MethodInfo* method); */

void native_MG_BlocksEngine2_Block_BE2_BlockSectionHeader__OnDisable_56662c(long *param_1)

{
  ulong uVar1;
  long lVar2;
  undefined8 uVar3;
  long lStack_38;
  
  if ((bRam000000000133ea47 & 1) == 0) {
    native_sub_43273c(&UnityEngine_Events_UnityAction_TypeInfo_12d65d0);
    bRam000000000133ea47 = 1;
  }
  lVar2 = native_MG_BlocksEngine2_Core_BE2_MainEventsManager__get_Instance_6001fc(0);
  uVar3 = native_sub_432808(_UnityEngine_Events_UnityAction_TypeInfo_12d65d0);
  if ((param_1 != (long *)0x0) &&
     (native_UnityEngine_Events_UnityAction___ctor_773130
                (uVar3,param_1,*(undefined8 *)(*param_1 + 0x1e0),0), lVar2 != 0)) {
    native_MG_BlocksEngine2_Core_BE2_EventsManager__StopListening_56340c(lVar2,2,uVar3);
    lVar2 = native_MG_BlocksEngine2_Core_BE2_MainEventsManager__get_Instance_6001fc(0);
    uVar3 = native_sub_432808(_UnityEngine_Events_UnityAction_TypeInfo_12d65d0);
    native_UnityEngine_Events_UnityAction___ctor_773130
              (uVar3,param_1,*(undefined8 *)(*param_1 + 0x1e0),0);
    if (lVar2 != 0) {
      native_MG_BlocksEngine2_Core_BE2_EventsManager__StopListening_56340c(lVar2,3,uVar3);
      lVar2 = native_MG_BlocksEngine2_Core_BE2_MainEventsManager__get_Instance_6001fc(0);
      uVar3 = native_sub_432808(_UnityEngine_Events_UnityAction_TypeInfo_12d65d0);
      native_UnityEngine_Events_UnityAction___ctor_773130
                (uVar3,param_1,*(undefined8 *)(*param_1 + 0x1f0),0);
      if (lVar2 != 0) {
        if ((bRam000000000133eaf6 & 1) == 0) {
          native_sub_43273c(&
                            Method_System_Collections_Generic_Dictionary_BE2EventTypes__UnityEvent__TryGetValue___12d8ea8
                           );
          bRam000000000133eaf6 = 1;
        }
        lStack_38 = 0;
        if (*(long *)(lVar2 + 0x10) != 0) {
          uVar1 = native_System_Collections_Generic_Dictionary_BE2EventTypes__UnityEvent___TryGetValue_c25318
                            (*(long *)(lVar2 + 0x10),3,&lStack_38,
                             _Method_System_Collections_Generic_Dictionary_BE2EventTypes__UnityEvent__TryGetValue___12d8ea8
                            );
          if ((uVar1 & 1) != 0) {
            if (lStack_38 == 0) goto LAB_0056349c;
            native_UnityEngine_Events_UnityEvent__RemoveListener_773574(lStack_38,uVar3,0);
          }
          return;
        }
LAB_0056349c:
                    /* WARNING: Subroutine does not return */
        native_sub_432810();
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* MG_BlocksEngine2.Block.BE2_BlockSectionHeader$$UpdateItemsArray @ 0x5661b8
 * void MG_BlocksEngine2_Block_BE2_BlockSectionHeader__UpdateItemsArray (MG_BlocksEngine2_Block_BE2_BlockSectionHeader_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MG_BlocksEngine2.Block.BE2_BlockSectionHeader$$UpdateItemsArray
   void MG_BlocksEngine2_Block_BE2_BlockSectionHeader__UpdateItemsArray
   (MG_BlocksEngine2_Block_BE2_BlockSectionHeader_o* __this, const MethodInfo* method); */

void native_MG_BlocksEngine2_Block_BE2_BlockSectionHeader__UpdateItemsArray_5661b8(long param_1)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  long *plVar4;
  undefined8 *puVar5;
  ulong uVar6;
  int *piVar7;
  undefined8 *puVar8;
  int iVar9;
  
  if ((bRam000000000133ea48 & 1) == 0) {
    native_sub_43273c(&
                      Method_MG_BlocksEngine2_Utils_BE2_ArrayUtils_Add_I_BE2_BlockSectionHeaderItem____12e20b0
                     );
    native_sub_43273c(&
                      Method_UnityEngine_Component_GetComponent_I_BE2_BlockSectionHeaderItem____12e2a38
                     );
    native_sub_43273c(&MG_BlocksEngine2_Block_I_BE2_BlockSectionHeaderItem___TypeInfo_12d3230);
    native_sub_43273c(&MG_BlocksEngine2_Block_I_BE2_BlockSectionHeaderItem_TypeInfo_12d4e08);
    bRam000000000133ea48 = 1;
  }
  uVar2 = native_sub_432750(_MG_BlocksEngine2_Block_I_BE2_BlockSectionHeaderItem___TypeInfo_12d3230,
                            0);
  puVar8 = (undefined8 *)(param_1 + 0x48);
  *puVar8 = uVar2;
  native_sub_4326e0(puVar8,uVar2);
  lVar3 = native_UnityEngine_Component__get_transform_8da62c(param_1,0);
  if (lVar3 != 0) {
    iVar1 = native_UnityEngine_Transform__get_childCount_772a64(lVar3,0);
    if (0 < iVar1) {
      iVar9 = 0;
      do {
        lVar3 = native_UnityEngine_Component__get_transform_8da62c(param_1,0);
        if ((lVar3 == 0) ||
           (lVar3 = native_UnityEngine_Transform__GetChild_772ef0(lVar3,iVar9,0), lVar3 == 0))
        goto LAB_00566360;
        plVar4 = (long *)native_UnityEngine_Component__GetComponent_ActiveAnimation__49daec
                                   (lVar3,
                                    _Method_UnityEngine_Component_GetComponent_I_BE2_BlockSectionHeaderItem____12e2a38
                                   );
        if (plVar4 != (long *)0x0) {
          lVar3 = *plVar4;
          if ((ulong)*(ushort *)(lVar3 + 0x12a) != 0) {
            uVar6 = 0;
            piVar7 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
            do {
              if (*(long *)(piVar7 + -2) ==
                  _MG_BlocksEngine2_Block_I_BE2_BlockSectionHeaderItem_TypeInfo_12d4e08) {
                puVar5 = (undefined8 *)(lVar3 + (long)*piVar7 * 0x10 + 0x138);
                goto LAB_00566304;
              }
              uVar6 = uVar6 + 1;
              piVar7 = piVar7 + 4;
            } while (uVar6 < *(ushort *)(lVar3 + 0x12a));
          }
          puVar5 = (undefined8 *)
                   native_sub_3c9b34(plVar4,
                                     _MG_BlocksEngine2_Block_I_BE2_BlockSectionHeaderItem_TypeInfo_12d4e08
                                     ,0);
LAB_00566304:
          lVar3 = (*(code *)*puVar5)(plVar4,puVar5[1]);
          if ((lVar3 == 0) ||
             (lVar3 = native_UnityEngine_Component__get_gameObject_8da66c(lVar3,0), lVar3 == 0))
          goto LAB_00566360;
          uVar6 = native_UnityEngine_GameObject__get_activeSelf_8de6e8(lVar3,0);
          if ((uVar6 & 1) != 0) {
            native_MG_BlocksEngine2_Utils_BE2_ArrayUtils__Add_GraphicRaycaster__49b428
                      (puVar8,plVar4,
                       _Method_MG_BlocksEngine2_Utils_BE2_ArrayUtils_Add_I_BE2_BlockSectionHeaderItem____12e20b0
                      );
          }
        }
        iVar9 = iVar9 + 1;
      } while (iVar9 < iVar1);
    }
    return;
  }
LAB_00566360:
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* MG_BlocksEngine2.Block.BE2_BlockSectionHeader$$UpdateInputsArray @ 0x566364
 * void MG_BlocksEngine2_Block_BE2_BlockSectionHeader__UpdateInputsArray (MG_BlocksEngine2_Block_BE2_BlockSectionHeader_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MG_BlocksEngine2.Block.BE2_BlockSectionHeader$$UpdateInputsArray
   void MG_BlocksEngine2_Block_BE2_BlockSectionHeader__UpdateInputsArray
   (MG_BlocksEngine2_Block_BE2_BlockSectionHeader_o* __this, const MethodInfo* method); */

void native_MG_BlocksEngine2_Block_BE2_BlockSectionHeader__UpdateInputsArray_566364(long param_1)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  long *plVar4;
  undefined8 *puVar5;
  ulong uVar6;
  int *piVar7;
  undefined8 *puVar8;
  int iVar9;
  
  if ((bRam000000000133ea49 & 1) == 0) {
    native_sub_43273c(&
                      Method_MG_BlocksEngine2_Utils_BE2_ArrayUtils_Add_I_BE2_BlockSectionHeaderInput____12e20a8
                     );
    native_sub_43273c(&
                      Method_UnityEngine_Component_GetComponent_I_BE2_BlockSectionHeaderInput____12e2a30
                     );
    native_sub_43273c(&MG_BlocksEngine2_Block_I_BE2_BlockSectionHeaderInput___TypeInfo_12d3228);
    native_sub_43273c(&MG_BlocksEngine2_Block_I_BE2_BlockSectionHeaderInput_TypeInfo_12d4e00);
    bRam000000000133ea49 = 1;
  }
  uVar2 = native_sub_432750(_MG_BlocksEngine2_Block_I_BE2_BlockSectionHeaderInput___TypeInfo_12d3228
                            ,0);
  puVar8 = (undefined8 *)(param_1 + 0x50);
  *puVar8 = uVar2;
  native_sub_4326e0(puVar8,uVar2);
  lVar3 = native_UnityEngine_Component__get_transform_8da62c(param_1,0);
  if (lVar3 != 0) {
    iVar1 = native_UnityEngine_Transform__get_childCount_772a64(lVar3,0);
    if (0 < iVar1) {
      iVar9 = 0;
      do {
        lVar3 = native_UnityEngine_Component__get_transform_8da62c(param_1,0);
        if ((lVar3 == 0) ||
           (lVar3 = native_UnityEngine_Transform__GetChild_772ef0(lVar3,iVar9,0), lVar3 == 0))
        goto LAB_0056650c;
        plVar4 = (long *)native_UnityEngine_Component__GetComponent_ActiveAnimation__49daec
                                   (lVar3,
                                    _Method_UnityEngine_Component_GetComponent_I_BE2_BlockSectionHeaderInput____12e2a30
                                   );
        if (plVar4 != (long *)0x0) {
          lVar3 = *plVar4;
          if ((ulong)*(ushort *)(lVar3 + 0x12a) != 0) {
            uVar6 = 0;
            piVar7 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
            do {
              if (*(long *)(piVar7 + -2) ==
                  _MG_BlocksEngine2_Block_I_BE2_BlockSectionHeaderInput_TypeInfo_12d4e00) {
                puVar5 = (undefined8 *)(lVar3 + (long)*piVar7 * 0x10 + 0x138);
                goto LAB_005664b0;
              }
              uVar6 = uVar6 + 1;
              piVar7 = piVar7 + 4;
            } while (uVar6 < *(ushort *)(lVar3 + 0x12a));
          }
          puVar5 = (undefined8 *)
                   native_sub_3c9b34(plVar4,
                                     _MG_BlocksEngine2_Block_I_BE2_BlockSectionHeaderInput_TypeInfo_12d4e00
                                     ,0);
LAB_005664b0:
          lVar3 = (*(code *)*puVar5)(plVar4,puVar5[1]);
          if ((lVar3 == 0) ||
             (lVar3 = native_UnityEngine_Component__get_gameObject_8da66c(lVar3,0), lVar3 == 0))
          goto LAB_0056650c;
          uVar6 = native_UnityEngine_GameObject__get_activeSelf_8de6e8(lVar3,0);
          if ((uVar6 & 1) != 0) {
            native_MG_BlocksEngine2_Utils_BE2_ArrayUtils__Add_GraphicRaycaster__49b428
                      (puVar8,plVar4,
                       _Method_MG_BlocksEngine2_Utils_BE2_ArrayUtils_Add_I_BE2_BlockSectionHeaderInput____12e20a8
                      );
          }
        }
        iVar9 = iVar9 + 1;
      } while (iVar9 < iVar1);
    }
    return;
  }
LAB_0056650c:
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* MG_BlocksEngine2.Block.BE2_BlockSectionHeader$$UpdateLayout @ 0x566748
 * void MG_BlocksEngine2_Block_BE2_BlockSectionHeader__UpdateLayout (MG_BlocksEngine2_Block_BE2_BlockSectionHeader_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MG_BlocksEngine2.Block.BE2_BlockSectionHeader$$UpdateLayout
   void MG_BlocksEngine2_Block_BE2_BlockSectionHeader__UpdateLayout
   (MG_BlocksEngine2_Block_BE2_BlockSectionHeader_o* __this, const MethodInfo* method); */

void native_MG_BlocksEngine2_Block_BE2_BlockSectionHeader__UpdateLayout_566748
               (undefined1 param_1 [16],float param_2,long param_3)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  int *piVar7;
  long *plVar8;
  long *plVar9;
  uint uVar10;
  float fVar11;
  
  if ((bRam000000000133ea4a & 1) == 0) {
    native_sub_43273c(&MG_BlocksEngine2_Block_I_BE2_BlockLayout_TypeInfo_12d4de0);
    native_sub_43273c(&MG_BlocksEngine2_Block_I_BE2_BlockSectionHeaderItem_TypeInfo_12d4e08);
    native_sub_43273c(&MG_BlocksEngine2_Block_I_BE2_BlockSectionHeader_TypeInfo_12d4df8);
    native_sub_43273c(&MG_BlocksEngine2_Block_I_BE2_BlockSection_TypeInfo_12d4de8);
    bRam000000000133ea4a = 1;
  }
  plVar9 = *(long **)(param_3 + 0x28);
  if (plVar9 != (long *)0x0) {
    lVar4 = *plVar9;
    plVar8 = *(long **)(param_3 + 0x30);
    if ((ulong)*(ushort *)(lVar4 + 0x12a) != 0) {
      uVar6 = 0;
      piVar7 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == _MG_BlocksEngine2_Block_I_BE2_BlockLayout_TypeInfo_12d4de0) {
          puVar2 = (undefined8 *)(lVar4 + (long)(*piVar7 + 3) * 0x10 + 0x138);
          goto LAB_0056681c;
        }
        uVar6 = uVar6 + 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 < *(ushort *)(lVar4 + 0x12a));
    }
    puVar2 = (undefined8 *)
             native_sub_3c9b34(plVar9,_MG_BlocksEngine2_Block_I_BE2_BlockLayout_TypeInfo_12d4de0,3);
LAB_0056681c:
    (*(code *)*puVar2)(plVar9,puVar2[1]);
    if (plVar8 == (long *)0x0) goto LAB_00566ac8;
    (**(code **)(*plVar8 + 0x2a8))(plVar8,*(undefined8 *)(*plVar8 + 0x2b0));
  }
  plVar9 = *(long **)(param_3 + 0x20);
  if (plVar9 != (long *)0x0) {
    lVar4 = *plVar9;
    if ((ulong)*(ushort *)(lVar4 + 0x12a) != 0) {
      uVar6 = 0;
      piVar7 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == _MG_BlocksEngine2_Block_I_BE2_BlockSection_TypeInfo_12d4de8) {
          puVar2 = (undefined8 *)(lVar4 + (long)*piVar7 * 0x10 + 0x138);
          goto LAB_005668a4;
        }
        uVar6 = uVar6 + 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 < *(ushort *)(lVar4 + 0x12a));
    }
    puVar2 = (undefined8 *)
             native_sub_3c9b34(plVar9,_MG_BlocksEngine2_Block_I_BE2_BlockSection_TypeInfo_12d4de8,0)
    ;
LAB_005668a4:
    lVar4 = (*(code *)*puVar2)(plVar9,puVar2[1]);
    if ((lVar4 != 0) &&
       (lVar4 = native_UnityEngine_Component__get_transform_8da62c(lVar4,0), lVar4 != 0)) {
      iVar1 = native_UnityEngine_Transform__GetSiblingIndex_772b74(lVar4,0);
      if (iVar1 == 0) {
        lVar4 = *(long *)(param_3 + 0x48);
        if (lVar4 == 0) goto LAB_00566ac8;
        iVar1 = *(int *)(lVar4 + 0x18);
        if (0 < iVar1) {
          uVar10 = 0;
          fVar11 = 0.0;
          do {
            if (*(uint *)(lVar4 + 0x18) <= uVar10) goto LAB_00566c68;
            plVar9 = *(long **)(lVar4 + (long)(int)uVar10 * 8 + 0x20);
            if (plVar9 == (long *)0x0) break;
            lVar4 = *plVar9;
            if ((ulong)*(ushort *)(lVar4 + 0x12a) != 0) {
              uVar6 = 0;
              piVar7 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
              do {
                if (*(long *)(piVar7 + -2) ==
                    _MG_BlocksEngine2_Block_I_BE2_BlockSectionHeaderItem_TypeInfo_12d4e08) {
                  puVar2 = (undefined8 *)(lVar4 + (long)(*piVar7 + 1) * 0x10 + 0x138);
                  goto LAB_005669c8;
                }
                uVar6 = uVar6 + 1;
                piVar7 = piVar7 + 4;
              } while (uVar6 < *(ushort *)(lVar4 + 0x12a));
            }
            puVar2 = (undefined8 *)
                     native_sub_3c9b34(plVar9,
                                       _MG_BlocksEngine2_Block_I_BE2_BlockSectionHeaderItem_TypeInfo_12d4e08
                                       ,1);
LAB_005669c8:
            (*(code *)*puVar2)(plVar9,puVar2[1]);
            lVar4 = *plVar9;
            if ((ulong)*(ushort *)(lVar4 + 0x12a) != 0) {
              uVar6 = 0;
              piVar7 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
              do {
                if (*(long *)(piVar7 + -2) ==
                    _MG_BlocksEngine2_Block_I_BE2_BlockSectionHeaderItem_TypeInfo_12d4e08) {
                  puVar2 = (undefined8 *)(lVar4 + (long)(*piVar7 + 1) * 0x10 + 0x138);
                  goto LAB_00566a30;
                }
                uVar6 = uVar6 + 1;
                piVar7 = piVar7 + 4;
              } while (uVar6 < *(ushort *)(lVar4 + 0x12a));
            }
            puVar2 = (undefined8 *)
                     native_sub_3c9b34(plVar9,
                                       _MG_BlocksEngine2_Block_I_BE2_BlockSectionHeaderItem_TypeInfo_12d4e08
                                       ,1);
LAB_00566a30:
            (*(code *)*puVar2)(plVar9,puVar2[1]);
            if (fVar11 < param_2) {
              lVar4 = *plVar9;
              if ((ulong)*(ushort *)(lVar4 + 0x12a) != 0) {
                uVar6 = 0;
                piVar7 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar7 + -2) ==
                      _MG_BlocksEngine2_Block_I_BE2_BlockSectionHeaderItem_TypeInfo_12d4e08) {
                    puVar2 = (undefined8 *)(lVar4 + (long)(*piVar7 + 1) * 0x10 + 0x138);
                    goto LAB_00566aa0;
                  }
                  uVar6 = uVar6 + 1;
                  piVar7 = piVar7 + 4;
                } while (uVar6 < *(ushort *)(lVar4 + 0x12a));
              }
              puVar2 = (undefined8 *)
                       native_sub_3c9b34(plVar9,
                                         _MG_BlocksEngine2_Block_I_BE2_BlockSectionHeaderItem_TypeInfo_12d4e08
                                         ,1);
LAB_00566aa0:
              (*(code *)*puVar2)(plVar9,puVar2[1]);
              fVar11 = param_2;
            }
            uVar10 = uVar10 + 1;
            if (iVar1 <= (int)uVar10) goto LAB_00566c0c;
            lVar4 = *(long *)(param_3 + 0x48);
          } while (lVar4 != 0);
          goto LAB_00566ac8;
        }
LAB_00566c0c:
        lVar4 = *(long *)(param_3 + 0x18);
      }
      else {
        plVar9 = *(long **)(param_3 + 0x28);
        if (plVar9 == (long *)0x0) goto LAB_00566ac8;
        lVar5 = *plVar9;
        lVar4 = *(long *)(param_3 + 0x18);
        if ((ulong)*(ushort *)(lVar5 + 0x12a) != 0) {
          uVar6 = 0;
          piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
          do {
            if (*(long *)(piVar7 + -2) == _MG_BlocksEngine2_Block_I_BE2_BlockLayout_TypeInfo_12d4de0
               ) {
              puVar2 = (undefined8 *)(lVar5 + (long)(*piVar7 + 2) * 0x10 + 0x138);
              goto LAB_00566ae4;
            }
            uVar6 = uVar6 + 1;
            piVar7 = piVar7 + 4;
          } while (uVar6 < *(ushort *)(lVar5 + 0x12a));
        }
        puVar2 = (undefined8 *)
                 native_sub_3c9b34(plVar9,_MG_BlocksEngine2_Block_I_BE2_BlockLayout_TypeInfo_12d4de0
                                   ,2);
LAB_00566ae4:
        lVar5 = (*(code *)*puVar2)(plVar9,puVar2[1]);
        if (lVar5 == 0) goto LAB_00566ac8;
        if (*(int *)(lVar5 + 0x18) == 0) {
LAB_00566c68:
          uVar3 = native_sub_43283c();
                    /* WARNING: Subroutine does not return */
          native_sub_4327dc(uVar3,0);
        }
        plVar9 = *(long **)(lVar5 + 0x20);
        if (plVar9 == (long *)0x0) goto LAB_00566ac8;
        lVar5 = *plVar9;
        if ((ulong)*(ushort *)(lVar5 + 0x12a) != 0) {
          uVar6 = 0;
          piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
          do {
            if (*(long *)(piVar7 + -2) ==
                _MG_BlocksEngine2_Block_I_BE2_BlockSection_TypeInfo_12d4de8) {
              puVar2 = (undefined8 *)(lVar5 + (long)(*piVar7 + 1) * 0x10 + 0x138);
              goto LAB_00566b5c;
            }
            uVar6 = uVar6 + 1;
            piVar7 = piVar7 + 4;
          } while (uVar6 < *(ushort *)(lVar5 + 0x12a));
        }
        puVar2 = (undefined8 *)
                 native_sub_3c9b34(plVar9,
                                   _MG_BlocksEngine2_Block_I_BE2_BlockSection_TypeInfo_12d4de8,1);
LAB_00566b5c:
        plVar9 = (long *)(*(code *)*puVar2)(plVar9,puVar2[1]);
        if (plVar9 == (long *)0x0) goto LAB_00566ac8;
        lVar5 = *plVar9;
        if ((ulong)*(ushort *)(lVar5 + 0x12a) != 0) {
          uVar6 = 0;
          piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
          do {
            if (*(long *)(piVar7 + -2) ==
                _MG_BlocksEngine2_Block_I_BE2_BlockSectionHeader_TypeInfo_12d4df8) {
              puVar2 = (undefined8 *)(lVar5 + (long)(*piVar7 + 3) * 0x10 + 0x138);
              goto LAB_00566bd0;
            }
            uVar6 = uVar6 + 1;
            piVar7 = piVar7 + 4;
          } while (uVar6 < *(ushort *)(lVar5 + 0x12a));
        }
        puVar2 = (undefined8 *)
                 native_sub_3c9b34(plVar9,
                                   _MG_BlocksEngine2_Block_I_BE2_BlockSectionHeader_TypeInfo_12d4df8
                                   ,3);
LAB_00566bd0:
        (*(code *)*puVar2)(plVar9,puVar2[1]);
        if (*(long *)(param_3 + 0x18) == 0) goto LAB_00566ac8;
        native_UnityEngine_RectTransform__get_sizeDelta_764f64(*(long *)(param_3 + 0x18),0);
      }
      if (lVar4 != 0) {
        if (pcRam000000000133f8e8 == (code *)0x0) {
          pcRam000000000133f8e8 = (code *)native_sub_4326f0(&UNK_00e28502,0);
        }
        (*pcRam000000000133f8e8)(lVar4,&stack0xffffffffffffffd8);
        return;
      }
    }
  }
LAB_00566ac8:
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* MG_BlocksEngine2.Block.BE2_BlockSectionHeader$$.ctor @ 0x566c74
 * void MG_BlocksEngine2_Block_BE2_BlockSectionHeader___ctor (MG_BlocksEngine2_Block_BE2_BlockSectionHeader_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MG_BlocksEngine2.Block.BE2_BlockSectionHeader$$.ctor
   void MG_BlocksEngine2_Block_BE2_BlockSectionHeader___ctor
   (MG_BlocksEngine2_Block_BE2_BlockSectionHeader_o* __this, const MethodInfo* method); */

undefined1  [16] native_MG_BlocksEngine2_Block_BE2_BlockSectionHeader___ctor_566c74(ulong param_1)

{
  undefined1 auVar1 [16];
  
  *(undefined4 *)(param_1 + 0x3c) = 0x43160000;
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


