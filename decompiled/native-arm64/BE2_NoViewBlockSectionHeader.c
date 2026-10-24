/* ARM64 IL2CPP native pseudocode from Ghidra.
 * Recovered implementation, not original C# source.
 * Function boundaries follow the IL2CPP method address table. */


/* MG_BlocksEngine2.Block.BE2_NoViewBlockSectionHeader$$get_RectTransform @ 0x6127fc
 * UnityEngine_RectTransform_o* MG_BlocksEngine2_Block_BE2_NoViewBlockSectionHeader__get_RectTransform (MG_BlocksEngine2_Block_BE2_NoViewBlockSectionHeader_o* __this, const MethodInfo* method); */

/* MG_BlocksEngine2.Block.BE2_NoViewBlockSectionHeader$$get_RectTransform
   UnityEngine_RectTransform_o*
   MG_BlocksEngine2_Block_BE2_NoViewBlockSectionHeader__get_RectTransform
   (MG_BlocksEngine2_Block_BE2_NoViewBlockSectionHeader_o* __this, const MethodInfo* method); */

undefined8
native_MG_BlocksEngine2_Block_BE2_NoViewBlockSectionHeader__get_RectTransform_6127fc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* MG_BlocksEngine2.Block.BE2_NoViewBlockSectionHeader$$get_Size @ 0x612804
 * UnityEngine_Vector2_o MG_BlocksEngine2_Block_BE2_NoViewBlockSectionHeader__get_Size (MG_BlocksEngine2_Block_BE2_NoViewBlockSectionHeader_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MG_BlocksEngine2.Block.BE2_NoViewBlockSectionHeader$$get_Size
   UnityEngine_Vector2_o MG_BlocksEngine2_Block_BE2_NoViewBlockSectionHeader__get_Size
   (MG_BlocksEngine2_Block_BE2_NoViewBlockSectionHeader_o* __this, const MethodInfo* method); */

undefined8 native_MG_BlocksEngine2_Block_BE2_NoViewBlockSectionHeader__get_Size_612804(void)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  if ((bRam000000000133ff9e & 1) == 0) {
    uVar1 = native_sub_43273c(&UnityEngine_Vector2_TypeInfo_12d66e0);
    bRam000000000133ff9e = 1;
  }
  return uVar1;
}



/* MG_BlocksEngine2.Block.BE2_NoViewBlockSectionHeader$$get_ItemsArray @ 0x61280c
 * MG_BlocksEngine2_Block_I_BE2_BlockSectionHeaderItem_array* MG_BlocksEngine2_Block_BE2_NoViewBlockSectionHeader__get_ItemsArray (MG_BlocksEngine2_Block_BE2_NoViewBlockSectionHeader_o* __this, const MethodInfo* method); */

/* MG_BlocksEngine2.Block.BE2_NoViewBlockSectionHeader$$get_ItemsArray
   MG_BlocksEngine2_Block_I_BE2_BlockSectionHeaderItem_array*
   MG_BlocksEngine2_Block_BE2_NoViewBlockSectionHeader__get_ItemsArray
   (MG_BlocksEngine2_Block_BE2_NoViewBlockSectionHeader_o* __this, const MethodInfo* method); */

undefined8
native_MG_BlocksEngine2_Block_BE2_NoViewBlockSectionHeader__get_ItemsArray_61280c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* MG_BlocksEngine2.Block.BE2_NoViewBlockSectionHeader$$get_InputsArray @ 0x612814
 * MG_BlocksEngine2_Block_I_BE2_BlockSectionHeaderInput_array* MG_BlocksEngine2_Block_BE2_NoViewBlockSectionHeader__get_InputsArray (MG_BlocksEngine2_Block_BE2_NoViewBlockSectionHeader_o* __this, const MethodInfo* method); */

/* MG_BlocksEngine2.Block.BE2_NoViewBlockSectionHeader$$get_InputsArray
   MG_BlocksEngine2_Block_I_BE2_BlockSectionHeaderInput_array*
   MG_BlocksEngine2_Block_BE2_NoViewBlockSectionHeader__get_InputsArray
   (MG_BlocksEngine2_Block_BE2_NoViewBlockSectionHeader_o* __this, const MethodInfo* method); */

undefined8
native_MG_BlocksEngine2_Block_BE2_NoViewBlockSectionHeader__get_InputsArray_612814(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



/* MG_BlocksEngine2.Block.BE2_NoViewBlockSectionHeader$$get_Shadow @ 0x61281c
 * UnityEngine_UI_Shadow_o* MG_BlocksEngine2_Block_BE2_NoViewBlockSectionHeader__get_Shadow (MG_BlocksEngine2_Block_BE2_NoViewBlockSectionHeader_o* __this, const MethodInfo* method); */

/* MG_BlocksEngine2.Block.BE2_NoViewBlockSectionHeader$$get_Shadow
   UnityEngine_UI_Shadow_o* MG_BlocksEngine2_Block_BE2_NoViewBlockSectionHeader__get_Shadow
   (MG_BlocksEngine2_Block_BE2_NoViewBlockSectionHeader_o* __this, const MethodInfo* method); */

undefined8
native_MG_BlocksEngine2_Block_BE2_NoViewBlockSectionHeader__get_Shadow_61281c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x40);
}



/* MG_BlocksEngine2.Block.BE2_NoViewBlockSectionHeader$$OnValidate @ 0x612824
 * void MG_BlocksEngine2_Block_BE2_NoViewBlockSectionHeader__OnValidate (MG_BlocksEngine2_Block_BE2_NoViewBlockSectionHeader_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MG_BlocksEngine2.Block.BE2_NoViewBlockSectionHeader$$OnValidate
   void MG_BlocksEngine2_Block_BE2_NoViewBlockSectionHeader__OnValidate
   (MG_BlocksEngine2_Block_BE2_NoViewBlockSectionHeader_o* __this, const MethodInfo* method); */

void native_MG_BlocksEngine2_Block_BE2_NoViewBlockSectionHeader__OnValidate_612824(long param_1)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  undefined8 uVar4;
  long lVar5;
  ulong uVar6;
  undefined8 *puVar7;
  
  if ((bRam000000000133ee6b & 1) == 0) {
    native_sub_43273c(&Method_UnityEngine_Component_GetComponent_I_BE2_BlockLayout____12e2a10);
    native_sub_43273c(&Method_UnityEngine_Component_GetComponent_I_BE2_BlockSection____12e2a18);
    native_sub_43273c(&Method_UnityEngine_Component_GetComponent_RectTransform____12e2ad0);
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    bRam000000000133ee6b = 1;
  }
  native_MG_BlocksEngine2_Block_BE2_NoViewBlockSectionHeader__UpdateItemsArray_61299c(param_1);
  native_MG_BlocksEngine2_Block_BE2_NoViewBlockSectionHeader__UpdateInputsArray_612b48(param_1);
  uVar4 = native_UnityEngine_Component__GetComponent_ActiveAnimation__49daec
                    (param_1,_Method_UnityEngine_Component_GetComponent_RectTransform____12e2ad0);
  *(undefined8 *)(param_1 + 0x18) = uVar4;
  native_sub_4326e0(param_1 + 0x18);
  lVar5 = native_UnityEngine_Component__get_transform_8da62c(param_1,0);
  if (lVar5 != 0) {
    uVar4 = native_UnityEngine_Transform__get_parent_765eb0(lVar5,0);
    if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
      native_sub_4327ec(_UnityEngine_Object_TypeInfo_12d54e0);
    }
    uVar6 = native_UnityEngine_Object__op_Implicit_8e1b98(uVar4,0);
    if ((uVar6 & 1) == 0) {
      return;
    }
    lVar5 = native_UnityEngine_Component__get_transform_8da62c(param_1,0);
    if ((lVar5 != 0) &&
       (lVar5 = native_UnityEngine_Transform__get_parent_765eb0(lVar5,0), lVar5 != 0)) {
      uVar4 = native_UnityEngine_Component__GetComponent_ActiveAnimation__49daec
                        (lVar5,
                         _Method_UnityEngine_Component_GetComponent_I_BE2_BlockSection____12e2a18);
      *(undefined8 *)(param_1 + 0x20) = uVar4;
      native_sub_4326e0();
      lVar5 = native_UnityEngine_Component__get_transform_8da62c(param_1,0);
      if ((lVar5 != 0) &&
         ((lVar5 = native_UnityEngine_Transform__get_parent_765eb0(lVar5,0), lVar5 != 0 &&
          (lVar5 = native_UnityEngine_Transform__get_parent_765eb0(lVar5,0), lVar5 != 0)))) {
        uVar4 = native_UnityEngine_Component__GetComponent_ActiveAnimation__49daec
                          (lVar5,
                           _Method_UnityEngine_Component_GetComponent_I_BE2_BlockLayout____12e2a10);
        puVar7 = (undefined8 *)(param_1 + 0x28);
        *puVar7 = uVar4;
        if (iRam0000000001345318 != 0) {
          puVar1 = (ulong *)(((ulong)puVar7 >> 0x12 & 0x7fff) * 8 + 0x138ecd8);
          do {
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
            if (bVar3) {
              *puVar1 = *puVar1 | 1L << ((ulong)puVar7 >> 0xc & 0x3f);
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
        }
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* MG_BlocksEngine2.Block.BE2_NoViewBlockSectionHeader$$Awake @ 0x612828
 * void MG_BlocksEngine2_Block_BE2_NoViewBlockSectionHeader__Awake (MG_BlocksEngine2_Block_BE2_NoViewBlockSectionHeader_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MG_BlocksEngine2.Block.BE2_NoViewBlockSectionHeader$$Awake
   void MG_BlocksEngine2_Block_BE2_NoViewBlockSectionHeader__Awake
   (MG_BlocksEngine2_Block_BE2_NoViewBlockSectionHeader_o* __this, const MethodInfo* method); */

void native_MG_BlocksEngine2_Block_BE2_NoViewBlockSectionHeader__Awake_612828(long param_1)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  undefined8 uVar4;
  long lVar5;
  ulong uVar6;
  undefined8 *puVar7;
  
  if ((bRam000000000133ee6b & 1) == 0) {
    native_sub_43273c(&Method_UnityEngine_Component_GetComponent_I_BE2_BlockLayout____12e2a10);
    native_sub_43273c(&Method_UnityEngine_Component_GetComponent_I_BE2_BlockSection____12e2a18);
    native_sub_43273c(&Method_UnityEngine_Component_GetComponent_RectTransform____12e2ad0);
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    bRam000000000133ee6b = 1;
  }
  native_MG_BlocksEngine2_Block_BE2_NoViewBlockSectionHeader__UpdateItemsArray_61299c(param_1);
  native_MG_BlocksEngine2_Block_BE2_NoViewBlockSectionHeader__UpdateInputsArray_612b48(param_1);
  uVar4 = native_UnityEngine_Component__GetComponent_ActiveAnimation__49daec
                    (param_1,_Method_UnityEngine_Component_GetComponent_RectTransform____12e2ad0);
  *(undefined8 *)(param_1 + 0x18) = uVar4;
  native_sub_4326e0(param_1 + 0x18);
  lVar5 = native_UnityEngine_Component__get_transform_8da62c(param_1,0);
  if (lVar5 != 0) {
    uVar4 = native_UnityEngine_Transform__get_parent_765eb0(lVar5,0);
    if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
      native_sub_4327ec(_UnityEngine_Object_TypeInfo_12d54e0);
    }
    uVar6 = native_UnityEngine_Object__op_Implicit_8e1b98(uVar4,0);
    if ((uVar6 & 1) == 0) {
      return;
    }
    lVar5 = native_UnityEngine_Component__get_transform_8da62c(param_1,0);
    if ((lVar5 != 0) &&
       (lVar5 = native_UnityEngine_Transform__get_parent_765eb0(lVar5,0), lVar5 != 0)) {
      uVar4 = native_UnityEngine_Component__GetComponent_ActiveAnimation__49daec
                        (lVar5,
                         _Method_UnityEngine_Component_GetComponent_I_BE2_BlockSection____12e2a18);
      *(undefined8 *)(param_1 + 0x20) = uVar4;
      native_sub_4326e0();
      lVar5 = native_UnityEngine_Component__get_transform_8da62c(param_1,0);
      if ((lVar5 != 0) &&
         ((lVar5 = native_UnityEngine_Transform__get_parent_765eb0(lVar5,0), lVar5 != 0 &&
          (lVar5 = native_UnityEngine_Transform__get_parent_765eb0(lVar5,0), lVar5 != 0)))) {
        uVar4 = native_UnityEngine_Component__GetComponent_ActiveAnimation__49daec
                          (lVar5,
                           _Method_UnityEngine_Component_GetComponent_I_BE2_BlockLayout____12e2a10);
        puVar7 = (undefined8 *)(param_1 + 0x28);
        *puVar7 = uVar4;
        if (iRam0000000001345318 != 0) {
          puVar1 = (ulong *)(((ulong)puVar7 >> 0x12 & 0x7fff) * 8 + 0x138ecd8);
          do {
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
            if (bVar3) {
              *puVar1 = *puVar1 | 1L << ((ulong)puVar7 >> 0xc & 0x3f);
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
        }
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* MG_BlocksEngine2.Block.BE2_NoViewBlockSectionHeader$$OnEnable @ 0x612cf4
 * void MG_BlocksEngine2_Block_BE2_NoViewBlockSectionHeader__OnEnable (MG_BlocksEngine2_Block_BE2_NoViewBlockSectionHeader_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MG_BlocksEngine2.Block.BE2_NoViewBlockSectionHeader$$OnEnable
   void MG_BlocksEngine2_Block_BE2_NoViewBlockSectionHeader__OnEnable
   (MG_BlocksEngine2_Block_BE2_NoViewBlockSectionHeader_o* __this, const MethodInfo* method); */

void native_MG_BlocksEngine2_Block_BE2_NoViewBlockSectionHeader__OnEnable_612cf4(long *param_1)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long lStack_38;
  
  if ((bRam000000000133ee6c & 1) == 0) {
    native_sub_43273c(&UnityEngine_Events_UnityAction_TypeInfo_12d65d0);
    bRam000000000133ee6c = 1;
  }
  lVar3 = native_MG_BlocksEngine2_Core_BE2_MainEventsManager__get_Instance_6001fc();
  uVar4 = native_sub_432808(_UnityEngine_Events_UnityAction_TypeInfo_12d65d0);
  if ((param_1 != (long *)0x0) &&
     (native_UnityEngine_Events_UnityAction___ctor_773130
                (uVar4,param_1,*(undefined8 *)(*param_1 + 0x1e0),0), lVar3 != 0)) {
    native_MG_BlocksEngine2_Core_BE2_EventsManager__StartListening_563268(lVar3,2,uVar4,0);
    lVar3 = native_MG_BlocksEngine2_Core_BE2_MainEventsManager__get_Instance_6001fc();
    uVar4 = native_sub_432808(_UnityEngine_Events_UnityAction_TypeInfo_12d65d0);
    native_UnityEngine_Events_UnityAction___ctor_773130
              (uVar4,param_1,*(undefined8 *)(*param_1 + 0x1e0),0);
    if (lVar3 != 0) {
      native_MG_BlocksEngine2_Core_BE2_EventsManager__StartListening_563268(lVar3,3,uVar4,0);
      lVar3 = native_MG_BlocksEngine2_Core_BE2_MainEventsManager__get_Instance_6001fc();
      uVar4 = native_sub_432808(_UnityEngine_Events_UnityAction_TypeInfo_12d65d0);
      native_UnityEngine_Events_UnityAction___ctor_773130
                (uVar4,param_1,*(undefined8 *)(*param_1 + 0x1f0),0);
      if (lVar3 != 0) {
        if ((bRam000000000133eaf4 & 1) == 0) {
          native_sub_43273c(&
                            Method_System_Collections_Generic_Dictionary_BE2EventTypes__UnityEvent__Add___12d8ea0
                            ,3,uVar4,0);
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



/* MG_BlocksEngine2.Block.BE2_NoViewBlockSectionHeader$$OnDisable @ 0x612e10
 * void MG_BlocksEngine2_Block_BE2_NoViewBlockSectionHeader__OnDisable (MG_BlocksEngine2_Block_BE2_NoViewBlockSectionHeader_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MG_BlocksEngine2.Block.BE2_NoViewBlockSectionHeader$$OnDisable
   void MG_BlocksEngine2_Block_BE2_NoViewBlockSectionHeader__OnDisable
   (MG_BlocksEngine2_Block_BE2_NoViewBlockSectionHeader_o* __this, const MethodInfo* method); */

void native_MG_BlocksEngine2_Block_BE2_NoViewBlockSectionHeader__OnDisable_612e10(long *param_1)

{
  ulong uVar1;
  long lVar2;
  undefined8 uVar3;
  long lStack_38;
  
  if ((bRam000000000133ee6d & 1) == 0) {
    native_sub_43273c(&UnityEngine_Events_UnityAction_TypeInfo_12d65d0);
    bRam000000000133ee6d = 1;
  }
  lVar2 = native_MG_BlocksEngine2_Core_BE2_MainEventsManager__get_Instance_6001fc();
  uVar3 = native_sub_432808(_UnityEngine_Events_UnityAction_TypeInfo_12d65d0);
  if ((param_1 != (long *)0x0) &&
     (native_UnityEngine_Events_UnityAction___ctor_773130
                (uVar3,param_1,*(undefined8 *)(*param_1 + 0x1e0),0), lVar2 != 0)) {
    native_MG_BlocksEngine2_Core_BE2_EventsManager__StopListening_56340c(lVar2,2,uVar3,0);
    lVar2 = native_MG_BlocksEngine2_Core_BE2_MainEventsManager__get_Instance_6001fc();
    uVar3 = native_sub_432808(_UnityEngine_Events_UnityAction_TypeInfo_12d65d0);
    native_UnityEngine_Events_UnityAction___ctor_773130
              (uVar3,param_1,*(undefined8 *)(*param_1 + 0x1e0),0);
    if (lVar2 != 0) {
      native_MG_BlocksEngine2_Core_BE2_EventsManager__StopListening_56340c(lVar2,3,uVar3,0);
      lVar2 = native_MG_BlocksEngine2_Core_BE2_MainEventsManager__get_Instance_6001fc();
      uVar3 = native_sub_432808(_UnityEngine_Events_UnityAction_TypeInfo_12d65d0);
      native_UnityEngine_Events_UnityAction___ctor_773130
                (uVar3,param_1,*(undefined8 *)(*param_1 + 0x1f0),0);
      if (lVar2 != 0) {
        if ((bRam000000000133eaf6 & 1) == 0) {
          native_sub_43273c(&
                            Method_System_Collections_Generic_Dictionary_BE2EventTypes__UnityEvent__TryGetValue___12d8ea8
                            ,3,uVar3,0);
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



/* MG_BlocksEngine2.Block.BE2_NoViewBlockSectionHeader$$UpdateItemsArray @ 0x61299c
 * void MG_BlocksEngine2_Block_BE2_NoViewBlockSectionHeader__UpdateItemsArray (MG_BlocksEngine2_Block_BE2_NoViewBlockSectionHeader_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MG_BlocksEngine2.Block.BE2_NoViewBlockSectionHeader$$UpdateItemsArray
   void MG_BlocksEngine2_Block_BE2_NoViewBlockSectionHeader__UpdateItemsArray
   (MG_BlocksEngine2_Block_BE2_NoViewBlockSectionHeader_o* __this, const MethodInfo* method); */

void native_MG_BlocksEngine2_Block_BE2_NoViewBlockSectionHeader__UpdateItemsArray_61299c
               (long param_1)

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
  
  if ((bRam000000000133ee6e & 1) == 0) {
    native_sub_43273c(&
                      Method_MG_BlocksEngine2_Utils_BE2_ArrayUtils_Add_I_BE2_BlockSectionHeaderItem____12e20b0
                     );
    native_sub_43273c(&
                      Method_UnityEngine_Component_GetComponent_I_BE2_BlockSectionHeaderItem____12e2a38
                     );
    native_sub_43273c(&MG_BlocksEngine2_Block_I_BE2_BlockSectionHeaderItem___TypeInfo_12d3230);
    native_sub_43273c(&MG_BlocksEngine2_Block_I_BE2_BlockSectionHeaderItem_TypeInfo_12d4e08);
    bRam000000000133ee6e = 1;
  }
  uVar2 = native_sub_432750(_MG_BlocksEngine2_Block_I_BE2_BlockSectionHeaderItem___TypeInfo_12d3230,
                            0);
  puVar8 = (undefined8 *)(param_1 + 0x30);
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
        goto LAB_00612b44;
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
                goto LAB_00612ae8;
              }
              uVar6 = uVar6 + 1;
              piVar7 = piVar7 + 4;
            } while (uVar6 < *(ushort *)(lVar3 + 0x12a));
          }
          puVar5 = (undefined8 *)
                   native_sub_3c9b34(plVar4,
                                     _MG_BlocksEngine2_Block_I_BE2_BlockSectionHeaderItem_TypeInfo_12d4e08
                                     ,0);
LAB_00612ae8:
          lVar3 = (*(code *)*puVar5)(plVar4,puVar5[1]);
          if ((lVar3 == 0) ||
             (lVar3 = native_UnityEngine_Component__get_gameObject_8da66c(lVar3,0), lVar3 == 0))
          goto LAB_00612b44;
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
LAB_00612b44:
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* MG_BlocksEngine2.Block.BE2_NoViewBlockSectionHeader$$UpdateInputsArray @ 0x612b48
 * void MG_BlocksEngine2_Block_BE2_NoViewBlockSectionHeader__UpdateInputsArray (MG_BlocksEngine2_Block_BE2_NoViewBlockSectionHeader_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MG_BlocksEngine2.Block.BE2_NoViewBlockSectionHeader$$UpdateInputsArray
   void MG_BlocksEngine2_Block_BE2_NoViewBlockSectionHeader__UpdateInputsArray
   (MG_BlocksEngine2_Block_BE2_NoViewBlockSectionHeader_o* __this, const MethodInfo* method); */

void native_MG_BlocksEngine2_Block_BE2_NoViewBlockSectionHeader__UpdateInputsArray_612b48
               (long param_1)

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
  
  if ((bRam000000000133ee6f & 1) == 0) {
    native_sub_43273c(&
                      Method_MG_BlocksEngine2_Utils_BE2_ArrayUtils_Add_I_BE2_BlockSectionHeaderInput____12e20a8
                     );
    native_sub_43273c(&
                      Method_UnityEngine_Component_GetComponent_I_BE2_BlockSectionHeaderInput____12e2a30
                     );
    native_sub_43273c(&MG_BlocksEngine2_Block_I_BE2_BlockSectionHeaderInput___TypeInfo_12d3228);
    native_sub_43273c(&MG_BlocksEngine2_Block_I_BE2_BlockSectionHeaderInput_TypeInfo_12d4e00);
    bRam000000000133ee6f = 1;
  }
  uVar2 = native_sub_432750(_MG_BlocksEngine2_Block_I_BE2_BlockSectionHeaderInput___TypeInfo_12d3228
                            ,0);
  puVar8 = (undefined8 *)(param_1 + 0x38);
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
        goto LAB_00612cf0;
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
                goto LAB_00612c94;
              }
              uVar6 = uVar6 + 1;
              piVar7 = piVar7 + 4;
            } while (uVar6 < *(ushort *)(lVar3 + 0x12a));
          }
          puVar5 = (undefined8 *)
                   native_sub_3c9b34(plVar4,
                                     _MG_BlocksEngine2_Block_I_BE2_BlockSectionHeaderInput_TypeInfo_12d4e00
                                     ,0);
LAB_00612c94:
          lVar3 = (*(code *)*puVar5)(plVar4,puVar5[1]);
          if ((lVar3 == 0) ||
             (lVar3 = native_UnityEngine_Component__get_gameObject_8da66c(lVar3,0), lVar3 == 0))
          goto LAB_00612cf0;
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
LAB_00612cf0:
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* MG_BlocksEngine2.Block.BE2_NoViewBlockSectionHeader$$UpdateLayout @ 0x612f2c
 * void MG_BlocksEngine2_Block_BE2_NoViewBlockSectionHeader__UpdateLayout (MG_BlocksEngine2_Block_BE2_NoViewBlockSectionHeader_o* __this, const MethodInfo* method); */

/* MG_BlocksEngine2.Block.BE2_NoViewBlockSectionHeader$$UpdateLayout
   void MG_BlocksEngine2_Block_BE2_NoViewBlockSectionHeader__UpdateLayout
   (MG_BlocksEngine2_Block_BE2_NoViewBlockSectionHeader_o* __this, const MethodInfo* method); */

void native_MG_BlocksEngine2_Block_BE2_NoViewBlockSectionHeader__UpdateLayout_612f2c(void)

{
  return;
}



/* MG_BlocksEngine2.Block.BE2_NoViewBlockSectionHeader$$.ctor @ 0x612f30
 * void MG_BlocksEngine2_Block_BE2_NoViewBlockSectionHeader___ctor (MG_BlocksEngine2_Block_BE2_NoViewBlockSectionHeader_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MG_BlocksEngine2.Block.BE2_NoViewBlockSectionHeader$$.ctor
   void MG_BlocksEngine2_Block_BE2_NoViewBlockSectionHeader___ctor
   (MG_BlocksEngine2_Block_BE2_NoViewBlockSectionHeader_o* __this, const MethodInfo* method); */

undefined1  [16]
native_MG_BlocksEngine2_Block_BE2_NoViewBlockSectionHeader___ctor_612f30(ulong param_1)

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


