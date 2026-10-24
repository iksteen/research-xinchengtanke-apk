/* ARM64 IL2CPP native pseudocode from Ghidra.
 * Recovered implementation, not original C# source.
 * Function boundaries follow the IL2CPP method address table. */


/* GlobalSetting$$get_PlatformResourcesUrl @ 0xdefb00
 * System_String_o* GlobalSetting__get_PlatformResourcesUrl (const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GlobalSetting$$get_PlatformResourcesUrl
   System_String_o* GlobalSetting__get_PlatformResourcesUrl (const MethodInfo* method); */

long native_GlobalSetting__get_PlatformResourcesUrl_defb00(void)

{
  int iVar1;
  bool bVar2;
  bool bVar3;
  undefined4 uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long *plVar8;
  
  if ((bRam0000000001346efc & 1) == 0) {
    native_sub_43273c(&GlobalSetting_TypeInfo_12d47f8);
    native_sub_43273c(&StringLiteral_Android__12ec3e8);
    native_sub_43273c(&StringLiteral_Other__12f03f0);
    native_sub_43273c(&StringLiteral_Windows32__12f3058);
    native_sub_43273c(&StringLiteral_IOS__12ee5e8);
    bRam0000000001346efc = 1;
  }
  uVar4 = native_UnityEngine_Application__get_platform_8d6250(0);
  switch(uVar4) {
  case 2:
  case 7:
    if (((*(byte *)(_GlobalSetting_TypeInfo_12d47f8 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_GlobalSetting_TypeInfo_12d47f8 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    plVar8 = (long *)&StringLiteral_Windows32__12f3058;
    break;
  default:
    if (((*(byte *)(_GlobalSetting_TypeInfo_12d47f8 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_GlobalSetting_TypeInfo_12d47f8 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    plVar8 = (long *)&StringLiteral_Other__12f03f0;
    break;
  case 8:
    if (((*(byte *)(_GlobalSetting_TypeInfo_12d47f8 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_GlobalSetting_TypeInfo_12d47f8 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    plVar8 = (long *)&StringLiteral_IOS__12ee5e8;
    break;
  case 0xb:
    if (((*(byte *)(_GlobalSetting_TypeInfo_12d47f8 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_GlobalSetting_TypeInfo_12d47f8 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    plVar8 = (long *)&StringLiteral_Android__12ec3e8;
  }
  lVar7 = *plVar8;
  lVar6 = **(long **)(_GlobalSetting_TypeInfo_12d47f8 + 0xb8);
  if ((bRam000000000134213f & 1) == 0) {
    native_sub_43273c(&string_TypeInfo_12d5f28,lVar7,0);
    bRam000000000134213f = 1;
  }
  if (lVar6 == 0) {
    bVar2 = true;
  }
  else {
    bVar2 = *(int *)(lVar6 + 0x10) == 0;
  }
  if (lVar7 == 0) {
    bVar3 = true;
  }
  else {
    bVar3 = *(int *)(lVar7 + 0x10) == 0;
  }
  if (bVar2) {
    lVar6 = lVar7;
    if (bVar3) {
      lVar6 = **(long **)(_string_TypeInfo_12d5f28 + 0xb8);
    }
  }
  else if (!bVar3) {
    if ((lVar6 == 0) || (lVar7 == 0)) {
                    /* WARNING: Subroutine does not return */
      native_sub_432810();
    }
    iVar1 = *(int *)(lVar6 + 0x10);
    lVar5 = native_sub_3bca18(*(int *)(lVar7 + 0x10) + iVar1);
    native_System_String__FillStringChecked_b0a62c(lVar5,0,lVar6);
    native_System_String__FillStringChecked_b0a62c(lVar5,iVar1,lVar7);
    lVar6 = lVar5;
  }
  return lVar6;
}



/* GlobalSetting$$GetNameByWholePath @ 0xdefc5c
 * System_String_o* GlobalSetting__GetNameByWholePath (System_String_o* path, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GlobalSetting$$GetNameByWholePath
   System_String_o* GlobalSetting__GetNameByWholePath (System_String_o* path, const MethodInfo*
   method); */

long native_GlobalSetting__GetNameByWholePath_defc5c(long param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long lVar9;
  
  if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
    native_sub_432810();
  }
  iVar2 = native_System_String__LastIndexOf_b0c42c(param_1,0x2f,0);
  iVar3 = native_System_String__LastIndexOf_b0c42c(param_1,0x2e,0);
  uVar4 = native_System_String__LastIndexOf_b0c42c(param_1,0x2f,0);
  iVar2 = iVar2 + 1;
  iVar3 = iVar3 + ~uVar4;
  if ((bRam0000000001342123 & 1) == 0) {
    native_sub_43273c(&string_TypeInfo_12d5f28,iVar2,iVar3,0);
    bRam0000000001342123 = 1;
  }
  if (iVar2 < 0) {
    puVar5 = &StringLiteral_StartIndex_cannot_be_less_than_zero__12f1060;
  }
  else {
    iVar1 = *(int *)(param_1 + 0x10);
    if (iVar2 <= iVar1) {
      if (iVar3 < 0) {
        puVar5 = &StringLiteral_Length_cannot_be_less_than_zero__12ef570;
      }
      else {
        if (iVar2 <= iVar1 - iVar3) {
          if (iVar3 == 0) {
            param_1 = **(long **)(_string_TypeInfo_12d5f28 + 0xb8);
          }
          else if ((iVar2 != 0) || (iVar1 != iVar3)) {
            lVar9 = native_sub_3bca18(iVar3);
            if (lVar9 != 0) {
              native_System_Buffer__Memcpy_85e1a8
                        (lVar9 + 0x14,param_1 + (long)iVar2 * 2 + 0x14,iVar3 * 2,0);
              return lVar9;
            }
                    /* WARNING: Subroutine does not return */
            native_sub_432810();
          }
          return param_1;
        }
        puVar5 = &StringLiteral_Index_and_length_must_refer_to_a_location_within_the_string__12ee7f0
        ;
      }
      uVar6 = native_sub_432740(puVar5);
      uVar6 = native_System_Environment__GetResourceString_beaba8(uVar6,0);
      native_sub_432740(&System_ArgumentOutOfRangeException_TypeInfo_12d3810);
      uVar7 = native_sub_432808();
      puVar5 = &StringLiteral_length_12f5428;
      goto code_r0x00b0a0e0;
    }
    puVar5 = &StringLiteral_startIndex_cannot_be_larger_than_length_of_string__12f6240;
  }
  uVar6 = native_sub_432740(puVar5);
  uVar6 = native_System_Environment__GetResourceString_beaba8(uVar6,0);
  native_sub_432740(&System_ArgumentOutOfRangeException_TypeInfo_12d3810);
  uVar7 = native_sub_432808();
  puVar5 = &StringLiteral_startIndex_12f6228;
code_r0x00b0a0e0:
  uVar8 = native_sub_432740(puVar5);
  native_System_ArgumentOutOfRangeException___ctor_951f98(uVar7,uVar8,uVar6,0);
  uVar6 = native_sub_432740(&Method_System_String_Substring___12e6d80);
                    /* WARNING: Subroutine does not return */
  native_sub_4327dc(uVar7,uVar6);
}



/* GlobalSetting$$.ctor @ 0xdefcd0
 * void GlobalSetting___ctor (GlobalSetting_o* __this, const MethodInfo* method); */

/* GlobalSetting$$.ctor
   void GlobalSetting___ctor (GlobalSetting_o* __this, const MethodInfo* method); */

void native_GlobalSetting___ctor_defcd0(void)

{
  return;
}



/* GlobalSetting$$.cctor @ 0xdefcd8
 * void GlobalSetting___cctor (const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GlobalSetting$$.cctor
   void GlobalSetting___cctor (const MethodInfo* method); */

void native_GlobalSetting___cctor_defcd8(void)

{
  if ((bRam0000000001346efd & 1) == 0) {
    native_sub_43273c(&GlobalSetting_TypeInfo_12d47f8);
    native_sub_43273c(&StringLiteral_file___D__KLSaiche_Assets_NetAssets__12f47e8);
    bRam0000000001346efd = 1;
  }
  **(undefined8 **)(_GlobalSetting_TypeInfo_12d47f8 + 0xb8) =
       _StringLiteral_file___D__KLSaiche_Assets_NetAssets__12f47e8;
  native_sub_4326e0();
  *(undefined1 *)(*(long *)(_GlobalSetting_TypeInfo_12d47f8 + 0xb8) + 8) = 1;
  return;
}


