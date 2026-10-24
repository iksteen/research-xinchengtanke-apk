/* ARM64 IL2CPP native pseudocode from Ghidra.
 * Recovered implementation, not original C# source.
 * Function boundaries follow the IL2CPP method address table. */


/* MG_BlocksEngine2.Block.BE2_BlockSection$$get_RectTransform @ 0x564a90
 * UnityEngine_RectTransform_o* MG_BlocksEngine2_Block_BE2_BlockSection__get_RectTransform (MG_BlocksEngine2_Block_BE2_BlockSection_o* __this, const MethodInfo* method); */

/* MG_BlocksEngine2.Block.BE2_BlockSection$$get_RectTransform
   UnityEngine_RectTransform_o* MG_BlocksEngine2_Block_BE2_BlockSection__get_RectTransform
   (MG_BlocksEngine2_Block_BE2_BlockSection_o* __this, const MethodInfo* method); */

undefined8 native_MG_BlocksEngine2_Block_BE2_BlockSection__get_RectTransform_564a90(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* MG_BlocksEngine2.Block.BE2_BlockSection$$get_Header @ 0x564a98
 * MG_BlocksEngine2_Block_I_BE2_BlockSectionHeader_o* MG_BlocksEngine2_Block_BE2_BlockSection__get_Header (MG_BlocksEngine2_Block_BE2_BlockSection_o* __this, const MethodInfo* method); */

/* MG_BlocksEngine2.Block.BE2_BlockSection$$get_Header
   MG_BlocksEngine2_Block_I_BE2_BlockSectionHeader_o*
   MG_BlocksEngine2_Block_BE2_BlockSection__get_Header (MG_BlocksEngine2_Block_BE2_BlockSection_o*
   __this, const MethodInfo* method); */

undefined8 native_MG_BlocksEngine2_Block_BE2_BlockSection__get_Header_564a98(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* MG_BlocksEngine2.Block.BE2_BlockSection$$get_Body @ 0x564aa0
 * MG_BlocksEngine2_Block_I_BE2_BlockSectionBody_o* MG_BlocksEngine2_Block_BE2_BlockSection__get_Body (MG_BlocksEngine2_Block_BE2_BlockSection_o* __this, const MethodInfo* method); */

/* MG_BlocksEngine2.Block.BE2_BlockSection$$get_Body
   MG_BlocksEngine2_Block_I_BE2_BlockSectionBody_o*
   MG_BlocksEngine2_Block_BE2_BlockSection__get_Body (MG_BlocksEngine2_Block_BE2_BlockSection_o*
   __this, const MethodInfo* method); */

undefined8 native_MG_BlocksEngine2_Block_BE2_BlockSection__get_Body_564aa0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* MG_BlocksEngine2.Block.BE2_BlockSection$$get_Block @ 0x564aa8
 * MG_BlocksEngine2_Block_I_BE2_Block_o* MG_BlocksEngine2_Block_BE2_BlockSection__get_Block (MG_BlocksEngine2_Block_BE2_BlockSection_o* __this, const MethodInfo* method); */

/* MG_BlocksEngine2.Block.BE2_BlockSection$$get_Block
   MG_BlocksEngine2_Block_I_BE2_Block_o* MG_BlocksEngine2_Block_BE2_BlockSection__get_Block
   (MG_BlocksEngine2_Block_BE2_BlockSection_o* __this, const MethodInfo* method); */

undefined8 native_MG_BlocksEngine2_Block_BE2_BlockSection__get_Block_564aa8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



/* MG_BlocksEngine2.Block.BE2_BlockSection$$set_Block @ 0x564ab0
 * void MG_BlocksEngine2_Block_BE2_BlockSection__set_Block (MG_BlocksEngine2_Block_BE2_BlockSection_o* __this, MG_BlocksEngine2_Block_I_BE2_Block_o* value, const MethodInfo* method); */

/* MG_BlocksEngine2.Block.BE2_BlockSection$$set_Block
   void MG_BlocksEngine2_Block_BE2_BlockSection__set_Block
   (MG_BlocksEngine2_Block_BE2_BlockSection_o* __this, MG_BlocksEngine2_Block_I_BE2_Block_o* value,
   const MethodInfo* method); */

void native_MG_BlocksEngine2_Block_BE2_BlockSection__set_Block_564ab0
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



/* MG_BlocksEngine2.Block.BE2_BlockSection$$get_Size @ 0x564ab8
 * UnityEngine_Vector2_o MG_BlocksEngine2_Block_BE2_BlockSection__get_Size (MG_BlocksEngine2_Block_BE2_BlockSection_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MG_BlocksEngine2.Block.BE2_BlockSection$$get_Size
   UnityEngine_Vector2_o MG_BlocksEngine2_Block_BE2_BlockSection__get_Size
   (MG_BlocksEngine2_Block_BE2_BlockSection_o* __this, const MethodInfo* method); */

void native_MG_BlocksEngine2_Block_BE2_BlockSection__get_Size_564ab8(long param_1)

{
  undefined8 *puVar1;
  long lVar2;
  ulong uVar3;
  int *piVar4;
  long *plVar5;
  
  if ((bRam000000000133ea3c & 1) == 0) {
    native_sub_43273c(&Method_UnityEngine_Component_GetComponent_RectTransform____12e2ad0);
    native_sub_43273c(&MG_BlocksEngine2_Block_I_BE2_BlockSectionBody_TypeInfo_12d4df0);
    native_sub_43273c(&MG_BlocksEngine2_Block_I_BE2_BlockSectionHeader_TypeInfo_12d4df8);
    bRam000000000133ea3c = 1;
  }
  if (*(long *)(param_1 + 0x28) == 0) {
    lVar2 = native_UnityEngine_Component__GetComponent_ActiveAnimation__49daec
                      (param_1,_Method_UnityEngine_Component_GetComponent_RectTransform____12e2ad0);
    if (lVar2 != 0) {
      native_UnityEngine_RectTransform__get_sizeDelta_764f64(lVar2,0);
      return;
    }
  }
  else {
    native_UnityEngine_Vector2__get_zero_765ef0(0);
    plVar5 = *(long **)(param_1 + 0x28);
    if (plVar5 != (long *)0x0) {
      lVar2 = *plVar5;
      if ((ulong)*(ushort *)(lVar2 + 0x12a) != 0) {
        uVar3 = 0;
        piVar4 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
        do {
          if (*(long *)(piVar4 + -2) ==
              _MG_BlocksEngine2_Block_I_BE2_BlockSectionHeader_TypeInfo_12d4df8) {
            puVar1 = (undefined8 *)(lVar2 + (long)(*piVar4 + 3) * 0x10 + 0x138);
            goto LAB_00564ba8;
          }
          uVar3 = uVar3 + 1;
          piVar4 = piVar4 + 4;
        } while (uVar3 < *(ushort *)(lVar2 + 0x12a));
      }
      puVar1 = (undefined8 *)
               native_sub_3c9b34(plVar5,
                                 _MG_BlocksEngine2_Block_I_BE2_BlockSectionHeader_TypeInfo_12d4df8,3
                                );
LAB_00564ba8:
      (*(code *)*puVar1)(plVar5,puVar1[1]);
      plVar5 = *(long **)(param_1 + 0x30);
      if (plVar5 != (long *)0x0) {
        lVar2 = *plVar5;
        if ((ulong)*(ushort *)(lVar2 + 0x12a) != 0) {
          uVar3 = 0;
          piVar4 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
          do {
            if (*(long *)(piVar4 + -2) ==
                _MG_BlocksEngine2_Block_I_BE2_BlockSectionBody_TypeInfo_12d4df0) {
              puVar1 = (undefined8 *)(lVar2 + (long)(*piVar4 + 1) * 0x10 + 0x138);
              goto LAB_00564c20;
            }
            uVar3 = uVar3 + 1;
            piVar4 = piVar4 + 4;
          } while (uVar3 < *(ushort *)(lVar2 + 0x12a));
        }
        puVar1 = (undefined8 *)
                 native_sub_3c9b34(plVar5,
                                   _MG_BlocksEngine2_Block_I_BE2_BlockSectionBody_TypeInfo_12d4df0,1
                                  );
LAB_00564c20:
        (*(code *)*puVar1)(plVar5,puVar1[1]);
      }
      plVar5 = *(long **)(param_1 + 0x28);
      if (plVar5 != (long *)0x0) {
        lVar2 = *plVar5;
        if ((ulong)*(ushort *)(lVar2 + 0x12a) != 0) {
          uVar3 = 0;
          piVar4 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
          do {
            if (*(long *)(piVar4 + -2) ==
                _MG_BlocksEngine2_Block_I_BE2_BlockSectionHeader_TypeInfo_12d4df8) {
              puVar1 = (undefined8 *)(lVar2 + (long)(*piVar4 + 3) * 0x10 + 0x138);
              goto LAB_00564c90;
            }
            uVar3 = uVar3 + 1;
            piVar4 = piVar4 + 4;
          } while (uVar3 < *(ushort *)(lVar2 + 0x12a));
        }
        puVar1 = (undefined8 *)
                 native_sub_3c9b34(plVar5,
                                   _MG_BlocksEngine2_Block_I_BE2_BlockSectionHeader_TypeInfo_12d4df8
                                   ,3);
LAB_00564c90:
        (*(code *)*puVar1)(plVar5,puVar1[1]);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* MG_BlocksEngine2.Block.BE2_BlockSection$$OnValidate @ 0x564cb8
 * void MG_BlocksEngine2_Block_BE2_BlockSection__OnValidate (MG_BlocksEngine2_Block_BE2_BlockSection_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MG_BlocksEngine2.Block.BE2_BlockSection$$OnValidate
   void MG_BlocksEngine2_Block_BE2_BlockSection__OnValidate
   (MG_BlocksEngine2_Block_BE2_BlockSection_o* __this, const MethodInfo* method); */

void native_MG_BlocksEngine2_Block_BE2_BlockSection__OnValidate_564cb8(long param_1)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  long lVar7;
  ulong uVar8;
  
  if ((bRam000000000133ea3d & 1) == 0) {
    native_sub_43273c(&Method_UnityEngine_Component_GetComponentInParent_I_BE2_Block____12e2d40);
    native_sub_43273c(&Method_UnityEngine_Component_GetComponent_I_BE2_BlockLayout____12e2a10);
    native_sub_43273c(&Method_UnityEngine_Component_GetComponent_I_BE2_BlockSectionBody____12e2a20);
    native_sub_43273c(&Method_UnityEngine_Component_GetComponent_I_BE2_BlockSectionHeader____12e2a28
                     );
    native_sub_43273c(&Method_UnityEngine_Component_GetComponent_RectTransform____12e2ad0);
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    bRam000000000133ea3d = 1;
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
      goto LAB_00564ee0;
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
        goto LAB_00564ee0;
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
          goto LAB_00564ee0;
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
LAB_00564ee0:
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* MG_BlocksEngine2.Block.BE2_BlockSection$$Awake @ 0x564cbc
 * void MG_BlocksEngine2_Block_BE2_BlockSection__Awake (MG_BlocksEngine2_Block_BE2_BlockSection_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MG_BlocksEngine2.Block.BE2_BlockSection$$Awake
   void MG_BlocksEngine2_Block_BE2_BlockSection__Awake (MG_BlocksEngine2_Block_BE2_BlockSection_o*
   __this, const MethodInfo* method); */

void native_MG_BlocksEngine2_Block_BE2_BlockSection__Awake_564cbc(long param_1)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  long lVar7;
  ulong uVar8;
  
  if ((bRam000000000133ea3d & 1) == 0) {
    native_sub_43273c(&Method_UnityEngine_Component_GetComponentInParent_I_BE2_Block____12e2d40);
    native_sub_43273c(&Method_UnityEngine_Component_GetComponent_I_BE2_BlockLayout____12e2a10);
    native_sub_43273c(&Method_UnityEngine_Component_GetComponent_I_BE2_BlockSectionBody____12e2a20);
    native_sub_43273c(&Method_UnityEngine_Component_GetComponent_I_BE2_BlockSectionHeader____12e2a28
                     );
    native_sub_43273c(&Method_UnityEngine_Component_GetComponent_RectTransform____12e2ad0);
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    bRam000000000133ea3d = 1;
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
      goto LAB_00564ee0;
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
        goto LAB_00564ee0;
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
          goto LAB_00564ee0;
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
LAB_00564ee0:
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* MG_BlocksEngine2.Block.BE2_BlockSection$$UpdateLayout @ 0x564ee4
 * void MG_BlocksEngine2_Block_BE2_BlockSection__UpdateLayout (MG_BlocksEngine2_Block_BE2_BlockSection_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MG_BlocksEngine2.Block.BE2_BlockSection$$UpdateLayout
   void MG_BlocksEngine2_Block_BE2_BlockSection__UpdateLayout
   (MG_BlocksEngine2_Block_BE2_BlockSection_o* __this, const MethodInfo* method); */

void native_MG_BlocksEngine2_Block_BE2_BlockSection__UpdateLayout_564ee4
               (undefined1 param_1 [16],undefined4 param_2,long param_3)

{
  undefined8 *puVar1;
  long lVar2;
  ulong uVar3;
  int *piVar4;
  long *plVar5;
  undefined4 uStack_28;
  undefined4 uStack_24;
  
  if ((bRam000000000133ea3e & 1) == 0) {
    native_sub_43273c(&MG_BlocksEngine2_Block_I_BE2_BlockSectionBody_TypeInfo_12d4df0);
    native_sub_43273c(&MG_BlocksEngine2_Block_I_BE2_BlockSectionHeader_TypeInfo_12d4df8);
    bRam000000000133ea3e = 1;
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
          goto LAB_00564f88;
        }
        uVar3 = uVar3 + 1;
        piVar4 = piVar4 + 4;
      } while (uVar3 < *(ushort *)(lVar2 + 0x12a));
    }
    puVar1 = (undefined8 *)
             native_sub_3c9b34(plVar5,
                               _MG_BlocksEngine2_Block_I_BE2_BlockSectionHeader_TypeInfo_12d4df8,5);
LAB_00564f88:
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
          goto LAB_00564ffc;
        }
        uVar3 = uVar3 + 1;
        piVar4 = piVar4 + 4;
      } while (uVar3 < *(ushort *)(lVar2 + 0x12a));
    }
    puVar1 = (undefined8 *)
             native_sub_3c9b34(plVar5,
                               _MG_BlocksEngine2_Block_I_BE2_BlockSectionBody_TypeInfo_12d4df0,9);
LAB_00564ffc:
    (*(code *)*puVar1)(plVar5,puVar1[1]);
  }
  lVar2 = *(long *)(param_3 + 0x18);
  uStack_28 = native_MG_BlocksEngine2_Block_BE2_BlockSection__get_Size_564ab8(param_3);
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



/* MG_BlocksEngine2.Block.BE2_BlockSection$$.ctor @ 0x565030
 * void MG_BlocksEngine2_Block_BE2_BlockSection___ctor (MG_BlocksEngine2_Block_BE2_BlockSection_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MG_BlocksEngine2.Block.BE2_BlockSection$$.ctor
   void MG_BlocksEngine2_Block_BE2_BlockSection___ctor (MG_BlocksEngine2_Block_BE2_BlockSection_o*
   __this, const MethodInfo* method); */

undefined1  [16] native_MG_BlocksEngine2_Block_BE2_BlockSection___ctor_565030(ulong param_1)

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


