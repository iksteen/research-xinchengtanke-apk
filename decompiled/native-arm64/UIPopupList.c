/* ARM64 IL2CPP native pseudocode from Ghidra.
 * Recovered implementation, not original C# source.
 * Function boundaries follow the IL2CPP method address table. */


/* UIPopupList$$get_font @ 0xc2612c
 * INGUIFont_o* UIPopupList__get_font (UIPopupList_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIPopupList$$get_font
   INGUIFont_o* UIPopupList__get_font (UIPopupList_o* __this, const MethodInfo* method); */

long * native_UIPopupList__get_font_c2612c(long param_1)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  long *plVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 uStack_38;
  long *plStack_28;
  
  if ((bRam00000000013426d1 & 1) == 0) {
    native_sub_43273c(&Method_UnityEngine_GameObject_GetComponent_UIFont____12e4aa8);
    native_sub_43273c(&UnityEngine_GameObject_TypeInfo_12d47d8);
    native_sub_43273c(&INGUIFont_TypeInfo_12d4c70);
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    bRam00000000013426d1 = 1;
  }
  uVar5 = *(undefined8 *)(param_1 + 0x20);
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar3 = native_UnityEngine_Object__op_Inequality_8d76fc(uVar5,0,0);
  lVar6 = _Method_UnityEngine_GameObject_GetComponent_UIFont____12e4aa8;
  lVar1 = _INGUIFont_TypeInfo_12d4c70;
  if ((uVar3 & 1) == 0) {
    return (long *)0x0;
  }
  plVar4 = *(long **)(param_1 + 0x20);
  if ((plVar4 != (long *)0x0) && (*plVar4 == _UnityEngine_GameObject_TypeInfo_12d47d8)) {
    if ((bRam000000000133e706 & 1) == 0) {
      native_sub_43273c(&System_Type_TypeInfo_12d6340);
      bRam000000000133e706 = 1;
    }
    uStack_38 = 0;
    uVar5 = **(undefined8 **)(lVar6 + 0x30);
    if (((*(byte *)(_System_Type_TypeInfo_12d6340 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_System_Type_TypeInfo_12d6340 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    uVar5 = native_System_Type__GetTypeFromHandle_b0fb24(uVar5,0);
    if (plVar4 != (long *)0x0) {
      native_UnityEngine_GameObject__GetComponentFastPath_8de32c(plVar4,uVar5,&uStack_38,0);
      return (long *)0x0;
    }
                    /* WARNING: Subroutine does not return */
    native_sub_432810();
  }
  if (plVar4 != (long *)0x0) {
    lVar6 = *plVar4;
    uVar3 = native_sub_3c5e78(_INGUIFont_TypeInfo_12d4c70,lVar6);
    if ((uVar3 & 1) == 0) {
      if ((*(byte *)(lVar6 + 0x133) >> 4 & 1) == 0) {
        plVar4 = (long *)0x0;
      }
      else {
        if (((((*(byte *)(lVar1 + 0x114) >> 5 & 1) != 0) || (*(char *)(lVar1 + 0x2a) == '\x1e')) ||
            (*(char *)(lVar1 + 0x2a) == '\x13')) &&
           ((*(long *)(lVar1 + 0x70) != 0 &&
            (lVar6 = *(long *)(*(long *)(lVar1 + 0x70) + 0x28), lVar6 != 0)))) {
          plStack_28 = (long *)native_sub_3d76d0(plVar4,lVar6);
          if (plStack_28 != (long *)0x0) {
            return plVar4;
          }
          iVar2 = (*(code *)**(undefined8 **)plVar4[2])((undefined8 *)plVar4[2],lVar6,&plStack_28);
          if (-1 < iVar2) {
            uVar3 = native_sub_3d7780(plVar4,lVar6,plStack_28);
            if ((uVar3 & 1) == 0) {
              (**(code **)(*plStack_28 + 0x10))(plStack_28);
              plStack_28 = (long *)native_sub_3d76d0(plVar4,lVar6);
            }
            if (plStack_28 != (long *)0x0) {
              return plVar4;
            }
          }
        }
        if (lRam00000000013443f8 != lVar1) {
          plVar4 = (long *)0x0;
        }
      }
    }
  }
  return plVar4;
}



/* UIPopupList$$set_font @ 0xc26218
 * void UIPopupList__set_font (UIPopupList_o* __this, INGUIFont_o* value, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIPopupList$$set_font
   void UIPopupList__set_font (UIPopupList_o* __this, INGUIFont_o* value, const MethodInfo* method);
    */

void native_UIPopupList__set_font_c26218(long param_1,long *param_2)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  
  if ((bRam00000000013426d2 & 1) == 0) {
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    bRam00000000013426d2 = 1;
  }
  if (param_2 != (long *)0x0) {
    if (*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 300) <= *(byte *)(*param_2 + 300)) {
      if (*(long *)(*(long *)(*param_2 + 200) +
                    (ulong)*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 300) * 8 + -8) !=
          _UnityEngine_Object_TypeInfo_12d54e0) {
        param_2 = (long *)0x0;
      }
      goto LAB_00c26290;
    }
  }
  param_2 = (long *)0x0;
LAB_00c26290:
  *(long **)(param_1 + 0x20) = param_2;
  native_sub_4326e0();
  puVar4 = (undefined8 *)(param_1 + 0x28);
  *puVar4 = 0;
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



/* UIPopupList$$get_ambigiousFont @ 0xc262b8
 * UnityEngine_Object_o* UIPopupList__get_ambigiousFont (UIPopupList_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIPopupList$$get_ambigiousFont
   UnityEngine_Object_o* UIPopupList__get_ambigiousFont (UIPopupList_o* __this, const MethodInfo*
   method); */

long * native_UIPopupList__get_ambigiousFont_c262b8(long param_1)

{
  ulong uVar1;
  long *plVar2;
  undefined8 uVar3;
  
  if ((bRam00000000013426d3 & 1) == 0) {
    native_sub_43273c(&Method_UnityEngine_GameObject_GetComponent_UIFont____12e4aa8);
    native_sub_43273c(&UnityEngine_GameObject_TypeInfo_12d47d8);
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    bRam00000000013426d3 = 1;
  }
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar1 = native_UnityEngine_Object__op_Inequality_8d76fc(uVar3,0,0);
  if ((uVar1 & 1) == 0) {
    uVar3 = *(undefined8 *)(param_1 + 0x20);
    if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    uVar1 = native_UnityEngine_Object__op_Inequality_8d76fc(uVar3,0,0);
    plVar2 = (long *)0x0;
    if ((((uVar1 & 1) != 0) && (plVar2 = *(long **)(param_1 + 0x20), plVar2 != (long *)0x0)) &&
       (*plVar2 == _UnityEngine_GameObject_TypeInfo_12d47d8)) {
      plVar2 = (long *)native_UnityEngine_GameObject__GetComponent_BE2_BlockSectionHeader_Custom__4a2214
                                 (plVar2,
                                  _Method_UnityEngine_GameObject_GetComponent_UIFont____12e4aa8);
    }
  }
  else {
    plVar2 = *(long **)(param_1 + 0x28);
  }
  return plVar2;
}



/* UIPopupList$$set_ambigiousFont @ 0xc263bc
 * void UIPopupList__set_ambigiousFont (UIPopupList_o* __this, UnityEngine_Object_o* value, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIPopupList$$set_ambigiousFont
   void UIPopupList__set_ambigiousFont (UIPopupList_o* __this, UnityEngine_Object_o* value, const
   MethodInfo* method); */

void native_UIPopupList__set_ambigiousFont_c263bc(long param_1,long *param_2)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined8 *puVar5;
  
  if ((bRam00000000013426d4 & 1) == 0) {
    native_sub_43273c(&UnityEngine_Font_TypeInfo_12d46d8);
    native_sub_43273c(&Method_UnityEngine_GameObject_GetComponent_UIFont____12e4aa8);
    native_sub_43273c(&UnityEngine_GameObject_TypeInfo_12d47d8);
    native_sub_43273c(&INGUIFont_TypeInfo_12d4c70);
    bRam00000000013426d4 = 1;
  }
  if ((param_2 == (long *)0x0) || (*param_2 != _UnityEngine_Font_TypeInfo_12d46d8)) {
    lVar4 = native_sub_4327f8(param_2,_INGUIFont_TypeInfo_12d4c70);
    if (lVar4 == 0) {
      if ((param_2 == (long *)0x0) || (*param_2 != _UnityEngine_GameObject_TypeInfo_12d47d8)) {
        return;
      }
      param_2 = (long *)native_UnityEngine_GameObject__GetComponent_BE2_BlockSectionHeader_Custom__4a2214
                                  (param_2,
                                   _Method_UnityEngine_GameObject_GetComponent_UIFont____12e4aa8);
      *(long **)(param_1 + 0x20) = param_2;
    }
    else {
      *(long **)(param_1 + 0x20) = param_2;
    }
    native_sub_4326e0(param_1 + 0x20,param_2);
    puVar5 = (undefined8 *)(param_1 + 0x28);
    *puVar5 = 0;
  }
  else {
    *(long *)(param_1 + 0x28) = (long)param_2;
    native_sub_4326e0((long *)(param_1 + 0x28),param_2);
    puVar5 = (undefined8 *)(param_1 + 0x20);
    *puVar5 = 0;
  }
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



/* UIPopupList$$get_onSelectionChange @ 0xc264e0
 * UIPopupList_LegacyEvent_o* UIPopupList__get_onSelectionChange (UIPopupList_o* __this, const MethodInfo* method); */

/* UIPopupList$$get_onSelectionChange
   UIPopupList_LegacyEvent_o* UIPopupList__get_onSelectionChange (UIPopupList_o* __this, const
   MethodInfo* method); */

undefined8 native_UIPopupList__get_onSelectionChange_c264e0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x150);
}



/* UIPopupList$$set_onSelectionChange @ 0xc264e8
 * void UIPopupList__set_onSelectionChange (UIPopupList_o* __this, UIPopupList_LegacyEvent_o* value, const MethodInfo* method); */

/* UIPopupList$$set_onSelectionChange
   void UIPopupList__set_onSelectionChange (UIPopupList_o* __this, UIPopupList_LegacyEvent_o* value,
   const MethodInfo* method); */

void native_UIPopupList__set_onSelectionChange_c264e8(long param_1,undefined8 param_2)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  
  *(undefined8 *)(param_1 + 0x150) = param_2;
  if (iRam0000000001345318 != 0) {
    puVar1 = (ulong *)((param_1 + 0x150U >> 0x12 & 0x7fff) * 8 + 0x138ecd8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar3) {
        *puVar1 = *puVar1 | 1L << (param_1 + 0x150U >> 0xc & 0x3f);
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  return;
}



/* UIPopupList$$get_isOpen @ 0xc264f8
 * bool UIPopupList__get_isOpen (const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIPopupList$$get_isOpen
   bool UIPopupList__get_isOpen (const MethodInfo* method); */

bool native_UIPopupList__get_isOpen_c264f8(void)

{
  bool bVar1;
  ulong uVar2;
  undefined8 uVar3;
  float fVar4;
  float fVar5;
  
  if ((bRam00000000013426d5 & 1) == 0) {
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    native_sub_43273c(&UIPopupList_TypeInfo_12d6490);
    bRam00000000013426d5 = 1;
  }
  if (((*(byte *)(_UIPopupList_TypeInfo_12d6490 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UIPopupList_TypeInfo_12d6490 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar3 = **(undefined8 **)(_UIPopupList_TypeInfo_12d6490 + 0xb8);
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec(_UnityEngine_Object_TypeInfo_12d54e0);
  }
  uVar2 = native_UnityEngine_Object__op_Inequality_8d76fc(uVar3,0,0);
  if ((uVar2 & 1) == 0) {
    bVar1 = false;
  }
  else {
    if (((*(byte *)(_UIPopupList_TypeInfo_12d6490 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UIPopupList_TypeInfo_12d6490 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    uVar3 = *(undefined8 *)(*(long *)(_UIPopupList_TypeInfo_12d6490 + 0xb8) + 8);
    if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
      native_sub_4327ec(_UnityEngine_Object_TypeInfo_12d54e0);
    }
    uVar2 = native_UnityEngine_Object__op_Inequality_8d76fc(uVar3,0,0);
    if ((uVar2 & 1) == 0) {
      if (((*(byte *)(_UIPopupList_TypeInfo_12d6490 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_UIPopupList_TypeInfo_12d6490 + 0xe0) == 0)) {
        native_sub_4327ec();
      }
      fVar5 = *(float *)(*(long *)(_UIPopupList_TypeInfo_12d6490 + 0xb8) + 0x10);
      fVar4 = (float)native_UnityEngine_Time__get_unscaledTime_770860(0);
      bVar1 = fVar4 < fVar5;
    }
    else {
      bVar1 = true;
    }
  }
  return bVar1;
}



/* UIPopupList$$get_value @ 0xc26648
 * System_String_o* UIPopupList__get_value (UIPopupList_o* __this, const MethodInfo* method); */

/* UIPopupList$$get_value
   System_String_o* UIPopupList__get_value (UIPopupList_o* __this, const MethodInfo* method); */

undefined8 native_UIPopupList__get_value_c26648(long param_1)

{
  return *(undefined8 *)(param_1 + 0xd8);
}



/* UIPopupList$$set_value @ 0xc26650
 * void UIPopupList__set_value (UIPopupList_o* __this, System_String_o* value, const MethodInfo* method); */

/* UIPopupList$$set_value
   void UIPopupList__set_value (UIPopupList_o* __this, System_String_o* value, const MethodInfo*
   method); */

void native_UIPopupList__set_value_c26650(long param_1,long param_2)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  ulong uVar4;
  long *plVar5;
  
  plVar5 = (long *)(param_1 + 0xd8);
  uVar4 = native_System_String__op_Inequality_afbbb4(*plVar5,param_2,0);
  if ((uVar4 & 1) != 0) {
    *plVar5 = param_2;
    native_sub_4326e0(plVar5,param_2);
    if ((*plVar5 != 0) &&
       (native_UIPopupList__TriggerCallbacks_c26fa0(param_1), *(char *)(param_1 + 0x10c) == '\0')) {
      *plVar5 = 0;
      if (iRam0000000001345318 != 0) {
        puVar1 = (ulong *)(((ulong)plVar5 >> 0x12 & 0x7fff) * 8 + 0x138ecd8);
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar3) {
            *puVar1 = *puVar1 | 1L << ((ulong)plVar5 >> 0xc & 0x3f);
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      return;
    }
  }
  return;
}



/* UIPopupList$$get_data @ 0xc266e0
 * Il2CppObject* UIPopupList__get_data (UIPopupList_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIPopupList$$get_data
   Il2CppObject* UIPopupList__get_data (UIPopupList_o* __this, const MethodInfo* method); */

undefined8 native_UIPopupList__get_data_c266e0(long param_1)

{
  uint uVar1;
  long lVar2;
  
  if ((bRam00000000013426d6 & 1) == 0) {
    native_sub_43273c(&Method_System_Collections_Generic_List_string__IndexOf___12dcec8);
    native_sub_43273c(&Method_System_Collections_Generic_List_object__get_Count___12dcc80);
    native_sub_43273c(&Method_System_Collections_Generic_List_object__get_Item___12dcc88);
    bRam00000000013426d6 = 1;
  }
  if (*(long *)(param_1 + 0x68) != 0) {
    uVar1 = native_System_Collections_Generic_List_EventSystem___IndexOf_d41640
                      (*(long *)(param_1 + 0x68),*(undefined8 *)(param_1 + 0xd8),
                       _Method_System_Collections_Generic_List_string__IndexOf___12dcec8);
    if (-1 < (int)uVar1) {
      lVar2 = *(long *)(param_1 + 0x70);
      if (lVar2 == 0) goto LAB_00c26790;
      if ((int)uVar1 < (int)*(uint *)(lVar2 + 0x18)) {
        if (*(uint *)(lVar2 + 0x18) <= uVar1) {
          native_System_ThrowHelper__ThrowArgumentOutOfRangeException_9fe0f4(0);
        }
        return *(undefined8 *)(*(long *)(lVar2 + 0x10) + (long)(int)uVar1 * 8 + 0x20);
      }
    }
    return 0;
  }
LAB_00c26790:
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* UIPopupList$$get_callback @ 0xc26794
 * System_Action_o* UIPopupList__get_callback (UIPopupList_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIPopupList$$get_callback
   System_Action_o* UIPopupList__get_callback (UIPopupList_o* __this, const MethodInfo* method); */

undefined8 native_UIPopupList__get_callback_c26794(long param_1)

{
  uint uVar1;
  long lVar2;
  
  if ((bRam00000000013426d7 & 1) == 0) {
    native_sub_43273c(&Method_System_Collections_Generic_List_string__IndexOf___12dcec8);
    native_sub_43273c(&Method_System_Collections_Generic_List_Action__get_Count___12dc3d0);
    native_sub_43273c(&Method_System_Collections_Generic_List_Action__get_Item___12dc3d8);
    bRam00000000013426d7 = 1;
  }
  if (*(long *)(param_1 + 0x68) != 0) {
    uVar1 = native_System_Collections_Generic_List_EventSystem___IndexOf_d41640
                      (*(long *)(param_1 + 0x68),*(undefined8 *)(param_1 + 0xd8),
                       _Method_System_Collections_Generic_List_string__IndexOf___12dcec8);
    if (-1 < (int)uVar1) {
      lVar2 = *(long *)(param_1 + 0x78);
      if (lVar2 == 0) goto LAB_00c26844;
      if ((int)uVar1 < (int)*(uint *)(lVar2 + 0x18)) {
        if (*(uint *)(lVar2 + 0x18) <= uVar1) {
          native_System_ThrowHelper__ThrowArgumentOutOfRangeException_9fe0f4(0);
        }
        return *(undefined8 *)(*(long *)(lVar2 + 0x10) + (long)(int)uVar1 * 8 + 0x20);
      }
    }
    return 0;
  }
LAB_00c26844:
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* UIPopupList$$get_isColliderEnabled @ 0xc26848
 * bool UIPopupList__get_isColliderEnabled (UIPopupList_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIPopupList$$get_isColliderEnabled
   bool UIPopupList__get_isColliderEnabled (UIPopupList_o* __this, const MethodInfo* method); */

undefined8 native_UIPopupList__get_isColliderEnabled_c26848(undefined8 param_1)

{
  long lVar1;
  ulong uVar2;
  undefined8 uVar3;
  
  if ((bRam00000000013426d8 & 1) == 0) {
    native_sub_43273c(&Method_UnityEngine_Component_GetComponent_Collider2D____12e29c8);
    native_sub_43273c(&Method_UnityEngine_Component_GetComponent_Collider____12e29c0);
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    bRam00000000013426d8 = 1;
  }
  lVar1 = native_UnityEngine_Component__GetComponent_ActiveAnimation__49daec
                    (param_1,_Method_UnityEngine_Component_GetComponent_Collider____12e29c0);
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec(_UnityEngine_Object_TypeInfo_12d54e0);
  }
  uVar2 = native_UnityEngine_Object__op_Inequality_8d76fc(lVar1,0,0);
  if ((uVar2 & 1) == 0) {
    lVar1 = native_UnityEngine_Component__GetComponent_ActiveAnimation__49daec
                      (param_1,_Method_UnityEngine_Component_GetComponent_Collider2D____12e29c8);
    if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
      native_sub_4327ec(_UnityEngine_Object_TypeInfo_12d54e0);
    }
    uVar2 = native_UnityEngine_Object__op_Inequality_8d76fc(lVar1,0,0);
    if ((uVar2 & 1) == 0) {
      return 0;
    }
    if (lVar1 != 0) {
      if (pcRam0000000001340940 == (code *)0x0) {
        pcRam0000000001340940 = (code *)native_sub_4326f0(&UNK_00e2c6dd);
      }
                    /* WARNING: Could not recover jumptable at 0x008d7b08. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar3 = (*pcRam0000000001340940)(lVar1);
      return uVar3;
    }
  }
  else if (lVar1 != 0) {
    if (pcRam0000000001343a68 == (code *)0x0) {
      pcRam0000000001343a68 = (code *)native_sub_4326f0(&UNK_00ecb640);
    }
                    /* WARNING: Could not recover jumptable at 0x00dbac48. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar3 = (*pcRam0000000001343a68)(lVar1);
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* UIPopupList$$set_isColliderEnabled @ 0xc2697c
 * void UIPopupList__set_isColliderEnabled (UIPopupList_o* __this, bool value, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIPopupList$$set_isColliderEnabled
   void UIPopupList__set_isColliderEnabled (UIPopupList_o* __this, bool value, const MethodInfo*
   method); */

void native_UIPopupList__set_isColliderEnabled_c2697c(undefined8 param_1,uint param_2)

{
  long lVar1;
  ulong uVar2;
  
  if ((bRam00000000013426d9 & 1) == 0) {
    native_sub_43273c(&Method_UnityEngine_Component_GetComponent_Collider2D____12e29c8);
    native_sub_43273c(&Method_UnityEngine_Component_GetComponent_Collider____12e29c0);
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    bRam00000000013426d9 = 1;
  }
  lVar1 = native_UnityEngine_Component__GetComponent_ActiveAnimation__49daec
                    (param_1,_Method_UnityEngine_Component_GetComponent_Collider____12e29c0);
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec(_UnityEngine_Object_TypeInfo_12d54e0);
  }
  uVar2 = native_UnityEngine_Object__op_Inequality_8d76fc(lVar1,0,0);
  if ((uVar2 & 1) == 0) {
    lVar1 = native_UnityEngine_Component__GetComponent_ActiveAnimation__49daec
                      (param_1,_Method_UnityEngine_Component_GetComponent_Collider2D____12e29c8);
    if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
      native_sub_4327ec(_UnityEngine_Object_TypeInfo_12d54e0);
    }
    uVar2 = native_UnityEngine_Object__op_Inequality_8d76fc(lVar1,0,0);
    if ((uVar2 & 1) == 0) {
      return;
    }
    if (lVar1 != 0) {
      if (pcRam0000000001340948 == (code *)0x0) {
        pcRam0000000001340948 = (code *)native_sub_4326f0(&UNK_00e2c702);
      }
                    /* WARNING: Could not recover jumptable at 0x008d7b58. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*pcRam0000000001340948)(lVar1,param_2 & 1);
      return;
    }
  }
  else if (lVar1 != 0) {
    if (pcRam0000000001343a70 == (code *)0x0) {
      pcRam0000000001343a70 = (code *)native_sub_4326f0(&UNK_00ecb664);
    }
                    /* WARNING: Could not recover jumptable at 0x00dbac98. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*pcRam0000000001343a70)(lVar1,param_2 & 1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* UIPopupList$$get_isValid @ 0xc26ab8
 * bool UIPopupList__get_isValid (UIPopupList_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIPopupList$$get_isValid
   bool UIPopupList__get_isValid (UIPopupList_o* __this, const MethodInfo* method); */

uint native_UIPopupList__get_isValid_c26ab8(undefined8 param_1)

{
  uint uVar1;
  undefined8 uVar2;
  
  if ((bRam00000000013426da & 1) == 0) {
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    bRam00000000013426da = 1;
  }
  uVar2 = native_UIPopupList__get_ambigiousFont_c262b8(param_1);
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec(_UnityEngine_Object_TypeInfo_12d54e0);
  }
  if ((bRam0000000001341084 & 1) == 0) {
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0,0,0);
    bRam0000000001341084 = 1;
  }
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar1 = native_UnityEngine_Object__CompareBaseObjects_8e9aac(uVar2,0);
  return ~uVar1 & 1;
}



/* UIPopupList$$get_activeFontSize @ 0xc26b30
 * int32_t UIPopupList__get_activeFontSize (UIPopupList_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIPopupList$$get_activeFontSize
   int32_t UIPopupList__get_activeFontSize (UIPopupList_o* __this, const MethodInfo* method); */

ulong native_UIPopupList__get_activeFontSize_c26b30(long param_1)

{
  long *plVar1;
  ulong uVar2;
  undefined8 *puVar3;
  long lVar4;
  int *piVar5;
  undefined8 uVar6;
  
  if ((bRam00000000013426db & 1) == 0) {
    native_sub_43273c(&INGUIFont_TypeInfo_12d4c70);
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    bRam00000000013426db = 1;
  }
  plVar1 = (long *)native_UIPopupList__get_font_c2612c(param_1);
  uVar6 = *(undefined8 *)(param_1 + 0x28);
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec(_UnityEngine_Object_TypeInfo_12d54e0);
  }
  uVar2 = native_UnityEngine_Object__op_Inequality_8d76fc(uVar6,0,0);
  if ((plVar1 == (long *)0x0) || ((uVar2 & 1) != 0)) {
    return (ulong)*(uint *)(param_1 + 0x30);
  }
  lVar4 = *plVar1;
  if ((ulong)*(ushort *)(lVar4 + 0x12a) != 0) {
    uVar2 = 0;
    piVar5 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
    do {
      if (*(long *)(piVar5 + -2) == _INGUIFont_TypeInfo_12d4c70) {
        puVar3 = (undefined8 *)(lVar4 + (long)(*piVar5 + 0x19) * 0x10 + 0x138);
        goto LAB_00c26c30;
      }
      uVar2 = uVar2 + 1;
      piVar5 = piVar5 + 4;
    } while (uVar2 < *(ushort *)(lVar4 + 0x12a));
  }
  puVar3 = (undefined8 *)native_sub_3c9b34(plVar1,_INGUIFont_TypeInfo_12d4c70,0x19);
LAB_00c26c30:
                    /* WARNING: Could not recover jumptable at 0x00c26c44. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar2 = (*(code *)*puVar3)(plVar1,puVar3[1]);
  return uVar2;
}



/* UIPopupList$$get_activeFontScale @ 0xc26c48
 * float UIPopupList__get_activeFontScale (UIPopupList_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIPopupList$$get_activeFontScale
   float UIPopupList__get_activeFontScale (UIPopupList_o* __this, const MethodInfo* method); */

float native_UIPopupList__get_activeFontScale_c26c48(long param_1)

{
  int iVar1;
  int iVar2;
  long *plVar3;
  ulong uVar4;
  undefined8 *puVar5;
  long lVar6;
  int *piVar7;
  undefined8 uVar8;
  float fVar9;
  
  if ((bRam00000000013426dc & 1) == 0) {
    native_sub_43273c(&INGUIFont_TypeInfo_12d4c70);
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    bRam00000000013426dc = 1;
  }
  plVar3 = (long *)native_UIPopupList__get_font_c2612c(param_1);
  uVar8 = *(undefined8 *)(param_1 + 0x28);
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec(_UnityEngine_Object_TypeInfo_12d54e0);
  }
  uVar4 = native_UnityEngine_Object__op_Inequality_8d76fc(uVar8,0,0);
  fVar9 = 1.0;
  if ((plVar3 != (long *)0x0) && ((uVar4 & 1) == 0)) {
    lVar6 = *plVar3;
    iVar1 = *(int *)(param_1 + 0x30);
    if ((ulong)*(ushort *)(lVar6 + 0x12a) != 0) {
      uVar4 = 0;
      piVar7 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == _INGUIFont_TypeInfo_12d4c70) {
          puVar5 = (undefined8 *)(lVar6 + (long)(*piVar7 + 0x19) * 0x10 + 0x138);
          goto LAB_00c26d3c;
        }
        uVar4 = uVar4 + 1;
        piVar7 = piVar7 + 4;
      } while (uVar4 < *(ushort *)(lVar6 + 0x12a));
    }
    puVar5 = (undefined8 *)native_sub_3c9b34(0x3f800000,plVar3,_INGUIFont_TypeInfo_12d4c70,0x19);
LAB_00c26d3c:
    iVar2 = (*(code *)*puVar5)(plVar3,puVar5[1]);
    fVar9 = (float)iVar1 / (float)iVar2;
  }
  return fVar9;
}



/* UIPopupList$$get_fitScale @ 0xc26d64
 * float UIPopupList__get_fitScale (UIPopupList_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIPopupList$$get_fitScale
   float UIPopupList__get_fitScale (UIPopupList_o* __this, const MethodInfo* method); */

float native_UIPopupList__get_fitScale_c26d64(long param_1)

{
  ulong uVar1;
  long lVar2;
  undefined8 uVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
  if ((bRam00000000013426dd & 1) == 0) {
    native_sub_43273c(&Method_System_Collections_Generic_List_string__get_Count___12dcef8);
    native_sub_43273c(&NGUITools_TypeInfo_12d53c8);
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    bRam00000000013426dd = 1;
  }
  if (*(char *)(param_1 + 0xc0) == '\0') {
    uVar3 = *(undefined8 *)(param_1 + 0xe0);
    if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    uVar1 = native_UnityEngine_Object__op_Inequality_8d76fc(uVar3,0,0);
    fVar4 = 1.0;
    if ((uVar1 & 1) != 0) {
      if (*(long *)(param_1 + 0xe0) == 0) {
LAB_00c26f18:
                    /* WARNING: Subroutine does not return */
        native_sub_432810();
      }
      uVar3 = native_UIRect__get_anchorCamera_c26f1c();
      if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
        native_sub_4327ec(_UnityEngine_Object_TypeInfo_12d54e0);
      }
      uVar1 = native_UnityEngine_Object__op_Inequality_8d76fc(uVar3,0,0);
      if ((uVar1 & 1) != 0) {
        if ((*(long *)(param_1 + 0xe0) == 0) ||
           (lVar2 = native_UIRect__get_anchorCamera_c26f1c(), lVar2 == 0)) goto LAB_00c26f18;
        uVar1 = native_UnityEngine_Camera__get_orthographic_8d86c0(lVar2,0);
        if ((uVar1 & 1) != 0) {
          if ((*(long *)(param_1 + 0x68) == 0) || (*(long *)(param_1 + 0xe0) == 0))
          goto LAB_00c26f18;
          fVar6 = *(float *)(param_1 + 0x84) +
                  (*(float *)(param_1 + 0x84) + (float)*(int *)(param_1 + 0x30)) *
                  (float)*(int *)(*(long *)(param_1 + 0x68) + 0x18);
          fVar5 = (float)native_UIPanel__get_height_aefb2c(*(long *)(param_1 + 0xe0),0);
          if (fVar5 < fVar6) {
            fVar4 = fVar5 / fVar6;
          }
        }
      }
    }
  }
  else {
    if (*(long *)(param_1 + 0x68) == 0) goto LAB_00c26f18;
    fVar4 = *(float *)(param_1 + 0x84) + (float)*(int *)(param_1 + 0x30);
    fVar5 = *(float *)(param_1 + 0x84) + fVar4 * (float)*(int *)(*(long *)(param_1 + 0x68) + 0x18);
    if (((*(byte *)(_NGUITools_TypeInfo_12d53c8 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_NGUITools_TypeInfo_12d53c8 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    native_NGUITools__get_screenSize_7338a0(0);
    if (fVar5 <= fVar4) {
      fVar4 = 1.0;
    }
    else {
      fVar4 = fVar4 / fVar5;
    }
  }
  return fVar4;
}



/* UIPopupList$$Set @ 0xc26658
 * void UIPopupList__Set (UIPopupList_o* __this, System_String_o* value, bool notify, const MethodInfo* method); */

/* UIPopupList$$Set
   void UIPopupList__Set (UIPopupList_o* __this, System_String_o* value, bool notify, const
   MethodInfo* method); */

void native_UIPopupList__Set_c26658(long param_1,long param_2,ulong param_3)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  ulong uVar4;
  long *plVar5;
  
  plVar5 = (long *)(param_1 + 0xd8);
  uVar4 = native_System_String__op_Inequality_afbbb4(*plVar5,param_2,0);
  if ((uVar4 & 1) != 0) {
    *plVar5 = param_2;
    native_sub_4326e0(plVar5,param_2);
    if (*plVar5 != 0) {
      if ((param_3 & 1) != 0) {
        native_UIPopupList__TriggerCallbacks_c26fa0(param_1);
      }
      if (*(char *)(param_1 + 0x10c) == '\0') {
        *plVar5 = 0;
        if (iRam0000000001345318 != 0) {
          puVar1 = (ulong *)(((ulong)plVar5 >> 0x12 & 0x7fff) * 8 + 0x138ecd8);
          do {
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
            if (bVar3) {
              *puVar1 = *puVar1 | 1L << ((ulong)plVar5 >> 0xc & 0x3f);
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
        }
        return;
      }
    }
  }
  return;
}



/* UIPopupList$$Clear @ 0xc2716c
 * void UIPopupList__Clear (UIPopupList_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIPopupList$$Clear
   void UIPopupList__Clear (UIPopupList_o* __this, const MethodInfo* method); */

void native_UIPopupList__Clear_c2716c(long param_1)

{
  long lVar1;
  
  if ((bRam00000000013426de & 1) == 0) {
    native_sub_43273c(&Method_System_Collections_Generic_List_string__Clear___12dcea8);
    native_sub_43273c(&Method_System_Collections_Generic_List_object__Clear___12dcc40);
    native_sub_43273c(&Method_System_Collections_Generic_List_Action__Clear___12dc3c0);
    bRam00000000013426de = 1;
  }
  if (*(long *)(param_1 + 0x68) != 0) {
    native_System_Collections_Generic_List_Action___Clear_d40e80
              (*(long *)(param_1 + 0x68),
               _Method_System_Collections_Generic_List_string__Clear___12dcea8);
    if (*(long *)(param_1 + 0x70) != 0) {
      native_System_Collections_Generic_List_Action___Clear_d40e80
                (*(long *)(param_1 + 0x70),
                 _Method_System_Collections_Generic_List_object__Clear___12dcc40);
      lVar1 = *(long *)(param_1 + 0x78);
      if (lVar1 != 0) {
        if (0 < *(int *)(lVar1 + 0x18)) {
          native_System_Array__Clear_95191c
                    (*(undefined8 *)(lVar1 + 0x10),0,*(int *)(lVar1 + 0x18),0);
          *(undefined4 *)(lVar1 + 0x18) = 0;
        }
        *(int *)(lVar1 + 0x1c) = *(int *)(lVar1 + 0x1c) + 1;
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* UIPopupList$$AddItem @ 0xc27208
 * void UIPopupList__AddItem (UIPopupList_o* __this, System_String_o* text, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIPopupList$$AddItem
   void UIPopupList__AddItem (UIPopupList_o* __this, System_String_o* text, const MethodInfo*
   method); */

void native_UIPopupList__AddItem_c27208(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  uint uVar4;
  long lVar5;
  
  if ((bRam00000000013426df & 1) == 0) {
    native_sub_43273c(&Method_System_Collections_Generic_List_string__Add___12dcea0);
    native_sub_43273c(&Method_System_Collections_Generic_List_Action__Add___12dc3b8);
    native_sub_43273c(&Method_System_Collections_Generic_List_object__Add___12dcc38);
    bRam00000000013426df = 1;
  }
  if (*(long *)(param_1 + 0x68) != 0) {
    native_System_Collections_Generic_List_int_____Add_d40c00
              (*(long *)(param_1 + 0x68),param_2,
               _Method_System_Collections_Generic_List_string__Add___12dcea0);
    if (*(long *)(param_1 + 0x70) != 0) {
      native_System_Collections_Generic_List_int_____Add_d40c00
                (*(long *)(param_1 + 0x70),param_2,
                 _Method_System_Collections_Generic_List_object__Add___12dcc38);
      lVar1 = *(long *)(param_1 + 0x78);
      if (lVar1 != 0) {
        lVar5 = *(long *)(lVar1 + 0x10);
        if (lVar5 != 0) {
          uVar4 = *(uint *)(lVar1 + 0x18);
          if (uVar4 == *(uint *)(lVar5 + 0x18)) {
            (*(code *)**(undefined8 **)
                        (*(long *)(*(long *)(
                                            _Method_System_Collections_Generic_List_Action__Add___12dc3b8
                                            + 0x18) + 0xc0) + 0x60))(lVar1,uVar4 + 1);
            uVar4 = *(uint *)(lVar1 + 0x18);
            lVar5 = *(long *)(lVar1 + 0x10);
            *(uint *)(lVar1 + 0x18) = uVar4 + 1;
            if (lVar5 == 0) goto code_r0x00d40c5c;
          }
          else {
            *(uint *)(lVar1 + 0x18) = uVar4 + 1;
          }
          if (uVar4 < *(uint *)(lVar5 + 0x18)) {
            puVar2 = (undefined8 *)(lVar5 + (long)(int)uVar4 * 8 + 0x20);
            *puVar2 = 0;
            native_sub_4326e0(puVar2,0);
            *(int *)(lVar1 + 0x1c) = *(int *)(lVar1 + 0x1c) + 1;
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



/* UIPopupList$$AddItem @ 0xc272bc
 * void UIPopupList__AddItem (UIPopupList_o* __this, System_String_o* text, System_Action_o* del, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIPopupList$$AddItem
   void UIPopupList__AddItem (UIPopupList_o* __this, System_String_o* text, System_Action_o* del,
   const MethodInfo* method); */

void native_UIPopupList__AddItem_c272bc(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  uint uVar4;
  long lVar5;
  
  if ((bRam00000000013426e0 & 1) == 0) {
    native_sub_43273c(&Method_System_Collections_Generic_List_string__Add___12dcea0);
    native_sub_43273c(&Method_System_Collections_Generic_List_Action__Add___12dc3b8);
    bRam00000000013426e0 = 1;
  }
  if (*(long *)(param_1 + 0x68) != 0) {
    native_System_Collections_Generic_List_int_____Add_d40c00
              (*(long *)(param_1 + 0x68),param_2,
               _Method_System_Collections_Generic_List_string__Add___12dcea0);
    lVar1 = *(long *)(param_1 + 0x78);
    if (lVar1 != 0) {
      lVar5 = *(long *)(lVar1 + 0x10);
      if (lVar5 != 0) {
        uVar4 = *(uint *)(lVar1 + 0x18);
        if (uVar4 == *(uint *)(lVar5 + 0x18)) {
          (*(code *)**(undefined8 **)
                      (*(long *)(*(long *)(
                                          _Method_System_Collections_Generic_List_Action__Add___12dc3b8
                                          + 0x18) + 0xc0) + 0x60))(lVar1,uVar4 + 1);
          uVar4 = *(uint *)(lVar1 + 0x18);
          lVar5 = *(long *)(lVar1 + 0x10);
          *(uint *)(lVar1 + 0x18) = uVar4 + 1;
          if (lVar5 == 0) goto code_r0x00d40c5c;
        }
        else {
          *(uint *)(lVar1 + 0x18) = uVar4 + 1;
        }
        if (uVar4 < *(uint *)(lVar5 + 0x18)) {
          puVar2 = (undefined8 *)(lVar5 + (long)(int)uVar4 * 8 + 0x20);
          *puVar2 = param_3;
          native_sub_4326e0(puVar2,param_3);
          *(int *)(lVar1 + 0x1c) = *(int *)(lVar1 + 0x1c) + 1;
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
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* UIPopupList$$AddItem @ 0xc2734c
 * void UIPopupList__AddItem (UIPopupList_o* __this, System_String_o* text, Il2CppObject* data, System_Action_o* del, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIPopupList$$AddItem
   void UIPopupList__AddItem (UIPopupList_o* __this, System_String_o* text, Il2CppObject* data,
   System_Action_o* del, const MethodInfo* method); */

void native_UIPopupList__AddItem_c2734c
               (long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  uint uVar4;
  long lVar5;
  
  if ((bRam00000000013426e1 & 1) == 0) {
    native_sub_43273c(&Method_System_Collections_Generic_List_string__Add___12dcea0);
    native_sub_43273c(&Method_System_Collections_Generic_List_Action__Add___12dc3b8);
    native_sub_43273c(&Method_System_Collections_Generic_List_object__Add___12dcc38);
    bRam00000000013426e1 = 1;
  }
  if (*(long *)(param_1 + 0x68) != 0) {
    native_System_Collections_Generic_List_int_____Add_d40c00
              (*(long *)(param_1 + 0x68),param_2,
               _Method_System_Collections_Generic_List_string__Add___12dcea0);
    if (*(long *)(param_1 + 0x70) != 0) {
      native_System_Collections_Generic_List_int_____Add_d40c00
                (*(long *)(param_1 + 0x70),param_3,
                 _Method_System_Collections_Generic_List_object__Add___12dcc38);
      lVar1 = *(long *)(param_1 + 0x78);
      if (lVar1 != 0) {
        lVar5 = *(long *)(lVar1 + 0x10);
        if (lVar5 != 0) {
          uVar4 = *(uint *)(lVar1 + 0x18);
          if (uVar4 == *(uint *)(lVar5 + 0x18)) {
            (*(code *)**(undefined8 **)
                        (*(long *)(*(long *)(
                                            _Method_System_Collections_Generic_List_Action__Add___12dc3b8
                                            + 0x18) + 0xc0) + 0x60))(lVar1,uVar4 + 1);
            uVar4 = *(uint *)(lVar1 + 0x18);
            lVar5 = *(long *)(lVar1 + 0x10);
            *(uint *)(lVar1 + 0x18) = uVar4 + 1;
            if (lVar5 == 0) goto code_r0x00d40c5c;
          }
          else {
            *(uint *)(lVar1 + 0x18) = uVar4 + 1;
          }
          if (uVar4 < *(uint *)(lVar5 + 0x18)) {
            puVar2 = (undefined8 *)(lVar5 + (long)(int)uVar4 * 8 + 0x20);
            *puVar2 = param_4;
            native_sub_4326e0(puVar2,param_4);
            *(int *)(lVar1 + 0x1c) = *(int *)(lVar1 + 0x1c) + 1;
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



/* UIPopupList$$RemoveItem @ 0xc27410
 * void UIPopupList__RemoveItem (UIPopupList_o* __this, System_String_o* text, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIPopupList$$RemoveItem
   void UIPopupList__RemoveItem (UIPopupList_o* __this, System_String_o* text, const MethodInfo*
   method); */

void native_UIPopupList__RemoveItem_c27410(long param_1,undefined8 param_2)

{
  uint uVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 in_x6;
  undefined8 in_x7;
  uint uVar5;
  long lVar6;
  undefined8 unaff_x19;
  undefined8 unaff_x20;
  undefined8 unaff_x29;
  undefined8 unaff_x30;
  
  if ((bRam00000000013426e2 & 1) == 0) {
    native_sub_43273c(&Method_System_Collections_Generic_List_string__IndexOf___12dcec8);
    native_sub_43273c(&Method_System_Collections_Generic_List_object__RemoveAt___12dcc68);
    native_sub_43273c(&Method_System_Collections_Generic_List_Action__RemoveAt___12dc3c8);
    native_sub_43273c(&Method_System_Collections_Generic_List_string__RemoveAt___12dcee0);
    native_sub_43273c(&Method_System_Collections_Generic_List_Action__get_Count___12dc3d0);
    bRam00000000013426e2 = 1;
  }
  if (*(long *)(param_1 + 0x68) != 0) {
    uVar1 = native_System_Collections_Generic_List_EventSystem___IndexOf_d41640
                      (*(long *)(param_1 + 0x68),param_2,
                       _Method_System_Collections_Generic_List_string__IndexOf___12dcec8);
    if (uVar1 == 0xffffffff) {
      return;
    }
    if (*(long *)(param_1 + 0x68) != 0) {
      native_System_Collections_Generic_List_int_____RemoveAt_d42280
                (*(long *)(param_1 + 0x68),uVar1,
                 _Method_System_Collections_Generic_List_string__RemoveAt___12dcee0);
      if (*(long *)(param_1 + 0x70) != 0) {
        native_System_Collections_Generic_List_int_____RemoveAt_d42280
                  (*(long *)(param_1 + 0x70),uVar1,
                   _Method_System_Collections_Generic_List_object__RemoveAt___12dcc68);
        lVar2 = *(long *)(param_1 + 0x78);
        if (lVar2 != 0) {
          if (*(int *)(lVar2 + 0x18) <= (int)uVar1) {
            return;
          }
          uVar5 = *(uint *)(lVar2 + 0x18);
          if (uVar5 <= uVar1) {
            native_System_ThrowHelper__ThrowArgumentOutOfRangeException_9fe0f4
                      (0,uVar1,_Method_System_Collections_Generic_List_Action__RemoveAt___12dc3c8);
            uVar5 = *(uint *)(lVar2 + 0x18);
          }
          uVar5 = uVar5 - 1;
          *(uint *)(lVar2 + 0x18) = uVar5;
          if (uVar5 - uVar1 != 0 && (int)uVar1 <= (int)uVar5) {
            native_System_Array__Copy_95d0dc
                      (*(undefined8 *)(lVar2 + 0x10),uVar1 + 1,*(undefined8 *)(lVar2 + 0x10),uVar1,
                       uVar5 - uVar1,0,in_x6,in_x7,unaff_x20,unaff_x19,unaff_x29,unaff_x30);
            uVar5 = *(uint *)(lVar2 + 0x18);
          }
          lVar6 = *(long *)(lVar2 + 0x10);
          if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
            native_sub_432810();
          }
          if (*(uint *)(lVar6 + 0x18) <= uVar5) {
            uVar4 = native_sub_43283c();
                    /* WARNING: Subroutine does not return */
            native_sub_4327dc(uVar4,0);
          }
          puVar3 = (undefined8 *)(lVar6 + (long)(int)uVar5 * 8 + 0x20);
          *puVar3 = 0;
          native_sub_4326e0(puVar3,0);
          *(int *)(lVar2 + 0x1c) = *(int *)(lVar2 + 0x1c) + 1;
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* UIPopupList$$RemoveItemByData @ 0xc27520
 * void UIPopupList__RemoveItemByData (UIPopupList_o* __this, Il2CppObject* data, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIPopupList$$RemoveItemByData
   void UIPopupList__RemoveItemByData (UIPopupList_o* __this, Il2CppObject* data, const MethodInfo*
   method); */

void native_UIPopupList__RemoveItemByData_c27520(long param_1,undefined8 param_2)

{
  uint uVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 in_x6;
  undefined8 in_x7;
  uint uVar5;
  long lVar6;
  undefined8 unaff_x19;
  undefined8 unaff_x20;
  undefined8 unaff_x29;
  undefined8 unaff_x30;
  
  if ((bRam00000000013426e3 & 1) == 0) {
    native_sub_43273c(&Method_System_Collections_Generic_List_object__IndexOf___12dcc50);
    native_sub_43273c(&Method_System_Collections_Generic_List_object__RemoveAt___12dcc68);
    native_sub_43273c(&Method_System_Collections_Generic_List_Action__RemoveAt___12dc3c8);
    native_sub_43273c(&Method_System_Collections_Generic_List_string__RemoveAt___12dcee0);
    native_sub_43273c(&Method_System_Collections_Generic_List_Action__get_Count___12dc3d0);
    bRam00000000013426e3 = 1;
  }
  if (*(long *)(param_1 + 0x70) != 0) {
    uVar1 = native_System_Collections_Generic_List_EventSystem___IndexOf_d41640
                      (*(long *)(param_1 + 0x70),param_2,
                       _Method_System_Collections_Generic_List_object__IndexOf___12dcc50);
    if (uVar1 == 0xffffffff) {
      return;
    }
    if (*(long *)(param_1 + 0x68) != 0) {
      native_System_Collections_Generic_List_int_____RemoveAt_d42280
                (*(long *)(param_1 + 0x68),uVar1,
                 _Method_System_Collections_Generic_List_string__RemoveAt___12dcee0);
      if (*(long *)(param_1 + 0x70) != 0) {
        native_System_Collections_Generic_List_int_____RemoveAt_d42280
                  (*(long *)(param_1 + 0x70),uVar1,
                   _Method_System_Collections_Generic_List_object__RemoveAt___12dcc68);
        lVar2 = *(long *)(param_1 + 0x78);
        if (lVar2 != 0) {
          if (*(int *)(lVar2 + 0x18) <= (int)uVar1) {
            return;
          }
          uVar5 = *(uint *)(lVar2 + 0x18);
          if (uVar5 <= uVar1) {
            native_System_ThrowHelper__ThrowArgumentOutOfRangeException_9fe0f4
                      (0,uVar1,_Method_System_Collections_Generic_List_Action__RemoveAt___12dc3c8);
            uVar5 = *(uint *)(lVar2 + 0x18);
          }
          uVar5 = uVar5 - 1;
          *(uint *)(lVar2 + 0x18) = uVar5;
          if (uVar5 - uVar1 != 0 && (int)uVar1 <= (int)uVar5) {
            native_System_Array__Copy_95d0dc
                      (*(undefined8 *)(lVar2 + 0x10),uVar1 + 1,*(undefined8 *)(lVar2 + 0x10),uVar1,
                       uVar5 - uVar1,0,in_x6,in_x7,unaff_x20,unaff_x19,unaff_x29,unaff_x30);
            uVar5 = *(uint *)(lVar2 + 0x18);
          }
          lVar6 = *(long *)(lVar2 + 0x10);
          if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
            native_sub_432810();
          }
          if (*(uint *)(lVar6 + 0x18) <= uVar5) {
            uVar4 = native_sub_43283c();
                    /* WARNING: Subroutine does not return */
            native_sub_4327dc(uVar4,0);
          }
          puVar3 = (undefined8 *)(lVar6 + (long)(int)uVar5 * 8 + 0x20);
          *puVar3 = 0;
          native_sub_4326e0(puVar3,0);
          *(int *)(lVar2 + 0x1c) = *(int *)(lVar2 + 0x1c) + 1;
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* UIPopupList$$TriggerCallbacks @ 0xc26fa0
 * void UIPopupList__TriggerCallbacks (UIPopupList_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIPopupList$$TriggerCallbacks
   void UIPopupList__TriggerCallbacks (UIPopupList_o* __this, const MethodInfo* method); */

void native_UIPopupList__TriggerCallbacks_c26fa0(long param_1)

{
  long *plVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  
  if ((bRam00000000013426e4 & 1) == 0) {
    native_sub_43273c(&EventDelegate_TypeInfo_12d4590);
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    native_sub_43273c(&UIPopupList_TypeInfo_12d6490);
    bRam00000000013426e4 = 1;
  }
  if (*(char *)(param_1 + 0x158) == '\0') {
    *(undefined1 *)(param_1 + 0x158) = 1;
    if (((*(byte *)(_UIPopupList_TypeInfo_12d6490 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UIPopupList_TypeInfo_12d6490 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    plVar1 = *(long **)(_UIPopupList_TypeInfo_12d6490 + 0xb8);
    lVar4 = *plVar1;
    *plVar1 = param_1;
    native_sub_4326e0(plVar1,param_1);
    if (*(long *)(param_1 + 0x150) != 0) {
      native_UIPopupList_LegacyEvent__Invoke_5588cc
                (*(long *)(param_1 + 0x150),*(undefined8 *)(param_1 + 0xd8),0);
    }
    uVar5 = *(undefined8 *)(param_1 + 0xd0);
    if (((*(byte *)(_EventDelegate_TypeInfo_12d4590 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_EventDelegate_TypeInfo_12d4590 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    uVar2 = native_EventDelegate__IsValid_deef08(uVar5,0);
    if ((uVar2 & 1) == 0) {
      uVar5 = *(undefined8 *)(param_1 + 0x120);
      if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
        native_sub_4327ec();
      }
      uVar2 = native_UnityEngine_Object__op_Inequality_8d76fc(uVar5,0,0);
      if (((uVar2 & 1) != 0) &&
         (uVar2 = native_System_String__IsNullOrEmpty_b09430(*(undefined8 *)(param_1 + 0x128),0),
         (uVar2 & 1) == 0)) {
        if (*(long *)(param_1 + 0x120) == 0) {
                    /* WARNING: Subroutine does not return */
          native_sub_432810();
        }
        native_UnityEngine_GameObject__SendMessage_8de4c0
                  (*(long *)(param_1 + 0x120),*(undefined8 *)(param_1 + 0x128),
                   *(undefined8 *)(param_1 + 0xd8),1,0);
      }
    }
    else {
      uVar5 = *(undefined8 *)(param_1 + 0xd0);
      if (((*(byte *)(_EventDelegate_TypeInfo_12d4590 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_EventDelegate_TypeInfo_12d4590 + 0xe0) == 0)) {
        native_sub_4327ec();
      }
      native_EventDelegate__Execute_deecbc(uVar5,0);
    }
    lVar3 = native_UIPopupList__get_callback_c26794(param_1);
    if (lVar3 != 0) {
      native_System_Action__Invoke_95658c(lVar3,0);
    }
    if (((*(byte *)(_UIPopupList_TypeInfo_12d6490 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UIPopupList_TypeInfo_12d6490 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    plVar1 = *(long **)(_UIPopupList_TypeInfo_12d6490 + 0xb8);
    *plVar1 = lVar4;
    native_sub_4326e0(plVar1,lVar4);
    *(undefined1 *)(param_1 + 0x158) = 0;
  }
  return;
}



/* UIPopupList$$OnEnable @ 0xc27630
 * void UIPopupList__OnEnable (UIPopupList_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIPopupList$$OnEnable
   void UIPopupList__OnEnable (UIPopupList_o* __this, const MethodInfo* method); */

void native_UIPopupList__OnEnable_c27630(long param_1)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  undefined4 uVar5;
  ulong uVar6;
  long *plVar7;
  undefined8 *puVar8;
  long lVar9;
  int *piVar10;
  undefined8 uVar11;
  
  if ((bRam00000000013426e5 & 1) == 0) {
    native_sub_43273c(&EventDelegate_TypeInfo_12d4590);
    native_sub_43273c(&INGUIFont_TypeInfo_12d4c70);
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    bRam00000000013426e5 = 1;
  }
  uVar11 = *(undefined8 *)(param_1 + 0xd0);
  if (((*(byte *)(_EventDelegate_TypeInfo_12d4590 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_EventDelegate_TypeInfo_12d4590 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar6 = native_EventDelegate__IsValid_deef08(uVar11,0);
  if ((uVar6 & 1) != 0) {
    *(undefined8 *)(param_1 + 0x120) = 0;
    native_sub_4326e0(param_1 + 0x120,0);
    *(undefined8 *)(param_1 + 0x128) = 0;
    native_sub_4326e0(param_1 + 0x128,0);
  }
  plVar7 = (long *)native_UIPopupList__get_font_c2612c(param_1);
  if (*(float *)(param_1 + 0x130) != 0.0) {
    if (plVar7 == (long *)0x0) {
      uVar5 = 0x10;
    }
    else {
      lVar9 = *plVar7;
      if ((ulong)*(ushort *)(lVar9 + 0x12a) != 0) {
        uVar6 = 0;
        piVar10 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
        do {
          if (*(long *)(piVar10 + -2) == _INGUIFont_TypeInfo_12d4c70) {
            puVar8 = (undefined8 *)(lVar9 + (long)(*piVar10 + 0x19) * 0x10 + 0x138);
            goto LAB_00c27760;
          }
          uVar6 = uVar6 + 1;
          piVar10 = piVar10 + 4;
        } while (uVar6 < *(ushort *)(lVar9 + 0x12a));
      }
      puVar8 = (undefined8 *)native_sub_3c9b34(plVar7,_INGUIFont_TypeInfo_12d4c70,0x19);
LAB_00c27760:
      iVar4 = (*(code *)*puVar8)(plVar7,puVar8[1]);
      uVar5 = native_UnityEngine_Mathf__RoundToInt_8e50f0
                        (*(float *)(param_1 + 0x130) * (float)iVar4,0);
      if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
        native_sub_432810();
      }
    }
    *(undefined4 *)(param_1 + 0x30) = uVar5;
    *(undefined4 *)(param_1 + 0x130) = 0;
  }
  uVar11 = *(undefined8 *)(param_1 + 0x28);
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar6 = native_UnityEngine_Object__op_Equality_8e9a3c(uVar11,0,0);
  if ((plVar7 != (long *)0x0) && ((uVar6 & 1) != 0)) {
    lVar9 = *plVar7;
    if ((ulong)*(ushort *)(lVar9 + 0x12a) != 0) {
      uVar6 = 0;
      piVar10 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == _INGUIFont_TypeInfo_12d4c70) {
          puVar8 = (undefined8 *)(lVar9 + (long)(*piVar10 + 0x21) * 0x10 + 0x138);
          goto LAB_00c2782c;
        }
        uVar6 = uVar6 + 1;
        piVar10 = piVar10 + 4;
      } while (uVar6 < *(ushort *)(lVar9 + 0x12a));
    }
    puVar8 = (undefined8 *)native_sub_3c9b34(plVar7,_INGUIFont_TypeInfo_12d4c70,0x21);
LAB_00c2782c:
    uVar6 = (*(code *)*puVar8)(plVar7,puVar8[1]);
    if ((uVar6 & 1) != 0) {
      lVar9 = *plVar7;
      if ((ulong)*(ushort *)(lVar9 + 0x12a) != 0) {
        uVar6 = 0;
        piVar10 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
        do {
          if (*(long *)(piVar10 + -2) == _INGUIFont_TypeInfo_12d4c70) {
            puVar8 = (undefined8 *)(lVar9 + (long)(*piVar10 + 0x1e) * 0x10 + 0x138);
            goto LAB_00c27894;
          }
          uVar6 = uVar6 + 1;
          piVar10 = piVar10 + 4;
        } while (uVar6 < *(ushort *)(lVar9 + 0x12a));
      }
      puVar8 = (undefined8 *)native_sub_3c9b34(plVar7,_INGUIFont_TypeInfo_12d4c70,0x1e);
LAB_00c27894:
      lVar9 = (*(code *)*puVar8)(plVar7,puVar8[1]);
      if (lVar9 == 0) {
        lVar9 = *plVar7;
        if ((ulong)*(ushort *)(lVar9 + 0x12a) != 0) {
          uVar6 = 0;
          piVar10 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
          do {
            if (*(long *)(piVar10 + -2) == _INGUIFont_TypeInfo_12d4c70) {
              puVar8 = (undefined8 *)(lVar9 + (long)(*piVar10 + 0x22) * 0x10 + 0x138);
              goto native_sub_41086c;
            }
            uVar6 = uVar6 + 1;
            piVar10 = piVar10 + 4;
          } while (uVar6 < *(ushort *)(lVar9 + 0x12a));
        }
        puVar8 = (undefined8 *)native_sub_3c9b34(plVar7,_INGUIFont_TypeInfo_12d4c70,0x22);
native_sub_41086c:
        uVar11 = (*(code *)*puVar8)(plVar7,puVar8[1]);
        *(undefined8 *)(param_1 + 0x28) = uVar11;
        native_sub_4326e0((undefined8 *)(param_1 + 0x28),uVar11);
        puVar8 = (undefined8 *)(param_1 + 0x20);
        *puVar8 = 0;
        if (iRam0000000001345318 != 0) {
          puVar1 = (ulong *)(((ulong)puVar8 >> 0x12 & 0x7fff) * 8 + 0x138ecd8);
          do {
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
            if (bVar3) {
              *puVar1 = *puVar1 | 1L << ((ulong)puVar8 >> 0xc & 0x3f);
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
        }
        return;
      }
    }
  }
  return;
}



/* UIPopupList$$Start @ 0xc27948
 * void UIPopupList__Start (UIPopupList_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIPopupList$$Start
   void UIPopupList__Start (UIPopupList_o* __this, const MethodInfo* method); */

void native_UIPopupList__Start_c27948(long *param_1)

{
  long *plVar1;
  ulong *puVar2;
  char cVar3;
  bool bVar4;
  ulong uVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  
  if ((bRam00000000013426e6 & 1) == 0) {
    native_sub_43273c(&EventDelegate_Callback_TypeInfo_12d72e8);
    native_sub_43273c(&EventDelegate_TypeInfo_12d4590);
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    native_sub_43273c(&Method_UILabel_SetCurrentSelection___12e7840);
    bRam00000000013426e6 = 1;
  }
  if (*(char *)((long)param_1 + 0x159) == '\0') {
    plVar1 = param_1 + 0x1b;
    *(undefined1 *)((long)param_1 + 0x159) = 1;
    if (*(char *)((long)param_1 + 0x10c) == '\0') {
      *plVar1 = 0;
      native_sub_4326e0(plVar1,0);
    }
    else {
      lVar7 = param_1[0x1b];
      param_1[0x1b] = 0;
      native_sub_4326e0(plVar1,0);
      (**(code **)(*param_1 + 0x188))(param_1,lVar7,*(undefined8 *)(*param_1 + 400));
    }
    lVar7 = param_1[0x27];
    if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    uVar5 = native_UnityEngine_Object__op_Inequality_8d76fc(lVar7,0,0);
    if ((uVar5 & 1) != 0) {
      lVar7 = param_1[0x1a];
      lVar8 = param_1[0x27];
      param_1 = param_1 + 0x27;
      uVar6 = native_sub_432808(_EventDelegate_Callback_TypeInfo_12d72e8);
      native_EventDelegate_Callback___ctor_54bd18
                (uVar6,lVar8,_Method_UILabel_SetCurrentSelection___12e7840,0);
      if (((*(byte *)(_EventDelegate_TypeInfo_12d4590 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_EventDelegate_TypeInfo_12d4590 + 0xe0) == 0)) {
        native_sub_4327ec();
      }
      native_EventDelegate__Add_def10c(lVar7,uVar6,0);
      *param_1 = 0;
      if (iRam0000000001345318 != 0) {
        puVar2 = (ulong *)(((ulong)param_1 >> 0x12 & 0x7fff) * 8 + 0x138ecd8);
        do {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(puVar2,0x10);
          if (bVar4) {
            *puVar2 = *puVar2 | 1L << ((ulong)param_1 >> 0xc & 0x3f);
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
      }
      return;
    }
  }
  return;
}



/* UIPopupList$$OnLocalize @ 0xc27abc
 * void UIPopupList__OnLocalize (UIPopupList_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIPopupList$$OnLocalize
   void UIPopupList__OnLocalize (UIPopupList_o* __this, const MethodInfo* method); */

void native_UIPopupList__OnLocalize_c27abc(long param_1)

{
  long *plVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  
  if (*(char *)(param_1 + 0xb9) == '\0') {
    return;
  }
  if ((bRam00000000013426e4 & 1) == 0) {
    native_sub_43273c(&EventDelegate_TypeInfo_12d4590);
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    native_sub_43273c(&UIPopupList_TypeInfo_12d6490);
    bRam00000000013426e4 = 1;
  }
  if (*(char *)(param_1 + 0x158) == '\0') {
    *(undefined1 *)(param_1 + 0x158) = 1;
    if (((*(byte *)(_UIPopupList_TypeInfo_12d6490 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UIPopupList_TypeInfo_12d6490 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    plVar1 = *(long **)(_UIPopupList_TypeInfo_12d6490 + 0xb8);
    lVar4 = *plVar1;
    *plVar1 = param_1;
    native_sub_4326e0(plVar1,param_1);
    if (*(long *)(param_1 + 0x150) != 0) {
      native_UIPopupList_LegacyEvent__Invoke_5588cc
                (*(long *)(param_1 + 0x150),*(undefined8 *)(param_1 + 0xd8),0);
    }
    uVar5 = *(undefined8 *)(param_1 + 0xd0);
    if (((*(byte *)(_EventDelegate_TypeInfo_12d4590 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_EventDelegate_TypeInfo_12d4590 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    uVar2 = native_EventDelegate__IsValid_deef08(uVar5,0);
    if ((uVar2 & 1) == 0) {
      uVar5 = *(undefined8 *)(param_1 + 0x120);
      if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
        native_sub_4327ec();
      }
      uVar2 = native_UnityEngine_Object__op_Inequality_8d76fc(uVar5,0,0);
      if (((uVar2 & 1) != 0) &&
         (uVar2 = native_System_String__IsNullOrEmpty_b09430(*(undefined8 *)(param_1 + 0x128),0),
         (uVar2 & 1) == 0)) {
        if (*(long *)(param_1 + 0x120) == 0) {
                    /* WARNING: Subroutine does not return */
          native_sub_432810();
        }
        native_UnityEngine_GameObject__SendMessage_8de4c0
                  (*(long *)(param_1 + 0x120),*(undefined8 *)(param_1 + 0x128),
                   *(undefined8 *)(param_1 + 0xd8),1,0);
      }
    }
    else {
      uVar5 = *(undefined8 *)(param_1 + 0xd0);
      if (((*(byte *)(_EventDelegate_TypeInfo_12d4590 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_EventDelegate_TypeInfo_12d4590 + 0xe0) == 0)) {
        native_sub_4327ec();
      }
      native_EventDelegate__Execute_deecbc(uVar5,0);
    }
    lVar3 = native_UIPopupList__get_callback_c26794(param_1);
    if (lVar3 != 0) {
      native_System_Action__Invoke_95658c(lVar3,0);
    }
    if (((*(byte *)(_UIPopupList_TypeInfo_12d6490 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UIPopupList_TypeInfo_12d6490 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    plVar1 = *(long **)(_UIPopupList_TypeInfo_12d6490 + 0xb8);
    *plVar1 = lVar4;
    native_sub_4326e0(plVar1,lVar4);
    *(undefined1 *)(param_1 + 0x158) = 0;
  }
  return;
}



/* UIPopupList$$Highlight @ 0xc27acc
 * void UIPopupList__Highlight (UIPopupList_o* __this, UILabel_o* lbl, bool instant, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIPopupList$$Highlight
   void UIPopupList__Highlight (UIPopupList_o* __this, UILabel_o* lbl, bool instant, const
   MethodInfo* method); */

void native_UIPopupList__Highlight_c27acc
               (undefined1 param_1 [16],undefined8 param_2,undefined8 param_3,long *param_4,
               long param_5,ulong param_6)

{
  ulong uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  
  if ((bRam00000000013426e7 & 1) == 0) {
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    native_sub_43273c(&StringLiteral_UpdateTweenPosition_12f2d08);
    bRam00000000013426e7 = 1;
  }
  lVar3 = param_4[0x1e];
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar1 = native_UnityEngine_Object__op_Inequality_8d76fc(lVar3,0,0);
  if ((uVar1 & 1) == 0) {
    return;
  }
  param_4[0x1f] = param_5;
  native_sub_4326e0(param_4 + 0x1f,param_5);
  uVar4 = (**(code **)(*param_4 + 0x248))(param_4,*(undefined8 *)(*param_4 + 0x250));
  if (((param_6 & 1) == 0) && ((char)param_4[0x17] != '\0')) {
    if (param_4[0x1e] != 0) {
      uVar2 = native_UnityEngine_Component__get_gameObject_8da66c(param_4[0x1e],0);
      lVar3 = native_TweenPosition__Begin_6e5c14(0x3dcccccd,uVar4,param_2,param_3,uVar2,0);
      if (lVar3 != 0) {
        *(undefined4 *)(lVar3 + 0x18) = 2;
        if (*(char *)((long)param_4 + 0x15a) != '\0') {
          return;
        }
        *(undefined1 *)((long)param_4 + 0x15a) = 1;
        uVar4 = _StringLiteral_UpdateTweenPosition_12f2d08;
        uVar1 = native_System_String__IsNullOrEmpty_b09430
                          (_StringLiteral_UpdateTweenPosition_12f2d08,0);
        if ((uVar1 & 1) == 0) {
          if (pcRam0000000001340fe8 == (code *)0x0) {
            pcRam0000000001340fe8 = (code *)native_sub_4326f0(&UNK_00e2f589);
          }
          uVar1 = (*pcRam0000000001340fe8)(param_4);
          if ((uVar1 & 1) != 0) {
            if (pcRam0000000001340ff0 == (code *)0x0) {
              pcRam0000000001340ff0 = (code *)native_sub_4326f0(&UNK_00e2f5ce);
            }
                    /* WARNING: Could not recover jumptable at 0x008e905c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (*pcRam0000000001340ff0)(param_4,uVar4,0);
            return;
          }
          native_sub_432740(&System_ArgumentException_TypeInfo_12d3800);
          uVar2 = native_sub_432808();
          uVar4 = native_sub_432740(&
                                    StringLiteral_Coroutines_can_only_be_stopped_on_a_MonoBehaviour_12ed328
                                   );
          native_System_ArgumentException___ctor_953858(uVar2,uVar4,0);
        }
        else {
          native_sub_432740(&System_NullReferenceException_TypeInfo_12d5498);
          uVar2 = native_sub_432808();
          uVar4 = native_sub_432740(&StringLiteral_methodName_is_null_or_empty_12f5698);
          native_System_NullReferenceException___ctor_ad2894(uVar2,uVar4,0);
        }
        uVar4 = native_sub_432740(&Method_UnityEngine_MonoBehaviour_StartCoroutine___12e55e0);
                    /* WARNING: Subroutine does not return */
        native_sub_4327dc(uVar2,uVar4);
      }
    }
  }
  else if ((param_4[0x1e] != 0) && (lVar3 = native_UIRect__get_cachedTransform_c27c58(), lVar3 != 0)
          ) {
    if (pcRam000000000133fee8 == (code *)0x0) {
      pcRam000000000133fee8 = (code *)native_sub_4326f0(&UNK_00e2ada3,0);
    }
    (*pcRam000000000133fee8)(lVar3,&stack0xffffffffffffffd0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* UIPopupList$$GetHighlightPosition @ 0xc27cf8
 * UnityEngine_Vector3_o UIPopupList__GetHighlightPosition (UIPopupList_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIPopupList$$GetHighlightPosition
   UnityEngine_Vector3_o UIPopupList__GetHighlightPosition (UIPopupList_o* __this, const MethodInfo*
   method); */

undefined1  [16] native_UIPopupList__GetHighlightPosition_c27cf8(long param_1)

{
  ulong uVar1;
  long *plVar2;
  undefined8 *puVar3;
  long lVar4;
  int *piVar5;
  undefined8 uVar6;
  float extraout_s0;
  float fVar7;
  float fVar8;
  float fVar9;
  undefined4 extraout_var;
  undefined4 uVar11;
  undefined8 extraout_var_00;
  undefined1 auVar10 [16];
  
  if ((bRam00000000013426e8 & 1) == 0) {
    native_sub_43273c(&INGUIAtlas_TypeInfo_12d4c68);
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    bRam00000000013426e8 = 1;
  }
  uVar6 = *(undefined8 *)(param_1 + 0xf8);
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar1 = native_UnityEngine_Object__op_Equality_8e9a3c(uVar6,0,0);
  if ((uVar1 & 1) == 0) {
    uVar6 = *(undefined8 *)(param_1 + 0xf0);
    if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    uVar1 = native_UnityEngine_Object__op_Equality_8e9a3c(uVar6,0,0);
    if ((uVar1 & 1) == 0) {
      plVar2 = *(long **)(param_1 + 0xf0);
      if (plVar2 == (long *)0x0) {
LAB_00c27ea8:
                    /* WARNING: Subroutine does not return */
        native_sub_432810();
      }
      fVar7 = (float)(**(code **)(*plVar2 + 0x3d8))(plVar2,*(undefined8 *)(*plVar2 + 0x3e0));
      plVar2 = (long *)native_sub_4327f8(*(undefined8 *)(param_1 + 0x18),
                                         _INGUIAtlas_TypeInfo_12d4c68);
      if (plVar2 == (long *)0x0) {
        fVar8 = 1.0;
      }
      else {
        lVar4 = *plVar2;
        if ((ulong)*(ushort *)(lVar4 + 0x12a) != 0) {
          uVar1 = 0;
          piVar5 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
          do {
            if (*(long *)(piVar5 + -2) == _INGUIAtlas_TypeInfo_12d4c68) {
              puVar3 = (undefined8 *)(lVar4 + (long)(*piVar5 + 5) * 0x10 + 0x138);
              goto LAB_00c27e50;
            }
            uVar1 = uVar1 + 1;
            piVar5 = piVar5 + 4;
          } while (uVar1 < *(ushort *)(lVar4 + 0x12a));
        }
        puVar3 = (undefined8 *)native_sub_3c9b34(plVar2,_INGUIAtlas_TypeInfo_12d4c68,5);
LAB_00c27e50:
        fVar8 = (float)(*(code *)*puVar3)(plVar2,puVar3[1]);
      }
      if ((*(long *)(param_1 + 0xf8) == 0) ||
         (lVar4 = native_UIRect__get_cachedTransform_c27c58(), lVar4 == 0)) goto LAB_00c27ea8;
      fVar9 = (float)native_UnityEngine_Transform__get_localPosition_7717f4(lVar4,0);
      fVar9 = fVar9 - fVar7 * fVar8;
      uVar11 = 0;
      uVar6 = 0;
      goto LAB_00c27e90;
    }
  }
  native_UnityEngine_Vector3__get_zero_776668(0);
  fVar9 = extraout_s0;
  uVar11 = extraout_var;
  uVar6 = extraout_var_00;
LAB_00c27e90:
  auVar10._4_4_ = uVar11;
  auVar10._0_4_ = fVar9;
  auVar10._8_8_ = uVar6;
  return auVar10;
}



/* UIPopupList$$UpdateTweenPosition @ 0xc27eac
 * System_Collections_IEnumerator_o* UIPopupList__UpdateTweenPosition (UIPopupList_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIPopupList$$UpdateTweenPosition
   System_Collections_IEnumerator_o* UIPopupList__UpdateTweenPosition (UIPopupList_o* __this, const
   MethodInfo* method); */

long native_UIPopupList__UpdateTweenPosition_c27eac(undefined8 param_1)

{
  long lVar1;
  
  if ((bRam00000000013426e9 & 1) == 0) {
    native_sub_43273c(&UIPopupList__UpdateTweenPosition_d__95_TypeInfo_12d7a80);
    bRam00000000013426e9 = 1;
  }
  lVar1 = native_sub_432808(_UIPopupList__UpdateTweenPosition_d__95_TypeInfo_12d7a80);
  native_UIPopupList__UpdateTweenPosition_d__95___ctor_558614(lVar1,0,0);
  if (lVar1 != 0) {
    *(undefined8 *)(lVar1 + 0x20) = param_1;
    native_sub_4326e0((undefined8 *)(lVar1 + 0x20),param_1);
    return lVar1;
  }
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* UIPopupList$$OnItemHover @ 0xc27f24
 * void UIPopupList__OnItemHover (UIPopupList_o* __this, UnityEngine_GameObject_o* go, bool isOver, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIPopupList$$OnItemHover
   void UIPopupList__OnItemHover (UIPopupList_o* __this, UnityEngine_GameObject_o* go, bool isOver,
   const MethodInfo* method); */

void native_UIPopupList__OnItemHover_c27f24(long *param_1,long param_2,ulong param_3)

{
  undefined8 uVar1;
  
  if ((bRam00000000013426ea & 1) == 0) {
    native_sub_43273c(&Method_UnityEngine_GameObject_GetComponent_UILabel____12e4ac0);
    bRam00000000013426ea = 1;
  }
  if ((param_3 & 1) != 0) {
    if (param_2 != 0) {
      uVar1 = native_UnityEngine_GameObject__GetComponent_BE2_BlockSectionHeader_Custom__4a2214
                        (param_2,_Method_UnityEngine_GameObject_GetComponent_UILabel____12e4ac0);
                    /* WARNING: Could not recover jumptable at 0x00c27fa0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x238))(param_1,uVar1,0,*(undefined8 *)(*param_1 + 0x240));
      return;
    }
                    /* WARNING: Subroutine does not return */
    native_sub_432810();
  }
  return;
}



/* UIPopupList$$OnItemPress @ 0xc27fb8
 * void UIPopupList__OnItemPress (UIPopupList_o* __this, UnityEngine_GameObject_o* go, bool isPressed, const MethodInfo* method); */

/* UIPopupList$$OnItemPress
   void UIPopupList__OnItemPress (UIPopupList_o* __this, UnityEngine_GameObject_o* go, bool
   isPressed, const MethodInfo* method); */

void native_UIPopupList__OnItemPress_c27fb8(long *param_1,undefined8 param_2,ulong param_3)

{
  if (((param_3 & 1) != 0) && (*(int *)((long)param_1 + 0x5c) == 0)) {
                    /* WARNING: Could not recover jumptable at 0x00c27fd4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x288))(param_1,param_2,*(undefined8 *)(*param_1 + 0x290));
    return;
  }
  return;
}



/* UIPopupList$$OnItemClick @ 0xc27fd8
 * void UIPopupList__OnItemClick (UIPopupList_o* __this, UnityEngine_GameObject_o* go, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIPopupList$$OnItemClick
   void UIPopupList__OnItemClick (UIPopupList_o* __this, UnityEngine_GameObject_o* go, const
   MethodInfo* method); */

void native_UIPopupList__OnItemClick_c27fd8(long *param_1,long param_2)

{
  undefined8 uVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  int iVar5;
  uint uVar6;
  undefined4 uVar7;
  
  if ((bRam00000000013426eb & 1) == 0) {
    native_sub_43273c(&Method_UnityEngine_Component_GetComponents_UIPlaySound____12e2db0);
    native_sub_43273c(&Method_UnityEngine_GameObject_GetComponent_UIEventListener____12e4aa0);
    native_sub_43273c(&Method_UnityEngine_GameObject_GetComponent_UILabel____12e4ac0);
    native_sub_43273c(&NGUITools_TypeInfo_12d53c8);
    native_sub_43273c(&string_TypeInfo_12d5f28);
    bRam00000000013426eb = 1;
  }
  if (param_2 != 0) {
    uVar1 = native_UnityEngine_GameObject__GetComponent_BE2_BlockSectionHeader_Custom__4a2214
                      (param_2,_Method_UnityEngine_GameObject_GetComponent_UILabel____12e4ac0);
    (**(code **)(*param_1 + 0x238))(param_1,uVar1,1,*(undefined8 *)(*param_1 + 0x240));
    lVar2 = native_UnityEngine_GameObject__GetComponent_BE2_BlockSectionHeader_Custom__4a2214
                      (param_2,
                       _Method_UnityEngine_GameObject_GetComponent_UIEventListener____12e4aa0);
    if (lVar2 != 0) {
      plVar3 = *(long **)(lVar2 + 0x18);
      if (plVar3 == (long *)0x0) {
        plVar3 = (long *)0x0;
      }
      else if (*plVar3 != _string_TypeInfo_12d5f28) {
        plVar3 = (long *)0x0;
      }
      (**(code **)(*param_1 + 0x188))(param_1,plVar3,*(undefined8 *)(*param_1 + 400));
      lVar2 = native_UnityEngine_Component__GetComponents_BaseInput__49dd48
                        (param_1,_Method_UnityEngine_Component_GetComponents_UIPlaySound____12e2db0)
      ;
      if (lVar2 != 0) {
        iVar5 = (int)*(undefined8 *)(lVar2 + 0x18);
        if (iVar5 < 1) {
LAB_00c28174:
                    /* WARNING: Could not recover jumptable at 0x00c28198. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(*param_1 + 0x2d8))(param_1,*(undefined8 *)(*param_1 + 0x2e0));
          return;
        }
        if (iVar5 != 0) {
          uVar6 = 0;
          do {
            lVar4 = *(long *)(lVar2 + (long)(int)uVar6 * 8 + 0x20);
            if (lVar4 == 0) goto LAB_00c2819c;
            if (*(int *)(lVar4 + 0x20) == 0) {
              uVar1 = *(undefined8 *)(lVar4 + 0x18);
              uVar7 = *(undefined4 *)(lVar4 + 0x24);
              if (((*(byte *)(_NGUITools_TypeInfo_12d53c8 + 0x133) >> 2 & 1) != 0) &&
                 (*(int *)(_NGUITools_TypeInfo_12d53c8 + 0xe0) == 0)) {
                native_sub_4327ec();
              }
              native_NGUITools__PlaySound_72c7dc(uVar7,0x3f800000,uVar1,0);
            }
            uVar6 = uVar6 + 1;
            if (iVar5 <= (int)uVar6) goto LAB_00c28174;
          } while (uVar6 < *(uint *)(lVar2 + 0x18));
        }
        uVar1 = native_sub_43283c();
                    /* WARNING: Subroutine does not return */
        native_sub_4327dc(uVar1,0);
      }
    }
  }
LAB_00c2819c:
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* UIPopupList$$Select @ 0xc281a0
 * void UIPopupList__Select (UIPopupList_o* __this, UILabel_o* lbl, bool instant, const MethodInfo* method); */

/* UIPopupList$$Select
   void UIPopupList__Select (UIPopupList_o* __this, UILabel_o* lbl, bool instant, const MethodInfo*
   method); */

void native_UIPopupList__Select_c281a0(long *param_1,undefined8 param_2,uint param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00c281b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x238))(param_1,param_2,param_3 & 1,*(undefined8 *)(*param_1 + 0x240));
  return;
}



/* UIPopupList$$OnNavigate @ 0xc281b4
 * void UIPopupList__OnNavigate (UIPopupList_o* __this, int32_t key, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIPopupList$$OnNavigate
   void UIPopupList__OnNavigate (UIPopupList_o* __this, int32_t key, const MethodInfo* method); */

void native_UIPopupList__OnNavigate_c281b4(long *param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  ulong uVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  
  if ((bRam00000000013426ec & 1) == 0) {
    native_sub_43273c(&Method_System_Collections_Generic_List_UILabel__IndexOf___12dd318);
    native_sub_43273c(&Method_System_Collections_Generic_List_UILabel__get_Count___12dd320);
    native_sub_43273c(&Method_System_Collections_Generic_List_UILabel__get_Item___12dd328);
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    native_sub_43273c(&UIPopupList_TypeInfo_12d6490);
    bRam00000000013426ec = 1;
  }
  uVar4 = native_UnityEngine_Behaviour__get_enabled_8d7acc(param_1,0);
  if ((uVar4 & 1) != 0) {
    if (((*(byte *)(_UIPopupList_TypeInfo_12d6490 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UIPopupList_TypeInfo_12d6490 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    uVar6 = **(undefined8 **)(_UIPopupList_TypeInfo_12d6490 + 0xb8);
    if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
      native_sub_4327ec(_UnityEngine_Object_TypeInfo_12d54e0);
    }
    uVar4 = native_UnityEngine_Object__op_Equality_8e9a3c(uVar6,param_1,0);
    if ((uVar4 & 1) != 0) {
      if (param_1[0x20] != 0) {
        iVar3 = native_System_Collections_Generic_List_EventSystem___IndexOf_d41640
                          (param_1[0x20],param_1[0x1f],
                           _Method_System_Collections_Generic_List_UILabel__IndexOf___12dd318);
        iVar2 = 0;
        if (iVar3 != -1) {
          iVar2 = iVar3;
        }
        if (param_2 == 0x112) {
          lVar7 = param_1[0x20];
          if (lVar7 != 0) {
            uVar1 = iVar2 + 1;
            if ((int)*(uint *)(lVar7 + 0x18) <= (int)uVar1) {
              return;
            }
            if (*(uint *)(lVar7 + 0x18) <= uVar1) {
              native_System_ThrowHelper__ThrowArgumentOutOfRangeException_9fe0f4(0);
            }
            lVar5 = *param_1;
            lVar7 = *(long *)(lVar7 + 0x10) + (long)(int)uVar1 * 8;
            goto LAB_00c2832c;
          }
        }
        else {
          if (param_2 != 0x111) {
            return;
          }
          if (iVar2 < 1) {
            return;
          }
          lVar7 = param_1[0x20];
          if (lVar7 != 0) {
            if (*(uint *)(lVar7 + 0x18) <= iVar2 - 1U) {
              native_System_ThrowHelper__ThrowArgumentOutOfRangeException_9fe0f4(0);
            }
            lVar5 = *param_1;
            lVar7 = *(long *)(lVar7 + 0x10) + (long)(int)(iVar2 - 1U) * 8;
LAB_00c2832c:
                    /* WARNING: Could not recover jumptable at 0x00c2834c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (**(code **)(lVar5 + 0x238))
                      (param_1,*(undefined8 *)(lVar7 + 0x20),0,*(undefined8 *)(lVar5 + 0x240));
            return;
          }
        }
      }
                    /* WARNING: Subroutine does not return */
      native_sub_432810();
    }
  }
  return;
}



/* UIPopupList$$OnKey @ 0xc28364
 * void UIPopupList__OnKey (UIPopupList_o* __this, int32_t key, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIPopupList$$OnKey
   void UIPopupList__OnKey (UIPopupList_o* __this, int32_t key, const MethodInfo* method); */

void native_UIPopupList__OnKey_c28364(long *param_1,int param_2)

{
  ulong uVar1;
  long lVar2;
  undefined8 uVar3;
  
  if ((bRam00000000013426ed & 1) == 0) {
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    native_sub_43273c(&UICamera_TypeInfo_12d6410);
    native_sub_43273c(&UIPopupList_TypeInfo_12d6490);
    bRam00000000013426ed = 1;
  }
  uVar1 = native_UnityEngine_Behaviour__get_enabled_8d7acc(param_1,0);
  if ((uVar1 & 1) != 0) {
    if (((*(byte *)(_UIPopupList_TypeInfo_12d6490 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UIPopupList_TypeInfo_12d6490 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    uVar3 = **(undefined8 **)(_UIPopupList_TypeInfo_12d6490 + 0xb8);
    if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
      native_sub_4327ec(_UnityEngine_Object_TypeInfo_12d54e0);
    }
    uVar1 = native_UnityEngine_Object__op_Equality_8e9a3c(uVar3,param_1,0);
    if ((uVar1 & 1) != 0) {
      if (((*(byte *)(_UICamera_TypeInfo_12d6410 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
        native_sub_4327ec();
      }
      lVar2 = *(long *)(*(long *)(_UICamera_TypeInfo_12d6410 + 0xb8) + 0xb8);
      if (lVar2 != 0) {
        if (*(int *)(lVar2 + 0x84) != param_2) {
          if (((*(byte *)(_UICamera_TypeInfo_12d6410 + 0x133) >> 2 & 1) != 0) &&
             (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
            native_sub_4327ec();
            lVar2 = *(long *)(*(long *)(_UICamera_TypeInfo_12d6410 + 0xb8) + 0xb8);
            if (lVar2 == 0) goto LAB_00c284c8;
          }
          if (*(int *)(lVar2 + 0x88) != param_2) {
            return;
          }
        }
                    /* WARNING: Could not recover jumptable at 0x00c284b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*param_1 + 0x2c8))(param_1,0,*(undefined8 *)(*param_1 + 0x2d0));
        return;
      }
LAB_00c284c8:
                    /* WARNING: Subroutine does not return */
      native_sub_432810();
    }
  }
  return;
}



/* UIPopupList$$OnDisable @ 0xc284cc
 * void UIPopupList__OnDisable (UIPopupList_o* __this, const MethodInfo* method); */

/* UIPopupList$$OnDisable
   void UIPopupList__OnDisable (UIPopupList_o* __this, const MethodInfo* method); */

void native_UIPopupList__OnDisable_c284cc(long *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00c284d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x2d8))(param_1,*(undefined8 *)(*param_1 + 0x2e0));
  return;
}



/* UIPopupList$$OnSelect @ 0xc284dc
 * void UIPopupList__OnSelect (UIPopupList_o* __this, bool isSelected, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIPopupList$$OnSelect
   void UIPopupList__OnSelect (UIPopupList_o* __this, bool isSelected, const MethodInfo* method); */

void native_UIPopupList__OnSelect_c284dc(long *param_1,ulong param_2)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if ((bRam00000000013426ee & 1) == 0) {
    native_sub_43273c(&NGUITools_TypeInfo_12d53c8);
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    native_sub_43273c(&UICamera_TypeInfo_12d6410);
    native_sub_43273c(&UIPopupList_TypeInfo_12d6490);
    bRam00000000013426ee = 1;
  }
  if ((param_2 & 1) != 0) {
    return;
  }
  if (((*(byte *)(_UICamera_TypeInfo_12d6410 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  lVar1 = native_UICamera__get_selectedObject_c9756c(0);
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec(_UnityEngine_Object_TypeInfo_12d54e0);
  }
  uVar2 = native_UnityEngine_Object__op_Equality_8e9a3c(lVar1,0,0);
  if ((uVar2 & 1) == 0) {
    if (((*(byte *)(_UIPopupList_TypeInfo_12d6490 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UIPopupList_TypeInfo_12d6490 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    uVar5 = *(undefined8 *)(*(long *)(_UIPopupList_TypeInfo_12d6490 + 0xb8) + 8);
    if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
      native_sub_4327ec(_UnityEngine_Object_TypeInfo_12d54e0);
    }
    uVar2 = native_UnityEngine_Object__op_Equality_8e9a3c(lVar1,uVar5,0);
    if ((uVar2 & 1) != 0) {
      return;
    }
    if (((*(byte *)(_UIPopupList_TypeInfo_12d6490 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UIPopupList_TypeInfo_12d6490 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    uVar5 = *(undefined8 *)(*(long *)(_UIPopupList_TypeInfo_12d6490 + 0xb8) + 8);
    if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
      native_sub_4327ec(_UnityEngine_Object_TypeInfo_12d54e0);
    }
    uVar2 = native_UnityEngine_Object__op_Inequality_8d76fc(uVar5,0,0);
    if ((uVar2 & 1) != 0) {
      if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
        native_sub_4327ec();
      }
      uVar2 = native_UnityEngine_Object__op_Inequality_8d76fc(lVar1,0,0);
      if ((uVar2 & 1) != 0) {
        if (((*(byte *)(_UIPopupList_TypeInfo_12d6490 + 0x133) >> 2 & 1) != 0) &&
           (*(int *)(_UIPopupList_TypeInfo_12d6490 + 0xe0) == 0)) {
          native_sub_4327ec();
        }
        lVar3 = *(long *)(*(long *)(_UIPopupList_TypeInfo_12d6490 + 0xb8) + 8);
        if ((lVar3 == 0) ||
           (uVar5 = native_UnityEngine_GameObject__get_transform_8de5c8(lVar3,0), lVar1 == 0)) {
                    /* WARNING: Subroutine does not return */
          native_sub_432810();
        }
        uVar4 = native_UnityEngine_GameObject__get_transform_8de5c8(lVar1,0);
        if (((*(byte *)(_NGUITools_TypeInfo_12d53c8 + 0x133) >> 2 & 1) != 0) &&
           (*(int *)(_NGUITools_TypeInfo_12d53c8 + 0xe0) == 0)) {
          native_sub_4327ec(_NGUITools_TypeInfo_12d53c8);
        }
        uVar2 = native_NGUITools__IsChild_730ee8(uVar5,uVar4,0);
        if ((uVar2 & 1) != 0) {
          return;
        }
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00c285d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x2d8))(param_1,*(undefined8 *)(*param_1 + 0x2e0));
  return;
}



/* UIPopupList$$Close @ 0xc28740
 * void UIPopupList__Close (const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIPopupList$$Close
   void UIPopupList__Close (const MethodInfo* method); */

void native_UIPopupList__Close_c28740(void)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  ulong uVar4;
  long *plVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  
  if ((bRam00000000013426ef & 1) == 0) {
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    native_sub_43273c(&UIPopupList_TypeInfo_12d6490);
    bRam00000000013426ef = 1;
  }
  if (((*(byte *)(_UIPopupList_TypeInfo_12d6490 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UIPopupList_TypeInfo_12d6490 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar7 = **(undefined8 **)(_UIPopupList_TypeInfo_12d6490 + 0xb8);
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec(_UnityEngine_Object_TypeInfo_12d54e0);
  }
  uVar4 = native_UnityEngine_Object__op_Inequality_8d76fc(uVar7,0,0);
  if ((uVar4 & 1) != 0) {
    if (((*(byte *)(_UIPopupList_TypeInfo_12d6490 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UIPopupList_TypeInfo_12d6490 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    plVar5 = (long *)**(long **)(_UIPopupList_TypeInfo_12d6490 + 0xb8);
    if (plVar5 != (long *)0x0) {
      (**(code **)(*plVar5 + 0x2d8))(plVar5,*(undefined8 *)(*plVar5 + 0x2e0));
      puVar6 = *(undefined8 **)(_UIPopupList_TypeInfo_12d6490 + 0xb8);
      *puVar6 = 0;
      if (iRam0000000001345318 != 0) {
        puVar1 = (ulong *)(((ulong)puVar6 >> 0x12 & 0x7fff) * 8 + 0x138ecd8);
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar3) {
            *puVar1 = *puVar1 | 1L << ((ulong)puVar6 >> 0xc & 0x3f);
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      return;
    }
                    /* WARNING: Subroutine does not return */
    native_sub_432810();
  }
  return;
}



/* UIPopupList$$CloseSelf @ 0xc28840
 * void UIPopupList__CloseSelf (UIPopupList_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIPopupList$$CloseSelf
   void UIPopupList__CloseSelf (UIPopupList_o* __this, const MethodInfo* method); */

void native_UIPopupList__CloseSelf_c28840(long param_1)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  int iVar9;
  uint uVar10;
  float fVar11;
  float fVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  
  if ((bRam00000000013426f0 & 1) == 0) {
    native_sub_43273c(&Method_UnityEngine_GameObject_GetComponentsInChildren_Collider____12e4b50);
    native_sub_43273c(&Method_UnityEngine_GameObject_GetComponentsInChildren_UIWidget____12e4b88);
    native_sub_43273c(&Method_System_Collections_Generic_List_UILabel__Clear___12dd310);
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    native_sub_43273c(&UIPopupList_TypeInfo_12d6490);
    native_sub_43273c(&StringLiteral_CloseIfUnselected_12ed0d8);
    bRam00000000013426f0 = 1;
  }
  if (((*(byte *)(_UIPopupList_TypeInfo_12d6490 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UIPopupList_TypeInfo_12d6490 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar8 = *(undefined8 *)(*(long *)(_UIPopupList_TypeInfo_12d6490 + 0xb8) + 8);
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec(_UnityEngine_Object_TypeInfo_12d54e0);
  }
  uVar4 = native_UnityEngine_Object__op_Inequality_8d76fc(uVar8,0,0);
  if ((uVar4 & 1) != 0) {
    if (((*(byte *)(_UIPopupList_TypeInfo_12d6490 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UIPopupList_TypeInfo_12d6490 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    uVar8 = **(undefined8 **)(_UIPopupList_TypeInfo_12d6490 + 0xb8);
    if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
      native_sub_4327ec(_UnityEngine_Object_TypeInfo_12d54e0);
    }
    uVar4 = native_UnityEngine_Object__op_Equality_8e9a3c(uVar8,param_1,0);
    if ((uVar4 & 1) != 0) {
      native_UnityEngine_MonoBehaviour__StopCoroutine_8e955c
                (param_1,_StringLiteral_CloseIfUnselected_12ed0d8,0);
      *(undefined8 *)(param_1 + 0x110) = 0;
      native_sub_4326e0(param_1 + 0x110,0);
      if (*(long *)(param_1 + 0x100) != 0) {
        native_System_Collections_Generic_List_Action___Clear_d40e80
                  (*(long *)(param_1 + 0x100),
                   _Method_System_Collections_Generic_List_UILabel__Clear___12dd310);
        if (*(char *)(param_1 + 0xb8) == '\0') {
          if (((*(ushort *)(_UIPopupList_TypeInfo_12d6490 + 0x132) >> 10 & 1) != 0) &&
             (*(int *)(_UIPopupList_TypeInfo_12d6490 + 0xe0) == 0)) {
            native_sub_4327ec();
          }
          uVar8 = *(undefined8 *)(*(long *)(_UIPopupList_TypeInfo_12d6490 + 0xb8) + 8);
          if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
             (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
            native_sub_4327ec(_UnityEngine_Object_TypeInfo_12d54e0);
          }
          native_UnityEngine_Object__Destroy_8ea574(uVar8,0);
          fVar11 = (float)native_UnityEngine_Time__get_unscaledTime_770860(0);
          fVar11 = fVar11 + 0.1;
LAB_00c28c04:
          *(float *)(*(long *)(_UIPopupList_TypeInfo_12d6490 + 0xb8) + 0x10) = fVar11;
          *(undefined8 *)(param_1 + 0xe8) = 0;
          native_sub_4326e0((undefined8 *)(param_1 + 0xe8),0);
          *(undefined8 *)(param_1 + 0xf0) = 0;
          native_sub_4326e0((undefined8 *)(param_1 + 0xf0),0);
          if (((*(byte *)(_UIPopupList_TypeInfo_12d6490 + 0x133) >> 2 & 1) != 0) &&
             (*(int *)(_UIPopupList_TypeInfo_12d6490 + 0xe0) == 0)) {
            native_sub_4327ec();
          }
          puVar7 = (undefined8 *)(*(long *)(_UIPopupList_TypeInfo_12d6490 + 0xb8) + 8);
          *puVar7 = 0;
          native_sub_4326e0(puVar7,0);
          puVar7 = *(undefined8 **)(_UIPopupList_TypeInfo_12d6490 + 0xb8);
          *puVar7 = 0;
          if (iRam0000000001345318 != 0) {
            puVar1 = (ulong *)(((ulong)puVar7 >> 0x12 & 0x7fff) * 8 + 0x138ecd8);
            do {
              cVar2 = '\x01';
              bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
              if (bVar3) {
                *puVar1 = *puVar1 | 1L << ((ulong)puVar7 >> 0xc & 0x3f);
                cVar2 = ExclusiveMonitorsStatus();
              }
            } while (cVar2 != '\0');
          }
          return;
        }
        if (((*(ushort *)(_UIPopupList_TypeInfo_12d6490 + 0x132) >> 10 & 1) != 0) &&
           (*(int *)(_UIPopupList_TypeInfo_12d6490 + 0xe0) == 0)) {
          native_sub_4327ec();
        }
        lVar5 = *(long *)(*(long *)(_UIPopupList_TypeInfo_12d6490 + 0xb8) + 8);
        if ((lVar5 != 0) &&
           (lVar5 = native_UnityEngine_GameObject__GetComponentsInChildren_Collider__4a2650
                              (lVar5,
                               _Method_UnityEngine_GameObject_GetComponentsInChildren_UIWidget____12e4b88
                              ), lVar5 != 0)) {
          iVar9 = (int)*(undefined8 *)(lVar5 + 0x18);
          if (iVar9 < 1) {
LAB_00c28a9c:
            if (((*(byte *)(_UIPopupList_TypeInfo_12d6490 + 0x133) >> 2 & 1) != 0) &&
               (*(int *)(_UIPopupList_TypeInfo_12d6490 + 0xe0) == 0)) {
              native_sub_4327ec();
            }
            lVar5 = *(long *)(*(long *)(_UIPopupList_TypeInfo_12d6490 + 0xb8) + 8);
            if ((lVar5 == 0) ||
               (lVar5 = native_UnityEngine_GameObject__GetComponentsInChildren_Collider__4a2650
                                  (lVar5,
                                   _Method_UnityEngine_GameObject_GetComponentsInChildren_Collider____12e4b50
                                  ), lVar5 == 0)) goto LAB_00c28c8c;
            iVar9 = (int)*(undefined8 *)(lVar5 + 0x18);
            if (iVar9 < 1) {
LAB_00c28b2c:
              if (((*(byte *)(_UIPopupList_TypeInfo_12d6490 + 0x133) >> 2 & 1) != 0) &&
                 (*(int *)(_UIPopupList_TypeInfo_12d6490 + 0xe0) == 0)) {
                native_sub_4327ec();
              }
              uVar8 = *(undefined8 *)(*(long *)(_UIPopupList_TypeInfo_12d6490 + 0xb8) + 8);
              if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
                 (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
                native_sub_4327ec(_UnityEngine_Object_TypeInfo_12d54e0);
              }
              native_UnityEngine_Object__Destroy_8ea524(0x3e19999a,uVar8,0);
              fVar11 = (float)native_UnityEngine_Time__get_unscaledTime_770860(0);
              fVar12 = (float)native_UnityEngine_Mathf__Max_8d9f90(0x3dcccccd,0x3e19999a,0);
              fVar11 = fVar11 + fVar12;
              goto LAB_00c28c04;
            }
            if (iVar9 != 0) {
              uVar10 = 0;
              do {
                lVar6 = *(long *)(lVar5 + (long)(int)uVar10 * 8 + 0x20);
                if (lVar6 == 0) goto LAB_00c28c8c;
                native_UnityEngine_Collider__set_enabled_dbac4c(lVar6,0,0);
                uVar10 = uVar10 + 1;
                if (iVar9 <= (int)uVar10) goto LAB_00c28b2c;
              } while (uVar10 < *(uint *)(lVar5 + 0x18));
            }
          }
          else if (iVar9 != 0) {
            uVar10 = 0;
            do {
              lVar6 = *(long *)(lVar5 + (long)(int)uVar10 * 8 + 0x20);
              if (lVar6 == 0) goto LAB_00c28c8c;
              uVar13 = *(undefined4 *)(lVar6 + 0x90);
              uVar14 = *(undefined4 *)(lVar6 + 0x94);
              uVar15 = *(undefined4 *)(lVar6 + 0x98);
              uVar8 = native_UnityEngine_Component__get_gameObject_8da66c(lVar6,0);
              lVar6 = native_TweenColor__Begin_6e3964(0x3e19999a,uVar13,uVar14,uVar15,0,uVar8,0);
              if (lVar6 == 0) goto LAB_00c28c8c;
              uVar10 = uVar10 + 1;
              *(undefined4 *)(lVar6 + 0x18) = 2;
              if (iVar9 <= (int)uVar10) goto LAB_00c28a9c;
            } while (uVar10 < *(uint *)(lVar5 + 0x18));
          }
          uVar8 = native_sub_43283c();
                    /* WARNING: Subroutine does not return */
          native_sub_4327dc(uVar8,0);
        }
      }
LAB_00c28c8c:
                    /* WARNING: Subroutine does not return */
      native_sub_432810();
    }
  }
  return;
}



/* UIPopupList$$AnimateColor @ 0xc28c90
 * void UIPopupList__AnimateColor (UIPopupList_o* __this, UIWidget_o* widget, const MethodInfo* method); */

/* UIPopupList$$AnimateColor
   void UIPopupList__AnimateColor (UIPopupList_o* __this, UIWidget_o* widget, const MethodInfo*
   method); */

void native_UIPopupList__AnimateColor_c28c90(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  long lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  if (param_2 != 0) {
    uVar3 = *(undefined4 *)(param_2 + 0x90);
    uVar4 = *(undefined4 *)(param_2 + 0x94);
    uVar5 = *(undefined4 *)(param_2 + 0x98);
    uVar6 = *(undefined4 *)(param_2 + 0x9c);
    uStack_50 = 0;
    uStack_48 = 0;
    native_UnityEngine_Color___ctor_8d980c(uVar3,uVar4,uVar5,0,&uStack_50,0);
    native_UIWidget__set_color_947adc
              (uStack_50 & 0xffffffff,uStack_50._4_4_,uStack_48 & 0xffffffff,uStack_48._4_4_,param_2
               ,0);
    uVar1 = native_UnityEngine_Component__get_gameObject_8da66c(param_2,0);
    lVar2 = native_TweenColor__Begin_6e3964(0x3e19999a,uVar3,uVar4,uVar5,uVar6,uVar1,0);
    if (lVar2 != 0) {
      *(undefined4 *)(lVar2 + 0x18) = 2;
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* UIPopupList$$AnimatePosition @ 0xc28d40
 * void UIPopupList__AnimatePosition (UIPopupList_o* __this, UIWidget_o* widget, bool placeAbove, float bottom, const MethodInfo* method); */

/* UIPopupList$$AnimatePosition
   void UIPopupList__AnimatePosition (UIPopupList_o* __this, UIWidget_o* widget, bool placeAbove,
   float bottom, const MethodInfo* method); */

void native_UIPopupList__AnimatePosition_c28d40
               (undefined4 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               long param_5,uint param_6)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  if ((param_5 != 0) && (lVar1 = native_UIRect__get_cachedTransform_c27c58(param_5), lVar1 != 0)) {
    uVar3 = native_UnityEngine_Transform__get_localPosition_7717f4(lVar1,0);
    lVar1 = native_UIRect__get_cachedTransform_c27c58(param_5);
    if (lVar1 != 0) {
      if ((param_6 & 1) == 0) {
        param_1 = 0;
      }
      native_UnityEngine_Transform__set_localPosition_7718a4(uVar3,param_1,param_3,lVar1,0);
      uVar2 = native_UnityEngine_Component__get_gameObject_8da66c(param_5,0);
      lVar1 = native_TweenPosition__Begin_6e5c14(0x3e19999a,uVar3,param_2,param_3,uVar2,0);
      if (lVar1 != 0) {
        *(undefined4 *)(lVar1 + 0x18) = 2;
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* UIPopupList$$AnimateScale @ 0xc28df8
 * void UIPopupList__AnimateScale (UIPopupList_o* __this, UIWidget_o* widget, bool placeAbove, float bottom, const MethodInfo* method); */

/* UIPopupList$$AnimateScale
   void UIPopupList__AnimateScale (UIPopupList_o* __this, UIWidget_o* widget, bool placeAbove, float
   bottom, const MethodInfo* method); */

void native_UIPopupList__AnimateScale_c28df8(long param_1,long param_2,uint param_3)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  float fVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  ulong uVar8;
  float fVar9;
  
  if (param_2 != 0) {
    uVar2 = native_UnityEngine_Component__get_gameObject_8da66c(param_2,0);
    lVar3 = native_UIRect__get_cachedTransform_c27c58(param_2);
    uVar6 = native_UIPopupList__get_fitScale_c26d64(param_1);
    iVar1 = native_UIPopupList__get_activeFontSize_c26b30(param_1);
    fVar5 = (float)native_UIPopupList__get_activeFontScale_c26c48(param_1);
    if (lVar3 != 0) {
      fVar9 = (float)uVar6;
      fVar5 = fVar9 * (fVar5 * (float)iVar1 +
                      *(float *)(param_1 + 0x108) + *(float *)(param_1 + 0x108));
      uVar8 = (ulong)(uint)(fVar5 / (float)*(int *)(param_2 + 0xa8));
      native_UnityEngine_Transform__set_localScale_771e30(uVar6,uVar8,uVar6,lVar3,0);
      uVar7 = native_UnityEngine_Vector3__get_one_776a20(0);
      lVar4 = native_TweenScale__Begin_6e64cc(0x3e19999a,uVar7,uVar8,uVar6,uVar2,0);
      if (lVar4 != 0) {
        *(undefined4 *)(lVar4 + 0x18) = 2;
        if ((param_3 & 1) != 0) {
          uVar6 = native_UnityEngine_Transform__get_localPosition_7717f4(lVar3,0);
          native_UnityEngine_Transform__set_localPosition_7718a4
                    (uVar6,fVar5 + ((float)uVar7 - fVar9 * (float)*(int *)(param_2 + 0xa8)),lVar3,0)
          ;
          lVar3 = native_TweenPosition__Begin_6e5c14(0x3e19999a,uVar6,uVar7,uVar8,uVar2,0);
          if (lVar3 == 0) goto LAB_00c28f6c;
          *(undefined4 *)(lVar3 + 0x18) = 2;
        }
        return;
      }
    }
  }
LAB_00c28f6c:
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* UIPopupList$$Animate @ 0xc28f70
 * void UIPopupList__Animate (UIPopupList_o* __this, UIWidget_o* widget, bool placeAbove, float bottom, const MethodInfo* method); */

/* UIPopupList$$Animate
   void UIPopupList__Animate (UIPopupList_o* __this, UIWidget_o* widget, bool placeAbove, float
   bottom, const MethodInfo* method); */

void native_UIPopupList__Animate_c28f70
               (undefined8 param_1,long *param_2,undefined8 param_3,uint param_4)

{
  (**(code **)(*param_2 + 0x2e8))(param_2,param_3,*(undefined8 *)(*param_2 + 0x2f0));
                    /* WARNING: Could not recover jumptable at 0x00c28fd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_2 + 0x2f8))
            (param_1,param_2,param_3,param_4 & 1,*(undefined8 *)(*param_2 + 0x300));
  return;
}



/* UIPopupList$$OnClick @ 0xc28fd4
 * void UIPopupList__OnClick (UIPopupList_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIPopupList$$OnClick
   void UIPopupList__OnClick (UIPopupList_o* __this, const MethodInfo* method); */

void native_UIPopupList__OnClick_c28fd4(long *param_1)

{
  int iVar1;
  ulong uVar2;
  undefined8 uVar3;
  long lVar4;
  
  if ((bRam00000000013426f1 & 1) == 0) {
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    native_sub_43273c(&UICamera_TypeInfo_12d6410);
    native_sub_43273c(&UIPopupList_TypeInfo_12d6490);
    bRam00000000013426f1 = 1;
  }
  lVar4 = param_1[0x23];
  iVar1 = native_UnityEngine_Time__get_frameCount_770964(0);
  if ((int)lVar4 != iVar1) {
    if (((*(byte *)(_UIPopupList_TypeInfo_12d6490 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UIPopupList_TypeInfo_12d6490 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    uVar3 = *(undefined8 *)(*(long *)(_UIPopupList_TypeInfo_12d6490 + 0xb8) + 8);
    if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
      native_sub_4327ec(_UnityEngine_Object_TypeInfo_12d54e0);
    }
    uVar2 = native_UnityEngine_Object__op_Equality_8e9a3c(uVar3,0,0);
    if ((uVar2 & 1) == 0) {
      lVar4 = param_1[0x1f];
      if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
        native_sub_4327ec();
      }
      uVar2 = native_UnityEngine_Object__op_Inequality_8d76fc(lVar4,0,0);
      if ((uVar2 & 1) != 0) {
        if (param_1[0x1f] == 0) {
                    /* WARNING: Subroutine does not return */
          native_sub_432810();
        }
        uVar3 = native_UnityEngine_Component__get_gameObject_8da66c(param_1[0x1f],0);
                    /* WARNING: Could not recover jumptable at 0x00c29178. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*param_1 + 0x278))(param_1,uVar3,1,*(undefined8 *)(*param_1 + 0x280));
        return;
      }
    }
    else if (1 < (int)param_1[0x19] - 2U) {
      if ((int)param_1[0x19] == 1) {
        if (((*(byte *)(_UICamera_TypeInfo_12d6410 + 0x133) >> 2 & 1) != 0) &&
           (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
          native_sub_4327ec();
        }
        if (*(int *)(*(long *)(_UICamera_TypeInfo_12d6410 + 0xb8) + 0xd4) != -2) {
          return;
        }
      }
                    /* WARNING: Could not recover jumptable at 0x00c29110. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x338))(param_1,*(undefined8 *)(*param_1 + 0x340));
      return;
    }
  }
  return;
}



/* UIPopupList$$OnDoubleClick @ 0xc29180
 * void UIPopupList__OnDoubleClick (UIPopupList_o* __this, const MethodInfo* method); */

/* UIPopupList$$OnDoubleClick
   void UIPopupList__OnDoubleClick (UIPopupList_o* __this, const MethodInfo* method); */

void native_UIPopupList__OnDoubleClick_c29180(long *param_1)

{
  if ((int)param_1[0x19] == 2) {
                    /* WARNING: Could not recover jumptable at 0x00c29198. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x338))(param_1,*(undefined8 *)(*param_1 + 0x340));
    return;
  }
  return;
}



/* UIPopupList$$CloseIfUnselected @ 0xc291a0
 * System_Collections_IEnumerator_o* UIPopupList__CloseIfUnselected (UIPopupList_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIPopupList$$CloseIfUnselected
   System_Collections_IEnumerator_o* UIPopupList__CloseIfUnselected (UIPopupList_o* __this, const
   MethodInfo* method); */

long native_UIPopupList__CloseIfUnselected_c291a0(undefined8 param_1)

{
  long lVar1;
  
  if ((bRam00000000013426f2 & 1) == 0) {
    native_sub_43273c(&UIPopupList__CloseIfUnselected_d__112_TypeInfo_12d7a78);
    bRam00000000013426f2 = 1;
  }
  lVar1 = native_sub_432808(_UIPopupList__CloseIfUnselected_d__112_TypeInfo_12d7a78);
  native_UIPopupList__CloseIfUnselected_d__112___ctor_558354(lVar1,0,0);
  if (lVar1 != 0) {
    *(undefined8 *)(lVar1 + 0x20) = param_1;
    native_sub_4326e0((undefined8 *)(lVar1 + 0x20),param_1);
    return lVar1;
  }
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* UIPopupList$$Show @ 0xc29218
 * void UIPopupList__Show (UIPopupList_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIPopupList$$Show
   void UIPopupList__Show (UIPopupList_o* __this, const MethodInfo* method); */

void native_UIPopupList__Show_c29218
               (undefined1 param_1 [16],float param_2,uint param_3,long *param_4)

{
  int iVar1;
  uint uVar2;
  bool bVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 uVar6;
  ulong uVar7;
  undefined8 uVar8;
  long lVar9;
  undefined8 *puVar10;
  long *plVar11;
  long lVar12;
  long lVar13;
  long *plVar14;
  long lVar15;
  ulong uVar16;
  long *plVar17;
  long *plVar18;
  int *piVar19;
  ulong uVar20;
  long lVar21;
  long lVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  long lVar25;
  ulong uVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  double dVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  uint uVar34;
  uint uVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  float fStack_118;
  float fStack_10c;
  double dStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  uint uStack_c4;
  double dStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  
  if ((bRam00000000013426f3 & 1) == 0) {
    native_sub_43273c(&UIEventListener_BoolDelegate_TypeInfo_12d7a50);
    native_sub_43273c(&Method_UnityEngine_Component_GetComponentInParent_UIPanel____12e2d88);
    native_sub_43273c(&Method_UnityEngine_Component_GetComponentInParent_UIRoot____12e2d90);
    native_sub_43273c(&Method_UnityEngine_Component_GetComponent_BoxCollider2D____12e2998);
    native_sub_43273c(&Method_UnityEngine_Component_GetComponent_BoxCollider____12e2990);
    native_sub_43273c(&Method_UnityEngine_Component_GetComponent_Collider2D____12e29c8);
    native_sub_43273c(&Method_UnityEngine_Component_GetComponent_Collider____12e29c0);
    native_sub_43273c(&UnityEngine_Debug_TypeInfo_12d4338);
    native_sub_43273c(&Method_UnityEngine_GameObject_AddComponent_Rigidbody2D____12e4848);
    native_sub_43273c(&Method_UnityEngine_GameObject_AddComponent_Rigidbody____12e4840);
    native_sub_43273c(&Method_UnityEngine_GameObject_AddComponent_UIPanel____12e48f0);
    native_sub_43273c(&UnityEngine_GameObject_TypeInfo_12d47d8);
    native_sub_43273c(&INGUIAtlas_TypeInfo_12d4c68);
    native_sub_43273c(&INGUIFont_TypeInfo_12d4c70);
    native_sub_43273c(&Method_System_Collections_Generic_List_UILabel__Add___12dd308);
    native_sub_43273c(&Method_System_Collections_Generic_List_UILabel__Clear___12dd310);
    native_sub_43273c(&Method_System_Collections_Generic_List_string__Contains___12dceb0);
    native_sub_43273c(&Method_System_Collections_Generic_List_UILabel___ctor___12dd300);
    native_sub_43273c(&Method_System_Collections_Generic_List_string__get_Count___12dcef8);
    native_sub_43273c(&Method_System_Collections_Generic_List_UIRoot__get_Count___12dd398);
    native_sub_43273c(&Method_System_Collections_Generic_List_UILabel__get_Count___12dd320);
    native_sub_43273c(&Method_System_Collections_Generic_List_UILabel__get_Item___12dd328);
    native_sub_43273c(&Method_System_Collections_Generic_List_string__get_Item___12dcf00);
    native_sub_43273c(&Method_System_Collections_Generic_List_UIRoot__get_Item___12dd3a0);
    native_sub_43273c(&System_Collections_Generic_List_UILabel__TypeInfo_12d2c18);
    native_sub_43273c(&Localization_TypeInfo_12d50b8);
    native_sub_43273c(&NGUIMath_TypeInfo_12d53b8);
    native_sub_43273c(&Method_NGUITools_AddWidget_UI2DSprite____12e56d0);
    native_sub_43273c(&Method_NGUITools_AddWidget_UILabel____12e56d8);
    native_sub_43273c(&NGUITools_TypeInfo_12d53c8);
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    native_sub_43273c(&UICamera_TypeInfo_12d6410);
    native_sub_43273c(&UIPanel_TypeInfo_12d6478);
    native_sub_43273c(&UIPopupList_TypeInfo_12d6490);
    native_sub_43273c(&UIRoot_TypeInfo_12d64a8);
    native_sub_43273c(&UIEventListener_VoidDelegate_TypeInfo_12d7a60);
    native_sub_43273c(&StringLiteral_CloseIfUnselected_12ed0d8);
    native_sub_43273c(&StringLiteral_Popup_list_needs_a_source_object____12f0660);
    native_sub_43273c(&StringLiteral_Drop_down_List_12ed870);
    bRam00000000013426f3 = 1;
  }
  dStack_c0 = 0.0;
  uStack_b8 = 0;
  uStack_b0 = 0;
  uStack_c4 = 0;
  uVar7 = native_UnityEngine_Behaviour__get_enabled_8d7acc(param_4,0);
  if ((uVar7 & 1) == 0) {
LAB_00c295c8:
    (**(code **)(*param_4 + 0x2c8))(param_4,0,*(undefined8 *)(*param_4 + 0x2d0));
    return;
  }
  uVar8 = native_UnityEngine_Component__get_gameObject_8da66c(param_4,0);
  if (((*(byte *)(_NGUITools_TypeInfo_12d53c8 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_NGUITools_TypeInfo_12d53c8 + 0xe0) == 0)) {
    native_sub_4327ec(_NGUITools_TypeInfo_12d53c8);
  }
  uVar7 = native_NGUITools__GetActive_72d0d4(uVar8,0);
  if ((uVar7 & 1) == 0) goto LAB_00c295c8;
  if (((*(byte *)(_UIPopupList_TypeInfo_12d6490 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UIPopupList_TypeInfo_12d6490 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar8 = *(undefined8 *)(*(long *)(_UIPopupList_TypeInfo_12d6490 + 0xb8) + 8);
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec(_UnityEngine_Object_TypeInfo_12d54e0);
  }
  uVar7 = native_UnityEngine_Object__op_Equality_8e9a3c(uVar8,0,0);
  if (((uVar7 & 1) == 0) ||
     (uVar7 = native_UIPopupList__get_isValid_c26ab8(param_4), (uVar7 & 1) == 0)) goto LAB_00c295c8;
  if (param_4[0xd] == 0) goto LAB_00c2afc8;
  if (*(int *)(param_4[0xd] + 0x18) < 1) goto LAB_00c295c8;
  if (param_4[0x20] == 0) goto LAB_00c2afc8;
  native_System_Collections_Generic_List_Action___Clear_d40e80
            (param_4[0x20],_Method_System_Collections_Generic_List_UILabel__Clear___12dd310);
  native_UnityEngine_MonoBehaviour__StopCoroutine_8e955c
            (param_4,_StringLiteral_CloseIfUnselected_12ed0d8,0);
  if (((*(byte *)(_UICamera_TypeInfo_12d6410 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar8 = native_UICamera__get_hoveredObject_c9114c(0);
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec(_UnityEngine_Object_TypeInfo_12d54e0);
  }
  uVar7 = native_UnityEngine_Object__op_Inequality_8d76fc(uVar8,0,0);
  if ((uVar7 & 1) == 0) {
    uVar8 = native_UnityEngine_Component__get_gameObject_8da66c(param_4,0);
  }
  else {
    if (((*(byte *)(_UICamera_TypeInfo_12d6410 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    uVar8 = native_UICamera__get_hoveredObject_c9114c(0);
  }
  if (((*(byte *)(_UICamera_TypeInfo_12d6410 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  native_UICamera__set_selectedObject_c976a4(uVar8,0);
  lVar9 = native_UICamera__get_selectedObject_c9756c(0);
  param_4[0x22] = lVar9;
  native_sub_4326e0(param_4 + 0x22,lVar9);
  param_4[0x2c] = param_4[0x22];
  native_sub_4326e0(param_4 + 0x2c);
  lVar9 = param_4[0x2c];
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar7 = native_UnityEngine_Object__op_Equality_8e9a3c(lVar9,0,0);
  if ((uVar7 & 1) != 0) {
    if (((*(byte *)(_UnityEngine_Debug_TypeInfo_12d4338 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UnityEngine_Debug_TypeInfo_12d4338 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    native_UnityEngine_Debug__LogError_8dc5cc
              (_StringLiteral_Popup_list_needs_a_source_object____12f0660,0);
    return;
  }
  uVar4 = native_UnityEngine_Time__get_frameCount_770964(0);
  plVar17 = param_4 + 0x1c;
  lVar9 = *plVar17;
  *(undefined4 *)(param_4 + 0x23) = uVar4;
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar7 = native_UnityEngine_Object__op_Equality_8e9a3c(lVar9,0,0);
  if ((uVar7 & 1) != 0) {
    uVar8 = native_UnityEngine_Component__get_transform_8da62c(param_4,0);
    if (((*(byte *)(_UIPanel_TypeInfo_12d6478 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UIPanel_TypeInfo_12d6478 + 0xe0) == 0)) {
      native_sub_4327ec(_UIPanel_TypeInfo_12d6478);
    }
    lVar9 = native_UIPanel__Find_af4e04(uVar8,0);
    *plVar17 = lVar9;
    native_sub_4326e0(plVar17,lVar9);
    lVar9 = *plVar17;
    if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    uVar7 = native_UnityEngine_Object__op_Equality_8e9a3c(lVar9,0,0);
    if ((uVar7 & 1) != 0) {
      return;
    }
  }
  uVar8 = native_sub_432808(_UnityEngine_GameObject_TypeInfo_12d47d8);
  native_UnityEngine_GameObject___ctor_8de828(uVar8,_StringLiteral_Drop_down_List_12ed870,0);
  if (((*(byte *)(_UIPopupList_TypeInfo_12d6490 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UIPopupList_TypeInfo_12d6490 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  puVar10 = (undefined8 *)(*(long *)(_UIPopupList_TypeInfo_12d6490 + 0xb8) + 8);
  *puVar10 = uVar8;
  native_sub_4326e0(puVar10,uVar8);
  lVar21 = *(long *)(*(long *)(_UIPopupList_TypeInfo_12d6490 + 0xb8) + 8);
  lVar9 = native_UnityEngine_Component__get_gameObject_8da66c(param_4,0);
  if ((lVar9 == 0) ||
     (uVar4 = native_UnityEngine_GameObject__get_layer_8de608(lVar9,0), lVar21 == 0))
  goto LAB_00c2afc8;
  native_UnityEngine_GameObject__set_layer_8de648(lVar21,uVar4,0);
  if ((char)param_4[0x18] != '\0') {
    uVar8 = native_UnityEngine_Component__GetComponent_ActiveAnimation__49daec
                      (param_4,_Method_UnityEngine_Component_GetComponent_Collider____12e29c0);
    if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
      native_sub_4327ec(_UnityEngine_Object_TypeInfo_12d54e0);
    }
    uVar7 = native_UnityEngine_Object__op_Inequality_8d76fc(uVar8,0,0);
    if ((uVar7 & 1) == 0) {
      uVar8 = native_UnityEngine_Component__GetComponent_ActiveAnimation__49daec
                        (param_4,_Method_UnityEngine_Component_GetComponent_Collider2D____12e29c8);
      if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
        native_sub_4327ec(_UnityEngine_Object_TypeInfo_12d54e0);
      }
      uVar7 = native_UnityEngine_Object__op_Inequality_8d76fc(uVar8,0,0);
      if ((uVar7 & 1) != 0) {
        if (((*(byte *)(_UIPopupList_TypeInfo_12d6490 + 0x133) >> 2 & 1) != 0) &&
           (*(int *)(_UIPopupList_TypeInfo_12d6490 + 0xe0) == 0)) {
          native_sub_4327ec();
        }
        lVar9 = *(long *)(*(long *)(_UIPopupList_TypeInfo_12d6490 + 0xb8) + 8);
        if ((lVar9 == 0) ||
           (lVar9 = native_UnityEngine_GameObject__AddComponent_ActiveAnimation__4a2118
                              (lVar9,
                               _Method_UnityEngine_GameObject_AddComponent_Rigidbody2D____12e4848),
           lVar9 == 0)) goto LAB_00c2afc8;
        native_UnityEngine_Rigidbody2D__set_isKinematic_dba904(lVar9,1,0);
      }
    }
    else {
      if (((*(byte *)(_UIPopupList_TypeInfo_12d6490 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_UIPopupList_TypeInfo_12d6490 + 0xe0) == 0)) {
        native_sub_4327ec();
      }
      lVar9 = *(long *)(*(long *)(_UIPopupList_TypeInfo_12d6490 + 0xb8) + 8);
      if ((lVar9 == 0) ||
         (lVar9 = native_UnityEngine_GameObject__AddComponent_ActiveAnimation__4a2118
                            (lVar9,_Method_UnityEngine_GameObject_AddComponent_Rigidbody____12e4840)
         , lVar9 == 0)) goto LAB_00c2afc8;
      native_UnityEngine_Rigidbody__set_isKinematic_dbd0e4(lVar9,1,0);
    }
    if (((*(byte *)(_UIPopupList_TypeInfo_12d6490 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UIPopupList_TypeInfo_12d6490 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    lVar9 = *(long *)(*(long *)(_UIPopupList_TypeInfo_12d6490 + 0xb8) + 8);
    if ((lVar9 == 0) ||
       (lVar9 = native_UnityEngine_GameObject__AddComponent_ActiveAnimation__4a2118
                          (lVar9,_Method_UnityEngine_GameObject_AddComponent_UIPanel____12e48f0),
       lVar9 == 0)) goto LAB_00c2afc8;
    native_UIPanel__set_depth_aef79c(lVar9,1000000,0);
    if (*plVar17 == 0) goto LAB_00c2afc8;
    native_UIPanel__set_sortingOrder_aef8b8(lVar9,*(undefined4 *)(*plVar17 + 0x160),0);
  }
  if (((*(byte *)(_UIPopupList_TypeInfo_12d6490 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UIPopupList_TypeInfo_12d6490 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  plVar11 = *(long **)(_UIPopupList_TypeInfo_12d6490 + 0xb8);
  *plVar11 = (long)param_4;
  native_sub_4326e0(plVar11,param_4);
  if (param_4[0x1c] == 0) goto LAB_00c2afc8;
  lVar9 = native_UIRect__get_cachedTransform_c27c58();
  lVar21 = *(long *)(*(long *)(_UIPopupList_TypeInfo_12d6490 + 0xb8) + 8);
  if ((lVar21 == 0) ||
     (lVar21 = native_UnityEngine_GameObject__get_transform_8de5c8(lVar21,0), lVar21 == 0))
  goto LAB_00c2afc8;
  native_UnityEngine_Transform__set_parent_771f18(lVar21,lVar9,0);
  lVar13 = lVar9;
  if ((char)param_4[0x18] != '\0') {
    if (*plVar17 == 0) goto LAB_00c2afc8;
    lVar12 = native_UnityEngine_Component__GetComponentInParent_BE2_Canvas__49dc70
                       (*plVar17,
                        _Method_UnityEngine_Component_GetComponentInParent_UIRoot____12e2d90);
    if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
      native_sub_4327ec(_UnityEngine_Object_TypeInfo_12d54e0);
    }
    uVar7 = native_UnityEngine_Object__op_Equality_8e9a3c(lVar12,0,0);
    if ((uVar7 & 1) != 0) {
      if (((*(byte *)(_UIRoot_TypeInfo_12d64a8 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_UIRoot_TypeInfo_12d64a8 + 0xe0) == 0)) {
        native_sub_4327ec();
      }
      lVar22 = **(long **)(_UIRoot_TypeInfo_12d64a8 + 0xb8);
      if (lVar22 == 0) goto LAB_00c2afc8;
      if (*(int *)(lVar22 + 0x18) != 0) {
        if (((*(byte *)(_UIRoot_TypeInfo_12d64a8 + 0x133) >> 2 & 1) != 0) &&
           (*(int *)(_UIRoot_TypeInfo_12d64a8 + 0xe0) == 0)) {
          native_sub_4327ec();
          lVar22 = **(long **)(_UIRoot_TypeInfo_12d64a8 + 0xb8);
          if (lVar22 == 0) goto LAB_00c2afc8;
        }
        if (*(int *)(lVar22 + 0x18) == 0) {
          native_System_ThrowHelper__ThrowArgumentOutOfRangeException_9fe0f4(0);
        }
        lVar12 = *(long *)(*(long *)(lVar22 + 0x10) + 0x20);
      }
    }
    if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    uVar7 = native_UnityEngine_Object__op_Inequality_8d76fc(lVar12,0,0);
    if ((uVar7 & 1) != 0) {
      if (lVar12 == 0) goto LAB_00c2afc8;
      lVar13 = native_UnityEngine_Component__get_transform_8da62c(lVar12,0);
    }
  }
  if ((int)param_4[0x19] == 3) {
    lVar12 = param_4[0x22];
    uVar8 = native_UnityEngine_Component__get_gameObject_8da66c(param_4,0);
    if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
      native_sub_4327ec(_UnityEngine_Object_TypeInfo_12d54e0);
    }
    uVar7 = native_UnityEngine_Object__op_Inequality_8d76fc(lVar12,uVar8,0);
    if ((uVar7 & 1) == 0) goto LAB_00c29c60;
    if (((*(byte *)(_UICamera_TypeInfo_12d6410 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    uVar4 = native_UICamera__get_lastEventPosition_c94418(0);
    *(undefined4 *)(param_4 + 0x28) = uVar4;
    *(float *)((long)param_4 + 0x144) = param_2;
    *(undefined4 *)(param_4 + 0x29) = 0;
    if ((param_4[0x1c] == 0) || (lVar12 = native_UIRect__get_anchorCamera_c26f1c(), lVar12 == 0))
    goto LAB_00c2afc8;
    fVar31 = *(float *)((long)param_4 + 0x144);
    uVar34 = *(uint *)(param_4 + 0x29);
    native_UnityEngine_Camera__ScreenToWorldPoint_8d9170((int)param_4[0x28],lVar12,0);
    if (lVar9 == 0) goto LAB_00c2afc8;
    uVar8 = native_UnityEngine_Transform__InverseTransformPoint_7729a0(lVar9,0);
    fVar29 = fVar31;
    uVar35 = uVar34;
    native_UnityEngine_Transform__set_localPosition_7718a4(lVar21,0);
    uVar4 = native_UnityEngine_Transform__get_position_77169c(lVar21,0);
    *(undefined4 *)(param_4 + 0x28) = uVar4;
    *(float *)((long)param_4 + 0x144) = fVar29;
    *(uint *)(param_4 + 0x29) = uVar35;
    fStack_10c = (float)uVar8;
    param_3 = uVar34;
    param_2 = fVar31;
  }
  else {
LAB_00c29c60:
    uVar8 = native_UnityEngine_Component__get_transform_8da62c(param_4,0);
    if (((*(byte *)(_NGUIMath_TypeInfo_12d53b8 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_NGUIMath_TypeInfo_12d53b8 + 0xe0) == 0)) {
      native_sub_4327ec(_NGUIMath_TypeInfo_12d53b8);
    }
    native_NGUIMath__CalculateRelativeWidgetBounds_805b00(&dStack_e0,lVar9,uVar8,0,0,0);
    uStack_b0 = uStack_d0;
    uStack_b8 = uStack_d8;
    dStack_c0 = dStack_e0;
    uVar8 = native_UnityEngine_Bounds__get_min_8d7f18(&dStack_c0,0);
    fVar31 = param_2;
    uVar34 = param_3;
    fStack_10c = (float)native_UnityEngine_Bounds__get_max_8d7f88(&dStack_c0,0);
    fVar29 = param_2;
    uVar35 = param_3;
    native_UnityEngine_Transform__set_localPosition_7718a4(uVar8,lVar21,0);
    uVar4 = native_UnityEngine_Transform__get_position_77169c(lVar21,0);
    *(undefined4 *)(param_4 + 0x28) = uVar4;
    *(float *)((long)param_4 + 0x144) = fVar29;
    *(uint *)(param_4 + 0x29) = uVar35;
  }
  fVar29 = (float)uVar8;
  native_UnityEngine_MonoBehaviour__StartCoroutine_8e8fc4
            (param_4,_StringLiteral_CloseIfUnselected_12ed0d8,0);
  uVar8 = native_UIPopupList__get_fitScale_c26d64(param_4);
  native_UnityEngine_Quaternion__get_identity_7628fc(0);
  native_UnityEngine_Transform__set_localRotation_771984(lVar21,0);
  native_UnityEngine_Transform__set_localScale_771e30(uVar8,uVar8,uVar8,lVar21,0);
  if ((char)param_4[0x18] == '\0') {
    if (*plVar17 == 0) goto LAB_00c2afc8;
    uVar23 = native_UnityEngine_Component__get_gameObject_8da66c(*plVar17,0);
    if (((*(byte *)(_NGUITools_TypeInfo_12d53c8 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_NGUITools_TypeInfo_12d53c8 + 0xe0) == 0)) {
      native_sub_4327ec(_NGUITools_TypeInfo_12d53c8);
    }
    iVar5 = native_NGUITools__CalculateNextDepth_72f4a8(uVar23,0);
  }
  else {
    iVar5 = 0;
  }
  lVar12 = param_4[9];
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar7 = native_UnityEngine_Object__op_Inequality_8d76fc(lVar12,0,0);
  if ((uVar7 & 1) == 0) {
    lVar12 = param_4[3];
    if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    uVar7 = native_UnityEngine_Object__op_Inequality_8d76fc(lVar12,0,0);
    if ((uVar7 & 1) == 0) {
      return;
    }
    if (((*(byte *)(_UIPopupList_TypeInfo_12d6490 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UIPopupList_TypeInfo_12d6490 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    lVar22 = param_4[3];
    lVar12 = param_4[7];
    uVar23 = *(undefined8 *)(*(long *)(_UIPopupList_TypeInfo_12d6490 + 0xb8) + 8);
    if (((*(byte *)(_NGUITools_TypeInfo_12d53c8 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_NGUITools_TypeInfo_12d53c8 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    uVar24 = native_sub_4327f8(lVar22,_INGUIAtlas_TypeInfo_12d4c68);
    lVar12 = native_NGUITools__AddSprite_730ff0(uVar23,uVar24,lVar12,iVar5,0);
    param_4[0x1d] = lVar12;
    native_sub_4326e0();
  }
  else {
    if (((*(byte *)(_UIPopupList_TypeInfo_12d6490 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UIPopupList_TypeInfo_12d6490 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    uVar23 = *(undefined8 *)(*(long *)(_UIPopupList_TypeInfo_12d6490 + 0xb8) + 8);
    if (((*(byte *)(_NGUITools_TypeInfo_12d53c8 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_NGUITools_TypeInfo_12d53c8 + 0xe0) == 0)) {
      native_sub_4327ec(_NGUITools_TypeInfo_12d53c8);
    }
    lVar12 = native_NGUITools__AddWidget_object__4a528c
                       (uVar23,iVar5,_Method_NGUITools_AddWidget_UI2DSprite____12e56d0);
    if (lVar12 == 0) goto LAB_00c2afc8;
    native_UI2DSprite__set_sprite2D_6e81bc(lVar12,param_4[9],0);
    param_4[0x1d] = lVar12;
    native_sub_4326e0(param_4 + 0x1d,lVar12);
  }
  bVar3 = (int)param_4[0xb] == 1;
  if ((int)param_4[0xb] == 0) {
    lVar12 = param_4[0x22];
    if (lVar12 == 0) goto LAB_00c2afc8;
    uVar4 = native_UnityEngine_GameObject__get_layer_8de608(lVar12,0);
    if (((*(byte *)(_UICamera_TypeInfo_12d6410 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
      native_sub_4327ec(_UICamera_TypeInfo_12d6410);
    }
    lVar12 = native_UICamera__FindCameraForLayer_c96d2c(uVar4,0);
    if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
      native_sub_4327ec(_UnityEngine_Object_TypeInfo_12d54e0);
    }
    uVar7 = native_UnityEngine_Object__op_Inequality_8d76fc(lVar12,0,0);
    if ((uVar7 & 1) != 0) {
      if ((lVar12 == 0) ||
         (lVar12 = native_UICamera__get_cachedCamera_c95254(lVar12,0), lVar12 == 0))
      goto LAB_00c2afc8;
      fVar32 = *(float *)((long)param_4 + 0x144);
      native_UnityEngine_Camera__WorldToViewportPoint_8d9160
                ((int)param_4[0x28],fVar32,(int)param_4[0x29],lVar12,0);
      bVar3 = fVar32 < 0.5;
    }
  }
  plVar11 = (long *)param_4[0x1d];
  if (plVar11 == (long *)0x0) {
LAB_00c2afc8:
                    /* WARNING: Subroutine does not return */
    native_sub_432810();
  }
  (**(code **)(*plVar11 + 0x2b8))(plVar11,0,*(undefined8 *)(*plVar11 + 0x2c0));
  if (param_4[0x1d] == 0) goto LAB_00c2afc8;
  fVar32 = *(float *)((long)param_4 + 0x9c);
  fVar36 = *(float *)((long)param_4 + 0xa4);
  native_UIWidget__set_color_947adc((int)param_4[0x13],fVar32,(int)param_4[0x14],param_4[0x1d],0);
  plVar11 = (long *)param_4[0x1d];
  if (plVar11 == (long *)0x0) goto LAB_00c2afc8;
  fVar27 = (float)(**(code **)(*plVar11 + 0x3d8))(plVar11,*(undefined8 *)(*plVar11 + 0x3e0));
  *(float *)(param_4 + 0x21) = fVar32;
  if (param_4[0x1d] == 0) goto LAB_00c2afc8;
  lVar12 = native_UIRect__get_cachedTransform_c27c58();
  if (bVar3 == false) {
    fVar33 = (float)*(int *)((long)param_4 + 0xc4);
  }
  else {
    fVar33 = (fVar32 + fVar32) - (float)*(int *)((long)param_4 + 0xc4);
  }
  if (lVar12 == 0) goto LAB_00c2afc8;
  native_UnityEngine_Transform__set_localPosition_7718a4(0,fVar33,0,lVar12,0);
  lVar12 = param_4[10];
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar7 = native_UnityEngine_Object__op_Inequality_8d76fc(lVar12,0,0);
  if ((uVar7 & 1) == 0) {
    lVar12 = param_4[3];
    if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    uVar7 = native_UnityEngine_Object__op_Inequality_8d76fc(lVar12,0,0);
    if ((uVar7 & 1) == 0) {
      return;
    }
    if (((*(byte *)(_UIPopupList_TypeInfo_12d6490 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UIPopupList_TypeInfo_12d6490 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    lVar12 = param_4[3];
    lVar22 = param_4[8];
    uVar23 = *(undefined8 *)(*(long *)(_UIPopupList_TypeInfo_12d6490 + 0xb8) + 8);
    if (((*(byte *)(_NGUITools_TypeInfo_12d53c8 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_NGUITools_TypeInfo_12d53c8 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    uVar24 = native_sub_4327f8(lVar12,_INGUIAtlas_TypeInfo_12d4c68);
    lVar12 = native_NGUITools__AddSprite_730ff0(uVar23,uVar24,lVar22,iVar5 + 1,0);
    param_4[0x1e] = lVar12;
    native_sub_4326e0(param_4 + 0x1e,lVar12);
  }
  else {
    if (((*(byte *)(_UIPopupList_TypeInfo_12d6490 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UIPopupList_TypeInfo_12d6490 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    uVar23 = *(undefined8 *)(*(long *)(_UIPopupList_TypeInfo_12d6490 + 0xb8) + 8);
    if (((*(byte *)(_NGUITools_TypeInfo_12d53c8 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_NGUITools_TypeInfo_12d53c8 + 0xe0) == 0)) {
      native_sub_4327ec(_NGUITools_TypeInfo_12d53c8);
    }
    lVar12 = native_NGUITools__AddWidget_object__4a528c
                       (uVar23,iVar5 + 1,_Method_NGUITools_AddWidget_UI2DSprite____12e56d0);
    if (lVar12 == 0) goto LAB_00c2afc8;
    native_UI2DSprite__set_sprite2D_6e81bc(lVar12,param_4[10],0);
    param_4[0x1e] = lVar12;
    native_sub_4326e0(param_4 + 0x1e,lVar12);
  }
  plVar11 = param_4 + 0x1e;
  if (*plVar11 == 0) goto LAB_00c2afc8;
  uVar7 = native_UIBasicSprite__get_hasBorder_c8c18c(*plVar11,0);
  fVar33 = 0.0;
  fStack_118 = 0.0;
  if ((uVar7 & 1) != 0) {
    plVar14 = (long *)*plVar11;
    if (plVar14 == (long *)0x0) goto LAB_00c2afc8;
    (**(code **)(*plVar14 + 0x3d8))(plVar14,*(undefined8 *)(*plVar14 + 0x3e0));
    plVar14 = (long *)*plVar11;
    if (plVar14 == (long *)0x0) goto LAB_00c2afc8;
    fVar33 = (float)(**(code **)(*plVar14 + 0x3d8))(plVar14,*(undefined8 *)(*plVar14 + 0x3e0));
    fStack_118 = fVar36;
  }
  plVar14 = (long *)*plVar11;
  if (plVar14 == (long *)0x0) goto LAB_00c2afc8;
  (**(code **)(*plVar14 + 0x2b8))(plVar14,0,*(undefined8 *)(*plVar14 + 0x2c0));
  if (*plVar11 == 0) goto LAB_00c2afc8;
  fVar39 = (float)uVar8;
  native_UIWidget__set_color_947adc
            ((int)param_4[0x15],*(undefined4 *)((long)param_4 + 0xac),(int)param_4[0x16],
             *(undefined4 *)((long)param_4 + 0xb4),*plVar11,0);
  iVar5 = native_UIPopupList__get_activeFontSize_c26b30(param_4);
  fVar36 = (float)native_UIPopupList__get_activeFontScale_c26c48(param_4);
  fVar37 = *(float *)((long)param_4 + 0x84);
  if (bVar3 == false) {
    fVar40 = (-fVar37 - fVar32) + (float)*(int *)((long)param_4 + 0xc4);
  }
  else {
    fVar40 = (fVar32 - fVar37) - (float)*(int *)((long)param_4 + 0xc4);
  }
  lVar12 = native_sub_432808(_System_Collections_Generic_List_UILabel__TypeInfo_12d2c18);
  native_System_Collections_Generic_List_XmlEventCache_XmlEvent______ctor_d3ff44
            (lVar12,_Method_System_Collections_Generic_List_UILabel___ctor___12dd300);
  if (param_4[0xd] == 0) goto LAB_00c2afc8;
  plVar14 = param_4 + 0x1b;
  uVar7 = native_System_Collections_Generic_List_BE2_UI_SelectionPanel___Contains_d40ec8
                    (param_4[0xd],*plVar14,
                     _Method_System_Collections_Generic_List_string__Contains___12dceb0);
  if ((uVar7 & 1) == 0) {
    *plVar14 = 0;
    native_sub_4326e0(plVar14,0);
  }
  uStack_c4 = 0;
  lVar22 = param_4[0xd];
  if (lVar22 == 0) goto LAB_00c2afc8;
  iVar1 = *(int *)(lVar22 + 0x18);
  fVar36 = fVar36 * (float)iVar5;
  fVar38 = fVar32 + fVar32 + fVar37;
  if (0 < iVar1) {
    uVar8 = 0;
    do {
      uVar35 = uStack_c4;
      if (*(uint *)(lVar22 + 0x18) <= uStack_c4) {
        native_System_ThrowHelper__ThrowArgumentOutOfRangeException_9fe0f4(0);
      }
      uVar23 = *(undefined8 *)(*(long *)(lVar22 + 0x10) + (long)(int)uVar35 * 8 + 0x20);
      if (((*(byte *)(_UIPopupList_TypeInfo_12d6490 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_UIPopupList_TypeInfo_12d6490 + 0xe0) == 0)) {
        native_sub_4327ec();
      }
      plVar18 = (long *)param_4[0x1d];
      if (plVar18 == (long *)0x0) break;
      uVar24 = *(undefined8 *)(*(long *)(_UIPopupList_TypeInfo_12d6490 + 0xb8) + 8);
      iVar5 = (**(code **)(*plVar18 + 0x2c8))(plVar18,*(undefined8 *)(*plVar18 + 0x2d0));
      if (((*(byte *)(_NGUITools_TypeInfo_12d53c8 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_NGUITools_TypeInfo_12d53c8 + 0xe0) == 0)) {
        native_sub_4327ec(_NGUITools_TypeInfo_12d53c8);
      }
      plVar18 = (long *)native_NGUITools__AddWidget_object__4a528c
                                  (uVar24,iVar5 + 2,_Method_NGUITools_AddWidget_UILabel____12e56d8);
      uVar24 = native_System_Int32__ToString_83c60c(&uStack_c4,0);
      if (plVar18 == (long *)0x0) break;
      native_UnityEngine_Object__set_name_8e9c08(plVar18,uVar24,0);
      (**(code **)(*plVar18 + 0x2b8))(plVar18,0,*(undefined8 *)(*plVar18 + 0x2c0));
      uVar24 = native_sub_4327f8(param_4[4],_INGUIFont_TypeInfo_12d4c70);
      native_UILabel__set_font_ae79c4(plVar18,uVar24,0);
      native_UILabel__set_trueTypeFont_ae7c54(plVar18,param_4[5],0);
      native_UILabel__set_fontSize_ae83c8(plVar18,(int)param_4[6],0);
      native_UILabel__set_fontStyle_ae842c(plVar18,*(undefined4 *)((long)param_4 + 0x34),0);
      uVar24 = uVar23;
      if (*(char *)((long)param_4 + 0xb9) != '\0') {
        if (((*(byte *)(_Localization_TypeInfo_12d50b8 + 0x133) >> 2 & 1) != 0) &&
           (*(int *)(_Localization_TypeInfo_12d50b8 + 0xe0) == 0)) {
          native_sub_4327ec(_Localization_TypeInfo_12d50b8,uVar23);
        }
        uVar24 = native_Localization__Get_7fae58(uVar23,1,0);
      }
      native_UILabel__set_text_ae81a8(plVar18,uVar24,0);
      native_UILabel__set_modifier_ae9868(plVar18,*(undefined4 *)((long)param_4 + 0xbc),0);
      native_UIWidget__set_color_947adc
                ((int)param_4[0x11],*(undefined4 *)((long)param_4 + 0x8c),(int)param_4[0x12],
                 *(undefined4 *)((long)param_4 + 0x94),plVar18,0);
      lVar22 = native_UIRect__get_cachedTransform_c27c58(plVar18);
      fVar41 = *(float *)(param_4 + 0x10);
      fVar28 = (float)native_UIWidget__get_pivotOffset_944f8c(plVar18,0);
      if (lVar22 == 0) break;
      native_UnityEngine_Transform__set_localPosition_7718a4
                ((fVar27 + fVar41) - fVar28,fVar40,0xbf800000,lVar22,0);
      native_UILabel__set_overflowMethod_ae8958(plVar18,2,0);
      native_UILabel__set_alignment_ae8458(plVar18,(int)param_4[0xc],0);
      native_UILabel__set_symbolStyle_ae8930(plVar18,1,0);
      if (lVar12 == 0) break;
      native_System_Collections_Generic_List_int_____Add_d40c00
                (lVar12,plVar18,_Method_System_Collections_Generic_List_UILabel__Add___12dd308);
      uVar24 = native_UILabel__get_printedSize_ae96c8(plVar18,0);
      uVar8 = native_UnityEngine_Mathf__Max_8d9f90(uVar8,uVar24,0);
      uVar24 = native_UnityEngine_Component__get_gameObject_8da66c(plVar18,0);
      lVar22 = native_UIEventListener__Get_9ea474(uVar24,0);
      uVar24 = native_sub_432808(_UIEventListener_BoolDelegate_TypeInfo_12d7a50);
      native_UIEventListener_BoolDelegate___ctor_554cb0
                (uVar24,param_4,*(undefined8 *)(*param_4 + 0x270),0);
      if (lVar22 == 0) break;
      *(undefined8 *)(lVar22 + 0x38) = uVar24;
      native_sub_4326e0((undefined8 *)(lVar22 + 0x38),uVar24);
      uVar24 = native_sub_432808(_UIEventListener_BoolDelegate_TypeInfo_12d7a50);
      native_UIEventListener_BoolDelegate___ctor_554cb0
                (uVar24,param_4,*(undefined8 *)(*param_4 + 0x280),0);
      *(undefined8 *)(lVar22 + 0x40) = uVar24;
      native_sub_4326e0(lVar22 + 0x40,uVar24);
      uVar24 = native_sub_432808(_UIEventListener_VoidDelegate_TypeInfo_12d7a60);
      native_UIEventListener_VoidDelegate___ctor_5563a4
                (uVar24,param_4,*(undefined8 *)(*param_4 + 0x290),0);
      *(undefined8 *)(lVar22 + 0x28) = uVar24;
      native_sub_4326e0(lVar22 + 0x28,uVar24);
      *(undefined8 *)(lVar22 + 0x18) = uVar23;
      native_sub_4326e0((undefined8 *)(lVar22 + 0x18),uVar23);
      uVar7 = native_System_String__op_Equality_afc18c(param_4[0x1b],uVar23,0);
      if (((uVar7 & 1) != 0) ||
         ((uStack_c4 == 0 &&
          (uVar7 = native_System_String__IsNullOrEmpty_b09430(*plVar14,0), (uVar7 & 1) != 0)))) {
        (**(code **)(*param_4 + 0x238))(param_4,plVar18,1,*(undefined8 *)(*param_4 + 0x240));
      }
      if (param_4[0x20] == 0) break;
      fVar38 = fVar36 + fVar37 + fVar38;
      fVar40 = fVar40 - (fVar36 + fVar37);
      native_System_Collections_Generic_List_int_____Add_d40c00
                (param_4[0x20],plVar18,
                 _Method_System_Collections_Generic_List_UILabel__Add___12dd308);
      uStack_c4 = uStack_c4 + 1;
      if (iVar1 <= (int)uStack_c4) goto LAB_00c2a73c;
      lVar22 = param_4[0xd];
    } while (lVar22 != 0);
    goto LAB_00c2afc8;
  }
  uVar8 = 0;
LAB_00c2a73c:
  uVar8 = native_UnityEngine_Mathf__Max_8d9f90
                    (uVar8,(fStack_10c - fVar29) -
                           (fVar27 + *(float *)(param_4 + 0x10) +
                           fVar27 + *(float *)(param_4 + 0x10)),0);
  if (lVar12 == 0) goto LAB_00c2afc8;
  uVar35 = *(uint *)(lVar12 + 0x18);
  if (0 < (int)uVar35) {
    fVar28 = (float)uVar8 * 0.5;
    lVar22 = 0;
    fVar37 = fVar36 + *(float *)((long)param_4 + 0x84);
    uVar2 = uVar35;
    while( true ) {
      if (uVar2 <= (uint)lVar22) {
        native_System_ThrowHelper__ThrowArgumentOutOfRangeException_9fe0f4(0);
      }
      lVar25 = *(long *)(*(long *)(lVar12 + 0x10) + lVar22 * 8 + 0x20);
      if (lVar25 == 0) goto LAB_00c2afc8;
      uVar23 = native_UnityEngine_Component__get_gameObject_8da66c(lVar25,0);
      if (((*(byte *)(_NGUITools_TypeInfo_12d53c8 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_NGUITools_TypeInfo_12d53c8 + 0xe0) == 0)) {
        native_sub_4327ec(_NGUITools_TypeInfo_12d53c8);
      }
      native_NGUITools__AddWidgetCollider_72d558(uVar23,0);
      *(undefined1 *)(lVar25 + 0xd8) = 0;
      lVar15 = native_UnityEngine_Component__GetComponent_ActiveAnimation__49daec
                         (lVar25,_Method_UnityEngine_Component_GetComponent_BoxCollider____12e2990);
      if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
        native_sub_4327ec(_UnityEngine_Object_TypeInfo_12d54e0);
      }
      uVar7 = native_UnityEngine_Object__op_Inequality_8d76fc(lVar15,0,0);
      if ((uVar7 & 1) == 0) {
        lVar25 = native_UnityEngine_Component__GetComponent_ActiveAnimation__49daec
                           (lVar25,
                            _Method_UnityEngine_Component_GetComponent_BoxCollider2D____12e2998);
        if (lVar25 == 0) goto LAB_00c2afc8;
        native_UnityEngine_Collider2D__set_offset_db8bcc(fVar28,fVar36 * -0.5,lVar25,0);
        native_UnityEngine_BoxCollider2D__set_size_db8a30(uVar8,fVar37,lVar25,0);
      }
      else {
        if (lVar15 == 0) goto LAB_00c2afc8;
        native_UnityEngine_BoxCollider__get_center_dba95c(lVar15,0);
        native_UnityEngine_BoxCollider__set_center_dbaa0c(fVar28,fVar36 * -0.5,lVar15,0);
        native_UnityEngine_BoxCollider__set_size_dbab64(uVar8,fVar37,0x3f800000,lVar15,0);
      }
      if ((int)uVar35 <= (int)((uint)lVar22 + 1)) break;
      uVar2 = *(uint *)(lVar12 + 0x18);
      lVar22 = lVar22 + 1;
    }
  }
  uVar4 = native_UnityEngine_Mathf__RoundToInt_8e50f0(uVar8,0);
  lVar22 = param_4[0x1d];
  fVar37 = (float)uVar8 + fVar27 + *(float *)(param_4 + 0x10) + fVar27 + *(float *)(param_4 + 0x10);
  uVar6 = native_UnityEngine_Mathf__RoundToInt_8e50f0(fVar37,0);
  if (lVar22 == 0) goto LAB_00c2afc8;
  native_UIWidget__set_width_941dec(lVar22,uVar6,0);
  lVar22 = param_4[0x1d];
  uVar6 = native_UnityEngine_Mathf__RoundToInt_8e50f0(fVar38,0);
  if (lVar22 == 0) goto LAB_00c2afc8;
  native_UIWidget__set_height_942098(lVar22,uVar6,0);
  uVar35 = *(uint *)(lVar12 + 0x18);
  if (0 < (int)uVar35) {
    lVar22 = 0;
    uVar2 = uVar35;
    while( true ) {
      if (uVar2 <= (uint)lVar22) {
        native_System_ThrowHelper__ThrowArgumentOutOfRangeException_9fe0f4(0);
      }
      lVar25 = *(long *)(*(long *)(lVar12 + 0x10) + lVar22 * 8 + 0x20);
      if (lVar25 == 0) goto LAB_00c2afc8;
      native_UILabel__set_overflowMethod_ae8958(lVar25,0,0);
      native_UIWidget__set_width_941dec(lVar25,uVar4,0);
      if ((int)uVar35 <= (int)((uint)lVar22 + 1)) break;
      uVar2 = *(uint *)(lVar12 + 0x18);
      lVar22 = lVar22 + 1;
    }
  }
  plVar14 = (long *)native_sub_4327f8(param_4[3],_INGUIAtlas_TypeInfo_12d4c68);
  if (plVar14 == (long *)0x0) {
    fVar38 = 2.0;
  }
  else {
    lVar22 = *plVar14;
    if ((ulong)*(ushort *)(lVar22 + 0x12a) != 0) {
      uVar7 = 0;
      piVar19 = (int *)(*(long *)(lVar22 + 0xb0) + 8);
      do {
        if (*(long *)(piVar19 + -2) == _INGUIAtlas_TypeInfo_12d4c68) {
          puVar10 = (undefined8 *)(lVar22 + (long)(*piVar19 + 5) * 0x10 + 0x138);
          goto LAB_00c2aa50;
        }
        uVar7 = uVar7 + 1;
        piVar19 = piVar19 + 4;
      } while (uVar7 < *(ushort *)(lVar22 + 0x12a));
    }
    puVar10 = (undefined8 *)native_sub_3c9b34(plVar14,_INGUIAtlas_TypeInfo_12d4c68,5);
LAB_00c2aa50:
    fVar38 = (float)(*(code *)*puVar10)(plVar14,puVar10[1]);
    fVar38 = fVar38 + fVar38;
  }
  lVar22 = param_4[0x1e];
  uVar4 = native_UnityEngine_Mathf__RoundToInt_8e50f0
                    (fVar33 * fVar38 +
                     (fVar37 - (fVar27 + *(float *)(param_4 + 0x10) +
                               fVar27 + *(float *)(param_4 + 0x10))),0);
  if (lVar22 == 0) goto LAB_00c2afc8;
  native_UIWidget__set_width_941dec(lVar22,uVar4,0);
  lVar22 = *plVar11;
  uVar4 = native_UnityEngine_Mathf__RoundToInt_8e50f0(fVar36 + fStack_118 * fVar38,0);
  if (lVar22 == 0) goto LAB_00c2afc8;
  native_UIWidget__set_height_942098(lVar22,uVar4,0);
  if ((char)param_4[0x17] != '\0') {
    (**(code **)(*param_4 + 0x2e8))(param_4,param_4[0x1d],*(undefined8 *)(*param_4 + 0x2f0));
    fVar27 = (float)native_UnityEngine_Time__get_timeScale_770930(0);
    if ((fVar27 == 0.0) ||
       (fVar27 = (float)native_UnityEngine_Time__get_timeScale_770930(0), 0.1 <= fVar27)) {
      lVar22 = param_4[0x1e];
      fVar36 = fVar36 + (fVar40 - fVar32);
      (**(code **)(*param_4 + 0x2e8))(param_4,lVar22,*(undefined8 *)(*param_4 + 0x2f0));
      (**(code **)(*param_4 + 0x2f8))(fVar36,param_4,lVar22,bVar3,*(undefined8 *)(*param_4 + 0x300))
      ;
      uVar7 = (ulong)*(uint *)(lVar12 + 0x18);
      if (0 < (int)*(uint *)(lVar12 + 0x18)) {
        uVar20 = 0;
        uVar26 = uVar7 - 1;
        while( true ) {
          if (uVar7 <= uVar20) {
            native_System_ThrowHelper__ThrowArgumentOutOfRangeException_9fe0f4(0);
          }
          uVar8 = *(undefined8 *)(*(long *)(lVar12 + 0x10) + uVar20 * 8 + 0x20);
          (**(code **)(*param_4 + 0x2e8))(param_4,uVar8,*(undefined8 *)(*param_4 + 0x2f0));
          (**(code **)(*param_4 + 0x2f8))
                    (fVar36,param_4,uVar8,bVar3,*(undefined8 *)(*param_4 + 0x300));
          if (uVar26 == uVar20) break;
          uVar7 = (ulong)*(uint *)(lVar12 + 0x18);
          uVar20 = uVar20 + 1;
        }
      }
      (**(code **)(*param_4 + 0x308))
                (fVar36,param_4,param_4[0x1d],bVar3,*(undefined8 *)(*param_4 + 0x310));
    }
  }
  fVar36 = fVar39 * fVar32;
  if (bVar3 == false) {
    lVar12 = param_4[0x1d];
    if (lVar12 == 0) goto LAB_00c2afc8;
    iVar5 = *(int *)(lVar12 + 0xa4);
    param_2 = param_2 + fVar36;
    fVar31 = param_2 - fVar39 * (float)*(int *)(lVar12 + 0xa8);
  }
  else {
    lVar12 = param_4[0x1d];
    if (lVar12 == 0) goto LAB_00c2afc8;
    iVar5 = *(int *)(lVar12 + 0xa4);
    fVar31 = fVar31 - fVar36;
    param_2 = fVar31 + fVar39 * ((float)*(int *)(lVar12 + 0xa8) - (fVar32 + fVar32));
    native_UnityEngine_Transform__set_localPosition_7718a4(fVar29,param_2 - fVar36,param_3,lVar21,0)
    ;
  }
  uVar26 = (ulong)param_3;
  uVar7 = (ulong)(uint)fVar31;
  uVar20 = (ulong)(uint)param_2;
  fVar31 = fVar29 + fVar39 * (float)iVar5;
  plVar17 = (long *)*plVar17;
  do {
    plVar11 = plVar17;
    if (plVar11 == (long *)0x0) goto LAB_00c2afc8;
    lVar12 = native_UIRect__get_parent_c2afcc(plVar11);
    if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
      native_sub_4327ec(_UnityEngine_Object_TypeInfo_12d54e0);
    }
    uVar16 = native_UnityEngine_Object__op_Equality_8e9a3c(lVar12,0,0);
    if ((uVar16 & 1) != 0) break;
    if (lVar12 == 0) goto LAB_00c2afc8;
    plVar17 = (long *)native_UnityEngine_Component__GetComponentInParent_BE2_Canvas__49dc70
                                (lVar12,
                                 _Method_UnityEngine_Component_GetComponentInParent_UIPanel____12e2d88
                                );
    if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
      native_sub_4327ec(_UnityEngine_Object_TypeInfo_12d54e0);
    }
    uVar16 = native_UnityEngine_Object__op_Equality_8e9a3c(plVar17,0,0);
  } while ((uVar16 & 1) == 0);
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar16 = native_UnityEngine_Object__op_Inequality_8d76fc(lVar9,0,0);
  if ((uVar16 & 1) != 0) {
    if (lVar9 == 0) goto LAB_00c2afc8;
    uVar8 = native_UnityEngine_Transform__TransformPoint_7728d8(fVar29,uVar7,uVar26,lVar9,0);
    uVar16 = (ulong)uVar34;
    uVar23 = native_UnityEngine_Transform__TransformPoint_7728d8(fVar31,uVar20,uVar16,lVar9,0);
    lVar9 = native_UIRect__get_cachedTransform_c27c58(plVar11);
    if (lVar9 == 0) goto LAB_00c2afc8;
    fVar29 = (float)native_UnityEngine_Transform__InverseTransformPoint_7729a0
                              (uVar8,uVar7,uVar26,lVar9,0);
    lVar9 = native_UIRect__get_cachedTransform_c27c58(plVar11);
    if (lVar9 == 0) goto LAB_00c2afc8;
    fVar31 = (float)native_UnityEngine_Transform__InverseTransformPoint_7729a0
                              (uVar23,uVar20,uVar16,lVar9,0);
    uVar8 = native_UnityEngine_Component__get_gameObject_8da66c(param_4,0);
    if (((*(byte *)(_UIRoot_TypeInfo_12d64a8 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UIRoot_TypeInfo_12d64a8 + 0xe0) == 0)) {
      native_sub_4327ec(_UIRoot_TypeInfo_12d64a8);
    }
    fVar32 = (float)native_UIRoot__GetPixelSizeAdjustment_c2b094(uVar8);
    fVar29 = fVar29 / fVar32;
    uVar7 = (ulong)(uint)((float)uVar7 / fVar32);
    fVar31 = fVar31 / fVar32;
    uVar20 = (ulong)(uint)((float)uVar20 / fVar32);
  }
  fVar33 = (float)uVar7;
  fVar36 = (float)(**(code **)(*plVar11 + 0x2a8))
                            (fVar29,uVar7,fVar31,uVar20,plVar11,*(undefined8 *)(*plVar11 + 0x2b0));
  fVar29 = fVar33;
  fVar32 = fVar31;
  fVar27 = (float)native_UnityEngine_Transform__get_localPosition_7717f4(lVar21,0);
  fVar36 = fVar36 + fVar27;
  fVar33 = fVar33 + fVar29;
  dVar30 = (double)func_0x002c9600((double)fVar36,&dStack_e0);
  if (0.0 <= fVar36) {
    if (dVar30 == 0.5) {
      fVar29 = 1.0;
      goto LAB_00c2aec4;
    }
    fVar36 = (float)(int)(fVar36 + 0.5);
  }
  else if (dVar30 == -0.5) {
    fVar29 = -1.0;
LAB_00c2aec4:
    fVar36 = (float)dStack_e0;
    if (((long)dStack_e0 & 1U) != 0) {
      fVar36 = (float)dStack_e0 + fVar29;
    }
  }
  else {
    fVar36 = (float)(int)(fVar36 + -0.5);
  }
  dVar30 = (double)func_0x002c9600((double)fVar33,&dStack_e0);
  if (0.0 <= fVar33) {
    if (dVar30 != 0.5) {
      fVar27 = (float)(int)(fVar33 + 0.5);
      goto LAB_00c2af70;
    }
    fVar29 = 1.0;
  }
  else {
    if (dVar30 != -0.5) {
      fVar27 = (float)(int)(fVar33 + -0.5);
      goto LAB_00c2af70;
    }
    fVar29 = -1.0;
  }
  fVar27 = (float)dStack_e0;
  if (((long)dStack_e0 & 1U) != 0) {
    fVar27 = (float)dStack_e0 + fVar29;
  }
LAB_00c2af70:
  native_UnityEngine_Transform__set_localPosition_7718a4(fVar36,fVar27,fVar31 + fVar32,lVar21,0);
  native_UnityEngine_Transform__set_parent_771f18(lVar21,lVar13,0);
  return;
}



/* UIPopupList$$.ctor @ 0xc2b174
 * void UIPopupList___ctor (UIPopupList_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIPopupList$$.ctor
   void UIPopupList___ctor (UIPopupList_o* __this, const MethodInfo* method); */

void native_UIPopupList___ctor_c2b174
               (undefined1 param_1 [16],undefined4 param_2,undefined4 param_3,undefined4 param_4,
               long param_5)

{
  undefined8 uVar1;
  undefined4 uVar2;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  
  if ((bRam00000000013426f4 & 1) == 0) {
    native_sub_43273c(&Method_System_Collections_Generic_List_object___ctor___12dcc28);
    native_sub_43273c(&Method_System_Collections_Generic_List_string___ctor___12dce88);
    native_sub_43273c(&Method_System_Collections_Generic_List_Action___ctor___12dc3b0);
    native_sub_43273c(&Method_System_Collections_Generic_List_EventDelegate___ctor___12dc738);
    native_sub_43273c(&Method_System_Collections_Generic_List_UILabel___ctor___12dd300);
    native_sub_43273c(&System_Collections_Generic_List_object__TypeInfo_12d2ae8);
    native_sub_43273c(&System_Collections_Generic_List_Action__TypeInfo_12d2958);
    native_sub_43273c(&System_Collections_Generic_List_EventDelegate__TypeInfo_12d2a08);
    native_sub_43273c(&System_Collections_Generic_List_string__TypeInfo_12d2b60);
    native_sub_43273c(&System_Collections_Generic_List_UILabel__TypeInfo_12d2c18);
    native_sub_43273c(&StringLiteral_OnSelectionChange_12f02c8);
    bRam00000000013426f4 = 1;
  }
  *(undefined4 *)(param_5 + 0x30) = 0x10;
  *(undefined4 *)(param_5 + 0x60) = 1;
  uVar1 = native_sub_432808(_System_Collections_Generic_List_string__TypeInfo_12d2b60);
  native_System_Collections_Generic_List_XmlEventCache_XmlEvent______ctor_d3ff44
            (uVar1,_Method_System_Collections_Generic_List_string___ctor___12dce88);
  *(undefined8 *)(param_5 + 0x68) = uVar1;
  native_sub_4326e0(param_5 + 0x68,uVar1);
  uVar1 = native_sub_432808(_System_Collections_Generic_List_object__TypeInfo_12d2ae8);
  native_System_Collections_Generic_List_XmlEventCache_XmlEvent______ctor_d3ff44
            (uVar1,_Method_System_Collections_Generic_List_object___ctor___12dcc28);
  *(undefined8 *)(param_5 + 0x70) = uVar1;
  native_sub_4326e0(param_5 + 0x70,uVar1);
  uVar1 = native_sub_432808(_System_Collections_Generic_List_Action__TypeInfo_12d2958);
  native_System_Collections_Generic_List_XmlEventCache_XmlEvent______ctor_d3ff44
            (uVar1,_Method_System_Collections_Generic_List_Action___ctor___12dc3b0);
  *(undefined8 *)(param_5 + 0x78) = uVar1;
  native_sub_4326e0(param_5 + 0x78,uVar1);
  uVar1 = NEON_fmov(0x40800000,4);
  *(undefined8 *)(param_5 + 0x80) = uVar1;
  uVar2 = native_UnityEngine_Color__get_white_8d9e10(0);
  *(undefined4 *)(param_5 + 0x88) = uVar2;
  *(undefined4 *)(param_5 + 0x8c) = param_2;
  *(undefined4 *)(param_5 + 0x90) = param_3;
  *(undefined4 *)(param_5 + 0x94) = param_4;
  uVar2 = native_UnityEngine_Color__get_white_8d9e10(0);
  *(undefined4 *)(param_5 + 0x98) = uVar2;
  *(undefined4 *)(param_5 + 0x9c) = param_2;
  *(undefined4 *)(param_5 + 0xa0) = param_3;
  *(undefined4 *)(param_5 + 0xa4) = param_4;
  uStack_40 = 0;
  uStack_3c = 0;
  uStack_38 = 0;
  uStack_34 = 0;
  native_UnityEngine_Color___ctor_8d980c(0x3f61e1e2,0x3f48c8c9,0x3f169697,0x3f800000,&uStack_40,0);
  *(undefined1 *)(param_5 + 0xb8) = 1;
  *(undefined1 *)(param_5 + 0xc0) = 1;
  *(undefined4 *)(param_5 + 0xa8) = uStack_40;
  *(ulong *)(param_5 + 0xac) = CONCAT44(uStack_38,uStack_3c);
  *(undefined4 *)(param_5 + 0xb4) = uStack_34;
  uVar1 = native_sub_432808(_System_Collections_Generic_List_EventDelegate__TypeInfo_12d2a08);
  native_System_Collections_Generic_List_XmlEventCache_XmlEvent______ctor_d3ff44
            (uVar1,_Method_System_Collections_Generic_List_EventDelegate___ctor___12dc738);
  *(undefined8 *)(param_5 + 0xd0) = uVar1;
  native_sub_4326e0(param_5 + 0xd0,uVar1);
  uVar1 = native_sub_432808(_System_Collections_Generic_List_UILabel__TypeInfo_12d2c18);
  native_System_Collections_Generic_List_XmlEventCache_XmlEvent______ctor_d3ff44
            (uVar1,_Method_System_Collections_Generic_List_UILabel___ctor___12dd300);
  *(undefined8 *)(param_5 + 0x100) = uVar1;
  native_sub_4326e0(param_5 + 0x100,uVar1);
  *(undefined8 *)(param_5 + 0x128) = _StringLiteral_OnSelectionChange_12f02c8;
  native_sub_4326e0(param_5 + 0x128);
  native_UIWidgetContainer___ctor_94341c(param_5,0);
  return;
}



/* UIPopupList$$.cctor @ 0xc2b3e4
 * void UIPopupList___cctor (const MethodInfo* method); */

/* UIPopupList$$.cctor
   void UIPopupList___cctor (const MethodInfo* method); */

void native_UIPopupList___cctor_c2b3e4(void)

{
  return;
}


