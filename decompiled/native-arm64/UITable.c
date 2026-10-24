/* ARM64 IL2CPP native pseudocode from Ghidra.
 * Recovered implementation, not original C# source.
 * Function boundaries follow the IL2CPP method address table. */


/* UITable$$set_repositionNow @ 0x942384
 * void UITable__set_repositionNow (UITable_o* __this, bool value, const MethodInfo* method); */

/* UITable$$set_repositionNow
   void UITable__set_repositionNow (UITable_o* __this, bool value, const MethodInfo* method); */

void native_UITable__set_repositionNow_942384(long param_1,ulong param_2)

{
  if ((param_2 & 1) != 0) {
    *(undefined1 *)(param_1 + 0x59) = 1;
    if (pcRam0000000001340948 == (code *)0x0) {
      pcRam0000000001340948 = (code *)native_sub_4326f0(&UNK_00e2c702);
    }
                    /* WARNING: Could not recover jumptable at 0x008d7b58. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*pcRam0000000001340948)(param_1,1);
    return;
  }
  return;
}



/* UITable$$GetChildList @ 0x9423a0
 * System_Collections_Generic_List_Transform__o* UITable__GetChildList (UITable_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UITable$$GetChildList
   System_Collections_Generic_List_Transform__o* UITable__GetChildList (UITable_o* __this, const
   MethodInfo* method); */

long native_UITable__GetChildList_9423a0(long *param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  
  if ((bRam000000000134140e & 1) == 0) {
    native_sub_43273c(&Method_System_Comparison_Transform___ctor___12d8b40);
    native_sub_43273c(&System_Comparison_Transform__TypeInfo_12d21e0);
    native_sub_43273c(&Method_System_Collections_Generic_List_Transform__Add___12dd178);
    native_sub_43273c(&Method_System_Collections_Generic_List_Transform__Sort___12dd1a0);
    native_sub_43273c(&Method_System_Collections_Generic_List_Transform___ctor___12dd168);
    native_sub_43273c(&System_Collections_Generic_List_Transform__TypeInfo_12d2bc8);
    native_sub_43273c(&NGUITools_TypeInfo_12d53c8);
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    native_sub_43273c(&Method_UIGrid_SortByNameInv___12e7810);
    native_sub_43273c(&Method_UIGrid_SortByName___12e7808);
    native_sub_43273c(&Method_UIGrid_SortHorizontalInv___12e7820);
    native_sub_43273c(&Method_UIGrid_SortHorizontal___12e7818);
    native_sub_43273c(&Method_UIGrid_SortVerticalInv___12e7830);
    native_sub_43273c(&Method_UIGrid_SortVertical___12e7828);
    bRam000000000134140e = 1;
  }
  lVar4 = native_UnityEngine_Component__get_transform_8da62c(param_1,0);
  lVar5 = native_sub_432808(_System_Collections_Generic_List_Transform__TypeInfo_12d2bc8);
  native_System_Collections_Generic_List_XmlEventCache_XmlEvent______ctor_d3ff44
            (lVar5,_Method_System_Collections_Generic_List_Transform___ctor___12dd168);
  if (lVar4 == 0) goto LAB_009426dc;
  iVar2 = native_UnityEngine_Transform__get_childCount_772a64(lVar4,0);
  if (0 < iVar2) {
    iVar2 = 0;
    do {
      lVar6 = native_UnityEngine_Transform__GetChild_772ef0(lVar4,iVar2,0);
      if ((char)param_1[6] == '\0') {
LAB_0094256c:
        if (lVar5 == 0) goto LAB_009426dc;
        native_System_Collections_Generic_List_int_____Add_d40c00
                  (lVar5,lVar6,_Method_System_Collections_Generic_List_Transform__Add___12dd178);
      }
      else {
        if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
           (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
          native_sub_4327ec();
        }
        uVar7 = native_UnityEngine_Object__op_Implicit_8e1b98(lVar6,0);
        if ((uVar7 & 1) != 0) {
          if (lVar6 == 0) goto LAB_009426dc;
          uVar8 = native_UnityEngine_Component__get_gameObject_8da66c(lVar6,0);
          if (((*(byte *)(_NGUITools_TypeInfo_12d53c8 + 0x133) >> 2 & 1) != 0) &&
             (*(int *)(_NGUITools_TypeInfo_12d53c8 + 0xe0) == 0)) {
            native_sub_4327ec(_NGUITools_TypeInfo_12d53c8);
          }
          uVar7 = native_NGUITools__GetActive_72d0d4(uVar8,0);
          if ((uVar7 & 1) != 0) goto LAB_0094256c;
        }
      }
      iVar2 = iVar2 + 1;
      iVar3 = native_UnityEngine_Transform__get_childCount_772a64(lVar4,0);
    } while (iVar2 < iVar3);
  }
  switch((int)param_1[4]) {
  case 0:
    goto LAB_009426a4;
  case 1:
    cVar1 = *(char *)((long)param_1 + 0x24);
    lVar4 = native_sub_432808(_System_Comparison_Transform__TypeInfo_12d21e0);
    if (cVar1 == '\0') {
      puVar9 = (undefined8 *)&Method_UIGrid_SortByName___12e7808;
    }
    else {
      puVar9 = (undefined8 *)&Method_UIGrid_SortByNameInv___12e7810;
    }
    break;
  case 2:
    cVar1 = *(char *)((long)param_1 + 0x24);
    lVar4 = native_sub_432808(_System_Comparison_Transform__TypeInfo_12d21e0);
    if (cVar1 == '\0') {
      puVar9 = (undefined8 *)&Method_UIGrid_SortHorizontal___12e7818;
    }
    else {
      puVar9 = (undefined8 *)&Method_UIGrid_SortHorizontalInv___12e7820;
    }
    break;
  case 3:
    cVar1 = *(char *)((long)param_1 + 0x24);
    lVar4 = native_sub_432808(_System_Comparison_Transform__TypeInfo_12d21e0);
    if (cVar1 == '\0') {
      puVar9 = (undefined8 *)&Method_UIGrid_SortVertical___12e7828;
    }
    else {
      puVar9 = (undefined8 *)&Method_UIGrid_SortVerticalInv___12e7830;
    }
    break;
  default:
    lVar4 = param_1[9];
    if (lVar4 == 0) {
      (**(code **)(*param_1 + 0x178))(param_1,lVar5,*(undefined8 *)(*param_1 + 0x180));
      return lVar5;
    }
    goto joined_r0x00942638;
  }
  native_System_Comparison_ABSSequentiable____ctor_bbdf08
            (lVar4,0,*puVar9,_Method_System_Comparison_Transform___ctor___12d8b40);
joined_r0x00942638:
  if (lVar5 != 0) {
    native_System_Collections_Generic_List_ABSSequentiable___Sort_d4266c
              (lVar5,lVar4,_Method_System_Collections_Generic_List_Transform__Sort___12dd1a0);
LAB_009426a4:
    return lVar5;
  }
LAB_009426dc:
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* UITable$$Sort @ 0x9426e0
 * void UITable__Sort (UITable_o* __this, System_Collections_Generic_List_Transform__o* list, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UITable$$Sort
   void UITable__Sort (UITable_o* __this, System_Collections_Generic_List_Transform__o* list, const
   MethodInfo* method); */

void native_UITable__Sort_9426e0(undefined8 param_1,long param_2)

{
  long lVar1;
  long lVar2;
  
  if ((bRam000000000134140f & 1) == 0) {
    native_sub_43273c(&Method_System_Comparison_Transform___ctor___12d8b40);
    native_sub_43273c(&System_Comparison_Transform__TypeInfo_12d21e0);
    native_sub_43273c(&Method_System_Collections_Generic_List_Transform__Sort___12dd1a0);
    native_sub_43273c(&Method_UIGrid_SortByName___12e7808);
    bRam000000000134140f = 1;
  }
  lVar2 = native_sub_432808(_System_Comparison_Transform__TypeInfo_12d21e0);
  native_System_Comparison_ABSSequentiable____ctor_bbdf08
            (lVar2,0,_Method_UIGrid_SortByName___12e7808,
             _Method_System_Comparison_Transform___ctor___12d8b40);
  lVar1 = _Method_System_Collections_Generic_List_Transform__Sort___12dd1a0;
  if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
    native_sub_432810();
  }
  if (lVar2 == 0) {
    native_System_ThrowHelper__ThrowArgumentNullException_9fe014(8);
  }
  if (0 < *(int *)(param_2 + 0x18)) {
                    /* WARNING: Could not recover jumptable at 0x00d426c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)**(undefined8 **)(*(long *)(*(long *)(lVar1 + 0x18) + 0xc0) + 0x118))
              (*(undefined8 *)(param_2 + 0x10),0,*(int *)(param_2 + 0x18),lVar2);
    return;
  }
  return;
}



/* UITable$$OnEnable @ 0x942790
 * void UITable__OnEnable (UITable_o* __this, const MethodInfo* method); */

/* UITable$$OnEnable
   void UITable__OnEnable (UITable_o* __this, const MethodInfo* method); */

void native_UITable__OnEnable_942790(long param_1)

{
  *(undefined1 *)(param_1 + 0x59) = 1;
  return;
}



/* UITable$$Start @ 0x94279c
 * void UITable__Start (UITable_o* __this, const MethodInfo* method); */

/* UITable$$Start
   void UITable__Start (UITable_o* __this, const MethodInfo* method); */

void native_UITable__Start_94279c(long *param_1)

{
  (**(code **)(*param_1 + 0x1a8))(param_1,*(undefined8 *)(*param_1 + 0x1b0));
  (**(code **)(*param_1 + 0x1c8))(param_1,*(undefined8 *)(*param_1 + 0x1d0));
  if (pcRam0000000001340948 == (code *)0x0) {
    pcRam0000000001340948 = (code *)native_sub_4326f0(&UNK_00e2c702);
  }
                    /* WARNING: Could not recover jumptable at 0x008d7b58. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pcRam0000000001340948)(param_1,0);
  return;
}



/* UITable$$Init @ 0x9427e0
 * void UITable__Init (UITable_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UITable$$Init
   void UITable__Init (UITable_o* __this, const MethodInfo* method); */

void native_UITable__Init_9427e0(long param_1)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  
  if ((bRam0000000001341410 & 1) == 0) {
    native_sub_43273c(&Method_NGUITools_FindInParents_UIPanel____12e5760);
    native_sub_43273c(&NGUITools_TypeInfo_12d53c8);
    bRam0000000001341410 = 1;
  }
  *(undefined1 *)(param_1 + 0x58) = 1;
  uVar4 = native_UnityEngine_Component__get_gameObject_8da66c(param_1,0);
  if (((*(byte *)(_NGUITools_TypeInfo_12d53c8 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_NGUITools_TypeInfo_12d53c8 + 0xe0) == 0)) {
    native_sub_4327ec(_NGUITools_TypeInfo_12d53c8);
  }
  uVar4 = native_NGUITools__FindInParents_object__4a5c04
                    (uVar4,_Method_NGUITools_FindInParents_UIPanel____12e5760);
  puVar5 = (undefined8 *)(param_1 + 0x50);
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



/* UITable$$LateUpdate @ 0x942884
 * void UITable__LateUpdate (UITable_o* __this, const MethodInfo* method); */

/* UITable$$LateUpdate
   void UITable__LateUpdate (UITable_o* __this, const MethodInfo* method); */

void native_UITable__LateUpdate_942884(long *param_1)

{
  if (*(char *)((long)param_1 + 0x59) != '\0') {
    (**(code **)(*param_1 + 0x1c8))(param_1,*(undefined8 *)(*param_1 + 0x1d0));
  }
  if (pcRam0000000001340948 == (code *)0x0) {
    pcRam0000000001340948 = (code *)native_sub_4326f0(&UNK_00e2c702);
  }
                    /* WARNING: Could not recover jumptable at 0x008d7b58. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pcRam0000000001340948)(param_1,0);
  return;
}



/* UITable$$OnValidate @ 0x9428c4
 * void UITable__OnValidate (UITable_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UITable$$OnValidate
   void UITable__OnValidate (UITable_o* __this, const MethodInfo* method); */

void native_UITable__OnValidate_9428c4(long *param_1)

{
  ulong uVar1;
  
  if ((bRam0000000001341411 & 1) == 0) {
    native_sub_43273c(&NGUITools_TypeInfo_12d53c8);
    bRam0000000001341411 = 1;
  }
  uVar1 = native_UnityEngine_Application__get_isPlaying_8d60cc(0);
  if ((uVar1 & 1) == 0) {
    if (((*(byte *)(_NGUITools_TypeInfo_12d53c8 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_NGUITools_TypeInfo_12d53c8 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    uVar1 = native_NGUITools__GetActive_72d02c(param_1,0);
    if ((uVar1 & 1) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00942944. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x1c8))(param_1,*(undefined8 *)(*param_1 + 0x1d0));
      return;
    }
  }
  return;
}



/* UITable$$RepositionVariableSize @ 0x942954
 * void UITable__RepositionVariableSize (UITable_o* __this, System_Collections_Generic_List_Transform__o* children, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UITable$$RepositionVariableSize
   void UITable__RepositionVariableSize (UITable_o* __this,
   System_Collections_Generic_List_Transform__o* children, const MethodInfo* method); */

void native_UITable__RepositionVariableSize_942954
               (undefined1 param_1 [16],ulong param_2,ulong param_3,long param_4,long param_5)

{
  uint uVar1;
  uint uVar2;
  char cVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
  ulong uVar11;
  long lVar12;
  long lVar13;
  uint uVar14;
  long lVar15;
  uint uVar16;
  float fVar17;
  float fVar18;
  undefined4 uVar19;
  float fVar20;
  float fVar21;
  undefined8 uVar22;
  float fVar23;
  undefined4 uVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  long lStack_200;
  long lStack_1f8;
  undefined8 uStack_1f0;
  long lStack_1e0;
  long lStack_1d8;
  undefined8 uStack_1d0;
  long lStack_1c0;
  long lStack_1b8;
  undefined8 uStack_1b0;
  long lStack_1a0;
  long lStack_198;
  undefined8 uStack_190;
  long lStack_180;
  long lStack_178;
  undefined8 uStack_170;
  long lStack_160;
  long lStack_158;
  undefined8 uStack_150;
  long lStack_140;
  long lStack_138;
  undefined8 uStack_130;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  long lStack_c0;
  long lStack_b8;
  undefined8 uStack_b0;
  
  if ((bRam0000000001341412 & 1) == 0) {
    native_sub_43273c(&UnityEngine_Bounds____TypeInfo_12d3658);
    native_sub_43273c(&UnityEngine_Bounds___TypeInfo_12d3058);
    native_sub_43273c(&Method_UnityEngine_Component_GetComponent_SpringPosition____12e2b10);
    native_sub_43273c(&Method_System_Collections_Generic_List_Transform__get_Count___12dd1a8);
    native_sub_43273c(&Method_System_Collections_Generic_List_Transform__get_Item___12dd1b0);
    native_sub_43273c(&NGUIMath_TypeInfo_12d53b8);
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    bRam0000000001341412 = 1;
  }
  lStack_c0 = 0;
  lStack_b8 = 0;
  uStack_b0 = 0;
  uStack_e0 = 0;
  uStack_d8 = 0;
  uStack_d0 = 0;
  uStack_100 = 0;
  uStack_f8 = 0;
  uStack_f0 = 0;
  uStack_120 = 0;
  uStack_118 = 0;
  uStack_110 = 0;
  lStack_138 = 0;
  uStack_130 = 0;
  lStack_140 = 0;
  iVar5 = *(int *)(param_4 + 0x18);
  if (iVar5 < 1) {
    if (param_5 == 0) goto LAB_00943204;
    iVar5 = *(int *)(param_5 + 0x18);
    iVar6 = 1;
  }
  else {
    if (param_5 == 0) goto LAB_00943204;
    iVar6 = 0;
    if (iVar5 != 0) {
      iVar6 = *(int *)(param_5 + 0x18) / iVar5;
    }
    iVar6 = iVar6 + 1;
  }
  lStack_160 = (long)iVar6;
  lStack_158 = (long)iVar5;
  lVar7 = native_sub_432758(_UnityEngine_Bounds____TypeInfo_12d3658,&lStack_160);
  lVar8 = native_sub_432750(_UnityEngine_Bounds___TypeInfo_12d3058,iVar5);
  lVar9 = native_sub_432750(_UnityEngine_Bounds___TypeInfo_12d3058,iVar6);
  uVar1 = *(uint *)(param_5 + 0x18);
  if (0 < (int)uVar1) {
    lVar15 = 0;
    uVar14 = 0;
    uVar16 = 0;
    uVar2 = uVar1;
    while( true ) {
      fVar29 = (float)param_3;
      fVar27 = (float)param_2;
      if (uVar2 <= (uint)lVar15) {
        native_System_ThrowHelper__ThrowArgumentOutOfRangeException_9fe0f4(0);
      }
      cVar3 = *(char *)(param_4 + 0x30);
      lVar13 = *(long *)(*(long *)(param_5 + 0x10) + lVar15 * 8 + 0x20);
      if (((*(byte *)(_NGUIMath_TypeInfo_12d53b8 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_NGUIMath_TypeInfo_12d53b8 + 0xe0) == 0)) {
        native_sub_4327ec();
      }
      native_NGUIMath__CalculateRelativeWidgetBounds_805d80(&lStack_160,lVar13,cVar3 == '\0',0);
      uStack_b0 = uStack_150;
      lStack_b8 = lStack_158;
      lStack_c0 = lStack_160;
      if (lVar13 == 0) goto LAB_00943204;
      fVar17 = (float)native_UnityEngine_Transform__get_localScale_771d80(lVar13,0);
      fVar23 = fVar27;
      fVar26 = fVar29;
      fVar18 = (float)native_UnityEngine_Bounds__get_min_8d7f18(&lStack_c0,0);
      fVar23 = fVar27 * fVar23;
      fVar26 = fVar29 * fVar26;
      native_UnityEngine_Bounds__set_min_8d7f38(fVar17 * fVar18,fVar23,fVar26,&lStack_c0,0);
      fVar18 = (float)native_UnityEngine_Bounds__get_max_8d7f88(&lStack_c0,0);
      param_2 = (ulong)(uint)(fVar27 * fVar23);
      param_3 = (ulong)(uint)(fVar29 * fVar26);
      native_UnityEngine_Bounds__set_max_8d7fe0(fVar17 * fVar18,&lStack_c0,0);
      uStack_150 = uStack_b0;
      lStack_158 = lStack_b8;
      lStack_160 = lStack_c0;
      if (lVar7 == 0) goto LAB_00943204;
      uStack_170 = uStack_b0;
      lStack_178 = lStack_b8;
      lStack_180 = lStack_c0;
      if ((**(uint **)(lVar7 + 0x10) <= uVar16) ||
         (lVar13 = *(long *)(*(uint **)(lVar7 + 0x10) + 4), (uint)lVar13 <= uVar14))
      goto LAB_00943208;
      lVar13 = lVar7 + ((long)(int)uVar14 + lVar13 * (int)uVar16) * 0x18;
      *(undefined8 *)(lVar13 + 0x30) = uStack_b0;
      *(long *)(lVar13 + 0x28) = lStack_b8;
      *(long *)(lVar13 + 0x20) = lStack_c0;
      if (lVar8 == 0) goto LAB_00943204;
      uStack_190 = uStack_b0;
      lStack_198 = lStack_b8;
      lStack_1a0 = lStack_c0;
      if (*(uint *)(lVar8 + 0x18) <= uVar14) goto LAB_00943208;
      uStack_1b0 = uStack_b0;
      lStack_1b8 = lStack_b8;
      lStack_1c0 = lStack_c0;
      native_UnityEngine_Bounds__Encapsulate_8d8154
                (lVar8 + (long)(int)uVar14 * 0x18 + 0x20,&lStack_1c0,0);
      if (lVar9 == 0) goto LAB_00943204;
      uStack_1d0 = uStack_b0;
      lStack_1d8 = lStack_b8;
      lStack_1e0 = lStack_c0;
      if (*(uint *)(lVar9 + 0x18) <= uVar16) goto LAB_00943208;
      uStack_1f0 = uStack_b0;
      lStack_1f8 = lStack_b8;
      lStack_200 = lStack_c0;
      native_UnityEngine_Bounds__Encapsulate_8d8154
                (lVar9 + (long)(int)uVar16 * 0x18 + 0x20,&lStack_200,0);
      if ((int)uVar1 <= (int)((uint)lVar15 + 1)) break;
      uVar14 = uVar14 + 1;
      lVar15 = lVar15 + 1;
      uVar2 = *(uint *)(param_5 + 0x18);
      uVar4 = (uint)((int)uVar14 < *(int *)(param_4 + 0x18) || *(int *)(param_4 + 0x18) < 1);
      if (uVar4 == 0) {
        uVar14 = 0;
      }
      uVar16 = uVar16 + (uVar4 ^ 1);
    }
  }
  uVar19 = *(undefined4 *)(param_4 + 0x2c);
  if (((*(byte *)(_NGUIMath_TypeInfo_12d53b8 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_NGUIMath_TypeInfo_12d53b8 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar19 = native_NGUIMath__GetPivotOffset_806cd0(uVar19,0);
  uVar24 = (undefined4)param_2;
  uVar1 = *(uint *)(param_5 + 0x18);
  if (0 < (int)uVar1) {
    lVar15 = 0;
    uVar14 = 0;
    uVar16 = 0;
    fVar27 = 0.0;
    fVar29 = 0.0;
    uVar2 = uVar1;
    do {
      if (uVar2 <= (uint)lVar15) {
        native_System_ThrowHelper__ThrowArgumentOutOfRangeException_9fe0f4(0);
      }
      if (lVar7 == 0) goto LAB_00943204;
      if ((**(uint **)(lVar7 + 0x10) <= uVar16) ||
         (lVar13 = *(long *)(*(uint **)(lVar7 + 0x10) + 4), (uint)lVar13 <= uVar14)) {
LAB_00943208:
        uVar10 = native_sub_43283c();
                    /* WARNING: Subroutine does not return */
        native_sub_4327dc(uVar10,0);
      }
      lVar13 = lVar7 + ((long)(int)uVar14 + lVar13 * (int)uVar16) * 0x18;
      uStack_d0 = *(undefined8 *)(lVar13 + 0x30);
      uStack_d8 = *(undefined8 *)(lVar13 + 0x28);
      uStack_e0 = *(undefined8 *)(lVar13 + 0x20);
      lVar13 = *(long *)(*(long *)(param_5 + 0x10) + lVar15 * 8 + 0x20);
      if (lVar8 == 0) goto LAB_00943204;
      if (*(uint *)(lVar8 + 0x18) <= uVar14) goto LAB_00943208;
      lVar12 = lVar8 + (long)(int)uVar14 * 0x18;
      uStack_f0 = *(undefined8 *)(lVar12 + 0x30);
      uStack_f8 = *(undefined8 *)(lVar12 + 0x28);
      uStack_100 = *(undefined8 *)(lVar12 + 0x20);
      if (lVar9 == 0) goto LAB_00943204;
      if (*(uint *)(lVar9 + 0x18) <= uVar16) goto LAB_00943208;
      lVar12 = lVar9 + (long)(int)uVar16 * 0x18;
      uStack_110 = *(undefined8 *)(lVar12 + 0x30);
      uStack_118 = *(undefined8 *)(lVar12 + 0x28);
      uStack_120 = *(undefined8 *)(lVar12 + 0x20);
      if (lVar13 == 0) goto LAB_00943204;
      native_UnityEngine_Transform__get_localPosition_7717f4(lVar13,0);
      fVar26 = (float)native_UnityEngine_Bounds__get_extents_8d7da4(&uStack_e0,0);
      fVar17 = (float)native_UnityEngine_Bounds__get_center_8d7d98(&uStack_e0,0);
      fVar26 = fVar27 + fVar26;
      fVar23 = (float)native_UnityEngine_Bounds__get_max_8d7f88(&uStack_e0,0);
      fVar18 = (float)native_UnityEngine_Bounds__get_min_8d7f18(&uStack_e0,0);
      fVar20 = (float)native_UnityEngine_Bounds__get_max_8d7f88(&uStack_100,0);
      fVar21 = (float)native_UnityEngine_Bounds__get_min_8d7f18(&uStack_100,0);
      fVar18 = (float)native_UnityEngine_Mathf__Lerp_8e5224
                                (0,((fVar23 - fVar18) - fVar20) + fVar21,uVar19,0);
      fVar20 = *(float *)(param_4 + 0x34);
      iVar5 = *(int *)(param_4 + 0x1c);
      fVar18 = fVar18 - fVar20;
      native_UnityEngine_Bounds__get_extents_8d7da4(&uStack_e0,0);
      fVar23 = fVar20;
      native_UnityEngine_Bounds__get_center_8d7d98(&uStack_e0,0);
      if (iVar5 == 0) {
        fVar28 = (-fVar29 - fVar20) - fVar23;
        native_UnityEngine_Bounds__get_max_8d7f88(&uStack_e0,0);
        fVar25 = fVar23;
        native_UnityEngine_Bounds__get_min_8d7f18(&uStack_e0,0);
        fVar21 = fVar25;
        native_UnityEngine_Bounds__get_max_8d7f88(&uStack_120,0);
        fVar20 = fVar21;
        native_UnityEngine_Bounds__get_min_8d7f18(&uStack_120,0);
        fVar23 = (float)native_UnityEngine_Mathf__Lerp_8e5224
                                  (((fVar23 - fVar25) - fVar21) + fVar20,0,uVar24,0);
        fVar28 = fVar28 + (fVar23 - *(float *)(param_4 + 0x38));
      }
      else {
        fVar28 = (fVar29 + fVar20) - fVar23;
        native_UnityEngine_Bounds__get_max_8d7f88(&uStack_e0,0);
        fVar25 = fVar23;
        native_UnityEngine_Bounds__get_min_8d7f18(&uStack_e0,0);
        fVar21 = fVar25;
        native_UnityEngine_Bounds__get_max_8d7f88(&uStack_120,0);
        fVar20 = fVar21;
        native_UnityEngine_Bounds__get_min_8d7f18(&uStack_120,0);
        fVar23 = (float)native_UnityEngine_Mathf__Lerp_8e5224
                                  (0,((fVar23 - fVar25) - fVar21) + fVar20,uVar24,0);
        fVar28 = fVar28 - (fVar23 - *(float *)(param_4 + 0x38));
      }
      param_2 = (ulong)(uint)fVar28;
      fVar23 = (float)native_UnityEngine_Bounds__get_size_8d7ed8(&uStack_100,0);
      fVar27 = fVar27 + fVar23 + *(float *)(param_4 + 0x34) + *(float *)(param_4 + 0x34);
      native_UnityEngine_Transform__set_localPosition_7718a4
                ((fVar26 - fVar17) - fVar18,param_2,param_3,lVar13,0);
      uVar14 = uVar14 + 1;
      if ((*(int *)(param_4 + 0x18) <= (int)uVar14) && (0 < *(int *)(param_4 + 0x18))) {
        uVar16 = uVar16 + 1;
        native_UnityEngine_Bounds__get_size_8d7ed8(&uStack_120,0);
        uVar14 = 0;
        fVar27 = 0.0;
        fVar29 = fVar29 + (float)param_2 + *(float *)(param_4 + 0x38) + *(float *)(param_4 + 0x38);
      }
      if ((int)uVar1 <= (int)((uint)lVar15 + 1)) break;
      uVar2 = *(uint *)(param_5 + 0x18);
      lVar15 = lVar15 + 1;
    } while( true );
  }
  iVar5 = *(int *)(param_4 + 0x28);
  if (iVar5 != 0) {
    if (((*(byte *)(_NGUIMath_TypeInfo_12d53b8 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_NGUIMath_TypeInfo_12d53b8 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    uVar22 = native_NGUIMath__GetPivotOffset_806cd0(iVar5,0);
    uVar10 = native_UnityEngine_Component__get_transform_8da62c(param_4,0);
    native_NGUIMath__CalculateRelativeWidgetBounds_805a40(&lStack_160,uVar10,0);
    uStack_130 = uStack_150;
    lStack_138 = lStack_158;
    lStack_140 = lStack_160;
    uVar10 = native_UnityEngine_Bounds__get_size_8d7ed8(&lStack_140,0);
    fVar27 = (float)native_UnityEngine_Mathf__Lerp_8e5224(0,uVar10,uVar22,0);
    fVar29 = (float)uVar10;
    native_UnityEngine_Bounds__get_size_8d7ed8(&lStack_140,0);
    fVar29 = (float)native_UnityEngine_Mathf__Lerp_8e5224(-fVar29,0,param_2,0);
    lVar7 = native_UnityEngine_Component__get_transform_8da62c(param_4,0);
    if (lVar7 == 0) {
LAB_00943204:
                    /* WARNING: Subroutine does not return */
      native_sub_432810();
    }
    iVar5 = native_UnityEngine_Transform__get_childCount_772a64(lVar7,0);
    if (0 < iVar5) {
      iVar5 = 0;
      uVar11 = CONCAT44(fVar29,fVar27);
      do {
        fVar23 = (float)uVar11;
        lVar8 = native_UnityEngine_Transform__GetChild_772ef0(lVar7,iVar5,0);
        if (lVar8 == 0) goto LAB_00943204;
        lVar9 = native_UnityEngine_Component__GetComponent_ActiveAnimation__49daec
                          (lVar8,
                           _Method_UnityEngine_Component_GetComponent_SpringPosition____12e2b10);
        if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
           (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
          native_sub_4327ec(_UnityEngine_Object_TypeInfo_12d54e0);
        }
        uVar11 = native_UnityEngine_Object__op_Inequality_8d76fc(lVar9,0,0);
        if ((uVar11 & 1) == 0) {
          fVar26 = (float)native_UnityEngine_Transform__get_localPosition_7717f4(lVar8,0);
          uVar11 = (ulong)(uint)(fVar23 - fVar29);
          native_UnityEngine_Transform__set_localPosition_7718a4(fVar26 - fVar27,uVar11,lVar8,0);
        }
        else {
          if (lVar9 == 0) goto LAB_00943204;
          native_UnityEngine_Behaviour__set_enabled_8d7b0c(lVar9,0,0);
          *(ulong *)(lVar9 + 0x18) =
               CONCAT44((float)((ulong)*(undefined8 *)(lVar9 + 0x18) >> 0x20) - fVar29,
                        (float)*(undefined8 *)(lVar9 + 0x18) - fVar27);
          uVar11 = CONCAT44(fVar29,fVar27);
          native_UnityEngine_Behaviour__set_enabled_8d7b0c(lVar9,1,0);
        }
        iVar5 = iVar5 + 1;
        iVar6 = native_UnityEngine_Transform__get_childCount_772a64(lVar7,0);
      } while (iVar5 < iVar6);
    }
  }
  return;
}



/* UITable$$Reposition @ 0x943214
 * void UITable__Reposition (UITable_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UITable$$Reposition
   void UITable__Reposition (UITable_o* __this, const MethodInfo* method); */

void native_UITable__Reposition_943214(long *param_1)

{
  long *plVar1;
  ushort uVar2;
  long lVar3;
  undefined8 *puVar4;
  ulong uVar5;
  ulong uVar6;
  undefined8 uVar7;
  long lVar8;
  long *plVar9;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  undefined8 extraout_x1_01;
  undefined8 extraout_x1_02;
  long lVar10;
  long lVar11;
  int *piVar12;
  code *pcVar13;
  long lVar14;
  long lStack_48;
  
  if ((bRam0000000001341413 & 1) == 0) {
    native_sub_43273c(&Method_UnityEngine_Component_GetComponent_UIScrollView____12e2c08);
    native_sub_43273c(&Method_System_Collections_Generic_List_Transform__get_Count___12dd1a8);
    native_sub_43273c(&NGUITools_TypeInfo_12d53c8);
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    bRam0000000001341413 = 1;
  }
  uVar6 = native_UnityEngine_Application__get_isPlaying_8d60cc(0);
  if (((uVar6 & 1) != 0) && ((char)param_1[0xb] == '\0')) {
    if (((*(byte *)(_NGUITools_TypeInfo_12d53c8 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_NGUITools_TypeInfo_12d53c8 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    uVar6 = native_NGUITools__GetActive_72d02c(param_1,0);
    if ((uVar6 & 1) != 0) {
      (**(code **)(*param_1 + 0x1a8))(param_1,*(undefined8 *)(*param_1 + 0x1b0));
    }
  }
  *(undefined1 *)((long)param_1 + 0x59) = 0;
  uVar7 = native_UnityEngine_Component__get_transform_8da62c(param_1,0);
  lVar8 = native_UITable__GetChildList_9423a0(param_1);
  if (lVar8 == 0) goto LAB_009433e0;
  if (0 < *(int *)(lVar8 + 0x18)) {
    native_UITable__RepositionVariableSize_942954(param_1,lVar8);
  }
  if (*(char *)((long)param_1 + 0x31) != '\0') {
    lVar8 = param_1[10];
    if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    uVar6 = native_UnityEngine_Object__op_Inequality_8d76fc(lVar8,0,0);
    if ((uVar6 & 1) != 0) {
      if (param_1[10] != 0) {
        native_UIPanel__ConstrainTargetToBounds_af4d38(param_1[10],uVar7,1,0);
        if (param_1[10] != 0) {
          plVar9 = (long *)native_UnityEngine_Component__GetComponent_ActiveAnimation__49daec
                                     (param_1[10],
                                      _Method_UnityEngine_Component_GetComponent_UIScrollView____12e2c08
                                     );
          if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
             (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
            native_sub_4327ec(_UnityEngine_Object_TypeInfo_12d54e0);
          }
          uVar6 = native_UnityEngine_Object__op_Inequality_8d76fc(plVar9,0,0);
          if ((uVar6 & 1) != 0) {
            if (plVar9 == (long *)0x0) goto LAB_009433e0;
            (**(code **)(*plVar9 + 0x1b8))(plVar9,1,*(undefined8 *)(*plVar9 + 0x1c0));
          }
          goto LAB_009433b4;
        }
      }
LAB_009433e0:
                    /* WARNING: Subroutine does not return */
      native_sub_432810();
    }
  }
LAB_009433b4:
  lVar8 = param_1[8];
  if (lVar8 == 0) {
    return;
  }
  uVar7 = 0;
  lStack_48 = lVar8;
  lVar10 = *(long *)(lVar8 + 0x68);
  if (lVar10 == 0) {
    plVar9 = &lStack_48;
    lVar14 = 1;
  }
  else {
    lVar14 = *(long *)(lVar10 + 0x18);
    if (lVar14 == 0) {
      return;
    }
    plVar9 = (long *)(lVar10 + 0x20);
  }
  lVar10 = 0;
  do {
    lVar11 = plVar9[lVar10];
    plVar1 = *(long **)(lVar11 + 0x20);
    lVar3 = *(long *)(lVar11 + 0x28);
    pcVar13 = *(code **)(lVar11 + 0x10);
    if (*(short *)(lVar3 + 0x48) == -1) {
      native_sub_4327f4(lVar3,uVar7);
    }
    uVar6 = native_sub_432768(lVar3);
    if ((uVar6 & 1) == 0) {
      if ((((plVar1 == (long *)0x0) || (*(short *)(lVar3 + 0x48) == -1)) ||
          ((*(byte *)(*plVar1 + 0x115) & 1) != 0)) || (*(long *)(lVar8 + 0x18) == 0))
      goto LAB_0055b284;
      uVar6 = native_sub_432760(lVar3);
      uVar5 = native_sub_432b64(lVar3);
      if ((uVar6 & 1) == 0) {
        uVar2 = *(ushort *)(lVar3 + 0x48);
        if ((uVar5 & 1) == 0) {
          lVar3 = *plVar1 + (ulong)uVar2 * 0x10;
          (**(code **)(lVar3 + 0x138))(plVar1,*(undefined8 *)(lVar3 + 0x140));
          uVar7 = extraout_x1;
          goto LAB_0055b290;
        }
        lVar3 = native_sub_432764(lVar3);
        lVar11 = *plVar1;
        if ((ulong)*(ushort *)(lVar11 + 0x12a) != 0) {
          uVar6 = 0;
          piVar12 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
          do {
            if (*(long *)(piVar12 + -2) == lVar3) {
              puVar4 = (undefined8 *)(lVar11 + (long)(int)(*piVar12 + (uint)uVar2) * 0x10 + 0x138);
              goto LAB_0055b1ac;
            }
            uVar6 = uVar6 + 1;
            piVar12 = piVar12 + 4;
          } while (uVar6 < *(ushort *)(lVar11 + 0x12a));
        }
        puVar4 = (undefined8 *)native_sub_3c9b34(plVar1,lVar3,(ulong)uVar2);
LAB_0055b1ac:
        pcVar13 = (code *)*puVar4;
        puVar4 = (undefined8 *)puVar4[1];
      }
      else {
        if ((uVar5 & 1) == 0) {
          uVar7 = *(undefined8 *)(*plVar1 + (ulong)*(ushort *)(lVar3 + 0x48) * 0x10 + 0x140);
        }
        else {
          lVar11 = *plVar1;
          if ((ulong)*(ushort *)(lVar11 + 0x12a) != 0) {
            uVar6 = 0;
            piVar12 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
            do {
              if (*(long *)(piVar12 + -2) == *(long *)(lVar3 + 0x18)) {
                lVar11 = lVar11 + (long)(int)(*piVar12 + (uint)*(ushort *)(lVar3 + 0x48)) * 0x10 +
                         0x138;
                goto LAB_0055b184;
              }
              uVar6 = uVar6 + 1;
              piVar12 = piVar12 + 4;
            } while (uVar6 < *(ushort *)(lVar11 + 0x12a));
          }
          lVar11 = native_sub_3c9b34(plVar1);
LAB_0055b184:
          uVar7 = *(undefined8 *)(lVar11 + 8);
        }
        puVar4 = (undefined8 *)native_sub_4327e8(uVar7,lVar3);
        pcVar13 = (code *)*puVar4;
      }
      (*pcVar13)(plVar1,puVar4);
      uVar7 = extraout_x1_00;
    }
    else if (*(char *)(lVar3 + 0x4a) == '\0') {
      (*pcVar13)(lVar3);
      uVar7 = extraout_x1_01;
    }
    else {
LAB_0055b284:
      (*pcVar13)(plVar1,lVar3);
      uVar7 = extraout_x1_02;
    }
LAB_0055b290:
    lVar10 = lVar10 + 1;
    if (lVar10 == lVar14) {
      return;
    }
  } while( true );
}



/* UITable$$.ctor @ 0x9433e4
 * void UITable___ctor (UITable_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UITable$$.ctor
   void UITable___ctor (UITable_o* __this, const MethodInfo* method); */

undefined1  [16]
native_UITable___ctor_9433e4(undefined1 param_1 [16],undefined4 param_2,ulong param_3)

{
  undefined4 uVar1;
  undefined1 auVar2 [16];
  
  *(undefined1 *)(param_3 + 0x30) = 1;
  uVar1 = native_UnityEngine_Vector2__get_zero_765ef0(0);
  *(undefined4 *)(param_3 + 0x34) = uVar1;
  *(undefined4 *)(param_3 + 0x38) = param_2;
  if ((bRam0000000001340ae0 & 1) == 0) {
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0,0);
    bRam0000000001340ae0 = 1;
  }
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  auVar2._8_8_ = 0;
  auVar2._0_8_ = param_3;
  return auVar2;
}


