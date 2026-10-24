/* ARM64 IL2CPP native pseudocode from Ghidra.
 * Recovered implementation, not original C# source.
 * Function boundaries follow the IL2CPP method address table. */


/* TypewriterEffect$$get_isActive @ 0x6e73ac
 * bool TypewriterEffect__get_isActive (TypewriterEffect_o* __this, const MethodInfo* method); */

/* TypewriterEffect$$get_isActive
   bool TypewriterEffect__get_isActive (TypewriterEffect_o* __this, const MethodInfo* method); */

undefined1 native_TypewriterEffect__get_isActive_6e73ac(long param_1)

{
  return *(undefined1 *)(param_1 + 0x61);
}



/* TypewriterEffect$$ResetToBeginning @ 0x6e73b4
 * void TypewriterEffect__ResetToBeginning (TypewriterEffect_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TypewriterEffect$$ResetToBeginning
   void TypewriterEffect__ResetToBeginning (TypewriterEffect_o* __this, const MethodInfo* method);
    */

void native_TypewriterEffect__ResetToBeginning_6e73b4(long param_1)

{
  int iVar1;
  int iVar2;
  char cVar3;
  short sVar4;
  ushort uVar5;
  undefined4 uVar6;
  ulong uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long lVar10;
  undefined8 *puVar11;
  long *plVar12;
  long *plVar13;
  uint *puVar14;
  long lVar15;
  uint uVar16;
  uint uVar17;
  float fVar18;
  ulong uVar19;
  float fVar20;
  int iVar21;
  ulong uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  ulong uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  
  if ((bRam000000000133f3bc & 1) == 0) {
    native_sub_43273c(&Method_BetterList_TypewriterEffect_FadeEntry__Clear___12d8a58);
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    bRam000000000133f3bc = 1;
  }
  if (*(char *)(param_1 + 0x61) != '\0') {
    uVar9 = *(undefined8 *)(param_1 + 0x40);
    if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    uVar7 = native_UnityEngine_Object__op_Inequality_8d76fc(uVar9,0,0);
    if (((uVar7 & 1) != 0) &&
       (uVar7 = native_System_String__IsNullOrEmpty_b09430(*(undefined8 *)(param_1 + 0x48),0),
       (uVar7 & 1) == 0)) {
      if (*(long *)(param_1 + 0x40) == 0) goto LAB_006e74b8;
      puVar11 = (undefined8 *)(param_1 + 0x50);
      uVar7 = native_System_String__op_Equality_afc18c
                        (*puVar11,*(undefined8 *)(*(long *)(param_1 + 0x40) + 0x1a8),0);
      if ((uVar7 & 1) != 0) {
        *(undefined8 *)(param_1 + 0x50) = *(undefined8 *)(param_1 + 0x48);
        native_sub_4326e0(puVar11);
        if (*(long *)(param_1 + 0x40) == 0) goto LAB_006e74b8;
        native_UILabel__set_text_ae81a8(*(long *)(param_1 + 0x40),*puVar11,0);
      }
    }
  }
  *(undefined4 *)(param_1 + 0x58) = 0;
  *(undefined2 *)(param_1 + 0x60) = 0x101;
  if (*(long *)(param_1 + 0x68) == 0) {
LAB_006e74b8:
                    /* WARNING: Subroutine does not return */
    native_sub_432810();
  }
  native_BetterList_TypewriterEffect_FadeEntry___Clear_ba3b64
            (*(long *)(param_1 + 0x68),
             _Method_BetterList_TypewriterEffect_FadeEntry__Clear___12d8a58);
  if ((bRam000000000133f3be & 1) == 0) {
    native_sub_43273c(&Method_BetterList_TypewriterEffect_FadeEntry__Add___12d8a50);
    native_sub_43273c(&Method_BetterList_TypewriterEffect_FadeEntry__Clear___12d8a58);
    native_sub_43273c(&Method_BetterList_TypewriterEffect_FadeEntry__RemoveAt___12d8a60);
    native_sub_43273c(&Method_UnityEngine_Component_GetComponent_UILabel____12e2bd8);
    native_sub_43273c(&EventDelegate_TypeInfo_12d4590);
    native_sub_43273c(&NGUIText_TypeInfo_12d53c0);
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    native_sub_43273c(&System_Text_StringBuilder_TypeInfo_12d5f30);
    native_sub_43273c(&TypewriterEffect_TypeInfo_12d63e8);
    native_sub_43273c(&StringLiteral__00__12f3278);
    bRam000000000133f3be = 1;
  }
  uStack_b0 = 0;
  uStack_a8 = 0;
  if (*(char *)(param_1 + 0x61) != '\0') {
    plVar13 = (long *)(param_1 + 0x40);
    lVar10 = *plVar13;
    if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    uVar7 = native_UnityEngine_Object__op_Inequality_8d76fc(lVar10,0,0);
    if ((uVar7 & 1) != 0) {
      if (*plVar13 == 0) goto LAB_006e7ec8;
      uVar7 = native_System_String__op_Inequality_afbbb4
                        (*(undefined8 *)(*plVar13 + 0x1a8),*(undefined8 *)(param_1 + 0x50),0);
      if ((uVar7 & 1) != 0) {
        *(undefined1 *)(param_1 + 0x60) = 1;
      }
    }
    if (*(char *)(param_1 + 0x60) != '\0') {
      *(undefined1 *)(param_1 + 0x60) = 0;
      *(undefined8 *)(param_1 + 0x58) = 0;
      uVar9 = native_UnityEngine_Component__GetComponent_ActiveAnimation__49daec
                        (param_1,_Method_UnityEngine_Component_GetComponent_UILabel____12e2bd8);
      *(undefined8 *)(param_1 + 0x40) = uVar9;
      native_sub_4326e0(plVar13,uVar9);
      if (*(long *)(param_1 + 0x40) == 0) goto LAB_006e7ec8;
      uVar9 = native_UILabel__get_processedText_ae9630(*(long *)(param_1 + 0x40),0);
      puVar11 = (undefined8 *)(param_1 + 0x48);
      *puVar11 = uVar9;
      native_sub_4326e0(puVar11,uVar9);
      *(undefined8 *)(param_1 + 0x50) = *puVar11;
      native_sub_4326e0(param_1 + 0x50);
      if (*(long *)(param_1 + 0x68) == 0) goto LAB_006e7ec8;
      native_BetterList_TypewriterEffect_FadeEntry___Clear_ba3b64
                (*(long *)(param_1 + 0x68),
                 _Method_BetterList_TypewriterEffect_FadeEntry__Clear___12d8a58);
      if (*(char *)(param_1 + 0x30) != '\0') {
        uVar9 = *(undefined8 *)(param_1 + 0x28);
        if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
           (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
          native_sub_4327ec();
        }
        uVar7 = native_UnityEngine_Object__op_Inequality_8d76fc(uVar9,0,0);
        if ((uVar7 & 1) != 0) {
          if (*(long *)(param_1 + 0x28) == 0) goto LAB_006e7ec8;
          native_UIScrollView__UpdatePosition_c33140(*(long *)(param_1 + 0x28),0);
        }
      }
    }
    plVar12 = (long *)(param_1 + 0x48);
    uVar7 = native_System_String__IsNullOrEmpty_b09430(*plVar12,0);
    if ((uVar7 & 1) != 0) {
      return;
    }
    if (*plVar12 == 0) goto LAB_006e7ec8;
    iVar2 = *(int *)(*plVar12 + 0x10);
    puVar14 = (uint *)(param_1 + 0x58);
    uVar17 = *puVar14;
    if ((int)*puVar14 < iVar2) {
      do {
        fVar20 = *(float *)(param_1 + 0x5c);
        fVar18 = (float)native_RealTime__get_time_72d024(0);
        uVar16 = *(uint *)(param_1 + 0x58);
        uVar17 = uVar16;
        if (fVar18 < fVar20) break;
        uVar6 = native_UnityEngine_Mathf__Max_8e4cd0(1,*(undefined4 *)(param_1 + 0x18),0);
        lVar10 = *(long *)(param_1 + 0x40);
        *(undefined4 *)(param_1 + 0x18) = uVar6;
        if (lVar10 == 0) goto LAB_006e7ec8;
        if (*(char *)(lVar10 + 0x1bc) != '\0') {
          uVar9 = native_UILabel__get_font_ae77e8(lVar10,0);
          if (((*(byte *)(_NGUIText_TypeInfo_12d53c0 + 0x133) >> 2 & 1) != 0) &&
             (*(int *)(_NGUIText_TypeInfo_12d53c0 + 0xe0) == 0)) {
            native_sub_4327ec(_NGUIText_TypeInfo_12d53c0);
          }
          puVar11 = *(undefined8 **)(_NGUIText_TypeInfo_12d53c0 + 0xb8);
          *puVar11 = uVar9;
          native_sub_4326e0(puVar11,uVar9);
          while( true ) {
            do {
              lVar10 = *plVar12;
              if (((*(byte *)(_NGUIText_TypeInfo_12d53c0 + 0x133) >> 2 & 1) != 0) &&
                 (*(int *)(_NGUIText_TypeInfo_12d53c0 + 0xe0) == 0)) {
                native_sub_4327ec();
              }
              uVar7 = native_NGUIText__ParseSymbol_80ba10(lVar10,puVar14,0);
            } while ((uVar7 & 1) != 0);
            uVar17 = *puVar14;
            if (((*(byte *)(_NGUIText_TypeInfo_12d53c0 + 0x133) >> 2 & 1) != 0) &&
               (*(int *)(_NGUIText_TypeInfo_12d53c0 + 0xe0) == 0)) {
              native_sub_4327ec();
            }
            lVar10 = native_NGUIText__GetSymbol_809ca4(plVar12,uVar17,iVar2,0);
            if (lVar10 == 0) break;
            uVar17 = *puVar14;
            iVar21 = native_BMSymbol__get_length_dd2140(lVar10,0);
            *puVar14 = (uVar17 + iVar21) - 1;
          }
        }
        uVar17 = *puVar14 + 1;
        *puVar14 = uVar17;
        if (iVar2 < (int)uVar17) break;
        iVar21 = *(int *)(param_1 + 0x18);
        if ((int)uVar16 < iVar2) {
          if (*plVar12 == 0) goto LAB_006e7ec8;
          sVar4 = native_System_String__get_Chars_b03810(*plVar12,uVar16,0);
        }
        else {
          sVar4 = 10;
        }
        iVar1 = uVar16 + 1;
        if (iVar1 < iVar2) {
          if (*plVar12 == 0) goto LAB_006e7ec8;
          uVar5 = native_System_String__get_Chars_b03810(*plVar12,iVar1,0);
        }
        else {
          uVar5 = 10;
        }
        fVar18 = 1.0 / (float)iVar21;
        if (sVar4 == 10) {
          if (0 < (int)uVar16) {
            if (*plVar12 == 0) goto LAB_006e7ec8;
            sVar4 = native_System_String__get_Chars_b03810(*plVar12,uVar16 - 1,0);
            if ((sVar4 == 0x5d) || (sVar4 == 0x2e)) {
              fVar20 = (float)native_UnityEngine_Mathf__Max_8d9f90
                                        (0,*(float *)(param_1 + 0x24) - *(float *)(param_1 + 0x20),0
                                        );
            }
            else {
              if (sVar4 != 10) goto LAB_006e795c;
              fVar20 = *(float *)(param_1 + 0x24);
            }
LAB_006e7958:
            fVar18 = fVar18 + fVar20;
          }
        }
        else if (((uVar5 == 0x5b) || (iVar1 == iVar2)) || (uVar5 < 0x21)) {
          if ((sVar4 != 0x21) && (sVar4 != 0x3f)) {
            if (sVar4 != 0x2e) goto LAB_006e795c;
            uVar17 = uVar16 + 2;
            if (((int)uVar17 < iVar2) && (uVar5 == 0x2e)) {
              if (*plVar12 == 0) goto LAB_006e7ec8;
              sVar4 = native_System_String__get_Chars_b03810(*plVar12,uVar17,0);
              if (sVar4 == 0x2e) {
                fVar20 = *(float *)(param_1 + 0x20) * 3.0;
                uVar16 = uVar17;
                goto LAB_006e7958;
              }
            }
          }
          fVar20 = *(float *)(param_1 + 0x20);
          goto LAB_006e7958;
        }
LAB_006e795c:
        fVar20 = *(float *)(param_1 + 0x5c);
        if (fVar20 == 0.0) {
          fVar20 = (float)native_RealTime__get_time_72d024(0);
        }
        *(float *)(param_1 + 0x5c) = fVar18 + fVar20;
        if (*(float *)(param_1 + 0x1c) == 0.0) {
          if (*plVar12 == 0) goto LAB_006e7ec8;
          cVar3 = *(char *)(param_1 + 0x30);
          uVar9 = native_System_String__Substring_b09fac
                            (*plVar12,0,*(undefined4 *)(param_1 + 0x58),0);
          if (cVar3 != '\0') {
            if (*plVar12 == 0) goto LAB_006e7ec8;
            uVar8 = native_System_String__Substring_b0a110(*plVar12,*puVar14,0);
            uVar9 = native_System_String__Concat_afc654(uVar9,_StringLiteral__00__12f3278,uVar8,0);
          }
          *(undefined8 *)(param_1 + 0x50) = uVar9;
          native_sub_4326e0((undefined8 *)(param_1 + 0x50),uVar9);
          if (*plVar13 == 0) goto LAB_006e7ec8;
          native_UILabel__set_text_ae81a8(*plVar13,*(undefined8 *)(param_1 + 0x50),0);
          if (*(char *)(param_1 + 0x30) == '\0') {
            uVar9 = *(undefined8 *)(param_1 + 0x28);
            if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
               (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
              native_sub_4327ec();
            }
            uVar7 = native_UnityEngine_Object__op_Inequality_8d76fc(uVar9,0,0);
            if ((uVar7 & 1) != 0) {
              if (*(long *)(param_1 + 0x28) == 0) goto LAB_006e7ec8;
              native_UIScrollView__UpdatePosition_c33140(*(long *)(param_1 + 0x28),0);
            }
          }
        }
        else {
          uStack_b0 = 0;
          uStack_b8 = (ulong)uVar16;
          uStack_a8 = 0;
          if (*plVar12 == 0) goto LAB_006e7ec8;
          uStack_b0 = native_System_String__Substring_b09fac
                                (*plVar12,uVar16,*(int *)(param_1 + 0x58) - uVar16,0);
          native_sub_4326e0(&uStack_b0,uStack_b0);
          if (*(long *)(param_1 + 0x68) == 0) goto LAB_006e7ec8;
          uStack_90 = uStack_a8;
          uStack_98 = uStack_b0;
          uStack_a0 = uStack_b8;
          native_BetterList_TypewriterEffect_FadeEntry___Add_ba3b7c
                    (*(long *)(param_1 + 0x68),&uStack_a0,
                     _Method_BetterList_TypewriterEffect_FadeEntry__Add___12d8a50);
        }
        uVar17 = *puVar14;
      } while ((int)uVar17 < iVar2);
    }
    lVar10 = *(long *)(param_1 + 0x68);
    if ((int)uVar17 < iVar2) {
      if (lVar10 == 0) goto LAB_006e7ec8;
    }
    else {
      if (lVar10 == 0) goto LAB_006e7ec8;
      if (*(int *)(lVar10 + 0x18) == 0) {
        *(undefined8 *)(param_1 + 0x50) = *(undefined8 *)(param_1 + 0x48);
        native_sub_4326e0(param_1 + 0x50);
        if (*(long *)(param_1 + 0x40) != 0) {
          native_UILabel__set_text_ae81a8
                    (*(long *)(param_1 + 0x40),*(undefined8 *)(param_1 + 0x50),0);
          plVar13 = *(long **)(_TypewriterEffect_TypeInfo_12d63e8 + 0xb8);
          *plVar13 = param_1;
          native_sub_4326e0(plVar13,param_1);
          uVar9 = *(undefined8 *)(param_1 + 0x38);
          if (((*(byte *)(_EventDelegate_TypeInfo_12d4590 + 0x133) >> 2 & 1) != 0) &&
             (*(int *)(_EventDelegate_TypeInfo_12d4590 + 0xe0) == 0)) {
            native_sub_4327ec();
          }
          native_EventDelegate__Execute_deecbc(uVar9,0);
          puVar11 = *(undefined8 **)(_TypewriterEffect_TypeInfo_12d63e8 + 0xb8);
          *puVar11 = 0;
          native_sub_4326e0(puVar11,0);
          *(undefined1 *)(param_1 + 0x61) = 0;
          return;
        }
        goto LAB_006e7ec8;
      }
    }
    if (*(int *)(lVar10 + 0x18) != 0) {
      uVar7 = 0;
      do {
        while( true ) {
          if ((long)*(int *)(lVar10 + 0x18) <= (long)uVar7) {
            if (*(int *)(lVar10 + 0x18) != 0) {
              plVar13 = (long *)native_sub_432808(_System_Text_StringBuilder_TypeInfo_12d5f30);
              native_System_Text_StringBuilder___ctor_a4881c(plVar13,0);
              lVar10 = *(long *)(param_1 + 0x68);
              if (lVar10 != 0) {
                lVar15 = 0;
                uVar7 = 0;
                goto LAB_006e7c1c;
              }
              goto LAB_006e7ec8;
            }
            if (iVar2 <= (int)*puVar14) {
              return;
            }
            if (*plVar12 == 0) goto LAB_006e7ec8;
            cVar3 = *(char *)(param_1 + 0x30);
            uVar9 = native_System_String__Substring_b09fac(*plVar12,0,*puVar14,0);
            if (cVar3 == '\0') {
              *(undefined8 *)(param_1 + 0x50) = uVar9;
            }
            else {
              if (*plVar12 == 0) goto LAB_006e7ec8;
              uVar8 = native_System_String__Substring_b0a110
                                (*plVar12,*(undefined4 *)(param_1 + 0x58),0);
              uVar9 = native_System_String__Concat_afc654(uVar9,_StringLiteral__00__12f3278,uVar8,0)
              ;
              *(undefined8 *)(param_1 + 0x50) = uVar9;
            }
            native_sub_4326e0(param_1 + 0x50,uVar9);
            lVar10 = *plVar13;
            if (lVar10 != 0) {
              uVar9 = *(undefined8 *)(param_1 + 0x50);
              goto LAB_006e7e98;
            }
            goto LAB_006e7ec8;
          }
          lVar10 = *(long *)(lVar10 + 0x10);
          if (lVar10 == 0) goto LAB_006e7ec8;
          if (*(uint *)(lVar10 + 0x18) <= uVar7) goto LAB_006e7ecc;
          lVar10 = lVar10 + uVar7 * 0x18;
          uVar9 = *(undefined8 *)(lVar10 + 0x28);
          uVar19 = *(ulong *)(lVar10 + 0x20);
          fVar20 = *(float *)(lVar10 + 0x30);
          uVar6 = *(undefined4 *)(lVar10 + 0x34);
          fVar18 = (float)native_RealTime__get_deltaTime_73d0b8(0);
          lVar10 = *(long *)(param_1 + 0x68);
          if (lVar10 == 0) goto LAB_006e7ec8;
          fVar20 = fVar20 + fVar18 / *(float *)(param_1 + 0x1c);
          if (fVar20 < 1.0) break;
          native_BetterList_TypewriterEffect_FadeEntry___RemoveAt_ba42cc
                    (lVar10,uVar7 & 0xffffffff,
                     _Method_BetterList_TypewriterEffect_FadeEntry__RemoveAt___12d8a60);
          lVar10 = *(long *)(param_1 + 0x68);
          if (lVar10 == 0) goto LAB_006e7ec8;
        }
        lVar10 = *(long *)(lVar10 + 0x10);
        uStack_a0 = uVar19;
        uStack_98 = uVar9;
        if (lVar10 == 0) break;
        if (*(uint *)(lVar10 + 0x18) <= uVar7) goto LAB_006e7ecc;
        lVar10 = lVar10 + uVar7 * 0x18;
        *(float *)(lVar10 + 0x30) = fVar20;
        *(undefined4 *)(lVar10 + 0x34) = uVar6;
        *(undefined8 *)(lVar10 + 0x28) = uVar9;
        *(ulong *)(lVar10 + 0x20) = uVar19;
        native_sub_4326e0(lVar10 + 0x28,0);
        lVar10 = *(long *)(param_1 + 0x68);
        uVar7 = uVar7 + 1;
      } while (lVar10 != 0);
LAB_006e7ec8:
                    /* WARNING: Subroutine does not return */
      native_sub_432810();
    }
  }
  return;
LAB_006e7c1c:
  if ((long)*(int *)(lVar10 + 0x18) <= (long)uVar7) {
    if ((*(char *)(param_1 + 0x30) == '\0') || (iVar2 <= (int)*puVar14)) {
      if (plVar13 == (long *)0x0) goto LAB_006e7ec8;
    }
    else {
      if (plVar13 == (long *)0x0) goto LAB_006e7ec8;
      native_System_Text_StringBuilder__Append_a49d68(plVar13,_StringLiteral__00__12f3278,0);
      if (*plVar12 == 0) goto LAB_006e7ec8;
      uVar9 = native_System_String__Substring_b0a110(*plVar12,*puVar14,0);
      native_System_Text_StringBuilder__Append_a49d68(plVar13,uVar9,0);
    }
    uVar9 = (**(code **)(*plVar13 + 0x168))(plVar13,*(undefined8 *)(*plVar13 + 0x170));
    puVar11 = (undefined8 *)(param_1 + 0x50);
    *puVar11 = uVar9;
    native_sub_4326e0(puVar11,uVar9);
    lVar10 = *(long *)(param_1 + 0x40);
    if (lVar10 != 0) {
      uVar9 = *puVar11;
LAB_006e7e98:
      native_UILabel__set_text_ae81a8(lVar10,uVar9,0);
      return;
    }
    goto LAB_006e7ec8;
  }
  lVar10 = *(long *)(lVar10 + 0x10);
  if (lVar10 == 0) goto LAB_006e7ec8;
  if (*(uint *)(lVar10 + 0x18) <= uVar7) {
LAB_006e7ecc:
    uVar9 = native_sub_43283c();
                    /* WARNING: Subroutine does not return */
    native_sub_4327dc(uVar9,0);
  }
  lVar10 = lVar10 + lVar15;
  uVar9 = *(undefined8 *)(lVar10 + 0x28);
  uVar6 = *(undefined4 *)(lVar10 + 0x30);
  if (lVar15 == 0) {
    if ((*plVar12 == 0) ||
       (uVar8 = native_System_String__Substring_b09fac(*plVar12,0,*(undefined4 *)(lVar10 + 0x20),0),
       plVar13 == (long *)0x0)) goto LAB_006e7ec8;
    native_System_Text_StringBuilder__Append_a49d68(plVar13,uVar8,0);
  }
  else if (plVar13 == (long *)0x0) goto LAB_006e7ec8;
  native_System_Text_StringBuilder__Append_a4a9d8(plVar13,0x5b,0);
  if (((*(byte *)(_NGUIText_TypeInfo_12d53c0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_NGUIText_TypeInfo_12d53c0 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar8 = native_NGUIText__EncodeAlpha_80b8f0(uVar6,0);
  native_System_Text_StringBuilder__Append_a49d68(plVar13,uVar8,0);
  native_System_Text_StringBuilder__Append_a4a9d8(plVar13,0x5d,0);
  native_System_Text_StringBuilder__Append_a49d68(plVar13,uVar9,0);
  lVar10 = *(long *)(param_1 + 0x68);
  uVar7 = uVar7 + 1;
  lVar15 = lVar15 + 0x18;
  if (lVar10 == 0) goto LAB_006e7ec8;
  goto LAB_006e7c1c;
}



/* TypewriterEffect$$Finish @ 0x6e7ed8
 * void TypewriterEffect__Finish (TypewriterEffect_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TypewriterEffect$$Finish
   void TypewriterEffect__Finish (TypewriterEffect_o* __this, const MethodInfo* method); */

void native_TypewriterEffect__Finish_6e7ed8(long param_1)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  ulong uVar4;
  long *plVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  
  if ((bRam000000000133f3bd & 1) == 0) {
    native_sub_43273c(&Method_BetterList_TypewriterEffect_FadeEntry__Clear___12d8a58);
    native_sub_43273c(&EventDelegate_TypeInfo_12d4590);
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    native_sub_43273c(&TypewriterEffect_TypeInfo_12d63e8);
    bRam000000000133f3bd = 1;
  }
  if (*(char *)(param_1 + 0x61) == '\0') {
    return;
  }
  *(undefined1 *)(param_1 + 0x61) = 0;
  uVar4 = native_System_String__IsNullOrEmpty_b09430(*(undefined8 *)(param_1 + 0x48),0);
  if ((uVar4 & 1) == 0) {
    if (*(char *)(param_1 + 0x60) == '\0') {
      uVar7 = *(undefined8 *)(param_1 + 0x40);
      if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
        native_sub_4327ec();
      }
      uVar4 = native_UnityEngine_Object__op_Inequality_8d76fc(uVar7,0,0);
      if ((uVar4 & 1) != 0) {
        if (*(long *)(param_1 + 0x40) == 0) goto LAB_006e80b4;
        uVar4 = native_System_String__op_Equality_afc18c
                          (*(undefined8 *)(param_1 + 0x50),
                           *(undefined8 *)(*(long *)(param_1 + 0x40) + 0x1a8),0);
        if ((uVar4 & 1) != 0) {
          if (*(long *)(param_1 + 0x40) == 0) goto LAB_006e80b4;
          native_UILabel__set_text_ae81a8
                    (*(long *)(param_1 + 0x40),*(undefined8 *)(param_1 + 0x48),0);
        }
      }
    }
    *(undefined8 *)(param_1 + 0x50) = *(undefined8 *)(param_1 + 0x48);
    native_sub_4326e0(param_1 + 0x50);
    if (*(long *)(param_1 + 0x48) == 0) goto LAB_006e80b4;
    *(undefined4 *)(param_1 + 0x58) = *(undefined4 *)(*(long *)(param_1 + 0x48) + 0x10);
  }
  if (*(long *)(param_1 + 0x68) != 0) {
    native_BetterList_TypewriterEffect_FadeEntry___Clear_ba3b64
              (*(long *)(param_1 + 0x68),
               _Method_BetterList_TypewriterEffect_FadeEntry__Clear___12d8a58);
    if (*(char *)(param_1 + 0x30) != '\0') {
      uVar7 = *(undefined8 *)(param_1 + 0x28);
      if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
        native_sub_4327ec();
      }
      uVar4 = native_UnityEngine_Object__op_Inequality_8d76fc(uVar7,0,0);
      if ((uVar4 & 1) != 0) {
        if (*(long *)(param_1 + 0x28) == 0) goto LAB_006e80b4;
        native_UIScrollView__UpdatePosition_c33140(*(long *)(param_1 + 0x28),0);
      }
    }
    plVar5 = *(long **)(_TypewriterEffect_TypeInfo_12d63e8 + 0xb8);
    *plVar5 = param_1;
    native_sub_4326e0(plVar5,param_1);
    uVar7 = *(undefined8 *)(param_1 + 0x38);
    if (((*(byte *)(_EventDelegate_TypeInfo_12d4590 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_EventDelegate_TypeInfo_12d4590 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    native_EventDelegate__Execute_deecbc(uVar7,0);
    puVar6 = *(undefined8 **)(_TypewriterEffect_TypeInfo_12d63e8 + 0xb8);
    *puVar6 = 0;
    if (iRam0000000001345318 != 0) {
      puVar1 = (ulong *)(((ulong)puVar6 >> 0x12 & 0x7fff) * 8 + 0x138ecd8);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = *puVar1 | 1L << ((ulong)puVar6 >> 0xc & 0x3f);
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    return;
  }
LAB_006e80b4:
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* TypewriterEffect$$OnEnable @ 0x6e80b8
 * void TypewriterEffect__OnEnable (TypewriterEffect_o* __this, const MethodInfo* method); */

/* TypewriterEffect$$OnEnable
   void TypewriterEffect__OnEnable (TypewriterEffect_o* __this, const MethodInfo* method); */

void native_TypewriterEffect__OnEnable_6e80b8(long param_1)

{
  *(undefined2 *)(param_1 + 0x60) = 0x101;
  return;
}



/* TypewriterEffect$$OnDisable @ 0x6e80c4
 * void TypewriterEffect__OnDisable (TypewriterEffect_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TypewriterEffect$$OnDisable
   void TypewriterEffect__OnDisable (TypewriterEffect_o* __this, const MethodInfo* method); */

void native_TypewriterEffect__OnDisable_6e80c4(long param_1)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  ulong uVar4;
  long *plVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  
  if ((bRam000000000133f3bd & 1) == 0) {
    native_sub_43273c(&Method_BetterList_TypewriterEffect_FadeEntry__Clear___12d8a58);
    native_sub_43273c(&EventDelegate_TypeInfo_12d4590);
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    native_sub_43273c(&TypewriterEffect_TypeInfo_12d63e8);
    bRam000000000133f3bd = 1;
  }
  if (*(char *)(param_1 + 0x61) == '\0') {
    return;
  }
  *(undefined1 *)(param_1 + 0x61) = 0;
  uVar4 = native_System_String__IsNullOrEmpty_b09430(*(undefined8 *)(param_1 + 0x48),0);
  if ((uVar4 & 1) == 0) {
    if (*(char *)(param_1 + 0x60) == '\0') {
      uVar7 = *(undefined8 *)(param_1 + 0x40);
      if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
        native_sub_4327ec();
      }
      uVar4 = native_UnityEngine_Object__op_Inequality_8d76fc(uVar7,0,0);
      if ((uVar4 & 1) != 0) {
        if (*(long *)(param_1 + 0x40) == 0) goto LAB_006e80b4;
        uVar4 = native_System_String__op_Equality_afc18c
                          (*(undefined8 *)(param_1 + 0x50),
                           *(undefined8 *)(*(long *)(param_1 + 0x40) + 0x1a8),0);
        if ((uVar4 & 1) != 0) {
          if (*(long *)(param_1 + 0x40) == 0) goto LAB_006e80b4;
          native_UILabel__set_text_ae81a8
                    (*(long *)(param_1 + 0x40),*(undefined8 *)(param_1 + 0x48),0);
        }
      }
    }
    *(undefined8 *)(param_1 + 0x50) = *(undefined8 *)(param_1 + 0x48);
    native_sub_4326e0(param_1 + 0x50);
    if (*(long *)(param_1 + 0x48) == 0) goto LAB_006e80b4;
    *(undefined4 *)(param_1 + 0x58) = *(undefined4 *)(*(long *)(param_1 + 0x48) + 0x10);
  }
  if (*(long *)(param_1 + 0x68) != 0) {
    native_BetterList_TypewriterEffect_FadeEntry___Clear_ba3b64
              (*(long *)(param_1 + 0x68),
               _Method_BetterList_TypewriterEffect_FadeEntry__Clear___12d8a58);
    if (*(char *)(param_1 + 0x30) != '\0') {
      uVar7 = *(undefined8 *)(param_1 + 0x28);
      if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
         (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
        native_sub_4327ec();
      }
      uVar4 = native_UnityEngine_Object__op_Inequality_8d76fc(uVar7,0,0);
      if ((uVar4 & 1) != 0) {
        if (*(long *)(param_1 + 0x28) == 0) goto LAB_006e80b4;
        native_UIScrollView__UpdatePosition_c33140(*(long *)(param_1 + 0x28),0);
      }
    }
    plVar5 = *(long **)(_TypewriterEffect_TypeInfo_12d63e8 + 0xb8);
    *plVar5 = param_1;
    native_sub_4326e0(plVar5,param_1);
    uVar7 = *(undefined8 *)(param_1 + 0x38);
    if (((*(byte *)(_EventDelegate_TypeInfo_12d4590 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_EventDelegate_TypeInfo_12d4590 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    native_EventDelegate__Execute_deecbc(uVar7,0);
    puVar6 = *(undefined8 **)(_TypewriterEffect_TypeInfo_12d63e8 + 0xb8);
    *puVar6 = 0;
    if (iRam0000000001345318 != 0) {
      puVar1 = (ulong *)(((ulong)puVar6 >> 0x12 & 0x7fff) * 8 + 0x138ecd8);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = *puVar1 | 1L << ((ulong)puVar6 >> 0xc & 0x3f);
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    return;
  }
LAB_006e80b4:
                    /* WARNING: Subroutine does not return */
  native_sub_432810();
}



/* TypewriterEffect$$OnApplicationQuit @ 0x6e80c8
 * void TypewriterEffect__OnApplicationQuit (TypewriterEffect_o* __this, const MethodInfo* method); */

/* TypewriterEffect$$OnApplicationQuit
   void TypewriterEffect__OnApplicationQuit (TypewriterEffect_o* __this, const MethodInfo* method);
    */

void native_TypewriterEffect__OnApplicationQuit_6e80c8(long param_1)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  
  puVar4 = (undefined8 *)(param_1 + 0x38);
  *puVar4 = 0;
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



/* TypewriterEffect$$Update @ 0x6e74bc
 * void TypewriterEffect__Update (TypewriterEffect_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TypewriterEffect$$Update
   void TypewriterEffect__Update (TypewriterEffect_o* __this, const MethodInfo* method); */

void native_TypewriterEffect__Update_6e74bc(long param_1)

{
  int iVar1;
  int iVar2;
  char cVar3;
  short sVar4;
  ushort uVar5;
  undefined4 uVar6;
  ulong uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long lVar10;
  undefined8 *puVar11;
  long *plVar12;
  long *plVar13;
  uint *puVar14;
  long lVar15;
  uint uVar16;
  uint uVar17;
  float fVar18;
  ulong uVar19;
  float fVar20;
  int iVar21;
  ulong uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  ulong uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  
  if ((bRam000000000133f3be & 1) == 0) {
    native_sub_43273c(&Method_BetterList_TypewriterEffect_FadeEntry__Add___12d8a50);
    native_sub_43273c(&Method_BetterList_TypewriterEffect_FadeEntry__Clear___12d8a58);
    native_sub_43273c(&Method_BetterList_TypewriterEffect_FadeEntry__RemoveAt___12d8a60);
    native_sub_43273c(&Method_UnityEngine_Component_GetComponent_UILabel____12e2bd8);
    native_sub_43273c(&EventDelegate_TypeInfo_12d4590);
    native_sub_43273c(&NGUIText_TypeInfo_12d53c0);
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0);
    native_sub_43273c(&System_Text_StringBuilder_TypeInfo_12d5f30);
    native_sub_43273c(&TypewriterEffect_TypeInfo_12d63e8);
    native_sub_43273c(&StringLiteral__00__12f3278);
    bRam000000000133f3be = 1;
  }
  uStack_b0 = 0;
  uStack_a8 = 0;
  if (*(char *)(param_1 + 0x61) != '\0') {
    plVar13 = (long *)(param_1 + 0x40);
    lVar10 = *plVar13;
    if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
       (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
      native_sub_4327ec();
    }
    uVar7 = native_UnityEngine_Object__op_Inequality_8d76fc(lVar10,0,0);
    if ((uVar7 & 1) != 0) {
      if (*plVar13 == 0) goto LAB_006e7ec8;
      uVar7 = native_System_String__op_Inequality_afbbb4
                        (*(undefined8 *)(*plVar13 + 0x1a8),*(undefined8 *)(param_1 + 0x50),0);
      if ((uVar7 & 1) != 0) {
        *(undefined1 *)(param_1 + 0x60) = 1;
      }
    }
    if (*(char *)(param_1 + 0x60) != '\0') {
      *(undefined1 *)(param_1 + 0x60) = 0;
      *(undefined8 *)(param_1 + 0x58) = 0;
      uVar8 = native_UnityEngine_Component__GetComponent_ActiveAnimation__49daec
                        (param_1,_Method_UnityEngine_Component_GetComponent_UILabel____12e2bd8);
      *(undefined8 *)(param_1 + 0x40) = uVar8;
      native_sub_4326e0(plVar13,uVar8);
      if (*(long *)(param_1 + 0x40) == 0) goto LAB_006e7ec8;
      uVar8 = native_UILabel__get_processedText_ae9630(*(long *)(param_1 + 0x40),0);
      puVar11 = (undefined8 *)(param_1 + 0x48);
      *puVar11 = uVar8;
      native_sub_4326e0(puVar11,uVar8);
      *(undefined8 *)(param_1 + 0x50) = *puVar11;
      native_sub_4326e0(param_1 + 0x50);
      if (*(long *)(param_1 + 0x68) == 0) goto LAB_006e7ec8;
      native_BetterList_TypewriterEffect_FadeEntry___Clear_ba3b64
                (*(long *)(param_1 + 0x68),
                 _Method_BetterList_TypewriterEffect_FadeEntry__Clear___12d8a58);
      if (*(char *)(param_1 + 0x30) != '\0') {
        uVar8 = *(undefined8 *)(param_1 + 0x28);
        if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
           (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
          native_sub_4327ec();
        }
        uVar7 = native_UnityEngine_Object__op_Inequality_8d76fc(uVar8,0,0);
        if ((uVar7 & 1) != 0) {
          if (*(long *)(param_1 + 0x28) == 0) goto LAB_006e7ec8;
          native_UIScrollView__UpdatePosition_c33140(*(long *)(param_1 + 0x28),0);
        }
      }
    }
    plVar12 = (long *)(param_1 + 0x48);
    uVar7 = native_System_String__IsNullOrEmpty_b09430(*plVar12,0);
    if ((uVar7 & 1) != 0) {
      return;
    }
    if (*plVar12 == 0) goto LAB_006e7ec8;
    iVar2 = *(int *)(*plVar12 + 0x10);
    puVar14 = (uint *)(param_1 + 0x58);
    uVar17 = *puVar14;
    if ((int)*puVar14 < iVar2) {
      do {
        fVar20 = *(float *)(param_1 + 0x5c);
        fVar18 = (float)native_RealTime__get_time_72d024(0);
        uVar16 = *(uint *)(param_1 + 0x58);
        uVar17 = uVar16;
        if (fVar18 < fVar20) break;
        uVar6 = native_UnityEngine_Mathf__Max_8e4cd0(1,*(undefined4 *)(param_1 + 0x18),0);
        lVar10 = *(long *)(param_1 + 0x40);
        *(undefined4 *)(param_1 + 0x18) = uVar6;
        if (lVar10 == 0) goto LAB_006e7ec8;
        if (*(char *)(lVar10 + 0x1bc) != '\0') {
          uVar8 = native_UILabel__get_font_ae77e8(lVar10,0);
          if (((*(byte *)(_NGUIText_TypeInfo_12d53c0 + 0x133) >> 2 & 1) != 0) &&
             (*(int *)(_NGUIText_TypeInfo_12d53c0 + 0xe0) == 0)) {
            native_sub_4327ec(_NGUIText_TypeInfo_12d53c0);
          }
          puVar11 = *(undefined8 **)(_NGUIText_TypeInfo_12d53c0 + 0xb8);
          *puVar11 = uVar8;
          native_sub_4326e0(puVar11,uVar8);
          while( true ) {
            do {
              lVar10 = *plVar12;
              if (((*(byte *)(_NGUIText_TypeInfo_12d53c0 + 0x133) >> 2 & 1) != 0) &&
                 (*(int *)(_NGUIText_TypeInfo_12d53c0 + 0xe0) == 0)) {
                native_sub_4327ec();
              }
              uVar7 = native_NGUIText__ParseSymbol_80ba10(lVar10,puVar14,0);
            } while ((uVar7 & 1) != 0);
            uVar17 = *puVar14;
            if (((*(byte *)(_NGUIText_TypeInfo_12d53c0 + 0x133) >> 2 & 1) != 0) &&
               (*(int *)(_NGUIText_TypeInfo_12d53c0 + 0xe0) == 0)) {
              native_sub_4327ec();
            }
            lVar10 = native_NGUIText__GetSymbol_809ca4(plVar12,uVar17,iVar2,0);
            if (lVar10 == 0) break;
            uVar17 = *puVar14;
            iVar21 = native_BMSymbol__get_length_dd2140(lVar10,0);
            *puVar14 = (uVar17 + iVar21) - 1;
          }
        }
        uVar17 = *puVar14 + 1;
        *puVar14 = uVar17;
        if (iVar2 < (int)uVar17) break;
        iVar21 = *(int *)(param_1 + 0x18);
        if ((int)uVar16 < iVar2) {
          if (*plVar12 == 0) goto LAB_006e7ec8;
          sVar4 = native_System_String__get_Chars_b03810(*plVar12,uVar16,0);
        }
        else {
          sVar4 = 10;
        }
        iVar1 = uVar16 + 1;
        if (iVar1 < iVar2) {
          if (*plVar12 == 0) goto LAB_006e7ec8;
          uVar5 = native_System_String__get_Chars_b03810(*plVar12,iVar1,0);
        }
        else {
          uVar5 = 10;
        }
        fVar18 = 1.0 / (float)iVar21;
        if (sVar4 == 10) {
          if (0 < (int)uVar16) {
            if (*plVar12 == 0) goto LAB_006e7ec8;
            sVar4 = native_System_String__get_Chars_b03810(*plVar12,uVar16 - 1,0);
            if ((sVar4 == 0x5d) || (sVar4 == 0x2e)) {
              fVar20 = (float)native_UnityEngine_Mathf__Max_8d9f90
                                        (0,*(float *)(param_1 + 0x24) - *(float *)(param_1 + 0x20),0
                                        );
            }
            else {
              if (sVar4 != 10) goto LAB_006e795c;
              fVar20 = *(float *)(param_1 + 0x24);
            }
LAB_006e7958:
            fVar18 = fVar18 + fVar20;
          }
        }
        else if (((uVar5 == 0x5b) || (iVar1 == iVar2)) || (uVar5 < 0x21)) {
          if ((sVar4 != 0x21) && (sVar4 != 0x3f)) {
            if (sVar4 != 0x2e) goto LAB_006e795c;
            uVar17 = uVar16 + 2;
            if (((int)uVar17 < iVar2) && (uVar5 == 0x2e)) {
              if (*plVar12 == 0) goto LAB_006e7ec8;
              sVar4 = native_System_String__get_Chars_b03810(*plVar12,uVar17,0);
              if (sVar4 == 0x2e) {
                fVar20 = *(float *)(param_1 + 0x20) * 3.0;
                uVar16 = uVar17;
                goto LAB_006e7958;
              }
            }
          }
          fVar20 = *(float *)(param_1 + 0x20);
          goto LAB_006e7958;
        }
LAB_006e795c:
        fVar20 = *(float *)(param_1 + 0x5c);
        if (fVar20 == 0.0) {
          fVar20 = (float)native_RealTime__get_time_72d024(0);
        }
        *(float *)(param_1 + 0x5c) = fVar18 + fVar20;
        if (*(float *)(param_1 + 0x1c) == 0.0) {
          if (*plVar12 == 0) goto LAB_006e7ec8;
          cVar3 = *(char *)(param_1 + 0x30);
          uVar8 = native_System_String__Substring_b09fac
                            (*plVar12,0,*(undefined4 *)(param_1 + 0x58),0);
          if (cVar3 != '\0') {
            if (*plVar12 == 0) goto LAB_006e7ec8;
            uVar9 = native_System_String__Substring_b0a110(*plVar12,*puVar14,0);
            uVar8 = native_System_String__Concat_afc654(uVar8,_StringLiteral__00__12f3278,uVar9,0);
          }
          *(undefined8 *)(param_1 + 0x50) = uVar8;
          native_sub_4326e0((undefined8 *)(param_1 + 0x50),uVar8);
          if (*plVar13 == 0) goto LAB_006e7ec8;
          native_UILabel__set_text_ae81a8(*plVar13,*(undefined8 *)(param_1 + 0x50),0);
          if (*(char *)(param_1 + 0x30) == '\0') {
            uVar8 = *(undefined8 *)(param_1 + 0x28);
            if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
               (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
              native_sub_4327ec();
            }
            uVar7 = native_UnityEngine_Object__op_Inequality_8d76fc(uVar8,0,0);
            if ((uVar7 & 1) != 0) {
              if (*(long *)(param_1 + 0x28) == 0) goto LAB_006e7ec8;
              native_UIScrollView__UpdatePosition_c33140(*(long *)(param_1 + 0x28),0);
            }
          }
        }
        else {
          uStack_b0 = 0;
          uStack_b8 = (ulong)uVar16;
          uStack_a8 = 0;
          if (*plVar12 == 0) goto LAB_006e7ec8;
          uStack_b0 = native_System_String__Substring_b09fac
                                (*plVar12,uVar16,*(int *)(param_1 + 0x58) - uVar16,0);
          native_sub_4326e0(&uStack_b0,uStack_b0);
          if (*(long *)(param_1 + 0x68) == 0) goto LAB_006e7ec8;
          uStack_90 = uStack_a8;
          uStack_98 = uStack_b0;
          uStack_a0 = uStack_b8;
          native_BetterList_TypewriterEffect_FadeEntry___Add_ba3b7c
                    (*(long *)(param_1 + 0x68),&uStack_a0,
                     _Method_BetterList_TypewriterEffect_FadeEntry__Add___12d8a50);
        }
        uVar17 = *puVar14;
      } while ((int)uVar17 < iVar2);
    }
    lVar10 = *(long *)(param_1 + 0x68);
    if ((int)uVar17 < iVar2) {
      if (lVar10 == 0) goto LAB_006e7ec8;
    }
    else {
      if (lVar10 == 0) goto LAB_006e7ec8;
      if (*(int *)(lVar10 + 0x18) == 0) {
        *(undefined8 *)(param_1 + 0x50) = *(undefined8 *)(param_1 + 0x48);
        native_sub_4326e0(param_1 + 0x50);
        if (*(long *)(param_1 + 0x40) != 0) {
          native_UILabel__set_text_ae81a8
                    (*(long *)(param_1 + 0x40),*(undefined8 *)(param_1 + 0x50),0);
          plVar13 = *(long **)(_TypewriterEffect_TypeInfo_12d63e8 + 0xb8);
          *plVar13 = param_1;
          native_sub_4326e0(plVar13,param_1);
          uVar8 = *(undefined8 *)(param_1 + 0x38);
          if (((*(byte *)(_EventDelegate_TypeInfo_12d4590 + 0x133) >> 2 & 1) != 0) &&
             (*(int *)(_EventDelegate_TypeInfo_12d4590 + 0xe0) == 0)) {
            native_sub_4327ec();
          }
          native_EventDelegate__Execute_deecbc(uVar8,0);
          puVar11 = *(undefined8 **)(_TypewriterEffect_TypeInfo_12d63e8 + 0xb8);
          *puVar11 = 0;
          native_sub_4326e0(puVar11,0);
          *(undefined1 *)(param_1 + 0x61) = 0;
          return;
        }
        goto LAB_006e7ec8;
      }
    }
    if (*(int *)(lVar10 + 0x18) != 0) {
      uVar7 = 0;
      do {
        while( true ) {
          if ((long)*(int *)(lVar10 + 0x18) <= (long)uVar7) {
            if (*(int *)(lVar10 + 0x18) != 0) {
              plVar13 = (long *)native_sub_432808(_System_Text_StringBuilder_TypeInfo_12d5f30);
              native_System_Text_StringBuilder___ctor_a4881c(plVar13,0);
              lVar10 = *(long *)(param_1 + 0x68);
              if (lVar10 != 0) {
                lVar15 = 0;
                uVar7 = 0;
                goto LAB_006e7c1c;
              }
              goto LAB_006e7ec8;
            }
            if (iVar2 <= (int)*puVar14) {
              return;
            }
            if (*plVar12 == 0) goto LAB_006e7ec8;
            cVar3 = *(char *)(param_1 + 0x30);
            uVar8 = native_System_String__Substring_b09fac(*plVar12,0,*puVar14,0);
            if (cVar3 == '\0') {
              *(undefined8 *)(param_1 + 0x50) = uVar8;
            }
            else {
              if (*plVar12 == 0) goto LAB_006e7ec8;
              uVar9 = native_System_String__Substring_b0a110
                                (*plVar12,*(undefined4 *)(param_1 + 0x58),0);
              uVar8 = native_System_String__Concat_afc654(uVar8,_StringLiteral__00__12f3278,uVar9,0)
              ;
              *(undefined8 *)(param_1 + 0x50) = uVar8;
            }
            native_sub_4326e0(param_1 + 0x50,uVar8);
            lVar10 = *plVar13;
            if (lVar10 != 0) {
              uVar8 = *(undefined8 *)(param_1 + 0x50);
              goto LAB_006e7e98;
            }
            goto LAB_006e7ec8;
          }
          lVar10 = *(long *)(lVar10 + 0x10);
          if (lVar10 == 0) goto LAB_006e7ec8;
          if (*(uint *)(lVar10 + 0x18) <= uVar7) goto LAB_006e7ecc;
          lVar10 = lVar10 + uVar7 * 0x18;
          uVar8 = *(undefined8 *)(lVar10 + 0x28);
          uVar19 = *(ulong *)(lVar10 + 0x20);
          fVar20 = *(float *)(lVar10 + 0x30);
          uVar6 = *(undefined4 *)(lVar10 + 0x34);
          fVar18 = (float)native_RealTime__get_deltaTime_73d0b8(0);
          lVar10 = *(long *)(param_1 + 0x68);
          if (lVar10 == 0) goto LAB_006e7ec8;
          fVar20 = fVar20 + fVar18 / *(float *)(param_1 + 0x1c);
          if (fVar20 < 1.0) break;
          native_BetterList_TypewriterEffect_FadeEntry___RemoveAt_ba42cc
                    (lVar10,uVar7 & 0xffffffff,
                     _Method_BetterList_TypewriterEffect_FadeEntry__RemoveAt___12d8a60);
          lVar10 = *(long *)(param_1 + 0x68);
          if (lVar10 == 0) goto LAB_006e7ec8;
        }
        lVar10 = *(long *)(lVar10 + 0x10);
        uStack_a0 = uVar19;
        uStack_98 = uVar8;
        if (lVar10 == 0) break;
        if (*(uint *)(lVar10 + 0x18) <= uVar7) goto LAB_006e7ecc;
        lVar10 = lVar10 + uVar7 * 0x18;
        *(float *)(lVar10 + 0x30) = fVar20;
        *(undefined4 *)(lVar10 + 0x34) = uVar6;
        *(undefined8 *)(lVar10 + 0x28) = uVar8;
        *(ulong *)(lVar10 + 0x20) = uVar19;
        native_sub_4326e0(lVar10 + 0x28,0);
        lVar10 = *(long *)(param_1 + 0x68);
        uVar7 = uVar7 + 1;
      } while (lVar10 != 0);
LAB_006e7ec8:
                    /* WARNING: Subroutine does not return */
      native_sub_432810();
    }
  }
  return;
LAB_006e7c1c:
  if ((long)*(int *)(lVar10 + 0x18) <= (long)uVar7) {
    if ((*(char *)(param_1 + 0x30) == '\0') || (iVar2 <= (int)*puVar14)) {
      if (plVar13 == (long *)0x0) goto LAB_006e7ec8;
    }
    else {
      if (plVar13 == (long *)0x0) goto LAB_006e7ec8;
      native_System_Text_StringBuilder__Append_a49d68(plVar13,_StringLiteral__00__12f3278,0);
      if (*plVar12 == 0) goto LAB_006e7ec8;
      uVar8 = native_System_String__Substring_b0a110(*plVar12,*puVar14,0);
      native_System_Text_StringBuilder__Append_a49d68(plVar13,uVar8,0);
    }
    uVar8 = (**(code **)(*plVar13 + 0x168))(plVar13,*(undefined8 *)(*plVar13 + 0x170));
    puVar11 = (undefined8 *)(param_1 + 0x50);
    *puVar11 = uVar8;
    native_sub_4326e0(puVar11,uVar8);
    lVar10 = *(long *)(param_1 + 0x40);
    if (lVar10 != 0) {
      uVar8 = *puVar11;
LAB_006e7e98:
      native_UILabel__set_text_ae81a8(lVar10,uVar8,0);
      return;
    }
    goto LAB_006e7ec8;
  }
  lVar10 = *(long *)(lVar10 + 0x10);
  if (lVar10 == 0) goto LAB_006e7ec8;
  if (*(uint *)(lVar10 + 0x18) <= uVar7) {
LAB_006e7ecc:
    uVar8 = native_sub_43283c();
                    /* WARNING: Subroutine does not return */
    native_sub_4327dc(uVar8,0);
  }
  lVar10 = lVar10 + lVar15;
  uVar8 = *(undefined8 *)(lVar10 + 0x28);
  uVar6 = *(undefined4 *)(lVar10 + 0x30);
  if (lVar15 == 0) {
    if ((*plVar12 == 0) ||
       (uVar9 = native_System_String__Substring_b09fac(*plVar12,0,*(undefined4 *)(lVar10 + 0x20),0),
       plVar13 == (long *)0x0)) goto LAB_006e7ec8;
    native_System_Text_StringBuilder__Append_a49d68(plVar13,uVar9,0);
  }
  else if (plVar13 == (long *)0x0) goto LAB_006e7ec8;
  native_System_Text_StringBuilder__Append_a4a9d8(plVar13,0x5b,0);
  if (((*(byte *)(_NGUIText_TypeInfo_12d53c0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_NGUIText_TypeInfo_12d53c0 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  uVar9 = native_NGUIText__EncodeAlpha_80b8f0(uVar6,0);
  native_System_Text_StringBuilder__Append_a49d68(plVar13,uVar9,0);
  native_System_Text_StringBuilder__Append_a4a9d8(plVar13,0x5d,0);
  native_System_Text_StringBuilder__Append_a49d68(plVar13,uVar8,0);
  lVar10 = *(long *)(param_1 + 0x68);
  uVar7 = uVar7 + 1;
  lVar15 = lVar15 + 0x18;
  if (lVar10 == 0) goto LAB_006e7ec8;
  goto LAB_006e7c1c;
}



/* TypewriterEffect$$.ctor @ 0x6e80d4
 * void TypewriterEffect___ctor (TypewriterEffect_o* __this, const MethodInfo* method); */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TypewriterEffect$$.ctor
   void TypewriterEffect___ctor (TypewriterEffect_o* __this, const MethodInfo* method); */

undefined1  [16] native_TypewriterEffect___ctor_6e80d4(ulong param_1)

{
  undefined8 uVar1;
  undefined1 auVar2 [16];
  
  if ((bRam000000000133f3bf & 1) == 0) {
    native_sub_43273c(&Method_BetterList_TypewriterEffect_FadeEntry___ctor___12d8a48);
    native_sub_43273c(&BetterList_TypewriterEffect_FadeEntry__TypeInfo_12d2160);
    native_sub_43273c(&Method_System_Collections_Generic_List_EventDelegate___ctor___12dc738);
    native_sub_43273c(&System_Collections_Generic_List_EventDelegate__TypeInfo_12d2a08);
    bRam000000000133f3bf = 1;
  }
  *(undefined4 *)(param_1 + 0x18) = 0x14;
  uVar1 = native_sub_432808(_System_Collections_Generic_List_EventDelegate__TypeInfo_12d2a08);
  native_System_Collections_Generic_List_XmlEventCache_XmlEvent______ctor_d3ff44
            (uVar1,_Method_System_Collections_Generic_List_EventDelegate___ctor___12dc738);
  *(undefined8 *)(param_1 + 0x38) = uVar1;
  native_sub_4326e0(param_1 + 0x38,uVar1);
  *(undefined1 *)(param_1 + 0x60) = 1;
  uVar1 = native_sub_432808(_BetterList_TypewriterEffect_FadeEntry__TypeInfo_12d2160);
  native_BetterList_TypewriterEffect_FadeEntry____ctor_ba46f4
            (uVar1,_Method_BetterList_TypewriterEffect_FadeEntry___ctor___12d8a48);
  *(undefined8 *)(param_1 + 0x68) = uVar1;
  native_sub_4326e0(param_1 + 0x68,uVar1);
  if ((bRam0000000001340ae0 & 1) == 0) {
    native_sub_43273c(&UnityEngine_Object_TypeInfo_12d54e0,0);
    bRam0000000001340ae0 = 1;
  }
  if (((*(byte *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0x133) >> 2 & 1) != 0) &&
     (*(int *)(_UnityEngine_Object_TypeInfo_12d54e0 + 0xe0) == 0)) {
    native_sub_4327ec();
  }
  auVar2._8_8_ = 0;
  auVar2._0_8_ = param_1;
  return auVar2;
}


