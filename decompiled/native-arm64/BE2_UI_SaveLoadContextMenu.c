/* ARM64 IL2CPP native pseudocode from Ghidra.
 * Recovered implementation, not original C# source.
 * Function boundaries follow the IL2CPP method address table. */


/* MG_BlocksEngine2.UI.BE2_UI_SaveLoadContextMenu$$get_Title @ 0xdc9fec
 * MG_BlocksEngine2_Utils_BE2_Text_o* MG_BlocksEngine2_UI_BE2_UI_SaveLoadContextMenu__get_Title (MG_BlocksEngine2_UI_BE2_UI_SaveLoadContextMenu_o* __this, const MethodInfo* method); */

/* MG_BlocksEngine2.UI.BE2_UI_SaveLoadContextMenu$$get_Title
   MG_BlocksEngine2_Utils_BE2_Text_o* MG_BlocksEngine2_UI_BE2_UI_SaveLoadContextMenu__get_Title
   (MG_BlocksEngine2_UI_BE2_UI_SaveLoadContextMenu_o* __this, const MethodInfo* method); */

undefined8 native_MG_BlocksEngine2_UI_BE2_UI_SaveLoadContextMenu__get_Title_dc9fec(long param_1)

{
  return *(undefined8 *)(param_1 + 0x68);
}



/* MG_BlocksEngine2.UI.BE2_UI_SaveLoadContextMenu$$set_Title @ 0xdc9ff4
 * void MG_BlocksEngine2_UI_BE2_UI_SaveLoadContextMenu__set_Title (MG_BlocksEngine2_UI_BE2_UI_SaveLoadContextMenu_o* __this, MG_BlocksEngine2_Utils_BE2_Text_o* value, const MethodInfo* method); */

/* MG_BlocksEngine2.UI.BE2_UI_SaveLoadContextMenu$$set_Title
   void MG_BlocksEngine2_UI_BE2_UI_SaveLoadContextMenu__set_Title
   (MG_BlocksEngine2_UI_BE2_UI_SaveLoadContextMenu_o* __this, MG_BlocksEngine2_Utils_BE2_Text_o*
   value, const MethodInfo* method); */

void native_MG_BlocksEngine2_UI_BE2_UI_SaveLoadContextMenu__set_Title_dc9ff4
               (long param_1,undefined8 param_2)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  
  puVar4 = (undefined8 *)(param_1 + 0x68);
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



/* MG_BlocksEngine2.UI.BE2_UI_SaveLoadContextMenu$$Awake @ 0xdc9ffc
 * void MG_BlocksEngine2_UI_BE2_UI_SaveLoadContextMenu__Awake (MG_BlocksEngine2_UI_BE2_UI_SaveLoadContextMenu_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MG_BlocksEngine2.UI.BE2_UI_SaveLoadContextMenu$$Awake
   void MG_BlocksEngine2_UI_BE2_UI_SaveLoadContextMenu__Awake
   (MG_BlocksEngine2_UI_BE2_UI_SaveLoadContextMenu_o* __this, const MethodInfo* method); */

void native_MG_BlocksEngine2_UI_BE2_UI_SaveLoadContextMenu__Awake_dc9ffc(long param_1)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  undefined8 uVar4;
  long lVar5;
  
  if ((bRam0000000001346de4 & 1) == 0) {
    native_sub_43273c(&
                      Method_UnityEngine_Component_GetComponentInParent_BE2_UI_ContextMenuManager____12e2d18
                     );
    bRam0000000001346de4 = 1;
  }
  uVar4 = native_UnityEngine_Component__GetComponentInParent_BE2_Canvas__49dc70
                    (param_1,
                     _Method_UnityEngine_Component_GetComponentInParent_BE2_UI_ContextMenuManager____12e2d18
                    );
  *(undefined8 *)(param_1 + 0x20) = uVar4;
  native_sub_4326e0(param_1 + 0x20);
  lVar5 = native_UnityEngine_Component__get_transform_8da62c(param_1,0);
  if (lVar5 != 0) {
    uVar4 = native_UnityEngine_Transform__GetChild_772ef0(lVar5,0,0);
    uVar4 = native_MG_BlocksEngine2_Utils_BE2_Text__GetBE2Text_610e74(uVar4,0);
    *(undefined8 *)(param_1 + 0x68) = uVar4;
    native_sub_4326e0((undefined8 *)(param_1 + 0x68),uVar4);
    uVar4 = native_MG_BlocksEngine2_Utils_BE2_Paths__get_SavedCodesPath_61717c(0);
    uVar4 = native_MG_BlocksEngine2_Utils_BE2_Paths__TranslateMarkupPath_611528(uVar4,0);
    *(undefined8 *)(param_1 + 0x18) = uVar4;
    if (iRam0000000001345318 != 0) {
      puVar1 = (ulong *)((param_1 + 0x18U >> 0x12 & 0x7fff) * 8 + 0x138ecd8);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = *puVar1 | 1L << (param_1 + 0x18U >> 0xc & 0x3f);
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* MG_BlocksEngine2.UI.BE2_UI_SaveLoadContextMenu$$Start @ 0xdca0b0
 * void MG_BlocksEngine2_UI_BE2_UI_SaveLoadContextMenu__Start (MG_BlocksEngine2_UI_BE2_UI_SaveLoadContextMenu_o* __this, const MethodInfo* method); */

/* MG_BlocksEngine2.UI.BE2_UI_SaveLoadContextMenu$$Start
   void MG_BlocksEngine2_UI_BE2_UI_SaveLoadContextMenu__Start
   (MG_BlocksEngine2_UI_BE2_UI_SaveLoadContextMenu_o* __this, const MethodInfo* method); */

void native_MG_BlocksEngine2_UI_BE2_UI_SaveLoadContextMenu__Start_dca0b0(long param_1)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  
  uVar4 = native_MG_BlocksEngine2_DragDrop_BE2_DragDropManager__get_Instance_576470(0);
  puVar5 = (undefined8 *)(param_1 + 0x30);
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



/* MG_BlocksEngine2.UI.BE2_UI_SaveLoadContextMenu$$Close @ 0xdca0e0
 * void MG_BlocksEngine2_UI_BE2_UI_SaveLoadContextMenu__Close (MG_BlocksEngine2_UI_BE2_UI_SaveLoadContextMenu_o* __this, const MethodInfo* method); */

/* MG_BlocksEngine2.UI.BE2_UI_SaveLoadContextMenu$$Close
   void MG_BlocksEngine2_UI_BE2_UI_SaveLoadContextMenu__Close
   (MG_BlocksEngine2_UI_BE2_UI_SaveLoadContextMenu_o* __this, const MethodInfo* method); */

void native_MG_BlocksEngine2_UI_BE2_UI_SaveLoadContextMenu__Close_dca0e0(long param_1)

{
  long lVar1;
  
  *(undefined8 *)(param_1 + 0x28) = 0;
  native_sub_4326e0((undefined8 *)(param_1 + 0x28),0);
  lVar1 = native_UnityEngine_Component__get_gameObject_8da66c(param_1,0);
  if (lVar1 != 0) {
    if (pcRam0000000001340bf8 == (code *)0x0) {
      pcRam0000000001340bf8 = (code *)native_sub_4326f0(&UNK_00e2da67);
    }
                    /* WARNING: Could not recover jumptable at 0x008de6e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*pcRam0000000001340bf8)(lVar1,0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* MG_BlocksEngine2.UI.BE2_UI_SaveLoadContextMenu$$RefreshScrollValues @ 0xdca124
 * void MG_BlocksEngine2_UI_BE2_UI_SaveLoadContextMenu__RefreshScrollValues (MG_BlocksEngine2_UI_BE2_UI_SaveLoadContextMenu_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MG_BlocksEngine2.UI.BE2_UI_SaveLoadContextMenu$$RefreshScrollValues
   void MG_BlocksEngine2_UI_BE2_UI_SaveLoadContextMenu__RefreshScrollValues
   (MG_BlocksEngine2_UI_BE2_UI_SaveLoadContextMenu_o* __this, const MethodInfo* method); */

void native_MG_BlocksEngine2_UI_BE2_UI_SaveLoadContextMenu__RefreshScrollValues_dca124
               (undefined1 param_1 [16],undefined1 param_2 [16],long param_3)

{
  uint uVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  ulong uVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long *plVar11;
  uint uVar12;
  
  if ((bRam0000000001346de5 & 1) == 0) {
    native_sub_43273c(&Method_UnityEngine_Component_GetComponent_ToggleGroup____12e2b60);
    native_sub_43273c(&System_IO_DirectoryInfo_TypeInfo_12d4440);
    native_sub_43273c(&Method_UnityEngine_GameObject_GetComponent_Toggle____12e4a78);
    native_sub_43273c(&Method_UnityEngine_Object_Instantiate_GameObject____12e5a40);
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    native_sub_43273c(&
                      Method_MG_BlocksEngine2_UI_BE2_UI_SaveLoadContextMenu___c__DisplayClass18_0__RefreshScrollValues_b__0___12e96b0
                     );
    native_sub_43273c(&
                      MG_BlocksEngine2_UI_BE2_UI_SaveLoadContextMenu___c__DisplayClass18_0_TypeInfo_12d7080
                     );
    native_sub_43273c(&Method_UnityEngine_Events_UnityAction_bool___ctor___12de388);
    native_sub_43273c(&UnityEngine_Events_UnityAction_bool__TypeInfo_12d2f28);
    native_sub_43273c(&Method_UnityEngine_Events_UnityEvent_bool__AddListener___12de428);
    native_sub_43273c(&StringLiteral__be2_12eb7e0);
    bRam0000000001346de5 = 1;
  }
  if (((*(long *)(param_3 + 0x40) != 0) &&
      (lVar3 = native_UnityEngine_Component__get_transform_8da62c(*(long *)(param_3 + 0x40),0),
      lVar3 != 0)) && (lVar3 = native_UnityEngine_Transform__get_parent_765eb0(lVar3,0), lVar3 != 0)
     ) {
    iVar2 = native_UnityEngine_Transform__get_childCount_772a64(lVar3,0);
    while( true ) {
      iVar2 = iVar2 + -1;
      if (iVar2 < 1) {
        uVar4 = *(undefined8 *)(param_3 + 0x18);
        lVar3 = native_sub_432808(_System_IO_DirectoryInfo_TypeInfo_12d4440);
        native_System_IO_DirectoryInfo___ctor_a6ee28(lVar3,uVar4,0);
        uVar5 = native_System_IO_Directory__Exists_a6e9c0(*(undefined8 *)(param_3 + 0x18),0);
        if ((uVar5 & 1) == 0) {
          native_System_IO_Directory__CreateDirectory_a6dff0(*(undefined8 *)(param_3 + 0x18),0);
        }
        if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
          native_sub_432810();
        }
        lVar3 = native_System_IO_DirectoryInfo__GetFiles_a6f2d0(lVar3,0);
        if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
          native_sub_432810();
        }
        uVar1 = *(uint *)(lVar3 + 0x18);
        if (0 < (int)uVar1) {
          uVar12 = 0;
          do {
            if (uVar1 <= uVar12) {
              uVar4 = native_sub_43283c();
                    /* WARNING: Subroutine does not return */
              native_sub_4327dc(uVar4,0);
            }
            plVar11 = (long *)(lVar3 + (long)(int)uVar12 * 8 + 0x20);
            lVar6 = *plVar11;
            if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
              native_sub_432810();
            }
            lVar6 = native_System_IO_FileSystemInfo__get_Extension_bce330(lVar6,0);
            if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
              native_sub_432810();
            }
            uVar4 = native_System_String__ToLower_b0cf38(lVar6,0);
            uVar5 = native_System_String__op_Equality_afc18c(uVar4,_StringLiteral__be2_12eb7e0,0);
            if ((uVar5 & 1) != 0) {
              lVar6 = native_sub_432808(
                                       _MG_BlocksEngine2_UI_BE2_UI_SaveLoadContextMenu___c__DisplayClass18_0_TypeInfo_12d7080
                                       );
              native_MG_BlocksEngine2_UI_BE2_UI_SaveLoadContextMenu___c__DisplayClass18_0___ctor_548eb8
                        (lVar6,0);
              if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
                native_sub_432810();
              }
              *(long *)(lVar6 + 0x18) = param_3;
              native_sub_4326e0((long *)(lVar6 + 0x18),param_3);
              if (*(uint *)(lVar3 + 0x18) <= uVar12) {
                uVar4 = native_sub_43283c();
                    /* WARNING: Subroutine does not return */
                native_sub_4327dc(uVar4,0);
              }
              plVar11 = (long *)*plVar11;
              if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                native_sub_432810();
              }
              uVar4 = (**(code **)(*plVar11 + 0x1b8))(plVar11,*(undefined8 *)(*plVar11 + 0x1c0));
              if (*(long *)(param_3 + 0x40) == 0) {
                    /* WARNING: Subroutine does not return */
                native_sub_432810();
              }
              uVar7 = native_UnityEngine_Component__get_gameObject_8da66c
                                (*(long *)(param_3 + 0x40),0);
              if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
                 (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
                native_sub_4327ec();
              }
              lVar8 = native_UnityEngine_Object__Instantiate_GameObject__4a6428
                                (uVar7,_Method_UnityEngine_Object_Instantiate_GameObject____12e5a40)
              ;
              if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
                native_sub_432810();
              }
              lVar9 = native_UnityEngine_GameObject__GetComponent_BE2_BlockSectionHeader_Custom__4a2214
                                (lVar8,_Method_UnityEngine_GameObject_GetComponent_Toggle____12e4a78
                                );
              plVar11 = (long *)(lVar6 + 0x10);
              *plVar11 = lVar9;
              native_sub_4326e0(plVar11);
              if (*plVar11 == 0) {
                    /* WARNING: Subroutine does not return */
                native_sub_432810();
              }
              uVar7 = native_UnityEngine_Component__get_transform_8da62c(*plVar11,0);
              lVar9 = native_MG_BlocksEngine2_Utils_BE2_Text__GetBE2TextInChildren_61a254(uVar7,0);
              if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
                native_sub_432810();
              }
              native_MG_BlocksEngine2_Utils_BE2_Text__set_text_610ef8(lVar9,uVar4,0);
              if (*plVar11 == 0) {
                    /* WARNING: Subroutine does not return */
                native_sub_432810();
              }
              lVar9 = native_UnityEngine_Component__get_transform_8da62c(*plVar11,0);
              if (*(long *)(param_3 + 0x40) == 0) {
                    /* WARNING: Subroutine does not return */
                native_sub_432810();
              }
              lVar10 = native_UnityEngine_Component__get_transform_8da62c
                                 (*(long *)(param_3 + 0x40),0);
              if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
                native_sub_432810();
              }
              uVar4 = native_UnityEngine_Transform__get_parent_765eb0(lVar10,0);
              if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
                native_sub_432810(uVar4,uVar4);
              }
              native_UnityEngine_Transform__SetParent_77208c(lVar9,uVar4,0);
              if (*plVar11 == 0) {
                    /* WARNING: Subroutine does not return */
                native_sub_432810();
              }
              lVar9 = native_UnityEngine_Component__get_transform_8da62c(*plVar11,0);
              native_UnityEngine_Vector3__get_one_776a20(0);
              if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
                native_sub_432810();
              }
              native_UnityEngine_Transform__set_localScale_771e30(lVar9,0);
              if (*(long *)(param_3 + 0x40) == 0) {
                    /* WARNING: Subroutine does not return */
                native_sub_432810();
              }
              lVar10 = *plVar11;
              lVar9 = native_UnityEngine_Component__get_transform_8da62c
                                (*(long *)(param_3 + 0x40),0);
              if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
                native_sub_432810();
              }
              lVar9 = native_UnityEngine_Transform__get_parent_765eb0(lVar9,0);
              if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
                native_sub_432810();
              }
              uVar4 = native_UnityEngine_Component__GetComponent_ActiveAnimation__49daec
                                (lVar9,
                                 _Method_UnityEngine_Component_GetComponent_ToggleGroup____12e2b60);
              if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
                native_sub_432810(uVar4,uVar4);
              }
              native_UnityEngine_UI_Toggle__set_group_c688c0(lVar10,uVar4,0);
              if (*plVar11 == 0) {
                    /* WARNING: Subroutine does not return */
                native_sub_432810();
              }
              lVar9 = native_UnityEngine_Component__get_transform_8da62c(*plVar11,0);
              if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
                native_sub_432810();
              }
              native_UnityEngine_Transform__SetAsLastSibling_772ae4(lVar9,0);
              native_UnityEngine_GameObject__SetActive_8de698(lVar8,1,0);
              if (*plVar11 == 0) {
                    /* WARNING: Subroutine does not return */
                native_sub_432810();
              }
              lVar8 = native_UnityEngine_Component__get_transform_8da62c(*plVar11,0);
              if (*plVar11 == 0) {
                    /* WARNING: Subroutine does not return */
                native_sub_432810();
              }
              lVar9 = native_UnityEngine_Component__get_transform_8da62c(*plVar11,0);
              if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
                native_sub_432810();
              }
              uVar4 = native_UnityEngine_Transform__get_localPosition_7717f4(lVar9,0);
              if (*plVar11 == 0) {
                    /* WARNING: Subroutine does not return */
                native_sub_432810();
              }
              lVar9 = native_UnityEngine_Component__get_transform_8da62c(*plVar11,0);
              if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
                native_sub_432810();
              }
              native_UnityEngine_Transform__get_localPosition_7717f4(lVar9,0);
              if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
                native_sub_432810();
              }
              native_UnityEngine_Transform__set_localPosition_7718a4(uVar4,param_2,0,lVar8,0);
              if (*plVar11 == 0) {
                    /* WARNING: Subroutine does not return */
                native_sub_432810();
              }
              lVar8 = native_UnityEngine_Component__get_transform_8da62c(*plVar11,0);
              native_UnityEngine_Vector3__get_zero_776668(0);
              if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
                native_sub_432810();
              }
              native_UnityEngine_Transform__set_localEulerAngles_77194c(lVar8,0);
              if (*plVar11 == 0) {
                    /* WARNING: Subroutine does not return */
                native_sub_432810();
              }
              lVar8 = *(long *)(*plVar11 + 0x110);
              uVar4 = native_sub_432808(_UnityEngine_Events_UnityAction_bool__TypeInfo_12d2f28);
              native_UnityEngine_Events_UnityAction_bool____ctor_89abf4
                        (uVar4,lVar6,
                         _Method_MG_BlocksEngine2_UI_BE2_UI_SaveLoadContextMenu___c__DisplayClass18_0__RefreshScrollValues_b__0___12e96b0
                         ,_Method_UnityEngine_Events_UnityAction_bool___ctor___12de388);
              if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
                native_sub_432810();
              }
              native_UnityEngine_Events_UnityEvent_bool___AddListener_89e8b4
                        (lVar8,uVar4,
                         _Method_UnityEngine_Events_UnityEvent_bool__AddListener___12de428);
            }
            uVar1 = *(uint *)(lVar3 + 0x18);
            uVar12 = uVar12 + 1;
          } while ((int)uVar12 < (int)uVar1);
        }
        return;
      }
      if (((*(long *)(param_3 + 0x40) == 0) ||
          (lVar3 = native_UnityEngine_Component__get_transform_8da62c(*(long *)(param_3 + 0x40),0),
          lVar3 == 0)) ||
         ((lVar3 = native_UnityEngine_Transform__get_parent_765eb0(lVar3,0), lVar3 == 0 ||
          (lVar3 = native_UnityEngine_Transform__GetChild_772ef0(lVar3,iVar2,0), lVar3 == 0))))
      break;
      uVar4 = native_UnityEngine_Component__get_gameObject_8da66c(lVar3,0);
      if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
        native_sub_4327ec(_UnityEngine_Object_TypeInfo_12d54e0);
      }
      native_UnityEngine_Object__Destroy_8ea574(uVar4,0);
    }
  }
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* MG_BlocksEngine2.UI.BE2_UI_SaveLoadContextMenu$$Save @ 0xdca89c
 * void MG_BlocksEngine2_UI_BE2_UI_SaveLoadContextMenu__Save (MG_BlocksEngine2_UI_BE2_UI_SaveLoadContextMenu_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MG_BlocksEngine2.UI.BE2_UI_SaveLoadContextMenu$$Save
   void MG_BlocksEngine2_UI_BE2_UI_SaveLoadContextMenu__Save
   (MG_BlocksEngine2_UI_BE2_UI_SaveLoadContextMenu_o* __this, const MethodInfo* method); */

void native_MG_BlocksEngine2_UI_BE2_UI_SaveLoadContextMenu__Save_dca89c(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  
  if ((bRam0000000001346de6 & 1) == 0) {
    native_sub_43273c(&MG_BlocksEngine2_Serializer_BE2_BlocksSerializer_TypeInfo_12d3998);
    bRam0000000001346de6 = 1;
  }
  uVar1 = native_MG_BlocksEngine2_UI_BE2_UI_SaveLoadContextMenu__GetFullPath_dca930(param_1);
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  if (((*(byte *)(_MG_BlocksEngine2_Serializer_BE2_BlocksSerializer_TypeInfo_12d3998 + 0x133) >> 2 &
       1) != 0) &&
     (*(int *)(_MG_BlocksEngine2_Serializer_BE2_BlocksSerializer_TypeInfo_12d3998 + 0xe0) == 0)) {
    native_sub_4327ec(_MG_BlocksEngine2_Serializer_BE2_BlocksSerializer_TypeInfo_12d3998);
  }
  native_MG_BlocksEngine2_Serializer_BE2_BlocksSerializer__SaveCode_572798(uVar1,uVar3,0);
  native_MG_BlocksEngine2_UI_BE2_UI_SaveLoadContextMenu__RefreshScrollValues_dca124(param_1);
  if (*(long *)(param_1 + 0x58) != 0) {
    native_UnityEngine_GameObject__SetActive_8de698(*(long *)(param_1 + 0x58),0,0);
    if (*(long *)(param_1 + 0x60) != 0) {
      native_UnityEngine_GameObject__SetActive_8de698(*(long *)(param_1 + 0x60),0,0);
      lVar2 = *(long *)(param_1 + 0x50);
      if (lVar2 != 0) {
        if (pcRam0000000001340bf8 == (code *)0x0) {
          pcRam0000000001340bf8 = (code *)native_sub_4326f0(&UNK_00e2da67);
        }
                    /* WARNING: Could not recover jumptable at 0x008de6e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*pcRam0000000001340bf8)(lVar2,1);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* MG_BlocksEngine2.UI.BE2_UI_SaveLoadContextMenu$$GetFileName @ 0xdca9e8
 * System_String_o* MG_BlocksEngine2_UI_BE2_UI_SaveLoadContextMenu__GetFileName (MG_BlocksEngine2_UI_BE2_UI_SaveLoadContextMenu_o* __this, const MethodInfo* method); */

/* WARNING: Removing unreachable block (ram,0x00d5e590) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MG_BlocksEngine2.UI.BE2_UI_SaveLoadContextMenu$$GetFileName
   System_String_o* MG_BlocksEngine2_UI_BE2_UI_SaveLoadContextMenu__GetFileName
   (MG_BlocksEngine2_UI_BE2_UI_SaveLoadContextMenu_o* __this, const MethodInfo* method); */

ulong native_MG_BlocksEngine2_UI_BE2_UI_SaveLoadContextMenu__GetFileName_dca9e8(long param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  uint uVar5;
  long lVar6;
  long *plVar7;
  undefined *puVar8;
  long *plVar9;
  undefined8 uVar10;
  long lVar11;
  undefined8 uVar12;
  ulong uVar13;
  undefined8 uVar14;
  int iVar15;
  ulong uVar16;
  int iVar17;
  
  if ((bRam0000000001346de7 & 1) == 0) {
    native_sub_43273c(&System_Text_RegularExpressions_Regex_TypeInfo_12d5938);
    native_sub_43273c(&StringLiteral__be2_12eb7e0);
    native_sub_43273c(&StringLiteral__12eaac0);
    native_sub_43273c(&StringLiteral____w_____12f3330);
    bRam0000000001346de7 = 1;
  }
  if ((*(long *)(param_1 + 0x48) == 0) ||
     (uVar16 = *(ulong *)(*(long *)(param_1 + 0x48) + 0x218), uVar16 == 0)) {
LAB_00dcaaf4:
                    /* WARNING: Subroutine does not return */
    native_sub_432810();
  }
  if (3 < *(int *)(uVar16 + 0x10)) {
    lVar11 = native_System_String__Substring_b09fac(uVar16,*(int *)(uVar16 + 0x10) + -4,4,0);
    if (lVar11 == 0) goto LAB_00dcaaf4;
    uVar12 = native_System_String__ToLower_b0cf38(lVar11,0);
    uVar13 = native_System_String__op_Equality_afc18c(uVar12,_StringLiteral__be2_12eb7e0,0);
    if ((uVar13 & 1) != 0) {
      uVar16 = native_System_String__Substring_b09fac(uVar16,0,*(int *)(uVar16 + 0x10) + -4,0);
    }
  }
  if (((*(byte *)(_System_Text_RegularExpressions_Regex_TypeInfo_12d5938 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_System_Text_RegularExpressions_Regex_TypeInfo_12d5938 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar12 = _StringLiteral____w_____12f3330;
  lVar11 = _StringLiteral__12eaac0;
  if ((bRam000000000133f6f5 & 1) == 0) {
    native_sub_43273c(&System_Text_RegularExpressions_Regex_TypeInfo_12d5938,
                      _StringLiteral____w_____12f3330,_StringLiteral__12eaac0,0);
    bRam000000000133f6f5 = 1;
  }
  if (((*(byte *)(_System_Text_RegularExpressions_Regex_TypeInfo_12d5938 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_System_Text_RegularExpressions_Regex_TypeInfo_12d5938 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar14 = *(undefined8 *)
            (*(long *)(_System_Text_RegularExpressions_Regex_TypeInfo_12d5938 + 0xb8) + 0x18);
  if ((bRam000000000133f6f6 & 1) == 0) {
    native_sub_43273c(&System_Text_RegularExpressions_Regex_TypeInfo_12d5938,uVar12,lVar11,0);
    bRam000000000133f6f6 = 1;
  }
  lVar6 = native_sub_432808(_System_Text_RegularExpressions_Regex_TypeInfo_12d5938);
  native_System_Text_RegularExpressions_Regex___ctor_7547e8(lVar6,uVar12,0,uVar14,1);
  if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
    native_sub_432810();
  }
  if (uVar16 == 0) {
    native_sub_432740(&System_ArgumentNullException_TypeInfo_12d3808);
    uVar12 = native_sub_432808();
    uVar14 = native_sub_432740(&StringLiteral_input_12f4df8);
    native_System_ArgumentNullException___ctor_951bd8(uVar12,uVar14,0);
    uVar14 = native_sub_432740(&Method_System_Text_RegularExpressions_Regex_Replace___12e60a0);
                    /* WARNING: Subroutine does not return */
    native_sub_4327dc(uVar12,uVar14);
  }
  if ((*(byte *)(lVar6 + 0x20) >> 6 & 1) == 0) {
    iVar15 = 0;
  }
  else {
    iVar15 = *(int *)(uVar16 + 0x10);
  }
  if ((bRam000000000133f6f7 & 1) == 0) {
    native_sub_43273c(&System_Text_RegularExpressions_RegexParser_TypeInfo_12d5988);
    native_sub_43273c(&System_Text_RegularExpressions_RegexReplacement_TypeInfo_12d5998);
    bRam000000000133f6f7 = 1;
  }
  if (uVar16 == 0) {
    native_sub_432740(&System_ArgumentNullException_TypeInfo_12d3808);
    uVar12 = native_sub_432808();
    puVar8 = &StringLiteral_input_12f4df8;
code_r0x00756448:
    uVar14 = native_sub_432740(puVar8);
    native_System_ArgumentNullException___ctor_951bd8(uVar12,uVar14,0);
    uVar14 = native_sub_432740(&Method_System_Text_RegularExpressions_Regex_Replace___12e60a8);
                    /* WARNING: Subroutine does not return */
    native_sub_4327dc(uVar12,uVar14);
  }
  if (lVar11 == 0) {
    native_sub_432740(&System_ArgumentNullException_TypeInfo_12d3808);
    uVar12 = native_sub_432808();
    puVar8 = &StringLiteral_replacement_12f5dd0;
    goto code_r0x00756448;
  }
  if (*(long *)(lVar6 + 0x58) == 0) goto code_r0x00756408;
  plVar7 = (long *)native_System_Text_RegularExpressions_SharedReference__Get_586704
                             (*(long *)(lVar6 + 0x58),0);
  if (plVar7 == (long *)0x0) {
code_r0x0075636c:
    uVar3 = *(undefined4 *)(lVar6 + 0x48);
    uVar12 = *(undefined8 *)(lVar6 + 0x30);
    uVar14 = *(undefined8 *)(lVar6 + 0x38);
    uVar4 = *(undefined4 *)(lVar6 + 0x20);
    if (((*(byte *)(_System_Text_RegularExpressions_RegexParser_TypeInfo_12d5988 + 0x133) >> 2 & 1)
         != 0) &&
       (*(int *)(_System_Text_RegularExpressions_RegexParser_TypeInfo_12d5988 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    plVar7 = (long *)native_System_Text_RegularExpressions_RegexParser__ParseReplacement_d58b20
                               (lVar11,uVar12,uVar3,uVar14,uVar4,0);
    if (*(long *)(lVar6 + 0x58) == 0) goto code_r0x00756408;
    native_System_Text_RegularExpressions_SharedReference__Cache_58675c
              (*(long *)(lVar6 + 0x58),plVar7,0);
  }
  else {
    if (*plVar7 != _System_Text_RegularExpressions_RegexReplacement_TypeInfo_12d5998) {
      lVar11 = native_sub_432b04(plVar7);
      return (ulong)(*(byte *)(lVar11 + 0x21) >> 1 & 1);
    }
    if (plVar7[2] == 0) goto code_r0x00756408;
    uVar13 = native_System_String__Equals_af8bfc(plVar7[2],lVar11,0);
    if ((uVar13 & 1) == 0) goto code_r0x0075636c;
  }
  if (plVar7 == (long *)0x0) {
code_r0x00756408:
                    /* WARNING: Subroutine does not return */
    native_sub_432810();
  }
  iVar17 = -1;
  if ((bRam0000000001342bc8 & 1) == 0) {
    native_sub_43273c(&Method_System_Collections_Generic_List_string__Add___12dcea0);
    native_sub_43273c(&Method_System_Collections_Generic_List_string___ctor___12dce88);
    native_sub_43273c(&Method_System_Collections_Generic_List_string__get_Count___12dcef8);
    native_sub_43273c(&Method_System_Collections_Generic_List_string__get_Item___12dcf00);
    native_sub_43273c(&System_Collections_Generic_List_string__TypeInfo_12d2b60);
    native_sub_43273c(&System_Text_StringBuilder_TypeInfo_12d5f30);
    bRam0000000001342bc8 = 1;
  }
  if (-1 < iVar15) {
    if (uVar16 != 0) {
      if (*(int *)(uVar16 + 0x10) < iVar15) goto code_r0x00d5e558;
      if ((lVar6 != 0) &&
         (lVar11 = native_System_Text_RegularExpressions_Regex__Match_7560b8(lVar6,uVar16,iVar15,0),
         lVar11 != 0)) {
        uVar13 = native_System_Text_RegularExpressions_Group__get_Success_932bc0(lVar11,0);
        if ((uVar13 & 1) == 0) {
          return uVar16;
        }
        uVar13 = native_System_Text_RegularExpressions_Regex__get_RightToLeft_755ba0(lVar6,0);
        if ((uVar13 & 1) == 0) {
          plVar9 = (long *)native_sub_432808(_System_Text_StringBuilder_TypeInfo_12d5f30);
          native_System_Text_StringBuilder___ctor_a4881c(plVar9,0);
          iVar15 = 0;
          do {
            iVar1 = *(int *)(lVar11 + 0x18) - iVar15;
            if (iVar1 != 0) {
              if (plVar9 == (long *)0x0) goto code_r0x00d5e554;
              native_System_Text_StringBuilder__Append_a49eb4(plVar9,uVar16,iVar15,iVar1,0);
              iVar15 = *(int *)(lVar11 + 0x18);
            }
            iVar15 = *(int *)(lVar11 + 0x1c) + iVar15;
            native_System_Text_RegularExpressions_RegexReplacement__ReplacementImpl_d5ded4
                      (plVar7,plVar9,lVar11);
            iVar17 = iVar17 + -1;
            if (iVar17 == 0) break;
            lVar11 = native_System_Text_RegularExpressions_Match__NextMatch_74477c(lVar11,0);
            if (lVar11 == 0) goto code_r0x00d5e554;
            uVar13 = native_System_Text_RegularExpressions_Group__get_Success_932bc0(lVar11,0);
          } while ((uVar13 & 1) != 0);
          iVar17 = *(int *)(uVar16 + 0x10) - iVar15;
          if (iVar17 != 0 && iVar15 <= *(int *)(uVar16 + 0x10)) {
            if (plVar9 == (long *)0x0) goto code_r0x00d5e554;
            native_System_Text_StringBuilder__Append_a49eb4(plVar9,uVar16,iVar15,iVar17,0);
          }
        }
        else {
          lVar6 = native_sub_432808(_System_Collections_Generic_List_string__TypeInfo_12d2b60);
          native_System_Collections_Generic_List_XmlEventCache_XmlEvent______ctor_d3ff44
                    (lVar6,_Method_System_Collections_Generic_List_string___ctor___12dce88);
          iVar15 = *(int *)(uVar16 + 0x10);
          do {
            iVar2 = *(int *)(lVar11 + 0x18);
            iVar1 = *(int *)(lVar11 + 0x1c) + iVar2;
            if (iVar1 != iVar15) {
              uVar12 = native_System_String__Substring_b09fac
                                 (uVar16,iVar1,(iVar15 - iVar2) - *(int *)(lVar11 + 0x1c),0);
              if (lVar6 == 0) goto code_r0x00d5e554;
              native_System_Collections_Generic_List_int_____Add_d40c00
                        (lVar6,uVar12,_Method_System_Collections_Generic_List_string__Add___12dcea0)
              ;
              iVar2 = *(int *)(lVar11 + 0x18);
            }
            iVar15 = iVar2;
            native_System_Text_RegularExpressions_RegexReplacement__ReplacementImplRTL_d5e074
                      (plVar7,lVar6,lVar11);
            iVar17 = iVar17 + -1;
            if (iVar17 == 0) break;
            lVar11 = native_System_Text_RegularExpressions_Match__NextMatch_74477c(lVar11,0);
            if (lVar11 == 0) goto code_r0x00d5e554;
            uVar13 = native_System_Text_RegularExpressions_Group__get_Success_932bc0(lVar11,0);
          } while ((uVar13 & 1) != 0);
          plVar9 = (long *)native_sub_432808(_System_Text_StringBuilder_TypeInfo_12d5f30);
          native_System_Text_StringBuilder___ctor_a4881c(plVar9,0);
          if (0 < iVar15) {
            if (plVar9 == (long *)0x0) goto code_r0x00d5e554;
            native_System_Text_StringBuilder__Append_a49eb4(plVar9,uVar16,0,iVar15,0);
          }
          if (lVar6 == 0) goto code_r0x00d5e554;
          uVar5 = *(uint *)(lVar6 + 0x18);
          if (-1 < (int)(uVar5 - 1)) {
            uVar16 = (ulong)(int)(uVar5 - 1);
            iVar15 = uVar5 - 2;
            while( true ) {
              if (uVar5 <= uVar16) {
                native_System_ThrowHelper__ThrowArgumentOutOfRangeException_9fe0f4(0);
              }
              if (plVar9 == (long *)0x0) goto code_r0x00d5e554;
              native_System_Text_StringBuilder__Append_a49d68
                        (plVar9,*(undefined8 *)(*(long *)(lVar6 + 0x10) + uVar16 * 8 + 0x20),0);
              if (iVar15 < 0) break;
              uVar5 = *(uint *)(lVar6 + 0x18);
              uVar16 = uVar16 - 1;
              iVar15 = iVar15 + -1;
            }
          }
        }
        if (plVar9 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00d5e550. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          uVar16 = (**(code **)(*plVar9 + 0x168))(plVar9,*(undefined8 *)(*plVar9 + 0x170));
          return uVar16;
        }
      }
    }
code_r0x00d5e554:
                    /* WARNING: Subroutine does not return */
    native_sub_432810();
  }
code_r0x00d5e558:
  uVar12 = native_sub_432740(&
                             StringLiteral_Start_index_cannot_be_less_than_0_or_greater_than_input_length__12f1040
                            );
  uVar12 = native_SR__GetString_582454(uVar12,0);
  native_sub_432740(&System_ArgumentOutOfRangeException_TypeInfo_12d3810);
  uVar14 = native_sub_432808();
  uVar10 = native_sub_432740(&StringLiteral_startat_12f6250);
  native_System_ArgumentOutOfRangeException___ctor_951f98(uVar14,uVar10,uVar12,0);
  uVar12 = native_sub_432740(&
                             Method_System_Text_RegularExpressions_RegexReplacement_Replace___12e6150
                            );
                    /* WARNING: Subroutine does not return */
  native_sub_4327dc(uVar14,uVar12);
}



/* MG_BlocksEngine2.UI.BE2_UI_SaveLoadContextMenu$$GetFullPath @ 0xdca930
 * System_String_o* MG_BlocksEngine2_UI_BE2_UI_SaveLoadContextMenu__GetFullPath (MG_BlocksEngine2_UI_BE2_UI_SaveLoadContextMenu_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MG_BlocksEngine2.UI.BE2_UI_SaveLoadContextMenu$$GetFullPath
   System_String_o* MG_BlocksEngine2_UI_BE2_UI_SaveLoadContextMenu__GetFullPath
   (MG_BlocksEngine2_UI_BE2_UI_SaveLoadContextMenu_o* __this, const MethodInfo* method); */

long native_MG_BlocksEngine2_UI_BE2_UI_SaveLoadContextMenu__GetFullPath_dca930(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  if ((bRam0000000001346de8 & 1) == 0) {
    native_sub_43273c(&StringLiteral__BE2_12eb7d0);
    bRam0000000001346de8 = 1;
  }
  lVar3 = *(long *)(param_1 + 0x18);
  lVar1 = native_MG_BlocksEngine2_UI_BE2_UI_SaveLoadContextMenu__GetFileName_dca9e8(param_1);
  lVar2 = _StringLiteral__BE2_12eb7d0;
  if ((bRam0000000001342140 & 1) == 0) {
    native_sub_43273c(&string_TypeInfo_12d5f28,lVar1,_StringLiteral__BE2_12eb7d0,0);
    bRam0000000001342140 = 1;
  }
  if ((lVar3 != 0) ||
     (lVar4 = **(long **)(_string_TypeInfo_12d5f28 + 0xb8), lVar3 = lVar4, lVar1 != 0 || lVar2 != 0)
     ) {
    if (lVar1 == 0) {
      lVar1 = **(long **)(_string_TypeInfo_12d5f28 + 0xb8);
    }
    if (lVar2 == 0) {
      lVar2 = **(long **)(_string_TypeInfo_12d5f28 + 0xb8);
    }
    if (((lVar3 == 0) || (lVar1 == 0)) || (lVar2 == 0)) {
                    /* WARNING: Subroutine does not return */
      native_sub_432810();
    }
    lVar4 = native_sub_3bca18(*(int *)(lVar1 + 0x10) + *(int *)(lVar3 + 0x10) +
                              *(int *)(lVar2 + 0x10));
    native_System_String__FillStringChecked_b0a62c(lVar4,0,lVar3);
    native_System_String__FillStringChecked_b0a62c(lVar4,*(undefined4 *)(lVar3 + 0x10),lVar1);
    native_System_String__FillStringChecked_b0a62c
              (lVar4,*(int *)(lVar1 + 0x10) + *(int *)(lVar3 + 0x10),lVar2);
  }
  return lVar4;
}



/* MG_BlocksEngine2.UI.BE2_UI_SaveLoadContextMenu$$ConfirmSave @ 0xdcaaf8
 * void MG_BlocksEngine2_UI_BE2_UI_SaveLoadContextMenu__ConfirmSave (MG_BlocksEngine2_UI_BE2_UI_SaveLoadContextMenu_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MG_BlocksEngine2.UI.BE2_UI_SaveLoadContextMenu$$ConfirmSave
   void MG_BlocksEngine2_UI_BE2_UI_SaveLoadContextMenu__ConfirmSave
   (MG_BlocksEngine2_UI_BE2_UI_SaveLoadContextMenu_o* __this, const MethodInfo* method); */

void native_MG_BlocksEngine2_UI_BE2_UI_SaveLoadContextMenu__ConfirmSave_dcaaf8(long param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  
  if ((bRam0000000001346de9 & 1) == 0) {
    native_sub_43273c(&StringLiteral__12eaac0);
    bRam0000000001346de9 = 1;
  }
  if (*(long *)(param_1 + 0x48) != 0) {
    uVar1 = native_System_String__op_Inequality_afbbb4
                      (*(undefined8 *)(*(long *)(param_1 + 0x48) + 0x218),_StringLiteral__12eaac0,0)
    ;
    if ((uVar1 & 1) == 0) {
      return;
    }
    uVar2 = native_MG_BlocksEngine2_UI_BE2_UI_SaveLoadContextMenu__GetFullPath_dca930(param_1);
    uVar1 = native_System_IO_File__Exists_bf1460(uVar2,0);
    if ((uVar1 & 1) == 0) {
      if ((bRam0000000001346de6 & 1) == 0) {
        native_sub_43273c(&MG_BlocksEngine2_Serializer_BE2_BlocksSerializer_TypeInfo_12d3998);
        bRam0000000001346de6 = 1;
      }
      uVar2 = native_MG_BlocksEngine2_UI_BE2_UI_SaveLoadContextMenu__GetFullPath_dca930(param_1);
      uVar4 = *(undefined8 *)(param_1 + 0x28);
      if (((*(byte *)(_MG_BlocksEngine2_Serializer_BE2_BlocksSerializer_TypeInfo_12d3998 + 0x133) >>
            2 & 1) != 0) &&
         (*(int *)(_MG_BlocksEngine2_Serializer_BE2_BlocksSerializer_TypeInfo_12d3998 + 0xe0) == 0))
      {
        native_sub_4327ec(_MG_BlocksEngine2_Serializer_BE2_BlocksSerializer_TypeInfo_12d3998);
      }
      native_MG_BlocksEngine2_Serializer_BE2_BlocksSerializer__SaveCode_572798(uVar2,uVar4,0);
      native_MG_BlocksEngine2_UI_BE2_UI_SaveLoadContextMenu__RefreshScrollValues_dca124(param_1);
      if (*(long *)(param_1 + 0x58) != 0) {
        native_UnityEngine_GameObject__SetActive_8de698(*(long *)(param_1 + 0x58),0,0);
        if (*(long *)(param_1 + 0x60) != 0) {
          native_UnityEngine_GameObject__SetActive_8de698(*(long *)(param_1 + 0x60),0,0);
          lVar3 = *(long *)(param_1 + 0x50);
          if (lVar3 != 0) goto code_r0x008de698;
        }
      }
                    /* WARNING: Subroutine does not return */
      native_sub_432810();
    }
    if (*(long *)(param_1 + 0x50) != 0) {
      native_UnityEngine_GameObject__SetActive_8de698(*(long *)(param_1 + 0x50),0,0);
      lVar3 = *(long *)(param_1 + 0x60);
      if (lVar3 != 0) {
code_r0x008de698:
        if (pcRam0000000001340bf8 == (code *)0x0) {
          pcRam0000000001340bf8 = (code *)native_sub_4326f0(&UNK_00e2da67);
        }
                    /* WARNING: Could not recover jumptable at 0x008de6e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*pcRam0000000001340bf8)(lVar3,1);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* MG_BlocksEngine2.UI.BE2_UI_SaveLoadContextMenu$$Load @ 0xdcabb0
 * void MG_BlocksEngine2_UI_BE2_UI_SaveLoadContextMenu__Load (MG_BlocksEngine2_UI_BE2_UI_SaveLoadContextMenu_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MG_BlocksEngine2.UI.BE2_UI_SaveLoadContextMenu$$Load
   void MG_BlocksEngine2_UI_BE2_UI_SaveLoadContextMenu__Load
   (MG_BlocksEngine2_UI_BE2_UI_SaveLoadContextMenu_o* __this, const MethodInfo* method); */

void native_MG_BlocksEngine2_UI_BE2_UI_SaveLoadContextMenu__Load_dcabb0(long param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  int *piVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  long *plVar9;
  
  if ((bRam0000000001346dea & 1) == 0) {
    native_sub_43273c(&MG_BlocksEngine2_Serializer_BE2_BlocksSerializer_TypeInfo_12d3998);
    bRam0000000001346dea = 1;
  }
  uVar2 = native_MG_BlocksEngine2_UI_BE2_UI_SaveLoadContextMenu__GetFullPath_dca930(param_1);
  uVar8 = *(undefined8 *)(param_1 + 0x28);
  if (((*(byte *)(_MG_BlocksEngine2_Serializer_BE2_BlocksSerializer_TypeInfo_12d3998 + 0x133) >> 2 &
       1) != 0) &&
     (*(int *)(_MG_BlocksEngine2_Serializer_BE2_BlocksSerializer_TypeInfo_12d3998 + 0xe0) == 0)) {
    native_sub_4327ec(_MG_BlocksEngine2_Serializer_BE2_BlocksSerializer_TypeInfo_12d3998);
  }
  uVar3 = native_MG_BlocksEngine2_Serializer_BE2_BlocksSerializer__LoadCode_572d00(uVar2,uVar8,0);
  if ((uVar3 & 1) == 0) {
    return;
  }
  lVar4 = *(long *)(param_1 + 0x20);
  if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
    native_sub_432810();
  }
  if ((bRam0000000001346dcc & 1) == 0) {
    native_sub_43273c(&MG_BlocksEngine2_UI_I_BE2_UI_ContextMenu_TypeInfo_12d4e58);
    bRam0000000001346dcc = 1;
  }
  if (*(char *)(lVar4 + 0x30) == '\0') {
    return;
  }
  puVar7 = (undefined8 *)(lVar4 + 0x20);
  plVar9 = (long *)*puVar7;
  if (plVar9 != (long *)0x0) {
    lVar5 = *plVar9;
    if ((ulong)*(ushort *)(lVar5 + 0x12a) != 0) {
      uVar3 = 0;
      piVar6 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == _MG_BlocksEngine2_UI_I_BE2_UI_ContextMenu_TypeInfo_12d4e58) {
          puVar1 = (undefined8 *)(lVar5 + (long)(*piVar6 + 2) * 0x10 + 0x138);
          goto LAB_00dc6f58;
        }
        uVar3 = uVar3 + 1;
        piVar6 = piVar6 + 4;
      } while (uVar3 < *(ushort *)(lVar5 + 0x12a));
    }
    puVar1 = (undefined8 *)
             native_sub_3c9b34(plVar9,_MG_BlocksEngine2_UI_I_BE2_UI_ContextMenu_TypeInfo_12d4e58,2);
LAB_00dc6f58:
    (*(code *)*puVar1)(plVar9,puVar1[1]);
    *puVar7 = 0;
    native_sub_4326e0(puVar7,0);
  }
  *(undefined1 *)(lVar4 + 0x30) = 0;
  if (((*(long *)(lVar4 + 0x28) != 0) &&
      (lVar4 = native_UnityEngine_Component__get_transform_8da62c(*(long *)(lVar4 + 0x28),0),
      lVar4 != 0)) &&
     (lVar4 = native_UnityEngine_Component__get_gameObject_8da66c(lVar4,0), lVar4 != 0)) {
    if (pcRam0000000001340bf8 == (code *)0x0) {
      pcRam0000000001340bf8 = (code *)native_sub_4326f0(&UNK_00e2da67);
    }
                    /* WARNING: Could not recover jumptable at 0x008de6e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*pcRam0000000001340bf8)(lVar4,0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* MG_BlocksEngine2.UI.BE2_UI_SaveLoadContextMenu$$Delete @ 0xdcac58
 * void MG_BlocksEngine2_UI_BE2_UI_SaveLoadContextMenu__Delete (MG_BlocksEngine2_UI_BE2_UI_SaveLoadContextMenu_o* __this, const MethodInfo* method); */

/* MG_BlocksEngine2.UI.BE2_UI_SaveLoadContextMenu$$Delete
   void MG_BlocksEngine2_UI_BE2_UI_SaveLoadContextMenu__Delete
   (MG_BlocksEngine2_UI_BE2_UI_SaveLoadContextMenu_o* __this, const MethodInfo* method); */

void native_MG_BlocksEngine2_UI_BE2_UI_SaveLoadContextMenu__Delete_dcac58(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  uVar2 = native_MG_BlocksEngine2_UI_BE2_UI_SaveLoadContextMenu__GetFullPath_dca930();
  native_System_IO_File__Delete_bf6f6c(uVar2,0);
  native_MG_BlocksEngine2_UI_BE2_UI_SaveLoadContextMenu__RefreshScrollValues_dca124(param_1);
  if (*(long *)(param_1 + 0x58) != 0) {
    native_UnityEngine_GameObject__SetActive_8de698(*(long *)(param_1 + 0x58),0,0);
    if (*(long *)(param_1 + 0x60) != 0) {
      native_UnityEngine_GameObject__SetActive_8de698(*(long *)(param_1 + 0x60),0,0);
      lVar1 = *(long *)(param_1 + 0x50);
      if (lVar1 != 0) {
        if (pcRam0000000001340bf8 == (code *)0x0) {
          pcRam0000000001340bf8 = (code *)native_sub_4326f0(&UNK_00e2da67);
        }
                    /* WARNING: Could not recover jumptable at 0x008de6e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*pcRam0000000001340bf8)(lVar1,1);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* MG_BlocksEngine2.UI.BE2_UI_SaveLoadContextMenu$$ConfirmDelete @ 0xdcac8c
 * void MG_BlocksEngine2_UI_BE2_UI_SaveLoadContextMenu__ConfirmDelete (MG_BlocksEngine2_UI_BE2_UI_SaveLoadContextMenu_o* __this, const MethodInfo* method); */

/* MG_BlocksEngine2.UI.BE2_UI_SaveLoadContextMenu$$ConfirmDelete
   void MG_BlocksEngine2_UI_BE2_UI_SaveLoadContextMenu__ConfirmDelete
   (MG_BlocksEngine2_UI_BE2_UI_SaveLoadContextMenu_o* __this, const MethodInfo* method); */

void native_MG_BlocksEngine2_UI_BE2_UI_SaveLoadContextMenu__ConfirmDelete_dcac8c(long param_1)

{
  undefined8 uVar1;
  ulong uVar2;
  long lVar3;
  
  uVar1 = native_MG_BlocksEngine2_UI_BE2_UI_SaveLoadContextMenu__GetFullPath_dca930();
  uVar2 = native_System_IO_File__Exists_bf1460(uVar1,0);
  if ((uVar2 & 1) == 0) {
    return;
  }
  if (*(long *)(param_1 + 0x50) != 0) {
    native_UnityEngine_GameObject__SetActive_8de698(*(long *)(param_1 + 0x50),0,0);
    lVar3 = *(long *)(param_1 + 0x58);
    if (lVar3 != 0) {
      if (pcRam0000000001340bf8 == (code *)0x0) {
        pcRam0000000001340bf8 = (code *)native_sub_4326f0(&UNK_00e2da67);
      }
                    /* WARNING: Could not recover jumptable at 0x008de6e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*pcRam0000000001340bf8)(lVar3,1);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* MG_BlocksEngine2.UI.BE2_UI_SaveLoadContextMenu$$Cancel @ 0xdcacec
 * void MG_BlocksEngine2_UI_BE2_UI_SaveLoadContextMenu__Cancel (MG_BlocksEngine2_UI_BE2_UI_SaveLoadContextMenu_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MG_BlocksEngine2.UI.BE2_UI_SaveLoadContextMenu$$Cancel
   void MG_BlocksEngine2_UI_BE2_UI_SaveLoadContextMenu__Cancel
   (MG_BlocksEngine2_UI_BE2_UI_SaveLoadContextMenu_o* __this, const MethodInfo* method); */

void native_MG_BlocksEngine2_UI_BE2_UI_SaveLoadContextMenu__Cancel_dcacec(long param_1)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  int *piVar5;
  undefined8 *puVar6;
  long *plVar7;
  
  lVar2 = *(long *)(param_1 + 0x20);
  if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    native_sub_432810();
  }
  if ((bRam0000000001346dcc & 1) == 0) {
    native_sub_43273c(&MG_BlocksEngine2_UI_I_BE2_UI_ContextMenu_TypeInfo_12d4e58);
    bRam0000000001346dcc = 1;
  }
  if (*(char *)(lVar2 + 0x30) == '\0') {
    return;
  }
  puVar6 = (undefined8 *)(lVar2 + 0x20);
  plVar7 = (long *)*puVar6;
  if (plVar7 != (long *)0x0) {
    lVar3 = *plVar7;
    if ((ulong)*(ushort *)(lVar3 + 0x12a) != 0) {
      uVar4 = 0;
      piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
        if (*(long *)(piVar5 + -2) == _MG_BlocksEngine2_UI_I_BE2_UI_ContextMenu_TypeInfo_12d4e58) {
          puVar1 = (undefined8 *)(lVar3 + (long)(*piVar5 + 2) * 0x10 + 0x138);
          goto LAB_00dc6f58;
        }
        uVar4 = uVar4 + 1;
        piVar5 = piVar5 + 4;
      } while (uVar4 < *(ushort *)(lVar3 + 0x12a));
    }
    puVar1 = (undefined8 *)
             native_sub_3c9b34(plVar7,_MG_BlocksEngine2_UI_I_BE2_UI_ContextMenu_TypeInfo_12d4e58,2);
LAB_00dc6f58:
    (*(code *)*puVar1)(plVar7,puVar1[1]);
    *puVar6 = 0;
    native_sub_4326e0(puVar6,0);
  }
  *(undefined1 *)(lVar2 + 0x30) = 0;
  if (((*(long *)(lVar2 + 0x28) != 0) &&
      (lVar2 = native_UnityEngine_Component__get_transform_8da62c(*(long *)(lVar2 + 0x28),0),
      lVar2 != 0)) &&
     (lVar2 = native_UnityEngine_Component__get_gameObject_8da66c(lVar2,0), lVar2 != 0)) {
    if (pcRam0000000001340bf8 == (code *)0x0) {
      pcRam0000000001340bf8 = (code *)native_sub_4326f0(&UNK_00e2da67);
    }
                    /* WARNING: Could not recover jumptable at 0x008de6e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*pcRam0000000001340bf8)(lVar2,0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* MG_BlocksEngine2.UI.BE2_UI_SaveLoadContextMenu$$CancelConfirm @ 0xdca990
 * void MG_BlocksEngine2_UI_BE2_UI_SaveLoadContextMenu__CancelConfirm (MG_BlocksEngine2_UI_BE2_UI_SaveLoadContextMenu_o* __this, const MethodInfo* method); */

/* MG_BlocksEngine2.UI.BE2_UI_SaveLoadContextMenu$$CancelConfirm
   void MG_BlocksEngine2_UI_BE2_UI_SaveLoadContextMenu__CancelConfirm
   (MG_BlocksEngine2_UI_BE2_UI_SaveLoadContextMenu_o* __this, const MethodInfo* method); */

void native_MG_BlocksEngine2_UI_BE2_UI_SaveLoadContextMenu__CancelConfirm_dca990(long param_1)

{
  long lVar1;
  
  if (*(long *)(param_1 + 0x58) != 0) {
    native_UnityEngine_GameObject__SetActive_8de698(*(long *)(param_1 + 0x58),0,0);
    if (*(long *)(param_1 + 0x60) != 0) {
      native_UnityEngine_GameObject__SetActive_8de698(*(long *)(param_1 + 0x60),0,0);
      lVar1 = *(long *)(param_1 + 0x50);
      if (lVar1 != 0) {
        if (pcRam0000000001340bf8 == (code *)0x0) {
          pcRam0000000001340bf8 = (code *)native_sub_4326f0(&UNK_00e2da67);
        }
                    /* WARNING: Could not recover jumptable at 0x008de6e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*pcRam0000000001340bf8)(lVar1,1);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* MG_BlocksEngine2.UI.BE2_UI_SaveLoadContextMenu$$.ctor @ 0xdcad04
 * void MG_BlocksEngine2_UI_BE2_UI_SaveLoadContextMenu___ctor (MG_BlocksEngine2_UI_BE2_UI_SaveLoadContextMenu_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MG_BlocksEngine2.UI.BE2_UI_SaveLoadContextMenu$$.ctor
   void MG_BlocksEngine2_UI_BE2_UI_SaveLoadContextMenu___ctor
   (MG_BlocksEngine2_UI_BE2_UI_SaveLoadContextMenu_o* __this, const MethodInfo* method); */

undefined1  [16] native_MG_BlocksEngine2_UI_BE2_UI_SaveLoadContextMenu___ctor_dcad04(ulong param_1)

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


