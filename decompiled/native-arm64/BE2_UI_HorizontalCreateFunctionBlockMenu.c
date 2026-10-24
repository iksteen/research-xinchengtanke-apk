/* ARM64 IL2CPP native pseudocode from Ghidra.
 * Recovered implementation, not original C# source.
 * Function boundaries follow the IL2CPP method address table. */


/* MG_BlocksEngine2.Horizontal.UI.FunctionBlock.BE2_UI_HorizontalCreateFunctionBlockMenu$$Awake @ 0xdc8420
 * void MG_BlocksEngine2_Horizontal_UI_FunctionBlock_BE2_UI_HorizontalCreateFunctionBlockMenu__Awake (MG_BlocksEngine2_Horizontal_UI_FunctionBlock_BE2_UI_HorizontalCreateFunctionBlockMenu_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MG_BlocksEngine2.Horizontal.UI.FunctionBlock.BE2_UI_HorizontalCreateFunctionBlockMenu$$Awake
   void MG_BlocksEngine2_Horizontal_UI_FunctionBlock_BE2_UI_HorizontalCreateFunctionBlockMenu__Awake
   (MG_BlocksEngine2_Horizontal_UI_FunctionBlock_BE2_UI_HorizontalCreateFunctionBlockMenu_o* __this,
   const MethodInfo* method); */

void native_MG_BlocksEngine2_Horizontal_UI_FunctionBlock_BE2_UI_HorizontalCreateFunctionBlockMenu__Awake_dc8420
               (long param_1)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  
  if ((bRam0000000001346dd3 & 1) == 0) {
    native_sub_43273c(&Method_UnityEngine_Component_GetComponent_I_BE2_Block____12e2a08);
    bRam0000000001346dd3 = 1;
  }
  if (*(long *)(param_1 + 0x18) != 0) {
    uVar4 = native_UnityEngine_Component__GetComponent_ActiveAnimation__49daec
                      (*(long *)(param_1 + 0x18),
                       _Method_UnityEngine_Component_GetComponent_I_BE2_Block____12e2a08);
    puVar5 = (undefined8 *)(param_1 + 0x20);
    *puVar5 = uVar4;
    if (iRam0000000001345318 != 0) {
      puVar1 = (ulong *)(((ulong)puVar5 >> 0x12 & 0x7fff) * 8 + 0x138ecd8);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = *puVar1 | 1L << ((ulong)puVar5 >> 0xc & 0x3f);
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* MG_BlocksEngine2.Horizontal.UI.FunctionBlock.BE2_UI_HorizontalCreateFunctionBlockMenu$$get_functionBlocksManager @ 0xdc8484
 * MG_BlocksEngine2_Horizontal_Environment_BE2_HorizontalFunctionBlocksManager_o* MG_BlocksEngine2_Horizontal_UI_FunctionBlock_BE2_UI_HorizontalCreateFunctionBlockMenu__get_functionBlocksManager (MG_BlocksEngine2_Horizontal_UI_FunctionBlock_BE2_UI_HorizontalCreateFunctionBlockMenu_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MG_BlocksEngine2.Horizontal.UI.FunctionBlock.BE2_UI_HorizontalCreateFunctionBlockMenu$$get_functionBlocksManager
   MG_BlocksEngine2_Horizontal_Environment_BE2_HorizontalFunctionBlocksManager_o*
   MG_BlocksEngine2_Horizontal_UI_FunctionBlock_BE2_UI_HorizontalCreateFunctionBlockMenu__get_functionBlocksManager
   (MG_BlocksEngine2_Horizontal_UI_FunctionBlock_BE2_UI_HorizontalCreateFunctionBlockMenu_o* __this,
   const MethodInfo* method); */

long * native_MG_BlocksEngine2_Horizontal_UI_FunctionBlock_BE2_UI_HorizontalCreateFunctionBlockMenu__get_functionBlocksManager_dc8484
                 (void)

{
  long *plVar1;
  
  if ((bRam0000000001346dd4 & 1) == 0) {
    native_sub_43273c(&
                      MG_BlocksEngine2_Horizontal_Environment_BE2_HorizontalFunctionBlocksManager_TypeInfo_12d39d8
                     );
    bRam0000000001346dd4 = 1;
  }
  plVar1 = (long *)native_MG_BlocksEngine2_Environment_BE2_FunctionBlocksManager__get_Instance_5fd2f8
                             (0);
  if (plVar1 != (long *)0x0) {
    if (*(byte *)(*plVar1 + 300) <
        *(byte *)(
                 _MG_BlocksEngine2_Horizontal_Environment_BE2_HorizontalFunctionBlocksManager_TypeInfo_12d39d8
                 + 300)) {
      plVar1 = (long *)0x0;
    }
    else if (*(long *)(*(long *)(*plVar1 + 200) +
                       (ulong)*(byte *)(
                                       _MG_BlocksEngine2_Horizontal_Environment_BE2_HorizontalFunctionBlocksManager_TypeInfo_12d39d8
                                       + 300) * 8 + -8) !=
             _MG_BlocksEngine2_Horizontal_Environment_BE2_HorizontalFunctionBlocksManager_TypeInfo_12d39d8
            ) {
      plVar1 = (long *)0x0;
    }
  }
  return plVar1;
}



/* MG_BlocksEngine2.Horizontal.UI.FunctionBlock.BE2_UI_HorizontalCreateFunctionBlockMenu$$SetIcon @ 0xdc8504
 * void MG_BlocksEngine2_Horizontal_UI_FunctionBlock_BE2_UI_HorizontalCreateFunctionBlockMenu__SetIcon (MG_BlocksEngine2_Horizontal_UI_FunctionBlock_BE2_UI_HorizontalCreateFunctionBlockMenu_o* __this, UnityEngine_UI_Image_o* image, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MG_BlocksEngine2.Horizontal.UI.FunctionBlock.BE2_UI_HorizontalCreateFunctionBlockMenu$$SetIcon
   void 
   MG_BlocksEngine2_Horizontal_UI_FunctionBlock_BE2_UI_HorizontalCreateFunctionBlockMenu__SetIcon
   (MG_BlocksEngine2_Horizontal_UI_FunctionBlock_BE2_UI_HorizontalCreateFunctionBlockMenu_o* __this,
   UnityEngine_UI_Image_o* image, const MethodInfo* method); */

void native_MG_BlocksEngine2_Horizontal_UI_FunctionBlock_BE2_UI_HorizontalCreateFunctionBlockMenu__SetIcon_dc8504
               (long param_1,long param_2)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  undefined4 uVar4;
  undefined8 *puVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  ulong uVar9;
  int *piVar10;
  long *plVar11;
  
  if ((bRam0000000001346dd5 & 1) == 0) {
    native_sub_43273c(&
                      Method_UnityEngine_Component_GetComponentInChildren_BE2_BlockSectionHeader_Custom____12e2c60
                     );
    native_sub_43273c(&Method_UnityEngine_Component_GetComponent_Image____12e2a78);
    native_sub_43273c(&MG_BlocksEngine2_Block_I_BE2_Block_TypeInfo_12d4dd8);
    bRam0000000001346dd5 = 1;
  }
  plVar11 = *(long **)(param_1 + 0x20);
  if (plVar11 != (long *)0x0) {
    lVar8 = *plVar11;
    if ((ulong)*(ushort *)(lVar8 + 0x12a) != 0) {
      uVar9 = 0;
      piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == _MG_BlocksEngine2_Block_I_BE2_Block_TypeInfo_12d4dd8) {
          puVar5 = (undefined8 *)(lVar8 + (long)*piVar10 * 0x10 + 0x138);
          goto LAB_00dc85b8;
        }
        uVar9 = uVar9 + 1;
        piVar10 = piVar10 + 4;
      } while (uVar9 < *(ushort *)(lVar8 + 0x12a));
    }
    puVar5 = (undefined8 *)
             native_sub_3c9b34(plVar11,_MG_BlocksEngine2_Block_I_BE2_Block_TypeInfo_12d4dd8,0);
LAB_00dc85b8:
    lVar8 = (*(code *)*puVar5)(plVar11,puVar5[1]);
    if ((((lVar8 != 0) &&
         (lVar8 = native_UnityEngine_Component__GetComponentInChildren_Animation__49db98
                            (lVar8,
                             _Method_UnityEngine_Component_GetComponentInChildren_BE2_BlockSectionHeader_Custom____12e2c60
                            ), lVar8 != 0)) &&
        (lVar6 = native_UnityEngine_Component__GetComponent_ActiveAnimation__49daec
                           (lVar8,_Method_UnityEngine_Component_GetComponent_Image____12e2a78),
        param_2 != 0)) && (lVar6 != 0)) {
      native_UnityEngine_UI_Image__set_sprite_cb7458(lVar6,*(undefined8 *)(param_2 + 0xd0),0);
      lVar6 = native_UnityEngine_Component__get_transform_8da62c(param_2,0);
      if ((lVar6 != 0) &&
         (lVar6 = native_UnityEngine_Transform__get_parent_765eb0(lVar6,0), lVar6 != 0)) {
        uVar4 = native_UnityEngine_Transform__GetSiblingIndex_772b74(lVar6,0);
        *(undefined4 *)(param_1 + 0x38) = uVar4;
        uVar7 = native_MG_BlocksEngine2_Horizontal_UI_FunctionBlock_BE2_UI_HorizontalCreateFunctionBlockMenu__GetCustomString_dc8654
                          (param_1);
        puVar5 = (undefined8 *)(lVar8 + 0x20);
        *puVar5 = uVar7;
        if (iRam0000000001345318 != 0) {
          puVar1 = (ulong *)(((ulong)puVar5 >> 0x12 & 0x7fff) * 8 + 0x138ecd8);
          do {
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
            if (bVar3) {
              *puVar1 = *puVar1 | 1L << ((ulong)puVar5 >> 0xc & 0x3f);
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



/* MG_BlocksEngine2.Horizontal.UI.FunctionBlock.BE2_UI_HorizontalCreateFunctionBlockMenu$$GetCustomString @ 0xdc8654
 * System_String_o* MG_BlocksEngine2_Horizontal_UI_FunctionBlock_BE2_UI_HorizontalCreateFunctionBlockMenu__GetCustomString (MG_BlocksEngine2_Horizontal_UI_FunctionBlock_BE2_UI_HorizontalCreateFunctionBlockMenu_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MG_BlocksEngine2.Horizontal.UI.FunctionBlock.BE2_UI_HorizontalCreateFunctionBlockMenu$$GetCustomString
   System_String_o*
   MG_BlocksEngine2_Horizontal_UI_FunctionBlock_BE2_UI_HorizontalCreateFunctionBlockMenu__GetCustomString
   (MG_BlocksEngine2_Horizontal_UI_FunctionBlock_BE2_UI_HorizontalCreateFunctionBlockMenu_o* __this,
   const MethodInfo* method); */

long native_MG_BlocksEngine2_Horizontal_UI_FunctionBlock_BE2_UI_HorizontalCreateFunctionBlockMenu__GetCustomString_dc8654
               (long param_1)

{
  int iVar1;
  bool bVar2;
  bool bVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  
  if ((bRam0000000001346dd6 & 1) == 0) {
    native_sub_43273c(&StringLiteral_icon__12f4c88);
    bRam0000000001346dd6 = 1;
  }
  lVar5 = native_System_Int32__ToString_83c60c(param_1 + 0x38,0);
  lVar6 = _StringLiteral_icon__12f4c88;
  if ((bRam000000000134213f & 1) == 0) {
    native_sub_43273c(&string_TypeInfo_12d5f28,lVar5,0);
    bRam000000000134213f = 1;
  }
  if (lVar6 == 0) {
    bVar2 = true;
  }
  else {
    bVar2 = *(int *)(lVar6 + 0x10) == 0;
  }
  if (lVar5 == 0) {
    bVar3 = true;
  }
  else {
    bVar3 = *(int *)(lVar5 + 0x10) == 0;
  }
  if (bVar2) {
    lVar6 = lVar5;
    if (bVar3) {
      lVar6 = **(long **)(_string_TypeInfo_12d5f28 + 0xb8);
    }
  }
  else if (!bVar3) {
    if ((lVar6 == 0) || (lVar5 == 0)) {
                    /* WARNING: Subroutine does not return */
      native_sub_432810();
    }
    iVar1 = *(int *)(lVar6 + 0x10);
    lVar4 = native_sub_3bca18(*(int *)(lVar5 + 0x10) + iVar1);
    native_System_String__FillStringChecked_b0a62c(lVar4,0,lVar6);
    native_System_String__FillStringChecked_b0a62c(lVar4,iVar1,lVar5);
    lVar6 = lVar4;
  }
  return lVar6;
}



/* MG_BlocksEngine2.Horizontal.UI.FunctionBlock.BE2_UI_HorizontalCreateFunctionBlockMenu$$RemoveItem @ 0xdc86b4
 * void MG_BlocksEngine2_Horizontal_UI_FunctionBlock_BE2_UI_HorizontalCreateFunctionBlockMenu__RemoveItem (MG_BlocksEngine2_Horizontal_UI_FunctionBlock_BE2_UI_HorizontalCreateFunctionBlockMenu_o* __this, UnityEngine_GameObject_o* item, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MG_BlocksEngine2.Horizontal.UI.FunctionBlock.BE2_UI_HorizontalCreateFunctionBlockMenu$$RemoveItem
   void 
   MG_BlocksEngine2_Horizontal_UI_FunctionBlock_BE2_UI_HorizontalCreateFunctionBlockMenu__RemoveItem
   (MG_BlocksEngine2_Horizontal_UI_FunctionBlock_BE2_UI_HorizontalCreateFunctionBlockMenu_o* __this,
   UnityEngine_GameObject_o* item, const MethodInfo* method); */

void native_MG_BlocksEngine2_Horizontal_UI_FunctionBlock_BE2_UI_HorizontalCreateFunctionBlockMenu__RemoveItem_dc86b4
               (long param_1,long param_2)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  ulong uVar4;
  int *piVar5;
  long *plVar6;
  
  if ((bRam0000000001346dd7 & 1) == 0) {
    native_sub_43273c(&MG_BlocksEngine2_Block_I_BE2_BlockLayout_TypeInfo_12d4de0);
    native_sub_43273c(&MG_BlocksEngine2_Block_I_BE2_BlockSectionHeader_TypeInfo_12d4df8);
    native_sub_43273c(&MG_BlocksEngine2_Block_I_BE2_BlockSection_TypeInfo_12d4de8);
    native_sub_43273c(&MG_BlocksEngine2_Block_I_BE2_Block_TypeInfo_12d4dd8);
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    bRam0000000001346dd7 = 1;
  }
  if ((param_2 != 0) &&
     (lVar1 = native_UnityEngine_GameObject__get_transform_8de5c8(param_2,0), lVar1 != 0)) {
    native_UnityEngine_Transform__SetParent_77208c(lVar1,0,0);
    plVar6 = *(long **)(param_1 + 0x20);
    if (plVar6 != (long *)0x0) {
      lVar1 = *plVar6;
      if ((ulong)*(ushort *)(lVar1 + 0x12a) != 0) {
        uVar4 = 0;
        piVar5 = (int *)(*(long *)(lVar1 + 0xb0) + 8);
        do {
          if (*(long *)(piVar5 + -2) == _MG_BlocksEngine2_Block_I_BE2_Block_TypeInfo_12d4dd8) {
            puVar2 = (undefined8 *)(lVar1 + (long)(*piVar5 + 3) * 0x10 + 0x138);
            goto LAB_00dc87a4;
          }
          uVar4 = uVar4 + 1;
          piVar5 = piVar5 + 4;
        } while (uVar4 < *(ushort *)(lVar1 + 0x12a));
      }
      puVar2 = (undefined8 *)
               native_sub_3c9b34(plVar6,_MG_BlocksEngine2_Block_I_BE2_Block_TypeInfo_12d4dd8,3);
LAB_00dc87a4:
      plVar6 = (long *)(*(code *)*puVar2)(plVar6,puVar2[1]);
      if (plVar6 != (long *)0x0) {
        lVar1 = *plVar6;
        if ((ulong)*(ushort *)(lVar1 + 0x12a) != 0) {
          uVar4 = 0;
          piVar5 = (int *)(*(long *)(lVar1 + 0xb0) + 8);
          do {
            if (*(long *)(piVar5 + -2) == _MG_BlocksEngine2_Block_I_BE2_BlockLayout_TypeInfo_12d4de0
               ) {
              puVar2 = (undefined8 *)(lVar1 + (long)(*piVar5 + 2) * 0x10 + 0x138);
              goto LAB_00dc8818;
            }
            uVar4 = uVar4 + 1;
            piVar5 = piVar5 + 4;
          } while (uVar4 < *(ushort *)(lVar1 + 0x12a));
        }
        puVar2 = (undefined8 *)
                 native_sub_3c9b34(plVar6,_MG_BlocksEngine2_Block_I_BE2_BlockLayout_TypeInfo_12d4de0
                                   ,2);
LAB_00dc8818:
        lVar1 = (*(code *)*puVar2)(plVar6,puVar2[1]);
        if (lVar1 != 0) {
          if (*(int *)(lVar1 + 0x18) == 0) {
            uVar3 = native_sub_43283c();
                    /* WARNING: Subroutine does not return */
            native_sub_4327dc(uVar3,0);
          }
          plVar6 = *(long **)(lVar1 + 0x20);
          if (plVar6 != (long *)0x0) {
            lVar1 = *plVar6;
            if ((ulong)*(ushort *)(lVar1 + 0x12a) != 0) {
              uVar4 = 0;
              piVar5 = (int *)(*(long *)(lVar1 + 0xb0) + 8);
              do {
                if (*(long *)(piVar5 + -2) ==
                    _MG_BlocksEngine2_Block_I_BE2_BlockSection_TypeInfo_12d4de8) {
                  puVar2 = (undefined8 *)(lVar1 + (long)(*piVar5 + 1) * 0x10 + 0x138);
                  goto LAB_00dc8898;
                }
                uVar4 = uVar4 + 1;
                piVar5 = piVar5 + 4;
              } while (uVar4 < *(ushort *)(lVar1 + 0x12a));
            }
            puVar2 = (undefined8 *)
                     native_sub_3c9b34(plVar6,
                                       _MG_BlocksEngine2_Block_I_BE2_BlockSection_TypeInfo_12d4de8,1
                                      );
LAB_00dc8898:
            plVar6 = (long *)(*(code *)*puVar2)(plVar6,puVar2[1]);
            if (plVar6 != (long *)0x0) {
              lVar1 = *plVar6;
              if ((ulong)*(ushort *)(lVar1 + 0x12a) != 0) {
                uVar4 = 0;
                piVar5 = (int *)(*(long *)(lVar1 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar5 + -2) ==
                      _MG_BlocksEngine2_Block_I_BE2_BlockSectionHeader_TypeInfo_12d4df8) {
                    puVar2 = (undefined8 *)(lVar1 + (long)(*piVar5 + 6) * 0x10 + 0x138);
                    goto LAB_00dc890c;
                  }
                  uVar4 = uVar4 + 1;
                  piVar5 = piVar5 + 4;
                } while (uVar4 < *(ushort *)(lVar1 + 0x12a));
              }
              puVar2 = (undefined8 *)
                       native_sub_3c9b34(plVar6,
                                         _MG_BlocksEngine2_Block_I_BE2_BlockSectionHeader_TypeInfo_12d4df8
                                         ,6);
LAB_00dc890c:
              (*(code *)*puVar2)(plVar6,puVar2[1]);
              if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
                 (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
                native_sub_4327ec();
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
              (*pcRam0000000001341040)(0,param_2);
              return;
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* MG_BlocksEngine2.Horizontal.UI.FunctionBlock.BE2_UI_HorizontalCreateFunctionBlockMenu$$OnButtonCreateFunctionBlock @ 0xdc8960
 * void MG_BlocksEngine2_Horizontal_UI_FunctionBlock_BE2_UI_HorizontalCreateFunctionBlockMenu__OnButtonCreateFunctionBlock (MG_BlocksEngine2_Horizontal_UI_FunctionBlock_BE2_UI_HorizontalCreateFunctionBlockMenu_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MG_BlocksEngine2.Horizontal.UI.FunctionBlock.BE2_UI_HorizontalCreateFunctionBlockMenu$$OnButtonCreateFunctionBlock
   void 
   MG_BlocksEngine2_Horizontal_UI_FunctionBlock_BE2_UI_HorizontalCreateFunctionBlockMenu__OnButtonCreateFunctionBlock
   (MG_BlocksEngine2_Horizontal_UI_FunctionBlock_BE2_UI_HorizontalCreateFunctionBlockMenu_o* __this,
   const MethodInfo* method); */

void native_MG_BlocksEngine2_Horizontal_UI_FunctionBlock_BE2_UI_HorizontalCreateFunctionBlockMenu__OnButtonCreateFunctionBlock_dc8960
               (undefined8 param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long *plVar4;
  
  if ((bRam0000000001346dd8 & 1) == 0) {
    native_sub_43273c(&MG_BlocksEngine2_Serializer_DefineItem_TypeInfo_12d43d8);
    native_sub_43273c(&Method_System_Collections_Generic_List_DefineItem__Add___12dc728);
    native_sub_43273c(&Method_System_Collections_Generic_List_DefineItem___ctor___12dc720);
    native_sub_43273c(&System_Collections_Generic_List_DefineItem__TypeInfo_12d2a00);
    native_sub_43273c(&StringLiteral_custom_12f42a0);
    bRam0000000001346dd8 = 1;
  }
  lVar1 = native_sub_432808(_System_Collections_Generic_List_DefineItem__TypeInfo_12d2a00);
  native_System_Collections_Generic_List_XmlEventCache_XmlEvent______ctor_d3ff44
            (lVar1,_Method_System_Collections_Generic_List_DefineItem___ctor___12dc720);
  uVar2 = native_MG_BlocksEngine2_Horizontal_UI_FunctionBlock_BE2_UI_HorizontalCreateFunctionBlockMenu__GetCustomString_dc8654
                    (param_1);
  uVar3 = native_sub_432808(_MG_BlocksEngine2_Serializer_DefineItem_TypeInfo_12d43d8);
  native_MG_BlocksEngine2_Serializer_DefineItem___ctor_decca4
            (uVar3,_StringLiteral_custom_12f42a0,uVar2,0);
  if (lVar1 != 0) {
    native_System_Collections_Generic_List_int_____Add_d40c00
              (lVar1,uVar3,_Method_System_Collections_Generic_List_DefineItem__Add___12dc728);
    plVar4 = (long *)native_MG_BlocksEngine2_Environment_BE2_FunctionBlocksManager__get_Instance_5fd2f8
                               (0);
    if (plVar4 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00dc8a64. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar4 + 0x178))(plVar4,lVar1,*(undefined8 *)(*plVar4 + 0x180));
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* MG_BlocksEngine2.Horizontal.UI.FunctionBlock.BE2_UI_HorizontalCreateFunctionBlockMenu$$.ctor @ 0xdc8a6c
 * void MG_BlocksEngine2_Horizontal_UI_FunctionBlock_BE2_UI_HorizontalCreateFunctionBlockMenu___ctor (MG_BlocksEngine2_Horizontal_UI_FunctionBlock_BE2_UI_HorizontalCreateFunctionBlockMenu_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MG_BlocksEngine2.Horizontal.UI.FunctionBlock.BE2_UI_HorizontalCreateFunctionBlockMenu$$.ctor
   void MG_BlocksEngine2_Horizontal_UI_FunctionBlock_BE2_UI_HorizontalCreateFunctionBlockMenu___ctor
   (MG_BlocksEngine2_Horizontal_UI_FunctionBlock_BE2_UI_HorizontalCreateFunctionBlockMenu_o* __this,
   const MethodInfo* method); */

undefined1  [16]
native_MG_BlocksEngine2_Horizontal_UI_FunctionBlock_BE2_UI_HorizontalCreateFunctionBlockMenu___ctor_dc8a6c
          (ulong param_1)

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


