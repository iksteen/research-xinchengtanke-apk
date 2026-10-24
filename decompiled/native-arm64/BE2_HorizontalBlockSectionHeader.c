/* ARM64 IL2CPP native pseudocode from Ghidra.
 * Recovered implementation, not original C# source.
 * Function boundaries follow the IL2CPP method address table. */


/* MG_BlocksEngine2.Horizontal.Block.BE2_HorizontalBlockSectionHeader$$get_RectTransform @ 0x5ff608
 * UnityEngine_RectTransform_o* MG_BlocksEngine2_Horizontal_Block_BE2_HorizontalBlockSectionHeader__get_RectTransform (MG_BlocksEngine2_Horizontal_Block_BE2_HorizontalBlockSectionHeader_o* __this, const MethodInfo* method); */

/* MG_BlocksEngine2.Horizontal.Block.BE2_HorizontalBlockSectionHeader$$get_RectTransform
   UnityEngine_RectTransform_o*
   MG_BlocksEngine2_Horizontal_Block_BE2_HorizontalBlockSectionHeader__get_RectTransform
   (MG_BlocksEngine2_Horizontal_Block_BE2_HorizontalBlockSectionHeader_o* __this, const MethodInfo*
   method); */

undefined8
native_MG_BlocksEngine2_Horizontal_Block_BE2_HorizontalBlockSectionHeader__get_RectTransform_5ff608
          (long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* MG_BlocksEngine2.Horizontal.Block.BE2_HorizontalBlockSectionHeader$$get_Size @ 0x5ff610
 * UnityEngine_Vector2_o MG_BlocksEngine2_Horizontal_Block_BE2_HorizontalBlockSectionHeader__get_Size (MG_BlocksEngine2_Horizontal_Block_BE2_HorizontalBlockSectionHeader_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MG_BlocksEngine2.Horizontal.Block.BE2_HorizontalBlockSectionHeader$$get_Size
   UnityEngine_Vector2_o
   MG_BlocksEngine2_Horizontal_Block_BE2_HorizontalBlockSectionHeader__get_Size
   (MG_BlocksEngine2_Horizontal_Block_BE2_HorizontalBlockSectionHeader_o* __this, const MethodInfo*
   method); */

undefined4
native_MG_BlocksEngine2_Horizontal_Block_BE2_HorizontalBlockSectionHeader__get_Size_5ff610
          (long param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  long *plVar3;
  long lVar4;
  undefined8 uStack_28;
  
  if ((bRam000000000133edd9 & 1) == 0) {
    native_sub_43273c(&Method_UnityEngine_Component_GetComponent_RectTransform____12e2ad0);
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    bRam000000000133edd9 = 1;
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



/* MG_BlocksEngine2.Horizontal.Block.BE2_HorizontalBlockSectionHeader$$set_Size @ 0x5ff6d0
 * void MG_BlocksEngine2_Horizontal_Block_BE2_HorizontalBlockSectionHeader__set_Size (MG_BlocksEngine2_Horizontal_Block_BE2_HorizontalBlockSectionHeader_o* __this, UnityEngine_Vector2_o value, const MethodInfo* method); */

/* MG_BlocksEngine2.Horizontal.Block.BE2_HorizontalBlockSectionHeader$$set_Size
   void MG_BlocksEngine2_Horizontal_Block_BE2_HorizontalBlockSectionHeader__set_Size
   (MG_BlocksEngine2_Horizontal_Block_BE2_HorizontalBlockSectionHeader_o* __this,
   UnityEngine_Vector2_o value, const MethodInfo* method); */

void native_MG_BlocksEngine2_Horizontal_Block_BE2_HorizontalBlockSectionHeader__set_Size_5ff6d0
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



/* MG_BlocksEngine2.Horizontal.Block.BE2_HorizontalBlockSectionHeader$$get_ItemsArray @ 0x5ff6ec
 * MG_BlocksEngine2_Block_I_BE2_BlockSectionHeaderItem_array* MG_BlocksEngine2_Horizontal_Block_BE2_HorizontalBlockSectionHeader__get_ItemsArray (MG_BlocksEngine2_Horizontal_Block_BE2_HorizontalBlockSectionHeader_o* __this, const MethodInfo* method); */

/* MG_BlocksEngine2.Horizontal.Block.BE2_HorizontalBlockSectionHeader$$get_ItemsArray
   MG_BlocksEngine2_Block_I_BE2_BlockSectionHeaderItem_array*
   MG_BlocksEngine2_Horizontal_Block_BE2_HorizontalBlockSectionHeader__get_ItemsArray
   (MG_BlocksEngine2_Horizontal_Block_BE2_HorizontalBlockSectionHeader_o* __this, const MethodInfo*
   method); */

undefined8
native_MG_BlocksEngine2_Horizontal_Block_BE2_HorizontalBlockSectionHeader__get_ItemsArray_5ff6ec
          (long param_1)

{
  return *(undefined8 *)(param_1 + 0x40);
}



/* MG_BlocksEngine2.Horizontal.Block.BE2_HorizontalBlockSectionHeader$$get_InputsArray @ 0x5ff6f4
 * MG_BlocksEngine2_Block_I_BE2_BlockSectionHeaderInput_array* MG_BlocksEngine2_Horizontal_Block_BE2_HorizontalBlockSectionHeader__get_InputsArray (MG_BlocksEngine2_Horizontal_Block_BE2_HorizontalBlockSectionHeader_o* __this, const MethodInfo* method); */

/* MG_BlocksEngine2.Horizontal.Block.BE2_HorizontalBlockSectionHeader$$get_InputsArray
   MG_BlocksEngine2_Block_I_BE2_BlockSectionHeaderInput_array*
   MG_BlocksEngine2_Horizontal_Block_BE2_HorizontalBlockSectionHeader__get_InputsArray
   (MG_BlocksEngine2_Horizontal_Block_BE2_HorizontalBlockSectionHeader_o* __this, const MethodInfo*
   method); */

undefined8
native_MG_BlocksEngine2_Horizontal_Block_BE2_HorizontalBlockSectionHeader__get_InputsArray_5ff6f4
          (long param_1)

{
  return *(undefined8 *)(param_1 + 0x48);
}



/* MG_BlocksEngine2.Horizontal.Block.BE2_HorizontalBlockSectionHeader$$get_Shadow @ 0x5ff6fc
 * UnityEngine_UI_Shadow_o* MG_BlocksEngine2_Horizontal_Block_BE2_HorizontalBlockSectionHeader__get_Shadow (MG_BlocksEngine2_Horizontal_Block_BE2_HorizontalBlockSectionHeader_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MG_BlocksEngine2.Horizontal.Block.BE2_HorizontalBlockSectionHeader$$get_Shadow
   UnityEngine_UI_Shadow_o*
   MG_BlocksEngine2_Horizontal_Block_BE2_HorizontalBlockSectionHeader__get_Shadow
   (MG_BlocksEngine2_Horizontal_Block_BE2_HorizontalBlockSectionHeader_o* __this, const MethodInfo*
   method); */

long native_MG_BlocksEngine2_Horizontal_Block_BE2_HorizontalBlockSectionHeader__get_Shadow_5ff6fc
               (long param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  long *plVar3;
  long lVar4;
  
  if ((bRam000000000133edda & 1) == 0) {
    native_sub_43273c(&Method_UnityEngine_Component_GetComponent_Shadow____12e2b00);
    native_sub_43273c(&Method_UnityEngine_GameObject_AddComponent_Shadow____12e4860);
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    bRam000000000133edda = 1;
  }
  plVar3 = (long *)(param_1 + 0x50);
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
      if (lVar4 == 0) goto LAB_005ff85c;
      lVar4 = native_UnityEngine_GameObject__AddComponent_ActiveAnimation__4a2118
                        (lVar4,_Method_UnityEngine_GameObject_AddComponent_Shadow____12e4860);
      *plVar3 = lVar4;
    }
    else {
      lVar4 = native_UnityEngine_Component__GetComponent_ActiveAnimation__49daec
                        (param_1,_Method_UnityEngine_Component_GetComponent_Shadow____12e2b00);
      *(long *)(param_1 + 0x50) = lVar4;
    }
    native_sub_4326e0(plVar3,lVar4);
    lVar4 = *plVar3;
    native_UnityEngine_Color__get_green_8d9de8(0);
    if (lVar4 != 0) {
      native_UnityEngine_UI_Shadow__set_effectColor_c61700(lVar4,0);
      if (*plVar3 != 0) {
        native_UnityEngine_UI_Shadow__set_effectDistance_c617e8(0xc0c00000,0xc0c00000,*plVar3,0);
        goto LAB_005ff844;
      }
    }
LAB_005ff85c:
                    /* WARNING: Subroutine does not return */
    native_sub_432810();
  }
LAB_005ff844:
  return *plVar3;
}



/* MG_BlocksEngine2.Horizontal.Block.BE2_HorizontalBlockSectionHeader$$OnValidate @ 0x5ff860
 * void MG_BlocksEngine2_Horizontal_Block_BE2_HorizontalBlockSectionHeader__OnValidate (MG_BlocksEngine2_Horizontal_Block_BE2_HorizontalBlockSectionHeader_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MG_BlocksEngine2.Horizontal.Block.BE2_HorizontalBlockSectionHeader$$OnValidate
   void MG_BlocksEngine2_Horizontal_Block_BE2_HorizontalBlockSectionHeader__OnValidate
   (MG_BlocksEngine2_Horizontal_Block_BE2_HorizontalBlockSectionHeader_o* __this, const MethodInfo*
   method); */

void native_MG_BlocksEngine2_Horizontal_Block_BE2_HorizontalBlockSectionHeader__OnValidate_5ff860
               (long param_1)

{
  long lVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  ulong uVar5;
  undefined8 *puVar6;
  undefined4 uVar7;
  int *piVar8;
  long *plVar9;
  long lVar10;
  long alStack_58 [2];
  undefined4 uStack_48;
  undefined4 uStack_34;
  
  if ((bRam000000000133eddb & 1) == 0) {
    native_sub_43273c(&Method_UnityEngine_Component_GetComponent_I_BE2_BlockLayout____12e2a10);
    native_sub_43273c(&Method_UnityEngine_Component_GetComponent_I_BE2_BlockSection____12e2a18);
    native_sub_43273c(&Method_UnityEngine_Component_GetComponent_Image____12e2a78);
    native_sub_43273c(&Method_UnityEngine_Component_GetComponent_RectTransform____12e2ad0);
    native_sub_43273c(&Method_UnityEngine_Component_GetComponent_VerticalLayoutGroup____12e2c40);
    native_sub_43273c(&MG_BlocksEngine2_Block_I_BE2_BlockSection_TypeInfo_12d4de8);
    native_sub_43273c(&MG_BlocksEngine2_Block_I_BE2_Block_TypeInfo_12d4dd8);
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    native_sub_43273c(&UnityEngine_RectOffset_TypeInfo_12d58d8);
    bRam000000000133eddb = 1;
  }
  native_MG_BlocksEngine2_Horizontal_Block_BE2_HorizontalBlockSectionHeader__UpdateItemsArray_5ffd88
            (param_1);
  native_MG_BlocksEngine2_Horizontal_Block_BE2_HorizontalBlockSectionHeader__UpdateInputsArray_5fff34
            (param_1);
  uVar3 = native_UnityEngine_Component__GetComponent_ActiveAnimation__49daec
                    (param_1,_Method_UnityEngine_Component_GetComponent_RectTransform____12e2ad0);
  *(undefined8 *)(param_1 + 0x18) = uVar3;
  native_sub_4326e0(param_1 + 0x18);
  lVar4 = native_UnityEngine_Component__get_transform_8da62c(param_1,0);
  if (lVar4 == 0) goto LAB_005ffd84;
  uVar3 = native_UnityEngine_Transform__get_parent_765eb0(lVar4,0);
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec(_UnityEngine_Object_TypeInfo_12d54e0);
  }
  uVar5 = native_UnityEngine_Object__op_Implicit_8e1b98(uVar3,0);
  if ((uVar5 & 1) != 0) {
    lVar4 = native_UnityEngine_Component__get_transform_8da62c(param_1,0);
    if ((lVar4 == 0) ||
       (lVar4 = native_UnityEngine_Transform__get_parent_765eb0(lVar4,0), lVar4 == 0))
    goto LAB_005ffd84;
    uVar3 = native_UnityEngine_Component__GetComponent_ActiveAnimation__49daec
                      (lVar4,
                       _Method_UnityEngine_Component_GetComponent_I_BE2_BlockSection____12e2a18);
    *(undefined8 *)(param_1 + 0x20) = uVar3;
    native_sub_4326e0();
    lVar4 = native_UnityEngine_Component__get_transform_8da62c(param_1,0);
    if ((lVar4 == 0) ||
       ((lVar4 = native_UnityEngine_Transform__get_parent_765eb0(lVar4,0), lVar4 == 0 ||
        (lVar4 = native_UnityEngine_Transform__get_parent_765eb0(lVar4,0), lVar4 == 0))))
    goto LAB_005ffd84;
    uVar3 = native_UnityEngine_Component__GetComponent_ActiveAnimation__49daec
                      (lVar4,_Method_UnityEngine_Component_GetComponent_I_BE2_BlockLayout____12e2a10
                      );
    *(undefined8 *)(param_1 + 0x28) = uVar3;
    native_sub_4326e0();
  }
  uVar3 = native_UnityEngine_Component__GetComponent_ActiveAnimation__49daec
                    (param_1,_Method_UnityEngine_Component_GetComponent_Image____12e2a78);
  *(undefined8 *)(param_1 + 0x30) = uVar3;
  native_sub_4326e0((long *)(param_1 + 0x30),uVar3);
  if (*(long *)(param_1 + 0x30) != 0) {
    native_UnityEngine_UI_Image__set_type_cb7988(*(long *)(param_1 + 0x30),1,0);
    lVar4 = *(long *)(param_1 + 0x30);
    if (lVar4 != 0) {
      native_UnityEngine_UI_Image__set_pixelsPerUnitMultiplier_cb81dc(0x40000000,lVar4,0);
      plVar9 = *(long **)(param_1 + 0x20);
      if (plVar9 != (long *)0x0) {
        lVar4 = *plVar9;
        if ((ulong)*(ushort *)(lVar4 + 0x12a) != 0) {
          uVar5 = 0;
          piVar8 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
          do {
            if (*(long *)(piVar8 + -2) ==
                _MG_BlocksEngine2_Block_I_BE2_BlockSection_TypeInfo_12d4de8) {
              puVar6 = (undefined8 *)(lVar4 + (long)(*piVar8 + 4) * 0x10 + 0x138);
              goto LAB_005ffab8;
            }
            uVar5 = uVar5 + 1;
            piVar8 = piVar8 + 4;
          } while (uVar5 < *(ushort *)(lVar4 + 0x12a));
        }
        puVar6 = (undefined8 *)
                 native_sub_3c9b34(plVar9,
                                   _MG_BlocksEngine2_Block_I_BE2_BlockSection_TypeInfo_12d4de8,4);
LAB_005ffab8:
        lVar4 = (*(code *)*puVar6)(plVar9,puVar6[1]);
        if (lVar4 != 0) {
          plVar9 = *(long **)(param_1 + 0x20);
          if (plVar9 != (long *)0x0) {
            lVar4 = *plVar9;
            if ((ulong)*(ushort *)(lVar4 + 0x12a) != 0) {
              uVar5 = 0;
              piVar8 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
              do {
                if (*(long *)(piVar8 + -2) ==
                    _MG_BlocksEngine2_Block_I_BE2_BlockSection_TypeInfo_12d4de8) {
                  puVar6 = (undefined8 *)(lVar4 + (long)(*piVar8 + 4) * 0x10 + 0x138);
                  goto LAB_005ffb28;
                }
                uVar5 = uVar5 + 1;
                piVar8 = piVar8 + 4;
              } while (uVar5 < *(ushort *)(lVar4 + 0x12a));
            }
            puVar6 = (undefined8 *)
                     native_sub_3c9b34(plVar9,
                                       _MG_BlocksEngine2_Block_I_BE2_BlockSection_TypeInfo_12d4de8,4
                                      );
LAB_005ffb28:
            plVar9 = (long *)(*(code *)*puVar6)(plVar9,puVar6[1]);
            if (plVar9 != (long *)0x0) {
              lVar4 = *plVar9;
              if ((ulong)*(ushort *)(lVar4 + 0x12a) != 0) {
                uVar5 = 0;
                piVar8 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar8 + -2) == _MG_BlocksEngine2_Block_I_BE2_Block_TypeInfo_12d4dd8
                     ) {
                    puVar6 = (undefined8 *)(lVar4 + (long)(*piVar8 + 1) * 0x10 + 0x138);
                    goto LAB_005ffb9c;
                  }
                  uVar5 = uVar5 + 1;
                  piVar8 = piVar8 + 4;
                } while (uVar5 < *(ushort *)(lVar4 + 0x12a));
              }
              puVar6 = (undefined8 *)
                       native_sub_3c9b34(plVar9,_MG_BlocksEngine2_Block_I_BE2_Block_TypeInfo_12d4dd8
                                         ,1);
LAB_005ffb9c:
              iVar2 = (*(code *)*puVar6)(plVar9,puVar6[1]);
              if (iVar2 != 1) {
                plVar9 = *(long **)(param_1 + 0x20);
                if (plVar9 == (long *)0x0) goto LAB_005ffd84;
                lVar4 = *plVar9;
                if ((ulong)*(ushort *)(lVar4 + 0x12a) != 0) {
                  uVar5 = 0;
                  piVar8 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar8 + -2) ==
                        _MG_BlocksEngine2_Block_I_BE2_BlockSection_TypeInfo_12d4de8) {
                      puVar6 = (undefined8 *)(lVar4 + (long)(*piVar8 + 4) * 0x10 + 0x138);
                      goto LAB_005ffc10;
                    }
                    uVar5 = uVar5 + 1;
                    piVar8 = piVar8 + 4;
                  } while (uVar5 < *(ushort *)(lVar4 + 0x12a));
                }
                puVar6 = (undefined8 *)
                         native_sub_3c9b34(plVar9,
                                           _MG_BlocksEngine2_Block_I_BE2_BlockSection_TypeInfo_12d4de8
                                           ,4);
LAB_005ffc10:
                plVar9 = (long *)(*(code *)*puVar6)(plVar9,puVar6[1]);
                if (plVar9 == (long *)0x0) goto LAB_005ffd84;
                lVar4 = *plVar9;
                if ((ulong)*(ushort *)(lVar4 + 0x12a) != 0) {
                  uVar5 = 0;
                  piVar8 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar8 + -2) ==
                        _MG_BlocksEngine2_Block_I_BE2_Block_TypeInfo_12d4dd8) {
                      puVar6 = (undefined8 *)(lVar4 + (long)(*piVar8 + 1) * 0x10 + 0x138);
                      goto LAB_005ffc7c;
                    }
                    uVar5 = uVar5 + 1;
                    piVar8 = piVar8 + 4;
                  } while (uVar5 < *(ushort *)(lVar4 + 0x12a));
                }
                puVar6 = (undefined8 *)
                         native_sub_3c9b34(plVar9,
                                           _MG_BlocksEngine2_Block_I_BE2_Block_TypeInfo_12d4dd8,1);
LAB_005ffc7c:
                iVar2 = (*(code *)*puVar6)(plVar9,puVar6[1]);
                if (iVar2 != 2) {
                  return;
                }
              }
              lVar4 = native_UnityEngine_Component__GetComponent_ActiveAnimation__49daec
                                (param_1,
                                 _Method_UnityEngine_Component_GetComponent_VerticalLayoutGroup____12e2c40
                                );
              if (*(long *)(param_1 + 0x40) != 0) {
                iVar2 = *(int *)(*(long *)(param_1 + 0x40) + 0x18);
                uVar3 = native_sub_432808(_UnityEngine_RectOffset_TypeInfo_12d58d8);
                if (iVar2 < 2) {
                  native_UnityEngine_RectOffset___ctor_76422c(uVar3,0,0,0,0,0);
                  if (lVar4 != 0) {
                    native_UnityEngine_UI_LayoutGroup__set_padding_a7b358(lVar4,uVar3,0);
                    native_UnityEngine_UI_HorizontalOrVerticalLayoutGroup__set_spacing_cb7040
                              (0,lVar4,0);
                    uVar7 = 4;
LAB_005ffd6c:
                    if ((bRam0000000001341d62 & 1) == 0) {
                      native_sub_43273c(&
                                        Method_UnityEngine_UI_LayoutGroup_SetProperty_TextAnchor____12e5120
                                        ,uVar7,0);
                      bRam0000000001341d62 = 1;
                    }
                    lVar1 = _Method_UnityEngine_UI_LayoutGroup_SetProperty_TextAnchor____12e5120;
                    lVar10 = **(long **)(
                                        _Method_UnityEngine_UI_LayoutGroup_SetProperty_TextAnchor____12e5120
                                        + 0x30);
                    uStack_34 = uVar7;
                    if ((*(byte *)(lVar10 + 0x132) & 1) == 0) {
                      native_sub_3c9850(lVar10);
                    }
                    uVar3 = native_sub_4327fc(lVar10,&uStack_34);
                    alStack_58[0] = **(long **)(lVar1 + 0x30);
                    if ((*(byte *)(alStack_58[0] + 0x132) & 1) == 0) {
                      native_sub_3c9850(alStack_58[0]);
                    }
                    alStack_58[1] = 0xffffffffffffffff;
                    uStack_48 = *(undefined4 *)(lVar4 + 0x20);
                    uVar5 = (**(code **)(alStack_58[0] + 0x138))
                                      (alStack_58,uVar3,*(undefined8 *)(alStack_58[0] + 0x140));
                    if ((uVar5 & 1) == 0) {
                      *(undefined4 *)(lVar4 + 0x20) = uVar7;
                      if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
                        native_sub_432810();
                      }
                      native_UnityEngine_UI_LayoutGroup__SetDirty_a7ba48(lVar4,0);
                    }
                    return;
                  }
                }
                else {
                  native_UnityEngine_RectOffset___ctor_76422c(uVar3,0xfffffff6,0,0,0xffffffe7,0);
                  if (lVar4 != 0) {
                    native_UnityEngine_UI_LayoutGroup__set_padding_a7b358(lVar4,uVar3,0);
                    native_UnityEngine_UI_HorizontalOrVerticalLayoutGroup__set_spacing_cb7040
                              (0x41200000,lVar4,0);
                    uVar7 = 7;
                    goto LAB_005ffd6c;
                  }
                }
              }
            }
          }
          goto LAB_005ffd84;
        }
      }
      return;
    }
  }
LAB_005ffd84:
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* MG_BlocksEngine2.Horizontal.Block.BE2_HorizontalBlockSectionHeader$$Awake @ 0x5ff864
 * void MG_BlocksEngine2_Horizontal_Block_BE2_HorizontalBlockSectionHeader__Awake (MG_BlocksEngine2_Horizontal_Block_BE2_HorizontalBlockSectionHeader_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MG_BlocksEngine2.Horizontal.Block.BE2_HorizontalBlockSectionHeader$$Awake
   void MG_BlocksEngine2_Horizontal_Block_BE2_HorizontalBlockSectionHeader__Awake
   (MG_BlocksEngine2_Horizontal_Block_BE2_HorizontalBlockSectionHeader_o* __this, const MethodInfo*
   method); */

void native_MG_BlocksEngine2_Horizontal_Block_BE2_HorizontalBlockSectionHeader__Awake_5ff864
               (long param_1)

{
  long lVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  ulong uVar5;
  undefined8 *puVar6;
  undefined4 uVar7;
  int *piVar8;
  long *plVar9;
  long lVar10;
  long alStack_58 [2];
  undefined4 uStack_48;
  undefined4 uStack_34;
  
  if ((bRam000000000133eddb & 1) == 0) {
    native_sub_43273c(&Method_UnityEngine_Component_GetComponent_I_BE2_BlockLayout____12e2a10);
    native_sub_43273c(&Method_UnityEngine_Component_GetComponent_I_BE2_BlockSection____12e2a18);
    native_sub_43273c(&Method_UnityEngine_Component_GetComponent_Image____12e2a78);
    native_sub_43273c(&Method_UnityEngine_Component_GetComponent_RectTransform____12e2ad0);
    native_sub_43273c(&Method_UnityEngine_Component_GetComponent_VerticalLayoutGroup____12e2c40);
    native_sub_43273c(&MG_BlocksEngine2_Block_I_BE2_BlockSection_TypeInfo_12d4de8);
    native_sub_43273c(&MG_BlocksEngine2_Block_I_BE2_Block_TypeInfo_12d4dd8);
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    native_sub_43273c(&UnityEngine_RectOffset_TypeInfo_12d58d8);
    bRam000000000133eddb = 1;
  }
  native_MG_BlocksEngine2_Horizontal_Block_BE2_HorizontalBlockSectionHeader__UpdateItemsArray_5ffd88
            (param_1);
  native_MG_BlocksEngine2_Horizontal_Block_BE2_HorizontalBlockSectionHeader__UpdateInputsArray_5fff34
            (param_1);
  uVar3 = native_UnityEngine_Component__GetComponent_ActiveAnimation__49daec
                    (param_1,_Method_UnityEngine_Component_GetComponent_RectTransform____12e2ad0);
  *(undefined8 *)(param_1 + 0x18) = uVar3;
  native_sub_4326e0(param_1 + 0x18);
  lVar4 = native_UnityEngine_Component__get_transform_8da62c(param_1,0);
  if (lVar4 == 0) goto LAB_005ffd84;
  uVar3 = native_UnityEngine_Transform__get_parent_765eb0(lVar4,0);
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec(_UnityEngine_Object_TypeInfo_12d54e0);
  }
  uVar5 = native_UnityEngine_Object__op_Implicit_8e1b98(uVar3,0);
  if ((uVar5 & 1) != 0) {
    lVar4 = native_UnityEngine_Component__get_transform_8da62c(param_1,0);
    if ((lVar4 == 0) ||
       (lVar4 = native_UnityEngine_Transform__get_parent_765eb0(lVar4,0), lVar4 == 0))
    goto LAB_005ffd84;
    uVar3 = native_UnityEngine_Component__GetComponent_ActiveAnimation__49daec
                      (lVar4,
                       _Method_UnityEngine_Component_GetComponent_I_BE2_BlockSection____12e2a18);
    *(undefined8 *)(param_1 + 0x20) = uVar3;
    native_sub_4326e0();
    lVar4 = native_UnityEngine_Component__get_transform_8da62c(param_1,0);
    if ((lVar4 == 0) ||
       ((lVar4 = native_UnityEngine_Transform__get_parent_765eb0(lVar4,0), lVar4 == 0 ||
        (lVar4 = native_UnityEngine_Transform__get_parent_765eb0(lVar4,0), lVar4 == 0))))
    goto LAB_005ffd84;
    uVar3 = native_UnityEngine_Component__GetComponent_ActiveAnimation__49daec
                      (lVar4,_Method_UnityEngine_Component_GetComponent_I_BE2_BlockLayout____12e2a10
                      );
    *(undefined8 *)(param_1 + 0x28) = uVar3;
    native_sub_4326e0();
  }
  uVar3 = native_UnityEngine_Component__GetComponent_ActiveAnimation__49daec
                    (param_1,_Method_UnityEngine_Component_GetComponent_Image____12e2a78);
  *(undefined8 *)(param_1 + 0x30) = uVar3;
  native_sub_4326e0((long *)(param_1 + 0x30),uVar3);
  if (*(long *)(param_1 + 0x30) != 0) {
    native_UnityEngine_UI_Image__set_type_cb7988(*(long *)(param_1 + 0x30),1,0);
    lVar4 = *(long *)(param_1 + 0x30);
    if (lVar4 != 0) {
      native_UnityEngine_UI_Image__set_pixelsPerUnitMultiplier_cb81dc(0x40000000,lVar4,0);
      plVar9 = *(long **)(param_1 + 0x20);
      if (plVar9 != (long *)0x0) {
        lVar4 = *plVar9;
        if ((ulong)*(ushort *)(lVar4 + 0x12a) != 0) {
          uVar5 = 0;
          piVar8 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
          do {
            if (*(long *)(piVar8 + -2) ==
                _MG_BlocksEngine2_Block_I_BE2_BlockSection_TypeInfo_12d4de8) {
              puVar6 = (undefined8 *)(lVar4 + (long)(*piVar8 + 4) * 0x10 + 0x138);
              goto LAB_005ffab8;
            }
            uVar5 = uVar5 + 1;
            piVar8 = piVar8 + 4;
          } while (uVar5 < *(ushort *)(lVar4 + 0x12a));
        }
        puVar6 = (undefined8 *)
                 native_sub_3c9b34(plVar9,
                                   _MG_BlocksEngine2_Block_I_BE2_BlockSection_TypeInfo_12d4de8,4);
LAB_005ffab8:
        lVar4 = (*(code *)*puVar6)(plVar9,puVar6[1]);
        if (lVar4 != 0) {
          plVar9 = *(long **)(param_1 + 0x20);
          if (plVar9 != (long *)0x0) {
            lVar4 = *plVar9;
            if ((ulong)*(ushort *)(lVar4 + 0x12a) != 0) {
              uVar5 = 0;
              piVar8 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
              do {
                if (*(long *)(piVar8 + -2) ==
                    _MG_BlocksEngine2_Block_I_BE2_BlockSection_TypeInfo_12d4de8) {
                  puVar6 = (undefined8 *)(lVar4 + (long)(*piVar8 + 4) * 0x10 + 0x138);
                  goto LAB_005ffb28;
                }
                uVar5 = uVar5 + 1;
                piVar8 = piVar8 + 4;
              } while (uVar5 < *(ushort *)(lVar4 + 0x12a));
            }
            puVar6 = (undefined8 *)
                     native_sub_3c9b34(plVar9,
                                       _MG_BlocksEngine2_Block_I_BE2_BlockSection_TypeInfo_12d4de8,4
                                      );
LAB_005ffb28:
            plVar9 = (long *)(*(code *)*puVar6)(plVar9,puVar6[1]);
            if (plVar9 != (long *)0x0) {
              lVar4 = *plVar9;
              if ((ulong)*(ushort *)(lVar4 + 0x12a) != 0) {
                uVar5 = 0;
                piVar8 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar8 + -2) == _MG_BlocksEngine2_Block_I_BE2_Block_TypeInfo_12d4dd8
                     ) {
                    puVar6 = (undefined8 *)(lVar4 + (long)(*piVar8 + 1) * 0x10 + 0x138);
                    goto LAB_005ffb9c;
                  }
                  uVar5 = uVar5 + 1;
                  piVar8 = piVar8 + 4;
                } while (uVar5 < *(ushort *)(lVar4 + 0x12a));
              }
              puVar6 = (undefined8 *)
                       native_sub_3c9b34(plVar9,_MG_BlocksEngine2_Block_I_BE2_Block_TypeInfo_12d4dd8
                                         ,1);
LAB_005ffb9c:
              iVar2 = (*(code *)*puVar6)(plVar9,puVar6[1]);
              if (iVar2 != 1) {
                plVar9 = *(long **)(param_1 + 0x20);
                if (plVar9 == (long *)0x0) goto LAB_005ffd84;
                lVar4 = *plVar9;
                if ((ulong)*(ushort *)(lVar4 + 0x12a) != 0) {
                  uVar5 = 0;
                  piVar8 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar8 + -2) ==
                        _MG_BlocksEngine2_Block_I_BE2_BlockSection_TypeInfo_12d4de8) {
                      puVar6 = (undefined8 *)(lVar4 + (long)(*piVar8 + 4) * 0x10 + 0x138);
                      goto LAB_005ffc10;
                    }
                    uVar5 = uVar5 + 1;
                    piVar8 = piVar8 + 4;
                  } while (uVar5 < *(ushort *)(lVar4 + 0x12a));
                }
                puVar6 = (undefined8 *)
                         native_sub_3c9b34(plVar9,
                                           _MG_BlocksEngine2_Block_I_BE2_BlockSection_TypeInfo_12d4de8
                                           ,4);
LAB_005ffc10:
                plVar9 = (long *)(*(code *)*puVar6)(plVar9,puVar6[1]);
                if (plVar9 == (long *)0x0) goto LAB_005ffd84;
                lVar4 = *plVar9;
                if ((ulong)*(ushort *)(lVar4 + 0x12a) != 0) {
                  uVar5 = 0;
                  piVar8 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar8 + -2) ==
                        _MG_BlocksEngine2_Block_I_BE2_Block_TypeInfo_12d4dd8) {
                      puVar6 = (undefined8 *)(lVar4 + (long)(*piVar8 + 1) * 0x10 + 0x138);
                      goto LAB_005ffc7c;
                    }
                    uVar5 = uVar5 + 1;
                    piVar8 = piVar8 + 4;
                  } while (uVar5 < *(ushort *)(lVar4 + 0x12a));
                }
                puVar6 = (undefined8 *)
                         native_sub_3c9b34(plVar9,
                                           _MG_BlocksEngine2_Block_I_BE2_Block_TypeInfo_12d4dd8,1);
LAB_005ffc7c:
                iVar2 = (*(code *)*puVar6)(plVar9,puVar6[1]);
                if (iVar2 != 2) {
                  return;
                }
              }
              lVar4 = native_UnityEngine_Component__GetComponent_ActiveAnimation__49daec
                                (param_1,
                                 _Method_UnityEngine_Component_GetComponent_VerticalLayoutGroup____12e2c40
                                );
              if (*(long *)(param_1 + 0x40) != 0) {
                iVar2 = *(int *)(*(long *)(param_1 + 0x40) + 0x18);
                uVar3 = native_sub_432808(_UnityEngine_RectOffset_TypeInfo_12d58d8);
                if (iVar2 < 2) {
                  native_UnityEngine_RectOffset___ctor_76422c(uVar3,0,0,0,0,0);
                  if (lVar4 != 0) {
                    native_UnityEngine_UI_LayoutGroup__set_padding_a7b358(lVar4,uVar3,0);
                    native_UnityEngine_UI_HorizontalOrVerticalLayoutGroup__set_spacing_cb7040
                              (0,lVar4,0);
                    uVar7 = 4;
LAB_005ffd6c:
                    if ((bRam0000000001341d62 & 1) == 0) {
                      native_sub_43273c(&
                                        Method_UnityEngine_UI_LayoutGroup_SetProperty_TextAnchor____12e5120
                                        ,uVar7,0);
                      bRam0000000001341d62 = 1;
                    }
                    lVar1 = _Method_UnityEngine_UI_LayoutGroup_SetProperty_TextAnchor____12e5120;
                    lVar10 = **(long **)(
                                        _Method_UnityEngine_UI_LayoutGroup_SetProperty_TextAnchor____12e5120
                                        + 0x30);
                    uStack_34 = uVar7;
                    if ((*(byte *)(lVar10 + 0x132) & 1) == 0) {
                      native_sub_3c9850(lVar10);
                    }
                    uVar3 = native_sub_4327fc(lVar10,&uStack_34);
                    alStack_58[0] = **(long **)(lVar1 + 0x30);
                    if ((*(byte *)(alStack_58[0] + 0x132) & 1) == 0) {
                      native_sub_3c9850(alStack_58[0]);
                    }
                    alStack_58[1] = 0xffffffffffffffff;
                    uStack_48 = *(undefined4 *)(lVar4 + 0x20);
                    uVar5 = (**(code **)(alStack_58[0] + 0x138))
                                      (alStack_58,uVar3,*(undefined8 *)(alStack_58[0] + 0x140));
                    if ((uVar5 & 1) == 0) {
                      *(undefined4 *)(lVar4 + 0x20) = uVar7;
                      if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
                        native_sub_432810();
                      }
                      native_UnityEngine_UI_LayoutGroup__SetDirty_a7ba48(lVar4,0);
                    }
                    return;
                  }
                }
                else {
                  native_UnityEngine_RectOffset___ctor_76422c(uVar3,0xfffffff6,0,0,0xffffffe7,0);
                  if (lVar4 != 0) {
                    native_UnityEngine_UI_LayoutGroup__set_padding_a7b358(lVar4,uVar3,0);
                    native_UnityEngine_UI_HorizontalOrVerticalLayoutGroup__set_spacing_cb7040
                              (0x41200000,lVar4,0);
                    uVar7 = 7;
                    goto LAB_005ffd6c;
                  }
                }
              }
            }
          }
          goto LAB_005ffd84;
        }
      }
      return;
    }
  }
LAB_005ffd84:
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* MG_BlocksEngine2.Horizontal.Block.BE2_HorizontalBlockSectionHeader$$OnEnable @ 0x6000e0
 * void MG_BlocksEngine2_Horizontal_Block_BE2_HorizontalBlockSectionHeader__OnEnable (MG_BlocksEngine2_Horizontal_Block_BE2_HorizontalBlockSectionHeader_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MG_BlocksEngine2.Horizontal.Block.BE2_HorizontalBlockSectionHeader$$OnEnable
   void MG_BlocksEngine2_Horizontal_Block_BE2_HorizontalBlockSectionHeader__OnEnable
   (MG_BlocksEngine2_Horizontal_Block_BE2_HorizontalBlockSectionHeader_o* __this, const MethodInfo*
   method); */

void native_MG_BlocksEngine2_Horizontal_Block_BE2_HorizontalBlockSectionHeader__OnEnable_6000e0
               (long *param_1)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long lStack_38;
  
  if ((bRam000000000133eddc & 1) == 0) {
    native_sub_43273c(&UnityEngine_Events_UnityAction_TypeInfo_12d65d0);
    bRam000000000133eddc = 1;
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



/* MG_BlocksEngine2.Horizontal.Block.BE2_HorizontalBlockSectionHeader$$OnDisable @ 0x600294
 * void MG_BlocksEngine2_Horizontal_Block_BE2_HorizontalBlockSectionHeader__OnDisable (MG_BlocksEngine2_Horizontal_Block_BE2_HorizontalBlockSectionHeader_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MG_BlocksEngine2.Horizontal.Block.BE2_HorizontalBlockSectionHeader$$OnDisable
   void MG_BlocksEngine2_Horizontal_Block_BE2_HorizontalBlockSectionHeader__OnDisable
   (MG_BlocksEngine2_Horizontal_Block_BE2_HorizontalBlockSectionHeader_o* __this, const MethodInfo*
   method); */

void native_MG_BlocksEngine2_Horizontal_Block_BE2_HorizontalBlockSectionHeader__OnDisable_600294
               (long *param_1)

{
  ulong uVar1;
  long lVar2;
  undefined8 uVar3;
  long lStack_38;
  
  if ((bRam000000000133eddd & 1) == 0) {
    native_sub_43273c(&UnityEngine_Events_UnityAction_TypeInfo_12d65d0);
    bRam000000000133eddd = 1;
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



/* MG_BlocksEngine2.Horizontal.Block.BE2_HorizontalBlockSectionHeader$$UpdateItemsArray @ 0x5ffd88
 * void MG_BlocksEngine2_Horizontal_Block_BE2_HorizontalBlockSectionHeader__UpdateItemsArray (MG_BlocksEngine2_Horizontal_Block_BE2_HorizontalBlockSectionHeader_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MG_BlocksEngine2.Horizontal.Block.BE2_HorizontalBlockSectionHeader$$UpdateItemsArray
   void MG_BlocksEngine2_Horizontal_Block_BE2_HorizontalBlockSectionHeader__UpdateItemsArray
   (MG_BlocksEngine2_Horizontal_Block_BE2_HorizontalBlockSectionHeader_o* __this, const MethodInfo*
   method); */

void native_MG_BlocksEngine2_Horizontal_Block_BE2_HorizontalBlockSectionHeader__UpdateItemsArray_5ffd88
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
  
  if ((bRam000000000133edde & 1) == 0) {
    native_sub_43273c(&
                      Method_MG_BlocksEngine2_Utils_BE2_ArrayUtils_Add_I_BE2_BlockSectionHeaderItem____12e20b0
                     );
    native_sub_43273c(&
                      Method_UnityEngine_Component_GetComponent_I_BE2_BlockSectionHeaderItem____12e2a38
                     );
    native_sub_43273c(&MG_BlocksEngine2_Block_I_BE2_BlockSectionHeaderItem___TypeInfo_12d3230);
    native_sub_43273c(&MG_BlocksEngine2_Block_I_BE2_BlockSectionHeaderItem_TypeInfo_12d4e08);
    bRam000000000133edde = 1;
  }
  uVar2 = native_sub_432750(_MG_BlocksEngine2_Block_I_BE2_BlockSectionHeaderItem___TypeInfo_12d3230,
                            0);
  puVar8 = (undefined8 *)(param_1 + 0x40);
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
        goto LAB_005fff30;
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
                goto LAB_005ffed4;
              }
              uVar6 = uVar6 + 1;
              piVar7 = piVar7 + 4;
            } while (uVar6 < *(ushort *)(lVar3 + 0x12a));
          }
          puVar5 = (undefined8 *)
                   native_sub_3c9b34(plVar4,
                                     _MG_BlocksEngine2_Block_I_BE2_BlockSectionHeaderItem_TypeInfo_12d4e08
                                     ,0);
LAB_005ffed4:
          lVar3 = (*(code *)*puVar5)(plVar4,puVar5[1]);
          if ((lVar3 == 0) ||
             (lVar3 = native_UnityEngine_Component__get_gameObject_8da66c(lVar3,0), lVar3 == 0))
          goto LAB_005fff30;
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
LAB_005fff30:
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* MG_BlocksEngine2.Horizontal.Block.BE2_HorizontalBlockSectionHeader$$UpdateInputsArray @ 0x5fff34
 * void MG_BlocksEngine2_Horizontal_Block_BE2_HorizontalBlockSectionHeader__UpdateInputsArray (MG_BlocksEngine2_Horizontal_Block_BE2_HorizontalBlockSectionHeader_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MG_BlocksEngine2.Horizontal.Block.BE2_HorizontalBlockSectionHeader$$UpdateInputsArray
   void MG_BlocksEngine2_Horizontal_Block_BE2_HorizontalBlockSectionHeader__UpdateInputsArray
   (MG_BlocksEngine2_Horizontal_Block_BE2_HorizontalBlockSectionHeader_o* __this, const MethodInfo*
   method); */

void native_MG_BlocksEngine2_Horizontal_Block_BE2_HorizontalBlockSectionHeader__UpdateInputsArray_5fff34
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
  
  if ((bRam000000000133eddf & 1) == 0) {
    native_sub_43273c(&
                      Method_MG_BlocksEngine2_Utils_BE2_ArrayUtils_Add_I_BE2_BlockSectionHeaderInput____12e20a8
                     );
    native_sub_43273c(&
                      Method_UnityEngine_Component_GetComponent_I_BE2_BlockSectionHeaderInput____12e2a30
                     );
    native_sub_43273c(&MG_BlocksEngine2_Block_I_BE2_BlockSectionHeaderInput___TypeInfo_12d3228);
    native_sub_43273c(&MG_BlocksEngine2_Block_I_BE2_BlockSectionHeaderInput_TypeInfo_12d4e00);
    bRam000000000133eddf = 1;
  }
  uVar2 = native_sub_432750(_MG_BlocksEngine2_Block_I_BE2_BlockSectionHeaderInput___TypeInfo_12d3228
                            ,0);
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
        goto LAB_006000dc;
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
                goto LAB_00600080;
              }
              uVar6 = uVar6 + 1;
              piVar7 = piVar7 + 4;
            } while (uVar6 < *(ushort *)(lVar3 + 0x12a));
          }
          puVar5 = (undefined8 *)
                   native_sub_3c9b34(plVar4,
                                     _MG_BlocksEngine2_Block_I_BE2_BlockSectionHeaderInput_TypeInfo_12d4e00
                                     ,0);
LAB_00600080:
          lVar3 = (*(code *)*puVar5)(plVar4,puVar5[1]);
          if ((lVar3 == 0) ||
             (lVar3 = native_UnityEngine_Component__get_gameObject_8da66c(lVar3,0), lVar3 == 0))
          goto LAB_006000dc;
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
LAB_006000dc:
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* MG_BlocksEngine2.Horizontal.Block.BE2_HorizontalBlockSectionHeader$$UpdateLayout @ 0x6003b0
 * void MG_BlocksEngine2_Horizontal_Block_BE2_HorizontalBlockSectionHeader__UpdateLayout (MG_BlocksEngine2_Horizontal_Block_BE2_HorizontalBlockSectionHeader_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MG_BlocksEngine2.Horizontal.Block.BE2_HorizontalBlockSectionHeader$$UpdateLayout
   void MG_BlocksEngine2_Horizontal_Block_BE2_HorizontalBlockSectionHeader__UpdateLayout
   (MG_BlocksEngine2_Horizontal_Block_BE2_HorizontalBlockSectionHeader_o* __this, const MethodInfo*
   method); */

void native_MG_BlocksEngine2_Horizontal_Block_BE2_HorizontalBlockSectionHeader__UpdateLayout_6003b0
               (undefined1 param_1 [16],float param_2,long param_3)

{
  int iVar1;
  undefined8 *puVar2;
  long lVar3;
  ulong uVar4;
  int *piVar5;
  long *plVar6;
  long *plVar7;
  
  if ((bRam000000000133ede0 & 1) == 0) {
    native_sub_43273c(&MG_BlocksEngine2_Block_I_BE2_BlockLayout_TypeInfo_12d4de0);
    native_sub_43273c(&MG_BlocksEngine2_Block_I_BE2_BlockSectionBody_TypeInfo_12d4df0);
    native_sub_43273c(&MG_BlocksEngine2_Block_I_BE2_BlockSection_TypeInfo_12d4de8);
    native_sub_43273c(&MG_BlocksEngine2_Block_I_BE2_Block_TypeInfo_12d4dd8);
    bRam000000000133ede0 = 1;
  }
  plVar7 = *(long **)(param_3 + 0x28);
  if (plVar7 != (long *)0x0) {
    lVar3 = *plVar7;
    plVar6 = *(long **)(param_3 + 0x30);
    if ((ulong)*(ushort *)(lVar3 + 0x12a) != 0) {
      uVar4 = 0;
      piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
        if (*(long *)(piVar5 + -2) == _MG_BlocksEngine2_Block_I_BE2_BlockLayout_TypeInfo_12d4de0) {
          puVar2 = (undefined8 *)(lVar3 + (long)(*piVar5 + 3) * 0x10 + 0x138);
          goto LAB_00600478;
        }
        uVar4 = uVar4 + 1;
        piVar5 = piVar5 + 4;
      } while (uVar4 < *(ushort *)(lVar3 + 0x12a));
    }
    puVar2 = (undefined8 *)
             native_sub_3c9b34(plVar7,_MG_BlocksEngine2_Block_I_BE2_BlockLayout_TypeInfo_12d4de0,3);
LAB_00600478:
    (*(code *)*puVar2)(plVar7,puVar2[1]);
    if (plVar6 == (long *)0x0) goto LAB_00600bb0;
    (**(code **)(*plVar6 + 0x2a8))(plVar6,*(undefined8 *)(*plVar6 + 0x2b0));
  }
  plVar7 = *(long **)(param_3 + 0x20);
  if (plVar7 != (long *)0x0) {
    lVar3 = *plVar7;
    if ((ulong)*(ushort *)(lVar3 + 0x12a) != 0) {
      uVar4 = 0;
      piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
        if (*(long *)(piVar5 + -2) == _MG_BlocksEngine2_Block_I_BE2_BlockSection_TypeInfo_12d4de8) {
          puVar2 = (undefined8 *)(lVar3 + (long)*piVar5 * 0x10 + 0x138);
          goto LAB_00600500;
        }
        uVar4 = uVar4 + 1;
        piVar5 = piVar5 + 4;
      } while (uVar4 < *(ushort *)(lVar3 + 0x12a));
    }
    puVar2 = (undefined8 *)
             native_sub_3c9b34(plVar7,_MG_BlocksEngine2_Block_I_BE2_BlockSection_TypeInfo_12d4de8,0)
    ;
LAB_00600500:
    lVar3 = (*(code *)*puVar2)(plVar7,puVar2[1]);
    if ((lVar3 != 0) &&
       (lVar3 = native_UnityEngine_Component__get_transform_8da62c(lVar3,0), lVar3 != 0)) {
      iVar1 = native_UnityEngine_Transform__GetSiblingIndex_772b74(lVar3,0);
      plVar7 = *(long **)(param_3 + 0x20);
      if (plVar7 != (long *)0x0) {
        lVar3 = *plVar7;
        if ((ulong)*(ushort *)(lVar3 + 0x12a) != 0) {
          uVar4 = 0;
          piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
          do {
            if (*(long *)(piVar5 + -2) ==
                _MG_BlocksEngine2_Block_I_BE2_BlockSection_TypeInfo_12d4de8) {
              puVar2 = (undefined8 *)(lVar3 + (long)(*piVar5 + 4) * 0x10 + 0x138);
              goto LAB_0060058c;
            }
            uVar4 = uVar4 + 1;
            piVar5 = piVar5 + 4;
          } while (uVar4 < *(ushort *)(lVar3 + 0x12a));
        }
        puVar2 = (undefined8 *)
                 native_sub_3c9b34(plVar7,
                                   _MG_BlocksEngine2_Block_I_BE2_BlockSection_TypeInfo_12d4de8,4);
LAB_0060058c:
        plVar7 = (long *)(*(code *)*puVar2)(plVar7,puVar2[1]);
        if (iVar1 == 0) {
          if (plVar7 != (long *)0x0) {
            plVar7 = *(long **)(param_3 + 0x20);
            if (plVar7 == (long *)0x0) goto LAB_00600bb0;
            lVar3 = *plVar7;
            if ((ulong)*(ushort *)(lVar3 + 0x12a) != 0) {
              uVar4 = 0;
              piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
              do {
                if (*(long *)(piVar5 + -2) ==
                    _MG_BlocksEngine2_Block_I_BE2_BlockSection_TypeInfo_12d4de8) {
                  puVar2 = (undefined8 *)(lVar3 + (long)(*piVar5 + 4) * 0x10 + 0x138);
                  goto LAB_0060073c;
                }
                uVar4 = uVar4 + 1;
                piVar5 = piVar5 + 4;
              } while (uVar4 < *(ushort *)(lVar3 + 0x12a));
            }
            puVar2 = (undefined8 *)
                     native_sub_3c9b34(plVar7,
                                       _MG_BlocksEngine2_Block_I_BE2_BlockSection_TypeInfo_12d4de8,4
                                      );
LAB_0060073c:
            plVar7 = (long *)(*(code *)*puVar2)(plVar7,puVar2[1]);
            if (plVar7 == (long *)0x0) goto LAB_00600bb0;
            lVar3 = *plVar7;
            if ((ulong)*(ushort *)(lVar3 + 0x12a) != 0) {
              uVar4 = 0;
              piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
              do {
                if (*(long *)(piVar5 + -2) == _MG_BlocksEngine2_Block_I_BE2_Block_TypeInfo_12d4dd8)
                {
                  puVar2 = (undefined8 *)(lVar3 + (long)(*piVar5 + 1) * 0x10 + 0x138);
                  goto LAB_006007b0;
                }
                uVar4 = uVar4 + 1;
                piVar5 = piVar5 + 4;
              } while (uVar4 < *(ushort *)(lVar3 + 0x12a));
            }
            puVar2 = (undefined8 *)
                     native_sub_3c9b34(plVar7,_MG_BlocksEngine2_Block_I_BE2_Block_TypeInfo_12d4dd8,1
                                      );
LAB_006007b0:
            iVar1 = (*(code *)*puVar2)(plVar7,puVar2[1]);
            if (iVar1 != 4) {
              plVar7 = *(long **)(param_3 + 0x20);
              if (plVar7 == (long *)0x0) goto LAB_00600bb0;
              lVar3 = *plVar7;
              if ((ulong)*(ushort *)(lVar3 + 0x12a) != 0) {
                uVar4 = 0;
                piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar5 + -2) ==
                      _MG_BlocksEngine2_Block_I_BE2_BlockSection_TypeInfo_12d4de8) {
                    puVar2 = (undefined8 *)(lVar3 + (long)(*piVar5 + 2) * 0x10 + 0x138);
                    goto LAB_00600910;
                  }
                  uVar4 = uVar4 + 1;
                  piVar5 = piVar5 + 4;
                } while (uVar4 < *(ushort *)(lVar3 + 0x12a));
              }
              puVar2 = (undefined8 *)
                       native_sub_3c9b34(plVar7,
                                         _MG_BlocksEngine2_Block_I_BE2_BlockSection_TypeInfo_12d4de8
                                         ,2);
LAB_00600910:
              lVar3 = (*(code *)*puVar2)(plVar7,puVar2[1]);
              if (lVar3 != 0) {
                plVar7 = *(long **)(param_3 + 0x20);
                if (plVar7 == (long *)0x0) goto LAB_00600bb0;
                lVar3 = *plVar7;
                if ((ulong)*(ushort *)(lVar3 + 0x12a) != 0) {
                  uVar4 = 0;
                  piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar5 + -2) ==
                        _MG_BlocksEngine2_Block_I_BE2_BlockSection_TypeInfo_12d4de8) {
                      puVar2 = (undefined8 *)(lVar3 + (long)(*piVar5 + 2) * 0x10 + 0x138);
                      goto LAB_00600a20;
                    }
                    uVar4 = uVar4 + 1;
                    piVar5 = piVar5 + 4;
                  } while (uVar4 < *(ushort *)(lVar3 + 0x12a));
                }
                puVar2 = (undefined8 *)
                         native_sub_3c9b34(plVar7,
                                           _MG_BlocksEngine2_Block_I_BE2_BlockSection_TypeInfo_12d4de8
                                           ,2);
LAB_00600a20:
                plVar7 = (long *)(*(code *)*puVar2)(plVar7,puVar2[1]);
                if (plVar7 == (long *)0x0) goto LAB_00600bb0;
                lVar3 = *plVar7;
                if ((ulong)*(ushort *)(lVar3 + 0x12a) != 0) {
                  uVar4 = 0;
                  piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar5 + -2) ==
                        _MG_BlocksEngine2_Block_I_BE2_BlockSectionBody_TypeInfo_12d4df0) {
                      puVar2 = (undefined8 *)(lVar3 + (long)(*piVar5 + 1) * 0x10 + 0x138);
                      goto LAB_00600a94;
                    }
                    uVar4 = uVar4 + 1;
                    piVar5 = piVar5 + 4;
                  } while (uVar4 < *(ushort *)(lVar3 + 0x12a));
                }
                puVar2 = (undefined8 *)
                         native_sub_3c9b34(plVar7,
                                           _MG_BlocksEngine2_Block_I_BE2_BlockSectionBody_TypeInfo_12d4df0
                                           ,1);
LAB_00600a94:
                (*(code *)*puVar2)(plVar7,puVar2[1]);
                if (*(float *)(param_3 + 0x38) < param_2) {
                  plVar7 = *(long **)(param_3 + 0x20);
                  if (plVar7 == (long *)0x0) goto LAB_00600bb0;
                  lVar3 = *plVar7;
                  if ((ulong)*(ushort *)(lVar3 + 0x12a) != 0) {
                    uVar4 = 0;
                    piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
                    do {
                      if (*(long *)(piVar5 + -2) ==
                          _MG_BlocksEngine2_Block_I_BE2_BlockSection_TypeInfo_12d4de8) {
                        puVar2 = (undefined8 *)(lVar3 + (long)(*piVar5 + 2) * 0x10 + 0x138);
                        goto LAB_00600b0c;
                      }
                      uVar4 = uVar4 + 1;
                      piVar5 = piVar5 + 4;
                    } while (uVar4 < *(ushort *)(lVar3 + 0x12a));
                  }
                  puVar2 = (undefined8 *)
                           native_sub_3c9b34(plVar7,
                                             _MG_BlocksEngine2_Block_I_BE2_BlockSection_TypeInfo_12d4de8
                                             ,2);
LAB_00600b0c:
                  plVar7 = (long *)(*(code *)*puVar2)(plVar7,puVar2[1]);
                  if (plVar7 == (long *)0x0) goto LAB_00600bb0;
                  lVar3 = *plVar7;
                  if ((ulong)*(ushort *)(lVar3 + 0x12a) != 0) {
                    uVar4 = 0;
                    piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
                    do {
                      if (*(long *)(piVar5 + -2) ==
                          _MG_BlocksEngine2_Block_I_BE2_BlockSectionBody_TypeInfo_12d4df0) {
                        puVar2 = (undefined8 *)(lVar3 + (long)(*piVar5 + 1) * 0x10 + 0x138);
                        goto LAB_00600b78;
                      }
                      uVar4 = uVar4 + 1;
                      piVar5 = piVar5 + 4;
                    } while (uVar4 < *(ushort *)(lVar3 + 0x12a));
                  }
                  puVar2 = (undefined8 *)
                           native_sub_3c9b34(plVar7,
                                             _MG_BlocksEngine2_Block_I_BE2_BlockSectionBody_TypeInfo_12d4df0
                                             ,1);
LAB_00600b78:
                  (*(code *)*puVar2)(plVar7,puVar2[1]);
                }
              }
            }
          }
          lVar3 = *(long *)(param_3 + 0x18);
        }
        else {
          if (plVar7 == (long *)0x0) goto LAB_00600bb0;
          lVar3 = *plVar7;
          if ((ulong)*(ushort *)(lVar3 + 0x12a) != 0) {
            uVar4 = 0;
            piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
            do {
              if (*(long *)(piVar5 + -2) == _MG_BlocksEngine2_Block_I_BE2_Block_TypeInfo_12d4dd8) {
                puVar2 = (undefined8 *)(lVar3 + (long)(*piVar5 + 1) * 0x10 + 0x138);
                goto LAB_00600658;
              }
              uVar4 = uVar4 + 1;
              piVar5 = piVar5 + 4;
            } while (uVar4 < *(ushort *)(lVar3 + 0x12a));
          }
          puVar2 = (undefined8 *)
                   native_sub_3c9b34(plVar7,_MG_BlocksEngine2_Block_I_BE2_Block_TypeInfo_12d4dd8,1);
LAB_00600658:
          iVar1 = (*(code *)*puVar2)(plVar7,puVar2[1]);
          if (iVar1 != 4) {
            plVar7 = *(long **)(param_3 + 0x20);
            if (plVar7 == (long *)0x0) goto LAB_00600bb0;
            lVar3 = *plVar7;
            if ((ulong)*(ushort *)(lVar3 + 0x12a) != 0) {
              uVar4 = 0;
              piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
              do {
                if (*(long *)(piVar5 + -2) ==
                    _MG_BlocksEngine2_Block_I_BE2_BlockSection_TypeInfo_12d4de8) {
                  puVar2 = (undefined8 *)(lVar3 + (long)(*piVar5 + 2) * 0x10 + 0x138);
                  goto LAB_006006cc;
                }
                uVar4 = uVar4 + 1;
                piVar5 = piVar5 + 4;
              } while (uVar4 < *(ushort *)(lVar3 + 0x12a));
            }
            puVar2 = (undefined8 *)
                     native_sub_3c9b34(plVar7,
                                       _MG_BlocksEngine2_Block_I_BE2_BlockSection_TypeInfo_12d4de8,2
                                      );
LAB_006006cc:
            lVar3 = (*(code *)*puVar2)(plVar7,puVar2[1]);
            if (lVar3 != 0) {
              plVar7 = *(long **)(param_3 + 0x20);
              if (plVar7 == (long *)0x0) goto LAB_00600bb0;
              lVar3 = *plVar7;
              if ((ulong)*(ushort *)(lVar3 + 0x12a) != 0) {
                uVar4 = 0;
                piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar5 + -2) ==
                      _MG_BlocksEngine2_Block_I_BE2_BlockSection_TypeInfo_12d4de8) {
                    puVar2 = (undefined8 *)(lVar3 + (long)(*piVar5 + 2) * 0x10 + 0x138);
                    goto LAB_00600824;
                  }
                  uVar4 = uVar4 + 1;
                  piVar5 = piVar5 + 4;
                } while (uVar4 < *(ushort *)(lVar3 + 0x12a));
              }
              puVar2 = (undefined8 *)
                       native_sub_3c9b34(plVar7,
                                         _MG_BlocksEngine2_Block_I_BE2_BlockSection_TypeInfo_12d4de8
                                         ,2);
LAB_00600824:
              plVar7 = (long *)(*(code *)*puVar2)(plVar7,puVar2[1]);
              if (plVar7 == (long *)0x0) goto LAB_00600bb0;
              lVar3 = *plVar7;
              if ((ulong)*(ushort *)(lVar3 + 0x12a) != 0) {
                uVar4 = 0;
                piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar5 + -2) ==
                      _MG_BlocksEngine2_Block_I_BE2_BlockSectionBody_TypeInfo_12d4df0) {
                    puVar2 = (undefined8 *)(lVar3 + (long)(*piVar5 + 1) * 0x10 + 0x138);
                    goto LAB_00600898;
                  }
                  uVar4 = uVar4 + 1;
                  piVar5 = piVar5 + 4;
                } while (uVar4 < *(ushort *)(lVar3 + 0x12a));
              }
              puVar2 = (undefined8 *)
                       native_sub_3c9b34(plVar7,
                                         _MG_BlocksEngine2_Block_I_BE2_BlockSectionBody_TypeInfo_12d4df0
                                         ,1);
LAB_00600898:
              (*(code *)*puVar2)(plVar7,puVar2[1]);
              if (*(float *)(param_3 + 0x38) < param_2) {
                plVar7 = *(long **)(param_3 + 0x20);
                if (plVar7 == (long *)0x0) goto LAB_00600bb0;
                lVar3 = *plVar7;
                if ((ulong)*(ushort *)(lVar3 + 0x12a) != 0) {
                  uVar4 = 0;
                  piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar5 + -2) ==
                        _MG_BlocksEngine2_Block_I_BE2_BlockSection_TypeInfo_12d4de8) {
                      puVar2 = (undefined8 *)(lVar3 + (long)(*piVar5 + 2) * 0x10 + 0x138);
                      goto LAB_00600980;
                    }
                    uVar4 = uVar4 + 1;
                    piVar5 = piVar5 + 4;
                  } while (uVar4 < *(ushort *)(lVar3 + 0x12a));
                }
                puVar2 = (undefined8 *)
                         native_sub_3c9b34(plVar7,
                                           _MG_BlocksEngine2_Block_I_BE2_BlockSection_TypeInfo_12d4de8
                                           ,2);
LAB_00600980:
                plVar7 = (long *)(*(code *)*puVar2)(plVar7,puVar2[1]);
                if (plVar7 == (long *)0x0) goto LAB_00600bb0;
                lVar3 = *plVar7;
                if ((ulong)*(ushort *)(lVar3 + 0x12a) != 0) {
                  uVar4 = 0;
                  piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar5 + -2) ==
                        _MG_BlocksEngine2_Block_I_BE2_BlockSectionBody_TypeInfo_12d4df0) {
                      puVar2 = (undefined8 *)(lVar3 + (long)(*piVar5 + 1) * 0x10 + 0x138);
                      goto LAB_006009ec;
                    }
                    uVar4 = uVar4 + 1;
                    piVar5 = piVar5 + 4;
                  } while (uVar4 < *(ushort *)(lVar3 + 0x12a));
                }
                puVar2 = (undefined8 *)
                         native_sub_3c9b34(plVar7,
                                           _MG_BlocksEngine2_Block_I_BE2_BlockSectionBody_TypeInfo_12d4df0
                                           ,1);
LAB_006009ec:
                (*(code *)*puVar2)(plVar7,puVar2[1]);
              }
            }
          }
          lVar3 = *(long *)(param_3 + 0x18);
        }
        if (lVar3 != 0) {
          if (pcRam000000000133f8e8 == (code *)0x0) {
            pcRam000000000133f8e8 = (code *)native_sub_4326f0(&UNK_00e28502,0);
          }
          (*pcRam000000000133f8e8)(lVar3,&stack0xffffffffffffffd8);
          return;
        }
      }
    }
  }
LAB_00600bb0:
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* MG_BlocksEngine2.Horizontal.Block.BE2_HorizontalBlockSectionHeader$$.ctor @ 0x600bb4
 * void MG_BlocksEngine2_Horizontal_Block_BE2_HorizontalBlockSectionHeader___ctor (MG_BlocksEngine2_Horizontal_Block_BE2_HorizontalBlockSectionHeader_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MG_BlocksEngine2.Horizontal.Block.BE2_HorizontalBlockSectionHeader$$.ctor
   void MG_BlocksEngine2_Horizontal_Block_BE2_HorizontalBlockSectionHeader___ctor
   (MG_BlocksEngine2_Horizontal_Block_BE2_HorizontalBlockSectionHeader_o* __this, const MethodInfo*
   method); */

undefined1  [16]
native_MG_BlocksEngine2_Horizontal_Block_BE2_HorizontalBlockSectionHeader___ctor_600bb4
          (ulong param_1)

{
  undefined1 auVar1 [16];
  
  *(undefined4 *)(param_1 + 0x3c) = 0x42dc0000;
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


