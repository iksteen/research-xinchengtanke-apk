/* ARM64 IL2CPP native pseudocode from Ghidra.
 * Recovered implementation, not original C# source.
 * Function boundaries follow the IL2CPP method address table. */


/* MG_BlocksEngine2.Horizontal.Block.BE2_HorizontalBlockSection$$get_RectTransform @ 0x5fde64
 * UnityEngine_RectTransform_o* MG_BlocksEngine2_Horizontal_Block_BE2_HorizontalBlockSection__get_RectTransform (MG_BlocksEngine2_Horizontal_Block_BE2_HorizontalBlockSection_o* __this, const MethodInfo* method); */

/* MG_BlocksEngine2.Horizontal.Block.BE2_HorizontalBlockSection$$get_RectTransform
   UnityEngine_RectTransform_o*
   MG_BlocksEngine2_Horizontal_Block_BE2_HorizontalBlockSection__get_RectTransform
   (MG_BlocksEngine2_Horizontal_Block_BE2_HorizontalBlockSection_o* __this, const MethodInfo*
   method); */

undefined8
native_MG_BlocksEngine2_Horizontal_Block_BE2_HorizontalBlockSection__get_RectTransform_5fde64
          (long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* MG_BlocksEngine2.Horizontal.Block.BE2_HorizontalBlockSection$$get_Header @ 0x5fde6c
 * MG_BlocksEngine2_Block_I_BE2_BlockSectionHeader_o* MG_BlocksEngine2_Horizontal_Block_BE2_HorizontalBlockSection__get_Header (MG_BlocksEngine2_Horizontal_Block_BE2_HorizontalBlockSection_o* __this, const MethodInfo* method); */

/* MG_BlocksEngine2.Horizontal.Block.BE2_HorizontalBlockSection$$get_Header
   MG_BlocksEngine2_Block_I_BE2_BlockSectionHeader_o*
   MG_BlocksEngine2_Horizontal_Block_BE2_HorizontalBlockSection__get_Header
   (MG_BlocksEngine2_Horizontal_Block_BE2_HorizontalBlockSection_o* __this, const MethodInfo*
   method); */

undefined8
native_MG_BlocksEngine2_Horizontal_Block_BE2_HorizontalBlockSection__get_Header_5fde6c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* MG_BlocksEngine2.Horizontal.Block.BE2_HorizontalBlockSection$$set_Header @ 0x5fde74
 * void MG_BlocksEngine2_Horizontal_Block_BE2_HorizontalBlockSection__set_Header (MG_BlocksEngine2_Horizontal_Block_BE2_HorizontalBlockSection_o* __this, MG_BlocksEngine2_Block_I_BE2_BlockSectionHeader_o* value, const MethodInfo* method); */

/* MG_BlocksEngine2.Horizontal.Block.BE2_HorizontalBlockSection$$set_Header
   void MG_BlocksEngine2_Horizontal_Block_BE2_HorizontalBlockSection__set_Header
   (MG_BlocksEngine2_Horizontal_Block_BE2_HorizontalBlockSection_o* __this,
   MG_BlocksEngine2_Block_I_BE2_BlockSectionHeader_o* value, const MethodInfo* method); */

void native_MG_BlocksEngine2_Horizontal_Block_BE2_HorizontalBlockSection__set_Header_5fde74
               (long param_1,undefined8 param_2)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  
  puVar4 = (undefined8 *)(param_1 + 0x28);
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



/* MG_BlocksEngine2.Horizontal.Block.BE2_HorizontalBlockSection$$get_Body @ 0x5fde7c
 * MG_BlocksEngine2_Block_I_BE2_BlockSectionBody_o* MG_BlocksEngine2_Horizontal_Block_BE2_HorizontalBlockSection__get_Body (MG_BlocksEngine2_Horizontal_Block_BE2_HorizontalBlockSection_o* __this, const MethodInfo* method); */

/* MG_BlocksEngine2.Horizontal.Block.BE2_HorizontalBlockSection$$get_Body
   MG_BlocksEngine2_Block_I_BE2_BlockSectionBody_o*
   MG_BlocksEngine2_Horizontal_Block_BE2_HorizontalBlockSection__get_Body
   (MG_BlocksEngine2_Horizontal_Block_BE2_HorizontalBlockSection_o* __this, const MethodInfo*
   method); */

undefined8
native_MG_BlocksEngine2_Horizontal_Block_BE2_HorizontalBlockSection__get_Body_5fde7c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* MG_BlocksEngine2.Horizontal.Block.BE2_HorizontalBlockSection$$set_Body @ 0x5fde84
 * void MG_BlocksEngine2_Horizontal_Block_BE2_HorizontalBlockSection__set_Body (MG_BlocksEngine2_Horizontal_Block_BE2_HorizontalBlockSection_o* __this, MG_BlocksEngine2_Block_I_BE2_BlockSectionBody_o* value, const MethodInfo* method); */

/* MG_BlocksEngine2.Horizontal.Block.BE2_HorizontalBlockSection$$set_Body
   void MG_BlocksEngine2_Horizontal_Block_BE2_HorizontalBlockSection__set_Body
   (MG_BlocksEngine2_Horizontal_Block_BE2_HorizontalBlockSection_o* __this,
   MG_BlocksEngine2_Block_I_BE2_BlockSectionBody_o* value, const MethodInfo* method); */

void native_MG_BlocksEngine2_Horizontal_Block_BE2_HorizontalBlockSection__set_Body_5fde84
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



/* MG_BlocksEngine2.Horizontal.Block.BE2_HorizontalBlockSection$$get_Block @ 0x5fde8c
 * MG_BlocksEngine2_Block_I_BE2_Block_o* MG_BlocksEngine2_Horizontal_Block_BE2_HorizontalBlockSection__get_Block (MG_BlocksEngine2_Horizontal_Block_BE2_HorizontalBlockSection_o* __this, const MethodInfo* method); */

/* MG_BlocksEngine2.Horizontal.Block.BE2_HorizontalBlockSection$$get_Block
   MG_BlocksEngine2_Block_I_BE2_Block_o*
   MG_BlocksEngine2_Horizontal_Block_BE2_HorizontalBlockSection__get_Block
   (MG_BlocksEngine2_Horizontal_Block_BE2_HorizontalBlockSection_o* __this, const MethodInfo*
   method); */

undefined8
native_MG_BlocksEngine2_Horizontal_Block_BE2_HorizontalBlockSection__get_Block_5fde8c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



/* MG_BlocksEngine2.Horizontal.Block.BE2_HorizontalBlockSection$$set_Block @ 0x5fde94
 * void MG_BlocksEngine2_Horizontal_Block_BE2_HorizontalBlockSection__set_Block (MG_BlocksEngine2_Horizontal_Block_BE2_HorizontalBlockSection_o* __this, MG_BlocksEngine2_Block_I_BE2_Block_o* value, const MethodInfo* method); */

/* MG_BlocksEngine2.Horizontal.Block.BE2_HorizontalBlockSection$$set_Block
   void MG_BlocksEngine2_Horizontal_Block_BE2_HorizontalBlockSection__set_Block
   (MG_BlocksEngine2_Horizontal_Block_BE2_HorizontalBlockSection_o* __this,
   MG_BlocksEngine2_Block_I_BE2_Block_o* value, const MethodInfo* method); */

void native_MG_BlocksEngine2_Horizontal_Block_BE2_HorizontalBlockSection__set_Block_5fde94
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



/* MG_BlocksEngine2.Horizontal.Block.BE2_HorizontalBlockSection$$get_Size @ 0x5fde9c
 * UnityEngine_Vector2_o MG_BlocksEngine2_Horizontal_Block_BE2_HorizontalBlockSection__get_Size (MG_BlocksEngine2_Horizontal_Block_BE2_HorizontalBlockSection_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MG_BlocksEngine2.Horizontal.Block.BE2_HorizontalBlockSection$$get_Size
   UnityEngine_Vector2_o MG_BlocksEngine2_Horizontal_Block_BE2_HorizontalBlockSection__get_Size
   (MG_BlocksEngine2_Horizontal_Block_BE2_HorizontalBlockSection_o* __this, const MethodInfo*
   method); */

undefined1  [16]
native_MG_BlocksEngine2_Horizontal_Block_BE2_HorizontalBlockSection__get_Size_5fde9c(long param_1)

{
  undefined1 auVar1 [16];
  undefined8 *puVar2;
  long lVar3;
  ulong uVar4;
  int *piVar5;
  long *plVar6;
  float fVar7;
  undefined1 auVar8 [16];
  undefined8 uVar9;
  
  if ((bRam000000000133edd1 & 1) == 0) {
    native_sub_43273c(&Method_UnityEngine_Component_GetComponent_RectTransform____12e2ad0);
    native_sub_43273c(&MG_BlocksEngine2_Block_I_BE2_BlockSectionBody_TypeInfo_12d4df0);
    native_sub_43273c(&MG_BlocksEngine2_Block_I_BE2_BlockSectionHeader_TypeInfo_12d4df8);
    bRam000000000133edd1 = 1;
  }
  if (*(long *)(param_1 + 0x28) == 0) {
    lVar3 = native_UnityEngine_Component__GetComponent_ActiveAnimation__49daec
                      (param_1,_Method_UnityEngine_Component_GetComponent_RectTransform____12e2ad0);
    if (lVar3 != 0) {
      auVar8 = native_UnityEngine_RectTransform__get_sizeDelta_764f64(lVar3,0);
      return auVar8;
    }
  }
  else {
    native_UnityEngine_Vector2__get_zero_765ef0(0);
    plVar6 = *(long **)(param_1 + 0x28);
    if (plVar6 != (long *)0x0) {
      lVar3 = *plVar6;
      if ((ulong)*(ushort *)(lVar3 + 0x12a) != 0) {
        uVar4 = 0;
        piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
        do {
          if (*(long *)(piVar5 + -2) ==
              _MG_BlocksEngine2_Block_I_BE2_BlockSectionHeader_TypeInfo_12d4df8) {
            puVar2 = (undefined8 *)(lVar3 + (long)(*piVar5 + 3) * 0x10 + 0x138);
            goto LAB_005fdf8c;
          }
          uVar4 = uVar4 + 1;
          piVar5 = piVar5 + 4;
        } while (uVar4 < *(ushort *)(lVar3 + 0x12a));
      }
      puVar2 = (undefined8 *)
               native_sub_3c9b34(plVar6,
                                 _MG_BlocksEngine2_Block_I_BE2_BlockSectionHeader_TypeInfo_12d4df8,3
                                );
LAB_005fdf8c:
      auVar8 = (*(code *)*puVar2)(plVar6,puVar2[1]);
      plVar6 = *(long **)(param_1 + 0x30);
      if (plVar6 != (long *)0x0) {
        lVar3 = *plVar6;
        if ((ulong)*(ushort *)(lVar3 + 0x12a) != 0) {
          uVar4 = 0;
          piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
          do {
            if (*(long *)(piVar5 + -2) ==
                _MG_BlocksEngine2_Block_I_BE2_BlockSectionBody_TypeInfo_12d4df0) {
              puVar2 = (undefined8 *)(lVar3 + (long)(*piVar5 + 1) * 0x10 + 0x138);
              goto LAB_005fe004;
            }
            uVar4 = uVar4 + 1;
            piVar5 = piVar5 + 4;
          } while (uVar4 < *(ushort *)(lVar3 + 0x12a));
        }
        puVar2 = (undefined8 *)
                 native_sub_3c9b34(plVar6,
                                   _MG_BlocksEngine2_Block_I_BE2_BlockSectionBody_TypeInfo_12d4df0,1
                                  );
LAB_005fe004:
        fVar7 = (float)(*(code *)*puVar2)(plVar6,puVar2[1]);
        auVar8 = ZEXT416((uint)(auVar8._0_4_ + fVar7));
      }
      uVar9 = auVar8._8_8_;
      plVar6 = *(long **)(param_1 + 0x28);
      if (plVar6 != (long *)0x0) {
        lVar3 = *plVar6;
        if ((ulong)*(ushort *)(lVar3 + 0x12a) != 0) {
          uVar4 = 0;
          piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
          do {
            if (*(long *)(piVar5 + -2) ==
                _MG_BlocksEngine2_Block_I_BE2_BlockSectionHeader_TypeInfo_12d4df8) {
              puVar2 = (undefined8 *)(lVar3 + (long)(*piVar5 + 3) * 0x10 + 0x138);
              goto LAB_005fe074;
            }
            uVar4 = uVar4 + 1;
            piVar5 = piVar5 + 4;
          } while (uVar4 < *(ushort *)(lVar3 + 0x12a));
        }
        puVar2 = (undefined8 *)
                 native_sub_3c9b34(plVar6,
                                   _MG_BlocksEngine2_Block_I_BE2_BlockSectionHeader_TypeInfo_12d4df8
                                   ,3);
LAB_005fe074:
        (*(code *)*puVar2)(plVar6,puVar2[1]);
        auVar1._8_8_ = uVar9;
        auVar1._0_8_ = auVar8._0_8_;
        return auVar1;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* MG_BlocksEngine2.Horizontal.Block.BE2_HorizontalBlockSection$$OnValidate @ 0x5fe09c
 * void MG_BlocksEngine2_Horizontal_Block_BE2_HorizontalBlockSection__OnValidate (MG_BlocksEngine2_Horizontal_Block_BE2_HorizontalBlockSection_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MG_BlocksEngine2.Horizontal.Block.BE2_HorizontalBlockSection$$OnValidate
   void MG_BlocksEngine2_Horizontal_Block_BE2_HorizontalBlockSection__OnValidate
   (MG_BlocksEngine2_Horizontal_Block_BE2_HorizontalBlockSection_o* __this, const MethodInfo*
   method); */

void native_MG_BlocksEngine2_Horizontal_Block_BE2_HorizontalBlockSection__OnValidate_5fe09c
               (long param_1)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  long lVar7;
  ulong uVar8;
  
  if ((bRam000000000133edd2 & 1) == 0) {
    native_sub_43273c(&Method_UnityEngine_Component_GetComponentInParent_I_BE2_Block____12e2d40);
    native_sub_43273c(&Method_UnityEngine_Component_GetComponent_I_BE2_BlockLayout____12e2a10);
    native_sub_43273c(&Method_UnityEngine_Component_GetComponent_I_BE2_BlockSectionBody____12e2a20);
    native_sub_43273c(&Method_UnityEngine_Component_GetComponent_I_BE2_BlockSectionHeader____12e2a28
                     );
    native_sub_43273c(&Method_UnityEngine_Component_GetComponent_RectTransform____12e2ad0);
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    bRam000000000133edd2 = 1;
  }
  uVar6 = native_UnityEngine_Component__GetComponent_ActiveAnimation__49daec
                    (param_1,_Method_UnityEngine_Component_GetComponent_RectTransform____12e2ad0);
  *(undefined8 *)(param_1 + 0x18) = uVar6;
  native_sub_4326e0(param_1 + 0x18);
  lVar7 = native_UnityEngine_Component__get_transform_8da62c(param_1,0);
  if (lVar7 != 0) {
    iVar4 = native_UnityEngine_Transform__get_childCount_772a64(lVar7,0);
    if (0 < iVar4) {
      lVar7 = native_UnityEngine_Component__get_transform_8da62c(param_1,0);
      if ((lVar7 == 0) ||
         (lVar7 = native_UnityEngine_Transform__GetChild_772ef0(lVar7,0,0), lVar7 == 0))
      goto LAB_005fe2c4;
      uVar6 = native_UnityEngine_Component__GetComponent_ActiveAnimation__49daec
                        (lVar7,
                         _Method_UnityEngine_Component_GetComponent_I_BE2_BlockSectionHeader____12e2a28
                        );
      *(undefined8 *)(param_1 + 0x28) = uVar6;
      native_sub_4326e0();
    }
    lVar7 = native_UnityEngine_Component__get_transform_8da62c(param_1,0);
    if (lVar7 != 0) {
      iVar4 = native_UnityEngine_Transform__get_childCount_772a64(lVar7,0);
      if (1 < iVar4) {
        lVar7 = native_UnityEngine_Component__get_transform_8da62c(param_1,0);
        if ((lVar7 == 0) ||
           (lVar7 = native_UnityEngine_Transform__GetChild_772ef0(lVar7,1,0), lVar7 == 0))
        goto LAB_005fe2c4;
        uVar6 = native_UnityEngine_Component__GetComponent_ActiveAnimation__49daec
                          (lVar7,
                           _Method_UnityEngine_Component_GetComponent_I_BE2_BlockSectionBody____12e2a20
                          );
        *(undefined8 *)(param_1 + 0x30) = uVar6;
        native_sub_4326e0();
      }
      lVar7 = native_UnityEngine_Component__get_transform_8da62c(param_1,0);
      if (lVar7 != 0) {
        uVar6 = native_UnityEngine_Transform__get_parent_765eb0(lVar7,0);
        if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
           (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
          native_sub_4327ec(_UnityEngine_Object_TypeInfo_12d54e0);
        }
        uVar8 = native_UnityEngine_Object__op_Implicit_8e1b98(uVar6,0);
        if ((uVar8 & 1) != 0) {
          lVar7 = native_UnityEngine_Component__get_transform_8da62c(param_1,0);
          if ((lVar7 == 0) ||
             (lVar7 = native_UnityEngine_Transform__get_parent_765eb0(lVar7,0), lVar7 == 0))
          goto LAB_005fe2c4;
          uVar6 = native_UnityEngine_Component__GetComponent_ActiveAnimation__49daec
                            (lVar7,
                             _Method_UnityEngine_Component_GetComponent_I_BE2_BlockLayout____12e2a10
                            );
          *(undefined8 *)(param_1 + 0x20) = uVar6;
          native_sub_4326e0();
        }
        lVar7 = native_UnityEngine_Component__get_transform_8da62c(param_1,0);
        if (lVar7 != 0) {
          uVar5 = native_UnityEngine_Transform__GetSiblingIndex_772b74(lVar7,0);
          *(undefined4 *)(param_1 + 0x40) = uVar5;
          uVar6 = native_UnityEngine_Component__GetComponentInParent_BE2_Canvas__49dc70
                            (param_1,
                             _Method_UnityEngine_Component_GetComponentInParent_I_BE2_Block____12e2d40
                            );
          *(undefined8 *)(param_1 + 0x38) = uVar6;
          if (iRam0000000001345318 != 0) {
            puVar1 = (ulong *)((param_1 + 0x38U >> 0x12 & 0x7fff) * 8 + 0x138ecd8);
            do {
              cVar2 = '\x01';
              bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
              if (bVar3) {
                *puVar1 = *puVar1 | 1L << (param_1 + 0x38U >> 0xc & 0x3f);
                cVar2 = ExclusiveMonitorsStatus();
              }
            } while (cVar2 != '\0');
          }
          return;
        }
      }
    }
  }
LAB_005fe2c4:
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* MG_BlocksEngine2.Horizontal.Block.BE2_HorizontalBlockSection$$Awake @ 0x5fe0a0
 * void MG_BlocksEngine2_Horizontal_Block_BE2_HorizontalBlockSection__Awake (MG_BlocksEngine2_Horizontal_Block_BE2_HorizontalBlockSection_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MG_BlocksEngine2.Horizontal.Block.BE2_HorizontalBlockSection$$Awake
   void MG_BlocksEngine2_Horizontal_Block_BE2_HorizontalBlockSection__Awake
   (MG_BlocksEngine2_Horizontal_Block_BE2_HorizontalBlockSection_o* __this, const MethodInfo*
   method); */

void native_MG_BlocksEngine2_Horizontal_Block_BE2_HorizontalBlockSection__Awake_5fe0a0(long param_1)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  long lVar7;
  ulong uVar8;
  
  if ((bRam000000000133edd2 & 1) == 0) {
    native_sub_43273c(&Method_UnityEngine_Component_GetComponentInParent_I_BE2_Block____12e2d40);
    native_sub_43273c(&Method_UnityEngine_Component_GetComponent_I_BE2_BlockLayout____12e2a10);
    native_sub_43273c(&Method_UnityEngine_Component_GetComponent_I_BE2_BlockSectionBody____12e2a20);
    native_sub_43273c(&Method_UnityEngine_Component_GetComponent_I_BE2_BlockSectionHeader____12e2a28
                     );
    native_sub_43273c(&Method_UnityEngine_Component_GetComponent_RectTransform____12e2ad0);
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    bRam000000000133edd2 = 1;
  }
  uVar6 = native_UnityEngine_Component__GetComponent_ActiveAnimation__49daec
                    (param_1,_Method_UnityEngine_Component_GetComponent_RectTransform____12e2ad0);
  *(undefined8 *)(param_1 + 0x18) = uVar6;
  native_sub_4326e0(param_1 + 0x18);
  lVar7 = native_UnityEngine_Component__get_transform_8da62c(param_1,0);
  if (lVar7 != 0) {
    iVar4 = native_UnityEngine_Transform__get_childCount_772a64(lVar7,0);
    if (0 < iVar4) {
      lVar7 = native_UnityEngine_Component__get_transform_8da62c(param_1,0);
      if ((lVar7 == 0) ||
         (lVar7 = native_UnityEngine_Transform__GetChild_772ef0(lVar7,0,0), lVar7 == 0))
      goto LAB_005fe2c4;
      uVar6 = native_UnityEngine_Component__GetComponent_ActiveAnimation__49daec
                        (lVar7,
                         _Method_UnityEngine_Component_GetComponent_I_BE2_BlockSectionHeader____12e2a28
                        );
      *(undefined8 *)(param_1 + 0x28) = uVar6;
      native_sub_4326e0();
    }
    lVar7 = native_UnityEngine_Component__get_transform_8da62c(param_1,0);
    if (lVar7 != 0) {
      iVar4 = native_UnityEngine_Transform__get_childCount_772a64(lVar7,0);
      if (1 < iVar4) {
        lVar7 = native_UnityEngine_Component__get_transform_8da62c(param_1,0);
        if ((lVar7 == 0) ||
           (lVar7 = native_UnityEngine_Transform__GetChild_772ef0(lVar7,1,0), lVar7 == 0))
        goto LAB_005fe2c4;
        uVar6 = native_UnityEngine_Component__GetComponent_ActiveAnimation__49daec
                          (lVar7,
                           _Method_UnityEngine_Component_GetComponent_I_BE2_BlockSectionBody____12e2a20
                          );
        *(undefined8 *)(param_1 + 0x30) = uVar6;
        native_sub_4326e0();
      }
      lVar7 = native_UnityEngine_Component__get_transform_8da62c(param_1,0);
      if (lVar7 != 0) {
        uVar6 = native_UnityEngine_Transform__get_parent_765eb0(lVar7,0);
        if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
           (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
          native_sub_4327ec(_UnityEngine_Object_TypeInfo_12d54e0);
        }
        uVar8 = native_UnityEngine_Object__op_Implicit_8e1b98(uVar6,0);
        if ((uVar8 & 1) != 0) {
          lVar7 = native_UnityEngine_Component__get_transform_8da62c(param_1,0);
          if ((lVar7 == 0) ||
             (lVar7 = native_UnityEngine_Transform__get_parent_765eb0(lVar7,0), lVar7 == 0))
          goto LAB_005fe2c4;
          uVar6 = native_UnityEngine_Component__GetComponent_ActiveAnimation__49daec
                            (lVar7,
                             _Method_UnityEngine_Component_GetComponent_I_BE2_BlockLayout____12e2a10
                            );
          *(undefined8 *)(param_1 + 0x20) = uVar6;
          native_sub_4326e0();
        }
        lVar7 = native_UnityEngine_Component__get_transform_8da62c(param_1,0);
        if (lVar7 != 0) {
          uVar5 = native_UnityEngine_Transform__GetSiblingIndex_772b74(lVar7,0);
          *(undefined4 *)(param_1 + 0x40) = uVar5;
          uVar6 = native_UnityEngine_Component__GetComponentInParent_BE2_Canvas__49dc70
                            (param_1,
                             _Method_UnityEngine_Component_GetComponentInParent_I_BE2_Block____12e2d40
                            );
          *(undefined8 *)(param_1 + 0x38) = uVar6;
          if (iRam0000000001345318 != 0) {
            puVar1 = (ulong *)((param_1 + 0x38U >> 0x12 & 0x7fff) * 8 + 0x138ecd8);
            do {
              cVar2 = '\x01';
              bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
              if (bVar3) {
                *puVar1 = *puVar1 | 1L << (param_1 + 0x38U >> 0xc & 0x3f);
                cVar2 = ExclusiveMonitorsStatus();
              }
            } while (cVar2 != '\0');
          }
          return;
        }
      }
    }
  }
LAB_005fe2c4:
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* MG_BlocksEngine2.Horizontal.Block.BE2_HorizontalBlockSection$$UpdateLayout @ 0x5fe2c8
 * void MG_BlocksEngine2_Horizontal_Block_BE2_HorizontalBlockSection__UpdateLayout (MG_BlocksEngine2_Horizontal_Block_BE2_HorizontalBlockSection_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MG_BlocksEngine2.Horizontal.Block.BE2_HorizontalBlockSection$$UpdateLayout
   void MG_BlocksEngine2_Horizontal_Block_BE2_HorizontalBlockSection__UpdateLayout
   (MG_BlocksEngine2_Horizontal_Block_BE2_HorizontalBlockSection_o* __this, const MethodInfo*
   method); */

void native_MG_BlocksEngine2_Horizontal_Block_BE2_HorizontalBlockSection__UpdateLayout_5fe2c8
               (undefined1 param_1 [16],undefined4 param_2,long param_3)

{
  undefined8 *puVar1;
  long lVar2;
  ulong uVar3;
  int *piVar4;
  long *plVar5;
  undefined4 uStack_28;
  undefined4 uStack_24;
  
  if ((bRam000000000133edd3 & 1) == 0) {
    native_sub_43273c(&MG_BlocksEngine2_Block_I_BE2_BlockSectionBody_TypeInfo_12d4df0);
    native_sub_43273c(&MG_BlocksEngine2_Block_I_BE2_BlockSectionHeader_TypeInfo_12d4df8);
    bRam000000000133edd3 = 1;
  }
  plVar5 = *(long **)(param_3 + 0x28);
  if (plVar5 != (long *)0x0) {
    lVar2 = *plVar5;
    if ((ulong)*(ushort *)(lVar2 + 0x12a) != 0) {
      uVar3 = 0;
      piVar4 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
      do {
        if (*(long *)(piVar4 + -2) ==
            _MG_BlocksEngine2_Block_I_BE2_BlockSectionHeader_TypeInfo_12d4df8) {
          puVar1 = (undefined8 *)(lVar2 + (long)(*piVar4 + 5) * 0x10 + 0x138);
          goto LAB_005fe36c;
        }
        uVar3 = uVar3 + 1;
        piVar4 = piVar4 + 4;
      } while (uVar3 < *(ushort *)(lVar2 + 0x12a));
    }
    puVar1 = (undefined8 *)
             native_sub_3c9b34(plVar5,
                               _MG_BlocksEngine2_Block_I_BE2_BlockSectionHeader_TypeInfo_12d4df8,5);
LAB_005fe36c:
    (*(code *)*puVar1)(plVar5,puVar1[1]);
  }
  plVar5 = *(long **)(param_3 + 0x30);
  if (plVar5 != (long *)0x0) {
    lVar2 = *plVar5;
    if ((ulong)*(ushort *)(lVar2 + 0x12a) != 0) {
      uVar3 = 0;
      piVar4 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
      do {
        if (*(long *)(piVar4 + -2) ==
            _MG_BlocksEngine2_Block_I_BE2_BlockSectionBody_TypeInfo_12d4df0) {
          puVar1 = (undefined8 *)(lVar2 + (long)(*piVar4 + 9) * 0x10 + 0x138);
          goto LAB_005fe3e0;
        }
        uVar3 = uVar3 + 1;
        piVar4 = piVar4 + 4;
      } while (uVar3 < *(ushort *)(lVar2 + 0x12a));
    }
    puVar1 = (undefined8 *)
             native_sub_3c9b34(plVar5,
                               _MG_BlocksEngine2_Block_I_BE2_BlockSectionBody_TypeInfo_12d4df0,9);
LAB_005fe3e0:
    (*(code *)*puVar1)(plVar5,puVar1[1]);
  }
  lVar2 = *(long *)(param_3 + 0x18);
  uStack_28 = native_MG_BlocksEngine2_Horizontal_Block_BE2_HorizontalBlockSection__get_Size_5fde9c
                        (param_3);
  if (lVar2 != 0) {
    uStack_24 = param_2;
    if (pcRam000000000133f8e8 == (code *)0x0) {
      pcRam000000000133f8e8 = (code *)native_sub_4326f0(&UNK_00e28502,0);
    }
    (*pcRam000000000133f8e8)(lVar2,&uStack_28);
    return;
  }
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* MG_BlocksEngine2.Horizontal.Block.BE2_HorizontalBlockSection$$Initialize @ 0x5fe414
 * void MG_BlocksEngine2_Horizontal_Block_BE2_HorizontalBlockSection__Initialize (MG_BlocksEngine2_Horizontal_Block_BE2_HorizontalBlockSection_o* __this, const MethodInfo* method); */

/* MG_BlocksEngine2.Horizontal.Block.BE2_HorizontalBlockSection$$Initialize
   void MG_BlocksEngine2_Horizontal_Block_BE2_HorizontalBlockSection__Initialize
   (MG_BlocksEngine2_Horizontal_Block_BE2_HorizontalBlockSection_o* __this, const MethodInfo*
   method); */

void native_MG_BlocksEngine2_Horizontal_Block_BE2_HorizontalBlockSection__Initialize_5fe414(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  native_sub_432740(&System_NotImplementedException_TypeInfo_12d5460);
  uVar1 = native_sub_432808();
  native_System_NotImplementedException___ctor_ad25a0(uVar1,0);
  uVar2 = native_sub_432740(&
                            Method_MG_BlocksEngine2_Horizontal_Block_BE2_HorizontalBlockSection_Initialize___12e2190
                           );
                    /* WARNING: Subroutine does not return */
  native_sub_4327dc(uVar1,uVar2);
}



/* MG_BlocksEngine2.Horizontal.Block.BE2_HorizontalBlockSection$$.ctor @ 0x5fe454
 * void MG_BlocksEngine2_Horizontal_Block_BE2_HorizontalBlockSection___ctor (MG_BlocksEngine2_Horizontal_Block_BE2_HorizontalBlockSection_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MG_BlocksEngine2.Horizontal.Block.BE2_HorizontalBlockSection$$.ctor
   void MG_BlocksEngine2_Horizontal_Block_BE2_HorizontalBlockSection___ctor
   (MG_BlocksEngine2_Horizontal_Block_BE2_HorizontalBlockSection_o* __this, const MethodInfo*
   method); */

undefined1  [16]
native_MG_BlocksEngine2_Horizontal_Block_BE2_HorizontalBlockSection___ctor_5fe454(ulong param_1)

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


