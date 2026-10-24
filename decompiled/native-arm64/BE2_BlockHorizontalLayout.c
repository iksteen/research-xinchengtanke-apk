/* ARM64 IL2CPP native pseudocode from Ghidra.
 * Recovered implementation, not original C# source.
 * Function boundaries follow the IL2CPP method address table. */


/* MG_BlocksEngine2.Horizontal.Block.BE2_BlockHorizontalLayout$$get_RectTransform @ 0x564000
 * UnityEngine_RectTransform_o* MG_BlocksEngine2_Horizontal_Block_BE2_BlockHorizontalLayout__get_RectTransform (MG_BlocksEngine2_Horizontal_Block_BE2_BlockHorizontalLayout_o* __this, const MethodInfo* method); */

/* MG_BlocksEngine2.Horizontal.Block.BE2_BlockHorizontalLayout$$get_RectTransform
   UnityEngine_RectTransform_o*
   MG_BlocksEngine2_Horizontal_Block_BE2_BlockHorizontalLayout__get_RectTransform
   (MG_BlocksEngine2_Horizontal_Block_BE2_BlockHorizontalLayout_o* __this, const MethodInfo*
   method); */

undefined8
native_MG_BlocksEngine2_Horizontal_Block_BE2_BlockHorizontalLayout__get_RectTransform_564000
          (long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* MG_BlocksEngine2.Horizontal.Block.BE2_BlockHorizontalLayout$$set_RectTransform @ 0x564008
 * void MG_BlocksEngine2_Horizontal_Block_BE2_BlockHorizontalLayout__set_RectTransform (MG_BlocksEngine2_Horizontal_Block_BE2_BlockHorizontalLayout_o* __this, UnityEngine_RectTransform_o* value, const MethodInfo* method); */

/* MG_BlocksEngine2.Horizontal.Block.BE2_BlockHorizontalLayout$$set_RectTransform
   void MG_BlocksEngine2_Horizontal_Block_BE2_BlockHorizontalLayout__set_RectTransform
   (MG_BlocksEngine2_Horizontal_Block_BE2_BlockHorizontalLayout_o* __this,
   UnityEngine_RectTransform_o* value, const MethodInfo* method); */

void native_MG_BlocksEngine2_Horizontal_Block_BE2_BlockHorizontalLayout__set_RectTransform_564008
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



/* MG_BlocksEngine2.Horizontal.Block.BE2_BlockHorizontalLayout$$get_SectionsArray @ 0x564010
 * MG_BlocksEngine2_Block_I_BE2_BlockSection_array* MG_BlocksEngine2_Horizontal_Block_BE2_BlockHorizontalLayout__get_SectionsArray (MG_BlocksEngine2_Horizontal_Block_BE2_BlockHorizontalLayout_o* __this, const MethodInfo* method); */

/* MG_BlocksEngine2.Horizontal.Block.BE2_BlockHorizontalLayout$$get_SectionsArray
   MG_BlocksEngine2_Block_I_BE2_BlockSection_array*
   MG_BlocksEngine2_Horizontal_Block_BE2_BlockHorizontalLayout__get_SectionsArray
   (MG_BlocksEngine2_Horizontal_Block_BE2_BlockHorizontalLayout_o* __this, const MethodInfo*
   method); */

undefined8
native_MG_BlocksEngine2_Horizontal_Block_BE2_BlockHorizontalLayout__get_SectionsArray_564010
          (long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* MG_BlocksEngine2.Horizontal.Block.BE2_BlockHorizontalLayout$$get_Color @ 0x564018
 * UnityEngine_Color_o MG_BlocksEngine2_Horizontal_Block_BE2_BlockHorizontalLayout__get_Color (MG_BlocksEngine2_Horizontal_Block_BE2_BlockHorizontalLayout_o* __this, const MethodInfo* method); */

/* MG_BlocksEngine2.Horizontal.Block.BE2_BlockHorizontalLayout$$get_Color
   UnityEngine_Color_o MG_BlocksEngine2_Horizontal_Block_BE2_BlockHorizontalLayout__get_Color
   (MG_BlocksEngine2_Horizontal_Block_BE2_BlockHorizontalLayout_o* __this, const MethodInfo*
   method); */

undefined4
native_MG_BlocksEngine2_Horizontal_Block_BE2_BlockHorizontalLayout__get_Color_564018(long param_1)

{
  return *(undefined4 *)(param_1 + 0x18);
}



/* MG_BlocksEngine2.Horizontal.Block.BE2_BlockHorizontalLayout$$set_Color @ 0x564024
 * void MG_BlocksEngine2_Horizontal_Block_BE2_BlockHorizontalLayout__set_Color (MG_BlocksEngine2_Horizontal_Block_BE2_BlockHorizontalLayout_o* __this, UnityEngine_Color_o value, const MethodInfo* method); */

/* MG_BlocksEngine2.Horizontal.Block.BE2_BlockHorizontalLayout$$set_Color
   void MG_BlocksEngine2_Horizontal_Block_BE2_BlockHorizontalLayout__set_Color
   (MG_BlocksEngine2_Horizontal_Block_BE2_BlockHorizontalLayout_o* __this, UnityEngine_Color_o
   value, const MethodInfo* method); */

void native_MG_BlocksEngine2_Horizontal_Block_BE2_BlockHorizontalLayout__set_Color_564024
               (undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
               long param_5)

{
  *(undefined4 *)(param_5 + 0x18) = param_1;
  *(undefined4 *)(param_5 + 0x1c) = param_2;
  *(undefined4 *)(param_5 + 0x20) = param_3;
  *(undefined4 *)(param_5 + 0x24) = param_4;
  return;
}



/* MG_BlocksEngine2.Horizontal.Block.BE2_BlockHorizontalLayout$$get_Size @ 0x564030
 * UnityEngine_Vector2_o MG_BlocksEngine2_Horizontal_Block_BE2_BlockHorizontalLayout__get_Size (MG_BlocksEngine2_Horizontal_Block_BE2_BlockHorizontalLayout_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MG_BlocksEngine2.Horizontal.Block.BE2_BlockHorizontalLayout$$get_Size
   UnityEngine_Vector2_o MG_BlocksEngine2_Horizontal_Block_BE2_BlockHorizontalLayout__get_Size
   (MG_BlocksEngine2_Horizontal_Block_BE2_BlockHorizontalLayout_o* __this, const MethodInfo*
   method); */

undefined1  [16]
native_MG_BlocksEngine2_Horizontal_Block_BE2_BlockHorizontalLayout__get_Size_564030(long param_1)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  long lVar4;
  ulong uVar5;
  int *piVar6;
  long *plVar7;
  uint uVar8;
  float fVar9;
  undefined1 auVar10 [16];
  ulong uVar11;
  
  if ((bRam000000000133ea34 & 1) == 0) {
    native_sub_43273c(&MG_BlocksEngine2_Block_I_BE2_BlockSection_TypeInfo_12d4de8);
    bRam000000000133ea34 = 1;
  }
  auVar10 = native_UnityEngine_Vector2__get_zero_765ef0(0);
  uVar11 = auVar10._0_8_;
  lVar4 = *(long *)(param_1 + 0x30);
  if (lVar4 != 0) {
    iVar1 = *(int *)(lVar4 + 0x18);
    if (iVar1 < 1) {
      return auVar10;
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
            puVar2 = (undefined8 *)(lVar4 + (long)(*piVar6 + 3) * 0x10 + 0x138);
            goto LAB_00564108;
          }
          uVar5 = uVar5 + 1;
          piVar6 = piVar6 + 4;
        } while (uVar5 < *(ushort *)(lVar4 + 0x12a));
      }
      puVar2 = (undefined8 *)
               native_sub_3c9b34(plVar7,_MG_BlocksEngine2_Block_I_BE2_BlockSection_TypeInfo_12d4de8,
                                 3);
LAB_00564108:
      (*(code *)*puVar2)(plVar7,puVar2[1]);
      lVar4 = *plVar7;
      if ((ulong)*(ushort *)(lVar4 + 0x12a) != 0) {
        uVar5 = 0;
        piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
        do {
          if (*(long *)(piVar6 + -2) == _MG_BlocksEngine2_Block_I_BE2_BlockSection_TypeInfo_12d4de8)
          {
            puVar2 = (undefined8 *)(lVar4 + (long)(*piVar6 + 3) * 0x10 + 0x138);
            goto LAB_00564170;
          }
          uVar5 = uVar5 + 1;
          piVar6 = piVar6 + 4;
        } while (uVar5 < *(ushort *)(lVar4 + 0x12a));
      }
      puVar2 = (undefined8 *)
               native_sub_3c9b34(plVar7,_MG_BlocksEngine2_Block_I_BE2_BlockSection_TypeInfo_12d4de8,
                                 3);
LAB_00564170:
      fVar9 = (float)(*(code *)*puVar2)(plVar7,puVar2[1]);
      uVar8 = uVar8 + 1;
      uVar11 = CONCAT44(0,(float)uVar11 + fVar9);
      auVar10._8_8_ = 0;
      auVar10._0_8_ = uVar11;
      if (iVar1 <= (int)uVar8) {
        return auVar10;
      }
      lVar4 = *(long *)(param_1 + 0x30);
    } while (lVar4 != 0);
  }
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* MG_BlocksEngine2.Horizontal.Block.BE2_BlockHorizontalLayout$$OnValidate @ 0x5641c8
 * void MG_BlocksEngine2_Horizontal_Block_BE2_BlockHorizontalLayout__OnValidate (MG_BlocksEngine2_Horizontal_Block_BE2_BlockHorizontalLayout_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MG_BlocksEngine2.Horizontal.Block.BE2_BlockHorizontalLayout$$OnValidate
   void MG_BlocksEngine2_Horizontal_Block_BE2_BlockHorizontalLayout__OnValidate
   (MG_BlocksEngine2_Horizontal_Block_BE2_BlockHorizontalLayout_o* __this, const MethodInfo*
   method); */

void native_MG_BlocksEngine2_Horizontal_Block_BE2_BlockHorizontalLayout__OnValidate_5641c8
               (long param_1)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  int iVar4;
  
  if ((bRam000000000133ea38 & 1) == 0) {
    native_sub_43273c(&
                      Method_MG_BlocksEngine2_Utils_BE2_ArrayUtils_Add_I_BE2_BlockSection____12e20a0
                     );
    native_sub_43273c(&Method_UnityEngine_Component_GetComponent_I_BE2_BlockSection____12e2a18);
    native_sub_43273c(&Method_UnityEngine_Component_GetComponent_RectTransform____12e2ad0);
    native_sub_43273c(&MG_BlocksEngine2_Block_I_BE2_BlockSection___TypeInfo_12d3220);
    bRam000000000133ea38 = 1;
  }
  uVar2 = native_UnityEngine_Component__GetComponent_ActiveAnimation__49daec
                    (param_1,_Method_UnityEngine_Component_GetComponent_RectTransform____12e2ad0);
  *(undefined8 *)(param_1 + 0x28) = uVar2;
  native_sub_4326e0(param_1 + 0x28);
  uVar2 = native_sub_432750(_MG_BlocksEngine2_Block_I_BE2_BlockSection___TypeInfo_12d3220,0);
  *(undefined8 *)(param_1 + 0x30) = uVar2;
  native_sub_4326e0(param_1 + 0x30,uVar2);
  lVar3 = native_UnityEngine_Component__get_transform_8da62c(param_1,0);
  if (lVar3 != 0) {
    iVar1 = native_UnityEngine_Transform__get_childCount_772a64(lVar3,0);
    if (0 < iVar1) {
      iVar4 = 0;
      do {
        lVar3 = native_UnityEngine_Component__get_transform_8da62c(param_1,0);
        if ((lVar3 == 0) ||
           (lVar3 = native_UnityEngine_Transform__GetChild_772ef0(lVar3,iVar4,0), lVar3 == 0))
        goto LAB_0056430c;
        lVar3 = native_UnityEngine_Component__GetComponent_ActiveAnimation__49daec
                          (lVar3,
                           _Method_UnityEngine_Component_GetComponent_I_BE2_BlockSection____12e2a18)
        ;
        if (lVar3 != 0) {
          native_MG_BlocksEngine2_Utils_BE2_ArrayUtils__Add_GraphicRaycaster__49b428
                    (param_1 + 0x30,lVar3,
                     _Method_MG_BlocksEngine2_Utils_BE2_ArrayUtils_Add_I_BE2_BlockSection____12e20a0
                    );
        }
        iVar4 = iVar4 + 1;
      } while (iVar4 < iVar1);
    }
    return;
  }
LAB_0056430c:
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* MG_BlocksEngine2.Horizontal.Block.BE2_BlockHorizontalLayout$$Awake @ 0x5641cc
 * void MG_BlocksEngine2_Horizontal_Block_BE2_BlockHorizontalLayout__Awake (MG_BlocksEngine2_Horizontal_Block_BE2_BlockHorizontalLayout_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MG_BlocksEngine2.Horizontal.Block.BE2_BlockHorizontalLayout$$Awake
   void MG_BlocksEngine2_Horizontal_Block_BE2_BlockHorizontalLayout__Awake
   (MG_BlocksEngine2_Horizontal_Block_BE2_BlockHorizontalLayout_o* __this, const MethodInfo*
   method); */

void native_MG_BlocksEngine2_Horizontal_Block_BE2_BlockHorizontalLayout__Awake_5641cc(long param_1)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  int iVar4;
  
  if ((bRam000000000133ea38 & 1) == 0) {
    native_sub_43273c(&
                      Method_MG_BlocksEngine2_Utils_BE2_ArrayUtils_Add_I_BE2_BlockSection____12e20a0
                     );
    native_sub_43273c(&Method_UnityEngine_Component_GetComponent_I_BE2_BlockSection____12e2a18);
    native_sub_43273c(&Method_UnityEngine_Component_GetComponent_RectTransform____12e2ad0);
    native_sub_43273c(&MG_BlocksEngine2_Block_I_BE2_BlockSection___TypeInfo_12d3220);
    bRam000000000133ea38 = 1;
  }
  uVar2 = native_UnityEngine_Component__GetComponent_ActiveAnimation__49daec
                    (param_1,_Method_UnityEngine_Component_GetComponent_RectTransform____12e2ad0);
  *(undefined8 *)(param_1 + 0x28) = uVar2;
  native_sub_4326e0(param_1 + 0x28);
  uVar2 = native_sub_432750(_MG_BlocksEngine2_Block_I_BE2_BlockSection___TypeInfo_12d3220,0);
  *(undefined8 *)(param_1 + 0x30) = uVar2;
  native_sub_4326e0(param_1 + 0x30,uVar2);
  lVar3 = native_UnityEngine_Component__get_transform_8da62c(param_1,0);
  if (lVar3 != 0) {
    iVar1 = native_UnityEngine_Transform__get_childCount_772a64(lVar3,0);
    if (0 < iVar1) {
      iVar4 = 0;
      do {
        lVar3 = native_UnityEngine_Component__get_transform_8da62c(param_1,0);
        if ((lVar3 == 0) ||
           (lVar3 = native_UnityEngine_Transform__GetChild_772ef0(lVar3,iVar4,0), lVar3 == 0))
        goto LAB_0056430c;
        lVar3 = native_UnityEngine_Component__GetComponent_ActiveAnimation__49daec
                          (lVar3,
                           _Method_UnityEngine_Component_GetComponent_I_BE2_BlockSection____12e2a18)
        ;
        if (lVar3 != 0) {
          native_MG_BlocksEngine2_Utils_BE2_ArrayUtils__Add_GraphicRaycaster__49b428
                    (param_1 + 0x30,lVar3,
                     _Method_MG_BlocksEngine2_Utils_BE2_ArrayUtils_Add_I_BE2_BlockSection____12e20a0
                    );
        }
        iVar4 = iVar4 + 1;
      } while (iVar4 < iVar1);
    }
    return;
  }
LAB_0056430c:
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* MG_BlocksEngine2.Horizontal.Block.BE2_BlockHorizontalLayout$$Start @ 0x564310
 * void MG_BlocksEngine2_Horizontal_Block_BE2_BlockHorizontalLayout__Start (MG_BlocksEngine2_Horizontal_Block_BE2_BlockHorizontalLayout_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MG_BlocksEngine2.Horizontal.Block.BE2_BlockHorizontalLayout$$Start
   void MG_BlocksEngine2_Horizontal_Block_BE2_BlockHorizontalLayout__Start
   (MG_BlocksEngine2_Horizontal_Block_BE2_BlockHorizontalLayout_o* __this, const MethodInfo*
   method); */

void native_MG_BlocksEngine2_Horizontal_Block_BE2_BlockHorizontalLayout__Start_564310(long param_1)

{
  long lVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  
  if ((bRam000000000133ea35 & 1) == 0) {
    native_sub_43273c(&UnityEngine_UI_LayoutRebuilder_TypeInfo_12d4ff8);
    bRam000000000133ea35 = 1;
  }
  if (*(long *)(param_1 + 0x28) == 0) {
                    /* WARNING: Subroutine does not return */
    native_sub_432810();
  }
  native_UnityEngine_RectTransform__set_pivot_765158(0,0x3f800000,*(long *)(param_1 + 0x28),0);
  uVar3 = native_MG_BlocksEngine2_Horizontal_Block_BE2_BlockHorizontalLayout__C_UpdateLayout_564750
                    (param_1);
  native_UnityEngine_MonoBehaviour__StartCoroutine_8e9174(param_1,uVar3,0);
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  if (((*(byte *)(_UnityEngine_UI_LayoutRebuilder_TypeInfo_12d4ff8 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_UI_LayoutRebuilder_TypeInfo_12d4ff8 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  if ((bRam0000000001341d72 & 1) == 0) {
    native_sub_43273c(&UnityEngine_UI_LayoutRebuilder_TypeInfo_12d4ff8,0);
    native_sub_43273c(&Method_UnityEngine_UI_ObjectPool_LayoutRebuilder__Get___12ddaa8);
    native_sub_43273c(&Method_UnityEngine_UI_ObjectPool_LayoutRebuilder__Release___12ddab0);
    bRam0000000001341d72 = 1;
  }
  if (((*(byte *)(_UnityEngine_UI_LayoutRebuilder_TypeInfo_12d4ff8 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_UI_LayoutRebuilder_TypeInfo_12d4ff8 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  if ((**(long **)(_UnityEngine_UI_LayoutRebuilder_TypeInfo_12d4ff8 + 0xb8) != 0) &&
     (lVar4 = native_UnityEngine_UI_ObjectPool_List_IEventSystemHandler____Get_abf1bc
                        (**(long **)(_UnityEngine_UI_LayoutRebuilder_TypeInfo_12d4ff8 + 0xb8),
                         _Method_UnityEngine_UI_ObjectPool_LayoutRebuilder__Get___12ddaa8),
     lVar4 != 0)) {
    native_UnityEngine_UI_LayoutRebuilder__Initialize_a7c8c8(lVar4,uVar3);
    native_UnityEngine_UI_LayoutRebuilder__Rebuild_a7cd88(lVar4,1);
    lVar1 = _Method_UnityEngine_UI_ObjectPool_LayoutRebuilder__Release___12ddab0;
    lVar5 = **(long **)(_UnityEngine_UI_LayoutRebuilder_TypeInfo_12d4ff8 + 0xb8);
    if (lVar5 != 0) {
      if ((bRam0000000001341f09 & 1) == 0) {
        native_sub_43273c(&UnityEngine_Debug_TypeInfo_12d4338);
        native_sub_43273c(&
                          StringLiteral_Internal_error__Trying_to_destroy_object_that_is_already_released_to_pool__12ee9b0
                         );
        bRam0000000001341f09 = 1;
      }
      if (*(long *)(lVar5 + 0x10) != 0) {
        iVar2 = (*(code *)**(undefined8 **)(*(long *)(*(long *)(lVar1 + 0x18) + 0xc0) + 0x10))();
        if (0 < iVar2) {
          if (*(long *)(lVar5 + 0x10) == 0) goto code_r0x00abf3ac;
          lVar6 = (*(code *)**(undefined8 **)(*(long *)(*(long *)(lVar1 + 0x18) + 0xc0) + 0x48))();
          if (lVar6 == lVar4) {
            if (((*(byte *)(_UnityEngine_Debug_TypeInfo_12d4338 + 0x133) >> 2 & 1) != 0) &&
               (*(int *)(_UnityEngine_Debug_TypeInfo_12d4338 + 0xe0) == 0)) {
              native_sub_4327ec();
            }
            native_UnityEngine_Debug__LogError_8dc5cc
                      (_StringLiteral_Internal_error__Trying_to_destroy_object_that_is_already_released_to_pool__12ee9b0
                       ,0);
          }
        }
        if (*(long *)(lVar5 + 0x20) != 0) {
          (*(code *)**(undefined8 **)(*(long *)(*(long *)(lVar1 + 0x18) + 0xc0) + 0x40))
                    (*(long *)(lVar5 + 0x20),lVar4);
        }
        if (*(long *)(lVar5 + 0x10) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00abf3a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*(code *)**(undefined8 **)(*(long *)(*(long *)(lVar1 + 0x18) + 0xc0) + 0x58))
                    (*(long *)(lVar5 + 0x10),lVar4);
          return;
        }
      }
code_r0x00abf3ac:
                    /* WARNING: Subroutine does not return */
      native_sub_432810();
    }
  }
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* MG_BlocksEngine2.Horizontal.Block.BE2_BlockHorizontalLayout$$OnEnable @ 0x5643d8
 * void MG_BlocksEngine2_Horizontal_Block_BE2_BlockHorizontalLayout__OnEnable (MG_BlocksEngine2_Horizontal_Block_BE2_BlockHorizontalLayout_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MG_BlocksEngine2.Horizontal.Block.BE2_BlockHorizontalLayout$$OnEnable
   void MG_BlocksEngine2_Horizontal_Block_BE2_BlockHorizontalLayout__OnEnable
   (MG_BlocksEngine2_Horizontal_Block_BE2_BlockHorizontalLayout_o* __this, const MethodInfo*
   method); */

void native_MG_BlocksEngine2_Horizontal_Block_BE2_BlockHorizontalLayout__OnEnable_5643d8
               (long *param_1)

{
  long lVar1;
  undefined8 uVar2;
  ulong uVar3;
  undefined8 *puVar4;
  uint uVar5;
  long lVar6;
  
  if ((bRam000000000133ea36 & 1) == 0) {
    native_sub_43273c(&UnityEngine_Events_UnityAction_TypeInfo_12d65d0);
    bRam000000000133ea36 = 1;
  }
  lVar1 = native_MG_BlocksEngine2_Core_BE2_ExecutionManager__get_Instance_564464();
  uVar2 = native_sub_432808(_UnityEngine_Events_UnityAction_TypeInfo_12d65d0);
  if ((param_1 == (long *)0x0) ||
     (native_UnityEngine_Events_UnityAction___ctor_773130
                (uVar2,param_1,*(undefined8 *)(*param_1 + 0x1e0),0), lVar1 == 0)) {
                    /* WARNING: Subroutine does not return */
    native_sub_432810();
  }
  if ((bRam000000000133eafe & 1) == 0) {
    native_sub_43273c(&Method_System_Collections_Generic_List_UnityAction__Add___12dd490);
    native_sub_43273c(&Method_System_Collections_Generic_List_UnityAction__Contains___12dd498);
    bRam000000000133eafe = 1;
  }
  if (*(long *)(lVar1 + 0x40) != 0) {
    uVar3 = native_System_Collections_Generic_List_BE2_UI_SelectionPanel___Contains_d40ec8
                      (*(long *)(lVar1 + 0x40),uVar2,
                       _Method_System_Collections_Generic_List_UnityAction__Contains___12dd498);
    if ((uVar3 & 1) != 0) {
      return;
    }
    if (*(long *)(lVar1 + 0x50) != 0) {
      native_UnityEngine_Events_UnityEvent__AddListener_7734bc(*(long *)(lVar1 + 0x50),uVar2,0);
      lVar1 = *(long *)(lVar1 + 0x40);
      if (lVar1 != 0) {
        lVar6 = *(long *)(lVar1 + 0x10);
        if (lVar6 != 0) {
          uVar5 = *(uint *)(lVar1 + 0x18);
          if (uVar5 == *(uint *)(lVar6 + 0x18)) {
            (*(code *)**(undefined8 **)
                        (*(long *)(*(long *)(
                                            _Method_System_Collections_Generic_List_UnityAction__Add___12dd490
                                            + 0x18) + 0xc0) + 0x60))(lVar1,uVar5 + 1);
            uVar5 = *(uint *)(lVar1 + 0x18);
            lVar6 = *(long *)(lVar1 + 0x10);
            *(uint *)(lVar1 + 0x18) = uVar5 + 1;
            if (lVar6 == 0) goto code_r0x00d40c5c;
          }
          else {
            *(uint *)(lVar1 + 0x18) = uVar5 + 1;
          }
          if (uVar5 < *(uint *)(lVar6 + 0x18)) {
            puVar4 = (undefined8 *)(lVar6 + (long)(int)uVar5 * 8 + 0x20);
            *puVar4 = uVar2;
            native_sub_4326e0(puVar4,uVar2);
            *(int *)(lVar1 + 0x1c) = *(int *)(lVar1 + 0x1c) + 1;
            return;
          }
          uVar2 = native_sub_43283c();
                    /* WARNING: Subroutine does not return */
          native_sub_4327dc(uVar2,0);
        }
code_r0x00d40c5c:
                    /* WARNING: Subroutine does not return */
        native_sub_432810();
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* MG_BlocksEngine2.Horizontal.Block.BE2_BlockHorizontalLayout$$OnDisable @ 0x564604
 * void MG_BlocksEngine2_Horizontal_Block_BE2_BlockHorizontalLayout__OnDisable (MG_BlocksEngine2_Horizontal_Block_BE2_BlockHorizontalLayout_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MG_BlocksEngine2.Horizontal.Block.BE2_BlockHorizontalLayout$$OnDisable
   void MG_BlocksEngine2_Horizontal_Block_BE2_BlockHorizontalLayout__OnDisable
   (MG_BlocksEngine2_Horizontal_Block_BE2_BlockHorizontalLayout_o* __this, const MethodInfo*
   method); */

ulong native_MG_BlocksEngine2_Horizontal_Block_BE2_BlockHorizontalLayout__OnDisable_564604
                (long *param_1)

{
  long lVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  ulong uVar5;
  
  if ((bRam000000000133ea37 & 1) == 0) {
    native_sub_43273c(&UnityEngine_Events_UnityAction_TypeInfo_12d65d0);
    bRam000000000133ea37 = 1;
  }
  lVar3 = native_MG_BlocksEngine2_Core_BE2_ExecutionManager__get_Instance_564464();
  if (lVar3 == 0) {
    return 0;
  }
  uVar4 = native_sub_432808(_UnityEngine_Events_UnityAction_TypeInfo_12d65d0);
  if (param_1 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    native_sub_432810();
  }
  native_UnityEngine_Events_UnityAction___ctor_773130
            (uVar4,param_1,*(undefined8 *)(*param_1 + 0x1e0),0);
  if ((bRam000000000133eaff & 1) == 0) {
    native_sub_43273c(&Method_System_Collections_Generic_List_UnityAction__Contains___12dd498);
    native_sub_43273c(&Method_System_Collections_Generic_List_UnityAction__Remove___12dd4a0);
    bRam000000000133eaff = 1;
  }
  if (*(long *)(lVar3 + 0x40) != 0) {
    uVar5 = native_System_Collections_Generic_List_BE2_UI_SelectionPanel___Contains_d40ec8
                      (*(long *)(lVar3 + 0x40),uVar4,
                       _Method_System_Collections_Generic_List_UnityAction__Contains___12dd498);
    if ((uVar5 & 1) == 0) {
      return uVar5;
    }
    if (*(long *)(lVar3 + 0x50) != 0) {
      native_UnityEngine_Events_UnityEvent__RemoveListener_773574(*(long *)(lVar3 + 0x50),uVar4,0);
      lVar1 = _Method_System_Collections_Generic_List_UnityAction__Remove___12dd4a0;
      lVar3 = *(long *)(lVar3 + 0x40);
      if (lVar3 != 0) {
        if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
          native_sub_432810(0,uVar4);
        }
        iVar2 = (*(code *)**(undefined8 **)
                            (*(long *)(*(long *)(
                                                _Method_System_Collections_Generic_List_UnityAction__Remove___12dd4a0
                                                + 0x18) + 0xc0) + 0xd8))();
        if (-1 < iVar2) {
          (*(code *)**(undefined8 **)(*(long *)(*(long *)(lVar1 + 0x18) + 0xc0) + 0xe8))
                    (lVar3,iVar2);
        }
        return (ulong)(-1 < iVar2);
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* MG_BlocksEngine2.Horizontal.Block.BE2_BlockHorizontalLayout$$Initialize @ 0x5641d0
 * void MG_BlocksEngine2_Horizontal_Block_BE2_BlockHorizontalLayout__Initialize (MG_BlocksEngine2_Horizontal_Block_BE2_BlockHorizontalLayout_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MG_BlocksEngine2.Horizontal.Block.BE2_BlockHorizontalLayout$$Initialize
   void MG_BlocksEngine2_Horizontal_Block_BE2_BlockHorizontalLayout__Initialize
   (MG_BlocksEngine2_Horizontal_Block_BE2_BlockHorizontalLayout_o* __this, const MethodInfo*
   method); */

void native_MG_BlocksEngine2_Horizontal_Block_BE2_BlockHorizontalLayout__Initialize_5641d0
               (long param_1)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  int iVar4;
  
  if ((bRam000000000133ea38 & 1) == 0) {
    native_sub_43273c(&
                      Method_MG_BlocksEngine2_Utils_BE2_ArrayUtils_Add_I_BE2_BlockSection____12e20a0
                     );
    native_sub_43273c(&Method_UnityEngine_Component_GetComponent_I_BE2_BlockSection____12e2a18);
    native_sub_43273c(&Method_UnityEngine_Component_GetComponent_RectTransform____12e2ad0);
    native_sub_43273c(&MG_BlocksEngine2_Block_I_BE2_BlockSection___TypeInfo_12d3220);
    bRam000000000133ea38 = 1;
  }
  uVar2 = native_UnityEngine_Component__GetComponent_ActiveAnimation__49daec
                    (param_1,_Method_UnityEngine_Component_GetComponent_RectTransform____12e2ad0);
  *(undefined8 *)(param_1 + 0x28) = uVar2;
  native_sub_4326e0(param_1 + 0x28);
  uVar2 = native_sub_432750(_MG_BlocksEngine2_Block_I_BE2_BlockSection___TypeInfo_12d3220,0);
  *(undefined8 *)(param_1 + 0x30) = uVar2;
  native_sub_4326e0(param_1 + 0x30,uVar2);
  lVar3 = native_UnityEngine_Component__get_transform_8da62c(param_1,0);
  if (lVar3 != 0) {
    iVar1 = native_UnityEngine_Transform__get_childCount_772a64(lVar3,0);
    if (0 < iVar1) {
      iVar4 = 0;
      do {
        lVar3 = native_UnityEngine_Component__get_transform_8da62c(param_1,0);
        if ((lVar3 == 0) ||
           (lVar3 = native_UnityEngine_Transform__GetChild_772ef0(lVar3,iVar4,0), lVar3 == 0))
        goto LAB_0056430c;
        lVar3 = native_UnityEngine_Component__GetComponent_ActiveAnimation__49daec
                          (lVar3,
                           _Method_UnityEngine_Component_GetComponent_I_BE2_BlockSection____12e2a18)
        ;
        if (lVar3 != 0) {
          native_MG_BlocksEngine2_Utils_BE2_ArrayUtils__Add_GraphicRaycaster__49b428
                    (param_1 + 0x30,lVar3,
                     _Method_MG_BlocksEngine2_Utils_BE2_ArrayUtils_Add_I_BE2_BlockSection____12e20a0
                    );
        }
        iVar4 = iVar4 + 1;
      } while (iVar4 < iVar1);
    }
    return;
  }
LAB_0056430c:
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* MG_BlocksEngine2.Horizontal.Block.BE2_BlockHorizontalLayout$$UpdateLayout @ 0x5643ac
 * void MG_BlocksEngine2_Horizontal_Block_BE2_BlockHorizontalLayout__UpdateLayout (MG_BlocksEngine2_Horizontal_Block_BE2_BlockHorizontalLayout_o* __this, const MethodInfo* method); */

/* MG_BlocksEngine2.Horizontal.Block.BE2_BlockHorizontalLayout$$UpdateLayout
   void MG_BlocksEngine2_Horizontal_Block_BE2_BlockHorizontalLayout__UpdateLayout
   (MG_BlocksEngine2_Horizontal_Block_BE2_BlockHorizontalLayout_o* __this, const MethodInfo*
   method); */

void native_MG_BlocksEngine2_Horizontal_Block_BE2_BlockHorizontalLayout__UpdateLayout_5643ac
               (undefined8 param_1)

{
  long lVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  lVar1 = native_MG_BlocksEngine2_Horizontal_Block_BE2_BlockHorizontalLayout__C_UpdateLayout_564750
                    ();
  if (lVar1 == 0) {
    native_sub_432740(&System_NullReferenceException_TypeInfo_12d5498,0,0);
    uVar3 = native_sub_432808();
    uVar4 = native_sub_432740(&StringLiteral_routine_is_null_12f5ec0);
    native_System_NullReferenceException___ctor_ad2894(uVar3,uVar4,0);
  }
  else {
    if (pcRam0000000001340fe8 == (code *)0x0) {
      pcRam0000000001340fe8 = (code *)native_sub_4326f0(&UNK_00e2f589);
    }
    uVar2 = (*pcRam0000000001340fe8)(param_1);
    if ((uVar2 & 1) != 0) {
      if (pcRam0000000001340ff8 == (code *)0x0) {
        pcRam0000000001340ff8 = (code *)native_sub_4326f0(&UNK_00e2f61c);
      }
                    /* WARNING: Could not recover jumptable at 0x008e91f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*pcRam0000000001340ff8)(param_1,lVar1);
      return;
    }
    native_sub_432740(&System_ArgumentException_TypeInfo_12d3800);
    uVar3 = native_sub_432808();
    uVar4 = native_sub_432740(&
                              StringLiteral_Coroutines_can_only_be_stopped_on_a_MonoBehaviour_12ed328
                             );
    native_System_ArgumentException___ctor_953858(uVar3,uVar4,0);
  }
  uVar4 = native_sub_432740(&Method_UnityEngine_MonoBehaviour_StartCoroutine___12e55d8);
                    /* WARNING: Subroutine does not return */
  native_sub_4327dc(uVar3,uVar4);
}



/* MG_BlocksEngine2.Horizontal.Block.BE2_BlockHorizontalLayout$$C_UpdateLayout @ 0x564750
 * System_Collections_IEnumerator_o* MG_BlocksEngine2_Horizontal_Block_BE2_BlockHorizontalLayout__C_UpdateLayout (MG_BlocksEngine2_Horizontal_Block_BE2_BlockHorizontalLayout_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MG_BlocksEngine2.Horizontal.Block.BE2_BlockHorizontalLayout$$C_UpdateLayout
   System_Collections_IEnumerator_o*
   MG_BlocksEngine2_Horizontal_Block_BE2_BlockHorizontalLayout__C_UpdateLayout
   (MG_BlocksEngine2_Horizontal_Block_BE2_BlockHorizontalLayout_o* __this, const MethodInfo*
   method); */

long native_MG_BlocksEngine2_Horizontal_Block_BE2_BlockHorizontalLayout__C_UpdateLayout_564750
               (undefined8 param_1)

{
  long lVar1;
  
  if ((bRam000000000133ea39 & 1) == 0) {
    native_sub_43273c(&
                      MG_BlocksEngine2_Horizontal_Block_BE2_BlockHorizontalLayout__C_UpdateLayout_d__20_TypeInfo_12d6fb0
                     );
    bRam000000000133ea39 = 1;
  }
  lVar1 = native_sub_432808(
                           _MG_BlocksEngine2_Horizontal_Block_BE2_BlockHorizontalLayout__C_UpdateLayout_d__20_TypeInfo_12d6fb0
                           );
  native_MG_BlocksEngine2_Horizontal_Block_BE2_BlockHorizontalLayout__C_UpdateLayout_d__20___ctor_950064
            (lVar1,0,0);
  if (lVar1 != 0) {
    *(undefined8 *)(lVar1 + 0x20) = param_1;
    native_sub_4326e0((undefined8 *)(lVar1 + 0x20),param_1);
    return lVar1;
  }
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* MG_BlocksEngine2.Horizontal.Block.BE2_BlockHorizontalLayout$$.ctor @ 0x5647c8
 * void MG_BlocksEngine2_Horizontal_Block_BE2_BlockHorizontalLayout___ctor (MG_BlocksEngine2_Horizontal_Block_BE2_BlockHorizontalLayout_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MG_BlocksEngine2.Horizontal.Block.BE2_BlockHorizontalLayout$$.ctor
   void MG_BlocksEngine2_Horizontal_Block_BE2_BlockHorizontalLayout___ctor
   (MG_BlocksEngine2_Horizontal_Block_BE2_BlockHorizontalLayout_o* __this, const MethodInfo*
   method); */

undefined1  [16]
native_MG_BlocksEngine2_Horizontal_Block_BE2_BlockHorizontalLayout___ctor_5647c8
          (undefined1 param_1 [16],undefined4 param_2,undefined4 param_3,undefined4 param_4,
          ulong param_5)

{
  undefined4 uVar1;
  undefined1 auVar2 [16];
  
  uVar1 = native_UnityEngine_Color__get_white_8d9e10(0);
  *(undefined4 *)(param_5 + 0x18) = uVar1;
  *(undefined4 *)(param_5 + 0x1c) = param_2;
  *(undefined4 *)(param_5 + 0x20) = param_3;
  *(undefined4 *)(param_5 + 0x24) = param_4;
  if ((bRam0000000001340ae0 & 1) == 0) {
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0,0);
    bRam0000000001340ae0 = 1;
  }
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  auVar2._8_8_ = 0;
  auVar2._0_8_ = param_5;
  return auVar2;
}


