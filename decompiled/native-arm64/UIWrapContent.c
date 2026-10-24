/* ARM64 IL2CPP native pseudocode from Ghidra.
 * Recovered implementation, not original C# source.
 * Function boundaries follow the IL2CPP method address table. */


/* UIWrapContent$$Start @ 0x94ce60
 * void UIWrapContent__Start (UIWrapContent_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIWrapContent$$Start
   void UIWrapContent__Start (UIWrapContent_o* __this, const MethodInfo* method); */

void native_UIWrapContent__Start_94ce60(long *param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  long lVar3;
  
  if ((bRam000000000134146c & 1) == 0) {
    native_sub_43273c(&Method_UnityEngine_Component_GetComponent_UIPanel____12e2be0);
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    native_sub_43273c(&UIPanel_OnClippingMoved_TypeInfo_12d7a70);
    bRam000000000134146c = 1;
  }
  (**(code **)(*param_1 + 0x198))(param_1,*(undefined8 *)(*param_1 + 0x1a0));
  (**(code **)(*param_1 + 0x1c8))(param_1,*(undefined8 *)(*param_1 + 0x1d0));
  lVar3 = param_1[9];
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar1 = native_UnityEngine_Object__op_Inequality_8d76fc(lVar3,0,0);
  if ((uVar1 & 1) != 0) {
    if (param_1[9] != 0) {
      lVar3 = native_UnityEngine_Component__GetComponent_ActiveAnimation__49daec
                        (param_1[9],_Method_UnityEngine_Component_GetComponent_UIPanel____12e2be0);
      uVar2 = native_sub_432808(_UIPanel_OnClippingMoved_TypeInfo_12d7a70);
      native_UIPanel_OnClippingMoved___ctor_55784c(uVar2,param_1,*(undefined8 *)(*param_1 + 400),0);
      if (lVar3 != 0) {
        *(undefined8 *)(lVar3 + 0x110) = uVar2;
        native_sub_4326e0(lVar3 + 0x110,uVar2);
        goto LAB_0094cf60;
      }
    }
                    /* WARNING: Subroutine does not return */
    native_sub_432810();
  }
LAB_0094cf60:
  *(undefined1 *)((long)param_1 + 0x51) = 0;
  return;
}



/* UIWrapContent$$OnMove @ 0x94cf78
 * void UIWrapContent__OnMove (UIWrapContent_o* __this, UIPanel_o* panel, const MethodInfo* method); */

/* UIWrapContent$$OnMove
   void UIWrapContent__OnMove (UIWrapContent_o* __this, UIPanel_o* panel, const MethodInfo* method);
    */

void native_UIWrapContent__OnMove_94cf78(long *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0094cf80. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x1c8))(param_1,*(undefined8 *)(*param_1 + 0x1d0));
  return;
}



/* UIWrapContent$$SortBasedOnScrollMovement @ 0x94cf84
 * void UIWrapContent__SortBasedOnScrollMovement (UIWrapContent_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIWrapContent$$SortBasedOnScrollMovement
   void UIWrapContent__SortBasedOnScrollMovement (UIWrapContent_o* __this, const MethodInfo*
   method); */

void native_UIWrapContent__SortBasedOnScrollMovement_94cf84(long *param_1)

{
  int iVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  int iVar7;
  
  if ((bRam000000000134146d & 1) == 0) {
    native_sub_43273c(&Method_System_Comparison_Transform___ctor___12d8b40);
    native_sub_43273c(&System_Comparison_Transform__TypeInfo_12d21e0);
    native_sub_43273c(&Method_System_Collections_Generic_List_Transform__Add___12dd178);
    native_sub_43273c(&Method_System_Collections_Generic_List_Transform__Clear___12dd180);
    native_sub_43273c(&Method_System_Collections_Generic_List_Transform__Sort___12dd1a0);
    native_sub_43273c(&Method_UIGrid_SortHorizontal___12e7818);
    native_sub_43273c(&Method_UIGrid_SortVertical___12e7828);
    bRam000000000134146d = 1;
  }
  uVar2 = native_UIWrapContent__CacheScrollView_94d148(param_1);
  if ((uVar2 & 1) == 0) {
    return;
  }
  if (param_1[0xb] != 0) {
    native_System_Collections_Generic_List_Action___Clear_d40e80
              (param_1[0xb],_Method_System_Collections_Generic_List_Transform__Clear___12dd180);
    lVar3 = param_1[7];
    if (lVar3 != 0) {
      iVar7 = 0;
      while (iVar1 = native_UnityEngine_Transform__get_childCount_772a64(lVar3,0), iVar7 < iVar1) {
        if (param_1[7] == 0) goto LAB_0094d144;
        lVar3 = native_UnityEngine_Transform__GetChild_772ef0(param_1[7],iVar7,0);
        if ((char)param_1[5] == '\0') {
LAB_0094d088:
          if (param_1[0xb] == 0) goto LAB_0094d144;
          native_System_Collections_Generic_List_int_____Add_d40c00
                    (param_1[0xb],lVar3,
                     _Method_System_Collections_Generic_List_Transform__Add___12dd178);
        }
        else {
          if ((lVar3 == 0) ||
             (lVar4 = native_UnityEngine_Component__get_gameObject_8da66c(lVar3,0), lVar4 == 0))
          goto LAB_0094d144;
          uVar2 = native_UnityEngine_GameObject__get_activeInHierarchy_8de728(lVar4,0);
          if ((uVar2 & 1) != 0) goto LAB_0094d088;
        }
        lVar3 = param_1[7];
        iVar7 = iVar7 + 1;
        if (lVar3 == 0) goto LAB_0094d144;
      }
      lVar3 = param_1[10];
      lVar4 = param_1[0xb];
      uVar5 = native_sub_432808(_System_Comparison_Transform__TypeInfo_12d21e0);
      if ((char)lVar3 == '\0') {
        puVar6 = (undefined8 *)&Method_UIGrid_SortVertical___12e7828;
      }
      else {
        puVar6 = (undefined8 *)&Method_UIGrid_SortHorizontal___12e7818;
      }
      native_System_Comparison_ABSSequentiable____ctor_bbdf08
                (uVar5,0,*puVar6,_Method_System_Comparison_Transform___ctor___12d8b40);
      if (lVar4 != 0) {
        native_System_Collections_Generic_List_ABSSequentiable___Sort_d4266c
                  (lVar4,uVar5,_Method_System_Collections_Generic_List_Transform__Sort___12dd1a0);
                    /* WARNING: Could not recover jumptable at 0x0094d140. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*param_1 + 0x1b8))(param_1,*(undefined8 *)(*param_1 + 0x1c0));
        return;
      }
    }
  }
LAB_0094d144:
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* UIWrapContent$$SortAlphabetically @ 0x94d2c4
 * void UIWrapContent__SortAlphabetically (UIWrapContent_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIWrapContent$$SortAlphabetically
   void UIWrapContent__SortAlphabetically (UIWrapContent_o* __this, const MethodInfo* method); */

void native_UIWrapContent__SortAlphabetically_94d2c4(long *param_1)

{
  int iVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  int iVar6;
  
  if ((bRam000000000134146e & 1) == 0) {
    native_sub_43273c(&Method_System_Comparison_Transform___ctor___12d8b40);
    native_sub_43273c(&System_Comparison_Transform__TypeInfo_12d21e0);
    native_sub_43273c(&Method_System_Collections_Generic_List_Transform__Add___12dd178);
    native_sub_43273c(&Method_System_Collections_Generic_List_Transform__Clear___12dd180);
    native_sub_43273c(&Method_System_Collections_Generic_List_Transform__Sort___12dd1a0);
    native_sub_43273c(&Method_UIGrid_SortByName___12e7808);
    bRam000000000134146e = 1;
  }
  uVar2 = native_UIWrapContent__CacheScrollView_94d148(param_1);
  if ((uVar2 & 1) == 0) {
    return;
  }
  if (param_1[0xb] != 0) {
    native_System_Collections_Generic_List_Action___Clear_d40e80
              (param_1[0xb],_Method_System_Collections_Generic_List_Transform__Clear___12dd180);
    lVar3 = param_1[7];
    if (lVar3 != 0) {
      iVar6 = 0;
      while (iVar1 = native_UnityEngine_Transform__get_childCount_772a64(lVar3,0), iVar6 < iVar1) {
        if (param_1[7] == 0) goto LAB_0094d460;
        lVar3 = native_UnityEngine_Transform__GetChild_772ef0(param_1[7],iVar6,0);
        if ((char)param_1[5] == '\0') {
LAB_0094d3bc:
          if (param_1[0xb] == 0) goto LAB_0094d460;
          native_System_Collections_Generic_List_int_____Add_d40c00
                    (param_1[0xb],lVar3,
                     _Method_System_Collections_Generic_List_Transform__Add___12dd178);
        }
        else {
          if ((lVar3 == 0) ||
             (lVar4 = native_UnityEngine_Component__get_gameObject_8da66c(lVar3,0), lVar4 == 0))
          goto LAB_0094d460;
          uVar2 = native_UnityEngine_GameObject__get_activeInHierarchy_8de728(lVar4,0);
          if ((uVar2 & 1) != 0) goto LAB_0094d3bc;
        }
        lVar3 = param_1[7];
        iVar6 = iVar6 + 1;
        if (lVar3 == 0) goto LAB_0094d460;
      }
      lVar3 = param_1[0xb];
      uVar5 = native_sub_432808(_System_Comparison_Transform__TypeInfo_12d21e0);
      native_System_Comparison_ABSSequentiable____ctor_bbdf08
                (uVar5,0,_Method_UIGrid_SortByName___12e7808,
                 _Method_System_Comparison_Transform___ctor___12d8b40);
      if (lVar3 != 0) {
        native_System_Collections_Generic_List_ABSSequentiable___Sort_d4266c
                  (lVar3,uVar5,_Method_System_Collections_Generic_List_Transform__Sort___12dd1a0);
                    /* WARNING: Could not recover jumptable at 0x0094d45c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*param_1 + 0x1b8))(param_1,*(undefined8 *)(*param_1 + 0x1c0));
        return;
      }
    }
  }
LAB_0094d460:
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* UIWrapContent$$CacheScrollView @ 0x94d148
 * bool UIWrapContent__CacheScrollView (UIWrapContent_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIWrapContent$$CacheScrollView
   bool UIWrapContent__CacheScrollView (UIWrapContent_o* __this, const MethodInfo* method); */

undefined8 native_UIWrapContent__CacheScrollView_94d148(long param_1)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  ulong uVar4;
  long *plVar5;
  
  if ((bRam000000000134146f & 1) == 0) {
    native_sub_43273c(&Method_UnityEngine_Component_GetComponent_UIScrollView____12e2c08);
    native_sub_43273c(&Method_NGUITools_FindInParents_UIPanel____12e5760);
    native_sub_43273c(&NGUITools_TypeInfo_12d53c8);
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    bRam000000000134146f = 1;
  }
  uVar2 = native_UnityEngine_Component__get_transform_8da62c(param_1,0);
  *(undefined8 *)(param_1 + 0x38) = uVar2;
  native_sub_4326e0(param_1 + 0x38);
  uVar2 = native_UnityEngine_Component__get_gameObject_8da66c(param_1,0);
  if (((*(byte *)(_NGUITools_TypeInfo_12d53c8 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_NGUITools_TypeInfo_12d53c8 + 0xe0) == 0)) {
    native_sub_4327ec(_NGUITools_TypeInfo_12d53c8);
  }
  lVar3 = native_NGUITools__FindInParents_object__4a5c04
                    (uVar2,_Method_NGUITools_FindInParents_UIPanel____12e5760);
  plVar5 = (long *)(param_1 + 0x40);
  *plVar5 = lVar3;
  native_sub_4326e0(plVar5,lVar3);
  if (*plVar5 != 0) {
    lVar3 = native_UnityEngine_Component__GetComponent_ActiveAnimation__49daec
                      (*plVar5,_Method_UnityEngine_Component_GetComponent_UIScrollView____12e2c08);
    plVar5 = (long *)(param_1 + 0x48);
    *plVar5 = lVar3;
    native_sub_4326e0(plVar5,lVar3);
    lVar3 = *plVar5;
    if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    uVar4 = native_UnityEngine_Object__op_Equality_8e9a3c(lVar3,0,0);
    if ((uVar4 & 1) == 0) {
      if (*plVar5 == 0) goto LAB_0094d2c0;
      iVar1 = *(int *)(*plVar5 + 0x18);
      if (iVar1 == 1) {
        *(undefined1 *)(param_1 + 0x50) = 0;
        return 1;
      }
      if (iVar1 == 0) {
        *(undefined1 *)(param_1 + 0x50) = 1;
        return 1;
      }
    }
    return 0;
  }
LAB_0094d2c0:
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* UIWrapContent$$ResetChildPositions @ 0x94d464
 * void UIWrapContent__ResetChildPositions (UIWrapContent_o* __this, const MethodInfo* method); */

/* UIWrapContent$$ResetChildPositions
   void UIWrapContent__ResetChildPositions (UIWrapContent_o* __this, const MethodInfo* method); */

void native_UIWrapContent__ResetChildPositions_94d464(long *param_1)

{
  int iVar1;
  uint uVar2;
  long lVar3;
  int iVar4;
  float fVar5;
  float fVar6;
  
  if ((bRam0000000001341470 & 1) == 0) {
    native_sub_43273c(&Method_System_Collections_Generic_List_Transform__get_Count___12dd1a8);
    native_sub_43273c(&Method_System_Collections_Generic_List_Transform__get_Item___12dd1b0);
    bRam0000000001341470 = 1;
  }
  lVar3 = param_1[0xb];
  if (lVar3 != 0) {
    iVar1 = *(int *)(lVar3 + 0x18);
    if (iVar1 < 1) {
      return;
    }
    iVar4 = 0;
    uVar2 = 0;
    do {
      if (*(uint *)(lVar3 + 0x18) <= uVar2) {
        native_System_ThrowHelper__ThrowArgumentOutOfRangeException_9fe0f4(0);
      }
      lVar3 = *(long *)(*(long *)(lVar3 + 0x10) + (long)(int)uVar2 * 8 + 0x20);
      if ((char)param_1[10] == '\0') {
        fVar6 = (float)((int)param_1[3] * iVar4);
        fVar5 = 0.0;
      }
      else {
        fVar5 = (float)(int)((int)param_1[3] * uVar2);
        fVar6 = 0.0;
      }
      if (lVar3 == 0) break;
      native_UnityEngine_Transform__set_localPosition_7718a4(fVar5,fVar6,0,lVar3,0);
      (**(code **)(*param_1 + 0x1d8))(param_1,lVar3,uVar2,*(undefined8 *)(*param_1 + 0x1e0));
      uVar2 = uVar2 + 1;
      if (iVar1 <= (int)uVar2) {
        return;
      }
      lVar3 = param_1[0xb];
      iVar4 = iVar4 + -1;
    } while (lVar3 != 0);
  }
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* UIWrapContent$$WrapContent @ 0x94d56c
 * void UIWrapContent__WrapContent (UIWrapContent_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIWrapContent$$WrapContent
   void UIWrapContent__WrapContent (UIWrapContent_o* __this, const MethodInfo* method); */

void native_UIWrapContent__WrapContent_94d56c(long *param_1)

{
  int iVar1;
  uint uVar2;
  long lVar3;
  int iVar4;
  long *plVar5;
  long lVar6;
  undefined8 uVar7;
  ulong uVar8;
  ulong uVar9;
  undefined4 *puVar10;
  ulong uVar11;
  byte bVar12;
  int iVar13;
  long lVar14;
  undefined4 uVar15;
  float fVar16;
  undefined4 uVar17;
  uint uVar18;
  undefined4 uVar19;
  ulong uVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  
  if ((bRam0000000001341471 & 1) == 0) {
    native_sub_43273c(&Method_System_Collections_Generic_List_Transform__get_Count___12dd1a8);
    native_sub_43273c(&Method_System_Collections_Generic_List_Transform__get_Item___12dd1b0);
    native_sub_43273c(&NGUITools_TypeInfo_12d53c8);
    native_sub_43273c(&UICamera_TypeInfo_12d6410);
    bRam0000000001341471 = 1;
  }
  if ((param_1[0xb] != 0) && (plVar5 = (long *)param_1[8], plVar5 != (long *)0x0)) {
    iVar1 = *(int *)(param_1[0xb] + 0x18);
    lVar14 = param_1[3];
    lVar6 = (**(code **)(*plVar5 + 0x1e8))(plVar5,*(undefined8 *)(*plVar5 + 0x1f0));
    if (lVar6 != 0) {
      uVar2 = *(uint *)(lVar6 + 0x18);
      fVar25 = (float)(iVar1 * (int)lVar14) * 0.5;
      uVar11 = 0xffffffffffffffff;
      puVar10 = (undefined4 *)(lVar6 + 0x28);
      do {
        if ((ulong)uVar2 <= uVar11 + 1) goto LAB_0094db6c;
        if (param_1[7] == 0) goto LAB_0094db68;
        uVar17 = puVar10[-1];
        uVar19 = *puVar10;
        uVar15 = native_UnityEngine_Transform__InverseTransformPoint_7729a0
                           (puVar10[-2],param_1[7],0);
        if ((ulong)*(uint *)(lVar6 + 0x18) <= uVar11 + 1) goto LAB_0094db6c;
        puVar10[-2] = uVar15;
        puVar10[-1] = uVar17;
        *puVar10 = uVar19;
        uVar2 = *(uint *)(lVar6 + 0x18);
        uVar11 = uVar11 + 1;
        puVar10 = puVar10 + 3;
      } while (uVar11 < 3);
      if ((uVar2 != 0) && (2 < uVar2)) {
        fVar21 = *(float *)(lVar6 + 0x20);
        fVar22 = *(float *)(lVar6 + 0x24);
        fVar24 = *(float *)(lVar6 + 0x38);
        fVar27 = *(float *)(lVar6 + 0x3c);
        fVar16 = (float)native_UnityEngine_Mathf__Clamp01_8d9d9c(0x3f000000,0);
        uVar2 = *(uint *)(lVar6 + 0x18);
        if (uVar2 != 0) {
          fVar26 = fVar25 + fVar25;
          if ((char)param_1[10] == '\0') {
            if (uVar2 < 3) goto LAB_0094db6c;
            lVar14 = param_1[0xb];
            if (lVar14 == 0) goto LAB_0094db68;
            iVar1 = *(int *)(lVar14 + 0x18);
            if (0 < iVar1) {
              lVar3 = param_1[3];
              uVar20 = (ulong)(uint)*(float *)(lVar6 + 0x24);
              fVar21 = *(float *)(lVar6 + 0x3c);
              fVar22 = fVar22 + (fVar27 - fVar22) * fVar16;
              iVar13 = 1;
              fVar16 = *(float *)(lVar6 + 0x24) - (float)(int)lVar3;
              uVar11 = (ulong)(uint)fVar16;
              bVar12 = 1;
              while( true ) {
                uVar2 = iVar13 - 1;
                uVar8 = uVar11;
                if (*(uint *)(lVar14 + 0x18) <= uVar2) {
                  native_System_ThrowHelper__ThrowArgumentOutOfRangeException_9fe0f4(0);
                  uVar8 = uVar11;
                }
                lVar14 = *(long *)(*(long *)(lVar14 + 0x10) + (long)(int)uVar2 * 8 + 0x20);
                if (lVar14 == 0) break;
                native_UnityEngine_Transform__get_localPosition_7717f4(lVar14,0);
                fVar24 = (float)uVar8 - fVar22;
                if (-fVar25 <= fVar24) {
                  if (fVar25 < fVar24) {
                    uVar7 = native_UnityEngine_Transform__get_localPosition_7717f4(lVar14,0);
                    iVar4 = (int)param_1[3];
                    fVar27 = (float)uVar8 - fVar26;
                    goto LAB_0094d9c8;
                  }
                  if (*(char *)((long)param_1 + 0x51) != '\0') goto LAB_0094da1c;
                }
                else {
                  uVar7 = native_UnityEngine_Transform__get_localPosition_7717f4(lVar14,0);
                  iVar4 = (int)param_1[3];
                  fVar27 = fVar26 + (float)uVar8;
LAB_0094d9c8:
                  uVar9 = (ulong)(uint)fVar27;
                  fVar24 = fVar27 - fVar22;
                  uVar11 = uVar20;
                  iVar4 = native_UnityEngine_Mathf__RoundToInt_8e50f0(fVar27 / (float)iVar4,0);
                  if (((int)param_1[4] == *(int *)((long)param_1 + 0x24)) ||
                     (((int)param_1[4] <= iVar4 && (iVar4 <= *(int *)((long)param_1 + 0x24))))) {
                    native_UnityEngine_Transform__set_localPosition_7718a4
                              (uVar7,uVar9,uVar20,lVar14,0);
                    uVar8 = uVar9;
LAB_0094da1c:
                    (**(code **)(*param_1 + 0x1d8))
                              (param_1,lVar14,uVar2,*(undefined8 *)(*param_1 + 0x1e0));
                  }
                  else {
                    bVar12 = 0;
                    uVar20 = uVar11;
                  }
                }
                uVar11 = uVar8;
                if (*(char *)((long)param_1 + 0x1c) != '\0') {
                  if ((param_1[8] == 0) || (param_1[7] == 0)) break;
                  fVar27 = *(float *)(param_1[8] + 0x178);
                  native_UnityEngine_Transform__get_localPosition_7717f4(param_1[7],0);
                  uVar11 = uVar8;
                  uVar7 = native_UnityEngine_Component__get_gameObject_8da66c(lVar14,0);
                  if (((*(byte *)(_UICamera_TypeInfo_12d6410 + 0x133) >> 2 & 1) != 0) &&
                     (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
                    native_sub_4327ec(_UICamera_TypeInfo_12d6410);
                  }
                  uVar9 = native_UICamera__IsPressed_c97eb8(uVar7,0);
                  if ((uVar9 & 1) == 0) {
                    fVar24 = fVar24 + (fVar27 - (float)uVar8);
                    uVar7 = native_UnityEngine_Component__get_gameObject_8da66c(lVar14,0);
                    if (((*(byte *)(_NGUITools_TypeInfo_12d53c8 + 0x133) >> 2 & 1) != 0) &&
                       (*(int *)(_NGUITools_TypeInfo_12d53c8 + 0xe0) == 0)) {
                      native_sub_4327ec();
                    }
                    native_NGUITools__SetActive_731b6c
                              (uVar7,fVar16 < fVar24 && fVar24 < fVar21 + (float)(int)lVar3,0,0);
                  }
                }
                if (iVar1 <= iVar13) goto LAB_0094db1c;
                lVar14 = param_1[0xb];
                iVar13 = iVar13 + 1;
                if (lVar14 == 0) break;
              }
              goto LAB_0094db68;
            }
          }
          else {
            if (uVar2 < 3) goto LAB_0094db6c;
            lVar14 = param_1[0xb];
            if (lVar14 == 0) goto LAB_0094db68;
            iVar1 = *(int *)(lVar14 + 0x18);
            if (0 < iVar1) {
              lVar3 = param_1[3];
              uVar20 = (ulong)(uint)*(float *)(lVar6 + 0x20);
              fVar22 = *(float *)(lVar6 + 0x38);
              fVar21 = fVar21 + (fVar24 - fVar21) * fVar16;
              iVar13 = 1;
              fVar16 = *(float *)(lVar6 + 0x20) - (float)(int)lVar3;
              uVar11 = (ulong)(uint)fVar16;
              bVar12 = 1;
              while( true ) {
                uVar2 = iVar13 - 1;
                if (*(uint *)(lVar14 + 0x18) <= uVar2) {
                  native_System_ThrowHelper__ThrowArgumentOutOfRangeException_9fe0f4(0);
                }
                lVar14 = *(long *)(*(long *)(lVar14 + 0x10) + (long)(int)uVar2 * 8 + 0x20);
                if (lVar14 == 0) break;
                fVar24 = (float)native_UnityEngine_Transform__get_localPosition_7717f4(lVar14,0);
                fVar24 = fVar24 - fVar21;
                if (-fVar25 <= fVar24) {
                  if (fVar25 < fVar24) {
                    fVar27 = (float)native_UnityEngine_Transform__get_localPosition_7717f4(lVar14,0)
                    ;
                    uVar18 = *(uint *)(param_1 + 3);
                    fVar27 = fVar27 - fVar26;
                    goto LAB_0094d78c;
                  }
                  if (*(char *)((long)param_1 + 0x51) != '\0') goto LAB_0094d7e0;
                }
                else {
                  fVar27 = (float)native_UnityEngine_Transform__get_localPosition_7717f4(lVar14,0);
                  uVar18 = *(uint *)(param_1 + 3);
                  fVar27 = fVar26 + fVar27;
LAB_0094d78c:
                  uVar9 = (ulong)uVar18;
                  fVar24 = fVar27 - fVar21;
                  uVar8 = uVar20;
                  iVar4 = native_UnityEngine_Mathf__RoundToInt_8e50f0(fVar27 / (float)(int)uVar18,0)
                  ;
                  if (((int)param_1[4] == *(int *)((long)param_1 + 0x24)) ||
                     (((int)param_1[4] <= iVar4 && (iVar4 <= *(int *)((long)param_1 + 0x24))))) {
                    native_UnityEngine_Transform__set_localPosition_7718a4
                              (fVar27,uVar11,uVar20,lVar14,0);
LAB_0094d7e0:
                    (**(code **)(*param_1 + 0x1d8))
                              (param_1,lVar14,uVar2,*(undefined8 *)(*param_1 + 0x1e0));
                  }
                  else {
                    bVar12 = 0;
                    uVar11 = uVar9;
                    uVar20 = uVar8;
                  }
                }
                if (*(char *)((long)param_1 + 0x1c) != '\0') {
                  if ((param_1[8] == 0) || (param_1[7] == 0)) break;
                  fVar23 = *(float *)(param_1[8] + 0x174);
                  fVar27 = (float)native_UnityEngine_Transform__get_localPosition_7717f4
                                            (param_1[7],0);
                  uVar7 = native_UnityEngine_Component__get_gameObject_8da66c(lVar14,0);
                  if (((*(byte *)(_UICamera_TypeInfo_12d6410 + 0x133) >> 2 & 1) != 0) &&
                     (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
                    native_sub_4327ec(_UICamera_TypeInfo_12d6410);
                  }
                  uVar8 = native_UICamera__IsPressed_c97eb8(uVar7,0);
                  if ((uVar8 & 1) == 0) {
                    fVar24 = fVar24 + (fVar23 - fVar27);
                    uVar7 = native_UnityEngine_Component__get_gameObject_8da66c(lVar14,0);
                    if (((*(byte *)(_NGUITools_TypeInfo_12d53c8 + 0x133) >> 2 & 1) != 0) &&
                       (*(int *)(_NGUITools_TypeInfo_12d53c8 + 0xe0) == 0)) {
                      native_sub_4327ec();
                    }
                    native_NGUITools__SetActive_731b6c
                              (uVar7,fVar16 < fVar24 && fVar24 < fVar22 + (float)(int)lVar3,0,0);
                  }
                }
                if (iVar1 <= iVar13) goto LAB_0094db1c;
                lVar14 = param_1[0xb];
                iVar13 = iVar13 + 1;
                if (lVar14 == 0) break;
              }
              goto LAB_0094db68;
            }
          }
          bVar12 = 1;
LAB_0094db1c:
          if (param_1[9] != 0) {
            *(byte *)(param_1[9] + 0x20) = ~bVar12 & 1;
            if (param_1[9] != 0) {
              *(undefined1 *)(param_1[9] + 0xe8) = 0;
              return;
            }
          }
          goto LAB_0094db68;
        }
      }
LAB_0094db6c:
      uVar7 = native_sub_43283c();
                    /* WARNING: Subroutine does not return */
      native_sub_4327dc(uVar7,0);
    }
  }
LAB_0094db68:
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* UIWrapContent$$OnValidate @ 0x94db78
 * void UIWrapContent__OnValidate (UIWrapContent_o* __this, const MethodInfo* method); */

/* UIWrapContent$$OnValidate
   void UIWrapContent__OnValidate (UIWrapContent_o* __this, const MethodInfo* method); */

void native_UIWrapContent__OnValidate_94db78(long param_1)

{
  if (*(int *)(param_1 + 0x24) < *(int *)(param_1 + 0x20)) {
    *(int *)(param_1 + 0x24) = *(int *)(param_1 + 0x20);
  }
  return;
}



/* UIWrapContent$$UpdateItem @ 0x94db8c
 * void UIWrapContent__UpdateItem (UIWrapContent_o* __this, UnityEngine_Transform_o* item, int32_t index, const MethodInfo* method); */

/* UIWrapContent$$UpdateItem
   void UIWrapContent__UpdateItem (UIWrapContent_o* __this, UnityEngine_Transform_o* item, int32_t
   index, const MethodInfo* method); */

void native_UIWrapContent__UpdateItem_94db8c
               (undefined1 param_1 [16],float param_2,long param_3,long param_4,undefined4 param_5)

{
  long *plVar1;
  int iVar2;
  ushort uVar3;
  bool bVar4;
  undefined4 uVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  ulong uVar9;
  ulong uVar10;
  long *plVar11;
  long lVar12;
  long lVar13;
  int *piVar14;
  long lVar15;
  code *pcVar16;
  long lVar17;
  long *plVar18;
  float fVar19;
  long lStack_68;
  
  if (*(long *)(param_3 + 0x30) == 0) {
    return;
  }
  if ((*(long *)(param_3 + 0x48) != 0) && (param_4 != 0)) {
    iVar2 = *(int *)(*(long *)(param_3 + 0x48) + 0x18);
    fVar19 = (float)native_UnityEngine_Transform__get_localPosition_7717f4(param_4,0);
    if (iVar2 != 1) {
      param_2 = fVar19;
    }
    uVar5 = native_UnityEngine_Mathf__RoundToInt_8e50f0(param_2 / (float)*(int *)(param_3 + 0x18),0)
    ;
    lVar15 = *(long *)(param_3 + 0x30);
    plVar11 = (long *)native_UnityEngine_Component__get_gameObject_8da66c(param_4,0);
    if (lVar15 != 0) {
      lStack_68 = lVar15;
      lVar12 = *(long *)(lVar15 + 0x68);
      if (lVar12 == 0) {
        plVar18 = &lStack_68;
        lVar17 = 1;
      }
      else {
        lVar17 = *(long *)(lVar12 + 0x18);
        if (lVar17 == 0) {
          return;
        }
        plVar18 = (long *)(lVar12 + 0x20);
      }
      lVar12 = 0;
      do {
        lVar13 = plVar18[lVar12];
        plVar1 = *(long **)(lVar13 + 0x20);
        lVar6 = *(long *)(lVar13 + 0x28);
        pcVar16 = *(code **)(lVar13 + 0x10);
        if (*(short *)(lVar6 + 0x48) == -1) {
          native_sub_4327f4(lVar6);
        }
        uVar9 = native_sub_432768(lVar6);
        bVar4 = *(char *)(lVar6 + 0x4a) != '\x03';
        if ((uVar9 & 1) == 0) {
          if (bVar4) {
            if ((*(short *)(lVar6 + 0x48) == -1) || (*(long *)(lVar15 + 0x18) == 0))
            goto LAB_0055c5ac;
            uVar9 = native_sub_432760(lVar6);
            uVar10 = native_sub_432b64(lVar6);
            if ((uVar9 & 1) == 0) {
              uVar3 = *(ushort *)(lVar6 + 0x48);
              if ((uVar10 & 1) == 0) {
                lVar6 = *plVar11 + (ulong)uVar3 * 0x10;
                (**(code **)(lVar6 + 0x138))(plVar11,param_5,uVar5,*(undefined8 *)(lVar6 + 0x140));
                goto LAB_0055c5c0;
              }
              lVar6 = native_sub_432764(lVar6);
              lVar13 = *plVar11;
              if ((ulong)*(ushort *)(lVar13 + 0x12a) != 0) {
                uVar9 = 0;
                piVar14 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar14 + -2) == lVar6) {
                    puVar8 = (undefined8 *)
                             (lVar13 + (long)(int)(*piVar14 + (uint)uVar3) * 0x10 + 0x138);
                    goto LAB_0055c3c0;
                  }
                  uVar9 = uVar9 + 1;
                  piVar14 = piVar14 + 4;
                } while (uVar9 < *(ushort *)(lVar13 + 0x12a));
              }
              puVar8 = (undefined8 *)native_sub_3c9b34(plVar11,lVar6,(ulong)uVar3);
LAB_0055c3c0:
              pcVar16 = (code *)*puVar8;
              puVar8 = (undefined8 *)puVar8[1];
            }
            else {
              if ((uVar10 & 1) == 0) {
                uVar7 = *(undefined8 *)(*plVar11 + (ulong)*(ushort *)(lVar6 + 0x48) * 0x10 + 0x140);
              }
              else {
                lVar13 = *plVar11;
                if ((ulong)*(ushort *)(lVar13 + 0x12a) != 0) {
                  uVar9 = 0;
                  piVar14 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar14 + -2) == *(long *)(lVar6 + 0x18)) {
                      lVar13 = lVar13 + (long)(int)(*piVar14 + (uint)*(ushort *)(lVar6 + 0x48)) *
                                        0x10 + 0x138;
                      goto LAB_0055c398;
                    }
                    uVar9 = uVar9 + 1;
                    piVar14 = piVar14 + 4;
                  } while (uVar9 < *(ushort *)(lVar13 + 0x12a));
                }
                lVar13 = native_sub_3c9b34(plVar11);
LAB_0055c398:
                uVar7 = *(undefined8 *)(lVar13 + 8);
              }
              puVar8 = (undefined8 *)native_sub_4327e8(uVar7,lVar6);
              pcVar16 = (code *)*puVar8;
            }
            (*pcVar16)(plVar11,param_5,uVar5,puVar8);
          }
          else {
            if ((((plVar1 == (long *)0x0) || (*(short *)(lVar6 + 0x48) == -1)) ||
                ((*(byte *)(*plVar1 + 0x115) & 1) != 0)) || (*(long *)(lVar15 + 0x18) == 0))
            goto LAB_0055c518;
            uVar9 = native_sub_432760(lVar6);
            uVar10 = native_sub_432b64(lVar6);
            if ((uVar9 & 1) == 0) {
              uVar3 = *(ushort *)(lVar6 + 0x48);
              if ((uVar10 & 1) == 0) {
                lVar6 = *plVar1 + (ulong)uVar3 * 0x10;
                (**(code **)(lVar6 + 0x138))
                          (plVar1,plVar11,param_5,uVar5,*(undefined8 *)(lVar6 + 0x140));
                goto LAB_0055c5c0;
              }
              lVar6 = native_sub_432764(lVar6);
              lVar13 = *plVar1;
              if ((ulong)*(ushort *)(lVar13 + 0x12a) != 0) {
                uVar9 = 0;
                piVar14 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar14 + -2) == lVar6) {
                    puVar8 = (undefined8 *)
                             (lVar13 + (long)(int)(*piVar14 + (uint)uVar3) * 0x10 + 0x138);
                    goto LAB_0055c434;
                  }
                  uVar9 = uVar9 + 1;
                  piVar14 = piVar14 + 4;
                } while (uVar9 < *(ushort *)(lVar13 + 0x12a));
              }
              puVar8 = (undefined8 *)native_sub_3c9b34(plVar1,lVar6,(ulong)uVar3);
LAB_0055c434:
              pcVar16 = (code *)*puVar8;
              puVar8 = (undefined8 *)puVar8[1];
            }
            else {
              if ((uVar10 & 1) == 0) {
                uVar7 = *(undefined8 *)(*plVar1 + (ulong)*(ushort *)(lVar6 + 0x48) * 0x10 + 0x140);
              }
              else {
                lVar13 = *plVar1;
                if ((ulong)*(ushort *)(lVar13 + 0x12a) != 0) {
                  uVar9 = 0;
                  piVar14 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar14 + -2) == *(long *)(lVar6 + 0x18)) {
                      lVar13 = lVar13 + (long)(int)(*piVar14 + (uint)*(ushort *)(lVar6 + 0x48)) *
                                        0x10 + 0x138;
                      goto LAB_0055c40c;
                    }
                    uVar9 = uVar9 + 1;
                    piVar14 = piVar14 + 4;
                  } while (uVar9 < *(ushort *)(lVar13 + 0x12a));
                }
                lVar13 = native_sub_3c9b34(plVar1);
LAB_0055c40c:
                uVar7 = *(undefined8 *)(lVar13 + 8);
              }
              puVar8 = (undefined8 *)native_sub_4327e8(uVar7,lVar6);
              pcVar16 = (code *)*puVar8;
            }
            (*pcVar16)(plVar1,plVar11,param_5,uVar5,puVar8);
          }
        }
        else if (bVar4) {
LAB_0055c518:
          (*pcVar16)(plVar1,plVar11,param_5,uVar5,lVar6);
        }
        else {
LAB_0055c5ac:
          (*pcVar16)(plVar11,param_5,uVar5,lVar6);
        }
LAB_0055c5c0:
        lVar12 = lVar12 + 1;
        if (lVar12 == lVar17) {
          return;
        }
      } while( true );
    }
  }
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* UIWrapContent$$.ctor @ 0x94dc38
 * void UIWrapContent___ctor (UIWrapContent_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIWrapContent$$.ctor
   void UIWrapContent___ctor (UIWrapContent_o* __this, const MethodInfo* method); */

undefined1  [16] native_UIWrapContent___ctor_94dc38(ulong param_1)

{
  undefined8 uVar1;
  undefined1 auVar2 [16];
  
  if ((bRam0000000001341472 & 1) == 0) {
    native_sub_43273c(&Method_System_Collections_Generic_List_Transform___ctor___12dd168);
    native_sub_43273c(&System_Collections_Generic_List_Transform__TypeInfo_12d2bc8);
    bRam0000000001341472 = 1;
  }
  *(undefined4 *)(param_1 + 0x18) = 100;
  *(undefined1 *)(param_1 + 0x1c) = 1;
  *(undefined1 *)(param_1 + 0x51) = 1;
  uVar1 = native_sub_432808(_System_Collections_Generic_List_Transform__TypeInfo_12d2bc8);
  native_System_Collections_Generic_List_XmlEventCache_XmlEvent______ctor_d3ff44
            (uVar1,_Method_System_Collections_Generic_List_Transform___ctor___12dd168);
  *(undefined8 *)(param_1 + 0x58) = uVar1;
  native_sub_4326e0(param_1 + 0x58,uVar1);
  if ((bRam0000000001340ae0 & 1) == 0) {
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0,0);
    bRam0000000001340ae0 = 1;
  }
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  auVar2._8_8_ = 0;
  auVar2._0_8_ = param_1;
  return auVar2;
}


