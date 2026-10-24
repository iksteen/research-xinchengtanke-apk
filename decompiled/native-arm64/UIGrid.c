/* ARM64 IL2CPP native pseudocode from Ghidra.
 * Recovered implementation, not original C# source.
 * Function boundaries follow the IL2CPP method address table. */


/* UIGrid$$set_repositionNow @ 0x9e20b0
 * void UIGrid__set_repositionNow (UIGrid_o* __this, bool value, const MethodInfo* method); */

/* UIGrid$$set_repositionNow
   void UIGrid__set_repositionNow (UIGrid_o* __this, bool value, const MethodInfo* method); */

void native_UIGrid__set_repositionNow_9e20b0(long param_1,ulong param_2)

{
  if ((param_2 & 1) != 0) {
    *(undefined8 *)(param_1 + 0x68) = 0;
    native_sub_4326e0((undefined8 *)(param_1 + 0x68),0);
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



/* UIGrid$$GetChildList @ 0x9dd490
 * System_Collections_Generic_List_Transform__o* UIGrid__GetChildList (UIGrid_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIGrid$$GetChildList
   System_Collections_Generic_List_Transform__o* UIGrid__GetChildList (UIGrid_o* __this, const
   MethodInfo* method); */

long native_UIGrid__GetChildList_9dd490(long *param_1)

{
  int iVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  undefined8 *puVar8;
  
  if ((bRam0000000001341964 & 1) == 0) {
    native_sub_43273c(&Method_System_Comparison_Transform___ctor___12d8b40);
    native_sub_43273c(&System_Comparison_Transform__TypeInfo_12d21e0);
    native_sub_43273c(&Method_System_Collections_Generic_List_Transform__Add___12dd178);
    native_sub_43273c(&Method_System_Collections_Generic_List_Transform__Sort___12dd1a0);
    native_sub_43273c(&Method_System_Collections_Generic_List_Transform___ctor___12dd168);
    native_sub_43273c(&System_Collections_Generic_List_Transform__TypeInfo_12d2bc8);
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    native_sub_43273c(&UIDragDropItem_TypeInfo_12d6428);
    native_sub_43273c(&Method_UIGrid_SortByNameInv___12e7810);
    native_sub_43273c(&Method_UIGrid_SortByName___12e7808);
    native_sub_43273c(&Method_UIGrid_SortHorizontalInv___12e7820);
    native_sub_43273c(&Method_UIGrid_SortHorizontal___12e7818);
    native_sub_43273c(&Method_UIGrid_SortVerticalInv___12e7830);
    native_sub_43273c(&Method_UIGrid_SortVertical___12e7828);
    bRam0000000001341964 = 1;
  }
  lVar3 = native_UnityEngine_Component__get_transform_8da62c(param_1,0);
  lVar4 = native_sub_432808(_System_Collections_Generic_List_Transform__TypeInfo_12d2bc8);
  native_System_Collections_Generic_List_XmlEventCache_XmlEvent______ctor_d3ff44
            (lVar4,_Method_System_Collections_Generic_List_Transform___ctor___12dd168);
  if (lVar3 == 0) goto LAB_009dd7e4;
  iVar1 = native_UnityEngine_Transform__get_childCount_772a64(lVar3,0);
  if (0 < iVar1) {
    iVar1 = 0;
    do {
      lVar5 = native_UnityEngine_Transform__GetChild_772ef0(lVar3,iVar1,0);
      if (lVar5 == 0) goto LAB_009dd7e4;
      lVar6 = native_UnityEngine_Component__get_gameObject_8da66c(lVar5,0);
      if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
        native_sub_4327ec(_UnityEngine_Object_TypeInfo_12d54e0);
      }
      uVar7 = native_UnityEngine_Object__op_Implicit_8e1b98(lVar6,0);
      if ((uVar7 & 1) != 0) {
        if (*(char *)((long)param_1 + 0x3a) != '\0') {
          if (lVar6 == 0) goto LAB_009dd7e4;
          uVar7 = native_UnityEngine_GameObject__get_activeSelf_8de6e8(lVar6,0);
          if ((uVar7 & 1) == 0) goto LAB_009dd67c;
        }
        if (((*(byte *)(_UIDragDropItem_TypeInfo_12d6428 + 0x133) >> 2 & 1) != 0) &&
           (*(int *)(_UIDragDropItem_TypeInfo_12d6428 + 0xe0) == 0)) {
          native_sub_4327ec();
        }
        uVar7 = native_UIDragDropItem__IsDragged_9e00d8(lVar6);
        if ((uVar7 & 1) == 0) {
          if (lVar4 == 0) goto LAB_009dd7e4;
          native_System_Collections_Generic_List_int_____Add_d40c00
                    (lVar4,lVar5,_Method_System_Collections_Generic_List_Transform__Add___12dd178);
        }
      }
LAB_009dd67c:
      iVar1 = iVar1 + 1;
      iVar2 = native_UnityEngine_Transform__get_childCount_772a64(lVar3,0);
    } while (iVar1 < iVar2);
  }
  iVar1 = *(int *)((long)param_1 + 0x1c);
  if (iVar1 == 0) {
    return lVar4;
  }
  if ((int)param_1[3] == 2) {
    return lVar4;
  }
  if (iVar1 == 3) {
    lVar5 = param_1[4];
    lVar3 = native_sub_432808(_System_Comparison_Transform__TypeInfo_12d21e0);
    if ((char)lVar5 == '\0') {
      puVar8 = (undefined8 *)&Method_UIGrid_SortVertical___12e7828;
    }
    else {
      puVar8 = (undefined8 *)&Method_UIGrid_SortVerticalInv___12e7830;
    }
LAB_009dd774:
    native_System_Comparison_ABSSequentiable____ctor_bbdf08
              (lVar3,0,*puVar8,_Method_System_Comparison_Transform___ctor___12d8b40);
  }
  else {
    if (iVar1 == 2) {
      lVar5 = param_1[4];
      lVar3 = native_sub_432808(_System_Comparison_Transform__TypeInfo_12d21e0);
      if ((char)lVar5 == '\0') {
        puVar8 = (undefined8 *)&Method_UIGrid_SortHorizontal___12e7818;
      }
      else {
        puVar8 = (undefined8 *)&Method_UIGrid_SortHorizontalInv___12e7820;
      }
      goto LAB_009dd774;
    }
    if (iVar1 == 1) {
      lVar5 = param_1[4];
      lVar3 = native_sub_432808(_System_Comparison_Transform__TypeInfo_12d21e0);
      if ((char)lVar5 == '\0') {
        puVar8 = (undefined8 *)&Method_UIGrid_SortByName___12e7808;
      }
      else {
        puVar8 = (undefined8 *)&Method_UIGrid_SortByNameInv___12e7810;
      }
      goto LAB_009dd774;
    }
    lVar3 = param_1[9];
    if (lVar3 == 0) {
      (**(code **)(*param_1 + 0x1a8))(param_1,lVar4,*(undefined8 *)(*param_1 + 0x1b0));
      return lVar4;
    }
  }
  if (lVar4 != 0) {
    native_System_Collections_Generic_List_ABSSequentiable___Sort_d4266c
              (lVar4,lVar3,_Method_System_Collections_Generic_List_Transform__Sort___12dd1a0);
    return lVar4;
  }
LAB_009dd7e4:
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* UIGrid$$GetChild @ 0x9efcbc
 * UnityEngine_Transform_o* UIGrid__GetChild (UIGrid_o* __this, int32_t index, const MethodInfo* method); */

/* UIGrid$$GetChild
   UnityEngine_Transform_o* UIGrid__GetChild (UIGrid_o* __this, int32_t index, const MethodInfo*
   method); */

undefined8 native_UIGrid__GetChild_9efcbc(undefined8 param_1,uint param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  if ((bRam0000000001341965 & 1) == 0) {
    native_sub_43273c(&Method_System_Collections_Generic_List_Transform__get_Count___12dd1a8);
    native_sub_43273c(&Method_System_Collections_Generic_List_Transform__get_Item___12dd1b0);
    bRam0000000001341965 = 1;
  }
  lVar1 = native_UIGrid__GetChildList_9dd490(param_1);
  if (lVar1 != 0) {
    if ((int)param_2 < (int)*(uint *)(lVar1 + 0x18)) {
      if (*(uint *)(lVar1 + 0x18) <= param_2) {
        native_System_ThrowHelper__ThrowArgumentOutOfRangeException_9fe0f4(0);
      }
      uVar2 = *(undefined8 *)(*(long *)(lVar1 + 0x10) + (long)(int)param_2 * 8 + 0x20);
    }
    else {
      uVar2 = 0;
    }
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* UIGrid$$GetIndex @ 0x9efd50
 * int32_t UIGrid__GetIndex (UIGrid_o* __this, UnityEngine_Transform_o* trans, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIGrid$$GetIndex
   int32_t UIGrid__GetIndex (UIGrid_o* __this, UnityEngine_Transform_o* trans, const MethodInfo*
   method); */

void native_UIGrid__GetIndex_9efd50(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  
  if ((bRam0000000001341966 & 1) == 0) {
    native_sub_43273c(&Method_System_Collections_Generic_List_Transform__IndexOf___12dd190);
    bRam0000000001341966 = 1;
  }
  lVar1 = native_UIGrid__GetChildList_9dd490(param_1);
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00d41660. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)**(undefined8 **)
                (*(long *)(*(long *)(
                                    _Method_System_Collections_Generic_List_Transform__IndexOf___12dd190
                                    + 0x18) + 0xc0) + 0xd0))
              (*(undefined8 *)(lVar1 + 0x10),param_2,0,*(undefined4 *)(lVar1 + 0x18));
    return;
  }
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* UIGrid$$AddChild @ 0x9efdb8
 * void UIGrid__AddChild (UIGrid_o* __this, UnityEngine_Transform_o* trans, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIGrid$$AddChild
   void UIGrid__AddChild (UIGrid_o* __this, UnityEngine_Transform_o* trans, const MethodInfo*
   method); */

void native_UIGrid__AddChild_9efdb8(long *param_1,long param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  
  if ((bRam0000000001341967 & 1) == 0) {
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    bRam0000000001341967 = 1;
  }
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar1 = native_UnityEngine_Object__op_Inequality_8d76fc(param_2,0,0);
  if ((uVar1 & 1) != 0) {
    uVar2 = native_UnityEngine_Component__get_transform_8da62c(param_1,0);
    if (param_2 != 0) {
      native_UnityEngine_Transform__set_parent_771f18(param_2,uVar2,0);
      uVar2 = native_UIGrid__GetChildList_9dd490(param_1);
                    /* WARNING: Could not recover jumptable at 0x009efe68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x1c8))(param_1,uVar2,*(undefined8 *)(*param_1 + 0x1d0));
      return;
    }
                    /* WARNING: Subroutine does not return */
    native_sub_432810();
  }
  return;
}



/* UIGrid$$AddChild @ 0x9efe80
 * void UIGrid__AddChild (UIGrid_o* __this, UnityEngine_Transform_o* trans, bool sort, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIGrid$$AddChild
   void UIGrid__AddChild (UIGrid_o* __this, UnityEngine_Transform_o* trans, bool sort, const
   MethodInfo* method); */

void native_UIGrid__AddChild_9efe80(long *param_1,long param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  
  if ((bRam0000000001341968 & 1) == 0) {
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    bRam0000000001341968 = 1;
  }
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar1 = native_UnityEngine_Object__op_Inequality_8d76fc(param_2,0,0);
  if ((uVar1 & 1) != 0) {
    uVar2 = native_UnityEngine_Component__get_transform_8da62c(param_1,0);
    if (param_2 != 0) {
      native_UnityEngine_Transform__set_parent_771f18(param_2,uVar2,0);
      uVar2 = native_UIGrid__GetChildList_9dd490(param_1);
                    /* WARNING: Could not recover jumptable at 0x009eff30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x1c8))(param_1,uVar2,*(undefined8 *)(*param_1 + 0x1d0));
      return;
    }
                    /* WARNING: Subroutine does not return */
    native_sub_432810();
  }
  return;
}



/* UIGrid$$RemoveChild @ 0x9eff48
 * bool UIGrid__RemoveChild (UIGrid_o* __this, UnityEngine_Transform_o* t, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIGrid$$RemoveChild
   bool UIGrid__RemoveChild (UIGrid_o* __this, UnityEngine_Transform_o* t, const MethodInfo*
   method); */

bool native_UIGrid__RemoveChild_9eff48(long *param_1,undefined8 param_2)

{
  bool bVar1;
  long lVar2;
  ulong uVar3;
  
  if ((bRam0000000001341969 & 1) == 0) {
    native_sub_43273c(&Method_System_Collections_Generic_List_Transform__Remove___12dd198);
    bRam0000000001341969 = 1;
  }
  lVar2 = native_UIGrid__GetChildList_9dd490(param_1);
  if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    native_sub_432810();
  }
  uVar3 = native_System_Collections_Generic_List_BMSymbol___Remove_d41f3c
                    (lVar2,param_2,
                     _Method_System_Collections_Generic_List_Transform__Remove___12dd198);
  bVar1 = (uVar3 & 1) != 0;
  if (bVar1) {
    (**(code **)(*param_1 + 0x1c8))(param_1,lVar2,*(undefined8 *)(*param_1 + 0x1d0));
  }
  return bVar1;
}



/* UIGrid$$Init @ 0x9effdc
 * void UIGrid__Init (UIGrid_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIGrid$$Init
   void UIGrid__Init (UIGrid_o* __this, const MethodInfo* method); */

void native_UIGrid__Init_9effdc(long param_1)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  
  if ((bRam000000000134196a & 1) == 0) {
    native_sub_43273c(&Method_NGUITools_FindInParents_UIPanel____12e5760);
    native_sub_43273c(&NGUITools_TypeInfo_12d53c8);
    bRam000000000134196a = 1;
  }
  *(undefined1 *)(param_1 + 0x60) = 1;
  uVar4 = native_UnityEngine_Component__get_gameObject_8da66c(param_1,0);
  if (((*(byte *)(_NGUITools_TypeInfo_12d53c8 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_NGUITools_TypeInfo_12d53c8 + 0xe0) == 0)) {
    native_sub_4327ec(_NGUITools_TypeInfo_12d53c8);
  }
  uVar4 = native_NGUITools__FindInParents_object__4a5c04
                    (uVar4,_Method_NGUITools_FindInParents_UIPanel____12e5760);
  puVar5 = (undefined8 *)(param_1 + 0x58);
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



/* UIGrid$$Start @ 0x9f0080
 * void UIGrid__Start (UIGrid_o* __this, const MethodInfo* method); */

/* UIGrid$$Start
   void UIGrid__Start (UIGrid_o* __this, const MethodInfo* method); */

void native_UIGrid__Start_9f0080(long *param_1)

{
  long lVar1;
  
  if ((char)param_1[0xc] == '\0') {
    (**(code **)(*param_1 + 0x178))(param_1,*(undefined8 *)(*param_1 + 0x180));
  }
  lVar1 = param_1[7];
  *(undefined1 *)(param_1 + 7) = 0;
  (**(code **)(*param_1 + 0x1b8))(param_1,*(undefined8 *)(*param_1 + 0x1c0));
  *(char *)(param_1 + 7) = (char)lVar1;
  if (pcRam0000000001340948 == (code *)0x0) {
    pcRam0000000001340948 = (code *)native_sub_4326f0(&UNK_00e2c702);
  }
                    /* WARNING: Could not recover jumptable at 0x008d7b58. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pcRam0000000001340948)(param_1,0);
  return;
}



/* UIGrid$$Update @ 0x9f00dc
 * void UIGrid__Update (UIGrid_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIGrid$$Update
   void UIGrid__Update (UIGrid_o* __this, const MethodInfo* method); */

void native_UIGrid__Update_9f00dc(long *param_1)

{
  long lVar1;
  ulong uVar2;
  undefined8 uStack_68;
  undefined8 uStack_60;
  long lStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  long lStack_40;
  
  if ((bRam000000000134196b & 1) == 0) {
    native_sub_43273c(&
                      Method_System_Collections_Generic_List_Enumerator_SpringPosition__Dispose___12da618
                     );
    native_sub_43273c(&
                      Method_System_Collections_Generic_List_Enumerator_SpringPosition__MoveNext___12da620
                     );
    native_sub_43273c(&
                      Method_System_Collections_Generic_List_Enumerator_SpringPosition__get_Current___12da628
                     );
    native_sub_43273c(&Method_System_Collections_Generic_List_SpringPosition__Clear___12dce38);
    native_sub_43273c(&
                      Method_System_Collections_Generic_List_SpringPosition__GetEnumerator___12dce40
                     );
    native_sub_43273c(&Method_System_Collections_Generic_List_SpringPosition__get_Count___12dce48);
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    bRam000000000134196b = 1;
  }
  uStack_48 = 0;
  lStack_40 = 0;
  uStack_50 = 0;
  lVar1 = param_1[0xd];
  if ((lVar1 == 0) || (*(int *)(lVar1 + 0x18) == 0)) {
    (**(code **)(*param_1 + 0x1b8))(param_1,*(undefined8 *)(*param_1 + 0x1c0));
    if ((param_1[0xd] == 0) || (*(int *)(param_1[0xd] + 0x18) == 0)) {
      native_UnityEngine_Behaviour__set_enabled_8d7b0c(param_1,0,0);
    }
  }
  else {
    native_System_Collections_Generic_List_BE2_Op_FunctionLocalVariable___GetEnumerator_d414fc
              (&uStack_68,lVar1,
               _Method_System_Collections_Generic_List_SpringPosition__GetEnumerator___12dce40);
    lStack_40 = lStack_58;
    uStack_48 = uStack_60;
    uStack_50 = uStack_68;
    do {
      do {
        uVar2 = native_System_Collections_Generic_List_Enumerator_BE2_Op_FunctionLocalVariable___MoveNext_7e8f30
                          (&uStack_50,
                           _Method_System_Collections_Generic_List_Enumerator_SpringPosition__MoveNext___12da620
                          );
        lVar1 = lStack_40;
        if ((uVar2 & 1) == 0) {
          native_System_Collections_Generic_List_Enumerator_BE2_Op_FunctionLocalVariable___Dispose_7e8f2c
                    (&uStack_50,
                     _Method_System_Collections_Generic_List_Enumerator_SpringPosition__Dispose___12da618
                    );
          if (param_1[0xd] == 0) {
                    /* WARNING: Subroutine does not return */
            native_sub_432810();
          }
          native_System_Collections_Generic_List_Action___Clear_d40e80
                    (param_1[0xd],
                     _Method_System_Collections_Generic_List_SpringPosition__Clear___12dce38);
          native_UnityEngine_Behaviour__set_enabled_8d7b0c(param_1,0,0);
          goto LAB_009f0280;
        }
        if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
           (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
          native_sub_4327ec();
        }
        uVar2 = native_UnityEngine_Object__op_Implicit_8e1b98(lVar1,0);
      } while ((uVar2 & 1) == 0);
      if (lVar1 == 0) {
                    /* WARNING: Subroutine does not return */
        native_sub_432810();
      }
      uVar2 = native_UnityEngine_Behaviour__get_enabled_8d7acc(lVar1,0);
    } while ((uVar2 & 1) == 0);
    native_System_Collections_Generic_List_Enumerator_BE2_Op_FunctionLocalVariable___Dispose_7e8f2c
              (&uStack_50,
               _Method_System_Collections_Generic_List_Enumerator_SpringPosition__Dispose___12da618)
    ;
LAB_009f0280:
    if (*(char *)((long)param_1 + 0x3b) != '\0') {
      native_UIGrid__ConstrainWithinPanel_9f0308(param_1);
    }
    if (param_1[8] != 0) {
      native_UIGrid_OnReposition__Invoke_556cd0(param_1[8],0);
    }
  }
  return;
}



/* UIGrid$$OnValidate @ 0x9f042c
 * void UIGrid__OnValidate (UIGrid_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIGrid$$OnValidate
   void UIGrid__OnValidate (UIGrid_o* __this, const MethodInfo* method); */

void native_UIGrid__OnValidate_9f042c(long *param_1)

{
  ulong uVar1;
  
  if ((bRam000000000134196c & 1) == 0) {
    native_sub_43273c(&NGUITools_TypeInfo_12d53c8);
    bRam000000000134196c = 1;
  }
  uVar1 = native_UnityEngine_Application__get_isPlaying_8d60cc(0);
  if ((uVar1 & 1) == 0) {
    if (((*(byte *)(_NGUITools_TypeInfo_12d53c8 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_NGUITools_TypeInfo_12d53c8 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    uVar1 = native_NGUITools__GetActive_72d02c(param_1,0);
    if ((uVar1 & 1) != 0) {
                    /* WARNING: Could not recover jumptable at 0x009f04ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x1b8))(param_1,*(undefined8 *)(*param_1 + 0x1c0));
      return;
    }
  }
  return;
}



/* UIGrid$$SortByName @ 0x9f04bc
 * int32_t UIGrid__SortByName (UnityEngine_Transform_o* a, UnityEngine_Transform_o* b, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIGrid$$SortByName
   int32_t UIGrid__SortByName (UnityEngine_Transform_o* a, UnityEngine_Transform_o* b, const
   MethodInfo* method); */

void native_UIGrid__SortByName_9f04bc(long param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long *plVar3;
  
  if ((param_1 != 0) &&
     (uVar1 = native_UnityEngine_Object__get_name_8e8098(param_1,0), param_2 != 0)) {
    uVar2 = native_UnityEngine_Object__get_name_8e8098(param_2,0);
    if ((bRam000000000134212a & 1) == 0) {
      native_sub_43273c(&System_Globalization_CultureInfo_TypeInfo_12d4068,uVar2,0);
      bRam000000000134212a = 1;
    }
    if (((*(byte *)(_System_Globalization_CultureInfo_TypeInfo_12d4068 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_System_Globalization_CultureInfo_TypeInfo_12d4068 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    plVar3 = (long *)native_System_Globalization_CultureInfo__get_CurrentCulture_b2bdb8(0);
    if (plVar3 != (long *)0x0) {
      plVar3 = (long *)(**(code **)(*plVar3 + 0x1f8))(plVar3,*(undefined8 *)(*plVar3 + 0x200));
      if (plVar3 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00b0ae14. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x1a8))(plVar3,uVar1,uVar2,0,*(undefined8 *)(*plVar3 + 0x1b0));
        return;
      }
    }
                    /* WARNING: Subroutine does not return */
    native_sub_432810();
  }
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* UIGrid$$SortByNameInv @ 0x9f0508
 * int32_t UIGrid__SortByNameInv (UnityEngine_Transform_o* a, UnityEngine_Transform_o* b, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIGrid$$SortByNameInv
   int32_t UIGrid__SortByNameInv (UnityEngine_Transform_o* a, UnityEngine_Transform_o* b, const
   MethodInfo* method); */

void native_UIGrid__SortByNameInv_9f0508(long param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long *plVar3;
  
  if ((param_2 != 0) &&
     (uVar1 = native_UnityEngine_Object__get_name_8e8098(param_2,0), param_1 != 0)) {
    uVar2 = native_UnityEngine_Object__get_name_8e8098(param_1,0);
    if ((bRam000000000134212a & 1) == 0) {
      native_sub_43273c(&System_Globalization_CultureInfo_TypeInfo_12d4068,uVar2,0);
      bRam000000000134212a = 1;
    }
    if (((*(byte *)(_System_Globalization_CultureInfo_TypeInfo_12d4068 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_System_Globalization_CultureInfo_TypeInfo_12d4068 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    plVar3 = (long *)native_System_Globalization_CultureInfo__get_CurrentCulture_b2bdb8(0);
    if (plVar3 != (long *)0x0) {
      plVar3 = (long *)(**(code **)(*plVar3 + 0x1f8))(plVar3,*(undefined8 *)(*plVar3 + 0x200));
      if (plVar3 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00b0ae14. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x1a8))(plVar3,uVar1,uVar2,0,*(undefined8 *)(*plVar3 + 0x1b0));
        return;
      }
    }
                    /* WARNING: Subroutine does not return */
    native_sub_432810();
  }
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* UIGrid$$SortHorizontal @ 0x9f0558
 * int32_t UIGrid__SortHorizontal (UnityEngine_Transform_o* a, UnityEngine_Transform_o* b, const MethodInfo* method); */

/* UIGrid$$SortHorizontal
   int32_t UIGrid__SortHorizontal (UnityEngine_Transform_o* a, UnityEngine_Transform_o* b, const
   MethodInfo* method); */

void native_UIGrid__SortHorizontal_9f0558
               (undefined1 param_1 [16],undefined4 param_2,undefined4 param_3,long param_4,
               long param_5)

{
  undefined4 uVar1;
  undefined8 uStack_30;
  undefined4 uStack_28;
  
  uStack_28 = 0;
  uStack_30 = 0;
  if (param_4 != 0) {
    uVar1 = native_UnityEngine_Transform__get_localPosition_7717f4(param_4,0);
    uStack_30 = CONCAT44(param_2,uVar1);
    uStack_28 = param_3;
    if (param_5 != 0) {
      native_UnityEngine_Transform__get_localPosition_7717f4(param_5,0);
      native_System_Single__CompareTo_af87b4(&uStack_30,0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* UIGrid$$SortHorizontalInv @ 0x9f05b8
 * int32_t UIGrid__SortHorizontalInv (UnityEngine_Transform_o* a, UnityEngine_Transform_o* b, const MethodInfo* method); */

/* UIGrid$$SortHorizontalInv
   int32_t UIGrid__SortHorizontalInv (UnityEngine_Transform_o* a, UnityEngine_Transform_o* b, const
   MethodInfo* method); */

void native_UIGrid__SortHorizontalInv_9f05b8
               (undefined1 param_1 [16],undefined4 param_2,undefined4 param_3,long param_4,
               long param_5)

{
  undefined4 uVar1;
  undefined8 uStack_30;
  undefined4 uStack_28;
  
  uStack_28 = 0;
  uStack_30 = 0;
  if (param_5 != 0) {
    uVar1 = native_UnityEngine_Transform__get_localPosition_7717f4(param_5,0);
    uStack_30 = CONCAT44(param_2,uVar1);
    uStack_28 = param_3;
    if (param_4 != 0) {
      native_UnityEngine_Transform__get_localPosition_7717f4(param_4,0);
      native_System_Single__CompareTo_af87b4(&uStack_30,0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* UIGrid$$SortVertical @ 0x9f061c
 * int32_t UIGrid__SortVertical (UnityEngine_Transform_o* a, UnityEngine_Transform_o* b, const MethodInfo* method); */

/* UIGrid$$SortVertical
   int32_t UIGrid__SortVertical (UnityEngine_Transform_o* a, UnityEngine_Transform_o* b, const
   MethodInfo* method); */

void native_UIGrid__SortVertical_9f061c
               (undefined1 param_1 [16],undefined1 param_2 [16],undefined4 param_3,long param_4,
               long param_5)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 uStack_30;
  undefined4 uStack_28;
  
  uVar3 = param_2._4_4_;
  uVar2 = param_2._0_4_;
  uStack_28 = 0;
  uStack_30 = 0;
  if (param_5 != 0) {
    uVar1 = native_UnityEngine_Transform__get_localPosition_7717f4(param_5,0);
    uStack_30 = CONCAT44(uVar2,uVar1);
    uStack_28 = param_3;
    if (param_4 != 0) {
      native_UnityEngine_Transform__get_localPosition_7717f4(param_4,0);
      native_System_Single__CompareTo_af87b4(CONCAT44(uVar3,uVar2),(ulong)&uStack_30 | 4,0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* UIGrid$$SortVerticalInv @ 0x9f068c
 * int32_t UIGrid__SortVerticalInv (UnityEngine_Transform_o* a, UnityEngine_Transform_o* b, const MethodInfo* method); */

/* UIGrid$$SortVerticalInv
   int32_t UIGrid__SortVerticalInv (UnityEngine_Transform_o* a, UnityEngine_Transform_o* b, const
   MethodInfo* method); */

void native_UIGrid__SortVerticalInv_9f068c
               (undefined1 param_1 [16],undefined1 param_2 [16],undefined4 param_3,long param_4,
               long param_5)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 uStack_30;
  undefined4 uStack_28;
  
  uVar3 = param_2._4_4_;
  uVar2 = param_2._0_4_;
  uStack_28 = 0;
  uStack_30 = 0;
  if (param_4 != 0) {
    uVar1 = native_UnityEngine_Transform__get_localPosition_7717f4(param_4,0);
    uStack_30 = CONCAT44(uVar2,uVar1);
    uStack_28 = param_3;
    if (param_5 != 0) {
      native_UnityEngine_Transform__get_localPosition_7717f4(param_5,0);
      native_System_Single__CompareTo_af87b4(CONCAT44(uVar3,uVar2),(ulong)&uStack_30 | 4,0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* UIGrid$$Sort @ 0x9f06f8
 * void UIGrid__Sort (UIGrid_o* __this, System_Collections_Generic_List_Transform__o* list, const MethodInfo* method); */

/* UIGrid$$Sort
   void UIGrid__Sort (UIGrid_o* __this, System_Collections_Generic_List_Transform__o* list, const
   MethodInfo* method); */

void native_UIGrid__Sort_9f06f8(void)

{
  return;
}



/* UIGrid$$Reposition @ 0x9f06fc
 * void UIGrid__Reposition (UIGrid_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIGrid$$Reposition
   void UIGrid__Reposition (UIGrid_o* __this, const MethodInfo* method); */

void native_UIGrid__Reposition_9f06fc(long *param_1)

{
  long *plVar1;
  ushort uVar2;
  long lVar3;
  undefined8 *puVar4;
  ulong uVar5;
  ulong uVar6;
  undefined8 uVar7;
  long lVar8;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  undefined8 extraout_x1_01;
  undefined8 extraout_x1_02;
  long lVar9;
  long lVar10;
  int *piVar11;
  code *pcVar12;
  long lVar13;
  long *plVar14;
  long lStack_48;
  
  if ((bRam000000000134196d & 1) == 0) {
    native_sub_43273c(&Method_System_Collections_Generic_List_SpringPosition__get_Count___12dce48);
    native_sub_43273c(&Method_NGUITools_FindInParents_UIPanel____12e5760);
    native_sub_43273c(&NGUITools_TypeInfo_12d53c8);
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    native_sub_43273c(&StringLiteral_last_change_12f5390);
    bRam000000000134196d = 1;
  }
  uVar6 = native_UnityEngine_Application__get_isPlaying_8d60cc(0);
  if (((uVar6 & 1) != 0) && ((char)param_1[0xc] == '\0')) {
    uVar7 = native_UnityEngine_Component__get_gameObject_8da66c(param_1,0);
    if (((*(byte *)(_NGUITools_TypeInfo_12d53c8 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_NGUITools_TypeInfo_12d53c8 + 0xe0) == 0)) {
      native_sub_4327ec(_NGUITools_TypeInfo_12d53c8);
    }
    uVar6 = native_NGUITools__GetActive_72d0d4(uVar7,0);
    if ((uVar6 & 1) != 0) {
      (**(code **)(*param_1 + 0x178))(param_1,*(undefined8 *)(*param_1 + 0x180));
      goto LAB_009f0860;
    }
  }
  plVar14 = param_1 + 0xb;
  lVar8 = *plVar14;
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar6 = native_UnityEngine_Object__op_Equality_8e9a3c(lVar8,0,0);
  if ((uVar6 & 1) != 0) {
    uVar7 = native_UnityEngine_Component__get_gameObject_8da66c(param_1,0);
    if (((*(byte *)(_NGUITools_TypeInfo_12d53c8 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_NGUITools_TypeInfo_12d53c8 + 0xe0) == 0)) {
      native_sub_4327ec(_NGUITools_TypeInfo_12d53c8);
    }
    lVar8 = native_NGUITools__FindInParents_object__4a5c04
                      (uVar7,_Method_NGUITools_FindInParents_UIPanel____12e5760);
    *plVar14 = lVar8;
    native_sub_4326e0(plVar14,lVar8);
  }
LAB_009f0860:
  if ((char)param_1[10] != '\0') {
    *(undefined1 *)(param_1 + 10) = 0;
    if (*(int *)((long)param_1 + 0x1c) == 0) {
      *(undefined4 *)((long)param_1 + 0x1c) = 1;
    }
    if (((*(byte *)(_NGUITools_TypeInfo_12d53c8 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_NGUITools_TypeInfo_12d53c8 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    native_NGUITools__SetDirty_72ea3c(param_1,_StringLiteral_last_change_12f5390,0);
  }
  uVar7 = native_UIGrid__GetChildList_9dd490(param_1);
  (**(code **)(*param_1 + 0x1c8))(param_1,uVar7,*(undefined8 *)(*param_1 + 0x1d0));
  if (*(char *)((long)param_1 + 0x3b) != '\0') {
    native_UIGrid__ConstrainWithinPanel_9f0308(param_1);
  }
  if ((param_1[0xd] != 0) && (*(int *)(param_1[0xd] + 0x18) != 0)) {
    native_UnityEngine_Behaviour__set_enabled_8d7b0c(param_1,1,0);
  }
  lVar8 = param_1[8];
  if (lVar8 == 0) {
    return;
  }
  uVar7 = 0;
  lStack_48 = lVar8;
  lVar9 = *(long *)(lVar8 + 0x68);
  if (lVar9 == 0) {
    plVar14 = &lStack_48;
    lVar13 = 1;
  }
  else {
    lVar13 = *(long *)(lVar9 + 0x18);
    if (lVar13 == 0) {
      return;
    }
    plVar14 = (long *)(lVar9 + 0x20);
  }
  lVar9 = 0;
  do {
    lVar10 = plVar14[lVar9];
    plVar1 = *(long **)(lVar10 + 0x20);
    lVar3 = *(long *)(lVar10 + 0x28);
    pcVar12 = *(code **)(lVar10 + 0x10);
    if (*(short *)(lVar3 + 0x48) == -1) {
      native_sub_4327f4(lVar3,uVar7);
    }
    uVar6 = native_sub_432768(lVar3);
    if ((uVar6 & 1) == 0) {
      if ((((plVar1 == (long *)0x0) || (*(short *)(lVar3 + 0x48) == -1)) ||
          ((*(byte *)(*plVar1 + 0x115) & 1) != 0)) || (*(long *)(lVar8 + 0x18) == 0))
      goto LAB_00556eac;
      uVar6 = native_sub_432760(lVar3);
      uVar5 = native_sub_432b64(lVar3);
      if ((uVar6 & 1) == 0) {
        uVar2 = *(ushort *)(lVar3 + 0x48);
        if ((uVar5 & 1) == 0) {
          lVar3 = *plVar1 + (ulong)uVar2 * 0x10;
          (**(code **)(lVar3 + 0x138))(plVar1,*(undefined8 *)(lVar3 + 0x140));
          uVar7 = extraout_x1;
          goto LAB_00556eb8;
        }
        lVar3 = native_sub_432764(lVar3);
        lVar10 = *plVar1;
        if ((ulong)*(ushort *)(lVar10 + 0x12a) != 0) {
          uVar6 = 0;
          piVar11 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
          do {
            if (*(long *)(piVar11 + -2) == lVar3) {
              puVar4 = (undefined8 *)(lVar10 + (long)(int)(*piVar11 + (uint)uVar2) * 0x10 + 0x138);
              goto LAB_00556dd4;
            }
            uVar6 = uVar6 + 1;
            piVar11 = piVar11 + 4;
          } while (uVar6 < *(ushort *)(lVar10 + 0x12a));
        }
        puVar4 = (undefined8 *)native_sub_3c9b34(plVar1,lVar3,(ulong)uVar2);
LAB_00556dd4:
        pcVar12 = (code *)*puVar4;
        puVar4 = (undefined8 *)puVar4[1];
      }
      else {
        if ((uVar5 & 1) == 0) {
          uVar7 = *(undefined8 *)(*plVar1 + (ulong)*(ushort *)(lVar3 + 0x48) * 0x10 + 0x140);
        }
        else {
          lVar10 = *plVar1;
          if ((ulong)*(ushort *)(lVar10 + 0x12a) != 0) {
            uVar6 = 0;
            piVar11 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
            do {
              if (*(long *)(piVar11 + -2) == *(long *)(lVar3 + 0x18)) {
                lVar10 = lVar10 + (long)(int)(*piVar11 + (uint)*(ushort *)(lVar3 + 0x48)) * 0x10 +
                         0x138;
                goto LAB_00556dac;
              }
              uVar6 = uVar6 + 1;
              piVar11 = piVar11 + 4;
            } while (uVar6 < *(ushort *)(lVar10 + 0x12a));
          }
          lVar10 = native_sub_3c9b34(plVar1);
LAB_00556dac:
          uVar7 = *(undefined8 *)(lVar10 + 8);
        }
        puVar4 = (undefined8 *)native_sub_4327e8(uVar7,lVar3);
        pcVar12 = (code *)*puVar4;
      }
      (*pcVar12)(plVar1,puVar4);
      uVar7 = extraout_x1_00;
    }
    else if (*(char *)(lVar3 + 0x4a) == '\0') {
      (*pcVar12)(lVar3);
      uVar7 = extraout_x1_01;
    }
    else {
LAB_00556eac:
      (*pcVar12)(plVar1,lVar3);
      uVar7 = extraout_x1_02;
    }
LAB_00556eb8:
    lVar9 = lVar9 + 1;
    if (lVar9 == lVar13) {
      return;
    }
  } while( true );
}



/* UIGrid$$ConstrainWithinPanel @ 0x9f0308
 * void UIGrid__ConstrainWithinPanel (UIGrid_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIGrid$$ConstrainWithinPanel
   void UIGrid__ConstrainWithinPanel (UIGrid_o* __this, const MethodInfo* method); */

void native_UIGrid__ConstrainWithinPanel_9f0308(long param_1)

{
  ulong uVar1;
  long *plVar2;
  undefined8 uVar3;
  long lVar4;
  
  if ((bRam000000000134196e & 1) == 0) {
    native_sub_43273c(&Method_UnityEngine_Component_GetComponent_UIScrollView____12e2c08);
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    bRam000000000134196e = 1;
  }
  uVar3 = *(undefined8 *)(param_1 + 0x58);
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar1 = native_UnityEngine_Object__op_Inequality_8d76fc(uVar3,0,0);
  if ((uVar1 & 1) == 0) {
    return;
  }
  lVar4 = *(long *)(param_1 + 0x58);
  uVar3 = native_UnityEngine_Component__get_transform_8da62c(param_1,0);
  if (lVar4 != 0) {
    native_UIPanel__ConstrainTargetToBounds_af4d38(lVar4,uVar3,1,0);
    if (*(long *)(param_1 + 0x58) != 0) {
      plVar2 = (long *)native_UnityEngine_Component__GetComponent_ActiveAnimation__49daec
                                 (*(long *)(param_1 + 0x58),
                                  _Method_UnityEngine_Component_GetComponent_UIScrollView____12e2c08
                                 );
      if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
        native_sub_4327ec(_UnityEngine_Object_TypeInfo_12d54e0);
      }
      uVar1 = native_UnityEngine_Object__op_Inequality_8d76fc(plVar2,0,0);
      if ((uVar1 & 1) == 0) {
        return;
      }
      if (plVar2 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x009f0414. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar2 + 0x1b8))(plVar2,1,*(undefined8 *)(*plVar2 + 0x1c0));
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* UIGrid$$ResetPosition @ 0x9f092c
 * void UIGrid__ResetPosition (UIGrid_o* __this, System_Collections_Generic_List_Transform__o* list, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIGrid$$ResetPosition
   void UIGrid__ResetPosition (UIGrid_o* __this, System_Collections_Generic_List_Transform__o* list,
   const MethodInfo* method); */

void native_UIGrid__ResetPosition_9f092c
               (undefined1 param_1 [16],ulong param_2,ulong param_3,long param_4,long param_5)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  byte bVar5;
  int iVar6;
  byte bVar7;
  bool bVar8;
  int iVar9;
  int iVar10;
  long lVar11;
  ulong uVar12;
  long lVar13;
  ulong uVar14;
  long *plVar15;
  int iVar16;
  int iVar17;
  long lVar18;
  uint uVar19;
  float fVar20;
  ulong uVar21;
  double dVar22;
  ulong uVar23;
  undefined8 uVar24;
  float fVar25;
  ulong uVar26;
  float fVar27;
  float fVar28;
  int iStack_dc;
  double dStack_d8;
  undefined8 uStack_d0;
  long lStack_c8;
  double dStack_c0;
  undefined8 uStack_b8;
  long lStack_b0;
  
  if ((bRam000000000134196f & 1) == 0) {
    native_sub_43273c(&Method_UnityEngine_Component_GetComponent_SpringPosition____12e2b10);
    native_sub_43273c(&Method_UnityEngine_Component_GetComponent_TweenAlpha____12e2b70);
    native_sub_43273c(&
                      Method_System_Collections_Generic_List_Enumerator_Transform__Dispose___12da690
                     );
    native_sub_43273c(&
                      Method_System_Collections_Generic_List_Enumerator_Transform__MoveNext___12da698
                     );
    native_sub_43273c(&
                      Method_System_Collections_Generic_List_Enumerator_Transform__get_Current___12da6a0
                     );
    native_sub_43273c(&Method_UnityEngine_GameObject_GetComponent_SpringPosition____12e4a38);
    native_sub_43273c(&Method_System_Collections_Generic_List_SpringPosition__Add___12dce30);
    native_sub_43273c(&Method_System_Collections_Generic_List_SpringPosition__Clear___12dce38);
    native_sub_43273c(&Method_System_Collections_Generic_List_Transform__GetEnumerator___12dd188);
    native_sub_43273c(&Method_System_Collections_Generic_List_SpringPosition___ctor___12dce28);
    native_sub_43273c(&Method_System_Collections_Generic_List_Transform__get_Count___12dd1a8);
    native_sub_43273c(&Method_System_Collections_Generic_List_Transform__get_Item___12dd1b0);
    native_sub_43273c(&System_Collections_Generic_List_SpringPosition__TypeInfo_12d2b48);
    native_sub_43273c(&NGUIMath_TypeInfo_12d53b8);
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    bRam000000000134196f = 1;
  }
  uStack_b8 = 0;
  lStack_b0 = 0;
  dStack_c0 = 0.0;
  plVar15 = (long *)(param_4 + 0x68);
  if (*plVar15 != 0) {
    native_System_Collections_Generic_List_Action___Clear_d40e80
              (*plVar15,_Method_System_Collections_Generic_List_SpringPosition__Clear___12dce38);
  }
  if (*(char *)(param_4 + 0x38) == '\0') {
LAB_009f0a8c:
    uVar12 = 0;
  }
  else {
    lVar11 = native_UnityEngine_Component__get_gameObject_8da66c(param_4,0);
    if (lVar11 == 0) goto LAB_009f1250;
    uVar12 = native_UnityEngine_GameObject__get_activeInHierarchy_8de728(lVar11,0);
    if ((uVar12 & 1) == 0) goto LAB_009f0a8c;
    uVar12 = native_UnityEngine_Application__get_isPlaying_8d60cc(0);
    uVar12 = uVar12 & 0xffffffff;
  }
  if (param_5 == 0) {
LAB_009f1250:
                    /* WARNING: Subroutine does not return */
    native_sub_432810();
  }
  uVar1 = *(uint *)(param_5 + 0x18);
  if (0 < (int)uVar1) {
    iVar16 = 0;
    lVar11 = 0;
    iVar17 = 0;
    iVar9 = 0;
    iVar10 = 0;
    fVar25 = 0.0;
    iStack_dc = 0;
    uVar2 = uVar1;
    do {
      uVar19 = (uint)lVar11;
      uVar14 = param_2;
      uVar26 = param_3;
      if (uVar2 <= uVar19) {
        native_System_ThrowHelper__ThrowArgumentOutOfRangeException_9fe0f4(0);
        uVar14 = param_2;
        uVar26 = param_3;
      }
      lVar18 = *(long *)(*(long *)(param_5 + 0x10) + lVar11 * 8 + 0x20);
      if (lVar18 == 0) goto LAB_009f1250;
      uVar21 = native_UnityEngine_Transform__get_localPosition_7717f4(lVar18,0);
      iVar3 = *(int *)(param_4 + 0x18);
      if (iVar3 == 2) {
        param_2 = uVar14;
        param_3 = uVar26;
        if (0.0 < *(float *)(param_4 + 0x30)) {
          fVar27 = (float)uVar21 / *(float *)(param_4 + 0x30);
          dVar22 = (double)func_0x002c9600((double)fVar27,&dStack_d8);
          if (0.0 <= fVar27) {
            if (dVar22 == 0.5) {
              fVar27 = (float)dStack_d8 + 1.0;
              goto LAB_009f0bf8;
            }
            fVar28 = (float)(int)(fVar27 + 0.5);
          }
          else if (dVar22 == -0.5) {
            fVar27 = (float)dStack_d8 + -1.0;
LAB_009f0bf8:
            fVar28 = (float)dStack_d8;
            if (((long)dStack_d8 & 1U) != 0) {
              fVar28 = fVar27;
            }
          }
          else {
            fVar28 = (float)(int)(fVar27 + -0.5);
          }
          param_2 = (ulong)(uint)*(float *)(param_4 + 0x30);
          uVar21 = (ulong)(uint)(fVar28 * *(float *)(param_4 + 0x30));
        }
        if (*(float *)(param_4 + 0x34) <= 0.0) goto LAB_009f0d14;
        fVar27 = (float)uVar14 / *(float *)(param_4 + 0x34);
        dVar22 = (double)func_0x002c9600((double)fVar27,&dStack_d8);
        if (0.0 <= fVar27) {
          if (dVar22 == 0.5) {
            fVar27 = (float)dStack_d8 + 1.0;
            goto LAB_009f0c80;
          }
          fVar28 = (float)(int)(fVar27 + 0.5);
        }
        else if (dVar22 == -0.5) {
          fVar27 = (float)dStack_d8 + -1.0;
LAB_009f0c80:
          fVar28 = (float)dStack_d8;
          if (((long)dStack_d8 & 1U) != 0) {
            fVar28 = fVar27;
          }
        }
        else {
          fVar28 = (float)(int)(fVar27 + -0.5);
        }
        param_2 = (ulong)(uint)*(float *)(param_4 + 0x34);
        uVar23 = (ulong)(uint)(fVar28 * *(float *)(param_4 + 0x34));
        goto joined_r0x009f0cac;
      }
      param_3 = (ulong)(uint)*(float *)(param_4 + 0x30);
      iVar4 = iStack_dc;
      iVar6 = iVar17;
      if (iVar3 != 0) {
        iVar4 = iVar17;
        iVar6 = iStack_dc;
      }
      fVar27 = (float)iVar4;
      param_2 = (ulong)(uint)fVar27;
      uVar14 = (ulong)(uint)-(*(float *)(param_4 + 0x34) * fVar27);
      fVar28 = *(float *)(param_4 + 0x30) * (float)iVar6;
      uVar21 = (ulong)(uint)fVar28;
      if (*(int *)(param_4 + 0x28) != 1) goto LAB_009f0d14;
      bVar5 = 0;
      iVar4 = *(int *)(param_4 + 0x24);
      if (6 < iVar4 - 2U) goto LAB_009f0ccc;
      uVar23 = (ulong)(uint)(*(float *)(param_4 + 0x34) * fVar27);
      bVar7 = 1;
      switch(iVar4) {
      case 2:
        bVar7 = 0;
        break;
      default:
        goto LAB_009f0ccc;
      case 5:
        break;
      case 6:
      case 7:
        bVar5 = 0;
        uVar14 = uVar23;
        goto LAB_009f0ccc;
      case 8:
        uVar14 = uVar23;
        bVar7 = 0;
      }
      bVar5 = bVar7;
      uVar21 = (ulong)(uint)-fVar28;
LAB_009f0ccc:
      if (fVar25 == 0.0) {
LAB_009f0d14:
        if ((uVar12 & 1) == 0) goto LAB_009f0da4;
LAB_009f0d18:
        if (*(char *)(param_4 + 0x39) != '\0') {
          lVar13 = native_UnityEngine_Component__GetComponent_ActiveAnimation__49daec
                             (lVar18,
                              _Method_UnityEngine_Component_GetComponent_TweenAlpha____12e2b70);
          if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
             (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
            native_sub_4327ec(_UnityEngine_Object_TypeInfo_12d54e0);
          }
          uVar12 = native_UnityEngine_Object__op_Inequality_8d76fc(lVar13,0,0);
          if ((uVar12 & 1) != 0) {
            if (lVar13 == 0) goto LAB_009f1250;
            uVar12 = native_UnityEngine_Behaviour__get_enabled_8d7acc(lVar13,0);
            if ((((uVar12 & 1) != 0) &&
                (fVar27 = (float)native_TweenAlpha__get_value_6e2a94(lVar13,0), fVar27 == 0.0)) &&
               (*(float *)(lVar13 + 0x84) == 1.0)) goto LAB_009f0da4;
          }
        }
        lVar13 = native_UnityEngine_Component__get_gameObject_8da66c(lVar18,0);
        if (lVar13 == 0) goto LAB_009f1250;
        lVar13 = native_UnityEngine_GameObject__GetComponent_BE2_BlockSectionHeader_Custom__4a2214
                           (lVar13,
                            _Method_UnityEngine_GameObject_GetComponent_SpringPosition____12e4a38);
        if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
           (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
          native_sub_4327ec(_UnityEngine_Object_TypeInfo_12d54e0);
        }
        uVar12 = native_UnityEngine_Object__op_Inequality_8d76fc(lVar13,0,0);
        if ((uVar12 & 1) != 0) {
          if (lVar13 == 0) goto LAB_009f1250;
          uVar12 = native_UnityEngine_Behaviour__get_enabled_8d7acc(lVar13,0);
          if ((uVar12 & 1) != 0) {
            native_SpringPosition__Finish_73f168(lVar13,0);
          }
        }
        native_UnityEngine_Transform__get_localPosition_7717f4(lVar18,0);
        uVar12 = native_UnityEngine_Vector3__op_Inequality_776c48(0);
        if ((uVar12 & 1) != 0) {
          uVar24 = native_UnityEngine_Component__get_gameObject_8da66c(lVar18,0);
          lVar18 = native_SpringPosition__Begin_73f250(uVar21,uVar14,uVar26,0x41700000,uVar24,0);
          if (lVar18 == 0) goto LAB_009f1250;
          *(undefined1 *)(lVar18 + 0x29) = 1;
          lVar13 = *plVar15;
          param_2 = uVar14;
          param_3 = uVar26;
          if (lVar13 == 0) {
            lVar13 = native_sub_432808(
                                      _System_Collections_Generic_List_SpringPosition__TypeInfo_12d2b48
                                      );
            native_System_Collections_Generic_List_XmlEventCache_XmlEvent______ctor_d3ff44
                      (lVar13,
                       _Method_System_Collections_Generic_List_SpringPosition___ctor___12dce28);
            *plVar15 = lVar13;
            native_sub_4326e0(plVar15,lVar13);
            lVar13 = *plVar15;
            param_2 = uVar14;
            param_3 = uVar26;
            if (lVar13 == 0) goto LAB_009f1250;
          }
          native_System_Collections_Generic_List_int_____Add_d40c00
                    (lVar13,lVar18,
                     _Method_System_Collections_Generic_List_SpringPosition__Add___12dce30);
        }
        uVar12 = 1;
      }
      else {
        if (iVar3 == 0) {
          if ((iVar4 == 7) || (iVar4 == 1)) {
            uVar21 = (ulong)(uint)(fVar25 + (float)uVar21);
          }
          goto LAB_009f0d14;
        }
        uVar23 = (ulong)(uint)((float)uVar14 - fVar25);
        if (!(bool)(iVar3 == 1 & (iVar4 == 3 | bVar5))) {
          uVar23 = uVar14;
        }
joined_r0x009f0cac:
        uVar14 = uVar23;
        if ((uVar12 & 1) != 0) goto LAB_009f0d18;
LAB_009f0da4:
        param_2 = uVar14;
        native_UnityEngine_Transform__set_localPosition_7718a4(uVar21,lVar18,0);
        uVar12 = 0;
        param_3 = uVar26;
      }
      iVar9 = native_UnityEngine_Mathf__Max_8e4cd0(iVar9,iVar17,0);
      iVar10 = native_UnityEngine_Mathf__Max_8e4cd0(iVar10,iStack_dc,0);
      iVar3 = *(int *)(param_4 + 0x2c);
      iVar17 = iVar17 + 1;
      if ((iVar3 <= iVar17) && (0 < iVar3)) {
        iStack_dc = iStack_dc + 1;
        if (iVar16 + *(int *)(param_5 + 0x18) < iVar3) {
          lVar18 = 0x30;
          if (*(int *)(param_4 + 0x18) != 0) {
            lVar18 = 0x34;
          }
          fVar25 = (float)(int)(uVar19 + (iVar3 - *(int *)(param_5 + 0x18)) + 1) * 0.5;
          param_2 = (ulong)(uint)fVar25;
          fVar25 = fVar25 * *(float *)(param_4 + lVar18);
          dVar22 = (double)func_0x002c9600((double)fVar25,&dStack_d8);
          if (0.0 <= fVar25) {
            if (dVar22 == 0.5) {
              fVar27 = (float)dStack_d8 + 1.0;
              goto LAB_009f0ffc;
            }
            fVar25 = (float)(int)(fVar25 + 0.5);
          }
          else if (dVar22 == -0.5) {
            fVar27 = (float)dStack_d8 + -1.0;
LAB_009f0ffc:
            param_2 = (ulong)(uint)fVar27;
            fVar25 = (float)dStack_d8;
            if (((long)dStack_d8 & 1U) != 0) {
              fVar25 = fVar27;
            }
          }
          else {
            fVar25 = (float)(int)(fVar25 + -0.5);
          }
        }
        iVar17 = 0;
      }
      if ((int)uVar1 <= (int)(uVar19 + 1)) goto LAB_009f1044;
      uVar2 = *(uint *)(param_5 + 0x18);
      lVar11 = lVar11 + 1;
      iVar16 = iVar16 + -1;
    } while( true );
  }
  iVar10 = 0;
  iVar9 = 0;
LAB_009f1044:
  iVar17 = *(int *)(param_4 + 0x24);
  if (iVar17 == 0) {
    return;
  }
  if (((*(byte *)(_NGUIMath_TypeInfo_12d53b8 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_NGUIMath_TypeInfo_12d53b8 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar24 = native_NGUIMath__GetPivotOffset_806cd0(iVar17,0);
  bVar8 = *(int *)(param_4 + 0x18) != 0;
  iVar17 = iVar9;
  if (bVar8) {
    iVar17 = iVar10;
  }
  if (bVar8) {
    iVar10 = iVar9;
  }
  fVar25 = (float)native_UnityEngine_Mathf__Lerp_8e5224
                            (0,*(float *)(param_4 + 0x30) * (float)iVar17,uVar24,0);
  uVar14 = 0;
  fVar27 = (float)native_UnityEngine_Mathf__Lerp_8e5224
                            (*(float *)(param_4 + 0x34) * (float)-iVar10,0,param_2,0);
  if ((*(int *)(param_4 + 0x28) == 1) && (*(int *)(param_4 + 0x18) != 2)) {
    fVar28 = 0.0;
    fVar20 = 0.0;
    switch(*(int *)(param_4 + 0x24)) {
    case 2:
    case 5:
      fVar20 = fVar27;
    case 8:
      fVar28 = fVar20;
      fVar25 = 0.0;
      break;
    default:
      goto LAB_009f10e4;
    case 6:
    case 7:
      break;
    }
  }
  else {
LAB_009f10e4:
    fVar28 = fVar27;
  }
  native_System_Collections_Generic_List_BE2_Op_FunctionLocalVariable___GetEnumerator_d414fc
            (&dStack_d8,param_5,
             _Method_System_Collections_Generic_List_Transform__GetEnumerator___12dd188);
  lStack_b0 = lStack_c8;
  uStack_b8 = uStack_d0;
  dStack_c0 = dStack_d8;
  do {
    while( true ) {
      fVar27 = (float)uVar14;
      uVar14 = native_System_Collections_Generic_List_Enumerator_BE2_Op_FunctionLocalVariable___MoveNext_7e8f30
                         (&dStack_c0,
                          _Method_System_Collections_Generic_List_Enumerator_Transform__MoveNext___12da698
                         );
      lVar11 = lStack_b0;
      if ((uVar14 & 1) == 0) {
        native_System_Collections_Generic_List_Enumerator_BE2_Op_FunctionLocalVariable___Dispose_7e8f2c
                  (&dStack_c0,
                   _Method_System_Collections_Generic_List_Enumerator_Transform__Dispose___12da690);
        return;
      }
      if ((uVar12 & 1) == 0) {
        lVar18 = 0;
      }
      else {
        if (lStack_b0 == 0) {
                    /* WARNING: Subroutine does not return */
          native_sub_432810();
        }
        lVar18 = native_UnityEngine_Component__GetComponent_ActiveAnimation__49daec
                           (lStack_b0,
                            _Method_UnityEngine_Component_GetComponent_SpringPosition____12e2b10);
      }
      if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
        native_sub_4327ec();
      }
      uVar14 = native_UnityEngine_Object__op_Inequality_8d76fc(lVar18,0,0);
      if ((uVar14 & 1) != 0) break;
LAB_009f11b0:
      if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
        native_sub_432810();
      }
      fVar20 = (float)native_UnityEngine_Transform__get_localPosition_7717f4(lVar11,0);
      uVar14 = (ulong)(uint)(fVar27 - fVar28);
      native_UnityEngine_Transform__set_localPosition_7718a4(fVar20 - fVar25,uVar14,lVar11,0);
    }
    if (lVar18 == 0) {
                    /* WARNING: Subroutine does not return */
      native_sub_432810();
    }
    uVar14 = native_UnityEngine_Behaviour__get_enabled_8d7acc(lVar18,0);
    if ((uVar14 & 1) == 0) goto LAB_009f11b0;
    fVar27 = *(float *)(lVar18 + 0x1c) - fVar28;
    uVar14 = (ulong)(uint)fVar27;
    *(float *)(lVar18 + 0x18) = *(float *)(lVar18 + 0x18) - fVar25;
    *(float *)(lVar18 + 0x1c) = fVar27;
  } while( true );
}



/* UIGrid$$.ctor @ 0x9f12c0
 * void UIGrid___ctor (UIGrid_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIGrid$$.ctor
   void UIGrid___ctor (UIGrid_o* __this, const MethodInfo* method); */

long native_UIGrid___ctor_9f12c0(long param_1)

{
  *(undefined8 *)(param_1 + 0x30) = 0x4348000043480000;
  if ((bRam0000000001340ae0 & 1) == 0) {
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0,0);
    bRam0000000001340ae0 = 1;
  }
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  return param_1;
}


