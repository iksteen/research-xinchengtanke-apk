/* ARM64 IL2CPP native pseudocode from Ghidra.
 * Recovered implementation, not original C# source.
 * Function boundaries follow the IL2CPP method address table. */


/* MG_BlocksEngine2.Horizontal.Block.BE2_HorizontalBlockSectionBody$$get_RectTransform @ 0x5fe45c
 * UnityEngine_RectTransform_o* MG_BlocksEngine2_Horizontal_Block_BE2_HorizontalBlockSectionBody__get_RectTransform (MG_BlocksEngine2_Horizontal_Block_BE2_HorizontalBlockSectionBody_o* __this, const MethodInfo* method); */

/* MG_BlocksEngine2.Horizontal.Block.BE2_HorizontalBlockSectionBody$$get_RectTransform
   UnityEngine_RectTransform_o*
   MG_BlocksEngine2_Horizontal_Block_BE2_HorizontalBlockSectionBody__get_RectTransform
   (MG_BlocksEngine2_Horizontal_Block_BE2_HorizontalBlockSectionBody_o* __this, const MethodInfo*
   method); */

undefined8
native_MG_BlocksEngine2_Horizontal_Block_BE2_HorizontalBlockSectionBody__get_RectTransform_5fe45c
          (long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* MG_BlocksEngine2.Horizontal.Block.BE2_HorizontalBlockSectionBody$$get_ChildBlocksArray @ 0x5fe464
 * MG_BlocksEngine2_Block_I_BE2_Block_array* MG_BlocksEngine2_Horizontal_Block_BE2_HorizontalBlockSectionBody__get_ChildBlocksArray (MG_BlocksEngine2_Horizontal_Block_BE2_HorizontalBlockSectionBody_o* __this, const MethodInfo* method); */

/* MG_BlocksEngine2.Horizontal.Block.BE2_HorizontalBlockSectionBody$$get_ChildBlocksArray
   MG_BlocksEngine2_Block_I_BE2_Block_array*
   MG_BlocksEngine2_Horizontal_Block_BE2_HorizontalBlockSectionBody__get_ChildBlocksArray
   (MG_BlocksEngine2_Horizontal_Block_BE2_HorizontalBlockSectionBody_o* __this, const MethodInfo*
   method); */

undefined8
native_MG_BlocksEngine2_Horizontal_Block_BE2_HorizontalBlockSectionBody__get_ChildBlocksArray_5fe464
          (long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



/* MG_BlocksEngine2.Horizontal.Block.BE2_HorizontalBlockSectionBody$$set_ChildBlocksArray @ 0x5fe46c
 * void MG_BlocksEngine2_Horizontal_Block_BE2_HorizontalBlockSectionBody__set_ChildBlocksArray (MG_BlocksEngine2_Horizontal_Block_BE2_HorizontalBlockSectionBody_o* __this, MG_BlocksEngine2_Block_I_BE2_Block_array* value, const MethodInfo* method); */

/* MG_BlocksEngine2.Horizontal.Block.BE2_HorizontalBlockSectionBody$$set_ChildBlocksArray
   void MG_BlocksEngine2_Horizontal_Block_BE2_HorizontalBlockSectionBody__set_ChildBlocksArray
   (MG_BlocksEngine2_Horizontal_Block_BE2_HorizontalBlockSectionBody_o* __this,
   MG_BlocksEngine2_Block_I_BE2_Block_array* value, const MethodInfo* method); */

void native_MG_BlocksEngine2_Horizontal_Block_BE2_HorizontalBlockSectionBody__set_ChildBlocksArray_5fe46c
               (long param_1,undefined8 param_2)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  
  puVar4 = (undefined8 *)(param_1 + 0x38);
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



/* MG_BlocksEngine2.Horizontal.Block.BE2_HorizontalBlockSectionBody$$get_BlockSection @ 0x5fe474
 * MG_BlocksEngine2_Block_I_BE2_BlockSection_o* MG_BlocksEngine2_Horizontal_Block_BE2_HorizontalBlockSectionBody__get_BlockSection (MG_BlocksEngine2_Horizontal_Block_BE2_HorizontalBlockSectionBody_o* __this, const MethodInfo* method); */

/* MG_BlocksEngine2.Horizontal.Block.BE2_HorizontalBlockSectionBody$$get_BlockSection
   MG_BlocksEngine2_Block_I_BE2_BlockSection_o*
   MG_BlocksEngine2_Horizontal_Block_BE2_HorizontalBlockSectionBody__get_BlockSection
   (MG_BlocksEngine2_Horizontal_Block_BE2_HorizontalBlockSectionBody_o* __this, const MethodInfo*
   method); */

undefined8
native_MG_BlocksEngine2_Horizontal_Block_BE2_HorizontalBlockSectionBody__get_BlockSection_5fe474
          (long param_1)

{
  return *(undefined8 *)(param_1 + 0x40);
}



/* MG_BlocksEngine2.Horizontal.Block.BE2_HorizontalBlockSectionBody$$set_BlockSection @ 0x5fe47c
 * void MG_BlocksEngine2_Horizontal_Block_BE2_HorizontalBlockSectionBody__set_BlockSection (MG_BlocksEngine2_Horizontal_Block_BE2_HorizontalBlockSectionBody_o* __this, MG_BlocksEngine2_Block_I_BE2_BlockSection_o* value, const MethodInfo* method); */

/* MG_BlocksEngine2.Horizontal.Block.BE2_HorizontalBlockSectionBody$$set_BlockSection
   void MG_BlocksEngine2_Horizontal_Block_BE2_HorizontalBlockSectionBody__set_BlockSection
   (MG_BlocksEngine2_Horizontal_Block_BE2_HorizontalBlockSectionBody_o* __this,
   MG_BlocksEngine2_Block_I_BE2_BlockSection_o* value, const MethodInfo* method); */

void native_MG_BlocksEngine2_Horizontal_Block_BE2_HorizontalBlockSectionBody__set_BlockSection_5fe47c
               (long param_1,undefined8 param_2)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  
  puVar4 = (undefined8 *)(param_1 + 0x40);
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



/* MG_BlocksEngine2.Horizontal.Block.BE2_HorizontalBlockSectionBody$$get_Size @ 0x5fe484
 * UnityEngine_Vector2_o MG_BlocksEngine2_Horizontal_Block_BE2_HorizontalBlockSectionBody__get_Size (MG_BlocksEngine2_Horizontal_Block_BE2_HorizontalBlockSectionBody_o* __this, const MethodInfo* method); */

/* MG_BlocksEngine2.Horizontal.Block.BE2_HorizontalBlockSectionBody$$get_Size
   UnityEngine_Vector2_o MG_BlocksEngine2_Horizontal_Block_BE2_HorizontalBlockSectionBody__get_Size
   (MG_BlocksEngine2_Horizontal_Block_BE2_HorizontalBlockSectionBody_o* __this, const MethodInfo*
   method); */

undefined4
native_MG_BlocksEngine2_Horizontal_Block_BE2_HorizontalBlockSectionBody__get_Size_5fe484
          (long param_1)

{
  long lVar1;
  undefined8 uStack_28;
  
  lVar1 = *(long *)(param_1 + 0x18);
  if (lVar1 != 0) {
    uStack_28 = 0;
    if (pcRam000000000133f8e0 == (code *)0x0) {
      pcRam000000000133f8e0 = (code *)native_sub_4326f0(&UNK_00e284ba,0);
    }
    (*pcRam000000000133f8e0)(lVar1,&uStack_28);
    return (undefined4)uStack_28;
  }
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* MG_BlocksEngine2.Horizontal.Block.BE2_HorizontalBlockSectionBody$$set_Size @ 0x5fe4a0
 * void MG_BlocksEngine2_Horizontal_Block_BE2_HorizontalBlockSectionBody__set_Size (MG_BlocksEngine2_Horizontal_Block_BE2_HorizontalBlockSectionBody_o* __this, UnityEngine_Vector2_o value, const MethodInfo* method); */

/* MG_BlocksEngine2.Horizontal.Block.BE2_HorizontalBlockSectionBody$$set_Size
   void MG_BlocksEngine2_Horizontal_Block_BE2_HorizontalBlockSectionBody__set_Size
   (MG_BlocksEngine2_Horizontal_Block_BE2_HorizontalBlockSectionBody_o* __this,
   UnityEngine_Vector2_o value, const MethodInfo* method); */

void native_MG_BlocksEngine2_Horizontal_Block_BE2_HorizontalBlockSectionBody__set_Size_5fe4a0
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



/* MG_BlocksEngine2.Horizontal.Block.BE2_HorizontalBlockSectionBody$$get_Spot @ 0x5fe4bc
 * MG_BlocksEngine2_Block_I_BE2_Spot_o* MG_BlocksEngine2_Horizontal_Block_BE2_HorizontalBlockSectionBody__get_Spot (MG_BlocksEngine2_Horizontal_Block_BE2_HorizontalBlockSectionBody_o* __this, const MethodInfo* method); */

/* MG_BlocksEngine2.Horizontal.Block.BE2_HorizontalBlockSectionBody$$get_Spot
   MG_BlocksEngine2_Block_I_BE2_Spot_o*
   MG_BlocksEngine2_Horizontal_Block_BE2_HorizontalBlockSectionBody__get_Spot
   (MG_BlocksEngine2_Horizontal_Block_BE2_HorizontalBlockSectionBody_o* __this, const MethodInfo*
   method); */

undefined8
native_MG_BlocksEngine2_Horizontal_Block_BE2_HorizontalBlockSectionBody__get_Spot_5fe4bc
          (long param_1)

{
  return *(undefined8 *)(param_1 + 0x48);
}



/* MG_BlocksEngine2.Horizontal.Block.BE2_HorizontalBlockSectionBody$$set_Spot @ 0x5fe4c4
 * void MG_BlocksEngine2_Horizontal_Block_BE2_HorizontalBlockSectionBody__set_Spot (MG_BlocksEngine2_Horizontal_Block_BE2_HorizontalBlockSectionBody_o* __this, MG_BlocksEngine2_Block_I_BE2_Spot_o* value, const MethodInfo* method); */

/* MG_BlocksEngine2.Horizontal.Block.BE2_HorizontalBlockSectionBody$$set_Spot
   void MG_BlocksEngine2_Horizontal_Block_BE2_HorizontalBlockSectionBody__set_Spot
   (MG_BlocksEngine2_Horizontal_Block_BE2_HorizontalBlockSectionBody_o* __this,
   MG_BlocksEngine2_Block_I_BE2_Spot_o* value, const MethodInfo* method); */

void native_MG_BlocksEngine2_Horizontal_Block_BE2_HorizontalBlockSectionBody__set_Spot_5fe4c4
               (long param_1,undefined8 param_2)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  
  puVar4 = (undefined8 *)(param_1 + 0x48);
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



/* MG_BlocksEngine2.Horizontal.Block.BE2_HorizontalBlockSectionBody$$get_ChildBlocksCount @ 0x5fe4cc
 * int32_t MG_BlocksEngine2_Horizontal_Block_BE2_HorizontalBlockSectionBody__get_ChildBlocksCount (MG_BlocksEngine2_Horizontal_Block_BE2_HorizontalBlockSectionBody_o* __this, const MethodInfo* method); */

/* MG_BlocksEngine2.Horizontal.Block.BE2_HorizontalBlockSectionBody$$get_ChildBlocksCount
   int32_t MG_BlocksEngine2_Horizontal_Block_BE2_HorizontalBlockSectionBody__get_ChildBlocksCount
   (MG_BlocksEngine2_Horizontal_Block_BE2_HorizontalBlockSectionBody_o* __this, const MethodInfo*
   method); */

undefined4
native_MG_BlocksEngine2_Horizontal_Block_BE2_HorizontalBlockSectionBody__get_ChildBlocksCount_5fe4cc
          (long param_1)

{
  return *(undefined4 *)(param_1 + 0x50);
}



/* MG_BlocksEngine2.Horizontal.Block.BE2_HorizontalBlockSectionBody$$set_ChildBlocksCount @ 0x5fe4d4
 * void MG_BlocksEngine2_Horizontal_Block_BE2_HorizontalBlockSectionBody__set_ChildBlocksCount (MG_BlocksEngine2_Horizontal_Block_BE2_HorizontalBlockSectionBody_o* __this, int32_t value, const MethodInfo* method); */

/* MG_BlocksEngine2.Horizontal.Block.BE2_HorizontalBlockSectionBody$$set_ChildBlocksCount
   void MG_BlocksEngine2_Horizontal_Block_BE2_HorizontalBlockSectionBody__set_ChildBlocksCount
   (MG_BlocksEngine2_Horizontal_Block_BE2_HorizontalBlockSectionBody_o* __this, int32_t value, const
   MethodInfo* method); */

void native_MG_BlocksEngine2_Horizontal_Block_BE2_HorizontalBlockSectionBody__set_ChildBlocksCount_5fe4d4
               (long param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x50) = param_2;
  return;
}



/* MG_BlocksEngine2.Horizontal.Block.BE2_HorizontalBlockSectionBody$$get_Shadow @ 0x5fe4dc
 * UnityEngine_UI_Shadow_o* MG_BlocksEngine2_Horizontal_Block_BE2_HorizontalBlockSectionBody__get_Shadow (MG_BlocksEngine2_Horizontal_Block_BE2_HorizontalBlockSectionBody_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MG_BlocksEngine2.Horizontal.Block.BE2_HorizontalBlockSectionBody$$get_Shadow
   UnityEngine_UI_Shadow_o*
   MG_BlocksEngine2_Horizontal_Block_BE2_HorizontalBlockSectionBody__get_Shadow
   (MG_BlocksEngine2_Horizontal_Block_BE2_HorizontalBlockSectionBody_o* __this, const MethodInfo*
   method); */

long native_MG_BlocksEngine2_Horizontal_Block_BE2_HorizontalBlockSectionBody__get_Shadow_5fe4dc
               (long param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  long *plVar3;
  long lVar4;
  
  if ((bRam000000000133edd4 & 1) == 0) {
    native_sub_43273c(&Method_UnityEngine_Component_GetComponent_Shadow____12e2b00);
    native_sub_43273c(&Method_UnityEngine_GameObject_AddComponent_Shadow____12e4860);
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    bRam000000000133edd4 = 1;
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
      if (lVar4 == 0) goto LAB_005fe63c;
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
        goto LAB_005fe624;
      }
    }
LAB_005fe63c:
                    /* WARNING: Subroutine does not return */
    native_sub_432810();
  }
LAB_005fe624:
  return *plVar3;
}



/* MG_BlocksEngine2.Horizontal.Block.BE2_HorizontalBlockSectionBody$$OnValidate @ 0x5fe640
 * void MG_BlocksEngine2_Horizontal_Block_BE2_HorizontalBlockSectionBody__OnValidate (MG_BlocksEngine2_Horizontal_Block_BE2_HorizontalBlockSectionBody_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MG_BlocksEngine2.Horizontal.Block.BE2_HorizontalBlockSectionBody$$OnValidate
   void MG_BlocksEngine2_Horizontal_Block_BE2_HorizontalBlockSectionBody__OnValidate
   (MG_BlocksEngine2_Horizontal_Block_BE2_HorizontalBlockSectionBody_o* __this, const MethodInfo*
   method); */

void native_MG_BlocksEngine2_Horizontal_Block_BE2_HorizontalBlockSectionBody__OnValidate_5fe640
               (long param_1)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  undefined8 uVar4;
  long lVar5;
  ulong uVar6;
  
  if ((bRam000000000133edd5 & 1) == 0) {
    native_sub_43273c(&Method_UnityEngine_Component_GetComponent_I_BE2_BlockLayout____12e2a10);
    native_sub_43273c(&Method_UnityEngine_Component_GetComponent_I_BE2_BlockSection____12e2a18);
    native_sub_43273c(&Method_UnityEngine_Component_GetComponent_I_BE2_Spot____12e2a68);
    native_sub_43273c(&Method_UnityEngine_Component_GetComponent_Image____12e2a78);
    native_sub_43273c(&Method_UnityEngine_Component_GetComponent_RectTransform____12e2ad0);
    native_sub_43273c(&MG_BlocksEngine2_Block_I_BE2_Block___TypeInfo_12d3218);
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    bRam000000000133edd5 = 1;
  }
  uVar4 = native_UnityEngine_Component__GetComponent_ActiveAnimation__49daec
                    (param_1,_Method_UnityEngine_Component_GetComponent_RectTransform____12e2ad0);
  *(undefined8 *)(param_1 + 0x18) = uVar4;
  native_sub_4326e0(param_1 + 0x18);
  lVar5 = native_UnityEngine_Component__get_transform_8da62c(param_1,0);
  if (lVar5 == 0) goto LAB_005fe888;
  uVar4 = native_UnityEngine_Transform__get_parent_765eb0(lVar5,0);
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec(_UnityEngine_Object_TypeInfo_12d54e0);
  }
  uVar6 = native_UnityEngine_Object__op_Implicit_8e1b98(uVar4,0);
  if ((uVar6 & 1) != 0) {
    lVar5 = native_UnityEngine_Component__get_transform_8da62c(param_1,0);
    if ((lVar5 == 0) ||
       (lVar5 = native_UnityEngine_Transform__get_parent_765eb0(lVar5,0), lVar5 == 0))
    goto LAB_005fe888;
    uVar4 = native_UnityEngine_Component__GetComponent_ActiveAnimation__49daec
                      (lVar5,
                       _Method_UnityEngine_Component_GetComponent_I_BE2_BlockSection____12e2a18);
    *(undefined8 *)(param_1 + 0x20) = uVar4;
    native_sub_4326e0();
    lVar5 = native_UnityEngine_Component__get_transform_8da62c(param_1,0);
    if ((lVar5 == 0) ||
       ((lVar5 = native_UnityEngine_Transform__get_parent_765eb0(lVar5,0), lVar5 == 0 ||
        (lVar5 = native_UnityEngine_Transform__get_parent_765eb0(lVar5,0), lVar5 == 0))))
    goto LAB_005fe888;
    uVar4 = native_UnityEngine_Component__GetComponent_ActiveAnimation__49daec
                      (lVar5,_Method_UnityEngine_Component_GetComponent_I_BE2_BlockLayout____12e2a10
                      );
    *(undefined8 *)(param_1 + 0x28) = uVar4;
    native_sub_4326e0();
    lVar5 = native_UnityEngine_Component__get_transform_8da62c(param_1,0);
    if ((lVar5 == 0) ||
       (lVar5 = native_UnityEngine_Transform__get_parent_765eb0(lVar5,0), lVar5 == 0))
    goto LAB_005fe888;
    uVar4 = native_UnityEngine_Component__GetComponent_ActiveAnimation__49daec
                      (lVar5,
                       _Method_UnityEngine_Component_GetComponent_I_BE2_BlockSection____12e2a18);
    *(undefined8 *)(param_1 + 0x40) = uVar4;
    native_sub_4326e0();
  }
  uVar4 = native_UnityEngine_Component__GetComponent_ActiveAnimation__49daec
                    (param_1,_Method_UnityEngine_Component_GetComponent_Image____12e2a78);
  *(undefined8 *)(param_1 + 0x30) = uVar4;
  native_sub_4326e0((long *)(param_1 + 0x30),uVar4);
  if (*(long *)(param_1 + 0x30) != 0) {
    native_UnityEngine_UI_Image__set_type_cb7988(*(long *)(param_1 + 0x30),1,0);
    lVar5 = *(long *)(param_1 + 0x30);
    if (lVar5 != 0) {
      native_UnityEngine_UI_Image__set_pixelsPerUnitMultiplier_cb81dc(0x40000000,lVar5,0);
      uVar4 = native_sub_432750(_MG_BlocksEngine2_Block_I_BE2_Block___TypeInfo_12d3218,0);
      *(undefined8 *)(param_1 + 0x38) = uVar4;
      native_sub_4326e0();
      uVar4 = native_UnityEngine_Component__GetComponent_ActiveAnimation__49daec
                        (param_1,_Method_UnityEngine_Component_GetComponent_I_BE2_Spot____12e2a68);
      *(undefined8 *)(param_1 + 0x48) = uVar4;
      if (iRam0000000001345318 != 0) {
        puVar1 = (ulong *)((param_1 + 0x48U >> 0x12 & 0x7fff) * 8 + 0x138ecd8);
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar3) {
            *puVar1 = *puVar1 | 1L << (param_1 + 0x48U >> 0xc & 0x3f);
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      return;
    }
  }
LAB_005fe888:
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* MG_BlocksEngine2.Horizontal.Block.BE2_HorizontalBlockSectionBody$$Awake @ 0x5fe644
 * void MG_BlocksEngine2_Horizontal_Block_BE2_HorizontalBlockSectionBody__Awake (MG_BlocksEngine2_Horizontal_Block_BE2_HorizontalBlockSectionBody_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MG_BlocksEngine2.Horizontal.Block.BE2_HorizontalBlockSectionBody$$Awake
   void MG_BlocksEngine2_Horizontal_Block_BE2_HorizontalBlockSectionBody__Awake
   (MG_BlocksEngine2_Horizontal_Block_BE2_HorizontalBlockSectionBody_o* __this, const MethodInfo*
   method); */

void native_MG_BlocksEngine2_Horizontal_Block_BE2_HorizontalBlockSectionBody__Awake_5fe644
               (long param_1)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  undefined8 uVar4;
  long lVar5;
  ulong uVar6;
  
  if ((bRam000000000133edd5 & 1) == 0) {
    native_sub_43273c(&Method_UnityEngine_Component_GetComponent_I_BE2_BlockLayout____12e2a10);
    native_sub_43273c(&Method_UnityEngine_Component_GetComponent_I_BE2_BlockSection____12e2a18);
    native_sub_43273c(&Method_UnityEngine_Component_GetComponent_I_BE2_Spot____12e2a68);
    native_sub_43273c(&Method_UnityEngine_Component_GetComponent_Image____12e2a78);
    native_sub_43273c(&Method_UnityEngine_Component_GetComponent_RectTransform____12e2ad0);
    native_sub_43273c(&MG_BlocksEngine2_Block_I_BE2_Block___TypeInfo_12d3218);
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    bRam000000000133edd5 = 1;
  }
  uVar4 = native_UnityEngine_Component__GetComponent_ActiveAnimation__49daec
                    (param_1,_Method_UnityEngine_Component_GetComponent_RectTransform____12e2ad0);
  *(undefined8 *)(param_1 + 0x18) = uVar4;
  native_sub_4326e0(param_1 + 0x18);
  lVar5 = native_UnityEngine_Component__get_transform_8da62c(param_1,0);
  if (lVar5 == 0) goto LAB_005fe888;
  uVar4 = native_UnityEngine_Transform__get_parent_765eb0(lVar5,0);
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec(_UnityEngine_Object_TypeInfo_12d54e0);
  }
  uVar6 = native_UnityEngine_Object__op_Implicit_8e1b98(uVar4,0);
  if ((uVar6 & 1) != 0) {
    lVar5 = native_UnityEngine_Component__get_transform_8da62c(param_1,0);
    if ((lVar5 == 0) ||
       (lVar5 = native_UnityEngine_Transform__get_parent_765eb0(lVar5,0), lVar5 == 0))
    goto LAB_005fe888;
    uVar4 = native_UnityEngine_Component__GetComponent_ActiveAnimation__49daec
                      (lVar5,
                       _Method_UnityEngine_Component_GetComponent_I_BE2_BlockSection____12e2a18);
    *(undefined8 *)(param_1 + 0x20) = uVar4;
    native_sub_4326e0();
    lVar5 = native_UnityEngine_Component__get_transform_8da62c(param_1,0);
    if ((lVar5 == 0) ||
       ((lVar5 = native_UnityEngine_Transform__get_parent_765eb0(lVar5,0), lVar5 == 0 ||
        (lVar5 = native_UnityEngine_Transform__get_parent_765eb0(lVar5,0), lVar5 == 0))))
    goto LAB_005fe888;
    uVar4 = native_UnityEngine_Component__GetComponent_ActiveAnimation__49daec
                      (lVar5,_Method_UnityEngine_Component_GetComponent_I_BE2_BlockLayout____12e2a10
                      );
    *(undefined8 *)(param_1 + 0x28) = uVar4;
    native_sub_4326e0();
    lVar5 = native_UnityEngine_Component__get_transform_8da62c(param_1,0);
    if ((lVar5 == 0) ||
       (lVar5 = native_UnityEngine_Transform__get_parent_765eb0(lVar5,0), lVar5 == 0))
    goto LAB_005fe888;
    uVar4 = native_UnityEngine_Component__GetComponent_ActiveAnimation__49daec
                      (lVar5,
                       _Method_UnityEngine_Component_GetComponent_I_BE2_BlockSection____12e2a18);
    *(undefined8 *)(param_1 + 0x40) = uVar4;
    native_sub_4326e0();
  }
  uVar4 = native_UnityEngine_Component__GetComponent_ActiveAnimation__49daec
                    (param_1,_Method_UnityEngine_Component_GetComponent_Image____12e2a78);
  *(undefined8 *)(param_1 + 0x30) = uVar4;
  native_sub_4326e0((long *)(param_1 + 0x30),uVar4);
  if (*(long *)(param_1 + 0x30) != 0) {
    native_UnityEngine_UI_Image__set_type_cb7988(*(long *)(param_1 + 0x30),1,0);
    lVar5 = *(long *)(param_1 + 0x30);
    if (lVar5 != 0) {
      native_UnityEngine_UI_Image__set_pixelsPerUnitMultiplier_cb81dc(0x40000000,lVar5,0);
      uVar4 = native_sub_432750(_MG_BlocksEngine2_Block_I_BE2_Block___TypeInfo_12d3218,0);
      *(undefined8 *)(param_1 + 0x38) = uVar4;
      native_sub_4326e0();
      uVar4 = native_UnityEngine_Component__GetComponent_ActiveAnimation__49daec
                        (param_1,_Method_UnityEngine_Component_GetComponent_I_BE2_Spot____12e2a68);
      *(undefined8 *)(param_1 + 0x48) = uVar4;
      if (iRam0000000001345318 != 0) {
        puVar1 = (ulong *)((param_1 + 0x48U >> 0x12 & 0x7fff) * 8 + 0x138ecd8);
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar3) {
            *puVar1 = *puVar1 | 1L << (param_1 + 0x48U >> 0xc & 0x3f);
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      return;
    }
  }
LAB_005fe888:
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* MG_BlocksEngine2.Horizontal.Block.BE2_HorizontalBlockSectionBody$$UpdateChildBlocksList @ 0x5fe88c
 * void MG_BlocksEngine2_Horizontal_Block_BE2_HorizontalBlockSectionBody__UpdateChildBlocksList (MG_BlocksEngine2_Horizontal_Block_BE2_HorizontalBlockSectionBody_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MG_BlocksEngine2.Horizontal.Block.BE2_HorizontalBlockSectionBody$$UpdateChildBlocksList
   void MG_BlocksEngine2_Horizontal_Block_BE2_HorizontalBlockSectionBody__UpdateChildBlocksList
   (MG_BlocksEngine2_Horizontal_Block_BE2_HorizontalBlockSectionBody_o* __this, const MethodInfo*
   method); */

void native_MG_BlocksEngine2_Horizontal_Block_BE2_HorizontalBlockSectionBody__UpdateChildBlocksList_5fe88c
               (long param_1)

{
  int iVar1;
  long lVar2;
  long *plVar3;
  int iVar4;
  
  if ((bRam000000000133edd6 & 1) == 0) {
    native_sub_43273c(&Method_MG_BlocksEngine2_Utils_BE2_ArrayUtils_AddReturn_I_BE2_Block____12e20c8
                     );
    native_sub_43273c(&Method_UnityEngine_Component_GetComponent_I_BE2_Block____12e2a08);
    native_sub_43273c(&MG_BlocksEngine2_Block_I_BE2_Block___TypeInfo_12d3218);
    bRam000000000133edd6 = 1;
  }
  lVar2 = native_sub_432750(_MG_BlocksEngine2_Block_I_BE2_Block___TypeInfo_12d3218,0);
  plVar3 = (long *)(param_1 + 0x38);
  *plVar3 = lVar2;
  native_sub_4326e0(plVar3,lVar2);
  lVar2 = native_UnityEngine_Component__get_transform_8da62c(param_1,0);
  if (lVar2 != 0) {
    iVar1 = native_UnityEngine_Transform__get_childCount_772a64(lVar2,0);
    if (0 < iVar1) {
      iVar4 = 0;
      do {
        lVar2 = native_UnityEngine_Component__get_transform_8da62c(param_1,0);
        if ((lVar2 == 0) ||
           (lVar2 = native_UnityEngine_Transform__GetChild_772ef0(lVar2,iVar4,0), lVar2 == 0))
        goto LAB_005fe9b8;
        lVar2 = native_UnityEngine_Component__GetComponent_ActiveAnimation__49daec
                          (lVar2,_Method_UnityEngine_Component_GetComponent_I_BE2_Block____12e2a08);
        if (lVar2 != 0) {
          lVar2 = native_MG_BlocksEngine2_Utils_BE2_ArrayUtils__AddReturn_I_BE2_Block__49b4a4
                            (*plVar3,lVar2,
                             _Method_MG_BlocksEngine2_Utils_BE2_ArrayUtils_AddReturn_I_BE2_Block____12e20c8
                            );
          *plVar3 = lVar2;
          native_sub_4326e0(plVar3,lVar2);
        }
        iVar4 = iVar4 + 1;
      } while (iVar4 < iVar1);
    }
    if (*plVar3 != 0) {
      *(int *)(param_1 + 0x50) = (int)*(undefined8 *)(*plVar3 + 0x18);
      return;
    }
  }
LAB_005fe9b8:
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* MG_BlocksEngine2.Horizontal.Block.BE2_HorizontalBlockSectionBody$$UpdateLayout @ 0x5fe9bc
 * void MG_BlocksEngine2_Horizontal_Block_BE2_HorizontalBlockSectionBody__UpdateLayout (MG_BlocksEngine2_Horizontal_Block_BE2_HorizontalBlockSectionBody_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MG_BlocksEngine2.Horizontal.Block.BE2_HorizontalBlockSectionBody$$UpdateLayout
   void MG_BlocksEngine2_Horizontal_Block_BE2_HorizontalBlockSectionBody__UpdateLayout
   (MG_BlocksEngine2_Horizontal_Block_BE2_HorizontalBlockSectionBody_o* __this, const MethodInfo*
   method); */

void native_MG_BlocksEngine2_Horizontal_Block_BE2_HorizontalBlockSectionBody__UpdateLayout_5fe9bc
               (long param_1)

{
  int iVar1;
  int iVar2;
  ulong uVar3;
  undefined8 *puVar4;
  long lVar5;
  int *piVar6;
  undefined8 uVar7;
  long *plVar8;
  long *plVar9;
  uint uVar10;
  
  if ((bRam000000000133edd7 & 1) == 0) {
    native_sub_43273c(&MG_BlocksEngine2_Block_I_BE2_BlockLayout_TypeInfo_12d4de0);
    native_sub_43273c(&MG_BlocksEngine2_Block_I_BE2_BlockSection_TypeInfo_12d4de8);
    native_sub_43273c(&MG_BlocksEngine2_Block_I_BE2_Block_TypeInfo_12d4dd8);
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    bRam000000000133edd7 = 1;
  }
  if (*(long *)(param_1 + 0x30) != 0) {
    uVar7 = *(undefined8 *)(*(long *)(param_1 + 0x30) + 0xd0);
    if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    uVar3 = native_UnityEngine_Object__op_Inequality_8d76fc(uVar7,0,0);
    if (((uVar3 & 1) != 0) && (plVar9 = *(long **)(param_1 + 0x28), plVar9 != (long *)0x0)) {
      lVar5 = *plVar9;
      plVar8 = *(long **)(param_1 + 0x30);
      if ((ulong)*(ushort *)(lVar5 + 0x12a) != 0) {
        uVar3 = 0;
        piVar6 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(long *)(piVar6 + -2) == _MG_BlocksEngine2_Block_I_BE2_BlockLayout_TypeInfo_12d4de0)
          {
            puVar4 = (undefined8 *)(lVar5 + (long)(*piVar6 + 3) * 0x10 + 0x138);
            goto LAB_005fead0;
          }
          uVar3 = uVar3 + 1;
          piVar6 = piVar6 + 4;
        } while (uVar3 < *(ushort *)(lVar5 + 0x12a));
      }
      puVar4 = (undefined8 *)
               native_sub_3c9b34(plVar9,_MG_BlocksEngine2_Block_I_BE2_BlockLayout_TypeInfo_12d4de0,3
                                );
LAB_005fead0:
      (*(code *)*puVar4)(plVar9,puVar4[1]);
      if (plVar8 == (long *)0x0) goto LAB_005fee08;
      (**(code **)(*plVar8 + 0x2a8))(plVar8,*(undefined8 *)(*plVar8 + 0x2b0));
    }
    plVar9 = *(long **)(param_1 + 0x20);
    if (plVar9 != (long *)0x0) {
      lVar5 = *plVar9;
      if ((ulong)*(ushort *)(lVar5 + 0x12a) != 0) {
        uVar3 = 0;
        piVar6 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(long *)(piVar6 + -2) == _MG_BlocksEngine2_Block_I_BE2_BlockSection_TypeInfo_12d4de8)
          {
            puVar4 = (undefined8 *)(lVar5 + (long)(*piVar6 + 4) * 0x10 + 0x138);
            goto LAB_005feb5c;
          }
          uVar3 = uVar3 + 1;
          piVar6 = piVar6 + 4;
        } while (uVar3 < *(ushort *)(lVar5 + 0x12a));
      }
      puVar4 = (undefined8 *)
               native_sub_3c9b34(plVar9,_MG_BlocksEngine2_Block_I_BE2_BlockSection_TypeInfo_12d4de8,
                                 4);
LAB_005feb5c:
      plVar9 = (long *)(*(code *)*puVar4)(plVar9,puVar4[1]);
      if (plVar9 != (long *)0x0) {
        lVar5 = *plVar9;
        if ((ulong)*(ushort *)(lVar5 + 0x12a) != 0) {
          uVar3 = 0;
          piVar6 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
          do {
            if (*(long *)(piVar6 + -2) == _MG_BlocksEngine2_Block_I_BE2_Block_TypeInfo_12d4dd8) {
              puVar4 = (undefined8 *)(lVar5 + (long)(*piVar6 + 1) * 0x10 + 0x138);
              goto LAB_005febd0;
            }
            uVar3 = uVar3 + 1;
            piVar6 = piVar6 + 4;
          } while (uVar3 < *(ushort *)(lVar5 + 0x12a));
        }
        puVar4 = (undefined8 *)
                 native_sub_3c9b34(plVar9,_MG_BlocksEngine2_Block_I_BE2_Block_TypeInfo_12d4dd8,1);
LAB_005febd0:
        iVar1 = (*(code *)*puVar4)(plVar9,puVar4[1]);
        if (iVar1 != 4) {
          plVar9 = *(long **)(param_1 + 0x20);
          if (plVar9 == (long *)0x0) goto LAB_005fee08;
          lVar5 = *plVar9;
          if ((ulong)*(ushort *)(lVar5 + 0x12a) != 0) {
            uVar3 = 0;
            piVar6 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
            do {
              if (*(long *)(piVar6 + -2) ==
                  _MG_BlocksEngine2_Block_I_BE2_BlockSection_TypeInfo_12d4de8) {
                puVar4 = (undefined8 *)(lVar5 + (long)(*piVar6 + 4) * 0x10 + 0x138);
                goto LAB_005fec44;
              }
              uVar3 = uVar3 + 1;
              piVar6 = piVar6 + 4;
            } while (uVar3 < *(ushort *)(lVar5 + 0x12a));
          }
          puVar4 = (undefined8 *)
                   native_sub_3c9b34(plVar9,
                                     _MG_BlocksEngine2_Block_I_BE2_BlockSection_TypeInfo_12d4de8,4);
LAB_005fec44:
          plVar9 = (long *)(*(code *)*puVar4)(plVar9,puVar4[1]);
          if (plVar9 == (long *)0x0) goto LAB_005fee08;
          lVar5 = *plVar9;
          if ((ulong)*(ushort *)(lVar5 + 0x12a) != 0) {
            uVar3 = 0;
            piVar6 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
            do {
              if (*(long *)(piVar6 + -2) == _MG_BlocksEngine2_Block_I_BE2_Block_TypeInfo_12d4dd8) {
                puVar4 = (undefined8 *)(lVar5 + (long)(*piVar6 + 1) * 0x10 + 0x138);
                goto LAB_005fecb0;
              }
              uVar3 = uVar3 + 1;
              piVar6 = piVar6 + 4;
            } while (uVar3 < *(ushort *)(lVar5 + 0x12a));
          }
          puVar4 = (undefined8 *)
                   native_sub_3c9b34(plVar9,_MG_BlocksEngine2_Block_I_BE2_Block_TypeInfo_12d4dd8,1);
LAB_005fecb0:
          (*(code *)*puVar4)(plVar9,puVar4[1]);
        }
        native_MG_BlocksEngine2_Horizontal_Block_BE2_HorizontalBlockSectionBody__GetMaxHeight_5ff068
                  (param_1);
        lVar5 = *(long *)(param_1 + 0x38);
        if (lVar5 != 0) {
          iVar1 = *(int *)(lVar5 + 0x18);
          if (iVar1 < 1) {
LAB_005fee10:
            plVar9 = *(long **)(param_1 + 0x20);
            if (plVar9 != (long *)0x0) {
              lVar5 = *plVar9;
              if ((ulong)*(ushort *)(lVar5 + 0x12a) != 0) {
                uVar3 = 0;
                piVar6 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar6 + -2) ==
                      _MG_BlocksEngine2_Block_I_BE2_BlockSection_TypeInfo_12d4de8) {
                    puVar4 = (undefined8 *)(lVar5 + (long)*piVar6 * 0x10 + 0x138);
                    goto LAB_005fee7c;
                  }
                  uVar3 = uVar3 + 1;
                  piVar6 = piVar6 + 4;
                } while (uVar3 < *(ushort *)(lVar5 + 0x12a));
              }
              puVar4 = (undefined8 *)
                       native_sub_3c9b34(plVar9,
                                         _MG_BlocksEngine2_Block_I_BE2_BlockSection_TypeInfo_12d4de8
                                         ,0);
LAB_005fee7c:
              lVar5 = (*(code *)*puVar4)(plVar9,puVar4[1]);
              if ((lVar5 != 0) &&
                 (lVar5 = native_UnityEngine_Component__get_transform_8da62c(lVar5,0), lVar5 != 0))
              {
                iVar1 = native_UnityEngine_Transform__GetSiblingIndex_772b74(lVar5,0);
                plVar9 = *(long **)(param_1 + 0x20);
                if (plVar9 != (long *)0x0) {
                  lVar5 = *plVar9;
                  if ((ulong)*(ushort *)(lVar5 + 0x12a) != 0) {
                    uVar3 = 0;
                    piVar6 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
                    do {
                      if (*(long *)(piVar6 + -2) ==
                          _MG_BlocksEngine2_Block_I_BE2_BlockSection_TypeInfo_12d4de8) {
                        puVar4 = (undefined8 *)(lVar5 + (long)*piVar6 * 0x10 + 0x138);
                        goto LAB_005fef00;
                      }
                      uVar3 = uVar3 + 1;
                      piVar6 = piVar6 + 4;
                    } while (uVar3 < *(ushort *)(lVar5 + 0x12a));
                  }
                  puVar4 = (undefined8 *)
                           native_sub_3c9b34(plVar9,
                                             _MG_BlocksEngine2_Block_I_BE2_BlockSection_TypeInfo_12d4de8
                                             ,0);
LAB_005fef00:
                  lVar5 = (*(code *)*puVar4)(plVar9,puVar4[1]);
                  if (((lVar5 != 0) &&
                      (lVar5 = native_UnityEngine_Component__get_transform_8da62c(lVar5,0),
                      lVar5 != 0)) &&
                     (lVar5 = native_UnityEngine_Transform__get_parent_765eb0(lVar5,0), lVar5 != 0))
                  {
                    iVar2 = native_UnityEngine_Transform__get_childCount_772a64(lVar5,0);
                    if (iVar1 == iVar2 + -2) {
                      plVar9 = *(long **)(param_1 + 0x20);
                      if (plVar9 == (long *)0x0) goto LAB_005fee08;
                      lVar5 = *plVar9;
                      if ((ulong)*(ushort *)(lVar5 + 0x12a) != 0) {
                        uVar3 = 0;
                        piVar6 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
                        do {
                          if (*(long *)(piVar6 + -2) ==
                              _MG_BlocksEngine2_Block_I_BE2_BlockSection_TypeInfo_12d4de8) {
                            puVar4 = (undefined8 *)(lVar5 + (long)(*piVar6 + 4) * 0x10 + 0x138);
                            goto LAB_005fef9c;
                          }
                          uVar3 = uVar3 + 1;
                          piVar6 = piVar6 + 4;
                        } while (uVar3 < *(ushort *)(lVar5 + 0x12a));
                      }
                      puVar4 = (undefined8 *)
                               native_sub_3c9b34(plVar9,
                                                 _MG_BlocksEngine2_Block_I_BE2_BlockSection_TypeInfo_12d4de8
                                                 ,4);
LAB_005fef9c:
                      plVar9 = (long *)(*(code *)*puVar4)(plVar9,puVar4[1]);
                      if (plVar9 == (long *)0x0) goto LAB_005fee08;
                      lVar5 = *plVar9;
                      if ((ulong)*(ushort *)(lVar5 + 0x12a) != 0) {
                        uVar3 = 0;
                        piVar6 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
                        do {
                          if (*(long *)(piVar6 + -2) ==
                              _MG_BlocksEngine2_Block_I_BE2_Block_TypeInfo_12d4dd8) {
                            puVar4 = (undefined8 *)(lVar5 + (long)(*piVar6 + 1) * 0x10 + 0x138);
                            goto LAB_005ff008;
                          }
                          uVar3 = uVar3 + 1;
                          piVar6 = piVar6 + 4;
                        } while (uVar3 < *(ushort *)(lVar5 + 0x12a));
                      }
                      puVar4 = (undefined8 *)
                               native_sub_3c9b34(plVar9,
                                                 _MG_BlocksEngine2_Block_I_BE2_Block_TypeInfo_12d4dd8
                                                 ,1);
LAB_005ff008:
                      (*(code *)*puVar4)(plVar9,puVar4[1]);
                    }
                    lVar5 = *(long *)(param_1 + 0x18);
                    if (lVar5 != 0) {
                      if (pcRam000000000133f8e8 == (code *)0x0) {
                        pcRam000000000133f8e8 = (code *)native_sub_4326f0(&UNK_00e28502,0);
                      }
                      (*pcRam000000000133f8e8)(lVar5,&stack0xffffffffffffffd8);
                      return;
                    }
                  }
                }
              }
            }
          }
          else {
            uVar10 = 0;
            do {
              if (*(uint *)(lVar5 + 0x18) <= uVar10) {
                uVar7 = native_sub_43283c();
                    /* WARNING: Subroutine does not return */
                native_sub_4327dc(uVar7,0);
              }
              plVar9 = *(long **)(lVar5 + (long)(int)uVar10 * 8 + 0x20);
              if (plVar9 == (long *)0x0) break;
              lVar5 = *plVar9;
              if ((ulong)*(ushort *)(lVar5 + 0x12a) != 0) {
                uVar3 = 0;
                piVar6 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar6 + -2) == _MG_BlocksEngine2_Block_I_BE2_Block_TypeInfo_12d4dd8
                     ) {
                    puVar4 = (undefined8 *)(lVar5 + (long)(*piVar6 + 3) * 0x10 + 0x138);
                    goto LAB_005fed74;
                  }
                  uVar3 = uVar3 + 1;
                  piVar6 = piVar6 + 4;
                } while (uVar3 < *(ushort *)(lVar5 + 0x12a));
              }
              puVar4 = (undefined8 *)
                       native_sub_3c9b34(plVar9,_MG_BlocksEngine2_Block_I_BE2_Block_TypeInfo_12d4dd8
                                         ,3);
LAB_005fed74:
              plVar9 = (long *)(*(code *)*puVar4)(plVar9,puVar4[1]);
              if (plVar9 == (long *)0x0) break;
              lVar5 = *plVar9;
              if ((ulong)*(ushort *)(lVar5 + 0x12a) != 0) {
                uVar3 = 0;
                piVar6 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar6 + -2) ==
                      _MG_BlocksEngine2_Block_I_BE2_BlockLayout_TypeInfo_12d4de0) {
                    puVar4 = (undefined8 *)(lVar5 + (long)(*piVar6 + 5) * 0x10 + 0x138);
                    goto LAB_005fede0;
                  }
                  uVar3 = uVar3 + 1;
                  piVar6 = piVar6 + 4;
                } while (uVar3 < *(ushort *)(lVar5 + 0x12a));
              }
              puVar4 = (undefined8 *)
                       native_sub_3c9b34(plVar9,
                                         _MG_BlocksEngine2_Block_I_BE2_BlockLayout_TypeInfo_12d4de0,
                                         5);
LAB_005fede0:
              (*(code *)*puVar4)(plVar9,puVar4[1]);
              uVar10 = uVar10 + 1;
              if (iVar1 <= (int)uVar10) goto LAB_005fee10;
              lVar5 = *(long *)(param_1 + 0x38);
            } while (lVar5 != 0);
          }
        }
      }
    }
  }
LAB_005fee08:
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* MG_BlocksEngine2.Horizontal.Block.BE2_HorizontalBlockSectionBody$$GetMaxHeight @ 0x5ff068
 * float MG_BlocksEngine2_Horizontal_Block_BE2_HorizontalBlockSectionBody__GetMaxHeight (MG_BlocksEngine2_Horizontal_Block_BE2_HorizontalBlockSectionBody_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MG_BlocksEngine2.Horizontal.Block.BE2_HorizontalBlockSectionBody$$GetMaxHeight
   float MG_BlocksEngine2_Horizontal_Block_BE2_HorizontalBlockSectionBody__GetMaxHeight
   (MG_BlocksEngine2_Horizontal_Block_BE2_HorizontalBlockSectionBody_o* __this, const MethodInfo*
   method); */

float native_MG_BlocksEngine2_Horizontal_Block_BE2_HorizontalBlockSectionBody__GetMaxHeight_5ff068
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
  uint uVar11;
  float fVar12;
  float fVar13;
  
  if ((bRam000000000133edd8 & 1) == 0) {
    native_sub_43273c(&MG_BlocksEngine2_Block_I_BE2_BlockLayout_TypeInfo_12d4de0);
    native_sub_43273c(&MG_BlocksEngine2_Block_I_BE2_BlockSectionBody_TypeInfo_12d4df0);
    native_sub_43273c(&MG_BlocksEngine2_Block_I_BE2_BlockSection_TypeInfo_12d4de8);
    native_sub_43273c(&MG_BlocksEngine2_Block_I_BE2_Block_TypeInfo_12d4dd8);
    bRam000000000133edd8 = 1;
  }
  plVar8 = *(long **)(param_3 + 0x28);
  if (plVar8 != (long *)0x0) {
    lVar4 = *plVar8;
    if ((ulong)*(ushort *)(lVar4 + 0x12a) != 0) {
      uVar6 = 0;
      piVar7 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == _MG_BlocksEngine2_Block_I_BE2_BlockLayout_TypeInfo_12d4de0) {
          puVar2 = (undefined8 *)(lVar4 + (long)(*piVar7 + 2) * 0x10 + 0x138);
          goto LAB_005ff13c;
        }
        uVar6 = uVar6 + 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 < *(ushort *)(lVar4 + 0x12a));
    }
    puVar2 = (undefined8 *)
             native_sub_3c9b34(plVar8,_MG_BlocksEngine2_Block_I_BE2_BlockLayout_TypeInfo_12d4de0,2);
LAB_005ff13c:
    lVar4 = (*(code *)*puVar2)(plVar8,puVar2[1]);
    if (lVar4 != 0) {
      uVar11 = *(uint *)(lVar4 + 0x18);
      if ((int)uVar11 < 1) {
        fVar12 = 15.0;
      }
      else {
        uVar10 = 0;
        fVar12 = 0.0;
        do {
          if (uVar11 <= uVar10) {
LAB_005ff5f4:
            uVar3 = native_sub_43283c();
                    /* WARNING: Subroutine does not return */
            native_sub_4327dc(uVar3,0);
          }
          plVar8 = *(long **)(lVar4 + (long)(int)uVar10 * 8 + 0x20);
          if (plVar8 == (long *)0x0) goto LAB_005ff5f0;
          lVar5 = *plVar8;
          if ((ulong)*(ushort *)(lVar5 + 0x12a) != 0) {
            uVar6 = 0;
            piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
            do {
              if (*(long *)(piVar7 + -2) ==
                  _MG_BlocksEngine2_Block_I_BE2_BlockSection_TypeInfo_12d4de8) {
                puVar2 = (undefined8 *)(lVar5 + (long)(*piVar7 + 2) * 0x10 + 0x138);
                goto LAB_005ff1f0;
              }
              uVar6 = uVar6 + 1;
              piVar7 = piVar7 + 4;
            } while (uVar6 < *(ushort *)(lVar5 + 0x12a));
          }
          puVar2 = (undefined8 *)
                   native_sub_3c9b34(plVar8,
                                     _MG_BlocksEngine2_Block_I_BE2_BlockSection_TypeInfo_12d4de8,2);
LAB_005ff1f0:
          plVar8 = (long *)(*(code *)*puVar2)(plVar8,puVar2[1]);
          if (plVar8 == (long *)0x0) goto LAB_005ff5f0;
          lVar5 = *plVar8;
          if ((ulong)*(ushort *)(lVar5 + 0x12a) != 0) {
            uVar6 = 0;
            piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
            do {
              if (*(long *)(piVar7 + -2) ==
                  _MG_BlocksEngine2_Block_I_BE2_BlockSectionBody_TypeInfo_12d4df0) {
                puVar2 = (undefined8 *)(lVar5 + (long)(*piVar7 + 8) * 0x10 + 0x138);
                goto LAB_005ff25c;
              }
              uVar6 = uVar6 + 1;
              piVar7 = piVar7 + 4;
            } while (uVar6 < *(ushort *)(lVar5 + 0x12a));
          }
          puVar2 = (undefined8 *)
                   native_sub_3c9b34(plVar8,
                                     _MG_BlocksEngine2_Block_I_BE2_BlockSectionBody_TypeInfo_12d4df0
                                     ,8);
LAB_005ff25c:
          (*(code *)*puVar2)(plVar8,puVar2[1]);
          lVar5 = *plVar8;
          if ((ulong)*(ushort *)(lVar5 + 0x12a) != 0) {
            uVar6 = 0;
            piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
            do {
              if (*(long *)(piVar7 + -2) ==
                  _MG_BlocksEngine2_Block_I_BE2_BlockSectionBody_TypeInfo_12d4df0) {
                puVar2 = (undefined8 *)(lVar5 + (long)(*piVar7 + 2) * 0x10 + 0x138);
                goto LAB_005ff2c0;
              }
              uVar6 = uVar6 + 1;
              piVar7 = piVar7 + 4;
            } while (uVar6 < *(ushort *)(lVar5 + 0x12a));
          }
          puVar2 = (undefined8 *)
                   native_sub_3c9b34(plVar8,
                                     _MG_BlocksEngine2_Block_I_BE2_BlockSectionBody_TypeInfo_12d4df0
                                     ,2);
LAB_005ff2c0:
          lVar5 = (*(code *)*puVar2)(plVar8,puVar2[1]);
          if (lVar5 == 0) goto LAB_005ff5f0;
          iVar1 = *(int *)(lVar5 + 0x18);
          fVar13 = 100.0;
          if (0 < iVar1) {
            uVar11 = 0;
            do {
              lVar5 = *plVar8;
              if ((ulong)*(ushort *)(lVar5 + 0x12a) != 0) {
                uVar6 = 0;
                piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar7 + -2) ==
                      _MG_BlocksEngine2_Block_I_BE2_BlockSectionBody_TypeInfo_12d4df0) {
                    puVar2 = (undefined8 *)(lVar5 + (long)(*piVar7 + 2) * 0x10 + 0x138);
                    goto LAB_005ff340;
                  }
                  uVar6 = uVar6 + 1;
                  piVar7 = piVar7 + 4;
                } while (uVar6 < *(ushort *)(lVar5 + 0x12a));
              }
              puVar2 = (undefined8 *)
                       native_sub_3c9b34(plVar8,
                                         _MG_BlocksEngine2_Block_I_BE2_BlockSectionBody_TypeInfo_12d4df0
                                         ,2);
LAB_005ff340:
              lVar5 = (*(code *)*puVar2)(plVar8,puVar2[1]);
              if (lVar5 == 0) goto LAB_005ff5f0;
              if (*(uint *)(lVar5 + 0x18) <= uVar11) goto LAB_005ff5f4;
              plVar9 = *(long **)(lVar5 + (long)(int)uVar11 * 8 + 0x20);
              if (plVar9 == (long *)0x0) goto LAB_005ff5f0;
              lVar5 = *plVar9;
              if ((ulong)*(ushort *)(lVar5 + 0x12a) != 0) {
                uVar6 = 0;
                piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar7 + -2) == _MG_BlocksEngine2_Block_I_BE2_Block_TypeInfo_12d4dd8
                     ) {
                    puVar2 = (undefined8 *)(lVar5 + (long)(*piVar7 + 3) * 0x10 + 0x138);
                    goto LAB_005ff3c4;
                  }
                  uVar6 = uVar6 + 1;
                  piVar7 = piVar7 + 4;
                } while (uVar6 < *(ushort *)(lVar5 + 0x12a));
              }
              puVar2 = (undefined8 *)
                       native_sub_3c9b34(plVar9,_MG_BlocksEngine2_Block_I_BE2_Block_TypeInfo_12d4dd8
                                         ,3);
LAB_005ff3c4:
              plVar9 = (long *)(*(code *)*puVar2)(plVar9,puVar2[1]);
              if (plVar9 == (long *)0x0) goto LAB_005ff5f0;
              lVar5 = *plVar9;
              if ((ulong)*(ushort *)(lVar5 + 0x12a) != 0) {
                uVar6 = 0;
                piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar7 + -2) ==
                      _MG_BlocksEngine2_Block_I_BE2_BlockLayout_TypeInfo_12d4de0) {
                    puVar2 = (undefined8 *)(lVar5 + (long)(*piVar7 + 5) * 0x10 + 0x138);
                    goto LAB_005ff430;
                  }
                  uVar6 = uVar6 + 1;
                  piVar7 = piVar7 + 4;
                } while (uVar6 < *(ushort *)(lVar5 + 0x12a));
              }
              puVar2 = (undefined8 *)
                       native_sub_3c9b34(plVar9,
                                         _MG_BlocksEngine2_Block_I_BE2_BlockLayout_TypeInfo_12d4de0,
                                         5);
LAB_005ff430:
              (*(code *)*puVar2)(plVar9,puVar2[1]);
              if (fVar13 < param_2) {
                lVar5 = *plVar8;
                if ((ulong)*(ushort *)(lVar5 + 0x12a) != 0) {
                  uVar6 = 0;
                  piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar7 + -2) ==
                        _MG_BlocksEngine2_Block_I_BE2_BlockSectionBody_TypeInfo_12d4df0) {
                      puVar2 = (undefined8 *)(lVar5 + (long)(*piVar7 + 2) * 0x10 + 0x138);
                      goto LAB_005ff49c;
                    }
                    uVar6 = uVar6 + 1;
                    piVar7 = piVar7 + 4;
                  } while (uVar6 < *(ushort *)(lVar5 + 0x12a));
                }
                puVar2 = (undefined8 *)
                         native_sub_3c9b34(plVar8,
                                           _MG_BlocksEngine2_Block_I_BE2_BlockSectionBody_TypeInfo_12d4df0
                                           ,2);
LAB_005ff49c:
                lVar5 = (*(code *)*puVar2)(plVar8,puVar2[1]);
                if (lVar5 == 0) goto LAB_005ff5f0;
                if (*(uint *)(lVar5 + 0x18) <= uVar11) goto LAB_005ff5f4;
                plVar9 = *(long **)(lVar5 + (long)(int)uVar11 * 8 + 0x20);
                if (plVar9 == (long *)0x0) goto LAB_005ff5f0;
                lVar5 = *plVar9;
                if ((ulong)*(ushort *)(lVar5 + 0x12a) != 0) {
                  uVar6 = 0;
                  piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar7 + -2) ==
                        _MG_BlocksEngine2_Block_I_BE2_Block_TypeInfo_12d4dd8) {
                      puVar2 = (undefined8 *)(lVar5 + (long)(*piVar7 + 3) * 0x10 + 0x138);
                      goto LAB_005ff51c;
                    }
                    uVar6 = uVar6 + 1;
                    piVar7 = piVar7 + 4;
                  } while (uVar6 < *(ushort *)(lVar5 + 0x12a));
                }
                puVar2 = (undefined8 *)
                         native_sub_3c9b34(plVar9,
                                           _MG_BlocksEngine2_Block_I_BE2_Block_TypeInfo_12d4dd8,3);
LAB_005ff51c:
                plVar9 = (long *)(*(code *)*puVar2)(plVar9,puVar2[1]);
                if (plVar9 == (long *)0x0) goto LAB_005ff5f0;
                lVar5 = *plVar9;
                if ((ulong)*(ushort *)(lVar5 + 0x12a) != 0) {
                  uVar6 = 0;
                  piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar7 + -2) ==
                        _MG_BlocksEngine2_Block_I_BE2_BlockLayout_TypeInfo_12d4de0) {
                      puVar2 = (undefined8 *)(lVar5 + (long)(*piVar7 + 5) * 0x10 + 0x138);
                      goto LAB_005ff588;
                    }
                    uVar6 = uVar6 + 1;
                    piVar7 = piVar7 + 4;
                  } while (uVar6 < *(ushort *)(lVar5 + 0x12a));
                }
                puVar2 = (undefined8 *)
                         native_sub_3c9b34(plVar9,
                                           _MG_BlocksEngine2_Block_I_BE2_BlockLayout_TypeInfo_12d4de0
                                           ,5);
LAB_005ff588:
                (*(code *)*puVar2)(plVar9,puVar2[1]);
                fVar13 = param_2;
              }
              uVar11 = uVar11 + 1;
            } while ((int)uVar11 < iVar1);
          }
          uVar11 = *(uint *)(lVar4 + 0x18);
          uVar10 = uVar10 + 1;
          if (fVar13 <= fVar12) {
            fVar13 = fVar12;
          }
          fVar12 = fVar13;
        } while ((int)uVar10 < (int)uVar11);
        fVar12 = fVar12 + 15.0;
      }
      return fVar12;
    }
  }
LAB_005ff5f0:
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* MG_BlocksEngine2.Horizontal.Block.BE2_HorizontalBlockSectionBody$$.ctor @ 0x5ff600
 * void MG_BlocksEngine2_Horizontal_Block_BE2_HorizontalBlockSectionBody___ctor (MG_BlocksEngine2_Horizontal_Block_BE2_HorizontalBlockSectionBody_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MG_BlocksEngine2.Horizontal.Block.BE2_HorizontalBlockSectionBody$$.ctor
   void MG_BlocksEngine2_Horizontal_Block_BE2_HorizontalBlockSectionBody___ctor
   (MG_BlocksEngine2_Horizontal_Block_BE2_HorizontalBlockSectionBody_o* __this, const MethodInfo*
   method); */

undefined1  [16]
native_MG_BlocksEngine2_Horizontal_Block_BE2_HorizontalBlockSectionBody___ctor_5ff600(ulong param_1)

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


