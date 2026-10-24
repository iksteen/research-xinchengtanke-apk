/* ARM64 IL2CPP native pseudocode from Ghidra.
 * Recovered implementation, not original C# source.
 * Function boundaries follow the IL2CPP method address table. */


/* UISoundVolume$$Awake @ 0xc354c4
 * void UISoundVolume__Awake (UISoundVolume_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UISoundVolume$$Awake
   void UISoundVolume__Awake (UISoundVolume_o* __this, const MethodInfo* method); */

long * native_UISoundVolume__Awake_c354c4(undefined8 param_1)

{
  uint uVar1;
  long lVar2;
  undefined8 uVar3;
  ulong uVar4;
  long *plVar5;
  ulong uVar6;
  long lVar7;
  
  if ((bRam0000000001342751 & 1) == 0) {
    native_sub_43273c(&EventDelegate_Callback_TypeInfo_12d72e8);
    native_sub_43273c(&Method_UnityEngine_Component_GetComponent_UISlider____12e2c10);
    native_sub_43273c(&EventDelegate_TypeInfo_12d4590);
    native_sub_43273c(&NGUITools_TypeInfo_12d53c8);
    native_sub_43273c(&Method_UISoundVolume_OnChange___12e78c8);
    bRam0000000001342751 = 1;
  }
  lVar2 = native_UnityEngine_Component__GetComponent_ActiveAnimation__49daec
                    (param_1,_Method_UnityEngine_Component_GetComponent_UISlider____12e2c10);
  if (((*(byte *)(_NGUITools_TypeInfo_12d53c8 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_NGUITools_TypeInfo_12d53c8 + 0xe0) == 0)) {
    native_sub_4327ec(_NGUITools_TypeInfo_12d53c8);
  }
  native_NGUITools__get_soundVolume_72c59c(0);
  if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    native_sub_432810();
  }
  native_UIProgressBar__Set_c2b7c4(lVar2,1);
  lVar2 = *(long *)(lVar2 + 0x68);
  uVar3 = native_sub_432808(_EventDelegate_Callback_TypeInfo_12d72e8);
  native_EventDelegate_Callback___ctor_54bd18
            (uVar3,param_1,_Method_UISoundVolume_OnChange___12e78c8,0);
  if (((*(byte *)(_EventDelegate_TypeInfo_12d4590 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_EventDelegate_TypeInfo_12d4590 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  if ((bRam0000000001346ef3 & 1) == 0) {
    native_sub_43273c(&EventDelegate_TypeInfo_12d4590,uVar3,0);
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
  if (lVar2 == 0) {
    if (((*(byte *)(_UnityEngine_Debug_TypeInfo_12d4338 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UnityEngine_Debug_TypeInfo_12d4338 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    native_UnityEngine_Debug__LogWarning_8dca9c
              (_StringLiteral_Attempting_to_add_a_callback_to_a_list_that_s_null_12ec670,0);
    plVar5 = (long *)0x0;
  }
  else {
    uVar1 = *(uint *)(lVar2 + 0x18);
    if (0 < (int)uVar1) {
      uVar6 = 0;
      lVar7 = (long)(int)uVar1;
      while( true ) {
        if (uVar1 <= uVar6) {
          native_System_ThrowHelper__ThrowArgumentOutOfRangeException_9fe0f4(0);
        }
        plVar5 = *(long **)(*(long *)(lVar2 + 0x10) + uVar6 * 8 + 0x20);
        if ((plVar5 != (long *)0x0) &&
           (uVar4 = (**(code **)(*plVar5 + 0x138))(plVar5,uVar3,*(undefined8 *)(*plVar5 + 0x140)),
           (uVar4 & 1) != 0)) {
          return plVar5;
        }
        uVar6 = uVar6 + 1;
        if (lVar7 <= (long)uVar6) break;
        uVar1 = *(uint *)(lVar2 + 0x18);
      }
    }
    plVar5 = (long *)native_sub_432808(_EventDelegate_TypeInfo_12d4590);
    native_System_Object___ctor_ad2798(plVar5,0);
    native_EventDelegate__Set_dedf08(plVar5,uVar3);
    if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      native_sub_432810();
    }
    *(undefined1 *)(plVar5 + 5) = 0;
    native_System_Collections_Generic_List_int_____Add_d40c00
              (lVar2,plVar5,_Method_System_Collections_Generic_List_EventDelegate__Add___12dc740);
  }
  return plVar5;
}



/* UISoundVolume$$OnChange @ 0xc355ec
 * void UISoundVolume__OnChange (UISoundVolume_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UISoundVolume$$OnChange
   void UISoundVolume__OnChange (UISoundVolume_o* __this, const MethodInfo* method); */

void native_UISoundVolume__OnChange_c355ec(void)

{
  ulong uVar1;
  undefined8 uVar2;
  long *plVar3;
  long lVar4;
  undefined8 uVar5;
  
  if ((bRam0000000001342752 & 1) == 0) {
    native_sub_43273c(&NGUITools_TypeInfo_12d53c8);
    native_sub_43273c(&UIProgressBar_TypeInfo_12d6498);
    bRam0000000001342752 = 1;
  }
  if (**(long **)(_UIProgressBar_TypeInfo_12d6498 + 0xb8) == 0) {
                    /* WARNING: Subroutine does not return */
    native_sub_432810();
  }
  uVar5 = native_UIProgressBar__get_value_c2b6f0();
  if (((*(byte *)(_NGUITools_TypeInfo_12d53c8 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_NGUITools_TypeInfo_12d53c8 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  if ((bRam000000000133f581 & 1) == 0) {
    native_sub_43273c(&NGUITools_TypeInfo_12d53c8);
    native_sub_43273c(&StringLiteral_Sound_12f0f18);
    bRam000000000133f581 = 1;
  }
  if (((*(byte *)(_NGUITools_TypeInfo_12d53c8 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_NGUITools_TypeInfo_12d53c8 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  plVar3 = (long *)(_NGUITools_TypeInfo_12d53c8 + 0xb8);
  lVar4 = *plVar3;
  if (*(float *)(lVar4 + 0x14) != (float)uVar5) {
    if (((*(byte *)(_NGUITools_TypeInfo_12d53c8 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_NGUITools_TypeInfo_12d53c8 + 0xe0) == 0)) {
      native_sub_4327ec();
      plVar3 = (long *)(_NGUITools_TypeInfo_12d53c8 + 0xb8);
      lVar4 = *plVar3;
    }
    *(undefined1 *)(lVar4 + 0x10) = 1;
    *(float *)(*plVar3 + 0x14) = (float)uVar5;
    uVar2 = _StringLiteral_Sound_12f0f18;
    if (pcRam000000000133f770 == (code *)0x0) {
      pcRam000000000133f770 = (code *)native_sub_4326f0(&UNK_00e27a16,0);
    }
    uVar1 = (*pcRam000000000133f770)(uVar5,uVar2);
    if ((uVar1 & 1) != 0) {
      return;
    }
    native_sub_432740(&UnityEngine_PlayerPrefsException_TypeInfo_12d56f8);
    uVar5 = native_sub_432808();
    uVar2 = native_sub_432740(&StringLiteral_Could_not_store_preference_value_12ed488);
    native_UnityEngine_PlayerPrefsException___ctor_761cf8(uVar5,uVar2);
    uVar2 = native_sub_432740(&Method_UnityEngine_PlayerPrefs_SetFloat___12e5de0);
                    /* WARNING: Subroutine does not return */
    native_sub_4327dc(uVar5,uVar2);
  }
  return;
}



/* UISoundVolume$$.ctor @ 0xc35684
 * void UISoundVolume___ctor (UISoundVolume_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UISoundVolume$$.ctor
   void UISoundVolume___ctor (UISoundVolume_o* __this, const MethodInfo* method); */

undefined1  [16] native_UISoundVolume___ctor_c35684(ulong param_1)

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


