/* ARM64 IL2CPP native pseudocode from Ghidra.
 * Recovered implementation, not original C# source.
 * Function boundaries follow the IL2CPP method address table. */


/* UISavedOption$$get_key @ 0xc30040
 * System_String_o* UISavedOption__get_key (UISavedOption_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UISavedOption$$get_key
   System_String_o* UISavedOption__get_key (UISavedOption_o* __this, const MethodInfo* method); */

long native_UISavedOption__get_key_c30040(long param_1)

{
  int iVar1;
  bool bVar2;
  bool bVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  
  if ((bRam0000000001342727 & 1) == 0) {
    native_sub_43273c(&StringLiteral_NGUI_State___12efbc8);
    bRam0000000001342727 = 1;
  }
  uVar5 = native_System_String__IsNullOrEmpty_b09430(*(undefined8 *)(param_1 + 0x18),0);
  if ((uVar5 & 1) == 0) {
    return *(long *)(param_1 + 0x18);
  }
  lVar6 = native_UnityEngine_Object__get_name_8e8098(param_1,0);
  lVar7 = _StringLiteral_NGUI_State___12efbc8;
  if ((bRam000000000134213f & 1) == 0) {
    native_sub_43273c(&string_TypeInfo_12d5f28,lVar6,0);
    bRam000000000134213f = 1;
  }
  if (lVar7 == 0) {
    bVar2 = true;
  }
  else {
    bVar2 = *(int *)(lVar7 + 0x10) == 0;
  }
  if (lVar6 == 0) {
    bVar3 = true;
  }
  else {
    bVar3 = *(int *)(lVar6 + 0x10) == 0;
  }
  if (bVar2) {
    lVar7 = lVar6;
    if (bVar3) {
      lVar7 = **(long **)(_string_TypeInfo_12d5f28 + 0xb8);
    }
  }
  else if (!bVar3) {
    if ((lVar7 == 0) || (lVar6 == 0)) {
                    /* WARNING: Subroutine does not return */
      native_sub_432810();
    }
    iVar1 = *(int *)(lVar7 + 0x10);
    lVar4 = native_sub_3bca18(*(int *)(lVar6 + 0x10) + iVar1);
    native_System_String__FillStringChecked_b0a62c(lVar4,0,lVar7);
    native_System_String__FillStringChecked_b0a62c(lVar4,iVar1,lVar6);
    lVar7 = lVar4;
  }
  return lVar7;
}



/* UISavedOption$$Awake @ 0xc300c0
 * void UISavedOption__Awake (UISavedOption_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UISavedOption$$Awake
   void UISavedOption__Awake (UISavedOption_o* __this, const MethodInfo* method); */

void native_UISavedOption__Awake_c300c0(long param_1)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  undefined8 uVar4;
  
  if ((bRam0000000001342728 & 1) == 0) {
    native_sub_43273c(&Method_UnityEngine_Component_GetComponent_UIPopupList____12e2be8);
    native_sub_43273c(&Method_UnityEngine_Component_GetComponent_UIProgressBar____12e2bf0);
    native_sub_43273c(&Method_UnityEngine_Component_GetComponent_UIToggle____12e2c28);
    bRam0000000001342728 = 1;
  }
  uVar4 = native_UnityEngine_Component__GetComponent_ActiveAnimation__49daec
                    (param_1,_Method_UnityEngine_Component_GetComponent_UIPopupList____12e2be8);
  *(undefined8 *)(param_1 + 0x20) = uVar4;
  native_sub_4326e0(param_1 + 0x20);
  uVar4 = native_UnityEngine_Component__GetComponent_ActiveAnimation__49daec
                    (param_1,_Method_UnityEngine_Component_GetComponent_UIToggle____12e2c28);
  *(undefined8 *)(param_1 + 0x28) = uVar4;
  native_sub_4326e0(param_1 + 0x28);
  uVar4 = native_UnityEngine_Component__GetComponent_ActiveAnimation__49daec
                    (param_1,_Method_UnityEngine_Component_GetComponent_UIProgressBar____12e2bf0);
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



/* UISavedOption$$OnEnable @ 0xc3017c
 * void UISavedOption__OnEnable (UISavedOption_o* __this, const MethodInfo* method); */

/* WARNING: Removing unreachable block (ram,0x00945e54) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UISavedOption$$OnEnable
   void UISavedOption__OnEnable (UISavedOption_o* __this, const MethodInfo* method); */

ulong native_UISavedOption__OnEnable_c3017c(long param_1)

{
  bool bVar1;
  byte bVar2;
  int iVar3;
  uint uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong *puVar7;
  ulong uVar8;
  undefined8 *puVar9;
  ulong uVar10;
  long *plVar11;
  long lVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  uint uVar15;
  undefined4 uVar16;
  undefined4 extraout_s0;
  undefined4 extraout_s0_00;
  float fVar17;
  float fVar18;
  undefined4 uVar19;
  undefined1 auStack_64 [4];
  
  if ((bRam0000000001342729 & 1) == 0) {
    native_sub_43273c(&EventDelegate_Callback_TypeInfo_12d72e8);
    native_sub_43273c(&Method_UnityEngine_Component_GetComponentsInChildren_UIToggle____12e2e40);
    native_sub_43273c(&EventDelegate_TypeInfo_12d4590);
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    native_sub_43273c(&Method_UISavedOption_SaveProgress___12e7880);
    native_sub_43273c(&Method_UISavedOption_SaveSelection___12e7888);
    native_sub_43273c(&Method_UISavedOption_SaveState___12e7890);
    bRam0000000001342729 = 1;
  }
  uVar13 = *(undefined8 *)(param_1 + 0x20);
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar10 = native_UnityEngine_Object__op_Inequality_8d76fc(uVar13,0,0);
  if ((uVar10 & 1) != 0) {
    if (*(long *)(param_1 + 0x20) != 0) {
      uVar14 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0xd0);
      uVar13 = native_sub_432808(_EventDelegate_Callback_TypeInfo_12d72e8);
      native_EventDelegate_Callback___ctor_54bd18
                (uVar13,param_1,_Method_UISavedOption_SaveSelection___12e7888,0);
      if (((*(byte *)(_EventDelegate_TypeInfo_12d4590 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_EventDelegate_TypeInfo_12d4590 + 0xe0) == 0)) {
        native_sub_4327ec();
      }
      native_EventDelegate__Add_def10c(uVar14,uVar13,0);
      uVar13 = native_UISavedOption__get_key_c30040(param_1);
      uVar13 = native_UnityEngine_PlayerPrefs__GetString_761f94(uVar13,0);
      uVar10 = native_System_String__IsNullOrEmpty_b09430(uVar13,0);
      if ((uVar10 & 1) != 0) {
        return uVar10;
      }
      plVar11 = *(long **)(param_1 + 0x20);
      if (plVar11 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00c302e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar10 = (**(code **)(*plVar11 + 0x188))(plVar11,uVar13,*(undefined8 *)(*plVar11 + 400));
        return uVar10;
      }
    }
LAB_00c3055c:
                    /* WARNING: Subroutine does not return */
    native_sub_432810();
  }
  uVar13 = *(undefined8 *)(param_1 + 0x28);
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar10 = native_UnityEngine_Object__op_Inequality_8d76fc(uVar13,0,0);
  if ((uVar10 & 1) == 0) {
    uVar13 = *(undefined8 *)(param_1 + 0x30);
    if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    uVar10 = native_UnityEngine_Object__op_Inequality_8d76fc(uVar13,0,0);
    if ((uVar10 & 1) == 0) {
      uVar13 = native_UISavedOption__get_key_c30040(param_1);
      uVar13 = native_UnityEngine_PlayerPrefs__GetString_761f94(uVar13,0);
      uVar10 = native_UnityEngine_Component__GetComponentsInChildren_object__49de40
                         (param_1,1,
                          _Method_UnityEngine_Component_GetComponentsInChildren_UIToggle____12e2e40)
      ;
      if (uVar10 != 0) {
        iVar3 = (int)*(undefined8 *)(uVar10 + 0x18);
        if (iVar3 < 1) {
          return uVar10;
        }
        if (iVar3 != 0) {
          uVar15 = 0;
          do {
            lVar12 = *(long *)(uVar10 + (long)(int)uVar15 * 8 + 0x20);
            if (lVar12 == 0) goto LAB_00c3055c;
            uVar14 = native_UnityEngine_Object__get_name_8e8098(lVar12,0);
            uVar4 = native_System_String__op_Equality_afc18c(uVar14,uVar13,0);
            uVar5 = native_UIToggle__set_value_945b40(lVar12,uVar4 & 1,0);
            uVar15 = uVar15 + 1;
            if (iVar3 <= (int)uVar15) {
              return uVar5;
            }
          } while (uVar15 < *(uint *)(uVar10 + 0x18));
        }
        uVar13 = native_sub_43283c();
                    /* WARNING: Subroutine does not return */
        native_sub_4327dc(uVar13,0);
      }
    }
    else if (*(long *)(param_1 + 0x30) != 0) {
      uVar14 = *(undefined8 *)(*(long *)(param_1 + 0x30) + 0x68);
      uVar13 = native_sub_432808(_EventDelegate_Callback_TypeInfo_12d72e8);
      native_EventDelegate_Callback___ctor_54bd18
                (uVar13,param_1,_Method_UISavedOption_SaveProgress___12e7880,0);
      if (((*(byte *)(_EventDelegate_TypeInfo_12d4590 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_EventDelegate_TypeInfo_12d4590 + 0xe0) == 0)) {
        native_sub_4327ec();
      }
      native_EventDelegate__Add_def10c(uVar14,uVar13,0);
      plVar11 = *(long **)(param_1 + 0x30);
      uVar13 = native_UISavedOption__get_key_c30040(param_1);
      if (*(long *)(param_1 + 0x30) != 0) {
        native_UIProgressBar__get_value_c2b6f0(*(long *)(param_1 + 0x30));
        uVar13 = native_UnityEngine_PlayerPrefs__GetFloat_761e58(uVar13,0);
        if (plVar11 != (long *)0x0) {
          if ((bRam00000000013426fb & 1) == 0) {
            native_sub_43273c(&EventDelegate_TypeInfo_12d4590);
            native_sub_43273c(&NGUITools_TypeInfo_12d53c8);
            native_sub_43273c(&UIProgressBar_TypeInfo_12d6498);
            bRam00000000013426fb = 1;
          }
          fVar17 = (float)native_UnityEngine_Mathf__Clamp01_8d9d9c(uVar13,0);
          if (*(float *)(plVar11 + 7) == fVar17) {
            uVar10 = 0;
          }
          else {
            fVar18 = (float)native_UIProgressBar__get_value_c2b6f0(plVar11);
            *(float *)(plVar11 + 7) = fVar17;
            if (((char)plVar11[8] != '\0') &&
               (fVar17 = (float)native_UIProgressBar__get_value_c2b6f0(plVar11), fVar18 != fVar17))
            {
              if (((*(byte *)(_NGUITools_TypeInfo_12d53c8 + 0x133) >> 2 & 1) != 0) &&
                 (*(int *)(_NGUITools_TypeInfo_12d53c8 + 0xe0) == 0)) {
                native_sub_4327ec();
              }
              uVar10 = native_NGUITools__GetActive_72d02c(plVar11,0);
              if ((uVar10 & 1) != 0) {
                lVar12 = plVar11[0xd];
                if (((*(byte *)(_EventDelegate_TypeInfo_12d4590 + 0x133) >> 2 & 1) != 0) &&
                   (*(int *)(_EventDelegate_TypeInfo_12d4590 + 0xe0) == 0)) {
                  native_sub_4327ec();
                }
                uVar10 = native_EventDelegate__IsValid_deef08(lVar12,0);
                if ((uVar10 & 1) != 0) {
                  puVar9 = *(undefined8 **)(_UIProgressBar_TypeInfo_12d6498 + 0xb8);
                  *puVar9 = plVar11;
                  native_sub_4326e0(puVar9,plVar11);
                  lVar12 = plVar11[0xd];
                  if (((*(byte *)(_EventDelegate_TypeInfo_12d4590 + 0x133) >> 2 & 1) != 0) &&
                     (*(int *)(_EventDelegate_TypeInfo_12d4590 + 0xe0) == 0)) {
                    native_sub_4327ec();
                  }
                  native_EventDelegate__Execute_deecbc(lVar12,0);
                  puVar9 = *(undefined8 **)(_UIProgressBar_TypeInfo_12d6498 + 0xb8);
                  *puVar9 = 0;
                  native_sub_4326e0(puVar9,0);
                }
              }
              (**(code **)(*plVar11 + 0x1a8))(plVar11,*(undefined8 *)(*plVar11 + 0x1b0));
            }
            uVar10 = 1;
          }
          return uVar10;
        }
      }
    }
    goto LAB_00c3055c;
  }
  if (*(long *)(param_1 + 0x28) == 0) goto LAB_00c3055c;
  uVar14 = *(undefined8 *)(*(long *)(param_1 + 0x28) + 0x50);
  uVar13 = native_sub_432808(_EventDelegate_Callback_TypeInfo_12d72e8);
  native_EventDelegate_Callback___ctor_54bd18
            (uVar13,param_1,_Method_UISavedOption_SaveState___12e7890,0);
  if (((*(byte *)(_EventDelegate_TypeInfo_12d4590 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_EventDelegate_TypeInfo_12d4590 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  native_EventDelegate__Add_def10c(uVar14,uVar13,0);
  uVar10 = *(ulong *)(param_1 + 0x28);
  uVar13 = native_UISavedOption__get_key_c30040(param_1);
  if ((*(long *)(param_1 + 0x28) == 0) ||
     (iVar3 = native_UnityEngine_PlayerPrefs__GetInt_761d6c
                        (uVar13,*(undefined1 *)(*(long *)(param_1 + 0x28) + 0x48),0), uVar10 == 0))
  goto LAB_00c3055c;
  bVar1 = iVar3 != 0;
  if (*(char *)(uVar10 + 0x89) == '\0') {
    *(bool *)(uVar10 + 0x48) = bVar1;
    return uVar10;
  }
  if (((*(int *)(uVar10 + 0x18) != 0) && (!bVar1)) && (*(char *)(uVar10 + 0x4a) == '\0')) {
    return uVar10;
  }
  if ((bRam0000000001341431 & 1) == 0) {
    native_sub_43273c(&bool_TypeInfo_12d3bd0);
    native_sub_43273c(&EventDelegate_TypeInfo_12d4590);
    native_sub_43273c(&Method_UnityEngine_GameObject_GetComponentsInChildren_UITweener____12e4b98);
    native_sub_43273c(&NGUITools_TypeInfo_12d53c8);
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    native_sub_43273c(&UIToggle_TypeInfo_12d64e0);
    bRam0000000001341431 = 1;
  }
  uVar5 = 0;
  if ((*(long *)(uVar10 + 0x58) != 0) &&
     (uVar5 = native_UIToggle_Validate__Invoke_55b360(*(long *)(uVar10 + 0x58),bVar1,0),
     (uVar5 & 1) == 0)) {
    return uVar5;
  }
  if (*(char *)(uVar10 + 0x89) == '\0') {
    *(bool *)(uVar10 + 0x88) = bVar1;
    *(bool *)(uVar10 + 0x48) = bVar1;
    uVar13 = *(undefined8 *)(uVar10 + 0x20);
    if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    uVar5 = native_UnityEngine_Object__op_Inequality_8d76fc(uVar13,0,0);
    if ((uVar5 & 1) == 0) {
      return uVar5;
    }
    plVar11 = *(long **)(uVar10 + 0x20);
    if (plVar11 != (long *)0x0) {
      uVar16 = 0;
      uVar19 = 0x3f800000;
      if (!bVar1) {
        uVar16 = 0x3f800000;
        uVar19 = 0;
      }
      if (*(char *)(uVar10 + 0x28) != '\0') {
        uVar19 = uVar16;
      }
                    /* WARNING: Could not recover jumptable at 0x00945ee8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar10 = (**(code **)(*plVar11 + 0x1b8))(uVar19,plVar11,*(undefined8 *)(*plVar11 + 0x1c0));
      return uVar10;
    }
    goto LAB_00946448;
  }
  if ((*(char *)(uVar10 + 0x88) != '\0') == bVar1) {
    return uVar5;
  }
  if ((*(int *)(uVar10 + 0x18) != 0) && (bVar1)) {
    if (((*(byte *)(_UIToggle_TypeInfo_12d64e0 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UIToggle_TypeInfo_12d64e0 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    if (**(long **)(_UIToggle_TypeInfo_12d64e0 + 0xb8) == 0) goto LAB_00946448;
    iVar3 = *(int *)(**(long **)(_UIToggle_TypeInfo_12d64e0 + 0xb8) + 0x18);
    while (0 < iVar3) {
      uVar5 = 0;
      while( true ) {
        if (((*(byte *)(_UIToggle_TypeInfo_12d64e0 + 0x133) >> 2 & 1) != 0) &&
           (*(int *)(_UIToggle_TypeInfo_12d64e0 + 0xe0) == 0)) {
          native_sub_4327ec();
        }
        if ((**(long **)(_UIToggle_TypeInfo_12d64e0 + 0xb8) == 0) ||
           (lVar12 = *(long *)(**(long **)(_UIToggle_TypeInfo_12d64e0 + 0xb8) + 0x10), lVar12 == 0))
        goto LAB_00946448;
        if (*(uint *)(lVar12 + 0x18) <= uVar5) goto LAB_0094641c;
        lVar12 = *(long *)(lVar12 + uVar5 * 8 + 0x20);
        if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
           (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
          native_sub_4327ec();
        }
        uVar6 = native_UnityEngine_Object__op_Inequality_8d76fc(lVar12,uVar10,0);
        if ((uVar6 & 1) != 0) {
          if (lVar12 == 0) goto LAB_00946448;
          if (*(int *)(lVar12 + 0x18) == *(int *)(uVar10 + 0x18)) {
            native_UIToggle__Set_945b78(lVar12,0,1);
          }
        }
        if (((*(byte *)(_UIToggle_TypeInfo_12d64e0 + 0x133) >> 2 & 1) != 0) &&
           (*(int *)(_UIToggle_TypeInfo_12d64e0 + 0xe0) == 0)) {
          native_sub_4327ec();
        }
        lVar12 = **(long **)(_UIToggle_TypeInfo_12d64e0 + 0xb8);
        if (lVar12 == 0) goto LAB_00946448;
        if (*(int *)(lVar12 + 0x18) != iVar3) break;
        uVar5 = uVar5 + 1;
        if ((long)iVar3 <= (long)uVar5) goto LAB_00945d90;
      }
      if (((*(byte *)(_UIToggle_TypeInfo_12d64e0 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_UIToggle_TypeInfo_12d64e0 + 0xe0) == 0)) {
        native_sub_4327ec();
        lVar12 = **(long **)(_UIToggle_TypeInfo_12d64e0 + 0xb8);
        if (lVar12 == 0) goto LAB_00946448;
      }
      iVar3 = *(int *)(lVar12 + 0x18);
    }
  }
LAB_00945d90:
  *(bool *)(uVar10 + 0x88) = bVar1;
  uVar13 = *(undefined8 *)(uVar10 + 0x20);
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar5 = native_UnityEngine_Object__op_Inequality_8d76fc(uVar13,0,0);
  if ((uVar5 & 1) != 0) {
    if (*(char *)(uVar10 + 0x49) == '\0') {
      if (((*(byte *)(_NGUITools_TypeInfo_12d53c8 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_NGUITools_TypeInfo_12d53c8 + 0xe0) == 0)) {
        native_sub_4327ec();
      }
      uVar5 = native_NGUITools__GetActive_72d02c(uVar10,0);
      if ((uVar5 & 1) != 0) {
        if (*(long *)(uVar10 + 0x20) == 0) goto LAB_00946448;
        uVar13 = native_UnityEngine_Component__get_gameObject_8da66c(*(long *)(uVar10 + 0x20),0);
        uVar16 = 0;
        uVar19 = 0x3f800000;
        if (*(char *)(uVar10 + 0x88) == '\0') {
          uVar16 = 0x3f800000;
          uVar19 = 0;
        }
        if (*(char *)(uVar10 + 0x28) != '\0') {
          uVar19 = uVar16;
        }
        native_TweenAlpha__Begin_6e3220(0x3e19999a,uVar19,0,uVar13,0);
        goto LAB_00945f28;
      }
    }
    plVar11 = *(long **)(uVar10 + 0x20);
    if (plVar11 == (long *)0x0) goto LAB_00946448;
    uVar16 = 0;
    uVar19 = 0x3f800000;
    if (*(char *)(uVar10 + 0x88) == '\0') {
      uVar16 = 0x3f800000;
      uVar19 = 0;
    }
    if (*(char *)(uVar10 + 0x28) != '\0') {
      uVar19 = uVar16;
    }
    (**(code **)(*plVar11 + 0x1b8))(uVar19,plVar11,*(undefined8 *)(*plVar11 + 0x1c0));
  }
LAB_00945f28:
  if (((*(byte *)(_UIToggle_TypeInfo_12d64e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UIToggle_TypeInfo_12d64e0 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar13 = *(undefined8 *)(*(long *)(_UIToggle_TypeInfo_12d64e0 + 0xb8) + 8);
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec(_UnityEngine_Object_TypeInfo_12d54e0);
  }
  uVar5 = native_UnityEngine_Object__op_Equality_8e9a3c(uVar13,0,0);
  if ((uVar5 & 1) != 0) {
    if (((*(byte *)(_UIToggle_TypeInfo_12d64e0 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UIToggle_TypeInfo_12d64e0 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    puVar7 = (ulong *)(*(long *)(_UIToggle_TypeInfo_12d64e0 + 0xb8) + 8);
    uVar5 = *puVar7;
    *puVar7 = uVar10;
    native_sub_4326e0(puVar7,uVar10);
    uVar13 = *(undefined8 *)(uVar10 + 0x50);
    if (((*(byte *)(_EventDelegate_TypeInfo_12d4590 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_EventDelegate_TypeInfo_12d4590 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    uVar6 = native_EventDelegate__IsValid_deef08(uVar13,0);
    if ((uVar6 & 1) == 0) {
      uVar13 = *(undefined8 *)(uVar10 + 0x70);
      if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
        native_sub_4327ec();
      }
      uVar6 = native_UnityEngine_Object__op_Inequality_8d76fc(uVar13,0,0);
      if (((uVar6 & 1) != 0) &&
         (uVar6 = native_System_String__IsNullOrEmpty_b09430(*(undefined8 *)(uVar10 + 0x78),0),
         (uVar6 & 1) == 0)) {
        lVar12 = *(long *)(uVar10 + 0x70);
        uVar13 = *(undefined8 *)(uVar10 + 0x78);
        auStack_64[0] = *(undefined1 *)(uVar10 + 0x88);
        uVar14 = native_sub_4327fc(_bool_TypeInfo_12d3bd0,auStack_64);
        if (lVar12 == 0) goto LAB_00946448;
        native_UnityEngine_GameObject__SendMessage_8de4c0(lVar12,uVar13,uVar14,1,0);
      }
    }
    else {
      uVar13 = *(undefined8 *)(uVar10 + 0x50);
      if (((*(byte *)(_EventDelegate_TypeInfo_12d4590 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_EventDelegate_TypeInfo_12d4590 + 0xe0) == 0)) {
        native_sub_4327ec();
      }
      native_EventDelegate__Execute_deecbc(uVar13,0);
    }
    if (((*(byte *)(_UIToggle_TypeInfo_12d64e0 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UIToggle_TypeInfo_12d64e0 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    puVar7 = (ulong *)(*(long *)(_UIToggle_TypeInfo_12d64e0 + 0xb8) + 8);
    *puVar7 = uVar5;
    native_sub_4326e0(puVar7,uVar5);
  }
  uVar13 = *(undefined8 *)(uVar10 + 0x38);
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar5 = native_UnityEngine_Object__op_Inequality_8d76fc(uVar13,0,0);
  if ((uVar5 & 1) != 0) {
    uVar19 = 0xffffffff;
    if (bVar1) {
      uVar19 = 1;
    }
    lVar12 = native_ActiveAnimation__Play_561f30(*(undefined8 *)(uVar10 + 0x38),0,uVar19,2,0,0);
    if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
      native_sub_4327ec(_UnityEngine_Object_TypeInfo_12d54e0);
    }
    uVar5 = native_UnityEngine_Object__op_Inequality_8d76fc(lVar12,0,0);
    if ((uVar5 & 1) != 0) {
      if (*(char *)(uVar10 + 0x49) == '\0') {
        if (((*(byte *)(_NGUITools_TypeInfo_12d53c8 + 0x133) >> 2 & 1) != 0) &&
           (*(int *)(_NGUITools_TypeInfo_12d53c8 + 0xe0) == 0)) {
          native_sub_4327ec();
        }
        uVar5 = native_NGUITools__GetActive_72d02c(uVar10,0);
        if ((uVar5 & 1) != 0) goto LAB_0094618c;
      }
      if (lVar12 == 0) goto LAB_00946448;
      native_ActiveAnimation__Finish_5608e8(lVar12,0);
    }
  }
LAB_0094618c:
  uVar13 = *(undefined8 *)(uVar10 + 0x30);
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar5 = native_UnityEngine_Object__op_Inequality_8d76fc(uVar13,0,0);
  if ((uVar5 & 1) != 0) {
    uVar19 = 0xffffffff;
    if (bVar1) {
      uVar19 = 1;
    }
    lVar12 = native_ActiveAnimation__Play_561c20(*(undefined8 *)(uVar10 + 0x30),0,uVar19,2,0,0);
    if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
      native_sub_4327ec(_UnityEngine_Object_TypeInfo_12d54e0);
    }
    uVar5 = native_UnityEngine_Object__op_Inequality_8d76fc(lVar12,0,0);
    if ((uVar5 & 1) != 0) {
      if (*(char *)(uVar10 + 0x49) == '\0') {
        if (((*(byte *)(_NGUITools_TypeInfo_12d53c8 + 0x133) >> 2 & 1) != 0) &&
           (*(int *)(_NGUITools_TypeInfo_12d53c8 + 0xe0) == 0)) {
          native_sub_4327ec();
        }
        uVar5 = native_NGUITools__GetActive_72d02c(uVar10,0);
        if ((uVar5 & 1) != 0) goto LAB_0094625c;
      }
      if (lVar12 == 0) goto LAB_00946448;
      native_ActiveAnimation__Finish_5608e8(lVar12,0);
    }
  }
LAB_0094625c:
  uVar13 = *(undefined8 *)(uVar10 + 0x40);
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar5 = native_UnityEngine_Object__op_Inequality_8d76fc(uVar13,0,0);
  if ((uVar5 & 1) == 0) {
    return uVar5;
  }
  if (((*(byte *)(_NGUITools_TypeInfo_12d53c8 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_NGUITools_TypeInfo_12d53c8 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  bVar2 = native_NGUITools__GetActive_72d02c(uVar10,0);
  plVar11 = *(long **)(uVar10 + 0x40);
  if (plVar11 != (long *)0x0) {
    uVar5 = (**(code **)(*plVar11 + 0x198))(plVar11,bVar1,*(undefined8 *)(*plVar11 + 0x1a0));
    if ((*(char *)(uVar10 + 0x49) != '\0') || (((bVar2 ^ 1) & 1) != 0)) {
      lVar12 = *(long *)(uVar10 + 0x40);
      if (lVar12 == 0) goto LAB_00946448;
      uVar19 = 0x3f800000;
      if (!bVar1) {
        uVar19 = 0;
      }
      uVar5 = native_UnityEngine_Mathf__Clamp01_8d9d9c(uVar19,0);
      *(undefined4 *)(lVar12 + 0x74) = extraout_s0;
    }
    if (*(long *)(uVar10 + 0x40) != 0) {
      if (*(int *)(*(long *)(uVar10 + 0x40) + 0x3c) != 0) {
        lVar12 = native_UnityEngine_Component__get_gameObject_8da66c(uVar10,0);
        if ((lVar12 == 0) ||
           (uVar5 = native_UnityEngine_GameObject__GetComponentsInChildren_object__4a2674
                              (lVar12,1,
                               _Method_UnityEngine_GameObject_GetComponentsInChildren_UITweener____12e4b98
                              ), uVar5 == 0)) goto LAB_00946448;
        iVar3 = (int)*(ulong *)(uVar5 + 0x18);
        if (0 < iVar3) {
          uVar19 = 0x3f800000;
          if (!bVar1) {
            uVar19 = 0;
          }
          if ((*(ulong *)(uVar5 + 0x18) & 0xffffffff) != 0) {
            uVar6 = 0;
            do {
              plVar11 = *(long **)(uVar5 + 0x20 + uVar6 * 8);
              uVar13 = *(undefined8 *)(uVar10 + 0x40);
              if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
                 (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
                native_sub_4327ec();
              }
              uVar8 = native_UnityEngine_Object__op_Inequality_8d76fc(plVar11,uVar13,0);
              if ((uVar8 & 1) != 0) {
                if ((plVar11 == (long *)0x0) || (*(long *)(uVar10 + 0x40) == 0)) goto LAB_00946448;
                if ((*(int *)((long)plVar11 + 0x3c) == *(int *)(*(long *)(uVar10 + 0x40) + 0x3c)) &&
                   (uVar8 = (**(code **)(*plVar11 + 0x198))
                                      (plVar11,bVar1,*(undefined8 *)(*plVar11 + 0x1a0)),
                   (*(char *)(uVar10 + 0x49) == '\0' & bVar2) == 0)) {
                  uVar8 = native_UnityEngine_Mathf__Clamp01_8d9d9c(uVar19,0);
                  *(undefined4 *)((long)plVar11 + 0x74) = extraout_s0_00;
                }
              }
              uVar6 = uVar6 + 1;
              if ((long)iVar3 <= (long)uVar6) {
                return uVar8;
              }
            } while (uVar6 < *(uint *)(uVar5 + 0x18));
          }
LAB_0094641c:
          uVar13 = native_sub_43283c();
                    /* WARNING: Subroutine does not return */
          native_sub_4327dc(uVar13,0);
        }
      }
      return uVar5;
    }
  }
LAB_00946448:
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* UISavedOption$$OnDisable @ 0xc30560
 * void UISavedOption__OnDisable (UISavedOption_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UISavedOption$$OnDisable
   void UISavedOption__OnDisable (UISavedOption_o* __this, const MethodInfo* method); */

ulong native_UISavedOption__OnDisable_c30560(long param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  long *plVar3;
  ulong uVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  long lVar7;
  int iVar8;
  long lVar9;
  uint uVar10;
  
  if ((bRam000000000134272a & 1) == 0) {
    native_sub_43273c(&EventDelegate_Callback_TypeInfo_12d72e8);
    native_sub_43273c(&Method_UnityEngine_Component_GetComponentsInChildren_UIToggle____12e2e40);
    native_sub_43273c(&EventDelegate_TypeInfo_12d4590);
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    native_sub_43273c(&Method_UISavedOption_SaveProgress___12e7880);
    native_sub_43273c(&Method_UISavedOption_SaveSelection___12e7888);
    native_sub_43273c(&Method_UISavedOption_SaveState___12e7890);
    bRam000000000134272a = 1;
  }
  uVar6 = *(undefined8 *)(param_1 + 0x28);
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar1 = native_UnityEngine_Object__op_Inequality_8d76fc(uVar6,0,0);
  if ((uVar1 & 1) == 0) {
    uVar6 = *(undefined8 *)(param_1 + 0x20);
    if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    uVar1 = native_UnityEngine_Object__op_Inequality_8d76fc(uVar6,0,0);
    if ((uVar1 & 1) == 0) {
      uVar6 = *(undefined8 *)(param_1 + 0x30);
      if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
        native_sub_4327ec();
      }
      uVar1 = native_UnityEngine_Object__op_Inequality_8d76fc(uVar6,0,0);
      if ((uVar1 & 1) == 0) {
        uVar1 = native_UnityEngine_Component__GetComponentsInChildren_object__49de40
                          (param_1,1,
                           _Method_UnityEngine_Component_GetComponentsInChildren_UIToggle____12e2e40
                          );
        if (uVar1 != 0) {
          iVar8 = (int)*(undefined8 *)(uVar1 + 0x18);
          if (iVar8 < 1) {
            return uVar1;
          }
          if (iVar8 != 0) {
            uVar10 = 0;
            do {
              lVar7 = *(long *)(uVar1 + (long)(int)uVar10 * 8 + 0x20);
              if (lVar7 == 0) goto LAB_00c30800;
              uVar4 = native_UIToggle__get_value_945b24(lVar7,0);
              if ((uVar4 & 1) != 0) {
                uVar6 = native_UISavedOption__get_key_c30040(param_1);
                uVar2 = native_UnityEngine_Object__get_name_8e8098(lVar7,0);
                if (pcRam000000000133f778 == (code *)0x0) {
                  pcRam000000000133f778 = (code *)native_sub_4326f0(&UNK_00e27a58,uVar2,0);
                }
                uVar1 = (*pcRam000000000133f778)(uVar6,uVar2);
                if ((uVar1 & 1) == 0) {
                  native_sub_432740(&UnityEngine_PlayerPrefsException_TypeInfo_12d56f8);
                  uVar6 = native_sub_432808();
                  uVar2 = native_sub_432740(&StringLiteral_Could_not_store_preference_value_12ed488)
                  ;
                  native_UnityEngine_PlayerPrefsException___ctor_761cf8(uVar6,uVar2);
                  uVar2 = native_sub_432740(&Method_UnityEngine_PlayerPrefs_SetString___12e5df0);
                    /* WARNING: Subroutine does not return */
                  native_sub_4327dc(uVar6,uVar2);
                }
                return uVar1;
              }
              uVar10 = uVar10 + 1;
              if (iVar8 <= (int)uVar10) {
                return uVar4;
              }
            } while (uVar10 < *(uint *)(uVar1 + 0x18));
          }
          uVar6 = native_sub_43283c();
                    /* WARNING: Subroutine does not return */
          native_sub_4327dc(uVar6,0);
        }
      }
      else if (*(long *)(param_1 + 0x30) != 0) {
        lVar7 = *(long *)(*(long *)(param_1 + 0x30) + 0x68);
        uVar6 = native_sub_432808(_EventDelegate_Callback_TypeInfo_12d72e8);
        puVar5 = (undefined8 *)&Method_UISavedOption_SaveProgress___12e7880;
        goto LAB_00c306ec;
      }
    }
    else if (*(long *)(param_1 + 0x20) != 0) {
      lVar7 = *(long *)(*(long *)(param_1 + 0x20) + 0xd0);
      uVar6 = native_sub_432808(_EventDelegate_Callback_TypeInfo_12d72e8);
      puVar5 = (undefined8 *)&Method_UISavedOption_SaveSelection___12e7888;
      goto LAB_00c306ec;
    }
  }
  else if (*(long *)(param_1 + 0x28) != 0) {
    lVar7 = *(long *)(*(long *)(param_1 + 0x28) + 0x50);
    uVar6 = native_sub_432808(_EventDelegate_Callback_TypeInfo_12d72e8);
    puVar5 = (undefined8 *)&Method_UISavedOption_SaveState___12e7890;
LAB_00c306ec:
    native_EventDelegate_Callback___ctor_54bd18(uVar6,param_1,*puVar5,0);
    if (((*(byte *)(_EventDelegate_TypeInfo_12d4590 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_EventDelegate_TypeInfo_12d4590 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    if ((bRam0000000001346ef7 & 1) == 0) {
      native_sub_43273c(&Method_System_Collections_Generic_List_EventDelegate__RemoveAt___12dc758,
                        uVar6,0);
      native_sub_43273c(&Method_System_Collections_Generic_List_EventDelegate__get_Count___12dc760);
      native_sub_43273c(&Method_System_Collections_Generic_List_EventDelegate__get_Item___12dc768);
      bRam0000000001346ef7 = 1;
    }
    if ((lVar7 != 0) && (uVar10 = *(uint *)(lVar7 + 0x18), 0 < (int)uVar10)) {
      uVar1 = 0;
      lVar9 = (long)(int)uVar10;
      while( true ) {
        if (uVar10 <= uVar1) {
          native_System_ThrowHelper__ThrowArgumentOutOfRangeException_9fe0f4(0);
        }
        plVar3 = *(long **)(*(long *)(lVar7 + 0x10) + uVar1 * 8 + 0x20);
        if ((plVar3 != (long *)0x0) &&
           (uVar4 = (**(code **)(*plVar3 + 0x138))(plVar3,uVar6,*(undefined8 *)(*plVar3 + 0x140)),
           (uVar4 & 1) != 0)) {
          native_System_Collections_Generic_List_int_____RemoveAt_d42280
                    (lVar7,uVar1 & 0xffffffff,
                     _Method_System_Collections_Generic_List_EventDelegate__RemoveAt___12dc758);
          return 1;
        }
        uVar1 = uVar1 + 1;
        if (lVar9 <= (long)uVar1) break;
        uVar10 = *(uint *)(lVar7 + 0x18);
      }
    }
    return 0;
  }
LAB_00c30800:
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* UISavedOption$$SaveSelection @ 0xc30804
 * void UISavedOption__SaveSelection (UISavedOption_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UISavedOption$$SaveSelection
   void UISavedOption__SaveSelection (UISavedOption_o* __this, const MethodInfo* method); */

void native_UISavedOption__SaveSelection_c30804(undefined8 param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  long *plVar3;
  undefined8 uVar4;
  
  if ((bRam000000000134272b & 1) == 0) {
    native_sub_43273c(&UIPopupList_TypeInfo_12d6490);
    bRam000000000134272b = 1;
  }
  uVar2 = native_UISavedOption__get_key_c30040(param_1);
  if (((*(byte *)(_UIPopupList_TypeInfo_12d6490 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UIPopupList_TypeInfo_12d6490 + 0xe0) == 0)) {
    native_sub_4327ec(_UIPopupList_TypeInfo_12d6490);
  }
  plVar3 = (long *)**(long **)(_UIPopupList_TypeInfo_12d6490 + 0xb8);
  if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    native_sub_432810();
  }
  uVar4 = (**(code **)(*plVar3 + 0x178))(plVar3,*(undefined8 *)(*plVar3 + 0x180));
  if (pcRam000000000133f778 == (code *)0x0) {
    pcRam000000000133f778 = (code *)native_sub_4326f0(&UNK_00e27a58,uVar4,0);
  }
  uVar1 = (*pcRam000000000133f778)(uVar2,uVar4);
  if ((uVar1 & 1) != 0) {
    return;
  }
  native_sub_432740(&UnityEngine_PlayerPrefsException_TypeInfo_12d56f8);
  uVar2 = native_sub_432808();
  uVar4 = native_sub_432740(&StringLiteral_Could_not_store_preference_value_12ed488);
  native_UnityEngine_PlayerPrefsException___ctor_761cf8(uVar2,uVar4);
  uVar4 = native_sub_432740(&Method_UnityEngine_PlayerPrefs_SetString___12e5df0);
                    /* WARNING: Subroutine does not return */
  native_sub_4327dc(uVar2,uVar4);
}



/* UISavedOption$$SaveState @ 0xc3089c
 * void UISavedOption__SaveState (UISavedOption_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UISavedOption$$SaveState
   void UISavedOption__SaveState (UISavedOption_o* __this, const MethodInfo* method); */

void native_UISavedOption__SaveState_c3089c(undefined8 param_1)

{
  uint uVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  
  if ((bRam000000000134272c & 1) == 0) {
    native_sub_43273c(&UIToggle_TypeInfo_12d64e0);
    bRam000000000134272c = 1;
  }
  uVar4 = native_UISavedOption__get_key_c30040(param_1);
  if (((*(byte *)(_UIToggle_TypeInfo_12d64e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UIToggle_TypeInfo_12d64e0 + 0xe0) == 0)) {
    native_sub_4327ec(_UIToggle_TypeInfo_12d64e0);
  }
  lVar5 = *(long *)(*(long *)(_UIToggle_TypeInfo_12d64e0 + 0xb8) + 8);
  if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
    native_sub_432810();
  }
  uVar1 = native_UIToggle__get_value_945b24(lVar5,0);
  if (pcRam000000000133f768 == (code *)0x0) {
    pcRam000000000133f768 = (code *)native_sub_4326f0(&UNK_00e279d7,uVar1 & 1,0);
  }
  uVar2 = (*pcRam000000000133f768)(uVar4,uVar1 & 1);
  if ((uVar2 & 1) != 0) {
    return;
  }
  native_sub_432740(&UnityEngine_PlayerPrefsException_TypeInfo_12d56f8);
  uVar4 = native_sub_432808();
  uVar3 = native_sub_432740(&StringLiteral_Could_not_store_preference_value_12ed488);
  native_UnityEngine_PlayerPrefsException___ctor_761cf8(uVar4,uVar3);
  uVar3 = native_sub_432740(&Method_UnityEngine_PlayerPrefs_SetInt___12e5de8);
                    /* WARNING: Subroutine does not return */
  native_sub_4327dc(uVar4,uVar3);
}



/* UISavedOption$$SaveProgress @ 0xc30930
 * void UISavedOption__SaveProgress (UISavedOption_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UISavedOption$$SaveProgress
   void UISavedOption__SaveProgress (UISavedOption_o* __this, const MethodInfo* method); */

void native_UISavedOption__SaveProgress_c30930(undefined8 param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  if ((bRam000000000134272d & 1) == 0) {
    native_sub_43273c(&UIProgressBar_TypeInfo_12d6498);
    bRam000000000134272d = 1;
  }
  uVar2 = native_UISavedOption__get_key_c30040(param_1);
  if (**(long **)(_UIProgressBar_TypeInfo_12d6498 + 0xb8) == 0) {
                    /* WARNING: Subroutine does not return */
    native_sub_432810();
  }
  uVar3 = native_UIProgressBar__get_value_c2b6f0
                    (**(long **)(_UIProgressBar_TypeInfo_12d6498 + 0xb8));
  if (pcRam000000000133f770 == (code *)0x0) {
    pcRam000000000133f770 = (code *)native_sub_4326f0(&UNK_00e27a16,0);
  }
  uVar1 = (*pcRam000000000133f770)(uVar3,uVar2);
  if ((uVar1 & 1) != 0) {
    return;
  }
  native_sub_432740(&UnityEngine_PlayerPrefsException_TypeInfo_12d56f8);
  uVar2 = native_sub_432808();
  uVar3 = native_sub_432740(&StringLiteral_Could_not_store_preference_value_12ed488);
  native_UnityEngine_PlayerPrefsException___ctor_761cf8(uVar2,uVar3);
  uVar3 = native_sub_432740(&Method_UnityEngine_PlayerPrefs_SetFloat___12e5de0);
                    /* WARNING: Subroutine does not return */
  native_sub_4327dc(uVar2,uVar3);
}



/* UISavedOption$$.ctor @ 0xc309a4
 * void UISavedOption___ctor (UISavedOption_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UISavedOption$$.ctor
   void UISavedOption___ctor (UISavedOption_o* __this, const MethodInfo* method); */

undefined1  [16] native_UISavedOption___ctor_c309a4(ulong param_1)

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


