/* ARM64 IL2CPP native pseudocode from Ghidra.
 * Recovered implementation, not original C# source.
 * Function boundaries follow the IL2CPP method address table. */


/* LanguageSelection.<>c$$.cctor @ 0x54c570
 * void LanguageSelection___c___cctor (const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LanguageSelection.<>c$$.cctor
   void LanguageSelection___c___cctor (const MethodInfo* method); */

void native_LanguageSelection___c___cctor_54c570(void)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  
  if ((bRam000000000133e9d7 & 1) == 0) {
    native_sub_43273c(&LanguageSelection___c_TypeInfo_12d73d8);
    bRam000000000133e9d7 = 1;
  }
  uVar4 = native_sub_432808(_LanguageSelection___c_TypeInfo_12d73d8);
  native_System_Object___ctor_ad2798(uVar4,0);
  puVar5 = *(undefined8 **)(_LanguageSelection___c_TypeInfo_12d73d8 + 0xb8);
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



/* LanguageSelection.<>c$$.ctor @ 0x54c5d4
 * void LanguageSelection___c___ctor (LanguageSelection___c_o* __this, const MethodInfo* method); */

/* LanguageSelection.<>c$$.ctor
   void LanguageSelection___c___ctor (LanguageSelection___c_o* __this, const MethodInfo* method); */

void native_LanguageSelection___c___ctor_54c5d4(void)

{
  return;
}



/* LanguageSelection.<>c$$<Start>b__3_0 @ 0x54c5dc
 * void LanguageSelection___c___Start_b__3_0 (LanguageSelection___c_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LanguageSelection.<>c$$<Start>b__3_0
   void LanguageSelection___c___Start_b__3_0 (LanguageSelection___c_o* __this, const MethodInfo*
   method); */

ulong native_LanguageSelection___c___Start_b__3_0_54c5dc(void)

{
  int iVar1;
  long *plVar2;
  undefined8 uVar3;
  long lVar4;
  ulong uVar5;
  undefined8 *puVar6;
  
  if ((bRam000000000133e9d8 & 1) == 0) {
    native_sub_43273c(&Localization_TypeInfo_12d50b8);
    native_sub_43273c(&UIPopupList_TypeInfo_12d6490);
    bRam000000000133e9d8 = 1;
  }
  if (((*(byte *)(_UIPopupList_TypeInfo_12d6490 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UIPopupList_TypeInfo_12d6490 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  plVar2 = (long *)**(long **)(_UIPopupList_TypeInfo_12d6490 + 0xb8);
  if (plVar2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    native_sub_432810();
  }
  uVar3 = (**(code **)(*plVar2 + 0x178))(plVar2,*(undefined8 *)(*plVar2 + 0x180));
  if (((*(byte *)(_Localization_TypeInfo_12d50b8 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_Localization_TypeInfo_12d50b8 + 0xe0) == 0)) {
    native_sub_4327ec(_Localization_TypeInfo_12d50b8);
  }
  if ((bRam00000000013403f2 & 1) == 0) {
    native_sub_43273c(&Localization_TypeInfo_12d50b8,0);
    bRam00000000013403f2 = 1;
  }
  if (((*(byte *)(_Localization_TypeInfo_12d50b8 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_Localization_TypeInfo_12d50b8 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar5 = native_System_String__op_Inequality_afbbb4
                    (*(undefined8 *)(*(long *)(_Localization_TypeInfo_12d50b8 + 0xb8) + 0x40),uVar3,
                     0);
  if ((uVar5 & 1) == 0) {
    return uVar5;
  }
  if (((*(byte *)(_Localization_TypeInfo_12d50b8 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_Localization_TypeInfo_12d50b8 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  puVar6 = (undefined8 *)(*(long *)(_Localization_TypeInfo_12d50b8 + 0xb8) + 0x40);
  *puVar6 = uVar3;
  native_sub_4326e0(puVar6,uVar3);
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
  uVar5 = native_System_String__IsNullOrEmpty_b09430(uVar3,0);
  if ((uVar5 & 1) == 0) {
    if (((*(byte *)(_Localization_TypeInfo_12d50b8 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_Localization_TypeInfo_12d50b8 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    lVar4 = *(long *)(*(long *)(_Localization_TypeInfo_12d50b8 + 0xb8) + 0x28);
    if (lVar4 == 0) goto LAB_007f88d8;
    iVar1 = native_System_Collections_Generic_Dictionary_Font__HashSet_Text____get_Count_cda3b4
                      (lVar4,
                       _Method_System_Collections_Generic_Dictionary_string__string____get_Count___12d9758
                      );
    if (iVar1 == 0) {
      if (((*(byte *)(_Localization_TypeInfo_12d50b8 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_Localization_TypeInfo_12d50b8 + 0xe0) == 0)) {
        native_sub_4327ec();
      }
      uVar5 = native_Localization__LoadDictionary_7f8264(uVar3,0);
      if ((uVar5 & 1) == 0) {
        return 0;
      }
    }
    if (((*(byte *)(_Localization_TypeInfo_12d50b8 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_Localization_TypeInfo_12d50b8 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    uVar5 = native_Localization__SelectLanguage_7f8bf0(uVar3);
    if ((uVar5 & 1) != 0) {
      return 1;
    }
  }
  if (((*(byte *)(_Localization_TypeInfo_12d50b8 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_Localization_TypeInfo_12d50b8 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  lVar4 = *(long *)(*(long *)(_Localization_TypeInfo_12d50b8 + 0xb8) + 0x20);
  if (lVar4 != 0) {
    iVar1 = native_System_Collections_Generic_Dictionary_Font__HashSet_Text____get_Count_cda3b4
                      (lVar4,
                       _Method_System_Collections_Generic_Dictionary_string__string__get_Count___12d9918
                      );
    if (0 < iVar1) {
      return 1;
    }
    if (((*(byte *)(_Localization_TypeInfo_12d50b8 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_Localization_TypeInfo_12d50b8 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    lVar4 = *(long *)(*(long *)(_Localization_TypeInfo_12d50b8 + 0xb8) + 0x20);
    if (lVar4 != 0) {
      native_System_Collections_Generic_Dictionary_object__object___Clear_cda7fc
                (lVar4,_Method_System_Collections_Generic_Dictionary_string__string__Clear___12d98f0
                );
      lVar4 = *(long *)(*(long *)(_Localization_TypeInfo_12d50b8 + 0xb8) + 0x28);
      if (lVar4 != 0) {
        native_System_Collections_Generic_Dictionary_object__object___Clear_cda7fc
                  (lVar4,
                   _Method_System_Collections_Generic_Dictionary_string__string____Clear___12d9738);
        uVar5 = native_System_String__IsNullOrEmpty_b09430(uVar3,0);
        if ((uVar5 & 1) != 0) {
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


