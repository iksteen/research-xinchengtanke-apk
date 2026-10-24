/* ARM64 IL2CPP native pseudocode from Ghidra.
 * Recovered implementation, not original C# source.
 * Function boundaries follow the IL2CPP method address table. */


/* Localization$$get_dictionary @ 0x7f8174
 * System_Collections_Generic_Dictionary_string__string____o* Localization__get_dictionary (const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Localization$$get_dictionary
   System_Collections_Generic_Dictionary_string__string____o* Localization__get_dictionary (const
   MethodInfo* method); */

undefined8 native_Localization__get_dictionary_7f8174(void)

{
  undefined8 uVar1;
  
  if ((bRam00000000013403ee & 1) == 0) {
    native_sub_43273c(&Localization_TypeInfo_12d50b8);
    native_sub_43273c(&StringLiteral_Language_12ef510);
    native_sub_43273c(&StringLiteral_English_12edb28);
    bRam00000000013403ee = 1;
  }
  if (((*(byte *)(_Localization_TypeInfo_12d50b8 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_Localization_TypeInfo_12d50b8 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  if (*(char *)(*(long *)(_Localization_TypeInfo_12d50b8 + 0xb8) + 0x10) == '\0') {
    uVar1 = native_UnityEngine_PlayerPrefs__GetString_761f44
                      (_StringLiteral_Language_12ef510,_StringLiteral_English_12edb28,0);
    if (((*(byte *)(_Localization_TypeInfo_12d50b8 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_Localization_TypeInfo_12d50b8 + 0xe0) == 0)) {
      native_sub_4327ec(_Localization_TypeInfo_12d50b8);
    }
    native_Localization__LoadDictionary_7f8264(uVar1,0);
  }
  if (((*(byte *)(_Localization_TypeInfo_12d50b8 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_Localization_TypeInfo_12d50b8 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  return *(undefined8 *)(*(long *)(_Localization_TypeInfo_12d50b8 + 0xb8) + 0x28);
}



/* Localization$$set_dictionary @ 0x7f866c
 * void Localization__set_dictionary (System_Collections_Generic_Dictionary_string__string____o* value, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Localization$$set_dictionary
   void Localization__set_dictionary (System_Collections_Generic_Dictionary_string__string____o*
   value, const MethodInfo* method); */

void native_Localization__set_dictionary_7f866c(long param_1)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  
  if ((bRam00000000013403ef & 1) == 0) {
    native_sub_43273c(&Localization_TypeInfo_12d50b8);
    bRam00000000013403ef = 1;
  }
  if (((*(byte *)(_Localization_TypeInfo_12d50b8 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_Localization_TypeInfo_12d50b8 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  lVar4 = _Localization_TypeInfo_12d50b8;
  *(bool *)(*(long *)(_Localization_TypeInfo_12d50b8 + 0xb8) + 0x10) = param_1 != 0;
  plVar5 = (long *)(*(long *)(lVar4 + 0xb8) + 0x28);
  *plVar5 = param_1;
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



/* Localization$$get_knownLanguages @ 0x7f7f68
 * System_String_array* Localization__get_knownLanguages (const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Localization$$get_knownLanguages
   System_String_array* Localization__get_knownLanguages (const MethodInfo* method); */

undefined8 native_Localization__get_knownLanguages_7f7f68(void)

{
  undefined8 uVar1;
  
  if ((bRam00000000013403f0 & 1) == 0) {
    native_sub_43273c(&Localization_TypeInfo_12d50b8);
    native_sub_43273c(&StringLiteral_Language_12ef510);
    native_sub_43273c(&StringLiteral_English_12edb28);
    bRam00000000013403f0 = 1;
  }
  if (((*(byte *)(_Localization_TypeInfo_12d50b8 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_Localization_TypeInfo_12d50b8 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  if (*(char *)(*(long *)(_Localization_TypeInfo_12d50b8 + 0xb8) + 0x10) == '\0') {
    uVar1 = native_UnityEngine_PlayerPrefs__GetString_761f44
                      (_StringLiteral_Language_12ef510,_StringLiteral_English_12edb28,0);
    if (((*(byte *)(_Localization_TypeInfo_12d50b8 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_Localization_TypeInfo_12d50b8 + 0xe0) == 0)) {
      native_sub_4327ec(_Localization_TypeInfo_12d50b8);
    }
    native_Localization__LoadDictionary_7f8264(uVar1,0);
  }
  if (((*(byte *)(_Localization_TypeInfo_12d50b8 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_Localization_TypeInfo_12d50b8 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  return *(undefined8 *)(*(long *)(_Localization_TypeInfo_12d50b8 + 0xb8) + 0x18);
}



/* Localization$$get_language @ 0x7f8058
 * System_String_o* Localization__get_language (const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Localization$$get_language
   System_String_o* Localization__get_language (const MethodInfo* method); */

undefined8 native_Localization__get_language_7f8058(void)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  if ((bRam00000000013403f1 & 1) == 0) {
    native_sub_43273c(&Localization_TypeInfo_12d50b8);
    native_sub_43273c(&StringLiteral_Language_12ef510);
    native_sub_43273c(&StringLiteral_English_12edb28);
    bRam00000000013403f1 = 1;
  }
  if (((*(byte *)(_Localization_TypeInfo_12d50b8 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_Localization_TypeInfo_12d50b8 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar1 = native_System_String__IsNullOrEmpty_b09430
                    (*(undefined8 *)(*(long *)(_Localization_TypeInfo_12d50b8 + 0xb8) + 0x40),0);
  if ((uVar1 & 1) != 0) {
    uVar2 = native_UnityEngine_PlayerPrefs__GetString_761f44
                      (_StringLiteral_Language_12ef510,_StringLiteral_English_12edb28,0);
    if (((*(byte *)(_Localization_TypeInfo_12d50b8 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_Localization_TypeInfo_12d50b8 + 0xe0) == 0)) {
      native_sub_4327ec(_Localization_TypeInfo_12d50b8);
    }
    puVar3 = (undefined8 *)(*(long *)(_Localization_TypeInfo_12d50b8 + 0xb8) + 0x40);
    *puVar3 = uVar2;
    native_sub_4326e0(puVar3,uVar2);
    native_Localization__LoadAndSelect_7f86e8
              (*(undefined8 *)(*(long *)(_Localization_TypeInfo_12d50b8 + 0xb8) + 0x40));
  }
  if (((*(byte *)(_Localization_TypeInfo_12d50b8 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_Localization_TypeInfo_12d50b8 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  return *(undefined8 *)(*(long *)(_Localization_TypeInfo_12d50b8 + 0xb8) + 0x40);
}



/* Localization$$set_language @ 0x7f88dc
 * void Localization__set_language (System_String_o* value, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Localization$$set_language
   void Localization__set_language (System_String_o* value, const MethodInfo* method); */

ulong native_Localization__set_language_7f88dc(undefined8 param_1)

{
  int iVar1;
  long lVar2;
  ulong uVar3;
  undefined8 *puVar4;
  
  if ((bRam00000000013403f2 & 1) == 0) {
    native_sub_43273c(&Localization_TypeInfo_12d50b8);
    bRam00000000013403f2 = 1;
  }
  if (((*(byte *)(_Localization_TypeInfo_12d50b8 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_Localization_TypeInfo_12d50b8 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar3 = native_System_String__op_Inequality_afbbb4
                    (*(undefined8 *)(*(long *)(_Localization_TypeInfo_12d50b8 + 0xb8) + 0x40),
                     param_1,0);
  if ((uVar3 & 1) == 0) {
    return uVar3;
  }
  if (((*(byte *)(_Localization_TypeInfo_12d50b8 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_Localization_TypeInfo_12d50b8 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  puVar4 = (undefined8 *)(*(long *)(_Localization_TypeInfo_12d50b8 + 0xb8) + 0x40);
  *puVar4 = param_1;
  native_sub_4326e0(puVar4,param_1);
  if ((bRam00000000013403f5 & 1) == 0) {
    native_sub_43273c(&
                      Method_System_Collections_Generic_Dictionary_string__string____Clear___12d9738
                     );
    native_sub_43273c(&Method_System_Collections_Generic_Dictionary_string__string__Clear___12d98f0)
    ;
    native_sub_43273c(&
                      Method_System_Collections_Generic_Dictionary_string__string__get_Count___12d9918
                     );
    native_sub_43273c(&
                      Method_System_Collections_Generic_Dictionary_string__string____get_Count___12d9758
                     );
    native_sub_43273c(&Localization_TypeInfo_12d50b8);
    native_sub_43273c(&StringLiteral_Language_12ef510);
    bRam00000000013403f5 = 1;
  }
  uVar3 = native_System_String__IsNullOrEmpty_b09430(param_1,0);
  if ((uVar3 & 1) == 0) {
    if (((*(byte *)(_Localization_TypeInfo_12d50b8 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_Localization_TypeInfo_12d50b8 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    lVar2 = *(long *)(*(long *)(_Localization_TypeInfo_12d50b8 + 0xb8) + 0x28);
    if (lVar2 == 0) goto LAB_007f88d8;
    iVar1 = native_System_Collections_Generic_Dictionary_Font__HashSet_Text____get_Count_cda3b4
                      (lVar2,
                       _Method_System_Collections_Generic_Dictionary_string__string____get_Count___12d9758
                      );
    if (iVar1 == 0) {
      if (((*(byte *)(_Localization_TypeInfo_12d50b8 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_Localization_TypeInfo_12d50b8 + 0xe0) == 0)) {
        native_sub_4327ec();
      }
      uVar3 = native_Localization__LoadDictionary_7f8264(param_1,0);
      if ((uVar3 & 1) == 0) {
        return 0;
      }
    }
    if (((*(byte *)(_Localization_TypeInfo_12d50b8 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_Localization_TypeInfo_12d50b8 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    uVar3 = native_Localization__SelectLanguage_7f8bf0(param_1);
    if ((uVar3 & 1) != 0) {
      return 1;
    }
  }
  if (((*(byte *)(_Localization_TypeInfo_12d50b8 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_Localization_TypeInfo_12d50b8 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  lVar2 = *(long *)(*(long *)(_Localization_TypeInfo_12d50b8 + 0xb8) + 0x20);
  if (lVar2 != 0) {
    iVar1 = native_System_Collections_Generic_Dictionary_Font__HashSet_Text____get_Count_cda3b4
                      (lVar2,
                       _Method_System_Collections_Generic_Dictionary_string__string__get_Count___12d9918
                      );
    if (0 < iVar1) {
      return 1;
    }
    if (((*(byte *)(_Localization_TypeInfo_12d50b8 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_Localization_TypeInfo_12d50b8 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    lVar2 = *(long *)(*(long *)(_Localization_TypeInfo_12d50b8 + 0xb8) + 0x20);
    if (lVar2 != 0) {
      native_System_Collections_Generic_Dictionary_object__object___Clear_cda7fc
                (lVar2,_Method_System_Collections_Generic_Dictionary_string__string__Clear___12d98f0
                );
      lVar2 = *(long *)(*(long *)(_Localization_TypeInfo_12d50b8 + 0xb8) + 0x28);
      if (lVar2 != 0) {
        native_System_Collections_Generic_Dictionary_object__object___Clear_cda7fc
                  (lVar2,
                   _Method_System_Collections_Generic_Dictionary_string__string____Clear___12d9738);
        uVar3 = native_System_String__IsNullOrEmpty_b09430(param_1,0);
        if ((uVar3 & 1) != 0) {
          native_UnityEngine_PlayerPrefs__DeleteKey_76204c(_StringLiteral_Language_12ef510,0);
        }
        return 0;
      }
    }
  }
LAB_007f88d8:
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* Localization$$Reload @ 0x7f8990
 * bool Localization__Reload (const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Localization$$Reload
   bool Localization__Reload (const MethodInfo* method); */

undefined8 native_Localization__Reload_7f8990(void)

{
  ulong uVar1;
  undefined8 uVar2;
  long lVar3;
  
  if ((bRam00000000013403f3 & 1) == 0) {
    native_sub_43273c(&Localization_TypeInfo_12d50b8);
    native_sub_43273c(&UIRoot_TypeInfo_12d64a8);
    native_sub_43273c(&StringLiteral_OnLocalize_12f0248);
    bRam00000000013403f3 = 1;
  }
  if (((*(byte *)(_Localization_TypeInfo_12d50b8 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_Localization_TypeInfo_12d50b8 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  lVar3 = _Localization_TypeInfo_12d50b8;
  *(undefined1 *)(*(long *)(_Localization_TypeInfo_12d50b8 + 0xb8) + 0x10) = 0;
  uVar1 = native_Localization__LoadDictionary_7f8264
                    (*(undefined8 *)(*(long *)(lVar3 + 0xb8) + 0x40),1);
  uVar2 = 0;
  if ((uVar1 & 1) != 0) {
    if (((*(byte *)(_Localization_TypeInfo_12d50b8 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_Localization_TypeInfo_12d50b8 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    lVar3 = *(long *)(*(long *)(_Localization_TypeInfo_12d50b8 + 0xb8) + 8);
    if (lVar3 != 0) {
      if (((*(byte *)(_Localization_TypeInfo_12d50b8 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_Localization_TypeInfo_12d50b8 + 0xe0) == 0)) {
        native_sub_4327ec();
        lVar3 = *(long *)(*(long *)(_Localization_TypeInfo_12d50b8 + 0xb8) + 8);
        if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
          native_sub_432810();
        }
      }
      native_Localization_OnLocalizeNotification__Invoke_54cb18(lVar3,0);
    }
    if (((*(byte *)(_UIRoot_TypeInfo_12d64a8 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UIRoot_TypeInfo_12d64a8 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    native_UIRoot__Broadcast_c2fc74(_StringLiteral_OnLocalize_12f0248,0);
    uVar2 = 1;
  }
  return uVar2;
}



/* Localization$$LoadDictionary @ 0x7f8264
 * bool Localization__LoadDictionary (System_String_o* value, bool merge, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Localization$$LoadDictionary
   bool Localization__LoadDictionary (System_String_o* value, bool merge, const MethodInfo* method);
    */

undefined4 native_Localization__LoadDictionary_7f8264(undefined8 param_1,uint param_2)

{
  ulong uVar1;
  long lVar2;
  undefined8 uVar3;
  long *plVar4;
  long lVar5;
  undefined4 uVar6;
  long lVar7;
  
  if ((bRam00000000013403f4 & 1) == 0) {
    native_sub_43273c(&Localization_TypeInfo_12d50b8);
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    native_sub_43273c(&Method_UnityEngine_Resources_LoadAll_TextAsset____12e6360);
    native_sub_43273c(&Method_UnityEngine_Resources_Load_TextAsset____12e6358);
    native_sub_43273c(&UIRoot_TypeInfo_12d64a8);
    native_sub_43273c(&StringLiteral_Localization_12ef628);
    native_sub_43273c(&StringLiteral_OnLocalize_12f0248);
    bRam00000000013403f4 = 1;
  }
  if (((*(byte *)(_Localization_TypeInfo_12d50b8 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_Localization_TypeInfo_12d50b8 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  plVar4 = *(long **)(_Localization_TypeInfo_12d50b8 + 0xb8);
  if ((char)plVar4[2] == '\0') {
    if (((*(byte *)(_Localization_TypeInfo_12d50b8 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_Localization_TypeInfo_12d50b8 + 0xe0) == 0)) {
      native_sub_4327ec();
      plVar4 = *(long **)(_Localization_TypeInfo_12d50b8 + 0xb8);
    }
    lVar7 = *plVar4;
    if (lVar7 != 0) {
      if (((*(byte *)(_Localization_TypeInfo_12d50b8 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_Localization_TypeInfo_12d50b8 + 0xe0) == 0)) {
        native_sub_4327ec();
        lVar7 = **(long **)(_Localization_TypeInfo_12d50b8 + 0xb8);
        if (lVar7 == 0) goto LAB_007f8668;
      }
      lVar7 = native_Localization_LoadFunction__Invoke_54c6fc
                        (lVar7,_StringLiteral_Localization_12ef628,0);
LAB_007f8384:
      if (((*(byte *)(_Localization_TypeInfo_12d50b8 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_Localization_TypeInfo_12d50b8 + 0xe0) == 0)) {
        native_sub_4327ec();
      }
      lVar5 = _Localization_TypeInfo_12d50b8;
      *(undefined1 *)(*(long *)(_Localization_TypeInfo_12d50b8 + 0xb8) + 0x10) = 1;
      goto LAB_007f83ac;
    }
    lVar5 = native_UnityEngine_Resources__LoadAll_object__4a7eac
                      (_StringLiteral_Localization_12ef628,
                       _Method_UnityEngine_Resources_LoadAll_TextAsset____12e6360);
    lVar7 = 0;
    if (lVar5 == 0) goto LAB_007f8384;
    uVar1 = *(ulong *)(lVar5 + 0x18);
    if (uVar1 == 0) {
      lVar7 = 0;
      goto LAB_007f8384;
    }
    if (0 < (int)uVar1) {
      lVar7 = 0;
      do {
        if ((uint)uVar1 <= (uint)lVar7) {
          uVar3 = native_sub_43283c();
                    /* WARNING: Subroutine does not return */
          native_sub_4327dc(uVar3,0);
        }
        lVar2 = *(long *)(lVar5 + 0x20 + lVar7 * 8);
        if (lVar2 == 0) goto LAB_007f8668;
        uVar3 = native_UnityEngine_TextAsset__get_bytes_76e27c(lVar2,0);
        if (((*(byte *)(_Localization_TypeInfo_12d50b8 + 0x133) >> 2 & 1) != 0) &&
           (*(int *)(_Localization_TypeInfo_12d50b8 + 0xe0) == 0)) {
          native_sub_4327ec(_Localization_TypeInfo_12d50b8);
        }
        native_Localization__LoadCSV_7f8abc(uVar3,param_2 & 1,0);
        uVar1 = (ulong)*(uint *)(lVar5 + 0x18);
        lVar7 = lVar7 + 1;
        param_2 = 1;
      } while ((int)lVar7 < (int)*(uint *)(lVar5 + 0x18));
    }
    if (((*(byte *)(_Localization_TypeInfo_12d50b8 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_Localization_TypeInfo_12d50b8 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    lVar7 = *(long *)(*(long *)(_Localization_TypeInfo_12d50b8 + 0xb8) + 8);
    if (lVar7 != 0) {
      if (((*(byte *)(_Localization_TypeInfo_12d50b8 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_Localization_TypeInfo_12d50b8 + 0xe0) == 0)) {
        native_sub_4327ec();
        lVar7 = *(long *)(*(long *)(_Localization_TypeInfo_12d50b8 + 0xb8) + 8);
        if (lVar7 == 0) goto LAB_007f8668;
      }
      native_Localization_OnLocalizeNotification__Invoke_54cb18(lVar7,0);
    }
    if (((*(byte *)(_UIRoot_TypeInfo_12d64a8 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UIRoot_TypeInfo_12d64a8 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    native_UIRoot__Broadcast_c2fc74(_StringLiteral_OnLocalize_12f0248,0);
LAB_007f8630:
    uVar6 = 1;
  }
  else {
    lVar7 = 0;
    lVar5 = _Localization_TypeInfo_12d50b8;
LAB_007f83ac:
    if (((*(byte *)(lVar5 + 0x133) >> 2 & 1) != 0) && (*(int *)(lVar5 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    uVar1 = native_Localization__LoadCSV_7f8abc(lVar7,param_2 & 1,1);
    if ((uVar1 & 1) != 0) {
      return 1;
    }
    uVar1 = native_System_String__IsNullOrEmpty_b09430(param_1,0);
    if ((uVar1 & 1) != 0) {
      if (((*(byte *)(_Localization_TypeInfo_12d50b8 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_Localization_TypeInfo_12d50b8 + 0xe0) == 0)) {
        native_sub_4327ec();
      }
      param_1 = *(undefined8 *)(*(long *)(_Localization_TypeInfo_12d50b8 + 0xb8) + 0x40);
    }
    uVar1 = native_System_String__IsNullOrEmpty_b09430(param_1,0);
    if ((uVar1 & 1) == 0) {
      if (((*(byte *)(_Localization_TypeInfo_12d50b8 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_Localization_TypeInfo_12d50b8 + 0xe0) == 0)) {
        native_sub_4327ec();
      }
      lVar5 = **(long **)(_Localization_TypeInfo_12d50b8 + 0xb8);
      if (lVar5 == 0) {
        lVar5 = native_UnityEngine_Resources__Load_Font__4a7de0
                          (param_1,_Method_UnityEngine_Resources_Load_TextAsset____12e6358);
        if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
           (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
          native_sub_4327ec(_UnityEngine_Object_TypeInfo_12d54e0);
        }
        uVar1 = native_UnityEngine_Object__op_Inequality_8d76fc(lVar5,0,0);
        if ((uVar1 & 1) != 0) {
          if (lVar5 == 0) goto LAB_007f8668;
          lVar7 = native_UnityEngine_TextAsset__get_bytes_76e27c(lVar5,0);
        }
      }
      else {
        if (((*(byte *)(_Localization_TypeInfo_12d50b8 + 0x133) >> 2 & 1) != 0) &&
           (*(int *)(_Localization_TypeInfo_12d50b8 + 0xe0) == 0)) {
          native_sub_4327ec();
          lVar5 = **(long **)(_Localization_TypeInfo_12d50b8 + 0xb8);
          if (lVar5 == 0) {
LAB_007f8668:
                    /* WARNING: Subroutine does not return */
            native_sub_432810();
          }
        }
        lVar7 = native_Localization_LoadFunction__Invoke_54c6fc(lVar5,param_1,0);
      }
      if (lVar7 != 0) {
        if (((*(byte *)(_Localization_TypeInfo_12d50b8 + 0x133) >> 2 & 1) != 0) &&
           (*(int *)(_Localization_TypeInfo_12d50b8 + 0xe0) == 0)) {
          native_sub_4327ec();
        }
        native_Localization__Set_7f8b38(param_1,lVar7);
        goto LAB_007f8630;
      }
    }
    uVar6 = 0;
  }
  return uVar6;
}



/* Localization$$LoadAndSelect @ 0x7f86e8
 * bool Localization__LoadAndSelect (System_String_o* value, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Localization$$LoadAndSelect
   bool Localization__LoadAndSelect (System_String_o* value, const MethodInfo* method); */

undefined8 native_Localization__LoadAndSelect_7f86e8(undefined8 param_1)

{
  int iVar1;
  ulong uVar2;
  long lVar3;
  
  if ((bRam00000000013403f5 & 1) == 0) {
    native_sub_43273c(&
                      Method_System_Collections_Generic_Dictionary_string__string____Clear___12d9738
                     );
    native_sub_43273c(&Method_System_Collections_Generic_Dictionary_string__string__Clear___12d98f0)
    ;
    native_sub_43273c(&
                      Method_System_Collections_Generic_Dictionary_string__string__get_Count___12d9918
                     );
    native_sub_43273c(&
                      Method_System_Collections_Generic_Dictionary_string__string____get_Count___12d9758
                     );
    native_sub_43273c(&Localization_TypeInfo_12d50b8);
    native_sub_43273c(&StringLiteral_Language_12ef510);
    bRam00000000013403f5 = 1;
  }
  uVar2 = native_System_String__IsNullOrEmpty_b09430(param_1,0);
  if ((uVar2 & 1) == 0) {
    if (((*(byte *)(_Localization_TypeInfo_12d50b8 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_Localization_TypeInfo_12d50b8 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    lVar3 = *(long *)(*(long *)(_Localization_TypeInfo_12d50b8 + 0xb8) + 0x28);
    if (lVar3 == 0) goto LAB_007f88d8;
    iVar1 = native_System_Collections_Generic_Dictionary_Font__HashSet_Text____get_Count_cda3b4
                      (lVar3,
                       _Method_System_Collections_Generic_Dictionary_string__string____get_Count___12d9758
                      );
    if (iVar1 == 0) {
      if (((*(byte *)(_Localization_TypeInfo_12d50b8 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_Localization_TypeInfo_12d50b8 + 0xe0) == 0)) {
        native_sub_4327ec();
      }
      uVar2 = native_Localization__LoadDictionary_7f8264(param_1,0);
      if ((uVar2 & 1) == 0) {
        return 0;
      }
    }
    if (((*(byte *)(_Localization_TypeInfo_12d50b8 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_Localization_TypeInfo_12d50b8 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    uVar2 = native_Localization__SelectLanguage_7f8bf0(param_1);
    if ((uVar2 & 1) != 0) {
      return 1;
    }
  }
  if (((*(byte *)(_Localization_TypeInfo_12d50b8 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_Localization_TypeInfo_12d50b8 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  lVar3 = *(long *)(*(long *)(_Localization_TypeInfo_12d50b8 + 0xb8) + 0x20);
  if (lVar3 != 0) {
    iVar1 = native_System_Collections_Generic_Dictionary_Font__HashSet_Text____get_Count_cda3b4
                      (lVar3,
                       _Method_System_Collections_Generic_Dictionary_string__string__get_Count___12d9918
                      );
    if (0 < iVar1) {
      return 1;
    }
    if (((*(byte *)(_Localization_TypeInfo_12d50b8 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_Localization_TypeInfo_12d50b8 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    lVar3 = *(long *)(*(long *)(_Localization_TypeInfo_12d50b8 + 0xb8) + 0x20);
    if (lVar3 != 0) {
      native_System_Collections_Generic_Dictionary_object__object___Clear_cda7fc
                (lVar3,_Method_System_Collections_Generic_Dictionary_string__string__Clear___12d98f0
                );
      lVar3 = *(long *)(*(long *)(_Localization_TypeInfo_12d50b8 + 0xb8) + 0x28);
      if (lVar3 != 0) {
        native_System_Collections_Generic_Dictionary_object__object___Clear_cda7fc
                  (lVar3,
                   _Method_System_Collections_Generic_Dictionary_string__string____Clear___12d9738);
        uVar2 = native_System_String__IsNullOrEmpty_b09430(param_1,0);
        if ((uVar2 & 1) != 0) {
          native_UnityEngine_PlayerPrefs__DeleteKey_76204c(_StringLiteral_Language_12ef510,0);
        }
        return 0;
      }
    }
  }
LAB_007f88d8:
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* Localization$$Load @ 0x7f8e5c
 * void Localization__Load (UnityEngine_TextAsset_o* asset, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Localization$$Load
   void Localization__Load (UnityEngine_TextAsset_o* asset, const MethodInfo* method); */

void native_Localization__Load_7f8e5c(long param_1)

{
  int iVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long *plVar5;
  undefined8 *puVar6;
  long *plVar7;
  ulong uVar8;
  ulong uVar9;
  
  if ((bRam00000000013403f6 & 1) == 0) {
    native_sub_43273c(&ByteReader_TypeInfo_12d3c30);
    native_sub_43273c(&Localization_TypeInfo_12d50b8);
    bRam00000000013403f6 = 1;
  }
  lVar2 = native_sub_432808(_ByteReader_TypeInfo_12d3c30);
  native_ByteReader___ctor_dd3610(lVar2,param_1,0);
  if ((param_1 == 0) || (lVar3 = native_UnityEngine_Object__get_name_8e8098(param_1,0), lVar2 == 0))
  {
                    /* WARNING: Subroutine does not return */
    native_sub_432810();
  }
  uVar4 = native_ByteReader__ReadDictionary_dd3960(lVar2,0);
  if (((*(byte *)(_Localization_TypeInfo_12d50b8 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_Localization_TypeInfo_12d50b8 + 0xe0) == 0)) {
    native_sub_4327ec(_Localization_TypeInfo_12d50b8);
  }
  if ((bRam0000000001340401 & 1) == 0) {
    native_sub_43273c(&Localization_TypeInfo_12d50b8);
    native_sub_43273c(&string___TypeInfo_12d3398);
    native_sub_43273c(&UIRoot_TypeInfo_12d64a8);
    native_sub_43273c(&StringLiteral_Language_12ef510);
    native_sub_43273c(&StringLiteral_OnLocalize_12f0248);
    bRam0000000001340401 = 1;
  }
  if (((*(byte *)(_Localization_TypeInfo_12d50b8 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_Localization_TypeInfo_12d50b8 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  plVar5 = (long *)(*(long *)(_Localization_TypeInfo_12d50b8 + 0xb8) + 0x40);
  *plVar5 = lVar3;
  native_sub_4326e0(plVar5,lVar3);
  native_UnityEngine_PlayerPrefs__SetString_761ea8
            (_StringLiteral_Language_12ef510,
             *(undefined8 *)(*(long *)(_Localization_TypeInfo_12d50b8 + 0xb8) + 0x40),0);
  puVar6 = (undefined8 *)(*(long *)(_Localization_TypeInfo_12d50b8 + 0xb8) + 0x20);
  *puVar6 = uVar4;
  native_sub_4326e0(puVar6,uVar4);
  lVar2 = _Localization_TypeInfo_12d50b8;
  *(undefined1 *)(*(long *)(_Localization_TypeInfo_12d50b8 + 0xb8) + 0x10) = 1;
  *(undefined4 *)(*(long *)(lVar2 + 0xb8) + 0x38) = 0xffffffff;
  plVar5 = (long *)native_sub_432750(_string___TypeInfo_12d3398,1);
  if (plVar5 == (long *)0x0) {
LAB_007f90e8:
                    /* WARNING: Subroutine does not return */
    native_sub_432810();
  }
  if ((lVar3 != 0) && (lVar2 = native_sub_4327f8(lVar3,*(undefined8 *)(*plVar5 + 0x40)), lVar2 == 0)
     ) {
    uVar4 = native_sub_432830();
                    /* WARNING: Subroutine does not return */
    native_sub_4327dc(uVar4,0);
  }
  if ((int)plVar5[3] == 0) {
    uVar4 = native_sub_43283c();
                    /* WARNING: Subroutine does not return */
    native_sub_4327dc(uVar4,0);
  }
  plVar5[4] = lVar3;
  native_sub_4326e0(plVar5 + 4,lVar3);
  plVar7 = (long *)(*(long *)(_Localization_TypeInfo_12d50b8 + 0xb8) + 0x18);
  *plVar7 = (long)plVar5;
  native_sub_4326e0(plVar7,plVar5);
  lVar2 = *(long *)(*(long *)(_Localization_TypeInfo_12d50b8 + 0xb8) + 8);
  if (lVar2 != 0) {
    if (((*(byte *)(_Localization_TypeInfo_12d50b8 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_Localization_TypeInfo_12d50b8 + 0xe0) == 0)) {
      native_sub_4327ec(_Localization_TypeInfo_12d50b8);
      lVar2 = *(long *)(*(long *)(_Localization_TypeInfo_12d50b8 + 0xb8) + 8);
      if (lVar2 == 0) goto LAB_007f90e8;
    }
    native_Localization_OnLocalizeNotification__Invoke_54cb18(lVar2,0);
  }
  if (((*(byte *)(_UIRoot_TypeInfo_12d64a8 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UIRoot_TypeInfo_12d64a8 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar4 = _StringLiteral_OnLocalize_12f0248;
  if ((bRam0000000001342724 & 1) == 0) {
    native_sub_43273c(&Method_System_Collections_Generic_List_UIRoot__get_Count___12dd398,0);
    native_sub_43273c(&Method_System_Collections_Generic_List_UIRoot__get_Item___12dd3a0);
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    native_sub_43273c(&UIRoot_TypeInfo_12d64a8);
    bRam0000000001342724 = 1;
  }
  if (((*(byte *)(_UIRoot_TypeInfo_12d64a8 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UIRoot_TypeInfo_12d64a8 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  if (**(long **)(_UIRoot_TypeInfo_12d64a8 + 0xb8) == 0) {
LAB_00c2fdc8:
                    /* WARNING: Subroutine does not return */
    native_sub_432810();
  }
  iVar1 = *(int *)(**(long **)(_UIRoot_TypeInfo_12d64a8 + 0xb8) + 0x18);
  if (0 < iVar1) {
    uVar9 = 0;
    do {
      if (((*(byte *)(_UIRoot_TypeInfo_12d64a8 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_UIRoot_TypeInfo_12d64a8 + 0xe0) == 0)) {
        native_sub_4327ec();
      }
      lVar2 = **(long **)(_UIRoot_TypeInfo_12d64a8 + 0xb8);
      if (lVar2 == 0) goto LAB_00c2fdc8;
      if (*(uint *)(lVar2 + 0x18) <= uVar9) {
        native_System_ThrowHelper__ThrowArgumentOutOfRangeException_9fe0f4(0);
      }
      lVar2 = *(long *)(*(long *)(lVar2 + 0x10) + uVar9 * 8 + 0x20);
      if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
        native_sub_4327ec();
      }
      uVar8 = native_UnityEngine_Object__op_Inequality_8d76fc(lVar2,0,0);
      if ((uVar8 & 1) != 0) {
        if (lVar2 == 0) goto LAB_00c2fdc8;
        native_UnityEngine_Component__BroadcastMessage_8dac98(lVar2,uVar4,1,0);
      }
      uVar9 = uVar9 + 1;
    } while ((long)uVar9 < (long)iVar1);
  }
  return;
}



/* Localization$$Set @ 0x7f8b38
 * void Localization__Set (System_String_o* languageName, System_Byte_array* bytes, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Localization$$Set
   void Localization__Set (System_String_o* languageName, System_Byte_array* bytes, const
   MethodInfo* method); */

void native_Localization__Set_7f8b38(long param_1,undefined8 param_2)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  long *plVar4;
  undefined8 *puVar5;
  long *plVar6;
  ulong uVar7;
  ulong uVar8;
  
  if ((bRam00000000013403f7 & 1) == 0) {
    native_sub_43273c(&ByteReader_TypeInfo_12d3c30);
    native_sub_43273c(&Localization_TypeInfo_12d50b8);
    bRam00000000013403f7 = 1;
  }
  lVar2 = native_sub_432808(_ByteReader_TypeInfo_12d3c30);
  native_ByteReader___ctor_dd35dc(lVar2,param_2,0);
  if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    native_sub_432810();
  }
  uVar3 = native_ByteReader__ReadDictionary_dd3960(lVar2,0);
  if (((*(byte *)(_Localization_TypeInfo_12d50b8 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_Localization_TypeInfo_12d50b8 + 0xe0) == 0)) {
    native_sub_4327ec(_Localization_TypeInfo_12d50b8);
  }
  if ((bRam0000000001340401 & 1) == 0) {
    native_sub_43273c(&Localization_TypeInfo_12d50b8);
    native_sub_43273c(&string___TypeInfo_12d3398);
    native_sub_43273c(&UIRoot_TypeInfo_12d64a8);
    native_sub_43273c(&StringLiteral_Language_12ef510);
    native_sub_43273c(&StringLiteral_OnLocalize_12f0248);
    bRam0000000001340401 = 1;
  }
  if (((*(byte *)(_Localization_TypeInfo_12d50b8 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_Localization_TypeInfo_12d50b8 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  plVar4 = (long *)(*(long *)(_Localization_TypeInfo_12d50b8 + 0xb8) + 0x40);
  *plVar4 = param_1;
  native_sub_4326e0(plVar4,param_1);
  native_UnityEngine_PlayerPrefs__SetString_761ea8
            (_StringLiteral_Language_12ef510,
             *(undefined8 *)(*(long *)(_Localization_TypeInfo_12d50b8 + 0xb8) + 0x40),0);
  puVar5 = (undefined8 *)(*(long *)(_Localization_TypeInfo_12d50b8 + 0xb8) + 0x20);
  *puVar5 = uVar3;
  native_sub_4326e0(puVar5,uVar3);
  lVar2 = _Localization_TypeInfo_12d50b8;
  *(undefined1 *)(*(long *)(_Localization_TypeInfo_12d50b8 + 0xb8) + 0x10) = 1;
  *(undefined4 *)(*(long *)(lVar2 + 0xb8) + 0x38) = 0xffffffff;
  plVar4 = (long *)native_sub_432750(_string___TypeInfo_12d3398,1);
  if (plVar4 == (long *)0x0) {
LAB_007f90e8:
                    /* WARNING: Subroutine does not return */
    native_sub_432810();
  }
  if ((param_1 != 0) &&
     (lVar2 = native_sub_4327f8(param_1,*(undefined8 *)(*plVar4 + 0x40)), lVar2 == 0)) {
    uVar3 = native_sub_432830();
                    /* WARNING: Subroutine does not return */
    native_sub_4327dc(uVar3,0);
  }
  if ((int)plVar4[3] == 0) {
    uVar3 = native_sub_43283c();
                    /* WARNING: Subroutine does not return */
    native_sub_4327dc(uVar3,0);
  }
  plVar4[4] = param_1;
  native_sub_4326e0(plVar4 + 4,param_1);
  plVar6 = (long *)(*(long *)(_Localization_TypeInfo_12d50b8 + 0xb8) + 0x18);
  *plVar6 = (long)plVar4;
  native_sub_4326e0(plVar6,plVar4);
  lVar2 = *(long *)(*(long *)(_Localization_TypeInfo_12d50b8 + 0xb8) + 8);
  if (lVar2 != 0) {
    if (((*(byte *)(_Localization_TypeInfo_12d50b8 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_Localization_TypeInfo_12d50b8 + 0xe0) == 0)) {
      native_sub_4327ec(_Localization_TypeInfo_12d50b8);
      lVar2 = *(long *)(*(long *)(_Localization_TypeInfo_12d50b8 + 0xb8) + 8);
      if (lVar2 == 0) goto LAB_007f90e8;
    }
    native_Localization_OnLocalizeNotification__Invoke_54cb18(lVar2,0);
  }
  if (((*(byte *)(_UIRoot_TypeInfo_12d64a8 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UIRoot_TypeInfo_12d64a8 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar3 = _StringLiteral_OnLocalize_12f0248;
  if ((bRam0000000001342724 & 1) == 0) {
    native_sub_43273c(&Method_System_Collections_Generic_List_UIRoot__get_Count___12dd398,0);
    native_sub_43273c(&Method_System_Collections_Generic_List_UIRoot__get_Item___12dd3a0);
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    native_sub_43273c(&UIRoot_TypeInfo_12d64a8);
    bRam0000000001342724 = 1;
  }
  if (((*(byte *)(_UIRoot_TypeInfo_12d64a8 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UIRoot_TypeInfo_12d64a8 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  if (**(long **)(_UIRoot_TypeInfo_12d64a8 + 0xb8) == 0) {
LAB_00c2fdc8:
                    /* WARNING: Subroutine does not return */
    native_sub_432810();
  }
  iVar1 = *(int *)(**(long **)(_UIRoot_TypeInfo_12d64a8 + 0xb8) + 0x18);
  if (0 < iVar1) {
    uVar8 = 0;
    do {
      if (((*(byte *)(_UIRoot_TypeInfo_12d64a8 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_UIRoot_TypeInfo_12d64a8 + 0xe0) == 0)) {
        native_sub_4327ec();
      }
      lVar2 = **(long **)(_UIRoot_TypeInfo_12d64a8 + 0xb8);
      if (lVar2 == 0) goto LAB_00c2fdc8;
      if (*(uint *)(lVar2 + 0x18) <= uVar8) {
        native_System_ThrowHelper__ThrowArgumentOutOfRangeException_9fe0f4(0);
      }
      lVar2 = *(long *)(*(long *)(lVar2 + 0x10) + uVar8 * 8 + 0x20);
      if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
        native_sub_4327ec();
      }
      uVar7 = native_UnityEngine_Object__op_Inequality_8d76fc(lVar2,0,0);
      if ((uVar7 & 1) != 0) {
        if (lVar2 == 0) goto LAB_00c2fdc8;
        native_UnityEngine_Component__BroadcastMessage_8dac98(lVar2,uVar3,1,0);
      }
      uVar8 = uVar8 + 1;
    } while ((long)uVar8 < (long)iVar1);
  }
  return;
}



/* Localization$$ReplaceKey @ 0x7f9104
 * void Localization__ReplaceKey (System_String_o* key, System_String_o* val, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Localization$$ReplaceKey
   void Localization__ReplaceKey (System_String_o* key, System_String_o* val, const MethodInfo*
   method); */

undefined8 native_Localization__ReplaceKey_7f9104(long param_1,undefined8 param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  ulong uVar5;
  long lVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  uint uVar12;
  int *piVar13;
  long *plVar14;
  long lVar15;
  undefined8 uVar16;
  uint uVar17;
  
  if ((bRam00000000013403f8 & 1) == 0) {
    native_sub_43273c(&Method_System_Collections_Generic_Dictionary_string__string__Remove___12d9908
                     );
    native_sub_43273c(&
                      Method_System_Collections_Generic_Dictionary_string__string__set_Item___12d9930
                     );
    native_sub_43273c(&Localization_TypeInfo_12d50b8);
    bRam00000000013403f8 = 1;
  }
  uVar5 = native_System_String__IsNullOrEmpty_b09430(param_2,0);
  if ((uVar5 & 1) == 0) {
    if (((*(ushort *)(_Localization_TypeInfo_12d50b8 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(_Localization_TypeInfo_12d50b8 + 0xe0) == 0)) {
      native_sub_4327ec(_Localization_TypeInfo_12d50b8);
    }
    lVar11 = *(long *)(*(long *)(_Localization_TypeInfo_12d50b8 + 0xb8) + 0x30);
    if (lVar11 != 0) {
      if (lVar11 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00cda610. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar16 = (*(code *)**(undefined8 **)
                             (*(long *)(*(long *)(
                                                 _Method_System_Collections_Generic_Dictionary_string__string__set_Item___12d9930
                                                 + 0x18) + 0xc0) + 0x48))();
        return uVar16;
      }
                    /* WARNING: Subroutine does not return */
      native_sub_432810(0,param_1,param_2);
    }
  }
  else {
    if (((*(ushort *)(_Localization_TypeInfo_12d50b8 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(_Localization_TypeInfo_12d50b8 + 0xe0) == 0)) {
      native_sub_4327ec(_Localization_TypeInfo_12d50b8);
    }
    lVar11 = _Method_System_Collections_Generic_Dictionary_string__string__Remove___12d9908;
    lVar6 = *(long *)(*(long *)(_Localization_TypeInfo_12d50b8 + 0xb8) + 0x30);
    if (lVar6 != 0) {
      if (param_1 == 0) {
        native_sub_432740(&System_ArgumentNullException_TypeInfo_12d3808);
        uVar16 = native_sub_432808();
        uVar8 = native_sub_432740(&StringLiteral_key_12f5248);
        native_System_ArgumentNullException___ctor_951bd8(uVar16,uVar8,0);
        uVar8 = native_sub_432740(&
                                  Method_System_Collections_Generic_Dictionary_object__object__Remove___12d9548
                                 );
                    /* WARNING: Subroutine does not return */
        native_sub_4327dc(uVar16,uVar8);
      }
      if (*(long *)(lVar6 + 0x10) == 0) {
        return 0;
      }
      plVar14 = *(long **)(lVar6 + 0x30);
      if (plVar14 != (long *)0x0) {
        lVar15 = *(long *)(*(long *)(*(long *)(
                                              _Method_System_Collections_Generic_Dictionary_string__string__Remove___12d9908
                                              + 0x18) + 0xc0) + 0xe0);
        if ((*(byte *)(lVar15 + 0x132) & 1) == 0) {
          native_sub_3c9850(lVar15);
        }
        lVar9 = *plVar14;
        if ((ulong)*(ushort *)(lVar9 + 0x12a) != 0) {
          uVar5 = 0;
          piVar13 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
          do {
            if (*(long *)(piVar13 + -2) == lVar15) {
              puVar7 = (undefined8 *)(lVar9 + (long)(*piVar13 + 1) * 0x10 + 0x138);
              goto code_r0x00cdc144;
            }
            uVar5 = uVar5 + 1;
            piVar13 = piVar13 + 4;
          } while (uVar5 < *(ushort *)(lVar9 + 0x12a));
        }
        puVar7 = (undefined8 *)native_sub_3c9b34(plVar14,lVar15,1);
code_r0x00cdc144:
        uVar4 = (*(code *)*puVar7)(plVar14,param_1,puVar7[1]);
        lVar15 = *(long *)(lVar6 + 0x10);
        if (lVar15 != 0) {
          uVar1 = *(uint *)(lVar15 + 0x18);
          uVar4 = uVar4 & 0x7fffffff;
          iVar3 = 0;
          if (uVar1 != 0) {
            iVar3 = (int)uVar4 / (int)uVar1;
          }
          uVar2 = uVar4 - iVar3 * uVar1;
          if (uVar1 <= uVar2) {
code_r0x00cdc3cc:
            uVar16 = native_sub_43283c();
                    /* WARNING: Subroutine does not return */
            native_sub_4327dc(uVar16,0);
          }
          uVar1 = *(uint *)(lVar15 + (ulong)uVar2 * 4 + 0x20);
          if ((int)uVar1 < 0) {
            return 0;
          }
          lVar15 = *(long *)(lVar6 + 0x18);
          uVar17 = 0xffffffff;
          while (uVar12 = uVar1, lVar15 != 0) {
            if (*(uint *)(lVar15 + 0x18) <= uVar12) goto code_r0x00cdc3cc;
            lVar9 = (long)(int)uVar12;
            if (*(uint *)(lVar15 + lVar9 * 0x18 + 0x20) == uVar4) {
              plVar14 = *(long **)(lVar6 + 0x30);
              if (plVar14 == (long *)0x0) break;
              uVar16 = *(undefined8 *)(lVar15 + lVar9 * 0x18 + 0x28);
              lVar15 = *(long *)(*(long *)(*(long *)(lVar11 + 0x18) + 0xc0) + 0xe0);
              if ((*(byte *)(lVar15 + 0x132) & 1) == 0) {
                native_sub_3c9850(lVar15);
              }
              lVar10 = *plVar14;
              if ((ulong)*(ushort *)(lVar10 + 0x12a) != 0) {
                uVar5 = 0;
                piVar13 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar13 + -2) == lVar15) {
                    puVar7 = (undefined8 *)(lVar10 + (long)*piVar13 * 0x10 + 0x138);
                    goto code_r0x00cdc240;
                  }
                  uVar5 = uVar5 + 1;
                  piVar13 = piVar13 + 4;
                } while (uVar5 < *(ushort *)(lVar10 + 0x12a));
              }
              puVar7 = (undefined8 *)native_sub_3c9b34(plVar14,lVar15,0);
code_r0x00cdc240:
              uVar5 = (*(code *)*puVar7)(plVar14,uVar16,param_1,puVar7[1]);
              if ((uVar5 & 1) != 0) {
                if ((int)uVar17 < 0) {
                  lVar11 = *(long *)(lVar6 + 0x18);
                  if (lVar11 == 0) break;
                  if (*(uint *)(lVar11 + 0x18) <= uVar12) goto code_r0x00cdc3cc;
                  lVar15 = *(long *)(lVar6 + 0x10);
                  if (lVar15 == 0) break;
                  if (*(uint *)(lVar15 + 0x18) <= uVar2) goto code_r0x00cdc3cc;
                  *(undefined4 *)(lVar15 + (ulong)uVar2 * 4 + 0x20) =
                       *(undefined4 *)(lVar11 + lVar9 * 0x18 + 0x24);
                }
                else {
                  lVar11 = *(long *)(lVar6 + 0x18);
                  if (lVar11 == 0) break;
                  if ((*(uint *)(lVar11 + 0x18) <= uVar12) || (*(uint *)(lVar11 + 0x18) <= uVar17))
                  goto code_r0x00cdc3cc;
                  *(undefined4 *)(lVar11 + 0x20 + (long)(int)uVar17 * 0x18 + 4) =
                       *(undefined4 *)(lVar11 + 0x20 + lVar9 * 0x18 + 4);
                }
                lVar11 = *(long *)(lVar6 + 0x18);
                if (lVar11 == 0) break;
                if (*(uint *)(lVar11 + 0x18) <= uVar12) goto code_r0x00cdc3cc;
                *(undefined4 *)(lVar11 + lVar9 * 0x18 + 0x20) = 0xffffffff;
                lVar11 = *(long *)(lVar6 + 0x18);
                if (lVar11 == 0) break;
                if (*(uint *)(lVar11 + 0x18) <= uVar12) goto code_r0x00cdc3cc;
                *(undefined4 *)(lVar11 + lVar9 * 0x18 + 0x24) = *(undefined4 *)(lVar6 + 0x28);
                lVar11 = *(long *)(lVar6 + 0x18);
                if (lVar11 == 0) break;
                if (*(uint *)(lVar11 + 0x18) <= uVar12) goto code_r0x00cdc3cc;
                *(undefined8 *)(lVar11 + lVar9 * 0x18 + 0x28) = 0;
                lVar11 = *(long *)(lVar6 + 0x18);
                if (lVar11 == 0) break;
                if (uVar12 < *(uint *)(lVar11 + 0x18)) {
                  *(undefined8 *)(lVar11 + lVar9 * 0x18 + 0x30) = 0;
                  *(uint *)(lVar6 + 0x28) = uVar12;
                  *(int *)(lVar6 + 0x2c) = *(int *)(lVar6 + 0x2c) + 1;
                  *(int *)(lVar6 + 0x24) = *(int *)(lVar6 + 0x24) + 1;
                  return 1;
                }
                goto code_r0x00cdc3cc;
              }
              lVar15 = *(long *)(lVar6 + 0x18);
            }
            if (lVar15 == 0) break;
            if (*(uint *)(lVar15 + 0x18) <= uVar12) goto code_r0x00cdc3cc;
            uVar1 = *(uint *)(lVar15 + lVar9 * 0x18 + 0x24);
            uVar17 = uVar12;
            if ((int)uVar1 < 0) {
              return 0;
            }
          }
        }
      }
                    /* WARNING: Subroutine does not return */
      native_sub_432810();
    }
  }
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* Localization$$ClearReplacements @ 0x7f9204
 * void Localization__ClearReplacements (const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Localization$$ClearReplacements
   void Localization__ClearReplacements (const MethodInfo* method); */

void native_Localization__ClearReplacements_7f9204(void)

{
  long lVar1;
  undefined8 uVar2;
  ulong uVar3;
  long lVar4;
  
  if ((bRam00000000013403f9 & 1) == 0) {
    native_sub_43273c(&Method_System_Collections_Generic_Dictionary_string__string__Clear___12d98f0)
    ;
    native_sub_43273c(&Localization_TypeInfo_12d50b8);
    bRam00000000013403f9 = 1;
  }
  if (((*(byte *)(_Localization_TypeInfo_12d50b8 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_Localization_TypeInfo_12d50b8 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar2 = _Method_System_Collections_Generic_Dictionary_string__string__Clear___12d98f0;
  lVar1 = *(long *)(*(long *)(_Localization_TypeInfo_12d50b8 + 0xb8) + 0x30);
  if (lVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    native_sub_432810();
  }
  if (*(int *)(lVar1 + 0x20) < 1) {
    return;
  }
  lVar4 = *(long *)(lVar1 + 0x10);
  if (lVar4 != 0) {
    uVar3 = 0;
    do {
      if ((long)(int)*(uint *)(lVar4 + 0x18) <= (long)uVar3) {
        native_System_Array__Clear_95191c
                  (*(undefined8 *)(lVar1 + 0x18),0,*(undefined4 *)(lVar1 + 0x20),0);
        *(undefined8 *)(lVar1 + 0x28) = 0xffffffff;
        *(undefined4 *)(lVar1 + 0x20) = 0;
        *(int *)(lVar1 + 0x24) = *(int *)(lVar1 + 0x24) + 1;
        return;
      }
      if (*(uint *)(lVar4 + 0x18) <= uVar3) {
        uVar2 = native_sub_43283c(lVar1,uVar2);
                    /* WARNING: Subroutine does not return */
        native_sub_4327dc(uVar2,0);
      }
      *(undefined4 *)(lVar4 + uVar3 * 4 + 0x20) = 0xffffffff;
      lVar4 = *(long *)(lVar1 + 0x10);
      uVar3 = uVar3 + 1;
    } while (lVar4 != 0);
  }
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* Localization$$LoadCSV @ 0x7f9288
 * bool Localization__LoadCSV (UnityEngine_TextAsset_o* asset, bool merge, bool notify, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Localization$$LoadCSV
   bool Localization__LoadCSV (UnityEngine_TextAsset_o* asset, bool merge, bool notify, const
   MethodInfo* method); */

undefined4 native_Localization__LoadCSV_7f9288(long param_1,ulong param_2,uint param_3)

{
  int iVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  long *plVar5;
  long lVar6;
  ulong uVar7;
  long *plVar8;
  uint uVar9;
  undefined8 *puVar10;
  long lVar11;
  long lVar12;
  int iVar13;
  uint uVar14;
  undefined8 uVar15;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  long *plStack_b0;
  undefined8 uStack_a8;
  int aiStack_a0 [2];
  long *plStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  long *plStack_78;
  undefined8 uStack_70;
  
  if ((bRam00000000013403fa & 1) == 0) {
    native_sub_43273c(&Localization_TypeInfo_12d50b8);
    bRam00000000013403fa = 1;
  }
  if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
    native_sub_432810();
  }
  lVar2 = native_UnityEngine_TextAsset__get_bytes_76e27c(param_1,0);
  if (((*(byte *)(_Localization_TypeInfo_12d50b8 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_Localization_TypeInfo_12d50b8 + 0xe0) == 0)) {
    native_sub_4327ec(_Localization_TypeInfo_12d50b8);
  }
  if ((bRam00000000013403fd & 1) == 0) {
    native_sub_43273c(&Method_System_Array_Resize_string____12e1878);
    native_sub_43273c(&Method_BetterList_string__RemoveAt___12d8970);
    native_sub_43273c(&ByteReader_TypeInfo_12d3c30);
    native_sub_43273c(&UnityEngine_Debug_TypeInfo_12d4338);
    native_sub_43273c(&Method_System_Collections_Generic_Dictionary_string__int__Add___12d97e0);
    native_sub_43273c(&Method_System_Collections_Generic_Dictionary_string__string____Add___12d9730)
    ;
    native_sub_43273c(&
                      Method_System_Collections_Generic_Dictionary_string__string____Clear___12d9738
                     );
    native_sub_43273c(&
                      Method_System_Collections_Generic_Dictionary_string__string____GetEnumerator___12d9748
                     );
    native_sub_43273c(&
                      Method_System_Collections_Generic_Dictionary_string__string_____ctor___12d9728
                     );
    native_sub_43273c(&Method_System_Collections_Generic_Dictionary_string__int___ctor___12d97c8);
    native_sub_43273c(&System_Collections_Generic_Dictionary_string__string____TypeInfo_12d2368);
    native_sub_43273c(&System_Collections_Generic_Dictionary_string__int__TypeInfo_12d2388);
    native_sub_43273c(&
                      Method_System_Collections_Generic_Dictionary_Enumerator_string__string____Dispose___12dad78
                     );
    native_sub_43273c(&
                      Method_System_Collections_Generic_Dictionary_Enumerator_string__string____MoveNext___12dad80
                     );
    native_sub_43273c(&
                      Method_System_Collections_Generic_Dictionary_Enumerator_string__string____get_Current___12dad88
                     );
    native_sub_43273c(&
                      Method_System_Collections_Generic_KeyValuePair_string__string____get_Key___12dbf10
                     );
    native_sub_43273c(&
                      Method_System_Collections_Generic_KeyValuePair_string__string____get_Value___12dbf18
                     );
    native_sub_43273c(&Localization_TypeInfo_12d50b8);
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    native_sub_43273c(&string___TypeInfo_12d3398);
    native_sub_43273c(&UIRoot_TypeInfo_12d64a8);
    native_sub_43273c(&StringLiteral_Language_12ef510);
    native_sub_43273c(&StringLiteral_Unable_to_parse_the_specified_data_as_a_CSV_file_12f2aa0);
    native_sub_43273c(&StringLiteral_Unable_to_parse__12f2a98);
    native_sub_43273c(&StringLiteral_OnLocalize_12f0248);
    native_sub_43273c(&StringLiteral__as_a_CSV_file_12eadc0);
    bRam00000000013403fd = 1;
  }
  uStack_70 = 0;
  plStack_98 = (long *)0x0;
  uStack_88 = 0;
  uStack_90 = 0;
  plStack_78 = (long *)0x0;
  uStack_80 = 0;
  aiStack_a0[1] = 0;
  if (lVar2 == 0) {
    return 0;
  }
  lVar3 = native_sub_432808(_ByteReader_TypeInfo_12d3c30);
  native_ByteReader___ctor_dd35dc(lVar3,lVar2,0);
  if (lVar3 == 0) goto LAB_007f9f98;
  lVar2 = native_ByteReader__ReadCSV_dd3b54(lVar3,0);
  if (lVar2 == 0) {
    if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    uVar4 = native_UnityEngine_Object__op_Inequality_8d76fc(param_1,0,0);
    if ((uVar4 & 1) == 0) {
      if (((*(byte *)(_UnityEngine_Debug_TypeInfo_12d4338 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_UnityEngine_Debug_TypeInfo_12d4338 + 0xe0) == 0)) {
        native_sub_4327ec();
      }
      native_UnityEngine_Debug__LogError_8dc5cc
                (_StringLiteral_Unable_to_parse_the_specified_data_as_a_CSV_file_12f2aa0,0);
    }
    else {
      if (param_1 == 0) goto LAB_007f9f98;
      uVar15 = native_UnityEngine_Object__get_name_8e8098(param_1,0);
      uVar15 = native_System_String__Concat_afc654
                         (_StringLiteral_Unable_to_parse__12f2a98,uVar15,
                          _StringLiteral__as_a_CSV_file_12eadc0,0);
      if (((*(byte *)(_UnityEngine_Debug_TypeInfo_12d4338 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_UnityEngine_Debug_TypeInfo_12d4338 + 0xe0) == 0)) {
        native_sub_4327ec(_UnityEngine_Debug_TypeInfo_12d4338);
      }
      native_UnityEngine_Debug__LogError_8dc6f8(uVar15,param_1,0);
    }
    return 0;
  }
  if (*(int *)(lVar2 + 0x18) < 2) {
    return 0;
  }
  native_BetterList_object___RemoveAt_ba2984(lVar2,0,_Method_BetterList_string__RemoveAt___12d8970);
  if (((*(byte *)(_Localization_TypeInfo_12d50b8 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_Localization_TypeInfo_12d50b8 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar4 = native_System_String__IsNullOrEmpty_b09430
                    (*(undefined8 *)(*(long *)(_Localization_TypeInfo_12d50b8 + 0xb8) + 0x40),0);
  lVar12 = _Localization_TypeInfo_12d50b8;
  if ((uVar4 & 1) != 0) {
    if (((*(byte *)(_Localization_TypeInfo_12d50b8 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_Localization_TypeInfo_12d50b8 + 0xe0) == 0)) {
      native_sub_4327ec(_Localization_TypeInfo_12d50b8);
    }
    lVar12 = _Localization_TypeInfo_12d50b8;
    *(undefined1 *)(*(long *)(_Localization_TypeInfo_12d50b8 + 0xb8) + 0x10) = 0;
  }
  if (((*(byte *)(lVar12 + 0x133) >> 2 & 1) != 0) && (*(int *)(lVar12 + 0xe0) == 0)) {
    native_sub_4327ec(lVar12);
    lVar12 = _Localization_TypeInfo_12d50b8;
  }
  lVar11 = *(long *)(lVar12 + 0xb8);
  if (*(char *)(lVar11 + 0x10) == '\0') {
LAB_007f9ac4:
    if (((*(byte *)(lVar12 + 0x133) >> 2 & 1) != 0) && (*(int *)(lVar12 + 0xe0) == 0)) {
      native_sub_4327ec(lVar12);
      lVar12 = _Localization_TypeInfo_12d50b8;
    }
    lVar12 = *(long *)(*(long *)(lVar12 + 0xb8) + 0x28);
    if (lVar12 == 0) goto LAB_007f9f98;
    native_System_Collections_Generic_Dictionary_object__object___Clear_cda7fc
              (lVar12,
               _Method_System_Collections_Generic_Dictionary_string__string____Clear___12d9738);
    uVar15 = native_sub_432750(_string___TypeInfo_12d3398,*(undefined4 *)(lVar2 + 0x18));
    puVar10 = (undefined8 *)(*(long *)(_Localization_TypeInfo_12d50b8 + 0xb8) + 0x18);
    *puVar10 = uVar15;
    native_sub_4326e0(puVar10,uVar15);
    lVar12 = _Localization_TypeInfo_12d50b8;
    if (*(char *)(*(long *)(_Localization_TypeInfo_12d50b8 + 0xb8) + 0x10) == '\0') {
      lVar12 = *(long *)(lVar2 + 0x10);
      if (lVar12 == 0) goto LAB_007f9f98;
      if (*(int *)(lVar12 + 0x18) == 0) {
LAB_007f9f9c:
        uVar15 = native_sub_43283c();
                    /* WARNING: Subroutine does not return */
        native_sub_4327dc(uVar15,0);
      }
      uVar15 = native_UnityEngine_PlayerPrefs__GetString_761f44
                         (_StringLiteral_Language_12ef510,*(undefined8 *)(lVar12 + 0x20),0);
      if (((*(byte *)(_Localization_TypeInfo_12d50b8 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_Localization_TypeInfo_12d50b8 + 0xe0) == 0)) {
        native_sub_4327ec(_Localization_TypeInfo_12d50b8);
      }
      puVar10 = (undefined8 *)(*(long *)(_Localization_TypeInfo_12d50b8 + 0xb8) + 0x40);
      *puVar10 = uVar15;
      native_sub_4326e0(puVar10,uVar15);
      lVar12 = _Localization_TypeInfo_12d50b8;
      *(undefined1 *)(*(long *)(_Localization_TypeInfo_12d50b8 + 0xb8) + 0x10) = 1;
    }
    if (0 < *(int *)(lVar2 + 0x18)) {
      uVar4 = 0;
      lVar11 = 0x20;
      while( true ) {
        if (((*(byte *)(lVar12 + 0x133) >> 2 & 1) != 0) && (*(int *)(lVar12 + 0xe0) == 0)) {
          native_sub_4327ec();
          lVar12 = _Localization_TypeInfo_12d50b8;
        }
        lVar6 = *(long *)(lVar2 + 0x10);
        if (lVar6 == 0) goto LAB_007f9f98;
        if (*(uint *)(lVar6 + 0x18) <= uVar4) goto LAB_007f9f9c;
        plVar5 = *(long **)(*(long *)(lVar12 + 0xb8) + 0x18);
        if (plVar5 == (long *)0x0) goto LAB_007f9f98;
        lVar12 = *(long *)(lVar6 + lVar11);
        if ((lVar12 != 0) &&
           (lVar6 = native_sub_4327f8(lVar12,*(undefined8 *)(*plVar5 + 0x40)), lVar6 == 0))
        goto LAB_007f9fa8;
        if (*(uint *)(plVar5 + 3) <= uVar4) goto LAB_007f9f9c;
        *(long *)((long)plVar5 + lVar11) = lVar12;
        native_sub_4326e0((long *)((long)plVar5 + lVar11),lVar12);
        lVar12 = *(long *)(*(long *)(_Localization_TypeInfo_12d50b8 + 0xb8) + 0x18);
        if (lVar12 == 0) goto LAB_007f9f98;
        if (*(uint *)(lVar12 + 0x18) <= uVar4) goto LAB_007f9f9c;
        uVar7 = native_System_String__op_Equality_afc18c
                          (*(undefined8 *)(lVar12 + lVar11),
                           *(undefined8 *)(*(long *)(_Localization_TypeInfo_12d50b8 + 0xb8) + 0x40),
                           0);
        if ((uVar7 & 1) != 0) {
          if (((*(byte *)(_Localization_TypeInfo_12d50b8 + 0x133) >> 2 & 1) != 0) &&
             (*(int *)(_Localization_TypeInfo_12d50b8 + 0xe0) == 0)) {
            native_sub_4327ec();
          }
          *(int *)(*(long *)(_Localization_TypeInfo_12d50b8 + 0xb8) + 0x38) = (int)uVar4;
        }
        uVar4 = uVar4 + 1;
        if ((long)*(int *)(lVar2 + 0x18) <= (long)uVar4) break;
        lVar11 = lVar11 + 8;
        lVar12 = _Localization_TypeInfo_12d50b8;
      }
    }
    plVar5 = (long *)0x0;
  }
  else {
    if ((param_2 & 1) == 0) {
      if (((*(byte *)(lVar12 + 0x133) >> 2 & 1) != 0) && (*(int *)(lVar12 + 0xe0) == 0)) {
        native_sub_4327ec(lVar12);
        lVar11 = *(long *)(_Localization_TypeInfo_12d50b8 + 0xb8);
        lVar12 = _Localization_TypeInfo_12d50b8;
      }
      if (*(char *)(lVar11 + 0x48) == '\0') goto LAB_007f9ac4;
    }
    if (((*(byte *)(lVar12 + 0x133) >> 2 & 1) != 0) && (*(int *)(lVar12 + 0xe0) == 0)) {
      native_sub_4327ec(lVar12);
      lVar12 = _Localization_TypeInfo_12d50b8;
    }
    lVar11 = *(long *)(*(long *)(lVar12 + 0xb8) + 0x18);
    if (lVar11 == 0) goto LAB_007f9ac4;
    if (((*(byte *)(lVar12 + 0x133) >> 2 & 1) != 0) && (*(int *)(lVar12 + 0xe0) == 0)) {
      native_sub_4327ec(lVar12);
      lVar11 = *(long *)(*(long *)(_Localization_TypeInfo_12d50b8 + 0xb8) + 0x18);
      lVar12 = _Localization_TypeInfo_12d50b8;
      if (lVar11 == 0) goto LAB_007f9f98;
    }
    if (*(long *)(lVar11 + 0x18) == 0) goto LAB_007f9ac4;
    plVar5 = (long *)native_sub_432750(_string___TypeInfo_12d3398,*(undefined4 *)(lVar2 + 0x18));
    if (0 < *(int *)(lVar2 + 0x18)) {
      lVar12 = 4;
      plVar8 = plVar5 + 4;
      do {
        lVar11 = *(long *)(lVar2 + 0x10);
        if (lVar11 == 0) goto LAB_007f9f98;
        if ((ulong)*(uint *)(lVar11 + 0x18) <= lVar12 - 4U) goto LAB_007f9f9c;
        if (plVar5 == (long *)0x0) goto LAB_007f9f98;
        lVar11 = *(long *)(lVar11 + lVar12 * 8);
        if ((lVar11 != 0) &&
           (lVar6 = native_sub_4327f8(lVar11,*(undefined8 *)(*plVar5 + 0x40)), lVar6 == 0))
        goto LAB_007f9fa8;
        if ((ulong)*(uint *)(plVar5 + 3) <= lVar12 - 4U) goto LAB_007f9f9c;
        *plVar8 = lVar11;
        native_sub_4326e0(plVar8,lVar11);
        lVar11 = lVar12 + -3;
        lVar12 = lVar12 + 1;
        plVar8 = plVar8 + 1;
      } while (lVar11 < *(int *)(lVar2 + 0x18));
      if (0 < *(int *)(lVar2 + 0x18)) {
        iVar13 = 0;
        uVar4 = 0;
        do {
          lVar12 = *(long *)(lVar2 + 0x10);
          if (lVar12 == 0) goto LAB_007f9f98;
          if (*(uint *)(lVar12 + 0x18) <= uVar4) goto LAB_007f9f9c;
          uVar15 = *(undefined8 *)(lVar12 + uVar4 * 8 + 0x20);
          if (((*(byte *)(_Localization_TypeInfo_12d50b8 + 0x133) >> 2 & 1) != 0) &&
             (*(int *)(_Localization_TypeInfo_12d50b8 + 0xe0) == 0)) {
            native_sub_4327ec();
          }
          uVar7 = native_Localization__HasLanguage_7f9fb8(uVar15);
          if ((uVar7 & 1) == 0) {
            if (((*(byte *)(_Localization_TypeInfo_12d50b8 + 0x133) >> 2 & 1) != 0) &&
               (*(int *)(_Localization_TypeInfo_12d50b8 + 0xe0) == 0)) {
              native_sub_4327ec();
            }
            plVar8 = (long *)(*(long *)(_Localization_TypeInfo_12d50b8 + 0xb8) + 0x18);
            lVar12 = *plVar8;
            if (lVar12 == 0) goto LAB_007f9f98;
            uVar14 = (uint)*(undefined8 *)(lVar12 + 0x18);
            native_System_Array__Resize_Camera__833688
                      (plVar8,uVar14 + 1,_Method_System_Array_Resize_string____12e1878);
            lVar12 = *(long *)(lVar2 + 0x10);
            if (lVar12 == 0) goto LAB_007f9f98;
            if (*(uint *)(lVar12 + 0x18) <= uVar4) goto LAB_007f9f9c;
            plVar8 = *(long **)(*(long *)(_Localization_TypeInfo_12d50b8 + 0xb8) + 0x18);
            if (plVar8 == (long *)0x0) goto LAB_007f9f98;
            lVar12 = *(long *)(lVar12 + uVar4 * 8 + 0x20);
            if ((lVar12 != 0) &&
               (lVar11 = native_sub_4327f8(lVar12,*(undefined8 *)(*plVar8 + 0x40)), lVar11 == 0)) {
LAB_007f9fa8:
              uVar15 = native_sub_432830();
                    /* WARNING: Subroutine does not return */
              native_sub_4327dc(uVar15,0);
            }
            if (*(uint *)(plVar8 + 3) <= uVar14) goto LAB_007f9f9c;
            plVar8[(long)(int)uVar14 + 4] = lVar12;
            native_sub_4326e0(plVar8 + (long)(int)uVar14 + 4,lVar12);
            lVar12 = native_sub_432808(
                                      _System_Collections_Generic_Dictionary_string__string____TypeInfo_12d2368
                                      );
            native_System_Collections_Generic_Dictionary_Action__LinkedListNode_Action_____ctor_cda13c
                      (lVar12,
                       _Method_System_Collections_Generic_Dictionary_string__string_____ctor___12d9728
                      );
            lVar11 = *(long *)(*(long *)(_Localization_TypeInfo_12d50b8 + 0xb8) + 0x28);
            if (lVar11 == 0) goto LAB_007f9f98;
            native_System_Collections_Generic_Dictionary_object__object___GetEnumerator_cdabfc
                      (&uStack_c8,lVar11,
                       _Method_System_Collections_Generic_Dictionary_string__string____GetEnumerator___12d9748
                      );
            uStack_70 = uStack_a8;
            uStack_88 = uStack_c0;
            uStack_90 = uStack_c8;
            plStack_78 = plStack_b0;
            uStack_80 = uStack_b8;
            while (uVar7 = native_System_Collections_Generic_Dictionary_Enumerator_object__object___MoveNext_7f4bb4
                                     (&uStack_90,
                                      _Method_System_Collections_Generic_Dictionary_Enumerator_string__string____MoveNext___12dad80
                                     ), uVar15 = uStack_80, (uVar7 & 1) != 0) {
              plStack_98 = plStack_78;
              native_System_Array__Resize_Camera__833688
                        (&plStack_98,uVar14 + 1,_Method_System_Array_Resize_string____12e1878);
              plVar8 = plStack_98;
              if (plStack_98 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                native_sub_432810();
              }
              uVar9 = *(uint *)(plStack_98 + 3);
              if (uVar9 == 0) {
                uVar15 = native_sub_43283c();
                    /* WARNING: Subroutine does not return */
                native_sub_4327dc(uVar15,0);
              }
              lVar11 = plStack_98[4];
              if (lVar11 != 0) {
                lVar6 = native_sub_4327f8(lVar11,*(undefined8 *)(*plStack_98 + 0x40));
                if (lVar6 == 0) {
                  uVar15 = native_sub_432830();
                    /* WARNING: Subroutine does not return */
                  native_sub_4327dc(uVar15,0);
                }
                uVar9 = *(uint *)(plVar8 + 3);
              }
              if (uVar9 <= uVar14) {
                uVar15 = native_sub_43283c();
                    /* WARNING: Subroutine does not return */
                native_sub_4327dc(uVar15,0);
              }
              plVar8 = plVar8 + (long)(int)uVar14 + 4;
              *plVar8 = lVar11;
              native_sub_4326e0(plVar8,lVar11);
              if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
                native_sub_432810();
              }
              native_System_Collections_Generic_Dictionary_Canvas__IndexedSet_Graphic____Add_cda620
                        (lVar12,uVar15,plStack_98,
                         _Method_System_Collections_Generic_Dictionary_string__string____Add___12d9730
                        );
            }
            aiStack_a0[iVar13] = 0x1ec;
            iVar1 = aiStack_a0[1];
            iVar13 = aiStack_a0[1] + 1;
            aiStack_a0[1] = iVar13;
            native_System_Collections_Generic_Dictionary_Enumerator_object__object___Dispose_7f4d1c
                      (&uStack_90,
                       _Method_System_Collections_Generic_Dictionary_Enumerator_string__string____Dispose___12dad78
                      );
            if ((iVar13 != 0) && (aiStack_a0[iVar1] == 0x1ec)) {
              iVar13 = iVar1;
              aiStack_a0[1] = iVar1;
            }
            if (((*(byte *)(_Localization_TypeInfo_12d50b8 + 0x133) >> 2 & 1) != 0) &&
               (*(int *)(_Localization_TypeInfo_12d50b8 + 0xe0) == 0)) {
              native_sub_4327ec();
            }
            plVar8 = (long *)(*(long *)(_Localization_TypeInfo_12d50b8 + 0xb8) + 0x28);
            *plVar8 = lVar12;
            native_sub_4326e0(plVar8,lVar12);
          }
          uVar4 = uVar4 + 1;
        } while ((long)uVar4 < (long)*(int *)(lVar2 + 0x18));
      }
    }
  }
  lVar2 = native_sub_432808(_System_Collections_Generic_Dictionary_string__int__TypeInfo_12d2388);
  native_System_Collections_Generic_Dictionary_Font__int____ctor_cd7054
            (lVar2,_Method_System_Collections_Generic_Dictionary_string__int___ctor___12d97c8);
  uVar4 = 0;
  while( true ) {
    if (((*(byte *)(_Localization_TypeInfo_12d50b8 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_Localization_TypeInfo_12d50b8 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    lVar12 = *(long *)(*(long *)(_Localization_TypeInfo_12d50b8 + 0xb8) + 0x18);
    if (lVar12 == 0) break;
    if ((long)*(int *)(lVar12 + 0x18) <= (long)uVar4) {
      lVar12 = native_ByteReader__ReadCSV_dd3b54(lVar3,0);
      goto joined_r0x007f9d64;
    }
    if (((*(byte *)(_Localization_TypeInfo_12d50b8 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_Localization_TypeInfo_12d50b8 + 0xe0) == 0)) {
      native_sub_4327ec();
      lVar12 = *(long *)(*(long *)(_Localization_TypeInfo_12d50b8 + 0xb8) + 0x18);
      if (lVar12 == 0) break;
    }
    if (*(uint *)(lVar12 + 0x18) <= uVar4) goto LAB_007f9f9c;
    if (lVar2 == 0) break;
    native_System_Collections_Generic_Dictionary_object__int___Add_cd7538
              (lVar2,*(undefined8 *)(lVar12 + uVar4 * 8 + 0x20),uVar4 & 0xffffffff,
               _Method_System_Collections_Generic_Dictionary_string__int__Add___12d97e0);
    uVar4 = uVar4 + 1;
  }
LAB_007f9f98:
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
joined_r0x007f9d64:
  if ((lVar12 == 0) || (*(int *)(lVar12 + 0x18) == 0)) goto LAB_007f9dd0;
  lVar11 = *(long *)(lVar12 + 0x10);
  if (lVar11 == 0) goto LAB_007f9f98;
  if (*(int *)(lVar11 + 0x18) == 0) goto LAB_007f9f9c;
  uVar4 = native_System_String__IsNullOrEmpty_b09430(*(undefined8 *)(lVar11 + 0x20),0);
  if ((uVar4 & 1) == 0) {
    if (((*(byte *)(_Localization_TypeInfo_12d50b8 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_Localization_TypeInfo_12d50b8 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    native_Localization__AddCSV_7fa0b8(lVar12,plVar5,lVar2);
  }
  lVar12 = native_ByteReader__ReadCSV_dd3b54(lVar3,0);
  goto joined_r0x007f9d64;
LAB_007f9dd0:
  if (((*(byte *)(_Localization_TypeInfo_12d50b8 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_Localization_TypeInfo_12d50b8 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  plVar5 = (long *)(_Localization_TypeInfo_12d50b8 + 0xb8);
  lVar3 = *plVar5;
  lVar2 = _Localization_TypeInfo_12d50b8;
  if (*(char *)(lVar3 + 0x48) == '\0') {
    if (((*(byte *)(_Localization_TypeInfo_12d50b8 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_Localization_TypeInfo_12d50b8 + 0xe0) == 0)) {
      native_sub_4327ec();
      plVar5 = (long *)(_Localization_TypeInfo_12d50b8 + 0xb8);
      lVar3 = *plVar5;
    }
    lVar2 = _Localization_TypeInfo_12d50b8;
    if (*(long *)(lVar3 + 8) != 0) {
      if (((*(byte *)(_Localization_TypeInfo_12d50b8 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_Localization_TypeInfo_12d50b8 + 0xe0) == 0)) {
        native_sub_4327ec();
        plVar5 = (long *)(_Localization_TypeInfo_12d50b8 + 0xb8);
        lVar3 = *plVar5;
      }
      *(undefined1 *)(lVar3 + 0x48) = 1;
      plVar5 = (long *)(*plVar5 + 8);
      lVar2 = *plVar5;
      *plVar5 = 0;
      native_sub_4326e0(plVar5,0);
      if (lVar2 == 0) goto LAB_007f9f98;
      native_Localization_OnLocalizeNotification__Invoke_54cb18(lVar2,0);
      plVar5 = (long *)(*(long *)(_Localization_TypeInfo_12d50b8 + 0xb8) + 8);
      *plVar5 = lVar2;
      native_sub_4326e0(plVar5,lVar2);
      lVar2 = _Localization_TypeInfo_12d50b8;
      *(undefined1 *)(*(long *)(_Localization_TypeInfo_12d50b8 + 0xb8) + 0x48) = 0;
    }
  }
  if ((param_2 & 1) == 0) {
    return 1;
  }
  if ((param_3 & 1) == 0) {
    return 1;
  }
  if (((*(byte *)(lVar2 + 0x133) >> 2 & 1) != 0) && (*(int *)(lVar2 + 0xe0) == 0)) {
    native_sub_4327ec();
    lVar2 = _Localization_TypeInfo_12d50b8;
  }
  lVar3 = *(long *)(*(long *)(lVar2 + 0xb8) + 8);
  if (lVar3 != 0) {
    if (((*(byte *)(lVar2 + 0x133) >> 2 & 1) != 0) && (*(int *)(lVar2 + 0xe0) == 0)) {
      native_sub_4327ec();
      lVar3 = *(long *)(*(long *)(_Localization_TypeInfo_12d50b8 + 0xb8) + 8);
      if (lVar3 == 0) goto LAB_007f9f98;
    }
    native_Localization_OnLocalizeNotification__Invoke_54cb18(lVar3,0);
  }
  if (((*(byte *)(_UIRoot_TypeInfo_12d64a8 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UIRoot_TypeInfo_12d64a8 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  native_UIRoot__Broadcast_c2fc74(_StringLiteral_OnLocalize_12f0248,0);
  return 1;
}



/* Localization$$LoadCSV @ 0x7f8abc
 * bool Localization__LoadCSV (System_Byte_array* bytes, bool merge, bool notify, const MethodInfo* method); */

/* WARNING: Removing unreachable block (ram,0x007f9a54) */
/* WARNING: Removing unreachable block (ram,0x007f9aa0) */
/* WARNING: Removing unreachable block (ram,0x007f9aa8) */
/* WARNING: Removing unreachable block (ram,0x007f9ab0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Localization$$LoadCSV
   bool Localization__LoadCSV (System_Byte_array* bytes, bool merge, bool notify, const MethodInfo*
   method); */

undefined4 native_Localization__LoadCSV_7f8abc(long param_1,ulong param_2,uint param_3)

{
  int iVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  long *plVar5;
  long lVar6;
  ulong uVar7;
  long *plVar8;
  uint uVar9;
  undefined8 *puVar10;
  long lVar11;
  long lVar12;
  int iVar13;
  uint uVar14;
  undefined8 uVar15;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  long *plStack_b0;
  undefined8 uStack_a8;
  int aiStack_a0 [2];
  long *plStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  long *plStack_78;
  undefined8 uStack_70;
  
  if ((bRam00000000013403fb & 1) == 0) {
    native_sub_43273c(&Localization_TypeInfo_12d50b8);
    bRam00000000013403fb = 1;
  }
  if (((*(byte *)(_Localization_TypeInfo_12d50b8 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_Localization_TypeInfo_12d50b8 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  if ((bRam00000000013403fd & 1) == 0) {
    native_sub_43273c(&Method_System_Array_Resize_string____12e1878);
    native_sub_43273c(&Method_BetterList_string__RemoveAt___12d8970);
    native_sub_43273c(&ByteReader_TypeInfo_12d3c30);
    native_sub_43273c(&UnityEngine_Debug_TypeInfo_12d4338);
    native_sub_43273c(&Method_System_Collections_Generic_Dictionary_string__int__Add___12d97e0);
    native_sub_43273c(&Method_System_Collections_Generic_Dictionary_string__string____Add___12d9730)
    ;
    native_sub_43273c(&
                      Method_System_Collections_Generic_Dictionary_string__string____Clear___12d9738
                     );
    native_sub_43273c(&
                      Method_System_Collections_Generic_Dictionary_string__string____GetEnumerator___12d9748
                     );
    native_sub_43273c(&
                      Method_System_Collections_Generic_Dictionary_string__string_____ctor___12d9728
                     );
    native_sub_43273c(&Method_System_Collections_Generic_Dictionary_string__int___ctor___12d97c8);
    native_sub_43273c(&System_Collections_Generic_Dictionary_string__string____TypeInfo_12d2368);
    native_sub_43273c(&System_Collections_Generic_Dictionary_string__int__TypeInfo_12d2388);
    native_sub_43273c(&
                      Method_System_Collections_Generic_Dictionary_Enumerator_string__string____Dispose___12dad78
                     );
    native_sub_43273c(&
                      Method_System_Collections_Generic_Dictionary_Enumerator_string__string____MoveNext___12dad80
                     );
    native_sub_43273c(&
                      Method_System_Collections_Generic_Dictionary_Enumerator_string__string____get_Current___12dad88
                     );
    native_sub_43273c(&
                      Method_System_Collections_Generic_KeyValuePair_string__string____get_Key___12dbf10
                     );
    native_sub_43273c(&
                      Method_System_Collections_Generic_KeyValuePair_string__string____get_Value___12dbf18
                     );
    native_sub_43273c(&Localization_TypeInfo_12d50b8);
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    native_sub_43273c(&string___TypeInfo_12d3398);
    native_sub_43273c(&UIRoot_TypeInfo_12d64a8);
    native_sub_43273c(&StringLiteral_Language_12ef510);
    native_sub_43273c(&StringLiteral_Unable_to_parse_the_specified_data_as_a_CSV_file_12f2aa0);
    native_sub_43273c(&StringLiteral_Unable_to_parse__12f2a98);
    native_sub_43273c(&StringLiteral_OnLocalize_12f0248);
    native_sub_43273c(&StringLiteral__as_a_CSV_file_12eadc0);
    bRam00000000013403fd = 1;
  }
  uStack_70 = 0;
  plStack_98 = (long *)0x0;
  uStack_88 = 0;
  uStack_90 = 0;
  plStack_78 = (long *)0x0;
  uStack_80 = 0;
  aiStack_a0[1] = 0;
  if (param_1 == 0) {
    return 0;
  }
  lVar2 = native_sub_432808(_ByteReader_TypeInfo_12d3c30);
  native_ByteReader___ctor_dd35dc(lVar2,param_1,0);
  if (lVar2 == 0) goto LAB_007f9f98;
  lVar3 = native_ByteReader__ReadCSV_dd3b54(lVar2,0);
  if (lVar3 == 0) {
    if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    uVar4 = native_UnityEngine_Object__op_Inequality_8d76fc(0,0,0);
    if ((uVar4 & 1) == 0) {
      if (((*(byte *)(_UnityEngine_Debug_TypeInfo_12d4338 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_UnityEngine_Debug_TypeInfo_12d4338 + 0xe0) == 0)) {
        native_sub_4327ec();
      }
      native_UnityEngine_Debug__LogError_8dc5cc
                (_StringLiteral_Unable_to_parse_the_specified_data_as_a_CSV_file_12f2aa0,0);
      return 0;
    }
    goto LAB_007f9f98;
  }
  if (*(int *)(lVar3 + 0x18) < 2) {
    return 0;
  }
  native_BetterList_object___RemoveAt_ba2984(lVar3,0,_Method_BetterList_string__RemoveAt___12d8970);
  if (((*(byte *)(_Localization_TypeInfo_12d50b8 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_Localization_TypeInfo_12d50b8 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar4 = native_System_String__IsNullOrEmpty_b09430
                    (*(undefined8 *)(*(long *)(_Localization_TypeInfo_12d50b8 + 0xb8) + 0x40),0);
  lVar12 = _Localization_TypeInfo_12d50b8;
  if ((uVar4 & 1) != 0) {
    if (((*(byte *)(_Localization_TypeInfo_12d50b8 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_Localization_TypeInfo_12d50b8 + 0xe0) == 0)) {
      native_sub_4327ec(_Localization_TypeInfo_12d50b8);
    }
    lVar12 = _Localization_TypeInfo_12d50b8;
    *(undefined1 *)(*(long *)(_Localization_TypeInfo_12d50b8 + 0xb8) + 0x10) = 0;
  }
  if (((*(byte *)(lVar12 + 0x133) >> 2 & 1) != 0) && (*(int *)(lVar12 + 0xe0) == 0)) {
    native_sub_4327ec(lVar12);
    lVar12 = _Localization_TypeInfo_12d50b8;
  }
  lVar11 = *(long *)(lVar12 + 0xb8);
  if (*(char *)(lVar11 + 0x10) == '\0') {
LAB_007f9ac4:
    if (((*(byte *)(lVar12 + 0x133) >> 2 & 1) != 0) && (*(int *)(lVar12 + 0xe0) == 0)) {
      native_sub_4327ec(lVar12);
      lVar12 = _Localization_TypeInfo_12d50b8;
    }
    lVar12 = *(long *)(*(long *)(lVar12 + 0xb8) + 0x28);
    if (lVar12 == 0) goto LAB_007f9f98;
    native_System_Collections_Generic_Dictionary_object__object___Clear_cda7fc
              (lVar12,
               _Method_System_Collections_Generic_Dictionary_string__string____Clear___12d9738);
    uVar15 = native_sub_432750(_string___TypeInfo_12d3398,*(undefined4 *)(lVar3 + 0x18));
    puVar10 = (undefined8 *)(*(long *)(_Localization_TypeInfo_12d50b8 + 0xb8) + 0x18);
    *puVar10 = uVar15;
    native_sub_4326e0(puVar10,uVar15);
    lVar12 = _Localization_TypeInfo_12d50b8;
    if (*(char *)(*(long *)(_Localization_TypeInfo_12d50b8 + 0xb8) + 0x10) == '\0') {
      lVar12 = *(long *)(lVar3 + 0x10);
      if (lVar12 == 0) goto LAB_007f9f98;
      if (*(int *)(lVar12 + 0x18) == 0) {
LAB_007f9f9c:
        uVar15 = native_sub_43283c();
                    /* WARNING: Subroutine does not return */
        native_sub_4327dc(uVar15,0);
      }
      uVar15 = native_UnityEngine_PlayerPrefs__GetString_761f44
                         (_StringLiteral_Language_12ef510,*(undefined8 *)(lVar12 + 0x20),0);
      if (((*(byte *)(_Localization_TypeInfo_12d50b8 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_Localization_TypeInfo_12d50b8 + 0xe0) == 0)) {
        native_sub_4327ec(_Localization_TypeInfo_12d50b8);
      }
      puVar10 = (undefined8 *)(*(long *)(_Localization_TypeInfo_12d50b8 + 0xb8) + 0x40);
      *puVar10 = uVar15;
      native_sub_4326e0(puVar10,uVar15);
      lVar12 = _Localization_TypeInfo_12d50b8;
      *(undefined1 *)(*(long *)(_Localization_TypeInfo_12d50b8 + 0xb8) + 0x10) = 1;
    }
    if (0 < *(int *)(lVar3 + 0x18)) {
      uVar4 = 0;
      lVar11 = 0x20;
      while( true ) {
        if (((*(byte *)(lVar12 + 0x133) >> 2 & 1) != 0) && (*(int *)(lVar12 + 0xe0) == 0)) {
          native_sub_4327ec();
          lVar12 = _Localization_TypeInfo_12d50b8;
        }
        lVar6 = *(long *)(lVar3 + 0x10);
        if (lVar6 == 0) goto LAB_007f9f98;
        if (*(uint *)(lVar6 + 0x18) <= uVar4) goto LAB_007f9f9c;
        plVar5 = *(long **)(*(long *)(lVar12 + 0xb8) + 0x18);
        if (plVar5 == (long *)0x0) goto LAB_007f9f98;
        lVar12 = *(long *)(lVar6 + lVar11);
        if ((lVar12 != 0) &&
           (lVar6 = native_sub_4327f8(lVar12,*(undefined8 *)(*plVar5 + 0x40)), lVar6 == 0))
        goto LAB_007f9fa8;
        if (*(uint *)(plVar5 + 3) <= uVar4) goto LAB_007f9f9c;
        *(long *)((long)plVar5 + lVar11) = lVar12;
        native_sub_4326e0((long *)((long)plVar5 + lVar11),lVar12);
        lVar12 = *(long *)(*(long *)(_Localization_TypeInfo_12d50b8 + 0xb8) + 0x18);
        if (lVar12 == 0) goto LAB_007f9f98;
        if (*(uint *)(lVar12 + 0x18) <= uVar4) goto LAB_007f9f9c;
        uVar7 = native_System_String__op_Equality_afc18c
                          (*(undefined8 *)(lVar12 + lVar11),
                           *(undefined8 *)(*(long *)(_Localization_TypeInfo_12d50b8 + 0xb8) + 0x40),
                           0);
        if ((uVar7 & 1) != 0) {
          if (((*(byte *)(_Localization_TypeInfo_12d50b8 + 0x133) >> 2 & 1) != 0) &&
             (*(int *)(_Localization_TypeInfo_12d50b8 + 0xe0) == 0)) {
            native_sub_4327ec();
          }
          *(int *)(*(long *)(_Localization_TypeInfo_12d50b8 + 0xb8) + 0x38) = (int)uVar4;
        }
        uVar4 = uVar4 + 1;
        if ((long)*(int *)(lVar3 + 0x18) <= (long)uVar4) break;
        lVar11 = lVar11 + 8;
        lVar12 = _Localization_TypeInfo_12d50b8;
      }
    }
    plVar5 = (long *)0x0;
  }
  else {
    if ((param_2 & 1) == 0) {
      if (((*(byte *)(lVar12 + 0x133) >> 2 & 1) != 0) && (*(int *)(lVar12 + 0xe0) == 0)) {
        native_sub_4327ec(lVar12);
        lVar11 = *(long *)(_Localization_TypeInfo_12d50b8 + 0xb8);
        lVar12 = _Localization_TypeInfo_12d50b8;
      }
      if (*(char *)(lVar11 + 0x48) == '\0') goto LAB_007f9ac4;
    }
    if (((*(byte *)(lVar12 + 0x133) >> 2 & 1) != 0) && (*(int *)(lVar12 + 0xe0) == 0)) {
      native_sub_4327ec(lVar12);
      lVar12 = _Localization_TypeInfo_12d50b8;
    }
    lVar11 = *(long *)(*(long *)(lVar12 + 0xb8) + 0x18);
    if (lVar11 == 0) goto LAB_007f9ac4;
    if (((*(byte *)(lVar12 + 0x133) >> 2 & 1) != 0) && (*(int *)(lVar12 + 0xe0) == 0)) {
      native_sub_4327ec(lVar12);
      lVar11 = *(long *)(*(long *)(_Localization_TypeInfo_12d50b8 + 0xb8) + 0x18);
      lVar12 = _Localization_TypeInfo_12d50b8;
      if (lVar11 == 0) goto LAB_007f9f98;
    }
    if (*(long *)(lVar11 + 0x18) == 0) goto LAB_007f9ac4;
    plVar5 = (long *)native_sub_432750(_string___TypeInfo_12d3398,*(undefined4 *)(lVar3 + 0x18));
    if (0 < *(int *)(lVar3 + 0x18)) {
      lVar12 = 4;
      plVar8 = plVar5 + 4;
      do {
        lVar11 = *(long *)(lVar3 + 0x10);
        if (lVar11 == 0) goto LAB_007f9f98;
        if ((ulong)*(uint *)(lVar11 + 0x18) <= lVar12 - 4U) goto LAB_007f9f9c;
        if (plVar5 == (long *)0x0) goto LAB_007f9f98;
        lVar11 = *(long *)(lVar11 + lVar12 * 8);
        if ((lVar11 != 0) &&
           (lVar6 = native_sub_4327f8(lVar11,*(undefined8 *)(*plVar5 + 0x40)), lVar6 == 0))
        goto LAB_007f9fa8;
        if ((ulong)*(uint *)(plVar5 + 3) <= lVar12 - 4U) goto LAB_007f9f9c;
        *plVar8 = lVar11;
        native_sub_4326e0(plVar8,lVar11);
        lVar11 = lVar12 + -3;
        lVar12 = lVar12 + 1;
        plVar8 = plVar8 + 1;
      } while (lVar11 < *(int *)(lVar3 + 0x18));
      if (0 < *(int *)(lVar3 + 0x18)) {
        iVar13 = 0;
        uVar4 = 0;
        do {
          lVar12 = *(long *)(lVar3 + 0x10);
          if (lVar12 == 0) goto LAB_007f9f98;
          if (*(uint *)(lVar12 + 0x18) <= uVar4) goto LAB_007f9f9c;
          uVar15 = *(undefined8 *)(lVar12 + uVar4 * 8 + 0x20);
          if (((*(byte *)(_Localization_TypeInfo_12d50b8 + 0x133) >> 2 & 1) != 0) &&
             (*(int *)(_Localization_TypeInfo_12d50b8 + 0xe0) == 0)) {
            native_sub_4327ec();
          }
          uVar7 = native_Localization__HasLanguage_7f9fb8(uVar15);
          if ((uVar7 & 1) == 0) {
            if (((*(byte *)(_Localization_TypeInfo_12d50b8 + 0x133) >> 2 & 1) != 0) &&
               (*(int *)(_Localization_TypeInfo_12d50b8 + 0xe0) == 0)) {
              native_sub_4327ec();
            }
            plVar8 = (long *)(*(long *)(_Localization_TypeInfo_12d50b8 + 0xb8) + 0x18);
            lVar12 = *plVar8;
            if (lVar12 == 0) goto LAB_007f9f98;
            uVar14 = (uint)*(undefined8 *)(lVar12 + 0x18);
            native_System_Array__Resize_Camera__833688
                      (plVar8,uVar14 + 1,_Method_System_Array_Resize_string____12e1878);
            lVar12 = *(long *)(lVar3 + 0x10);
            if (lVar12 == 0) goto LAB_007f9f98;
            if (*(uint *)(lVar12 + 0x18) <= uVar4) goto LAB_007f9f9c;
            plVar8 = *(long **)(*(long *)(_Localization_TypeInfo_12d50b8 + 0xb8) + 0x18);
            if (plVar8 == (long *)0x0) goto LAB_007f9f98;
            lVar12 = *(long *)(lVar12 + uVar4 * 8 + 0x20);
            if ((lVar12 != 0) &&
               (lVar11 = native_sub_4327f8(lVar12,*(undefined8 *)(*plVar8 + 0x40)), lVar11 == 0)) {
LAB_007f9fa8:
              uVar15 = native_sub_432830();
                    /* WARNING: Subroutine does not return */
              native_sub_4327dc(uVar15,0);
            }
            if (*(uint *)(plVar8 + 3) <= uVar14) goto LAB_007f9f9c;
            plVar8[(long)(int)uVar14 + 4] = lVar12;
            native_sub_4326e0(plVar8 + (long)(int)uVar14 + 4,lVar12);
            lVar12 = native_sub_432808(
                                      _System_Collections_Generic_Dictionary_string__string____TypeInfo_12d2368
                                      );
            native_System_Collections_Generic_Dictionary_Action__LinkedListNode_Action_____ctor_cda13c
                      (lVar12,
                       _Method_System_Collections_Generic_Dictionary_string__string_____ctor___12d9728
                      );
            lVar11 = *(long *)(*(long *)(_Localization_TypeInfo_12d50b8 + 0xb8) + 0x28);
            if (lVar11 == 0) goto LAB_007f9f98;
            native_System_Collections_Generic_Dictionary_object__object___GetEnumerator_cdabfc
                      (&uStack_c8,lVar11,
                       _Method_System_Collections_Generic_Dictionary_string__string____GetEnumerator___12d9748
                      );
            uStack_70 = uStack_a8;
            uStack_88 = uStack_c0;
            uStack_90 = uStack_c8;
            plStack_78 = plStack_b0;
            uStack_80 = uStack_b8;
            while (uVar7 = native_System_Collections_Generic_Dictionary_Enumerator_object__object___MoveNext_7f4bb4
                                     (&uStack_90,
                                      _Method_System_Collections_Generic_Dictionary_Enumerator_string__string____MoveNext___12dad80
                                     ), uVar15 = uStack_80, (uVar7 & 1) != 0) {
              plStack_98 = plStack_78;
              native_System_Array__Resize_Camera__833688
                        (&plStack_98,uVar14 + 1,_Method_System_Array_Resize_string____12e1878);
              plVar8 = plStack_98;
              if (plStack_98 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                native_sub_432810();
              }
              uVar9 = *(uint *)(plStack_98 + 3);
              if (uVar9 == 0) {
                uVar15 = native_sub_43283c();
                    /* WARNING: Subroutine does not return */
                native_sub_4327dc(uVar15,0);
              }
              lVar11 = plStack_98[4];
              if (lVar11 != 0) {
                lVar6 = native_sub_4327f8(lVar11,*(undefined8 *)(*plStack_98 + 0x40));
                if (lVar6 == 0) {
                  uVar15 = native_sub_432830();
                    /* WARNING: Subroutine does not return */
                  native_sub_4327dc(uVar15,0);
                }
                uVar9 = *(uint *)(plVar8 + 3);
              }
              if (uVar9 <= uVar14) {
                uVar15 = native_sub_43283c();
                    /* WARNING: Subroutine does not return */
                native_sub_4327dc(uVar15,0);
              }
              plVar8 = plVar8 + (long)(int)uVar14 + 4;
              *plVar8 = lVar11;
              native_sub_4326e0(plVar8,lVar11);
              if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
                native_sub_432810();
              }
              native_System_Collections_Generic_Dictionary_Canvas__IndexedSet_Graphic____Add_cda620
                        (lVar12,uVar15,plStack_98,
                         _Method_System_Collections_Generic_Dictionary_string__string____Add___12d9730
                        );
            }
            aiStack_a0[iVar13] = 0x1ec;
            iVar1 = aiStack_a0[1];
            iVar13 = aiStack_a0[1] + 1;
            aiStack_a0[1] = iVar13;
            native_System_Collections_Generic_Dictionary_Enumerator_object__object___Dispose_7f4d1c
                      (&uStack_90,
                       _Method_System_Collections_Generic_Dictionary_Enumerator_string__string____Dispose___12dad78
                      );
            if ((iVar13 != 0) && (aiStack_a0[iVar1] == 0x1ec)) {
              iVar13 = iVar1;
              aiStack_a0[1] = iVar1;
            }
            if (((*(byte *)(_Localization_TypeInfo_12d50b8 + 0x133) >> 2 & 1) != 0) &&
               (*(int *)(_Localization_TypeInfo_12d50b8 + 0xe0) == 0)) {
              native_sub_4327ec();
            }
            plVar8 = (long *)(*(long *)(_Localization_TypeInfo_12d50b8 + 0xb8) + 0x28);
            *plVar8 = lVar12;
            native_sub_4326e0(plVar8,lVar12);
          }
          uVar4 = uVar4 + 1;
        } while ((long)uVar4 < (long)*(int *)(lVar3 + 0x18));
      }
    }
  }
  lVar3 = native_sub_432808(_System_Collections_Generic_Dictionary_string__int__TypeInfo_12d2388);
  native_System_Collections_Generic_Dictionary_Font__int____ctor_cd7054
            (lVar3,_Method_System_Collections_Generic_Dictionary_string__int___ctor___12d97c8);
  uVar4 = 0;
  while( true ) {
    if (((*(byte *)(_Localization_TypeInfo_12d50b8 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_Localization_TypeInfo_12d50b8 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    lVar12 = *(long *)(*(long *)(_Localization_TypeInfo_12d50b8 + 0xb8) + 0x18);
    if (lVar12 == 0) break;
    if ((long)*(int *)(lVar12 + 0x18) <= (long)uVar4) {
      lVar12 = native_ByteReader__ReadCSV_dd3b54(lVar2,0);
      goto joined_r0x007f9d64;
    }
    if (((*(byte *)(_Localization_TypeInfo_12d50b8 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_Localization_TypeInfo_12d50b8 + 0xe0) == 0)) {
      native_sub_4327ec();
      lVar12 = *(long *)(*(long *)(_Localization_TypeInfo_12d50b8 + 0xb8) + 0x18);
      if (lVar12 == 0) break;
    }
    if (*(uint *)(lVar12 + 0x18) <= uVar4) goto LAB_007f9f9c;
    if (lVar3 == 0) break;
    native_System_Collections_Generic_Dictionary_object__int___Add_cd7538
              (lVar3,*(undefined8 *)(lVar12 + uVar4 * 8 + 0x20),uVar4 & 0xffffffff,
               _Method_System_Collections_Generic_Dictionary_string__int__Add___12d97e0);
    uVar4 = uVar4 + 1;
  }
LAB_007f9f98:
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
joined_r0x007f9d64:
  if ((lVar12 == 0) || (*(int *)(lVar12 + 0x18) == 0)) goto LAB_007f9dd0;
  lVar11 = *(long *)(lVar12 + 0x10);
  if (lVar11 == 0) goto LAB_007f9f98;
  if (*(int *)(lVar11 + 0x18) == 0) goto LAB_007f9f9c;
  uVar4 = native_System_String__IsNullOrEmpty_b09430(*(undefined8 *)(lVar11 + 0x20),0);
  if ((uVar4 & 1) == 0) {
    if (((*(byte *)(_Localization_TypeInfo_12d50b8 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_Localization_TypeInfo_12d50b8 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    native_Localization__AddCSV_7fa0b8(lVar12,plVar5,lVar3);
  }
  lVar12 = native_ByteReader__ReadCSV_dd3b54(lVar2,0);
  goto joined_r0x007f9d64;
LAB_007f9dd0:
  if (((*(byte *)(_Localization_TypeInfo_12d50b8 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_Localization_TypeInfo_12d50b8 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  plVar5 = (long *)(_Localization_TypeInfo_12d50b8 + 0xb8);
  lVar3 = *plVar5;
  lVar2 = _Localization_TypeInfo_12d50b8;
  if (*(char *)(lVar3 + 0x48) == '\0') {
    if (((*(byte *)(_Localization_TypeInfo_12d50b8 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_Localization_TypeInfo_12d50b8 + 0xe0) == 0)) {
      native_sub_4327ec();
      plVar5 = (long *)(_Localization_TypeInfo_12d50b8 + 0xb8);
      lVar3 = *plVar5;
    }
    lVar2 = _Localization_TypeInfo_12d50b8;
    if (*(long *)(lVar3 + 8) != 0) {
      if (((*(byte *)(_Localization_TypeInfo_12d50b8 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_Localization_TypeInfo_12d50b8 + 0xe0) == 0)) {
        native_sub_4327ec();
        plVar5 = (long *)(_Localization_TypeInfo_12d50b8 + 0xb8);
        lVar3 = *plVar5;
      }
      *(undefined1 *)(lVar3 + 0x48) = 1;
      plVar5 = (long *)(*plVar5 + 8);
      lVar2 = *plVar5;
      *plVar5 = 0;
      native_sub_4326e0(plVar5,0);
      if (lVar2 == 0) goto LAB_007f9f98;
      native_Localization_OnLocalizeNotification__Invoke_54cb18(lVar2,0);
      plVar5 = (long *)(*(long *)(_Localization_TypeInfo_12d50b8 + 0xb8) + 8);
      *plVar5 = lVar2;
      native_sub_4326e0(plVar5,lVar2);
      lVar2 = _Localization_TypeInfo_12d50b8;
      *(undefined1 *)(*(long *)(_Localization_TypeInfo_12d50b8 + 0xb8) + 0x48) = 0;
    }
  }
  if ((param_2 & 1) == 0) {
    return 1;
  }
  if ((param_3 & 1) == 0) {
    return 1;
  }
  if (((*(byte *)(lVar2 + 0x133) >> 2 & 1) != 0) && (*(int *)(lVar2 + 0xe0) == 0)) {
    native_sub_4327ec();
    lVar2 = _Localization_TypeInfo_12d50b8;
  }
  lVar3 = *(long *)(*(long *)(lVar2 + 0xb8) + 8);
  if (lVar3 != 0) {
    if (((*(byte *)(lVar2 + 0x133) >> 2 & 1) != 0) && (*(int *)(lVar2 + 0xe0) == 0)) {
      native_sub_4327ec();
      lVar3 = *(long *)(*(long *)(_Localization_TypeInfo_12d50b8 + 0xb8) + 8);
      if (lVar3 == 0) goto LAB_007f9f98;
    }
    native_Localization_OnLocalizeNotification__Invoke_54cb18(lVar3,0);
  }
  if (((*(byte *)(_UIRoot_TypeInfo_12d64a8 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UIRoot_TypeInfo_12d64a8 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  native_UIRoot__Broadcast_c2fc74(_StringLiteral_OnLocalize_12f0248,0);
  return 1;
}



/* Localization$$HasLanguage @ 0x7f9fb8
 * bool Localization__HasLanguage (System_String_o* languageName, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Localization$$HasLanguage
   bool Localization__HasLanguage (System_String_o* languageName, const MethodInfo* method); */

undefined8 native_Localization__HasLanguage_7f9fb8(undefined8 param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  int iVar3;
  long lVar4;
  ulong uVar5;
  
  if ((bRam00000000013403fc & 1) == 0) {
    native_sub_43273c(&Localization_TypeInfo_12d50b8);
    bRam00000000013403fc = 1;
  }
  if (((*(byte *)(_Localization_TypeInfo_12d50b8 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_Localization_TypeInfo_12d50b8 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  lVar4 = *(long *)(*(long *)(_Localization_TypeInfo_12d50b8 + 0xb8) + 0x18);
  if (lVar4 != 0) {
    iVar3 = (int)*(undefined8 *)(lVar4 + 0x18);
    if (0 < iVar3) {
      uVar5 = 0;
      do {
        if (((*(byte *)(_Localization_TypeInfo_12d50b8 + 0x133) >> 2 & 1) != 0) &&
           (*(int *)(_Localization_TypeInfo_12d50b8 + 0xe0) == 0)) {
          native_sub_4327ec();
        }
        lVar4 = *(long *)(*(long *)(_Localization_TypeInfo_12d50b8 + 0xb8) + 0x18);
        if (lVar4 == 0) goto LAB_007fa0a8;
        if (*(uint *)(lVar4 + 0x18) <= uVar5) {
          uVar2 = native_sub_43283c();
                    /* WARNING: Subroutine does not return */
          native_sub_4327dc(uVar2,0);
        }
        uVar1 = native_System_String__op_Equality_afc18c
                          (*(undefined8 *)(lVar4 + uVar5 * 8 + 0x20),param_1,0);
        if ((uVar1 & 1) != 0) {
          return 1;
        }
        uVar5 = uVar5 + 1;
      } while ((long)uVar5 < (long)iVar3);
    }
    return 0;
  }
LAB_007fa0a8:
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* Localization$$LoadCSV @ 0x7f9320
 * bool Localization__LoadCSV (System_Byte_array* bytes, UnityEngine_TextAsset_o* asset, bool merge, bool notify, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Localization$$LoadCSV
   bool Localization__LoadCSV (System_Byte_array* bytes, UnityEngine_TextAsset_o* asset, bool merge,
   bool notify, const MethodInfo* method); */

undefined4 native_Localization__LoadCSV_7f9320(long param_1,long param_2,ulong param_3,uint param_4)

{
  int iVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  long *plVar5;
  long lVar6;
  ulong uVar7;
  long *plVar8;
  uint uVar9;
  undefined8 *puVar10;
  long lVar11;
  long lVar12;
  int iVar13;
  uint uVar14;
  undefined8 uVar15;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  long *plStack_b0;
  undefined8 uStack_a8;
  int aiStack_a0 [2];
  long *plStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  long *plStack_78;
  undefined8 uStack_70;
  
  if ((bRam00000000013403fd & 1) == 0) {
    native_sub_43273c(&Method_System_Array_Resize_string____12e1878);
    native_sub_43273c(&Method_BetterList_string__RemoveAt___12d8970);
    native_sub_43273c(&ByteReader_TypeInfo_12d3c30);
    native_sub_43273c(&UnityEngine_Debug_TypeInfo_12d4338);
    native_sub_43273c(&Method_System_Collections_Generic_Dictionary_string__int__Add___12d97e0);
    native_sub_43273c(&Method_System_Collections_Generic_Dictionary_string__string____Add___12d9730)
    ;
    native_sub_43273c(&
                      Method_System_Collections_Generic_Dictionary_string__string____Clear___12d9738
                     );
    native_sub_43273c(&
                      Method_System_Collections_Generic_Dictionary_string__string____GetEnumerator___12d9748
                     );
    native_sub_43273c(&
                      Method_System_Collections_Generic_Dictionary_string__string_____ctor___12d9728
                     );
    native_sub_43273c(&Method_System_Collections_Generic_Dictionary_string__int___ctor___12d97c8);
    native_sub_43273c(&System_Collections_Generic_Dictionary_string__string____TypeInfo_12d2368);
    native_sub_43273c(&System_Collections_Generic_Dictionary_string__int__TypeInfo_12d2388);
    native_sub_43273c(&
                      Method_System_Collections_Generic_Dictionary_Enumerator_string__string____Dispose___12dad78
                     );
    native_sub_43273c(&
                      Method_System_Collections_Generic_Dictionary_Enumerator_string__string____MoveNext___12dad80
                     );
    native_sub_43273c(&
                      Method_System_Collections_Generic_Dictionary_Enumerator_string__string____get_Current___12dad88
                     );
    native_sub_43273c(&
                      Method_System_Collections_Generic_KeyValuePair_string__string____get_Key___12dbf10
                     );
    native_sub_43273c(&
                      Method_System_Collections_Generic_KeyValuePair_string__string____get_Value___12dbf18
                     );
    native_sub_43273c(&Localization_TypeInfo_12d50b8);
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    native_sub_43273c(&string___TypeInfo_12d3398);
    native_sub_43273c(&UIRoot_TypeInfo_12d64a8);
    native_sub_43273c(&StringLiteral_Language_12ef510);
    native_sub_43273c(&StringLiteral_Unable_to_parse_the_specified_data_as_a_CSV_file_12f2aa0);
    native_sub_43273c(&StringLiteral_Unable_to_parse__12f2a98);
    native_sub_43273c(&StringLiteral_OnLocalize_12f0248);
    native_sub_43273c(&StringLiteral__as_a_CSV_file_12eadc0);
    bRam00000000013403fd = 1;
  }
  uStack_70 = 0;
  plStack_98 = (long *)0x0;
  uStack_88 = 0;
  uStack_90 = 0;
  plStack_78 = (long *)0x0;
  uStack_80 = 0;
  aiStack_a0[1] = 0;
  if (param_1 == 0) {
    return 0;
  }
  lVar2 = native_sub_432808(_ByteReader_TypeInfo_12d3c30);
  native_ByteReader___ctor_dd35dc(lVar2,param_1,0);
  if (lVar2 == 0) goto LAB_007f9f98;
  lVar3 = native_ByteReader__ReadCSV_dd3b54(lVar2,0);
  if (lVar3 == 0) {
    if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    uVar4 = native_UnityEngine_Object__op_Inequality_8d76fc(param_2,0,0);
    if ((uVar4 & 1) == 0) {
      if (((*(byte *)(_UnityEngine_Debug_TypeInfo_12d4338 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_UnityEngine_Debug_TypeInfo_12d4338 + 0xe0) == 0)) {
        native_sub_4327ec();
      }
      native_UnityEngine_Debug__LogError_8dc5cc
                (_StringLiteral_Unable_to_parse_the_specified_data_as_a_CSV_file_12f2aa0,0);
    }
    else {
      if (param_2 == 0) goto LAB_007f9f98;
      uVar15 = native_UnityEngine_Object__get_name_8e8098(param_2,0);
      uVar15 = native_System_String__Concat_afc654
                         (_StringLiteral_Unable_to_parse__12f2a98,uVar15,
                          _StringLiteral__as_a_CSV_file_12eadc0,0);
      if (((*(byte *)(_UnityEngine_Debug_TypeInfo_12d4338 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_UnityEngine_Debug_TypeInfo_12d4338 + 0xe0) == 0)) {
        native_sub_4327ec(_UnityEngine_Debug_TypeInfo_12d4338);
      }
      native_UnityEngine_Debug__LogError_8dc6f8(uVar15,param_2,0);
    }
    return 0;
  }
  if (*(int *)(lVar3 + 0x18) < 2) {
    return 0;
  }
  native_BetterList_object___RemoveAt_ba2984(lVar3,0,_Method_BetterList_string__RemoveAt___12d8970);
  if (((*(byte *)(_Localization_TypeInfo_12d50b8 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_Localization_TypeInfo_12d50b8 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar4 = native_System_String__IsNullOrEmpty_b09430
                    (*(undefined8 *)(*(long *)(_Localization_TypeInfo_12d50b8 + 0xb8) + 0x40),0);
  lVar12 = _Localization_TypeInfo_12d50b8;
  if ((uVar4 & 1) != 0) {
    if (((*(byte *)(_Localization_TypeInfo_12d50b8 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_Localization_TypeInfo_12d50b8 + 0xe0) == 0)) {
      native_sub_4327ec(_Localization_TypeInfo_12d50b8);
    }
    lVar12 = _Localization_TypeInfo_12d50b8;
    *(undefined1 *)(*(long *)(_Localization_TypeInfo_12d50b8 + 0xb8) + 0x10) = 0;
  }
  if (((*(byte *)(lVar12 + 0x133) >> 2 & 1) != 0) && (*(int *)(lVar12 + 0xe0) == 0)) {
    native_sub_4327ec(lVar12);
    lVar12 = _Localization_TypeInfo_12d50b8;
  }
  lVar11 = *(long *)(lVar12 + 0xb8);
  if (*(char *)(lVar11 + 0x10) == '\0') {
LAB_007f9ac4:
    if (((*(byte *)(lVar12 + 0x133) >> 2 & 1) != 0) && (*(int *)(lVar12 + 0xe0) == 0)) {
      native_sub_4327ec(lVar12);
      lVar12 = _Localization_TypeInfo_12d50b8;
    }
    lVar12 = *(long *)(*(long *)(lVar12 + 0xb8) + 0x28);
    if (lVar12 == 0) goto LAB_007f9f98;
    native_System_Collections_Generic_Dictionary_object__object___Clear_cda7fc
              (lVar12,
               _Method_System_Collections_Generic_Dictionary_string__string____Clear___12d9738);
    uVar15 = native_sub_432750(_string___TypeInfo_12d3398,*(undefined4 *)(lVar3 + 0x18));
    puVar10 = (undefined8 *)(*(long *)(_Localization_TypeInfo_12d50b8 + 0xb8) + 0x18);
    *puVar10 = uVar15;
    native_sub_4326e0(puVar10,uVar15);
    lVar12 = _Localization_TypeInfo_12d50b8;
    if (*(char *)(*(long *)(_Localization_TypeInfo_12d50b8 + 0xb8) + 0x10) == '\0') {
      lVar12 = *(long *)(lVar3 + 0x10);
      if (lVar12 == 0) goto LAB_007f9f98;
      if (*(int *)(lVar12 + 0x18) == 0) {
LAB_007f9f9c:
        uVar15 = native_sub_43283c();
                    /* WARNING: Subroutine does not return */
        native_sub_4327dc(uVar15,0);
      }
      uVar15 = native_UnityEngine_PlayerPrefs__GetString_761f44
                         (_StringLiteral_Language_12ef510,*(undefined8 *)(lVar12 + 0x20),0);
      if (((*(byte *)(_Localization_TypeInfo_12d50b8 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_Localization_TypeInfo_12d50b8 + 0xe0) == 0)) {
        native_sub_4327ec(_Localization_TypeInfo_12d50b8);
      }
      puVar10 = (undefined8 *)(*(long *)(_Localization_TypeInfo_12d50b8 + 0xb8) + 0x40);
      *puVar10 = uVar15;
      native_sub_4326e0(puVar10,uVar15);
      lVar12 = _Localization_TypeInfo_12d50b8;
      *(undefined1 *)(*(long *)(_Localization_TypeInfo_12d50b8 + 0xb8) + 0x10) = 1;
    }
    if (0 < *(int *)(lVar3 + 0x18)) {
      uVar4 = 0;
      lVar11 = 0x20;
      while( true ) {
        if (((*(byte *)(lVar12 + 0x133) >> 2 & 1) != 0) && (*(int *)(lVar12 + 0xe0) == 0)) {
          native_sub_4327ec();
          lVar12 = _Localization_TypeInfo_12d50b8;
        }
        lVar6 = *(long *)(lVar3 + 0x10);
        if (lVar6 == 0) goto LAB_007f9f98;
        if (*(uint *)(lVar6 + 0x18) <= uVar4) goto LAB_007f9f9c;
        plVar5 = *(long **)(*(long *)(lVar12 + 0xb8) + 0x18);
        if (plVar5 == (long *)0x0) goto LAB_007f9f98;
        lVar12 = *(long *)(lVar6 + lVar11);
        if ((lVar12 != 0) &&
           (lVar6 = native_sub_4327f8(lVar12,*(undefined8 *)(*plVar5 + 0x40)), lVar6 == 0))
        goto LAB_007f9fa8;
        if (*(uint *)(plVar5 + 3) <= uVar4) goto LAB_007f9f9c;
        *(long *)((long)plVar5 + lVar11) = lVar12;
        native_sub_4326e0((long *)((long)plVar5 + lVar11),lVar12);
        lVar12 = *(long *)(*(long *)(_Localization_TypeInfo_12d50b8 + 0xb8) + 0x18);
        if (lVar12 == 0) goto LAB_007f9f98;
        if (*(uint *)(lVar12 + 0x18) <= uVar4) goto LAB_007f9f9c;
        uVar7 = native_System_String__op_Equality_afc18c
                          (*(undefined8 *)(lVar12 + lVar11),
                           *(undefined8 *)(*(long *)(_Localization_TypeInfo_12d50b8 + 0xb8) + 0x40),
                           0);
        if ((uVar7 & 1) != 0) {
          if (((*(byte *)(_Localization_TypeInfo_12d50b8 + 0x133) >> 2 & 1) != 0) &&
             (*(int *)(_Localization_TypeInfo_12d50b8 + 0xe0) == 0)) {
            native_sub_4327ec();
          }
          *(int *)(*(long *)(_Localization_TypeInfo_12d50b8 + 0xb8) + 0x38) = (int)uVar4;
        }
        uVar4 = uVar4 + 1;
        if ((long)*(int *)(lVar3 + 0x18) <= (long)uVar4) break;
        lVar11 = lVar11 + 8;
        lVar12 = _Localization_TypeInfo_12d50b8;
      }
    }
    plVar5 = (long *)0x0;
  }
  else {
    if ((param_3 & 1) == 0) {
      if (((*(byte *)(lVar12 + 0x133) >> 2 & 1) != 0) && (*(int *)(lVar12 + 0xe0) == 0)) {
        native_sub_4327ec(lVar12);
        lVar11 = *(long *)(_Localization_TypeInfo_12d50b8 + 0xb8);
        lVar12 = _Localization_TypeInfo_12d50b8;
      }
      if (*(char *)(lVar11 + 0x48) == '\0') goto LAB_007f9ac4;
    }
    if (((*(byte *)(lVar12 + 0x133) >> 2 & 1) != 0) && (*(int *)(lVar12 + 0xe0) == 0)) {
      native_sub_4327ec(lVar12);
      lVar12 = _Localization_TypeInfo_12d50b8;
    }
    lVar11 = *(long *)(*(long *)(lVar12 + 0xb8) + 0x18);
    if (lVar11 == 0) goto LAB_007f9ac4;
    if (((*(byte *)(lVar12 + 0x133) >> 2 & 1) != 0) && (*(int *)(lVar12 + 0xe0) == 0)) {
      native_sub_4327ec(lVar12);
      lVar11 = *(long *)(*(long *)(_Localization_TypeInfo_12d50b8 + 0xb8) + 0x18);
      lVar12 = _Localization_TypeInfo_12d50b8;
      if (lVar11 == 0) goto LAB_007f9f98;
    }
    if (*(long *)(lVar11 + 0x18) == 0) goto LAB_007f9ac4;
    plVar5 = (long *)native_sub_432750(_string___TypeInfo_12d3398,*(undefined4 *)(lVar3 + 0x18));
    if (0 < *(int *)(lVar3 + 0x18)) {
      lVar12 = 4;
      plVar8 = plVar5 + 4;
      do {
        lVar11 = *(long *)(lVar3 + 0x10);
        if (lVar11 == 0) goto LAB_007f9f98;
        if ((ulong)*(uint *)(lVar11 + 0x18) <= lVar12 - 4U) goto LAB_007f9f9c;
        if (plVar5 == (long *)0x0) goto LAB_007f9f98;
        lVar11 = *(long *)(lVar11 + lVar12 * 8);
        if ((lVar11 != 0) &&
           (lVar6 = native_sub_4327f8(lVar11,*(undefined8 *)(*plVar5 + 0x40)), lVar6 == 0))
        goto LAB_007f9fa8;
        if ((ulong)*(uint *)(plVar5 + 3) <= lVar12 - 4U) goto LAB_007f9f9c;
        *plVar8 = lVar11;
        native_sub_4326e0(plVar8,lVar11);
        lVar11 = lVar12 + -3;
        lVar12 = lVar12 + 1;
        plVar8 = plVar8 + 1;
      } while (lVar11 < *(int *)(lVar3 + 0x18));
      if (0 < *(int *)(lVar3 + 0x18)) {
        iVar13 = 0;
        uVar4 = 0;
        do {
          lVar12 = *(long *)(lVar3 + 0x10);
          if (lVar12 == 0) goto LAB_007f9f98;
          if (*(uint *)(lVar12 + 0x18) <= uVar4) goto LAB_007f9f9c;
          uVar15 = *(undefined8 *)(lVar12 + uVar4 * 8 + 0x20);
          if (((*(byte *)(_Localization_TypeInfo_12d50b8 + 0x133) >> 2 & 1) != 0) &&
             (*(int *)(_Localization_TypeInfo_12d50b8 + 0xe0) == 0)) {
            native_sub_4327ec();
          }
          uVar7 = native_Localization__HasLanguage_7f9fb8(uVar15);
          if ((uVar7 & 1) == 0) {
            if (((*(byte *)(_Localization_TypeInfo_12d50b8 + 0x133) >> 2 & 1) != 0) &&
               (*(int *)(_Localization_TypeInfo_12d50b8 + 0xe0) == 0)) {
              native_sub_4327ec();
            }
            plVar8 = (long *)(*(long *)(_Localization_TypeInfo_12d50b8 + 0xb8) + 0x18);
            lVar12 = *plVar8;
            if (lVar12 == 0) goto LAB_007f9f98;
            uVar14 = (uint)*(undefined8 *)(lVar12 + 0x18);
            native_System_Array__Resize_Camera__833688
                      (plVar8,uVar14 + 1,_Method_System_Array_Resize_string____12e1878);
            lVar12 = *(long *)(lVar3 + 0x10);
            if (lVar12 == 0) goto LAB_007f9f98;
            if (*(uint *)(lVar12 + 0x18) <= uVar4) goto LAB_007f9f9c;
            plVar8 = *(long **)(*(long *)(_Localization_TypeInfo_12d50b8 + 0xb8) + 0x18);
            if (plVar8 == (long *)0x0) goto LAB_007f9f98;
            lVar12 = *(long *)(lVar12 + uVar4 * 8 + 0x20);
            if ((lVar12 != 0) &&
               (lVar11 = native_sub_4327f8(lVar12,*(undefined8 *)(*plVar8 + 0x40)), lVar11 == 0)) {
LAB_007f9fa8:
              uVar15 = native_sub_432830();
                    /* WARNING: Subroutine does not return */
              native_sub_4327dc(uVar15,0);
            }
            if (*(uint *)(plVar8 + 3) <= uVar14) goto LAB_007f9f9c;
            plVar8[(long)(int)uVar14 + 4] = lVar12;
            native_sub_4326e0(plVar8 + (long)(int)uVar14 + 4,lVar12);
            lVar12 = native_sub_432808(
                                      _System_Collections_Generic_Dictionary_string__string____TypeInfo_12d2368
                                      );
            native_System_Collections_Generic_Dictionary_Action__LinkedListNode_Action_____ctor_cda13c
                      (lVar12,
                       _Method_System_Collections_Generic_Dictionary_string__string_____ctor___12d9728
                      );
            lVar11 = *(long *)(*(long *)(_Localization_TypeInfo_12d50b8 + 0xb8) + 0x28);
            if (lVar11 == 0) goto LAB_007f9f98;
            native_System_Collections_Generic_Dictionary_object__object___GetEnumerator_cdabfc
                      (&uStack_c8,lVar11,
                       _Method_System_Collections_Generic_Dictionary_string__string____GetEnumerator___12d9748
                      );
            uStack_70 = uStack_a8;
            uStack_88 = uStack_c0;
            uStack_90 = uStack_c8;
            plStack_78 = plStack_b0;
            uStack_80 = uStack_b8;
            while (uVar7 = native_System_Collections_Generic_Dictionary_Enumerator_object__object___MoveNext_7f4bb4
                                     (&uStack_90,
                                      _Method_System_Collections_Generic_Dictionary_Enumerator_string__string____MoveNext___12dad80
                                     ), uVar15 = uStack_80, (uVar7 & 1) != 0) {
              plStack_98 = plStack_78;
              native_System_Array__Resize_Camera__833688
                        (&plStack_98,uVar14 + 1,_Method_System_Array_Resize_string____12e1878);
              plVar8 = plStack_98;
              if (plStack_98 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                native_sub_432810();
              }
              uVar9 = *(uint *)(plStack_98 + 3);
              if (uVar9 == 0) {
                uVar15 = native_sub_43283c();
                    /* WARNING: Subroutine does not return */
                native_sub_4327dc(uVar15,0);
              }
              lVar11 = plStack_98[4];
              if (lVar11 != 0) {
                lVar6 = native_sub_4327f8(lVar11,*(undefined8 *)(*plStack_98 + 0x40));
                if (lVar6 == 0) {
                  uVar15 = native_sub_432830();
                    /* WARNING: Subroutine does not return */
                  native_sub_4327dc(uVar15,0);
                }
                uVar9 = *(uint *)(plVar8 + 3);
              }
              if (uVar9 <= uVar14) {
                uVar15 = native_sub_43283c();
                    /* WARNING: Subroutine does not return */
                native_sub_4327dc(uVar15,0);
              }
              plVar8 = plVar8 + (long)(int)uVar14 + 4;
              *plVar8 = lVar11;
              native_sub_4326e0(plVar8,lVar11);
              if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
                native_sub_432810();
              }
              native_System_Collections_Generic_Dictionary_Canvas__IndexedSet_Graphic____Add_cda620
                        (lVar12,uVar15,plStack_98,
                         _Method_System_Collections_Generic_Dictionary_string__string____Add___12d9730
                        );
            }
            aiStack_a0[iVar13] = 0x1ec;
            iVar1 = aiStack_a0[1];
            iVar13 = aiStack_a0[1] + 1;
            aiStack_a0[1] = iVar13;
            native_System_Collections_Generic_Dictionary_Enumerator_object__object___Dispose_7f4d1c
                      (&uStack_90,
                       _Method_System_Collections_Generic_Dictionary_Enumerator_string__string____Dispose___12dad78
                      );
            if ((iVar13 != 0) && (aiStack_a0[iVar1] == 0x1ec)) {
              iVar13 = iVar1;
              aiStack_a0[1] = iVar1;
            }
            if (((*(byte *)(_Localization_TypeInfo_12d50b8 + 0x133) >> 2 & 1) != 0) &&
               (*(int *)(_Localization_TypeInfo_12d50b8 + 0xe0) == 0)) {
              native_sub_4327ec();
            }
            plVar8 = (long *)(*(long *)(_Localization_TypeInfo_12d50b8 + 0xb8) + 0x28);
            *plVar8 = lVar12;
            native_sub_4326e0(plVar8,lVar12);
          }
          uVar4 = uVar4 + 1;
        } while ((long)uVar4 < (long)*(int *)(lVar3 + 0x18));
      }
    }
  }
  lVar3 = native_sub_432808(_System_Collections_Generic_Dictionary_string__int__TypeInfo_12d2388);
  native_System_Collections_Generic_Dictionary_Font__int____ctor_cd7054
            (lVar3,_Method_System_Collections_Generic_Dictionary_string__int___ctor___12d97c8);
  uVar4 = 0;
  while( true ) {
    if (((*(byte *)(_Localization_TypeInfo_12d50b8 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_Localization_TypeInfo_12d50b8 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    lVar12 = *(long *)(*(long *)(_Localization_TypeInfo_12d50b8 + 0xb8) + 0x18);
    if (lVar12 == 0) break;
    if ((long)*(int *)(lVar12 + 0x18) <= (long)uVar4) {
      lVar12 = native_ByteReader__ReadCSV_dd3b54(lVar2,0);
      goto joined_r0x007f9d64;
    }
    if (((*(byte *)(_Localization_TypeInfo_12d50b8 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_Localization_TypeInfo_12d50b8 + 0xe0) == 0)) {
      native_sub_4327ec();
      lVar12 = *(long *)(*(long *)(_Localization_TypeInfo_12d50b8 + 0xb8) + 0x18);
      if (lVar12 == 0) break;
    }
    if (*(uint *)(lVar12 + 0x18) <= uVar4) goto LAB_007f9f9c;
    if (lVar3 == 0) break;
    native_System_Collections_Generic_Dictionary_object__int___Add_cd7538
              (lVar3,*(undefined8 *)(lVar12 + uVar4 * 8 + 0x20),uVar4 & 0xffffffff,
               _Method_System_Collections_Generic_Dictionary_string__int__Add___12d97e0);
    uVar4 = uVar4 + 1;
  }
LAB_007f9f98:
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
joined_r0x007f9d64:
  if ((lVar12 == 0) || (*(int *)(lVar12 + 0x18) == 0)) goto LAB_007f9dd0;
  lVar11 = *(long *)(lVar12 + 0x10);
  if (lVar11 == 0) goto LAB_007f9f98;
  if (*(int *)(lVar11 + 0x18) == 0) goto LAB_007f9f9c;
  uVar4 = native_System_String__IsNullOrEmpty_b09430(*(undefined8 *)(lVar11 + 0x20),0);
  if ((uVar4 & 1) == 0) {
    if (((*(byte *)(_Localization_TypeInfo_12d50b8 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_Localization_TypeInfo_12d50b8 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    native_Localization__AddCSV_7fa0b8(lVar12,plVar5,lVar3);
  }
  lVar12 = native_ByteReader__ReadCSV_dd3b54(lVar2,0);
  goto joined_r0x007f9d64;
LAB_007f9dd0:
  if (((*(byte *)(_Localization_TypeInfo_12d50b8 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_Localization_TypeInfo_12d50b8 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  plVar5 = (long *)(_Localization_TypeInfo_12d50b8 + 0xb8);
  lVar3 = *plVar5;
  lVar2 = _Localization_TypeInfo_12d50b8;
  if (*(char *)(lVar3 + 0x48) == '\0') {
    if (((*(byte *)(_Localization_TypeInfo_12d50b8 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_Localization_TypeInfo_12d50b8 + 0xe0) == 0)) {
      native_sub_4327ec();
      plVar5 = (long *)(_Localization_TypeInfo_12d50b8 + 0xb8);
      lVar3 = *plVar5;
    }
    lVar2 = _Localization_TypeInfo_12d50b8;
    if (*(long *)(lVar3 + 8) != 0) {
      if (((*(byte *)(_Localization_TypeInfo_12d50b8 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_Localization_TypeInfo_12d50b8 + 0xe0) == 0)) {
        native_sub_4327ec();
        plVar5 = (long *)(_Localization_TypeInfo_12d50b8 + 0xb8);
        lVar3 = *plVar5;
      }
      *(undefined1 *)(lVar3 + 0x48) = 1;
      plVar5 = (long *)(*plVar5 + 8);
      lVar2 = *plVar5;
      *plVar5 = 0;
      native_sub_4326e0(plVar5,0);
      if (lVar2 == 0) goto LAB_007f9f98;
      native_Localization_OnLocalizeNotification__Invoke_54cb18(lVar2,0);
      plVar5 = (long *)(*(long *)(_Localization_TypeInfo_12d50b8 + 0xb8) + 8);
      *plVar5 = lVar2;
      native_sub_4326e0(plVar5,lVar2);
      lVar2 = _Localization_TypeInfo_12d50b8;
      *(undefined1 *)(*(long *)(_Localization_TypeInfo_12d50b8 + 0xb8) + 0x48) = 0;
    }
  }
  if ((param_3 & 1) == 0) {
    return 1;
  }
  if ((param_4 & 1) == 0) {
    return 1;
  }
  if (((*(byte *)(lVar2 + 0x133) >> 2 & 1) != 0) && (*(int *)(lVar2 + 0xe0) == 0)) {
    native_sub_4327ec();
    lVar2 = _Localization_TypeInfo_12d50b8;
  }
  lVar3 = *(long *)(*(long *)(lVar2 + 0xb8) + 8);
  if (lVar3 != 0) {
    if (((*(byte *)(lVar2 + 0x133) >> 2 & 1) != 0) && (*(int *)(lVar2 + 0xe0) == 0)) {
      native_sub_4327ec();
      lVar3 = *(long *)(*(long *)(_Localization_TypeInfo_12d50b8 + 0xb8) + 8);
      if (lVar3 == 0) goto LAB_007f9f98;
    }
    native_Localization_OnLocalizeNotification__Invoke_54cb18(lVar3,0);
  }
  if (((*(byte *)(_UIRoot_TypeInfo_12d64a8 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UIRoot_TypeInfo_12d64a8 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  native_UIRoot__Broadcast_c2fc74(_StringLiteral_OnLocalize_12f0248,0);
  return 1;
}



/* Localization$$AddCSV @ 0x7fa0b8
 * void Localization__AddCSV (BetterList_string__o* newValues, System_String_array* newLanguages, System_Collections_Generic_Dictionary_string__int__o* languageIndices, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Localization$$AddCSV
   void Localization__AddCSV (BetterList_string__o* newValues, System_String_array* newLanguages,
   System_Collections_Generic_Dictionary_string__int__o* languageIndices, const MethodInfo* method);
    */

void native_Localization__AddCSV_7fa0b8(long param_1,long param_2,undefined8 param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  long lVar4;
  int *piVar5;
  undefined8 uVar6;
  long *plVar7;
  
  if ((bRam00000000013403fe & 1) == 0) {
    native_sub_43273c(&UnityEngine_Debug_TypeInfo_12d4338);
    native_sub_43273c(&Method_System_Collections_Generic_Dictionary_string__string____Add___12d9730)
    ;
    native_sub_43273c(&
                      Method_System_Collections_Generic_Dictionary_string__string____ContainsKey___12d9740
                     );
    native_sub_43273c(&
                      Method_System_Collections_Generic_Dictionary_string__string____set_Item___12d9760
                     );
    native_sub_43273c(&Localization_TypeInfo_12d50b8);
    native_sub_43273c(&StringLiteral___is_already_present_12eb1b8);
    native_sub_43273c(&StringLiteral_Localization_key___12ef630);
    bRam00000000013403fe = 1;
  }
  if (param_1 != 0) {
    if (1 < *(int *)(param_1 + 0x18)) {
      lVar4 = *(long *)(param_1 + 0x10);
      if (lVar4 == 0) goto LAB_007fa3c8;
      if (*(int *)(lVar4 + 0x18) == 0) {
        uVar6 = native_sub_43283c();
                    /* WARNING: Subroutine does not return */
        native_sub_4327dc(uVar6,0);
      }
      uVar6 = *(undefined8 *)(lVar4 + 0x20);
      uVar1 = native_System_String__IsNullOrEmpty_b09430(uVar6,0);
      if ((uVar1 & 1) == 0) {
        if (((*(byte *)(_Localization_TypeInfo_12d50b8 + 0x133) >> 2 & 1) != 0) &&
           (*(int *)(_Localization_TypeInfo_12d50b8 + 0xe0) == 0)) {
          native_sub_4327ec();
        }
        uVar2 = native_Localization__ExtractStrings_7fa400(param_1,param_2,param_3);
        lVar4 = *(long *)(*(long *)(_Localization_TypeInfo_12d50b8 + 0xb8) + 0x28);
        if (lVar4 == 0) goto LAB_007fa3c8;
        uVar1 = native_System_Collections_Generic_Dictionary_Action__LinkedListNode_Action____ContainsKey_cda894
                          (lVar4,uVar6,
                           _Method_System_Collections_Generic_Dictionary_string__string____ContainsKey___12d9740
                          );
        if ((uVar1 & 1) == 0) {
          if (((*(ushort *)(_Localization_TypeInfo_12d50b8 + 0x132) >> 10 & 1) != 0) &&
             (*(int *)(_Localization_TypeInfo_12d50b8 + 0xe0) == 0)) {
            native_sub_4327ec(_Localization_TypeInfo_12d50b8);
          }
          lVar4 = *(long *)(*(long *)(_Localization_TypeInfo_12d50b8 + 0xb8) + 0x28);
          if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
            native_sub_432810();
          }
          native_System_Collections_Generic_Dictionary_Canvas__IndexedSet_Graphic____Add_cda620
                    (lVar4,uVar6,uVar2,
                     _Method_System_Collections_Generic_Dictionary_string__string____Add___12d9730);
        }
        else {
          if (((*(ushort *)(_Localization_TypeInfo_12d50b8 + 0x132) >> 10 & 1) != 0) &&
             (*(int *)(_Localization_TypeInfo_12d50b8 + 0xe0) == 0)) {
            native_sub_4327ec(_Localization_TypeInfo_12d50b8);
          }
          lVar4 = *(long *)(*(long *)(_Localization_TypeInfo_12d50b8 + 0xb8) + 0x28);
          if (lVar4 == 0) goto LAB_007fa3c8;
          native_System_Collections_Generic_Dictionary_Action__LinkedListNode_Action____set_Item_cda5f8
                    (lVar4,uVar6,uVar2,
                     _Method_System_Collections_Generic_Dictionary_string__string____set_Item___12d9760
                    );
          if (param_2 == 0) {
            uVar6 = native_System_String__Concat_afc654
                              (_StringLiteral_Localization_key___12ef630,uVar6,
                               _StringLiteral___is_already_present_12eb1b8,0);
            if (((*(byte *)(_UnityEngine_Debug_TypeInfo_12d4338 + 0x133) >> 2 & 1) != 0) &&
               (*(int *)(_UnityEngine_Debug_TypeInfo_12d4338 + 0xe0) == 0)) {
              native_sub_4327ec(_UnityEngine_Debug_TypeInfo_12d4338);
            }
            uVar2 = 0;
            if ((bRam0000000001340b57 & 1) == 0) {
              native_sub_43273c(&UnityEngine_Debug_TypeInfo_12d4338,0);
              native_sub_43273c(&UnityEngine_ILogger_TypeInfo_12d4c10);
              bRam0000000001340b57 = 1;
              uVar2 = extraout_x1;
            }
            if (((*(byte *)(_UnityEngine_Debug_TypeInfo_12d4338 + 0x133) >> 2 & 1) != 0) &&
               (*(int *)(_UnityEngine_Debug_TypeInfo_12d4338 + 0xe0) == 0)) {
              native_sub_4327ec();
              uVar2 = extraout_x1_00;
            }
            if (cRam000000000134112a == '\0') {
              native_sub_43273c(&UnityEngine_Debug_TypeInfo_12d4338,uVar2);
              cRam000000000134112a = '\x01';
            }
            if (((*(byte *)(_UnityEngine_Debug_TypeInfo_12d4338 + 0x133) >> 2 & 1) != 0) &&
               (*(int *)(_UnityEngine_Debug_TypeInfo_12d4338 + 0xe0) == 0)) {
              native_sub_4327ec();
            }
            plVar7 = *(long **)(*(long *)(_UnityEngine_Debug_TypeInfo_12d4338 + 0xb8) + 8);
            if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              native_sub_432810();
            }
            lVar4 = *plVar7;
            if ((ulong)*(ushort *)(lVar4 + 0x12a) != 0) {
              uVar1 = 0;
              piVar5 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
              do {
                if (*(long *)(piVar5 + -2) == _UnityEngine_ILogger_TypeInfo_12d4c10) {
                  puVar3 = (undefined8 *)(lVar4 + (long)(*piVar5 + 2) * 0x10 + 0x138);
                  goto code_r0x008dcba4;
                }
                uVar1 = uVar1 + 1;
                piVar5 = piVar5 + 4;
              } while (uVar1 < *(ushort *)(lVar4 + 0x12a));
            }
            puVar3 = (undefined8 *)native_sub_3c9b34(plVar7,_UnityEngine_ILogger_TypeInfo_12d4c10,2)
            ;
code_r0x008dcba4:
                    /* WARNING: Could not recover jumptable at 0x008dcbc0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (*(code *)*puVar3)(plVar7,2,uVar6,puVar3[1]);
            return;
          }
        }
      }
    }
    return;
  }
LAB_007fa3c8:
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* Localization$$ExtractStrings @ 0x7fa400
 * System_String_array* Localization__ExtractStrings (BetterList_string__o* added, System_String_array* newLanguages, System_Collections_Generic_Dictionary_string__int__o* languageIndices, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Localization$$ExtractStrings
   System_String_array* Localization__ExtractStrings (BetterList_string__o* added,
   System_String_array* newLanguages, System_Collections_Generic_Dictionary_string__int__o*
   languageIndices, const MethodInfo* method); */

long * native_Localization__ExtractStrings_7fa400(long param_1,long param_2,long param_3)

{
  ulong uVar1;
  uint uVar2;
  int iVar3;
  ulong uVar4;
  long lVar5;
  long *plVar6;
  long lVar7;
  long lVar8;
  long *plVar9;
  undefined8 uVar10;
  long *plStack_68;
  
  if ((bRam00000000013403ff & 1) == 0) {
    native_sub_43273c(&
                      Method_System_Collections_Generic_Dictionary_string__string____TryGetValue___12d9750
                     );
    native_sub_43273c(&Method_System_Collections_Generic_Dictionary_string__int__get_Item___12d9810)
    ;
    native_sub_43273c(&Localization_TypeInfo_12d50b8);
    native_sub_43273c(&string___TypeInfo_12d3398);
    bRam00000000013403ff = 1;
  }
  plStack_68 = (long *)0x0;
  if (param_2 == 0) {
    if (((*(byte *)(_Localization_TypeInfo_12d50b8 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_Localization_TypeInfo_12d50b8 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    lVar8 = *(long *)(*(long *)(_Localization_TypeInfo_12d50b8 + 0xb8) + 0x18);
    if (((lVar8 != 0) &&
        (plVar6 = (long *)native_sub_432750(_string___TypeInfo_12d3398,*(undefined4 *)(lVar8 + 0x18)
                                           ), param_1 != 0)) && (plVar6 != (long *)0x0)) {
      iVar3 = native_UnityEngine_Mathf__Min_8e4c18
                        (*(undefined4 *)(param_1 + 0x18),(int)plVar6[3] + 1,0);
      if (1 < iVar3) {
        lVar8 = 5;
        plVar9 = plVar6 + 4;
        do {
          lVar5 = *(long *)(param_1 + 0x10);
          if (lVar5 == 0) goto LAB_007fa6f0;
          if ((ulong)*(uint *)(lVar5 + 0x18) <= lVar8 - 4U) goto LAB_007fa6e4;
          lVar5 = *(long *)(lVar5 + lVar8 * 8);
          if ((lVar5 != 0) &&
             (lVar7 = native_sub_4327f8(lVar5,*(undefined8 *)(*plVar6 + 0x40)), lVar7 == 0))
          goto LAB_007fa6f4;
          if ((ulong)*(uint *)(plVar6 + 3) <= lVar8 - 5U) goto LAB_007fa6e4;
          *plVar9 = lVar5;
          native_sub_4326e0(plVar9,lVar5);
          lVar5 = lVar8 + -3;
          lVar8 = lVar8 + 1;
          plVar9 = plVar9 + 1;
        } while (lVar5 < iVar3);
      }
      return plVar6;
    }
  }
  else if ((param_1 != 0) && (lVar8 = *(long *)(param_1 + 0x10), lVar8 != 0)) {
    if (*(int *)(lVar8 + 0x18) != 0) {
      uVar10 = *(undefined8 *)(lVar8 + 0x20);
      if (((*(byte *)(_Localization_TypeInfo_12d50b8 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_Localization_TypeInfo_12d50b8 + 0xe0) == 0)) {
        native_sub_4327ec();
      }
      lVar8 = *(long *)(*(long *)(_Localization_TypeInfo_12d50b8 + 0xb8) + 0x28);
      if (lVar8 == 0) goto LAB_007fa6f0;
      uVar4 = native_System_Collections_Generic_Dictionary_Action__LinkedListNode_Action____TryGetValue_cdc420
                        (lVar8,uVar10,&plStack_68,
                         _Method_System_Collections_Generic_Dictionary_string__string____TryGetValue___12d9750
                        );
      if ((uVar4 & 1) == 0) {
        if (((*(byte *)(_Localization_TypeInfo_12d50b8 + 0x133) >> 2 & 1) != 0) &&
           (*(int *)(_Localization_TypeInfo_12d50b8 + 0xe0) == 0)) {
          native_sub_4327ec();
        }
        lVar8 = *(long *)(*(long *)(_Localization_TypeInfo_12d50b8 + 0xb8) + 0x18);
        if (lVar8 == 0) goto LAB_007fa6f0;
        plStack_68 = (long *)native_sub_432750(_string___TypeInfo_12d3398,
                                               *(undefined4 *)(lVar8 + 0x18));
      }
      iVar3 = (int)*(ulong *)(param_2 + 0x18);
      if (iVar3 < 1) {
        return plStack_68;
      }
      if ((*(ulong *)(param_2 + 0x18) & 0xffffffff) != 0) {
        uVar4 = 0;
        do {
          if (param_3 == 0) goto LAB_007fa6f0;
          uVar2 = native_System_Collections_Generic_Dictionary_object__int___get_Item_cd7474
                            (param_3,*(undefined8 *)(param_2 + 0x20 + uVar4 * 8),
                             _Method_System_Collections_Generic_Dictionary_string__int__get_Item___12d9810
                            );
          plVar6 = plStack_68;
          lVar8 = *(long *)(param_1 + 0x10);
          if (lVar8 == 0) goto LAB_007fa6f0;
          uVar1 = uVar4 + 1;
          if (*(uint *)(lVar8 + 0x18) <= uVar1) break;
          if (plStack_68 == (long *)0x0) goto LAB_007fa6f0;
          lVar8 = *(long *)(lVar8 + uVar4 * 8 + 0x28);
          if ((lVar8 != 0) &&
             (lVar5 = native_sub_4327f8(lVar8,*(undefined8 *)(*plStack_68 + 0x40)), lVar5 == 0)) {
LAB_007fa6f4:
            uVar10 = native_sub_432830();
                    /* WARNING: Subroutine does not return */
            native_sub_4327dc(uVar10,0);
          }
          if (*(uint *)(plVar6 + 3) <= uVar2) break;
          plVar6 = plVar6 + (long)(int)uVar2 + 4;
          *plVar6 = lVar8;
          native_sub_4326e0(plVar6,lVar8);
          if ((long)iVar3 <= (long)uVar1) {
            return plStack_68;
          }
          uVar4 = uVar1;
        } while (uVar1 < *(uint *)(param_2 + 0x18));
      }
    }
LAB_007fa6e4:
    uVar10 = native_sub_43283c();
                    /* WARNING: Subroutine does not return */
    native_sub_4327dc(uVar10,0);
  }
LAB_007fa6f0:
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* Localization$$SelectLanguage @ 0x7f8bf0
 * bool Localization__SelectLanguage (System_String_o* language, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Localization$$SelectLanguage
   bool Localization__SelectLanguage (System_String_o* language, const MethodInfo* method); */

undefined8 native_Localization__SelectLanguage_7f8bf0(undefined8 param_1)

{
  long lVar1;
  undefined8 uVar2;
  ulong uVar3;
  undefined8 *puVar4;
  int iVar5;
  ulong uVar6;
  
  if ((bRam0000000001340400 & 1) == 0) {
    native_sub_43273c(&Method_System_Collections_Generic_Dictionary_string__string__Clear___12d98f0)
    ;
    native_sub_43273c(&
                      Method_System_Collections_Generic_Dictionary_string__string____get_Count___12d9758
                     );
    native_sub_43273c(&Localization_TypeInfo_12d50b8);
    native_sub_43273c(&UIRoot_TypeInfo_12d64a8);
    native_sub_43273c(&StringLiteral_Language_12ef510);
    native_sub_43273c(&StringLiteral_OnLocalize_12f0248);
    bRam0000000001340400 = 1;
  }
  if (((*(byte *)(_Localization_TypeInfo_12d50b8 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_Localization_TypeInfo_12d50b8 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  lVar1 = _Localization_TypeInfo_12d50b8;
  *(undefined4 *)(*(long *)(_Localization_TypeInfo_12d50b8 + 0xb8) + 0x38) = 0xffffffff;
  lVar1 = *(long *)(*(long *)(lVar1 + 0xb8) + 0x28);
  if (lVar1 != 0) {
    uVar2 = native_System_Collections_Generic_Dictionary_Font__HashSet_Text____get_Count_cda3b4
                      (lVar1,
                       _Method_System_Collections_Generic_Dictionary_string__string____get_Count___12d9758
                      );
    if ((int)uVar2 != 0) {
      if (((*(byte *)(_Localization_TypeInfo_12d50b8 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_Localization_TypeInfo_12d50b8 + 0xe0) == 0)) {
        native_sub_4327ec();
      }
      lVar1 = *(long *)(*(long *)(_Localization_TypeInfo_12d50b8 + 0xb8) + 0x18);
      if (lVar1 == 0) goto LAB_007f8e4c;
      iVar5 = (int)*(undefined8 *)(lVar1 + 0x18);
      if (0 < iVar5) {
        uVar6 = 0;
        do {
          if (((*(byte *)(_Localization_TypeInfo_12d50b8 + 0x133) >> 2 & 1) != 0) &&
             (*(int *)(_Localization_TypeInfo_12d50b8 + 0xe0) == 0)) {
            native_sub_4327ec();
          }
          lVar1 = *(long *)(*(long *)(_Localization_TypeInfo_12d50b8 + 0xb8) + 0x18);
          if (lVar1 == 0) goto LAB_007f8e4c;
          if (*(uint *)(lVar1 + 0x18) <= uVar6) {
            uVar2 = native_sub_43283c();
                    /* WARNING: Subroutine does not return */
            native_sub_4327dc(uVar2,0);
          }
          uVar3 = native_System_String__op_Equality_afc18c
                            (*(undefined8 *)(lVar1 + uVar6 * 8 + 0x20),param_1,0);
          if ((uVar3 & 1) != 0) {
            if (((*(byte *)(_Localization_TypeInfo_12d50b8 + 0x133) >> 2 & 1) != 0) &&
               (*(int *)(_Localization_TypeInfo_12d50b8 + 0xe0) == 0)) {
              native_sub_4327ec();
            }
            lVar1 = *(long *)(*(long *)(_Localization_TypeInfo_12d50b8 + 0xb8) + 0x20);
            if (lVar1 == 0) goto LAB_007f8e4c;
            native_System_Collections_Generic_Dictionary_object__object___Clear_cda7fc
                      (lVar1,
                       _Method_System_Collections_Generic_Dictionary_string__string__Clear___12d98f0
                      );
            lVar1 = _Localization_TypeInfo_12d50b8;
            *(int *)(*(long *)(_Localization_TypeInfo_12d50b8 + 0xb8) + 0x38) = (int)uVar6;
            puVar4 = (undefined8 *)(*(long *)(lVar1 + 0xb8) + 0x40);
            *puVar4 = param_1;
            native_sub_4326e0(puVar4,param_1);
            native_UnityEngine_PlayerPrefs__SetString_761ea8
                      (_StringLiteral_Language_12ef510,
                       *(undefined8 *)(*(long *)(_Localization_TypeInfo_12d50b8 + 0xb8) + 0x40),0);
            lVar1 = *(long *)(*(long *)(_Localization_TypeInfo_12d50b8 + 0xb8) + 8);
            if (lVar1 != 0) {
              if (((*(byte *)(_Localization_TypeInfo_12d50b8 + 0x133) >> 2 & 1) != 0) &&
                 (*(int *)(_Localization_TypeInfo_12d50b8 + 0xe0) == 0)) {
                native_sub_4327ec(_Localization_TypeInfo_12d50b8);
                lVar1 = *(long *)(*(long *)(_Localization_TypeInfo_12d50b8 + 0xb8) + 8);
                if (lVar1 == 0) goto LAB_007f8e4c;
              }
              native_Localization_OnLocalizeNotification__Invoke_54cb18(lVar1,0);
            }
            if (((*(byte *)(_UIRoot_TypeInfo_12d64a8 + 0x133) >> 2 & 1) != 0) &&
               (*(int *)(_UIRoot_TypeInfo_12d64a8 + 0xe0) == 0)) {
              native_sub_4327ec();
            }
            native_UIRoot__Broadcast_c2fc74(_StringLiteral_OnLocalize_12f0248,0);
            return 1;
          }
          uVar6 = uVar6 + 1;
        } while ((long)uVar6 < (long)iVar5);
      }
      uVar2 = 0;
    }
    return uVar2;
  }
LAB_007f8e4c:
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* Localization$$Set @ 0x7f8f1c
 * void Localization__Set (System_String_o* languageName, System_Collections_Generic_Dictionary_string__string__o* dictionary, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Localization$$Set
   void Localization__Set (System_String_o* languageName,
   System_Collections_Generic_Dictionary_string__string__o* dictionary, const MethodInfo* method);
    */

void native_Localization__Set_7f8f1c(long param_1,undefined8 param_2)

{
  int iVar1;
  long *plVar2;
  undefined8 *puVar3;
  long lVar4;
  long *plVar5;
  undefined8 uVar6;
  ulong uVar7;
  ulong uVar8;
  
  if ((bRam0000000001340401 & 1) == 0) {
    native_sub_43273c(&Localization_TypeInfo_12d50b8);
    native_sub_43273c(&string___TypeInfo_12d3398);
    native_sub_43273c(&UIRoot_TypeInfo_12d64a8);
    native_sub_43273c(&StringLiteral_Language_12ef510);
    native_sub_43273c(&StringLiteral_OnLocalize_12f0248);
    bRam0000000001340401 = 1;
  }
  if (((*(byte *)(_Localization_TypeInfo_12d50b8 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_Localization_TypeInfo_12d50b8 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  plVar2 = (long *)(*(long *)(_Localization_TypeInfo_12d50b8 + 0xb8) + 0x40);
  *plVar2 = param_1;
  native_sub_4326e0(plVar2,param_1);
  native_UnityEngine_PlayerPrefs__SetString_761ea8
            (_StringLiteral_Language_12ef510,
             *(undefined8 *)(*(long *)(_Localization_TypeInfo_12d50b8 + 0xb8) + 0x40),0);
  puVar3 = (undefined8 *)(*(long *)(_Localization_TypeInfo_12d50b8 + 0xb8) + 0x20);
  *puVar3 = param_2;
  native_sub_4326e0(puVar3,param_2);
  lVar4 = _Localization_TypeInfo_12d50b8;
  *(undefined1 *)(*(long *)(_Localization_TypeInfo_12d50b8 + 0xb8) + 0x10) = 1;
  *(undefined4 *)(*(long *)(lVar4 + 0xb8) + 0x38) = 0xffffffff;
  plVar2 = (long *)native_sub_432750(_string___TypeInfo_12d3398,1);
  if (plVar2 == (long *)0x0) {
LAB_007f90e8:
                    /* WARNING: Subroutine does not return */
    native_sub_432810();
  }
  if ((param_1 != 0) &&
     (lVar4 = native_sub_4327f8(param_1,*(undefined8 *)(*plVar2 + 0x40)), lVar4 == 0)) {
    uVar6 = native_sub_432830();
                    /* WARNING: Subroutine does not return */
    native_sub_4327dc(uVar6,0);
  }
  if ((int)plVar2[3] == 0) {
    uVar6 = native_sub_43283c();
                    /* WARNING: Subroutine does not return */
    native_sub_4327dc(uVar6,0);
  }
  plVar2[4] = param_1;
  native_sub_4326e0(plVar2 + 4,param_1);
  plVar5 = (long *)(*(long *)(_Localization_TypeInfo_12d50b8 + 0xb8) + 0x18);
  *plVar5 = (long)plVar2;
  native_sub_4326e0(plVar5,plVar2);
  lVar4 = *(long *)(*(long *)(_Localization_TypeInfo_12d50b8 + 0xb8) + 8);
  if (lVar4 != 0) {
    if (((*(byte *)(_Localization_TypeInfo_12d50b8 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_Localization_TypeInfo_12d50b8 + 0xe0) == 0)) {
      native_sub_4327ec(_Localization_TypeInfo_12d50b8);
      lVar4 = *(long *)(*(long *)(_Localization_TypeInfo_12d50b8 + 0xb8) + 8);
      if (lVar4 == 0) goto LAB_007f90e8;
    }
    native_Localization_OnLocalizeNotification__Invoke_54cb18(lVar4,0);
  }
  if (((*(byte *)(_UIRoot_TypeInfo_12d64a8 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UIRoot_TypeInfo_12d64a8 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar6 = _StringLiteral_OnLocalize_12f0248;
  if ((bRam0000000001342724 & 1) == 0) {
    native_sub_43273c(&Method_System_Collections_Generic_List_UIRoot__get_Count___12dd398,0);
    native_sub_43273c(&Method_System_Collections_Generic_List_UIRoot__get_Item___12dd3a0);
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    native_sub_43273c(&UIRoot_TypeInfo_12d64a8);
    bRam0000000001342724 = 1;
  }
  if (((*(byte *)(_UIRoot_TypeInfo_12d64a8 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UIRoot_TypeInfo_12d64a8 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  if (**(long **)(_UIRoot_TypeInfo_12d64a8 + 0xb8) == 0) {
LAB_00c2fdc8:
                    /* WARNING: Subroutine does not return */
    native_sub_432810();
  }
  iVar1 = *(int *)(**(long **)(_UIRoot_TypeInfo_12d64a8 + 0xb8) + 0x18);
  if (0 < iVar1) {
    uVar8 = 0;
    do {
      if (((*(byte *)(_UIRoot_TypeInfo_12d64a8 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_UIRoot_TypeInfo_12d64a8 + 0xe0) == 0)) {
        native_sub_4327ec();
      }
      lVar4 = **(long **)(_UIRoot_TypeInfo_12d64a8 + 0xb8);
      if (lVar4 == 0) goto LAB_00c2fdc8;
      if (*(uint *)(lVar4 + 0x18) <= uVar8) {
        native_System_ThrowHelper__ThrowArgumentOutOfRangeException_9fe0f4(0);
      }
      lVar4 = *(long *)(*(long *)(lVar4 + 0x10) + uVar8 * 8 + 0x20);
      if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
        native_sub_4327ec();
      }
      uVar7 = native_UnityEngine_Object__op_Inequality_8d76fc(lVar4,0,0);
      if ((uVar7 & 1) != 0) {
        if (lVar4 == 0) goto LAB_00c2fdc8;
        native_UnityEngine_Component__BroadcastMessage_8dac98(lVar4,uVar6,1,0);
      }
      uVar8 = uVar8 + 1;
    } while ((long)uVar8 < (long)iVar1);
  }
  return;
}



/* Localization$$Set @ 0x7fa700
 * void Localization__Set (System_String_o* key, System_String_o* value, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Localization$$Set
   void Localization__Set (System_String_o* key, System_String_o* value, const MethodInfo* method);
    */

void native_Localization__Set_7fa700(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  ulong uVar2;
  
  if ((bRam0000000001340402 & 1) == 0) {
    native_sub_43273c(&Method_System_Collections_Generic_Dictionary_string__string__Add___12d98e8);
    native_sub_43273c(&
                      Method_System_Collections_Generic_Dictionary_string__string__ContainsKey___12d98f8
                     );
    native_sub_43273c(&
                      Method_System_Collections_Generic_Dictionary_string__string__set_Item___12d9930
                     );
    native_sub_43273c(&Localization_TypeInfo_12d50b8);
    bRam0000000001340402 = 1;
  }
  if (((*(byte *)(_Localization_TypeInfo_12d50b8 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_Localization_TypeInfo_12d50b8 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  lVar1 = *(long *)(*(long *)(_Localization_TypeInfo_12d50b8 + 0xb8) + 0x20);
  if (lVar1 != 0) {
    uVar2 = native_System_Collections_Generic_Dictionary_Action__LinkedListNode_Action____ContainsKey_cda894
                      (lVar1,param_1,
                       _Method_System_Collections_Generic_Dictionary_string__string__ContainsKey___12d98f8
                      );
    if ((uVar2 & 1) == 0) {
      if (((*(ushort *)(_Localization_TypeInfo_12d50b8 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(_Localization_TypeInfo_12d50b8 + 0xe0) == 0)) {
        native_sub_4327ec(_Localization_TypeInfo_12d50b8);
      }
      lVar1 = *(long *)(*(long *)(_Localization_TypeInfo_12d50b8 + 0xb8) + 0x20);
      if (lVar1 != 0) {
        if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00cda638. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*(code *)**(undefined8 **)
                      (*(long *)(*(long *)(
                                          _Method_System_Collections_Generic_Dictionary_string__string__Add___12d98e8
                                          + 0x18) + 0xc0) + 0x48))();
          return;
        }
                    /* WARNING: Subroutine does not return */
        native_sub_432810(0,param_1,param_2);
      }
    }
    else {
      if (((*(ushort *)(_Localization_TypeInfo_12d50b8 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(_Localization_TypeInfo_12d50b8 + 0xe0) == 0)) {
        native_sub_4327ec(_Localization_TypeInfo_12d50b8);
      }
      lVar1 = *(long *)(*(long *)(_Localization_TypeInfo_12d50b8 + 0xb8) + 0x20);
      if (lVar1 != 0) {
        if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00cda610. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*(code *)**(undefined8 **)
                      (*(long *)(*(long *)(
                                          _Method_System_Collections_Generic_Dictionary_string__string__set_Item___12d9930
                                          + 0x18) + 0xc0) + 0x48))();
          return;
        }
                    /* WARNING: Subroutine does not return */
        native_sub_432810(0,param_1,param_2);
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* Localization$$Has @ 0x7fa840
 * bool Localization__Has (System_String_o* key, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Localization$$Has
   bool Localization__Has (System_String_o* key, const MethodInfo* method); */

uint native_Localization__Has_7fa840(undefined8 param_1)

{
  int iVar1;
  ulong uVar2;
  undefined8 uVar3;
  ulong uVar4;
  long lVar5;
  undefined8 *puVar6;
  long lVar7;
  long *plVar8;
  int *piVar9;
  
  if ((bRam0000000001340403 & 1) == 0) {
    native_sub_43273c(&
                      Method_System_Collections_Generic_Dictionary_string__string__ContainsKey___12d98f8
                     );
    native_sub_43273c(&
                      Method_System_Collections_Generic_Dictionary_string__string____ContainsKey___12d9740
                     );
    native_sub_43273c(&Localization_TypeInfo_12d50b8);
    native_sub_43273c(&UICamera_TypeInfo_12d6410);
    native_sub_43273c(&StringLiteral__Mobile_12ead80);
    native_sub_43273c(&StringLiteral_Language_12ef510);
    native_sub_43273c(&StringLiteral__Controller_12ead38);
    native_sub_43273c(&StringLiteral_English_12edb28);
    native_sub_43273c(&StringLiteral_0_12eb8d8);
    bRam0000000001340403 = 1;
  }
  uVar2 = native_System_String__IsNullOrEmpty_b09430(param_1,0);
  if ((uVar2 & 1) != 0) {
    return 0;
  }
  if (((*(byte *)(_Localization_TypeInfo_12d50b8 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_Localization_TypeInfo_12d50b8 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  if (*(char *)(*(long *)(_Localization_TypeInfo_12d50b8 + 0xb8) + 0x10) == '\0') {
    uVar3 = native_UnityEngine_PlayerPrefs__GetString_761f44
                      (_StringLiteral_Language_12ef510,_StringLiteral_English_12edb28,0);
    if (((*(byte *)(_Localization_TypeInfo_12d50b8 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_Localization_TypeInfo_12d50b8 + 0xe0) == 0)) {
      native_sub_4327ec(_Localization_TypeInfo_12d50b8);
    }
    native_Localization__LoadDictionary_7f8264(uVar3,0);
  }
  if (((*(byte *)(_Localization_TypeInfo_12d50b8 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_Localization_TypeInfo_12d50b8 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  if (*(long *)(*(long *)(_Localization_TypeInfo_12d50b8 + 0xb8) + 0x18) == 0) {
    return 0;
  }
  if (((*(byte *)(_Localization_TypeInfo_12d50b8 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_Localization_TypeInfo_12d50b8 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar3 = native_Localization__get_language_7f8058();
  lVar5 = _Localization_TypeInfo_12d50b8;
  if (*(int *)(*(long *)(_Localization_TypeInfo_12d50b8 + 0xb8) + 0x38) == -1) {
    uVar2 = 0;
    while( true ) {
      if (((*(byte *)(_Localization_TypeInfo_12d50b8 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_Localization_TypeInfo_12d50b8 + 0xe0) == 0)) {
        native_sub_4327ec(_Localization_TypeInfo_12d50b8);
      }
      lVar7 = *(long *)(*(long *)(_Localization_TypeInfo_12d50b8 + 0xb8) + 0x18);
      if (lVar7 == 0) goto LAB_007fad94;
      lVar5 = _Localization_TypeInfo_12d50b8;
      if ((long)*(int *)(lVar7 + 0x18) <= (long)uVar2) goto LAB_007faa80;
      if (((*(byte *)(_Localization_TypeInfo_12d50b8 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_Localization_TypeInfo_12d50b8 + 0xe0) == 0)) {
        native_sub_4327ec(_Localization_TypeInfo_12d50b8);
        lVar7 = *(long *)(*(long *)(_Localization_TypeInfo_12d50b8 + 0xb8) + 0x18);
        if (lVar7 == 0) goto LAB_007fad94;
      }
      if (*(uint *)(lVar7 + 0x18) <= uVar2) goto LAB_007fad98;
      uVar4 = native_System_String__op_Equality_afc18c
                        (*(undefined8 *)(lVar7 + uVar2 * 8 + 0x20),uVar3,0);
      if ((uVar4 & 1) != 0) break;
      uVar2 = uVar2 + 1;
    }
    if (((*(byte *)(_Localization_TypeInfo_12d50b8 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_Localization_TypeInfo_12d50b8 + 0xe0) == 0)) {
      native_sub_4327ec(_Localization_TypeInfo_12d50b8);
    }
    lVar5 = _Localization_TypeInfo_12d50b8;
    *(int *)(*(long *)(_Localization_TypeInfo_12d50b8 + 0xb8) + 0x38) = (int)uVar2;
  }
LAB_007faa80:
  if (((*(byte *)(lVar5 + 0x133) >> 2 & 1) != 0) && (*(int *)(lVar5 + 0xe0) == 0)) {
    native_sub_4327ec(lVar5);
    lVar5 = _Localization_TypeInfo_12d50b8;
  }
  plVar8 = (long *)(lVar5 + 0xb8);
  piVar9 = (int *)(*plVar8 + 0x38);
  if (*piVar9 == -1) {
    if (((*(byte *)(lVar5 + 0x133) >> 2 & 1) != 0) && (*(int *)(lVar5 + 0xe0) == 0)) {
      native_sub_4327ec(lVar5);
      plVar8 = (long *)(_Localization_TypeInfo_12d50b8 + 0xb8);
      piVar9 = (int *)(*plVar8 + 0x38);
    }
    *piVar9 = 0;
    lVar5 = *(long *)(*plVar8 + 0x18);
    if (lVar5 == 0) goto LAB_007fad94;
    if (*(int *)(lVar5 + 0x18) == 0) {
LAB_007fad98:
      uVar3 = native_sub_43283c();
                    /* WARNING: Subroutine does not return */
      native_sub_4327dc(uVar3,0);
    }
    *(undefined8 *)(*plVar8 + 0x40) = *(undefined8 *)(lVar5 + 0x20);
    native_sub_4326e0();
  }
  if (((*(byte *)(_UICamera_TypeInfo_12d6410 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  iVar1 = native_UICamera__get_currentScheme_c92518(0);
  if (iVar1 == 2) {
    puVar6 = (undefined8 *)&StringLiteral__Controller_12ead38;
LAB_007fab44:
    uVar3 = native_System_String__Concat_afbd68(param_1,*puVar6,0);
    if (((*(byte *)(_Localization_TypeInfo_12d50b8 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_Localization_TypeInfo_12d50b8 + 0xe0) == 0)) {
      native_sub_4327ec(_Localization_TypeInfo_12d50b8);
    }
    lVar5 = *(long *)(*(long *)(_Localization_TypeInfo_12d50b8 + 0xb8) + 0x30);
    if (lVar5 == 0) goto LAB_007fad94;
    uVar2 = native_System_Collections_Generic_Dictionary_Action__LinkedListNode_Action____ContainsKey_cda894
                      (lVar5,uVar3,
                       _Method_System_Collections_Generic_Dictionary_string__string__ContainsKey___12d98f8
                      );
    if ((uVar2 & 1) != 0) {
      return 1;
    }
    if (((*(byte *)(_Localization_TypeInfo_12d50b8 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_Localization_TypeInfo_12d50b8 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    lVar5 = *(long *)(_Localization_TypeInfo_12d50b8 + 0xb8);
    if (*(int *)(lVar5 + 0x38) != -1) {
      if (((*(byte *)(_Localization_TypeInfo_12d50b8 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_Localization_TypeInfo_12d50b8 + 0xe0) == 0)) {
        native_sub_4327ec();
        lVar5 = *(long *)(_Localization_TypeInfo_12d50b8 + 0xb8);
      }
      if (*(long *)(lVar5 + 0x28) == 0) goto LAB_007fad94;
      uVar2 = native_System_Collections_Generic_Dictionary_Action__LinkedListNode_Action____ContainsKey_cda894
                        (*(long *)(lVar5 + 0x28),uVar3,
                         _Method_System_Collections_Generic_Dictionary_string__string____ContainsKey___12d9740
                        );
      if ((uVar2 & 1) != 0) {
        return 1;
      }
    }
    if (((*(byte *)(_Localization_TypeInfo_12d50b8 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_Localization_TypeInfo_12d50b8 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    lVar5 = *(long *)(*(long *)(_Localization_TypeInfo_12d50b8 + 0xb8) + 0x20);
    if (lVar5 == 0) goto LAB_007fad94;
    uVar2 = native_System_Collections_Generic_Dictionary_Action__LinkedListNode_Action____ContainsKey_cda894
                      (lVar5,uVar3,
                       _Method_System_Collections_Generic_Dictionary_string__string__ContainsKey___12d98f8
                      );
    if ((uVar2 & 1) != 0) {
      return 1;
    }
  }
  else if (iVar1 == 1) {
    puVar6 = (undefined8 *)&StringLiteral__Mobile_12ead80;
    goto LAB_007fab44;
  }
  if (((*(byte *)(_Localization_TypeInfo_12d50b8 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_Localization_TypeInfo_12d50b8 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  lVar5 = *(long *)(*(long *)(_Localization_TypeInfo_12d50b8 + 0xb8) + 0x30);
  if (lVar5 == 0) goto LAB_007fad94;
  uVar2 = native_System_Collections_Generic_Dictionary_Action__LinkedListNode_Action____ContainsKey_cda894
                    (lVar5,param_1,
                     _Method_System_Collections_Generic_Dictionary_string__string__ContainsKey___12d98f8
                    );
  if ((uVar2 & 1) != 0) {
    return 1;
  }
  if (((*(byte *)(_Localization_TypeInfo_12d50b8 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_Localization_TypeInfo_12d50b8 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  lVar5 = *(long *)(_Localization_TypeInfo_12d50b8 + 0xb8);
  if (*(int *)(lVar5 + 0x38) != -1) {
    if (((*(byte *)(_Localization_TypeInfo_12d50b8 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_Localization_TypeInfo_12d50b8 + 0xe0) == 0)) {
      native_sub_4327ec();
      lVar5 = *(long *)(_Localization_TypeInfo_12d50b8 + 0xb8);
    }
    if (*(long *)(lVar5 + 0x28) == 0) goto LAB_007fad94;
    uVar2 = native_System_Collections_Generic_Dictionary_Action__LinkedListNode_Action____ContainsKey_cda894
                      (*(long *)(lVar5 + 0x28),param_1,
                       _Method_System_Collections_Generic_Dictionary_string__string____ContainsKey___12d9740
                      );
    if ((uVar2 & 1) != 0) {
      return 1;
    }
    if (((*(byte *)(_Localization_TypeInfo_12d50b8 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_Localization_TypeInfo_12d50b8 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    lVar5 = *(long *)(*(long *)(_Localization_TypeInfo_12d50b8 + 0xb8) + 0x28);
    uVar3 = native_System_String__Concat_afbd68(param_1,_StringLiteral_0_12eb8d8,0);
    if (lVar5 == 0) goto LAB_007fad94;
    uVar2 = native_System_Collections_Generic_Dictionary_Action__LinkedListNode_Action____ContainsKey_cda894
                      (lVar5,uVar3,
                       _Method_System_Collections_Generic_Dictionary_string__string____ContainsKey___12d9740
                      );
    if ((uVar2 & 1) != 0) {
      return 1;
    }
  }
  if (((*(byte *)(_Localization_TypeInfo_12d50b8 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_Localization_TypeInfo_12d50b8 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  lVar5 = *(long *)(*(long *)(_Localization_TypeInfo_12d50b8 + 0xb8) + 0x20);
  if (lVar5 != 0) {
    if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
      native_sub_432810(0,param_1);
    }
    uVar2 = (*(code *)**(undefined8 **)
                        (*(long *)(*(long *)(
                                            _Method_System_Collections_Generic_Dictionary_string__string__ContainsKey___12d98f8
                                            + 0x18) + 0xc0) + 0x40))();
    return (uint)(uVar2 >> 0x1f) & 1 ^ 1;
  }
LAB_007fad94:
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* Localization$$Get @ 0x7fada4
 * System_String_o* Localization__Get (System_String_o* key, System_String_o* fallback, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Localization$$Get
   System_String_o* Localization__Get (System_String_o* key, System_String_o* fallback, const
   MethodInfo* method); */

undefined8 native_Localization__Get_7fada4(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  undefined4 uVar2;
  ulong uVar3;
  undefined8 uVar4;
  ulong uVar5;
  long lVar6;
  undefined8 *puVar7;
  uint uVar8;
  long lVar9;
  long *plVar10;
  uint uVar11;
  int *piVar12;
  undefined8 uStack_58;
  long lStack_50;
  undefined8 uStack_48;
  
  if ((bRam0000000001340404 & 1) == 0) {
    native_sub_43273c(&Localization_TypeInfo_12d50b8);
    bRam0000000001340404 = 1;
  }
  if (((*(byte *)(_Localization_TypeInfo_12d50b8 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_Localization_TypeInfo_12d50b8 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar3 = native_Localization__Has_7fa840(param_1);
  if ((uVar3 & 1) == 0) {
    if (((*(ushort *)(_Localization_TypeInfo_12d50b8 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(_Localization_TypeInfo_12d50b8 + 0xe0) == 0)) {
      native_sub_4327ec(_Localization_TypeInfo_12d50b8);
    }
  }
  else {
    param_2 = param_1;
    if (((*(ushort *)(_Localization_TypeInfo_12d50b8 + 0x132) >> 10 & 1) != 0) &&
       (*(int *)(_Localization_TypeInfo_12d50b8 + 0xe0) == 0)) {
      native_sub_4327ec(_Localization_TypeInfo_12d50b8);
    }
  }
  if ((bRam0000000001340405 & 1) == 0) {
    native_sub_43273c(&UnityEngine_Debug_TypeInfo_12d4338,0);
    native_sub_43273c(&
                      Method_System_Collections_Generic_Dictionary_string__string____ContainsKey___12d9740
                     );
    native_sub_43273c(&
                      Method_System_Collections_Generic_Dictionary_string__string__TryGetValue___12d9910
                     );
    native_sub_43273c(&
                      Method_System_Collections_Generic_Dictionary_string__string____TryGetValue___12d9750
                     );
    native_sub_43273c(&Localization_TypeInfo_12d50b8);
    native_sub_43273c(&UICamera_TypeInfo_12d6410);
    native_sub_43273c(&StringLiteral__Mobile_12ead80);
    native_sub_43273c(&StringLiteral_Language_12ef510);
    native_sub_43273c(&StringLiteral_No_localization_data_present_12efdd0);
    native_sub_43273c(&StringLiteral__Controller_12ead38);
    native_sub_43273c(&StringLiteral_Language_not_found___12ef518);
    native_sub_43273c(&StringLiteral_English_12edb28);
    native_sub_43273c(&StringLiteral_0_12eb8d8);
    bRam0000000001340405 = 1;
  }
  lStack_50 = 0;
  uStack_48 = 0;
  uStack_58 = 0;
  uVar3 = native_System_String__IsNullOrEmpty_b09430(param_2,0);
  if ((uVar3 & 1) != 0) {
    return 0;
  }
  if (((*(byte *)(_Localization_TypeInfo_12d50b8 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_Localization_TypeInfo_12d50b8 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  if (*(char *)(*(long *)(_Localization_TypeInfo_12d50b8 + 0xb8) + 0x10) == '\0') {
    uVar4 = native_UnityEngine_PlayerPrefs__GetString_761f44
                      (_StringLiteral_Language_12ef510,_StringLiteral_English_12edb28,0);
    if (((*(byte *)(_Localization_TypeInfo_12d50b8 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_Localization_TypeInfo_12d50b8 + 0xe0) == 0)) {
      native_sub_4327ec(_Localization_TypeInfo_12d50b8);
    }
    native_Localization__LoadDictionary_7f8264(uVar4,0);
  }
  if (((*(byte *)(_Localization_TypeInfo_12d50b8 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_Localization_TypeInfo_12d50b8 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  if (*(long *)(*(long *)(_Localization_TypeInfo_12d50b8 + 0xb8) + 0x18) == 0) {
    if (((*(byte *)(_UnityEngine_Debug_TypeInfo_12d4338 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UnityEngine_Debug_TypeInfo_12d4338 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    native_UnityEngine_Debug__LogError_8dc5cc(_StringLiteral_No_localization_data_present_12efdd0,0)
    ;
    return 0;
  }
  if (((*(byte *)(_Localization_TypeInfo_12d50b8 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_Localization_TypeInfo_12d50b8 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar4 = native_Localization__get_language_7f8058();
  lVar6 = _Localization_TypeInfo_12d50b8;
  if (*(int *)(*(long *)(_Localization_TypeInfo_12d50b8 + 0xb8) + 0x38) == -1) {
    uVar3 = 0;
    while( true ) {
      if (((*(byte *)(_Localization_TypeInfo_12d50b8 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_Localization_TypeInfo_12d50b8 + 0xe0) == 0)) {
        native_sub_4327ec(_Localization_TypeInfo_12d50b8);
      }
      lVar9 = *(long *)(*(long *)(_Localization_TypeInfo_12d50b8 + 0xb8) + 0x18);
      if (lVar9 == 0) goto LAB_007fb6f8;
      lVar6 = _Localization_TypeInfo_12d50b8;
      if ((long)*(int *)(lVar9 + 0x18) <= (long)uVar3) goto LAB_007fb10c;
      if (((*(byte *)(_Localization_TypeInfo_12d50b8 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_Localization_TypeInfo_12d50b8 + 0xe0) == 0)) {
        native_sub_4327ec(_Localization_TypeInfo_12d50b8);
        lVar9 = *(long *)(*(long *)(_Localization_TypeInfo_12d50b8 + 0xb8) + 0x18);
        if (lVar9 == 0) goto LAB_007fb6f8;
      }
      if (*(uint *)(lVar9 + 0x18) <= uVar3) goto LAB_007fb6ec;
      uVar5 = native_System_String__op_Equality_afc18c
                        (*(undefined8 *)(lVar9 + uVar3 * 8 + 0x20),uVar4,0);
      if ((uVar5 & 1) != 0) break;
      uVar3 = uVar3 + 1;
    }
    if (((*(byte *)(_Localization_TypeInfo_12d50b8 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_Localization_TypeInfo_12d50b8 + 0xe0) == 0)) {
      native_sub_4327ec(_Localization_TypeInfo_12d50b8);
    }
    lVar6 = _Localization_TypeInfo_12d50b8;
    *(int *)(*(long *)(_Localization_TypeInfo_12d50b8 + 0xb8) + 0x38) = (int)uVar3;
  }
LAB_007fb10c:
  if (((*(byte *)(lVar6 + 0x133) >> 2 & 1) != 0) && (*(int *)(lVar6 + 0xe0) == 0)) {
    native_sub_4327ec(lVar6);
    lVar6 = _Localization_TypeInfo_12d50b8;
  }
  plVar10 = (long *)(lVar6 + 0xb8);
  piVar12 = (int *)(*plVar10 + 0x38);
  if (*piVar12 == -1) {
    if (((*(byte *)(lVar6 + 0x133) >> 2 & 1) != 0) && (*(int *)(lVar6 + 0xe0) == 0)) {
      native_sub_4327ec(lVar6);
      plVar10 = (long *)(_Localization_TypeInfo_12d50b8 + 0xb8);
      piVar12 = (int *)(*plVar10 + 0x38);
    }
    *piVar12 = 0;
    lVar6 = *(long *)(*plVar10 + 0x18);
    if (lVar6 == 0) goto LAB_007fb6f8;
    if (*(int *)(lVar6 + 0x18) == 0) goto LAB_007fb6ec;
    *(undefined8 *)(*plVar10 + 0x40) = *(undefined8 *)(lVar6 + 0x20);
    native_sub_4326e0();
    uVar4 = native_System_String__Concat_afbd68(_StringLiteral_Language_not_found___12ef518,uVar4,0)
    ;
    if (((*(byte *)(_UnityEngine_Debug_TypeInfo_12d4338 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UnityEngine_Debug_TypeInfo_12d4338 + 0xe0) == 0)) {
      native_sub_4327ec(_UnityEngine_Debug_TypeInfo_12d4338);
    }
    native_UnityEngine_Debug__LogWarning_8dca9c(uVar4,0);
  }
  if (((*(byte *)(_UICamera_TypeInfo_12d6410 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  iVar1 = native_UICamera__get_currentScheme_c92518(0);
  if (iVar1 == 2) {
    puVar7 = (undefined8 *)&StringLiteral__Controller_12ead38;
LAB_007fb21c:
    uVar4 = native_System_String__Concat_afbd68(param_2,*puVar7,0);
    if (((*(byte *)(_Localization_TypeInfo_12d50b8 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_Localization_TypeInfo_12d50b8 + 0xe0) == 0)) {
      native_sub_4327ec(_Localization_TypeInfo_12d50b8);
    }
    lVar6 = *(long *)(*(long *)(_Localization_TypeInfo_12d50b8 + 0xb8) + 0x30);
    if (lVar6 == 0) goto LAB_007fb6f8;
    uVar3 = native_System_Collections_Generic_Dictionary_Action__LinkedListNode_Action____TryGetValue_cdc420
                      (lVar6,uVar4,&uStack_48,
                       _Method_System_Collections_Generic_Dictionary_string__string__TryGetValue___12d9910
                      );
    if ((uVar3 & 1) != 0) {
      return uStack_48;
    }
    if (((*(byte *)(_Localization_TypeInfo_12d50b8 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_Localization_TypeInfo_12d50b8 + 0xe0) == 0)) {
      native_sub_4327ec(_Localization_TypeInfo_12d50b8);
    }
    lVar6 = *(long *)(_Localization_TypeInfo_12d50b8 + 0xb8);
    if (*(int *)(lVar6 + 0x38) != -1) {
      if (((*(byte *)(_Localization_TypeInfo_12d50b8 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_Localization_TypeInfo_12d50b8 + 0xe0) == 0)) {
        native_sub_4327ec(_Localization_TypeInfo_12d50b8);
        lVar6 = *(long *)(_Localization_TypeInfo_12d50b8 + 0xb8);
      }
      if (*(long *)(lVar6 + 0x28) == 0) goto LAB_007fb6f8;
      uVar3 = native_System_Collections_Generic_Dictionary_Action__LinkedListNode_Action____TryGetValue_cdc420
                        (*(long *)(lVar6 + 0x28),uVar4,&lStack_50,
                         _Method_System_Collections_Generic_Dictionary_string__string____TryGetValue___12d9750
                        );
      if ((uVar3 & 1) != 0) {
        if (((*(byte *)(_Localization_TypeInfo_12d50b8 + 0x133) >> 2 & 1) != 0) &&
           (*(int *)(_Localization_TypeInfo_12d50b8 + 0xe0) == 0)) {
          native_sub_4327ec(_Localization_TypeInfo_12d50b8);
        }
        lVar6 = lStack_50;
        if (lStack_50 == 0) goto LAB_007fb6f8;
        uVar11 = *(uint *)(lStack_50 + 0x18);
        uVar8 = *(uint *)(*(long *)(_Localization_TypeInfo_12d50b8 + 0xb8) + 0x38);
        if ((int)uVar8 < (int)uVar11) {
          if (((*(byte *)(_Localization_TypeInfo_12d50b8 + 0x133) >> 2 & 1) != 0) &&
             (*(int *)(_Localization_TypeInfo_12d50b8 + 0xe0) == 0)) {
            native_sub_4327ec(_Localization_TypeInfo_12d50b8);
            uVar11 = *(uint *)(lVar6 + 0x18);
            uVar8 = *(uint *)(*(long *)(_Localization_TypeInfo_12d50b8 + 0xb8) + 0x38);
          }
          if (uVar11 <= uVar8) goto LAB_007fb6ec;
          lStack_50 = lVar6 + (long)(int)uVar8 * 8;
          goto LAB_007fb68c;
        }
      }
    }
    if (((*(byte *)(_Localization_TypeInfo_12d50b8 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_Localization_TypeInfo_12d50b8 + 0xe0) == 0)) {
      native_sub_4327ec(_Localization_TypeInfo_12d50b8);
    }
    lVar6 = *(long *)(*(long *)(_Localization_TypeInfo_12d50b8 + 0xb8) + 0x20);
    if (lVar6 == 0) goto LAB_007fb6f8;
    uVar3 = native_System_Collections_Generic_Dictionary_Action__LinkedListNode_Action____TryGetValue_cdc420
                      (lVar6,uVar4,&uStack_48,
                       _Method_System_Collections_Generic_Dictionary_string__string__TryGetValue___12d9910
                      );
    if ((uVar3 & 1) != 0) {
      return uStack_48;
    }
  }
  else if (iVar1 == 1) {
    puVar7 = (undefined8 *)&StringLiteral__Mobile_12ead80;
    goto LAB_007fb21c;
  }
  if (((*(byte *)(_Localization_TypeInfo_12d50b8 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_Localization_TypeInfo_12d50b8 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  lVar6 = *(long *)(*(long *)(_Localization_TypeInfo_12d50b8 + 0xb8) + 0x30);
  if (lVar6 == 0) goto LAB_007fb6f8;
  uVar3 = native_System_Collections_Generic_Dictionary_Action__LinkedListNode_Action____TryGetValue_cdc420
                    (lVar6,param_2,&uStack_48,
                     _Method_System_Collections_Generic_Dictionary_string__string__TryGetValue___12d9910
                    );
  if ((uVar3 & 1) != 0) {
    return uStack_48;
  }
  if (((*(byte *)(_Localization_TypeInfo_12d50b8 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_Localization_TypeInfo_12d50b8 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  lVar6 = *(long *)(_Localization_TypeInfo_12d50b8 + 0xb8);
  if (*(int *)(lVar6 + 0x38) == -1) {
LAB_007fb6a4:
    if (((*(byte *)(_Localization_TypeInfo_12d50b8 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_Localization_TypeInfo_12d50b8 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    lVar6 = *(long *)(*(long *)(_Localization_TypeInfo_12d50b8 + 0xb8) + 0x20);
    if (lVar6 != 0) {
      uVar3 = native_System_Collections_Generic_Dictionary_Action__LinkedListNode_Action____TryGetValue_cdc420
                        (lVar6,param_2,&uStack_48,
                         _Method_System_Collections_Generic_Dictionary_string__string__TryGetValue___12d9910
                        );
      if ((uVar3 & 1) != 0) {
        return uStack_48;
      }
      return param_2;
    }
  }
  else {
    if (((*(byte *)(_Localization_TypeInfo_12d50b8 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_Localization_TypeInfo_12d50b8 + 0xe0) == 0)) {
      native_sub_4327ec();
      lVar6 = *(long *)(_Localization_TypeInfo_12d50b8 + 0xb8);
    }
    if (*(long *)(lVar6 + 0x28) == 0) goto LAB_007fb6f8;
    uVar3 = native_System_Collections_Generic_Dictionary_Action__LinkedListNode_Action____TryGetValue_cdc420
                      (*(long *)(lVar6 + 0x28),param_2,&lStack_50,
                       _Method_System_Collections_Generic_Dictionary_string__string____TryGetValue___12d9750
                      );
    if ((uVar3 & 1) == 0) {
      if (((*(ushort *)(_Localization_TypeInfo_12d50b8 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(_Localization_TypeInfo_12d50b8 + 0xe0) == 0)) {
        native_sub_4327ec(_Localization_TypeInfo_12d50b8);
      }
      lVar6 = *(long *)(*(long *)(_Localization_TypeInfo_12d50b8 + 0xb8) + 0x28);
      uVar4 = native_System_String__Concat_afbd68(param_2,_StringLiteral_0_12eb8d8,0);
      if (lVar6 == 0) goto LAB_007fb6f8;
      uVar3 = native_System_Collections_Generic_Dictionary_Action__LinkedListNode_Action____ContainsKey_cda894
                        (lVar6,uVar4,
                         _Method_System_Collections_Generic_Dictionary_string__string____ContainsKey___12d9740
                        );
      if ((uVar3 & 1) == 0) goto LAB_007fb6a4;
      iVar1 = 1;
      uStack_58 = CONCAT44(1,(undefined4)uStack_58);
      do {
        if (((*(byte *)(_Localization_TypeInfo_12d50b8 + 0x133) >> 2 & 1) != 0) &&
           (*(int *)(_Localization_TypeInfo_12d50b8 + 0xe0) == 0)) {
          native_sub_4327ec();
        }
        lVar6 = *(long *)(*(long *)(_Localization_TypeInfo_12d50b8 + 0xb8) + 0x28);
        uVar4 = native_System_Int32__ToString_83c60c((long)&uStack_58 + 4,0);
        uVar4 = native_System_String__Concat_afbd68(param_2,uVar4,0);
        if (lVar6 == 0) goto LAB_007fb6f8;
        uVar3 = native_System_Collections_Generic_Dictionary_Action__LinkedListNode_Action____ContainsKey_cda894
                          (lVar6,uVar4,
                           _Method_System_Collections_Generic_Dictionary_string__string____ContainsKey___12d9740
                          );
        if ((uVar3 & 1) == 0) break;
        iVar1 = uStack_58._4_4_ + 1;
        uStack_58 = CONCAT44(iVar1,(undefined4)uStack_58);
      } while (iVar1 < 0x14);
      if (((*(byte *)(_Localization_TypeInfo_12d50b8 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_Localization_TypeInfo_12d50b8 + 0xe0) == 0)) {
        native_sub_4327ec();
      }
      lVar6 = *(long *)(*(long *)(_Localization_TypeInfo_12d50b8 + 0xb8) + 0x28);
      uVar2 = native_UnityEngine_Random__Range_7630a8(0,iVar1,0);
      uStack_58 = CONCAT44(uStack_58._4_4_,uVar2);
      uVar4 = native_System_Int32__ToString_83c60c(&uStack_58,0);
      uVar4 = native_System_String__Concat_afbd68(param_2,uVar4,0);
      if ((lVar6 == 0) ||
         (native_System_Collections_Generic_Dictionary_Action__LinkedListNode_Action____TryGetValue_cdc420
                    (lVar6,uVar4,&lStack_50,
                     _Method_System_Collections_Generic_Dictionary_string__string____TryGetValue___12d9750
                    ), lVar6 = lStack_50, lStack_50 == 0)) goto LAB_007fb6f8;
      uVar8 = *(uint *)(lStack_50 + 0x18);
      uVar11 = *(uint *)(*(long *)(_Localization_TypeInfo_12d50b8 + 0xb8) + 0x38);
      if ((int)uVar8 <= (int)uVar11) goto joined_r0x007fb6e8;
      if (((*(byte *)(_Localization_TypeInfo_12d50b8 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_Localization_TypeInfo_12d50b8 + 0xe0) == 0)) {
        native_sub_4327ec();
        uVar8 = *(uint *)(lVar6 + 0x18);
        uVar11 = *(uint *)(*(long *)(_Localization_TypeInfo_12d50b8 + 0xb8) + 0x38);
      }
      if (uVar8 <= uVar11) goto LAB_007fb6ec;
      lVar6 = lVar6 + (long)(int)uVar11 * 8;
    }
    else {
      if (((*(ushort *)(_Localization_TypeInfo_12d50b8 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(_Localization_TypeInfo_12d50b8 + 0xe0) == 0)) {
        native_sub_4327ec(_Localization_TypeInfo_12d50b8);
      }
      lVar6 = lStack_50;
      if (lStack_50 == 0) goto LAB_007fb6f8;
      uVar8 = *(uint *)(lStack_50 + 0x18);
      uVar11 = *(uint *)(*(long *)(_Localization_TypeInfo_12d50b8 + 0xb8) + 0x38);
      if ((int)uVar8 <= (int)uVar11) {
joined_r0x007fb6e8:
        if (uVar8 != 0) {
          return *(undefined8 *)(lStack_50 + 0x20);
        }
        goto LAB_007fb6ec;
      }
      if (((*(byte *)(_Localization_TypeInfo_12d50b8 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_Localization_TypeInfo_12d50b8 + 0xe0) == 0)) {
        native_sub_4327ec(_Localization_TypeInfo_12d50b8);
        uVar8 = *(uint *)(lVar6 + 0x18);
        uVar11 = *(uint *)(*(long *)(_Localization_TypeInfo_12d50b8 + 0xb8) + 0x38);
      }
      if (uVar8 <= uVar11) goto LAB_007fb6ec;
      lVar6 = lVar6 + (long)(int)uVar11 * 8;
    }
    uVar4 = *(undefined8 *)(lVar6 + 0x20);
    uVar3 = native_System_String__IsNullOrEmpty_b09430(uVar4,0);
    if ((uVar3 & 1) == 0) {
      return uVar4;
    }
    if (lStack_50 != 0) {
      if (*(int *)(lStack_50 + 0x18) != 0) {
LAB_007fb68c:
        return *(undefined8 *)(lStack_50 + 0x20);
      }
LAB_007fb6ec:
      uVar4 = native_sub_43283c();
                    /* WARNING: Subroutine does not return */
      native_sub_4327dc(uVar4,0);
    }
  }
LAB_007fb6f8:
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* Localization$$Get @ 0x7fae58
 * System_String_o* Localization__Get (System_String_o* key, bool warnIfMissing, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Localization$$Get
   System_String_o* Localization__Get (System_String_o* key, bool warnIfMissing, const MethodInfo*
   method); */

undefined8 native_Localization__Get_7fae58(undefined8 param_1)

{
  int iVar1;
  undefined4 uVar2;
  ulong uVar3;
  undefined8 uVar4;
  ulong uVar5;
  long lVar6;
  undefined8 *puVar7;
  uint uVar8;
  long lVar9;
  long *plVar10;
  uint uVar11;
  int *piVar12;
  undefined8 uStack_58;
  long lStack_50;
  undefined8 uStack_48;
  
  if ((bRam0000000001340405 & 1) == 0) {
    native_sub_43273c(&UnityEngine_Debug_TypeInfo_12d4338);
    native_sub_43273c(&
                      Method_System_Collections_Generic_Dictionary_string__string____ContainsKey___12d9740
                     );
    native_sub_43273c(&
                      Method_System_Collections_Generic_Dictionary_string__string__TryGetValue___12d9910
                     );
    native_sub_43273c(&
                      Method_System_Collections_Generic_Dictionary_string__string____TryGetValue___12d9750
                     );
    native_sub_43273c(&Localization_TypeInfo_12d50b8);
    native_sub_43273c(&UICamera_TypeInfo_12d6410);
    native_sub_43273c(&StringLiteral__Mobile_12ead80);
    native_sub_43273c(&StringLiteral_Language_12ef510);
    native_sub_43273c(&StringLiteral_No_localization_data_present_12efdd0);
    native_sub_43273c(&StringLiteral__Controller_12ead38);
    native_sub_43273c(&StringLiteral_Language_not_found___12ef518);
    native_sub_43273c(&StringLiteral_English_12edb28);
    native_sub_43273c(&StringLiteral_0_12eb8d8);
    bRam0000000001340405 = 1;
  }
  lStack_50 = 0;
  uStack_48 = 0;
  uStack_58 = 0;
  uVar3 = native_System_String__IsNullOrEmpty_b09430(param_1,0);
  if ((uVar3 & 1) != 0) {
    return 0;
  }
  if (((*(byte *)(_Localization_TypeInfo_12d50b8 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_Localization_TypeInfo_12d50b8 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  if (*(char *)(*(long *)(_Localization_TypeInfo_12d50b8 + 0xb8) + 0x10) == '\0') {
    uVar4 = native_UnityEngine_PlayerPrefs__GetString_761f44
                      (_StringLiteral_Language_12ef510,_StringLiteral_English_12edb28,0);
    if (((*(byte *)(_Localization_TypeInfo_12d50b8 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_Localization_TypeInfo_12d50b8 + 0xe0) == 0)) {
      native_sub_4327ec(_Localization_TypeInfo_12d50b8);
    }
    native_Localization__LoadDictionary_7f8264(uVar4,0);
  }
  if (((*(byte *)(_Localization_TypeInfo_12d50b8 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_Localization_TypeInfo_12d50b8 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  if (*(long *)(*(long *)(_Localization_TypeInfo_12d50b8 + 0xb8) + 0x18) == 0) {
    if (((*(byte *)(_UnityEngine_Debug_TypeInfo_12d4338 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UnityEngine_Debug_TypeInfo_12d4338 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    native_UnityEngine_Debug__LogError_8dc5cc(_StringLiteral_No_localization_data_present_12efdd0,0)
    ;
    return 0;
  }
  if (((*(byte *)(_Localization_TypeInfo_12d50b8 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_Localization_TypeInfo_12d50b8 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar4 = native_Localization__get_language_7f8058();
  lVar6 = _Localization_TypeInfo_12d50b8;
  if (*(int *)(*(long *)(_Localization_TypeInfo_12d50b8 + 0xb8) + 0x38) == -1) {
    uVar3 = 0;
    while( true ) {
      if (((*(byte *)(_Localization_TypeInfo_12d50b8 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_Localization_TypeInfo_12d50b8 + 0xe0) == 0)) {
        native_sub_4327ec(_Localization_TypeInfo_12d50b8);
      }
      lVar9 = *(long *)(*(long *)(_Localization_TypeInfo_12d50b8 + 0xb8) + 0x18);
      if (lVar9 == 0) goto LAB_007fb6f8;
      lVar6 = _Localization_TypeInfo_12d50b8;
      if ((long)*(int *)(lVar9 + 0x18) <= (long)uVar3) goto LAB_007fb10c;
      if (((*(byte *)(_Localization_TypeInfo_12d50b8 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_Localization_TypeInfo_12d50b8 + 0xe0) == 0)) {
        native_sub_4327ec(_Localization_TypeInfo_12d50b8);
        lVar9 = *(long *)(*(long *)(_Localization_TypeInfo_12d50b8 + 0xb8) + 0x18);
        if (lVar9 == 0) goto LAB_007fb6f8;
      }
      if (*(uint *)(lVar9 + 0x18) <= uVar3) goto LAB_007fb6ec;
      uVar5 = native_System_String__op_Equality_afc18c
                        (*(undefined8 *)(lVar9 + uVar3 * 8 + 0x20),uVar4,0);
      if ((uVar5 & 1) != 0) break;
      uVar3 = uVar3 + 1;
    }
    if (((*(byte *)(_Localization_TypeInfo_12d50b8 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_Localization_TypeInfo_12d50b8 + 0xe0) == 0)) {
      native_sub_4327ec(_Localization_TypeInfo_12d50b8);
    }
    lVar6 = _Localization_TypeInfo_12d50b8;
    *(int *)(*(long *)(_Localization_TypeInfo_12d50b8 + 0xb8) + 0x38) = (int)uVar3;
  }
LAB_007fb10c:
  if (((*(byte *)(lVar6 + 0x133) >> 2 & 1) != 0) && (*(int *)(lVar6 + 0xe0) == 0)) {
    native_sub_4327ec(lVar6);
    lVar6 = _Localization_TypeInfo_12d50b8;
  }
  plVar10 = (long *)(lVar6 + 0xb8);
  piVar12 = (int *)(*plVar10 + 0x38);
  if (*piVar12 == -1) {
    if (((*(byte *)(lVar6 + 0x133) >> 2 & 1) != 0) && (*(int *)(lVar6 + 0xe0) == 0)) {
      native_sub_4327ec(lVar6);
      plVar10 = (long *)(_Localization_TypeInfo_12d50b8 + 0xb8);
      piVar12 = (int *)(*plVar10 + 0x38);
    }
    *piVar12 = 0;
    lVar6 = *(long *)(*plVar10 + 0x18);
    if (lVar6 == 0) goto LAB_007fb6f8;
    if (*(int *)(lVar6 + 0x18) == 0) goto LAB_007fb6ec;
    *(undefined8 *)(*plVar10 + 0x40) = *(undefined8 *)(lVar6 + 0x20);
    native_sub_4326e0();
    uVar4 = native_System_String__Concat_afbd68(_StringLiteral_Language_not_found___12ef518,uVar4,0)
    ;
    if (((*(byte *)(_UnityEngine_Debug_TypeInfo_12d4338 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UnityEngine_Debug_TypeInfo_12d4338 + 0xe0) == 0)) {
      native_sub_4327ec(_UnityEngine_Debug_TypeInfo_12d4338);
    }
    native_UnityEngine_Debug__LogWarning_8dca9c(uVar4,0);
  }
  if (((*(byte *)(_UICamera_TypeInfo_12d6410 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  iVar1 = native_UICamera__get_currentScheme_c92518(0);
  if (iVar1 == 2) {
    puVar7 = (undefined8 *)&StringLiteral__Controller_12ead38;
LAB_007fb21c:
    uVar4 = native_System_String__Concat_afbd68(param_1,*puVar7,0);
    if (((*(byte *)(_Localization_TypeInfo_12d50b8 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_Localization_TypeInfo_12d50b8 + 0xe0) == 0)) {
      native_sub_4327ec(_Localization_TypeInfo_12d50b8);
    }
    lVar6 = *(long *)(*(long *)(_Localization_TypeInfo_12d50b8 + 0xb8) + 0x30);
    if (lVar6 == 0) goto LAB_007fb6f8;
    uVar3 = native_System_Collections_Generic_Dictionary_Action__LinkedListNode_Action____TryGetValue_cdc420
                      (lVar6,uVar4,&uStack_48,
                       _Method_System_Collections_Generic_Dictionary_string__string__TryGetValue___12d9910
                      );
    if ((uVar3 & 1) != 0) {
      return uStack_48;
    }
    if (((*(byte *)(_Localization_TypeInfo_12d50b8 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_Localization_TypeInfo_12d50b8 + 0xe0) == 0)) {
      native_sub_4327ec(_Localization_TypeInfo_12d50b8);
    }
    lVar6 = *(long *)(_Localization_TypeInfo_12d50b8 + 0xb8);
    if (*(int *)(lVar6 + 0x38) != -1) {
      if (((*(byte *)(_Localization_TypeInfo_12d50b8 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_Localization_TypeInfo_12d50b8 + 0xe0) == 0)) {
        native_sub_4327ec(_Localization_TypeInfo_12d50b8);
        lVar6 = *(long *)(_Localization_TypeInfo_12d50b8 + 0xb8);
      }
      if (*(long *)(lVar6 + 0x28) == 0) goto LAB_007fb6f8;
      uVar3 = native_System_Collections_Generic_Dictionary_Action__LinkedListNode_Action____TryGetValue_cdc420
                        (*(long *)(lVar6 + 0x28),uVar4,&lStack_50,
                         _Method_System_Collections_Generic_Dictionary_string__string____TryGetValue___12d9750
                        );
      if ((uVar3 & 1) != 0) {
        if (((*(byte *)(_Localization_TypeInfo_12d50b8 + 0x133) >> 2 & 1) != 0) &&
           (*(int *)(_Localization_TypeInfo_12d50b8 + 0xe0) == 0)) {
          native_sub_4327ec(_Localization_TypeInfo_12d50b8);
        }
        lVar6 = lStack_50;
        if (lStack_50 == 0) goto LAB_007fb6f8;
        uVar11 = *(uint *)(lStack_50 + 0x18);
        uVar8 = *(uint *)(*(long *)(_Localization_TypeInfo_12d50b8 + 0xb8) + 0x38);
        if ((int)uVar8 < (int)uVar11) {
          if (((*(byte *)(_Localization_TypeInfo_12d50b8 + 0x133) >> 2 & 1) != 0) &&
             (*(int *)(_Localization_TypeInfo_12d50b8 + 0xe0) == 0)) {
            native_sub_4327ec(_Localization_TypeInfo_12d50b8);
            uVar11 = *(uint *)(lVar6 + 0x18);
            uVar8 = *(uint *)(*(long *)(_Localization_TypeInfo_12d50b8 + 0xb8) + 0x38);
          }
          if (uVar11 <= uVar8) goto LAB_007fb6ec;
          lStack_50 = lVar6 + (long)(int)uVar8 * 8;
          goto LAB_007fb68c;
        }
      }
    }
    if (((*(byte *)(_Localization_TypeInfo_12d50b8 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_Localization_TypeInfo_12d50b8 + 0xe0) == 0)) {
      native_sub_4327ec(_Localization_TypeInfo_12d50b8);
    }
    lVar6 = *(long *)(*(long *)(_Localization_TypeInfo_12d50b8 + 0xb8) + 0x20);
    if (lVar6 == 0) goto LAB_007fb6f8;
    uVar3 = native_System_Collections_Generic_Dictionary_Action__LinkedListNode_Action____TryGetValue_cdc420
                      (lVar6,uVar4,&uStack_48,
                       _Method_System_Collections_Generic_Dictionary_string__string__TryGetValue___12d9910
                      );
    if ((uVar3 & 1) != 0) {
      return uStack_48;
    }
  }
  else if (iVar1 == 1) {
    puVar7 = (undefined8 *)&StringLiteral__Mobile_12ead80;
    goto LAB_007fb21c;
  }
  if (((*(byte *)(_Localization_TypeInfo_12d50b8 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_Localization_TypeInfo_12d50b8 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  lVar6 = *(long *)(*(long *)(_Localization_TypeInfo_12d50b8 + 0xb8) + 0x30);
  if (lVar6 == 0) goto LAB_007fb6f8;
  uVar3 = native_System_Collections_Generic_Dictionary_Action__LinkedListNode_Action____TryGetValue_cdc420
                    (lVar6,param_1,&uStack_48,
                     _Method_System_Collections_Generic_Dictionary_string__string__TryGetValue___12d9910
                    );
  if ((uVar3 & 1) != 0) {
    return uStack_48;
  }
  if (((*(byte *)(_Localization_TypeInfo_12d50b8 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_Localization_TypeInfo_12d50b8 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  lVar6 = *(long *)(_Localization_TypeInfo_12d50b8 + 0xb8);
  if (*(int *)(lVar6 + 0x38) == -1) {
LAB_007fb6a4:
    if (((*(byte *)(_Localization_TypeInfo_12d50b8 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_Localization_TypeInfo_12d50b8 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    lVar6 = *(long *)(*(long *)(_Localization_TypeInfo_12d50b8 + 0xb8) + 0x20);
    if (lVar6 != 0) {
      uVar3 = native_System_Collections_Generic_Dictionary_Action__LinkedListNode_Action____TryGetValue_cdc420
                        (lVar6,param_1,&uStack_48,
                         _Method_System_Collections_Generic_Dictionary_string__string__TryGetValue___12d9910
                        );
      if ((uVar3 & 1) != 0) {
        return uStack_48;
      }
      return param_1;
    }
  }
  else {
    if (((*(byte *)(_Localization_TypeInfo_12d50b8 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_Localization_TypeInfo_12d50b8 + 0xe0) == 0)) {
      native_sub_4327ec();
      lVar6 = *(long *)(_Localization_TypeInfo_12d50b8 + 0xb8);
    }
    if (*(long *)(lVar6 + 0x28) == 0) goto LAB_007fb6f8;
    uVar3 = native_System_Collections_Generic_Dictionary_Action__LinkedListNode_Action____TryGetValue_cdc420
                      (*(long *)(lVar6 + 0x28),param_1,&lStack_50,
                       _Method_System_Collections_Generic_Dictionary_string__string____TryGetValue___12d9750
                      );
    if ((uVar3 & 1) == 0) {
      if (((*(ushort *)(_Localization_TypeInfo_12d50b8 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(_Localization_TypeInfo_12d50b8 + 0xe0) == 0)) {
        native_sub_4327ec(_Localization_TypeInfo_12d50b8);
      }
      lVar6 = *(long *)(*(long *)(_Localization_TypeInfo_12d50b8 + 0xb8) + 0x28);
      uVar4 = native_System_String__Concat_afbd68(param_1,_StringLiteral_0_12eb8d8,0);
      if (lVar6 == 0) goto LAB_007fb6f8;
      uVar3 = native_System_Collections_Generic_Dictionary_Action__LinkedListNode_Action____ContainsKey_cda894
                        (lVar6,uVar4,
                         _Method_System_Collections_Generic_Dictionary_string__string____ContainsKey___12d9740
                        );
      if ((uVar3 & 1) == 0) goto LAB_007fb6a4;
      iVar1 = 1;
      uStack_58 = CONCAT44(1,(undefined4)uStack_58);
      do {
        if (((*(byte *)(_Localization_TypeInfo_12d50b8 + 0x133) >> 2 & 1) != 0) &&
           (*(int *)(_Localization_TypeInfo_12d50b8 + 0xe0) == 0)) {
          native_sub_4327ec();
        }
        lVar6 = *(long *)(*(long *)(_Localization_TypeInfo_12d50b8 + 0xb8) + 0x28);
        uVar4 = native_System_Int32__ToString_83c60c((long)&uStack_58 + 4,0);
        uVar4 = native_System_String__Concat_afbd68(param_1,uVar4,0);
        if (lVar6 == 0) goto LAB_007fb6f8;
        uVar3 = native_System_Collections_Generic_Dictionary_Action__LinkedListNode_Action____ContainsKey_cda894
                          (lVar6,uVar4,
                           _Method_System_Collections_Generic_Dictionary_string__string____ContainsKey___12d9740
                          );
        if ((uVar3 & 1) == 0) break;
        iVar1 = uStack_58._4_4_ + 1;
        uStack_58 = CONCAT44(iVar1,(undefined4)uStack_58);
      } while (iVar1 < 0x14);
      if (((*(byte *)(_Localization_TypeInfo_12d50b8 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_Localization_TypeInfo_12d50b8 + 0xe0) == 0)) {
        native_sub_4327ec();
      }
      lVar6 = *(long *)(*(long *)(_Localization_TypeInfo_12d50b8 + 0xb8) + 0x28);
      uVar2 = native_UnityEngine_Random__Range_7630a8(0,iVar1,0);
      uStack_58 = CONCAT44(uStack_58._4_4_,uVar2);
      uVar4 = native_System_Int32__ToString_83c60c(&uStack_58,0);
      uVar4 = native_System_String__Concat_afbd68(param_1,uVar4,0);
      if ((lVar6 == 0) ||
         (native_System_Collections_Generic_Dictionary_Action__LinkedListNode_Action____TryGetValue_cdc420
                    (lVar6,uVar4,&lStack_50,
                     _Method_System_Collections_Generic_Dictionary_string__string____TryGetValue___12d9750
                    ), lVar6 = lStack_50, lStack_50 == 0)) goto LAB_007fb6f8;
      uVar8 = *(uint *)(lStack_50 + 0x18);
      uVar11 = *(uint *)(*(long *)(_Localization_TypeInfo_12d50b8 + 0xb8) + 0x38);
      if ((int)uVar8 <= (int)uVar11) goto joined_r0x007fb6e8;
      if (((*(byte *)(_Localization_TypeInfo_12d50b8 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_Localization_TypeInfo_12d50b8 + 0xe0) == 0)) {
        native_sub_4327ec();
        uVar8 = *(uint *)(lVar6 + 0x18);
        uVar11 = *(uint *)(*(long *)(_Localization_TypeInfo_12d50b8 + 0xb8) + 0x38);
      }
      if (uVar8 <= uVar11) goto LAB_007fb6ec;
      lVar6 = lVar6 + (long)(int)uVar11 * 8;
    }
    else {
      if (((*(ushort *)(_Localization_TypeInfo_12d50b8 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(_Localization_TypeInfo_12d50b8 + 0xe0) == 0)) {
        native_sub_4327ec(_Localization_TypeInfo_12d50b8);
      }
      lVar6 = lStack_50;
      if (lStack_50 == 0) goto LAB_007fb6f8;
      uVar8 = *(uint *)(lStack_50 + 0x18);
      uVar11 = *(uint *)(*(long *)(_Localization_TypeInfo_12d50b8 + 0xb8) + 0x38);
      if ((int)uVar8 <= (int)uVar11) {
joined_r0x007fb6e8:
        if (uVar8 != 0) {
          return *(undefined8 *)(lStack_50 + 0x20);
        }
        goto LAB_007fb6ec;
      }
      if (((*(byte *)(_Localization_TypeInfo_12d50b8 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_Localization_TypeInfo_12d50b8 + 0xe0) == 0)) {
        native_sub_4327ec(_Localization_TypeInfo_12d50b8);
        uVar8 = *(uint *)(lVar6 + 0x18);
        uVar11 = *(uint *)(*(long *)(_Localization_TypeInfo_12d50b8 + 0xb8) + 0x38);
      }
      if (uVar8 <= uVar11) goto LAB_007fb6ec;
      lVar6 = lVar6 + (long)(int)uVar11 * 8;
    }
    uVar4 = *(undefined8 *)(lVar6 + 0x20);
    uVar3 = native_System_String__IsNullOrEmpty_b09430(uVar4,0);
    if ((uVar3 & 1) == 0) {
      return uVar4;
    }
    if (lStack_50 != 0) {
      if (*(int *)(lStack_50 + 0x18) != 0) {
LAB_007fb68c:
        return *(undefined8 *)(lStack_50 + 0x20);
      }
LAB_007fb6ec:
      uVar4 = native_sub_43283c();
                    /* WARNING: Subroutine does not return */
      native_sub_4327dc(uVar4,0);
    }
  }
LAB_007fb6f8:
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* Localization$$Format @ 0x7fb6fc
 * System_String_o* Localization__Format (System_String_o* key, Il2CppObject* parameter, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Localization$$Format
   System_String_o* Localization__Format (System_String_o* key, Il2CppObject* parameter, const
   MethodInfo* method); */

undefined8 native_Localization__Format_7fb6fc(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  if ((bRam0000000001340406 & 1) == 0) {
    native_sub_43273c(&Localization_TypeInfo_12d50b8);
    bRam0000000001340406 = 1;
  }
  if (((*(byte *)(_Localization_TypeInfo_12d50b8 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_Localization_TypeInfo_12d50b8 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar1 = native_Localization__Get_7fae58(param_1,0);
  uVar1 = native_System_String__Format_afa798(uVar1,param_2,0);
  return uVar1;
}



/* Localization$$Format @ 0x7fb85c
 * System_String_o* Localization__Format (System_String_o* key, Il2CppObject* arg0, Il2CppObject* arg1, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Localization$$Format
   System_String_o* Localization__Format (System_String_o* key, Il2CppObject* arg0, Il2CppObject*
   arg1, const MethodInfo* method); */

undefined8
native_Localization__Format_7fb85c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  if ((bRam0000000001340407 & 1) == 0) {
    native_sub_43273c(&Localization_TypeInfo_12d50b8);
    bRam0000000001340407 = 1;
  }
  if (((*(byte *)(_Localization_TypeInfo_12d50b8 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_Localization_TypeInfo_12d50b8 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar1 = native_Localization__Get_7fae58(param_1,0);
  uVar1 = native_System_String__Format_afac00(uVar1,param_2,param_3,0);
  return uVar1;
}



/* Localization$$Format @ 0x7fb9c4
 * System_String_o* Localization__Format (System_String_o* key, Il2CppObject* arg0, Il2CppObject* arg1, Il2CppObject* arg2, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Localization$$Format
   System_String_o* Localization__Format (System_String_o* key, Il2CppObject* arg0, Il2CppObject*
   arg1, Il2CppObject* arg2, const MethodInfo* method); */

undefined8
native_Localization__Format_7fb9c4
          (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  if ((bRam0000000001340408 & 1) == 0) {
    native_sub_43273c(&Localization_TypeInfo_12d50b8);
    bRam0000000001340408 = 1;
  }
  if (((*(byte *)(_Localization_TypeInfo_12d50b8 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_Localization_TypeInfo_12d50b8 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar1 = native_Localization__Get_7fae58(param_1,0);
  uVar1 = native_System_String__Format_afc190(uVar1,param_2,param_3,param_4,0);
  return uVar1;
}



/* Localization$$Format @ 0x7fbb3c
 * System_String_o* Localization__Format (System_String_o* key, System_Object_array* parameters, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Localization$$Format
   System_String_o* Localization__Format (System_String_o* key, System_Object_array* parameters,
   const MethodInfo* method); */

undefined8 native_Localization__Format_7fbb3c(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  if ((bRam0000000001340409 & 1) == 0) {
    native_sub_43273c(&Localization_TypeInfo_12d50b8);
    bRam0000000001340409 = 1;
  }
  if (((*(byte *)(_Localization_TypeInfo_12d50b8 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_Localization_TypeInfo_12d50b8 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar1 = native_Localization__Get_7fae58(param_1,0);
  uVar1 = native_System_String__Format_b0d87c(uVar1,param_2,0);
  return uVar1;
}



/* Localization$$get_isActive @ 0x7fbcdc
 * bool Localization__get_isActive (const MethodInfo* method); */

/* Localization$$get_isActive
   bool Localization__get_isActive (const MethodInfo* method); */

undefined8 native_Localization__get_isActive_7fbcdc(void)

{
  return 1;
}



/* Localization$$Localize @ 0x7fbce4
 * System_String_o* Localization__Localize (System_String_o* key, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Localization$$Localize
   System_String_o* Localization__Localize (System_String_o* key, const MethodInfo* method); */

undefined8 native_Localization__Localize_7fbce4(undefined8 param_1)

{
  int iVar1;
  undefined4 uVar2;
  ulong uVar3;
  undefined8 uVar4;
  ulong uVar5;
  long lVar6;
  undefined8 *puVar7;
  uint uVar8;
  long lVar9;
  long *plVar10;
  uint uVar11;
  int *piVar12;
  undefined8 uStack_58;
  long lStack_50;
  undefined8 uStack_48;
  
  if ((bRam000000000134040a & 1) == 0) {
    native_sub_43273c(&Localization_TypeInfo_12d50b8);
    bRam000000000134040a = 1;
  }
  if (((*(byte *)(_Localization_TypeInfo_12d50b8 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_Localization_TypeInfo_12d50b8 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  if ((bRam0000000001340405 & 1) == 0) {
    native_sub_43273c(&UnityEngine_Debug_TypeInfo_12d4338,0);
    native_sub_43273c(&
                      Method_System_Collections_Generic_Dictionary_string__string____ContainsKey___12d9740
                     );
    native_sub_43273c(&
                      Method_System_Collections_Generic_Dictionary_string__string__TryGetValue___12d9910
                     );
    native_sub_43273c(&
                      Method_System_Collections_Generic_Dictionary_string__string____TryGetValue___12d9750
                     );
    native_sub_43273c(&Localization_TypeInfo_12d50b8);
    native_sub_43273c(&UICamera_TypeInfo_12d6410);
    native_sub_43273c(&StringLiteral__Mobile_12ead80);
    native_sub_43273c(&StringLiteral_Language_12ef510);
    native_sub_43273c(&StringLiteral_No_localization_data_present_12efdd0);
    native_sub_43273c(&StringLiteral__Controller_12ead38);
    native_sub_43273c(&StringLiteral_Language_not_found___12ef518);
    native_sub_43273c(&StringLiteral_English_12edb28);
    native_sub_43273c(&StringLiteral_0_12eb8d8);
    bRam0000000001340405 = 1;
  }
  lStack_50 = 0;
  uStack_48 = 0;
  uStack_58 = 0;
  uVar3 = native_System_String__IsNullOrEmpty_b09430(param_1,0);
  if ((uVar3 & 1) != 0) {
    return 0;
  }
  if (((*(byte *)(_Localization_TypeInfo_12d50b8 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_Localization_TypeInfo_12d50b8 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  if (*(char *)(*(long *)(_Localization_TypeInfo_12d50b8 + 0xb8) + 0x10) == '\0') {
    uVar4 = native_UnityEngine_PlayerPrefs__GetString_761f44
                      (_StringLiteral_Language_12ef510,_StringLiteral_English_12edb28,0);
    if (((*(byte *)(_Localization_TypeInfo_12d50b8 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_Localization_TypeInfo_12d50b8 + 0xe0) == 0)) {
      native_sub_4327ec(_Localization_TypeInfo_12d50b8);
    }
    native_Localization__LoadDictionary_7f8264(uVar4,0);
  }
  if (((*(byte *)(_Localization_TypeInfo_12d50b8 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_Localization_TypeInfo_12d50b8 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  if (*(long *)(*(long *)(_Localization_TypeInfo_12d50b8 + 0xb8) + 0x18) == 0) {
    if (((*(byte *)(_UnityEngine_Debug_TypeInfo_12d4338 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UnityEngine_Debug_TypeInfo_12d4338 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    native_UnityEngine_Debug__LogError_8dc5cc(_StringLiteral_No_localization_data_present_12efdd0,0)
    ;
    return 0;
  }
  if (((*(byte *)(_Localization_TypeInfo_12d50b8 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_Localization_TypeInfo_12d50b8 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar4 = native_Localization__get_language_7f8058();
  lVar6 = _Localization_TypeInfo_12d50b8;
  if (*(int *)(*(long *)(_Localization_TypeInfo_12d50b8 + 0xb8) + 0x38) == -1) {
    uVar3 = 0;
    while( true ) {
      if (((*(byte *)(_Localization_TypeInfo_12d50b8 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_Localization_TypeInfo_12d50b8 + 0xe0) == 0)) {
        native_sub_4327ec(_Localization_TypeInfo_12d50b8);
      }
      lVar9 = *(long *)(*(long *)(_Localization_TypeInfo_12d50b8 + 0xb8) + 0x18);
      if (lVar9 == 0) goto LAB_007fb6f8;
      lVar6 = _Localization_TypeInfo_12d50b8;
      if ((long)*(int *)(lVar9 + 0x18) <= (long)uVar3) goto LAB_007fb10c;
      if (((*(byte *)(_Localization_TypeInfo_12d50b8 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_Localization_TypeInfo_12d50b8 + 0xe0) == 0)) {
        native_sub_4327ec(_Localization_TypeInfo_12d50b8);
        lVar9 = *(long *)(*(long *)(_Localization_TypeInfo_12d50b8 + 0xb8) + 0x18);
        if (lVar9 == 0) goto LAB_007fb6f8;
      }
      if (*(uint *)(lVar9 + 0x18) <= uVar3) goto LAB_007fb6ec;
      uVar5 = native_System_String__op_Equality_afc18c
                        (*(undefined8 *)(lVar9 + uVar3 * 8 + 0x20),uVar4,0);
      if ((uVar5 & 1) != 0) break;
      uVar3 = uVar3 + 1;
    }
    if (((*(byte *)(_Localization_TypeInfo_12d50b8 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_Localization_TypeInfo_12d50b8 + 0xe0) == 0)) {
      native_sub_4327ec(_Localization_TypeInfo_12d50b8);
    }
    lVar6 = _Localization_TypeInfo_12d50b8;
    *(int *)(*(long *)(_Localization_TypeInfo_12d50b8 + 0xb8) + 0x38) = (int)uVar3;
  }
LAB_007fb10c:
  if (((*(byte *)(lVar6 + 0x133) >> 2 & 1) != 0) && (*(int *)(lVar6 + 0xe0) == 0)) {
    native_sub_4327ec(lVar6);
    lVar6 = _Localization_TypeInfo_12d50b8;
  }
  plVar10 = (long *)(lVar6 + 0xb8);
  piVar12 = (int *)(*plVar10 + 0x38);
  if (*piVar12 == -1) {
    if (((*(byte *)(lVar6 + 0x133) >> 2 & 1) != 0) && (*(int *)(lVar6 + 0xe0) == 0)) {
      native_sub_4327ec(lVar6);
      plVar10 = (long *)(_Localization_TypeInfo_12d50b8 + 0xb8);
      piVar12 = (int *)(*plVar10 + 0x38);
    }
    *piVar12 = 0;
    lVar6 = *(long *)(*plVar10 + 0x18);
    if (lVar6 == 0) goto LAB_007fb6f8;
    if (*(int *)(lVar6 + 0x18) == 0) goto LAB_007fb6ec;
    *(undefined8 *)(*plVar10 + 0x40) = *(undefined8 *)(lVar6 + 0x20);
    native_sub_4326e0();
    uVar4 = native_System_String__Concat_afbd68(_StringLiteral_Language_not_found___12ef518,uVar4,0)
    ;
    if (((*(byte *)(_UnityEngine_Debug_TypeInfo_12d4338 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UnityEngine_Debug_TypeInfo_12d4338 + 0xe0) == 0)) {
      native_sub_4327ec(_UnityEngine_Debug_TypeInfo_12d4338);
    }
    native_UnityEngine_Debug__LogWarning_8dca9c(uVar4,0);
  }
  if (((*(byte *)(_UICamera_TypeInfo_12d6410 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UICamera_TypeInfo_12d6410 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  iVar1 = native_UICamera__get_currentScheme_c92518(0);
  if (iVar1 == 2) {
    puVar7 = (undefined8 *)&StringLiteral__Controller_12ead38;
LAB_007fb21c:
    uVar4 = native_System_String__Concat_afbd68(param_1,*puVar7,0);
    if (((*(byte *)(_Localization_TypeInfo_12d50b8 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_Localization_TypeInfo_12d50b8 + 0xe0) == 0)) {
      native_sub_4327ec(_Localization_TypeInfo_12d50b8);
    }
    lVar6 = *(long *)(*(long *)(_Localization_TypeInfo_12d50b8 + 0xb8) + 0x30);
    if (lVar6 == 0) goto LAB_007fb6f8;
    uVar3 = native_System_Collections_Generic_Dictionary_Action__LinkedListNode_Action____TryGetValue_cdc420
                      (lVar6,uVar4,&uStack_48,
                       _Method_System_Collections_Generic_Dictionary_string__string__TryGetValue___12d9910
                      );
    if ((uVar3 & 1) != 0) {
      return uStack_48;
    }
    if (((*(byte *)(_Localization_TypeInfo_12d50b8 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_Localization_TypeInfo_12d50b8 + 0xe0) == 0)) {
      native_sub_4327ec(_Localization_TypeInfo_12d50b8);
    }
    lVar6 = *(long *)(_Localization_TypeInfo_12d50b8 + 0xb8);
    if (*(int *)(lVar6 + 0x38) != -1) {
      if (((*(byte *)(_Localization_TypeInfo_12d50b8 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_Localization_TypeInfo_12d50b8 + 0xe0) == 0)) {
        native_sub_4327ec(_Localization_TypeInfo_12d50b8);
        lVar6 = *(long *)(_Localization_TypeInfo_12d50b8 + 0xb8);
      }
      if (*(long *)(lVar6 + 0x28) == 0) goto LAB_007fb6f8;
      uVar3 = native_System_Collections_Generic_Dictionary_Action__LinkedListNode_Action____TryGetValue_cdc420
                        (*(long *)(lVar6 + 0x28),uVar4,&lStack_50,
                         _Method_System_Collections_Generic_Dictionary_string__string____TryGetValue___12d9750
                        );
      if ((uVar3 & 1) != 0) {
        if (((*(byte *)(_Localization_TypeInfo_12d50b8 + 0x133) >> 2 & 1) != 0) &&
           (*(int *)(_Localization_TypeInfo_12d50b8 + 0xe0) == 0)) {
          native_sub_4327ec(_Localization_TypeInfo_12d50b8);
        }
        lVar6 = lStack_50;
        if (lStack_50 == 0) goto LAB_007fb6f8;
        uVar11 = *(uint *)(lStack_50 + 0x18);
        uVar8 = *(uint *)(*(long *)(_Localization_TypeInfo_12d50b8 + 0xb8) + 0x38);
        if ((int)uVar8 < (int)uVar11) {
          if (((*(byte *)(_Localization_TypeInfo_12d50b8 + 0x133) >> 2 & 1) != 0) &&
             (*(int *)(_Localization_TypeInfo_12d50b8 + 0xe0) == 0)) {
            native_sub_4327ec(_Localization_TypeInfo_12d50b8);
            uVar11 = *(uint *)(lVar6 + 0x18);
            uVar8 = *(uint *)(*(long *)(_Localization_TypeInfo_12d50b8 + 0xb8) + 0x38);
          }
          if (uVar11 <= uVar8) goto LAB_007fb6ec;
          lStack_50 = lVar6 + (long)(int)uVar8 * 8;
          goto LAB_007fb68c;
        }
      }
    }
    if (((*(byte *)(_Localization_TypeInfo_12d50b8 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_Localization_TypeInfo_12d50b8 + 0xe0) == 0)) {
      native_sub_4327ec(_Localization_TypeInfo_12d50b8);
    }
    lVar6 = *(long *)(*(long *)(_Localization_TypeInfo_12d50b8 + 0xb8) + 0x20);
    if (lVar6 == 0) goto LAB_007fb6f8;
    uVar3 = native_System_Collections_Generic_Dictionary_Action__LinkedListNode_Action____TryGetValue_cdc420
                      (lVar6,uVar4,&uStack_48,
                       _Method_System_Collections_Generic_Dictionary_string__string__TryGetValue___12d9910
                      );
    if ((uVar3 & 1) != 0) {
      return uStack_48;
    }
  }
  else if (iVar1 == 1) {
    puVar7 = (undefined8 *)&StringLiteral__Mobile_12ead80;
    goto LAB_007fb21c;
  }
  if (((*(byte *)(_Localization_TypeInfo_12d50b8 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_Localization_TypeInfo_12d50b8 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  lVar6 = *(long *)(*(long *)(_Localization_TypeInfo_12d50b8 + 0xb8) + 0x30);
  if (lVar6 == 0) goto LAB_007fb6f8;
  uVar3 = native_System_Collections_Generic_Dictionary_Action__LinkedListNode_Action____TryGetValue_cdc420
                    (lVar6,param_1,&uStack_48,
                     _Method_System_Collections_Generic_Dictionary_string__string__TryGetValue___12d9910
                    );
  if ((uVar3 & 1) != 0) {
    return uStack_48;
  }
  if (((*(byte *)(_Localization_TypeInfo_12d50b8 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_Localization_TypeInfo_12d50b8 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  lVar6 = *(long *)(_Localization_TypeInfo_12d50b8 + 0xb8);
  if (*(int *)(lVar6 + 0x38) == -1) {
LAB_007fb6a4:
    if (((*(byte *)(_Localization_TypeInfo_12d50b8 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_Localization_TypeInfo_12d50b8 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    lVar6 = *(long *)(*(long *)(_Localization_TypeInfo_12d50b8 + 0xb8) + 0x20);
    if (lVar6 != 0) {
      uVar3 = native_System_Collections_Generic_Dictionary_Action__LinkedListNode_Action____TryGetValue_cdc420
                        (lVar6,param_1,&uStack_48,
                         _Method_System_Collections_Generic_Dictionary_string__string__TryGetValue___12d9910
                        );
      if ((uVar3 & 1) != 0) {
        return uStack_48;
      }
      return param_1;
    }
  }
  else {
    if (((*(byte *)(_Localization_TypeInfo_12d50b8 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_Localization_TypeInfo_12d50b8 + 0xe0) == 0)) {
      native_sub_4327ec();
      lVar6 = *(long *)(_Localization_TypeInfo_12d50b8 + 0xb8);
    }
    if (*(long *)(lVar6 + 0x28) == 0) goto LAB_007fb6f8;
    uVar3 = native_System_Collections_Generic_Dictionary_Action__LinkedListNode_Action____TryGetValue_cdc420
                      (*(long *)(lVar6 + 0x28),param_1,&lStack_50,
                       _Method_System_Collections_Generic_Dictionary_string__string____TryGetValue___12d9750
                      );
    if ((uVar3 & 1) == 0) {
      if (((*(ushort *)(_Localization_TypeInfo_12d50b8 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(_Localization_TypeInfo_12d50b8 + 0xe0) == 0)) {
        native_sub_4327ec(_Localization_TypeInfo_12d50b8);
      }
      lVar6 = *(long *)(*(long *)(_Localization_TypeInfo_12d50b8 + 0xb8) + 0x28);
      uVar4 = native_System_String__Concat_afbd68(param_1,_StringLiteral_0_12eb8d8,0);
      if (lVar6 == 0) goto LAB_007fb6f8;
      uVar3 = native_System_Collections_Generic_Dictionary_Action__LinkedListNode_Action____ContainsKey_cda894
                        (lVar6,uVar4,
                         _Method_System_Collections_Generic_Dictionary_string__string____ContainsKey___12d9740
                        );
      if ((uVar3 & 1) == 0) goto LAB_007fb6a4;
      iVar1 = 1;
      uStack_58 = CONCAT44(1,(undefined4)uStack_58);
      do {
        if (((*(byte *)(_Localization_TypeInfo_12d50b8 + 0x133) >> 2 & 1) != 0) &&
           (*(int *)(_Localization_TypeInfo_12d50b8 + 0xe0) == 0)) {
          native_sub_4327ec();
        }
        lVar6 = *(long *)(*(long *)(_Localization_TypeInfo_12d50b8 + 0xb8) + 0x28);
        uVar4 = native_System_Int32__ToString_83c60c((long)&uStack_58 + 4,0);
        uVar4 = native_System_String__Concat_afbd68(param_1,uVar4,0);
        if (lVar6 == 0) goto LAB_007fb6f8;
        uVar3 = native_System_Collections_Generic_Dictionary_Action__LinkedListNode_Action____ContainsKey_cda894
                          (lVar6,uVar4,
                           _Method_System_Collections_Generic_Dictionary_string__string____ContainsKey___12d9740
                          );
        if ((uVar3 & 1) == 0) break;
        iVar1 = uStack_58._4_4_ + 1;
        uStack_58 = CONCAT44(iVar1,(undefined4)uStack_58);
      } while (iVar1 < 0x14);
      if (((*(byte *)(_Localization_TypeInfo_12d50b8 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_Localization_TypeInfo_12d50b8 + 0xe0) == 0)) {
        native_sub_4327ec();
      }
      lVar6 = *(long *)(*(long *)(_Localization_TypeInfo_12d50b8 + 0xb8) + 0x28);
      uVar2 = native_UnityEngine_Random__Range_7630a8(0,iVar1,0);
      uStack_58 = CONCAT44(uStack_58._4_4_,uVar2);
      uVar4 = native_System_Int32__ToString_83c60c(&uStack_58,0);
      uVar4 = native_System_String__Concat_afbd68(param_1,uVar4,0);
      if ((lVar6 == 0) ||
         (native_System_Collections_Generic_Dictionary_Action__LinkedListNode_Action____TryGetValue_cdc420
                    (lVar6,uVar4,&lStack_50,
                     _Method_System_Collections_Generic_Dictionary_string__string____TryGetValue___12d9750
                    ), lVar6 = lStack_50, lStack_50 == 0)) goto LAB_007fb6f8;
      uVar8 = *(uint *)(lStack_50 + 0x18);
      uVar11 = *(uint *)(*(long *)(_Localization_TypeInfo_12d50b8 + 0xb8) + 0x38);
      if ((int)uVar8 <= (int)uVar11) goto joined_r0x007fb6e8;
      if (((*(byte *)(_Localization_TypeInfo_12d50b8 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_Localization_TypeInfo_12d50b8 + 0xe0) == 0)) {
        native_sub_4327ec();
        uVar8 = *(uint *)(lVar6 + 0x18);
        uVar11 = *(uint *)(*(long *)(_Localization_TypeInfo_12d50b8 + 0xb8) + 0x38);
      }
      if (uVar8 <= uVar11) goto LAB_007fb6ec;
      lVar6 = lVar6 + (long)(int)uVar11 * 8;
    }
    else {
      if (((*(ushort *)(_Localization_TypeInfo_12d50b8 + 0x132) >> 10 & 1) != 0) &&
         (*(int *)(_Localization_TypeInfo_12d50b8 + 0xe0) == 0)) {
        native_sub_4327ec(_Localization_TypeInfo_12d50b8);
      }
      lVar6 = lStack_50;
      if (lStack_50 == 0) goto LAB_007fb6f8;
      uVar8 = *(uint *)(lStack_50 + 0x18);
      uVar11 = *(uint *)(*(long *)(_Localization_TypeInfo_12d50b8 + 0xb8) + 0x38);
      if ((int)uVar8 <= (int)uVar11) {
joined_r0x007fb6e8:
        if (uVar8 != 0) {
          return *(undefined8 *)(lStack_50 + 0x20);
        }
        goto LAB_007fb6ec;
      }
      if (((*(byte *)(_Localization_TypeInfo_12d50b8 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_Localization_TypeInfo_12d50b8 + 0xe0) == 0)) {
        native_sub_4327ec(_Localization_TypeInfo_12d50b8);
        uVar8 = *(uint *)(lVar6 + 0x18);
        uVar11 = *(uint *)(*(long *)(_Localization_TypeInfo_12d50b8 + 0xb8) + 0x38);
      }
      if (uVar8 <= uVar11) goto LAB_007fb6ec;
      lVar6 = lVar6 + (long)(int)uVar11 * 8;
    }
    uVar4 = *(undefined8 *)(lVar6 + 0x20);
    uVar3 = native_System_String__IsNullOrEmpty_b09430(uVar4,0);
    if ((uVar3 & 1) == 0) {
      return uVar4;
    }
    if (lStack_50 != 0) {
      if (*(int *)(lStack_50 + 0x18) != 0) {
LAB_007fb68c:
        return *(undefined8 *)(lStack_50 + 0x20);
      }
LAB_007fb6ec:
      uVar4 = native_sub_43283c();
                    /* WARNING: Subroutine does not return */
      native_sub_4327dc(uVar4,0);
    }
  }
LAB_007fb6f8:
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* Localization$$Exists @ 0x7fbd48
 * bool Localization__Exists (System_String_o* key, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Localization$$Exists
   bool Localization__Exists (System_String_o* key, const MethodInfo* method); */

uint native_Localization__Exists_7fbd48(undefined8 param_1)

{
  undefined8 uVar1;
  long lVar2;
  ulong uVar3;
  
  if ((bRam000000000134040b & 1) == 0) {
    native_sub_43273c(&
                      Method_System_Collections_Generic_Dictionary_string__string__ContainsKey___12d98f8
                     );
    native_sub_43273c(&
                      Method_System_Collections_Generic_Dictionary_string__string____ContainsKey___12d9740
                     );
    native_sub_43273c(&Localization_TypeInfo_12d50b8);
    native_sub_43273c(&StringLiteral__Mobile_12ead80);
    native_sub_43273c(&StringLiteral_Language_12ef510);
    native_sub_43273c(&StringLiteral_English_12edb28);
    bRam000000000134040b = 1;
  }
  if (((*(byte *)(_Localization_TypeInfo_12d50b8 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_Localization_TypeInfo_12d50b8 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  if (*(char *)(*(long *)(_Localization_TypeInfo_12d50b8 + 0xb8) + 0x10) == '\0') {
    uVar1 = native_UnityEngine_PlayerPrefs__GetString_761f44
                      (_StringLiteral_Language_12ef510,_StringLiteral_English_12edb28,0);
    if (((*(byte *)(_Localization_TypeInfo_12d50b8 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_Localization_TypeInfo_12d50b8 + 0xe0) == 0)) {
      native_sub_4327ec(_Localization_TypeInfo_12d50b8);
    }
    native_Localization__set_language_7f88dc(uVar1);
  }
  uVar1 = native_System_String__Concat_afbd68(param_1,_StringLiteral__Mobile_12ead80,0);
  if (((*(byte *)(_Localization_TypeInfo_12d50b8 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_Localization_TypeInfo_12d50b8 + 0xe0) == 0)) {
    native_sub_4327ec(_Localization_TypeInfo_12d50b8);
  }
  lVar2 = *(long *)(*(long *)(_Localization_TypeInfo_12d50b8 + 0xb8) + 0x28);
  if (lVar2 != 0) {
    uVar3 = native_System_Collections_Generic_Dictionary_Action__LinkedListNode_Action____ContainsKey_cda894
                      (lVar2,uVar1,
                       _Method_System_Collections_Generic_Dictionary_string__string____ContainsKey___12d9740
                      );
    if ((uVar3 & 1) != 0) {
      return 1;
    }
    if (((*(byte *)(_Localization_TypeInfo_12d50b8 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_Localization_TypeInfo_12d50b8 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    lVar2 = *(long *)(*(long *)(_Localization_TypeInfo_12d50b8 + 0xb8) + 0x20);
    if (lVar2 != 0) {
      uVar3 = native_System_Collections_Generic_Dictionary_Action__LinkedListNode_Action____ContainsKey_cda894
                        (lVar2,uVar1,
                         _Method_System_Collections_Generic_Dictionary_string__string__ContainsKey___12d98f8
                        );
      if ((uVar3 & 1) != 0) {
        return 1;
      }
      if (((*(byte *)(_Localization_TypeInfo_12d50b8 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_Localization_TypeInfo_12d50b8 + 0xe0) == 0)) {
        native_sub_4327ec();
      }
      lVar2 = *(long *)(*(long *)(_Localization_TypeInfo_12d50b8 + 0xb8) + 0x28);
      if (lVar2 != 0) {
        uVar3 = native_System_Collections_Generic_Dictionary_Action__LinkedListNode_Action____ContainsKey_cda894
                          (lVar2,param_1,
                           _Method_System_Collections_Generic_Dictionary_string__string____ContainsKey___12d9740
                          );
        if ((uVar3 & 1) != 0) {
          return 1;
        }
        if (((*(byte *)(_Localization_TypeInfo_12d50b8 + 0x133) >> 2 & 1) != 0) &&
           (*(int *)(_Localization_TypeInfo_12d50b8 + 0xe0) == 0)) {
          native_sub_4327ec();
        }
        lVar2 = *(long *)(*(long *)(_Localization_TypeInfo_12d50b8 + 0xb8) + 0x20);
        if (lVar2 != 0) {
          if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
            native_sub_432810(0,param_1);
          }
          uVar3 = (*(code *)**(undefined8 **)
                              (*(long *)(*(long *)(
                                                  _Method_System_Collections_Generic_Dictionary_string__string__ContainsKey___12d98f8
                                                  + 0x18) + 0xc0) + 0x40))();
          return (uint)(uVar3 >> 0x1f) & 1 ^ 1;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* Localization$$Set @ 0x7fbf6c
 * void Localization__Set (System_String_o* language, System_String_o* key, System_String_o* text, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Localization$$Set
   void Localization__Set (System_String_o* language, System_String_o* key, System_String_o* text,
   const MethodInfo* method); */

void native_Localization__Set_7fbf6c(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long *plVar2;
  long *plVar3;
  ulong uVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  int iVar8;
  uint uVar9;
  long lVar10;
  ulong uVar11;
  uint uVar12;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  long *plStack_b8;
  undefined8 uStack_b0;
  long *plStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  long *plStack_88;
  undefined8 uStack_80;
  long *plStack_70;
  long *plStack_68;
  
  if ((bRam000000000134040c & 1) == 0) {
    native_sub_43273c(&Method_System_Array_Resize_string____12e1878);
    native_sub_43273c(&Method_System_Collections_Generic_Dictionary_string__string____Add___12d9730)
    ;
    native_sub_43273c(&
                      Method_System_Collections_Generic_Dictionary_string__string____GetEnumerator___12d9748
                     );
    native_sub_43273c(&
                      Method_System_Collections_Generic_Dictionary_string__string____TryGetValue___12d9750
                     );
    native_sub_43273c(&
                      Method_System_Collections_Generic_Dictionary_string__string_____ctor___12d9728
                     );
    native_sub_43273c(&
                      Method_System_Collections_Generic_Dictionary_string__string____set_Item___12d9760
                     );
    native_sub_43273c(&System_Collections_Generic_Dictionary_string__string____TypeInfo_12d2368);
    native_sub_43273c(&
                      Method_System_Collections_Generic_Dictionary_Enumerator_string__string____Dispose___12dad78
                     );
    native_sub_43273c(&
                      Method_System_Collections_Generic_Dictionary_Enumerator_string__string____MoveNext___12dad80
                     );
    native_sub_43273c(&
                      Method_System_Collections_Generic_Dictionary_Enumerator_string__string____get_Current___12dad88
                     );
    native_sub_43273c(&
                      Method_System_Collections_Generic_KeyValuePair_string__string____get_Key___12dbf10
                     );
    native_sub_43273c(&
                      Method_System_Collections_Generic_KeyValuePair_string__string____get_Value___12dbf18
                     );
    native_sub_43273c(&Localization_TypeInfo_12d50b8);
    native_sub_43273c(&string___TypeInfo_12d3398);
    bRam000000000134040c = 1;
  }
  plStack_70 = (long *)0x0;
  plStack_68 = (long *)0x0;
  uStack_80 = 0;
  uStack_98 = 0;
  uStack_a0 = 0;
  plStack_88 = (long *)0x0;
  uStack_90 = 0;
  plStack_a8 = (long *)0x0;
  if (((*(byte *)(_Localization_TypeInfo_12d50b8 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_Localization_TypeInfo_12d50b8 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  lVar1 = native_Localization__get_knownLanguages_7f7f68();
  if (lVar1 == 0) {
    plVar2 = (long *)native_sub_432750(_string___TypeInfo_12d3398,1);
    if (plVar2 == (long *)0x0) goto LAB_007fc5a8;
    if ((param_1 != 0) &&
       (lVar1 = native_sub_4327f8(param_1,*(undefined8 *)(*plVar2 + 0x40)), lVar1 == 0))
    goto LAB_007fc5ac;
    if ((int)plVar2[3] == 0) goto LAB_007fc168;
    plVar2[4] = param_1;
    native_sub_4326e0(plVar2 + 4,param_1);
    if (((*(byte *)(_Localization_TypeInfo_12d50b8 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_Localization_TypeInfo_12d50b8 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    plVar3 = (long *)(*(long *)(_Localization_TypeInfo_12d50b8 + 0xb8) + 0x18);
    *plVar3 = (long)plVar2;
    native_sub_4326e0(plVar3,plVar2);
    lVar1 = *(long *)(*(long *)(_Localization_TypeInfo_12d50b8 + 0xb8) + 0x18);
    if (lVar1 == 0) goto LAB_007fc5a8;
  }
  iVar8 = (int)*(ulong *)(lVar1 + 0x18);
  if (0 < iVar8) {
    if ((*(ulong *)(lVar1 + 0x18) & 0xffffffff) != 0) {
      uVar11 = 0;
      do {
        uVar4 = native_System_String__op_Equality_afc18c
                          (*(undefined8 *)(lVar1 + uVar11 * 8 + 0x20),param_1,0);
        if ((uVar4 & 1) != 0) {
          if (((*(byte *)(_Localization_TypeInfo_12d50b8 + 0x133) >> 2 & 1) != 0) &&
             (*(int *)(_Localization_TypeInfo_12d50b8 + 0xe0) == 0)) {
            native_sub_4327ec();
          }
          lVar10 = *(long *)(*(long *)(_Localization_TypeInfo_12d50b8 + 0xb8) + 0x28);
          if (lVar10 == 0) goto LAB_007fc5a8;
          uVar4 = native_System_Collections_Generic_Dictionary_Action__LinkedListNode_Action____TryGetValue_cdc420
                            (lVar10,param_2,&plStack_70,
                             _Method_System_Collections_Generic_Dictionary_string__string____TryGetValue___12d9750
                            );
          if ((uVar4 & 1) == 0) {
            plStack_70 = (long *)native_sub_432750(_string___TypeInfo_12d3398,
                                                   *(undefined4 *)(lVar1 + 0x18));
            if (((*(byte *)(_Localization_TypeInfo_12d50b8 + 0x133) >> 2 & 1) != 0) &&
               (*(int *)(_Localization_TypeInfo_12d50b8 + 0xe0) == 0)) {
              native_sub_4327ec(_Localization_TypeInfo_12d50b8);
            }
            lVar1 = *(long *)(*(long *)(_Localization_TypeInfo_12d50b8 + 0xb8) + 0x28);
            if (lVar1 == 0) goto LAB_007fc5a8;
            native_System_Collections_Generic_Dictionary_Action__LinkedListNode_Action____set_Item_cda5f8
                      (lVar1,param_2,plStack_70,
                       _Method_System_Collections_Generic_Dictionary_string__string____set_Item___12d9760
                      );
            plVar2 = plStack_70;
            if (plStack_70 == (long *)0x0) goto LAB_007fc5a8;
            if ((param_3 != 0) &&
               (lVar1 = native_sub_4327f8(param_3,*(undefined8 *)(*plStack_70 + 0x40)), lVar1 == 0))
            goto LAB_007fc5ac;
            if ((int)plVar2[3] == 0) break;
            plVar2 = plVar2 + 4;
            *plVar2 = param_3;
            native_sub_4326e0(plVar2,param_3);
          }
          plVar2 = plStack_70;
          if (plStack_70 == (long *)0x0) goto LAB_007fc5a8;
          if ((param_3 != 0) &&
             (lVar1 = native_sub_4327f8(param_3,*(undefined8 *)(*plStack_70 + 0x40)), lVar1 == 0))
          goto LAB_007fc5ac;
          if ((uint)uVar11 < *(uint *)(plVar2 + 3)) {
            plVar2 = plVar2 + uVar11 + 4;
            *plVar2 = param_3;
            goto LAB_007fc558;
          }
          break;
        }
        uVar11 = uVar11 + 1;
        if ((long)iVar8 <= (long)uVar11) goto LAB_007fc174;
      } while (uVar11 < *(uint *)(lVar1 + 0x18));
    }
LAB_007fc168:
    uVar5 = native_sub_43283c();
                    /* WARNING: Subroutine does not return */
    native_sub_4327dc(uVar5,0);
  }
LAB_007fc174:
  if (((*(byte *)(_Localization_TypeInfo_12d50b8 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_Localization_TypeInfo_12d50b8 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  plVar2 = (long *)(*(long *)(_Localization_TypeInfo_12d50b8 + 0xb8) + 0x18);
  lVar10 = *plVar2;
  if (lVar10 != 0) {
    uVar12 = (uint)*(undefined8 *)(lVar10 + 0x18);
    native_System_Array__Resize_Camera__833688
              (plVar2,uVar12 + 1,_Method_System_Array_Resize_string____12e1878);
    plVar2 = *(long **)(*(long *)(_Localization_TypeInfo_12d50b8 + 0xb8) + 0x18);
    if (plVar2 != (long *)0x0) {
      if ((param_1 != 0) &&
         (lVar10 = native_sub_4327f8(param_1,*(undefined8 *)(*plVar2 + 0x40)), lVar10 == 0)) {
LAB_007fc5ac:
        uVar5 = native_sub_432830();
                    /* WARNING: Subroutine does not return */
        native_sub_4327dc(uVar5,0);
      }
      if (*(uint *)(plVar2 + 3) <= uVar12) goto LAB_007fc168;
      plVar2[(long)(int)uVar12 + 4] = param_1;
      native_sub_4326e0(plVar2 + (long)(int)uVar12 + 4,param_1);
      lVar10 = native_sub_432808(
                                _System_Collections_Generic_Dictionary_string__string____TypeInfo_12d2368
                                );
      native_System_Collections_Generic_Dictionary_Action__LinkedListNode_Action_____ctor_cda13c
                (lVar10,
                 _Method_System_Collections_Generic_Dictionary_string__string_____ctor___12d9728);
      lVar6 = *(long *)(*(long *)(_Localization_TypeInfo_12d50b8 + 0xb8) + 0x28);
      if (lVar6 != 0) {
        native_System_Collections_Generic_Dictionary_object__object___GetEnumerator_cdabfc
                  (&uStack_d0,lVar6,
                   _Method_System_Collections_Generic_Dictionary_string__string____GetEnumerator___12d9748
                  );
        uStack_80 = uStack_b0;
        uStack_98 = uStack_c8;
        uStack_a0 = uStack_d0;
        plStack_88 = plStack_b8;
        uStack_90 = uStack_c0;
        while (uVar11 = native_System_Collections_Generic_Dictionary_Enumerator_object__object___MoveNext_7f4bb4
                                  (&uStack_a0,
                                   _Method_System_Collections_Generic_Dictionary_Enumerator_string__string____MoveNext___12dad80
                                  ), uVar5 = uStack_90, (uVar11 & 1) != 0) {
          plStack_a8 = plStack_88;
          native_System_Array__Resize_Camera__833688
                    (&plStack_a8,uVar12 + 1,_Method_System_Array_Resize_string____12e1878);
          plVar2 = plStack_a8;
          if (plStack_a8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            native_sub_432810();
          }
          uVar9 = *(uint *)(plStack_a8 + 3);
          if (uVar9 == 0) {
            uVar5 = native_sub_43283c();
                    /* WARNING: Subroutine does not return */
            native_sub_4327dc(uVar5,0);
          }
          lVar6 = plStack_a8[4];
          if (lVar6 != 0) {
            lVar7 = native_sub_4327f8(lVar6,*(undefined8 *)(*plStack_a8 + 0x40));
            if (lVar7 == 0) {
              uVar5 = native_sub_432830();
                    /* WARNING: Subroutine does not return */
              native_sub_4327dc(uVar5,0);
            }
            uVar9 = *(uint *)(plVar2 + 3);
          }
          if (uVar9 <= uVar12) {
            uVar5 = native_sub_43283c();
                    /* WARNING: Subroutine does not return */
            native_sub_4327dc(uVar5,0);
          }
          plVar2 = plVar2 + (long)(int)uVar12 + 4;
          *plVar2 = lVar6;
          native_sub_4326e0(plVar2,lVar6);
          if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
            native_sub_432810();
          }
          native_System_Collections_Generic_Dictionary_Canvas__IndexedSet_Graphic____Add_cda620
                    (lVar10,uVar5,plStack_a8,
                     _Method_System_Collections_Generic_Dictionary_string__string____Add___12d9730);
        }
        native_System_Collections_Generic_Dictionary_Enumerator_object__object___Dispose_7f4d1c
                  (&uStack_a0,
                   _Method_System_Collections_Generic_Dictionary_Enumerator_string__string____Dispose___12dad78
                  );
        if (((*(byte *)(_Localization_TypeInfo_12d50b8 + 0x133) >> 2 & 1) != 0) &&
           (*(int *)(_Localization_TypeInfo_12d50b8 + 0xe0) == 0)) {
          native_sub_4327ec();
        }
        plVar2 = (long *)(*(long *)(_Localization_TypeInfo_12d50b8 + 0xb8) + 0x28);
        *plVar2 = lVar10;
        native_sub_4326e0(plVar2,lVar10);
        lVar10 = *(long *)(*(long *)(_Localization_TypeInfo_12d50b8 + 0xb8) + 0x28);
        if (lVar10 != 0) {
          uVar11 = native_System_Collections_Generic_Dictionary_Action__LinkedListNode_Action____TryGetValue_cdc420
                             (lVar10,param_2,&plStack_68,
                              _Method_System_Collections_Generic_Dictionary_string__string____TryGetValue___12d9750
                             );
          if ((uVar11 & 1) == 0) {
            plStack_68 = (long *)native_sub_432750(_string___TypeInfo_12d3398,
                                                   *(undefined4 *)(lVar1 + 0x18));
            if (((*(byte *)(_Localization_TypeInfo_12d50b8 + 0x133) >> 2 & 1) != 0) &&
               (*(int *)(_Localization_TypeInfo_12d50b8 + 0xe0) == 0)) {
              native_sub_4327ec(_Localization_TypeInfo_12d50b8);
            }
            lVar1 = *(long *)(*(long *)(_Localization_TypeInfo_12d50b8 + 0xb8) + 0x28);
            if (lVar1 == 0) goto LAB_007fc5a8;
            native_System_Collections_Generic_Dictionary_Action__LinkedListNode_Action____set_Item_cda5f8
                      (lVar1,param_2,plStack_68,
                       _Method_System_Collections_Generic_Dictionary_string__string____set_Item___12d9760
                      );
            plVar2 = plStack_68;
            if (plStack_68 == (long *)0x0) goto LAB_007fc5a8;
            if ((param_3 != 0) &&
               (lVar1 = native_sub_4327f8(param_3,*(undefined8 *)(*plStack_68 + 0x40)), lVar1 == 0))
            goto LAB_007fc5ac;
            if ((int)plVar2[3] == 0) goto LAB_007fc168;
            plVar2 = plVar2 + 4;
            *plVar2 = param_3;
            native_sub_4326e0(plVar2,param_3);
          }
          plVar2 = plStack_68;
          if (plStack_68 != (long *)0x0) {
            if ((param_3 == 0) ||
               (lVar1 = native_sub_4327f8(param_3,*(undefined8 *)(*plStack_68 + 0x40)), lVar1 != 0))
            {
              if (uVar12 < *(uint *)(plVar2 + 3)) {
                plVar2 = plVar2 + (long)(int)uVar12 + 4;
                *plVar2 = param_3;
LAB_007fc558:
                native_sub_4326e0(plVar2,param_3);
                return;
              }
              goto LAB_007fc168;
            }
            goto LAB_007fc5ac;
          }
        }
      }
    }
  }
LAB_007fc5a8:
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* Localization$$.cctor @ 0x7fc60c
 * void Localization___cctor (const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Localization$$.cctor
   void Localization___cctor (const MethodInfo* method); */

void native_Localization___cctor_7fc60c(void)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  
  if ((bRam000000000134040d & 1) == 0) {
    native_sub_43273c(&
                      Method_System_Collections_Generic_Dictionary_string__string_____ctor___12d9728
                     );
    native_sub_43273c(&Method_System_Collections_Generic_Dictionary_string__string___ctor___12d98d8)
    ;
    native_sub_43273c(&System_Collections_Generic_Dictionary_string__string____TypeInfo_12d2368);
    native_sub_43273c(&System_Collections_Generic_Dictionary_string__string__TypeInfo_12d23c8);
    native_sub_43273c(&Localization_TypeInfo_12d50b8);
    bRam000000000134040d = 1;
  }
  lVar1 = _Localization_TypeInfo_12d50b8;
  *(undefined1 *)(*(long *)(_Localization_TypeInfo_12d50b8 + 0xb8) + 0x10) = 0;
  puVar2 = (undefined8 *)(*(long *)(lVar1 + 0xb8) + 0x18);
  *puVar2 = 0;
  native_sub_4326e0(puVar2,0);
  uVar3 = native_sub_432808(_System_Collections_Generic_Dictionary_string__string__TypeInfo_12d23c8)
  ;
  native_System_Collections_Generic_Dictionary_Action__LinkedListNode_Action_____ctor_cda13c
            (uVar3,_Method_System_Collections_Generic_Dictionary_string__string___ctor___12d98d8);
  puVar2 = (undefined8 *)(*(long *)(_Localization_TypeInfo_12d50b8 + 0xb8) + 0x20);
  *puVar2 = uVar3;
  native_sub_4326e0(puVar2,uVar3);
  uVar3 = native_sub_432808(
                           _System_Collections_Generic_Dictionary_string__string____TypeInfo_12d2368
                           );
  native_System_Collections_Generic_Dictionary_Action__LinkedListNode_Action_____ctor_cda13c
            (uVar3,_Method_System_Collections_Generic_Dictionary_string__string_____ctor___12d9728);
  puVar2 = (undefined8 *)(*(long *)(_Localization_TypeInfo_12d50b8 + 0xb8) + 0x28);
  *puVar2 = uVar3;
  native_sub_4326e0(puVar2,uVar3);
  uVar3 = native_sub_432808(_System_Collections_Generic_Dictionary_string__string__TypeInfo_12d23c8)
  ;
  native_System_Collections_Generic_Dictionary_Action__LinkedListNode_Action_____ctor_cda13c
            (uVar3,_Method_System_Collections_Generic_Dictionary_string__string___ctor___12d98d8);
  puVar2 = (undefined8 *)(*(long *)(_Localization_TypeInfo_12d50b8 + 0xb8) + 0x30);
  *puVar2 = uVar3;
  native_sub_4326e0(puVar2,uVar3);
  lVar1 = _Localization_TypeInfo_12d50b8;
  *(undefined4 *)(*(long *)(_Localization_TypeInfo_12d50b8 + 0xb8) + 0x38) = 0xffffffff;
  *(undefined1 *)(*(long *)(lVar1 + 0xb8) + 0x48) = 0;
  return;
}


