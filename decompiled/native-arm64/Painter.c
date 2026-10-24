/* ARM64 IL2CPP native pseudocode from Ghidra.
 * Recovered implementation, not original C# source.
 * Function boundaries follow the IL2CPP method address table. */


/* Painter$$Start @ 0x737a9c
 * void Painter__Start (Painter_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Painter$$Start
   void Painter__Start (Painter_o* __this, const MethodInfo* method); */

void native_Painter__Start_737a9c(undefined1 param_1 [16],float param_2,long param_3)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  uint uVar7;
  long lVar8;
  long *plVar9;
  float fVar10;
  undefined4 uVar11;
  
  if ((bRam000000000133f5d9 & 1) == 0) {
    native_sub_43273c(&EventDelegate_Callback_TypeInfo_12d72e8);
    native_sub_43273c(&Method_UnityEngine_Component_GetComponent_LineRenderer____12e2aa8);
    native_sub_43273c(&EventDelegate_TypeInfo_12d4590);
    native_sub_43273c(&Method_UnityEngine_GameObject_GetComponent_UIButton____12e4a88);
    native_sub_43273c(&Method_UnityEngine_GameObject_GetComponent_UISprite____12e4ae0);
    native_sub_43273c(&Method_System_Collections_Generic_List_EventDelegate__Add___12dc740);
    native_sub_43273c(&Method_System_Collections_Generic_List_Vector3___ctor___12dd4d8);
    native_sub_43273c(&System_Collections_Generic_List_Vector3__TypeInfo_12d2c68);
    native_sub_43273c(&Method_Painter_OnClickButtonRouteClear___12e5c38);
    native_sub_43273c(&Method_Painter_OnClickButtonRouteStart___12e5c40);
    native_sub_43273c(&PanelMainUIController_TypeInfo_12d5600);
    native_sub_43273c(&StringLiteral_ButtonRouteStart_12ec950);
    native_sub_43273c(&StringLiteral_bg_12f3ba0);
    native_sub_43273c(&StringLiteral_ButtonRouteClear_12ec940);
    bRam000000000133f5d9 = 1;
  }
  uVar3 = native_sub_432808(_System_Collections_Generic_List_Vector3__TypeInfo_12d2c68);
  native_System_Collections_Generic_List_Vector3____ctor_d2b070
            (uVar3,_Method_System_Collections_Generic_List_Vector3___ctor___12dd4d8);
  *(undefined8 *)(param_3 + 0x38) = uVar3;
  native_sub_4326e0((undefined8 *)(param_3 + 0x38),uVar3);
  uVar3 = native_UnityEngine_Component__GetComponent_ActiveAnimation__49daec
                    (param_3,_Method_UnityEngine_Component_GetComponent_LineRenderer____12e2aa8);
  *(undefined8 *)(param_3 + 0x18) = uVar3;
  native_sub_4326e0(param_3 + 0x18);
  lVar8 = *(long *)(param_3 + 0x18);
  if (lVar8 != 0) {
    uVar11 = *(undefined4 *)(param_3 + 0x34);
    native_UnityEngine_LineRenderer__set_endWidth_8e1f5c(uVar11,lVar8,0);
    native_UnityEngine_LineRenderer__set_startWidth_8e1f0c(uVar11,lVar8,0);
    if (*(long *)(param_3 + 0x50) != 0) {
      lVar8 = native_UnityEngine_GameObject__GetComponent_BE2_BlockSectionHeader_Custom__4a2214
                        (*(long *)(param_3 + 0x50),
                         _Method_UnityEngine_GameObject_GetComponent_UISprite____12e4ae0);
      if (((*(long *)(param_3 + 0x50) != 0) &&
          (lVar4 = native_UnityEngine_GameObject__get_transform_8de5c8(*(long *)(param_3 + 0x50),0),
          lVar4 != 0)) &&
         (fVar10 = (float)native_UnityEngine_Transform__get_localPosition_7717f4(lVar4,0),
         lVar8 != 0)) {
        iVar1 = *(int *)(lVar8 + 0xa4);
        iVar2 = *(int *)(lVar8 + 0xa8);
        if (iVar1 < 0) {
          iVar1 = iVar1 + 1;
        }
        if (iVar2 < 0) {
          iVar2 = iVar2 + 1;
        }
        *(float *)(param_3 + 0x60) = fVar10 - (float)(iVar1 >> 1);
        *(float *)(param_3 + 100) = param_2 - (float)(iVar2 >> 1);
        *(float *)(param_3 + 0x68) = fVar10 + (float)(iVar1 >> 1);
        *(float *)(param_3 + 0x6c) = param_2 + (float)(iVar2 >> 1);
        if (((*(byte *)(_PanelMainUIController_TypeInfo_12d5600 + 0x133) >> 2 & 1) != 0) &&
           (*(int *)(_PanelMainUIController_TypeInfo_12d5600 + 0xe0) == 0)) {
          native_sub_4327ec();
        }
        *(undefined1 *)(*(long *)(_PanelMainUIController_TypeInfo_12d5600 + 0xb8) + 0x38) = 0;
        lVar8 = native_UnityEngine_GameObject__Find_8dead0
                          (_StringLiteral_ButtonRouteClear_12ec940,0);
        if (lVar8 != 0) {
          lVar8 = native_UnityEngine_GameObject__GetComponent_BE2_BlockSectionHeader_Custom__4a2214
                            (lVar8,_Method_UnityEngine_GameObject_GetComponent_UIButton____12e4a88);
          plVar9 = (long *)(param_3 + 0xc0);
          *plVar9 = lVar8;
          native_sub_4326e0(plVar9,lVar8);
          if (*plVar9 != 0) {
            lVar8 = *(long *)(*plVar9 + 0xc0);
            uVar3 = native_sub_432808(_EventDelegate_Callback_TypeInfo_12d72e8);
            native_EventDelegate_Callback___ctor_54bd18
                      (uVar3,param_3,_Method_Painter_OnClickButtonRouteClear___12e5c38,0);
            uVar5 = native_sub_432808(_EventDelegate_TypeInfo_12d4590);
            native_EventDelegate___ctor_de0bd0(uVar5,uVar3,0);
            if (lVar8 != 0) {
              native_System_Collections_Generic_List_int_____Add_d40c00
                        (lVar8,uVar5,
                         _Method_System_Collections_Generic_List_EventDelegate__Add___12dc740);
              lVar8 = native_UnityEngine_GameObject__Find_8dead0
                                (_StringLiteral_ButtonRouteStart_12ec950,0);
              if (lVar8 != 0) {
                lVar8 = native_UnityEngine_GameObject__get_gameObject_8debb8(lVar8,0);
                plVar9 = (long *)(param_3 + 0x80);
                *plVar9 = lVar8;
                native_sub_4326e0(plVar9,lVar8);
                if (((*plVar9 != 0) &&
                    (lVar8 = native_UnityEngine_GameObject__get_transform_8de5c8(*plVar9,0),
                    lVar8 != 0)) &&
                   ((lVar8 = native_UnityEngine_Transform__Find_772c0c
                                       (lVar8,_StringLiteral_bg_12f3ba0,0), lVar8 != 0 &&
                    (lVar8 = native_UnityEngine_Component__get_gameObject_8da66c(lVar8,0),
                    lVar8 != 0)))) {
                  uVar3 = native_UnityEngine_GameObject__GetComponent_BE2_BlockSectionHeader_Custom__4a2214
                                    (lVar8,
                                     _Method_UnityEngine_GameObject_GetComponent_UISprite____12e4ae0
                                    );
                  *(undefined8 *)(param_3 + 0x88) = uVar3;
                  native_sub_4326e0((undefined8 *)(param_3 + 0x88),uVar3);
                  if ((*(long *)(param_3 + 0x80) != 0) &&
                     (lVar8 = native_UnityEngine_GameObject__GetComponent_BE2_BlockSectionHeader_Custom__4a2214
                                        (*(long *)(param_3 + 0x80),
                                         _Method_UnityEngine_GameObject_GetComponent_UIButton____12e4a88
                                        ), lVar8 != 0)) {
                    lVar8 = *(long *)(lVar8 + 0xc0);
                    uVar3 = native_sub_432808(_EventDelegate_Callback_TypeInfo_12d72e8);
                    native_EventDelegate_Callback___ctor_54bd18
                              (uVar3,param_3,_Method_Painter_OnClickButtonRouteStart___12e5c40,0);
                    uVar5 = native_sub_432808(_EventDelegate_TypeInfo_12d4590);
                    native_EventDelegate___ctor_de0bd0(uVar5,uVar3,0);
                    if (lVar8 != 0) {
                      lVar4 = *(long *)(lVar8 + 0x10);
                      if (lVar4 != 0) {
                        uVar7 = *(uint *)(lVar8 + 0x18);
                        if (uVar7 == *(uint *)(lVar4 + 0x18)) {
                          (*(code *)**(undefined8 **)
                                      (*(long *)(*(long *)(
                                                  _Method_System_Collections_Generic_List_EventDelegate__Add___12dc740
                                                  + 0x18) + 0xc0) + 0x60))(lVar8,uVar7 + 1);
                          uVar7 = *(uint *)(lVar8 + 0x18);
                          lVar4 = *(long *)(lVar8 + 0x10);
                          *(uint *)(lVar8 + 0x18) = uVar7 + 1;
                          if (lVar4 == 0) goto code_r0x00d40c5c;
                        }
                        else {
                          *(uint *)(lVar8 + 0x18) = uVar7 + 1;
                        }
                        if (uVar7 < *(uint *)(lVar4 + 0x18)) {
                          puVar6 = (undefined8 *)(lVar4 + (long)(int)uVar7 * 8 + 0x20);
                          *puVar6 = uVar5;
                          native_sub_4326e0(puVar6,uVar5);
                          *(int *)(lVar8 + 0x1c) = *(int *)(lVar8 + 0x1c) + 1;
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



/* Painter$$start_button @ 0x737e60
 * void Painter__start_button (Painter_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Painter$$start_button
   void Painter__start_button (Painter_o* __this, const MethodInfo* method); */

void native_Painter__start_button_737e60(long param_1)

{
  long lVar1;
  long *plVar2;
  ulong uVar3;
  undefined8 uVar4;
  code *UNRECOVERED_JUMPTABLE;
  
  if ((bRam000000000133f5da & 1) == 0) {
    native_sub_43273c(&PanelMainUIController_TypeInfo_12d5600);
    native_sub_43273c(&StringLiteral_icon_start_12f4cb0);
    bRam000000000133f5da = 1;
  }
  if (((*(byte *)(_PanelMainUIController_TypeInfo_12d5600 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_PanelMainUIController_TypeInfo_12d5600 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  *(undefined1 *)(*(long *)(_PanelMainUIController_TypeInfo_12d5600 + 0xb8) + 0x38) = 0;
  lVar1 = _StringLiteral_icon_start_12f4cb0;
  plVar2 = *(long **)(param_1 + 0x88);
  if (plVar2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    native_sub_432810();
  }
  if ((bRam0000000001342758 & 1) == 0) {
    native_sub_43273c(&StringLiteral__12eaac0,_StringLiteral_icon_start_12f4cb0,0);
    bRam0000000001342758 = 1;
  }
  uVar3 = native_System_String__IsNullOrEmpty_b09430(lVar1,0);
  if ((uVar3 & 1) == 0) {
    uVar3 = native_System_String__op_Inequality_afbbb4(plVar2[0x41],lVar1,0);
    if ((uVar3 & 1) != 0) {
      plVar2[0x41] = lVar1;
      native_sub_4326e0(plVar2 + 0x41,lVar1);
      plVar2[0x43] = 0;
      native_sub_4326e0(plVar2 + 0x43,0);
      *(undefined1 *)(plVar2 + 0x44) = 0;
      *(undefined1 *)(plVar2 + 0xb) = 1;
      (**(code **)(*plVar2 + 0x378))(plVar2,*(undefined8 *)(*plVar2 + 0x380));
      if (*(char *)((long)plVar2 + 0x221) != '\0') {
        UNRECOVERED_JUMPTABLE = *(code **)(*plVar2 + 0x3a8);
        uVar4 = *(undefined8 *)(*plVar2 + 0x3b0);
        goto LAB_00c35d74;
      }
    }
  }
  else {
    uVar3 = native_System_String__IsNullOrEmpty_b09430(plVar2[0x41],0);
    if ((uVar3 & 1) == 0) {
      plVar2[0x41] = _StringLiteral__12eaac0;
      native_sub_4326e0(plVar2 + 0x41);
      plVar2[0x43] = 0;
      native_sub_4326e0(plVar2 + 0x43,0);
      *(undefined1 *)(plVar2 + 0x44) = 0;
      *(undefined1 *)(plVar2 + 0xb) = 1;
      UNRECOVERED_JUMPTABLE = *(code **)(*plVar2 + 0x378);
      uVar4 = *(undefined8 *)(*plVar2 + 0x380);
LAB_00c35d74:
                    /* WARNING: Could not recover jumptable at 0x00c35d84. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE)(plVar2,uVar4);
      return;
    }
  }
  return;
}



/* Painter$$OnClickButtonRouteClear @ 0x737ef0
 * void Painter__OnClickButtonRouteClear (Painter_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Painter$$OnClickButtonRouteClear
   void Painter__OnClickButtonRouteClear (Painter_o* __this, const MethodInfo* method); */

void native_Painter__OnClickButtonRouteClear_737ef0(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  long *plVar3;
  
  if ((bRam000000000133f5db & 1) == 0) {
    native_sub_43273c(&Method_System_Collections_Generic_List_Vector3__ToArray___12dd4f8);
    native_sub_43273c(&Method_System_Collections_Generic_List_Vector3___ctor___12dd4d8);
    native_sub_43273c(&System_Collections_Generic_List_Vector3__TypeInfo_12d2c68);
    bRam000000000133f5db = 1;
  }
  native_Painter__start_button_737e60(param_1);
  if (*(long *)(param_1 + 0x48) != 0) {
    native_UnityEngine_GameObject__SetActive_8de698(*(long *)(param_1 + 0x48),0,0);
    lVar1 = native_sub_432808(_System_Collections_Generic_List_Vector3__TypeInfo_12d2c68);
    native_System_Collections_Generic_List_Vector3____ctor_d2b070
              (lVar1,_Method_System_Collections_Generic_List_Vector3___ctor___12dd4d8);
    plVar3 = (long *)(param_1 + 0x38);
    *plVar3 = lVar1;
    native_sub_4326e0(plVar3,lVar1);
    uVar2 = native_sub_432808(_System_Collections_Generic_List_Vector3__TypeInfo_12d2c68);
    native_System_Collections_Generic_List_Vector3____ctor_d2b070
              (uVar2,_Method_System_Collections_Generic_List_Vector3___ctor___12dd4d8);
    *(undefined8 *)(param_1 + 0x70) = uVar2;
    native_sub_4326e0(param_1 + 0x70,uVar2);
    if (*plVar3 != 0) {
      lVar1 = *(long *)(param_1 + 0x18);
      uVar2 = native_System_Collections_Generic_List_Vector3___ToArray_d2d9b4
                        (*plVar3,_Method_System_Collections_Generic_List_Vector3__ToArray___12dd4f8)
      ;
      if (lVar1 != 0) {
        native_UnityEngine_LineRenderer__SetPositions_8e20bc(lVar1,uVar2,0);
        lVar1 = *(long *)(param_1 + 0x18);
        if (lVar1 != 0) {
          if (pcRam0000000001340d58 == (code *)0x0) {
            pcRam0000000001340d58 = (code *)native_sub_4326f0(&UNK_00e2e404);
          }
                    /* WARNING: Could not recover jumptable at 0x008e1ff8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*pcRam0000000001340d58)(lVar1,0);
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* Painter$$OnClickButtonRouteStart @ 0x738010
 * void Painter__OnClickButtonRouteStart (Painter_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Painter$$OnClickButtonRouteStart
   void Painter__OnClickButtonRouteStart (Painter_o* __this, const MethodInfo* method); */

void native_Painter__OnClickButtonRouteStart_738010(long param_1)

{
  int iVar1;
  long *plVar2;
  long lVar3;
  ulong uVar4;
  undefined8 uVar5;
  code *UNRECOVERED_JUMPTABLE;
  char *pcVar6;
  long lVar7;
  
  if ((bRam000000000133f5dc & 1) == 0) {
    native_sub_43273c(&Method_System_Collections_Generic_List_Vector3__get_Count___12dd500);
    native_sub_43273c(&Method_System_Collections_Generic_List_Vector3__get_Item___12dd508);
    native_sub_43273c(&PanelMainUIController_TypeInfo_12d5600);
    native_sub_43273c(&StringLiteral_icon_stop_12f4cb8);
    bRam000000000133f5dc = 1;
  }
  if (((*(byte *)(_PanelMainUIController_TypeInfo_12d5600 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_PanelMainUIController_TypeInfo_12d5600 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  pcVar6 = (char *)(*(long *)(_PanelMainUIController_TypeInfo_12d5600 + 0xb8) + 0x38);
  if (*pcVar6 == '\0') {
    if ((*(long *)(param_1 + 0x70) == 0) || (*(int *)(*(long *)(param_1 + 0x70) + 0x18) < 1)) {
      return;
    }
    if (((*(byte *)(_PanelMainUIController_TypeInfo_12d5600 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_PanelMainUIController_TypeInfo_12d5600 + 0xe0) == 0)) {
      native_sub_4327ec();
      pcVar6 = (char *)(*(long *)(_PanelMainUIController_TypeInfo_12d5600 + 0xb8) + 0x38);
    }
    *pcVar6 = '\x01';
    if (*(long *)(param_1 + 0x88) != 0) {
      native_UISprite__set_spriteName_c35c6c
                (*(long *)(param_1 + 0x88),_StringLiteral_icon_stop_12f4cb8,0);
      if (*(long *)(param_1 + 0x70) != 0) {
        iVar1 = *(int *)(*(long *)(param_1 + 0x70) + 0x18);
        if (iVar1 < 1) {
          return;
        }
        if (*(int *)(param_1 + 0x5c) <= iVar1 + -1) {
          return;
        }
        *(undefined4 *)(param_1 + 0x5c) = 0;
        if (*(long *)(param_1 + 0x48) != 0) {
          lVar3 = native_UnityEngine_GameObject__get_transform_8de5c8(*(long *)(param_1 + 0x48),0);
          lVar7 = *(long *)(param_1 + 0x70);
          if (lVar7 != 0) {
            if (*(int *)(lVar7 + 0x18) == 0) {
              native_System_ThrowHelper__ThrowArgumentOutOfRangeException_9fe0f4(0);
            }
            if (lVar3 != 0) {
              lVar7 = *(long *)(lVar7 + 0x10);
              native_UnityEngine_Transform__set_localPosition_7718a4
                        (*(undefined4 *)(lVar7 + 0x20),*(undefined4 *)(lVar7 + 0x24),
                         *(undefined4 *)(lVar7 + 0x28),lVar3,0);
              if (((*(byte *)(_PanelMainUIController_TypeInfo_12d5600 + 0x133) >> 2 & 1) != 0) &&
                 (*(int *)(_PanelMainUIController_TypeInfo_12d5600 + 0xe0) == 0)) {
                native_sub_4327ec();
              }
              *(undefined1 *)(*(long *)(_PanelMainUIController_TypeInfo_12d5600 + 0xb8) + 0x39) = 0;
              return;
            }
          }
        }
      }
    }
                    /* WARNING: Subroutine does not return */
    native_sub_432810();
  }
  if ((bRam000000000133f5da & 1) == 0) {
    native_sub_43273c(&PanelMainUIController_TypeInfo_12d5600);
    native_sub_43273c(&StringLiteral_icon_start_12f4cb0);
    bRam000000000133f5da = 1;
  }
  if (((*(byte *)(_PanelMainUIController_TypeInfo_12d5600 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_PanelMainUIController_TypeInfo_12d5600 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  *(undefined1 *)(*(long *)(_PanelMainUIController_TypeInfo_12d5600 + 0xb8) + 0x38) = 0;
  lVar3 = _StringLiteral_icon_start_12f4cb0;
  plVar2 = *(long **)(param_1 + 0x88);
  if (plVar2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    native_sub_432810();
  }
  if ((bRam0000000001342758 & 1) == 0) {
    native_sub_43273c(&StringLiteral__12eaac0,_StringLiteral_icon_start_12f4cb0,0);
    bRam0000000001342758 = 1;
  }
  uVar4 = native_System_String__IsNullOrEmpty_b09430(lVar3,0);
  if ((uVar4 & 1) == 0) {
    uVar4 = native_System_String__op_Inequality_afbbb4(plVar2[0x41],lVar3,0);
    if ((uVar4 & 1) != 0) {
      plVar2[0x41] = lVar3;
      native_sub_4326e0(plVar2 + 0x41,lVar3);
      plVar2[0x43] = 0;
      native_sub_4326e0(plVar2 + 0x43,0);
      *(undefined1 *)(plVar2 + 0x44) = 0;
      *(undefined1 *)(plVar2 + 0xb) = 1;
      (**(code **)(*plVar2 + 0x378))(plVar2,*(undefined8 *)(*plVar2 + 0x380));
      if (*(char *)((long)plVar2 + 0x221) != '\0') {
        UNRECOVERED_JUMPTABLE = *(code **)(*plVar2 + 0x3a8);
        uVar5 = *(undefined8 *)(*plVar2 + 0x3b0);
        goto LAB_00c35d74;
      }
    }
  }
  else {
    uVar4 = native_System_String__IsNullOrEmpty_b09430(plVar2[0x41],0);
    if ((uVar4 & 1) == 0) {
      plVar2[0x41] = _StringLiteral__12eaac0;
      native_sub_4326e0(plVar2 + 0x41);
      plVar2[0x43] = 0;
      native_sub_4326e0(plVar2 + 0x43,0);
      *(undefined1 *)(plVar2 + 0x44) = 0;
      *(undefined1 *)(plVar2 + 0xb) = 1;
      UNRECOVERED_JUMPTABLE = *(code **)(*plVar2 + 0x378);
      uVar5 = *(undefined8 *)(*plVar2 + 0x380);
LAB_00c35d74:
                    /* WARNING: Could not recover jumptable at 0x00c35d84. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE)(plVar2,uVar5);
      return;
    }
  }
  return;
}



/* Painter$$StartLine @ 0x7381a8
 * void Painter__StartLine (Painter_o* __this, UnityEngine_Vector3_o position, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Painter$$StartLine
   void Painter__StartLine (Painter_o* __this, UnityEngine_Vector3_o position, const MethodInfo*
   method); */

void native_Painter__StartLine_7381a8(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  long *plVar3;
  
  if ((bRam000000000133f5dd & 1) == 0) {
    native_sub_43273c(&Method_System_Collections_Generic_List_Vector3__ToArray___12dd4f8);
    native_sub_43273c(&Method_System_Collections_Generic_List_Vector3___ctor___12dd4d8);
    native_sub_43273c(&System_Collections_Generic_List_Vector3__TypeInfo_12d2c68);
    bRam000000000133f5dd = 1;
  }
  lVar1 = native_sub_432808(_System_Collections_Generic_List_Vector3__TypeInfo_12d2c68);
  native_System_Collections_Generic_List_Vector3____ctor_d2b070
            (lVar1,_Method_System_Collections_Generic_List_Vector3___ctor___12dd4d8);
  plVar3 = (long *)(param_1 + 0x38);
  *plVar3 = lVar1;
  native_sub_4326e0(plVar3,lVar1);
  uVar2 = native_sub_432808(_System_Collections_Generic_List_Vector3__TypeInfo_12d2c68);
  native_System_Collections_Generic_List_Vector3____ctor_d2b070
            (uVar2,_Method_System_Collections_Generic_List_Vector3___ctor___12dd4d8);
  *(undefined8 *)(param_1 + 0x70) = uVar2;
  native_sub_4326e0(param_1 + 0x70,uVar2);
  if (*plVar3 != 0) {
    lVar1 = *(long *)(param_1 + 0x18);
    uVar2 = native_System_Collections_Generic_List_Vector3___ToArray_d2d9b4
                      (*plVar3,_Method_System_Collections_Generic_List_Vector3__ToArray___12dd4f8);
    if (lVar1 != 0) {
      native_UnityEngine_LineRenderer__SetPositions_8e20bc(lVar1,uVar2,0);
      if (*(long *)(param_1 + 0x18) != 0) {
        native_UnityEngine_LineRenderer__set_positionCount_8e1fac(*(long *)(param_1 + 0x18),1,0);
        lVar1 = *(long *)(param_1 + 0x18);
        if (lVar1 != 0) {
          if (pcRam0000000001340d68 == (code *)0x0) {
            pcRam0000000001340d68 = (code *)native_sub_4326f0(&UNK_00e2e47c,0,0);
          }
          (*pcRam0000000001340d68)(lVar1,0,&stack0xffffffffffffffc0);
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* Painter$$UpdateLine @ 0x7382e8
 * void Painter__UpdateLine (Painter_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Painter$$UpdateLine
   void Painter__UpdateLine (Painter_o* __this, const MethodInfo* method); */

void native_Painter__UpdateLine_7382e8(undefined1 param_1 [16],undefined8 param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  float fVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  if ((bRam000000000133f5de & 1) == 0) {
    native_sub_43273c(&Method_System_Collections_Generic_List_Vector3__Add___12dd4e0);
    native_sub_43273c(&Method_System_Collections_Generic_List_Vector3__ToArray___12dd4f8);
    native_sub_43273c(&Method_System_Collections_Generic_List_Vector3__get_Count___12dd500);
    bRam000000000133f5de = 1;
  }
  uVar4 = native_UnityEngine_Input__get_mousePosition_dbdd8c(0);
  lVar1 = native_UnityEngine_Camera__get_main_8d93c0(0);
  if (lVar1 != 0) {
    uVar7 = 0;
    uVar4 = native_UnityEngine_Camera__ScreenToWorldPoint_8d9170(uVar4,lVar1,0);
    if ((*(long *)(param_3 + 0x40) != 0) &&
       (lVar1 = native_UnityEngine_GameObject__get_transform_8de5c8(*(long *)(param_3 + 0x40),0),
       lVar1 != 0)) {
      uVar6 = param_2;
      uVar8 = uVar7;
      uVar5 = native_UnityEngine_Transform__InverseTransformPoint_7729a0
                        (uVar4,param_2,uVar7,lVar1,0);
      if (*(char *)(param_3 + 0x2c) == '\0') {
        fVar3 = (float)native_UnityEngine_Vector3__Distance_7766d0
                                 (uVar4,param_2,uVar7,*(undefined4 *)(param_3 + 0x20),
                                  *(undefined4 *)(param_3 + 0x24),*(undefined4 *)(param_3 + 0x28),0)
        ;
        if (fVar3 <= *(float *)(param_3 + 0x30)) {
          return;
        }
        if (*(long *)(param_3 + 0x38) != 0) {
          native_System_Collections_Generic_List_Vector3___Add_d2be08
                    (uVar4,param_2,uVar7,*(long *)(param_3 + 0x38),
                     _Method_System_Collections_Generic_List_Vector3__Add___12dd4e0);
          if ((*(long *)(param_3 + 0x38) != 0) && (*(long *)(param_3 + 0x18) != 0)) {
            native_UnityEngine_LineRenderer__set_positionCount_8e1fac
                      (*(long *)(param_3 + 0x18),*(undefined4 *)(*(long *)(param_3 + 0x38) + 0x18),0
                      );
            if (*(long *)(param_3 + 0x38) != 0) {
              lVar1 = *(long *)(param_3 + 0x18);
              uVar2 = native_System_Collections_Generic_List_Vector3___ToArray_d2d9b4
                                (*(long *)(param_3 + 0x38),
                                 _Method_System_Collections_Generic_List_Vector3__ToArray___12dd4f8)
              ;
              if (lVar1 != 0) {
                native_UnityEngine_LineRenderer__SetPositions_8e20bc(lVar1,uVar2,0);
                if (*(long *)(param_3 + 0x70) != 0) {
                  native_System_Collections_Generic_List_Vector3___Add_d2be08
                            (uVar5,uVar6,uVar8,*(long *)(param_3 + 0x70),
                             _Method_System_Collections_Generic_List_Vector3__Add___12dd4e0);
                  *(int *)(param_3 + 0x20) = (int)uVar4;
                  *(int *)(param_3 + 0x24) = (int)param_2;
                  goto LAB_00738510;
                }
              }
            }
          }
        }
      }
      else {
        *(undefined1 *)(param_3 + 0x2c) = 0;
        if (*(long *)(param_3 + 0x38) != 0) {
          native_System_Collections_Generic_List_Vector3___Add_d2be08
                    (uVar4,param_2,uVar7,*(long *)(param_3 + 0x38),
                     _Method_System_Collections_Generic_List_Vector3__Add___12dd4e0);
          if ((*(long *)(param_3 + 0x38) != 0) && (*(long *)(param_3 + 0x18) != 0)) {
            native_UnityEngine_LineRenderer__set_positionCount_8e1fac
                      (*(long *)(param_3 + 0x18),*(undefined4 *)(*(long *)(param_3 + 0x38) + 0x18),0
                      );
            if (*(long *)(param_3 + 0x38) != 0) {
              lVar1 = *(long *)(param_3 + 0x18);
              uVar2 = native_System_Collections_Generic_List_Vector3___ToArray_d2d9b4
                                (*(long *)(param_3 + 0x38),
                                 _Method_System_Collections_Generic_List_Vector3__ToArray___12dd4f8)
              ;
              if (lVar1 != 0) {
                native_UnityEngine_LineRenderer__SetPositions_8e20bc(lVar1,uVar2,0);
                if (*(long *)(param_3 + 0x70) != 0) {
                  native_System_Collections_Generic_List_Vector3___Add_d2be08
                            (uVar5,uVar6,uVar8,*(long *)(param_3 + 0x70),
                             _Method_System_Collections_Generic_List_Vector3__Add___12dd4e0);
                  *(int *)(param_3 + 0x20) = (int)uVar4;
                  *(int *)(param_3 + 0x24) = (int)param_2;
LAB_00738510:
                  *(int *)(param_3 + 0x28) = (int)uVar7;
                  return;
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



/* Painter$$IsPointInsideArea @ 0x738534
 * bool Painter__IsPointInsideArea (Painter_o* __this, UnityEngine_Vector3_o point, UnityEngine_Vector3_o areaMin, UnityEngine_Vector3_o areaMax, const MethodInfo* method); */

/* Painter$$IsPointInsideArea
   bool Painter__IsPointInsideArea (Painter_o* __this, UnityEngine_Vector3_o point,
   UnityEngine_Vector3_o areaMin, UnityEngine_Vector3_o areaMax, const MethodInfo* method); */

bool native_Painter__IsPointInsideArea_738534
               (float param_1,float param_2,float param_3,float param_4,float param_5,float param_6)

{
  float fStack0000000000000000;
  float fStack0000000000000004;
  float in_stack_00000008;
  
  if ((((param_2 <= fStack0000000000000004) && (param_5 <= param_2)) && (param_4 <= param_1)) &&
     (param_1 <= fStack0000000000000000)) {
    return param_6 <= param_3 && param_3 <= in_stack_00000008;
  }
  return false;
}



/* Painter$$checkinpaint @ 0x738580
 * bool Painter__checkinpaint (Painter_o* __this, const MethodInfo* method); */

/* Painter$$checkinpaint
   bool Painter__checkinpaint (Painter_o* __this, const MethodInfo* method); */

uint native_Painter__checkinpaint_738580
               (undefined1 param_1 [16],undefined8 param_2,undefined8 param_3,long param_4)

{
  uint uVar1;
  long lVar2;
  undefined8 uVar3;
  
  uVar3 = native_UnityEngine_Input__get_mousePosition_dbdd8c(0);
  lVar2 = native_UnityEngine_Camera__get_main_8d93c0(0);
  if (lVar2 != 0) {
    uVar3 = native_UnityEngine_Camera__ScreenToWorldPoint_8d9170(uVar3,param_2,param_3,lVar2,0);
    if ((*(long *)(param_4 + 0x40) != 0) &&
       (lVar2 = native_UnityEngine_GameObject__get_transform_8de5c8(*(long *)(param_4 + 0x40),0),
       lVar2 != 0)) {
      native_UnityEngine_Transform__InverseTransformPoint_7729a0(uVar3,param_2,param_3,lVar2,0);
      uVar1 = native_Painter__IsPointInsideArea_738534();
      return uVar1 & 1;
    }
  }
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* Painter$$createpointsprite @ 0x738640
 * UnityEngine_GameObject_o* Painter__createpointsprite (Painter_o* __this, int32_t ftype, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Painter$$createpointsprite
   UnityEngine_GameObject_o* Painter__createpointsprite (Painter_o* __this, int32_t ftype, const
   MethodInfo* method); */

void native_Painter__createpointsprite_738640(long param_1,undefined4 param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  if ((bRam000000000133f5df & 1) == 0) {
    native_sub_43273c(&Method_UnityEngine_Object_Instantiate_GameObject____12e5a68);
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    bRam000000000133f5df = 1;
  }
  switch(param_2) {
  default:
    uVar2 = *(undefined8 *)(param_1 + 0x90);
    break;
  case 1:
    uVar2 = *(undefined8 *)(param_1 + 0x98);
    break;
  case 2:
    uVar2 = *(undefined8 *)(param_1 + 0xa0);
    break;
  case 3:
    uVar2 = *(undefined8 *)(param_1 + 0xa8);
    break;
  case 4:
    uVar2 = *(undefined8 *)(param_1 + 0xb0);
  }
  uVar3 = *(undefined8 *)(param_1 + 0xb8);
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  lVar1 = _Method_UnityEngine_Object_Instantiate_GameObject____12e5a68;
  if ((bRam000000000133e727 & 1) == 0) {
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    bRam000000000133e727 = 1;
  }
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
                    /* WARNING: Could not recover jumptable at 0x004a65e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)**(undefined8 **)(lVar1 + 0x30))(uVar2,uVar3,0);
  return;
}



/* Painter$$Update @ 0x738730
 * void Painter__Update (Painter_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Painter$$Update
   void Painter__Update (Painter_o* __this, const MethodInfo* method); */

void native_Painter__Update_738730(long param_1)

{
  int iVar1;
  ulong uVar2;
  long lVar3;
  undefined8 uVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  uint uVar8;
  float fVar9;
  double dVar10;
  undefined8 uVar11;
  double dVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  float fVar16;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  
  if ((bRam000000000133f5e0 & 1) == 0) {
    native_sub_43273c(&Method_System_Collections_Generic_List_Vector3__get_Count___12dd500);
    native_sub_43273c(&Method_System_Collections_Generic_List_Vector3__get_Item___12dd508);
    native_sub_43273c(&Painter_TypeInfo_12d55f8);
    native_sub_43273c(&PanelMainUIController_TypeInfo_12d5600);
    bRam000000000133f5e0 = 1;
  }
  uVar2 = native_Painter__checkinpaint_738580(param_1);
  if ((uVar2 & 1) != 0) {
    uVar2 = native_UnityEngine_Input__GetMouseButtonDown_dbda98(0,0);
    if ((uVar2 & 1) == 0) {
      uVar2 = native_UnityEngine_Input__GetMouseButton_dbda58(0,0);
      if (((uVar2 & 1) != 0) &&
         (uVar2 = native_Painter__checkinpaint_738580(param_1), (uVar2 & 1) != 0)) {
        native_Painter__UpdateLine_7382e8(param_1);
      }
    }
    else {
      uVar2 = native_Painter__checkinpaint_738580(param_1);
      if ((uVar2 & 1) != 0) {
        *(undefined1 *)(param_1 + 200) = 1;
        native_Painter__start_button_737e60(param_1);
        if (*(long *)(param_1 + 0x48) == 0) goto LAB_00738c00;
        native_UnityEngine_GameObject__SetActive_8de698(*(long *)(param_1 + 0x48),0,0);
        native_UnityEngine_Input__get_mousePosition_dbdd8c(0);
        native_Painter__StartLine_7381a8(param_1);
      }
    }
  }
  if ((((*(char *)(param_1 + 200) != '\0') &&
       (uVar2 = native_UnityEngine_Input__GetMouseButtonUp_dbdad8(0,0), (uVar2 & 1) != 0)) &&
      (*(long *)(param_1 + 0x70) != 0)) && (0 < *(int *)(*(long *)(param_1 + 0x70) + 0x18))) {
    *(undefined1 *)(param_1 + 200) = 0;
    if (*(long *)(param_1 + 0x48) == 0) goto LAB_00738c00;
    lVar3 = native_UnityEngine_GameObject__get_transform_8de5c8(*(long *)(param_1 + 0x48),0);
    lVar7 = *(long *)(param_1 + 0x70);
    if (lVar7 == 0) goto LAB_00738c00;
    if (*(int *)(lVar7 + 0x18) == 0) {
      native_System_ThrowHelper__ThrowArgumentOutOfRangeException_9fe0f4(0);
    }
    if (lVar3 == 0) goto LAB_00738c00;
    lVar7 = *(long *)(lVar7 + 0x10);
    native_UnityEngine_Transform__set_localPosition_7718a4
              (*(undefined4 *)(lVar7 + 0x20),*(undefined4 *)(lVar7 + 0x24),
               *(undefined4 *)(lVar7 + 0x28),lVar3,0);
    if (*(long *)(param_1 + 0x48) == 0) goto LAB_00738c00;
    native_UnityEngine_GameObject__SetActive_8de698(*(long *)(param_1 + 0x48),1,0);
    *(undefined4 *)(param_1 + 0x5c) = 0;
  }
  if (((*(byte *)(_PanelMainUIController_TypeInfo_12d5600 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_PanelMainUIController_TypeInfo_12d5600 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  plVar5 = (long *)(_PanelMainUIController_TypeInfo_12d5600 + 0xb8);
  lVar3 = *plVar5;
  if ((*(char *)(lVar3 + 0x38) != '\0') && (*(int *)(param_1 + 0x78) == 0)) {
    if (((*(byte *)(_PanelMainUIController_TypeInfo_12d5600 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_PanelMainUIController_TypeInfo_12d5600 + 0xe0) == 0)) {
      native_sub_4327ec();
      plVar5 = (long *)(_PanelMainUIController_TypeInfo_12d5600 + 0xb8);
      lVar3 = *plVar5;
    }
    lVar7 = _PanelMainUIController_TypeInfo_12d5600;
    uVar4 = 0x7f800000;
    lVar6 = *(long *)(param_1 + 0x70);
    dVar12 = (double)*(float *)(lVar3 + 0x48);
    dVar10 = -dVar12;
    if (*(float *)(lVar3 + 0x48) != INFINITY) {
      dVar10 = dVar12;
    }
    *(int *)(param_1 + 0x78) = (int)dVar10;
    if (lVar6 != 0) {
      uVar8 = *(uint *)(param_1 + 0x5c);
      if (*(int *)(lVar6 + 0x18) + -1 < (int)uVar8) {
        if (((*(byte *)(lVar7 + 0x133) >> 2 & 1) != 0) && (*(int *)(lVar7 + 0xe0) == 0)) {
          native_sub_4327ec();
          plVar5 = (long *)(_PanelMainUIController_TypeInfo_12d5600 + 0xb8);
        }
        *(undefined1 *)(*plVar5 + 0x38) = 0;
        lVar6 = *(long *)(param_1 + 0x70);
        if (lVar6 == 0) goto LAB_00738c00;
        uVar8 = *(uint *)(param_1 + 0x5c);
      }
      if (*(uint *)(lVar6 + 0x18) <= uVar8) {
        native_System_ThrowHelper__ThrowArgumentOutOfRangeException_9fe0f4(0);
      }
      if (*(long *)(param_1 + 0x48) != 0) {
        lVar3 = *(long *)(lVar6 + 0x10) + (long)(int)uVar8 * 0xc;
        uVar13 = *(undefined4 *)(lVar3 + 0x20);
        uVar14 = *(undefined4 *)(lVar3 + 0x24);
        uVar15 = *(undefined4 *)(lVar3 + 0x28);
        lVar3 = native_UnityEngine_GameObject__get_transform_8de5c8(*(long *)(param_1 + 0x48),0);
        if (lVar3 != 0) {
          uVar11 = native_UnityEngine_Transform__get_localPosition_7717f4(lVar3,0);
          lVar3 = *(long *)(param_1 + 0x70);
          if (lVar3 != 0) {
            iVar1 = *(int *)(param_1 + 0x5c);
            uVar8 = *(uint *)(lVar3 + 0x18);
            if (iVar1 + 2 < (int)uVar8) {
              if (uVar8 <= iVar1 + 1U) {
                native_System_ThrowHelper__ThrowArgumentOutOfRangeException_9fe0f4(0);
              }
              lVar3 = *(long *)(lVar3 + 0x10) + (long)(int)(iVar1 + 1U) * 0xc;
              uStack_74 = (undefined4)uVar11;
              uStack_7c = (undefined4)uVar4;
              dVar10 = dVar12;
              uStack_84 = *(undefined4 *)(lVar3 + 0x28);
              uStack_80 = *(undefined4 *)(lVar3 + 0x24);
              uStack_78 = *(undefined4 *)(lVar3 + 0x20);
            }
            else {
              if (uVar8 <= iVar1 - 2U) {
                native_System_ThrowHelper__ThrowArgumentOutOfRangeException_9fe0f4(0);
              }
              lVar3 = *(long *)(lVar3 + 0x10) + (long)(int)(iVar1 - 2U) * 0xc;
              uStack_74 = *(undefined4 *)(lVar3 + 0x20);
              uStack_7c = *(undefined4 *)(lVar3 + 0x24);
              dVar10 = (double)(ulong)*(uint *)(lVar3 + 0x28);
              uStack_84 = uVar15;
              uStack_80 = uVar14;
              uStack_78 = uVar13;
            }
            if (*(long *)(param_1 + 0x48) != 0) {
              lVar3 = native_UnityEngine_GameObject__get_transform_8de5c8
                                (*(long *)(param_1 + 0x48),0);
              fVar16 = *(float *)(param_1 + 0x58);
              fVar9 = (float)native_UnityEngine_Time__get_deltaTime_77082c(0);
              native_UnityEngine_Vector3__MoveTowards_775eac
                        (uVar11,uVar4,dVar12,uVar13,uVar14,uVar15,fVar16 * fVar9,0);
              if (lVar3 != 0) {
                native_UnityEngine_Transform__set_localPosition_7718a4(lVar3,0);
                if ((*(long *)(param_1 + 0x48) != 0) &&
                   (lVar3 = native_UnityEngine_GameObject__get_transform_8de5c8
                                      (*(long *)(param_1 + 0x48),0), lVar3 != 0)) {
                  uVar11 = native_UnityEngine_Transform__get_localPosition_7717f4(lVar3,0);
                  fVar9 = (float)native_UnityEngine_Vector2__Distance_7757a4
                                           (uVar13,uVar14,uVar11,uVar4,0);
                  if (fVar9 <= 0.05) {
                    *(int *)(param_1 + 0x5c) = *(int *)(param_1 + 0x5c) + 1;
                    native_Painter__judge_direction_738c04
                              (uStack_74,uStack_7c,dVar10,uStack_78,uStack_80,uStack_84,param_1);
                  }
                  if (*(long *)(param_1 + 0x70) != 0) {
                    if (*(int *)(*(long *)(param_1 + 0x70) + 0x18) + -1 < *(int *)(param_1 + 0x5c))
                    {
                      if (((*(byte *)(_PanelMainUIController_TypeInfo_12d5600 + 0x133) >> 2 & 1) !=
                           0) && (*(int *)(_PanelMainUIController_TypeInfo_12d5600 + 0xe0) == 0)) {
                        native_sub_4327ec();
                      }
                      *(undefined1 *)
                       (*(long *)(_PanelMainUIController_TypeInfo_12d5600 + 0xb8) + 0x38) = 0;
                    }
                    goto LAB_00738b58;
                  }
                }
              }
            }
          }
        }
      }
    }
LAB_00738c00:
                    /* WARNING: Subroutine does not return */
    native_sub_432810();
  }
LAB_00738b58:
  lVar3 = native_Painter__gethaomiao_738ed4();
  if (((*(byte *)(_Painter_TypeInfo_12d55f8 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_Painter_TypeInfo_12d55f8 + 0xe0) == 0)) {
    native_sub_4327ec(_Painter_TypeInfo_12d55f8);
  }
  if (0x31 < lVar3 - **(long **)(_Painter_TypeInfo_12d55f8 + 0xb8)) {
    uVar4 = native_Painter__gethaomiao_738ed4();
    if (((*(byte *)(_Painter_TypeInfo_12d55f8 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_Painter_TypeInfo_12d55f8 + 0xe0) == 0)) {
      native_sub_4327ec(_Painter_TypeInfo_12d55f8);
    }
    **(undefined8 **)(_Painter_TypeInfo_12d55f8 + 0xb8) = uVar4;
    if (0 < *(int *)(param_1 + 0x78)) {
      *(int *)(param_1 + 0x78) = *(int *)(param_1 + 0x78) + -1;
    }
  }
  return;
}



/* Painter$$judge_direction @ 0x738c04
 * void Painter__judge_direction (Painter_o* __this, UnityEngine_Vector3_o nowposition, UnityEngine_Vector3_o nextposition, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Painter$$judge_direction
   void Painter__judge_direction (Painter_o* __this, UnityEngine_Vector3_o nowposition,
   UnityEngine_Vector3_o nextposition, const MethodInfo* method); */

void native_Painter__judge_direction_738c04
               (undefined1 param_1 [16],float param_2,undefined8 param_3)

{
  uint uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined1 uVar4;
  float fVar5;
  
  if ((bRam000000000133f5e1 & 1) == 0) {
    native_sub_43273c(&PanelMainUIController_TypeInfo_12d5600);
    bRam000000000133f5e1 = 1;
  }
  lVar2 = native_UnityEngine_Component__get_transform_8da62c(param_3,0);
  if (lVar2 == 0) goto LAB_00738ed0;
  native_UnityEngine_Transform__get_forward_771a8c(lVar2,0);
  fVar5 = (float)native_UnityEngine_Vector3__Cross_776458(0);
  if (fVar5 <= 13.0) {
    lVar2 = native_UnityEngine_Component__get_transform_8da62c(param_3,0);
    if (lVar2 == 0) goto LAB_00738ed0;
    native_UnityEngine_Transform__get_forward_771a8c(lVar2,0);
    fVar5 = (float)native_UnityEngine_Vector3__Cross_776458(0);
    param_2 = -13.0;
    if (fVar5 < -13.0) {
      uVar3 = 2;
      goto LAB_00738ce0;
    }
    uVar1 = 0;
  }
  else {
    uVar3 = 3;
LAB_00738ce0:
    uVar1 = native_Assets_Scripts_Tools_HjdBleTool__setIntegerSomeBit_7f7068(0,uVar3,1,0);
  }
  lVar2 = native_UnityEngine_Component__get_transform_8da62c(param_3,0);
  if (lVar2 == 0) {
LAB_00738ed0:
                    /* WARNING: Subroutine does not return */
    native_sub_432810();
  }
  native_UnityEngine_Transform__get_forward_771a8c(lVar2,0);
  native_UnityEngine_Vector3__Cross_776458(0);
  if (param_2 <= 13.0) {
    lVar2 = native_UnityEngine_Component__get_transform_8da62c(param_3,0);
    if (lVar2 == 0) goto LAB_00738ed0;
    native_UnityEngine_Transform__get_forward_771a8c(lVar2,0);
    native_UnityEngine_Vector3__Cross_776458(0);
    if (param_2 < -13.0) {
      uVar3 = 1;
      goto LAB_00738d74;
    }
  }
  else {
    uVar3 = 0;
LAB_00738d74:
    uVar1 = native_Assets_Scripts_Tools_HjdBleTool__setIntegerSomeBit_7f7068(uVar1,uVar3,1,0);
  }
  switch(uVar1 & 0xff) {
  case 1:
    if (((*(byte *)(_PanelMainUIController_TypeInfo_12d5600 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_PanelMainUIController_TypeInfo_12d5600 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    uVar4 = 1;
    break;
  case 2:
    if (((*(byte *)(_PanelMainUIController_TypeInfo_12d5600 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_PanelMainUIController_TypeInfo_12d5600 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    uVar4 = 2;
    break;
  default:
    goto LAB_00738eb8;
  case 4:
  case 5:
    if (((*(byte *)(_PanelMainUIController_TypeInfo_12d5600 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_PanelMainUIController_TypeInfo_12d5600 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    uVar4 = 5;
    break;
  case 6:
    if (((*(byte *)(_PanelMainUIController_TypeInfo_12d5600 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_PanelMainUIController_TypeInfo_12d5600 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    uVar4 = 6;
    break;
  case 8:
  case 9:
    if (((*(byte *)(_PanelMainUIController_TypeInfo_12d5600 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_PanelMainUIController_TypeInfo_12d5600 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    uVar4 = 9;
    break;
  case 10:
    if (((*(byte *)(_PanelMainUIController_TypeInfo_12d5600 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_PanelMainUIController_TypeInfo_12d5600 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    uVar4 = 10;
  }
  *(undefined1 *)(*(long *)(_PanelMainUIController_TypeInfo_12d5600 + 0xb8) + 0x39) = uVar4;
LAB_00738eb8:
  return;
}



/* Painter$$gethaomiao @ 0x738ed4
 * int64_t Painter__gethaomiao (Painter_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Painter$$gethaomiao
   int64_t Painter__gethaomiao (Painter_o* __this, const MethodInfo* method); */

long native_Painter__gethaomiao_738ed4(void)

{
  long lVar1;
  undefined8 uStack_18;
  
  if ((bRam000000000133f5e2 & 1) == 0) {
    native_sub_43273c(&System_DateTime_TypeInfo_12d42f8);
    bRam000000000133f5e2 = 1;
  }
  uStack_18 = 0;
  if (((*(byte *)(_System_DateTime_TypeInfo_12d42f8 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_System_DateTime_TypeInfo_12d42f8 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uStack_18 = native_System_DateTime__get_Now_9c70d8(0);
  uStack_18 = native_System_DateTime__ToUniversalTime_9c7e74(&uStack_18,0);
  lVar1 = native_System_DateTime__get_Ticks_9c721c(&uStack_18,0);
  return (lVar1 + -0x89f7ff5f7b58000) / 10000;
}



/* Painter$$.ctor @ 0x738f88
 * void Painter___ctor (Painter_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Painter$$.ctor
   void Painter___ctor (Painter_o* __this, const MethodInfo* method); */

long native_Painter___ctor_738f88(long param_1)

{
  *(undefined1 *)(param_1 + 0x2c) = 1;
  *(undefined8 *)(param_1 + 0x30) = 0x3ca3d70a3dcccccd;
  *(undefined4 *)(param_1 + 0x58) = 0x41200000;
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



/* Painter$$.cctor @ 0x738fac
 * void Painter___cctor (const MethodInfo* method); */

/* Painter$$.cctor
   void Painter___cctor (const MethodInfo* method); */

void native_Painter___cctor_738fac(void)

{
  return;
}


