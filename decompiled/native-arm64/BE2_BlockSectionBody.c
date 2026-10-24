/* ARM64 IL2CPP native pseudocode from Ghidra.
 * Recovered implementation, not original C# source.
 * Function boundaries follow the IL2CPP method address table. */


/* MG_BlocksEngine2.Block.BE2_BlockSectionBody$$get_RectTransform @ 0x565038
 * UnityEngine_RectTransform_o* MG_BlocksEngine2_Block_BE2_BlockSectionBody__get_RectTransform (MG_BlocksEngine2_Block_BE2_BlockSectionBody_o* __this, const MethodInfo* method); */

/* MG_BlocksEngine2.Block.BE2_BlockSectionBody$$get_RectTransform
   UnityEngine_RectTransform_o* MG_BlocksEngine2_Block_BE2_BlockSectionBody__get_RectTransform
   (MG_BlocksEngine2_Block_BE2_BlockSectionBody_o* __this, const MethodInfo* method); */

undefined8
native_MG_BlocksEngine2_Block_BE2_BlockSectionBody__get_RectTransform_565038(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* MG_BlocksEngine2.Block.BE2_BlockSectionBody$$get_ChildBlocksArray @ 0x565040
 * MG_BlocksEngine2_Block_I_BE2_Block_array* MG_BlocksEngine2_Block_BE2_BlockSectionBody__get_ChildBlocksArray (MG_BlocksEngine2_Block_BE2_BlockSectionBody_o* __this, const MethodInfo* method); */

/* MG_BlocksEngine2.Block.BE2_BlockSectionBody$$get_ChildBlocksArray
   MG_BlocksEngine2_Block_I_BE2_Block_array*
   MG_BlocksEngine2_Block_BE2_BlockSectionBody__get_ChildBlocksArray
   (MG_BlocksEngine2_Block_BE2_BlockSectionBody_o* __this, const MethodInfo* method); */

undefined8
native_MG_BlocksEngine2_Block_BE2_BlockSectionBody__get_ChildBlocksArray_565040(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



/* MG_BlocksEngine2.Block.BE2_BlockSectionBody$$set_ChildBlocksArray @ 0x565048
 * void MG_BlocksEngine2_Block_BE2_BlockSectionBody__set_ChildBlocksArray (MG_BlocksEngine2_Block_BE2_BlockSectionBody_o* __this, MG_BlocksEngine2_Block_I_BE2_Block_array* value, const MethodInfo* method); */

/* MG_BlocksEngine2.Block.BE2_BlockSectionBody$$set_ChildBlocksArray
   void MG_BlocksEngine2_Block_BE2_BlockSectionBody__set_ChildBlocksArray
   (MG_BlocksEngine2_Block_BE2_BlockSectionBody_o* __this, MG_BlocksEngine2_Block_I_BE2_Block_array*
   value, const MethodInfo* method); */

void native_MG_BlocksEngine2_Block_BE2_BlockSectionBody__set_ChildBlocksArray_565048
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



/* MG_BlocksEngine2.Block.BE2_BlockSectionBody$$get_BlockSection @ 0x565050
 * MG_BlocksEngine2_Block_I_BE2_BlockSection_o* MG_BlocksEngine2_Block_BE2_BlockSectionBody__get_BlockSection (MG_BlocksEngine2_Block_BE2_BlockSectionBody_o* __this, const MethodInfo* method); */

/* MG_BlocksEngine2.Block.BE2_BlockSectionBody$$get_BlockSection
   MG_BlocksEngine2_Block_I_BE2_BlockSection_o*
   MG_BlocksEngine2_Block_BE2_BlockSectionBody__get_BlockSection
   (MG_BlocksEngine2_Block_BE2_BlockSectionBody_o* __this, const MethodInfo* method); */

undefined8 native_MG_BlocksEngine2_Block_BE2_BlockSectionBody__get_BlockSection_565050(long param_1)

{
  return *(undefined8 *)(param_1 + 0x40);
}



/* MG_BlocksEngine2.Block.BE2_BlockSectionBody$$set_BlockSection @ 0x565058
 * void MG_BlocksEngine2_Block_BE2_BlockSectionBody__set_BlockSection (MG_BlocksEngine2_Block_BE2_BlockSectionBody_o* __this, MG_BlocksEngine2_Block_I_BE2_BlockSection_o* value, const MethodInfo* method); */

/* MG_BlocksEngine2.Block.BE2_BlockSectionBody$$set_BlockSection
   void MG_BlocksEngine2_Block_BE2_BlockSectionBody__set_BlockSection
   (MG_BlocksEngine2_Block_BE2_BlockSectionBody_o* __this,
   MG_BlocksEngine2_Block_I_BE2_BlockSection_o* value, const MethodInfo* method); */

void native_MG_BlocksEngine2_Block_BE2_BlockSectionBody__set_BlockSection_565058
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



/* MG_BlocksEngine2.Block.BE2_BlockSectionBody$$get_Size @ 0x565060
 * UnityEngine_Vector2_o MG_BlocksEngine2_Block_BE2_BlockSectionBody__get_Size (MG_BlocksEngine2_Block_BE2_BlockSectionBody_o* __this, const MethodInfo* method); */

/* MG_BlocksEngine2.Block.BE2_BlockSectionBody$$get_Size
   UnityEngine_Vector2_o MG_BlocksEngine2_Block_BE2_BlockSectionBody__get_Size
   (MG_BlocksEngine2_Block_BE2_BlockSectionBody_o* __this, const MethodInfo* method); */

undefined4 native_MG_BlocksEngine2_Block_BE2_BlockSectionBody__get_Size_565060(long param_1)

{
  long lVar1;
  undefined8 uStack_28;
  
  lVar1 = *(long *)(param_1 + 0x30);
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



/* MG_BlocksEngine2.Block.BE2_BlockSectionBody$$set_Size @ 0x56507c
 * void MG_BlocksEngine2_Block_BE2_BlockSectionBody__set_Size (MG_BlocksEngine2_Block_BE2_BlockSectionBody_o* __this, UnityEngine_Vector2_o value, const MethodInfo* method); */

/* MG_BlocksEngine2.Block.BE2_BlockSectionBody$$set_Size
   void MG_BlocksEngine2_Block_BE2_BlockSectionBody__set_Size
   (MG_BlocksEngine2_Block_BE2_BlockSectionBody_o* __this, UnityEngine_Vector2_o value, const
   MethodInfo* method); */

void native_MG_BlocksEngine2_Block_BE2_BlockSectionBody__set_Size_56507c
               (undefined4 param_1,undefined4 param_2,long param_3)

{
  long lVar1;
  undefined4 uStack_28;
  undefined4 uStack_24;
  
  lVar1 = *(long *)(param_3 + 0x30);
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



/* MG_BlocksEngine2.Block.BE2_BlockSectionBody$$get_Spot @ 0x565098
 * MG_BlocksEngine2_Block_I_BE2_Spot_o* MG_BlocksEngine2_Block_BE2_BlockSectionBody__get_Spot (MG_BlocksEngine2_Block_BE2_BlockSectionBody_o* __this, const MethodInfo* method); */

/* MG_BlocksEngine2.Block.BE2_BlockSectionBody$$get_Spot
   MG_BlocksEngine2_Block_I_BE2_Spot_o* MG_BlocksEngine2_Block_BE2_BlockSectionBody__get_Spot
   (MG_BlocksEngine2_Block_BE2_BlockSectionBody_o* __this, const MethodInfo* method); */

undefined8 native_MG_BlocksEngine2_Block_BE2_BlockSectionBody__get_Spot_565098(long param_1)

{
  return *(undefined8 *)(param_1 + 0x48);
}



/* MG_BlocksEngine2.Block.BE2_BlockSectionBody$$set_Spot @ 0x5650a0
 * void MG_BlocksEngine2_Block_BE2_BlockSectionBody__set_Spot (MG_BlocksEngine2_Block_BE2_BlockSectionBody_o* __this, MG_BlocksEngine2_Block_I_BE2_Spot_o* value, const MethodInfo* method); */

/* MG_BlocksEngine2.Block.BE2_BlockSectionBody$$set_Spot
   void MG_BlocksEngine2_Block_BE2_BlockSectionBody__set_Spot
   (MG_BlocksEngine2_Block_BE2_BlockSectionBody_o* __this, MG_BlocksEngine2_Block_I_BE2_Spot_o*
   value, const MethodInfo* method); */

void native_MG_BlocksEngine2_Block_BE2_BlockSectionBody__set_Spot_5650a0
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



/* MG_BlocksEngine2.Block.BE2_BlockSectionBody$$get_ChildBlocksCount @ 0x5650a8
 * int32_t MG_BlocksEngine2_Block_BE2_BlockSectionBody__get_ChildBlocksCount (MG_BlocksEngine2_Block_BE2_BlockSectionBody_o* __this, const MethodInfo* method); */

/* MG_BlocksEngine2.Block.BE2_BlockSectionBody$$get_ChildBlocksCount
   int32_t MG_BlocksEngine2_Block_BE2_BlockSectionBody__get_ChildBlocksCount
   (MG_BlocksEngine2_Block_BE2_BlockSectionBody_o* __this, const MethodInfo* method); */

undefined4
native_MG_BlocksEngine2_Block_BE2_BlockSectionBody__get_ChildBlocksCount_5650a8(long param_1)

{
  return *(undefined4 *)(param_1 + 0x50);
}



/* MG_BlocksEngine2.Block.BE2_BlockSectionBody$$set_ChildBlocksCount @ 0x5650b0
 * void MG_BlocksEngine2_Block_BE2_BlockSectionBody__set_ChildBlocksCount (MG_BlocksEngine2_Block_BE2_BlockSectionBody_o* __this, int32_t value, const MethodInfo* method); */

/* MG_BlocksEngine2.Block.BE2_BlockSectionBody$$set_ChildBlocksCount
   void MG_BlocksEngine2_Block_BE2_BlockSectionBody__set_ChildBlocksCount
   (MG_BlocksEngine2_Block_BE2_BlockSectionBody_o* __this, int32_t value, const MethodInfo* method);
    */

void native_MG_BlocksEngine2_Block_BE2_BlockSectionBody__set_ChildBlocksCount_5650b0
               (long param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x50) = param_2;
  return;
}



/* MG_BlocksEngine2.Block.BE2_BlockSectionBody$$get_Shadow @ 0x5650b8
 * UnityEngine_UI_Shadow_o* MG_BlocksEngine2_Block_BE2_BlockSectionBody__get_Shadow (MG_BlocksEngine2_Block_BE2_BlockSectionBody_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MG_BlocksEngine2.Block.BE2_BlockSectionBody$$get_Shadow
   UnityEngine_UI_Shadow_o* MG_BlocksEngine2_Block_BE2_BlockSectionBody__get_Shadow
   (MG_BlocksEngine2_Block_BE2_BlockSectionBody_o* __this, const MethodInfo* method); */

long native_MG_BlocksEngine2_Block_BE2_BlockSectionBody__get_Shadow_5650b8(long param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  long *plVar3;
  long lVar4;
  
  if ((bRam000000000133ea3f & 1) == 0) {
    native_sub_43273c(&Method_UnityEngine_Component_GetComponent_Shadow____12e2b00);
    native_sub_43273c(&Method_UnityEngine_GameObject_AddComponent_Shadow____12e4860);
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    bRam000000000133ea3f = 1;
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
      if (lVar4 == 0) goto LAB_00565218;
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
        goto LAB_00565200;
      }
    }
LAB_00565218:
                    /* WARNING: Subroutine does not return */
    native_sub_432810();
  }
LAB_00565200:
  return *plVar3;
}



/* MG_BlocksEngine2.Block.BE2_BlockSectionBody$$OnValidate @ 0x56521c
 * void MG_BlocksEngine2_Block_BE2_BlockSectionBody__OnValidate (MG_BlocksEngine2_Block_BE2_BlockSectionBody_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MG_BlocksEngine2.Block.BE2_BlockSectionBody$$OnValidate
   void MG_BlocksEngine2_Block_BE2_BlockSectionBody__OnValidate
   (MG_BlocksEngine2_Block_BE2_BlockSectionBody_o* __this, const MethodInfo* method); */

void native_MG_BlocksEngine2_Block_BE2_BlockSectionBody__OnValidate_56521c(long param_1)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  undefined8 uVar4;
  long lVar5;
  ulong uVar6;
  
  if ((bRam000000000133ea40 & 1) == 0) {
    native_sub_43273c(&Method_UnityEngine_Component_GetComponent_I_BE2_BlockLayout____12e2a10);
    native_sub_43273c(&Method_UnityEngine_Component_GetComponent_I_BE2_BlockSection____12e2a18);
    native_sub_43273c(&Method_UnityEngine_Component_GetComponent_I_BE2_Spot____12e2a68);
    native_sub_43273c(&Method_UnityEngine_Component_GetComponent_Image____12e2a78);
    native_sub_43273c(&Method_UnityEngine_Component_GetComponent_RectTransform____12e2ad0);
    native_sub_43273c(&MG_BlocksEngine2_Block_I_BE2_Block___TypeInfo_12d3218);
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    bRam000000000133ea40 = 1;
  }
  uVar4 = native_UnityEngine_Component__GetComponent_ActiveAnimation__49daec
                    (param_1,_Method_UnityEngine_Component_GetComponent_RectTransform____12e2ad0);
  *(undefined8 *)(param_1 + 0x30) = uVar4;
  native_sub_4326e0(param_1 + 0x30);
  lVar5 = native_UnityEngine_Component__get_transform_8da62c(param_1,0);
  if (lVar5 == 0) goto LAB_00565464;
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
    goto LAB_00565464;
    uVar4 = native_UnityEngine_Component__GetComponent_ActiveAnimation__49daec
                      (lVar5,
                       _Method_UnityEngine_Component_GetComponent_I_BE2_BlockSection____12e2a18);
    *(undefined8 *)(param_1 + 0x18) = uVar4;
    native_sub_4326e0();
    lVar5 = native_UnityEngine_Component__get_transform_8da62c(param_1,0);
    if ((lVar5 == 0) ||
       ((lVar5 = native_UnityEngine_Transform__get_parent_765eb0(lVar5,0), lVar5 == 0 ||
        (lVar5 = native_UnityEngine_Transform__get_parent_765eb0(lVar5,0), lVar5 == 0))))
    goto LAB_00565464;
    uVar4 = native_UnityEngine_Component__GetComponent_ActiveAnimation__49daec
                      (lVar5,_Method_UnityEngine_Component_GetComponent_I_BE2_BlockLayout____12e2a10
                      );
    *(undefined8 *)(param_1 + 0x20) = uVar4;
    native_sub_4326e0();
    lVar5 = native_UnityEngine_Component__get_transform_8da62c(param_1,0);
    if ((lVar5 == 0) ||
       (lVar5 = native_UnityEngine_Transform__get_parent_765eb0(lVar5,0), lVar5 == 0))
    goto LAB_00565464;
    uVar4 = native_UnityEngine_Component__GetComponent_ActiveAnimation__49daec
                      (lVar5,
                       _Method_UnityEngine_Component_GetComponent_I_BE2_BlockSection____12e2a18);
    *(undefined8 *)(param_1 + 0x40) = uVar4;
    native_sub_4326e0();
  }
  uVar4 = native_UnityEngine_Component__GetComponent_ActiveAnimation__49daec
                    (param_1,_Method_UnityEngine_Component_GetComponent_Image____12e2a78);
  *(undefined8 *)(param_1 + 0x28) = uVar4;
  native_sub_4326e0((long *)(param_1 + 0x28),uVar4);
  if (*(long *)(param_1 + 0x28) != 0) {
    native_UnityEngine_UI_Image__set_type_cb7988(*(long *)(param_1 + 0x28),1,0);
    lVar5 = *(long *)(param_1 + 0x28);
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
LAB_00565464:
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* MG_BlocksEngine2.Block.BE2_BlockSectionBody$$Awake @ 0x565220
 * void MG_BlocksEngine2_Block_BE2_BlockSectionBody__Awake (MG_BlocksEngine2_Block_BE2_BlockSectionBody_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MG_BlocksEngine2.Block.BE2_BlockSectionBody$$Awake
   void MG_BlocksEngine2_Block_BE2_BlockSectionBody__Awake
   (MG_BlocksEngine2_Block_BE2_BlockSectionBody_o* __this, const MethodInfo* method); */

void native_MG_BlocksEngine2_Block_BE2_BlockSectionBody__Awake_565220(long param_1)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  undefined8 uVar4;
  long lVar5;
  ulong uVar6;
  
  if ((bRam000000000133ea40 & 1) == 0) {
    native_sub_43273c(&Method_UnityEngine_Component_GetComponent_I_BE2_BlockLayout____12e2a10);
    native_sub_43273c(&Method_UnityEngine_Component_GetComponent_I_BE2_BlockSection____12e2a18);
    native_sub_43273c(&Method_UnityEngine_Component_GetComponent_I_BE2_Spot____12e2a68);
    native_sub_43273c(&Method_UnityEngine_Component_GetComponent_Image____12e2a78);
    native_sub_43273c(&Method_UnityEngine_Component_GetComponent_RectTransform____12e2ad0);
    native_sub_43273c(&MG_BlocksEngine2_Block_I_BE2_Block___TypeInfo_12d3218);
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    bRam000000000133ea40 = 1;
  }
  uVar4 = native_UnityEngine_Component__GetComponent_ActiveAnimation__49daec
                    (param_1,_Method_UnityEngine_Component_GetComponent_RectTransform____12e2ad0);
  *(undefined8 *)(param_1 + 0x30) = uVar4;
  native_sub_4326e0(param_1 + 0x30);
  lVar5 = native_UnityEngine_Component__get_transform_8da62c(param_1,0);
  if (lVar5 == 0) goto LAB_00565464;
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
    goto LAB_00565464;
    uVar4 = native_UnityEngine_Component__GetComponent_ActiveAnimation__49daec
                      (lVar5,
                       _Method_UnityEngine_Component_GetComponent_I_BE2_BlockSection____12e2a18);
    *(undefined8 *)(param_1 + 0x18) = uVar4;
    native_sub_4326e0();
    lVar5 = native_UnityEngine_Component__get_transform_8da62c(param_1,0);
    if ((lVar5 == 0) ||
       ((lVar5 = native_UnityEngine_Transform__get_parent_765eb0(lVar5,0), lVar5 == 0 ||
        (lVar5 = native_UnityEngine_Transform__get_parent_765eb0(lVar5,0), lVar5 == 0))))
    goto LAB_00565464;
    uVar4 = native_UnityEngine_Component__GetComponent_ActiveAnimation__49daec
                      (lVar5,_Method_UnityEngine_Component_GetComponent_I_BE2_BlockLayout____12e2a10
                      );
    *(undefined8 *)(param_1 + 0x20) = uVar4;
    native_sub_4326e0();
    lVar5 = native_UnityEngine_Component__get_transform_8da62c(param_1,0);
    if ((lVar5 == 0) ||
       (lVar5 = native_UnityEngine_Transform__get_parent_765eb0(lVar5,0), lVar5 == 0))
    goto LAB_00565464;
    uVar4 = native_UnityEngine_Component__GetComponent_ActiveAnimation__49daec
                      (lVar5,
                       _Method_UnityEngine_Component_GetComponent_I_BE2_BlockSection____12e2a18);
    *(undefined8 *)(param_1 + 0x40) = uVar4;
    native_sub_4326e0();
  }
  uVar4 = native_UnityEngine_Component__GetComponent_ActiveAnimation__49daec
                    (param_1,_Method_UnityEngine_Component_GetComponent_Image____12e2a78);
  *(undefined8 *)(param_1 + 0x28) = uVar4;
  native_sub_4326e0((long *)(param_1 + 0x28),uVar4);
  if (*(long *)(param_1 + 0x28) != 0) {
    native_UnityEngine_UI_Image__set_type_cb7988(*(long *)(param_1 + 0x28),1,0);
    lVar5 = *(long *)(param_1 + 0x28);
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
LAB_00565464:
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* MG_BlocksEngine2.Block.BE2_BlockSectionBody$$UpdateChildBlocksList @ 0x565468
 * void MG_BlocksEngine2_Block_BE2_BlockSectionBody__UpdateChildBlocksList (MG_BlocksEngine2_Block_BE2_BlockSectionBody_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MG_BlocksEngine2.Block.BE2_BlockSectionBody$$UpdateChildBlocksList
   void MG_BlocksEngine2_Block_BE2_BlockSectionBody__UpdateChildBlocksList
   (MG_BlocksEngine2_Block_BE2_BlockSectionBody_o* __this, const MethodInfo* method); */

void native_MG_BlocksEngine2_Block_BE2_BlockSectionBody__UpdateChildBlocksList_565468(long param_1)

{
  int iVar1;
  long lVar2;
  long *plVar3;
  int iVar4;
  
  if ((bRam000000000133ea41 & 1) == 0) {
    native_sub_43273c(&Method_MG_BlocksEngine2_Utils_BE2_ArrayUtils_AddReturn_I_BE2_Block____12e20c8
                     );
    native_sub_43273c(&Method_UnityEngine_Component_GetComponent_I_BE2_Block____12e2a08);
    native_sub_43273c(&MG_BlocksEngine2_Block_I_BE2_Block___TypeInfo_12d3218);
    bRam000000000133ea41 = 1;
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
        goto LAB_00565594;
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
LAB_00565594:
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* MG_BlocksEngine2.Block.BE2_BlockSectionBody$$UpdateLayout @ 0x565598
 * void MG_BlocksEngine2_Block_BE2_BlockSectionBody__UpdateLayout (MG_BlocksEngine2_Block_BE2_BlockSectionBody_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MG_BlocksEngine2.Block.BE2_BlockSectionBody$$UpdateLayout
   void MG_BlocksEngine2_Block_BE2_BlockSectionBody__UpdateLayout
   (MG_BlocksEngine2_Block_BE2_BlockSectionBody_o* __this, const MethodInfo* method); */

void native_MG_BlocksEngine2_Block_BE2_BlockSectionBody__UpdateLayout_565598(long param_1)

{
  int iVar1;
  int iVar2;
  ulong uVar3;
  undefined8 *puVar4;
  long lVar5;
  int *piVar6;
  long lVar7;
  undefined8 uVar8;
  long *plVar9;
  long *plVar10;
  uint uVar11;
  
  if ((bRam000000000133ea42 & 1) == 0) {
    native_sub_43273c(&MG_BlocksEngine2_Block_I_BE2_BlockLayout_TypeInfo_12d4de0);
    native_sub_43273c(&MG_BlocksEngine2_Block_I_BE2_BlockSection_TypeInfo_12d4de8);
    native_sub_43273c(&MG_BlocksEngine2_Block_I_BE2_Block_TypeInfo_12d4dd8);
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    bRam000000000133ea42 = 1;
  }
  if (*(long *)(param_1 + 0x28) != 0) {
    uVar8 = *(undefined8 *)(*(long *)(param_1 + 0x28) + 0xd0);
    if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    uVar3 = native_UnityEngine_Object__op_Inequality_8d76fc(uVar8,0,0);
    if (((uVar3 & 1) != 0) && (plVar10 = *(long **)(param_1 + 0x20), plVar10 != (long *)0x0)) {
      lVar5 = *plVar10;
      plVar9 = *(long **)(param_1 + 0x28);
      if ((ulong)*(ushort *)(lVar5 + 0x12a) != 0) {
        uVar3 = 0;
        piVar6 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(long *)(piVar6 + -2) == _MG_BlocksEngine2_Block_I_BE2_BlockLayout_TypeInfo_12d4de0)
          {
            puVar4 = (undefined8 *)(lVar5 + (long)(*piVar6 + 3) * 0x10 + 0x138);
            goto LAB_005656ac;
          }
          uVar3 = uVar3 + 1;
          piVar6 = piVar6 + 4;
        } while (uVar3 < *(ushort *)(lVar5 + 0x12a));
      }
      puVar4 = (undefined8 *)
               native_sub_3c9b34(plVar10,_MG_BlocksEngine2_Block_I_BE2_BlockLayout_TypeInfo_12d4de0,
                                 3);
LAB_005656ac:
      (*(code *)*puVar4)(plVar10,puVar4[1]);
      if (plVar9 == (long *)0x0) goto LAB_005659e4;
      (**(code **)(*plVar9 + 0x2a8))(plVar9,*(undefined8 *)(*plVar9 + 0x2b0));
    }
    plVar10 = *(long **)(param_1 + 0x18);
    if (plVar10 != (long *)0x0) {
      lVar5 = *plVar10;
      if ((ulong)*(ushort *)(lVar5 + 0x12a) != 0) {
        uVar3 = 0;
        piVar6 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(long *)(piVar6 + -2) == _MG_BlocksEngine2_Block_I_BE2_BlockSection_TypeInfo_12d4de8)
          {
            puVar4 = (undefined8 *)(lVar5 + (long)(*piVar6 + 4) * 0x10 + 0x138);
            goto LAB_00565738;
          }
          uVar3 = uVar3 + 1;
          piVar6 = piVar6 + 4;
        } while (uVar3 < *(ushort *)(lVar5 + 0x12a));
      }
      puVar4 = (undefined8 *)
               native_sub_3c9b34(plVar10,_MG_BlocksEngine2_Block_I_BE2_BlockSection_TypeInfo_12d4de8
                                 ,4);
LAB_00565738:
      plVar10 = (long *)(*(code *)*puVar4)(plVar10,puVar4[1]);
      if (plVar10 != (long *)0x0) {
        lVar5 = *plVar10;
        if ((ulong)*(ushort *)(lVar5 + 0x12a) != 0) {
          uVar3 = 0;
          piVar6 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
          do {
            if (*(long *)(piVar6 + -2) == _MG_BlocksEngine2_Block_I_BE2_Block_TypeInfo_12d4dd8) {
              puVar4 = (undefined8 *)(lVar5 + (long)(*piVar6 + 1) * 0x10 + 0x138);
              goto LAB_005657ac;
            }
            uVar3 = uVar3 + 1;
            piVar6 = piVar6 + 4;
          } while (uVar3 < *(ushort *)(lVar5 + 0x12a));
        }
        puVar4 = (undefined8 *)
                 native_sub_3c9b34(plVar10,_MG_BlocksEngine2_Block_I_BE2_Block_TypeInfo_12d4dd8,1);
LAB_005657ac:
        iVar1 = (*(code *)*puVar4)(plVar10,puVar4[1]);
        if (iVar1 != 4) {
          plVar10 = *(long **)(param_1 + 0x18);
          if (plVar10 == (long *)0x0) goto LAB_005659e4;
          lVar5 = *plVar10;
          if ((ulong)*(ushort *)(lVar5 + 0x12a) != 0) {
            uVar3 = 0;
            piVar6 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
            do {
              if (*(long *)(piVar6 + -2) ==
                  _MG_BlocksEngine2_Block_I_BE2_BlockSection_TypeInfo_12d4de8) {
                puVar4 = (undefined8 *)(lVar5 + (long)(*piVar6 + 4) * 0x10 + 0x138);
                goto LAB_00565820;
              }
              uVar3 = uVar3 + 1;
              piVar6 = piVar6 + 4;
            } while (uVar3 < *(ushort *)(lVar5 + 0x12a));
          }
          puVar4 = (undefined8 *)
                   native_sub_3c9b34(plVar10,
                                     _MG_BlocksEngine2_Block_I_BE2_BlockSection_TypeInfo_12d4de8,4);
LAB_00565820:
          plVar10 = (long *)(*(code *)*puVar4)(plVar10,puVar4[1]);
          if (plVar10 == (long *)0x0) goto LAB_005659e4;
          lVar5 = *plVar10;
          if ((ulong)*(ushort *)(lVar5 + 0x12a) != 0) {
            uVar3 = 0;
            piVar6 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
            do {
              if (*(long *)(piVar6 + -2) == _MG_BlocksEngine2_Block_I_BE2_Block_TypeInfo_12d4dd8) {
                puVar4 = (undefined8 *)(lVar5 + (long)(*piVar6 + 1) * 0x10 + 0x138);
                goto LAB_0056588c;
              }
              uVar3 = uVar3 + 1;
              piVar6 = piVar6 + 4;
            } while (uVar3 < *(ushort *)(lVar5 + 0x12a));
          }
          puVar4 = (undefined8 *)
                   native_sub_3c9b34(plVar10,_MG_BlocksEngine2_Block_I_BE2_Block_TypeInfo_12d4dd8,1)
          ;
LAB_0056588c:
          (*(code *)*puVar4)(plVar10,puVar4[1]);
        }
        native_MG_BlocksEngine2_Block_BE2_BlockSectionBody__UpdateChildBlocksList_565468(param_1);
        lVar5 = *(long *)(param_1 + 0x38);
        if (lVar5 != 0) {
          iVar1 = *(int *)(lVar5 + 0x18);
          if (iVar1 < 1) {
LAB_005659ec:
            plVar10 = *(long **)(param_1 + 0x18);
            if (plVar10 != (long *)0x0) {
              lVar5 = *plVar10;
              if ((ulong)*(ushort *)(lVar5 + 0x12a) != 0) {
                uVar3 = 0;
                piVar6 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar6 + -2) ==
                      _MG_BlocksEngine2_Block_I_BE2_BlockSection_TypeInfo_12d4de8) {
                    puVar4 = (undefined8 *)(lVar5 + (long)*piVar6 * 0x10 + 0x138);
                    goto LAB_00565a58;
                  }
                  uVar3 = uVar3 + 1;
                  piVar6 = piVar6 + 4;
                } while (uVar3 < *(ushort *)(lVar5 + 0x12a));
              }
              puVar4 = (undefined8 *)
                       native_sub_3c9b34(plVar10,
                                         _MG_BlocksEngine2_Block_I_BE2_BlockSection_TypeInfo_12d4de8
                                         ,0);
LAB_00565a58:
              lVar5 = (*(code *)*puVar4)(plVar10,puVar4[1]);
              if ((lVar5 != 0) &&
                 (lVar5 = native_UnityEngine_Component__get_transform_8da62c(lVar5,0), lVar5 != 0))
              {
                iVar1 = native_UnityEngine_Transform__GetSiblingIndex_772b74(lVar5,0);
                plVar10 = *(long **)(param_1 + 0x18);
                if (plVar10 != (long *)0x0) {
                  lVar5 = *plVar10;
                  if ((ulong)*(ushort *)(lVar5 + 0x12a) != 0) {
                    uVar3 = 0;
                    piVar6 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
                    do {
                      if (*(long *)(piVar6 + -2) ==
                          _MG_BlocksEngine2_Block_I_BE2_BlockSection_TypeInfo_12d4de8) {
                        puVar4 = (undefined8 *)(lVar5 + (long)*piVar6 * 0x10 + 0x138);
                        goto LAB_00565adc;
                      }
                      uVar3 = uVar3 + 1;
                      piVar6 = piVar6 + 4;
                    } while (uVar3 < *(ushort *)(lVar5 + 0x12a));
                  }
                  puVar4 = (undefined8 *)
                           native_sub_3c9b34(plVar10,
                                             _MG_BlocksEngine2_Block_I_BE2_BlockSection_TypeInfo_12d4de8
                                             ,0);
LAB_00565adc:
                  lVar5 = (*(code *)*puVar4)(plVar10,puVar4[1]);
                  if (((lVar5 != 0) &&
                      (lVar5 = native_UnityEngine_Component__get_transform_8da62c(lVar5,0),
                      lVar5 != 0)) &&
                     (lVar5 = native_UnityEngine_Transform__get_parent_765eb0(lVar5,0), lVar5 != 0))
                  {
                    iVar2 = native_UnityEngine_Transform__get_childCount_772a64(lVar5,0);
                    if (iVar1 == iVar2 + -2) {
                      plVar10 = *(long **)(param_1 + 0x18);
                      if (plVar10 == (long *)0x0) goto LAB_005659e4;
                      lVar5 = *plVar10;
                      if ((ulong)*(ushort *)(lVar5 + 0x12a) != 0) {
                        uVar3 = 0;
                        piVar6 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
                        do {
                          if (*(long *)(piVar6 + -2) ==
                              _MG_BlocksEngine2_Block_I_BE2_BlockSection_TypeInfo_12d4de8) {
                            puVar4 = (undefined8 *)(lVar5 + (long)(*piVar6 + 4) * 0x10 + 0x138);
                            goto LAB_00565b78;
                          }
                          uVar3 = uVar3 + 1;
                          piVar6 = piVar6 + 4;
                        } while (uVar3 < *(ushort *)(lVar5 + 0x12a));
                      }
                      puVar4 = (undefined8 *)
                               native_sub_3c9b34(plVar10,
                                                 _MG_BlocksEngine2_Block_I_BE2_BlockSection_TypeInfo_12d4de8
                                                 ,4);
LAB_00565b78:
                      plVar10 = (long *)(*(code *)*puVar4)(plVar10,puVar4[1]);
                      if (plVar10 == (long *)0x0) goto LAB_005659e4;
                      lVar5 = *plVar10;
                      if ((ulong)*(ushort *)(lVar5 + 0x12a) != 0) {
                        uVar3 = 0;
                        piVar6 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
                        do {
                          if (*(long *)(piVar6 + -2) ==
                              _MG_BlocksEngine2_Block_I_BE2_Block_TypeInfo_12d4dd8) {
                            puVar4 = (undefined8 *)(lVar5 + (long)(*piVar6 + 1) * 0x10 + 0x138);
                            goto LAB_00565be4;
                          }
                          uVar3 = uVar3 + 1;
                          piVar6 = piVar6 + 4;
                        } while (uVar3 < *(ushort *)(lVar5 + 0x12a));
                      }
                      puVar4 = (undefined8 *)
                               native_sub_3c9b34(plVar10,
                                                 _MG_BlocksEngine2_Block_I_BE2_Block_TypeInfo_12d4dd8
                                                 ,1);
LAB_00565be4:
                      iVar1 = (*(code *)*puVar4)(plVar10,puVar4[1]);
                      if (iVar1 != 4) {
                        plVar10 = *(long **)(param_1 + 0x18);
                        if (plVar10 == (long *)0x0) goto LAB_005659e4;
                        lVar5 = *plVar10;
                        if ((ulong)*(ushort *)(lVar5 + 0x12a) != 0) {
                          uVar3 = 0;
                          piVar6 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
                          do {
                            if (*(long *)(piVar6 + -2) ==
                                _MG_BlocksEngine2_Block_I_BE2_BlockSection_TypeInfo_12d4de8) {
                              puVar4 = (undefined8 *)(lVar5 + (long)(*piVar6 + 4) * 0x10 + 0x138);
                              goto LAB_00565c58;
                            }
                            uVar3 = uVar3 + 1;
                            piVar6 = piVar6 + 4;
                          } while (uVar3 < *(ushort *)(lVar5 + 0x12a));
                        }
                        puVar4 = (undefined8 *)
                                 native_sub_3c9b34(plVar10,
                                                  _MG_BlocksEngine2_Block_I_BE2_BlockSection_TypeInfo_12d4de8
                                                  ,4);
LAB_00565c58:
                        plVar10 = (long *)(*(code *)*puVar4)(plVar10,puVar4[1]);
                        if (plVar10 == (long *)0x0) goto LAB_005659e4;
                        lVar5 = *plVar10;
                        if ((ulong)*(ushort *)(lVar5 + 0x12a) != 0) {
                          uVar3 = 0;
                          piVar6 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
                          do {
                            if (*(long *)(piVar6 + -2) ==
                                _MG_BlocksEngine2_Block_I_BE2_Block_TypeInfo_12d4dd8) {
                              puVar4 = (undefined8 *)(lVar5 + (long)(*piVar6 + 1) * 0x10 + 0x138);
                              goto LAB_00565cc4;
                            }
                            uVar3 = uVar3 + 1;
                            piVar6 = piVar6 + 4;
                          } while (uVar3 < *(ushort *)(lVar5 + 0x12a));
                        }
                        puVar4 = (undefined8 *)
                                 native_sub_3c9b34(plVar10,
                                                  _MG_BlocksEngine2_Block_I_BE2_Block_TypeInfo_12d4dd8
                                                  ,1);
LAB_00565cc4:
                        (*(code *)*puVar4)(plVar10,puVar4[1]);
                      }
                    }
                    plVar10 = *(long **)(param_1 + 0x18);
                    if (plVar10 != (long *)0x0) {
                      lVar5 = *plVar10;
                      lVar7 = *(long *)(param_1 + 0x30);
                      if ((ulong)*(ushort *)(lVar5 + 0x12a) != 0) {
                        uVar3 = 0;
                        piVar6 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
                        do {
                          if (*(long *)(piVar6 + -2) ==
                              _MG_BlocksEngine2_Block_I_BE2_BlockSection_TypeInfo_12d4de8) {
                            puVar4 = (undefined8 *)(lVar5 + (long)(*piVar6 + 3) * 0x10 + 0x138);
                            goto LAB_00565d48;
                          }
                          uVar3 = uVar3 + 1;
                          piVar6 = piVar6 + 4;
                        } while (uVar3 < *(ushort *)(lVar5 + 0x12a));
                      }
                      puVar4 = (undefined8 *)
                               native_sub_3c9b34(plVar10,
                                                 _MG_BlocksEngine2_Block_I_BE2_BlockSection_TypeInfo_12d4de8
                                                 ,3);
LAB_00565d48:
                      (*(code *)*puVar4)(plVar10,puVar4[1]);
                      if (lVar7 != 0) {
                        if (pcRam000000000133f8e8 == (code *)0x0) {
                          pcRam000000000133f8e8 = (code *)native_sub_4326f0(&UNK_00e28502,0);
                        }
                        (*pcRam000000000133f8e8)(lVar7,&stack0xffffffffffffffd8);
                        return;
                      }
                    }
                  }
                }
              }
            }
          }
          else {
            uVar11 = 0;
            do {
              if (*(uint *)(lVar5 + 0x18) <= uVar11) {
                uVar8 = native_sub_43283c();
                    /* WARNING: Subroutine does not return */
                native_sub_4327dc(uVar8,0);
              }
              plVar10 = *(long **)(lVar5 + (long)(int)uVar11 * 8 + 0x20);
              if (plVar10 == (long *)0x0) break;
              lVar5 = *plVar10;
              if ((ulong)*(ushort *)(lVar5 + 0x12a) != 0) {
                uVar3 = 0;
                piVar6 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar6 + -2) == _MG_BlocksEngine2_Block_I_BE2_Block_TypeInfo_12d4dd8
                     ) {
                    puVar4 = (undefined8 *)(lVar5 + (long)(*piVar6 + 3) * 0x10 + 0x138);
                    goto LAB_00565950;
                  }
                  uVar3 = uVar3 + 1;
                  piVar6 = piVar6 + 4;
                } while (uVar3 < *(ushort *)(lVar5 + 0x12a));
              }
              puVar4 = (undefined8 *)
                       native_sub_3c9b34(plVar10,
                                         _MG_BlocksEngine2_Block_I_BE2_Block_TypeInfo_12d4dd8,3);
LAB_00565950:
              plVar10 = (long *)(*(code *)*puVar4)(plVar10,puVar4[1]);
              if (plVar10 == (long *)0x0) break;
              lVar5 = *plVar10;
              if ((ulong)*(ushort *)(lVar5 + 0x12a) != 0) {
                uVar3 = 0;
                piVar6 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar6 + -2) ==
                      _MG_BlocksEngine2_Block_I_BE2_BlockLayout_TypeInfo_12d4de0) {
                    puVar4 = (undefined8 *)(lVar5 + (long)(*piVar6 + 5) * 0x10 + 0x138);
                    goto LAB_005659bc;
                  }
                  uVar3 = uVar3 + 1;
                  piVar6 = piVar6 + 4;
                } while (uVar3 < *(ushort *)(lVar5 + 0x12a));
              }
              puVar4 = (undefined8 *)
                       native_sub_3c9b34(plVar10,
                                         _MG_BlocksEngine2_Block_I_BE2_BlockLayout_TypeInfo_12d4de0,
                                         5);
LAB_005659bc:
              (*(code *)*puVar4)(plVar10,puVar4[1]);
              uVar11 = uVar11 + 1;
              if (iVar1 <= (int)uVar11) goto LAB_005659ec;
              lVar5 = *(long *)(param_1 + 0x38);
            } while (lVar5 != 0);
          }
        }
      }
    }
  }
LAB_005659e4:
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* MG_BlocksEngine2.Block.BE2_BlockSectionBody$$.ctor @ 0x565d90
 * void MG_BlocksEngine2_Block_BE2_BlockSectionBody___ctor (MG_BlocksEngine2_Block_BE2_BlockSectionBody_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MG_BlocksEngine2.Block.BE2_BlockSectionBody$$.ctor
   void MG_BlocksEngine2_Block_BE2_BlockSectionBody___ctor
   (MG_BlocksEngine2_Block_BE2_BlockSectionBody_o* __this, const MethodInfo* method); */

undefined1  [16] native_MG_BlocksEngine2_Block_BE2_BlockSectionBody___ctor_565d90(ulong param_1)

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


