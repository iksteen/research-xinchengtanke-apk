/* ARM64 IL2CPP native pseudocode from Ghidra.
 * Recovered implementation, not original C# source.
 * Function boundaries follow the IL2CPP method address table. */


/* LanguageSelection$$Awake @ 0x7f7bf0
 * void LanguageSelection__Awake (LanguageSelection_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LanguageSelection$$Awake
   void LanguageSelection__Awake (LanguageSelection_o* __this, const MethodInfo* method); */

void native_LanguageSelection__Awake_7f7bf0(long param_1)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  undefined8 uVar4;
  
  if ((bRam00000000013403eb & 1) == 0) {
    native_sub_43273c(&Method_UnityEngine_Component_GetComponent_UIPopupList____12e2be8);
    bRam00000000013403eb = 1;
  }
  uVar4 = native_UnityEngine_Component__GetComponent_ActiveAnimation__49daec
                    (param_1,_Method_UnityEngine_Component_GetComponent_UIPopupList____12e2be8);
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



/* LanguageSelection$$Start @ 0x7f7c4c
 * void LanguageSelection__Start (LanguageSelection_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LanguageSelection$$Start
   void LanguageSelection__Start (LanguageSelection_o* __this, const MethodInfo* method); */

long * native_LanguageSelection__Start_7f7c4c(long param_1)

{
  uint uVar1;
  long *plVar2;
  ulong uVar3;
  undefined8 *puVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  ulong uVar8;
  long lVar9;
  
  if ((bRam00000000013403ec & 1) == 0) {
    native_sub_43273c(&EventDelegate_Callback_TypeInfo_12d72e8);
    native_sub_43273c(&EventDelegate_TypeInfo_12d4590);
    native_sub_43273c(&Method_LanguageSelection___c__Start_b__3_0___12e9b68);
    native_sub_43273c(&LanguageSelection___c_TypeInfo_12d73d8);
    bRam00000000013403ec = 1;
  }
  *(undefined1 *)(param_1 + 0x20) = 1;
  native_LanguageSelection__Refresh_7f7d90(param_1);
  if (*(long *)(param_1 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
    native_sub_432810();
  }
  lVar5 = *(long *)(*(long *)(param_1 + 0x18) + 0xd0);
  if (((*(byte *)(_LanguageSelection___c_TypeInfo_12d73d8 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_LanguageSelection___c_TypeInfo_12d73d8 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  puVar4 = *(undefined8 **)(_LanguageSelection___c_TypeInfo_12d73d8 + 0xb8);
  lVar6 = puVar4[1];
  if (lVar6 == 0) {
    if (((*(byte *)(_LanguageSelection___c_TypeInfo_12d73d8 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_LanguageSelection___c_TypeInfo_12d73d8 + 0xe0) == 0)) {
      native_sub_4327ec();
      puVar4 = *(undefined8 **)(_LanguageSelection___c_TypeInfo_12d73d8 + 0xb8);
    }
    uVar7 = *puVar4;
    lVar6 = native_sub_432808(_EventDelegate_Callback_TypeInfo_12d72e8);
    native_EventDelegate_Callback___ctor_54bd18
              (lVar6,uVar7,_Method_LanguageSelection___c__Start_b__3_0___12e9b68,0);
    plVar2 = (long *)(*(long *)(_LanguageSelection___c_TypeInfo_12d73d8 + 0xb8) + 8);
    *plVar2 = lVar6;
    native_sub_4326e0(plVar2,lVar6);
  }
  if (((*(byte *)(_EventDelegate_TypeInfo_12d4590 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_EventDelegate_TypeInfo_12d4590 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  if ((bRam0000000001346ef3 & 1) == 0) {
    native_sub_43273c(&EventDelegate_TypeInfo_12d4590,lVar6,0);
    bRam0000000001346ef3 = 1;
  }
  if (((*(byte *)(_EventDelegate_TypeInfo_12d4590 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_EventDelegate_TypeInfo_12d4590 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  if ((bRam0000000001346ef4 & 1) == 0) {
    native_sub_43273c(&UnityEngine_Debug_TypeInfo_12d4338);
    native_sub_43273c(&EventDelegate_TypeInfo_12d4590);
    native_sub_43273c(&Method_System_Collections_Generic_List_EventDelegate__Add___12dc740);
    native_sub_43273c(&Method_System_Collections_Generic_List_EventDelegate__get_Count___12dc760);
    native_sub_43273c(&Method_System_Collections_Generic_List_EventDelegate__get_Item___12dc768);
    native_sub_43273c(&StringLiteral_Attempting_to_add_a_callback_to_a_list_that_s_null_12ec670);
    bRam0000000001346ef4 = 1;
  }
  if (lVar5 == 0) {
    if (((*(byte *)(_UnityEngine_Debug_TypeInfo_12d4338 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UnityEngine_Debug_TypeInfo_12d4338 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    native_UnityEngine_Debug__LogWarning_8dca9c
              (_StringLiteral_Attempting_to_add_a_callback_to_a_list_that_s_null_12ec670,0);
    plVar2 = (long *)0x0;
  }
  else {
    uVar1 = *(uint *)(lVar5 + 0x18);
    if (0 < (int)uVar1) {
      uVar8 = 0;
      lVar9 = (long)(int)uVar1;
      while( true ) {
        if (uVar1 <= uVar8) {
          native_System_ThrowHelper__ThrowArgumentOutOfRangeException_9fe0f4(0);
        }
        plVar2 = *(long **)(*(long *)(lVar5 + 0x10) + uVar8 * 8 + 0x20);
        if ((plVar2 != (long *)0x0) &&
           (uVar3 = (**(code **)(*plVar2 + 0x138))(plVar2,lVar6,*(undefined8 *)(*plVar2 + 0x140)),
           (uVar3 & 1) != 0)) {
          return plVar2;
        }
        uVar8 = uVar8 + 1;
        if (lVar9 <= (long)uVar8) break;
        uVar1 = *(uint *)(lVar5 + 0x18);
      }
    }
    plVar2 = (long *)native_sub_432808(_EventDelegate_TypeInfo_12d4590);
    native_System_Object___ctor_ad2798(plVar2,0);
    native_EventDelegate__Set_dedf08(plVar2,lVar6);
    if (plVar2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      native_sub_432810();
    }
    *(undefined1 *)(plVar2 + 5) = 0;
    native_System_Collections_Generic_List_int_____Add_d40c00
              (lVar5,plVar2,_Method_System_Collections_Generic_List_EventDelegate__Add___12dc740);
  }
  return plVar2;
}



/* LanguageSelection$$OnEnable @ 0x7f7f58
 * void LanguageSelection__OnEnable (LanguageSelection_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LanguageSelection$$OnEnable
   void LanguageSelection__OnEnable (LanguageSelection_o* __this, const MethodInfo* method); */

void native_LanguageSelection__OnEnable_7f7f58(long param_1)

{
  ulong uVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  int iVar5;
  undefined8 uVar6;
  
  if (*(char *)(param_1 + 0x20) == '\0') {
    return;
  }
  if ((bRam00000000013403ed & 1) == 0) {
    native_sub_43273c(&Method_System_Collections_Generic_List_string__Add___12dcea0);
    native_sub_43273c(&Localization_TypeInfo_12d50b8);
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    bRam00000000013403ed = 1;
  }
  uVar6 = *(undefined8 *)(param_1 + 0x18);
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar1 = native_UnityEngine_Object__op_Inequality_8d76fc(uVar6,0,0);
  if ((uVar1 & 1) != 0) {
    if (((*(byte *)(_Localization_TypeInfo_12d50b8 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_Localization_TypeInfo_12d50b8 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    lVar2 = native_Localization__get_knownLanguages_7f7f68();
    if (lVar2 != 0) {
      plVar3 = *(long **)(param_1 + 0x18);
      if (plVar3 != (long *)0x0) {
        (**(code **)(*plVar3 + 0x1a8))(plVar3,*(undefined8 *)(*plVar3 + 0x1b0));
        if (((*(byte *)(_Localization_TypeInfo_12d50b8 + 0x133) >> 2 & 1) != 0) &&
           (*(int *)(_Localization_TypeInfo_12d50b8 + 0xe0) == 0)) {
          native_sub_4327ec();
        }
        lVar2 = native_Localization__get_knownLanguages_7f7f68();
        if (lVar2 != 0) {
          plVar3 = *(long **)(param_1 + 0x18);
          iVar5 = (int)*(undefined8 *)(lVar2 + 0x18);
          if (0 < iVar5) {
            uVar1 = 0;
            do {
              if (plVar3 == (long *)0x0) goto LAB_007f7f48;
              lVar2 = plVar3[0xd];
              if (((*(byte *)(_Localization_TypeInfo_12d50b8 + 0x133) >> 2 & 1) != 0) &&
                 (*(int *)(_Localization_TypeInfo_12d50b8 + 0xe0) == 0)) {
                native_sub_4327ec();
              }
              lVar4 = native_Localization__get_knownLanguages_7f7f68();
              if (lVar4 == 0) goto LAB_007f7f48;
              if (*(uint *)(lVar4 + 0x18) <= uVar1) {
                uVar6 = native_sub_43283c();
                    /* WARNING: Subroutine does not return */
                native_sub_4327dc(uVar6,0);
              }
              if (lVar2 == 0) goto LAB_007f7f48;
              native_System_Collections_Generic_List_int_____Add_d40c00
                        (lVar2,*(undefined8 *)(lVar4 + uVar1 * 8 + 0x20),
                         _Method_System_Collections_Generic_List_string__Add___12dcea0);
              plVar3 = *(long **)(param_1 + 0x18);
              uVar1 = uVar1 + 1;
            } while ((long)uVar1 < (long)iVar5);
          }
          if (((*(byte *)(_Localization_TypeInfo_12d50b8 + 0x133) >> 2 & 1) != 0) &&
             (*(int *)(_Localization_TypeInfo_12d50b8 + 0xe0) == 0)) {
            native_sub_4327ec();
          }
          uVar6 = native_Localization__get_language_7f8058();
          if (plVar3 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x007f7f30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (**(code **)(*plVar3 + 0x188))(plVar3,uVar6,*(undefined8 *)(*plVar3 + 400));
            return;
          }
        }
      }
LAB_007f7f48:
                    /* WARNING: Subroutine does not return */
      native_sub_432810();
    }
  }
  return;
}



/* LanguageSelection$$Refresh @ 0x7f7d90
 * void LanguageSelection__Refresh (LanguageSelection_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LanguageSelection$$Refresh
   void LanguageSelection__Refresh (LanguageSelection_o* __this, const MethodInfo* method); */

void native_LanguageSelection__Refresh_7f7d90(long param_1)

{
  ulong uVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  int iVar5;
  undefined8 uVar6;
  
  if ((bRam00000000013403ed & 1) == 0) {
    native_sub_43273c(&Method_System_Collections_Generic_List_string__Add___12dcea0);
    native_sub_43273c(&Localization_TypeInfo_12d50b8);
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    bRam00000000013403ed = 1;
  }
  uVar6 = *(undefined8 *)(param_1 + 0x18);
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar1 = native_UnityEngine_Object__op_Inequality_8d76fc(uVar6,0,0);
  if ((uVar1 & 1) != 0) {
    if (((*(byte *)(_Localization_TypeInfo_12d50b8 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_Localization_TypeInfo_12d50b8 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    lVar2 = native_Localization__get_knownLanguages_7f7f68();
    if (lVar2 != 0) {
      plVar3 = *(long **)(param_1 + 0x18);
      if (plVar3 != (long *)0x0) {
        (**(code **)(*plVar3 + 0x1a8))(plVar3,*(undefined8 *)(*plVar3 + 0x1b0));
        if (((*(byte *)(_Localization_TypeInfo_12d50b8 + 0x133) >> 2 & 1) != 0) &&
           (*(int *)(_Localization_TypeInfo_12d50b8 + 0xe0) == 0)) {
          native_sub_4327ec();
        }
        lVar2 = native_Localization__get_knownLanguages_7f7f68();
        if (lVar2 != 0) {
          plVar3 = *(long **)(param_1 + 0x18);
          iVar5 = (int)*(undefined8 *)(lVar2 + 0x18);
          if (0 < iVar5) {
            uVar1 = 0;
            do {
              if (plVar3 == (long *)0x0) goto LAB_007f7f48;
              lVar2 = plVar3[0xd];
              if (((*(byte *)(_Localization_TypeInfo_12d50b8 + 0x133) >> 2 & 1) != 0) &&
                 (*(int *)(_Localization_TypeInfo_12d50b8 + 0xe0) == 0)) {
                native_sub_4327ec();
              }
              lVar4 = native_Localization__get_knownLanguages_7f7f68();
              if (lVar4 == 0) goto LAB_007f7f48;
              if (*(uint *)(lVar4 + 0x18) <= uVar1) {
                uVar6 = native_sub_43283c();
                    /* WARNING: Subroutine does not return */
                native_sub_4327dc(uVar6,0);
              }
              if (lVar2 == 0) goto LAB_007f7f48;
              native_System_Collections_Generic_List_int_____Add_d40c00
                        (lVar2,*(undefined8 *)(lVar4 + uVar1 * 8 + 0x20),
                         _Method_System_Collections_Generic_List_string__Add___12dcea0);
              plVar3 = *(long **)(param_1 + 0x18);
              uVar1 = uVar1 + 1;
            } while ((long)uVar1 < (long)iVar5);
          }
          if (((*(byte *)(_Localization_TypeInfo_12d50b8 + 0x133) >> 2 & 1) != 0) &&
             (*(int *)(_Localization_TypeInfo_12d50b8 + 0xe0) == 0)) {
            native_sub_4327ec();
          }
          uVar6 = native_Localization__get_language_7f8058();
          if (plVar3 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x007f7f30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (**(code **)(*plVar3 + 0x188))(plVar3,uVar6,*(undefined8 *)(*plVar3 + 400));
            return;
          }
        }
      }
LAB_007f7f48:
                    /* WARNING: Subroutine does not return */
      native_sub_432810();
    }
  }
  return;
}



/* LanguageSelection$$OnLocalize @ 0x7f8168
 * void LanguageSelection__OnLocalize (LanguageSelection_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LanguageSelection$$OnLocalize
   void LanguageSelection__OnLocalize (LanguageSelection_o* __this, const MethodInfo* method); */

void native_LanguageSelection__OnLocalize_7f8168(long param_1)

{
  ulong uVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  int iVar5;
  undefined8 uVar6;
  
  if ((bRam00000000013403ed & 1) == 0) {
    native_sub_43273c(&Method_System_Collections_Generic_List_string__Add___12dcea0);
    native_sub_43273c(&Localization_TypeInfo_12d50b8);
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    bRam00000000013403ed = 1;
  }
  uVar6 = *(undefined8 *)(param_1 + 0x18);
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar1 = native_UnityEngine_Object__op_Inequality_8d76fc(uVar6,0,0);
  if ((uVar1 & 1) != 0) {
    if (((*(byte *)(_Localization_TypeInfo_12d50b8 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_Localization_TypeInfo_12d50b8 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    lVar2 = native_Localization__get_knownLanguages_7f7f68();
    if (lVar2 != 0) {
      plVar3 = *(long **)(param_1 + 0x18);
      if (plVar3 != (long *)0x0) {
        (**(code **)(*plVar3 + 0x1a8))(plVar3,*(undefined8 *)(*plVar3 + 0x1b0));
        if (((*(byte *)(_Localization_TypeInfo_12d50b8 + 0x133) >> 2 & 1) != 0) &&
           (*(int *)(_Localization_TypeInfo_12d50b8 + 0xe0) == 0)) {
          native_sub_4327ec();
        }
        lVar2 = native_Localization__get_knownLanguages_7f7f68();
        if (lVar2 != 0) {
          plVar3 = *(long **)(param_1 + 0x18);
          iVar5 = (int)*(undefined8 *)(lVar2 + 0x18);
          if (0 < iVar5) {
            uVar1 = 0;
            do {
              if (plVar3 == (long *)0x0) goto LAB_007f7f48;
              lVar2 = plVar3[0xd];
              if (((*(byte *)(_Localization_TypeInfo_12d50b8 + 0x133) >> 2 & 1) != 0) &&
                 (*(int *)(_Localization_TypeInfo_12d50b8 + 0xe0) == 0)) {
                native_sub_4327ec();
              }
              lVar4 = native_Localization__get_knownLanguages_7f7f68();
              if (lVar4 == 0) goto LAB_007f7f48;
              if (*(uint *)(lVar4 + 0x18) <= uVar1) {
                uVar6 = native_sub_43283c();
                    /* WARNING: Subroutine does not return */
                native_sub_4327dc(uVar6,0);
              }
              if (lVar2 == 0) goto LAB_007f7f48;
              native_System_Collections_Generic_List_int_____Add_d40c00
                        (lVar2,*(undefined8 *)(lVar4 + uVar1 * 8 + 0x20),
                         _Method_System_Collections_Generic_List_string__Add___12dcea0);
              plVar3 = *(long **)(param_1 + 0x18);
              uVar1 = uVar1 + 1;
            } while ((long)uVar1 < (long)iVar5);
          }
          if (((*(byte *)(_Localization_TypeInfo_12d50b8 + 0x133) >> 2 & 1) != 0) &&
             (*(int *)(_Localization_TypeInfo_12d50b8 + 0xe0) == 0)) {
            native_sub_4327ec();
          }
          uVar6 = native_Localization__get_language_7f8058();
          if (plVar3 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x007f7f30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (**(code **)(*plVar3 + 0x188))(plVar3,uVar6,*(undefined8 *)(*plVar3 + 400));
            return;
          }
        }
      }
LAB_007f7f48:
                    /* WARNING: Subroutine does not return */
      native_sub_432810();
    }
  }
  return;
}



/* LanguageSelection$$.ctor @ 0x7f816c
 * void LanguageSelection___ctor (LanguageSelection_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LanguageSelection$$.ctor
   void LanguageSelection___ctor (LanguageSelection_o* __this, const MethodInfo* method); */

undefined1  [16] native_LanguageSelection___ctor_7f816c(ulong param_1)

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


