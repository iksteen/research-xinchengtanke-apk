/* ARM64 IL2CPP native pseudocode from Ghidra.
 * Recovered implementation, not original C# source.
 * Function boundaries follow the IL2CPP method address table. */


/* MG_BlocksEngine2.Block.BE2_BlockVerticalLayout$$get_RectTransform @ 0x5700fc
 * UnityEngine_RectTransform_o* MG_BlocksEngine2_Block_BE2_BlockVerticalLayout__get_RectTransform (MG_BlocksEngine2_Block_BE2_BlockVerticalLayout_o* __this, const MethodInfo* method); */

/* MG_BlocksEngine2.Block.BE2_BlockVerticalLayout$$get_RectTransform
   UnityEngine_RectTransform_o* MG_BlocksEngine2_Block_BE2_BlockVerticalLayout__get_RectTransform
   (MG_BlocksEngine2_Block_BE2_BlockVerticalLayout_o* __this, const MethodInfo* method); */

undefined8
native_MG_BlocksEngine2_Block_BE2_BlockVerticalLayout__get_RectTransform_5700fc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* MG_BlocksEngine2.Block.BE2_BlockVerticalLayout$$set_RectTransform @ 0x570104
 * void MG_BlocksEngine2_Block_BE2_BlockVerticalLayout__set_RectTransform (MG_BlocksEngine2_Block_BE2_BlockVerticalLayout_o* __this, UnityEngine_RectTransform_o* value, const MethodInfo* method); */

/* MG_BlocksEngine2.Block.BE2_BlockVerticalLayout$$set_RectTransform
   void MG_BlocksEngine2_Block_BE2_BlockVerticalLayout__set_RectTransform
   (MG_BlocksEngine2_Block_BE2_BlockVerticalLayout_o* __this, UnityEngine_RectTransform_o* value,
   const MethodInfo* method); */

void native_MG_BlocksEngine2_Block_BE2_BlockVerticalLayout__set_RectTransform_570104
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



/* MG_BlocksEngine2.Block.BE2_BlockVerticalLayout$$get_SectionsArray @ 0x57010c
 * MG_BlocksEngine2_Block_I_BE2_BlockSection_array* MG_BlocksEngine2_Block_BE2_BlockVerticalLayout__get_SectionsArray (MG_BlocksEngine2_Block_BE2_BlockVerticalLayout_o* __this, const MethodInfo* method); */

/* MG_BlocksEngine2.Block.BE2_BlockVerticalLayout$$get_SectionsArray
   MG_BlocksEngine2_Block_I_BE2_BlockSection_array*
   MG_BlocksEngine2_Block_BE2_BlockVerticalLayout__get_SectionsArray
   (MG_BlocksEngine2_Block_BE2_BlockVerticalLayout_o* __this, const MethodInfo* method); */

undefined8
native_MG_BlocksEngine2_Block_BE2_BlockVerticalLayout__get_SectionsArray_57010c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* MG_BlocksEngine2.Block.BE2_BlockVerticalLayout$$get_Color @ 0x570114
 * UnityEngine_Color_o MG_BlocksEngine2_Block_BE2_BlockVerticalLayout__get_Color (MG_BlocksEngine2_Block_BE2_BlockVerticalLayout_o* __this, const MethodInfo* method); */

/* MG_BlocksEngine2.Block.BE2_BlockVerticalLayout$$get_Color
   UnityEngine_Color_o MG_BlocksEngine2_Block_BE2_BlockVerticalLayout__get_Color
   (MG_BlocksEngine2_Block_BE2_BlockVerticalLayout_o* __this, const MethodInfo* method); */

undefined4 native_MG_BlocksEngine2_Block_BE2_BlockVerticalLayout__get_Color_570114(long param_1)

{
  return *(undefined4 *)(param_1 + 0x18);
}



/* MG_BlocksEngine2.Block.BE2_BlockVerticalLayout$$set_Color @ 0x570120
 * void MG_BlocksEngine2_Block_BE2_BlockVerticalLayout__set_Color (MG_BlocksEngine2_Block_BE2_BlockVerticalLayout_o* __this, UnityEngine_Color_o value, const MethodInfo* method); */

/* MG_BlocksEngine2.Block.BE2_BlockVerticalLayout$$set_Color
   void MG_BlocksEngine2_Block_BE2_BlockVerticalLayout__set_Color
   (MG_BlocksEngine2_Block_BE2_BlockVerticalLayout_o* __this, UnityEngine_Color_o value, const
   MethodInfo* method); */

void native_MG_BlocksEngine2_Block_BE2_BlockVerticalLayout__set_Color_570120
               (undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
               long param_5)

{
  *(undefined4 *)(param_5 + 0x18) = param_1;
  *(undefined4 *)(param_5 + 0x1c) = param_2;
  *(undefined4 *)(param_5 + 0x20) = param_3;
  *(undefined4 *)(param_5 + 0x24) = param_4;
  return;
}



/* MG_BlocksEngine2.Block.BE2_BlockVerticalLayout$$get_Size @ 0x57012c
 * UnityEngine_Vector2_o MG_BlocksEngine2_Block_BE2_BlockVerticalLayout__get_Size (MG_BlocksEngine2_Block_BE2_BlockVerticalLayout_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MG_BlocksEngine2.Block.BE2_BlockVerticalLayout$$get_Size
   UnityEngine_Vector2_o MG_BlocksEngine2_Block_BE2_BlockVerticalLayout__get_Size
   (MG_BlocksEngine2_Block_BE2_BlockVerticalLayout_o* __this, const MethodInfo* method); */

undefined1  [16]
native_MG_BlocksEngine2_Block_BE2_BlockVerticalLayout__get_Size_57012c(long param_1)

{
  int iVar1;
  undefined1 auVar2 [16];
  undefined8 *puVar3;
  undefined8 uVar4;
  long lVar5;
  ulong uVar6;
  int *piVar7;
  long *plVar8;
  uint uVar9;
  float fVar10;
  undefined1 auVar11 [16];
  float fVar12;
  
  if ((bRam000000000133ea78 & 1) == 0) {
    native_sub_43273c(&MG_BlocksEngine2_Block_I_BE2_BlockSection_TypeInfo_12d4de8);
    bRam000000000133ea78 = 1;
  }
  auVar11 = native_UnityEngine_Vector2__get_zero_765ef0(0);
  lVar5 = *(long *)(param_1 + 0x30);
  if (lVar5 != 0) {
    iVar1 = *(int *)(lVar5 + 0x18);
    if (iVar1 < 1) {
      return auVar11;
    }
    uVar9 = 0;
    do {
      uVar4 = auVar11._8_8_;
      if (*(uint *)(lVar5 + 0x18) <= uVar9) {
        uVar4 = native_sub_43283c();
                    /* WARNING: Subroutine does not return */
        native_sub_4327dc(uVar4,0);
      }
      plVar8 = *(long **)(lVar5 + (long)(int)uVar9 * 8 + 0x20);
      if (plVar8 == (long *)0x0) break;
      lVar5 = *plVar8;
      if ((ulong)*(ushort *)(lVar5 + 0x12a) != 0) {
        uVar6 = 0;
        piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(long *)(piVar7 + -2) == _MG_BlocksEngine2_Block_I_BE2_BlockSection_TypeInfo_12d4de8)
          {
            puVar3 = (undefined8 *)(lVar5 + (long)(*piVar7 + 3) * 0x10 + 0x138);
            goto LAB_0057020c;
          }
          uVar6 = uVar6 + 1;
          piVar7 = piVar7 + 4;
        } while (uVar6 < *(ushort *)(lVar5 + 0x12a));
      }
      puVar3 = (undefined8 *)
               native_sub_3c9b34(plVar8,_MG_BlocksEngine2_Block_I_BE2_BlockSection_TypeInfo_12d4de8,
                                 3);
LAB_0057020c:
      (*(code *)*puVar3)(plVar8,puVar3[1]);
      lVar5 = *plVar8;
      if ((ulong)*(ushort *)(lVar5 + 0x12a) != 0) {
        uVar6 = 0;
        piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(long *)(piVar7 + -2) == _MG_BlocksEngine2_Block_I_BE2_BlockSection_TypeInfo_12d4de8)
          {
            puVar3 = (undefined8 *)(lVar5 + (long)(*piVar7 + 3) * 0x10 + 0x138);
            goto LAB_00570274;
          }
          uVar6 = uVar6 + 1;
          piVar7 = piVar7 + 4;
        } while (uVar6 < *(ushort *)(lVar5 + 0x12a));
      }
      puVar3 = (undefined8 *)
               native_sub_3c9b34(plVar8,_MG_BlocksEngine2_Block_I_BE2_BlockSection_TypeInfo_12d4de8,
                                 3);
LAB_00570274:
      fVar10 = (float)(*(code *)*puVar3)(plVar8,puVar3[1]);
      auVar2._8_8_ = uVar4;
      auVar2._0_8_ = auVar11._0_8_;
      fVar12 = auVar11._0_4_;
      auVar11 = auVar2;
      if (fVar12 < fVar10) {
        lVar5 = *plVar8;
        if ((ulong)*(ushort *)(lVar5 + 0x12a) != 0) {
          uVar6 = 0;
          piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
          do {
            if (*(long *)(piVar7 + -2) ==
                _MG_BlocksEngine2_Block_I_BE2_BlockSection_TypeInfo_12d4de8) {
              puVar3 = (undefined8 *)(lVar5 + (long)(*piVar7 + 3) * 0x10 + 0x138);
              goto LAB_005702e0;
            }
            uVar6 = uVar6 + 1;
            piVar7 = piVar7 + 4;
          } while (uVar6 < *(ushort *)(lVar5 + 0x12a));
        }
        puVar3 = (undefined8 *)
                 native_sub_3c9b34(plVar8,
                                   _MG_BlocksEngine2_Block_I_BE2_BlockSection_TypeInfo_12d4de8,3);
LAB_005702e0:
        auVar11 = (*(code *)*puVar3)(plVar8,puVar3[1]);
      }
      uVar9 = uVar9 + 1;
      if (iVar1 <= (int)uVar9) {
        return auVar11;
      }
      lVar5 = *(long *)(param_1 + 0x30);
    } while (lVar5 != 0);
  }
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* MG_BlocksEngine2.Block.BE2_BlockVerticalLayout$$OnValidate @ 0x57033c
 * void MG_BlocksEngine2_Block_BE2_BlockVerticalLayout__OnValidate (MG_BlocksEngine2_Block_BE2_BlockVerticalLayout_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MG_BlocksEngine2.Block.BE2_BlockVerticalLayout$$OnValidate
   void MG_BlocksEngine2_Block_BE2_BlockVerticalLayout__OnValidate
   (MG_BlocksEngine2_Block_BE2_BlockVerticalLayout_o* __this, const MethodInfo* method); */

void native_MG_BlocksEngine2_Block_BE2_BlockVerticalLayout__OnValidate_57033c(long param_1)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  int iVar4;
  
  if ((bRam000000000133ea7c & 1) == 0) {
    native_sub_43273c(&
                      Method_MG_BlocksEngine2_Utils_BE2_ArrayUtils_Add_I_BE2_BlockSection____12e20a0
                     );
    native_sub_43273c(&Method_UnityEngine_Component_GetComponent_I_BE2_BlockSection____12e2a18);
    native_sub_43273c(&Method_UnityEngine_Component_GetComponent_RectTransform____12e2ad0);
    native_sub_43273c(&MG_BlocksEngine2_Block_I_BE2_BlockSection___TypeInfo_12d3220);
    bRam000000000133ea7c = 1;
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
        goto LAB_00570480;
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
LAB_00570480:
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* MG_BlocksEngine2.Block.BE2_BlockVerticalLayout$$Awake @ 0x570340
 * void MG_BlocksEngine2_Block_BE2_BlockVerticalLayout__Awake (MG_BlocksEngine2_Block_BE2_BlockVerticalLayout_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MG_BlocksEngine2.Block.BE2_BlockVerticalLayout$$Awake
   void MG_BlocksEngine2_Block_BE2_BlockVerticalLayout__Awake
   (MG_BlocksEngine2_Block_BE2_BlockVerticalLayout_o* __this, const MethodInfo* method); */

void native_MG_BlocksEngine2_Block_BE2_BlockVerticalLayout__Awake_570340(long param_1)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  int iVar4;
  
  if ((bRam000000000133ea7c & 1) == 0) {
    native_sub_43273c(&
                      Method_MG_BlocksEngine2_Utils_BE2_ArrayUtils_Add_I_BE2_BlockSection____12e20a0
                     );
    native_sub_43273c(&Method_UnityEngine_Component_GetComponent_I_BE2_BlockSection____12e2a18);
    native_sub_43273c(&Method_UnityEngine_Component_GetComponent_RectTransform____12e2ad0);
    native_sub_43273c(&MG_BlocksEngine2_Block_I_BE2_BlockSection___TypeInfo_12d3220);
    bRam000000000133ea7c = 1;
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
        goto LAB_00570480;
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
LAB_00570480:
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* MG_BlocksEngine2.Block.BE2_BlockVerticalLayout$$Start @ 0x570484
 * void MG_BlocksEngine2_Block_BE2_BlockVerticalLayout__Start (MG_BlocksEngine2_Block_BE2_BlockVerticalLayout_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MG_BlocksEngine2.Block.BE2_BlockVerticalLayout$$Start
   void MG_BlocksEngine2_Block_BE2_BlockVerticalLayout__Start
   (MG_BlocksEngine2_Block_BE2_BlockVerticalLayout_o* __this, const MethodInfo* method); */

void native_MG_BlocksEngine2_Block_BE2_BlockVerticalLayout__Start_570484(long param_1)

{
  long lVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  
  if ((bRam000000000133ea79 & 1) == 0) {
    native_sub_43273c(&UnityEngine_UI_LayoutRebuilder_TypeInfo_12d4ff8);
    bRam000000000133ea79 = 1;
  }
  if (*(long *)(param_1 + 0x28) == 0) {
                    /* WARNING: Subroutine does not return */
    native_sub_432810();
  }
  native_UnityEngine_RectTransform__set_pivot_765158(0,0x3f800000,*(long *)(param_1 + 0x28),0);
  native_MG_BlocksEngine2_Block_BE2_BlockVerticalLayout__UpdateLayout_570510(param_1);
  uVar6 = *(undefined8 *)(param_1 + 0x28);
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
     (lVar3 = native_UnityEngine_UI_ObjectPool_List_IEventSystemHandler____Get_abf1bc
                        (**(long **)(_UnityEngine_UI_LayoutRebuilder_TypeInfo_12d4ff8 + 0xb8),
                         _Method_UnityEngine_UI_ObjectPool_LayoutRebuilder__Get___12ddaa8),
     lVar3 != 0)) {
    native_UnityEngine_UI_LayoutRebuilder__Initialize_a7c8c8(lVar3,uVar6);
    native_UnityEngine_UI_LayoutRebuilder__Rebuild_a7cd88(lVar3,1);
    lVar1 = _Method_UnityEngine_UI_ObjectPool_LayoutRebuilder__Release___12ddab0;
    lVar4 = **(long **)(_UnityEngine_UI_LayoutRebuilder_TypeInfo_12d4ff8 + 0xb8);
    if (lVar4 != 0) {
      if ((bRam0000000001341f09 & 1) == 0) {
        native_sub_43273c(&UnityEngine_Debug_TypeInfo_12d4338);
        native_sub_43273c(&
                          StringLiteral_Internal_error__Trying_to_destroy_object_that_is_already_released_to_pool__12ee9b0
                         );
        bRam0000000001341f09 = 1;
      }
      if (*(long *)(lVar4 + 0x10) != 0) {
        iVar2 = (*(code *)**(undefined8 **)(*(long *)(*(long *)(lVar1 + 0x18) + 0xc0) + 0x10))();
        if (0 < iVar2) {
          if (*(long *)(lVar4 + 0x10) == 0) goto code_r0x00abf3ac;
          lVar5 = (*(code *)**(undefined8 **)(*(long *)(*(long *)(lVar1 + 0x18) + 0xc0) + 0x48))();
          if (lVar5 == lVar3) {
            if (((*(byte *)(_UnityEngine_Debug_TypeInfo_12d4338 + 0x133) >> 2 & 1) != 0) &&
               (*(int *)(_UnityEngine_Debug_TypeInfo_12d4338 + 0xe0) == 0)) {
              native_sub_4327ec();
            }
            native_UnityEngine_Debug__LogError_8dc5cc
                      (_StringLiteral_Internal_error__Trying_to_destroy_object_that_is_already_released_to_pool__12ee9b0
                       ,0);
          }
        }
        if (*(long *)(lVar4 + 0x20) != 0) {
          (*(code *)**(undefined8 **)(*(long *)(*(long *)(lVar1 + 0x18) + 0xc0) + 0x40))
                    (*(long *)(lVar4 + 0x20),lVar3);
        }
        if (*(long *)(lVar4 + 0x10) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00abf3a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*(code *)**(undefined8 **)(*(long *)(*(long *)(lVar1 + 0x18) + 0xc0) + 0x58))
                    (*(long *)(lVar4 + 0x10),lVar3);
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



/* MG_BlocksEngine2.Block.BE2_BlockVerticalLayout$$OnEnable @ 0x570638
 * void MG_BlocksEngine2_Block_BE2_BlockVerticalLayout__OnEnable (MG_BlocksEngine2_Block_BE2_BlockVerticalLayout_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MG_BlocksEngine2.Block.BE2_BlockVerticalLayout$$OnEnable
   void MG_BlocksEngine2_Block_BE2_BlockVerticalLayout__OnEnable
   (MG_BlocksEngine2_Block_BE2_BlockVerticalLayout_o* __this, const MethodInfo* method); */

void native_MG_BlocksEngine2_Block_BE2_BlockVerticalLayout__OnEnable_570638(long *param_1)

{
  ulong uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  uint uVar5;
  long lVar6;
  
  if ((bRam000000000133ea7a & 1) == 0) {
    native_sub_43273c(&UnityEngine_Events_UnityAction_TypeInfo_12d65d0);
    bRam000000000133ea7a = 1;
  }
  lVar2 = native_MG_BlocksEngine2_Core_BE2_ExecutionManager__get_Instance_564464();
  uVar3 = native_sub_432808(_UnityEngine_Events_UnityAction_TypeInfo_12d65d0);
  if ((param_1 == (long *)0x0) ||
     (native_UnityEngine_Events_UnityAction___ctor_773130
                (uVar3,param_1,*(undefined8 *)(*param_1 + 0x1e0),0), lVar2 == 0)) {
                    /* WARNING: Subroutine does not return */
    native_sub_432810();
  }
  if ((bRam000000000133eafe & 1) == 0) {
    native_sub_43273c(&Method_System_Collections_Generic_List_UnityAction__Add___12dd490);
    native_sub_43273c(&Method_System_Collections_Generic_List_UnityAction__Contains___12dd498);
    bRam000000000133eafe = 1;
  }
  if (*(long *)(lVar2 + 0x40) != 0) {
    uVar1 = native_System_Collections_Generic_List_BE2_UI_SelectionPanel___Contains_d40ec8
                      (*(long *)(lVar2 + 0x40),uVar3,
                       _Method_System_Collections_Generic_List_UnityAction__Contains___12dd498);
    if ((uVar1 & 1) != 0) {
      return;
    }
    if (*(long *)(lVar2 + 0x50) != 0) {
      native_UnityEngine_Events_UnityEvent__AddListener_7734bc(*(long *)(lVar2 + 0x50),uVar3,0);
      lVar2 = *(long *)(lVar2 + 0x40);
      if (lVar2 != 0) {
        lVar6 = *(long *)(lVar2 + 0x10);
        if (lVar6 != 0) {
          uVar5 = *(uint *)(lVar2 + 0x18);
          if (uVar5 == *(uint *)(lVar6 + 0x18)) {
            (*(code *)**(undefined8 **)
                        (*(long *)(*(long *)(
                                            _Method_System_Collections_Generic_List_UnityAction__Add___12dd490
                                            + 0x18) + 0xc0) + 0x60))(lVar2,uVar5 + 1);
            uVar5 = *(uint *)(lVar2 + 0x18);
            lVar6 = *(long *)(lVar2 + 0x10);
            *(uint *)(lVar2 + 0x18) = uVar5 + 1;
            if (lVar6 == 0) goto code_r0x00d40c5c;
          }
          else {
            *(uint *)(lVar2 + 0x18) = uVar5 + 1;
          }
          if (uVar5 < *(uint *)(lVar6 + 0x18)) {
            puVar4 = (undefined8 *)(lVar6 + (long)(int)uVar5 * 8 + 0x20);
            *puVar4 = uVar3;
            native_sub_4326e0(puVar4,uVar3);
            *(int *)(lVar2 + 0x1c) = *(int *)(lVar2 + 0x1c) + 1;
            return;
          }
          uVar3 = native_sub_43283c();
                    /* WARNING: Subroutine does not return */
          native_sub_4327dc(uVar3,0);
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



/* MG_BlocksEngine2.Block.BE2_BlockVerticalLayout$$OnDisable @ 0x5706c4
 * void MG_BlocksEngine2_Block_BE2_BlockVerticalLayout__OnDisable (MG_BlocksEngine2_Block_BE2_BlockVerticalLayout_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MG_BlocksEngine2.Block.BE2_BlockVerticalLayout$$OnDisable
   void MG_BlocksEngine2_Block_BE2_BlockVerticalLayout__OnDisable
   (MG_BlocksEngine2_Block_BE2_BlockVerticalLayout_o* __this, const MethodInfo* method); */

ulong native_MG_BlocksEngine2_Block_BE2_BlockVerticalLayout__OnDisable_5706c4(long *param_1)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  long lVar4;
  undefined8 uVar5;
  
  if ((bRam000000000133ea7b & 1) == 0) {
    native_sub_43273c(&UnityEngine_Events_UnityAction_TypeInfo_12d65d0);
    bRam000000000133ea7b = 1;
  }
  lVar4 = native_MG_BlocksEngine2_Core_BE2_ExecutionManager__get_Instance_564464();
  if (lVar4 == 0) {
    return 0;
  }
  uVar5 = native_sub_432808(_UnityEngine_Events_UnityAction_TypeInfo_12d65d0);
  if (param_1 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    native_sub_432810();
  }
  native_UnityEngine_Events_UnityAction___ctor_773130
            (uVar5,param_1,*(undefined8 *)(*param_1 + 0x1e0),0);
  if ((bRam000000000133eaff & 1) == 0) {
    native_sub_43273c(&Method_System_Collections_Generic_List_UnityAction__Contains___12dd498);
    native_sub_43273c(&Method_System_Collections_Generic_List_UnityAction__Remove___12dd4a0);
    bRam000000000133eaff = 1;
  }
  if (*(long *)(lVar4 + 0x40) != 0) {
    uVar3 = native_System_Collections_Generic_List_BE2_UI_SelectionPanel___Contains_d40ec8
                      (*(long *)(lVar4 + 0x40),uVar5,
                       _Method_System_Collections_Generic_List_UnityAction__Contains___12dd498);
    if ((uVar3 & 1) == 0) {
      return uVar3;
    }
    if (*(long *)(lVar4 + 0x50) != 0) {
      native_UnityEngine_Events_UnityEvent__RemoveListener_773574(*(long *)(lVar4 + 0x50),uVar5,0);
      lVar1 = _Method_System_Collections_Generic_List_UnityAction__Remove___12dd4a0;
      lVar4 = *(long *)(lVar4 + 0x40);
      if (lVar4 != 0) {
        if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
          native_sub_432810(0,uVar5);
        }
        iVar2 = (*(code *)**(undefined8 **)
                            (*(long *)(*(long *)(
                                                _Method_System_Collections_Generic_List_UnityAction__Remove___12dd4a0
                                                + 0x18) + 0xc0) + 0xd8))();
        if (-1 < iVar2) {
          (*(code *)**(undefined8 **)(*(long *)(*(long *)(lVar1 + 0x18) + 0xc0) + 0xe8))
                    (lVar4,iVar2);
        }
        return (ulong)(-1 < iVar2);
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* MG_BlocksEngine2.Block.BE2_BlockVerticalLayout$$Initialize @ 0x570344
 * void MG_BlocksEngine2_Block_BE2_BlockVerticalLayout__Initialize (MG_BlocksEngine2_Block_BE2_BlockVerticalLayout_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MG_BlocksEngine2.Block.BE2_BlockVerticalLayout$$Initialize
   void MG_BlocksEngine2_Block_BE2_BlockVerticalLayout__Initialize
   (MG_BlocksEngine2_Block_BE2_BlockVerticalLayout_o* __this, const MethodInfo* method); */

void native_MG_BlocksEngine2_Block_BE2_BlockVerticalLayout__Initialize_570344(long param_1)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  int iVar4;
  
  if ((bRam000000000133ea7c & 1) == 0) {
    native_sub_43273c(&
                      Method_MG_BlocksEngine2_Utils_BE2_ArrayUtils_Add_I_BE2_BlockSection____12e20a0
                     );
    native_sub_43273c(&Method_UnityEngine_Component_GetComponent_I_BE2_BlockSection____12e2a18);
    native_sub_43273c(&Method_UnityEngine_Component_GetComponent_RectTransform____12e2ad0);
    native_sub_43273c(&MG_BlocksEngine2_Block_I_BE2_BlockSection___TypeInfo_12d3220);
    bRam000000000133ea7c = 1;
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
        goto LAB_00570480;
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
LAB_00570480:
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* MG_BlocksEngine2.Block.BE2_BlockVerticalLayout$$UpdateLayout @ 0x570510
 * void MG_BlocksEngine2_Block_BE2_BlockVerticalLayout__UpdateLayout (MG_BlocksEngine2_Block_BE2_BlockVerticalLayout_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MG_BlocksEngine2.Block.BE2_BlockVerticalLayout$$UpdateLayout
   void MG_BlocksEngine2_Block_BE2_BlockVerticalLayout__UpdateLayout
   (MG_BlocksEngine2_Block_BE2_BlockVerticalLayout_o* __this, const MethodInfo* method); */

void native_MG_BlocksEngine2_Block_BE2_BlockVerticalLayout__UpdateLayout_570510(long param_1)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  ulong uVar4;
  int *piVar5;
  long lVar6;
  long *plVar7;
  uint uVar8;
  
  if ((bRam000000000133ea7d & 1) == 0) {
    native_sub_43273c(&MG_BlocksEngine2_Block_I_BE2_BlockSection_TypeInfo_12d4de8);
    bRam000000000133ea7d = 1;
  }
  lVar6 = *(long *)(param_1 + 0x28);
  native_MG_BlocksEngine2_Block_BE2_BlockVerticalLayout__get_Size_57012c(param_1);
  if (lVar6 != 0) {
    native_UnityEngine_RectTransform__set_sizeDelta_76500c(lVar6,0);
    lVar6 = *(long *)(param_1 + 0x30);
    if (lVar6 != 0) {
      iVar1 = *(int *)(lVar6 + 0x18);
      if (iVar1 < 1) {
        return;
      }
      uVar8 = 0;
      do {
        if (*(uint *)(lVar6 + 0x18) <= uVar8) {
          uVar3 = native_sub_43283c();
                    /* WARNING: Subroutine does not return */
          native_sub_4327dc(uVar3,0);
        }
        plVar7 = *(long **)(lVar6 + (long)(int)uVar8 * 8 + 0x20);
        if (plVar7 == (long *)0x0) break;
        lVar6 = *plVar7;
        if ((ulong)*(ushort *)(lVar6 + 0x12a) != 0) {
          uVar4 = 0;
          piVar5 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
          do {
            if (*(long *)(piVar5 + -2) ==
                _MG_BlocksEngine2_Block_I_BE2_BlockSection_TypeInfo_12d4de8) {
              puVar2 = (undefined8 *)(lVar6 + (long)(*piVar5 + 6) * 0x10 + 0x138);
              goto LAB_005705f4;
            }
            uVar4 = uVar4 + 1;
            piVar5 = piVar5 + 4;
          } while (uVar4 < *(ushort *)(lVar6 + 0x12a));
        }
        puVar2 = (undefined8 *)
                 native_sub_3c9b34(plVar7,
                                   _MG_BlocksEngine2_Block_I_BE2_BlockSection_TypeInfo_12d4de8,6);
LAB_005705f4:
        (*(code *)*puVar2)(plVar7,puVar2[1]);
        uVar8 = uVar8 + 1;
        if (iVar1 <= (int)uVar8) {
          return;
        }
        lVar6 = *(long *)(param_1 + 0x30);
      } while (lVar6 != 0);
    }
  }
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* MG_BlocksEngine2.Block.BE2_BlockVerticalLayout$$.ctor @ 0x57075c
 * void MG_BlocksEngine2_Block_BE2_BlockVerticalLayout___ctor (MG_BlocksEngine2_Block_BE2_BlockVerticalLayout_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MG_BlocksEngine2.Block.BE2_BlockVerticalLayout$$.ctor
   void MG_BlocksEngine2_Block_BE2_BlockVerticalLayout___ctor
   (MG_BlocksEngine2_Block_BE2_BlockVerticalLayout_o* __this, const MethodInfo* method); */

undefined1  [16]
native_MG_BlocksEngine2_Block_BE2_BlockVerticalLayout___ctor_57075c
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


