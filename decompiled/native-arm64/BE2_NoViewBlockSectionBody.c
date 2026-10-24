/* ARM64 IL2CPP native pseudocode from Ghidra.
 * Recovered implementation, not original C# source.
 * Function boundaries follow the IL2CPP method address table. */


/* MG_BlocksEngine2.Block.BE2_NoViewBlockSectionBody$$get_RectTransform @ 0x6124a8
 * UnityEngine_RectTransform_o* MG_BlocksEngine2_Block_BE2_NoViewBlockSectionBody__get_RectTransform (MG_BlocksEngine2_Block_BE2_NoViewBlockSectionBody_o* __this, const MethodInfo* method); */

/* MG_BlocksEngine2.Block.BE2_NoViewBlockSectionBody$$get_RectTransform
   UnityEngine_RectTransform_o* MG_BlocksEngine2_Block_BE2_NoViewBlockSectionBody__get_RectTransform
   (MG_BlocksEngine2_Block_BE2_NoViewBlockSectionBody_o* __this, const MethodInfo* method); */

undefined8
native_MG_BlocksEngine2_Block_BE2_NoViewBlockSectionBody__get_RectTransform_6124a8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* MG_BlocksEngine2.Block.BE2_NoViewBlockSectionBody$$get_ChildBlocksArray @ 0x6124b0
 * MG_BlocksEngine2_Block_I_BE2_Block_array* MG_BlocksEngine2_Block_BE2_NoViewBlockSectionBody__get_ChildBlocksArray (MG_BlocksEngine2_Block_BE2_NoViewBlockSectionBody_o* __this, const MethodInfo* method); */

/* MG_BlocksEngine2.Block.BE2_NoViewBlockSectionBody$$get_ChildBlocksArray
   MG_BlocksEngine2_Block_I_BE2_Block_array*
   MG_BlocksEngine2_Block_BE2_NoViewBlockSectionBody__get_ChildBlocksArray
   (MG_BlocksEngine2_Block_BE2_NoViewBlockSectionBody_o* __this, const MethodInfo* method); */

undefined8
native_MG_BlocksEngine2_Block_BE2_NoViewBlockSectionBody__get_ChildBlocksArray_6124b0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* MG_BlocksEngine2.Block.BE2_NoViewBlockSectionBody$$set_ChildBlocksArray @ 0x6124b8
 * void MG_BlocksEngine2_Block_BE2_NoViewBlockSectionBody__set_ChildBlocksArray (MG_BlocksEngine2_Block_BE2_NoViewBlockSectionBody_o* __this, MG_BlocksEngine2_Block_I_BE2_Block_array* value, const MethodInfo* method); */

/* MG_BlocksEngine2.Block.BE2_NoViewBlockSectionBody$$set_ChildBlocksArray
   void MG_BlocksEngine2_Block_BE2_NoViewBlockSectionBody__set_ChildBlocksArray
   (MG_BlocksEngine2_Block_BE2_NoViewBlockSectionBody_o* __this,
   MG_BlocksEngine2_Block_I_BE2_Block_array* value, const MethodInfo* method); */

void native_MG_BlocksEngine2_Block_BE2_NoViewBlockSectionBody__set_ChildBlocksArray_6124b8
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



/* MG_BlocksEngine2.Block.BE2_NoViewBlockSectionBody$$get_BlockSection @ 0x6124c0
 * MG_BlocksEngine2_Block_I_BE2_BlockSection_o* MG_BlocksEngine2_Block_BE2_NoViewBlockSectionBody__get_BlockSection (MG_BlocksEngine2_Block_BE2_NoViewBlockSectionBody_o* __this, const MethodInfo* method); */

/* MG_BlocksEngine2.Block.BE2_NoViewBlockSectionBody$$get_BlockSection
   MG_BlocksEngine2_Block_I_BE2_BlockSection_o*
   MG_BlocksEngine2_Block_BE2_NoViewBlockSectionBody__get_BlockSection
   (MG_BlocksEngine2_Block_BE2_NoViewBlockSectionBody_o* __this, const MethodInfo* method); */

undefined8
native_MG_BlocksEngine2_Block_BE2_NoViewBlockSectionBody__get_BlockSection_6124c0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



/* MG_BlocksEngine2.Block.BE2_NoViewBlockSectionBody$$set_BlockSection @ 0x6124c8
 * void MG_BlocksEngine2_Block_BE2_NoViewBlockSectionBody__set_BlockSection (MG_BlocksEngine2_Block_BE2_NoViewBlockSectionBody_o* __this, MG_BlocksEngine2_Block_I_BE2_BlockSection_o* value, const MethodInfo* method); */

/* MG_BlocksEngine2.Block.BE2_NoViewBlockSectionBody$$set_BlockSection
   void MG_BlocksEngine2_Block_BE2_NoViewBlockSectionBody__set_BlockSection
   (MG_BlocksEngine2_Block_BE2_NoViewBlockSectionBody_o* __this,
   MG_BlocksEngine2_Block_I_BE2_BlockSection_o* value, const MethodInfo* method); */

void native_MG_BlocksEngine2_Block_BE2_NoViewBlockSectionBody__set_BlockSection_6124c8
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



/* MG_BlocksEngine2.Block.BE2_NoViewBlockSectionBody$$get_Size @ 0x6124d0
 * UnityEngine_Vector2_o MG_BlocksEngine2_Block_BE2_NoViewBlockSectionBody__get_Size (MG_BlocksEngine2_Block_BE2_NoViewBlockSectionBody_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MG_BlocksEngine2.Block.BE2_NoViewBlockSectionBody$$get_Size
   UnityEngine_Vector2_o MG_BlocksEngine2_Block_BE2_NoViewBlockSectionBody__get_Size
   (MG_BlocksEngine2_Block_BE2_NoViewBlockSectionBody_o* __this, const MethodInfo* method); */

undefined8 native_MG_BlocksEngine2_Block_BE2_NoViewBlockSectionBody__get_Size_6124d0(void)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  if ((bRam000000000133ff9e & 1) == 0) {
    uVar1 = native_sub_43273c(&UnityEngine_Vector2_TypeInfo_12d66e0);
    bRam000000000133ff9e = 1;
  }
  return uVar1;
}



/* MG_BlocksEngine2.Block.BE2_NoViewBlockSectionBody$$get_Spot @ 0x6124d8
 * MG_BlocksEngine2_Block_I_BE2_Spot_o* MG_BlocksEngine2_Block_BE2_NoViewBlockSectionBody__get_Spot (MG_BlocksEngine2_Block_BE2_NoViewBlockSectionBody_o* __this, const MethodInfo* method); */

/* MG_BlocksEngine2.Block.BE2_NoViewBlockSectionBody$$get_Spot
   MG_BlocksEngine2_Block_I_BE2_Spot_o* MG_BlocksEngine2_Block_BE2_NoViewBlockSectionBody__get_Spot
   (MG_BlocksEngine2_Block_BE2_NoViewBlockSectionBody_o* __this, const MethodInfo* method); */

undefined8 native_MG_BlocksEngine2_Block_BE2_NoViewBlockSectionBody__get_Spot_6124d8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x40);
}



/* MG_BlocksEngine2.Block.BE2_NoViewBlockSectionBody$$set_Spot @ 0x6124e0
 * void MG_BlocksEngine2_Block_BE2_NoViewBlockSectionBody__set_Spot (MG_BlocksEngine2_Block_BE2_NoViewBlockSectionBody_o* __this, MG_BlocksEngine2_Block_I_BE2_Spot_o* value, const MethodInfo* method); */

/* MG_BlocksEngine2.Block.BE2_NoViewBlockSectionBody$$set_Spot
   void MG_BlocksEngine2_Block_BE2_NoViewBlockSectionBody__set_Spot
   (MG_BlocksEngine2_Block_BE2_NoViewBlockSectionBody_o* __this,
   MG_BlocksEngine2_Block_I_BE2_Spot_o* value, const MethodInfo* method); */

void native_MG_BlocksEngine2_Block_BE2_NoViewBlockSectionBody__set_Spot_6124e0
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



/* MG_BlocksEngine2.Block.BE2_NoViewBlockSectionBody$$get_ChildBlocksCount @ 0x6124e8
 * int32_t MG_BlocksEngine2_Block_BE2_NoViewBlockSectionBody__get_ChildBlocksCount (MG_BlocksEngine2_Block_BE2_NoViewBlockSectionBody_o* __this, const MethodInfo* method); */

/* MG_BlocksEngine2.Block.BE2_NoViewBlockSectionBody$$get_ChildBlocksCount
   int32_t MG_BlocksEngine2_Block_BE2_NoViewBlockSectionBody__get_ChildBlocksCount
   (MG_BlocksEngine2_Block_BE2_NoViewBlockSectionBody_o* __this, const MethodInfo* method); */

undefined4
native_MG_BlocksEngine2_Block_BE2_NoViewBlockSectionBody__get_ChildBlocksCount_6124e8(long param_1)

{
  return *(undefined4 *)(param_1 + 0x48);
}



/* MG_BlocksEngine2.Block.BE2_NoViewBlockSectionBody$$set_ChildBlocksCount @ 0x6124f0
 * void MG_BlocksEngine2_Block_BE2_NoViewBlockSectionBody__set_ChildBlocksCount (MG_BlocksEngine2_Block_BE2_NoViewBlockSectionBody_o* __this, int32_t value, const MethodInfo* method); */

/* MG_BlocksEngine2.Block.BE2_NoViewBlockSectionBody$$set_ChildBlocksCount
   void MG_BlocksEngine2_Block_BE2_NoViewBlockSectionBody__set_ChildBlocksCount
   (MG_BlocksEngine2_Block_BE2_NoViewBlockSectionBody_o* __this, int32_t value, const MethodInfo*
   method); */

void native_MG_BlocksEngine2_Block_BE2_NoViewBlockSectionBody__set_ChildBlocksCount_6124f0
               (long param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x48) = param_2;
  return;
}



/* MG_BlocksEngine2.Block.BE2_NoViewBlockSectionBody$$get_Shadow @ 0x6124f8
 * UnityEngine_UI_Shadow_o* MG_BlocksEngine2_Block_BE2_NoViewBlockSectionBody__get_Shadow (MG_BlocksEngine2_Block_BE2_NoViewBlockSectionBody_o* __this, const MethodInfo* method); */

/* MG_BlocksEngine2.Block.BE2_NoViewBlockSectionBody$$get_Shadow
   UnityEngine_UI_Shadow_o* MG_BlocksEngine2_Block_BE2_NoViewBlockSectionBody__get_Shadow
   (MG_BlocksEngine2_Block_BE2_NoViewBlockSectionBody_o* __this, const MethodInfo* method); */

undefined8 native_MG_BlocksEngine2_Block_BE2_NoViewBlockSectionBody__get_Shadow_6124f8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x50);
}



/* MG_BlocksEngine2.Block.BE2_NoViewBlockSectionBody$$OnValidate @ 0x612500
 * void MG_BlocksEngine2_Block_BE2_NoViewBlockSectionBody__OnValidate (MG_BlocksEngine2_Block_BE2_NoViewBlockSectionBody_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MG_BlocksEngine2.Block.BE2_NoViewBlockSectionBody$$OnValidate
   void MG_BlocksEngine2_Block_BE2_NoViewBlockSectionBody__OnValidate
   (MG_BlocksEngine2_Block_BE2_NoViewBlockSectionBody_o* __this, const MethodInfo* method); */

void native_MG_BlocksEngine2_Block_BE2_NoViewBlockSectionBody__OnValidate_612500(long param_1)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  undefined8 uVar4;
  long lVar5;
  ulong uVar6;
  undefined8 *puVar7;
  
  if ((bRam000000000133ee69 & 1) == 0) {
    native_sub_43273c(&Method_UnityEngine_Component_GetComponent_I_BE2_BlockLayout____12e2a10);
    native_sub_43273c(&Method_UnityEngine_Component_GetComponent_I_BE2_BlockSection____12e2a18);
    native_sub_43273c(&Method_UnityEngine_Component_GetComponent_RectTransform____12e2ad0);
    native_sub_43273c(&MG_BlocksEngine2_Block_I_BE2_Block___TypeInfo_12d3218);
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    bRam000000000133ee69 = 1;
  }
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
native_sub_41086c:
      uVar4 = native_sub_432750(_MG_BlocksEngine2_Block_I_BE2_Block___TypeInfo_12d3218,0);
      puVar7 = (undefined8 *)(param_1 + 0x30);
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
        *(undefined8 *)(param_1 + 0x28) = uVar4;
        native_sub_4326e0();
        lVar5 = native_UnityEngine_Component__get_transform_8da62c(param_1,0);
        if ((lVar5 != 0) &&
           (lVar5 = native_UnityEngine_Transform__get_parent_765eb0(lVar5,0), lVar5 != 0)) {
          uVar4 = native_UnityEngine_Component__GetComponent_ActiveAnimation__49daec
                            (lVar5,
                             _Method_UnityEngine_Component_GetComponent_I_BE2_BlockSection____12e2a18
                            );
          *(undefined8 *)(param_1 + 0x38) = uVar4;
          native_sub_4326e0();
          goto native_sub_41086c;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* MG_BlocksEngine2.Block.BE2_NoViewBlockSectionBody$$Awake @ 0x612504
 * void MG_BlocksEngine2_Block_BE2_NoViewBlockSectionBody__Awake (MG_BlocksEngine2_Block_BE2_NoViewBlockSectionBody_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MG_BlocksEngine2.Block.BE2_NoViewBlockSectionBody$$Awake
   void MG_BlocksEngine2_Block_BE2_NoViewBlockSectionBody__Awake
   (MG_BlocksEngine2_Block_BE2_NoViewBlockSectionBody_o* __this, const MethodInfo* method); */

void native_MG_BlocksEngine2_Block_BE2_NoViewBlockSectionBody__Awake_612504(long param_1)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  undefined8 uVar4;
  long lVar5;
  ulong uVar6;
  undefined8 *puVar7;
  
  if ((bRam000000000133ee69 & 1) == 0) {
    native_sub_43273c(&Method_UnityEngine_Component_GetComponent_I_BE2_BlockLayout____12e2a10);
    native_sub_43273c(&Method_UnityEngine_Component_GetComponent_I_BE2_BlockSection____12e2a18);
    native_sub_43273c(&Method_UnityEngine_Component_GetComponent_RectTransform____12e2ad0);
    native_sub_43273c(&MG_BlocksEngine2_Block_I_BE2_Block___TypeInfo_12d3218);
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    bRam000000000133ee69 = 1;
  }
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
native_sub_41086c:
      uVar4 = native_sub_432750(_MG_BlocksEngine2_Block_I_BE2_Block___TypeInfo_12d3218,0);
      puVar7 = (undefined8 *)(param_1 + 0x30);
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
        *(undefined8 *)(param_1 + 0x28) = uVar4;
        native_sub_4326e0();
        lVar5 = native_UnityEngine_Component__get_transform_8da62c(param_1,0);
        if ((lVar5 != 0) &&
           (lVar5 = native_UnityEngine_Transform__get_parent_765eb0(lVar5,0), lVar5 != 0)) {
          uVar4 = native_UnityEngine_Component__GetComponent_ActiveAnimation__49daec
                            (lVar5,
                             _Method_UnityEngine_Component_GetComponent_I_BE2_BlockSection____12e2a18
                            );
          *(undefined8 *)(param_1 + 0x38) = uVar4;
          native_sub_4326e0();
          goto native_sub_41086c;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* MG_BlocksEngine2.Block.BE2_NoViewBlockSectionBody$$UpdateChildBlocksList @ 0x6126c0
 * void MG_BlocksEngine2_Block_BE2_NoViewBlockSectionBody__UpdateChildBlocksList (MG_BlocksEngine2_Block_BE2_NoViewBlockSectionBody_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MG_BlocksEngine2.Block.BE2_NoViewBlockSectionBody$$UpdateChildBlocksList
   void MG_BlocksEngine2_Block_BE2_NoViewBlockSectionBody__UpdateChildBlocksList
   (MG_BlocksEngine2_Block_BE2_NoViewBlockSectionBody_o* __this, const MethodInfo* method); */

void native_MG_BlocksEngine2_Block_BE2_NoViewBlockSectionBody__UpdateChildBlocksList_6126c0
               (long param_1)

{
  int iVar1;
  long lVar2;
  long *plVar3;
  int iVar4;
  
  if ((bRam000000000133ee6a & 1) == 0) {
    native_sub_43273c(&Method_MG_BlocksEngine2_Utils_BE2_ArrayUtils_AddReturn_I_BE2_Block____12e20c8
                     );
    native_sub_43273c(&Method_UnityEngine_Component_GetComponent_I_BE2_Block____12e2a08);
    native_sub_43273c(&MG_BlocksEngine2_Block_I_BE2_Block___TypeInfo_12d3218);
    bRam000000000133ee6a = 1;
  }
  lVar2 = native_sub_432750(_MG_BlocksEngine2_Block_I_BE2_Block___TypeInfo_12d3218,0);
  plVar3 = (long *)(param_1 + 0x30);
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
        goto LAB_006127ec;
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
      *(int *)(param_1 + 0x48) = (int)*(undefined8 *)(*plVar3 + 0x18);
      return;
    }
  }
LAB_006127ec:
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* MG_BlocksEngine2.Block.BE2_NoViewBlockSectionBody$$UpdateLayout @ 0x6127f0
 * void MG_BlocksEngine2_Block_BE2_NoViewBlockSectionBody__UpdateLayout (MG_BlocksEngine2_Block_BE2_NoViewBlockSectionBody_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MG_BlocksEngine2.Block.BE2_NoViewBlockSectionBody$$UpdateLayout
   void MG_BlocksEngine2_Block_BE2_NoViewBlockSectionBody__UpdateLayout
   (MG_BlocksEngine2_Block_BE2_NoViewBlockSectionBody_o* __this, const MethodInfo* method); */

void native_MG_BlocksEngine2_Block_BE2_NoViewBlockSectionBody__UpdateLayout_6127f0(long param_1)

{
  int iVar1;
  long lVar2;
  long *plVar3;
  int iVar4;
  
  if ((bRam000000000133ee6a & 1) == 0) {
    native_sub_43273c(&Method_MG_BlocksEngine2_Utils_BE2_ArrayUtils_AddReturn_I_BE2_Block____12e20c8
                     );
    native_sub_43273c(&Method_UnityEngine_Component_GetComponent_I_BE2_Block____12e2a08);
    native_sub_43273c(&MG_BlocksEngine2_Block_I_BE2_Block___TypeInfo_12d3218);
    bRam000000000133ee6a = 1;
  }
  lVar2 = native_sub_432750(_MG_BlocksEngine2_Block_I_BE2_Block___TypeInfo_12d3218,0);
  plVar3 = (long *)(param_1 + 0x30);
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
        goto LAB_006127ec;
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
      *(int *)(param_1 + 0x48) = (int)*(undefined8 *)(*plVar3 + 0x18);
      return;
    }
  }
LAB_006127ec:
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* MG_BlocksEngine2.Block.BE2_NoViewBlockSectionBody$$.ctor @ 0x6127f4
 * void MG_BlocksEngine2_Block_BE2_NoViewBlockSectionBody___ctor (MG_BlocksEngine2_Block_BE2_NoViewBlockSectionBody_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MG_BlocksEngine2.Block.BE2_NoViewBlockSectionBody$$.ctor
   void MG_BlocksEngine2_Block_BE2_NoViewBlockSectionBody___ctor
   (MG_BlocksEngine2_Block_BE2_NoViewBlockSectionBody_o* __this, const MethodInfo* method); */

undefined1  [16]
native_MG_BlocksEngine2_Block_BE2_NoViewBlockSectionBody___ctor_6127f4(ulong param_1)

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


