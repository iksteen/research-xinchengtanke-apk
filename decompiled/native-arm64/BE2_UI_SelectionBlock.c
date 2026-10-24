/* ARM64 IL2CPP native pseudocode from Ghidra.
 * Recovered implementation, not original C# source.
 * Function boundaries follow the IL2CPP method address table. */


/* MG_BlocksEngine2.UI.BE2_UI_SelectionBlock$$OnEnable @ 0xdcad0c
 * void MG_BlocksEngine2_UI_BE2_UI_SelectionBlock__OnEnable (MG_BlocksEngine2_UI_BE2_UI_SelectionBlock_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MG_BlocksEngine2.UI.BE2_UI_SelectionBlock$$OnEnable
   void MG_BlocksEngine2_UI_BE2_UI_SelectionBlock__OnEnable
   (MG_BlocksEngine2_UI_BE2_UI_SelectionBlock_o* __this, const MethodInfo* method); */

void native_MG_BlocksEngine2_UI_BE2_UI_SelectionBlock__OnEnable_dcad0c(long param_1)

{
  undefined8 uVar1;
  ulong uVar2;
  long lVar3;
  undefined8 uVar4;
  
  if ((bRam0000000001346deb & 1) == 0) {
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    bRam0000000001346deb = 1;
  }
  uVar4 = *(undefined8 *)(param_1 + 0x18);
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar2 = native_UnityEngine_Object__op_Implicit_8e1b98(uVar4,0);
  if ((uVar2 & 1) == 0) {
    return;
  }
  lVar3 = native_MG_BlocksEngine2_UI_BE2_UI_SelectionBlock__C_PerformCleanAndResize_dcad10(param_1);
  if (lVar3 == 0) {
    native_sub_432740(&System_NullReferenceException_TypeInfo_12d5498,0,0);
    uVar1 = native_sub_432808();
    uVar4 = native_sub_432740(&StringLiteral_routine_is_null_12f5ec0);
    native_System_NullReferenceException___ctor_ad2894(uVar1,uVar4,0);
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
      (*pcRam0000000001340ff8)(param_1,lVar3);
      return;
    }
    native_sub_432740(&System_ArgumentException_TypeInfo_12d3800);
    uVar1 = native_sub_432808();
    uVar4 = native_sub_432740(&
                              StringLiteral_Coroutines_can_only_be_stopped_on_a_MonoBehaviour_12ed328
                             );
    native_System_ArgumentException___ctor_953858(uVar1,uVar4,0);
  }
  uVar4 = native_sub_432740(&Method_UnityEngine_MonoBehaviour_StartCoroutine___12e55d8);
                    /* WARNING: Subroutine does not return */
  native_sub_4327dc(uVar1,uVar4);
}



/* MG_BlocksEngine2.UI.BE2_UI_SelectionBlock$$PerformCleanAndResize @ 0xdc67d8
 * void MG_BlocksEngine2_UI_BE2_UI_SelectionBlock__PerformCleanAndResize (MG_BlocksEngine2_UI_BE2_UI_SelectionBlock_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MG_BlocksEngine2.UI.BE2_UI_SelectionBlock$$PerformCleanAndResize
   void MG_BlocksEngine2_UI_BE2_UI_SelectionBlock__PerformCleanAndResize
   (MG_BlocksEngine2_UI_BE2_UI_SelectionBlock_o* __this, const MethodInfo* method); */

void native_MG_BlocksEngine2_UI_BE2_UI_SelectionBlock__PerformCleanAndResize_dc67d8(long param_1)

{
  undefined8 uVar1;
  ulong uVar2;
  long lVar3;
  undefined8 uVar4;
  
  if ((bRam0000000001346deb & 1) == 0) {
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    bRam0000000001346deb = 1;
  }
  uVar4 = *(undefined8 *)(param_1 + 0x18);
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar2 = native_UnityEngine_Object__op_Implicit_8e1b98(uVar4,0);
  if ((uVar2 & 1) == 0) {
    return;
  }
  lVar3 = native_MG_BlocksEngine2_UI_BE2_UI_SelectionBlock__C_PerformCleanAndResize_dcad10(param_1);
  if (lVar3 == 0) {
    native_sub_432740(&System_NullReferenceException_TypeInfo_12d5498,0,0);
    uVar1 = native_sub_432808();
    uVar4 = native_sub_432740(&StringLiteral_routine_is_null_12f5ec0);
    native_System_NullReferenceException___ctor_ad2894(uVar1,uVar4,0);
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
      (*pcRam0000000001340ff8)(param_1,lVar3);
      return;
    }
    native_sub_432740(&System_ArgumentException_TypeInfo_12d3800);
    uVar1 = native_sub_432808();
    uVar4 = native_sub_432740(&
                              StringLiteral_Coroutines_can_only_be_stopped_on_a_MonoBehaviour_12ed328
                             );
    native_System_ArgumentException___ctor_953858(uVar1,uVar4,0);
  }
  uVar4 = native_sub_432740(&Method_UnityEngine_MonoBehaviour_StartCoroutine___12e55d8);
                    /* WARNING: Subroutine does not return */
  native_sub_4327dc(uVar1,uVar4);
}



/* MG_BlocksEngine2.UI.BE2_UI_SelectionBlock$$C_PerformCleanAndResize @ 0xdcad10
 * System_Collections_IEnumerator_o* MG_BlocksEngine2_UI_BE2_UI_SelectionBlock__C_PerformCleanAndResize (MG_BlocksEngine2_UI_BE2_UI_SelectionBlock_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MG_BlocksEngine2.UI.BE2_UI_SelectionBlock$$C_PerformCleanAndResize
   System_Collections_IEnumerator_o*
   MG_BlocksEngine2_UI_BE2_UI_SelectionBlock__C_PerformCleanAndResize
   (MG_BlocksEngine2_UI_BE2_UI_SelectionBlock_o* __this, const MethodInfo* method); */

long native_MG_BlocksEngine2_UI_BE2_UI_SelectionBlock__C_PerformCleanAndResize_dcad10
               (undefined8 param_1)

{
  long lVar1;
  
  if ((bRam0000000001346dec & 1) == 0) {
    native_sub_43273c(&
                      MG_BlocksEngine2_UI_BE2_UI_SelectionBlock__C_PerformCleanAndResize_d__3_TypeInfo_12d7088
                     );
    bRam0000000001346dec = 1;
  }
  lVar1 = native_sub_432808(
                           _MG_BlocksEngine2_UI_BE2_UI_SelectionBlock__C_PerformCleanAndResize_d__3_TypeInfo_12d7088
                           );
  native_MG_BlocksEngine2_UI_BE2_UI_SelectionBlock__C_PerformCleanAndResize_d__3___ctor_548f1c
            (lVar1,0,0);
  if (lVar1 != 0) {
    *(undefined8 *)(lVar1 + 0x20) = param_1;
    native_sub_4326e0((undefined8 *)(lVar1 + 0x20),param_1);
    return lVar1;
  }
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* MG_BlocksEngine2.UI.BE2_UI_SelectionBlock$$PerformClean @ 0xdcad88
 * void MG_BlocksEngine2_UI_BE2_UI_SelectionBlock__PerformClean (MG_BlocksEngine2_UI_BE2_UI_SelectionBlock_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MG_BlocksEngine2.UI.BE2_UI_SelectionBlock$$PerformClean
   void MG_BlocksEngine2_UI_BE2_UI_SelectionBlock__PerformClean
   (MG_BlocksEngine2_UI_BE2_UI_SelectionBlock_o* __this, const MethodInfo* method); */

void native_MG_BlocksEngine2_UI_BE2_UI_SelectionBlock__PerformClean_dcad88(long param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  undefined8 uVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long *plVar13;
  long *plVar14;
  uint uVar15;
  uint uVar16;
  int iVar17;
  
  if ((bRam0000000001346ded & 1) == 0) {
    native_sub_43273c(&
                      Method_UnityEngine_Component_GetComponent_BE2_DropdownDynamicResize____12e2950
                     );
    native_sub_43273c(&
                      Method_UnityEngine_Component_GetComponent_BE2_InputFieldDynamicResize____12e2958
                     );
    native_sub_43273c(&Method_UnityEngine_Component_GetComponent_BE2_SpotOuterArea____12e2960);
    native_sub_43273c(&Method_UnityEngine_Component_GetComponent_ContentSizeFitter____12e29d0);
    native_sub_43273c(&Method_UnityEngine_Component_GetComponent_Image____12e2a78);
    native_sub_43273c(&Method_UnityEngine_Component_GetComponent_LayoutGroup____12e2a98);
    native_sub_43273c(&Method_UnityEngine_Component_GetComponent_RectTransform____12e2ad0);
    native_sub_43273c(&Method_UnityEngine_Component_GetComponent_Selectable____12e2af8);
    native_sub_43273c(&Method_UnityEngine_Component_GetComponentsInChildren_Image____12e2e18);
    native_sub_43273c(&Method_UnityEngine_GameObject_GetComponentsInChildren_RectMask2D____12e4b58);
    native_sub_43273c(&Method_UnityEngine_GameObject_GetComponentsInChildren_TMP_Text____12e4b60);
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    bRam0000000001346ded = 1;
  }
  lVar4 = native_UnityEngine_Component__get_transform_8da62c(param_1,0);
  if (lVar4 != 0) {
    uVar5 = native_UnityEngine_Component__GetComponent_ActiveAnimation__49daec
                      (lVar4,_Method_UnityEngine_Component_GetComponent_LayoutGroup____12e2a98);
    if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
      native_sub_4327ec(_UnityEngine_Object_TypeInfo_12d54e0);
    }
    uVar6 = native_UnityEngine_Object__op_Implicit_8e1b98(uVar5,0);
    if ((uVar6 & 1) != 0) {
      if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
        native_sub_4327ec();
      }
      native_UnityEngine_Object__DestroyImmediate_8ea648(uVar5,0);
    }
    lVar4 = native_UnityEngine_Component__get_transform_8da62c(param_1,0);
    if (lVar4 != 0) {
      lVar4 = native_UnityEngine_Component__GetComponent_ActiveAnimation__49daec
                        (lVar4,_Method_UnityEngine_Component_GetComponent_RectTransform____12e2ad0);
      if ((((*(long *)(param_1 + 0x18) != 0) &&
           (lVar7 = native_UnityEngine_GameObject__get_transform_8de5c8(*(long *)(param_1 + 0x18),0)
           , lVar7 != 0)) &&
          (lVar7 = native_UnityEngine_Component__GetComponent_ActiveAnimation__49daec
                             (lVar7,
                              _Method_UnityEngine_Component_GetComponent_RectTransform____12e2ad0),
          lVar7 != 0)) &&
         (native_UnityEngine_RectTransform__get_sizeDelta_764f64(lVar7,0), lVar4 != 0)) {
        native_UnityEngine_RectTransform__set_sizeDelta_76500c(lVar4,0);
        lVar4 = native_UnityEngine_Component__get_transform_8da62c(param_1,0);
        if (lVar4 != 0) {
          iVar17 = 0;
          while (iVar1 = native_UnityEngine_Transform__get_childCount_772a64(lVar4,0),
                iVar17 < iVar1) {
            lVar4 = native_UnityEngine_Component__get_transform_8da62c(param_1,0);
            if (lVar4 == 0) goto LAB_00dcb6b0;
            lVar4 = native_UnityEngine_Transform__GetChild_772ef0(lVar4,iVar17,0);
            if (((*(long *)(param_1 + 0x18) == 0) ||
                (lVar7 = native_UnityEngine_GameObject__get_transform_8de5c8
                                   (*(long *)(param_1 + 0x18),0), lVar7 == 0)) ||
               (lVar7 = native_UnityEngine_Transform__GetChild_772ef0(lVar7,iVar17,0), lVar4 == 0))
            goto LAB_00dcb6b0;
            uVar5 = native_UnityEngine_Component__GetComponent_ActiveAnimation__49daec
                              (lVar4,
                               _Method_UnityEngine_Component_GetComponent_LayoutGroup____12e2a98);
            if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
               (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
              native_sub_4327ec(_UnityEngine_Object_TypeInfo_12d54e0);
            }
            uVar6 = native_UnityEngine_Object__op_Implicit_8e1b98(uVar5,0);
            if ((uVar6 & 1) != 0) {
              if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
                 (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
                native_sub_4327ec();
              }
              native_UnityEngine_Object__DestroyImmediate_8ea648(uVar5,0);
            }
            if (lVar7 == 0) goto LAB_00dcb6b0;
            uVar5 = native_UnityEngine_Component__GetComponent_ActiveAnimation__49daec
                              (lVar7,
                               _Method_UnityEngine_Component_GetComponent_BE2_SpotOuterArea____12e2960
                              );
            if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
               (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
              native_sub_4327ec(_UnityEngine_Object_TypeInfo_12d54e0);
            }
            uVar6 = native_UnityEngine_Object__op_Implicit_8e1b98(uVar5,0);
            if ((uVar6 & 1) == 0) {
              lVar8 = native_UnityEngine_Component__GetComponent_ActiveAnimation__49daec
                                (lVar4,
                                 _Method_UnityEngine_Component_GetComponent_RectTransform____12e2ad0
                                );
              lVar9 = native_UnityEngine_Component__GetComponent_ActiveAnimation__49daec
                                (lVar7,
                                 _Method_UnityEngine_Component_GetComponent_RectTransform____12e2ad0
                                );
              if ((lVar9 == 0) ||
                 (native_UnityEngine_RectTransform__get_sizeDelta_764f64(lVar9,0), lVar8 == 0))
              goto LAB_00dcb6b0;
              native_UnityEngine_RectTransform__set_sizeDelta_76500c(lVar8,0);
            }
            else {
              uVar5 = native_UnityEngine_Component__get_gameObject_8da66c(lVar4,0);
              if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
                 (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
                native_sub_4327ec(_UnityEngine_Object_TypeInfo_12d54e0);
              }
              native_UnityEngine_Object__DestroyImmediate_8ea648(uVar5,0);
            }
            iVar1 = native_UnityEngine_Transform__get_childCount_772a64(lVar4,0);
            if (0 < iVar1) {
              iVar1 = 0;
              do {
                lVar8 = native_UnityEngine_Transform__GetChild_772ef0(lVar4,iVar1,0);
                lVar9 = native_UnityEngine_Transform__GetChild_772ef0(lVar7,iVar1,0);
                if (lVar8 == 0) goto LAB_00dcb6b0;
                uVar5 = native_UnityEngine_Component__GetComponent_ActiveAnimation__49daec
                                  (lVar8,
                                   _Method_UnityEngine_Component_GetComponent_LayoutGroup____12e2a98
                                  );
                if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
                   (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
                  native_sub_4327ec(_UnityEngine_Object_TypeInfo_12d54e0);
                }
                uVar6 = native_UnityEngine_Object__op_Implicit_8e1b98(uVar5,0);
                if ((uVar6 & 1) != 0) {
                  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
                     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
                    native_sub_4327ec();
                  }
                  native_UnityEngine_Object__DestroyImmediate_8ea648(uVar5,0);
                }
                lVar10 = native_UnityEngine_Component__GetComponent_ActiveAnimation__49daec
                                   (lVar8,
                                    _Method_UnityEngine_Component_GetComponent_RectTransform____12e2ad0
                                   );
                if (((lVar9 == 0) ||
                    (lVar11 = native_UnityEngine_Component__GetComponent_ActiveAnimation__49daec
                                        (lVar9,
                                         _Method_UnityEngine_Component_GetComponent_RectTransform____12e2ad0
                                        ), lVar11 == 0)) ||
                   (native_UnityEngine_RectTransform__get_sizeDelta_764f64(lVar11,0), lVar10 == 0))
                goto LAB_00dcb6b0;
                native_UnityEngine_RectTransform__set_sizeDelta_76500c(lVar10,0);
                iVar2 = native_UnityEngine_Transform__get_childCount_772a64(lVar8,0);
                if (0 < iVar2) {
                  iVar2 = 0;
                  do {
                    lVar10 = native_UnityEngine_Transform__GetChild_772ef0(lVar8,iVar2,0);
                    lVar11 = native_UnityEngine_Transform__GetChild_772ef0(lVar9,iVar2,0);
                    if (lVar10 == 0) goto LAB_00dcb6b0;
                    uVar5 = native_UnityEngine_Component__GetComponent_ActiveAnimation__49daec
                                      (lVar10,
                                       _Method_UnityEngine_Component_GetComponent_LayoutGroup____12e2a98
                                      );
                    if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
                       (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
                      native_sub_4327ec(_UnityEngine_Object_TypeInfo_12d54e0);
                    }
                    uVar6 = native_UnityEngine_Object__op_Implicit_8e1b98(uVar5,0);
                    if ((uVar6 & 1) != 0) {
                      if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0)
                         && (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
                        native_sub_4327ec();
                      }
                      native_UnityEngine_Object__DestroyImmediate_8ea648(uVar5,0);
                    }
                    uVar5 = native_UnityEngine_Component__GetComponent_ActiveAnimation__49daec
                                      (lVar10,
                                       _Method_UnityEngine_Component_GetComponent_ContentSizeFitter____12e29d0
                                      );
                    if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
                       (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
                      native_sub_4327ec(_UnityEngine_Object_TypeInfo_12d54e0);
                    }
                    uVar6 = native_UnityEngine_Object__op_Implicit_8e1b98(uVar5,0);
                    if ((uVar6 & 1) == 0) {
                      lVar12 = native_UnityEngine_Component__GetComponent_ActiveAnimation__49daec
                                         (lVar10,
                                          _Method_UnityEngine_Component_GetComponent_RectTransform____12e2ad0
                                         );
                      if (((lVar11 == 0) ||
                          (lVar11 = native_UnityEngine_Component__GetComponent_ActiveAnimation__49daec
                                              (lVar11,
                                               _Method_UnityEngine_Component_GetComponent_RectTransform____12e2ad0
                                              ), lVar11 == 0)) ||
                         (native_UnityEngine_RectTransform__get_sizeDelta_764f64(lVar11,0),
                         lVar12 == 0)) goto LAB_00dcb6b0;
                      native_UnityEngine_RectTransform__set_sizeDelta_76500c(lVar12,0);
                    }
                    lVar11 = native_UnityEngine_Component__GetComponent_ActiveAnimation__49daec
                                       (lVar10,
                                        _Method_UnityEngine_Component_GetComponent_Selectable____12e2af8
                                       );
                    if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
                       (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
                      native_sub_4327ec(_UnityEngine_Object_TypeInfo_12d54e0);
                    }
                    uVar6 = native_UnityEngine_Object__op_Implicit_8e1b98(lVar11,0);
                    if ((uVar6 & 1) != 0) {
                      if (lVar11 == 0) goto LAB_00dcb6b0;
                      native_UnityEngine_UI_Selectable__set_interactable_a8e59c(lVar11,1,0);
                    }
                    plVar13 = (long *)native_UnityEngine_Component__GetComponent_ActiveAnimation__49daec
                                                (lVar10,
                                                 _Method_UnityEngine_Component_GetComponent_Image____12e2a78
                                                );
                    if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
                       (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
                      native_sub_4327ec(_UnityEngine_Object_TypeInfo_12d54e0);
                    }
                    uVar6 = native_UnityEngine_Object__op_Implicit_8e1b98(plVar13,0);
                    if ((uVar6 & 1) != 0) {
                      if (plVar13 == (long *)0x0) goto LAB_00dcb6b0;
                      (**(code **)(*plVar13 + 0x2c8))(plVar13,0,*(undefined8 *)(*plVar13 + 0x2d0));
                    }
                    uVar5 = native_UnityEngine_Component__GetComponent_ActiveAnimation__49daec
                                      (lVar10,
                                       _Method_UnityEngine_Component_GetComponent_BE2_DropdownDynamicResize____12e2950
                                      );
                    if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
                       (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
                      native_sub_4327ec(_UnityEngine_Object_TypeInfo_12d54e0);
                    }
                    uVar6 = native_UnityEngine_Object__op_Implicit_8e1b98(uVar5,0);
                    if ((uVar6 & 1) != 0) {
                      if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0)
                         && (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
                        native_sub_4327ec();
                      }
                      native_UnityEngine_Object__DestroyImmediate_8ea648(uVar5,0);
                    }
                    uVar5 = native_UnityEngine_Component__GetComponent_ActiveAnimation__49daec
                                      (lVar10,
                                       _Method_UnityEngine_Component_GetComponent_BE2_InputFieldDynamicResize____12e2958
                                      );
                    if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
                       (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
                      native_sub_4327ec(_UnityEngine_Object_TypeInfo_12d54e0);
                    }
                    uVar6 = native_UnityEngine_Object__op_Implicit_8e1b98(uVar5,0);
                    if ((uVar6 & 1) != 0) {
                      if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0)
                         && (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
                        native_sub_4327ec();
                      }
                      native_UnityEngine_Object__DestroyImmediate_8ea648(uVar5,0);
                    }
                    lVar11 = native_MG_BlocksEngine2_Utils_BE2_Dropdown__GetBE2Component_566f34
                                       (lVar10,0);
                    if ((lVar11 != 0) && (*(char *)(lVar11 + 0x28) == '\0')) {
                      native_MG_BlocksEngine2_Utils_BE2_Dropdown__set_enabled_580ce4(lVar11,0,0);
                      lVar11 = native_UnityEngine_Component__GetComponentsInChildren_BE2_UI_SelectionPanel__49de1c
                                         (lVar10,
                                          _Method_UnityEngine_Component_GetComponentsInChildren_Image____12e2e18
                                         );
                      if (lVar11 == 0) goto LAB_00dcb6b0;
                      uVar15 = (uint)*(undefined8 *)(lVar11 + 0x18);
                      uVar16 = uVar15 - 1;
                      if (-1 < (int)uVar16) {
                        if (uVar15 <= uVar16) goto LAB_00dcb684;
                        plVar13 = (long *)(lVar11 + (long)(int)uVar16 * 8 + 0x20);
                        while( true ) {
                          plVar14 = (long *)*plVar13;
                          if (plVar14 == (long *)0x0) goto LAB_00dcb6b0;
                          (**(code **)(*plVar14 + 0x2c8))
                                    (plVar14,0,*(undefined8 *)(*plVar14 + 0x2d0));
                          uVar16 = uVar16 - 1;
                          if ((int)uVar16 < 0) break;
                          plVar13 = plVar13 + -1;
                          if (*(uint *)(lVar11 + 0x18) <= uVar16) goto LAB_00dcb684;
                        }
                      }
                    }
                    lVar10 = native_MG_BlocksEngine2_Utils_BE2_InputField__GetBE2Component_601c18
                                       (lVar10,0);
                    if ((lVar10 != 0) && (*(char *)(lVar10 + 0x28) == '\0')) {
                      native_MG_BlocksEngine2_Utils_BE2_InputField__set_enabled_6026a8(lVar10,0,0);
                    }
                    iVar2 = iVar2 + 1;
                    iVar3 = native_UnityEngine_Transform__get_childCount_772a64(lVar8,0);
                  } while (iVar2 < iVar3);
                }
                iVar1 = iVar1 + 1;
                iVar2 = native_UnityEngine_Transform__get_childCount_772a64(lVar4,0);
              } while (iVar1 < iVar2);
            }
            iVar17 = iVar17 + 1;
            lVar4 = native_UnityEngine_Component__get_transform_8da62c(param_1,0);
            if (lVar4 == 0) goto LAB_00dcb6b0;
          }
          lVar4 = native_UnityEngine_Component__get_gameObject_8da66c(param_1,0);
          if ((lVar4 != 0) &&
             (lVar4 = native_UnityEngine_GameObject__GetComponentsInChildren_Collider__4a2650
                                (lVar4,
                                 _Method_UnityEngine_GameObject_GetComponentsInChildren_RectMask2D____12e4b58
                                ), lVar4 != 0)) {
            uVar15 = (uint)*(undefined8 *)(lVar4 + 0x18);
            uVar16 = uVar15 - 1;
            if ((int)uVar16 < 0) goto LAB_00dcb5ec;
            if (uVar15 <= uVar16) goto LAB_00dcb684;
            plVar13 = (long *)(lVar4 + (long)(int)uVar16 * 8 + 0x20);
            goto LAB_00dcb5bc;
          }
        }
      }
    }
  }
LAB_00dcb6b0:
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
LAB_00dcb5ec:
  lVar4 = native_UnityEngine_Component__get_gameObject_8da66c(param_1,0);
  if ((lVar4 != 0) &&
     (lVar4 = native_UnityEngine_GameObject__GetComponentsInChildren_Collider__4a2650
                        (lVar4,
                         _Method_UnityEngine_GameObject_GetComponentsInChildren_TMP_Text____12e4b60)
     , lVar4 != 0)) {
    uVar15 = (uint)*(undefined8 *)(lVar4 + 0x18);
    uVar16 = uVar15 - 1;
    if ((int)uVar16 < 0) {
      return;
    }
    if (uVar16 < uVar15) {
      plVar13 = (long *)(lVar4 + (long)(int)uVar16 * 8 + 0x20);
      do {
        if (*plVar13 == 0) goto LAB_00dcb6b0;
        native_TMPro_TMP_Text__set_isTextObjectScaleStatic_4bbd6c(*plVar13,1,0);
        if (*(uint *)(lVar4 + 0x18) <= uVar16) break;
        plVar14 = (long *)*plVar13;
        if (plVar14 == (long *)0x0) goto LAB_00dcb6b0;
        (**(code **)(*plVar14 + 0x2c8))(plVar14,0,*(undefined8 *)(*plVar14 + 0x2d0));
        uVar16 = uVar16 - 1;
        if ((int)uVar16 < 0) {
          return;
        }
        plVar13 = plVar13 + -1;
      } while (uVar16 < *(uint *)(lVar4 + 0x18));
    }
    goto LAB_00dcb684;
  }
  goto LAB_00dcb6b0;
  while( true ) {
    native_UnityEngine_Behaviour__set_enabled_8d7b0c(*plVar13,0,0);
    uVar16 = uVar16 - 1;
    if ((int)uVar16 < 0) goto LAB_00dcb5ec;
    plVar13 = plVar13 + -1;
    if (*(uint *)(lVar4 + 0x18) <= uVar16) break;
LAB_00dcb5bc:
    if (*plVar13 == 0) goto LAB_00dcb6b0;
  }
LAB_00dcb684:
  uVar5 = native_sub_43283c();
                    /* WARNING: Subroutine does not return */
  native_sub_4327dc(uVar5,0);
}



/* MG_BlocksEngine2.UI.BE2_UI_SelectionBlock$$PerformResize @ 0xdcb6b4
 * void MG_BlocksEngine2_UI_BE2_UI_SelectionBlock__PerformResize (MG_BlocksEngine2_UI_BE2_UI_SelectionBlock_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MG_BlocksEngine2.UI.BE2_UI_SelectionBlock$$PerformResize
   void MG_BlocksEngine2_UI_BE2_UI_SelectionBlock__PerformResize
   (MG_BlocksEngine2_UI_BE2_UI_SelectionBlock_o* __this, const MethodInfo* method); */

void native_MG_BlocksEngine2_UI_BE2_UI_SelectionBlock__PerformResize_dcb6b4(long param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  ulong uVar9;
  long lVar10;
  int iVar11;
  
  if ((bRam0000000001346dee & 1) == 0) {
    native_sub_43273c(&Method_UnityEngine_Component_GetComponent_TMP_Text____12e2b38);
    native_sub_43273c(&Method_UnityEngine_Component_GetComponent_Text____12e2b40);
    native_sub_43273c(&Method_UnityEngine_GameObject_AddComponent_ContentSizeFitter____12e47e0);
    native_sub_43273c(&Method_UnityEngine_GameObject_GetComponent_ContentSizeFitter____12e4988);
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    bRam0000000001346dee = 1;
  }
  lVar4 = native_UnityEngine_Component__get_transform_8da62c(param_1,0);
  if (lVar4 != 0) {
    iVar11 = 0;
    while( true ) {
      iVar1 = native_UnityEngine_Transform__get_childCount_772a64(lVar4,0);
      if (iVar1 <= iVar11) {
        return;
      }
      lVar4 = native_UnityEngine_Component__get_transform_8da62c(param_1,0);
      if (lVar4 == 0) break;
      lVar4 = native_UnityEngine_Transform__GetChild_772ef0(lVar4,iVar11,0);
      if ((*(long *)(param_1 + 0x18) == 0) ||
         (lVar5 = native_UnityEngine_GameObject__get_transform_8de5c8(*(long *)(param_1 + 0x18),0),
         lVar5 == 0)) break;
      lVar5 = native_UnityEngine_Transform__GetChild_772ef0(lVar5,iVar11,0);
      if (lVar4 == 0) break;
      iVar1 = native_UnityEngine_Transform__get_childCount_772a64(lVar4,0);
      if (0 < iVar1) {
        iVar1 = 0;
        do {
          lVar6 = native_UnityEngine_Transform__GetChild_772ef0(lVar4,iVar1,0);
          if ((lVar5 == 0) ||
             (native_UnityEngine_Transform__GetChild_772ef0(lVar5,iVar1,0), lVar6 == 0))
          goto LAB_00dcb974;
          iVar2 = native_UnityEngine_Transform__get_childCount_772a64(lVar6,0);
          if (0 < iVar2) {
            iVar2 = 0;
            do {
              lVar7 = native_UnityEngine_Transform__GetChild_772ef0(lVar6,iVar2,0);
              if (lVar7 == 0) goto LAB_00dcb974;
              uVar8 = native_UnityEngine_Component__GetComponent_ActiveAnimation__49daec
                                (lVar7,_Method_UnityEngine_Component_GetComponent_Text____12e2b40);
              if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
                 (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
                native_sub_4327ec(_UnityEngine_Object_TypeInfo_12d54e0);
              }
              uVar9 = native_UnityEngine_Object__op_Implicit_8e1b98(uVar8,0);
              if ((uVar9 & 1) == 0) {
                uVar8 = native_UnityEngine_Component__GetComponent_ActiveAnimation__49daec
                                  (lVar7,
                                   _Method_UnityEngine_Component_GetComponent_TMP_Text____12e2b38);
                if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
                   (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
                  native_sub_4327ec(_UnityEngine_Object_TypeInfo_12d54e0);
                }
                uVar9 = native_UnityEngine_Object__op_Implicit_8e1b98(uVar8,0);
                if ((uVar9 & 1) != 0) goto LAB_00dcb8ac;
              }
              else {
LAB_00dcb8ac:
                lVar10 = native_UnityEngine_Component__get_gameObject_8da66c(lVar7,0);
                if (lVar10 == 0) goto LAB_00dcb974;
                uVar8 = native_UnityEngine_GameObject__GetComponent_BE2_BlockSectionHeader_Custom__4a2214
                                  (lVar10,
                                   _Method_UnityEngine_GameObject_GetComponent_ContentSizeFitter____12e4988
                                  );
                if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
                   (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
                  native_sub_4327ec(_UnityEngine_Object_TypeInfo_12d54e0);
                }
                uVar9 = native_UnityEngine_Object__op_Implicit_8e1b98(uVar8,0);
                if ((uVar9 & 1) == 0) {
                  lVar7 = native_UnityEngine_Component__get_gameObject_8da66c(lVar7,0);
                  if ((lVar7 == 0) ||
                     (lVar7 = native_UnityEngine_GameObject__AddComponent_ActiveAnimation__4a2118
                                        (lVar7,
                                         _Method_UnityEngine_GameObject_AddComponent_ContentSizeFitter____12e47e0
                                        ), lVar7 == 0)) goto LAB_00dcb974;
                  native_UnityEngine_UI_ContentSizeFitter__set_horizontalFit_7d530c(lVar7,2,0);
                }
              }
              iVar2 = iVar2 + 1;
              iVar3 = native_UnityEngine_Transform__get_childCount_772a64(lVar6,0);
            } while (iVar2 < iVar3);
          }
          iVar1 = iVar1 + 1;
          iVar2 = native_UnityEngine_Transform__get_childCount_772a64(lVar4,0);
        } while (iVar1 < iVar2);
      }
      iVar11 = iVar11 + 1;
      lVar4 = native_UnityEngine_Component__get_transform_8da62c(param_1,0);
      if (lVar4 == 0) break;
    }
  }
LAB_00dcb974:
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* MG_BlocksEngine2.UI.BE2_UI_SelectionBlock$$.ctor @ 0xdcb998
 * void MG_BlocksEngine2_UI_BE2_UI_SelectionBlock___ctor (MG_BlocksEngine2_UI_BE2_UI_SelectionBlock_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MG_BlocksEngine2.UI.BE2_UI_SelectionBlock$$.ctor
   void MG_BlocksEngine2_UI_BE2_UI_SelectionBlock___ctor
   (MG_BlocksEngine2_UI_BE2_UI_SelectionBlock_o* __this, const MethodInfo* method); */

undefined1  [16] native_MG_BlocksEngine2_UI_BE2_UI_SelectionBlock___ctor_dcb998(ulong param_1)

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


