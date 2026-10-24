/* ARM64 IL2CPP native pseudocode from Ghidra.
 * Recovered implementation, not original C# source.
 * Function boundaries follow the IL2CPP method address table. */


/* MG_BlocksEngine2.Utils.BE2_Paths$$TranslateMarkupPath @ 0x611528
 * System_String_o* MG_BlocksEngine2_Utils_BE2_Paths__TranslateMarkupPath (System_String_o* pathMarkup, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MG_BlocksEngine2.Utils.BE2_Paths$$TranslateMarkupPath
   System_String_o* MG_BlocksEngine2_Utils_BE2_Paths__TranslateMarkupPath (System_String_o*
   pathMarkup, const MethodInfo* method); */

long native_MG_BlocksEngine2_Utils_BE2_Paths__TranslateMarkupPath_611528(long param_1)

{
  ushort uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  long lVar10;
  ulong uVar11;
  undefined8 uVar12;
  long lVar13;
  long lVar14;
  undefined8 uVar15;
  ushort *puVar16;
  ushort *puVar17;
  long lVar18;
  int *piVar19;
  ulong uVar20;
  int aiStack_3b0 [202];
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  long lStack_68;
  
  if ((bRam000000000133ee95 & 1) == 0) {
    native_sub_43273c(&StringLiteral__persistentDataPath__12f3368);
    native_sub_43273c(&StringLiteral__dataPath__12f3340);
    bRam000000000133ee95 = 1;
  }
  lVar10 = native_MG_BlocksEngine2_EditorScript_BE2_Inspector__get_Instance_602da4();
  if (lVar10 != 0) {
    if ((*(char *)(lVar10 + 0xc0) == '\0') ||
       (uVar11 = native_UnityEngine_Application__get_isEditor_8d6abc(0), (uVar11 & 1) != 0)) {
      uVar12 = native_UnityEngine_Application__get_dataPath_8d6134(0);
    }
    else {
      uVar12 = native_UnityEngine_Application__get_persistentDataPath_8d6168(0);
    }
    if (param_1 != 0) {
      lVar13 = native_System_String__Replace_afd9ac
                         (param_1,_StringLiteral__dataPath__12f3340,uVar12,0);
      lVar14 = native_UnityEngine_Application__get_persistentDataPath_8d6168(0);
      lVar10 = _StringLiteral__persistentDataPath__12f3368;
      if (lVar13 != 0) {
        if (_StringLiteral__persistentDataPath__12f3368 == 0) {
          native_sub_432740(&System_ArgumentNullException_TypeInfo_12d3808,0,lVar14,0);
          uVar12 = native_sub_432808();
          uVar15 = native_sub_432740(&StringLiteral_oldValue_12f5ab8);
          native_System_ArgumentNullException___ctor_951bd8(uVar12,uVar15,0);
          uVar15 = native_sub_432740(&Method_System_String_Replace___12e6d50);
                    /* WARNING: Subroutine does not return */
          native_sub_4327dc(uVar12,uVar15);
        }
        if ((bRam0000000001342155 & 1) == 0) {
          native_sub_43273c(&string_TypeInfo_12d5f28);
          bRam0000000001342155 = 1;
        }
        if (lVar10 == 0) {
          native_sub_432740(&System_ArgumentNullException_TypeInfo_12d3808);
          uVar15 = native_sub_432808();
          uVar12 = native_sub_432740(&StringLiteral_oldValue_12f5ab8);
          native_System_ArgumentNullException___ctor_951bd8(uVar15,uVar12,0);
        }
        else {
          if (*(int *)(lVar10 + 0x10) != 0) {
            if (*(int *)(lVar13 + 0x10) == 0) {
              return lVar13;
            }
            if (lVar14 == 0) {
              lVar14 = **(long **)(_string_TypeInfo_12d5f28 + 0xb8);
            }
            lStack_68 = lVar14;
            if ((bRam0000000001342156 & 1) == 0) {
              native_sub_43273c(&Method_System_String_ReplaceUnchecked___12e6d60);
              bRam0000000001342156 = 1;
            }
            if (lVar10 == 0) {
code_r0x00b0f1f0:
                    /* WARNING: Subroutine does not return */
              native_sub_432810();
            }
            iVar6 = *(int *)(lVar13 + 0x10);
            lVar14 = lVar13;
            if (*(int *)(lVar10 + 0x10) <= iVar6) {
              if (*(int *)(lVar10 + 0x10) == 1) {
                if (lStack_68 == 0) goto code_r0x00b0f1f0;
                if (*(int *)(lStack_68 + 0x10) == 1) {
                  uVar7 = native_System_String__get_Chars_b03810(lVar10,0);
                  uVar8 = native_System_String__get_Chars_b03810(lStack_68,0);
                  lVar10 = lVar13;
                  if (((uVar7 & 0xffff) != (uVar8 & 0xffff)) &&
                     (iVar6 = *(int *)(lVar13 + 0x10), iVar6 != 0)) {
                    uVar5 = native_System_String__IndexOfUnchecked_b0e8d4(lVar13,uVar7,0,iVar6);
                    if (uVar5 != 0xffffffff) {
                      if ((int)uVar5 < 4) {
                        uVar5 = 0;
                      }
                      lVar10 = native_sub_3bca18(iVar6);
                      if (lVar10 == 0) {
                        lVar14 = 0;
                      }
                      else {
                        iVar6 = native_System_Runtime_CompilerServices_RuntimeHelpers__get_OffsetToStringData_7c2fd4
                                          (0);
                        lVar14 = lVar10 + iVar6;
                      }
                      if (uVar5 != 0) {
                        native_System_String__CharCopy_b0ef08(lVar14,lVar13 + 0x14,uVar5);
                      }
                      uVar11 = -(ulong)(uVar5 >> 0x1f) & 0xfffffffe00000000 | (ulong)uVar5 << 1;
                      if (uVar11 != (long)*(int *)(lVar13 + 0x10) * 2) {
                        lVar18 = (long)*(int *)(lVar13 + 0x10) * 2 - uVar11;
                        puVar16 = (ushort *)(lVar14 + (long)(int)uVar5 * 2);
                        puVar17 = (ushort *)(uVar11 + lVar13 + 0x14);
                        do {
                          uVar1 = (ushort)uVar8;
                          if ((uint)*puVar17 != (uVar7 & 0xffff)) {
                            uVar1 = *puVar17;
                          }
                          lVar18 = lVar18 + -2;
                          *puVar16 = uVar1;
                          puVar16 = puVar16 + 1;
                          puVar17 = puVar17 + 1;
                        } while (lVar18 != 0);
                      }
                    }
                  }
                  return lVar10;
                }
              }
              func_0x002c8be0(aiStack_3b0,0,800);
              lStack_70 = lStack_68;
              if (lStack_68 == 0) {
              }
              else {
                iVar9 = native_System_Runtime_CompilerServices_RuntimeHelpers__get_OffsetToStringData_7c2fd4
                                  (0);
                iVar6 = *(int *)(lVar13 + 0x10);
                lStack_70 = lStack_70 + iVar9;
              }
              if (0 < iVar6) {
                uVar11 = 0;
                iVar9 = 0;
                lStack_78 = lVar13 + 0x14;
                piVar19 = aiStack_3b0;
                do {
                  iVar9 = native_System_String__IndexOfUnchecked_b0ea90
                                    (lVar13,lVar10,iVar9,iVar6 - iVar9);
                  if (iVar9 < 0) {
                    if ((int)uVar11 == 0) {
                      return lVar13;
                    }
                    break;
                  }
                  if (199 < uVar11) {
                    lVar10 = native_System_String__ReplaceFallback_b0f2dc
                                       (lVar13,lVar10,lStack_68,200);
                    return lVar10;
                  }
                  *piVar19 = iVar9;
                  iVar6 = *(int *)(lVar13 + 0x10);
                  uVar11 = uVar11 + 1;
                  iVar9 = *(int *)(lVar10 + 0x10) + iVar9;
                  piVar19 = piVar19 + 1;
                } while (iVar9 < iVar6);
                if (lStack_68 == 0) {
                    /* WARNING: Subroutine does not return */
                  native_sub_432810();
                }
                if ((ulong)(((long)*(int *)(lStack_68 + 0x10) + 0x80000000) -
                           (long)*(int *)(lVar10 + 0x10)) >> 0x20 != 0) {
                  uVar12 = native_sub_432824();
                    /* WARNING: Subroutine does not return */
                  native_sub_4327dc(uVar12,_Method_System_String_ReplaceUnchecked___12e6d60);
                }
                iVar6 = *(int *)(lStack_68 + 0x10) - *(int *)(lVar10 + 0x10);
                iVar9 = (int)uVar11;
                lVar14 = (long)iVar6 * (long)iVar9;
                if ((int)lVar14 != lVar14) {
                  uVar12 = native_sub_432824();
                    /* WARNING: Subroutine does not return */
                  native_sub_4327dc(uVar12,_Method_System_String_ReplaceUnchecked___12e6d60);
                }
                iVar6 = iVar6 * iVar9;
                if (SCARRY4(*(int *)(lVar13 + 0x10),iVar6)) {
                  uVar12 = native_sub_432824();
                    /* WARNING: Subroutine does not return */
                  native_sub_4327dc(uVar12,_Method_System_String_ReplaceUnchecked___12e6d60);
                }
                lVar14 = native_sub_3bca18(iVar6 + *(int *)(lVar13 + 0x10));
                if (lVar14 == 0) {
                  lVar18 = 0;
                }
                else {
                  iVar6 = native_System_Runtime_CompilerServices_RuntimeHelpers__get_OffsetToStringData_7c2fd4
                                    (0);
                  lVar18 = lVar14 + iVar6;
                }
                lVar4 = lStack_68;
                lVar3 = lStack_70;
                lVar2 = lStack_78;
                if (iVar9 < 1) {
                  iVar6 = 0;
                  uVar11 = 0;
                }
                else {
                  lStack_88 = lVar14;
                  lStack_80 = lVar13;
                  uVar20 = 0;
                  iVar6 = 0;
                  uVar11 = uVar11 & 0xffffffff;
                  piVar19 = aiStack_3b0;
                  do {
                    iVar9 = *piVar19;
                    native_System_String__CharCopy_b0ef08
                              (lVar18 + (long)(int)uVar20 * 2,lVar2 + (long)iVar6 * 2,iVar9 - iVar6)
                    ;
                    iVar9 = (iVar9 - iVar6) + (int)uVar20;
                    iVar6 = *(int *)(lVar10 + 0x10) + *piVar19;
                    native_System_String__CharCopy_b0ef08
                              (lVar18 + (long)iVar9 * 2,lVar3,*(undefined4 *)(lVar4 + 0x10));
                    uVar11 = uVar11 - 1;
                    uVar7 = *(int *)(lVar4 + 0x10) + iVar9;
                    uVar20 = (ulong)uVar7;
                    piVar19 = piVar19 + 1;
                  } while (uVar11 != 0);
                  uVar11 = -(ulong)(uVar7 >> 0x1f) & 0xfffffffe00000000 | uVar20 << 1;
                  lVar14 = lStack_88;
                  lVar13 = lStack_80;
                }
                native_System_String__CharCopy_b0ef08
                          (uVar11 + lVar18,lStack_78 + (long)iVar6 * 2,
                           *(int *)(lVar13 + 0x10) - iVar6);
              }
            }
            return lVar14;
          }
          native_sub_432740(&System_ArgumentException_TypeInfo_12d3800);
          uVar15 = native_sub_432808();
          uVar12 = native_sub_432740(&StringLiteral_oldValue_is_the_empty_string__12f5ac0);
          native_System_ArgumentException___ctor_953858(uVar15,uVar12,0);
        }
        uVar12 = native_sub_432740(&Method_System_String_ReplaceInternal___12e6d58);
                    /* WARNING: Subroutine does not return */
        native_sub_4327dc(uVar15,uVar12);
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* MG_BlocksEngine2.Utils.BE2_Paths$$PathToResources @ 0x616ff8
 * System_String_o* MG_BlocksEngine2_Utils_BE2_Paths__PathToResources (System_String_o* pathMarkup, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MG_BlocksEngine2.Utils.BE2_Paths$$PathToResources
   System_String_o* MG_BlocksEngine2_Utils_BE2_Paths__PathToResources (System_String_o* pathMarkup,
   const MethodInfo* method); */

long native_MG_BlocksEngine2_Utils_BE2_Paths__PathToResources_616ff8(long param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  ulong uVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  
  if ((bRam000000000133ee96 & 1) == 0) {
    native_sub_43273c(&UnityEngine_Debug_TypeInfo_12d4338);
    native_sub_43273c(&StringLiteral_resources_12f5e18);
    native_sub_43273c(&StringLiteral_resources__12f5e20);
    native_sub_43273c(&StringLiteral_The_path_is_not_set_to_a_Resources_folder__12f2008);
    bRam000000000133ee96 = 1;
  }
  if ((param_1 == 0) || (lVar4 = native_System_String__ToLower_b0cf38(param_1,0), lVar4 == 0)) {
LAB_006170f8:
                    /* WARNING: Subroutine does not return */
    native_sub_432810();
  }
  uVar5 = native_System_String__Contains_b0bafc(lVar4,_StringLiteral_resources_12f5e18,0);
  if ((uVar5 & 1) == 0) {
    if (((*(byte *)(_UnityEngine_Debug_TypeInfo_12d4338 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UnityEngine_Debug_TypeInfo_12d4338 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    native_UnityEngine_Debug__LogError_8dc5cc
              (_StringLiteral_The_path_is_not_set_to_a_Resources_folder__12f2008,0);
    return param_1;
  }
  lVar4 = native_System_String__ToLower_b0cf38(param_1,0);
  if (lVar4 == 0) goto LAB_006170f8;
  iVar3 = native_System_String__IndexOf_b0c044(lVar4,_StringLiteral_resources__12f5e20,0);
  iVar3 = iVar3 + 10;
  iVar2 = *(int *)(param_1 + 0x10) - iVar3;
  if ((bRam0000000001342123 & 1) == 0) {
    native_sub_43273c(&string_TypeInfo_12d5f28);
    bRam0000000001342123 = 1;
  }
  if (iVar3 < 0) {
    puVar6 = &StringLiteral_StartIndex_cannot_be_less_than_zero__12f1060;
  }
  else {
    iVar1 = *(int *)(param_1 + 0x10);
    if (iVar3 <= iVar1) {
      if (iVar2 < 0) {
        puVar6 = &StringLiteral_Length_cannot_be_less_than_zero__12ef570;
      }
      else {
        if (iVar3 <= iVar1 - iVar2) {
          if (iVar2 == 0) {
            param_1 = **(long **)(_string_TypeInfo_12d5f28 + 0xb8);
          }
          else if ((iVar3 != 0) || (iVar1 != iVar2)) {
            lVar4 = native_sub_3bca18(iVar2);
            if (lVar4 != 0) {
              native_System_Buffer__Memcpy_85e1a8
                        (lVar4 + 0x14,param_1 + (long)iVar3 * 2 + 0x14,iVar2 * 2,0);
              return lVar4;
            }
                    /* WARNING: Subroutine does not return */
            native_sub_432810();
          }
          return param_1;
        }
        puVar6 = &StringLiteral_Index_and_length_must_refer_to_a_location_within_the_string__12ee7f0
        ;
      }
      uVar7 = native_sub_432740(puVar6);
      uVar7 = native_System_Environment__GetResourceString_beaba8(uVar7,0);
      native_sub_432740(&System_ArgumentOutOfRangeException_TypeInfo_12d3810);
      uVar8 = native_sub_432808();
      puVar6 = &StringLiteral_length_12f5428;
      goto code_r0x00b0a0e0;
    }
    puVar6 = &StringLiteral_startIndex_cannot_be_larger_than_length_of_string__12f6240;
  }
  uVar7 = native_sub_432740(puVar6);
  uVar7 = native_System_Environment__GetResourceString_beaba8(uVar7,0);
  native_sub_432740(&System_ArgumentOutOfRangeException_TypeInfo_12d3810);
  uVar8 = native_sub_432808();
  puVar6 = &StringLiteral_startIndex_12f6228;
code_r0x00b0a0e0:
  uVar9 = native_sub_432740(puVar6);
  native_System_ArgumentOutOfRangeException___ctor_951f98(uVar8,uVar9,uVar7,0);
  uVar7 = native_sub_432740(&Method_System_String_Substring___12e6d80);
                    /* WARNING: Subroutine does not return */
  native_sub_4327dc(uVar8,uVar7);
}



/* MG_BlocksEngine2.Utils.BE2_Paths$$get_NewInstructionPath @ 0x611508
 * System_String_o* MG_BlocksEngine2_Utils_BE2_Paths__get_NewInstructionPath (const MethodInfo* method); */

/* MG_BlocksEngine2.Utils.BE2_Paths$$get_NewInstructionPath
   System_String_o* MG_BlocksEngine2_Utils_BE2_Paths__get_NewInstructionPath (const MethodInfo*
   method); */

undefined8 native_MG_BlocksEngine2_Utils_BE2_Paths__get_NewInstructionPath_611508(void)

{
  long lVar1;
  
  lVar1 = native_MG_BlocksEngine2_EditorScript_BE2_Inspector__get_Instance_602da4();
  if (lVar1 != 0) {
    return *(undefined8 *)(lVar1 + 0xb0);
  }
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* MG_BlocksEngine2.Utils.BE2_Paths$$set_NewInstructionPath @ 0x6170fc
 * void MG_BlocksEngine2_Utils_BE2_Paths__set_NewInstructionPath (System_String_o* value, const MethodInfo* method); */

/* MG_BlocksEngine2.Utils.BE2_Paths$$set_NewInstructionPath
   void MG_BlocksEngine2_Utils_BE2_Paths__set_NewInstructionPath (System_String_o* value, const
   MethodInfo* method); */

void native_MG_BlocksEngine2_Utils_BE2_Paths__set_NewInstructionPath_6170fc(undefined8 param_1)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined8 *puVar5;
  
  lVar4 = native_MG_BlocksEngine2_EditorScript_BE2_Inspector__get_Instance_602da4();
  if (lVar4 != 0) {
    puVar5 = (undefined8 *)(lVar4 + 0xb0);
    *puVar5 = param_1;
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
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* MG_BlocksEngine2.Utils.BE2_Paths$$get_NewBlockPrefabPath @ 0x61712c
 * System_String_o* MG_BlocksEngine2_Utils_BE2_Paths__get_NewBlockPrefabPath (const MethodInfo* method); */

/* MG_BlocksEngine2.Utils.BE2_Paths$$get_NewBlockPrefabPath
   System_String_o* MG_BlocksEngine2_Utils_BE2_Paths__get_NewBlockPrefabPath (const MethodInfo*
   method); */

undefined8 native_MG_BlocksEngine2_Utils_BE2_Paths__get_NewBlockPrefabPath_61712c(void)

{
  long lVar1;
  
  lVar1 = native_MG_BlocksEngine2_EditorScript_BE2_Inspector__get_Instance_602da4();
  if (lVar1 != 0) {
    return *(undefined8 *)(lVar1 + 0xb8);
  }
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* MG_BlocksEngine2.Utils.BE2_Paths$$set_NewBlockPrefabPath @ 0x61714c
 * void MG_BlocksEngine2_Utils_BE2_Paths__set_NewBlockPrefabPath (System_String_o* value, const MethodInfo* method); */

/* MG_BlocksEngine2.Utils.BE2_Paths$$set_NewBlockPrefabPath
   void MG_BlocksEngine2_Utils_BE2_Paths__set_NewBlockPrefabPath (System_String_o* value, const
   MethodInfo* method); */

void native_MG_BlocksEngine2_Utils_BE2_Paths__set_NewBlockPrefabPath_61714c(undefined8 param_1)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined8 *puVar5;
  
  lVar4 = native_MG_BlocksEngine2_EditorScript_BE2_Inspector__get_Instance_602da4();
  if (lVar4 != 0) {
    puVar5 = (undefined8 *)(lVar4 + 0xb8);
    *puVar5 = param_1;
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
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* MG_BlocksEngine2.Utils.BE2_Paths$$get_SavedCodesPath @ 0x61717c
 * System_String_o* MG_BlocksEngine2_Utils_BE2_Paths__get_SavedCodesPath (const MethodInfo* method); */

/* MG_BlocksEngine2.Utils.BE2_Paths$$get_SavedCodesPath
   System_String_o* MG_BlocksEngine2_Utils_BE2_Paths__get_SavedCodesPath (const MethodInfo* method);
    */

undefined8 native_MG_BlocksEngine2_Utils_BE2_Paths__get_SavedCodesPath_61717c(void)

{
  long lVar1;
  
  lVar1 = native_MG_BlocksEngine2_EditorScript_BE2_Inspector__get_Instance_602da4();
  if (lVar1 != 0) {
    return *(undefined8 *)(lVar1 + 200);
  }
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* MG_BlocksEngine2.Utils.BE2_Paths$$set_SavedCodesPath @ 0x61719c
 * void MG_BlocksEngine2_Utils_BE2_Paths__set_SavedCodesPath (System_String_o* value, const MethodInfo* method); */

/* MG_BlocksEngine2.Utils.BE2_Paths$$set_SavedCodesPath
   void MG_BlocksEngine2_Utils_BE2_Paths__set_SavedCodesPath (System_String_o* value, const
   MethodInfo* method); */

void native_MG_BlocksEngine2_Utils_BE2_Paths__set_SavedCodesPath_61719c(undefined8 param_1)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined8 *puVar5;
  
  lVar4 = native_MG_BlocksEngine2_EditorScript_BE2_Inspector__get_Instance_602da4();
  if (lVar4 != 0) {
    puVar5 = (undefined8 *)(lVar4 + 200);
    *puVar5 = param_1;
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
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* MG_BlocksEngine2.Utils.BE2_Paths$$.ctor @ 0x6171cc
 * void MG_BlocksEngine2_Utils_BE2_Paths___ctor (MG_BlocksEngine2_Utils_BE2_Paths_o* __this, const MethodInfo* method); */

/* MG_BlocksEngine2.Utils.BE2_Paths$$.ctor
   void MG_BlocksEngine2_Utils_BE2_Paths___ctor (MG_BlocksEngine2_Utils_BE2_Paths_o* __this, const
   MethodInfo* method); */

void native_MG_BlocksEngine2_Utils_BE2_Paths___ctor_6171cc(void)

{
  return;
}


