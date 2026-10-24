/* ARM64 IL2CPP native pseudocode from Ghidra.
 * Recovered implementation, not original C# source.
 * Function boundaries follow the IL2CPP method address table. */


/* MG_BlocksEngine2.Block.BE2_BlockNoViewLayout$$get_RectTransform @ 0x5647fc
 * UnityEngine_RectTransform_o* MG_BlocksEngine2_Block_BE2_BlockNoViewLayout__get_RectTransform (MG_BlocksEngine2_Block_BE2_BlockNoViewLayout_o* __this, const MethodInfo* method); */

/* MG_BlocksEngine2.Block.BE2_BlockNoViewLayout$$get_RectTransform
   UnityEngine_RectTransform_o* MG_BlocksEngine2_Block_BE2_BlockNoViewLayout__get_RectTransform
   (MG_BlocksEngine2_Block_BE2_BlockNoViewLayout_o* __this, const MethodInfo* method); */

undefined8
native_MG_BlocksEngine2_Block_BE2_BlockNoViewLayout__get_RectTransform_5647fc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* MG_BlocksEngine2.Block.BE2_BlockNoViewLayout$$set_RectTransform @ 0x564804
 * void MG_BlocksEngine2_Block_BE2_BlockNoViewLayout__set_RectTransform (MG_BlocksEngine2_Block_BE2_BlockNoViewLayout_o* __this, UnityEngine_RectTransform_o* value, const MethodInfo* method); */

/* MG_BlocksEngine2.Block.BE2_BlockNoViewLayout$$set_RectTransform
   void MG_BlocksEngine2_Block_BE2_BlockNoViewLayout__set_RectTransform
   (MG_BlocksEngine2_Block_BE2_BlockNoViewLayout_o* __this, UnityEngine_RectTransform_o* value,
   const MethodInfo* method); */

void native_MG_BlocksEngine2_Block_BE2_BlockNoViewLayout__set_RectTransform_564804
               (long param_1,undefined8 param_2)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  
  puVar4 = (undefined8 *)(param_1 + 0x18);
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



/* MG_BlocksEngine2.Block.BE2_BlockNoViewLayout$$get_SectionsArray @ 0x56480c
 * MG_BlocksEngine2_Block_I_BE2_BlockSection_array* MG_BlocksEngine2_Block_BE2_BlockNoViewLayout__get_SectionsArray (MG_BlocksEngine2_Block_BE2_BlockNoViewLayout_o* __this, const MethodInfo* method); */

/* MG_BlocksEngine2.Block.BE2_BlockNoViewLayout$$get_SectionsArray
   MG_BlocksEngine2_Block_I_BE2_BlockSection_array*
   MG_BlocksEngine2_Block_BE2_BlockNoViewLayout__get_SectionsArray
   (MG_BlocksEngine2_Block_BE2_BlockNoViewLayout_o* __this, const MethodInfo* method); */

undefined8
native_MG_BlocksEngine2_Block_BE2_BlockNoViewLayout__get_SectionsArray_56480c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* MG_BlocksEngine2.Block.BE2_BlockNoViewLayout$$get_Color @ 0x564814
 * UnityEngine_Color_o MG_BlocksEngine2_Block_BE2_BlockNoViewLayout__get_Color (MG_BlocksEngine2_Block_BE2_BlockNoViewLayout_o* __this, const MethodInfo* method); */

/* MG_BlocksEngine2.Block.BE2_BlockNoViewLayout$$get_Color
   UnityEngine_Color_o MG_BlocksEngine2_Block_BE2_BlockNoViewLayout__get_Color
   (MG_BlocksEngine2_Block_BE2_BlockNoViewLayout_o* __this, const MethodInfo* method); */

undefined4 native_MG_BlocksEngine2_Block_BE2_BlockNoViewLayout__get_Color_564814(long param_1)

{
  return *(undefined4 *)(param_1 + 0x28);
}



/* MG_BlocksEngine2.Block.BE2_BlockNoViewLayout$$set_Color @ 0x564820
 * void MG_BlocksEngine2_Block_BE2_BlockNoViewLayout__set_Color (MG_BlocksEngine2_Block_BE2_BlockNoViewLayout_o* __this, UnityEngine_Color_o value, const MethodInfo* method); */

/* MG_BlocksEngine2.Block.BE2_BlockNoViewLayout$$set_Color
   void MG_BlocksEngine2_Block_BE2_BlockNoViewLayout__set_Color
   (MG_BlocksEngine2_Block_BE2_BlockNoViewLayout_o* __this, UnityEngine_Color_o value, const
   MethodInfo* method); */

void native_MG_BlocksEngine2_Block_BE2_BlockNoViewLayout__set_Color_564820
               (undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
               long param_5)

{
  *(undefined4 *)(param_5 + 0x28) = param_1;
  *(undefined4 *)(param_5 + 0x2c) = param_2;
  *(undefined4 *)(param_5 + 0x30) = param_3;
  *(undefined4 *)(param_5 + 0x34) = param_4;
  return;
}



/* MG_BlocksEngine2.Block.BE2_BlockNoViewLayout$$get_Size @ 0x56482c
 * UnityEngine_Vector2_o MG_BlocksEngine2_Block_BE2_BlockNoViewLayout__get_Size (MG_BlocksEngine2_Block_BE2_BlockNoViewLayout_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MG_BlocksEngine2.Block.BE2_BlockNoViewLayout$$get_Size
   UnityEngine_Vector2_o MG_BlocksEngine2_Block_BE2_BlockNoViewLayout__get_Size
   (MG_BlocksEngine2_Block_BE2_BlockNoViewLayout_o* __this, const MethodInfo* method); */

undefined8 native_MG_BlocksEngine2_Block_BE2_BlockNoViewLayout__get_Size_56482c(void)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  if ((bRam000000000133ff9e & 1) == 0) {
    uVar1 = native_sub_43273c(&UnityEngine_Vector2_TypeInfo_12d66e0);
    bRam000000000133ff9e = 1;
  }
  return uVar1;
}



/* MG_BlocksEngine2.Block.BE2_BlockNoViewLayout$$OnValidate @ 0x564834
 * void MG_BlocksEngine2_Block_BE2_BlockNoViewLayout__OnValidate (MG_BlocksEngine2_Block_BE2_BlockNoViewLayout_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MG_BlocksEngine2.Block.BE2_BlockNoViewLayout$$OnValidate
   void MG_BlocksEngine2_Block_BE2_BlockNoViewLayout__OnValidate
   (MG_BlocksEngine2_Block_BE2_BlockNoViewLayout_o* __this, const MethodInfo* method); */

void native_MG_BlocksEngine2_Block_BE2_BlockNoViewLayout__OnValidate_564834(long param_1)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  int iVar4;
  
  if ((bRam000000000133ea3a & 1) == 0) {
    native_sub_43273c(&
                      Method_MG_BlocksEngine2_Utils_BE2_ArrayUtils_Add_I_BE2_BlockSection____12e20a0
                     );
    native_sub_43273c(&Method_UnityEngine_Component_GetComponent_I_BE2_BlockSection____12e2a18);
    native_sub_43273c(&Method_UnityEngine_Component_GetComponent_RectTransform____12e2ad0);
    native_sub_43273c(&MG_BlocksEngine2_Block_I_BE2_BlockSection___TypeInfo_12d3220);
    bRam000000000133ea3a = 1;
  }
  uVar2 = native_UnityEngine_Component__GetComponent_ActiveAnimation__49daec
                    (param_1,_Method_UnityEngine_Component_GetComponent_RectTransform____12e2ad0);
  *(undefined8 *)(param_1 + 0x18) = uVar2;
  native_sub_4326e0(param_1 + 0x18);
  uVar2 = native_sub_432750(_MG_BlocksEngine2_Block_I_BE2_BlockSection___TypeInfo_12d3220,0);
  *(undefined8 *)(param_1 + 0x20) = uVar2;
  native_sub_4326e0(param_1 + 0x20,uVar2);
  lVar3 = native_UnityEngine_Component__get_transform_8da62c(param_1,0);
  if (lVar3 != 0) {
    iVar1 = native_UnityEngine_Transform__get_childCount_772a64(lVar3,0);
    if (0 < iVar1) {
      iVar4 = 0;
      do {
        lVar3 = native_UnityEngine_Component__get_transform_8da62c(param_1,0);
        if ((lVar3 == 0) ||
           (lVar3 = native_UnityEngine_Transform__GetChild_772ef0(lVar3,iVar4,0), lVar3 == 0))
        goto LAB_00564978;
        lVar3 = native_UnityEngine_Component__GetComponent_ActiveAnimation__49daec
                          (lVar3,
                           _Method_UnityEngine_Component_GetComponent_I_BE2_BlockSection____12e2a18)
        ;
        if (lVar3 != 0) {
          native_MG_BlocksEngine2_Utils_BE2_ArrayUtils__Add_GraphicRaycaster__49b428
                    (param_1 + 0x20,lVar3,
                     _Method_MG_BlocksEngine2_Utils_BE2_ArrayUtils_Add_I_BE2_BlockSection____12e20a0
                    );
        }
        iVar4 = iVar4 + 1;
      } while (iVar4 < iVar1);
    }
    return;
  }
LAB_00564978:
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* MG_BlocksEngine2.Block.BE2_BlockNoViewLayout$$Awake @ 0x564838
 * void MG_BlocksEngine2_Block_BE2_BlockNoViewLayout__Awake (MG_BlocksEngine2_Block_BE2_BlockNoViewLayout_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MG_BlocksEngine2.Block.BE2_BlockNoViewLayout$$Awake
   void MG_BlocksEngine2_Block_BE2_BlockNoViewLayout__Awake
   (MG_BlocksEngine2_Block_BE2_BlockNoViewLayout_o* __this, const MethodInfo* method); */

void native_MG_BlocksEngine2_Block_BE2_BlockNoViewLayout__Awake_564838(long param_1)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  int iVar4;
  
  if ((bRam000000000133ea3a & 1) == 0) {
    native_sub_43273c(&
                      Method_MG_BlocksEngine2_Utils_BE2_ArrayUtils_Add_I_BE2_BlockSection____12e20a0
                     );
    native_sub_43273c(&Method_UnityEngine_Component_GetComponent_I_BE2_BlockSection____12e2a18);
    native_sub_43273c(&Method_UnityEngine_Component_GetComponent_RectTransform____12e2ad0);
    native_sub_43273c(&MG_BlocksEngine2_Block_I_BE2_BlockSection___TypeInfo_12d3220);
    bRam000000000133ea3a = 1;
  }
  uVar2 = native_UnityEngine_Component__GetComponent_ActiveAnimation__49daec
                    (param_1,_Method_UnityEngine_Component_GetComponent_RectTransform____12e2ad0);
  *(undefined8 *)(param_1 + 0x18) = uVar2;
  native_sub_4326e0(param_1 + 0x18);
  uVar2 = native_sub_432750(_MG_BlocksEngine2_Block_I_BE2_BlockSection___TypeInfo_12d3220,0);
  *(undefined8 *)(param_1 + 0x20) = uVar2;
  native_sub_4326e0(param_1 + 0x20,uVar2);
  lVar3 = native_UnityEngine_Component__get_transform_8da62c(param_1,0);
  if (lVar3 != 0) {
    iVar1 = native_UnityEngine_Transform__get_childCount_772a64(lVar3,0);
    if (0 < iVar1) {
      iVar4 = 0;
      do {
        lVar3 = native_UnityEngine_Component__get_transform_8da62c(param_1,0);
        if ((lVar3 == 0) ||
           (lVar3 = native_UnityEngine_Transform__GetChild_772ef0(lVar3,iVar4,0), lVar3 == 0))
        goto LAB_00564978;
        lVar3 = native_UnityEngine_Component__GetComponent_ActiveAnimation__49daec
                          (lVar3,
                           _Method_UnityEngine_Component_GetComponent_I_BE2_BlockSection____12e2a18)
        ;
        if (lVar3 != 0) {
          native_MG_BlocksEngine2_Utils_BE2_ArrayUtils__Add_GraphicRaycaster__49b428
                    (param_1 + 0x20,lVar3,
                     _Method_MG_BlocksEngine2_Utils_BE2_ArrayUtils_Add_I_BE2_BlockSection____12e20a0
                    );
        }
        iVar4 = iVar4 + 1;
      } while (iVar4 < iVar1);
    }
    return;
  }
LAB_00564978:
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* MG_BlocksEngine2.Block.BE2_BlockNoViewLayout$$Initialize @ 0x56483c
 * void MG_BlocksEngine2_Block_BE2_BlockNoViewLayout__Initialize (MG_BlocksEngine2_Block_BE2_BlockNoViewLayout_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MG_BlocksEngine2.Block.BE2_BlockNoViewLayout$$Initialize
   void MG_BlocksEngine2_Block_BE2_BlockNoViewLayout__Initialize
   (MG_BlocksEngine2_Block_BE2_BlockNoViewLayout_o* __this, const MethodInfo* method); */

void native_MG_BlocksEngine2_Block_BE2_BlockNoViewLayout__Initialize_56483c(long param_1)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  int iVar4;
  
  if ((bRam000000000133ea3a & 1) == 0) {
    native_sub_43273c(&
                      Method_MG_BlocksEngine2_Utils_BE2_ArrayUtils_Add_I_BE2_BlockSection____12e20a0
                     );
    native_sub_43273c(&Method_UnityEngine_Component_GetComponent_I_BE2_BlockSection____12e2a18);
    native_sub_43273c(&Method_UnityEngine_Component_GetComponent_RectTransform____12e2ad0);
    native_sub_43273c(&MG_BlocksEngine2_Block_I_BE2_BlockSection___TypeInfo_12d3220);
    bRam000000000133ea3a = 1;
  }
  uVar2 = native_UnityEngine_Component__GetComponent_ActiveAnimation__49daec
                    (param_1,_Method_UnityEngine_Component_GetComponent_RectTransform____12e2ad0);
  *(undefined8 *)(param_1 + 0x18) = uVar2;
  native_sub_4326e0(param_1 + 0x18);
  uVar2 = native_sub_432750(_MG_BlocksEngine2_Block_I_BE2_BlockSection___TypeInfo_12d3220,0);
  *(undefined8 *)(param_1 + 0x20) = uVar2;
  native_sub_4326e0(param_1 + 0x20,uVar2);
  lVar3 = native_UnityEngine_Component__get_transform_8da62c(param_1,0);
  if (lVar3 != 0) {
    iVar1 = native_UnityEngine_Transform__get_childCount_772a64(lVar3,0);
    if (0 < iVar1) {
      iVar4 = 0;
      do {
        lVar3 = native_UnityEngine_Component__get_transform_8da62c(param_1,0);
        if ((lVar3 == 0) ||
           (lVar3 = native_UnityEngine_Transform__GetChild_772ef0(lVar3,iVar4,0), lVar3 == 0))
        goto LAB_00564978;
        lVar3 = native_UnityEngine_Component__GetComponent_ActiveAnimation__49daec
                          (lVar3,
                           _Method_UnityEngine_Component_GetComponent_I_BE2_BlockSection____12e2a18)
        ;
        if (lVar3 != 0) {
          native_MG_BlocksEngine2_Utils_BE2_ArrayUtils__Add_GraphicRaycaster__49b428
                    (param_1 + 0x20,lVar3,
                     _Method_MG_BlocksEngine2_Utils_BE2_ArrayUtils_Add_I_BE2_BlockSection____12e20a0
                    );
        }
        iVar4 = iVar4 + 1;
      } while (iVar4 < iVar1);
    }
    return;
  }
LAB_00564978:
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* MG_BlocksEngine2.Block.BE2_BlockNoViewLayout$$UpdateLayout @ 0x56497c
 * void MG_BlocksEngine2_Block_BE2_BlockNoViewLayout__UpdateLayout (MG_BlocksEngine2_Block_BE2_BlockNoViewLayout_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MG_BlocksEngine2.Block.BE2_BlockNoViewLayout$$UpdateLayout
   void MG_BlocksEngine2_Block_BE2_BlockNoViewLayout__UpdateLayout
   (MG_BlocksEngine2_Block_BE2_BlockNoViewLayout_o* __this, const MethodInfo* method); */

void native_MG_BlocksEngine2_Block_BE2_BlockNoViewLayout__UpdateLayout_56497c(long param_1)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  long lVar4;
  ulong uVar5;
  int *piVar6;
  long *plVar7;
  uint uVar8;
  
  if ((bRam000000000133ea3b & 1) == 0) {
    native_sub_43273c(&MG_BlocksEngine2_Block_I_BE2_BlockSection_TypeInfo_12d4de8);
    bRam000000000133ea3b = 1;
  }
  lVar4 = *(long *)(param_1 + 0x20);
  if (lVar4 != 0) {
    iVar1 = *(int *)(lVar4 + 0x18);
    if (iVar1 < 1) {
      return;
    }
    uVar8 = 0;
    do {
      if (*(uint *)(lVar4 + 0x18) <= uVar8) {
        uVar3 = native_sub_43283c();
                    /* WARNING: Subroutine does not return */
        native_sub_4327dc(uVar3,0);
      }
      plVar7 = *(long **)(lVar4 + (long)(int)uVar8 * 8 + 0x20);
      if (plVar7 == (long *)0x0) break;
      lVar4 = *plVar7;
      if ((ulong)*(ushort *)(lVar4 + 0x12a) != 0) {
        uVar5 = 0;
        piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
        do {
          if (*(long *)(piVar6 + -2) == _MG_BlocksEngine2_Block_I_BE2_BlockSection_TypeInfo_12d4de8)
          {
            puVar2 = (undefined8 *)(lVar4 + (long)(*piVar6 + 6) * 0x10 + 0x138);
            goto LAB_00564a44;
          }
          uVar5 = uVar5 + 1;
          piVar6 = piVar6 + 4;
        } while (uVar5 < *(ushort *)(lVar4 + 0x12a));
      }
      puVar2 = (undefined8 *)
               native_sub_3c9b34(plVar7,_MG_BlocksEngine2_Block_I_BE2_BlockSection_TypeInfo_12d4de8,
                                 6);
LAB_00564a44:
      (*(code *)*puVar2)(plVar7,puVar2[1]);
      uVar8 = uVar8 + 1;
      if (iVar1 <= (int)uVar8) {
        return;
      }
      lVar4 = *(long *)(param_1 + 0x20);
    } while (lVar4 != 0);
  }
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* MG_BlocksEngine2.Block.BE2_BlockNoViewLayout$$.ctor @ 0x564a88
 * void MG_BlocksEngine2_Block_BE2_BlockNoViewLayout___ctor (MG_BlocksEngine2_Block_BE2_BlockNoViewLayout_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MG_BlocksEngine2.Block.BE2_BlockNoViewLayout$$.ctor
   void MG_BlocksEngine2_Block_BE2_BlockNoViewLayout___ctor
   (MG_BlocksEngine2_Block_BE2_BlockNoViewLayout_o* __this, const MethodInfo* method); */

undefined1  [16] native_MG_BlocksEngine2_Block_BE2_BlockNoViewLayout___ctor_564a88(ulong param_1)

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


