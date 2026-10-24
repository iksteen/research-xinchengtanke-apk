/* ARM64 IL2CPP native pseudocode from Ghidra.
 * Recovered implementation, not original C# source.
 * Function boundaries follow the IL2CPP method address table. */


/* MG_BlocksEngine2.Environment.BE2_Zoom$$OnEnable @ 0xdd0810
 * void MG_BlocksEngine2_Environment_BE2_Zoom__OnEnable (MG_BlocksEngine2_Environment_BE2_Zoom_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MG_BlocksEngine2.Environment.BE2_Zoom$$OnEnable
   void MG_BlocksEngine2_Environment_BE2_Zoom__OnEnable (MG_BlocksEngine2_Environment_BE2_Zoom_o*
   __this, const MethodInfo* method); */

void native_MG_BlocksEngine2_Environment_BE2_Zoom__OnEnable_dd0810(long param_1)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined8 uVar5;
  
  if ((bRam0000000001346e26 & 1) == 0) {
    native_sub_43273c(&Method_MG_BlocksEngine2_Environment_BE2_Zoom_HandleZoom___12e2338);
    native_sub_43273c(&Method_MG_BlocksEngine2_Environment_BE2_Zoom_SetAuxKeyDown___12e2340);
    native_sub_43273c(&Method_MG_BlocksEngine2_Environment_BE2_Zoom_SetAuxKeyUp___12e2348);
    native_sub_43273c(&Method_MG_BlocksEngine2_Environment_BE2_Zoom_SetPrimaryKeyDown___12e2350);
    native_sub_43273c(&Method_MG_BlocksEngine2_Environment_BE2_Zoom_SetPrimaryKeyUp___12e2358);
    native_sub_43273c(&Method_UnityEngine_Component_GetComponent_I_BE2_ProgrammingEnv____12e2a58);
    native_sub_43273c(&UnityEngine_Events_UnityAction_TypeInfo_12d65d0);
    bRam0000000001346e26 = 1;
  }
  lVar4 = native_MG_BlocksEngine2_Core_BE2_ExecutionManager__get_Instance_564464(0);
  uVar5 = native_sub_432808(_UnityEngine_Events_UnityAction_TypeInfo_12d65d0);
  native_UnityEngine_Events_UnityAction___ctor_773130
            (uVar5,param_1,_Method_MG_BlocksEngine2_Environment_BE2_Zoom_HandleZoom___12e2338,0);
  if (lVar4 != 0) {
    native_MG_BlocksEngine2_Core_BE2_ExecutionManager__AddToLateUpdate_564550(lVar4,uVar5,0);
    lVar4 = native_MG_BlocksEngine2_Core_BE2_MainEventsManager__get_Instance_6001fc(0);
    uVar5 = native_sub_432808(_UnityEngine_Events_UnityAction_TypeInfo_12d65d0);
    native_UnityEngine_Events_UnityAction___ctor_773130
              (uVar5,param_1,
               _Method_MG_BlocksEngine2_Environment_BE2_Zoom_SetPrimaryKeyDown___12e2350,0);
    if (lVar4 != 0) {
      native_MG_BlocksEngine2_Core_BE2_EventsManager__StartListening_563268(lVar4,7,uVar5,0);
      lVar4 = native_MG_BlocksEngine2_Core_BE2_MainEventsManager__get_Instance_6001fc(0);
      uVar5 = native_sub_432808(_UnityEngine_Events_UnityAction_TypeInfo_12d65d0);
      native_UnityEngine_Events_UnityAction___ctor_773130
                (uVar5,param_1,
                 _Method_MG_BlocksEngine2_Environment_BE2_Zoom_SetPrimaryKeyUp___12e2358,0);
      if (lVar4 != 0) {
        native_MG_BlocksEngine2_Core_BE2_EventsManager__StartListening_563268(lVar4,9,uVar5,0);
        lVar4 = native_MG_BlocksEngine2_Core_BE2_MainEventsManager__get_Instance_6001fc(0);
        uVar5 = native_sub_432808(_UnityEngine_Events_UnityAction_TypeInfo_12d65d0);
        native_UnityEngine_Events_UnityAction___ctor_773130
                  (uVar5,param_1,
                   _Method_MG_BlocksEngine2_Environment_BE2_Zoom_SetAuxKeyDown___12e2340,0);
        if (lVar4 != 0) {
          native_MG_BlocksEngine2_Core_BE2_EventsManager__StartListening_563268(lVar4,0xe,uVar5,0);
          lVar4 = native_MG_BlocksEngine2_Core_BE2_MainEventsManager__get_Instance_6001fc(0);
          uVar5 = native_sub_432808(_UnityEngine_Events_UnityAction_TypeInfo_12d65d0);
          native_UnityEngine_Events_UnityAction___ctor_773130
                    (uVar5,param_1,
                     _Method_MG_BlocksEngine2_Environment_BE2_Zoom_SetAuxKeyUp___12e2348,0);
          if (lVar4 != 0) {
            native_MG_BlocksEngine2_Core_BE2_EventsManager__StartListening_563268(lVar4,0xf,uVar5,0)
            ;
            uVar5 = native_UnityEngine_Component__GetComponent_ActiveAnimation__49daec
                              (param_1,
                               _Method_UnityEngine_Component_GetComponent_I_BE2_ProgrammingEnv____12e2a58
                              );
            *(undefined8 *)(param_1 + 0x38) = uVar5;
            if (iRam0000000001345318 != 0) {
              puVar1 = (ulong *)((param_1 + 0x38U >> 0x12 & 0x7fff) * 8 + 0x138ecd8);
              do {
                cVar2 = '\x01';
                bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
                if (bVar3) {
                  *puVar1 = *puVar1 | 1L << (param_1 + 0x38U >> 0xc & 0x3f);
                  cVar2 = ExclusiveMonitorsStatus();
                }
              } while (cVar2 != '\0');
            }
            return;
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* MG_BlocksEngine2.Environment.BE2_Zoom$$OnDisable @ 0xdd0a40
 * void MG_BlocksEngine2_Environment_BE2_Zoom__OnDisable (MG_BlocksEngine2_Environment_BE2_Zoom_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MG_BlocksEngine2.Environment.BE2_Zoom$$OnDisable
   void MG_BlocksEngine2_Environment_BE2_Zoom__OnDisable (MG_BlocksEngine2_Environment_BE2_Zoom_o*
   __this, const MethodInfo* method); */

void native_MG_BlocksEngine2_Environment_BE2_Zoom__OnDisable_dd0a40(undefined8 param_1)

{
  ulong uVar1;
  long lVar2;
  undefined8 uVar3;
  long lStack_38;
  
  if ((bRam0000000001346e27 & 1) == 0) {
    native_sub_43273c(&Method_MG_BlocksEngine2_Environment_BE2_Zoom_HandleZoom___12e2338);
    native_sub_43273c(&Method_MG_BlocksEngine2_Environment_BE2_Zoom_SetAuxKeyDown___12e2340);
    native_sub_43273c(&Method_MG_BlocksEngine2_Environment_BE2_Zoom_SetAuxKeyUp___12e2348);
    native_sub_43273c(&Method_MG_BlocksEngine2_Environment_BE2_Zoom_SetPrimaryKeyDown___12e2350);
    native_sub_43273c(&Method_MG_BlocksEngine2_Environment_BE2_Zoom_SetPrimaryKeyUp___12e2358);
    native_sub_43273c(&UnityEngine_Events_UnityAction_TypeInfo_12d65d0);
    bRam0000000001346e27 = 1;
  }
  lVar2 = native_MG_BlocksEngine2_Core_BE2_ExecutionManager__get_Instance_564464(0);
  if (lVar2 != 0) {
    uVar3 = native_sub_432808(_UnityEngine_Events_UnityAction_TypeInfo_12d65d0);
    native_UnityEngine_Events_UnityAction___ctor_773130
              (uVar3,param_1,_Method_MG_BlocksEngine2_Environment_BE2_Zoom_HandleZoom___12e2338,0);
    native_MG_BlocksEngine2_Core_BE2_ExecutionManager__RemoveFromLateUpdate_56469c(lVar2,uVar3,0);
  }
  lVar2 = native_MG_BlocksEngine2_Core_BE2_MainEventsManager__get_Instance_6001fc(0);
  uVar3 = native_sub_432808(_UnityEngine_Events_UnityAction_TypeInfo_12d65d0);
  native_UnityEngine_Events_UnityAction___ctor_773130
            (uVar3,param_1,_Method_MG_BlocksEngine2_Environment_BE2_Zoom_SetPrimaryKeyDown___12e2350
             ,0);
  if (lVar2 != 0) {
    native_MG_BlocksEngine2_Core_BE2_EventsManager__StopListening_56340c(lVar2,7,uVar3,0);
    lVar2 = native_MG_BlocksEngine2_Core_BE2_MainEventsManager__get_Instance_6001fc(0);
    uVar3 = native_sub_432808(_UnityEngine_Events_UnityAction_TypeInfo_12d65d0);
    native_UnityEngine_Events_UnityAction___ctor_773130
              (uVar3,param_1,_Method_MG_BlocksEngine2_Environment_BE2_Zoom_SetPrimaryKeyUp___12e2358
               ,0);
    if (lVar2 != 0) {
      native_MG_BlocksEngine2_Core_BE2_EventsManager__StopListening_56340c(lVar2,9,uVar3,0);
      lVar2 = native_MG_BlocksEngine2_Core_BE2_MainEventsManager__get_Instance_6001fc(0);
      uVar3 = native_sub_432808(_UnityEngine_Events_UnityAction_TypeInfo_12d65d0);
      native_UnityEngine_Events_UnityAction___ctor_773130
                (uVar3,param_1,_Method_MG_BlocksEngine2_Environment_BE2_Zoom_SetAuxKeyDown___12e2340
                 ,0);
      if (lVar2 != 0) {
        native_MG_BlocksEngine2_Core_BE2_EventsManager__StopListening_56340c(lVar2,0xe,uVar3,0);
        lVar2 = native_MG_BlocksEngine2_Core_BE2_MainEventsManager__get_Instance_6001fc(0);
        uVar3 = native_sub_432808(_UnityEngine_Events_UnityAction_TypeInfo_12d65d0);
        native_UnityEngine_Events_UnityAction___ctor_773130
                  (uVar3,param_1,_Method_MG_BlocksEngine2_Environment_BE2_Zoom_SetAuxKeyUp___12e2348
                   ,0);
        if (lVar2 != 0) {
          if ((bRam000000000133eaf6 & 1) == 0) {
            native_sub_43273c(&
                              Method_System_Collections_Generic_Dictionary_BE2EventTypes__UnityEvent__TryGetValue___12d8ea8
                              ,0xf,uVar3,0);
            bRam000000000133eaf6 = 1;
          }
          lStack_38 = 0;
          if (*(long *)(lVar2 + 0x10) != 0) {
            uVar1 = native_System_Collections_Generic_Dictionary_BE2EventTypes__UnityEvent___TryGetValue_c25318
                              (*(long *)(lVar2 + 0x10),0xf,&lStack_38,
                               _Method_System_Collections_Generic_Dictionary_BE2EventTypes__UnityEvent__TryGetValue___12d8ea8
                              );
            if ((uVar1 & 1) != 0) {
              if (lStack_38 == 0) goto LAB_0056349c;
              native_UnityEngine_Events_UnityEvent__RemoveListener_773574(lStack_38,uVar3,0);
            }
            return;
          }
LAB_0056349c:
                    /* WARNING: Subroutine does not return */
          native_sub_432810();
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* MG_BlocksEngine2.Environment.BE2_Zoom$$SetPrimaryKeyDown @ 0xdd0c44
 * void MG_BlocksEngine2_Environment_BE2_Zoom__SetPrimaryKeyDown (MG_BlocksEngine2_Environment_BE2_Zoom_o* __this, const MethodInfo* method); */

/* MG_BlocksEngine2.Environment.BE2_Zoom$$SetPrimaryKeyDown
   void MG_BlocksEngine2_Environment_BE2_Zoom__SetPrimaryKeyDown
   (MG_BlocksEngine2_Environment_BE2_Zoom_o* __this, const MethodInfo* method); */

void native_MG_BlocksEngine2_Environment_BE2_Zoom__SetPrimaryKeyDown_dd0c44(long param_1)

{
  *(undefined1 *)(param_1 + 0x40) = 1;
  return;
}



/* MG_BlocksEngine2.Environment.BE2_Zoom$$SetPrimaryKeyUp @ 0xdd0c50
 * void MG_BlocksEngine2_Environment_BE2_Zoom__SetPrimaryKeyUp (MG_BlocksEngine2_Environment_BE2_Zoom_o* __this, const MethodInfo* method); */

/* MG_BlocksEngine2.Environment.BE2_Zoom$$SetPrimaryKeyUp
   void MG_BlocksEngine2_Environment_BE2_Zoom__SetPrimaryKeyUp
   (MG_BlocksEngine2_Environment_BE2_Zoom_o* __this, const MethodInfo* method); */

void native_MG_BlocksEngine2_Environment_BE2_Zoom__SetPrimaryKeyUp_dd0c50(long param_1)

{
  *(undefined1 *)(param_1 + 0x40) = 0;
  return;
}



/* MG_BlocksEngine2.Environment.BE2_Zoom$$SetAuxKeyDown @ 0xdd0c58
 * void MG_BlocksEngine2_Environment_BE2_Zoom__SetAuxKeyDown (MG_BlocksEngine2_Environment_BE2_Zoom_o* __this, const MethodInfo* method); */

/* MG_BlocksEngine2.Environment.BE2_Zoom$$SetAuxKeyDown
   void MG_BlocksEngine2_Environment_BE2_Zoom__SetAuxKeyDown
   (MG_BlocksEngine2_Environment_BE2_Zoom_o* __this, const MethodInfo* method); */

void native_MG_BlocksEngine2_Environment_BE2_Zoom__SetAuxKeyDown_dd0c58(long param_1)

{
  *(undefined1 *)(param_1 + 0x41) = 1;
  return;
}



/* MG_BlocksEngine2.Environment.BE2_Zoom$$SetAuxKeyUp @ 0xdd0c64
 * void MG_BlocksEngine2_Environment_BE2_Zoom__SetAuxKeyUp (MG_BlocksEngine2_Environment_BE2_Zoom_o* __this, const MethodInfo* method); */

/* MG_BlocksEngine2.Environment.BE2_Zoom$$SetAuxKeyUp
   void MG_BlocksEngine2_Environment_BE2_Zoom__SetAuxKeyUp (MG_BlocksEngine2_Environment_BE2_Zoom_o*
   __this, const MethodInfo* method); */

void native_MG_BlocksEngine2_Environment_BE2_Zoom__SetAuxKeyUp_dd0c64(long param_1)

{
  *(undefined1 *)(param_1 + 0x41) = 0;
  return;
}



/* MG_BlocksEngine2.Environment.BE2_Zoom$$HandleZoom @ 0xdd0c6c
 * void MG_BlocksEngine2_Environment_BE2_Zoom__HandleZoom (MG_BlocksEngine2_Environment_BE2_Zoom_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MG_BlocksEngine2.Environment.BE2_Zoom$$HandleZoom
   void MG_BlocksEngine2_Environment_BE2_Zoom__HandleZoom (MG_BlocksEngine2_Environment_BE2_Zoom_o*
   __this, const MethodInfo* method); */

void native_MG_BlocksEngine2_Environment_BE2_Zoom__HandleZoom_dd0c6c
               (undefined1 param_1 [16],undefined1 param_2 [16],undefined4 param_3,long param_4)

{
  long *plVar1;
  undefined8 *puVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  int *piVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  undefined8 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  
  if ((bRam0000000001346e28 & 1) == 0) {
    native_sub_43273c(&MG_BlocksEngine2_Core_I_BE2_InputManager_TypeInfo_12d4e20);
    native_sub_43273c(&StringLiteral_Mouse_ScrollWheel_12efae8);
    bRam0000000001346e28 = 1;
  }
  fVar7 = (float)native_UnityEngine_Input__GetAxis_dbd998
                           (_StringLiteral_Mouse_ScrollWheel_12efae8,0);
  uVar11 = 0x80000000;
  if (((fVar7 == -0.0) || (*(char *)(param_4 + 0x40) != '\0')) ||
     (*(char *)(param_4 + 0x41) == '\0')) {
    return;
  }
  plVar1 = (long *)native_MG_BlocksEngine2_Core_BE2_InputManager__get_Instance_602b04(0);
  if (plVar1 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    native_sub_432810();
  }
  lVar4 = *plVar1;
  if ((ulong)*(ushort *)(lVar4 + 0x12a) != 0) {
    uVar5 = 0;
    piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
    do {
      if (*(long *)(piVar6 + -2) == _MG_BlocksEngine2_Core_I_BE2_InputManager_TypeInfo_12d4e20) {
        puVar2 = (undefined8 *)(lVar4 + (long)(*piVar6 + 2) * 0x10 + 0x138);
        goto LAB_00dd0d68;
      }
      uVar5 = uVar5 + 1;
      piVar6 = piVar6 + 4;
    } while (uVar5 < *(ushort *)(lVar4 + 0x12a));
  }
  puVar2 = (undefined8 *)
           native_sub_3c9b34(plVar1,_MG_BlocksEngine2_Core_I_BE2_InputManager_TypeInfo_12d4e20,2);
LAB_00dd0d68:
  fVar8 = (float)(*(code *)*puVar2)(plVar1,puVar2[1]);
  fVar9 = fVar8;
  if ((bRam0000000001346e29 & 1) == 0) {
    native_sub_43273c(&UnityEngine_RectTransform_TypeInfo_12d58f0);
    native_sub_43273c(&UnityEngine_Vector3___TypeInfo_12d3478);
    bRam0000000001346e29 = 1;
  }
  plVar1 = (long *)native_UnityEngine_Component__get_transform_8da62c(param_4,0);
  lVar4 = native_sub_432750(_UnityEngine_Vector3___TypeInfo_12d3478,4);
  if ((plVar1 == (long *)0x0) || (*plVar1 != _UnityEngine_RectTransform_TypeInfo_12d58f0))
  goto LAB_00dd1000;
  native_UnityEngine_RectTransform__GetWorldCorners_765644(plVar1,lVar4,0);
  if (-fVar7 <= 0.0) {
LAB_00dd0eac:
    if (-fVar7 < 0.0) {
      lVar3 = native_UnityEngine_Component__get_transform_8da62c(param_4,0);
      if (lVar3 == 0) goto LAB_00dd1000;
      native_UnityEngine_Transform__get_localScale_771d80(lVar3,0);
      if (fVar9 < *(float *)(param_4 + 0x20)) {
        lVar3 = native_UnityEngine_Component__get_transform_8da62c(param_4,0);
        if (lVar3 == 0) goto LAB_00dd1000;
        native_UnityEngine_Transform__get_localScale_771d80(lVar3,0);
        uVar12 = *(undefined4 *)(param_4 + 0x20);
        uVar13 = *(undefined4 *)(param_4 + 0x1c);
        fVar9 = fVar9 * *(float *)(param_4 + 0x24);
        goto LAB_00dd0efc;
      }
    }
  }
  else {
    lVar3 = native_UnityEngine_Component__get_transform_8da62c(param_4,0);
    if (lVar3 == 0) goto LAB_00dd1000;
    native_UnityEngine_Transform__get_localScale_771d80(lVar3,0);
    if (fVar9 <= *(float *)(param_4 + 0x1c)) goto LAB_00dd0eac;
    lVar3 = native_UnityEngine_Component__get_transform_8da62c(param_4,0);
    if (lVar3 == 0) goto LAB_00dd1000;
    native_UnityEngine_Transform__get_localScale_771d80(lVar3,0);
    uVar12 = *(undefined4 *)(param_4 + 0x20);
    uVar13 = *(undefined4 *)(param_4 + 0x1c);
    fVar9 = fVar9 / *(float *)(param_4 + 0x24);
LAB_00dd0efc:
    uVar10 = native_UnityEngine_Mathf__Clamp_8e51ec(fVar9,uVar13,uVar12,0);
    lVar3 = native_UnityEngine_Component__get_transform_8da62c(param_4,0);
    if (lVar3 == 0) goto LAB_00dd1000;
    native_UnityEngine_Transform__set_localScale_771e30(uVar10,uVar10,0x3f800000,lVar3,0);
  }
  *(float *)(param_4 + 0x28) = fVar8;
  *(undefined4 *)(param_4 + 0x2c) = uVar11;
  *(undefined4 *)(param_4 + 0x30) = param_3;
  lVar3 = native_sub_432750(_UnityEngine_Vector3___TypeInfo_12d3478,4);
  native_UnityEngine_RectTransform__GetWorldCorners_765644(plVar1,lVar3,0);
  if (lVar4 != 0) {
    if ((1 < *(uint *)(lVar4 + 0x18)) && (*(uint *)(lVar4 + 0x18) != 2)) {
      if (lVar3 == 0) goto LAB_00dd1000;
      if ((1 < *(uint *)(lVar3 + 0x18)) && (*(uint *)(lVar3 + 0x18) != 2)) {
        lVar4 = native_UnityEngine_Component__get_transform_8da62c(param_4,0);
        if (lVar4 != 0) {
          native_UnityEngine_Transform__get_position_77169c(lVar4,0);
          lVar4 = native_UnityEngine_Component__get_transform_8da62c(param_4,0);
          if (lVar4 != 0) {
            if (pcRam000000000133fed8 == (code *)0x0) {
              pcRam000000000133fed8 = (code *)native_sub_4326f0(&UNK_00e2ad18,0);
            }
            (*pcRam000000000133fed8)(lVar4,&stack0xffffffffffffffd0);
            return;
          }
        }
                    /* WARNING: Subroutine does not return */
        native_sub_432810();
      }
    }
    uVar10 = native_sub_43283c();
                    /* WARNING: Subroutine does not return */
    native_sub_4327dc(uVar10,0);
  }
LAB_00dd1000:
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* MG_BlocksEngine2.Environment.BE2_Zoom$$Zoom @ 0xdd0da8
 * void MG_BlocksEngine2_Environment_BE2_Zoom__Zoom (MG_BlocksEngine2_Environment_BE2_Zoom_o* __this, float scrollWheel, UnityEngine_Vector3_o zoomAnchorPosition, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MG_BlocksEngine2.Environment.BE2_Zoom$$Zoom
   void MG_BlocksEngine2_Environment_BE2_Zoom__Zoom (MG_BlocksEngine2_Environment_BE2_Zoom_o*
   __this, float scrollWheel, UnityEngine_Vector3_o zoomAnchorPosition, const MethodInfo* method);
    */

void native_MG_BlocksEngine2_Environment_BE2_Zoom__Zoom_dd0da8
               (float param_1,float param_2,undefined4 param_3,undefined4 param_4,long param_5)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  float fVar4;
  undefined8 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  
  fVar4 = param_2;
  if ((bRam0000000001346e29 & 1) == 0) {
    native_sub_43273c(&UnityEngine_RectTransform_TypeInfo_12d58f0);
    native_sub_43273c(&UnityEngine_Vector3___TypeInfo_12d3478);
    bRam0000000001346e29 = 1;
  }
  plVar1 = (long *)native_UnityEngine_Component__get_transform_8da62c(param_5,0);
  lVar2 = native_sub_432750(_UnityEngine_Vector3___TypeInfo_12d3478,4);
  if ((plVar1 == (long *)0x0) || (*plVar1 != _UnityEngine_RectTransform_TypeInfo_12d58f0))
  goto LAB_00dd1000;
  native_UnityEngine_RectTransform__GetWorldCorners_765644(plVar1,lVar2,0);
  if (param_1 <= 0.0) {
LAB_00dd0eac:
    if (param_1 < 0.0) {
      lVar3 = native_UnityEngine_Component__get_transform_8da62c(param_5,0);
      if (lVar3 == 0) goto LAB_00dd1000;
      native_UnityEngine_Transform__get_localScale_771d80(lVar3,0);
      if (fVar4 < *(float *)(param_5 + 0x20)) {
        lVar3 = native_UnityEngine_Component__get_transform_8da62c(param_5,0);
        if (lVar3 == 0) goto LAB_00dd1000;
        native_UnityEngine_Transform__get_localScale_771d80(lVar3,0);
        uVar6 = *(undefined4 *)(param_5 + 0x20);
        uVar7 = *(undefined4 *)(param_5 + 0x1c);
        fVar4 = fVar4 * *(float *)(param_5 + 0x24);
        goto LAB_00dd0efc;
      }
    }
  }
  else {
    lVar3 = native_UnityEngine_Component__get_transform_8da62c(param_5,0);
    if (lVar3 == 0) goto LAB_00dd1000;
    native_UnityEngine_Transform__get_localScale_771d80(lVar3,0);
    if (fVar4 <= *(float *)(param_5 + 0x1c)) goto LAB_00dd0eac;
    lVar3 = native_UnityEngine_Component__get_transform_8da62c(param_5,0);
    if (lVar3 == 0) goto LAB_00dd1000;
    native_UnityEngine_Transform__get_localScale_771d80(lVar3,0);
    uVar6 = *(undefined4 *)(param_5 + 0x20);
    uVar7 = *(undefined4 *)(param_5 + 0x1c);
    fVar4 = fVar4 / *(float *)(param_5 + 0x24);
LAB_00dd0efc:
    uVar5 = native_UnityEngine_Mathf__Clamp_8e51ec(fVar4,uVar7,uVar6,0);
    lVar3 = native_UnityEngine_Component__get_transform_8da62c(param_5,0);
    if (lVar3 == 0) goto LAB_00dd1000;
    native_UnityEngine_Transform__set_localScale_771e30(uVar5,uVar5,0x3f800000,lVar3,0);
  }
  *(float *)(param_5 + 0x28) = param_2;
  *(undefined4 *)(param_5 + 0x2c) = param_3;
  *(undefined4 *)(param_5 + 0x30) = param_4;
  lVar3 = native_sub_432750(_UnityEngine_Vector3___TypeInfo_12d3478,4);
  native_UnityEngine_RectTransform__GetWorldCorners_765644(plVar1,lVar3,0);
  if (lVar2 != 0) {
    if ((1 < *(uint *)(lVar2 + 0x18)) && (*(uint *)(lVar2 + 0x18) != 2)) {
      if (lVar3 == 0) goto LAB_00dd1000;
      if ((1 < *(uint *)(lVar3 + 0x18)) && (*(uint *)(lVar3 + 0x18) != 2)) {
        lVar2 = native_UnityEngine_Component__get_transform_8da62c(param_5,0);
        if (lVar2 != 0) {
          native_UnityEngine_Transform__get_position_77169c(lVar2,0);
          lVar2 = native_UnityEngine_Component__get_transform_8da62c(param_5,0);
          if (lVar2 != 0) {
            if (pcRam000000000133fed8 == (code *)0x0) {
              pcRam000000000133fed8 = (code *)native_sub_4326f0(&UNK_00e2ad18,0);
            }
            (*pcRam000000000133fed8)(lVar2,&stack0xffffffffffffffd0);
            return;
          }
        }
                    /* WARNING: Subroutine does not return */
        native_sub_432810();
      }
    }
    uVar5 = native_sub_43283c();
                    /* WARNING: Subroutine does not return */
    native_sub_4327dc(uVar5,0);
  }
LAB_00dd1000:
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* MG_BlocksEngine2.Environment.BE2_Zoom$$ZoomIn @ 0xdd10ac
 * void MG_BlocksEngine2_Environment_BE2_Zoom__ZoomIn (MG_BlocksEngine2_Environment_BE2_Zoom_o* __this, const MethodInfo* method); */

/* WARNING: Removing unreachable block (ram,0x00dd0e60) */
/* WARNING: Removing unreachable block (ram,0x00dd0e70) */
/* WARNING: Removing unreachable block (ram,0x00dd0e7c) */
/* WARNING: Removing unreachable block (ram,0x00dd0e80) */
/* WARNING: Removing unreachable block (ram,0x00dd0e84) */
/* WARNING: Removing unreachable block (ram,0x00dd0e94) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MG_BlocksEngine2.Environment.BE2_Zoom$$ZoomIn
   void MG_BlocksEngine2_Environment_BE2_Zoom__ZoomIn (MG_BlocksEngine2_Environment_BE2_Zoom_o*
   __this, const MethodInfo* method); */

void native_MG_BlocksEngine2_Environment_BE2_Zoom__ZoomIn_dd10ac
               (undefined1 param_1 [16],undefined1 param_2 [16],undefined4 param_3,long param_4)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  undefined8 uVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  
  if ((bRam0000000001346e2a & 1) == 0) {
    native_sub_43273c(&UnityEngine_RectTransform_TypeInfo_12d58f0);
    native_sub_43273c(&UnityEngine_Vector3___TypeInfo_12d3478);
    bRam0000000001346e2a = 1;
  }
  lVar2 = native_UnityEngine_Component__get_transform_8da62c(param_4,0);
  if (lVar2 != 0) {
    plVar3 = (long *)native_UnityEngine_Transform__get_parent_765eb0(lVar2,0);
    lVar2 = native_sub_432750(_UnityEngine_Vector3___TypeInfo_12d3478,4);
    if (((plVar3 != (long *)0x0) && (*plVar3 == _UnityEngine_RectTransform_TypeInfo_12d58f0)) &&
       (native_UnityEngine_RectTransform__GetWorldCorners_765644(plVar3,lVar2,0), lVar2 != 0)) {
      if ((*(uint *)(lVar2 + 0x18) < 2) || (*(uint *)(lVar2 + 0x18) == 2)) {
        uVar4 = native_sub_43283c();
                    /* WARNING: Subroutine does not return */
        native_sub_4327dc(uVar4,0);
      }
      fVar7 = *(float *)(lVar2 + 0x38);
      fVar8 = *(float *)(lVar2 + 0x2c);
      fVar5 = *(float *)(lVar2 + 0x30);
      fVar6 = *(float *)(lVar2 + 0x24);
      lVar2 = native_UnityEngine_Component__get_transform_8da62c(param_4,0);
      if (lVar2 != 0) {
        native_UnityEngine_Transform__get_position_77169c(lVar2,0);
        fVar8 = (fVar8 + fVar7) * 0.5;
        fVar7 = fVar8;
        if ((bRam0000000001346e29 & 1) == 0) {
          native_sub_43273c(&UnityEngine_RectTransform_TypeInfo_12d58f0);
          native_sub_43273c(&UnityEngine_Vector3___TypeInfo_12d3478);
          bRam0000000001346e29 = 1;
        }
        plVar3 = (long *)native_UnityEngine_Component__get_transform_8da62c(param_4,0);
        lVar2 = native_sub_432750(_UnityEngine_Vector3___TypeInfo_12d3478,4);
        if ((plVar3 != (long *)0x0) && (*plVar3 == _UnityEngine_RectTransform_TypeInfo_12d58f0)) {
          native_UnityEngine_RectTransform__GetWorldCorners_765644(plVar3,lVar2,0);
          lVar1 = native_UnityEngine_Component__get_transform_8da62c(param_4,0);
          if (lVar1 != 0) {
            native_UnityEngine_Transform__get_localScale_771d80(lVar1,0);
            if (fVar7 < *(float *)(param_4 + 0x20)) {
              lVar1 = native_UnityEngine_Component__get_transform_8da62c(param_4,0);
              if (lVar1 == 0) goto LAB_00dd1000;
              native_UnityEngine_Transform__get_localScale_771d80(lVar1,0);
              uVar4 = native_UnityEngine_Mathf__Clamp_8e51ec
                                (fVar7 * *(float *)(param_4 + 0x24),*(undefined4 *)(param_4 + 0x1c),
                                 *(undefined4 *)(param_4 + 0x20),0);
              lVar1 = native_UnityEngine_Component__get_transform_8da62c(param_4,0);
              if (lVar1 == 0) goto LAB_00dd1000;
              native_UnityEngine_Transform__set_localScale_771e30(uVar4,uVar4,0x3f800000,lVar1,0);
            }
            *(float *)(param_4 + 0x28) = fVar8;
            *(float *)(param_4 + 0x2c) = (fVar5 + fVar6) * 0.5;
            *(undefined4 *)(param_4 + 0x30) = param_3;
            lVar1 = native_sub_432750(_UnityEngine_Vector3___TypeInfo_12d3478,4);
            native_UnityEngine_RectTransform__GetWorldCorners_765644(plVar3,lVar1,0);
            if (lVar2 != 0) {
              if ((1 < *(uint *)(lVar2 + 0x18)) && (*(uint *)(lVar2 + 0x18) != 2)) {
                if (lVar1 == 0) goto LAB_00dd1000;
                if ((1 < *(uint *)(lVar1 + 0x18)) && (*(uint *)(lVar1 + 0x18) != 2)) {
                  lVar2 = native_UnityEngine_Component__get_transform_8da62c(param_4,0);
                  if (lVar2 != 0) {
                    native_UnityEngine_Transform__get_position_77169c(lVar2,0);
                    lVar2 = native_UnityEngine_Component__get_transform_8da62c(param_4,0);
                    if (lVar2 != 0) {
                      if (pcRam000000000133fed8 == (code *)0x0) {
                        pcRam000000000133fed8 = (code *)native_sub_4326f0(&UNK_00e2ad18,0);
                      }
                      (*pcRam000000000133fed8)(lVar2,&stack0xffffffffffffffd0);
                      return;
                    }
                  }
                    /* WARNING: Subroutine does not return */
                  native_sub_432810();
                }
              }
              uVar4 = native_sub_43283c();
                    /* WARNING: Subroutine does not return */
              native_sub_4327dc(uVar4,0);
            }
          }
        }
LAB_00dd1000:
                    /* WARNING: Subroutine does not return */
        native_sub_432810();
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* MG_BlocksEngine2.Environment.BE2_Zoom$$ZoomOut @ 0xdd11e4
 * void MG_BlocksEngine2_Environment_BE2_Zoom__ZoomOut (MG_BlocksEngine2_Environment_BE2_Zoom_o* __this, const MethodInfo* method); */

/* WARNING: Removing unreachable block (ram,0x00dd0eb4) */
/* WARNING: Removing unreachable block (ram,0x00dd0ec4) */
/* WARNING: Removing unreachable block (ram,0x00dd0ed0) */
/* WARNING: Removing unreachable block (ram,0x00dd0ed4) */
/* WARNING: Removing unreachable block (ram,0x00dd0ed8) */
/* WARNING: Removing unreachable block (ram,0x00dd0ee8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MG_BlocksEngine2.Environment.BE2_Zoom$$ZoomOut
   void MG_BlocksEngine2_Environment_BE2_Zoom__ZoomOut (MG_BlocksEngine2_Environment_BE2_Zoom_o*
   __this, const MethodInfo* method); */

void native_MG_BlocksEngine2_Environment_BE2_Zoom__ZoomOut_dd11e4
               (undefined1 param_1 [16],undefined1 param_2 [16],undefined4 param_3,long param_4)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  undefined8 uVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  
  if ((bRam0000000001346e2b & 1) == 0) {
    native_sub_43273c(&UnityEngine_RectTransform_TypeInfo_12d58f0);
    native_sub_43273c(&UnityEngine_Vector3___TypeInfo_12d3478);
    bRam0000000001346e2b = 1;
  }
  lVar2 = native_UnityEngine_Component__get_transform_8da62c(param_4,0);
  if (lVar2 != 0) {
    plVar3 = (long *)native_UnityEngine_Transform__get_parent_765eb0(lVar2,0);
    lVar2 = native_sub_432750(_UnityEngine_Vector3___TypeInfo_12d3478,4);
    if (((plVar3 != (long *)0x0) && (*plVar3 == _UnityEngine_RectTransform_TypeInfo_12d58f0)) &&
       (native_UnityEngine_RectTransform__GetWorldCorners_765644(plVar3,lVar2,0), lVar2 != 0)) {
      if ((*(uint *)(lVar2 + 0x18) < 2) || (*(uint *)(lVar2 + 0x18) == 2)) {
        uVar4 = native_sub_43283c();
                    /* WARNING: Subroutine does not return */
        native_sub_4327dc(uVar4,0);
      }
      fVar7 = *(float *)(lVar2 + 0x38);
      fVar8 = *(float *)(lVar2 + 0x2c);
      fVar5 = *(float *)(lVar2 + 0x30);
      fVar6 = *(float *)(lVar2 + 0x24);
      lVar2 = native_UnityEngine_Component__get_transform_8da62c(param_4,0);
      if (lVar2 != 0) {
        native_UnityEngine_Transform__get_position_77169c(lVar2,0);
        fVar8 = (fVar8 + fVar7) * 0.5;
        fVar7 = fVar8;
        if ((bRam0000000001346e29 & 1) == 0) {
          native_sub_43273c(&UnityEngine_RectTransform_TypeInfo_12d58f0);
          native_sub_43273c(&UnityEngine_Vector3___TypeInfo_12d3478);
          bRam0000000001346e29 = 1;
        }
        plVar3 = (long *)native_UnityEngine_Component__get_transform_8da62c(param_4,0);
        lVar2 = native_sub_432750(_UnityEngine_Vector3___TypeInfo_12d3478,4);
        if ((plVar3 != (long *)0x0) && (*plVar3 == _UnityEngine_RectTransform_TypeInfo_12d58f0)) {
          native_UnityEngine_RectTransform__GetWorldCorners_765644(plVar3,lVar2,0);
          lVar1 = native_UnityEngine_Component__get_transform_8da62c(param_4,0);
          if (lVar1 != 0) {
            native_UnityEngine_Transform__get_localScale_771d80(lVar1,0);
            if (*(float *)(param_4 + 0x1c) < fVar7) {
              lVar1 = native_UnityEngine_Component__get_transform_8da62c(param_4,0);
              if (lVar1 == 0) goto LAB_00dd1000;
              native_UnityEngine_Transform__get_localScale_771d80(lVar1,0);
              uVar4 = native_UnityEngine_Mathf__Clamp_8e51ec
                                (fVar7 / *(float *)(param_4 + 0x24),*(undefined4 *)(param_4 + 0x1c),
                                 *(undefined4 *)(param_4 + 0x20),0);
              lVar1 = native_UnityEngine_Component__get_transform_8da62c(param_4,0);
              if (lVar1 == 0) goto LAB_00dd1000;
              native_UnityEngine_Transform__set_localScale_771e30(uVar4,uVar4,0x3f800000,lVar1,0);
            }
            *(float *)(param_4 + 0x28) = fVar8;
            *(float *)(param_4 + 0x2c) = (fVar5 + fVar6) * 0.5;
            *(undefined4 *)(param_4 + 0x30) = param_3;
            lVar1 = native_sub_432750(_UnityEngine_Vector3___TypeInfo_12d3478,4);
            native_UnityEngine_RectTransform__GetWorldCorners_765644(plVar3,lVar1,0);
            if (lVar2 != 0) {
              if ((1 < *(uint *)(lVar2 + 0x18)) && (*(uint *)(lVar2 + 0x18) != 2)) {
                if (lVar1 == 0) goto LAB_00dd1000;
                if ((1 < *(uint *)(lVar1 + 0x18)) && (*(uint *)(lVar1 + 0x18) != 2)) {
                  lVar2 = native_UnityEngine_Component__get_transform_8da62c(param_4,0);
                  if (lVar2 != 0) {
                    native_UnityEngine_Transform__get_position_77169c(lVar2,0);
                    lVar2 = native_UnityEngine_Component__get_transform_8da62c(param_4,0);
                    if (lVar2 != 0) {
                      if (pcRam000000000133fed8 == (code *)0x0) {
                        pcRam000000000133fed8 = (code *)native_sub_4326f0(&UNK_00e2ad18,0);
                      }
                      (*pcRam000000000133fed8)(lVar2,&stack0xffffffffffffffd0);
                      return;
                    }
                  }
                    /* WARNING: Subroutine does not return */
                  native_sub_432810();
                }
              }
              uVar4 = native_sub_43283c();
                    /* WARNING: Subroutine does not return */
              native_sub_4327dc(uVar4,0);
            }
          }
        }
LAB_00dd1000:
                    /* WARNING: Subroutine does not return */
        native_sub_432810();
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* MG_BlocksEngine2.Environment.BE2_Zoom$$ZoomCenter @ 0xdd131c
 * void MG_BlocksEngine2_Environment_BE2_Zoom__ZoomCenter (MG_BlocksEngine2_Environment_BE2_Zoom_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MG_BlocksEngine2.Environment.BE2_Zoom$$ZoomCenter
   void MG_BlocksEngine2_Environment_BE2_Zoom__ZoomCenter (MG_BlocksEngine2_Environment_BE2_Zoom_o*
   __this, const MethodInfo* method); */

void native_MG_BlocksEngine2_Environment_BE2_Zoom__ZoomCenter_dd131c
               (undefined1 param_1 [16],ulong param_2,long param_3)

{
  undefined8 *puVar1;
  long *plVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  int *piVar7;
  long *plVar8;
  float fVar9;
  float fVar10;
  int iVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  long *plStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  long *plStack_a0;
  
  if ((bRam0000000001346e2c & 1) == 0) {
    native_sub_43273c(&
                      Method_System_Collections_Generic_List_Enumerator_I_BE2_Block__Dispose___12da4c8
                     );
    native_sub_43273c(&
                      Method_System_Collections_Generic_List_Enumerator_I_BE2_Block__MoveNext___12da4d0
                     );
    native_sub_43273c(&
                      Method_System_Collections_Generic_List_Enumerator_I_BE2_Block__get_Current___12da4d8
                     );
    native_sub_43273c(&MG_BlocksEngine2_Block_I_BE2_Block_TypeInfo_12d4dd8);
    native_sub_43273c(&MG_BlocksEngine2_Environment_I_BE2_ProgrammingEnv_TypeInfo_12d4e38);
    native_sub_43273c(&Method_System_Collections_Generic_List_I_BE2_Block__GetEnumerator___12dc9a8);
    native_sub_43273c(&Method_System_Collections_Generic_List_I_BE2_Block__get_Count___12dc9b0);
    native_sub_43273c(&UnityEngine_RectTransform_TypeInfo_12d58f0);
    native_sub_43273c(&UnityEngine_Vector3___TypeInfo_12d3478);
    bRam0000000001346e2c = 1;
  }
  uStack_b0 = 0;
  uStack_a8 = 0;
  plStack_a0 = (long *)0x0;
  fVar9 = (float)native_UnityEngine_Vector3__get_zero_776668(0);
  plVar8 = *(long **)(param_3 + 0x38);
  if (plVar8 != (long *)0x0) {
    lVar4 = *plVar8;
    if ((ulong)*(ushort *)(lVar4 + 0x12a) != 0) {
      uVar6 = 0;
      piVar7 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) ==
            _MG_BlocksEngine2_Environment_I_BE2_ProgrammingEnv_TypeInfo_12d4e38) {
          puVar1 = (undefined8 *)(lVar4 + (long)(*piVar7 + 5) * 0x10 + 0x138);
          goto LAB_00dd1450;
        }
        uVar6 = uVar6 + 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 < *(ushort *)(lVar4 + 0x12a));
    }
    puVar1 = (undefined8 *)
             native_sub_3c9b34(plVar8,
                               _MG_BlocksEngine2_Environment_I_BE2_ProgrammingEnv_TypeInfo_12d4e38,5
                              );
LAB_00dd1450:
    (*(code *)*puVar1)(plVar8,puVar1[1]);
    lVar4 = native_UnityEngine_Component__get_transform_8da62c(param_3,0);
    if (lVar4 != 0) {
      native_UnityEngine_Transform__set_localScale_771e30(0x3f800000,0x3f800000,0x3f800000,lVar4,0);
      plVar8 = *(long **)(param_3 + 0x38);
      if (plVar8 != (long *)0x0) {
        lVar4 = *plVar8;
        if ((ulong)*(ushort *)(lVar4 + 0x12a) != 0) {
          uVar6 = 0;
          piVar7 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
          do {
            if (*(long *)(piVar7 + -2) ==
                _MG_BlocksEngine2_Environment_I_BE2_ProgrammingEnv_TypeInfo_12d4e38) {
              puVar1 = (undefined8 *)(lVar4 + (long)(*piVar7 + 1) * 0x10 + 0x138);
              goto LAB_00dd14e0;
            }
            uVar6 = uVar6 + 1;
            piVar7 = piVar7 + 4;
          } while (uVar6 < *(ushort *)(lVar4 + 0x12a));
        }
        puVar1 = (undefined8 *)
                 native_sub_3c9b34(plVar8,
                                   _MG_BlocksEngine2_Environment_I_BE2_ProgrammingEnv_TypeInfo_12d4e38
                                   ,1);
LAB_00dd14e0:
        lVar4 = (*(code *)*puVar1)(plVar8,puVar1[1]);
        if (lVar4 != 0) {
          if (*(int *)(lVar4 + 0x18) < 1) {
            return;
          }
          plVar8 = *(long **)(param_3 + 0x38);
          if (plVar8 != (long *)0x0) {
            lVar4 = *plVar8;
            if ((ulong)*(ushort *)(lVar4 + 0x12a) != 0) {
              uVar6 = 0;
              piVar7 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
              do {
                if (*(long *)(piVar7 + -2) ==
                    _MG_BlocksEngine2_Environment_I_BE2_ProgrammingEnv_TypeInfo_12d4e38) {
                  puVar1 = (undefined8 *)(lVar4 + (long)(*piVar7 + 1) * 0x10 + 0x138);
                  goto LAB_00dd155c;
                }
                uVar6 = uVar6 + 1;
                piVar7 = piVar7 + 4;
              } while (uVar6 < *(ushort *)(lVar4 + 0x12a));
            }
            puVar1 = (undefined8 *)
                     native_sub_3c9b34(plVar8,
                                       _MG_BlocksEngine2_Environment_I_BE2_ProgrammingEnv_TypeInfo_12d4e38
                                       ,1);
LAB_00dd155c:
            lVar4 = (*(code *)*puVar1)(plVar8,puVar1[1]);
            if (lVar4 != 0) {
              native_System_Collections_Generic_List_BE2_Op_FunctionLocalVariable___GetEnumerator_d414fc
                        (&uStack_c8,lVar4,
                         _Method_System_Collections_Generic_List_I_BE2_Block__GetEnumerator___12dc9a8
                        );
              plStack_a0 = plStack_b8;
              uStack_a8 = uStack_c0;
              uStack_b0 = uStack_c8;
              while( true ) {
                uVar6 = native_System_Collections_Generic_List_Enumerator_BE2_Op_FunctionLocalVariable___MoveNext_7e8f30
                                  (&uStack_b0,
                                   _Method_System_Collections_Generic_List_Enumerator_I_BE2_Block__MoveNext___12da4d0
                                  );
                plVar8 = plStack_a0;
                if ((uVar6 & 1) == 0) break;
                if (plStack_a0 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                  native_sub_432810();
                }
                lVar4 = *plStack_a0;
                if ((ulong)*(ushort *)(lVar4 + 0x12a) != 0) {
                  uVar6 = 0;
                  piVar7 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar7 + -2) ==
                        _MG_BlocksEngine2_Block_I_BE2_Block_TypeInfo_12d4dd8) {
                      puVar1 = (undefined8 *)(lVar4 + (long)*piVar7 * 0x10 + 0x138);
                      goto LAB_00dd1614;
                    }
                    uVar6 = uVar6 + 1;
                    piVar7 = piVar7 + 4;
                  } while (uVar6 < *(ushort *)(lVar4 + 0x12a));
                }
                puVar1 = (undefined8 *)
                         native_sub_3c9b34(plStack_a0,
                                           _MG_BlocksEngine2_Block_I_BE2_Block_TypeInfo_12d4dd8,0);
LAB_00dd1614:
                plVar2 = (long *)(*(code *)*puVar1)(plVar8,puVar1[1]);
                lVar4 = native_sub_432750(_UnityEngine_Vector3___TypeInfo_12d3478,4);
                if ((plVar2 == (long *)0x0) ||
                   (*plVar2 != _UnityEngine_RectTransform_TypeInfo_12d58f0)) {
                    /* WARNING: Subroutine does not return */
                  native_sub_432810();
                }
                if (*plVar2 != _UnityEngine_RectTransform_TypeInfo_12d58f0) {
                  plVar2 = (long *)0x0;
                }
                native_UnityEngine_RectTransform__GetWorldCorners_765644(plVar2,lVar4,0);
                if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
                  native_sub_432810();
                }
                if (*(uint *)(lVar4 + 0x18) < 2) {
                  uVar3 = native_sub_43283c();
                    /* WARNING: Subroutine does not return */
                  native_sub_4327dc(uVar3,0);
                }
                if (*(uint *)(lVar4 + 0x18) == 2) {
                  uVar3 = native_sub_43283c();
                    /* WARNING: Subroutine does not return */
                  native_sub_4327dc(uVar3,0);
                }
                lVar5 = *plVar8;
                fVar10 = *(float *)(lVar4 + 0x38);
                fVar14 = *(float *)(lVar4 + 0x2c);
                fVar12 = *(float *)(lVar4 + 0x30);
                fVar13 = *(float *)(lVar4 + 0x24);
                if ((ulong)*(ushort *)(lVar5 + 0x12a) != 0) {
                  uVar6 = 0;
                  piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar7 + -2) ==
                        _MG_BlocksEngine2_Block_I_BE2_Block_TypeInfo_12d4dd8) {
                      puVar1 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
                      goto LAB_00dd16d8;
                    }
                    uVar6 = uVar6 + 1;
                    piVar7 = piVar7 + 4;
                  } while (uVar6 < *(ushort *)(lVar5 + 0x12a));
                }
                puVar1 = (undefined8 *)
                         native_sub_3c9b34(plVar8,
                                           _MG_BlocksEngine2_Block_I_BE2_Block_TypeInfo_12d4dd8,0);
LAB_00dd16d8:
                lVar4 = (*(code *)*puVar1)(plVar8,puVar1[1]);
                if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
                  native_sub_432810();
                }
                native_UnityEngine_Transform__get_position_77169c(lVar4,0);
                fVar9 = fVar9 + (fVar14 + fVar10) * 0.5;
                param_2 = (ulong)(uint)((float)param_2 + (fVar12 + fVar13) * 0.5);
              }
              native_System_Collections_Generic_List_Enumerator_BE2_Op_FunctionLocalVariable___Dispose_7e8f2c
                        (&uStack_b0,
                         _Method_System_Collections_Generic_List_Enumerator_I_BE2_Block__Dispose___12da4c8
                        );
              plVar8 = *(long **)(param_3 + 0x38);
              if (plVar8 != (long *)0x0) {
                lVar4 = *plVar8;
                if ((ulong)*(ushort *)(lVar4 + 0x12a) != 0) {
                  uVar6 = 0;
                  piVar7 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar7 + -2) ==
                        _MG_BlocksEngine2_Environment_I_BE2_ProgrammingEnv_TypeInfo_12d4e38) {
                      puVar1 = (undefined8 *)(lVar4 + (long)(*piVar7 + 1) * 0x10 + 0x138);
                      goto LAB_00dd178c;
                    }
                    uVar6 = uVar6 + 1;
                    piVar7 = piVar7 + 4;
                  } while (uVar6 < *(ushort *)(lVar4 + 0x12a));
                }
                puVar1 = (undefined8 *)
                         native_sub_3c9b34(plVar8,
                                           _MG_BlocksEngine2_Environment_I_BE2_ProgrammingEnv_TypeInfo_12d4e38
                                           ,1);
LAB_00dd178c:
                lVar4 = (*(code *)*puVar1)(plVar8,puVar1[1]);
                if (lVar4 != 0) {
                  iVar11 = *(int *)(lVar4 + 0x18);
                  lVar4 = native_UnityEngine_Component__get_transform_8da62c(param_3,0);
                  if (lVar4 != 0) {
                    plVar8 = (long *)native_UnityEngine_Transform__get_parent_765eb0(lVar4,0);
                    lVar4 = native_sub_432750(_UnityEngine_Vector3___TypeInfo_12d3478,4);
                    if (((plVar8 != (long *)0x0) &&
                        (*plVar8 == _UnityEngine_RectTransform_TypeInfo_12d58f0)) &&
                       (native_UnityEngine_RectTransform__GetWorldCorners_765644(plVar8,lVar4,0),
                       lVar4 != 0)) {
                      if ((1 < *(uint *)(lVar4 + 0x18)) && (*(uint *)(lVar4 + 0x18) != 2)) {
                        native_MG_BlocksEngine2_Environment_BE2_Zoom__TranslateView_dd102c
                                  (-(fVar9 / (float)iVar11 -
                                    (*(float *)(lVar4 + 0x2c) + *(float *)(lVar4 + 0x38)) * 0.5),
                                   -((float)param_2 / (float)iVar11 -
                                    (*(float *)(lVar4 + 0x30) + *(float *)(lVar4 + 0x24)) * 0.5),
                                   param_3);
                        return;
                      }
                      uVar3 = native_sub_43283c();
                    /* WARNING: Subroutine does not return */
                      native_sub_4327dc(uVar3,0);
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* MG_BlocksEngine2.Environment.BE2_Zoom$$TranslateView @ 0xdd102c
 * void MG_BlocksEngine2_Environment_BE2_Zoom__TranslateView (MG_BlocksEngine2_Environment_BE2_Zoom_o* __this, float x, float y, const MethodInfo* method); */

/* MG_BlocksEngine2.Environment.BE2_Zoom$$TranslateView
   void MG_BlocksEngine2_Environment_BE2_Zoom__TranslateView
   (MG_BlocksEngine2_Environment_BE2_Zoom_o* __this, float x, float y, const MethodInfo* method); */

void native_MG_BlocksEngine2_Environment_BE2_Zoom__TranslateView_dd102c(undefined8 param_1)

{
  long lVar1;
  
  lVar1 = native_UnityEngine_Component__get_transform_8da62c(param_1,0);
  if (lVar1 != 0) {
    native_UnityEngine_Transform__get_position_77169c(lVar1,0);
    lVar1 = native_UnityEngine_Component__get_transform_8da62c(param_1,0);
    if (lVar1 != 0) {
      if (pcRam000000000133fed8 == (code *)0x0) {
        pcRam000000000133fed8 = (code *)native_sub_4326f0(&UNK_00e2ad18,0);
      }
      (*pcRam000000000133fed8)(lVar1,&stack0xffffffffffffffd0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* MG_BlocksEngine2.Environment.BE2_Zoom$$ConvertValueToNewRange @ 0xdd1010
 * float MG_BlocksEngine2_Environment_BE2_Zoom__ConvertValueToNewRange (MG_BlocksEngine2_Environment_BE2_Zoom_o* __this, float oldValue, UnityEngine_Vector2_o oldScale, UnityEngine_Vector2_o newScale, const MethodInfo* method); */

/* MG_BlocksEngine2.Environment.BE2_Zoom$$ConvertValueToNewRange
   float MG_BlocksEngine2_Environment_BE2_Zoom__ConvertValueToNewRange
   (MG_BlocksEngine2_Environment_BE2_Zoom_o* __this, float oldValue, UnityEngine_Vector2_o oldScale,
   UnityEngine_Vector2_o newScale, const MethodInfo* method); */

float native_MG_BlocksEngine2_Environment_BE2_Zoom__ConvertValueToNewRange_dd1010
                (float param_1,float param_2,float param_3,float param_4,float param_5)

{
  return param_5 + ((param_1 - param_3) * (param_4 - param_5)) / (param_2 - param_3);
}



/* MG_BlocksEngine2.Environment.BE2_Zoom$$.ctor @ 0xdd191c
 * void MG_BlocksEngine2_Environment_BE2_Zoom___ctor (MG_BlocksEngine2_Environment_BE2_Zoom_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MG_BlocksEngine2.Environment.BE2_Zoom$$.ctor
   void MG_BlocksEngine2_Environment_BE2_Zoom___ctor (MG_BlocksEngine2_Environment_BE2_Zoom_o*
   __this, const MethodInfo* method); */

undefined1  [16] native_MG_BlocksEngine2_Environment_BE2_Zoom___ctor_dd191c(ulong param_1)

{
  undefined1 auVar1 [16];
  
  *(undefined8 *)(param_1 + 0x20) = 0x3fa6666640e00000;
  *(undefined8 *)(param_1 + 0x18) = 0x3dcccccd3f800000;
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


