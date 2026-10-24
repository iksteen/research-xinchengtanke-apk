/* ARM64 IL2CPP native pseudocode from Ghidra.
 * Recovered implementation, not original C# source.
 * Function boundaries follow the IL2CPP method address table. */


/* MG_BlocksEngine2.Core.BE2_InputManager$$get_Instance @ 0x602b04
 * MG_BlocksEngine2_Core_I_BE2_InputManager_o* MG_BlocksEngine2_Core_BE2_InputManager__get_Instance (const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MG_BlocksEngine2.Core.BE2_InputManager$$get_Instance
   MG_BlocksEngine2_Core_I_BE2_InputManager_o* MG_BlocksEngine2_Core_BE2_InputManager__get_Instance
   (const MethodInfo* method); */

long native_MG_BlocksEngine2_Core_BE2_InputManager__get_Instance_602b04(void)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  uint uVar6;
  
  if ((bRam000000000133edf2 & 1) == 0) {
    native_sub_43273c(&MG_BlocksEngine2_Core_BE2_InputManager_TypeInfo_12d39e8);
    native_sub_43273c(&Method_UnityEngine_GameObject_GetComponent_I_BE2_InputManager____12e49b0);
    native_sub_43273c(&Method_UnityEngine_Object_FindObjectsOfType_GameObject____12e5a38);
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    bRam000000000133edf2 = 1;
  }
  lVar2 = **(long **)(_MG_BlocksEngine2_Core_BE2_InputManager_TypeInfo_12d39e8 + 0xb8);
  if (lVar2 == 0) {
    if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    lVar2 = native_UnityEngine_Object__FindObjectsOfType_BE2_Canvas__4a6368
                      (_Method_UnityEngine_Object_FindObjectsOfType_GameObject____12e5a38);
    if (lVar2 == 0) {
LAB_00602c3c:
                    /* WARNING: Subroutine does not return */
      native_sub_432810();
    }
    uVar1 = *(uint *)(lVar2 + 0x18);
    if (0 < (int)uVar1) {
      uVar6 = 0;
      do {
        if (uVar1 <= uVar6) {
          uVar4 = native_sub_43283c();
                    /* WARNING: Subroutine does not return */
          native_sub_4327dc(uVar4,0);
        }
        lVar3 = *(long *)(lVar2 + (long)(int)uVar6 * 8 + 0x20);
        if (lVar3 == 0) goto LAB_00602c3c;
        uVar4 = native_UnityEngine_GameObject__GetComponent_BE2_BlockSectionHeader_Custom__4a2214
                          (lVar3,
                           _Method_UnityEngine_GameObject_GetComponent_I_BE2_InputManager____12e49b0
                          );
        puVar5 = *(undefined8 **)(_MG_BlocksEngine2_Core_BE2_InputManager_TypeInfo_12d39e8 + 0xb8);
        *puVar5 = uVar4;
        native_sub_4326e0(puVar5,uVar4);
        if (**(long **)(_MG_BlocksEngine2_Core_BE2_InputManager_TypeInfo_12d39e8 + 0xb8) != 0) {
          return **(long **)(_MG_BlocksEngine2_Core_BE2_InputManager_TypeInfo_12d39e8 + 0xb8);
        }
        uVar1 = *(uint *)(lVar2 + 0x18);
        uVar6 = uVar6 + 1;
      } while ((int)uVar6 < (int)uVar1);
    }
    lVar2 = **(long **)(_MG_BlocksEngine2_Core_BE2_InputManager_TypeInfo_12d39e8 + 0xb8);
  }
  return lVar2;
}



/* MG_BlocksEngine2.Core.BE2_InputManager$$set_Instance @ 0x602c40
 * void MG_BlocksEngine2_Core_BE2_InputManager__set_Instance (MG_BlocksEngine2_Core_I_BE2_InputManager_o* value, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MG_BlocksEngine2.Core.BE2_InputManager$$set_Instance
   void MG_BlocksEngine2_Core_BE2_InputManager__set_Instance
   (MG_BlocksEngine2_Core_I_BE2_InputManager_o* value, const MethodInfo* method); */

void native_MG_BlocksEngine2_Core_BE2_InputManager__set_Instance_602c40(undefined8 param_1)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  
  if ((bRam000000000133edf3 & 1) == 0) {
    native_sub_43273c(&MG_BlocksEngine2_Core_BE2_InputManager_TypeInfo_12d39e8);
    bRam000000000133edf3 = 1;
  }
  puVar4 = *(undefined8 **)(_MG_BlocksEngine2_Core_BE2_InputManager_TypeInfo_12d39e8 + 0xb8);
  *puVar4 = param_1;
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



/* MG_BlocksEngine2.Core.BE2_InputManager$$get_ScreenPointerPosition @ 0x602c94
 * UnityEngine_Vector3_o MG_BlocksEngine2_Core_BE2_InputManager__get_ScreenPointerPosition (MG_BlocksEngine2_Core_BE2_InputManager_o* __this, const MethodInfo* method); */

/* MG_BlocksEngine2.Core.BE2_InputManager$$get_ScreenPointerPosition
   UnityEngine_Vector3_o MG_BlocksEngine2_Core_BE2_InputManager__get_ScreenPointerPosition
   (MG_BlocksEngine2_Core_BE2_InputManager_o* __this, const MethodInfo* method); */

undefined4 native_MG_BlocksEngine2_Core_BE2_InputManager__get_ScreenPointerPosition_602c94(void)

{
  undefined8 uStack_30;
  undefined4 uStack_28;
  
  uStack_28 = 0;
  uStack_30 = 0;
  if (pcRam0000000001343bf0 == (code *)0x0) {
    pcRam0000000001343bf0 = (code *)native_sub_4326f0(&UNK_00ecc355);
  }
  (*pcRam0000000001343bf0)(&uStack_30);
  return (undefined4)uStack_30;
}



/* MG_BlocksEngine2.Core.BE2_InputManager$$get_CanvasPointerPosition @ 0x602c9c
 * UnityEngine_Vector3_o MG_BlocksEngine2_Core_BE2_InputManager__get_CanvasPointerPosition (MG_BlocksEngine2_Core_BE2_InputManager_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MG_BlocksEngine2.Core.BE2_InputManager$$get_CanvasPointerPosition
   UnityEngine_Vector3_o MG_BlocksEngine2_Core_BE2_InputManager__get_CanvasPointerPosition
   (MG_BlocksEngine2_Core_BE2_InputManager_o* __this, const MethodInfo* method); */

undefined8
native_MG_BlocksEngine2_Core_BE2_InputManager__get_CanvasPointerPosition_602c9c
          (undefined1 param_1 [16],undefined8 param_2,float param_3)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  float fVar6;
  undefined8 uStack_40;
  undefined4 uStack_38;
  
  lVar1 = native_MG_BlocksEngine2_EditorScript_BE2_Inspector__get_Instance_602da4();
  if (lVar1 != 0) {
    lVar1 = native_MG_BlocksEngine2_EditorScript_BE2_Inspector__get_Camera_603238();
    lVar2 = native_MG_BlocksEngine2_EditorScript_BE2_Inspector__get_Instance_602da4();
    if (lVar2 != 0) {
      if (*(int *)(lVar2 + 0xd8) == 0) {
        if (pcRam0000000001343bf0 == (code *)0x0) {
          pcRam0000000001343bf0 = (code *)native_sub_4326f0(&UNK_00ecc355);
        }
        uVar5 = (*pcRam0000000001343bf0)(&stack0xffffffffffffffd0);
        return uVar5;
      }
      lVar2 = native_MG_BlocksEngine2_EditorScript_BE2_Inspector__get_Instance_602da4();
      if (lVar2 != 0) {
        if (*(int *)(lVar2 + 0xd8) != 1) {
          lVar2 = native_MG_BlocksEngine2_EditorScript_BE2_Inspector__get_Instance_602da4();
          if (lVar2 == 0) goto LAB_00602d9c;
          if (*(int *)(lVar2 + 0xd8) != 2) {
            uVar5 = 0;
            if ((bRam000000000133ffad & 1) == 0) {
              uVar5 = native_sub_43273c(&UnityEngine_Vector3_TypeInfo_12d66f8);
              bRam000000000133ffad = 1;
            }
            return uVar5;
          }
        }
        uVar5 = native_UnityEngine_Input__get_mousePosition_dbdd8c(0);
        lVar2 = native_MG_BlocksEngine2_DragDrop_BE2_DragDropManager__get_DragDropComponentsCanvas_578bf0
                          (0);
        if ((((lVar2 != 0) &&
             (lVar2 = native_UnityEngine_Component__get_transform_8da62c(lVar2,0), lVar2 != 0)) &&
            (native_UnityEngine_Transform__get_position_77169c(lVar2,0), lVar1 != 0)) &&
           (fVar6 = param_3, lVar1 = native_UnityEngine_Component__get_transform_8da62c(lVar1,0),
           lVar1 != 0)) {
          native_UnityEngine_Transform__get_position_77169c(lVar1,0);
          if ((bRam000000000133edf5 & 1) == 0) {
            native_sub_43273c(uVar5,param_2,param_3 - fVar6,
                              &UnityEngine_RectTransformUtility_TypeInfo_12d58f8);
            native_sub_43273c(&UnityEngine_RectTransform_TypeInfo_12d58f0);
            bRam000000000133edf5 = 1;
          }
          uStack_38 = 0;
          uStack_40 = 0;
          lVar1 = native_MG_BlocksEngine2_DragDrop_BE2_DragDropManager__get_DragDropComponentsCanvas_578bf0
                            (0);
          if (lVar1 != 0) {
            plVar3 = (long *)native_UnityEngine_Component__get_transform_8da62c(lVar1,0);
            lVar1 = native_MG_BlocksEngine2_EditorScript_BE2_Inspector__get_Instance_602da4();
            if (lVar1 != 0) {
              uVar4 = native_MG_BlocksEngine2_EditorScript_BE2_Inspector__get_Camera_603238();
              if (((*(byte *)(_UnityEngine_RectTransformUtility_TypeInfo_12d58f8 + 0x133) >> 2 & 1)
                   != 0) &&
                 (*(int *)(_UnityEngine_RectTransformUtility_TypeInfo_12d58f8 + 0xe0) == 0)) {
                native_sub_4327ec(_UnityEngine_RectTransformUtility_TypeInfo_12d58f8);
              }
              if (plVar3 == (long *)0x0) {
                plVar3 = (long *)0x0;
              }
              else if (*plVar3 != _UnityEngine_RectTransform_TypeInfo_12d58f0) {
                plVar3 = (long *)0x0;
              }
              uVar5 = native_UnityEngine_RectTransformUtility__ScreenPointToWorldPointInRectangle_db7dfc
                                (uVar5,param_2,plVar3,uVar4,&uStack_40,0);
              return uVar5;
            }
          }
                    /* WARNING: Subroutine does not return */
          native_sub_432810();
        }
      }
    }
  }
LAB_00602d9c:
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* MG_BlocksEngine2.Core.BE2_InputManager$$get__inspector @ 0x602da0
 * MG_BlocksEngine2_EditorScript_BE2_Inspector_o* MG_BlocksEngine2_Core_BE2_InputManager__get__inspector (MG_BlocksEngine2_Core_BE2_InputManager_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MG_BlocksEngine2.Core.BE2_InputManager$$get__inspector
   MG_BlocksEngine2_EditorScript_BE2_Inspector_o*
   MG_BlocksEngine2_Core_BE2_InputManager__get__inspector (MG_BlocksEngine2_Core_BE2_InputManager_o*
   __this, const MethodInfo* method); */

undefined8 native_MG_BlocksEngine2_Core_BE2_InputManager__get__inspector_602da0(void)

{
  ulong uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  
  if ((bRam000000000133ee4e & 1) == 0) {
    native_sub_43273c(&MG_BlocksEngine2_EditorScript_BE2_Inspector_TypeInfo_12d3a10);
    native_sub_43273c(&Method_UnityEngine_Object_FindObjectOfType_BE2_Inspector____12e5a00);
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    bRam000000000133ee4e = 1;
  }
  uVar3 = **(undefined8 **)(_MG_BlocksEngine2_EditorScript_BE2_Inspector_TypeInfo_12d3a10 + 0xb8);
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar1 = native_UnityEngine_Object__op_Implicit_8e1b98(uVar3,0);
  if ((uVar1 & 1) == 0) {
    if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    uVar3 = native_UnityEngine_Object__FindObjectOfType_BE2_DragDropManager__4a6274
                      (_Method_UnityEngine_Object_FindObjectOfType_BE2_Inspector____12e5a00);
    puVar2 = *(undefined8 **)(_MG_BlocksEngine2_EditorScript_BE2_Inspector_TypeInfo_12d3a10 + 0xb8);
    *puVar2 = uVar3;
    native_sub_4326e0(puVar2,uVar3);
  }
  return **(undefined8 **)(_MG_BlocksEngine2_EditorScript_BE2_Inspector_TypeInfo_12d3a10 + 0xb8);
}



/* MG_BlocksEngine2.Core.BE2_InputManager$$OnEnable @ 0x602e8c
 * void MG_BlocksEngine2_Core_BE2_InputManager__OnEnable (MG_BlocksEngine2_Core_BE2_InputManager_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MG_BlocksEngine2.Core.BE2_InputManager$$OnEnable
   void MG_BlocksEngine2_Core_BE2_InputManager__OnEnable (MG_BlocksEngine2_Core_BE2_InputManager_o*
   __this, const MethodInfo* method); */

void native_MG_BlocksEngine2_Core_BE2_InputManager__OnEnable_602e8c(long param_1)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  long lVar6;
  
  if ((bRam000000000133edf4 & 1) == 0) {
    native_sub_43273c(&MG_BlocksEngine2_Core_BE2_InputManager_TypeInfo_12d39e8);
    native_sub_43273c(&System_Enum_TypeInfo_12d4550);
    native_sub_43273c(&Method_System_Linq_Enumerable_Cast_KeyCode____12e3fd8);
    native_sub_43273c(&UnityEngine_KeyCode_var_12d1638);
    native_sub_43273c(&Method_System_Collections_Generic_List_KeyCode__AddRange___12dcb20);
    native_sub_43273c(&Method_System_Collections_Generic_List_KeyCode___ctor___12dcb18);
    native_sub_43273c(&System_Collections_Generic_List_KeyCode__TypeInfo_12d2ab0);
    native_sub_43273c(&System_Type_TypeInfo_12d6340);
    bRam000000000133edf4 = 1;
  }
  uVar4 = native_sub_432808(_System_Collections_Generic_List_KeyCode__TypeInfo_12d2ab0);
  native_System_Collections_Generic_List_Int32Enum____ctor_d3ac84
            (uVar4,_Method_System_Collections_Generic_List_KeyCode___ctor___12dcb18);
  puVar5 = (undefined8 *)
           (*(long *)(_MG_BlocksEngine2_Core_BE2_InputManager_TypeInfo_12d39e8 + 0xb8) + 8);
  *puVar5 = uVar4;
  native_sub_4326e0(puVar5,uVar4);
  uVar4 = _UnityEngine_KeyCode_var_12d1638;
  lVar6 = *(long *)(*(long *)(_MG_BlocksEngine2_Core_BE2_InputManager_TypeInfo_12d39e8 + 0xb8) + 8);
  if (((*(byte *)(_System_Type_TypeInfo_12d6340 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_System_Type_TypeInfo_12d6340 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar4 = native_System_Type__GetTypeFromHandle_b0fb24(uVar4,0);
  if (((*(byte *)(_System_Enum_TypeInfo_12d4550 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_System_Enum_TypeInfo_12d4550 + 0xe0) == 0)) {
    native_sub_4327ec(_System_Enum_TypeInfo_12d4550);
  }
  uVar4 = native_System_Enum__GetValues_becd20(uVar4,0);
  uVar4 = native_System_Linq_Enumerable__Cast_Int32Enum__49ef34
                    (uVar4,_Method_System_Linq_Enumerable_Cast_KeyCode____12e3fd8);
  if (lVar6 != 0) {
    native_System_Collections_Generic_List_Int32Enum___AddRange_d3bc2c
              (lVar6,uVar4,_Method_System_Collections_Generic_List_KeyCode__AddRange___12dcb20);
    uVar4 = native_MG_BlocksEngine2_Core_BE2_MainEventsManager__get_Instance_6001fc();
    *(undefined8 *)(param_1 + 0x28) = uVar4;
    native_sub_4326e0((undefined8 *)(param_1 + 0x28),uVar4);
    uVar4 = native_MG_BlocksEngine2_DragDrop_BE2_DragDropManager__get_Instance_576470(0);
    *(undefined8 *)(param_1 + 0x30) = uVar4;
    if (iRam0000000001345318 != 0) {
      puVar1 = (ulong *)((param_1 + 0x30U >> 0x12 & 0x7fff) * 8 + 0x138ecd8);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = *puVar1 | 1L << (param_1 + 0x30U >> 0xc & 0x3f);
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* MG_BlocksEngine2.Core.BE2_InputManager$$OnUpdate @ 0x603034
 * void MG_BlocksEngine2_Core_BE2_InputManager__OnUpdate (MG_BlocksEngine2_Core_BE2_InputManager_o* __this, const MethodInfo* method); */

/* MG_BlocksEngine2.Core.BE2_InputManager$$OnUpdate
   void MG_BlocksEngine2_Core_BE2_InputManager__OnUpdate (MG_BlocksEngine2_Core_BE2_InputManager_o*
   __this, const MethodInfo* method); */

void native_MG_BlocksEngine2_Core_BE2_InputManager__OnUpdate_603034
               (undefined1 param_1 [16],undefined8 param_2,long param_3)

{
  ulong uVar1;
  long lVar2;
  float fVar3;
  undefined8 uVar4;
  float fVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  
  uVar1 = native_UnityEngine_Input__GetKeyDown_dbdc64(*(undefined4 *)(param_3 + 0x18),0);
  if ((uVar1 & 1) != 0) {
    if (*(long *)(param_3 + 0x28) == 0) goto LAB_00603234;
    native_MG_BlocksEngine2_Core_BE2_EventsManager__TriggerEvent_579794
              (*(long *)(param_3 + 0x28),7,0);
  }
  uVar1 = native_UnityEngine_Input__GetKeyDown_dbdc64(*(undefined4 *)(param_3 + 0x1c),0);
  if ((uVar1 & 1) != 0) {
    if (*(long *)(param_3 + 0x28) == 0) goto LAB_00603234;
    native_MG_BlocksEngine2_Core_BE2_EventsManager__TriggerEvent_579794
              (*(long *)(param_3 + 0x28),10,0);
  }
  lVar2 = *(long *)(param_3 + 0x30);
  if (lVar2 != 0) {
    if ((*(long *)(lVar2 + 0x30) != 0) && (*(char *)(lVar2 + 0x50) == '\0')) {
      fVar5 = *(float *)(param_3 + 0x38);
      fVar3 = (float)native_UnityEngine_Time__get_deltaTime_77082c(0);
      param_2 = 0x3f19999a;
      fVar5 = fVar5 + fVar3;
      *(float *)(param_3 + 0x38) = fVar5;
      if (0.6 < fVar5) {
        if (*(long *)(param_3 + 0x28) == 0) goto LAB_00603234;
        native_MG_BlocksEngine2_Core_BE2_EventsManager__TriggerEvent_579794
                  (*(long *)(param_3 + 0x28),0xb,0);
        *(undefined4 *)(param_3 + 0x38) = 0;
      }
    }
    uVar1 = native_UnityEngine_Input__GetKey_dbdbe4(*(undefined4 *)(param_3 + 0x18),0);
    if ((uVar1 & 1) != 0) {
      if (*(long *)(param_3 + 0x28) == 0) goto LAB_00603234;
      native_MG_BlocksEngine2_Core_BE2_EventsManager__TriggerEvent_579794
                (*(long *)(param_3 + 0x28),8,0);
      uVar6 = *(undefined4 *)(param_3 + 0x3c);
      uVar7 = *(undefined4 *)(param_3 + 0x40);
      uVar4 = native_UnityEngine_Input__get_mousePosition_dbdd8c(0);
      fVar3 = (float)native_UnityEngine_Vector2__Distance_7757a4(uVar6,uVar7,uVar4,param_2,0);
      param_2 = 0x3f000000;
      if (0.5 < fVar3) {
        lVar2 = native_MG_BlocksEngine2_UI_BE2_UI_ContextMenuManager__get_instance_dc6a44(0);
        if (lVar2 == 0) goto LAB_00603234;
        if (*(char *)(lVar2 + 0x30) == '\0') {
          if (*(long *)(param_3 + 0x28) == 0) goto LAB_00603234;
          native_MG_BlocksEngine2_Core_BE2_EventsManager__TriggerEvent_579794
                    (*(long *)(param_3 + 0x28),2,0);
        }
      }
    }
    uVar6 = (undefined4)param_2;
    uVar1 = native_UnityEngine_Input__GetKeyUp_dbdc24(*(undefined4 *)(param_3 + 0x18),0);
    if ((uVar1 & 1) != 0) {
      if (*(long *)(param_3 + 0x28) == 0) goto LAB_00603234;
      native_MG_BlocksEngine2_Core_BE2_EventsManager__TriggerEvent_579794
                (*(long *)(param_3 + 0x28),9,0);
      *(undefined4 *)(param_3 + 0x38) = 0;
    }
    uVar1 = native_UnityEngine_Input__GetKeyUp_dbdc24(*(undefined4 *)(param_3 + 0x1c),0);
    if ((uVar1 & 1) != 0) {
      if (*(long *)(param_3 + 0x28) == 0) goto LAB_00603234;
      native_MG_BlocksEngine2_Core_BE2_EventsManager__TriggerEvent_579794
                (*(long *)(param_3 + 0x28),0xd,0);
    }
    uVar1 = native_UnityEngine_Input__GetKeyDown_dbdc64(*(undefined4 *)(param_3 + 0x24),0);
    if ((uVar1 & 1) != 0) {
      if (*(long *)(param_3 + 0x28) == 0) goto LAB_00603234;
      native_MG_BlocksEngine2_Core_BE2_EventsManager__TriggerEvent_579794
                (*(long *)(param_3 + 0x28),0xe,0);
    }
    uVar1 = native_UnityEngine_Input__GetKeyUp_dbdc24(*(undefined4 *)(param_3 + 0x24),0);
    if ((uVar1 & 1) != 0) {
      if (*(long *)(param_3 + 0x28) == 0) goto LAB_00603234;
      native_MG_BlocksEngine2_Core_BE2_EventsManager__TriggerEvent_579794
                (*(long *)(param_3 + 0x28),0xf,0);
    }
    uVar1 = native_UnityEngine_Input__GetKeyDown_dbdc64(*(undefined4 *)(param_3 + 0x20),0);
    if ((uVar1 & 1) != 0) {
      if (*(long *)(param_3 + 0x28) == 0) goto LAB_00603234;
      native_MG_BlocksEngine2_Core_BE2_EventsManager__TriggerEvent_579794
                (*(long *)(param_3 + 0x28),0xc,0);
    }
    uVar7 = native_UnityEngine_Input__get_mousePosition_dbdd8c(0);
    *(undefined4 *)(param_3 + 0x3c) = uVar7;
    *(undefined4 *)(param_3 + 0x40) = uVar6;
    return;
  }
LAB_00603234:
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* MG_BlocksEngine2.Core.BE2_InputManager$$GetCanvasPointerPosition @ 0x602ca0
 * UnityEngine_Vector3_o MG_BlocksEngine2_Core_BE2_InputManager__GetCanvasPointerPosition (MG_BlocksEngine2_Core_BE2_InputManager_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MG_BlocksEngine2.Core.BE2_InputManager$$GetCanvasPointerPosition
   UnityEngine_Vector3_o MG_BlocksEngine2_Core_BE2_InputManager__GetCanvasPointerPosition
   (MG_BlocksEngine2_Core_BE2_InputManager_o* __this, const MethodInfo* method); */

undefined8
native_MG_BlocksEngine2_Core_BE2_InputManager__GetCanvasPointerPosition_602ca0
          (undefined1 param_1 [16],undefined8 param_2,float param_3)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  float fVar6;
  undefined8 uStack_40;
  undefined4 uStack_38;
  
  lVar1 = native_MG_BlocksEngine2_EditorScript_BE2_Inspector__get_Instance_602da4();
  if (lVar1 != 0) {
    lVar1 = native_MG_BlocksEngine2_EditorScript_BE2_Inspector__get_Camera_603238();
    lVar2 = native_MG_BlocksEngine2_EditorScript_BE2_Inspector__get_Instance_602da4();
    if (lVar2 != 0) {
      if (*(int *)(lVar2 + 0xd8) == 0) {
        if (pcRam0000000001343bf0 == (code *)0x0) {
          pcRam0000000001343bf0 = (code *)native_sub_4326f0(&UNK_00ecc355);
        }
        uVar5 = (*pcRam0000000001343bf0)(&stack0xffffffffffffffd0);
        return uVar5;
      }
      lVar2 = native_MG_BlocksEngine2_EditorScript_BE2_Inspector__get_Instance_602da4();
      if (lVar2 != 0) {
        if (*(int *)(lVar2 + 0xd8) != 1) {
          lVar2 = native_MG_BlocksEngine2_EditorScript_BE2_Inspector__get_Instance_602da4();
          if (lVar2 == 0) goto LAB_00602d9c;
          if (*(int *)(lVar2 + 0xd8) != 2) {
            uVar5 = 0;
            if ((bRam000000000133ffad & 1) == 0) {
              uVar5 = native_sub_43273c(&UnityEngine_Vector3_TypeInfo_12d66f8);
              bRam000000000133ffad = 1;
            }
            return uVar5;
          }
        }
        uVar5 = native_UnityEngine_Input__get_mousePosition_dbdd8c(0);
        lVar2 = native_MG_BlocksEngine2_DragDrop_BE2_DragDropManager__get_DragDropComponentsCanvas_578bf0
                          (0);
        if ((((lVar2 != 0) &&
             (lVar2 = native_UnityEngine_Component__get_transform_8da62c(lVar2,0), lVar2 != 0)) &&
            (native_UnityEngine_Transform__get_position_77169c(lVar2,0), lVar1 != 0)) &&
           (fVar6 = param_3, lVar1 = native_UnityEngine_Component__get_transform_8da62c(lVar1,0),
           lVar1 != 0)) {
          native_UnityEngine_Transform__get_position_77169c(lVar1,0);
          if ((bRam000000000133edf5 & 1) == 0) {
            native_sub_43273c(uVar5,param_2,param_3 - fVar6,
                              &UnityEngine_RectTransformUtility_TypeInfo_12d58f8);
            native_sub_43273c(&UnityEngine_RectTransform_TypeInfo_12d58f0);
            bRam000000000133edf5 = 1;
          }
          uStack_38 = 0;
          uStack_40 = 0;
          lVar1 = native_MG_BlocksEngine2_DragDrop_BE2_DragDropManager__get_DragDropComponentsCanvas_578bf0
                            (0);
          if (lVar1 != 0) {
            plVar3 = (long *)native_UnityEngine_Component__get_transform_8da62c(lVar1,0);
            lVar1 = native_MG_BlocksEngine2_EditorScript_BE2_Inspector__get_Instance_602da4();
            if (lVar1 != 0) {
              uVar4 = native_MG_BlocksEngine2_EditorScript_BE2_Inspector__get_Camera_603238();
              if (((*(byte *)(_UnityEngine_RectTransformUtility_TypeInfo_12d58f8 + 0x133) >> 2 & 1)
                   != 0) &&
                 (*(int *)(_UnityEngine_RectTransformUtility_TypeInfo_12d58f8 + 0xe0) == 0)) {
                native_sub_4327ec(_UnityEngine_RectTransformUtility_TypeInfo_12d58f8);
              }
              if (plVar3 == (long *)0x0) {
                plVar3 = (long *)0x0;
              }
              else if (*plVar3 != _UnityEngine_RectTransform_TypeInfo_12d58f0) {
                plVar3 = (long *)0x0;
              }
              uVar5 = native_UnityEngine_RectTransformUtility__ScreenPointToWorldPointInRectangle_db7dfc
                                (uVar5,param_2,plVar3,uVar4,&uStack_40,0);
              return uVar5;
            }
          }
                    /* WARNING: Subroutine does not return */
          native_sub_432810();
        }
      }
    }
  }
LAB_00602d9c:
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* MG_BlocksEngine2.Core.BE2_InputManager$$GetMouseInCanvas @ 0x6032c4
 * UnityEngine_Vector3_o MG_BlocksEngine2_Core_BE2_InputManager__GetMouseInCanvas (MG_BlocksEngine2_Core_BE2_InputManager_o* __this, UnityEngine_Vector3_o position, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MG_BlocksEngine2.Core.BE2_InputManager$$GetMouseInCanvas
   UnityEngine_Vector3_o MG_BlocksEngine2_Core_BE2_InputManager__GetMouseInCanvas
   (MG_BlocksEngine2_Core_BE2_InputManager_o* __this, UnityEngine_Vector3_o position, const
   MethodInfo* method); */

undefined4
native_MG_BlocksEngine2_Core_BE2_InputManager__GetMouseInCanvas_6032c4
          (undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long *plVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined4 uStack_38;
  
  if ((bRam000000000133edf5 & 1) == 0) {
    native_sub_43273c(&UnityEngine_RectTransformUtility_TypeInfo_12d58f8);
    native_sub_43273c(&UnityEngine_RectTransform_TypeInfo_12d58f0);
    bRam000000000133edf5 = 1;
  }
  uStack_38 = 0;
  uStack_40 = 0;
  lVar1 = native_MG_BlocksEngine2_DragDrop_BE2_DragDropManager__get_DragDropComponentsCanvas_578bf0
                    (0);
  if (lVar1 != 0) {
    plVar2 = (long *)native_UnityEngine_Component__get_transform_8da62c(lVar1,0);
    lVar1 = native_MG_BlocksEngine2_EditorScript_BE2_Inspector__get_Instance_602da4();
    if (lVar1 != 0) {
      uVar3 = native_MG_BlocksEngine2_EditorScript_BE2_Inspector__get_Camera_603238();
      if (((*(byte *)(_UnityEngine_RectTransformUtility_TypeInfo_12d58f8 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_UnityEngine_RectTransformUtility_TypeInfo_12d58f8 + 0xe0) == 0)) {
        native_sub_4327ec(_UnityEngine_RectTransformUtility_TypeInfo_12d58f8);
      }
      if (plVar2 == (long *)0x0) {
        plVar2 = (long *)0x0;
      }
      else if (*plVar2 != _UnityEngine_RectTransform_TypeInfo_12d58f0) {
        plVar2 = (long *)0x0;
      }
      native_UnityEngine_RectTransformUtility__ScreenPointToWorldPointInRectangle_db7dfc
                (param_1,param_2,plVar2,uVar3,&uStack_40,0);
      return (undefined4)uStack_40;
    }
  }
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* MG_BlocksEngine2.Core.BE2_InputManager$$.ctor @ 0x6033c0
 * void MG_BlocksEngine2_Core_BE2_InputManager___ctor (MG_BlocksEngine2_Core_BE2_InputManager_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MG_BlocksEngine2.Core.BE2_InputManager$$.ctor
   void MG_BlocksEngine2_Core_BE2_InputManager___ctor (MG_BlocksEngine2_Core_BE2_InputManager_o*
   __this, const MethodInfo* method); */

undefined1  [16] native_MG_BlocksEngine2_Core_BE2_InputManager___ctor_6033c0(ulong param_1)

{
  undefined1 auVar1 [16];
  
  *(undefined8 *)(param_1 + 0x20) = 0x1320000007f;
  *(undefined8 *)(param_1 + 0x18) = 0x14400000143;
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


